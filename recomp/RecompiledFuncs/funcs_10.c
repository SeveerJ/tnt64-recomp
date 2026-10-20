#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8006BE9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006BE9C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006BEA0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006BEA4: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8006BEA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006BEAC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006BEB0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006BEB4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006BEB8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006BEBC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8006BEC0: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x8006BEC4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8006BEC8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8006BECC: sb          $zero, 0x1($t8)
    MEM_B(0X1, ctx->r24) = 0;
    // 0x8006BED0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8006BED4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8006BED8: sb          $zero, 0x10($t9)
    MEM_B(0X10, ctx->r25) = 0;
    // 0x8006BEDC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8006BEE0: slti        $at, $s3, 0xA
    ctx->r1 = SIGNED(ctx->r19) < 0XA ? 1 : 0;
    // 0x8006BEE4: sb          $zero, 0x12($t0)
    MEM_B(0X12, ctx->r8) = 0;
    // 0x8006BEE8: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8006BEEC: nop

    // 0x8006BEF0: sb          $zero, 0x11($t1)
    MEM_B(0X11, ctx->r9) = 0;
    // 0x8006BEF4: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8006BEF8: nop

    // 0x8006BEFC: sb          $zero, 0x13($t2)
    MEM_B(0X13, ctx->r10) = 0;
    // 0x8006BF00: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8006BF04: lw          $t3, -0x430($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X430);
    // 0x8006BF08: lb          $t5, 0x2($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X2);
    // 0x8006BF0C: nop

    // 0x8006BF10: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8006BF14: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8006BF18: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8006BF1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8006BF20: addu        $s0, $t3, $t7
    ctx->r16 = ADD32(ctx->r11, ctx->r15);
    // 0x8006BF24: beq         $at, $zero, L_8006BF74
    if (ctx->r1 == 0) {
        // 0x8006BF28: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8006BF74;
    }
    // 0x8006BF28: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8006BF2C:
    // 0x8006BF2C: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8006BF30: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006BF34: lbu         $t8, 0x1($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X1);
    // 0x8006BF38: nop

    // 0x8006BF3C: beq         $t8, $at, L_8006BF64
    if (ctx->r24 == ctx->r1) {
        // 0x8006BF40: nop
    
            goto L_8006BF64;
    }
    // 0x8006BF40: nop

    // 0x8006BF44: jal         0x8006D3C0
    // 0x8006BF48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8006D3C0(rdram, ctx);
        goto after_0;
    // 0x8006BF48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8006BF4C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x8006BF50: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8006BF54: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8006BF58: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8006BF5C: jal         0x80070860
    // 0x8006BF60: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_80070860(rdram, ctx);
        goto after_1;
    // 0x8006BF60: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_1:
L_8006BF64:
    // 0x8006BF64: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8006BF68: slti        $at, $s3, 0xA
    ctx->r1 = SIGNED(ctx->r19) < 0XA ? 1 : 0;
    // 0x8006BF6C: bne         $at, $zero, L_8006BF2C
    if (ctx->r1 != 0) {
        // 0x8006BF70: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8006BF2C;
    }
    // 0x8006BF70: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8006BF74:
    // 0x8006BF74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006BF78: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006BF7C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006BF80: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006BF84: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006BF88: jr          $ra
    // 0x8006BF8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006BF8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006BF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006BF90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006BF94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006BF98: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006BF9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006BFA0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006BFA4: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8006BFA8: nop

    // 0x8006BFAC: bne         $t7, $zero, L_8006C08C
    if (ctx->r15 != 0) {
        // 0x8006BFB0: nop
    
            goto L_8006C08C;
    }
    // 0x8006BFB0: nop

    // 0x8006BFB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006BFB8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8006BFBC: jal         0x8006BC8C
    // 0x8006BFC0: nop

    func_8006BC8C(rdram, ctx);
        goto after_0;
    // 0x8006BFC0: nop

    after_0:
    // 0x8006BFC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006BFC8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8006BFCC: jal         0x8006BD94
    // 0x8006BFD0: nop

    func_8006BD94(rdram, ctx);
        goto after_1;
    // 0x8006BFD0: nop

    after_1:
    // 0x8006BFD4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8006BFD8: nop

    // 0x8006BFDC: lbu         $t9, 0x10($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X10);
    // 0x8006BFE0: nop

    // 0x8006BFE4: bne         $t9, $zero, L_8006BFFC
    if (ctx->r25 != 0) {
        // 0x8006BFE8: nop
    
            goto L_8006BFFC;
    }
    // 0x8006BFE8: nop

    // 0x8006BFEC: lbu         $t0, 0x12($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X12);
    // 0x8006BFF0: nop

    // 0x8006BFF4: beq         $t0, $zero, L_8006C024
    if (ctx->r8 == 0) {
        // 0x8006BFF8: nop
    
            goto L_8006C024;
    }
    // 0x8006BFF8: nop

L_8006BFFC:
    // 0x8006BFFC: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8006C000: nop

    // 0x8006C004: lbu         $t2, 0x11($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X11);
    // 0x8006C008: nop

    // 0x8006C00C: bne         $t2, $zero, L_8006C030
    if (ctx->r10 != 0) {
        // 0x8006C010: nop
    
            goto L_8006C030;
    }
    // 0x8006C010: nop

    // 0x8006C014: lbu         $t3, 0x13($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X13);
    // 0x8006C018: nop

    // 0x8006C01C: bne         $t3, $zero, L_8006C030
    if (ctx->r11 != 0) {
        // 0x8006C020: nop
    
            goto L_8006C030;
    }
    // 0x8006C020: nop

L_8006C024:
    // 0x8006C024: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006C028: jal         0x8006BE9C
    // 0x8006C02C: nop

    func_8006BE9C(rdram, ctx);
        goto after_2;
    // 0x8006C02C: nop

    after_2:
L_8006C030:
    // 0x8006C030: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8006C034: nop

    // 0x8006C038: lbu         $t5, 0x10($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X10);
    // 0x8006C03C: nop

    // 0x8006C040: bne         $t5, $zero, L_8006C08C
    if (ctx->r13 != 0) {
        // 0x8006C044: nop
    
            goto L_8006C08C;
    }
    // 0x8006C044: nop

    // 0x8006C048: lbu         $t6, 0x12($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X12);
    // 0x8006C04C: nop

    // 0x8006C050: beq         $t6, $zero, L_8006C08C
    if (ctx->r14 == 0) {
        // 0x8006C054: nop
    
            goto L_8006C08C;
    }
    // 0x8006C054: nop

    // 0x8006C058: lbu         $t7, 0x11($t4)
    ctx->r15 = MEM_BU(ctx->r12, 0X11);
    // 0x8006C05C: nop

    // 0x8006C060: bne         $t7, $zero, L_8006C08C
    if (ctx->r15 != 0) {
        // 0x8006C064: nop
    
            goto L_8006C08C;
    }
    // 0x8006C064: nop

    // 0x8006C068: lbu         $t9, 0x13($t4)
    ctx->r25 = MEM_BU(ctx->r12, 0X13);
    // 0x8006C06C: nop

    // 0x8006C070: beq         $t9, $zero, L_8006C08C
    if (ctx->r25 == 0) {
        // 0x8006C074: nop
    
            goto L_8006C08C;
    }
    // 0x8006C074: nop

    // 0x8006C078: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8006C07C: sb          $t8, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r24;
    // 0x8006C080: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8006C084: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8006C088: sb          $t0, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r8;
L_8006C08C:
    // 0x8006C08C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006C090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006C094: jr          $ra
    // 0x8006C098: nop

    return;
    // 0x8006C098: nop

;}
RECOMP_FUNC void func_8006C09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006C09C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006C0A0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006C0A4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006C0A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006C0AC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006C0B0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006C0B4: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x8006C0B8: jal         0x80067BC0
    // 0x8006C0BC: nop

    func_80067BC0(rdram, ctx);
        goto after_0;
    // 0x8006C0BC: nop

    after_0:
    // 0x8006C0C0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8006C0C4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8006C0C8: sb          $t7, 0x58($t8)
    MEM_B(0X58, ctx->r24) = ctx->r15;
    // 0x8006C0CC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8006C0D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006C0D4: lbu         $t0, 0x58($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X58);
    // 0x8006C0D8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8006C0DC: slt         $at, $s0, $t0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8006C0E0: beq         $at, $zero, L_8006C128
    if (ctx->r1 == 0) {
        // 0x8006C0E4: nop
    
            goto L_8006C128;
    }
    // 0x8006C0E4: nop

L_8006C0E8:
    // 0x8006C0E8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8006C0EC: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x8006C0F0: addu        $t2, $t2, $s0
    ctx->r10 = ADD32(ctx->r10, ctx->r16);
    // 0x8006C0F4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8006C0F8: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x8006C0FC: lw          $a2, 0x4($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X4);
    // 0x8006C100: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8006C104: jal         0x8006BA24
    // 0x8006C108: addu        $a1, $s1, $s0
    ctx->r5 = ADD32(ctx->r17, ctx->r16);
    func_8006BA24(rdram, ctx);
        goto after_1;
    // 0x8006C108: addu        $a1, $s1, $s0
    ctx->r5 = ADD32(ctx->r17, ctx->r16);
    after_1:
    // 0x8006C10C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8006C110: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006C114: lbu         $t4, 0x58($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X58);
    // 0x8006C118: nop

    // 0x8006C11C: slt         $at, $s0, $t4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8006C120: bne         $at, $zero, L_8006C0E8
    if (ctx->r1 != 0) {
        // 0x8006C124: nop
    
            goto L_8006C0E8;
    }
    // 0x8006C124: nop

L_8006C128:
    // 0x8006C128: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006C12C: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x8006C130: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x8006C134: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8006C138: nop

    // 0x8006C13C: sb          $zero, 0x1($t7)
    MEM_B(0X1, ctx->r15) = 0;
    // 0x8006C140: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8006C144: nop

    // 0x8006C148: sb          $zero, 0x2($t8)
    MEM_B(0X2, ctx->r24) = 0;
    // 0x8006C14C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006C150: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006C154: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006C158: jr          $ra
    // 0x8006C15C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006C15C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006C160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006C160: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006C164: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006C168: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8006C16C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006C170: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8006C174: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006C178: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006C17C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006C180: lbu         $t7, 0x58($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X58);
    // 0x8006C184: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006C188: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8006C18C: beq         $at, $zero, L_8006C1D0
    if (ctx->r1 == 0) {
        // 0x8006C190: nop
    
            goto L_8006C1D0;
    }
    // 0x8006C190: nop

L_8006C194:
    // 0x8006C194: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x8006C198: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8006C19C: addu        $t9, $t9, $s0
    ctx->r25 = ADD32(ctx->r25, ctx->r16);
    // 0x8006C1A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006C1A4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8006C1A8: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x8006C1AC: jal         0x8006BF90
    // 0x8006C1B0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_8006BF90(rdram, ctx);
        goto after_0;
    // 0x8006C1B0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x8006C1B4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8006C1B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006C1BC: lbu         $t1, 0x58($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X58);
    // 0x8006C1C0: nop

    // 0x8006C1C4: slt         $at, $s0, $t1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8006C1C8: bne         $at, $zero, L_8006C194
    if (ctx->r1 != 0) {
        // 0x8006C1CC: nop
    
            goto L_8006C194;
    }
    // 0x8006C1CC: nop

L_8006C1D0:
    // 0x8006C1D0: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8006C1D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006C1D8: lbu         $t3, 0x58($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X58);
    // 0x8006C1DC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8006C1E0: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8006C1E4: beq         $at, $zero, L_8006C230
    if (ctx->r1 == 0) {
        // 0x8006C1E8: nop
    
            goto L_8006C230;
    }
    // 0x8006C1E8: nop

L_8006C1EC:
    // 0x8006C1EC: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x8006C1F0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8006C1F4: addu        $t5, $t5, $s0
    ctx->r13 = ADD32(ctx->r13, ctx->r16);
    // 0x8006C1F8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8006C1FC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8006C200: lbu         $t7, 0x8($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8);
    // 0x8006C204: nop

    // 0x8006C208: bne         $t7, $zero, L_8006C214
    if (ctx->r15 != 0) {
        // 0x8006C20C: nop
    
            goto L_8006C214;
    }
    // 0x8006C20C: nop

    // 0x8006C210: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8006C214:
    // 0x8006C214: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8006C218: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006C21C: lbu         $t9, 0x58($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X58);
    // 0x8006C220: nop

    // 0x8006C224: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8006C228: bne         $at, $zero, L_8006C1EC
    if (ctx->r1 != 0) {
        // 0x8006C22C: nop
    
            goto L_8006C1EC;
    }
    // 0x8006C22C: nop

L_8006C230:
    // 0x8006C230: beq         $s1, $zero, L_8006C2E8
    if (ctx->r17 == 0) {
        // 0x8006C234: nop
    
            goto L_8006C2E8;
    }
    // 0x8006C234: nop

    // 0x8006C238: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8006C23C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006C240: lbu         $t1, 0x58($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X58);
    // 0x8006C244: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8006C248: slt         $at, $s0, $t1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8006C24C: beq         $at, $zero, L_8006C298
    if (ctx->r1 == 0) {
        // 0x8006C250: nop
    
            goto L_8006C298;
    }
    // 0x8006C250: nop

L_8006C254:
    // 0x8006C254: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x8006C258: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8006C25C: addu        $t3, $t3, $s0
    ctx->r11 = ADD32(ctx->r11, ctx->r16);
    // 0x8006C260: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8006C264: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8006C268: lbu         $t5, 0x9($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X9);
    // 0x8006C26C: nop

    // 0x8006C270: beq         $t5, $zero, L_8006C27C
    if (ctx->r13 == 0) {
        // 0x8006C274: nop
    
            goto L_8006C27C;
    }
    // 0x8006C274: nop

    // 0x8006C278: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_8006C27C:
    // 0x8006C27C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8006C280: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006C284: lbu         $t7, 0x58($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X58);
    // 0x8006C288: nop

    // 0x8006C28C: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8006C290: bne         $at, $zero, L_8006C254
    if (ctx->r1 != 0) {
        // 0x8006C294: nop
    
            goto L_8006C254;
    }
    // 0x8006C294: nop

L_8006C298:
    // 0x8006C298: beq         $s2, $zero, L_8006C2C4
    if (ctx->r18 == 0) {
        // 0x8006C29C: nop
    
            goto L_8006C2C4;
    }
    // 0x8006C29C: nop

    // 0x8006C2A0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8006C2A4: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8006C2A8: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
    // 0x8006C2AC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8006C2B0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8006C2B4: sb          $zero, 0x1($t0)
    MEM_B(0X1, ctx->r8) = 0;
    // 0x8006C2B8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8006C2BC: b           L_8006C300
    // 0x8006C2C0: sb          $t1, 0x2($t2)
    MEM_B(0X2, ctx->r10) = ctx->r9;
        goto L_8006C300;
    // 0x8006C2C0: sb          $t1, 0x2($t2)
    MEM_B(0X2, ctx->r10) = ctx->r9;
L_8006C2C4:
    // 0x8006C2C4: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8006C2C8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8006C2CC: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
    // 0x8006C2D0: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8006C2D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8006C2D8: sb          $t4, 0x1($t5)
    MEM_B(0X1, ctx->r13) = ctx->r12;
    // 0x8006C2DC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8006C2E0: b           L_8006C300
    // 0x8006C2E4: sb          $t6, 0x2($t7)
    MEM_B(0X2, ctx->r15) = ctx->r14;
        goto L_8006C300;
    // 0x8006C2E4: sb          $t6, 0x2($t7)
    MEM_B(0X2, ctx->r15) = ctx->r14;
L_8006C2E8:
    // 0x8006C2E8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8006C2EC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8006C2F0: sb          $zero, 0x1($t8)
    MEM_B(0X1, ctx->r24) = 0;
    // 0x8006C2F4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8006C2F8: nop

    // 0x8006C2FC: sb          $t9, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r25;
L_8006C300:
    // 0x8006C300: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006C304: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006C308: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006C30C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006C310: jr          $ra
    // 0x8006C314: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006C314: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006C318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006C318: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8006C31C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8006C320: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8006C324: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8006C328: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8006C32C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8006C330: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8006C334: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8006C338: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8006C33C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8006C340: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8006C344: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x8006C348: jal         0x80067D1C
    // 0x8006C34C: nop

    func_80067D1C(rdram, ctx);
        goto after_0;
    // 0x8006C34C: nop

    after_0:
    // 0x8006C350: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8006C354: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006C358: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    // 0x8006C35C: jal         0x80067BC0
    // 0x8006C360: nop

    func_80067BC0(rdram, ctx);
        goto after_1;
    // 0x8006C360: nop

    after_1:
    // 0x8006C364: or          $s6, $s0, $zero
    ctx->r22 = ctx->r16 | 0;
    // 0x8006C368: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006C36C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8006C370: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8006C374: beq         $s6, $at, L_8006C3A0
    if (ctx->r22 == ctx->r1) {
        // 0x8006C378: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8006C3A0;
    }
    // 0x8006C378: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8006C37C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006C380: beq         $s6, $at, L_8006C3AC
    if (ctx->r22 == ctx->r1) {
        // 0x8006C384: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8006C3AC;
    }
    // 0x8006C384: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8006C388: beq         $s6, $at, L_8006C3F0
    if (ctx->r22 == ctx->r1) {
        // 0x8006C38C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8006C3F0;
    }
    // 0x8006C38C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8006C390: beq         $s6, $at, L_8006C454
    if (ctx->r22 == ctx->r1) {
        // 0x8006C394: nop
    
            goto L_8006C454;
    }
    // 0x8006C394: nop

    // 0x8006C398: b           L_8006C4D8
    // 0x8006C39C: nop

        goto L_8006C4D8;
    // 0x8006C39C: nop

L_8006C3A0:
    // 0x8006C3A0: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8006C3A4: b           L_8006C4EC
    // 0x8006C3A8: or          $s5, $s1, $zero
    ctx->r21 = ctx->r17 | 0;
        goto L_8006C4EC;
    // 0x8006C3A8: or          $s5, $s1, $zero
    ctx->r21 = ctx->r17 | 0;
L_8006C3AC:
    // 0x8006C3AC: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8006C3B0: nop

    // 0x8006C3B4: lbu         $t9, 0x9($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X9);
    // 0x8006C3B8: nop

    // 0x8006C3BC: beq         $t9, $zero, L_8006C3CC
    if (ctx->r25 == 0) {
        // 0x8006C3C0: nop
    
            goto L_8006C3CC;
    }
    // 0x8006C3C0: nop

    // 0x8006C3C4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8006C3C8: or          $s4, $s1, $zero
    ctx->r20 = ctx->r17 | 0;
L_8006C3CC:
    // 0x8006C3CC: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8006C3D0: nop

    // 0x8006C3D4: lbu         $t1, 0x1D($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1D);
    // 0x8006C3D8: nop

    // 0x8006C3DC: beq         $t1, $zero, L_8006C4EC
    if (ctx->r9 == 0) {
        // 0x8006C3E0: nop
    
            goto L_8006C4EC;
    }
    // 0x8006C3E0: nop

    // 0x8006C3E4: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8006C3E8: b           L_8006C4EC
    // 0x8006C3EC: addiu       $s5, $s1, 0x1
    ctx->r21 = ADD32(ctx->r17, 0X1);
        goto L_8006C4EC;
    // 0x8006C3EC: addiu       $s5, $s1, 0x1
    ctx->r21 = ADD32(ctx->r17, 0X1);
L_8006C3F0:
    // 0x8006C3F0: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8006C3F4: nop

    // 0x8006C3F8: lbu         $t3, 0x9($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X9);
    // 0x8006C3FC: nop

    // 0x8006C400: beq         $t3, $zero, L_8006C410
    if (ctx->r11 == 0) {
        // 0x8006C404: nop
    
            goto L_8006C410;
    }
    // 0x8006C404: nop

    // 0x8006C408: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8006C40C: or          $s4, $s1, $zero
    ctx->r20 = ctx->r17 | 0;
L_8006C410:
    // 0x8006C410: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x8006C414: nop

    // 0x8006C418: lbu         $t5, 0x31($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X31);
    // 0x8006C41C: nop

    // 0x8006C420: beq         $t5, $zero, L_8006C430
    if (ctx->r13 == 0) {
        // 0x8006C424: nop
    
            goto L_8006C430;
    }
    // 0x8006C424: nop

    // 0x8006C428: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8006C42C: addiu       $s5, $s1, 0x2
    ctx->r21 = ADD32(ctx->r17, 0X2);
L_8006C430:
    // 0x8006C430: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8006C434: nop

    // 0x8006C438: lbu         $t7, 0x1D($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1D);
    // 0x8006C43C: nop

    // 0x8006C440: beq         $t7, $zero, L_8006C4EC
    if (ctx->r15 == 0) {
        // 0x8006C444: nop
    
            goto L_8006C4EC;
    }
    // 0x8006C444: nop

    // 0x8006C448: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8006C44C: b           L_8006C4EC
    // 0x8006C450: addiu       $s5, $s1, 0x1
    ctx->r21 = ADD32(ctx->r17, 0X1);
        goto L_8006C4EC;
    // 0x8006C450: addiu       $s5, $s1, 0x1
    ctx->r21 = ADD32(ctx->r17, 0X1);
L_8006C454:
    // 0x8006C454: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8006C458: nop

    // 0x8006C45C: lbu         $t9, 0x9($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X9);
    // 0x8006C460: nop

    // 0x8006C464: beq         $t9, $zero, L_8006C474
    if (ctx->r25 == 0) {
        // 0x8006C468: nop
    
            goto L_8006C474;
    }
    // 0x8006C468: nop

    // 0x8006C46C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8006C470: or          $s4, $s1, $zero
    ctx->r20 = ctx->r17 | 0;
L_8006C474:
    // 0x8006C474: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8006C478: nop

    // 0x8006C47C: lbu         $t1, 0x1D($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1D);
    // 0x8006C480: nop

    // 0x8006C484: beq         $t1, $zero, L_8006C494
    if (ctx->r9 == 0) {
        // 0x8006C488: nop
    
            goto L_8006C494;
    }
    // 0x8006C488: nop

    // 0x8006C48C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8006C490: addiu       $s4, $s1, 0x1
    ctx->r20 = ADD32(ctx->r17, 0X1);
L_8006C494:
    // 0x8006C494: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8006C498: nop

    // 0x8006C49C: lbu         $t3, 0x45($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X45);
    // 0x8006C4A0: nop

    // 0x8006C4A4: beq         $t3, $zero, L_8006C4B4
    if (ctx->r11 == 0) {
        // 0x8006C4A8: nop
    
            goto L_8006C4B4;
    }
    // 0x8006C4A8: nop

    // 0x8006C4AC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8006C4B0: addiu       $s5, $s1, 0x3
    ctx->r21 = ADD32(ctx->r17, 0X3);
L_8006C4B4:
    // 0x8006C4B4: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x8006C4B8: nop

    // 0x8006C4BC: lbu         $t5, 0x31($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X31);
    // 0x8006C4C0: nop

    // 0x8006C4C4: beq         $t5, $zero, L_8006C4EC
    if (ctx->r13 == 0) {
        // 0x8006C4C8: nop
    
            goto L_8006C4EC;
    }
    // 0x8006C4C8: nop

    // 0x8006C4CC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8006C4D0: b           L_8006C4EC
    // 0x8006C4D4: addiu       $s5, $s1, 0x2
    ctx->r21 = ADD32(ctx->r17, 0X2);
        goto L_8006C4EC;
    // 0x8006C4D4: addiu       $s5, $s1, 0x2
    ctx->r21 = ADD32(ctx->r17, 0X2);
L_8006C4D8:
    // 0x8006C4D8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006C4DC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8006C4E0: addiu       $a1, $a1, -0x286C
    ctx->r5 = ADD32(ctx->r5, -0X286C);
    // 0x8006C4E4: jal         0x80083560
    // 0x8006C4E8: addiu       $a0, $a0, -0x2880
    ctx->r4 = ADD32(ctx->r4, -0X2880);
    Fault_Assert(rdram, ctx);
        goto after_2;
    // 0x8006C4E8: addiu       $a0, $a0, -0x2880
    ctx->r4 = ADD32(ctx->r4, -0X2880);
    after_2:
L_8006C4EC:
    // 0x8006C4EC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8006C4F0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8006C4F4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8006C4F8: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x8006C4FC: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x8006C500: jal         0x8006B938
    // 0x8006C504: addiu       $a0, $a0, 0x59
    ctx->r4 = ADD32(ctx->r4, 0X59);
    func_8006B938(rdram, ctx);
        goto after_3;
    // 0x8006C504: addiu       $a0, $a0, 0x59
    ctx->r4 = ADD32(ctx->r4, 0X59);
    after_3:
    // 0x8006C508: beq         $s2, $zero, L_8006C538
    if (ctx->r18 == 0) {
        // 0x8006C50C: nop
    
            goto L_8006C538;
    }
    // 0x8006C50C: nop

    // 0x8006C510: beq         $s3, $zero, L_8006C538
    if (ctx->r19 == 0) {
        // 0x8006C514: nop
    
            goto L_8006C538;
    }
    // 0x8006C514: nop

    // 0x8006C518: jal         0x8006DCD0
    // 0x8006C51C: nop

    func_8006DCD0(rdram, ctx);
        goto after_4;
    // 0x8006C51C: nop

    after_4:
    // 0x8006C520: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8006C524: jal         0x8006DD1C
    // 0x8006C528: sb          $v0, 0x66($t6)
    MEM_B(0X66, ctx->r14) = ctx->r2;
    func_8006DD1C(rdram, ctx);
        goto after_5;
    // 0x8006C528: sb          $v0, 0x66($t6)
    MEM_B(0X66, ctx->r14) = ctx->r2;
    after_5:
    // 0x8006C52C: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8006C530: b           L_8006C578
    // 0x8006C534: sb          $v0, 0x67($t7)
    MEM_B(0X67, ctx->r15) = ctx->r2;
        goto L_8006C578;
    // 0x8006C534: sb          $v0, 0x67($t7)
    MEM_B(0X67, ctx->r15) = ctx->r2;
L_8006C538:
    // 0x8006C538: beq         $s2, $zero, L_8006C560
    if (ctx->r18 == 0) {
        // 0x8006C53C: nop
    
            goto L_8006C560;
    }
    // 0x8006C53C: nop

    // 0x8006C540: jal         0x8006DCD0
    // 0x8006C544: nop

    func_8006DCD0(rdram, ctx);
        goto after_6;
    // 0x8006C544: nop

    after_6:
    // 0x8006C548: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8006C54C: nop

    // 0x8006C550: sb          $v0, 0x66($t8)
    MEM_B(0X66, ctx->r24) = ctx->r2;
    // 0x8006C554: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x8006C558: b           L_8006C578
    // 0x8006C55C: sb          $s4, 0x67($t9)
    MEM_B(0X67, ctx->r25) = ctx->r20;
        goto L_8006C578;
    // 0x8006C55C: sb          $s4, 0x67($t9)
    MEM_B(0X67, ctx->r25) = ctx->r20;
L_8006C560:
    // 0x8006C560: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8006C564: jal         0x8006DD1C
    // 0x8006C568: sb          $s5, 0x66($t0)
    MEM_B(0X66, ctx->r8) = ctx->r21;
    func_8006DD1C(rdram, ctx);
        goto after_7;
    // 0x8006C568: sb          $s5, 0x66($t0)
    MEM_B(0X66, ctx->r8) = ctx->r21;
    after_7:
    // 0x8006C56C: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x8006C570: nop

    // 0x8006C574: sb          $v0, 0x67($t1)
    MEM_B(0X67, ctx->r9) = ctx->r2;
L_8006C578:
    // 0x8006C578: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x8006C57C: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x8006C580: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
    // 0x8006C584: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x8006C588: nop

    // 0x8006C58C: sb          $zero, 0x1($t4)
    MEM_B(0X1, ctx->r12) = 0;
    // 0x8006C590: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x8006C594: nop

    // 0x8006C598: sb          $zero, 0x2($t5)
    MEM_B(0X2, ctx->r13) = 0;
    // 0x8006C59C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8006C5A0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8006C5A4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8006C5A8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8006C5AC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8006C5B0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8006C5B4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8006C5B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8006C5BC: jr          $ra
    // 0x8006C5C0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8006C5C0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8006C5C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006C5C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006C5C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006C5CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006C5D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006C5D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006C5D8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8006C5DC: jal         0x8006B8B8
    // 0x8006C5E0: addiu       $a0, $a0, 0x59
    ctx->r4 = ADD32(ctx->r4, 0X59);
    func_8006B8B8(rdram, ctx);
        goto after_0;
    // 0x8006C5E0: addiu       $a0, $a0, 0x59
    ctx->r4 = ADD32(ctx->r4, 0X59);
    after_0:
    // 0x8006C5E4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006C5E8: nop

    // 0x8006C5EC: lbu         $t7, 0x59($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X59);
    // 0x8006C5F0: nop

    // 0x8006C5F4: beq         $t7, $zero, L_8006C610
    if (ctx->r15 == 0) {
        // 0x8006C5F8: nop
    
            goto L_8006C610;
    }
    // 0x8006C5F8: nop

    // 0x8006C5FC: sb          $zero, 0x1($t6)
    MEM_B(0X1, ctx->r14) = 0;
    // 0x8006C600: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8006C604: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8006C608: b           L_8006C634
    // 0x8006C60C: sb          $t8, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r24;
        goto L_8006C634;
    // 0x8006C60C: sb          $t8, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r24;
L_8006C610:
    // 0x8006C610: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8006C614: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8006C618: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
    // 0x8006C61C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8006C620: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8006C624: sb          $zero, 0x1($t2)
    MEM_B(0X1, ctx->r10) = 0;
    // 0x8006C628: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8006C62C: nop

    // 0x8006C630: sb          $t3, 0x2($t4)
    MEM_B(0X2, ctx->r12) = ctx->r11;
L_8006C634:
    // 0x8006C634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006C638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006C63C: jr          $ra
    // 0x8006C640: nop

    return;
    // 0x8006C640: nop

;}
RECOMP_FUNC void func_8006C644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006C644: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006C648: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006C64C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006C650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006C654: jal         0x8006B454
    // 0x8006C658: addiu       $a0, $a0, 0x62
    ctx->r4 = ADD32(ctx->r4, 0X62);
    func_8006B454(rdram, ctx);
        goto after_0;
    // 0x8006C658: addiu       $a0, $a0, 0x62
    ctx->r4 = ADD32(ctx->r4, 0X62);
    after_0:
    // 0x8006C65C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8006C660: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8006C664: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x8006C668: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8006C66C: nop

    // 0x8006C670: sb          $zero, 0x1($t8)
    MEM_B(0X1, ctx->r24) = 0;
    // 0x8006C674: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8006C678: nop

    // 0x8006C67C: sb          $zero, 0x2($t9)
    MEM_B(0X2, ctx->r25) = 0;
    // 0x8006C680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006C684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006C688: jr          $ra
    // 0x8006C68C: nop

    return;
    // 0x8006C68C: nop

;}
RECOMP_FUNC void func_8006C690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006C690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006C694: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006C698: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006C69C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006C6A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006C6A4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8006C6A8: jal         0x8006B478
    // 0x8006C6AC: addiu       $a0, $a0, 0x62
    ctx->r4 = ADD32(ctx->r4, 0X62);
    func_8006B478(rdram, ctx);
        goto after_0;
    // 0x8006C6AC: addiu       $a0, $a0, 0x62
    ctx->r4 = ADD32(ctx->r4, 0X62);
    after_0:
    // 0x8006C6B0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006C6B4: nop

    // 0x8006C6B8: lbu         $t7, 0x62($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X62);
    // 0x8006C6BC: nop

    // 0x8006C6C0: beq         $t7, $zero, L_8006C6DC
    if (ctx->r15 == 0) {
        // 0x8006C6C4: nop
    
            goto L_8006C6DC;
    }
    // 0x8006C6C4: nop

    // 0x8006C6C8: sb          $zero, 0x1($t6)
    MEM_B(0X1, ctx->r14) = 0;
    // 0x8006C6CC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8006C6D0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8006C6D4: b           L_8006C700
    // 0x8006C6D8: sb          $t8, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r24;
        goto L_8006C700;
    // 0x8006C6D8: sb          $t8, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r24;
L_8006C6DC:
    // 0x8006C6DC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8006C6E0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8006C6E4: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    // 0x8006C6E8: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8006C6EC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8006C6F0: sb          $t1, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r9;
    // 0x8006C6F4: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8006C6F8: nop

    // 0x8006C6FC: sb          $t3, 0x2($t4)
    MEM_B(0X2, ctx->r12) = ctx->r11;
L_8006C700:
    // 0x8006C700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006C704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006C708: jr          $ra
    // 0x8006C70C: nop

    return;
    // 0x8006C70C: nop

;}
RECOMP_FUNC void func_8006C710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006C710: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8006C714: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8006C718: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8006C71C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006C720: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8006C724: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8006C728: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8006C72C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8006C730: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8006C734: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006C738: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006C73C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006C740: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8006C744: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x8006C748: lw          $s0, 0x4($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X4);
    // 0x8006C74C: beq         $at, $zero, L_8006C810
    if (ctx->r1 == 0) {
        // 0x8006C750: nop
    
            goto L_8006C810;
    }
    // 0x8006C750: nop

L_8006C754:
    // 0x8006C754: sll         $t8, $s1, 1
    ctx->r24 = S32(ctx->r17 << 1);
    // 0x8006C758: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x8006C75C: lbu         $at, 0x15($t9)
    ctx->r1 = MEM_BU(ctx->r25, 0X15);
    // 0x8006C760: addiu       $t7, $sp, 0x50
    ctx->r15 = ADD32(ctx->r29, 0X50);
    // 0x8006C764: sb          $at, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r1;
    // 0x8006C768: lbu         $t1, 0x16($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X16);
    // 0x8006C76C: nop

    // 0x8006C770: sb          $t1, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r9;
    // 0x8006C774: lb          $a0, 0x50($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X50);
    // 0x8006C778: lb          $a1, 0x51($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X51);
    // 0x8006C77C: jal         0x8006E5E0
    // 0x8006C780: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    func_8006E5E0(rdram, ctx);
        goto after_0;
    // 0x8006C780: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_0:
    // 0x8006C784: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8006C788: lbu         $t2, 0x0($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X0);
    // 0x8006C78C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x8006C790: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x8006C794: sb          $t3, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r11;
    // 0x8006C798: lb          $a1, 0x51($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X51);
    // 0x8006C79C: lb          $a0, 0x50($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X50);
    // 0x8006C7A0: jal         0x8006E5E0
    // 0x8006C7A4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    func_8006E5E0(rdram, ctx);
        goto after_1;
    // 0x8006C7A4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    after_1:
    // 0x8006C7A8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8006C7AC: lbu         $t4, 0x0($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X0);
    // 0x8006C7B0: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x8006C7B4: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x8006C7B8: sb          $t5, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r13;
    // 0x8006C7BC: lb          $a0, 0x50($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X50);
    // 0x8006C7C0: lb          $a1, 0x51($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X51);
    // 0x8006C7C4: jal         0x8006E5E0
    // 0x8006C7C8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_8006E5E0(rdram, ctx);
        goto after_2;
    // 0x8006C7C8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_2:
    // 0x8006C7CC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8006C7D0: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x8006C7D4: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x8006C7D8: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x8006C7DC: sb          $t8, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r24;
    // 0x8006C7E0: lb          $a1, 0x51($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X51);
    // 0x8006C7E4: lb          $a0, 0x50($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X50);
    // 0x8006C7E8: jal         0x8006E5E0
    // 0x8006C7EC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    func_8006E5E0(rdram, ctx);
        goto after_3;
    // 0x8006C7EC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_3:
    // 0x8006C7F0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8006C7F4: lbu         $t0, 0x0($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X0);
    // 0x8006C7F8: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x8006C7FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006C800: and         $t7, $t0, $at
    ctx->r15 = ctx->r8 & ctx->r1;
    // 0x8006C804: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x8006C808: bne         $at, $zero, L_8006C754
    if (ctx->r1 != 0) {
        // 0x8006C80C: sb          $t7, 0x0($s2)
        MEM_B(0X0, ctx->r18) = ctx->r15;
            goto L_8006C754;
    }
    // 0x8006C80C: sb          $t7, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r15;
L_8006C810:
    // 0x8006C810: lb          $t9, 0x16($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X16);
    // 0x8006C814: lb          $t2, 0x15($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X15);
    // 0x8006C818: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8006C81C: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8006C820: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x8006C824: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8006C828: lw          $t5, -0x430($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X430);
    // 0x8006C82C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8006C830: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8006C834: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x8006C838: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x8006C83C: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8006C840: slti        $at, $s5, 0x4
    ctx->r1 = SIGNED(ctx->r21) < 0X4 ? 1 : 0;
    // 0x8006C844: lbu         $s4, 0x2($t8)
    ctx->r20 = MEM_BU(ctx->r24, 0X2);
    // 0x8006C848: beq         $at, $zero, L_8006C9A0
    if (ctx->r1 == 0) {
        // 0x8006C84C: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8006C9A0;
    }
    // 0x8006C84C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8006C850:
    // 0x8006C850: sll         $t7, $s5, 1
    ctx->r15 = S32(ctx->r21 << 1);
    // 0x8006C854: addu        $t9, $s0, $t7
    ctx->r25 = ADD32(ctx->r16, ctx->r15);
    // 0x8006C858: lbu         $at, 0x15($t9)
    ctx->r1 = MEM_BU(ctx->r25, 0X15);
    // 0x8006C85C: addiu       $t0, $sp, 0x3C
    ctx->r8 = ADD32(ctx->r29, 0X3C);
    // 0x8006C860: sb          $at, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r1;
    // 0x8006C864: lbu         $t2, 0x16($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X16);
    // 0x8006C868: nop

    // 0x8006C86C: sb          $t2, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r10;
    // 0x8006C870: lb          $a0, 0x3C($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X3C);
    // 0x8006C874: lb          $a1, 0x3D($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X3D);
    // 0x8006C878: jal         0x8006E5E0
    // 0x8006C87C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    func_8006E5E0(rdram, ctx);
        goto after_4;
    // 0x8006C87C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_4:
    // 0x8006C880: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x8006C884: lbu         $t3, 0x2($s6)
    ctx->r11 = MEM_BU(ctx->r22, 0X2);
    // 0x8006C888: nop

    // 0x8006C88C: beq         $t3, $s4, L_8006C8B8
    if (ctx->r11 == ctx->r20) {
        // 0x8006C890: nop
    
            goto L_8006C8B8;
    }
    // 0x8006C890: nop

    // 0x8006C894: lbu         $t5, 0x0($s6)
    ctx->r13 = MEM_BU(ctx->r22, 0X0);
    // 0x8006C898: nop

    // 0x8006C89C: andi        $t4, $t5, 0x4
    ctx->r12 = ctx->r13 & 0X4;
    // 0x8006C8A0: bne         $t4, $zero, L_8006C8B8
    if (ctx->r12 != 0) {
        // 0x8006C8A4: nop
    
            goto L_8006C8B8;
    }
    // 0x8006C8A4: nop

    // 0x8006C8A8: lbu         $t6, 0x0($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X0);
    // 0x8006C8AC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8006C8B0: ori         $t8, $t6, 0x4
    ctx->r24 = ctx->r14 | 0X4;
    // 0x8006C8B4: sb          $t8, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r24;
L_8006C8B8:
    // 0x8006C8B8: lb          $a1, 0x3D($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X3D);
    // 0x8006C8BC: lb          $a0, 0x3C($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X3C);
    // 0x8006C8C0: jal         0x8006E5E0
    // 0x8006C8C4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    func_8006E5E0(rdram, ctx);
        goto after_5;
    // 0x8006C8C4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    after_5:
    // 0x8006C8C8: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x8006C8CC: lbu         $t7, 0x2($s6)
    ctx->r15 = MEM_BU(ctx->r22, 0X2);
    // 0x8006C8D0: nop

    // 0x8006C8D4: beq         $t7, $s4, L_8006C900
    if (ctx->r15 == ctx->r20) {
        // 0x8006C8D8: nop
    
            goto L_8006C900;
    }
    // 0x8006C8D8: nop

    // 0x8006C8DC: lbu         $t1, 0x0($s6)
    ctx->r9 = MEM_BU(ctx->r22, 0X0);
    // 0x8006C8E0: nop

    // 0x8006C8E4: andi        $t0, $t1, 0x4
    ctx->r8 = ctx->r9 & 0X4;
    // 0x8006C8E8: bne         $t0, $zero, L_8006C900
    if (ctx->r8 != 0) {
        // 0x8006C8EC: nop
    
            goto L_8006C900;
    }
    // 0x8006C8EC: nop

    // 0x8006C8F0: lbu         $t9, 0x0($s6)
    ctx->r25 = MEM_BU(ctx->r22, 0X0);
    // 0x8006C8F4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8006C8F8: ori         $t2, $t9, 0x4
    ctx->r10 = ctx->r25 | 0X4;
    // 0x8006C8FC: sb          $t2, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r10;
L_8006C900:
    // 0x8006C900: lb          $a0, 0x3C($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X3C);
    // 0x8006C904: lb          $a1, 0x3D($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X3D);
    // 0x8006C908: jal         0x8006E5E0
    // 0x8006C90C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_8006E5E0(rdram, ctx);
        goto after_6;
    // 0x8006C90C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_6:
    // 0x8006C910: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x8006C914: lbu         $t3, 0x2($s6)
    ctx->r11 = MEM_BU(ctx->r22, 0X2);
    // 0x8006C918: nop

    // 0x8006C91C: beq         $t3, $s4, L_8006C948
    if (ctx->r11 == ctx->r20) {
        // 0x8006C920: nop
    
            goto L_8006C948;
    }
    // 0x8006C920: nop

    // 0x8006C924: lbu         $t5, 0x0($s6)
    ctx->r13 = MEM_BU(ctx->r22, 0X0);
    // 0x8006C928: nop

    // 0x8006C92C: andi        $t4, $t5, 0x4
    ctx->r12 = ctx->r13 & 0X4;
    // 0x8006C930: bne         $t4, $zero, L_8006C948
    if (ctx->r12 != 0) {
        // 0x8006C934: nop
    
            goto L_8006C948;
    }
    // 0x8006C934: nop

    // 0x8006C938: lbu         $t6, 0x0($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X0);
    // 0x8006C93C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8006C940: ori         $t8, $t6, 0x4
    ctx->r24 = ctx->r14 | 0X4;
    // 0x8006C944: sb          $t8, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r24;
L_8006C948:
    // 0x8006C948: lb          $a1, 0x3D($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X3D);
    // 0x8006C94C: lb          $a0, 0x3C($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X3C);
    // 0x8006C950: jal         0x8006E5E0
    // 0x8006C954: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    func_8006E5E0(rdram, ctx);
        goto after_7;
    // 0x8006C954: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_7:
    // 0x8006C958: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x8006C95C: lbu         $t7, 0x2($s6)
    ctx->r15 = MEM_BU(ctx->r22, 0X2);
    // 0x8006C960: nop

    // 0x8006C964: beq         $t7, $s4, L_8006C990
    if (ctx->r15 == ctx->r20) {
        // 0x8006C968: nop
    
            goto L_8006C990;
    }
    // 0x8006C968: nop

    // 0x8006C96C: lbu         $t1, 0x0($s6)
    ctx->r9 = MEM_BU(ctx->r22, 0X0);
    // 0x8006C970: nop

    // 0x8006C974: andi        $t0, $t1, 0x4
    ctx->r8 = ctx->r9 & 0X4;
    // 0x8006C978: bne         $t0, $zero, L_8006C990
    if (ctx->r8 != 0) {
        // 0x8006C97C: nop
    
            goto L_8006C990;
    }
    // 0x8006C97C: nop

    // 0x8006C980: lbu         $t9, 0x0($s6)
    ctx->r25 = MEM_BU(ctx->r22, 0X0);
    // 0x8006C984: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8006C988: ori         $t2, $t9, 0x4
    ctx->r10 = ctx->r25 | 0X4;
    // 0x8006C98C: sb          $t2, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r10;
L_8006C990:
    // 0x8006C990: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8006C994: slti        $at, $s5, 0x4
    ctx->r1 = SIGNED(ctx->r21) < 0X4 ? 1 : 0;
    // 0x8006C998: bne         $at, $zero, L_8006C850
    if (ctx->r1 != 0) {
        // 0x8006C99C: nop
    
            goto L_8006C850;
    }
    // 0x8006C99C: nop

L_8006C9A0:
    // 0x8006C9A0: slti        $at, $s3, 0x4
    ctx->r1 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
    // 0x8006C9A4: beq         $at, $zero, L_8006C9B4
    if (ctx->r1 == 0) {
        // 0x8006C9A8: nop
    
            goto L_8006C9B4;
    }
    // 0x8006C9A8: nop

    // 0x8006C9AC: b           L_8006CA64
    // 0x8006C9B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006CA64;
    // 0x8006C9B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006C9B4:
    // 0x8006C9B4: lb          $t3, 0x16($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X16);
    // 0x8006C9B8: lb          $t4, 0x15($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X15);
    // 0x8006C9BC: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8006C9C0: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8006C9C4: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x8006C9C8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8006C9CC: lw          $t7, -0x430($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X430);
    // 0x8006C9D0: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x8006C9D4: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8006C9D8: addu        $t1, $t7, $t8
    ctx->r9 = ADD32(ctx->r15, ctx->r24);
    // 0x8006C9DC: lw          $s7, 0x4($t1)
    ctx->r23 = MEM_W(ctx->r9, 0X4);
    // 0x8006C9E0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8006C9E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006C9E8: jal         0x8006D9D8
    // 0x8006C9EC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8006D9D8(rdram, ctx);
        goto after_8;
    // 0x8006C9EC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_8:
    // 0x8006C9F0: beq         $v0, $zero, L_8006CA00
    if (ctx->r2 == 0) {
        // 0x8006C9F4: nop
    
            goto L_8006CA00;
    }
    // 0x8006C9F4: nop

    // 0x8006C9F8: b           L_8006CA64
    // 0x8006C9FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006CA64;
    // 0x8006C9FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006CA00:
    // 0x8006CA00: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x8006CA04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8006CA08: jal         0x8006D9D8
    // 0x8006CA0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8006D9D8(rdram, ctx);
        goto after_9;
    // 0x8006CA0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x8006CA10: beq         $v0, $zero, L_8006CA20
    if (ctx->r2 == 0) {
        // 0x8006CA14: nop
    
            goto L_8006CA20;
    }
    // 0x8006CA14: nop

    // 0x8006CA18: b           L_8006CA64
    // 0x8006CA1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006CA64;
    // 0x8006CA1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006CA20:
    // 0x8006CA20: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x8006CA24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006CA28: jal         0x8006D9D8
    // 0x8006CA2C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_8006D9D8(rdram, ctx);
        goto after_10;
    // 0x8006CA2C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_10:
    // 0x8006CA30: beq         $v0, $zero, L_8006CA40
    if (ctx->r2 == 0) {
        // 0x8006CA34: nop
    
            goto L_8006CA40;
    }
    // 0x8006CA34: nop

    // 0x8006CA38: b           L_8006CA64
    // 0x8006CA3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006CA64;
    // 0x8006CA3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006CA40:
    // 0x8006CA40: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x8006CA44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006CA48: jal         0x8006D9D8
    // 0x8006CA4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8006D9D8(rdram, ctx);
        goto after_11;
    // 0x8006CA4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x8006CA50: beq         $v0, $zero, L_8006CA60
    if (ctx->r2 == 0) {
        // 0x8006CA54: nop
    
            goto L_8006CA60;
    }
    // 0x8006CA54: nop

    // 0x8006CA58: b           L_8006CA64
    // 0x8006CA5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006CA64;
    // 0x8006CA5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006CA60:
    // 0x8006CA60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006CA64:
    // 0x8006CA64: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8006CA68: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006CA6C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006CA70: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006CA74: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006CA78: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8006CA7C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8006CA80: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8006CA84: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8006CA88: jr          $ra
    // 0x8006CA8C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8006CA8C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8006CA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006CA90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006CA94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006CA98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006CA9C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006CAA0: jal         0x8006C710
    // 0x8006CAA4: nop

    func_8006C710(rdram, ctx);
        goto after_0;
    // 0x8006CAA4: nop

    after_0:
    // 0x8006CAA8: beq         $v0, $zero, L_8006CADC
    if (ctx->r2 == 0) {
        // 0x8006CAAC: nop
    
            goto L_8006CADC;
    }
    // 0x8006CAAC: nop

    // 0x8006CAB0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8006CAB4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8006CAB8: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x8006CABC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8006CAC0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006CAC4: sb          $zero, 0x1($t8)
    MEM_B(0X1, ctx->r24) = 0;
    // 0x8006CAC8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8006CACC: nop

    // 0x8006CAD0: sb          $zero, 0x2($t9)
    MEM_B(0X2, ctx->r25) = 0;
    // 0x8006CAD4: b           L_8006CB00
    // 0x8006CAD8: sb          $zero, -0xB0($at)
    MEM_B(-0XB0, ctx->r1) = 0;
        goto L_8006CB00;
    // 0x8006CAD8: sb          $zero, -0xB0($at)
    MEM_B(-0XB0, ctx->r1) = 0;
L_8006CADC:
    // 0x8006CADC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8006CAE0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8006CAE4: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    // 0x8006CAE8: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8006CAEC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8006CAF0: sb          $t1, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r9;
    // 0x8006CAF4: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8006CAF8: nop

    // 0x8006CAFC: sb          $t3, 0x2($t4)
    MEM_B(0X2, ctx->r12) = ctx->r11;
L_8006CB00:
    // 0x8006CB00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006CB04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006CB08: jr          $ra
    // 0x8006CB0C: nop

    return;
    // 0x8006CB0C: nop

;}
RECOMP_FUNC void func_8006CB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006CB10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006CB14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006CB18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006CB1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
L_8006CB20:
    // 0x8006CB20: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006CB24: nop

    // 0x8006CB28: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8006CB2C: nop

    // 0x8006CB30: addiu       $t8, $t7, -0x2
    ctx->r24 = ADD32(ctx->r15, -0X2);
    // 0x8006CB34: sltiu       $at, $t8, 0x7
    ctx->r1 = ctx->r24 < 0X7 ? 1 : 0;
    // 0x8006CB38: beq         $at, $zero, L_8006CC4C
    if (ctx->r1 == 0) {
        // 0x8006CB3C: nop
    
            goto L_8006CC4C;
    }
    // 0x8006CB3C: nop

    // 0x8006CB40: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8006CB44: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006CB48: addu        $at, $at, $t8
    gpr jr_addend_8006CB54 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8006CB4C: lw          $t8, -0x2860($at)
    ctx->r24 = ADD32(ctx->r1, -0X2860);
    // 0x8006CB50: nop

    // 0x8006CB54: jr          $t8
    // 0x8006CB58: nop

    switch (jr_addend_8006CB54 >> 2) {
        case 0: goto L_8006CB5C; break;
        case 1: goto L_8006CB70; break;
        case 2: goto L_8006CBB4; break;
        case 3: goto L_8006CBCC; break;
        case 4: goto L_8006CC10; break;
        case 5: goto L_8006CC28; break;
        case 6: goto L_8006CC3C; break;
        default: switch_error(__func__, 0x8006CB54, 0x800DD7A0);
    }
    // 0x8006CB58: nop

L_8006CB5C:
    // 0x8006CB5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006CB60: jal         0x8006CA90
    // 0x8006CB64: nop

    func_8006CA90(rdram, ctx);
        goto after_0;
    // 0x8006CB64: nop

    after_0:
    // 0x8006CB68: b           L_8006CC4C
    // 0x8006CB6C: nop

        goto L_8006CC4C;
    // 0x8006CB6C: nop

L_8006CB70:
    // 0x8006CB70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006CB74: jal         0x8006C09C
    // 0x8006CB78: nop

    func_8006C09C(rdram, ctx);
        goto after_1;
    // 0x8006CB78: nop

    after_1:
    // 0x8006CB7C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006CB80: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8006CB84: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x8006CB88: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8006CB8C: jal         0x8008A5C8
    // 0x8006CB90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8008A5C8(rdram, ctx);
        goto after_2;
    // 0x8006CB90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8006CB94: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006CB98: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8006CB9C: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x8006CBA0: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8006CBA4: jal         0x8008A5C8
    // 0x8006CBA8: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_8008A5C8(rdram, ctx);
        goto after_3;
    // 0x8006CBA8: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_3:
    // 0x8006CBAC: b           L_8006CC4C
    // 0x8006CBB0: nop

        goto L_8006CC4C;
    // 0x8006CBB0: nop

L_8006CBB4:
    // 0x8006CBB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006CBB8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8006CBBC: jal         0x8006C160
    // 0x8006CBC0: nop

    func_8006C160(rdram, ctx);
        goto after_4;
    // 0x8006CBC0: nop

    after_4:
    // 0x8006CBC4: b           L_8006CC4C
    // 0x8006CBC8: nop

        goto L_8006CC4C;
    // 0x8006CBC8: nop

L_8006CBCC:
    // 0x8006CBCC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006CBD0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8006CBD4: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x8006CBD8: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8006CBDC: jal         0x8008A5C8
    // 0x8006CBE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8008A5C8(rdram, ctx);
        goto after_5;
    // 0x8006CBE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8006CBE4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006CBE8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8006CBEC: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x8006CBF0: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8006CBF4: jal         0x8008A5C8
    // 0x8006CBF8: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    func_8008A5C8(rdram, ctx);
        goto after_6;
    // 0x8006CBF8: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    after_6:
    // 0x8006CBFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006CC00: jal         0x8006C318
    // 0x8006CC04: nop

    func_8006C318(rdram, ctx);
        goto after_7;
    // 0x8006CC04: nop

    after_7:
    // 0x8006CC08: b           L_8006CC4C
    // 0x8006CC0C: nop

        goto L_8006CC4C;
    // 0x8006CC0C: nop

L_8006CC10:
    // 0x8006CC10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006CC14: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8006CC18: jal         0x8006C5C4
    // 0x8006CC1C: nop

    func_8006C5C4(rdram, ctx);
        goto after_8;
    // 0x8006CC1C: nop

    after_8:
    // 0x8006CC20: b           L_8006CC4C
    // 0x8006CC24: nop

        goto L_8006CC4C;
    // 0x8006CC24: nop

L_8006CC28:
    // 0x8006CC28: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006CC2C: jal         0x8006C644
    // 0x8006CC30: nop

    func_8006C644(rdram, ctx);
        goto after_9;
    // 0x8006CC30: nop

    after_9:
    // 0x8006CC34: b           L_8006CC4C
    // 0x8006CC38: nop

        goto L_8006CC4C;
    // 0x8006CC38: nop

L_8006CC3C:
    // 0x8006CC3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006CC40: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8006CC44: jal         0x8006C690
    // 0x8006CC48: nop

    func_8006C690(rdram, ctx);
        goto after_10;
    // 0x8006CC48: nop

    after_10:
L_8006CC4C:
    // 0x8006CC4C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8006CC50: nop

    // 0x8006CC54: lbu         $t0, 0x2($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X2);
    // 0x8006CC58: nop

    // 0x8006CC5C: beq         $t0, $zero, L_8006CB20
    if (ctx->r8 == 0) {
        // 0x8006CC60: nop
    
            goto L_8006CB20;
    }
    // 0x8006CC60: nop

    // 0x8006CC64: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8006CC68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006CC6C: lbu         $v0, 0x1($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X1);
    // 0x8006CC70: jr          $ra
    // 0x8006CC74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8006CC74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006CC78: nop

    // 0x8006CC7C: nop

;}
RECOMP_FUNC void func_8006CC80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006CC80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006CC84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006CC88: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006CC8C: jal         0x800721D8
    // 0x8006CC90: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_800721D8(rdram, ctx);
        goto after_0;
    // 0x8006CC90: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006CC94: jal         0x800A3AF0
    // 0x8006CC98: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_800A3AF0(rdram, ctx);
        goto after_1;
    // 0x8006CC98: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_1:
    // 0x8006CC9C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8006CCA0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8006CCA4: sw          $v0, 0x9F4($at)
    MEM_W(0X9F4, ctx->r1) = ctx->r2;
    // 0x8006CCA8: jal         0x80051CB0
    // 0x8006CCAC: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    func_80051CB0(rdram, ctx);
        goto after_2;
    // 0x8006CCAC: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    after_2:
    // 0x8006CCB0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8006CCB4: jal         0x80051F30
    // 0x8006CCB8: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    func_80051F30(rdram, ctx);
        goto after_3;
    // 0x8006CCB8: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    after_3:
    // 0x8006CCBC: jal         0x80072248
    // 0x8006CCC0: nop

    func_80072248(rdram, ctx);
        goto after_4;
    // 0x8006CCC0: nop

    after_4:
    // 0x8006CCC4: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8006CCC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006CCCC: beq         $s1, $at, L_8006CCEC
    if (ctx->r17 == ctx->r1) {
        // 0x8006CCD0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8006CCEC;
    }
    // 0x8006CCD0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006CCD4: beq         $s1, $at, L_8006CD1C
    if (ctx->r17 == ctx->r1) {
        // 0x8006CCD8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8006CD1C;
    }
    // 0x8006CCD8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8006CCDC: beq         $s1, $at, L_8006CD74
    if (ctx->r17 == ctx->r1) {
        // 0x8006CCE0: nop
    
            goto L_8006CD74;
    }
    // 0x8006CCE0: nop

    // 0x8006CCE4: b           L_8006CD84
    // 0x8006CCE8: nop

        goto L_8006CD84;
    // 0x8006CCE8: nop

L_8006CCEC:
    // 0x8006CCEC: jal         0x800721A4
    // 0x8006CCF0: nop

    func_800721A4(rdram, ctx);
        goto after_5;
    // 0x8006CCF0: nop

    after_5:
    // 0x8006CCF4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8006CCF8: jal         0x80051618
    // 0x8006CCFC: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    func_80051618(rdram, ctx);
        goto after_6;
    // 0x8006CCFC: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    after_6:
    // 0x8006CD00: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x8006CD04: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006CD08: sb          $t6, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r14;
    // 0x8006CD0C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006CD10: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006CD14: b           L_8006CD84
    // 0x8006CD18: sb          $t7, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r15;
        goto L_8006CD84;
    // 0x8006CD18: sb          $t7, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r15;
L_8006CD1C:
    // 0x8006CD1C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8006CD20: lw          $t8, 0x5C0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5C0);
    // 0x8006CD24: nop

    // 0x8006CD28: lbu         $s0, 0x89($t8)
    ctx->r16 = MEM_BU(ctx->r24, 0X89);
    // 0x8006CD2C: jal         0x800721A4
    // 0x8006CD30: nop

    func_800721A4(rdram, ctx);
        goto after_7;
    // 0x8006CD30: nop

    after_7:
    // 0x8006CD34: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x8006CD38: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8006CD3C: sb          $t9, 0x9F0($at)
    MEM_B(0X9F0, ctx->r1) = ctx->r25;
    // 0x8006CD40: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006CD44: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x8006CD48: sb          $t0, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r8;
    // 0x8006CD4C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8006CD50: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006CD54: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8006CD58: lb          $a0, -0x7C8($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X7C8);
    // 0x8006CD5C: sb          $t1, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r9;
    // 0x8006CD60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006CD64: jal         0x800472F0
    // 0x8006CD68: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800472F0(rdram, ctx);
        goto after_8;
    // 0x8006CD68: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_8:
    // 0x8006CD6C: b           L_8006CD84
    // 0x8006CD70: nop

        goto L_8006CD84;
    // 0x8006CD70: nop

L_8006CD74:
    // 0x8006CD74: jal         0x800721A4
    // 0x8006CD78: nop

    func_800721A4(rdram, ctx);
        goto after_9;
    // 0x8006CD78: nop

    after_9:
    // 0x8006CD7C: jal         0x80055000
    // 0x8006CD80: nop

    func_80055000(rdram, ctx);
        goto after_10;
    // 0x8006CD80: nop

    after_10:
L_8006CD84:
    // 0x8006CD84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006CD88: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006CD8C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006CD90: jr          $ra
    // 0x8006CD94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006CD94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006CD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006CD98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006CD9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006CDA0: jal         0x800A3AF0
    // 0x8006CDA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_800A3AF0(rdram, ctx);
        goto after_0;
    // 0x8006CDA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006CDA8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8006CDAC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8006CDB0: sw          $v0, 0x9F4($at)
    MEM_W(0X9F4, ctx->r1) = ctx->r2;
    // 0x8006CDB4: jal         0x80051CB0
    // 0x8006CDB8: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    func_80051CB0(rdram, ctx);
        goto after_1;
    // 0x8006CDB8: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    after_1:
    // 0x8006CDBC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8006CDC0: jal         0x80051F30
    // 0x8006CDC4: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    func_80051F30(rdram, ctx);
        goto after_2;
    // 0x8006CDC4: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    after_2:
    // 0x8006CDC8: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x8006CDCC: lbu         $s0, 0xA01($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0XA01);
    // 0x8006CDD0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006CDD4: beq         $s0, $at, L_8006CDF4
    if (ctx->r16 == ctx->r1) {
        // 0x8006CDD8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8006CDF4;
    }
    // 0x8006CDD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006CDDC: bne         $s0, $at, L_8006CE20
    if (ctx->r16 != ctx->r1) {
        // 0x8006CDE0: nop
    
            goto L_8006CE20;
    }
    // 0x8006CDE0: nop

    // 0x8006CDE4: jal         0x80055000
    // 0x8006CDE8: nop

    func_80055000(rdram, ctx);
        goto after_3;
    // 0x8006CDE8: nop

    after_3:
    // 0x8006CDEC: b           L_8006CE20
    // 0x8006CDF0: nop

        goto L_8006CE20;
    // 0x8006CDF0: nop

L_8006CDF4:
    // 0x8006CDF4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8006CDF8: lbu         $a0, 0xA04($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0XA04);
    // 0x8006CDFC: jal         0x80072140
    // 0x8006CE00: nop

    func_80072140(rdram, ctx);
        goto after_4;
    // 0x8006CE00: nop

    after_4:
    // 0x8006CE04: beq         $v0, $zero, L_8006CE20
    if (ctx->r2 == 0) {
        // 0x8006CE08: nop
    
            goto L_8006CE20;
    }
    // 0x8006CE08: nop

    // 0x8006CE0C: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8006CE10: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006CE14: sb          $t6, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r14;
    // 0x8006CE18: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006CE1C: sb          $zero, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = 0;
L_8006CE20:
    // 0x8006CE20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006CE24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006CE28: jr          $ra
    // 0x8006CE2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006CE2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006CE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006CE30: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8006CE34: lw          $t6, 0x550($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X550);
    // 0x8006CE38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006CE3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006CE40: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006CE44: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8006CE48: jal         0x800A3AF0
    // 0x8006CE4C: sw          $t7, 0x550($at)
    MEM_W(0X550, ctx->r1) = ctx->r15;
    func_800A3AF0(rdram, ctx);
        goto after_0;
    // 0x8006CE4C: sw          $t7, 0x550($at)
    MEM_W(0X550, ctx->r1) = ctx->r15;
    after_0:
    // 0x8006CE50: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8006CE54: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8006CE58: sw          $v0, 0x9F4($at)
    MEM_W(0X9F4, ctx->r1) = ctx->r2;
    // 0x8006CE5C: jal         0x80051CB0
    // 0x8006CE60: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    func_80051CB0(rdram, ctx);
        goto after_1;
    // 0x8006CE60: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    after_1:
    // 0x8006CE64: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8006CE68: jal         0x80051F30
    // 0x8006CE6C: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    func_80051F30(rdram, ctx);
        goto after_2;
    // 0x8006CE6C: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    after_2:
    // 0x8006CE70: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8006CE74: lbu         $t8, 0xA01($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0XA01);
    // 0x8006CE78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006CE7C: bne         $t8, $at, L_8006CE90
    if (ctx->r24 != ctx->r1) {
        // 0x8006CE80: nop
    
            goto L_8006CE90;
    }
    // 0x8006CE80: nop

    // 0x8006CE84: addiu       $t9, $zero, 0xFA0
    ctx->r25 = ADD32(0, 0XFA0);
    // 0x8006CE88: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006CE8C: sw          $t9, 0x550($at)
    MEM_W(0X550, ctx->r1) = ctx->r25;
L_8006CE90:
    // 0x8006CE90: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8006CE94: lw          $t0, 0x550($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X550);
    // 0x8006CE98: nop

    // 0x8006CE9C: slti        $at, $t0, 0xFA0
    ctx->r1 = SIGNED(ctx->r8) < 0XFA0 ? 1 : 0;
    // 0x8006CEA0: bne         $at, $zero, L_8006CECC
    if (ctx->r1 != 0) {
        // 0x8006CEA4: nop
    
            goto L_8006CECC;
    }
    // 0x8006CEA4: nop

    // 0x8006CEA8: jal         0x8004A34C
    // 0x8006CEAC: nop

    func_8004A34C(rdram, ctx);
        goto after_3;
    // 0x8006CEAC: nop

    after_3:
    // 0x8006CEB0: jal         0x80052570
    // 0x8006CEB4: nop

    func_80052570(rdram, ctx);
        goto after_4;
    // 0x8006CEB4: nop

    after_4:
    // 0x8006CEB8: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x8006CEBC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006CEC0: sb          $t1, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r9;
    // 0x8006CEC4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006CEC8: sw          $zero, 0x550($at)
    MEM_W(0X550, ctx->r1) = 0;
L_8006CECC:
    // 0x8006CECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006CED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006CED4: jr          $ra
    // 0x8006CED8: nop

    return;
    // 0x8006CED8: nop

;}
RECOMP_FUNC void func_8006CEDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006CEDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006CEE0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006CEE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006CEE8: lw          $a0, 0x20C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20C0);
    // 0x8006CEEC: jal         0x8007DA00
    // 0x8006CEF0: nop

    func_8007DA00(rdram, ctx);
        goto after_0;
    // 0x8006CEF0: nop

    after_0:
    // 0x8006CEF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006CEF8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006CEFC: sw          $v0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r2;
    // 0x8006CF00: jr          $ra
    // 0x8006CF04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8006CF04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void alSynFreeFX(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006CF08: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8006CF0C: jr          $ra
    // 0x8006CF10: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x8006CF10: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8006CF14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006CF14: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8006CF18: lbu         $t6, -0x118($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X118);
    // 0x8006CF1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006CF20: sltiu       $at, $t6, 0x12
    ctx->r1 = ctx->r14 < 0X12 ? 1 : 0;
    // 0x8006CF24: beq         $at, $zero, L_8006D07C
    if (ctx->r1 == 0) {
        // 0x8006CF28: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8006D07C;
    }
    // 0x8006CF28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006CF2C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8006CF30: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006CF34: addu        $at, $at, $t6
    gpr jr_addend_8006CF40 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8006CF38: lw          $t6, -0x2840($at)
    ctx->r14 = ADD32(ctx->r1, -0X2840);
    // 0x8006CF3C: nop

    // 0x8006CF40: jr          $t6
    // 0x8006CF44: nop

    switch (jr_addend_8006CF40 >> 2) {
        case 0: goto L_8006CF48; break;
        case 1: goto L_8006CF68; break;
        case 2: goto L_8006CF78; break;
        case 3: goto L_8006CF88; break;
        case 4: goto L_8006CF98; break;
        case 5: goto L_8006D07C; break;
        case 6: goto L_8006D07C; break;
        case 7: goto L_8006CFA8; break;
        case 8: goto L_8006CFC0; break;
        case 9: goto L_8006CFE8; break;
        case 10: goto L_8006D028; break;
        case 11: goto L_8006CFD8; break;
        case 12: goto L_8006CFF8; break;
        case 13: goto L_8006D018; break;
        case 14: goto L_8006CF58; break;
        case 15: goto L_8006D07C; break;
        case 16: goto L_8006D008; break;
        case 17: goto L_8006D038; break;
        default: switch_error(__func__, 0x8006CF40, 0x800DD7C0);
    }
    // 0x8006CF44: nop

L_8006CF48:
    // 0x8006CF48: jal         0x80061740
    // 0x8006CF4C: nop

    func_80061740(rdram, ctx);
        goto after_0;
    // 0x8006CF4C: nop

    after_0:
    // 0x8006CF50: b           L_8006D07C
    // 0x8006CF54: nop

        goto L_8006D07C;
    // 0x8006CF54: nop

L_8006CF58:
    // 0x8006CF58: jal         0x8004AD7C
    // 0x8006CF5C: nop

    func_8004AD7C(rdram, ctx);
        goto after_1;
    // 0x8006CF5C: nop

    after_1:
    // 0x8006CF60: b           L_8006D07C
    // 0x8006CF64: nop

        goto L_8006D07C;
    // 0x8006CF64: nop

L_8006CF68:
    // 0x8006CF68: jal         0x80080B50
    // 0x8006CF6C: nop

    func_80080B50(rdram, ctx);
        goto after_2;
    // 0x8006CF6C: nop

    after_2:
    // 0x8006CF70: b           L_8006D07C
    // 0x8006CF74: nop

        goto L_8006D07C;
    // 0x8006CF74: nop

L_8006CF78:
    // 0x8006CF78: jal         0x80083160
    // 0x8006CF7C: nop

    func_80083160(rdram, ctx);
        goto after_3;
    // 0x8006CF7C: nop

    after_3:
    // 0x8006CF80: b           L_8006D07C
    // 0x8006CF84: nop

        goto L_8006D07C;
    // 0x8006CF84: nop

L_8006CF88:
    // 0x8006CF88: jal         0x8007F344
    // 0x8006CF8C: nop

    func_8007F344(rdram, ctx);
        goto after_4;
    // 0x8006CF8C: nop

    after_4:
    // 0x8006CF90: b           L_8006D07C
    // 0x8006CF94: nop

        goto L_8006D07C;
    // 0x8006CF94: nop

L_8006CF98:
    // 0x8006CF98: jal         0x80090E08
    // 0x8006CF9C: nop

    func_80090E08(rdram, ctx);
        goto after_5;
    // 0x8006CF9C: nop

    after_5:
    // 0x8006CFA0: b           L_8006D07C
    // 0x8006CFA4: nop

        goto L_8006D07C;
    // 0x8006CFA4: nop

L_8006CFA8:
    // 0x8006CFA8: jal         0x800444A4
    // 0x8006CFAC: nop

    func_800444A4(rdram, ctx);
        goto after_6;
    // 0x8006CFAC: nop

    after_6:
    // 0x8006CFB0: jal         0x80045968
    // 0x8006CFB4: nop

    func_80045968(rdram, ctx);
        goto after_7;
    // 0x8006CFB4: nop

    after_7:
    // 0x8006CFB8: b           L_8006D07C
    // 0x8006CFBC: nop

        goto L_8006D07C;
    // 0x8006CFBC: nop

L_8006CFC0:
    // 0x8006CFC0: jal         0x80046A34
    // 0x8006CFC4: nop

    func_80046A34(rdram, ctx);
        goto after_8;
    // 0x8006CFC4: nop

    after_8:
    // 0x8006CFC8: jal         0x800471F8
    // 0x8006CFCC: nop

    func_800471F8(rdram, ctx);
        goto after_9;
    // 0x8006CFCC: nop

    after_9:
    // 0x8006CFD0: b           L_8006D07C
    // 0x8006CFD4: nop

        goto L_8006D07C;
    // 0x8006CFD4: nop

L_8006CFD8:
    // 0x8006CFD8: jal         0x8006CC80
    // 0x8006CFDC: nop

    func_8006CC80(rdram, ctx);
        goto after_10;
    // 0x8006CFDC: nop

    after_10:
    // 0x8006CFE0: b           L_8006D07C
    // 0x8006CFE4: nop

        goto L_8006D07C;
    // 0x8006CFE4: nop

L_8006CFE8:
    // 0x8006CFE8: jal         0x8006CD98
    // 0x8006CFEC: nop

    func_8006CD98(rdram, ctx);
        goto after_11;
    // 0x8006CFEC: nop

    after_11:
    // 0x8006CFF0: b           L_8006D07C
    // 0x8006CFF4: nop

        goto L_8006D07C;
    // 0x8006CFF4: nop

L_8006CFF8:
    // 0x8006CFF8: jal         0x8006CE30
    // 0x8006CFFC: nop

    func_8006CE30(rdram, ctx);
        goto after_12;
    // 0x8006CFFC: nop

    after_12:
    // 0x8006D000: b           L_8006D07C
    // 0x8006D004: nop

        goto L_8006D07C;
    // 0x8006D004: nop

L_8006D008:
    // 0x8006D008: jal         0x80083470
    // 0x8006D00C: nop

    func_80083470(rdram, ctx);
        goto after_13;
    // 0x8006D00C: nop

    after_13:
    // 0x8006D010: b           L_8006D07C
    // 0x8006D014: nop

        goto L_8006D07C;
    // 0x8006D014: nop

L_8006D018:
    // 0x8006D018: jal         0x8006CEDC
    // 0x8006D01C: nop

    func_8006CEDC(rdram, ctx);
        goto after_14;
    // 0x8006D01C: nop

    after_14:
    // 0x8006D020: b           L_8006D07C
    // 0x8006D024: nop

        goto L_8006D07C;
    // 0x8006D024: nop

L_8006D028:
    // 0x8006D028: jal         0x80055744
    // 0x8006D02C: nop

    func_80055744(rdram, ctx);
        goto after_15;
    // 0x8006D02C: nop

    after_15:
    // 0x8006D030: b           L_8006D07C
    // 0x8006D034: nop

        goto L_8006D07C;
    // 0x8006D034: nop

L_8006D038:
    // 0x8006D038: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8006D03C: lw          $t7, 0x554($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X554);
    // 0x8006D040: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006D044: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8006D048: bne         $t8, $zero, L_8006D07C
    if (ctx->r24 != 0) {
        // 0x8006D04C: sw          $t8, 0x554($at)
        MEM_W(0X554, ctx->r1) = ctx->r24;
            goto L_8006D07C;
    }
    // 0x8006D04C: sw          $t8, 0x554($at)
    MEM_W(0X554, ctx->r1) = ctx->r24;
    // 0x8006D050: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x8006D054: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006D058: sw          $t9, 0x554($at)
    MEM_W(0X554, ctx->r1) = ctx->r25;
    // 0x8006D05C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006D060: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8006D064: sb          $t0, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r8;
    // 0x8006D068: jal         0x800905E8
    // 0x8006D06C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800905E8(rdram, ctx);
        goto after_16;
    // 0x8006D06C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_16:
    // 0x8006D070: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8006D074: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006D078: sb          $t1, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r9;
L_8006D07C:
    // 0x8006D07C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D080: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8006D084: jr          $ra
    // 0x8006D088: nop

    return;
    // 0x8006D088: nop

    // 0x8006D08C: nop

;}
RECOMP_FUNC void func_8006D090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D090: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8006D094: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8006D098: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8006D09C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006D0A0: lw          $t7, 0x110($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X110);
    // 0x8006D0A4: jr          $ra
    // 0x8006D0A8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x8006D0A8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8006D0AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D0AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006D0B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8006D0B4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8006D0B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006D0BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8006D0C0: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x8006D0C4: jal         0x80054ED0
    // 0x8006D0C8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_80054ED0(rdram, ctx);
        goto after_0;
    // 0x8006D0C8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8006D0CC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8006D0D0: lh          $t7, 0x1C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1C);
    // 0x8006D0D4: lbu         $t9, 0x4($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X4);
    // 0x8006D0D8: lh          $t3, 0x1E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1E);
    // 0x8006D0DC: sra         $t0, $t9, 1
    ctx->r8 = S32(SIGNED(ctx->r25) >> 1);
    // 0x8006D0E0: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x8006D0E4: addu        $t2, $t7, $t1
    ctx->r10 = ADD32(ctx->r15, ctx->r9);
    // 0x8006D0E8: addiu       $t4, $t3, -0x100
    ctx->r12 = ADD32(ctx->r11, -0X100);
    // 0x8006D0EC: sh          $t2, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r10;
    // 0x8006D0F0: sh          $t4, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r12;
    // 0x8006D0F4: addiu       $t6, $sp, 0x1C
    ctx->r14 = ADD32(ctx->r29, 0X1C);
    // 0x8006D0F8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8006D0FC: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8006D100: nop

    // 0x8006D104: swl         $at, 0x0($t5)
    do_swl(rdram, 0X0, ctx->r13, ctx->r1);
    // 0x8006D108: swr         $at, 0x3($t5)
    do_swr(rdram, 0X3, ctx->r13, ctx->r1);
    // 0x8006D10C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006D110: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8006D114: jr          $ra
    // 0x8006D118: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8006D118: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8006D11C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D11C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006D120: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8006D124: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8006D128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006D12C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8006D130: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x8006D134: jal         0x80054F08
    // 0x8006D138: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_80054F08(rdram, ctx);
        goto after_0;
    // 0x8006D138: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8006D13C: lh          $t7, 0x1C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1C);
    // 0x8006D140: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x8006D144: addiu       $t8, $t7, 0x80
    ctx->r24 = ADD32(ctx->r15, 0X80);
    // 0x8006D148: addiu       $t0, $t9, 0x80
    ctx->r8 = ADD32(ctx->r25, 0X80);
    // 0x8006D14C: sh          $t8, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r24;
    // 0x8006D150: sh          $t0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r8;
    // 0x8006D154: addiu       $t2, $sp, 0x1C
    ctx->r10 = ADD32(ctx->r29, 0X1C);
    // 0x8006D158: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x8006D15C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8006D160: nop

    // 0x8006D164: swl         $at, 0x0($t1)
    do_swl(rdram, 0X0, ctx->r9, ctx->r1);
    // 0x8006D168: swr         $at, 0x3($t1)
    do_swr(rdram, 0X3, ctx->r9, ctx->r1);
    // 0x8006D16C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006D170: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8006D174: jr          $ra
    // 0x8006D178: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8006D178: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8006D17C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D17C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8006D180: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8006D184: sb          $a1, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r5;
    // 0x8006D188: sb          $a2, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r6;
    // 0x8006D18C: jr          $ra
    // 0x8006D190: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    return;
    // 0x8006D190: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8006D194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D194: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x8006D198: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
    // 0x8006D19C: jr          $ra
    // 0x8006D1A0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    return;
    // 0x8006D1A0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8006D1A4: nop

    // 0x8006D1A8: nop

    // 0x8006D1AC: nop

;}
RECOMP_FUNC void func_8006D1B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D1B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006D1B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006D1B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006D1BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006D1C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006D1C4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D1C8: jal         0x8006E6F4
    // 0x8006D1CC: addiu       $a0, $a0, 0x33A8
    ctx->r4 = ADD32(ctx->r4, 0X33A8);
    func_8006E6F4(rdram, ctx);
        goto after_0;
    // 0x8006D1CC: addiu       $a0, $a0, 0x33A8
    ctx->r4 = ADD32(ctx->r4, 0X33A8);
    after_0:
    // 0x8006D1D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006D1D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006D1D8: jr          $ra
    // 0x8006D1DC: nop

    return;
    // 0x8006D1DC: nop

;}
RECOMP_FUNC void func_8006D1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D1E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8006D1E4: jr          $ra
    // 0x8006D1E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x8006D1E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8006D1EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D1EC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8006D1F0: jr          $ra
    // 0x8006D1F4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x8006D1F4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8006D1F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D1F8: jr          $ra
    // 0x8006D1FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8006D1FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8006D200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D200: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006D204: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006D208: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8006D20C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006D210: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006D214: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8006D218: jal         0x8006EE34
    // 0x8006D21C: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    func_8006EE34(rdram, ctx);
        goto after_0;
    // 0x8006D21C: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    after_0:
    // 0x8006D220: jal         0x8006F198
    // 0x8006D224: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    func_8006F198(rdram, ctx);
        goto after_1;
    // 0x8006D224: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    after_1:
    // 0x8006D228: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006D22C: lw          $t6, -0x420($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X420);
    // 0x8006D230: nop

    // 0x8006D234: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x8006D238: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006D23C: jal         0x8006E724
    // 0x8006D240: addiu       $a0, $a0, 0x33A8
    ctx->r4 = ADD32(ctx->r4, 0X33A8);
    func_8006E724(rdram, ctx);
        goto after_2;
    // 0x8006D240: addiu       $a0, $a0, 0x33A8
    ctx->r4 = ADD32(ctx->r4, 0X33A8);
    after_2:
    // 0x8006D244: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D248: jal         0x80068F10
    // 0x8006D24C: nop

    func_80068F10(rdram, ctx);
        goto after_3;
    // 0x8006D24C: nop

    after_3:
    // 0x8006D250: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006D254: jal         0x80068090
    // 0x8006D258: nop

    func_80068090(rdram, ctx);
        goto after_4;
    // 0x8006D258: nop

    after_4:
    // 0x8006D25C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8006D260: nop

    // 0x8006D264: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x8006D268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006D26C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006D270: jr          $ra
    // 0x8006D274: nop

    return;
    // 0x8006D274: nop

;}
RECOMP_FUNC void func_8006D278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D278: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006D27C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006D280: jal         0x80068FDC
    // 0x8006D284: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80068FDC(rdram, ctx);
        goto after_0;
    // 0x8006D284: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8006D288: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006D28C: jal         0x8006E86C
    // 0x8006D290: addiu       $a0, $a0, 0x33A8
    ctx->r4 = ADD32(ctx->r4, 0X33A8);
    func_8006E86C(rdram, ctx);
        goto after_1;
    // 0x8006D290: addiu       $a0, $a0, 0x33A8
    ctx->r4 = ADD32(ctx->r4, 0X33A8);
    after_1:
    // 0x8006D294: jal         0x8006F21C
    // 0x8006D298: nop

    func_8006F21C(rdram, ctx);
        goto after_2;
    // 0x8006D298: nop

    after_2:
    // 0x8006D29C: jal         0x8006EED8
    // 0x8006D2A0: nop

    func_8006EED8(rdram, ctx);
        goto after_3;
    // 0x8006D2A0: nop

    after_3:
    // 0x8006D2A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006D2A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006D2AC: jr          $ra
    // 0x8006D2B0: nop

    return;
    // 0x8006D2B0: nop

    // 0x8006D2B4: nop

    // 0x8006D2B8: nop

    // 0x8006D2BC: nop

;}
RECOMP_FUNC void func_8006D2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D2C0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8006D2C4: addiu       $t6, $sp, 0x4
    ctx->r14 = ADD32(ctx->r29, 0X4);
    // 0x8006D2C8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8006D2CC: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8006D2D0: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8006D2D4: swl         $at, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, ctx->r1);
    // 0x8006D2D8: sh          $a2, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r6;
    // 0x8006D2DC: jr          $ra
    // 0x8006D2E0: swr         $at, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r1);
    return;
    // 0x8006D2E0: swr         $at, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r1);
;}
RECOMP_FUNC void func_8006D2E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D2E4: lh          $t6, 0x4($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X4);
    // 0x8006D2E8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006D2EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8006D2F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006D2F4: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x8006D2F8: sh          $t7, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r15;
    // 0x8006D2FC: lh          $t8, 0x4($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X4);
    // 0x8006D300: addiu       $t0, $sp, 0x4
    ctx->r8 = ADD32(ctx->r29, 0X4);
    // 0x8006D304: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006D308: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006D30C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006D310: sh          $t9, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r25;
    // 0x8006D314: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8006D318: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8006D31C: swl         $at, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, ctx->r1);
    // 0x8006D320: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8006D324: jr          $ra
    // 0x8006D328: swr         $at, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r1);
    return;
    // 0x8006D328: swr         $at, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r1);
;}
RECOMP_FUNC void func_8006D32C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D32C: lwl         $at, 0x0($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X0);
    // 0x8006D330: lwr         $at, 0x3($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0X3);
    // 0x8006D334: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8006D338: swl         $at, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, ctx->r1);
    // 0x8006D33C: jr          $ra
    // 0x8006D340: swr         $at, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r1);
    return;
    // 0x8006D340: swr         $at, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r1);
;}
RECOMP_FUNC void func_8006D344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D344: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006D348: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8006D34C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006D350: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006D354: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8006D358: jal         0x8006D32C
    // 0x8006D35C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_8006D32C(rdram, ctx);
        goto after_0;
    // 0x8006D35C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8006D360: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8006D364: jal         0x8006D2E4
    // 0x8006D368: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_8006D2E4(rdram, ctx);
        goto after_1;
    // 0x8006D368: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x8006D36C: lh          $t7, 0x20($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X20);
    // 0x8006D370: lh          $t1, 0x22($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X22);
    // 0x8006D374: lh          $t6, 0x1C($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1C);
    // 0x8006D378: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x8006D37C: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x8006D380: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8006D384: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8006D388: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8006D38C: sh          $t9, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r25;
    // 0x8006D390: sh          $t3, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r11;
    // 0x8006D394: addiu       $t5, $sp, 0x24
    ctx->r13 = ADD32(ctx->r29, 0X24);
    // 0x8006D398: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x8006D39C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8006D3A0: nop

    // 0x8006D3A4: swl         $at, 0x0($t4)
    do_swl(rdram, 0X0, ctx->r12, ctx->r1);
    // 0x8006D3A8: swr         $at, 0x3($t4)
    do_swr(rdram, 0X3, ctx->r12, ctx->r1);
    // 0x8006D3AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006D3B0: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8006D3B4: jr          $ra
    // 0x8006D3B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006D3B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8006D3BC: nop

;}
RECOMP_FUNC void func_8006D3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D3C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006D3C4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006D3C8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006D3CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006D3D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006D3D4: lbu         $a0, 0x3($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X3);
    // 0x8006D3D8: jal         0x8006AB84
    // 0x8006D3DC: nop

    func_8006AB84(rdram, ctx);
        goto after_0;
    // 0x8006D3DC: nop

    after_0:
    // 0x8006D3E0: bne         $v0, $zero, L_8006D414
    if (ctx->r2 != 0) {
        // 0x8006D3E4: nop
    
            goto L_8006D414;
    }
    // 0x8006D3E4: nop

    // 0x8006D3E8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8006D3EC: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8006D3F0: lbu         $t8, 0x1($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1);
    // 0x8006D3F4: nop

    // 0x8006D3F8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006D3FC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8006D400: lw          $t0, 0x110($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X110);
    // 0x8006D404: nop

    // 0x8006D408: lw          $v0, 0x18($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X18);
    // 0x8006D40C: b           L_8006D440
    // 0x8006D410: nop

        goto L_8006D440;
    // 0x8006D410: nop

L_8006D414:
    // 0x8006D414: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8006D418: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8006D41C: lbu         $t3, 0x3($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X3);
    // 0x8006D420: lw          $t1, -0x460($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X460);
    // 0x8006D424: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x8006D428: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8006D42C: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x8006D430: addu        $s0, $t1, $t4
    ctx->r16 = ADD32(ctx->r9, ctx->r12);
    // 0x8006D434: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006D438: jal         0x8006A47C
    // 0x8006D43C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006A47C(rdram, ctx);
        goto after_1;
    // 0x8006D43C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_8006D440:
    // 0x8006D440: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D444: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006D448: jr          $ra
    // 0x8006D44C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006D44C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006D450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D450: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006D454: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006D458: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8006D45C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006D460: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8006D464: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006D468: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006D46C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006D470: lbu         $s1, 0x2($t6)
    ctx->r17 = MEM_BU(ctx->r14, 0X2);
    // 0x8006D474: lbu         $t8, 0x2($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2);
    // 0x8006D478: nop

    // 0x8006D47C: beq         $s1, $t8, L_8006D4EC
    if (ctx->r17 == ctx->r24) {
        // 0x8006D480: nop
    
            goto L_8006D4EC;
    }
    // 0x8006D480: nop

    // 0x8006D484: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x8006D488: nop

L_8006D48C:
    // 0x8006D48C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006D490: lw          $a0, -0x430($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X430);
    // 0x8006D494: lbu         $a1, 0x2($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2);
    // 0x8006D498: jal         0x80050840
    // 0x8006D49C: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    func_80050840(rdram, ctx);
        goto after_0;
    // 0x8006D49C: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    after_0:
    // 0x8006D4A0: sb          $s1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r17;
    // 0x8006D4A4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006D4A8: lw          $a0, -0x430($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X430);
    // 0x8006D4AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8006D4B0: jal         0x80050800
    // 0x8006D4B4: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    func_80050800(rdram, ctx);
        goto after_1;
    // 0x8006D4B4: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    after_1:
    // 0x8006D4B8: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x8006D4BC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8006D4C0: nop

    // 0x8006D4C4: bne         $s0, $t9, L_8006D48C
    if (ctx->r16 != ctx->r25) {
        // 0x8006D4C8: nop
    
            goto L_8006D48C;
    }
    // 0x8006D4C8: nop

    // 0x8006D4CC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8006D4D0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8006D4D4: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x8006D4D8: lw          $s0, 0x4($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X4);
    // 0x8006D4DC: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x8006D4E0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8006D4E4: nop

    // 0x8006D4E8: sw          $s0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r16;
L_8006D4EC:
    // 0x8006D4EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D4F0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006D4F4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006D4F8: jr          $ra
    // 0x8006D4FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006D4FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006D500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D500: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006D504: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006D508: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006D50C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006D510: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006D514: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8006D518: nop

    // 0x8006D51C: beq         $t7, $t6, L_8006D5AC
    if (ctx->r15 == ctx->r14) {
        // 0x8006D520: nop
    
            goto L_8006D5AC;
    }
    // 0x8006D520: nop

    // 0x8006D524: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8006D528: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006D52C: lw          $a0, -0x430($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X430);
    // 0x8006D530: lbu         $a1, 0x2($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X2);
    // 0x8006D534: jal         0x80050840
    // 0x8006D538: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    func_80050840(rdram, ctx);
        goto after_0;
    // 0x8006D538: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    after_0:
    // 0x8006D53C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006D540: lw          $a0, -0x430($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X430);
    // 0x8006D544: jal         0x80050714
    // 0x8006D548: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    func_80050714(rdram, ctx);
        goto after_1;
    // 0x8006D548: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    after_1:
    // 0x8006D54C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8006D550: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006D554: sb          $v0, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r2;
    // 0x8006D558: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8006D55C: lw          $a0, -0x430($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X430);
    // 0x8006D560: lbu         $a1, 0x2($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X2);
    // 0x8006D564: jal         0x80050800
    // 0x8006D568: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    func_80050800(rdram, ctx);
        goto after_2;
    // 0x8006D568: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    after_2:
    // 0x8006D56C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8006D570: nop

L_8006D574:
    // 0x8006D574: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x8006D578: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8006D57C: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x8006D580: nop

    // 0x8006D584: bne         $t1, $t2, L_8006D574
    if (ctx->r9 != ctx->r10) {
        // 0x8006D588: nop
    
            goto L_8006D574;
    }
    // 0x8006D588: nop

    // 0x8006D58C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8006D590: nop

    // 0x8006D594: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x8006D598: nop

    // 0x8006D59C: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    // 0x8006D5A0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8006D5A4: nop

    // 0x8006D5A8: sw          $t5, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r13;
L_8006D5AC:
    // 0x8006D5AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D5B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006D5B4: jr          $ra
    // 0x8006D5B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006D5B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006D5BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D5BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006D5C0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006D5C4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8006D5C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006D5CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006D5D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006D5D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006D5D8: lbu         $a0, 0x3($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X3);
    // 0x8006D5DC: jal         0x8006AB84
    // 0x8006D5E0: nop

    func_8006AB84(rdram, ctx);
        goto after_0;
    // 0x8006D5E0: nop

    after_0:
    // 0x8006D5E4: beq         $v0, $zero, L_8006D628
    if (ctx->r2 == 0) {
        // 0x8006D5E8: nop
    
            goto L_8006D628;
    }
    // 0x8006D5E8: nop

    // 0x8006D5EC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8006D5F0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8006D5F4: lbu         $t9, 0x3($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X3);
    // 0x8006D5F8: lw          $t7, -0x460($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X460);
    // 0x8006D5FC: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8006D600: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8006D604: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x8006D608: addu        $s0, $t7, $t0
    ctx->r16 = ADD32(ctx->r15, ctx->r8);
    // 0x8006D60C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006D610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D614: jal         0x8006A410
    // 0x8006D618: addiu       $a1, $t8, 0x8
    ctx->r5 = ADD32(ctx->r24, 0X8);
    func_8006A410(rdram, ctx);
        goto after_1;
    // 0x8006D618: addiu       $a1, $t8, 0x8
    ctx->r5 = ADD32(ctx->r24, 0X8);
    after_1:
    // 0x8006D61C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8006D620: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8006D624: sb          $t1, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r9;
L_8006D628:
    // 0x8006D628: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8006D62C: jal         0x8006D998
    // 0x8006D630: nop

    func_8006D998(rdram, ctx);
        goto after_2;
    // 0x8006D630: nop

    after_2:
    // 0x8006D634: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8006D638: jal         0x8006D500
    // 0x8006D63C: nop

    func_8006D500(rdram, ctx);
        goto after_3;
    // 0x8006D63C: nop

    after_3:
    // 0x8006D640: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8006D644: nop

    // 0x8006D648: lb          $s1, 0x9($t3)
    ctx->r17 = MEM_B(ctx->r11, 0X9);
    // 0x8006D64C: lb          $s2, 0xA($t3)
    ctx->r18 = MEM_B(ctx->r11, 0XA);
    // 0x8006D650: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006D654: jal         0x8006E64C
    // 0x8006D658: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8006E64C(rdram, ctx);
        goto after_4;
    // 0x8006D658: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_4:
    // 0x8006D65C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006D660: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006D664: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D668: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006D66C: jr          $ra
    // 0x8006D670: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006D670: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006D674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D674: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006D678: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006D67C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006D680: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006D684: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006D688: lbu         $t7, 0x1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1);
    // 0x8006D68C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006D690: beq         $t7, $at, L_8006D718
    if (ctx->r15 == ctx->r1) {
        // 0x8006D694: nop
    
            goto L_8006D718;
    }
    // 0x8006D694: nop

    // 0x8006D698: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8006D69C: jal         0x8006D5BC
    // 0x8006D6A0: nop

    func_8006D5BC(rdram, ctx);
        goto after_0;
    // 0x8006D6A0: nop

    after_0:
    // 0x8006D6A4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8006D6A8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006D6AC: lw          $a0, -0x430($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X430);
    // 0x8006D6B0: lbu         $a1, 0x2($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X2);
    // 0x8006D6B4: jal         0x80050840
    // 0x8006D6B8: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    func_80050840(rdram, ctx);
        goto after_1;
    // 0x8006D6B8: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    after_1:
    // 0x8006D6BC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8006D6C0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8006D6C4: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
    // 0x8006D6C8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8006D6CC: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x8006D6D0: sb          $t1, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r9;
    // 0x8006D6D4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8006D6D8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8006D6DC: sb          $zero, 0x2($t3)
    MEM_B(0X2, ctx->r11) = 0;
    // 0x8006D6E0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8006D6E4: nop

    // 0x8006D6E8: sb          $t4, 0x3($t5)
    MEM_B(0X3, ctx->r13) = ctx->r12;
    // 0x8006D6EC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006D6F0: jal         0x8006F0E0
    // 0x8006D6F4: sw          $t6, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r14;
    func_8006F0E0(rdram, ctx);
        goto after_2;
    // 0x8006D6F4: sw          $t6, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r14;
    after_2:
    // 0x8006D6F8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8006D6FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006D700: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x8006D704: nop

    // 0x8006D708: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x8006D70C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8006D710: nop

    // 0x8006D714: sw          $zero, 0xC($t9)
    MEM_W(0XC, ctx->r25) = 0;
L_8006D718:
    // 0x8006D718: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D71C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006D720: jr          $ra
    // 0x8006D724: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006D724: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006D728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D728: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006D72C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006D730: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8006D734: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006D738: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006D73C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006D740: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006D744: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006D748: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x8006D74C: nop

    // 0x8006D750: beq         $t7, $zero, L_8006D8F4
    if (ctx->r15 == 0) {
        // 0x8006D754: nop
    
            goto L_8006D8F4;
    }
    // 0x8006D754: nop

    // 0x8006D758: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8006D75C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8006D760: lb          $s1, 0x9($t8)
    ctx->r17 = MEM_B(ctx->r24, 0X9);
    // 0x8006D764: lb          $s2, 0xA($t8)
    ctx->r18 = MEM_B(ctx->r24, 0XA);
    // 0x8006D768: lbu         $s0, 0x2($t8)
    ctx->r16 = MEM_BU(ctx->r24, 0X2);
    // 0x8006D76C: addiu       $a0, $s1, -0x1
    ctx->r4 = ADD32(ctx->r17, -0X1);
    // 0x8006D770: jal         0x8006E5E0
    // 0x8006D774: addiu       $a1, $s2, -0x1
    ctx->r5 = ADD32(ctx->r18, -0X1);
    func_8006E5E0(rdram, ctx);
        goto after_0;
    // 0x8006D774: addiu       $a1, $s2, -0x1
    ctx->r5 = ADD32(ctx->r18, -0X1);
    after_0:
    // 0x8006D778: lbu         $t9, 0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2);
    // 0x8006D77C: nop

    // 0x8006D780: bne         $t9, $s0, L_8006D798
    if (ctx->r25 != ctx->r16) {
        // 0x8006D784: nop
    
            goto L_8006D798;
    }
    // 0x8006D784: nop

    // 0x8006D788: ori         $t0, $s3, 0x80
    ctx->r8 = ctx->r19 | 0X80;
    // 0x8006D78C: or          $s3, $t0, $zero
    ctx->r19 = ctx->r8 | 0;
    // 0x8006D790: andi        $t1, $s3, 0xFF
    ctx->r9 = ctx->r19 & 0XFF;
    // 0x8006D794: or          $s3, $t1, $zero
    ctx->r19 = ctx->r9 | 0;
L_8006D798:
    // 0x8006D798: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006D79C: jal         0x8006E5E0
    // 0x8006D7A0: addiu       $a1, $s2, -0x1
    ctx->r5 = ADD32(ctx->r18, -0X1);
    func_8006E5E0(rdram, ctx);
        goto after_1;
    // 0x8006D7A0: addiu       $a1, $s2, -0x1
    ctx->r5 = ADD32(ctx->r18, -0X1);
    after_1:
    // 0x8006D7A4: lbu         $t2, 0x2($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X2);
    // 0x8006D7A8: nop

    // 0x8006D7AC: bne         $t2, $s0, L_8006D7C4
    if (ctx->r10 != ctx->r16) {
        // 0x8006D7B0: nop
    
            goto L_8006D7C4;
    }
    // 0x8006D7B0: nop

    // 0x8006D7B4: ori         $t3, $s3, 0x1
    ctx->r11 = ctx->r19 | 0X1;
    // 0x8006D7B8: or          $s3, $t3, $zero
    ctx->r19 = ctx->r11 | 0;
    // 0x8006D7BC: andi        $t4, $s3, 0xFF
    ctx->r12 = ctx->r19 & 0XFF;
    // 0x8006D7C0: or          $s3, $t4, $zero
    ctx->r19 = ctx->r12 | 0;
L_8006D7C4:
    // 0x8006D7C4: addiu       $a0, $s1, 0x1
    ctx->r4 = ADD32(ctx->r17, 0X1);
    // 0x8006D7C8: jal         0x8006E5E0
    // 0x8006D7CC: addiu       $a1, $s2, -0x1
    ctx->r5 = ADD32(ctx->r18, -0X1);
    func_8006E5E0(rdram, ctx);
        goto after_2;
    // 0x8006D7CC: addiu       $a1, $s2, -0x1
    ctx->r5 = ADD32(ctx->r18, -0X1);
    after_2:
    // 0x8006D7D0: lbu         $t5, 0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2);
    // 0x8006D7D4: nop

    // 0x8006D7D8: bne         $t5, $s0, L_8006D7F0
    if (ctx->r13 != ctx->r16) {
        // 0x8006D7DC: nop
    
            goto L_8006D7F0;
    }
    // 0x8006D7DC: nop

    // 0x8006D7E0: ori         $t6, $s3, 0x10
    ctx->r14 = ctx->r19 | 0X10;
    // 0x8006D7E4: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8006D7E8: andi        $t7, $s3, 0xFF
    ctx->r15 = ctx->r19 & 0XFF;
    // 0x8006D7EC: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
L_8006D7F0:
    // 0x8006D7F0: addiu       $a0, $s1, -0x1
    ctx->r4 = ADD32(ctx->r17, -0X1);
    // 0x8006D7F4: jal         0x8006E5E0
    // 0x8006D7F8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8006E5E0(rdram, ctx);
        goto after_3;
    // 0x8006D7F8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x8006D7FC: lbu         $t8, 0x2($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2);
    // 0x8006D800: nop

    // 0x8006D804: bne         $t8, $s0, L_8006D81C
    if (ctx->r24 != ctx->r16) {
        // 0x8006D808: nop
    
            goto L_8006D81C;
    }
    // 0x8006D808: nop

    // 0x8006D80C: ori         $t9, $s3, 0x8
    ctx->r25 = ctx->r19 | 0X8;
    // 0x8006D810: or          $s3, $t9, $zero
    ctx->r19 = ctx->r25 | 0;
    // 0x8006D814: andi        $t0, $s3, 0xFF
    ctx->r8 = ctx->r19 & 0XFF;
    // 0x8006D818: or          $s3, $t0, $zero
    ctx->r19 = ctx->r8 | 0;
L_8006D81C:
    // 0x8006D81C: addiu       $a0, $s1, 0x1
    ctx->r4 = ADD32(ctx->r17, 0X1);
    // 0x8006D820: jal         0x8006E5E0
    // 0x8006D824: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8006E5E0(rdram, ctx);
        goto after_4;
    // 0x8006D824: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_4:
    // 0x8006D828: lbu         $t1, 0x2($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2);
    // 0x8006D82C: nop

    // 0x8006D830: bne         $t1, $s0, L_8006D848
    if (ctx->r9 != ctx->r16) {
        // 0x8006D834: nop
    
            goto L_8006D848;
    }
    // 0x8006D834: nop

    // 0x8006D838: ori         $t2, $s3, 0x2
    ctx->r10 = ctx->r19 | 0X2;
    // 0x8006D83C: or          $s3, $t2, $zero
    ctx->r19 = ctx->r10 | 0;
    // 0x8006D840: andi        $t3, $s3, 0xFF
    ctx->r11 = ctx->r19 & 0XFF;
    // 0x8006D844: or          $s3, $t3, $zero
    ctx->r19 = ctx->r11 | 0;
L_8006D848:
    // 0x8006D848: addiu       $a0, $s1, -0x1
    ctx->r4 = ADD32(ctx->r17, -0X1);
    // 0x8006D84C: jal         0x8006E5E0
    // 0x8006D850: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
    func_8006E5E0(rdram, ctx);
        goto after_5;
    // 0x8006D850: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
    after_5:
    // 0x8006D854: lbu         $t4, 0x2($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X2);
    // 0x8006D858: nop

    // 0x8006D85C: bne         $t4, $s0, L_8006D874
    if (ctx->r12 != ctx->r16) {
        // 0x8006D860: nop
    
            goto L_8006D874;
    }
    // 0x8006D860: nop

    // 0x8006D864: ori         $t5, $s3, 0x40
    ctx->r13 = ctx->r19 | 0X40;
    // 0x8006D868: or          $s3, $t5, $zero
    ctx->r19 = ctx->r13 | 0;
    // 0x8006D86C: andi        $t6, $s3, 0xFF
    ctx->r14 = ctx->r19 & 0XFF;
    // 0x8006D870: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
L_8006D874:
    // 0x8006D874: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006D878: jal         0x8006E5E0
    // 0x8006D87C: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
    func_8006E5E0(rdram, ctx);
        goto after_6;
    // 0x8006D87C: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
    after_6:
    // 0x8006D880: lbu         $t7, 0x2($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2);
    // 0x8006D884: nop

    // 0x8006D888: bne         $t7, $s0, L_8006D8A0
    if (ctx->r15 != ctx->r16) {
        // 0x8006D88C: nop
    
            goto L_8006D8A0;
    }
    // 0x8006D88C: nop

    // 0x8006D890: ori         $t8, $s3, 0x4
    ctx->r24 = ctx->r19 | 0X4;
    // 0x8006D894: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
    // 0x8006D898: andi        $t9, $s3, 0xFF
    ctx->r25 = ctx->r19 & 0XFF;
    // 0x8006D89C: or          $s3, $t9, $zero
    ctx->r19 = ctx->r25 | 0;
L_8006D8A0:
    // 0x8006D8A0: addiu       $a0, $s1, 0x1
    ctx->r4 = ADD32(ctx->r17, 0X1);
    // 0x8006D8A4: jal         0x8006E5E0
    // 0x8006D8A8: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
    func_8006E5E0(rdram, ctx);
        goto after_7;
    // 0x8006D8A8: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
    after_7:
    // 0x8006D8AC: lbu         $t0, 0x2($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X2);
    // 0x8006D8B0: nop

    // 0x8006D8B4: bne         $t0, $s0, L_8006D8CC
    if (ctx->r8 != ctx->r16) {
        // 0x8006D8B8: nop
    
            goto L_8006D8CC;
    }
    // 0x8006D8B8: nop

    // 0x8006D8BC: ori         $t1, $s3, 0x20
    ctx->r9 = ctx->r19 | 0X20;
    // 0x8006D8C0: or          $s3, $t1, $zero
    ctx->r19 = ctx->r9 | 0;
    // 0x8006D8C4: andi        $t2, $s3, 0xFF
    ctx->r10 = ctx->r19 & 0XFF;
    // 0x8006D8C8: or          $s3, $t2, $zero
    ctx->r19 = ctx->r10 | 0;
L_8006D8CC:
    // 0x8006D8CC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8006D8D0: lw          $t4, -0x350($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X350);
    // 0x8006D8D4: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8006D8D8: sll         $t5, $s3, 2
    ctx->r13 = S32(ctx->r19 << 2);
    // 0x8006D8DC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8006D8E0: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x8006D8E4: addiu       $a1, $t6, 0x7FFF
    ctx->r5 = ADD32(ctx->r14, 0X7FFF);
    // 0x8006D8E8: lw          $a1, 0x5C01($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5C01);
    // 0x8006D8EC: jal         0x80070818
    // 0x8006D8F0: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_80070818(rdram, ctx);
        goto after_8;
    // 0x8006D8F0: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_8:
L_8006D8F4:
    // 0x8006D8F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006D8F8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006D8FC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006D900: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D904: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006D908: jr          $ra
    // 0x8006D90C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006D90C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006D910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D910: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006D914: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006D918: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006D91C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006D920: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006D924: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006D928: lbu         $t7, 0x1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1);
    // 0x8006D92C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006D930: beq         $t7, $at, L_8006D984
    if (ctx->r15 == ctx->r1) {
        // 0x8006D934: nop
    
            goto L_8006D984;
    }
    // 0x8006D934: nop

    // 0x8006D938: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x8006D93C: jal         0x800A35EC
    // 0x8006D940: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_800A35EC(rdram, ctx);
        goto after_0;
    // 0x8006D940: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x8006D944: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8006D948: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006D94C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8006D950: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x8006D954: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8006D958: jal         0x8008A5C8
    // 0x8006D95C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8008A5C8(rdram, ctx);
        goto after_1;
    // 0x8006D95C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x8006D960: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8006D964: nop

L_8006D968:
    // 0x8006D968: jal         0x8006D728
    // 0x8006D96C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006D728(rdram, ctx);
        goto after_2;
    // 0x8006D96C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8006D970: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x8006D974: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8006D978: nop

    // 0x8006D97C: bne         $s0, $t8, L_8006D968
    if (ctx->r16 != ctx->r24) {
        // 0x8006D980: nop
    
            goto L_8006D968;
    }
    // 0x8006D980: nop

L_8006D984:
    // 0x8006D984: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D988: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006D98C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006D990: jr          $ra
    // 0x8006D994: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006D994: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006D998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D998: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x8006D99C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006D9A0: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x8006D9A4: bne         $t7, $zero, L_8006D9D0
    if (ctx->r15 != 0) {
        // 0x8006D9A8: nop
    
            goto L_8006D9D0;
    }
    // 0x8006D9A8: nop

    // 0x8006D9AC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_8006D9B0:
    // 0x8006D9B0: lbu         $t8, 0x0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X0);
    // 0x8006D9B4: nop

    // 0x8006D9B8: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x8006D9BC: sb          $t9, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r25;
    // 0x8006D9C0: lw          $a1, 0x4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4);
    // 0x8006D9C4: nop

    // 0x8006D9C8: bne         $a1, $a0, L_8006D9B0
    if (ctx->r5 != ctx->r4) {
        // 0x8006D9CC: nop
    
            goto L_8006D9B0;
    }
    // 0x8006D9CC: nop

L_8006D9D0:
    // 0x8006D9D0: jr          $ra
    // 0x8006D9D4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006D9D4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8006D9D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D9D8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8006D9DC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8006D9E0: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8006D9E4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8006D9E8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8006D9EC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8006D9F0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8006D9F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8006D9F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006D9FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006DA00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006DA04: lbu         $s4, 0x2($t6)
    ctx->r20 = MEM_BU(ctx->r14, 0X2);
    // 0x8006DA08: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
L_8006DA0C:
    // 0x8006DA0C: lb          $s2, 0x9($s0)
    ctx->r18 = MEM_B(ctx->r16, 0X9);
    // 0x8006DA10: lb          $s3, 0xA($s0)
    ctx->r19 = MEM_B(ctx->r16, 0XA);
    // 0x8006DA14: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8006DA18: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8006DA1C: addu        $a0, $s2, $t7
    ctx->r4 = ADD32(ctx->r18, ctx->r15);
    // 0x8006DA20: jal         0x8006E5E0
    // 0x8006DA24: addu        $a1, $s3, $t8
    ctx->r5 = ADD32(ctx->r19, ctx->r24);
    func_8006E5E0(rdram, ctx);
        goto after_0;
    // 0x8006DA24: addu        $a1, $s3, $t8
    ctx->r5 = ADD32(ctx->r19, ctx->r24);
    after_0:
    // 0x8006DA28: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8006DA2C: lbu         $t9, 0x1($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X1);
    // 0x8006DA30: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006DA34: beq         $t9, $at, L_8006DA54
    if (ctx->r25 == ctx->r1) {
        // 0x8006DA38: nop
    
            goto L_8006DA54;
    }
    // 0x8006DA38: nop

    // 0x8006DA3C: lbu         $t0, 0x2($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X2);
    // 0x8006DA40: nop

    // 0x8006DA44: beq         $t0, $s4, L_8006DA54
    if (ctx->r8 == ctx->r20) {
        // 0x8006DA48: nop
    
            goto L_8006DA54;
    }
    // 0x8006DA48: nop

    // 0x8006DA4C: b           L_8006DA6C
    // 0x8006DA50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006DA6C;
    // 0x8006DA50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006DA54:
    // 0x8006DA54: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x8006DA58: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x8006DA5C: nop

    // 0x8006DA60: bne         $s0, $t1, L_8006DA0C
    if (ctx->r16 != ctx->r9) {
        // 0x8006DA64: nop
    
            goto L_8006DA0C;
    }
    // 0x8006DA64: nop

    // 0x8006DA68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006DA6C:
    // 0x8006DA6C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8006DA70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006DA74: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006DA78: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006DA7C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8006DA80: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8006DA84: jr          $ra
    // 0x8006DA88: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8006DA88: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8006DA8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DA8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006DA90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006DA94: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8006DA98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006DA9C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8006DAA0: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x8006DAA4: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8006DAA8: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x8006DAAC: sb          $t8, 0x1($t9)
    MEM_B(0X1, ctx->r25) = ctx->r24;
    // 0x8006DAB0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8006DAB4: addiu       $t1, $zero, 0xFE
    ctx->r9 = ADD32(0, 0XFE);
    // 0x8006DAB8: sb          $zero, 0x2($t0)
    MEM_B(0X2, ctx->r8) = 0;
    // 0x8006DABC: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8006DAC0: nop

    // 0x8006DAC4: sb          $t1, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r9;
    // 0x8006DAC8: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8006DACC: nop

    // 0x8006DAD0: sw          $t3, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r11;
    // 0x8006DAD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006DAD8: jal         0x8006E9C8
    // 0x8006DADC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_8006E9C8(rdram, ctx);
        goto after_0;
    // 0x8006DADC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x8006DAE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006DAE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006DAE8: jr          $ra
    // 0x8006DAEC: nop

    return;
    // 0x8006DAEC: nop

;}
RECOMP_FUNC void func_8006DAF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DAF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006DAF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006DAF8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8006DAFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006DB00: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8006DB04: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x8006DB08: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8006DB0C: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x8006DB10: sb          $t8, 0x1($t9)
    MEM_B(0X1, ctx->r25) = ctx->r24;
    // 0x8006DB14: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8006DB18: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8006DB1C: sb          $zero, 0x2($t0)
    MEM_B(0X2, ctx->r8) = 0;
    // 0x8006DB20: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8006DB24: nop

    // 0x8006DB28: sb          $t1, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r9;
    // 0x8006DB2C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8006DB30: nop

    // 0x8006DB34: sw          $t3, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r11;
    // 0x8006DB38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006DB3C: jal         0x8006E9C8
    // 0x8006DB40: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_8006E9C8(rdram, ctx);
        goto after_0;
    // 0x8006DB40: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x8006DB44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006DB48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006DB4C: jr          $ra
    // 0x8006DB50: nop

    return;
    // 0x8006DB50: nop

;}
RECOMP_FUNC void func_8006DB54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DB54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006DB58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006DB5C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006DB60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006DB64: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006DB68: lbu         $t7, 0x4($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4);
    // 0x8006DB6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006DB70: bne         $t7, $at, L_8006DB94
    if (ctx->r15 != ctx->r1) {
        // 0x8006DB74: nop
    
            goto L_8006DB94;
    }
    // 0x8006DB74: nop

    // 0x8006DB78: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8006DB7C: nop

    // 0x8006DB80: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8006DB84: jal         0x8006D728
    // 0x8006DB88: nop

    func_8006D728(rdram, ctx);
        goto after_0;
    // 0x8006DB88: nop

    after_0:
    // 0x8006DB8C: b           L_8006DBA8
    // 0x8006DB90: nop

        goto L_8006DBA8;
    // 0x8006DB90: nop

L_8006DB94:
    // 0x8006DB94: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006DB98: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8006DB9C: addiu       $a1, $a1, -0x27D4
    ctx->r5 = ADD32(ctx->r5, -0X27D4);
    // 0x8006DBA0: jal         0x80083560
    // 0x8006DBA4: addiu       $a0, $a0, -0x27F0
    ctx->r4 = ADD32(ctx->r4, -0X27F0);
    Fault_Assert(rdram, ctx);
        goto after_1;
    // 0x8006DBA4: addiu       $a0, $a0, -0x27F0
    ctx->r4 = ADD32(ctx->r4, -0X27F0);
    after_1:
L_8006DBA8:
    // 0x8006DBA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006DBAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006DBB0: jr          $ra
    // 0x8006DBB4: nop

    return;
    // 0x8006DBB4: nop

;}
RECOMP_FUNC void func_8006DBB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DBB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006DBBC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006DBC0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006DBC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006DBC8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8006DBCC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006DBD0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006DBD4: lhu         $s0, 0x12C2($t6)
    ctx->r16 = MEM_HU(ctx->r14, 0X12C2);
    // 0x8006DBD8: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x8006DBDC: blez        $s0, L_8006DBFC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8006DBE0: nop
    
            goto L_8006DBFC;
    }
    // 0x8006DBE0: nop

L_8006DBE4:
    // 0x8006DBE4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8006DBE8: jal         0x8006DB54
    // 0x8006DBEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8006DB54(rdram, ctx);
        goto after_0;
    // 0x8006DBEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8006DBF0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8006DBF4: bgtz        $s0, L_8006DBE4
    if (SIGNED(ctx->r16) > 0) {
        // 0x8006DBF8: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_8006DBE4;
    }
    // 0x8006DBF8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_8006DBFC:
    // 0x8006DBFC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8006DC00: nop

    // 0x8006DC04: sh          $zero, 0x12C2($t7)
    MEM_H(0X12C2, ctx->r15) = 0;
    // 0x8006DC08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006DC0C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006DC10: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006DC14: jr          $ra
    // 0x8006DC18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006DC18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006DC1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DC1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006DC20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006DC24: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006DC28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006DC2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006DC30: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8006DC34: lhu         $t8, 0x12C0($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X12C0);
    // 0x8006DC38: lhu         $t7, 0x12C2($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X12C2);
    // 0x8006DC3C: nop

    // 0x8006DC40: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8006DC44: bne         $at, $zero, L_8006DC60
    if (ctx->r1 != 0) {
        // 0x8006DC48: nop
    
            goto L_8006DC60;
    }
    // 0x8006DC48: nop

    // 0x8006DC4C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006DC50: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8006DC54: addiu       $a1, $a1, -0x279C
    ctx->r5 = ADD32(ctx->r5, -0X279C);
    // 0x8006DC58: jal         0x80083560
    // 0x8006DC5C: addiu       $a0, $a0, -0x27BC
    ctx->r4 = ADD32(ctx->r4, -0X27BC);
    Fault_Assert(rdram, ctx);
        goto after_0;
    // 0x8006DC5C: addiu       $a0, $a0, -0x27BC
    ctx->r4 = ADD32(ctx->r4, -0X27BC);
    after_0:
L_8006DC60:
    // 0x8006DC60: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8006DC64: lbu         $t9, 0x23($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X23);
    // 0x8006DC68: lhu         $t1, 0x12C2($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X12C2);
    // 0x8006DC6C: nop

    // 0x8006DC70: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8006DC74: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8006DC78: sb          $t9, 0x4($t3)
    MEM_B(0X4, ctx->r11) = ctx->r25;
    // 0x8006DC7C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8006DC80: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8006DC84: lhu         $t6, 0x12C2($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X12C2);
    // 0x8006DC88: nop

    // 0x8006DC8C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8006DC90: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8006DC94: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x8006DC98: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8006DC9C: nop

    // 0x8006DCA0: lhu         $t0, 0x12C2($t1)
    ctx->r8 = MEM_HU(ctx->r9, 0X12C2);
    // 0x8006DCA4: nop

    // 0x8006DCA8: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x8006DCAC: sh          $t2, 0x12C2($t1)
    MEM_H(0X12C2, ctx->r9) = ctx->r10;
    // 0x8006DCB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006DCB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006DCB8: jr          $ra
    // 0x8006DCBC: nop

    return;
    // 0x8006DCBC: nop

;}
RECOMP_FUNC void func_8006DCC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DCC0: addiu       $t6, $zero, 0x258
    ctx->r14 = ADD32(0, 0X258);
    // 0x8006DCC4: sh          $t6, 0x12C0($a0)
    MEM_H(0X12C0, ctx->r4) = ctx->r14;
    // 0x8006DCC8: jr          $ra
    // 0x8006DCCC: sh          $zero, 0x12C2($a0)
    MEM_H(0X12C2, ctx->r4) = 0;
    return;
    // 0x8006DCCC: sh          $zero, 0x12C2($a0)
    MEM_H(0X12C2, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8006DCD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DCD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006DCD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006DCD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006DCDC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8006DCE0:
    // 0x8006DCE0: jal         0x8006DD64
    // 0x8006DCE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006DD64(rdram, ctx);
        goto after_0;
    // 0x8006DCE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8006DCE8: beq         $v0, $zero, L_8006DCF8
    if (ctx->r2 == 0) {
        // 0x8006DCEC: nop
    
            goto L_8006DCF8;
    }
    // 0x8006DCEC: nop

    // 0x8006DCF0: b           L_8006DD0C
    // 0x8006DCF4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8006DD0C;
    // 0x8006DCF4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8006DCF8:
    // 0x8006DCF8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006DCFC: slti        $at, $s0, 0x13
    ctx->r1 = SIGNED(ctx->r16) < 0X13 ? 1 : 0;
    // 0x8006DD00: bne         $at, $zero, L_8006DCE0
    if (ctx->r1 != 0) {
        // 0x8006DD04: nop
    
            goto L_8006DCE0;
    }
    // 0x8006DD04: nop

    // 0x8006DD08: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
L_8006DD0C:
    // 0x8006DD0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006DD10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006DD14: jr          $ra
    // 0x8006DD18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006DD18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006DD1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DD1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006DD20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006DD24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006DD28: addiu       $s0, $zero, 0x13
    ctx->r16 = ADD32(0, 0X13);
L_8006DD2C:
    // 0x8006DD2C: jal         0x8006DD64
    // 0x8006DD30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006DD64(rdram, ctx);
        goto after_0;
    // 0x8006DD30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8006DD34: beq         $v0, $zero, L_8006DD44
    if (ctx->r2 == 0) {
        // 0x8006DD38: nop
    
            goto L_8006DD44;
    }
    // 0x8006DD38: nop

    // 0x8006DD3C: b           L_8006DD54
    // 0x8006DD40: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8006DD54;
    // 0x8006DD40: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8006DD44:
    // 0x8006DD44: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8006DD48: bgtz        $s0, L_8006DD2C
    if (SIGNED(ctx->r16) > 0) {
        // 0x8006DD4C: nop
    
            goto L_8006DD2C;
    }
    // 0x8006DD4C: nop

    // 0x8006DD50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006DD54:
    // 0x8006DD54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006DD58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006DD5C: jr          $ra
    // 0x8006DD60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006DD60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006DD64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DD64: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8006DD68: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8006DD6C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006DD70: lw          $t6, -0x430($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X430);
    // 0x8006DD74: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x8006DD78: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8006DD7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006DD80: slti        $at, $a2, 0xA
    ctx->r1 = SIGNED(ctx->r6) < 0XA ? 1 : 0;
    // 0x8006DD84: addu        $a1, $t6, $t8
    ctx->r5 = ADD32(ctx->r14, ctx->r24);
    // 0x8006DD88: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006DD8C: beq         $at, $zero, L_8006DDC4
    if (ctx->r1 == 0) {
        // 0x8006DD90: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_8006DDC4;
    }
    // 0x8006DD90: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_8006DD94:
    // 0x8006DD94: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x8006DD98: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006DD9C: lbu         $t0, 0x1($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1);
    // 0x8006DDA0: nop

    // 0x8006DDA4: beq         $t0, $at, L_8006DDB4
    if (ctx->r8 == ctx->r1) {
        // 0x8006DDA8: nop
    
            goto L_8006DDB4;
    }
    // 0x8006DDA8: nop

    // 0x8006DDAC: b           L_8006DDC8
    // 0x8006DDB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006DDC8;
    // 0x8006DDB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006DDB4:
    // 0x8006DDB4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8006DDB8: slti        $at, $a2, 0xA
    ctx->r1 = SIGNED(ctx->r6) < 0XA ? 1 : 0;
    // 0x8006DDBC: bne         $at, $zero, L_8006DD94
    if (ctx->r1 != 0) {
        // 0x8006DDC0: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_8006DD94;
    }
    // 0x8006DDC0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_8006DDC4:
    // 0x8006DDC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006DDC8:
    // 0x8006DDC8: jr          $ra
    // 0x8006DDCC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006DDCC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
