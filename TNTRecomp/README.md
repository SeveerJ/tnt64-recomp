# The New Tetris: Recompiled (front end)

A PC build of *The New Tetris* (N64, USA): the game's code is statically recompiled
with N64Recomp, running on N64ModernRuntime, drawn by RT64, with SDL2 for the window,
sound and controls.

**Status (19 Oct 2026): playable on Windows.** It boots through the N64 logo and the 3D
intro to the title screen and menus, and into a game of Marathon: pieces move, rotate,
drop and lock. It holds a steady 60 fps through RT64. Music plays (checked in the
headless build). Multiplayer and the Wonders unlocks haven't been tested yet.

You need your own ROM: USA, MD5 `7a28179b00734c9aa0f0609fafaafd5f`.

## Folder layout

```
TheNewT64risRecomp\
  baserom.us.z64           your ROM
  build\n64recomp-pinned\  N64Recomp.exe (already built)
  runtime\N64ModernRuntime\ N64ModernRuntime at commit cdf5abb
  recomp\                  tnt.recomp.toml, tnt.syms.toml, port\, rsp\, scripts\
  TNTRecomp\               this project
    lib\rt64\              RT64 (setup.ps1 clones it)
```

## Building on Windows

Requirements: Visual Studio 2022 with **"Desktop development with C++"**, plus clang-cl
(the VS component **"C++ Clang Compiler for Windows"**, or a standalone LLVM install). The
generated C needs clang; MSVC's own compiler won't build it. Git is **not** needed: a copy
of RT64 is bundled in `lib\rt64.zip.part*` and unpacked automatically.

Double-click **`run_build.bat`**. Everything is logged to `build_log.txt`. The script:
1. loads the Visual Studio environment and checks for clang-cl, CMake and Ninja
2. unpacks RT64 into `lib\rt64` (first run only)
3. runs N64Recomp on `..\recomp\tnt.recomp.toml` if the recompiled code is missing or out of date
4. configures and builds with the `windows` preset (clang-cl + Ninja)

`run_build_debug.bat` does the same with debug symbols (`windows-debug` preset), which gives
readable crash reports. A first build takes about 5 minutes; rebuilds take under a minute.

## Running

Double-click **`play.bat`** (or `play_debug.bat` for the debug build). On first run the ROM
at `..\baserom.us.z64` is checked and copied into `out\build\windows\tnt_data\`, which
also holds saves. Console output goes to `run_log.txt`, including a status line once a second
for the first 30 s (frames, display lists, VI registers). On a crash it also gets a stack trace
and a `TNTRecompiled.dmp` minidump next to the exe.

### Settings

Settings live in **`out\build\windows\settings.ini`**, next to the exe. The first run writes
it with every option at its default and a comment explaining each one; open it in Notepad,
change values, and restart the game. Delete it to go back to the defaults. Mistakes (an
unknown key, a value out of range) are listed in `run_log.txt` and that setting keeps its
default.

| Section | Settings |
|---|---|
| `[display]` | `renderer` (auto/d3d12/vulkan), `fullscreen`, `window_width`, `window_height`, `window_x`, `window_y`, `resolution` (auto/native/2x), `antialiasing` (none/2x/4x/8x), `aspect_ratio` (original/widescreen), `refresh_rate` (original/display/manual), `refresh_rate_value`, `show_fps`, `developer_mode` |
| `[audio]` | `volume` (0-100), `audio_latency` (frames of extra audio queued; raise it if you hear crackling) |
| `[controls]` | `rumble` (reports a Rumble Pak; the game then shows a Controller Pak prompt at boot, press B to skip) |
| `[keyboard]` | `layout` (classic/modern/custom), `escape_quits`, and one key list per N64 button for `custom` (see Controls) |
| `[leaderboard]` | `after_game_panel`, `panel_seconds` |
| `[launcher]` | `show_launcher`, reserved for the settings screen |

The settings are described once in `src/settings.cpp` (`setting_fields()`), which drives
both the ini file and, later, a settings screen.

Command-line flags still work and override the ini for that run (add them in `play.bat`):
`--fullscreen`, `--windowed`, `--vulkan`, `--d3d12`, `--msaa2` / `--msaa4` / `--msaa8`,
`--native-res`, `--widescreen`, `--display-refresh`, `--developer`.

Testing aids (environment variables, these override the ini too): `TNT_WINDOW=x,y,w,h`,
`TNT_OVERLAY=0`, `TNT_RUMBLE=1`, `TNT_AUTOPRESS=1` (taps START and A every 2 s),
`TNT_AUDIO=old` (the first audio path, for comparison), `TNT_AUDIO_HEADROOM=N`,
`TNT_SETTINGS=path` (use a different ini file).

### Frame and FPS counters

The window title shows the game's frame rate, the VI rate (the N64's 60 Hz video
interrupt) and the total frame count, updated twice a second. The same numbers are drawn
in the top-left corner of the game picture: yellow is fps, white is the frame count.
**F3** shows or hides the on-screen counters.

### Controls

| N64 | In game | Keyboard: classic | Keyboard: modern | Gamepad |
|---|---|---|---|---|
| D-pad left / right | Move | Left / Right | Left / Right | D-pad |
| D-pad down | Soft drop | Down | Down | D-pad |
| D-pad up | Hard drop | Up | Up or Space | D-pad |
| A | Rotate | X | X | A |
| B | Rotate the other way | C | Z | X or B |
| L | Hold piece | Q | C or Shift | LB |
| START | Start / pause | Enter | Enter or P | Start / Back |
| R | | E | E | RB |
| Z | | Z | V | LT / RT |
| C buttons | Garbage target (multiplayer) | I J K L | I J K L | Right stick |
| Stick | | W A S D | (none) | Left stick |

The keyboard layout is chosen in `settings.ini` under `[keyboard]`: `layout = classic`
(the default), `modern`, or `custom`. With `custom`, every N64 button gets its own line
listing one or more keys, e.g. `hold = C, Shift`. Unknown key names are reported in
`run_log.txt` and skipped. Gamepads aren't affected by any of this.

F3 toggles the FPS counter, F4 opens the leaderboard history page, and F11 or Alt+Enter
toggles fullscreen; these can't be rebound. Esc quits, unless `escape_quits = false`, which
frees it to be bound like any other key. The keyboard and the first gamepad both drive
controller 1; extra gamepads become controllers 2 to 4.

## Headless boot test

The `windows-headless` and `linux-headless` presets build a version with no window,
GPU or sound. It boots the game and prints what it's doing once a second: display lists,
frames, audio and controller polls. It also checks every 300th display list for structure
(triangle and texture counts, proper termination).

| Variable | Effect |
|---|---|
| `TNT_HEADLESS_SECONDS=40` | How long to run (default 20) |
| `TNT_AUTOPRESS=1` | Tap START and A every 2 s to get through the menus |
| `TNT_WAV=out.wav` | Record the game's audio |
| `TNT_TRACE=trace.txt` | Log every OS call: messages, DMA, controller, SP tasks (Linux only) |

## Game-specific fixes

These were found by booting the headless build and tracing the OS calls.

1. **Default VI mode (`src/main.cpp`, `tnt_on_init`).** On hardware, `osCreateViManager`
   installs a default NTSC mode, so VI interrupts run from boot. The New Tetris's scheduler
   waits for those retraces before the audio thread runs, and the game only calls
   `osViSetMode` after audio init. N64ModernRuntime sends no VI events until a mode is set,
   so the game deadlocked on a black screen. The init callback now sets
   `osViModeNtscLan1`, as libultra's `__osViInit` does. It deliberately doesn't blank the
   screen the way libultra also does: the runtime's `osViSetMode` doesn't clear the blank
   flag and the game never calls `osViBlack(0)`, so blanking left RT64 drawing a black screen.
2. **Controller status alignment (`recomp/port/tnt_cont_fix.c`).** The runtime writes
   `OSContStatus` through a struct laid out for 4-byte-aligned addresses. The game's array
   is at `0x801101A2`, so controller 1 read back as "no response" and the game ignored
   all input. The game's `osContInit` and `osContGetQuery` now go through wrappers that
   copy the bytes in N64 order. This is a runtime bug worth reporting upstream.
3. **Controller Pak and Transfer Pak** report "not connected" (`recomp/port/tnt_pak_stubs.c`),
   and controllers report no accessory unless `TNT_RUMBLE=1` is set. Saves use EEPROM,
   which the runtime supports.

## Audio fix

The first build sounded slowed down and choppy. The game sizes each audio buffer from
`osAiGetLength`, and the front end was reporting the whole queue there, so the game
under-filled it: about 29% of buffers arrived after the sound card had run dry, giving
2.4 s of silence per 36 s. The new path (`src/sdl_audio.cpp`) reports at most one frame of
audio and holds two frames back as headroom, and resamples 36 kHz to the device rate with
an `SDL_AudioStream`, which carries filter state between buffers. Measured over the same
36 s: 1 gap of 3 ms.

## Icon

`assets/icon.ico` is the app icon, built into the exe on Windows (`src/icon.rc.in`) and
set as the window icon on Linux (`src/icon_rgba.h`). Sizes 48 px and up show the full
logo; 32 px and below show just the T-piece, which stays readable at that size. The
sources are in `assets/`: the original artwork and the transparent square crops it was
made from.

## Known issues

- **Shutdown crash.** N64ModernRuntime frees emulated RAM while the game's threads can
  still be running, so quitting sometimes segfaults. Nothing is lost: saves are already
  written. The headless build exits directly to avoid it.
- **Save type** is `AllowAll` until the EEPROM size (4 Kbit or 16 Kbit) is confirmed.
- **No settings screen yet.** Options are set in `settings.ini` (see Settings).
- **Rumble is off by default** (see `TNT_RUMBLE`).
- **Not yet tested:** the 4-player split screen, the Wonders screens, and long play sessions.

## Licences

`src/rt64_render_context.cpp` is adapted from Zelda64Recomp (GPL-3.0), so this front
end is GPL-3.0 as well. N64ModernRuntime and RT64 have their own licences. No game code
or assets are included: everything is generated from your ROM.
