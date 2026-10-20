#pragma once
// A compact high-level N64 renderer for OpenGL ES 2 (vitaGL on the PS Vita, Mesa for testing).
//
// It interprets F3DEX2 display lists and the RDP commands embedded in them: vertex
// transform and lighting on the CPU, triangles and rectangles drawn with GL, textures
// decoded from RDRAM and cached, and the colour combiner turned into generated shaders.
// Each N64 colour image gets its own framebuffer object; present() shows the one the VI
// is scanning out. Written for The New Tetris: features the game doesn't use are skipped.
#include <cstdint>
#include <memory>
#include <string>

namespace n64gfx {
    struct Config {
        int scale = 2;                 // internal resolution = N64 resolution x scale
        int output_width = 960;        // default framebuffer size
        int output_height = 544;
        bool linear_present = true;    // bilinear when scaling to the screen
        bool direct_to_screen = true;
        std::string dump_dir;          // if set, complete background images are saved here as .tga  // draw screen buffers straight to the display (call end_frame and swap)
    };

    struct Stats {
        uint32_t triangles = 0, rects = 0, draw_calls = 0, texture_uploads = 0, shaders = 0;
        uint32_t textures_cached = 0, framebuffers = 0, unknown_commands = 0, writebacks = 0;
        double dl_ms = 0;              // CPU time spent in the last process_dl()
    };

    class Renderer {
    public:
        Renderer(uint8_t* rdram, const Config& config);
        ~Renderer();
        // Runs one graphics task's display list (data_ptr from the OSTask).
        void process_dl(uint32_t dl_addr);
        // Draws the colour image at the given VI origin to the default framebuffer, letterboxed.
        // Returns false if no matching image has been drawn yet.
        bool present(uint32_t vi_origin);
        // After a frame's display lists: true if they drew to the display, which must then be swapped.
        bool end_frame();
        const Stats& last_stats() const;
    private:
        struct Impl;
        std::unique_ptr<Impl> impl;
    };
}
