// Declarations for functions the recompiled code calls but that are not
// emitted into funcs.h (they are ignored in tnt.recomp.toml and implemented
// by hand in tnt_pak_stubs.c / tnt_cont_fix.c, or provided by N64ModernRuntime's pak.cpp).
// Force-include this when compiling RecompiledFuncs (clang/gcc: -include, MSVC/clang-cl: /FI).
#ifndef TNT_EXTRA_DECLS_H
#define TNT_EXTRA_DECLS_H
#include "recomp.h"
#ifdef __cplusplus
extern "C" {
#endif
void tnt_PfsUnknown_46E4(uint8_t* rdram, recomp_context* ctx);
void tnt_GbpakUnknown_5CF0(uint8_t* rdram, recomp_context* ctx);
void osGbpakInit(uint8_t* rdram, recomp_context* ctx);
void osGbpakPower(uint8_t* rdram, recomp_context* ctx);
void osGbpakReadWrite(uint8_t* rdram, recomp_context* ctx);
void osPfsRepairId_recomp(uint8_t* rdram, recomp_context* ctx); // N64ModernRuntime librecomp/src/pak.cpp
void tnt_osContInit(uint8_t* rdram, recomp_context* ctx);       // tnt_cont_fix.c
void tnt_osContGetQuery(uint8_t* rdram, recomp_context* ctx);   // tnt_cont_fix.c
void tnt_on_game_result(uint8_t* rdram, recomp_context* ctx);   // TNTRecomp/src/leaderboard.cpp (hook)
#ifdef __cplusplus
}
#endif
#endif
