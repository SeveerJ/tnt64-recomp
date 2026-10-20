// Controller-status workaround for The New Tetris.
//
// N64ModernRuntime's osContInit/osContGetQuery write OSContStatus through a host
// struct whose fields are pre-reversed for RDRAM's byte-swapped words. That only
// lands correctly when the array is 4-byte aligned. The New Tetris keeps its status
// array at 0x801101A2 (2-byte aligned, which is valid on N64), so controller 1 came
// back as type 0 with error 0x08 ("no response") and the game ignored its buttons.
//
// The game's osContInit (0x800B3120) and osContGetQuery (0x800B3FC4) are renamed in
// scripts/overrides.txt and ignored in tnt.recomp.toml, so the game calls these
// instead. They run the runtime's version into an aligned scratch area just below
// the game's stack pointer, then copy the bytes out in N64 order with MEM_B, which
// is correct for any alignment.
#include "recomp.h"
#include "tnt_extra_decls.h"

#define MAX_CONTROLLERS 4
#define STATUS_BYTES (MAX_CONTROLLERS * 4)

void osContInit_recomp(uint8_t* rdram, recomp_context* ctx);
void osContGetQuery_recomp(uint8_t* rdram, recomp_context* ctx);

static gpr scratch_below_sp(recomp_context* ctx) {
    // Space below $sp isn't used by the caller across this leaf call.
    return (gpr)(int32_t)(((uint32_t)ctx->r29 - 0x40) & ~7u);
}

static void copy_n64_bytes(uint8_t* rdram, gpr dst, gpr src, int n) {
    for (int i = 0; i < n; i++) MEM_B(i, dst) = MEM_B(i, src);
}

void tnt_osContInit(uint8_t* rdram, recomp_context* ctx) {
    gpr status = ctx->r6;
    gpr scratch = scratch_below_sp(ctx);
    copy_n64_bytes(rdram, scratch, status, STATUS_BYTES); // keep fields libultra leaves untouched
    ctx->r6 = scratch;
    osContInit_recomp(rdram, ctx);
    copy_n64_bytes(rdram, status, scratch, STATUS_BYTES);
}

void tnt_osContGetQuery(uint8_t* rdram, recomp_context* ctx) {
    gpr status = ctx->r4;
    gpr scratch = scratch_below_sp(ctx);
    copy_n64_bytes(rdram, scratch, status, STATUS_BYTES);
    ctx->r4 = scratch;
    osContGetQuery_recomp(rdram, ctx);
    copy_n64_bytes(rdram, status, scratch, STATUS_BYTES);
}
