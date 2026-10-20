#pragma once
// User settings, stored in settings.ini next to the tnt_data folder.
//
// Every setting is described once in setting_fields(): section, key, type, allowed
// choices or range, and a help line. The ini reader/writer is driven by that table, and a
// launcher/settings screen can be too: list the fields, show a control for each, then
// call save_settings(). Nothing here depends on SDL or the renderer.
//
// Precedence at startup: built-in defaults < settings.ini < environment variables < command line.
#include <filesystem>
#include <string>
#include <variant>
#include <vector>

namespace tnt {
    struct Settings {
        // [display]
        std::string renderer = "auto";         // auto, d3d12, vulkan
        bool fullscreen = false;
        int window_width = 1280;
        int window_height = 960;
        int window_x = -1;                     // -1 = centred
        int window_y = -1;
        std::string resolution = "auto";       // auto, native, 2x
        std::string antialiasing = "none";     // none, 2x, 4x, 8x
        std::string aspect_ratio = "original"; // original, widescreen
        std::string refresh_rate = "original"; // original, display, manual
        int refresh_rate_value = 60;
        bool show_fps = true;
        bool developer_mode = false;
        bool dump_backgrounds = false;
        // [audio]
        int volume = 100;                      // percent
        int audio_latency = 2;                 // frames of extra audio kept queued
        std::string audio_microcode = "auto";  // auto, recompiled, hle
        // [controls]
        bool rumble = false;
        // [keyboard] Gamepads are unaffected. Each entry is a comma-separated list of key names.
        std::string keyboard_layout = "classic"; // classic, modern, custom (custom uses the keys below)
        bool escape_quits = true;
        std::string key_a = "X", key_b = "C", key_z = "Z", key_start = "Enter";
        std::string key_hold = "Q", key_r = "E";
        std::string key_dpad_up = "Up", key_dpad_down = "Down", key_dpad_left = "Left", key_dpad_right = "Right";
        std::string key_c_up = "I", key_c_down = "K", key_c_left = "J", key_c_right = "L";
        std::string key_stick_up = "W", key_stick_down = "S", key_stick_left = "A", key_stick_right = "D";
        // [leaderboard]
        bool after_game_panel = true;
        int panel_seconds = 30;
        // [launcher]
        bool show_launcher = false;            // reserved for the settings screen
    };

    struct SettingField {
        using Member = std::variant<bool Settings::*, int Settings::*, std::string Settings::*>;
        const char* section;
        const char* key;
        Member member;
        std::vector<std::string> choices;      // for string settings: the allowed values (empty = free text)
        int min = 0, max = 0;                  // for int settings
        const char* help;
    };
    const std::vector<SettingField>& setting_fields();

    // The settings in effect for this run.
    Settings& settings();
    std::filesystem::path settings_path();

    // Reads an ini file over `out` (keys it doesn't mention keep their current value).
    // Problems (unknown keys, bad values) are appended to `warnings`. Returns false if the file couldn't be read.
    bool load_settings(const std::filesystem::path& path, Settings& out, std::vector<std::string>* warnings = nullptr);
    // Writes every setting, with its help text, to `path`.
    bool save_settings(const std::filesystem::path& path, const Settings& s);
    // Loads settings.ini into settings(), writing a default one first if there isn't one.
    void init_settings();
}
