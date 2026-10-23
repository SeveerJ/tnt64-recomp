# The New Tetris: Recompiled

*The New Tetris* (N64, 1999) statically recompiled to native code with
[N64Recomp](https://github.com/N64Recomp/N64Recomp), running on
[N64ModernRuntime](https://github.com/N64Recomp/N64ModernRuntime):

- **PC (Windows)** — drawn by RT64, with SDL2 for window, sound and controls. Adds an FPS
  counter (F3), a local leaderboard with an after-game panel (F4), `settings.ini`, and
  keyboard layouts (classic / modern / custom).
- **PS Vita** — the same game code with a GLES2 N64 renderer on vitaGL, Vita controls, and
  full-speed play.


## Layout

```
TNTRecomp/        the project: front ends, renderer, settings, leaderboard, build scripts
  src/            shared code (main, settings, leaderboard, overlay, SDL and RT64 back ends,
                  HLE audio, src/gles = the portable GLES2 renderer)
  vita/           PS Vita back end and build (see TNTRecomp/vita/README.md)
  assets/         app icon
recomp/           N64Recomp config (tnt.recomp.toml, tnt.syms.toml), hand-written ports
                  (port/), recompiled audio microcode (rsp/) and the generated game code
                  (RecompiledFuncs/)
runtime/          patches for N64ModernRuntime (commit cdf5abb) and scripts that fetch it
tools/            scripts used while making the port (symbol generation, scans)
```

## Playing the Windows release

1. Download and run `TNTRecompiled-Installer.exe`.
2. When prompted, select your own USA 1.0 *The New Tetris* ROM file (`.z64`, `.n64`, or `.v64`). The expected ROM has MD5 `7a28179b00734c9aa0f0609fafaafd5f`.
3. Complete setup. Leave **Launch The New Tetris: Recompiled** checked on the final installer page to start playing.

The installer checks and prepares the selected ROM for the game. It does not include a ROM; you must provide your own. If you skip launching at the end, start the game later from the Start menu.

Your save and leaderboard data are kept on your PC. Uninstalling the game preserves that data.

## Building on Windows

Needs Visual Studio 2022 with "Desktop development with C++" and the "C++ Clang Compiler for
Windows" component, plus Git.

1. Put your ROM next to this README as `baserom.us.z64`.
2. Once: `powershell -ExecutionPolicy Bypass -File runtime\setup_runtime.ps1`
3. Double-click `TNTRecomp\run_build.bat` (RT64 is fetched on the first build).
4. Play with `TNTRecomp\play.bat`, or run `TNTRecomp\make_portable.bat` for a stand-alone
   copy with a desktop shortcut.

The generated code is already in `recomp/RecompiledFuncs`, so N64Recomp is only needed if
you change `tnt.recomp.toml` or `tnt.syms.toml`.

## Building for the PS Vita

See [TNTRecomp/vita/README.md](TNTRecomp/vita/README.md). The ready-built VPK is attached to
the releases of this repository.

## Roadmap

Upcoming features include:
- Dedicated Settings overlay
- Widescreen support
- Higher resolution 

## Licence

The port's own code is under the GPL-3.0 (`TNTRecomp/COPYING`), as required by
N64ModernRuntime. `TNTRecomp/src/hle_audio/` is from mupen64plus-rsp-hle (GPL-2.0-or-later).
The game itself belongs to its rights holders; nothing here grants rights to it.
