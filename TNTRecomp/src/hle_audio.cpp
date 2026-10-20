// High-level emulation (HLE) of the game's audio microcode.
//
// The New Tetris uses libultra's standard audio microcode (aspMain, "ABI 1"). Instead of
// running the recompiled RSP code instruction by instruction, this executes each audio
// command directly in C, using mupen64plus-rsp-hle's implementation (src/hle_audio/,
// GPL-2.0-or-later). Much faster, which matters on the PS Vita; on PC the recompiled
// microcode stays the default. Choose with settings.ini [audio] audio_microcode.
//
// N64ModernRuntime copies the OSTask into DMEM at 0xFC0 before calling the microcode, and
// keeps DMEM and RDRAM in the same word-swapped layout mupen64plus uses, so the HLE code can
// read them directly.
#include <cstdarg>
#include <cstdio>
#include <cstring>
#include "librecomp/rsp.hpp"

extern "C" {
#include "hle_audio/hle_internal.h"
void alist_process_audio(struct hle_t* hle);

void HleWarnMessage(void*, const char* message, ...) {
    static int count = 0;
    if (count++ > 20) return;
    va_list ap; va_start(ap, message);
    fprintf(stderr, "[hle audio] "); vfprintf(stderr, message, ap); fprintf(stderr, "\n");
    va_end(ap);
}
void HleVerboseMessage(void*, const char*, ...) {}
void HleInfoMessage(void*, const char*, ...) {}
void HleErrorMessage(void*, const char* message, ...) {
    va_list ap; va_start(ap, message);
    fprintf(stderr, "[hle audio] error: "); vfprintf(stderr, message, ap); fprintf(stderr, "\n");
    va_end(ap);
}
// The runtime handles task completion itself.
void rsp_break(struct hle_t*, unsigned int) {}
}

namespace {
    hle_t g_hle{};
}

RspExitReason tnt_hle_audio_ucode(uint8_t* rdram, uint32_t /*ucode_addr*/) {
    g_hle.dram = rdram;
    g_hle.dmem = dmem;
    alist_process_audio(&g_hle);
    return RspExitReason::Broke;
}
