// SDL2 + RT64 backend: window, audio output, keyboard/gamepad input, message boxes.
//
// Default controls (N64 pad):
//   Keyboard: arrows = D-pad, WASD = analog stick, X = A, C = B, Z = Z,
//             Enter = START, Q/E = L/R, I/J/K/L = C-up/left/down/right,
//             F11 or Alt+Enter = fullscreen, Esc = quit
//   Gamepad:  D-pad = D-pad, left stick = stick, A = A, X/B = B, LT/RT = Z,
//             LB/RB = L/R, right stick = C buttons, Start/Back = START
#include <array>
#include <atomic>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <filesystem>
#include <mutex>
#include <stdexcept>
#include <algorithm>
#include <string>
#include <vector>

#define SDL_MAIN_HANDLED
#include "SDL.h"
#include "SDL_syswm.h"
#ifdef _WIN32
#include <Windows.h>
#include <timeapi.h>
#endif
#undef None
#undef Status
#undef LockMask
#undef ControlMask
#undef Success
#undef Always

#include "tnt_game.hpp"
#include "sdl_audio.hpp"
#include "leaderboard.hpp"
#include "settings.hpp"
#include "icon_rgba.h"

extern std::atomic<uint64_t> tnt_dl_count, tnt_screen_count; // rt64_render_context.cpp
extern std::atomic<bool> tnt_overlay_enabled;
extern std::atomic<bool> tnt_timer_enabled;
extern std::atomic<float> tnt_game_fps, tnt_vi_rate;
namespace tnt { std::unique_ptr<ultramodern::renderer::RendererContext> create_rt64_context(uint8_t*, ultramodern::renderer::WindowHandle, bool); }

namespace {
    // ---- N64 button bits ----
    constexpr uint16_t N64_A = 0x8000, N64_B = 0x4000, N64_Z = 0x2000, N64_START = 0x1000,
        N64_DU = 0x0800, N64_DD = 0x0400, N64_DL = 0x0200, N64_DR = 0x0100,
        N64_L = 0x0020, N64_R = 0x0010, N64_CU = 0x0008, N64_CD = 0x0004, N64_CL = 0x0002, N64_CR = 0x0001;

    SDL_Window* window = nullptr;
    bool autopress = false;
    bool fullscreen = false;

    // ---- Input ----
    // Sampled on the main thread in update_gfx, read by the game thread in get_input.
    struct PadState { uint16_t buttons = 0; float x = 0, y = 0; bool connected = false; };
    std::mutex input_mutex;
    std::array<PadState, 4> pads{};
    std::vector<SDL_GameController*> controllers;

    // ---- Keyboard mapping (settings.ini [keyboard]) ----
    enum Stick { StickNone, StickUp, StickDown, StickLeft, StickRight };
    struct KeyBinding { SDL_Scancode scancode; uint16_t bit; Stick stick; };
    std::vector<KeyBinding> keymap;
    bool escape_quits = true;

    SDL_Scancode key_from_name(std::string name) {
        std::string l = name;
        for (auto& c : l) c = (char)std::tolower((unsigned char)c);
        static const std::pair<const char*, const char*> aliases[] = {
            { "enter", "Return" }, { "esc", "Escape" }, { "shift", "Left Shift" }, { "lshift", "Left Shift" },
            { "rshift", "Right Shift" }, { "ctrl", "Left Ctrl" }, { "control", "Left Ctrl" }, { "lctrl", "Left Ctrl" },
            { "rctrl", "Right Ctrl" }, { "alt", "Left Alt" }, { "lalt", "Left Alt" }, { "ralt", "Right Alt" },
            { "semicolon", ";" }, { "comma", "," }, { "period", "." }, { "dot", "." }, { "slash", "/" },
            { "backslash", "\\" }, { "minus", "-" }, { "equals", "=" }, { "hash", "#" }, { "quote", "'" },
            { "leftbracket", "[" }, { "rightbracket", "]" }, { "grave", "`" }, { "spacebar", "Space" },
        };
        for (auto& [from, to] : aliases) if (l == from) return SDL_GetScancodeFromName(to);
        return SDL_GetScancodeFromName(name.c_str());
    }

    void build_keymap() {
        const tnt::Settings& st = tnt::settings();
        tnt::Settings keys;                    // classic: the built-in defaults
        if (st.keyboard_layout == "custom") keys = st;
        else if (st.keyboard_layout == "modern") {
            keys.key_a = "X"; keys.key_b = "Z"; keys.key_hold = "C, Shift"; keys.key_start = "Enter, P";
            keys.key_dpad_up = "Up, Space"; keys.key_dpad_down = "Down"; keys.key_dpad_left = "Left"; keys.key_dpad_right = "Right";
            keys.key_z = "V"; keys.key_r = "E";
            keys.key_stick_up = keys.key_stick_down = keys.key_stick_left = keys.key_stick_right = "";
        }
        escape_quits = st.escape_quits;
        struct Src { const std::string& list; uint16_t bit; Stick stick; const char* name; };
        const Src srcs[] = {
            { keys.key_a, N64_A, StickNone, "a" }, { keys.key_b, N64_B, StickNone, "b" },
            { keys.key_hold, N64_L, StickNone, "hold" }, { keys.key_start, N64_START, StickNone, "start" },
            { keys.key_dpad_up, N64_DU, StickNone, "dpad_up" }, { keys.key_dpad_down, N64_DD, StickNone, "dpad_down" },
            { keys.key_dpad_left, N64_DL, StickNone, "dpad_left" }, { keys.key_dpad_right, N64_DR, StickNone, "dpad_right" },
            { keys.key_z, N64_Z, StickNone, "z" }, { keys.key_r, N64_R, StickNone, "r" },
            { keys.key_c_up, N64_CU, StickNone, "c_up" }, { keys.key_c_down, N64_CD, StickNone, "c_down" },
            { keys.key_c_left, N64_CL, StickNone, "c_left" }, { keys.key_c_right, N64_CR, StickNone, "c_right" },
            { keys.key_stick_up, 0, StickUp, "stick_up" }, { keys.key_stick_down, 0, StickDown, "stick_down" },
            { keys.key_stick_left, 0, StickLeft, "stick_left" }, { keys.key_stick_right, 0, StickRight, "stick_right" },
        };
        keymap.clear();
        std::string summary;
        for (const Src& src : srcs) {
            std::string names;
            size_t pos = 0;
            while (pos <= src.list.size()) {
                size_t comma = src.list.find(',', pos);
                if (comma == std::string::npos) comma = src.list.size();
                std::string name = src.list.substr(pos, comma - pos);
                pos = comma + 1;
                size_t a = name.find_first_not_of(" \t"), b = name.find_last_not_of(" \t");
                if (a == std::string::npos) continue;
                name = name.substr(a, b - a + 1);
                SDL_Scancode sc = key_from_name(name);
                if (sc == SDL_SCANCODE_UNKNOWN) { printf("[input] [keyboard] %s: unknown key '%s', ignored\n", src.name, name.c_str()); continue; }
                if (sc == SDL_SCANCODE_F3 || sc == SDL_SCANCODE_F4 || sc == SDL_SCANCODE_F11) {
                    printf("[input] [keyboard] %s: %s is reserved for the port's shortcuts, ignored\n", src.name, name.c_str()); continue;
                }
                if (sc == SDL_SCANCODE_ESCAPE && escape_quits) {
                    printf("[input] [keyboard] %s: Escape quits the game; set escape_quits = false to bind it\n", src.name); continue;
                }
                keymap.push_back({ sc, src.bit, src.stick });
                names += (names.empty() ? "" : "/") + std::string(SDL_GetScancodeName(sc));
            }
            if (!names.empty()) summary += std::string(summary.empty() ? "" : ", ") + src.name + "=" + names;
        }
        printf("[input] keyboard layout %s: %s\n", st.keyboard_layout.c_str(), summary.c_str());
    }

    float axis(SDL_GameController* c, SDL_GameControllerAxis a) {
        float v = SDL_GameControllerGetAxis(c, a) / 32767.0f;
        if (std::fabs(v) < 0.15f) return 0.0f; // deadzone
        return std::clamp(v, -1.0f, 1.0f);
    }

    void sample_inputs() {
        std::array<PadState, 4> next{};
        const Uint8* k = SDL_GetKeyboardState(nullptr);
        PadState& p0 = next[0];
        p0.connected = true; // keyboard always drives controller 1
        for (const KeyBinding& kb : keymap) {
            if (!k[kb.scancode]) continue;
            p0.buttons |= kb.bit;
            switch (kb.stick) {
                case StickUp: p0.y = 1.0f; break;
                case StickDown: p0.y = -1.0f; break;
                case StickLeft: p0.x = -1.0f; break;
                case StickRight: p0.x = 1.0f; break;
                default: break;
            }
        }
        {
            // Testing aid (TNT_INPUT_SCRIPT=file): lines of "start_s end_s buttons_hex" for controller 1.
            struct Entry { double t0, t1; uint16_t b; };
            static std::vector<Entry> script = [] {
                std::vector<Entry> v;
                if (const char* p = std::getenv("TNT_INPUT_SCRIPT"))
                    if (FILE* f = fopen(p, "r")) {
                        char line[256];
                        while (fgets(line, sizeof(line), f)) { Entry e{}; unsigned b = 0; if (sscanf(line, "%lf %lf %x", &e.t0, &e.t1, &b) == 3) { e.b = (uint16_t)b; v.push_back(e); } }
                        fclose(f);
                    }
                return v;
            }();
            double t = SDL_GetTicks64() / 1000.0;
            for (auto& e : script) if (t >= e.t0 && t < e.t1) p0.buttons |= e.b;
        }
        if (autopress) {
            // Testing aid (TNT_AUTOPRESS=1): tap START, then A, every 2 seconds.
            double t = SDL_GetTicks64() / 1000.0;
            double phase = std::fmod(t, 2.0);
            if (phase < 0.2) p0.buttons |= N64_START;
            else if (phase >= 1.0 && phase < 1.2) p0.buttons |= N64_A;
        }

        for (size_t i = 0; i < controllers.size() && i < 4; i++) {
            SDL_GameController* c = controllers[i];
            PadState& p = next[i];
            p.connected = true;
            auto btn = [&](SDL_GameControllerButton b, uint16_t bit) { if (SDL_GameControllerGetButton(c, b)) p.buttons |= bit; };
            btn(SDL_CONTROLLER_BUTTON_A, N64_A); btn(SDL_CONTROLLER_BUTTON_X, N64_B); btn(SDL_CONTROLLER_BUTTON_B, N64_B);
            btn(SDL_CONTROLLER_BUTTON_START, N64_START); btn(SDL_CONTROLLER_BUTTON_BACK, N64_START);
            btn(SDL_CONTROLLER_BUTTON_LEFTSHOULDER, N64_L); btn(SDL_CONTROLLER_BUTTON_RIGHTSHOULDER, N64_R);
            btn(SDL_CONTROLLER_BUTTON_DPAD_UP, N64_DU); btn(SDL_CONTROLLER_BUTTON_DPAD_DOWN, N64_DD);
            btn(SDL_CONTROLLER_BUTTON_DPAD_LEFT, N64_DL); btn(SDL_CONTROLLER_BUTTON_DPAD_RIGHT, N64_DR);
            if (axis(c, SDL_CONTROLLER_AXIS_TRIGGERLEFT) > 0.3f || axis(c, SDL_CONTROLLER_AXIS_TRIGGERRIGHT) > 0.3f) p.buttons |= N64_Z;
            float rx = axis(c, SDL_CONTROLLER_AXIS_RIGHTX), ry = axis(c, SDL_CONTROLLER_AXIS_RIGHTY);
            if (ry < -0.5f) p.buttons |= N64_CU;
            if (ry > 0.5f) p.buttons |= N64_CD;
            if (rx < -0.5f) p.buttons |= N64_CL;
            if (rx > 0.5f) p.buttons |= N64_CR;
            float lx = axis(c, SDL_CONTROLLER_AXIS_LEFTX), ly = -axis(c, SDL_CONTROLLER_AXIS_LEFTY);
            if (std::fabs(lx) > std::fabs(p.x)) p.x = lx;
            if (std::fabs(ly) > std::fabs(p.y)) p.y = ly;
        }
        std::lock_guard lock{ input_mutex };
        pads = next;
    }

    void poll_input() {}
    bool get_input(int n, uint16_t* buttons, float* x, float* y) {
        if (n < 0 || n >= 4) return false;
        std::lock_guard lock{ input_mutex };
        if (!pads[n].connected) return false;
        *buttons = pads[n].buttons;
        *x = std::clamp(pads[n].x, -1.0f, 1.0f);
        *y = std::clamp(pads[n].y, -1.0f, 1.0f);
        return true;
    }
    void set_rumble(int n, bool on) {
        if (n >= 0 && (size_t)n < controllers.size()) {
            SDL_GameControllerRumble(controllers[n], on ? 0xC000 : 0, on ? 0xC000 : 0, on ? 1000 : 0);
        }
    }
    ultramodern::input::connected_device_info_t get_connected_device_info(int n) {
        // Controller 1 is always present (keyboard); others when a gamepad is plugged in.
        bool present = (n == 0) || ((size_t)n < controllers.size());
        if (!present) return { ultramodern::input::Device::None, ultramodern::input::Pak::None };
        // With a pak reported, The New Tetris probes it as a Controller Pak at boot and shows
        // a "corrupted Controller Pak" prompt. Report no pak unless rumble is asked for.
        static const bool rumble = tnt::settings().rumble || std::getenv("TNT_RUMBLE") != nullptr;
        return { ultramodern::input::Device::Controller, rumble ? ultramodern::input::Pak::RumblePak : ultramodern::input::Pak::None };
    }

    void refresh_controllers() {
        for (auto* c : controllers) SDL_GameControllerClose(c);
        controllers.clear();
        for (int i = 0; i < SDL_NumJoysticks(); i++) {
            if (SDL_IsGameController(i)) {
                if (SDL_GameController* c = SDL_GameControllerOpen(i)) controllers.push_back(c);
            }
        }
        printf("[sdl] %u gamepad(s) connected\n", (unsigned)controllers.size());
    }

    // ---- Window ----
    void* create_gfx() {
        SDL_SetMainReady();
        SDL_SetHint(SDL_HINT_WINDOWS_DPI_AWARENESS, "permonitorv2");
        // Use the exe's icon resource (id 1, src/icon.rc.in) for the window, at every size.
        SDL_SetHint(SDL_HINT_WINDOWS_INTRESOURCE_ICON, "1");
        SDL_SetHint(SDL_HINT_WINDOWS_INTRESOURCE_ICON_SMALL, "1");
        SDL_SetHint(SDL_HINT_GAMECONTROLLER_USE_BUTTON_LABELS, "0");
        SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "1");
        if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER) != 0) {
            fprintf(stderr, "Failed to initialise SDL2: %s\n", SDL_GetError());
            std::exit(EXIT_FAILURE);
        }
        refresh_controllers();
        return nullptr;
    }

    ultramodern::renderer::WindowHandle create_window(void*) {
        uint32_t flags = SDL_WINDOW_RESIZABLE;
#if defined(__APPLE__)
        flags |= SDL_WINDOW_METAL;
#elif defined(RT64_SDL_WINDOW_VULKAN)
        flags |= SDL_WINDOW_VULKAN;
#endif
        const tnt::Settings& st = tnt::settings();
        int wx = st.window_x < 0 ? SDL_WINDOWPOS_CENTERED : st.window_x;
        int wy = st.window_y < 0 ? SDL_WINDOWPOS_CENTERED : st.window_y;
        int ww = st.window_width, wh = st.window_height;
        if (const char* g = std::getenv("TNT_WINDOW")) {
            // TNT_WINDOW=x,y,width,height  (e.g. 1020,40,420,315)
            int a, b, c, d;
            if (std::sscanf(g, "%d,%d,%d,%d", &a, &b, &c, &d) == 4) { wx = a; wy = b; ww = c; wh = d; }
        }
        window = SDL_CreateWindow("The New Tetris: Recompiled", wx, wy, ww, wh, flags);
        if (window == nullptr) {
            fprintf(stderr, "Failed to create window: %s\n", SDL_GetError());
            std::exit(EXIT_FAILURE);
        }
#if !defined(_WIN32)
        if (SDL_Surface* icon = SDL_CreateRGBSurfaceWithFormatFrom((void*)tnt_icon_rgba, tnt_icon_size, tnt_icon_size, 32,
                tnt_icon_size * 4, SDL_PIXELFORMAT_ABGR8888)) { // bytes in memory: R, G, B, A
            SDL_SetWindowIcon(window, icon);
            SDL_FreeSurface(icon);
        }
#endif
        SDL_SysWMinfo wm;
        SDL_VERSION(&wm.version);
        SDL_GetWindowWMInfo(window, &wm);
#if defined(_WIN32)
        return ultramodern::renderer::WindowHandle{ wm.info.win.window, GetCurrentThreadId() };
#elif defined(__linux__) || defined(__ANDROID__)
        return ultramodern::renderer::WindowHandle{ window };
#elif defined(__APPLE__)
        SDL_MetalView view = SDL_Metal_CreateView(window);
        return ultramodern::renderer::WindowHandle{ wm.info.cocoa.window, SDL_Metal_GetLayer(view) };
#endif
    }

    void toggle_fullscreen() {
        fullscreen = !fullscreen;
        auto cfg = ultramodern::renderer::get_graphics_config();
        cfg.wm_option = fullscreen ? ultramodern::renderer::WindowMode::Fullscreen : ultramodern::renderer::WindowMode::Windowed;
        ultramodern::renderer::set_graphics_config(cfg);
#if defined(__linux__)
        SDL_SetWindowFullscreen(window, fullscreen ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0);
#endif
    }

    void report_status() {
        static uint32_t next_ms = 2000;
        uint32_t now = SDL_GetTicks();
        if (now < next_ms) return;
        next_ms = now + (now < 30000 ? 1000 : 10000);
        auto* vi = ultramodern::renderer::get_vi_regs();
        printf("[status] t=%5.1fs display_lists=%llu screen_updates=%llu VI status=%08X origin=%08X width=%u hstart=%08X vstart=%08X xscale=%08X yscale=%08X\n",
            now / 1000.0, (unsigned long long)tnt_dl_count.load(), (unsigned long long)tnt_screen_count.load(),
            vi->VI_STATUS_REG, vi->VI_ORIGIN_REG, vi->VI_WIDTH_REG, vi->VI_H_START_REG, vi->VI_V_START_REG, vi->VI_X_SCALE_REG, vi->VI_Y_SCALE_REG);
        auto a = tnt::audio::stats();
        printf("[audio]  %s: game %u Hz -> device %u Hz, frames_in=%llu buffers=%llu dropped=%llu underruns=%llu queued=%.1f ms\n",
            a.impl, a.game_rate, a.device_rate, (unsigned long long)a.frames_in, (unsigned long long)a.buffers_in,
            (unsigned long long)a.buffers_dropped, (unsigned long long)a.underruns, a.queued_ms);
    }

    // Rebuilds leaderboard.html and opens it in the default browser.
    void open_leaderboard() {
        std::filesystem::path path = std::filesystem::absolute(tnt::leaderboard::write_html());
        std::string p = path.generic_string(), url = "file:///";
        if (!p.empty() && p[0] == '/') p.erase(0, 1);
        for (unsigned char c : p) {
            if (isalnum(c) || strchr("/-_.~:", c)) url += (char)c;
            else { char hex[4]; snprintf(hex, sizeof(hex), "%%%02X", c); url += hex; }
        }
        printf("[leaderboard] opening %s\n", url.c_str());
        if (SDL_OpenURL(url.c_str()) != 0) printf("[leaderboard] couldn't open a browser: %s\n", SDL_GetError());
    }

    void update_title() {
        static uint32_t next_ms = 0;
        uint32_t now = SDL_GetTicks();
        if (now < next_ms || window == nullptr) return;
        next_ms = now + 500;
        char title[400];
        snprintf(title, sizeof(title), "The New Tetris: Recompiled  |  %.1f fps  |  %.1f VI/s  |  frame %llu",
            tnt_game_fps.load(), tnt_vi_rate.load(), (unsigned long long)tnt_dl_count.load());
        // For 20 s after a game ends, show how it placed on the leaderboard.
        uint32_t age_ms = 0;
        std::string lb = tnt::leaderboard::last_message(&age_ms);
        if (!lb.empty() && age_ms < 20000) {
            size_t len = strlen(title);
            snprintf(title + len, sizeof(title) - len, "  |  %s  (F4: leaderboard)", lb.c_str());
        }
        SDL_SetWindowTitle(window, title);
    }

    void update_gfx(void*) {
        report_status();
        update_title();
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            switch (e.type) {
                case SDL_QUIT:
                    ultramodern::quit();
                    break;
                case SDL_CONTROLLERBUTTONDOWN:
                    tnt::leaderboard::on_button(); // hides the after-game high-score panel
                    break;
                case SDL_KEYDOWN:
                    if (!e.key.repeat && (e.key.keysym.scancode < SDL_SCANCODE_F1 || e.key.keysym.scancode > SDL_SCANCODE_F12)) tnt::leaderboard::on_button();
                    if (e.key.keysym.scancode == SDL_SCANCODE_ESCAPE && escape_quits) ultramodern::quit();
                    if (e.key.keysym.scancode == SDL_SCANCODE_F11 && !e.key.repeat) toggle_fullscreen();
                    if (e.key.keysym.scancode == SDL_SCANCODE_F3 && !e.key.repeat) tnt_overlay_enabled = !tnt_overlay_enabled;
                    if (e.key.keysym.scancode == SDL_SCANCODE_F4 && !e.key.repeat) open_leaderboard();
                    if (e.key.keysym.scancode == SDL_SCANCODE_RETURN && (e.key.keysym.mod & KMOD_ALT) && !e.key.repeat) toggle_fullscreen();
                    break;
                case SDL_CONTROLLERDEVICEADDED:
                case SDL_CONTROLLERDEVICEREMOVED:
                    refresh_controllers();
                    break;
            }
        }
        sample_inputs();
    }

    // ---- Audio ---- (see sdl_audio.cpp)
    void queue_samples(int16_t* data, size_t count) { tnt::audio::queue_samples(data, count); }
    size_t get_frames_remaining() { return tnt::audio::frames_remaining(); }
    void set_frequency(uint32_t freq) { tnt::audio::set_frequency(freq); }

    void message_box(const char* msg) {
        fprintf(stderr, "%s\n", msg);
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "The New Tetris: Recompiled", msg, window);
    }

    std::unique_ptr<ultramodern::renderer::RendererContext> create_render_context(uint8_t* rdram, ultramodern::renderer::WindowHandle wh, bool dev) {
        return tnt::create_rt64_context(rdram, wh, dev);
    }

    // Graphics options: settings.ini first, then command-line flags on top.
    void apply_graphics_settings(int argc, char** argv) {
        using namespace ultramodern::renderer;
        const tnt::Settings& st = tnt::settings();
        GraphicsConfig cfg{};
        cfg.developer_mode = st.developer_mode;
        cfg.res_option = st.resolution == "native" ? Resolution::Original : st.resolution == "2x" ? Resolution::Original2x : Resolution::Auto;
        fullscreen = st.fullscreen;
        cfg.wm_option = st.fullscreen ? WindowMode::Fullscreen : WindowMode::Windowed;
        cfg.hr_option = HUDRatioMode::Original;
        cfg.api_option = st.renderer == "d3d12" ? GraphicsApi::D3D12 : st.renderer == "vulkan" ? GraphicsApi::Vulkan : GraphicsApi::Auto;
        cfg.ar_option = st.aspect_ratio == "widescreen" ? AspectRatio::Expand : AspectRatio::Original;
        cfg.msaa_option = st.antialiasing == "2x" ? Antialiasing::MSAA2X : st.antialiasing == "4x" ? Antialiasing::MSAA4X
                        : st.antialiasing == "8x" ? Antialiasing::MSAA8X : Antialiasing::None;
        cfg.rr_option = st.refresh_rate == "display" ? RefreshRate::Display : st.refresh_rate == "manual" ? RefreshRate::Manual : RefreshRate::Original;
        cfg.rr_manual_value = st.refresh_rate_value;
        cfg.hpfb_option = HighPrecisionFramebuffer::Auto;
        cfg.ds_option = 1;
        for (int i = 1; i < argc; i++) {
            std::string a = argv[i];
            if (a == "--fullscreen") { cfg.wm_option = WindowMode::Fullscreen; fullscreen = true; }
            else if (a == "--windowed") { cfg.wm_option = WindowMode::Windowed; fullscreen = false; }
            else if (a == "--vulkan") cfg.api_option = GraphicsApi::Vulkan;
            else if (a == "--d3d12") cfg.api_option = GraphicsApi::D3D12;
            else if (a == "--msaa2") cfg.msaa_option = Antialiasing::MSAA2X;
            else if (a == "--msaa4") cfg.msaa_option = Antialiasing::MSAA4X;
            else if (a == "--msaa8") cfg.msaa_option = Antialiasing::MSAA8X;
            else if (a == "--native-res") cfg.res_option = Resolution::Original;
            else if (a == "--widescreen") cfg.ar_option = AspectRatio::Expand;
            else if (a == "--display-refresh") cfg.rr_option = RefreshRate::Display;
            else if (a == "--developer") cfg.developer_mode = true;
        }
        set_graphics_config(cfg);
    }
}

tnt::Backend tnt::make_backend(int argc, char** argv) {
#ifdef _WIN32
    timeBeginPeriod(1); // 1 ms timer resolution for VI pacing
    SDL_setenv("SDL_AUDIODRIVER", "wasapi", true);
#endif
    const tnt::Settings& st = tnt::settings();
    apply_graphics_settings(argc, argv);
    build_keymap();
    autopress = std::getenv("TNT_AUTOPRESS") != nullptr;
    tnt_overlay_enabled = st.show_fps;
    tnt_timer_enabled = st.show_timer;
    if (const char* o = std::getenv("TNT_OVERLAY")) tnt_overlay_enabled = (o[0] != '0');
    tnt::leaderboard::configure_panel(st.after_game_panel, st.panel_seconds);
    tnt::audio::set_latency(st.audio_latency);
    tnt::audio::open(); // TNT_AUDIO_HEADROOM, if set, overrides audio_latency
    tnt::audio::set_volume(st.volume);

    tnt::Backend b{};
    b.renderer = { .create_render_context = create_render_context };
    b.gfx = { .create_gfx = create_gfx, .create_window = create_window, .update_gfx = update_gfx };
    b.audio = { .queue_samples = queue_samples, .get_frames_remaining = get_frames_remaining, .set_frequency = set_frequency };
    b.input = { .poll_input = poll_input, .get_input = get_input, .set_rumble = set_rumble, .get_connected_device_info = get_connected_device_info };
    b.events = { .vi_callback = nullptr, .gfx_init_callback = nullptr };
    b.error_handling = { .message_box = message_box };
    return b;
}
