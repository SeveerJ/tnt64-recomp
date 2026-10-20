// RT64 renderer for The New Tetris. Adapted from Zelda64Recomp's rt64_render_context.cpp
// (GPL-3.0) for this N64ModernRuntime revision: no texture packs or UI hooks, and
// send_dummy_workload is implemented (the runtime calls it before the game starts).
#include <memory>
#include <cstring>
#include <algorithm>
#include <cassert>
#include <cstdio>
#include <cctype>
#include <vector>

#include "hle/rt64_application.h"
#include "ultramodern/ultramodern.hpp"
#include "ultramodern/config.hpp"
#include "ultramodern/renderer_context.hpp"

#include <atomic>
#include <chrono>
#include <string>
#include "leaderboard.hpp"
std::atomic<uint64_t> tnt_dl_count{0}, tnt_screen_count{0};
std::atomic<bool> tnt_overlay_enabled{true};   // toggled with F3 (sdl_backend.cpp)
std::atomic<float> tnt_game_fps{0.0f}, tnt_vi_rate{0.0f};

// Overlay (overlay.cpp): FPS counter and after-game high-score panel.
constexpr uint32_t tnt_overlay_dl_addr = 0x7F0000;
bool tnt_build_overlay(uint8_t* rdram, uint32_t game_dl, uint64_t frame);
namespace {
    void update_rates() {
        using clock = std::chrono::steady_clock;
        static clock::time_point last = clock::now();
        static uint64_t last_dl = 0, last_vi = 0;
        auto now = clock::now();
        double dt = std::chrono::duration<double>(now - last).count();
        if (dt >= 0.5) {
            uint64_t dl = tnt_dl_count.load(), vi = tnt_screen_count.load();
            tnt_game_fps = float((dl - last_dl) / dt);
            tnt_vi_rate = float((vi - last_vi) / dt);
            last = now; last_dl = dl; last_vi = vi;
        }
    }
}
namespace {
    uint8_t DMEM[0x1000];
    uint8_t IMEM[0x1000];
}

unsigned int MI_INTR_REG = 0;
unsigned int DPC_START_REG = 0;
unsigned int DPC_END_REG = 0;
unsigned int DPC_CURRENT_REG = 0;
unsigned int DPC_STATUS_REG = 0;
unsigned int DPC_CLOCK_REG = 0;
unsigned int DPC_BUFBUSY_REG = 0;
unsigned int DPC_PIPEBUSY_REG = 0;
unsigned int DPC_TMEM_REG = 0;

static void dummy_check_interrupts() {}

static RT64::UserConfiguration::AspectRatio to_rt64(ultramodern::renderer::AspectRatio o) {
    switch (o) {
        case ultramodern::renderer::AspectRatio::Expand: return RT64::UserConfiguration::AspectRatio::Expand;
        case ultramodern::renderer::AspectRatio::Manual: return RT64::UserConfiguration::AspectRatio::Manual;
        default: return RT64::UserConfiguration::AspectRatio::Original;
    }
}
static RT64::UserConfiguration::Antialiasing to_rt64(ultramodern::renderer::Antialiasing o) {
    switch (o) {
        case ultramodern::renderer::Antialiasing::MSAA2X: return RT64::UserConfiguration::Antialiasing::MSAA2X;
        case ultramodern::renderer::Antialiasing::MSAA4X: return RT64::UserConfiguration::Antialiasing::MSAA4X;
        case ultramodern::renderer::Antialiasing::MSAA8X: return RT64::UserConfiguration::Antialiasing::MSAA8X;
        default: return RT64::UserConfiguration::Antialiasing::None;
    }
}
static RT64::UserConfiguration::RefreshRate to_rt64(ultramodern::renderer::RefreshRate o) {
    switch (o) {
        case ultramodern::renderer::RefreshRate::Display: return RT64::UserConfiguration::RefreshRate::Display;
        case ultramodern::renderer::RefreshRate::Manual: return RT64::UserConfiguration::RefreshRate::Manual;
        default: return RT64::UserConfiguration::RefreshRate::Original;
    }
}
static RT64::UserConfiguration::InternalColorFormat to_rt64(ultramodern::renderer::HighPrecisionFramebuffer o) {
    switch (o) {
        case ultramodern::renderer::HighPrecisionFramebuffer::Off: return RT64::UserConfiguration::InternalColorFormat::Standard;
        case ultramodern::renderer::HighPrecisionFramebuffer::On: return RT64::UserConfiguration::InternalColorFormat::High;
        default: return RT64::UserConfiguration::InternalColorFormat::Automatic;
    }
}

static void apply_user_config(RT64::Application* app, const ultramodern::renderer::GraphicsConfig& config) {
    switch (config.res_option) {
        default:
        case ultramodern::renderer::Resolution::Auto:
            app->userConfig.resolution = RT64::UserConfiguration::Resolution::WindowIntegerScale;
            app->userConfig.downsampleMultiplier = 1;
            break;
        case ultramodern::renderer::Resolution::Original:
            app->userConfig.resolution = RT64::UserConfiguration::Resolution::Manual;
            app->userConfig.resolutionMultiplier = std::max(config.ds_option, 1);
            app->userConfig.downsampleMultiplier = std::max(config.ds_option, 1);
            break;
        case ultramodern::renderer::Resolution::Original2x:
            app->userConfig.resolution = RT64::UserConfiguration::Resolution::Manual;
            app->userConfig.resolutionMultiplier = 2.0 * std::max(config.ds_option, 1);
            app->userConfig.downsampleMultiplier = std::max(config.ds_option, 1);
            break;
    }
    switch (config.hr_option) {
        default:
        case ultramodern::renderer::HUDRatioMode::Original:
            app->userConfig.extAspectRatio = RT64::UserConfiguration::AspectRatio::Original;
            break;
        case ultramodern::renderer::HUDRatioMode::Clamp16x9:
            app->userConfig.extAspectRatio = RT64::UserConfiguration::AspectRatio::Manual;
            app->userConfig.extAspectTarget = 16.0 / 9.0;
            break;
        case ultramodern::renderer::HUDRatioMode::Full:
            app->userConfig.extAspectRatio = RT64::UserConfiguration::AspectRatio::Expand;
            break;
    }
    app->userConfig.aspectRatio = to_rt64(config.ar_option);
    app->userConfig.antialiasing = to_rt64(config.msaa_option);
    app->userConfig.refreshRate = to_rt64(config.rr_option);
    app->userConfig.refreshRateTarget = config.rr_manual_value;
    app->userConfig.internalColorFormat = to_rt64(config.hpfb_option);
    app->userConfig.displayBuffering = RT64::UserConfiguration::DisplayBuffering::Triple;
}

static ultramodern::renderer::SetupResult map_setup_result(RT64::Application::SetupResult r) {
    switch (r) {
        case RT64::Application::SetupResult::Success: return ultramodern::renderer::SetupResult::Success;
        case RT64::Application::SetupResult::DynamicLibrariesNotFound: return ultramodern::renderer::SetupResult::DynamicLibrariesNotFound;
        case RT64::Application::SetupResult::InvalidGraphicsAPI: return ultramodern::renderer::SetupResult::InvalidGraphicsAPI;
        case RT64::Application::SetupResult::GraphicsAPINotFound: return ultramodern::renderer::SetupResult::GraphicsAPINotFound;
        case RT64::Application::SetupResult::GraphicsDeviceNotFound: return ultramodern::renderer::SetupResult::GraphicsDeviceNotFound;
    }
    return ultramodern::renderer::SetupResult::GraphicsDeviceNotFound;
}

static ultramodern::renderer::GraphicsApi map_graphics_api(RT64::UserConfiguration::GraphicsAPI api) {
    switch (api) {
        case RT64::UserConfiguration::GraphicsAPI::D3D12: return ultramodern::renderer::GraphicsApi::D3D12;
        case RT64::UserConfiguration::GraphicsAPI::Vulkan: return ultramodern::renderer::GraphicsApi::Vulkan;
        case RT64::UserConfiguration::GraphicsAPI::Metal: return ultramodern::renderer::GraphicsApi::Metal;
        default: return ultramodern::renderer::GraphicsApi::Auto;
    }
}

namespace tnt {
    class RT64Context final : public ultramodern::renderer::RendererContext {
    public:
        RT64Context(uint8_t* rdram, ultramodern::renderer::WindowHandle window_handle, bool developer_mode) {
            static unsigned char dummy_rom_header[0x40];

            RT64::Application::Core core{};
#if defined(_WIN32)
            core.window = window_handle.window;
#elif defined(__linux__) || defined(__ANDROID__)
            core.window = window_handle;
#elif defined(__APPLE__)
            core.window.window = window_handle.window;
            core.window.view = window_handle.view;
#endif
            core.checkInterrupts = dummy_check_interrupts;
            core.HEADER = dummy_rom_header;
            core.RDRAM = rdram;
            core.DMEM = DMEM;
            core.IMEM = IMEM;
            core.MI_INTR_REG = &MI_INTR_REG;
            core.DPC_START_REG = &DPC_START_REG;
            core.DPC_END_REG = &DPC_END_REG;
            core.DPC_CURRENT_REG = &DPC_CURRENT_REG;
            core.DPC_STATUS_REG = &DPC_STATUS_REG;
            core.DPC_CLOCK_REG = &DPC_CLOCK_REG;
            core.DPC_BUFBUSY_REG = &DPC_BUFBUSY_REG;
            core.DPC_PIPEBUSY_REG = &DPC_PIPEBUSY_REG;
            core.DPC_TMEM_REG = &DPC_TMEM_REG;

            ultramodern::renderer::ViRegs* vi = ultramodern::renderer::get_vi_regs();
            core.VI_STATUS_REG = &vi->VI_STATUS_REG;
            core.VI_ORIGIN_REG = &vi->VI_ORIGIN_REG;
            core.VI_WIDTH_REG = &vi->VI_WIDTH_REG;
            core.VI_INTR_REG = &vi->VI_INTR_REG;
            core.VI_V_CURRENT_LINE_REG = &vi->VI_V_CURRENT_LINE_REG;
            core.VI_TIMING_REG = &vi->VI_TIMING_REG;
            core.VI_V_SYNC_REG = &vi->VI_V_SYNC_REG;
            core.VI_H_SYNC_REG = &vi->VI_H_SYNC_REG;
            core.VI_LEAP_REG = &vi->VI_LEAP_REG;
            core.VI_H_START_REG = &vi->VI_H_START_REG;
            core.VI_V_START_REG = &vi->VI_V_START_REG;
            core.VI_V_BURST_REG = &vi->VI_V_BURST_REG;
            core.VI_X_SCALE_REG = &vi->VI_X_SCALE_REG;
            core.VI_Y_SCALE_REG = &vi->VI_Y_SCALE_REG;

            RT64::ApplicationConfiguration app_config;
            app_config.useConfigurationFile = false;
            app = std::make_unique<RT64::Application>(core, app_config);

            const auto& cfg = ultramodern::renderer::get_graphics_config();
            apply_user_config(app.get(), cfg);
            app->userConfig.developerMode = developer_mode;
            switch (cfg.api_option) {
                case ultramodern::renderer::GraphicsApi::D3D12: app->userConfig.graphicsAPI = RT64::UserConfiguration::GraphicsAPI::D3D12; break;
                case ultramodern::renderer::GraphicsApi::Vulkan: app->userConfig.graphicsAPI = RT64::UserConfiguration::GraphicsAPI::Vulkan; break;
                case ultramodern::renderer::GraphicsApi::Metal: app->userConfig.graphicsAPI = RT64::UserConfiguration::GraphicsAPI::Metal; break;
                default: app->userConfig.graphicsAPI = RT64::UserConfiguration::GraphicsAPI::Automatic; break;
            }

            uint32_t thread_id = 0;
#ifdef _WIN32
            thread_id = window_handle.thread_id;
#endif
            setup_result = map_setup_result(app->setup(thread_id));
            chosen_api = map_graphics_api(app->chosenGraphicsAPI);
            if (setup_result != ultramodern::renderer::SetupResult::Success) {
                app = nullptr;
                return;
            }
            app->setFullScreen(cfg.wm_option == ultramodern::renderer::WindowMode::Fullscreen);
        }

        ~RT64Context() override = default;

        bool valid() override { return static_cast<bool>(app); }

        bool update_config(const ultramodern::renderer::GraphicsConfig& old_config, const ultramodern::renderer::GraphicsConfig& new_config) override {
            if (old_config == new_config) return false;
            if (new_config.wm_option != old_config.wm_option) {
                app->setFullScreen(new_config.wm_option == ultramodern::renderer::WindowMode::Fullscreen);
            }
            apply_user_config(app.get(), new_config);
            app->updateUserConfig(true);
            if (new_config.msaa_option != old_config.msaa_option) {
                app->updateMultisampling();
            }
            return true;
        }

        void enable_instant_present() override {
            app->enhancementConfig.presentation.mode = RT64::EnhancementConfiguration::Presentation::Mode::PresentEarly;
            app->updateEnhancementConfig();
        }

        void send_dl(const OSTask* task) override {
            uint64_t frame = ++tnt_dl_count;
            update_rates();
            app->state->rsp->reset();
            app->interpreter->loadUCodeGBI(task->t.ucode & 0x3FFFFFF, task->t.ucode_data & 0x3FFFFFF, true);
            app->processDisplayLists(app->core.RDRAM, task->t.data_ptr & 0x3FFFFFF, 0, true);
            if (tnt_build_overlay(app->core.RDRAM, task->t.data_ptr & 0x3FFFFFF, frame)) {
                app->processDisplayLists(app->core.RDRAM, tnt_overlay_dl_addr, 0, true);
            }
        }

        // Only sent before the game starts (no launcher in this front end), so nothing to draw.
        void send_dummy_workload(uint32_t) override {}

        void update_screen() override { ++tnt_screen_count; app->updateScreen(); }

        void shutdown() override {
            if (app != nullptr) app->end();
        }

        uint32_t get_display_framerate() const override { return app->presentQueue->ext.sharedResources->swapChainRate; }

        float get_resolution_scale() const override {
            constexpr int ReferenceHeight = 240;
            switch (app->userConfig.resolution) {
                case RT64::UserConfiguration::Resolution::WindowIntegerScale:
                    if (app->sharedQueueResources->swapChainHeight > 0) {
                        return std::max(float((app->sharedQueueResources->swapChainHeight + ReferenceHeight - 1) / ReferenceHeight), 1.0f);
                    }
                    return 1.0f;
                case RT64::UserConfiguration::Resolution::Manual:
                    return float(app->userConfig.resolutionMultiplier);
                default:
                    return 1.0f;
            }
        }

    private:
        std::unique_ptr<RT64::Application> app;
    };

    std::unique_ptr<ultramodern::renderer::RendererContext> create_rt64_context(uint8_t* rdram, ultramodern::renderer::WindowHandle window_handle, bool developer_mode) {
        return std::make_unique<RT64Context>(rdram, window_handle, developer_mode);
    }
}
