// PS Vita backend.
//
// Runs the recompiled game with sound, the Vita's buttons, and graphics drawn by the
// portable GLES2 renderer (src/gles) on vitaGL. Until the game sends its first frame (and
// if anything goes wrong before then, such as a missing ROM) a CPU-drawn status screen
// is shown instead. vitaGL needs libshacccg.suprx in ur0:data/ (standard on a modded Vita).
//
// Files: ux0:data/TNTRecompiled/
//   baserom.us.z64 (or any .z64)  your ROM, picked up on first run and stored in tnt_data/
//   tnt_data/                     stored ROM copy and saves
//   settings.ini                  same settings file as the PC version (volume, audio latency...)
//   log.txt                       everything the game and runtime print
#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <cstdarg>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

#include <psp2/audioout.h>
#include <psp2/ctrl.h>
#include <psp2/display.h>
#include <psp2/io/stat.h>
#include <psp2/io/fcntl.h>
#include <psp2/kernel/processmgr.h>
#include <psp2/kernel/sysmem.h>
#include <psp2/power.h>
#include <psp2/kernel/threadmgr.h>

#include "tnt_game.hpp"
#include "settings.hpp"
#include "leaderboard.hpp"
#include "font5x7.h"
#include "librecomp/rsp.hpp"
#include <vitaGL.h>
#include "gles/n64_renderer.hpp"

// Overlay (src/overlay.cpp): FPS counter and the after-game high-score panel.
std::atomic<bool> tnt_overlay_enabled{ true };   // SELECT + TRIANGLE toggles it
std::atomic<float> tnt_game_fps{ 0.0f };
constexpr uint32_t tnt_overlay_dl_addr = 0x7F0000;
bool tnt_build_overlay(uint8_t* rdram, uint32_t game_dl, uint64_t frame);

// Thread stacks: the runtime runs every N64 thread on its own host thread.
extern "C" unsigned int _pthread_stack_default_user = 1024 * 1024;
// Heap for the stored ROM, RDRAM (20 MB) and everything else.
extern "C" unsigned int _newlib_heap_size_user = 192 * 1024 * 1024;

extern "C" void tnt_vita_register_thread(const char* name);
#include "recomp.h"
extern "C" void tnt_on_game_result(uint8_t* rdram, recomp_context* ctx);
void tnt_vita_set_error(const std::string& msg);
namespace {
    void tnt_vita_register_thread_internal(const char* name) { tnt_vita_register_thread(name); }
    uint64_t now_ms() {
        return (uint64_t)std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch()).count();
    }

    // ---- Shared state -------------------------------------------------------
    std::mutex status_mutex;
    std::string error_text;
    std::atomic<uint64_t> dl_count{ 0 }, vi_count{ 0 };
    std::atomic<uint64_t> audio_frames_in{ 0 }, audio_underruns{ 0 }, audio_dropped{ 0 };
    std::atomic<uint32_t> game_rate{ 0 };
    std::atomic<uint16_t> pad_buttons{ 0 };
    std::atomic<bool> game_started{ false };
    // Per-press input diagnostics and per-second stats in log.txt (off: logging costs time on the Vita).
    bool verbose_log = false;
    std::atomic<bool> gl_active{ false };     // vitaGL owns the display from now on
    std::mutex display_mutex;                 // status screen vs. vitaGL start-up
    // Renderer timing, accumulated on the gfx thread and reported once a second.
    std::atomic<uint64_t> gfx_swaps{ 0 }, gfx_dl_us{ 0 }, gfx_present_us{ 0 }, gfx_draws{ 0 }, gfx_uploads{ 0 }, gfx_tris{ 0 };

    constexpr uint16_t N64_A = 0x8000, N64_B = 0x4000, N64_Z = 0x2000, N64_START = 0x1000,
        N64_DU = 0x0800, N64_DD = 0x0400, N64_DL = 0x0200, N64_DR = 0x0100,
        N64_L = 0x0020, N64_R = 0x0010, N64_CU = 0x0008, N64_CD = 0x0004, N64_CL = 0x0002, N64_CR = 0x0001;

    // ---- Per-thread CPU usage (every thread names itself through the runtime) ----
    struct ThreadStat { SceUID uid; std::string name; uint64_t last_clocks = 0; double percent = 0; };
    std::mutex threads_mutex;
    std::vector<ThreadStat> thread_stats;

    void register_thread_uid(SceUID uid, const char* name) {
        std::lock_guard lock{ threads_mutex };
        for (auto& t : thread_stats) if (t.uid == uid) { t.name = name; return; }
        thread_stats.push_back({ uid, name });
    }

    // Updates each thread's share of one CPU core over the last interval (100% = a whole core).
    void update_thread_stats(double dt) {
        std::lock_guard lock{ threads_mutex };
        for (auto& t : thread_stats) {
            SceKernelThreadInfo info{};
            info.size = sizeof(info);
            if (sceKernelGetThreadInfo(t.uid, &info) != 0) { t.percent = -1; continue; }
            uint64_t clocks = info.runClocks; // microseconds
            if (t.last_clocks) t.percent = (clocks - t.last_clocks) / (dt * 1e6) * 100.0;
            t.last_clocks = clocks;
        }
    }

    // ---- Busy time per N64 thread and in the audio microcode (works without kernel stats) ----
    std::atomic<uint64_t> n64_busy_us[256];
    uint64_t n64_busy_last[256];
    double n64_busy_pct[256];
    std::atomic<uint64_t> rsp_busy_us{ 0 }, rsp_tasks{ 0 };
    uint64_t rsp_busy_last = 0;
    double rsp_busy_pct = 0, rsp_task_ms = 0;
    uint64_t rsp_tasks_last = 0;

    // ---- Display: a CPU-drawn status screen -----------------------------------
    constexpr int SCREEN_W = 960, SCREEN_H = 544;
    uint32_t* framebuffers[2] = {};
    int fb_index = 0;

    bool init_display() {
        // Physically contiguous main memory (1 MB aligned) works for the display on hardware and
        // in Vita3K; CDRAM is the fallback.
        const size_t size = (SCREEN_W * SCREEN_H * 4 + 0xFFFFF) & ~0xFFFFFu;
        for (int i = 0; i < 2; i++) {
            SceUID block = sceKernelAllocMemBlock("tnt_fb", SCE_KERNEL_MEMBLOCK_TYPE_USER_MAIN_PHYCONT_NC_RW, size, nullptr);
            if (block < 0) block = sceKernelAllocMemBlock("tnt_fb", SCE_KERNEL_MEMBLOCK_TYPE_USER_CDRAM_RW, (size + 0x3FFFF) & ~0x3FFFFu, nullptr);
            if (block < 0) { printf("[vita] framebuffer allocation failed: 0x%08X\n", block); return false; }
            void* base = nullptr;
            sceKernelGetMemBlockBase(block, &base);
            framebuffers[i] = static_cast<uint32_t*>(base);
            std::memset(base, 0, size);
        }
        return true;
    }

    // Colours are 0xAABBGGRR.
    constexpr uint32_t rgb(uint8_t r, uint8_t g, uint8_t b) { return 0xFF000000u | (uint32_t(b) << 16) | (uint32_t(g) << 8) | r; }

    void fill(uint32_t* fb, int x0, int y0, int w, int h, uint32_t c) {
        int xa = std::max(0, x0), xb = std::min(SCREEN_W, x0 + w);
        if (xa >= xb) return; // entirely off screen
        for (int y = std::max(0, y0); y < std::min(SCREEN_H, y0 + h); y++)
            std::fill(fb + y * SCREEN_W + xa, fb + y * SCREEN_W + xb, c);
    }

    int text(uint32_t* fb, int x, int y, int s, uint32_t c, const std::string& str) {
        for (char ch : str) {
            if (ch != ' ') {
                const uint8_t* g = tnt_font::glyph(ch);
                if (!g) g = tnt_font::glyph('?');
                for (int row = 0; row < 7; row++)
                    for (int col = 0; col < 5; col++)
                        if (g[row] & (0x10 >> col)) fill(fb, x + col * s, y + row * s, s, s, c);
            }
            x += 6 * s;
        }
        return x;
    }

    std::string fmt(const char* f, ...) {
        char buf[256];
        va_list ap; va_start(ap, f); vsnprintf(buf, sizeof(buf), f, ap); va_end(ap);
        return buf;
    }

    // ---- Audio: game rate -> 48 kHz, through a ring buffer and an output thread -
    constexpr int OUT_RATE = 48000, GRAIN = 512;
    std::mutex audio_mutex;
    std::vector<int16_t> ring(OUT_RATE * 2);       // 1 s of stereo
    size_t ring_read = 0, ring_count = 0;          // in frames
    double resample_pos = 0.0;
    int16_t last_l = 0, last_r = 0;
    int headroom_vis = 2;
    int volume_percent = 100;
    std::atomic<bool> audio_running{ false };
    std::thread audio_thread;

    void ring_push(int16_t l, int16_t r) {
        size_t cap = ring.size() / 2;
        if (ring_count >= cap) { audio_dropped++; return; }
        size_t w = (ring_read + ring_count) % cap;
        ring[w * 2] = l; ring[w * 2 + 1] = r;
        ring_count++;
    }

    void audio_thread_func() {
        tnt_vita_register_thread_internal("Audio output");
        int port = sceAudioOutOpenPort(SCE_AUDIO_OUT_PORT_TYPE_BGM, GRAIN, OUT_RATE, SCE_AUDIO_OUT_MODE_STEREO);
        if (port < 0) { printf("[vita] sceAudioOutOpenPort failed: 0x%08X\n", port); return; }
        float v = volume_percent / 100.0f;
        int vol[2] = { int(SCE_AUDIO_VOLUME_0DB * v * v), int(SCE_AUDIO_VOLUME_0DB * v * v) };
        sceAudioOutSetVolume(port, (SceAudioOutChannelFlag)(SCE_AUDIO_VOLUME_FLAG_L_CH | SCE_AUDIO_VOLUME_FLAG_R_CH), vol);
        std::vector<int16_t> out(GRAIN * 2);
        while (audio_running) {
            {
                std::lock_guard lock{ audio_mutex };
                size_t n = std::min<size_t>(ring_count, GRAIN), cap = ring.size() / 2;
                for (size_t i = 0; i < n; i++) {
                    size_t r = (ring_read + i) % cap;
                    out[i * 2] = ring[r * 2]; out[i * 2 + 1] = ring[r * 2 + 1];
                }
                if (n < GRAIN) {
                    if (game_started && audio_frames_in > 0) audio_underruns++;
                    std::fill(out.begin() + n * 2, out.end(), 0);
                }
                ring_read = (ring_read + n) % cap;
                ring_count -= n;
            }
            sceAudioOutOutput(port, out.data()); // blocks until the hardware wants the next grain
        }
        sceAudioOutReleasePort(port);
    }

    void queue_samples(int16_t* data, size_t count) {
        if (count * sizeof(int16_t) > 0x3FFF8) { audio_dropped++; return; } // bogus length, see src/sdl_audio.cpp
        uint32_t in_rate = game_rate.load();
        if (in_rate == 0) return;
        size_t frames = count / 2;
        audio_frames_in += frames;
        double step = double(in_rate) / OUT_RATE;
        std::lock_guard lock{ audio_mutex };
        // Linear interpolation, carrying the position and last sample across buffers.
        // RDRAM holds each frame as (R, L) after the halfword swap.
        for (size_t i = 0; i < frames; i++) {
            int16_t l = data[2 * i + 1], r = data[2 * i];
            while (resample_pos < 1.0) {
                float t = float(resample_pos);
                ring_push(int16_t(last_l + (l - last_l) * t), int16_t(last_r + (r - last_r) * t));
                resample_pos += step;
            }
            resample_pos -= 1.0;
            last_l = l; last_r = r;
        }
    }

    // Same idea as the PC fix: report at most one VI's worth, minus headroom, so the
    // game keeps the queue topped up instead of under-filling it.
    size_t get_frames_remaining() {
        uint32_t in_rate = game_rate.load();
        if (in_rate == 0) return 0;
        uint64_t queued_out;
        { std::lock_guard lock{ audio_mutex }; queued_out = ring_count + GRAIN; }
        uint64_t queued = queued_out * in_rate / OUT_RATE;
        uint64_t per_vi = in_rate / 60, headroom = per_vi * uint64_t(headroom_vis);
        uint64_t reported = queued > headroom ? queued - headroom : 0;
        return (size_t)std::min<uint64_t>(reported, per_vi);
    }

    void set_frequency(uint32_t freq) {
        printf("[vita] game audio rate %u Hz\n", freq);
        game_rate = freq;
    }

    // ---- Input ----------------------------------------------------------------
    std::mutex input_mutex;
    uint16_t cur_buttons = 0;
    float cur_x = 0, cur_y = 0;
    uint64_t quit_held_since = 0;

    float stick(uint8_t v) {
        float f = (int(v) - 128) / 127.0f;
        return std::fabs(f) < 0.2f ? 0.0f : std::clamp(f, -1.0f, 1.0f);
    }

    void sample_inputs() {
        SceCtrlData pad{};
        sceCtrlPeekBufferPositive(0, &pad, 1);
        uint16_t b = 0;
        auto map = [&](uint32_t vita, uint16_t n64) { if (pad.buttons & vita) b |= n64; };
        map(SCE_CTRL_UP, N64_DU); map(SCE_CTRL_DOWN, N64_DD); map(SCE_CTRL_LEFT, N64_DL); map(SCE_CTRL_RIGHT, N64_DR);
        map(SCE_CTRL_CROSS, N64_A); map(SCE_CTRL_CIRCLE, N64_B); map(SCE_CTRL_SQUARE, N64_B); map(SCE_CTRL_TRIANGLE, N64_A);
        map(SCE_CTRL_LTRIGGER, N64_L); map(SCE_CTRL_RTRIGGER, N64_R);
        map(SCE_CTRL_START, N64_START); map(SCE_CTRL_SELECT, N64_Z);
        // SELECT + TRIANGLE toggles the FPS counter (and isn't passed to the game).
        static bool combo_down = false;
        bool combo = (pad.buttons & SCE_CTRL_SELECT) && (pad.buttons & SCE_CTRL_TRIANGLE);
        if (combo && !combo_down) tnt_overlay_enabled = !tnt_overlay_enabled.load();
        combo_down = combo;
        if (combo) b &= ~(N64_Z | N64_A);
        float rx = stick(pad.rx), ry = stick(pad.ry);
        if (ry < -0.6f) b |= N64_CU; if (ry > 0.6f) b |= N64_CD;
        if (rx < -0.6f) b |= N64_CL; if (rx > 0.6f) b |= N64_CR;
        // Left stick: used as a second D-pad rather than the N64 stick. Vita sticks often rest
        // slightly off centre, and the game reads small stick movements as presses.
        float lx = stick(pad.lx), ly = stick(pad.ly);
        if (ly < -0.6f) b |= N64_DU; if (ly > 0.6f) b |= N64_DD;
        if (lx < -0.6f) b |= N64_DL; if (lx > 0.6f) b |= N64_DR;
        {
            std::lock_guard lock{ input_mutex };
            cur_buttons = b;
            cur_x = 0.0f;
            cur_y = 0.0f;
        }
        static uint16_t last_logged = 0;
        if (verbose_log && b != last_logged) {
            // Every change of the buttons the game sees, for checking missed or phantom presses.
            printf("[input] %llu ms: %04X (vita %08X lx %d ly %d)\n", (unsigned long long)now_ms(), b, pad.buttons, pad.lx, pad.ly);
            last_logged = b;
        }
        pad_buttons = b;
        if (b) tnt::leaderboard::on_button();

        // Hold START + SELECT for 2 seconds to quit.
        uint64_t now = now_ms();
        if ((pad.buttons & SCE_CTRL_START) && (pad.buttons & SCE_CTRL_SELECT)) {
            if (!quit_held_since) quit_held_since = now;
            else if (now - quit_held_since > 2000) {
                printf("[vita] quit requested\n");
                fflush(stdout);
                sceKernelExitProcess(0);
            }
        } else quit_held_since = 0;
    }

    // Controller read timing, to find out why presses get delayed or bunched up.
    std::atomic<uint64_t> polls{ 0 }, poll_max_gap_us{ 0 }, poll_last_us{ 0 }, poll_late{ 0 };
    uint8_t* g_rdram = nullptr;
    uint64_t now_us() { return (uint64_t)std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now().time_since_epoch()).count(); }
    void poll_input() {
        uint64_t t = now_us(), last = poll_last_us.exchange(t);
        polls++;
        if (last) {
            uint64_t gap = t - last;
            if (gap > poll_max_gap_us) poll_max_gap_us = gap;
            if (gap > 25000) poll_late++;
        }
    }
    // Logs when the game's own controller state changes (what the game has processed).
    void watch_game_pad() {
        if (!verbose_log || !g_rdram) return;
        auto w = [&](uint32_t a) { return *reinterpret_cast<uint32_t*>(g_rdram + (a & 0x7FFFFC)); };
        uint32_t base = w(0x800E1F18), arr = base ? w(base + 0x2610) : 0, st = arr ? w(arr) : 0, pr = st ? w(st + 0x14) : 0;
        {
            // The per-frame state the game's logic acts on (cur buttons and new presses).
            uint32_t ps = w(0x8011F210);
            static uint32_t last_press = 0, last_cur = 0xFFFF;
            if (ps) {
                uint32_t press = w(ps + 0x24) & 0xFFFF, curb = w(ps + 0x20) & 0xFFFF;
                if (press != last_press || curb != last_cur) {
                    printf("[logic] %llu ms: frame buttons %04X, new presses %04X\n", (unsigned long long)now_ms(), curb, press);
                    last_press = press; last_cur = curb;
                }
            }
        }
        {
            // The falling piece's rotation (found by searching RAM in the PC test build): the
            // piece object is reached through two pointers; log every change.
            static int last_rot1 = -1, last_rot2 = -1;
            uint32_t p1 = w(0x8011FC10), p2 = w(0x8011FB70);
            auto b = [&](uint32_t a) { return (int)g_rdram[(a ^ 3) & 0x7FFFFF]; };
            int r1 = (p1 >> 24) == 0x80 ? b(p1 + 0x6A) : -1, r2 = (p2 >> 24) == 0x80 ? b(p2 + 0xA) : -1;
            if (r1 != last_rot1 || r2 != last_rot2) {
                printf("[rotation] %llu ms: %d %d (objects %08X %08X)\n", (unsigned long long)now_ms(), r1, r2, p1, p2);
                last_rot1 = r1; last_rot2 = r2;
            }
        }
        if (!pr) return;
        static uint32_t last = 0xFFFFFFFF;
        uint32_t cur = w(pr) & 0xFFFF;
        if (cur != last) {
            printf("[gamepad] %llu ms: game sees %04X (queue %u..%u)\n", (unsigned long long)now_ms(), cur,
                *reinterpret_cast<uint16_t*>(g_rdram + (((st + 2) ^ 2) & 0x7FFFFE)), *reinterpret_cast<uint16_t*>(g_rdram + ((st ^ 2) & 0x7FFFFE)));
            last = cur;
        }
    }
    void log_input_timing() {
        static uint64_t last_polls = 0, last_pushed = 0, last_popped = 0;
        static auto last_t = std::chrono::steady_clock::now();
        auto now_t = std::chrono::steady_clock::now();
        double dt = std::chrono::duration<double>(now_t - last_t).count();
        last_t = now_t;
        if (dt <= 0) dt = 1;
        uint64_t p = polls.load();
        uint32_t head = 0, tail = 0, pushed = 0, popped = 0;
        if (g_rdram) {
            auto w = [&](uint32_t a) { return *reinterpret_cast<uint32_t*>(g_rdram + (a & 0x7FFFFC)); };
            auto h = [&](uint32_t a) { return *reinterpret_cast<uint16_t*>(g_rdram + ((a ^ 2) & 0x7FFFFE)); };
            uint32_t base = w(0x800E1F18), arr = base ? w(base + 0x2610) : 0, ring = arr ? w(arr) : 0;
            if (ring) { head = h(ring); tail = h(ring + 2); pushed = w(ring + 8); popped = w(ring + 12); }
        }
        printf("[inputq] polls %.0f/s, longest gap %.1f ms, %llu late; game queue %u..%u, +%u in, +%u out\n",
            (p - last_polls) / dt, poll_max_gap_us.exchange(0) / 1000.0, (unsigned long long)poll_late.exchange(0),
            tail, head, pushed - (uint32_t)last_pushed, popped - (uint32_t)last_popped);
        last_polls = p; last_pushed = pushed; last_popped = popped;
    }
    bool get_input(int n, uint16_t* buttons, float* x, float* y) {
        if (n != 0) return false;
        std::lock_guard lock{ input_mutex };
        *buttons = cur_buttons; *x = cur_x; *y = cur_y;
        return true;
    }
    void set_rumble(int, bool) {}
    ultramodern::input::connected_device_info_t get_connected_device_info(int n) {
        if (n == 0) return { ultramodern::input::Device::Controller, ultramodern::input::Pak::None };
        return { ultramodern::input::Device::None, ultramodern::input::Pak::None };
    }

    // ---- Renderer: the GLES2 N64 renderer on vitaGL ----------------------------------
    uint64_t usec_since(std::chrono::steady_clock::time_point t0) {
        return (uint64_t)std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - t0).count();
    }

    class VitaGLRenderer final : public ultramodern::renderer::RendererContext {
    public:
        explicit VitaGLRenderer(uint8_t* rdram) : rdram(rdram) { setup_result = ultramodern::renderer::SetupResult::Success; }
        bool valid() override { return true; }
        bool update_config(const ultramodern::renderer::GraphicsConfig&, const ultramodern::renderer::GraphicsConfig&) override { return true; }
        void enable_instant_present() override {}
        void send_dl(const OSTask* task) override {
            uint64_t frame = ++dl_count;
            game_started = true;
            if (!start()) return;
            auto t0 = std::chrono::steady_clock::now();
            uint32_t dl = (uint32_t)(uintptr_t)task->t.data_ptr & 0x3FFFFFF;
            if (frame <= 3) printf("[gfx] frame %llu: drawing display list 0x%06X\n", (unsigned long long)frame, dl);
            renderer->process_dl(dl);
            if (frame <= 3) printf("[gfx] frame %llu: drawn\n", (unsigned long long)frame);
            const n64gfx::Stats& st = renderer->last_stats();
            gfx_draws += st.draw_calls; gfx_uploads += st.texture_uploads; gfx_tris += st.triangles;
            if (tnt_build_overlay(rdram, dl, frame)) renderer->process_dl(tnt_overlay_dl_addr);
            gfx_dl_us += usec_since(t0);
            // Screen buffers are drawn straight to the display: show the frame now.
            if (renderer->end_frame()) {
                auto t1 = std::chrono::steady_clock::now();
                vglSwapBuffers(GL_FALSE);
                gfx_present_us += usec_since(t1);
                gfx_swaps++;
            }
        }
        void send_dummy_workload(uint32_t) override {}
        void update_screen() override {
            ++vi_count;
            if (!renderer) return;
            // Only flip when there's something new: a flip can wait for the display, and this
            // thread also has to draw the game's frames.
            uint32_t origin = ultramodern::renderer::get_vi_regs()->VI_ORIGIN_REG;
            uint64_t frames = dl_count.load();
            if (frames == presented_frames && origin == presented_origin) return;
            presented_frames = frames; presented_origin = origin;
            auto t0 = std::chrono::steady_clock::now();
            bool log = ++presents <= 3;
            if (log) printf("[gfx] present %d\n", presents);
            if (!renderer->present(origin)) return; // already on screen
            vglSwapBuffers(GL_FALSE);
            gfx_swaps++;
            if (log) printf("[gfx] present %d: swapped\n", presents);
            gfx_present_us += usec_since(t0);
        }
        void shutdown() override {}
        uint32_t get_display_framerate() const override { return 60; }
        float get_resolution_scale() const override { return 1.0f; }
    private:
        bool start() {
            if (renderer) return true;
            if (failed) return false;
            {
                // vitaGL compiles its shaders with Sony's shader compiler, which has to be
                // installed separately. Without it the screen would just stay black.
                SceIoStat st{};
                if (sceIoGetstat("ur0:data/libshacccg.suprx", &st) < 0 && sceIoGetstat("ur0:data/external/libshacccg.suprx", &st) < 0) {
                    failed = true;
                    tnt_vita_set_error("LIBSHACCCG.SUPRX IS MISSING, SO THE GAME CAN'T BE DRAWN. INSTALL IT WITH SHARKF00D "
                                       "(IT SAVES THE FILE TO UR0:DATA/), THEN START THE GAME AGAIN. SOUND STILL WORKS.");
                    return false;
                }
            }
            {
                // Take the display over from the status screen.
                std::lock_guard lock{ display_mutex };
                gl_active = true;
            }
            vglWaitVblankStart(GL_FALSE); // frames are paced by the game's VI; the flip still waits for vblank
            // Leave some main RAM for threads created later and for newlib; the rest becomes vitaGL's pools.
            printf("[vita] starting vitaGL\n");
            // The return value isn't success/failure: vitaGL returns GL_FALSE when the requested
            // resolution was used as is (and GL_TRUE when it had to fall back to a smaller one).
            vglInitExtended(0, 960, 544, 16 * 1024 * 1024, SCE_GXM_MULTISAMPLE_NONE);
            printf("[vita] vitaGL started: %s / %s\n", (const char*)glGetString(GL_RENDERER), (const char*)glGetString(GL_VERSION));
            n64gfx::Config cfg;
            cfg.scale = tnt::settings().resolution == "native" ? 1 : 2;
            cfg.output_width = SCREEN_W;
            cfg.output_height = SCREEN_H;
            if (tnt::settings().dump_backgrounds) {
                cfg.dump_dir = TNT_VITA_APP_DIR "/backgrounds";
                sceIoMkdir(cfg.dump_dir.c_str(), 0777);
                printf("[vita] saving backgrounds to %s\n", cfg.dump_dir.c_str());
            }
            renderer = std::make_unique<n64gfx::Renderer>(rdram, cfg);
            return true;
        }
        uint8_t* rdram;
        std::unique_ptr<n64gfx::Renderer> renderer;
        bool failed = false;
        int presents = 0;
        uint64_t presented_frames = ~0ull;
        uint32_t presented_origin = 0;
    };
    std::unique_ptr<ultramodern::renderer::RendererContext> create_render_context(uint8_t* rdram, ultramodern::renderer::WindowHandle, bool) {
        g_rdram = rdram;
        return std::make_unique<VitaGLRenderer>(rdram);
    }

    // ---- Status screen ----------------------------------------------------------
    void* create_gfx() { return nullptr; }
    ultramodern::renderer::WindowHandle create_window(void*) { return ultramodern::renderer::WindowHandle{ framebuffers[0] }; }

    struct Rates { double fps = 0, vi = 0, audio_rate = 0; };
    Rates rates;

    void draw_status() {
        static auto last = std::chrono::steady_clock::now();
        static uint64_t last_dl = 0, last_vi = 0, last_audio = 0;
        auto now = std::chrono::steady_clock::now();
        double dt = std::chrono::duration<double>(now - last).count();
        if (dt >= 1.0) {
            uint64_t dl = dl_count, vi = vi_count, au = audio_frames_in;
            rates.fps = (dl - last_dl) / dt; rates.vi = (vi - last_vi) / dt; rates.audio_rate = (au - last_audio) / dt;
            tnt_game_fps = float(rates.fps);
            // Log once every ~10 s (or every second with verbose_log): log writes cost time.
            static int report = 0;
            bool log_now = verbose_log || (report++ % 10) == 0;
            if (verbose_log) log_input_timing();
            {
                uint64_t frames = dl - last_dl, vis = gfx_swaps.exchange(0);
                uint64_t dl_us = gfx_dl_us.exchange(0), pr_us = gfx_present_us.exchange(0);
                uint64_t draws = gfx_draws.exchange(0), ups = gfx_uploads.exchange(0), tris = gfx_tris.exchange(0);
                if (log_now && gl_active && frames)
                    printf("[gfx] %.2f ms per frame drawing, %.2f ms per screen flip, %llu draws, %llu tris, %llu texture uploads per frame\n",
                        dl_us / 1000.0 / frames, vis ? pr_us / 1000.0 / vis : 0.0, (unsigned long long)(draws / frames),
                        (unsigned long long)(tris / frames), (unsigned long long)(ups / frames));
            }
            last = now; last_dl = dl; last_vi = vi; last_audio = au;
            update_thread_stats(dt);
            for (int i = 0; i < 256; i++) {
                uint64_t b = n64_busy_us[i].load();
                n64_busy_pct[i] = (b - n64_busy_last[i]) / (dt * 1e6) * 100.0;
                n64_busy_last[i] = b;
            }
            {
                uint64_t b = rsp_busy_us.load(), n = rsp_tasks.load();
                rsp_busy_pct = (b - rsp_busy_last) / (dt * 1e6) * 100.0;
                rsp_task_ms = n > rsp_tasks_last ? (b - rsp_busy_last) / 1000.0 / double(n - rsp_tasks_last) : 0;
                rsp_busy_last = b; rsp_tasks_last = n;
            }
            if (log_now) {
            for (int i = 0; i < 256; i++) if (n64_busy_pct[i] >= 1.0) printf("[n64] thread %3d busy %5.1f%%\n", i, n64_busy_pct[i]);
            printf("[rsp] audio microcode %5.1f%% of a core, %.2f ms per task\n", rsp_busy_pct, rsp_task_ms);
            }
            std::lock_guard lock{ threads_mutex };
            if (log_now) for (auto& t : thread_stats) if (t.percent >= 1.0) printf("[cpu] %-24s %5.1f%%\n", t.name.c_str(), t.percent);
            if (log_now) printf("[status] fps=%.1f vi=%.1f audio=%.0f Hz/%u underruns=%llu dropped=%llu frames=%llu\n",
                rates.fps, rates.vi, rates.audio_rate, game_rate.load(), (unsigned long long)audio_underruns.load(),
                (unsigned long long)audio_dropped.load(), (unsigned long long)dl_count.load());
        }

        std::lock_guard display_lock{ display_mutex };
        if (gl_active) return; // the game is on screen
        uint32_t* fb = framebuffers[fb_index];
        if (!fb) return;
        fill(fb, 0, 0, SCREEN_W, SCREEN_H, rgb(14, 16, 36));
        const uint32_t white = rgb(236, 236, 244), gold = rgb(255, 200, 70), grey = rgb(140, 144, 180),
                       green = rgb(90, 230, 120), red = rgb(255, 110, 110);
        int y = 24;
        text(fb, 32, y, 4, gold, "THE NEW TETRIS: RECOMPILED"); y += 44;
        text(fb, 32, y, 2, grey, game_started ? "STARTING THE RENDERER..." : "STARTING..."); y += 36;

        const int rows_top = y;
        auto row = [&](const std::string& label, const std::string& value, uint32_t c) {
            text(fb, 32, y, 3, grey, label);
            text(fb, 260, y, 3, c, value);
            y += 34;
        };
        bool started = game_started;
        double target = 60.0;
        uint32_t fps_colour = !started ? grey : rates.fps >= target * 0.95 ? green : rates.fps >= target * 0.75 ? gold : red;
        row("GAME FPS", started ? fmt("%.1f", rates.fps) : "STARTING...", fps_colour);
        row("VIDEO RATE", fmt("%.1f / 60", rates.vi), rates.vi >= 57 ? green : gold);
        row("FRAMES", fmt("%llu", (unsigned long long)dl_count.load()), white);
        uint32_t gr = game_rate;
        row("AUDIO", gr ? fmt("%.0f / %u HZ", rates.audio_rate, gr) : "-", gr && rates.audio_rate >= gr * 0.95 ? green : gold);
        row("AUDIO GAPS", fmt("%llu", (unsigned long long)audio_underruns.load()), audio_underruns ? gold : green);
        row("CPU CLOCK", fmt("%d MHZ", scePowerGetArmClockFrequency()), white);

        uint16_t b = pad_buttons;
        std::string held;
        const std::pair<uint16_t, const char*> names[] = { { N64_A, "A " }, { N64_B, "B " }, { N64_L, "HOLD " }, { N64_START, "START " },
            { N64_DU, "UP " }, { N64_DD, "DOWN " }, { N64_DL, "LEFT " }, { N64_DR, "RIGHT " }, { N64_Z, "Z " }, { N64_R, "R " } };
        for (auto& [bit, name] : names) if (b & bit) held += name;
        row("BUTTONS", held.empty() ? "-" : held, white);

        // Busiest threads: 100% means a whole CPU core.
        {
            std::vector<ThreadStat> top;
            { std::lock_guard lock{ threads_mutex }; top = thread_stats; }
            std::sort(top.begin(), top.end(), [](const ThreadStat& a, const ThreadStat& b) { return a.percent > b.percent; });
            int ty = rows_top;
            const int tx = 600;
            // N64-side view: which game threads hold control, and the audio microcode.
            text(fb, tx, ty, 2, grey, "N64 THREADS BUSY (PERCENT)"); ty += 22;
            {
                std::vector<std::pair<double, int>> busy;
                for (int i = 0; i < 256; i++) if (n64_busy_pct[i] >= 0.5) busy.push_back({ n64_busy_pct[i], i });
                std::sort(busy.rbegin(), busy.rend());
                int n = 0;
                for (auto& [pct, id] : busy) {
                    if (n++ >= 4) break;
                    text(fb, tx, ty, 2, pct >= 90 ? red : pct >= 60 ? gold : white, fmt("%3.0f  THREAD %d", pct, id));
                    ty += 20;
                }
                double total = 0; for (auto& b : busy) total += b.first;
                text(fb, tx, ty, 2, total >= 95 ? red : white, fmt("%3.0f  ALL GAME THREADS", total)); ty += 20;
                text(fb, tx, ty, 2, rsp_busy_pct >= 90 ? red : white, fmt("%3.0f  AUDIO MICROCODE", rsp_busy_pct)); ty += 20;
                text(fb, tx, ty, 2, grey, fmt("     %.1f MS PER AUDIO TASK", rsp_task_ms)); ty += 30;
            }
            text(fb, tx, ty, 2, grey, "CPU BY THREAD"); ty += 18;
            text(fb, tx, ty, 2, grey, "(100 = ONE FULL CORE)"); ty += 26;
            int shown = 0;
            for (auto& t : top) {
                if (shown >= 9 || t.percent < 0.5) break;
                std::string nm = t.name;
                for (auto& c : nm) c = (char)std::toupper((unsigned char)c);
                if (nm.size() > 20) nm = nm.substr(0, 20);
                uint32_t c = t.percent >= 90 ? red : t.percent >= 60 ? gold : white;
                text(fb, tx, ty, 2, c, fmt("%3.0f", t.percent));
                text(fb, tx + 48, ty, 2, white, nm);
                ty += 22; shown++;
            }
        }

        uint32_t age = 0;
        std::string lb = tnt::leaderboard::last_message(&age);
        y += 6;
        if (!lb.empty()) { text(fb, 32, y, 2, green, "LAST GAME: " + lb); y += 26; }
        {
            std::lock_guard lock{ status_mutex };
            if (!error_text.empty()) {
                // Wrap long messages.
                std::string e = error_text;
                while (!e.empty() && y < SCREEN_H - 60) {
                    size_t n = std::min<size_t>(e.size(), 72);
                    text(fb, 32, y, 2, red, e.substr(0, n)); e.erase(0, n); y += 22;
                }
            }
        }
        text(fb, 32, SCREEN_H - 50, 2, grey, "CROSS/TRIANGLE = A   CIRCLE/SQUARE = B   L = HOLD   SELECT+TRIANGLE = FPS");
        text(fb, 32, SCREEN_H - 26, 2, grey, "HOLD START + SELECT 2 SECONDS TO QUIT.  LOG: UX0:DATA/TNTRECOMPILED/LOG.TXT");

        SceDisplayFrameBuf frame{};
        frame.size = sizeof(frame);
        frame.base = fb;
        frame.pitch = SCREEN_W;
        frame.pixelformat = SCE_DISPLAY_PIXELFORMAT_A8B8G8R8;
        frame.width = SCREEN_W;
        frame.height = SCREEN_H;
        sceDisplaySetFrameBuf(&frame, SCE_DISPLAY_SETBUF_NEXTFRAME);
        fb_index ^= 1;
    }

    void update_gfx(void*) {
#if defined(TNT_VITA_TEST_RESULT)
        {
            // Emulator test: fake a finished game for a saved name 40 s after start.
            static auto start = std::chrono::steady_clock::now();
            static bool done = false;
            if (!done && g_rdram && std::chrono::steady_clock::now() - start > std::chrono::seconds(40)) {
                done = true;
                auto b8 = [&](uint32_t a, uint8_t v) { g_rdram[((a & 0x7FFFFF) ^ 3)] = v; };
                auto w32 = [&](uint32_t a, uint32_t v) { *reinterpret_cast<uint32_t*>(g_rdram + (a & 0x7FFFFF)) = v; };
                const char* nm = "ALAN";
                for (int i = 0; i < 8; i++) b8(0x807E0000 + i, i < 4 ? nm[i] : 0);
                for (int i = 0; i < 0x40; i += 4) w32(0x807E0100 + i, 0);
                b8(0x807E0105, 1);
                w32(0x807E0108, 95); w32(0x807E0118, 1234); w32(0x807E0128, 12);
                recomp_context ctx{};
                ctx.r4 = (int32_t)0x807E0000; ctx.r5 = (int32_t)0x807E0100; ctx.r6 = 0;
                printf("[test] faking a game result\n");
                tnt_on_game_result(g_rdram, &ctx);
                printf("[test] game result handled\n");
            }
        }
#endif
        static auto next = std::chrono::steady_clock::now();
        sample_inputs();
        watch_game_pad();
        auto now = std::chrono::steady_clock::now();
        if (now >= next) { next = now + std::chrono::milliseconds(200); draw_status(); }
    }

    void message_box(const char* msg) {
        printf("[vita] MESSAGE: %s\n", msg);
        std::lock_guard lock{ status_mutex };
        error_text = msg;
    }
}

void tnt_vita_set_error(const std::string& msg);

extern "C" void tnt_vita_thread_busy(int id, uint64_t usecs) {
    n64_busy_us[id & 0xFF] += usecs;
}

// Times the recompiled audio microcode (wraps the function the runtime would call).
RspUcodeFunc* tnt_select_rsp_microcode(const OSTask* task); // main.cpp: recompiled or HLE
static RspUcodeFunc* real_audio_ucode = nullptr;
static RspExitReason timed_audio_ucode(uint8_t* rdram, uint32_t ucode_addr) {
    auto t0 = std::chrono::steady_clock::now();
    RspExitReason r = real_audio_ucode(rdram, ucode_addr);
    rsp_busy_us += (uint64_t)std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - t0).count();
    rsp_tasks++;
    return r;
}
RspUcodeFunc* tnt_vita_get_rsp_microcode(const OSTask* task) {
    RspUcodeFunc* f = tnt_select_rsp_microcode(task);
    if (!f) return f;
    real_audio_ucode = f;
    return timed_audio_ucode;
}

extern "C" void tnt_vita_register_thread(const char* name) {
    register_thread_uid(sceKernelGetThreadId(), name);
}

#if !defined(TNT_VITA_LOG_TO_TTY)
static void log_write(const char* file, const char* text, size_t len);
static int log_stderr_write(void*, const char* buf, int n) { log_write(TNT_VITA_APP_DIR "/log.txt", buf, (size_t)n); return n; }
#endif

void tnt_vita_early_init() {
    sceIoMkdir(TNT_VITA_APP_DIR, 0777);
#if !defined(TNT_VITA_LOG_TO_TTY)
    // log.txt is reopened for every line (see printf below) so it can be copied while the
    // game runs: the Vita only updates a file's size when it's closed.
    sceIoRemove(TNT_VITA_APP_DIR "/log.txt"); // start a fresh log each launch
    sceIoRemove(TNT_VITA_APP_DIR "/errors.txt"); // old builds' file; errors now go into log.txt too
    stderr = funopen(nullptr, nullptr, log_stderr_write, nullptr, nullptr);
    setvbuf(stderr, nullptr, _IONBF, 0);
#else
    stdout = stderr; // emulator testing: everything to the debug tty
#endif
    printf("The New Tetris: Recompiled - PS Vita build\n");
    // Run the CPU at its full 444 MHz (apps default to 333 MHz).
    scePowerSetArmClockFrequency(444);
    scePowerSetBusClockFrequency(222);
    if (!init_display()) printf("[vita] couldn't allocate the framebuffer\n");
    tnt_vita_register_thread("Main / status screen");
}

std::string tnt_vita_find_rom() {
    std::error_code ec;
    if (std::filesystem::exists(tnt::data_folder() / "tnt.n64.us.1.0.z64", ec)) return ""; // already stored
    for (const auto& e : std::filesystem::directory_iterator(TNT_VITA_APP_DIR, ec)) {
        std::string name = e.path().filename().string();
        std::string lower = name;
        for (auto& c : lower) c = (char)std::tolower((unsigned char)c);
        if (lower.size() > 4 && (lower.ends_with(".z64") || lower.ends_with(".n64") || lower.ends_with(".v64"))) return e.path().string();
    }
    tnt_vita_set_error("NO ROM FOUND. COPY YOUR THE NEW TETRIS (USA) ROM TO UX0:DATA/TNTRECOMPILED/ AND RESTART.");
    return "";
}

void tnt_vita_set_error(const std::string& msg) {
    printf("[vita] %s\n", msg.c_str());
    std::lock_guard lock{ status_mutex };
    error_text = msg;
}

tnt::Backend tnt::make_backend(int, char**) {
    const tnt::Settings& st = tnt::settings();
    headroom_vis = st.audio_latency;
    volume_percent = st.volume;
    sceCtrlSetSamplingMode(SCE_CTRL_MODE_ANALOG_WIDE);
    audio_running = true;
    audio_thread = std::thread{ audio_thread_func };

    tnt::Backend b{};
    b.renderer = { .create_render_context = create_render_context };
    b.gfx = { .create_gfx = create_gfx, .create_window = create_window, .update_gfx = update_gfx };
    b.audio = { .queue_samples = queue_samples, .get_frames_remaining = get_frames_remaining, .set_frequency = set_frequency };
    b.input = { .poll_input = poll_input, .get_input = get_input, .set_rumble = set_rumble, .get_connected_device_info = get_connected_device_info };
    b.events = { .vi_callback = nullptr, .gfx_init_callback = nullptr };
    b.error_handling = { .message_box = message_box };
    return b;
}

#if !defined(TNT_VITA_LOG_TO_TTY)
// printf -> log.txt, opened, appended and closed each time so the file is always complete.
// Text without a newline is held until the line ends.
static std::mutex log_mutex;
static std::string log_pending;
static void log_write(const char* file, const char* text, size_t len) {
    std::lock_guard lock{ log_mutex };
    log_pending.append(text, len);
    // Write out complete lines at most 4 times a second (each write opens and closes the file).
    static uint64_t last_flush = 0;
    uint64_t t = sceKernelGetProcessTimeWide();
    if (t - last_flush < 250000 && log_pending.size() < 16384) return;
    last_flush = t;
    size_t nl = log_pending.rfind('\n');
    if (nl == std::string::npos && log_pending.size() < 4096) return;
    size_t n = nl == std::string::npos ? log_pending.size() : nl + 1;
    SceUID fd = sceIoOpen(file, SCE_O_WRONLY | SCE_O_CREAT | SCE_O_APPEND, 0666);
    if (fd >= 0) { sceIoWrite(fd, log_pending.data(), n); sceIoClose(fd); }
    log_pending.erase(0, n);
}
extern "C" int vprintf(const char* fmt_str, va_list ap) {
    char buf[1024];
    int n = vsnprintf(buf, sizeof(buf), fmt_str, ap);
    if (n > 0) log_write(TNT_VITA_APP_DIR "/log.txt", buf, std::min<size_t>(n, sizeof(buf) - 1));
    return n;
}
extern "C" int printf(const char* fmt_str, ...) {
    va_list ap; va_start(ap, fmt_str);
    int n = vprintf(fmt_str, ap);
    va_end(ap);
    return n;
}
extern "C" int puts(const char* s) {
    log_write(TNT_VITA_APP_DIR "/log.txt", s, strlen(s));
    log_write(TNT_VITA_APP_DIR "/log.txt", "\n", 1);
    return 1;
}
extern "C" int putchar(int c) { char ch = (char)c; log_write(TNT_VITA_APP_DIR "/log.txt", &ch, 1); return c; }
#else
// Emulator testing: send printf to stderr, which Vita3K shows as TTY output.
extern "C" int printf(const char* fmt_str, ...) {
    va_list ap; va_start(ap, fmt_str);
    int n = vfprintf(stderr, fmt_str, ap);
    va_end(ap);
    return n;
}
extern "C" int puts(const char* s) { return fprintf(stderr, "%s\n", s); }
#endif
