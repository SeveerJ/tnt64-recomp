// Local leaderboard for The New Tetris.
//
// The game calls func_8007875C once per player at the end of every game, to update that
// player's profile and the high-score tables. tnt.recomp.toml hooks its entry point to
// tnt_on_game_result(), which reads the result and appends it to tnt_data/leaderboard.csv.
// tnt_data/leaderboard.html is then rebuilt: per-mode rankings, every game played, and the
// game's own high-score tables as currently held in its save data.
//
// Game memory used (USA 1.0):
//   0x8012EEEC  u8   game mode: 0 Marathon, 1 Sprint (3 minutes), 2 Ultra (race to 150)
//   0x8011FCF0  ptr  save block (0x1900 bytes). +0xF0C: 3 high-score tables (Marathon, Ultra,
//                    Sprint), 5 entries of 0x18 bytes: name[8], 0, ?, ?, ?, u32 score, u32 seconds
//   func_8007875C(a0 = profile, a1 = results, a2 = player index)
//     profile +0x00  name, up to 8 characters
//     results +0x05  u8 number of players
//     results +0x08 + 4*i  u32 game length in seconds (Sprint: capped at 180)
//     results +0x18 + 4*i  u32 score (the game's "lines": 1 per line, bonus for tetrises and squares)
//     results +0x28 + 4*i  u32 lines actually cleared
#include "leaderboard.hpp"
namespace tnt { std::filesystem::path data_folder(); } // main.cpp
#include "recomp.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <ctime>
#include <fstream>
#include <mutex>
#include <sstream>
#include <vector>

namespace {
    constexpr uint32_t mode_addr = 0x8012EEEC;
    constexpr uint32_t save_ptr_addr = 0x8011FCF0;
    const char* const mode_names[3] = { "Marathon", "Sprint", "Ultra" };

    std::atomic<uint8_t*> g_rdram{ nullptr };
    std::mutex mutex;
    std::string last_msg;
    std::chrono::steady_clock::time_point last_msg_time;

    // After-game panel state.
    constexpr uint32_t panel_min_ms = 1500;
    uint32_t panel_max_ms = 30000;
    bool panel_enabled = true;
    bool panel_active = false;
    int panel_mode = 0;
    std::vector<tnt::leaderboard::Result> panel_results;
    std::chrono::steady_clock::time_point panel_time;
    uint32_t ms_since(std::chrono::steady_clock::time_point t) {
        return (uint32_t)std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - t).count();
    }

    struct Game {
        std::string date;   // "2026-10-19 23:58"
        int mode = 0;       // index into mode_names
        int players = 1;
        int player = 0;     // 0-3
        std::string name;
        uint32_t score = 0, lines = 0, seconds = 0;
    };

    bool valid_addr(uint32_t a, uint32_t len) { return a >= 0x80000000u && a + len <= 0x80800000u; }
    uint32_t rd32(uint8_t* rdram, uint32_t a) { return *reinterpret_cast<uint32_t*>(rdram + (a - 0x80000000u)); }
    uint8_t rd8(uint8_t* rdram, uint32_t a) { return rdram[(a ^ 3) - 0x80000000u]; }
    std::string rd_name(uint8_t* rdram, uint32_t a) {
        std::string s;
        for (int i = 0; i < 8; i++) {
            uint8_t c = rd8(rdram, a + i);
            if (c == 0) break;
            s += (c >= 0x20 && c < 0x7F) ? char(c) : '?';
        }
        return s;
    }

    std::filesystem::path csv_path() { return tnt::data_folder() / "leaderboard.csv"; }
    std::filesystem::path html_path() { return tnt::data_folder() / "leaderboard.html"; }

    std::string csv_field(const std::string& s) {
        std::string out = "\"";
        for (char c : s) { if (c == '"') out += '"'; out += c; }
        return out + "\"";
    }

    std::vector<std::string> split_csv(const std::string& line) {
        std::vector<std::string> out; std::string cur; bool q = false;
        for (size_t i = 0; i < line.size(); i++) {
            char c = line[i];
            if (q) {
                if (c == '"' && i + 1 < line.size() && line[i + 1] == '"') { cur += '"'; i++; }
                else if (c == '"') q = false;
                else cur += c;
            }
            else if (c == '"') q = true;
            else if (c == ',') { out.push_back(cur); cur.clear(); }
            else if (c != '\r' && c != '\n') cur += c;
        }
        out.push_back(cur);
        return out;
    }

    std::vector<Game> load_games() {
        std::vector<Game> games;
        std::ifstream in(csv_path());
        std::string line;
        bool header = true;
        while (std::getline(in, line)) {
            if (header) { header = false; continue; }
            auto f = split_csv(line);
            if (f.size() < 8) continue;
            Game g;
            g.date = f[0];
            g.mode = 0;
            for (int m = 0; m < 3; m++) if (f[1] == mode_names[m]) g.mode = m;
            g.players = std::atoi(f[2].c_str());
            g.player = std::atoi(f[3].c_str()) - 1;
            g.name = f[4];
            g.score = (uint32_t)std::strtoul(f[5].c_str(), nullptr, 10);
            g.lines = (uint32_t)std::strtoul(f[6].c_str(), nullptr, 10);
            g.seconds = (uint32_t)std::strtoul(f[7].c_str(), nullptr, 10);
            games.push_back(g);
        }
        return games;
    }

    void append_game(const Game& g) {
        bool exists = std::filesystem::exists(csv_path());
        std::ofstream out(csv_path(), std::ios::app);
        if (!exists) out << "date,mode,players,player,name,score,lines,seconds\n";
        out << g.date << ',' << mode_names[g.mode] << ',' << g.players << ',' << (g.player + 1) << ','
            << csv_field(g.name) << ',' << g.score << ',' << g.lines << ',' << g.seconds << '\n';
    }

    // Ranking rules: Marathon and Sprint by score (then fewer seconds); Ultra only counts
    // finished races (150+), fastest first.
    bool ranked(const Game& g) { return g.mode != 2 || g.score >= 150; }
    bool better(const Game& a, const Game& b) {
        if (a.mode == 2) return a.seconds != b.seconds ? a.seconds < b.seconds : a.score > b.score;
        return a.score != b.score ? a.score > b.score : a.seconds < b.seconds;
    }

    std::string json_str(const std::string& s) {
        std::string out = "\"";
        for (char c : s) {
            if (c == '"' || c == '\\') { out += '\\'; out += c; }
            else if (c == '<') out += "\\u003c";
            else out += c;
        }
        return out + "\"";
    }

    std::string now_string() {
        std::time_t t = std::time(nullptr);
        std::tm tm{};
#if defined(_WIN32)
        localtime_s(&tm, &t);
#else
        localtime_r(&t, &tm);
#endif
        char buf[32];
        std::strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M", &tm);
        return buf;
    }

    std::string format_time(uint32_t s) {
        char buf[16]; snprintf(buf, sizeof(buf), "%u:%02u", s / 60, s % 60); return buf;
    }

    // The game's own tables, read from its save block in RDRAM. Empty if it isn't there.
    std::string game_tables_json(uint8_t* rdram) {
        if (!rdram) return "[]";
        uint32_t block = rd32(rdram, save_ptr_addr);
        if (!valid_addr(block, 0x1900)) return "[]";
        // Save order is Marathon, Ultra, Sprint.
        const int table_mode[3] = { 0, 2, 1 };
        std::ostringstream js;
        js << '[';
        for (int t = 0; t < 3; t++) {
            if (t) js << ',';
            js << "{\"mode\":" << json_str(mode_names[table_mode[t]]) << ",\"entries\":[";
            for (int e = 0; e < 5; e++) {
                uint32_t a = block + 0xF0C + (t * 5 + e) * 0x18;
                if (e) js << ',';
                js << "{\"name\":" << json_str(rd_name(rdram, a)) << ",\"score\":" << rd32(rdram, a + 0xC)
                   << ",\"seconds\":" << rd32(rdram, a + 0x10) << '}';
            }
            js << "]}";
        }
        js << ']';
        return js.str();
    }

    extern const char* const html_template; // below
}

void tnt::leaderboard::set_rdram(uint8_t* rdram) { g_rdram = rdram; }

void tnt::leaderboard::configure_panel(bool enabled, int seconds) {
    std::lock_guard lock{ mutex };
    panel_enabled = enabled;
    panel_max_ms = (uint32_t)std::max(seconds, 1) * 1000u;
}

const char* tnt::leaderboard::mode_name(int mode) { return mode_names[std::clamp(mode, 0, 2)]; }

bool tnt::leaderboard::get_panel(Panel& out) {
    std::lock_guard lock{ mutex };
    if (!panel_active) return false;
    if (ms_since(panel_time) > panel_max_ms) { panel_active = false; return false; }
    out.mode = panel_mode;
    out.results = panel_results;
    out.table_valid = false;
    uint8_t* rdram = g_rdram.load();
    if (rdram) {
        uint32_t block = rd32(rdram, save_ptr_addr);
        if (valid_addr(block, 0x1900)) {
            const int table_for_mode[3] = { 0, 2, 1 }; // save order: Marathon, Ultra, Sprint
            for (int e = 0; e < 5; e++) {
                uint32_t a = block + 0xF0C + (table_for_mode[out.mode] * 5 + e) * 0x18;
                out.table[e] = { rd_name(rdram, a), rd32(rdram, a + 0xC), rd32(rdram, a + 0x10) };
            }
            out.table_valid = true;
        }
    }
    return true;
}

void tnt::leaderboard::on_button() {
    std::lock_guard lock{ mutex };
    if (panel_active && ms_since(panel_time) >= panel_min_ms) panel_active = false;
}

std::string tnt::leaderboard::last_message(uint32_t* age_ms) {
    std::lock_guard lock{ mutex };
    if (age_ms) {
        *age_ms = last_msg.empty() ? UINT32_MAX
            : (uint32_t)std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - last_msg_time).count();
    }
    return last_msg;
}

std::filesystem::path tnt::leaderboard::write_html() {
    std::vector<Game> games;
    {
        std::lock_guard lock{ mutex };
        games = load_games();
    }
    std::ostringstream js;
    js << "{\"generated\":" << json_str(now_string()) << ",\"games\":[";
    for (size_t i = 0; i < games.size(); i++) {
        const Game& g = games[i];
        if (i) js << ',';
        js << "{\"date\":" << json_str(g.date) << ",\"mode\":" << json_str(mode_names[g.mode]) << ",\"players\":" << g.players
           << ",\"player\":" << (g.player + 1) << ",\"name\":" << json_str(g.name) << ",\"score\":" << g.score
           << ",\"lines\":" << g.lines << ",\"seconds\":" << g.seconds << '}';
    }
    js << "],\"tables\":" << game_tables_json(g_rdram.load()) << '}';

    std::string html = html_template;
    size_t pos = html.find("/*DATA*/null");
    if (pos != std::string::npos) html.replace(pos, 12, js.str());
    std::filesystem::path path = html_path();
    std::filesystem::path tmp = path; tmp += ".tmp";
    {
        std::ofstream out(tmp, std::ios::binary | std::ios::trunc);
        out << html;
    }
    std::error_code ec;
    std::filesystem::rename(tmp, path, ec);
    if (ec) { std::filesystem::copy_file(tmp, path, std::filesystem::copy_options::overwrite_existing, ec); std::filesystem::remove(tmp, ec); }
    return path;
}

extern "C" void tnt_on_game_result(uint8_t* rdram, recomp_context* ctx) {
#if defined(__vita__)
    // No leaderboard on the PS Vita: the game's own high-score tables are kept as usual.
    (void)rdram; (void)ctx;
    return;
#endif
    g_rdram = rdram;
    uint32_t profile = (uint32_t)ctx->r4, results = (uint32_t)ctx->r5, idx = (uint32_t)ctx->r6 & 0xFF;
    if (!valid_addr(results, 0x40) || idx > 3) return;

    Game g;
    g.date = now_string();
    uint8_t mode = rd8(rdram, mode_addr);
    g.mode = mode < 3 ? mode : 0;
    g.players = std::clamp<int>(rd8(rdram, results + 5), 1, 4);
    g.player = (int)idx;
    g.name = valid_addr(profile, 8) ? rd_name(rdram, profile) : "";
    if (g.name.empty()) return; // the game only calls this for saved names, not guests
    g.seconds = rd32(rdram, results + 0x08 + 4 * idx);
    g.score = rd32(rdram, results + 0x18 + 4 * idx);
    g.lines = rd32(rdram, results + 0x28 + 4 * idx);

    std::string msg;
    {
        std::lock_guard lock{ mutex };
        append_game(g);
        std::vector<Game> games = load_games();
        std::vector<Game> same;
        for (auto& o : games) if (o.mode == g.mode && o.players == g.players && ranked(o)) same.push_back(o);
        std::stable_sort(same.begin(), same.end(), better);

        char buf[200];
        if (!ranked(g)) {
            snprintf(buf, sizeof(buf), "%s: %s %u/150 in %s (not finished)", g.name.c_str(), mode_names[g.mode], g.score, format_time(g.seconds).c_str());
        } else {
            size_t rank = 1;
            for (auto& o : same) { if (better(o, g)) rank++; else break; }
            if (g.mode == 2)
                snprintf(buf, sizeof(buf), "%s: %s in %s, #%u of %u%s", g.name.c_str(), mode_names[g.mode], format_time(g.seconds).c_str(), (unsigned)rank, (unsigned)same.size(), rank == 1 && same.size() > 1 ? " - new best!" : "");
            else
                snprintf(buf, sizeof(buf), "%s: %s %u pts (%u lines), #%u of %u%s", g.name.c_str(), mode_names[g.mode], g.score, g.lines, (unsigned)rank, (unsigned)same.size(), rank == 1 && same.size() > 1 ? " - new best!" : "");
        }
        msg = buf;
        last_msg = msg;
        last_msg_time = std::chrono::steady_clock::now();

        // Show the after-game panel. Players from the same game arrive within moments of
        // each other, so a call within 3 s of the last one joins the same panel.
        if (!panel_active || ms_since(panel_time) > 3000 || panel_mode != g.mode) panel_results.clear();
        panel_results.push_back({ g.name, g.score, g.seconds });
        panel_mode = g.mode;
        panel_active = panel_enabled;
        panel_time = std::chrono::steady_clock::now();
    }
    printf("[leaderboard] %s\n", msg.c_str());
    fflush(stdout);
    tnt::leaderboard::write_html();
}

namespace {
const char* const html_template = R"HTML(<!doctype html>
<html lang="en">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>TNT Leaderboard</title>
<style>
:root {
  --bg: #0f1020; --panel: #181a33; --line: #2a2d52; --text: #e8e9f5; --muted: #9a9cc0;
  --gold: #f5c542; --silver: #c9cfdb; --bronze: #d38b52; --accent: #56c6ff;
}
@media (prefers-color-scheme: light) {
  :root { --bg: #f3f4fa; --panel: #ffffff; --line: #dcdff0; --text: #1a1c33; --muted: #5d6086;
          --gold: #b8860b; --silver: #7d8597; --bronze: #a0522d; --accent: #0a7bbf; }
}
* { box-sizing: border-box; }
body { margin: 0; background: var(--bg); color: var(--text); font: 15px/1.45 system-ui, "Segoe UI", sans-serif; }
main { max-width: 860px; margin: 0 auto; padding: 28px 16px 48px; }
h1 { font-size: 26px; margin: 0 0 4px; letter-spacing: .5px; }
.sub { color: var(--muted); margin: 0 0 22px; font-size: 13px; }
nav { display: flex; gap: 6px; flex-wrap: wrap; margin-bottom: 16px; }
nav button { background: var(--panel); color: var(--text); border: 1px solid var(--line); border-radius: 8px;
  padding: 7px 14px; font: inherit; cursor: pointer; }
nav button[aria-selected="true"] { border-color: var(--accent); color: var(--accent); font-weight: 600; }
.filters { display: flex; gap: 14px; align-items: center; color: var(--muted); font-size: 13px; margin-bottom: 12px; flex-wrap: wrap; }
.filters select { font: inherit; background: var(--panel); color: var(--text); border: 1px solid var(--line); border-radius: 6px; padding: 3px 6px; }
section { background: var(--panel); border: 1px solid var(--line); border-radius: 12px; padding: 4px 0; margin-bottom: 18px; overflow-x: auto; }
section h2 { font-size: 15px; margin: 12px 16px 4px; }
table { width: 100%; border-collapse: collapse; font-variant-numeric: tabular-nums; }
th, td { text-align: left; padding: 8px 16px; border-bottom: 1px solid var(--line); white-space: nowrap; }
th { color: var(--muted); font-weight: 500; font-size: 12px; text-transform: uppercase; letter-spacing: .6px; }
tr:last-child td { border-bottom: none; }
td.num, th.num { text-align: right; }
.rank { font-weight: 700; width: 3em; }
.r1 { color: var(--gold); } .r2 { color: var(--silver); } .r3 { color: var(--bronze); }
.empty { color: var(--muted); padding: 18px 16px; }
.stats { display: grid; grid-template-columns: repeat(3, 1fr); gap: 10px; margin-bottom: 18px; }
.stat { background: var(--panel); border: 1px solid var(--line); border-radius: 12px; padding: 12px 14px; }
.stat b { display: block; font-size: 22px; }
@media (max-width: 520px) { .stats { grid-template-columns: repeat(2, 1fr); } }
.stat span { color: var(--muted); font-size: 12px; }
</style>
</head>
<body>
<main>
  <h1>The New Tetris: Leaderboard</h1>
  <p class="sub" id="sub"></p>
  <div class="stats" id="stats"></div>
  <nav id="tabs"></nav>
  <div class="filters" id="filters"></div>
  <div id="view"></div>
</main>
<script>
const DATA = /*DATA*/null;
const MODES = ["Marathon", "Sprint", "Ultra"];
const fmt = s => Math.floor(s / 60) + ":" + String(s % 60).padStart(2, "0");
const esc = s => String(s).replace(/[&<>"]/g, c => ({"&":"&amp;","<":"&lt;",">":"&gt;","\"":"&quot;"}[c]));
const ranked = g => g.mode !== "Ultra" || g.score >= 150;
const better = (a, b) => a.mode === "Ultra" ? (a.seconds - b.seconds) || (b.score - a.score)
                                            : (b.score - a.score) || (a.seconds - b.seconds);
let tab = "Marathon", players = "1", name = "all";
try { tab = localStorage.getItem("tnt-tab") || tab; } catch (e) {}

const games = DATA ? DATA.games : [];
document.getElementById("sub").textContent = games.length
  ? `${games.length} game${games.length === 1 ? "" : "s"} recorded · updated ${DATA.generated}`
  : "No games recorded yet. Finish a game and this page fills in.";

const totalLines = games.reduce((n, g) => n + g.lines, 0);
const totalTime = games.reduce((n, g) => n + g.seconds, 0);
const best = m => games.filter(g => g.mode === m && ranked(g)).sort(better)[0];
const stat = (v, l) => `<div class="stat"><b>${v}</b><span>${l}</span></div>`;
const bm = best("Marathon"), bs = best("Sprint"), bu = best("Ultra");
document.getElementById("stats").innerHTML =
  stat(games.length, "games played") + stat(totalLines, "lines cleared") + stat(fmt(totalTime), "time played") +
  stat(bm ? bm.score : "–", "best Marathon") + stat(bs ? bs.score : "–", "best Sprint") + stat(bu ? fmt(bu.seconds) : "–", "fastest Ultra");

function rankTable(mode) {
  let list = games.filter(g => g.mode === mode && ranked(g) && (players === "all" || String(g.players) === players));
  if (name !== "all") list = list.filter(g => g.name === name);
  list.sort(better);
  if (!list.length) return `<section><div class="empty">No ${mode} games${players === "all" ? "" : " with " + players + " player" + (players === "1" ? "" : "s")} yet.</div></section>`;
  const main = mode === "Ultra" ? "Time" : "Score";
  let rows = list.slice(0, 50).map((g, i) => `<tr><td class="rank r${i + 1}">${i + 1}</td><td>${esc(g.name)}</td>
    <td class="num"><b>${mode === "Ultra" ? fmt(g.seconds) : g.score}</b></td>
    <td class="num">${g.lines}</td><td class="num">${mode === "Ultra" ? g.score : fmt(g.seconds)}</td>
    <td class="num">${g.players}</td><td>${esc(g.date)}</td></tr>`).join("");
  return `<section><table><tr><th>#</th><th>Name</th><th class="num">${main}</th><th class="num">Lines</th>
    <th class="num">${mode === "Ultra" ? "Score" : "Time"}</th><th class="num">Players</th><th>Date</th></tr>${rows}</table></section>`;
}
function recent() {
  if (!games.length) return `<section><div class="empty">No games yet.</div></section>`;
  const rows = games.slice().reverse().slice(0, 200).map(g => `<tr><td>${esc(g.date)}</td><td>${g.mode}</td><td>${esc(g.name)}</td>
    <td class="num">${g.score}</td><td class="num">${g.lines}</td><td class="num">${fmt(g.seconds)}</td><td class="num">${g.players}</td></tr>`).join("");
  return `<section><table><tr><th>Date</th><th>Mode</th><th>Name</th><th class="num">Score</th><th class="num">Lines</th>
    <th class="num">Time</th><th class="num">Players</th></tr>${rows}</table></section>`;
}
function gameTables() {
  if (!DATA || !DATA.tables.length) return `<section><div class="empty">The game's tables are read from its save data while it's running. Press F4 in the game to refresh this page.</div></section>`;
  return DATA.tables.map(t => `<section><h2>${t.mode}</h2><table><tr><th>#</th><th>Name</th>
    <th class="num">${t.mode === "Ultra" ? "Time" : "Score"}</th><th class="num">${t.mode === "Ultra" ? "Score" : "Time"}</th></tr>` +
    t.entries.map((e, i) => `<tr><td class="rank r${i + 1}">${i + 1}</td><td>${esc(e.name)}</td>
      <td class="num"><b>${t.mode === "Ultra" ? fmt(e.seconds) : e.score}</b></td>
      <td class="num">${t.mode === "Ultra" ? e.score : fmt(e.seconds)}</td></tr>`).join("") + `</table></section>`).join("");
}
function render() {
  const tabs = [...MODES, "Recent games", "In-game tables"];
  document.getElementById("tabs").innerHTML = tabs.map(t => `<button aria-selected="${t === tab}" data-t="${t}">${t}</button>`).join("");
  document.querySelectorAll("#tabs button").forEach(b => b.onclick = () => { tab = b.dataset.t; try { localStorage.setItem("tnt-tab", tab); } catch (e) {} render(); });
  const names = [...new Set(games.map(g => g.name))].sort();
  document.getElementById("filters").innerHTML = MODES.includes(tab) ?
    `<label>Players <select id="fp">${["1","2","3","4","all"].map(v => `<option ${v === players ? "selected" : ""} value="${v}">${v === "all" ? "Any" : v}</option>`).join("")}</select></label>
     <label>Name <select id="fn"><option value="all">Everyone</option>${names.map(n => `<option ${n === name ? "selected" : ""}>${esc(n)}</option>`).join("")}</select></label>` : "";
  const fp = document.getElementById("fp"), fn = document.getElementById("fn");
  if (fp) fp.onchange = () => { players = fp.value; render(); };
  if (fn) fn.onchange = () => { name = fn.value; render(); };
  document.getElementById("view").innerHTML = MODES.includes(tab) ? rankTable(tab) : tab === "Recent games" ? recent() : gameTables();
}
if (![...MODES, "Recent games", "In-game tables"].includes(tab)) tab = "Marathon";
render();
</script>
</body>
</html>
)HTML";
}
