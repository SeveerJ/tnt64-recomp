#pragma once
// Shared declarations between the game setup (main.cpp) and the platform backends.
#include <cstdint>
#include <filesystem>
#include "librecomp/game.hpp"
#include "ultramodern/ultramodern.hpp"
#include "ultramodern/renderer_context.hpp"

namespace tnt {
    // Filled in by the backend (headless_backend.cpp or sdl_backend.cpp).
    struct Backend {
        ultramodern::renderer::callbacks_t renderer;
        ultramodern::gfx_callbacks_t gfx;
        ultramodern::audio_callbacks_t audio;
        ultramodern::input::callbacks_t input;
        ultramodern::events::callbacks_t events;
        ultramodern::error_handling::callbacks_t error_handling;
    };
    Backend make_backend(int argc, char** argv);

    // Folder holding the stored ROM copy, saves and logs.
    std::filesystem::path data_folder();
}
