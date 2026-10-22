// On-screen overlay drawn after each game frame as an extra RDP display list (fill
// rectangles only): the FPS / frame counter (F3) and the after-game high-score panel.
#include <algorithm>
#include <atomic>
#include <cctype>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#if !defined(__vita__)
#include "leaderboard.hpp"
#endif

extern std::atomic<bool> tnt_overlay_enabled;
extern std::atomic<float> tnt_game_fps;
// Play timer in the top-right corner (settings.ini [display] show_timer; set by the back end).
#if !defined(__vita__)
std::atomic<bool> tnt_timer_enabled{ false };
#endif
constexpr uint32_t tnt_overlay_dl_addr = 0x7F0000;

// ---- Frame / FPS overlay ----------------------------------------------------
// Drawn as an extra RDP display list after each game frame, into the same colour image,
// using fill rectangles shaped as 7-segment digits. The list lives in the top page of the
// 8 MB RDRAM: The New Tetris doesn't use the Expansion Pak, so 0x400000-0x7FFFFF stays empty.
namespace {

    struct DlWriter {
        uint8_t* rdram; uint32_t addr; uint32_t start;
        void cmd(uint32_t w0, uint32_t w1) {
            *reinterpret_cast<uint32_t*>(rdram + addr) = w0;
            *reinterpret_cast<uint32_t*>(rdram + addr + 4) = w1;
            addr += 8;
        }
        bool full() const { return addr - start > 0xFF00; }
    };

    // Finds the last G_SETCIMG in the game's display list (F3DEX2), following G_DL branches.
    bool find_color_image(uint8_t* rdram, uint32_t dl, uint32_t& w0_out, uint32_t& w1_out) {
        uint32_t segments[16] = {};
        uint32_t stack[18]; int sp = 0;
        auto phys = [&](uint32_t a) -> uint32_t {
            uint32_t seg = (a >> 24) & 0xF;
            return (seg ? segments[seg] + (a & 0xFFFFFF) : a) & 0x7FFFFF;
        };
        bool found = false;
        uint32_t pc = phys(dl);
        for (int guard = 0; guard < 500000; guard++) {
            if (pc > 0x7FFFF8) return found;
            uint32_t w0 = *reinterpret_cast<uint32_t*>(rdram + pc), w1 = *reinterpret_cast<uint32_t*>(rdram + pc + 4);
            pc += 8;
            switch (w0 >> 24) {
                case 0xDB: if (((w0 >> 16) & 0xFF) == 0x06) segments[((w0 & 0xFFFF) >> 2) & 0xF] = w1 & 0x7FFFFF; break;
                case 0xDE: if (((w0 >> 16) & 0xFF) == 0) { if (sp >= 18) return found; stack[sp++] = pc; } pc = phys(w1); break;
                case 0xDF: if (sp == 0) return found; pc = stack[--sp]; break;
                case 0xE4: case 0xE5: pc += 8; break;
                case 0xFF: w0_out = w0; w1_out = w1; found = true; break;
            }
        }
        return found;
    }

    // Segments: a=top b=top-right c=bottom-right d=bottom e=bottom-left f=top-left g=middle
    const uint8_t digit_segments[10] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F };

    void rect(DlWriter& w, int x0, int y0, int x1, int y1) { // inclusive, in framebuffer pixels
        w.cmd(0xF6000000u | (uint32_t(x1) << 14) | (uint32_t(y1) << 2), (uint32_t(x0) << 14) | (uint32_t(y0) << 2));
    }
    // Draws a digit with its top-left at (x, y): 5 px wide, 9 px tall, 1 px strokes.
    void digit(DlWriter& w, int x, int y, int d) {
        uint8_t m = digit_segments[d];
        if (m & 0x01) rect(w, x, y, x + 4, y);
        if (m & 0x02) rect(w, x + 4, y, x + 4, y + 4);
        if (m & 0x04) rect(w, x + 4, y + 4, x + 4, y + 8);
        if (m & 0x08) rect(w, x, y + 8, x + 4, y + 8);
        if (m & 0x10) rect(w, x, y + 4, x, y + 8);
        if (m & 0x20) rect(w, x, y, x, y + 4);
        if (m & 0x40) rect(w, x, y + 4, x + 4, y + 4);
    }
    int number(DlWriter& w, int x, int y, const char* text) {
        for (const char* c = text; *c; c++) {
            if (*c >= '0' && *c <= '9') { digit(w, x, y, *c - '0'); x += 7; }
            else if (*c == '.') { rect(w, x, y + 8, x, y + 8); x += 3; }
            else if (*c == ':') { rect(w, x, y + 2, x, y + 2); rect(w, x, y + 6, x, y + 6); x += 3; }
            else x += 4;
        }
        return x;
    }
    uint32_t fill_color(uint32_t cimg_w0, uint8_t r, uint8_t g, uint8_t b) {
        if (((cimg_w0 >> 19) & 3) == 3) return (uint32_t(r) << 24) | (uint32_t(g) << 16) | (uint32_t(b) << 8) | 0xFF; // 32-bit
        uint16_t c = uint16_t(((r >> 3) << 11) | ((g >> 3) << 6) | ((b >> 3) << 1) | 1);              // RGBA5551
        return (uint32_t(c) << 16) | c;
    }

    // ---- 5x7 pixel font for the after-game panel ----
    struct Glyph { char c; uint8_t rows[7]; };
    const Glyph font[] = {
        { '!', { 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x04 } },
        { '#', { 0x0A, 0x0A, 0x1F, 0x0A, 0x1F, 0x0A, 0x0A } },
        { '&', { 0x0C, 0x12, 0x14, 0x08, 0x15, 0x12, 0x0D } },
        { '\'', { 0x04, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00 } },
        { '(', { 0x02, 0x04, 0x08, 0x08, 0x08, 0x04, 0x02 } },
        { ')', { 0x08, 0x04, 0x02, 0x02, 0x02, 0x04, 0x08 } },
        { '*', { 0x00, 0x04, 0x15, 0x0E, 0x15, 0x04, 0x00 } },
        { '+', { 0x00, 0x04, 0x04, 0x1F, 0x04, 0x04, 0x00 } },
        { ',', { 0x00, 0x00, 0x00, 0x00, 0x0C, 0x04, 0x08 } },
        { '-', { 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00 } },
        { '.', { 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C } },
        { '/', { 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x10 } },
        { '0', { 0x0E, 0x11, 0x13, 0x15, 0x19, 0x11, 0x0E } },
        { '1', { 0x04, 0x0C, 0x04, 0x04, 0x04, 0x04, 0x0E } },
        { '2', { 0x0E, 0x11, 0x01, 0x02, 0x04, 0x08, 0x1F } },
        { '3', { 0x1F, 0x02, 0x04, 0x02, 0x01, 0x11, 0x0E } },
        { '4', { 0x02, 0x06, 0x0A, 0x12, 0x1F, 0x02, 0x02 } },
        { '5', { 0x1F, 0x10, 0x1E, 0x01, 0x01, 0x11, 0x0E } },
        { '6', { 0x06, 0x08, 0x10, 0x1E, 0x11, 0x11, 0x0E } },
        { '7', { 0x1F, 0x01, 0x02, 0x04, 0x08, 0x08, 0x08 } },
        { '8', { 0x0E, 0x11, 0x11, 0x0E, 0x11, 0x11, 0x0E } },
        { '9', { 0x0E, 0x11, 0x11, 0x0F, 0x01, 0x02, 0x0C } },
        { ':', { 0x00, 0x0C, 0x0C, 0x00, 0x0C, 0x0C, 0x00 } },
        { '<', { 0x02, 0x04, 0x08, 0x10, 0x08, 0x04, 0x02 } },
        { '=', { 0x00, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x00 } },
        { '>', { 0x08, 0x04, 0x02, 0x01, 0x02, 0x04, 0x08 } },
        { '?', { 0x0E, 0x11, 0x01, 0x02, 0x04, 0x00, 0x04 } },
        { 'A', { 0x0E, 0x11, 0x11, 0x1F, 0x11, 0x11, 0x11 } },
        { 'B', { 0x1E, 0x11, 0x11, 0x1E, 0x11, 0x11, 0x1E } },
        { 'C', { 0x0E, 0x11, 0x10, 0x10, 0x10, 0x11, 0x0E } },
        { 'D', { 0x1E, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1E } },
        { 'E', { 0x1F, 0x10, 0x10, 0x1E, 0x10, 0x10, 0x1F } },
        { 'F', { 0x1F, 0x10, 0x10, 0x1E, 0x10, 0x10, 0x10 } },
        { 'G', { 0x0E, 0x11, 0x10, 0x17, 0x11, 0x11, 0x0F } },
        { 'H', { 0x11, 0x11, 0x11, 0x1F, 0x11, 0x11, 0x11 } },
        { 'I', { 0x0E, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0E } },
        { 'J', { 0x07, 0x02, 0x02, 0x02, 0x02, 0x12, 0x0C } },
        { 'K', { 0x11, 0x12, 0x14, 0x18, 0x14, 0x12, 0x11 } },
        { 'L', { 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F } },
        { 'M', { 0x11, 0x1B, 0x15, 0x15, 0x11, 0x11, 0x11 } },
        { 'N', { 0x11, 0x11, 0x19, 0x15, 0x13, 0x11, 0x11 } },
        { 'O', { 0x0E, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0E } },
        { 'P', { 0x1E, 0x11, 0x11, 0x1E, 0x10, 0x10, 0x10 } },
        { 'Q', { 0x0E, 0x11, 0x11, 0x11, 0x15, 0x12, 0x0D } },
        { 'R', { 0x1E, 0x11, 0x11, 0x1E, 0x14, 0x12, 0x11 } },
        { 'S', { 0x0F, 0x10, 0x10, 0x0E, 0x01, 0x01, 0x1E } },
        { 'T', { 0x1F, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04 } },
        { 'U', { 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0E } },
        { 'V', { 0x11, 0x11, 0x11, 0x11, 0x11, 0x0A, 0x04 } },
        { 'W', { 0x11, 0x11, 0x11, 0x15, 0x15, 0x15, 0x0A } },
        { 'X', { 0x11, 0x11, 0x0A, 0x04, 0x0A, 0x11, 0x11 } },
        { 'Y', { 0x11, 0x11, 0x0A, 0x04, 0x04, 0x04, 0x04 } },
        { 'Z', { 0x1F, 0x01, 0x02, 0x04, 0x08, 0x10, 0x1F } },
    };
    const uint8_t* glyph(char c) {
        if (c >= 'a' && c <= 'z') c = char(c - 'a' + 'A');
        for (const Glyph& g : font) if (g.c == c) return g.rows;
        return nullptr;
    }
    // Draws text at (x, y) with pixel size `s`; each horizontal run of a glyph row is one fill rect.
    void text(DlWriter& w, int x, int y, int s, const std::string& str) {
        for (char c : str) {
            if (c != ' ') {
                const uint8_t* g = glyph(c);
                if (!g) g = glyph('?');
                for (int row = 0; row < 7; row++) {
                    for (int col = 0; col < 5; ) {
                        if (!(g[row] & (0x10 >> col))) { col++; continue; }
                        int end = col;
                        while (end + 1 < 5 && (g[row] & (0x10 >> (end + 1)))) end++;
                        rect(w, x + col * s, y + row * s, x + (end + 1) * s - 1, y + (row + 1) * s - 1);
                        col = end + 1;
                    }
                }
            }
            x += 6 * s;
        }
    }
    void set_color(DlWriter& w, uint32_t cimg0, uint8_t r, uint8_t g, uint8_t b) {
        w.cmd(0xE7000000u, 0); // pipe sync before changing the fill colour
        w.cmd(0xF7000000u, fill_color(cimg0, r, g, b));
    }

    std::string fmt_time(uint32_t s) { char b[16]; snprintf(b, sizeof(b), "%u:%02u", s / 60, s % 60); return b; }
    std::string row_text(const char* rank, const std::string& name, uint32_t score, uint32_t seconds) {
        char b[64];
        snprintf(b, sizeof(b), "%-2s %-8.8s %5u %6s", rank, name.c_str(), score, fmt_time(seconds).c_str());
        return b;
    }

#if !defined(__vita__)
    // The game's high-score table for the mode just played, with this game's players highlighted.
    void draw_panel(DlWriter& w, uint32_t cimg0, int width, int height, const tnt::leaderboard::Panel& p) {
        const int s = width >= 640 ? 2 : 1;            // pixel size
        const int cw = 6 * s, lh = 10 * s, cols = 24;
        struct Line { std::string text; int color; };   // 0 white, 1 gold, 2 grey, 3 highlight
        std::vector<Line> lines;
        std::string title = std::string(tnt::leaderboard::mode_name(p.mode)) + " HIGH SCORES";
        for (auto& c : title) c = char(toupper((unsigned char)c));
        lines.push_back({ std::string((cols - title.size()) / 2, ' ') + title, 1 });
        lines.push_back({ "", 0 });
        lines.push_back({ "#  NAME     LINES   TIME", 2 });
        std::vector<bool> placed(p.results.size(), false);
        if (p.table_valid) {
            for (int e = 0; e < 5; e++) {
                const auto& t = p.table[e];
                int color = 0;
                for (size_t r = 0; r < p.results.size(); r++) {
                    if (!placed[r] && p.results[r].name == t.name && p.results[r].score == t.score && p.results[r].seconds == t.seconds) {
                        placed[r] = true; color = 3; break;
                    }
                }
                char rank[4]; snprintf(rank, sizeof(rank), "%d", e + 1);
                lines.push_back({ row_text(rank, t.name, t.score, t.seconds), color });
            }
        }
        bool any_unplaced = false;
        for (size_t r = 0; r < p.results.size(); r++) if (!placed[r]) any_unplaced = true;
        if (any_unplaced) {
            lines.push_back({ "", 0 });
            for (size_t r = 0; r < p.results.size(); r++)
                if (!placed[r]) lines.push_back({ row_text("-", p.results[r].name, p.results[r].score, p.results[r].seconds), 3 });
        }

        int pw = cols * cw + 16 * s, ph = int(lines.size()) * lh + 14 * s;
        int x0 = (width - pw) / 2, y0 = (height - ph) / 2;
        if (x0 < 0 || y0 < 0) return;
        set_color(w, cimg0, 222, 170, 60);                         // border
        rect(w, x0, y0, x0 + pw - 1, y0 + ph - 1);
        set_color(w, cimg0, 14, 16, 36);                           // background
        rect(w, x0 + s, y0 + s, x0 + pw - 1 - s, y0 + ph - 1 - s);
        const uint8_t colors[4][3] = { { 236, 236, 244 }, { 255, 200, 70 }, { 140, 144, 180 }, { 90, 230, 120 } };
        int last_color = -1;
        for (size_t i = 0; i < lines.size(); i++) {
            if (lines[i].text.empty()) continue;
            int c = lines[i].color;
            if (c != last_color) { set_color(w, cimg0, colors[c][0], colors[c][1], colors[c][2]); last_color = c; }
            text(w, x0 + 8 * s, y0 + 8 * s + int(i) * lh, s, lines[i].text);
        }
    }
#endif

}

namespace {
    // The game's own count of frames played in the current game (60 per second, stops while
    // paused and at game over, reset when the next game starts). Found by searching RAM.
    constexpr uint32_t game_frames_addr = 0x8011EEE8;
    // Shown while it's counting, and for 5 s after it stops (so the final time stays up).
    bool game_timer(uint8_t* rdram, uint64_t frame, char* out, size_t n) {
        static uint32_t last_value = 0;
        static uint64_t last_change = 0;
        uint32_t v = *reinterpret_cast<uint32_t*>(rdram + (game_frames_addr & 0x7FFFFC));
        if (v != last_value) { last_value = v; last_change = frame; }
        if (v == 0 || v > 60u * 60 * 60 * 24 || frame - last_change > 300) return false;
        uint32_t secs = v / 60;
        if (secs >= 3600) snprintf(out, n, "%u:%02u:%02u", secs / 3600, (secs / 60) % 60, secs % 60);
        else snprintf(out, n, "%u:%02u", secs / 60, secs % 60);
        return true;
    }
}

// Builds the overlay list (FPS counter, play timer and/or after-game panel). Returns false if there's nothing to draw.
bool tnt_build_overlay(uint8_t* rdram, uint32_t game_dl, uint64_t frame) {
#if defined(__vita__)
        // The Vita build has only the FPS counter: no high-score panel or play timer.
        constexpr bool show_panel = false, show_timer = false;
        char timer[16] = {};
        (void)game_timer;
#else
        tnt::leaderboard::Panel panel;
        bool show_panel = tnt::leaderboard::get_panel(panel);
        char timer[16] = {};
        bool show_timer = tnt_timer_enabled.load() && game_timer(rdram, frame, timer, sizeof(timer));
#endif
        bool show_fps = tnt_overlay_enabled.load();
        if (!show_panel && !show_fps && !show_timer) return false;
        uint32_t cimg0 = 0, cimg1 = 0;
        if (!find_color_image(rdram, game_dl, cimg0, cimg1)) return false;
        int width = int(cimg0 & 0xFFF) + 1;
        int height = width >= 640 ? 480 : 240;

        DlWriter w{ rdram, tnt_overlay_dl_addr, tnt_overlay_dl_addr }; // 64 KB, up to the end of RDRAM
        w.cmd(0xE7000000u, 0);                                  // G_RDPPIPESYNC
        w.cmd(cimg0, cimg1);                                    // same colour image as the game
        w.cmd(0xE3000A01u, 0x00300000u);                        // cycle type: FILL
        w.cmd(0xE200001Cu, 0);                                  // render mode: none
        w.cmd(0xED000000u, (uint32_t(width) << 14) | (uint32_t(height) << 2)); // scissor: whole screen

        if (show_fps) {
            char fps[16], frames[24];
            snprintf(fps, sizeof(fps), "%.1f", tnt_game_fps.load());
            snprintf(frames, sizeof(frames), "%llu", (unsigned long long)frame);
            int text_w = std::max<int>(int(strlen(fps)), int(strlen(frames))) * 7 + 4;
            int x = 8, y = 8;
            if (x + text_w < width) {
                set_color(w, cimg0, 0, 0, 0);                   // backing box
                rect(w, x - 3, y - 3, x + text_w - 2, y + 23);
                set_color(w, cimg0, 255, 214, 0);               // yellow: game fps
                number(w, x, y, fps);
                set_color(w, cimg0, 255, 255, 255);             // white: frame counter
                number(w, x, y + 12, frames);
            }
        }
        if (show_timer) {
            int text_w = 0;
            for (const char* c = timer; *c; c++) text_w += (*c == ':') ? 3 : 7;
            int x = width - text_w - 8, y = 8;
            set_color(w, cimg0, 0, 0, 0);                       // backing box
            rect(w, x - 3, y - 3, x + text_w, y + 11);
            set_color(w, cimg0, 120, 220, 255);                 // light blue: play time
            number(w, x, y, timer);
        }
#if !defined(__vita__)
        if (show_panel) draw_panel(w, cimg0, width, height, panel);
#endif

        w.cmd(0xE9000000u, 0);                                  // G_RDPFULLSYNC
        w.cmd(0xDF000000u, 0);                                  // G_ENDDL
        return !w.full();
    }
