# The New Tetris: Recompiled — PS Vita

The recompiled game running natively on the Vita: game code, sound, controls, saves, and
graphics through a GLES2 N64 renderer (`src/gles/`) on vitaGL. Full speed in Marathon.

## Installing

Needs a Vita or PS TV with HENkaku/Ensō, VitaShell, and **libshacccg.suprx** in `ur0:data/`
(the shader compiler vitaGL uses; standard on a modded Vita).

1. Install `TNTRecompiled.vpk` with VitaShell.
2. Copy your ROM (The New Tetris, USA, `.z64`) into `ux0:data/TNTRecompiled/`. On first launch
   it's checked and stored in `ux0:data/TNTRecompiled/tnt_data/`.
3. Start **TNT Recompiled** from the LiveArea.

## Controls

| Vita | N64 | In game |
|---|---|---|
| D-pad / left stick | D-pad | move, up = hard drop, down = soft drop |
| Cross / Triangle | A | rotate |
| Circle / Square | B | rotate the other way |
| L | L | hold piece |
| R | R | |
| START | START | start / pause |
| SELECT | Z | |
| SELECT + TRIANGLE | — | FPS counter on/off |
| Right stick | C buttons | |

Hold **START + SELECT for 2 seconds** to quit.

## Files

`ux0:data/TNTRecompiled/`: `tnt_data/` (stored ROM and saves), `settings.ini` (same format as
on PC), `log.txt` (a status line every 10 s). The PC leaderboard is not used on the Vita.

## Building (Linux)

Requires VitaSDK with the `vitaGL`, `vitashark`, `SceShaccCgExt` and `mathneon` packages.

```
runtime/setup_runtime.sh                 # fetches N64ModernRuntime and applies the patches
cmake -S TNTRecomp/vita -B build-vita -G Ninja \
      -DCMAKE_TOOLCHAIN_FILE=$VITASDK/share/vita.toolchain.cmake
cmake --build build-vita                 # -> build-vita/TNTRecompiled.vpk
```

What `runtime/patches/runtime-vita.patch` changes: 20 MB of emulated memory instead of a 4 GB
reservation; the Vita's kernel semaphores for thread hand-off; NEON (through sse2neon) for the
RSP vector unit; a portable 64x64-bit multiply; no mod support (it needs a JIT); a file copy
that works on the Vita's filesystem; and the thread-queue fix shared with the PC build.

Testing aids: `-DTNT_VITA_LOG_TO_TTY=ON` prints to the debug TTY (Vita3K shows it), and
`verbose_log` in `vita_backend.cpp` turns on per-press input logging.
