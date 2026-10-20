#pragma once
// Local leaderboard: every finished game is appended to tnt_data/leaderboard.csv, and
// tnt_data/leaderboard.html is rebuilt from it (plus the game's own high-score tables).
#include <cstdint>
#include <filesystem>
#include <string>
#include <vector>

namespace tnt::leaderboard {
    // Rebuilds leaderboard.html (reading the game's tables from RDRAM if available) and returns its path.
    std::filesystem::path write_html();
    // A one-line summary of the most recent game ("Marathon 37 pts, #2 of 9"), and when it was set.
    std::string last_message(uint32_t* age_ms = nullptr);
    void set_rdram(uint8_t* rdram);

    // ---- After-game panel (drawn by rt64_render_context.cpp) ----
    struct Result { std::string name; uint32_t score = 0, seconds = 0; };
    struct TableEntry { std::string name; uint32_t score = 0, seconds = 0; };
    struct Panel {
        int mode = 0;                 // 0 Marathon, 1 Sprint, 2 Ultra
        std::vector<Result> results;  // the players from the game that just ended
        TableEntry table[5];          // the game's own high-score table for that mode, read live
        bool table_valid = false;
    };
    // True while the panel should be on screen; fills `out`.
    bool get_panel(Panel& out);
    // A button was pressed: hides the panel once it has been up for a moment.
    void on_button();
    const char* mode_name(int mode);
    // From settings.ini [leaderboard].
    void configure_panel(bool enabled, int seconds);
}
