// The New Tetris: Recompiled - game setup shared by all backends.
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include "tnt_game.hpp"
#include "settings.hpp"
#include "librecomp/rsp.hpp"

extern "C" void recomp_entrypoint(uint8_t* rdram, recomp_context* ctx);
gpr get_entrypoint_address();                       // RecompiledFuncs/lookup.cpp
RspUcodeFunc* tnt_get_rsp_microcode(const OSTask* task); // recomp/rsp/tnt_rsp.cpp
RspExitReason tnt_hle_audio_ucode(uint8_t* rdram, uint32_t ucode_addr); // hle_audio.cpp

// Picks the recompiled audio microcode or the high-level version (settings.ini [audio] audio_microcode).
RspUcodeFunc* tnt_select_rsp_microcode(const OSTask* task) {
    static const bool use_hle = [] {
        const std::string& m = tnt::settings().audio_microcode;
#if defined(__vita__)
        bool hle = (m != "recompiled");
#else
        bool hle = (m == "hle");
#endif
        printf("[audio] sound processor: %s\n", hle ? "high-level (HLE)" : "recompiled microcode");
        return hle;
    }();
    if (use_hle && task->t.type == M_AUDTASK) return tnt_hle_audio_ucode;
    return tnt_get_rsp_microcode(task);
}
void tnt_register_overlays();                       // register_overlays.cpp

// On hardware, osCreateViManager -> __osViInit installs a default VI mode
// (osViModeNtscLan1, or PAL/MPAL by osTvType) with the screen blanked, so VI
// interrupts flow from boot. The New Tetris relies on that: its scheduler waits for
// VI retraces before the audio thread runs, and the game only calls osViSetMode
// after audio init has finished. N64ModernRuntime's osCreateViManager is a no-op and
// sends no VI events until a mode is set, so without this the game deadlocks at boot.
// (libultra also blanks the screen here, but the runtime's osViSetMode doesn't clear
// the blank flag the way libultra's does, and the game never calls osViBlack(0), so
// blanking would leave the screen black for good. Only the mode is set.)
static constexpr int32_t osViModeNtscLan1_addr = (int32_t)0x800DA6F0; // libultra data in the loaded image
static void tnt_on_init(uint8_t* rdram, recomp_context*) {
    osViSetMode(rdram, osViModeNtscLan1_addr);
}

static const recomp::Version project_version{ 0, 1, 0, "-dev" };

// N64 thread ids/priorities as created by the game; named for easier debugging.
static std::string get_game_thread_name(const OSThread* t) {
    std::string name = "[TNT] ";
    switch (t->priority) {
        case 150: return name + "PIMGR";
        case 254: return name + "VIMGR";
        default:  return name + "id" + std::to_string(t->id) + "p" + std::to_string(t->priority);
    }
}

std::filesystem::path tnt::data_folder() {
#if defined(__vita__)
    return std::filesystem::path{ TNT_VITA_APP_DIR } / "tnt_data";
#endif
    if (const char* env = std::getenv("TNT_DATA_DIR")) {
        return std::filesystem::path{ env };
    }
    return std::filesystem::current_path() / "tnt_data";
}

static bool ends_with_rom_ext(const std::string& s) {
    for (const char* ext : { ".z64", ".Z64", ".n64", ".N64", ".v64", ".V64" }) {
        size_t n = std::strlen(ext);
        if (s.size() >= n && s.compare(s.size() - n, n, ext) == 0) return true;
    }
    return false;
}

static const char* rom_error_text(recomp::RomValidationError e) {
    switch (e) {
        case recomp::RomValidationError::Good: return "ok";
        case recomp::RomValidationError::FailedToOpen: return "could not open the file";
        case recomp::RomValidationError::NotARom: return "not an N64 ROM";
        case recomp::RomValidationError::IncorrectRom: return "this is not The New Tetris (USA)";
        case recomp::RomValidationError::NotYet: return "unsupported ROM";
        case recomp::RomValidationError::IncorrectVersion: return "wrong revision; the USA version is required (MD5 7a28179b00734c9aa0f0609fafaafd5f)";
        default: return "unknown error";
    }
}

void tnt_install_crash_handler(); // crash_handler_win.cpp
#if defined(__vita__)
void tnt_vita_early_init();                       // vita/vita_backend.cpp
std::string tnt_vita_find_rom();                  // "" once the ROM is stored, or if none is there
void tnt_vita_set_error(const std::string& msg);  // shown on the status screen
RspUcodeFunc* tnt_vita_get_rsp_microcode(const OSTask* task);
#endif

int main(int argc, char** argv) {
#if defined(__vita__)
    // No console on the Vita: log to a file next to the app's data.
    tnt_vita_early_init();
#endif
    // Unbuffered output so logs survive a crash when redirected to a file.
    setvbuf(stdout, nullptr, _IONBF, 0);
    setvbuf(stderr, nullptr, _IONBF, 0);
    tnt_install_crash_handler();
    std::error_code ec;
    std::filesystem::create_directories(tnt::data_folder(), ec);
    recomp::register_config_path(tnt::data_folder());
    tnt::init_settings();

    recomp::GameEntry tnt_entry{
        .rom_hash = 0xEDDC4D3AEF798119ULL,   // XXH3-64 of the USA z64 ROM
        .internal_name = "NEWTETRIS",
        .display_name = "The New Tetris",
        .game_id = u8"tnt.n64.us.1.0",
        .mod_game_id = "tnt",
        .save_type = recomp::SaveType::AllowAll, // game probes EEPROM; narrow to Eep4k/Eep16k once confirmed
        .is_enabled = true,
        .entrypoint_address = get_entrypoint_address(),
        .entrypoint = recomp_entrypoint,
        .on_init_callback = tnt_on_init,
    };
    recomp::register_game(tnt_entry);
    tnt_register_overlays();

    // Usage: TNTRecompiled [path/to/rom.z64]
    // A ROM path is validated and stored in the data folder; after that the game starts with no arguments.
    std::vector<char*> args{ argv, argv + argc };
    std::string rom_arg;
    for (int i = 1; i < argc; i++) {
        if (ends_with_rom_ext(argv[i])) rom_arg = argv[i];
    }
    if (!rom_arg.empty()) {
        auto err = recomp::select_rom(rom_arg, tnt_entry.game_id);
        if (err != recomp::RomValidationError::Good) {
            fprintf(stderr, "ROM rejected: %s (%s)\n", rom_arg.c_str(), rom_error_text(err));
            return EXIT_FAILURE;
        }
        printf("ROM accepted and stored in %s\n", tnt::data_folder().string().c_str());
    }
#if defined(__vita__)
    // No command line on the Vita: the first time, look for a ROM in the app folder.
    if (rom_arg.empty()) rom_arg = tnt_vita_find_rom();
    if (!rom_arg.empty()) {
        auto err = recomp::select_rom(rom_arg, tnt_entry.game_id);
        if (err == recomp::RomValidationError::Good) printf("ROM accepted: %s\n", rom_arg.c_str());
        else tnt_vita_set_error(std::string("ROM rejected: ") + rom_arg + " (" + rom_error_text(err) + ")");
    }
#endif
    // Auto-start the game unless the caller passed --game themselves.
    static char game_flag[] = "--game";
    static char game_name[] = "tnt";
    bool has_game_flag = false;
    for (int i = 1; i < argc; i++) if (std::strcmp(argv[i], "--game") == 0) has_game_flag = true;
    if (!has_game_flag) { args.push_back(game_flag); args.push_back(game_name); }

    tnt::Backend backend = tnt::make_backend(argc, argv);

    recomp::Configuration cfg{};
    cfg.argc = (int)args.size();
    cfg.argv = args.data();
    cfg.project_version = project_version;
#if defined(__vita__)
    cfg.rsp_callbacks = { .get_rsp_microcode = tnt_vita_get_rsp_microcode }; // timed, for the status screen
#else
    cfg.rsp_callbacks = { .get_rsp_microcode = tnt_select_rsp_microcode };
#endif
    cfg.renderer_callbacks = backend.renderer;
    cfg.audio_callbacks = backend.audio;
    cfg.input_callbacks = backend.input;
    cfg.gfx_callbacks = backend.gfx;
    cfg.events_callbacks = backend.events;
    cfg.error_handling_callbacks = backend.error_handling;
    cfg.threads_callbacks = { .get_game_thread_name = get_game_thread_name };

    recomp::start(cfg);
    return EXIT_SUCCESS;
}
