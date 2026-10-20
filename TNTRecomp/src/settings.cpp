#include "settings.hpp"

#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <sstream>

namespace tnt { std::filesystem::path data_folder(); } // main.cpp

namespace {
    tnt::Settings g_settings;

    std::string trim(const std::string& s) {
        size_t a = 0, b = s.size();
        while (a < b && std::isspace((unsigned char)s[a])) a++;
        while (b > a && std::isspace((unsigned char)s[b - 1])) b--;
        return s.substr(a, b - a);
    }
    std::string lower(std::string s) {
        for (auto& c : s) c = (char)std::tolower((unsigned char)c);
        return s;
    }
    bool parse_bool(const std::string& v, bool& out) {
        std::string l = lower(v);
        if (l == "true" || l == "yes" || l == "on" || l == "1") { out = true; return true; }
        if (l == "false" || l == "no" || l == "off" || l == "0") { out = false; return true; }
        return false;
    }
}

const std::vector<tnt::SettingField>& tnt::setting_fields() {
    using S = Settings;
    static const std::vector<SettingField> fields = {
        { "display", "renderer", &S::renderer, { "auto", "d3d12", "vulkan" }, 0, 0,
          "Graphics API. auto picks D3D12 on Windows." },
        { "display", "fullscreen", &S::fullscreen, {}, 0, 0,
          "Start in fullscreen. F11 or Alt+Enter toggles it while playing." },
        { "display", "window_width", &S::window_width, {}, 320, 7680, "Window size in pixels." },
        { "display", "window_height", &S::window_height, {}, 240, 4320, "" },
        { "display", "window_x", &S::window_x, {}, -1, 16384, "Window position in pixels; -1 centres it." },
        { "display", "window_y", &S::window_y, {}, -1, 16384, "" },
        { "display", "resolution", &S::resolution, { "auto", "native", "2x" }, 0, 0,
          "auto renders at the window's resolution; native is the N64's 320x240; 2x is 640x480." },
        { "display", "antialiasing", &S::antialiasing, { "none", "2x", "4x", "8x" }, 0, 0, "MSAA level." },
        { "display", "aspect_ratio", &S::aspect_ratio, { "original", "widescreen" }, 0, 0,
          "widescreen extends the 3D scenes to fill the window (experimental)." },
        { "display", "refresh_rate", &S::refresh_rate, { "original", "display", "manual" }, 0, 0,
          "original runs at the game's own rate; display matches your monitor; manual uses refresh_rate_value." },
        { "display", "refresh_rate_value", &S::refresh_rate_value, {}, 20, 360, "Target rate when refresh_rate = manual." },
        { "display", "show_fps", &S::show_fps, {}, 0, 0, "FPS and frame counter in the corner. F3 toggles it while playing." },
        { "display", "developer_mode", &S::developer_mode, {}, 0, 0, "RT64's debugging overlay." },
        { "display", "dump_backgrounds", &S::dump_backgrounds, {}, 0, 0,
          "Save each background the first time it's shown, as a .tga in the backgrounds folder next to this file (PS Vita)." },
        { "audio", "volume", &S::volume, {}, 0, 100, "Master volume, 0-100." },
        { "audio", "audio_latency", &S::audio_latency, {}, 1, 8,
          "Frames of extra audio kept queued. Raise it if you hear crackling; lower means less delay." },
        { "audio", "audio_microcode", &S::audio_microcode, { "auto", "recompiled", "hle" }, 0, 0,
          "How the N64's sound processor is run. recompiled is exact; hle is much faster (used on the PS Vita). auto picks for you." },
        { "controls", "rumble", &S::rumble, {}, 0, 0,
          "Report a Rumble Pak. The game then shows a Controller Pak prompt at boot (press B to skip)." },
        { "keyboard", "layout", &S::keyboard_layout, { "classic", "modern", "custom" }, 0, 0,
          "classic: X/C rotate, Q hold, arrows move (Up = hard drop), Enter start. "
          "modern: arrows move, Up or Space hard drop, X/Z rotate, C or Shift hold, Enter or P start. "
          "custom: uses the keys listed below." },
        { "keyboard", "escape_quits", &S::escape_quits, {}, 0, 0,
          "Esc closes the game. Set to false to free Esc so it can be bound below." },
        { "keyboard", "a", &S::key_a, {}, 0, 0,
          "A button: rotate" },
        { "keyboard", "b", &S::key_b, {}, 0, 0, "B button: rotate the other way" },
        { "keyboard", "hold", &S::key_hold, {}, 0, 0, "L button: hold piece" },
        { "keyboard", "start", &S::key_start, {}, 0, 0, "START: start / pause" },
        { "keyboard", "dpad_up", &S::key_dpad_up, {}, 0, 0, "D-pad up: hard drop" },
        { "keyboard", "dpad_down", &S::key_dpad_down, {}, 0, 0, "D-pad down: soft drop" },
        { "keyboard", "dpad_left", &S::key_dpad_left, {}, 0, 0, "D-pad left / right: move" },
        { "keyboard", "dpad_right", &S::key_dpad_right, {}, 0, 0, "" },
        { "keyboard", "z", &S::key_z, {}, 0, 0, "Z button" },
        { "keyboard", "r", &S::key_r, {}, 0, 0, "R button" },
        { "keyboard", "c_up", &S::key_c_up, {}, 0, 0, "C buttons: pick who gets your garbage in multiplayer" },
        { "keyboard", "c_down", &S::key_c_down, {}, 0, 0, "" },
        { "keyboard", "c_left", &S::key_c_left, {}, 0, 0, "" },
        { "keyboard", "c_right", &S::key_c_right, {}, 0, 0, "" },
        { "keyboard", "stick_up", &S::key_stick_up, {}, 0, 0, "Analogue stick" },
        { "keyboard", "stick_down", &S::key_stick_down, {}, 0, 0, "" },
        { "keyboard", "stick_left", &S::key_stick_left, {}, 0, 0, "" },
        { "keyboard", "stick_right", &S::key_stick_right, {}, 0, 0, "" },
        { "leaderboard", "after_game_panel", &S::after_game_panel, {}, 0, 0,
          "Show the high-score table for the mode you played after each game." },
        { "leaderboard", "panel_seconds", &S::panel_seconds, {}, 3, 600,
          "How long the panel stays up if no button is pressed." },
        { "launcher", "show_launcher", &S::show_launcher, {}, 0, 0,
          "Reserved: show a settings screen before the game starts (not built yet)." },
    };
    return fields;
}

tnt::Settings& tnt::settings() { return g_settings; }

std::filesystem::path tnt::settings_path() {
    if (const char* env = std::getenv("TNT_SETTINGS")) return std::filesystem::path{ env };
    return data_folder().parent_path() / "settings.ini";
}

bool tnt::load_settings(const std::filesystem::path& path, Settings& out, std::vector<std::string>* warnings) {
    std::ifstream in(path);
    if (!in) return false;
    auto warn = [&](int line, const std::string& msg) {
        if (warnings) warnings->push_back("settings.ini line " + std::to_string(line) + ": " + msg);
    };
    std::string section, raw;
    int line_no = 0;
    while (std::getline(in, raw)) {
        line_no++;
        std::string line = trim(raw);
        if (line.empty() || line[0] == ';' || line[0] == '#') continue;
        if (line.front() == '[') {
            size_t end = line.find(']');
            section = lower(trim(line.substr(1, end == std::string::npos ? std::string::npos : end - 1)));
            continue;
        }
        size_t eq = line.find('=');
        if (eq == std::string::npos) { warn(line_no, "expected key = value"); continue; }
        std::string key = lower(trim(line.substr(0, eq)));
        std::string value = line.substr(eq + 1);
        for (size_t p = 1; p < value.size(); p++) {
            if ((value[p] == ';' || value[p] == '#') && std::isspace((unsigned char)value[p - 1])) { value.erase(p); break; }
        }
        value = trim(value);

        const SettingField* field = nullptr;
        for (const auto& f : setting_fields()) if (key == f.key && (section.empty() || section == f.section)) field = &f;
        if (!field) { warn(line_no, "unknown setting [" + section + "] " + key); continue; }

        std::visit([&](auto member) {
            using T = std::decay_t<decltype(out.*member)>;
            if constexpr (std::is_same_v<T, bool>) {
                bool b;
                if (parse_bool(value, b)) out.*member = b;
                else warn(line_no, key + " should be true or false, not '" + value + "'");
            } else if constexpr (std::is_same_v<T, int>) {
                char* end = nullptr;
                long v = std::strtol(value.c_str(), &end, 10);
                if (value.empty() || *end != '\0') { warn(line_no, key + " should be a number, not '" + value + "'"); return; }
                if (v < field->min || v > field->max) {
                    warn(line_no, key + " = " + value + " is outside " + std::to_string(field->min) + "-" + std::to_string(field->max) + ", clamped");
                    v = std::clamp<long>(v, field->min, field->max);
                }
                out.*member = (int)v;
            } else {
                std::string l = lower(value);
                if (field->choices.empty()) out.*member = value; // free text (key lists)
                else if (std::find(field->choices.begin(), field->choices.end(), l) != field->choices.end()) out.*member = l;
                else {
                    std::string all;
                    for (auto& c : field->choices) all += (all.empty() ? "" : ", ") + c;
                    warn(line_no, key + " should be one of: " + all + " (not '" + value + "')");
                }
            }
        }, field->member);
    }
    return true;
}

bool tnt::save_settings(const std::filesystem::path& path, const Settings& s) {
    std::ostringstream o;
    o << "; The New Tetris: Recompiled settings\n"
      << "; Edit with any text editor; changes apply the next time the game starts.\n"
      << "; Delete this file to go back to the defaults.\n";
    const char* section = "";
    for (const auto& f : setting_fields()) {
        if (std::string(section) != f.section) {
            section = f.section;
            o << "\n[" << section << "]\n";
            if (std::string(section) == "keyboard")
                o << "; Keyboard only; gamepads keep their own mapping.\n"
                  << "; The keys after escape_quits are used when layout = custom. Each is a list of key\n"
                  << "; names separated by commas, e.g.  a = X, Up\n"
                  << "; Names: A-Z, 0-9, Up, Down, Left, Right, Space, Enter, Shift, Right Shift, Ctrl,\n"
                  << "; Right Ctrl, Alt, Tab, Backspace, Escape, Keypad 0-9, Semicolon, Comma, Period, Slash.\n"
                  << "; Leave a line empty for no key. F3, F4 and F11 are kept for the port's own shortcuts.\n";
        }
        if (f.help && *f.help) o << "; " << f.help << "\n";
        std::visit([&](auto member) {
            using T = std::decay_t<decltype(s.*member)>;
            bool empty_value = false;
            if constexpr (std::is_same_v<T, std::string>) empty_value = (s.*member).empty();
            o << f.key << (empty_value ? " =" : " = ");
            if constexpr (std::is_same_v<T, bool>) o << (s.*member ? "true" : "false");
            else o << s.*member;
            if constexpr (std::is_same_v<T, std::string>) {
                if (f.choices.empty()) { o << "\n"; return; }
                o << "    ; ";
                for (size_t i = 0; i < f.choices.size(); i++) o << (i ? " | " : "") << f.choices[i];
            }
            o << "\n";
        }, f.member);
    }
    std::filesystem::path tmp = path; tmp += ".tmp";
    {
        std::ofstream out(tmp, std::ios::binary | std::ios::trunc);
        if (!out) return false;
        out << o.str();
        if (!out) return false;
    }
    std::error_code ec;
    std::filesystem::rename(tmp, path, ec);
    if (ec) { std::filesystem::remove(tmp, ec); return false; }
    return true;
}

void tnt::init_settings() {
    std::filesystem::path path = settings_path();
    std::vector<std::string> warnings;
    if (!std::filesystem::exists(path)) {
        if (save_settings(path, g_settings)) printf("[settings] wrote default settings to %s\n", path.string().c_str());
        else printf("[settings] couldn't write %s; using defaults\n", path.string().c_str());
        return;
    }
    if (load_settings(path, g_settings, &warnings)) printf("[settings] loaded %s\n", path.string().c_str());
    else printf("[settings] couldn't read %s; using defaults\n", path.string().c_str());
    for (auto& w : warnings) printf("[settings] %s\n", w.c_str());
}
