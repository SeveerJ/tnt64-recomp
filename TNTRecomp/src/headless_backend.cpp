// Headless backend: no window, no GPU, no sound card. Boots the recompiled game and
// logs what it does (display lists sent, frames, audio produced, controller polls)
// so boot problems can be debugged on any machine, including CI.
//
// Environment variables:
//   TNT_HEADLESS_SECONDS  run time before quitting (default 20)
//   TNT_AUTOPRESS         if set, taps START (and A) on controller 1 every 2 s
//   TNT_WAV               write the game's audio output to this .wav file
//   (GLES builds) TNT_GLES_DUMP=prefix  write the presented frame as prefix_NNNNN.ppm
//                 TNT_GLES_DUMP_EVERY=n every n presented frames (default 60)
#include <atomic>
#include <vector>
#include <string>
#include <mutex>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include "tnt_game.hpp"
#include "recomp.h"
extern "C" void tnt_on_game_result(uint8_t* rdram, recomp_context* ctx);
#if defined(TNT_HAVE_SDL_AUDIO)
#include "SDL.h"
#include "sdl_audio.hpp"
static bool use_sdl_audio = false; // TNT_SDL_AUDIO=1: send audio through the windowed build's SDL path
#endif
#if defined(__linux__)
#include <csignal>
#include <execinfo.h>
#include <unistd.h>
static void crash_handler(int sig) {
    void* frames[64];
    int n = backtrace(frames, 64);
    const char msg[] = "\n[headless] fatal signal, backtrace:\n";
    write(2, msg, sizeof(msg) - 1);
    backtrace_symbols_fd(frames, n, 2);
    _exit(128 + sig);
}
#endif

#if defined(TNT_HEADLESS_GLES)
#include "SDL.h"
#include "gles/gles_includes.h"
#include "gles/n64_renderer.hpp"
std::atomic<bool> tnt_overlay_enabled{ true };
std::atomic<float> tnt_game_fps{ 0.0f };
bool tnt_build_overlay(uint8_t* rdram, uint32_t game_dl, uint64_t frame);
#endif

namespace {
    std::atomic<uint64_t> dl_count{0}, screen_updates{0}, dummy_workloads{0};
    std::atomic<uint64_t> audio_samples{0}, audio_nonzero{0}, input_polls{0};
    std::atomic<uint32_t> last_ucode{0}, last_fb{0};
    std::chrono::steady_clock::time_point start_time;
    FILE* wav_file = nullptr;
    std::atomic<uint32_t> wav_rate{0};
    uint64_t wav_frames = 0;
    std::mutex wav_mutex;

    void wav_header(FILE* f, uint32_t rate, uint64_t frames) {
        uint32_t data_bytes = (uint32_t)(frames * 4);
        auto w32 = [&](uint32_t v) { fwrite(&v, 4, 1, f); };
        auto w16 = [&](uint16_t v) { fwrite(&v, 2, 1, f); };
        fseek(f, 0, SEEK_SET);
        fwrite("RIFF", 1, 4, f); w32(36 + data_bytes); fwrite("WAVEfmt ", 1, 8, f);
        w32(16); w16(1); w16(2); w32(rate); w32(rate * 4); w16(4); w16(16);
        fwrite("data", 1, 4, f); w32(data_bytes);
    }
    void wav_close() {
        std::lock_guard lock{ wav_mutex };
        if (!wav_file) return;
        wav_header(wav_file, wav_rate ? wav_rate.load() : 32000, wav_frames);
        fclose(wav_file);
        wav_file = nullptr;
        printf("[headless] wrote %llu audio frames at %u Hz\n", (unsigned long long)wav_frames, wav_rate.load());
    }
    double run_seconds = 20.0;
    bool autopress = false;

    // TNT_INPUT_SCRIPT=file: lines of "start_s end_s buttons_hex [stick_x stick_y]" for controller 1.
    struct ScriptEntry { double t0, t1; uint16_t buttons; float x, y; };
    std::vector<ScriptEntry> input_script;
    // TNT_RAMDUMP=prefix, TNT_RAMDUMP_EVERY=seconds: write the first 4 MB of RDRAM (big-endian) periodically.
    std::string ramdump_prefix; double ramdump_every = 0; double next_ramdump = 0; int ramdump_index = 0;
    uint8_t* g_rdram_for_dump = nullptr;
    void ram_dump(double t) {
        if (!g_rdram_for_dump) return;
        char name[512];
        snprintf(name, sizeof(name), "%s%04d.bin", ramdump_prefix.c_str(), ramdump_index++);
        FILE* f = fopen(name, "wb");
        if (!f) return;
        static std::vector<uint8_t> be(0x400000);
        for (uint32_t i = 0; i < 0x400000; i += 4) {
            uint32_t w = *reinterpret_cast<uint32_t*>(g_rdram_for_dump + i);
            be[i] = w >> 24; be[i + 1] = w >> 16; be[i + 2] = w >> 8; be[i + 3] = w;
        }
        fwrite(be.data(), 1, be.size(), f);
        fclose(f);
        printf("[ramdump] %s at t=%.2f dl=%llu\n", name, t, (unsigned long long)dl_count.load());
    }

    // Minimal F3DEX2 display-list walker: follows G_DL branches and segment
    // addresses and tallies commands, so the headless build can check that the game
    // produces well-formed frames without a GPU.
    struct DlStats {
        uint32_t cmds = 0, vtx = 0, tris = 0, texrects = 0, fillrects = 0, settimg = 0, loads = 0,
                 matrices = 0, branches = 0, fullsyncs = 0, colorimages = 0, unknown = 0, max_depth = 0;
        bool ended = false, bad_addr = false;
        uint32_t color_image = 0;
    };
    uint8_t* g_rdram = nullptr;
    std::atomic<bool> dump_next_dl{true};

    DlStats walk_f3dex2(uint32_t start) {
        DlStats st{};
        uint32_t segments[16] = {};
        uint32_t stack[18]; int sp = 0;
        auto phys = [&](uint32_t a) -> uint32_t {
            if ((a >> 24) < 16 && (a >> 24) != 0) return (segments[(a >> 24) & 0xF] + (a & 0xFFFFFF)) & 0x1FFFFFFF;
            return a & 0x1FFFFFFF;
        };
        auto rd = [&](uint32_t p) -> uint32_t { return *reinterpret_cast<uint32_t*>(g_rdram + p); };
        uint32_t pc = phys(start);
        for (int guard = 0; guard < 2000000; guard++) {
            if (pc >= 0x800000 - 8) { st.bad_addr = true; break; }
            uint32_t w0 = rd(pc), w1 = rd(pc + 4);
            pc += 8; st.cmds++;
            uint8_t op = w0 >> 24;
            switch (op) {
                case 0x00: break;                                   // G_NOOP
                case 0x01: st.vtx++; break;                         // G_VTX
                case 0x05: st.tris += 1; break;                     // G_TRI1
                case 0x06: st.tris += 2; break;                     // G_TRI2
                case 0x07: st.tris += 2; break;                     // G_QUAD
                case 0xDA: st.matrices++; break;                    // G_MTX
                case 0xDB: if (((w0 >> 16) & 0xFF) == 0x06) segments[((w0 & 0xFFFF) >> 2) & 0xF] = w1 & 0x1FFFFFFF; break; // G_MOVEWORD segment
                case 0xDE: {                                        // G_DL
                    st.branches++;
                    bool push = ((w0 >> 16) & 0xFF) == 0;
                    if (push) { if (sp >= 18) { st.bad_addr = true; return st; } stack[sp++] = pc; }
                    st.max_depth = std::max<uint32_t>(st.max_depth, (uint32_t)sp);
                    pc = phys(w1);
                    break;
                }
                case 0xDF:                                          // G_ENDDL
                    if (sp == 0) { st.ended = true; return st; }
                    pc = stack[--sp]; break;
                case 0xE4: case 0xE5: st.texrects++; pc += 8; st.cmds++; break; // G_TEXRECT(FLIP) + RDPHALF words
                case 0xF6: st.fillrects++; break;
                case 0xFD: st.settimg++; break;
                case 0xF3: case 0xF4: case 0xF0: st.loads++; break;
                case 0xE9: st.fullsyncs++; break;
                case 0xFF: st.colorimages++; st.color_image = w1; break;
                case 0x02: case 0x03: case 0x04: case 0xD7: case 0xD9: case 0xDC: case 0xDD: case 0xE1: case 0xE2: case 0xE3:
                case 0xE6: case 0xE7: case 0xE8: case 0xEF: case 0xF5: case 0xF7: case 0xF8: case 0xF9: case 0xFA: case 0xFB:
                case 0xFC: case 0xFE: case 0xF2: case 0xEE: case 0xED: case 0xEC: case 0xEB: case 0xEA: case 0xD8: case 0xD6:
                case 0xD5: case 0xD4: case 0xD3: case 0xD1: case 0xD0: case 0xF1: case 0xC0:
                    break;                                          // other known F3DEX2 / RDP commands
                default: st.unknown++; break;
            }
        }
        return st;
    }

    class HeadlessRenderContext final : public ultramodern::renderer::RendererContext {
    public:
        HeadlessRenderContext() { setup_result = ultramodern::renderer::SetupResult::Success; }
        bool valid() override { return true; }
        bool update_config(const ultramodern::renderer::GraphicsConfig&, const ultramodern::renderer::GraphicsConfig&) override { return true; }
        void enable_instant_present() override {}
        void send_dl(const OSTask* task) override {
            uint64_t n = ++dl_count;
            last_ucode = (uint32_t)(uintptr_t)task->t.ucode;
            if (n % 300 == 1 || dump_next_dl.exchange(false)) {
                DlStats st = walk_f3dex2((uint32_t)(uintptr_t)task->t.data_ptr);
                printf("[headless] DL #%llu: %u cmds, %u tris, %u vtx loads, %u texrects, %u fillrects, %u tex loads, %u matrices, depth %u, color image 0x%08X, %s%s%s\n",
                    (unsigned long long)n, st.cmds, st.tris, st.vtx, st.texrects, st.fillrects, st.loads, st.matrices, st.max_depth, st.color_image,
                    st.ended ? "ends with G_ENDDL" : "NO END", st.fullsyncs ? ", has fullsync" : "",
                    st.unknown ? ", UNKNOWN OPCODES" : (st.bad_addr ? ", BAD ADDRESS" : ""));
            }
            if (n <= 3) {
                printf("[headless] display list #%llu: type=%u ucode=0x%08X data_ptr=0x%08X data_size=0x%X\n",
                    (unsigned long long)n, task->t.type, (uint32_t)(uintptr_t)task->t.ucode,
                    (uint32_t)(uintptr_t)task->t.data_ptr, task->t.data_size);
            }
        }
        void send_dummy_workload(uint32_t fb_address) override { ++dummy_workloads; last_fb = fb_address; }
        void update_screen() override {
            ++screen_updates;
            last_fb = ultramodern::renderer::get_vi_regs()->VI_ORIGIN_REG;
        }
        void shutdown() override {}
        uint32_t get_display_framerate() const override { return 60; }
        float get_resolution_scale() const override { return 1.0f; }
    };

#if defined(TNT_HEADLESS_GLES)
    // Draws with the portable GLES2 renderer (the one the PS Vita uses) into an SDL window.
    class GlesRenderContext final : public ultramodern::renderer::RendererContext {
    public:
        GlesRenderContext(uint8_t* rdram) {
            SDL_SetMainReady();
            SDL_InitSubSystem(SDL_INIT_VIDEO);
            SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
            SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
            SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
            SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 16);
            window = SDL_CreateWindow("TNT GLES", 0, 0, 960, 544, SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN);
            if (!window) { fprintf(stderr, "[gles] window: %s\n", SDL_GetError()); setup_result = ultramodern::renderer::SetupResult::GraphicsDeviceNotFound; return; }
            ctx = SDL_GL_CreateContext(window);
            if (!ctx) { fprintf(stderr, "[gles] context: %s\n", SDL_GetError()); setup_result = ultramodern::renderer::SetupResult::GraphicsDeviceNotFound; return; }
            SDL_GL_SetSwapInterval(0);
            printf("[gles] %s / %s\n", glGetString(GL_RENDERER), glGetString(GL_VERSION));
            n64gfx::Config cfg;
            if (const char* sc = std::getenv("TNT_GLES_SCALE")) cfg.scale = std::max(1, atoi(sc));
            if (const char* dd = std::getenv("TNT_DUMP_BACKGROUNDS")) cfg.dump_dir = dd;
            renderer = std::make_unique<n64gfx::Renderer>(rdram, cfg);
            if (const char* d = std::getenv("TNT_GLES_DUMP")) dump_prefix = d;
            if (const char* e = std::getenv("TNT_GLES_DUMP_EVERY")) dump_every = std::max(1, atoi(e));
            setup_result = ultramodern::renderer::SetupResult::Success;
        }
        bool valid() override { return renderer != nullptr; }
        bool update_config(const ultramodern::renderer::GraphicsConfig&, const ultramodern::renderer::GraphicsConfig&) override { return true; }
        void enable_instant_present() override {}
        void send_dl(const OSTask* task) override {
            ++dl_count;
            uint32_t dl = (uint32_t)(uintptr_t)task->t.data_ptr & 0x3FFFFFF;
            {
                static std::vector<std::pair<uint32_t, uint32_t>> seen;
                std::pair<uint32_t, uint32_t> u{ (uint32_t)(uintptr_t)task->t.ucode, (uint32_t)(uintptr_t)task->t.ucode_data };
                if (std::find(seen.begin(), seen.end(), u) == seen.end()) {
                    seen.push_back(u);
                    printf("[gles] new microcode at DL #%llu: ucode 0x%08X data 0x%08X size 0x%X flags %X\n", (unsigned long long)dl_count.load(), u.first, u.second, task->t.ucode_size, task->t.flags);
                }
            }
            renderer->process_dl(dl);
            const auto st = renderer->last_stats();
            {
                static auto last = std::chrono::steady_clock::now();
                static uint64_t last_n = 0;
                double dt = std::chrono::duration<double>(std::chrono::steady_clock::now() - last).count();
                if (dt >= 1.0) { tnt_game_fps = float((dl_count - last_n) / dt); last_n = dl_count; last = std::chrono::steady_clock::now(); }
            }
            if (tnt_build_overlay(g_rdram, dl, dl_count)) renderer->process_dl(0x7F0000);
            if (renderer->end_frame()) show();
            total_ms += st.dl_ms; dls++;
            if (dl_count % 300 == 1)
                printf("[gles] DL #%llu: %u tris %u rects %u draws %u uploads %u shaders %u textures %u fbs %u unknown %u writebacks, %.2f ms\n",
                    (unsigned long long)dl_count.load(), st.triangles, st.rects, st.draw_calls, st.texture_uploads, st.shaders,
                    st.textures_cached, st.framebuffers, st.unknown_commands, st.writebacks, st.dl_ms);
        }
        void send_dummy_workload(uint32_t fb_address) override { ++dummy_workloads; last_fb = fb_address; }
        void update_screen() override {
            ++screen_updates;
            uint32_t origin = ultramodern::renderer::get_vi_regs()->VI_ORIGIN_REG;
            last_fb = origin;
            if (getenv("TNT_GLES_CIMG") && screen_updates % 100 == 0) printf("[vi] origin 0x%06X width %u\n", origin, ultramodern::renderer::get_vi_regs()->VI_WIDTH_REG);
            if (!renderer->present(origin)) return;
            show();
        }
        void show() {
            presented++;
            if (!dump_prefix.empty() && presented % dump_every == 0) dump(presented);
            SDL_GL_SwapWindow(window);
        }
        void dump(uint64_t n) {
            std::vector<uint8_t> px(960 * 544 * 4);
            glReadPixels(0, 0, 960, 544, GL_RGBA, GL_UNSIGNED_BYTE, px.data());
            char name[512];
            snprintf(name, sizeof(name), "%s_%05llu.ppm", dump_prefix.c_str(), (unsigned long long)n);
            if (FILE* f = fopen(name, "wb")) {
                fprintf(f, "P6\n960 544\n255\n");
                for (int y = 543; y >= 0; y--) for (int x = 0; x < 960; x++) fwrite(&px[(y * 960 + x) * 4], 1, 3, f);
                fclose(f);
            }
        }
        void shutdown() override {}
        uint32_t get_display_framerate() const override { return 60; }
        float get_resolution_scale() const override { return 1.0f; }
    private:
        SDL_Window* window = nullptr;
        SDL_GLContext ctx = nullptr;
        std::unique_ptr<n64gfx::Renderer> renderer;
        std::string dump_prefix;
        int dump_every = 60;
        uint64_t presented = 0, dls = 0;
        double total_ms = 0;
    };
#endif

    std::unique_ptr<ultramodern::renderer::RendererContext> create_render_context(uint8_t* rdram, ultramodern::renderer::WindowHandle, bool) {
        g_rdram = rdram; g_rdram_for_dump = rdram;
#if defined(TNT_HEADLESS_GLES)
        if (std::getenv("DISPLAY")) return std::make_unique<GlesRenderContext>(rdram);
#endif
        return std::make_unique<HeadlessRenderContext>();
    }

    void* create_gfx() { return nullptr; }

    ultramodern::renderer::WindowHandle create_window(void*) {
#if defined(_WIN32)
        return ultramodern::renderer::WindowHandle{ reinterpret_cast<HWND>(1), 0 };
#else
        return reinterpret_cast<SDL_Window*>(1); // never dereferenced by the headless renderer
#endif
    }

    double elapsed() {
        return std::chrono::duration<double>(std::chrono::steady_clock::now() - start_time).count();
    }

    void update_gfx(void*) {
        static double next_report = 1.0;
        double t = elapsed();
        if (const char* tr = std::getenv("TNT_TEST_RESULT")) {
            // Testing aid: fake a finished game for a saved name at the given time.
            static bool done = false;
            if (!done && g_rdram && t >= std::atof(tr)) {
                done = true;
                auto b8 = [&](uint32_t a, uint8_t v) { g_rdram[((a & 0x7FFFFF) ^ 3)] = v; };
                auto w32 = [&](uint32_t a, uint32_t v) { *reinterpret_cast<uint32_t*>(g_rdram + (a & 0x7FFFFF)) = v; };
                const char* nm = "ALAN";
                for (int i = 0; i < 8; i++) b8(0x807E0000 + i, i < 4 ? nm[i] : 0);
                for (int i = 0; i < 0x40; i += 4) w32(0x807E0100 + i, 0);
                g_rdram[((0x807E0105 & 0x7FFFFF) ^ 3)] = 1;
                w32(0x807E0108, 95); w32(0x807E0118, 1234); w32(0x807E0128, 12);
                recomp_context ctx{};
                ctx.r4 = (int32_t)0x807E0000; ctx.r5 = (int32_t)0x807E0100; ctx.r6 = 0;
                printf("[test] faking a game result\n");
                tnt_on_game_result(g_rdram, &ctx);
                printf("[test] game result handled\n");
            }
        }
        if (ramdump_every > 0 && t >= next_ramdump) { next_ramdump += ramdump_every; ram_dump(t); }
        if (std::getenv("TNT_INPUT_TRACE") && g_rdram) {
            // Per-frame edge state the game logic uses (func_8004A5F0): struct at *0x8011F210.
            auto w = [&](uint32_t a) { return *reinterpret_cast<uint32_t*>(g_rdram + (a & 0x7FFFFC)); };
            static uint32_t last_press = 0, last_cur = 0xFFFF;
            static double next_ptr = 0;
            if (t >= next_ptr) {
                next_ptr = t + 5;
                uint32_t base = w(0x800E1F18), arr = base ? w(base + 0x2610) : 0, st0 = arr ? w(arr) : 0;
                printf("[ptrs] %.1f cur_player %08X p0+18 %08X p0+1C %08X ring0 %08X ring0+14 %08X\n", t, w(0x8011F210), w(0x8011EF30 + 0x18), w(0x8011EF30 + 0x1C), st0, st0 ? w(st0 + 0x14) : 0);
            }
            uint32_t ps = w(0x8011F210);
            if (ps) {
                uint32_t press = w(ps + 0x24), cur = w(ps + 0x20);
                if (press != last_press || cur != last_cur) { printf("[logic] %.3f cur %04X press %04X\n", t, cur & 0xFFFF, press & 0xFFFF); last_press = press; last_cur = cur; }
            }
            static double next_ring = 0;
            if (t >= next_ring) {
                next_ring = t + 0.25;
                auto w = [&](uint32_t a) { return *reinterpret_cast<uint32_t*>(g_rdram + (a & 0x7FFFFC)); };
                auto h = [&](uint32_t a) { return *reinterpret_cast<uint16_t*>(g_rdram + ((a ^ 2) & 0x7FFFFE)); };
                uint32_t base = w(0x800E1F18), arr = base ? w(base + 0x2610) : 0, ring = arr ? w(arr) : 0;
                if (ring) printf("[ring] %.2f head %u tail %u pushed %u popped %u\n", t, h(ring), h(ring + 2), w(ring + 8), w(ring + 12));
                if (base) {
                    auto b = [&](uint32_t a) { return g_rdram[(a ^ 3) & 0x7FFFFF]; };
                    printf("[pads] %.2f n=%u", t, b(base + 0x25AC));
                    for (int i = 0; i < 24; i++) printf("%s%02X", i % 6 ? "" : " ", b(base + 0x2372 + i));
                    if (arr) for (int c = 0; c < 4; c++) { uint32_t st = w(arr + c * 4); if (st) { uint32_t pr = w(st + 0x14); printf(" | c%d state %08X cur %04X prev %04X press %04X A %u", c, pr, pr ? w(pr) : 0, pr ? w(pr + 4) : 0, pr ? w(pr + 8) : 0, pr ? w(pr + 0x40) : 0); } }
                    printf("\n");
                }
            }
        }
        if (t >= next_report) {
            next_report += 1.0;
            printf("[headless] t=%4.1fs display_lists=%llu vi_frames=%llu audio_samples=%llu (nonzero %llu) input_polls=%llu fb=0x%08X\n",
                t, (unsigned long long)dl_count.load(), (unsigned long long)screen_updates.load(),
                (unsigned long long)audio_samples.load(), (unsigned long long)audio_nonzero.load(),
                (unsigned long long)input_polls.load(), last_fb.load());
#if defined(TNT_HAVE_SDL_AUDIO)
            if (use_sdl_audio) {
                auto a = tnt::audio::stats();
                printf("[audio] %s: game %u Hz -> device %u Hz, frames_in=%llu (%.0f/s) buffers=%llu dropped=%llu underruns=%llu queued=%.1f ms\n",
                    a.impl, a.game_rate, a.device_rate, (unsigned long long)a.frames_in, a.frames_in / t, (unsigned long long)a.buffers_in,
                    (unsigned long long)a.buffers_dropped, (unsigned long long)a.underruns, a.queued_ms);
            }
#endif
            fflush(stdout);
        }
        if (t >= run_seconds) {
            printf("[headless] time limit reached, quitting\n");
            if (std::getenv("TNT_RAMSCAN") && g_rdram) {
                // Report RDRAM usage: which 4 KB pages of the 8 MB were ever written (nonzero now).
                int first = -1; int zero_pages = 0;
                for (uint32_t pg = 0; pg < 0x800000; pg += 0x1000) {
                    bool nz = false;
                    for (uint32_t i = 0; i < 0x1000; i += 4) if (*reinterpret_cast<uint32_t*>(g_rdram + pg + i)) { nz = true; break; }
                    if (!nz) zero_pages++;
                    if (!nz && first < 0) first = (int)pg;
                    if (pg < 0x400 * 4) {}
                }
                uint32_t nz0 = 0; for (uint32_t i = 0; i < 0x300; i += 4) nz0 |= *reinterpret_cast<uint32_t*>(g_rdram + i);
                printf("[ramscan] 0x000-0x2FF %s; %d of 2048 pages are zero\n", nz0 ? "IN USE" : "all zero", zero_pages);
                // print zero page runs
                int run_start = -1;
                for (uint32_t pg = 0; pg <= 0x800000; pg += 0x1000) {
                    bool z = pg < 0x800000;
                    if (z) for (uint32_t i = 0; i < 0x1000; i += 4) if (*reinterpret_cast<uint32_t*>(g_rdram + pg + i)) { z = false; break; }
                    if (z && run_start < 0) run_start = (int)pg;
                    if (!z && run_start >= 0) { if ((int)pg - run_start >= 0x4000) printf("[ramscan] zero run 0x%06X-0x%06X (%d KB)\n", run_start, pg, (int)(pg - run_start) / 1024); run_start = -1; }
                }
            }
            wav_close();
            fflush(stdout); fflush(stderr);
            // N64ModernRuntime frees RDRAM while detached game threads may still be running,
            // which can segfault during a normal shutdown. Headless runs exit directly instead.
            std::_Exit(0);
        }
    }

    void queue_samples(int16_t* data, size_t count) {
#if defined(TNT_HAVE_SDL_AUDIO)
        if (use_sdl_audio) tnt::audio::queue_samples(data, count);
#endif
        audio_samples += count;
        uint64_t nz = 0;
        for (size_t i = 0; i < count; i++) nz += (data[i] != 0);
        audio_nonzero += nz;
        std::lock_guard lock{ wav_mutex };
        if (wav_file) {
            // Samples arrive in RDRAM order: each 32-bit word holds (R, L) after the
            // halfword swap, so swap back to L, R for the file.
            for (size_t i = 0; i + 1 < count; i += 2) {
                int16_t lr[2] = { data[i + 1], data[i] };
                fwrite(lr, 2, 2, wav_file);
            }
            wav_frames += count / 2;
        }
    }
    size_t get_frames_remaining() {
#if defined(TNT_HAVE_SDL_AUDIO)
        if (use_sdl_audio) return tnt::audio::frames_remaining();
#endif
        return 0;
    }
    void set_frequency(uint32_t freq) {
#if defined(TNT_HAVE_SDL_AUDIO)
        if (use_sdl_audio) tnt::audio::set_frequency(freq);
#endif
        wav_rate = freq; printf("[headless] audio frequency set to %u Hz\n", freq); }

    void poll_input() { ++input_polls; }
    bool get_input(int controller_num, uint16_t* buttons, float* x, float* y) {
        *buttons = 0; *x = 0.0f; *y = 0.0f;
        if (controller_num == 0) { static std::atomic<uint64_t> n{0}; if (std::getenv("TNT_INPUT_TRACE")) printf("[getinput] %.3f #%llu\n", elapsed(), (unsigned long long)++n); }
        if (controller_num == 0 && !input_script.empty()) {
            double t = elapsed();
            for (auto& e : input_script) if (t >= e.t0 && t < e.t1) { *buttons |= e.buttons; if (e.x) *x = e.x; if (e.y) *y = e.y; }
            return true;
        }
        if (controller_num == 0 && autopress) {
            // Hold START for 0.2 s every 2 s, then A for 0.2 s one second later.
            double phase = std::fmod(elapsed(), 2.0);
            if (phase < 0.2) *buttons = 0x1000;       // START
            else if (phase >= 1.0 && phase < 1.2) *buttons = 0x8000; // A
        }
        return true;
    }
    void set_rumble(int, bool) {}
    ultramodern::input::connected_device_info_t get_connected_device_info(int controller_num) {
        if (controller_num == 0) return { ultramodern::input::Device::Controller, ultramodern::input::Pak::None };
        return { ultramodern::input::Device::None, ultramodern::input::Pak::None };
    }

    void message_box(const char* msg) { fprintf(stderr, "[headless] MESSAGE: %s\n", msg); fflush(stderr); }
}

tnt::Backend tnt::make_backend(int, char**) {
    start_time = std::chrono::steady_clock::now();
#if defined(__linux__)
    std::signal(SIGSEGV, crash_handler);
    std::signal(SIGBUS, crash_handler);
#endif
    if (const char* s = std::getenv("TNT_HEADLESS_SECONDS")) run_seconds = std::atof(s);
    autopress = std::getenv("TNT_AUTOPRESS") != nullptr;
    if (const char* p = std::getenv("TNT_INPUT_SCRIPT")) {
        if (FILE* f = fopen(p, "r")) {
            char line[256];
            while (fgets(line, sizeof(line), f)) {
                ScriptEntry e{}; unsigned b = 0;
                int n = sscanf(line, "%lf %lf %x %f %f", &e.t0, &e.t1, &b, &e.x, &e.y);
                if (n >= 3) { e.buttons = (uint16_t)b; input_script.push_back(e); }
            }
            fclose(f);
            printf("[headless] input script: %zu entries\n", input_script.size());
        }
    }
    if (const char* p = std::getenv("TNT_RAMDUMP")) {
        ramdump_prefix = p;
        ramdump_every = std::getenv("TNT_RAMDUMP_EVERY") ? std::atof(std::getenv("TNT_RAMDUMP_EVERY")) : 1.0;
        next_ramdump = ramdump_every;
    }
#if defined(TNT_HAVE_SDL_AUDIO)
    if (std::getenv("TNT_SDL_AUDIO")) { use_sdl_audio = true; SDL_SetMainReady(); tnt::audio::open(); }
#endif
    if (const char* w = std::getenv("TNT_WAV")) {
        wav_file = fopen(w, "wb");
        if (wav_file) wav_header(wav_file, 32000, 0);
    }
    printf("[headless] running for %.0f s%s\n", run_seconds, autopress ? ", auto-pressing START/A" : "");

    tnt::Backend b{};
    b.renderer = { .create_render_context = create_render_context };
    b.gfx = { .create_gfx = create_gfx, .create_window = create_window, .update_gfx = update_gfx };
    b.audio = { .queue_samples = queue_samples, .get_frames_remaining = get_frames_remaining, .set_frequency = set_frequency };
    b.input = { .poll_input = poll_input, .get_input = get_input, .set_rumble = set_rumble, .get_connected_device_info = get_connected_device_info };
    b.events = { .vi_callback = nullptr, .gfx_init_callback = nullptr };
    b.error_handling = { .message_box = message_box };
    return b;
}
