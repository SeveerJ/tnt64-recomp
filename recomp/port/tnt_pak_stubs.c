// The New Tetris probes the Controller Pak and Transfer Pak from its save
// manager (func_8003BF90). N64ModernRuntime reports "no Controller Pak"
// (PFS_ERR_NOPACK), so these return the same error. The game's real saves go
// through osEepromRead/osEepromWrite, which the runtime implements.
#include "recomp.h"
#include "tnt_extra_decls.h"

#define PFS_ERR_NOPACK 1

void tnt_PfsUnknown_46E4(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = PFS_ERR_NOPACK; }
void tnt_GbpakUnknown_5CF0(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = PFS_ERR_NOPACK; }
void osGbpakInit(uint8_t* rdram, recomp_context* ctx)        { (void)rdram; ctx->r2 = PFS_ERR_NOPACK; }
void osGbpakPower(uint8_t* rdram, recomp_context* ctx)       { (void)rdram; ctx->r2 = PFS_ERR_NOPACK; }
void osGbpakReadWrite(uint8_t* rdram, recomp_context* ctx)   { (void)rdram; ctx->r2 = PFS_ERR_NOPACK; }
