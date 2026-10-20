#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800A67EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A67EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A67F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A67F4: bne         $a0, $zero, L_800A6810
    if (ctx->r4 != 0) {
        // 0x800A67F8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_800A6810;
    }
    // 0x800A67F8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800A67FC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A6800: jal         0x800B3BFC
    // 0x800A6804: addiu       $a0, $a0, 0x950
    ctx->r4 = ADD32(ctx->r4, 0X950);
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x800A6804: addiu       $a0, $a0, 0x950
    ctx->r4 = ADD32(ctx->r4, 0X950);
    after_0:
    // 0x800A6808: b           L_800A6890
    // 0x800A680C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A6890;
    // 0x800A680C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A6810:
    // 0x800A6810: lw          $v1, 0x10($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X10);
    // 0x800A6814: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A6818: addiu       $a0, $a0, 0x960
    ctx->r4 = ADD32(ctx->r4, 0X960);
    // 0x800A681C: bnel        $v1, $zero, L_800A684C
    if (ctx->r3 != 0) {
        // 0x800A6820: lw          $v0, 0x8($a2)
        ctx->r2 = MEM_W(ctx->r6, 0X8);
            goto L_800A684C;
    }
    goto skip_0;
    // 0x800A6820: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    skip_0:
    // 0x800A6824: jal         0x800B3BFC
    // 0x800A6828: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    osSyncPrintf(rdram, ctx);
        goto after_1;
    // 0x800A6828: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x800A682C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800A6830: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A6834: addiu       $a0, $a0, 0x978
    ctx->r4 = ADD32(ctx->r4, 0X978);
    // 0x800A6838: jal         0x800B3BFC
    // 0x800A683C: lw          $a1, 0x10($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X10);
    osSyncPrintf(rdram, ctx);
        goto after_2;
    // 0x800A683C: lw          $a1, 0x10($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X10);
    after_2:
    // 0x800A6840: b           L_800A6890
    // 0x800A6844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A6890;
    // 0x800A6844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A6848: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
L_800A684C:
    // 0x800A684C: beql        $v0, $zero, L_800A6860
    if (ctx->r2 == 0) {
        // 0x800A6850: lw          $v0, 0xC($a2)
        ctx->r2 = MEM_W(ctx->r6, 0XC);
            goto L_800A6860;
    }
    goto skip_1;
    // 0x800A6850: lw          $v0, 0xC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC);
    skip_1:
    // 0x800A6854: lw          $t6, 0xC($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XC);
    // 0x800A6858: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x800A685C: lw          $v0, 0xC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC);
L_800A6860:
    // 0x800A6860: beql        $v0, $zero, L_800A6874
    if (ctx->r2 == 0) {
        // 0x800A6864: lw          $t8, 0x1D0($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X1D0);
            goto L_800A6874;
    }
    goto skip_2;
    // 0x800A6864: lw          $t8, 0x1D0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X1D0);
    skip_2:
    // 0x800A6868: lw          $t7, 0x8($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X8);
    // 0x800A686C: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x800A6870: lw          $t8, 0x1D0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X1D0);
L_800A6874:
    // 0x800A6874: bnel        $a2, $t8, L_800A6888
    if (ctx->r6 != ctx->r24) {
        // 0x800A6878: sw          $zero, 0xC($a2)
        MEM_W(0XC, ctx->r6) = 0;
            goto L_800A6888;
    }
    goto skip_3;
    // 0x800A6878: sw          $zero, 0xC($a2)
    MEM_W(0XC, ctx->r6) = 0;
    skip_3:
    // 0x800A687C: lw          $t9, 0xC($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XC);
    // 0x800A6880: sw          $t9, 0x1D0($v1)
    MEM_W(0X1D0, ctx->r3) = ctx->r25;
    // 0x800A6884: sw          $zero, 0xC($a2)
    MEM_W(0XC, ctx->r6) = 0;
L_800A6888:
    // 0x800A6888: sw          $zero, 0x8($a2)
    MEM_W(0X8, ctx->r6) = 0;
    // 0x800A688C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A6890:
    // 0x800A6890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A6894: jr          $ra
    // 0x800A6898: nop

    return;
    // 0x800A6898: nop

;}
RECOMP_FUNC void func_800A689C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A689C: lw          $v0, 0x34($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X34);
    // 0x800A68A0: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x800A68A4: addu        $t6, $a1, $a3
    ctx->r14 = ADD32(ctx->r5, ctx->r7);
    // 0x800A68A8: beq         $v0, $zero, L_800A696C
    if (ctx->r2 == 0) {
        // 0x800A68AC: nop
    
            goto L_800A696C;
    }
    // 0x800A68AC: nop

    // 0x800A68B0: bgez        $t6, L_800A68C0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800A68B4: sra         $t7, $t6, 1
        ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
            goto L_800A68C0;
    }
    // 0x800A68B4: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x800A68B8: addiu       $at, $t6, 0x1
    ctx->r1 = ADD32(ctx->r14, 0X1);
    // 0x800A68BC: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_800A68C0:
    // 0x800A68C0: lw          $t8, 0x28($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X28);
    // 0x800A68C4: addu        $t9, $a2, $v1
    ctx->r25 = ADD32(ctx->r6, ctx->r3);
    // 0x800A68C8: subu        $t5, $a1, $a3
    ctx->r13 = SUB32(ctx->r5, ctx->r7);
    // 0x800A68CC: sh          $t7, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r15;
    // 0x800A68D0: bgez        $t9, L_800A68E0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800A68D4: sra         $t0, $t9, 1
        ctx->r8 = S32(SIGNED(ctx->r25) >> 1);
            goto L_800A68E0;
    }
    // 0x800A68D4: sra         $t0, $t9, 1
    ctx->r8 = S32(SIGNED(ctx->r25) >> 1);
    // 0x800A68D8: addiu       $at, $t9, 0x1
    ctx->r1 = ADD32(ctx->r25, 0X1);
    // 0x800A68DC: sra         $t0, $at, 1
    ctx->r8 = S32(SIGNED(ctx->r1) >> 1);
L_800A68E0:
    // 0x800A68E0: lw          $t1, 0x28($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X28);
    // 0x800A68E4: slt         $at, $a1, $a3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x800A68E8: beq         $at, $zero, L_800A6910
    if (ctx->r1 == 0) {
        // 0x800A68EC: sh          $t0, 0xA($t1)
        MEM_H(0XA, ctx->r9) = ctx->r8;
            goto L_800A6910;
    }
    // 0x800A68EC: sh          $t0, 0xA($t1)
    MEM_H(0XA, ctx->r9) = ctx->r8;
    // 0x800A68F0: subu        $t2, $a3, $a1
    ctx->r10 = SUB32(ctx->r7, ctx->r5);
    // 0x800A68F4: lw          $t4, 0x28($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X28);
    // 0x800A68F8: bgez        $t2, L_800A6908
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800A68FC: sra         $t3, $t2, 1
        ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
            goto L_800A6908;
    }
    // 0x800A68FC: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x800A6900: addiu       $at, $t2, 0x1
    ctx->r1 = ADD32(ctx->r10, 0X1);
    // 0x800A6904: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_800A6908:
    // 0x800A6908: b           L_800A6928
    // 0x800A690C: sh          $t3, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r11;
        goto L_800A6928;
    // 0x800A690C: sh          $t3, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r11;
L_800A6910:
    // 0x800A6910: lw          $t7, 0x28($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X28);
    // 0x800A6914: bgez        $t5, L_800A6924
    if (SIGNED(ctx->r13) >= 0) {
        // 0x800A6918: sra         $t6, $t5, 1
        ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
            goto L_800A6924;
    }
    // 0x800A6918: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x800A691C: addiu       $at, $t5, 0x1
    ctx->r1 = ADD32(ctx->r13, 0X1);
    // 0x800A6920: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_800A6924:
    // 0x800A6924: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
L_800A6928:
    // 0x800A6928: slt         $at, $a2, $v1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800A692C: beq         $at, $zero, L_800A6954
    if (ctx->r1 == 0) {
        // 0x800A6930: subu        $t1, $a2, $v1
        ctx->r9 = SUB32(ctx->r6, ctx->r3);
            goto L_800A6954;
    }
    // 0x800A6930: subu        $t1, $a2, $v1
    ctx->r9 = SUB32(ctx->r6, ctx->r3);
    // 0x800A6934: subu        $t8, $v1, $a2
    ctx->r24 = SUB32(ctx->r3, ctx->r6);
    // 0x800A6938: lw          $t0, 0x28($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X28);
    // 0x800A693C: bgez        $t8, L_800A694C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800A6940: sra         $t9, $t8, 1
        ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
            goto L_800A694C;
    }
    // 0x800A6940: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x800A6944: addiu       $at, $t8, 0x1
    ctx->r1 = ADD32(ctx->r24, 0X1);
    // 0x800A6948: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_800A694C:
    // 0x800A694C: jr          $ra
    // 0x800A6950: sh          $t9, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r25;
    return;
    // 0x800A6950: sh          $t9, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r25;
L_800A6954:
    // 0x800A6954: lw          $t3, 0x28($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X28);
    // 0x800A6958: bgez        $t1, L_800A6968
    if (SIGNED(ctx->r9) >= 0) {
        // 0x800A695C: sra         $t2, $t1, 1
        ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
            goto L_800A6968;
    }
    // 0x800A695C: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x800A6960: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x800A6964: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_800A6968:
    // 0x800A6968: sh          $t2, 0x2($t3)
    MEM_H(0X2, ctx->r11) = ctx->r10;
L_800A696C:
    // 0x800A696C: jr          $ra
    // 0x800A6970: nop

    return;
    // 0x800A6970: nop

;}
RECOMP_FUNC void func_800A6974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6974: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x800A6978: lw          $v0, 0x34($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X34);
    // 0x800A697C: beq         $v0, $zero, L_800A6988
    if (ctx->r2 == 0) {
        // 0x800A6980: nop
    
            goto L_800A6988;
    }
    // 0x800A6980: nop

    // 0x800A6984: sw          $a1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r5;
L_800A6988:
    // 0x800A6988: jr          $ra
    // 0x800A698C: nop

    return;
    // 0x800A698C: nop

;}
RECOMP_FUNC void func_800A6990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6990: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A6994: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A6998: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800A699C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A69A0: jal         0x8007E03C
    // 0x800A69A4: addiu       $a0, $zero, 0x1E8
    ctx->r4 = ADD32(0, 0X1E8);
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x800A69A4: addiu       $a0, $zero, 0x1E8
    ctx->r4 = ADD32(0, 0X1E8);
    after_0:
    // 0x800A69A8: bne         $v0, $zero, L_800A69B8
    if (ctx->r2 != 0) {
        // 0x800A69AC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800A69B8;
    }
    // 0x800A69AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A69B0: b           L_800A6A18
    // 0x800A69B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800A6A18;
    // 0x800A69B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800A69B8:
    // 0x800A69B8: jal         0x800A9D50
    // 0x800A69BC: nop

    func_800A9D50(rdram, ctx);
        goto after_1;
    // 0x800A69BC: nop

    after_1:
    // 0x800A69C0: jal         0x800AA14C
    // 0x800A69C4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800AA14C(rdram, ctx);
        goto after_2;
    // 0x800A69C4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x800A69C8: jal         0x800A9D60
    // 0x800A69CC: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    func_800A9D60(rdram, ctx);
        goto after_3;
    // 0x800A69CC: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    after_3:
    // 0x800A69D0: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x800A69D4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800A69D8: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x800A69DC: bnel        $t6, $zero, L_800A69F8
    if (ctx->r14 != 0) {
        // 0x800A69E0: sw          $zero, 0x0($s0)
        MEM_W(0X0, ctx->r16) = 0;
            goto L_800A69F8;
    }
    goto skip_0;
    // 0x800A69E0: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    skip_0:
    // 0x800A69E4: jal         0x8007E328
    // 0x800A69E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E328(rdram, ctx);
        goto after_4;
    // 0x800A69E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800A69EC: b           L_800A6A18
    // 0x800A69F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800A6A18;
    // 0x800A69F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A69F4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_800A69F8:
    // 0x800A69F8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x800A69FC: sh          $t7, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r15;
    // 0x800A6A00: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x800A6A04: jal         0x800B79D0
    // 0x800A6A08: sw          $zero, 0x1D0($s0)
    MEM_W(0X1D0, ctx->r16) = 0;
    guMtxIdentF(rdram, ctx);
        goto after_5;
    // 0x800A6A08: sw          $zero, 0x1D0($s0)
    MEM_W(0X1D0, ctx->r16) = 0;
    after_5:
    // 0x800A6A0C: jal         0x800B79D0
    // 0x800A6A10: addiu       $a0, $s0, 0x4C
    ctx->r4 = ADD32(ctx->r16, 0X4C);
    guMtxIdentF(rdram, ctx);
        goto after_6;
    // 0x800A6A10: addiu       $a0, $s0, 0x4C
    ctx->r4 = ADD32(ctx->r16, 0X4C);
    after_6:
    // 0x800A6A14: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_800A6A18:
    // 0x800A6A18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A6A1C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A6A20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A6A24: jr          $ra
    // 0x800A6A28: nop

    return;
    // 0x800A6A28: nop

;}
RECOMP_FUNC void func_800A6A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6A2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A6A30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A6A34: bne         $a0, $zero, L_800A6A50
    if (ctx->r4 != 0) {
        // 0x800A6A38: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_800A6A50;
    }
    // 0x800A6A38: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800A6A3C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A6A40: jal         0x800B3BFC
    // 0x800A6A44: addiu       $a0, $a0, 0x994
    ctx->r4 = ADD32(ctx->r4, 0X994);
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x800A6A44: addiu       $a0, $a0, 0x994
    ctx->r4 = ADD32(ctx->r4, 0X994);
    after_0:
    // 0x800A6A48: b           L_800A6A68
    // 0x800A6A4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A6A68;
    // 0x800A6A4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A6A50:
    // 0x800A6A50: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x800A6A54: jal         0x800AB5E0
    // 0x800A6A58: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_800AB5E0(rdram, ctx);
        goto after_1;
    // 0x800A6A58: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x800A6A5C: jal         0x8007E328
    // 0x800A6A60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8007E328(rdram, ctx);
        goto after_2;
    // 0x800A6A60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x800A6A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A6A68:
    // 0x800A6A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A6A6C: jr          $ra
    // 0x800A6A70: nop

    return;
    // 0x800A6A70: nop

;}
RECOMP_FUNC void func_800A6A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6A74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A6A78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A6A7C: jal         0x800A9D50
    // 0x800A6A80: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800A9D50(rdram, ctx);
        goto after_0;
    // 0x800A6A80: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A6A84: jal         0x800AA14C
    // 0x800A6A88: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800AA14C(rdram, ctx);
        goto after_1;
    // 0x800A6A88: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x800A6A8C: jal         0x800A9D60
    // 0x800A6A90: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800A9D60(rdram, ctx);
        goto after_2;
    // 0x800A6A90: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x800A6A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A6A98: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800A6A9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A6AA0: jr          $ra
    // 0x800A6AA4: nop

    return;
    // 0x800A6AA4: nop

;}
RECOMP_FUNC void func_800A6AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6AA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A6AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A6AB0: jal         0x800AB934
    // 0x800A6AB4: nop

    func_800AB934(rdram, ctx);
        goto after_0;
    // 0x800A6AB4: nop

    after_0:
    // 0x800A6AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A6ABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A6AC0: jr          $ra
    // 0x800A6AC4: nop

    return;
    // 0x800A6AC4: nop

;}
RECOMP_FUNC void func_800A6AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6AC8: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x800A6ACC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A6AD0: sh          $t6, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r14;
    // 0x800A6AD4: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x800A6AD8: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x800A6ADC: lw          $a2, 0x10($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X10);
    // 0x800A6AE0: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x800A6AE4: beq         $v1, $zero, L_800A6B0C
    if (ctx->r3 == 0) {
        // 0x800A6AE8: andi        $t7, $v1, 0x1
        ctx->r15 = ctx->r3 & 0X1;
            goto L_800A6B0C;
    }
L_800A6AE8:
    // 0x800A6AE8: andi        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 & 0X1;
    // 0x800A6AEC: beq         $t7, $zero, L_800A6B00
    if (ctx->r15 == 0) {
        // 0x800A6AF0: sra         $t8, $v1, 1
        ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
            goto L_800A6B00;
    }
    // 0x800A6AF0: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800A6AF4: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800A6AF8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800A6AFC: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
L_800A6B00:
    // 0x800A6B00: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800A6B04: bne         $t8, $zero, L_800A6AE8
    if (ctx->r24 != 0) {
        // 0x800A6B08: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_800A6AE8;
    }
    // 0x800A6B08: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_800A6B0C:
    // 0x800A6B0C: jr          $ra
    // 0x800A6B10: nop

    return;
    // 0x800A6B10: nop

;}
RECOMP_FUNC void func_800A6B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6B14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A6B18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A6B1C: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x800A6B20: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800A6B24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A6B28: bnel        $t6, $at, L_800A6B48
    if (ctx->r14 != ctx->r1) {
        // 0x800A6B2C: mfc1        $a1, $f12
        ctx->r5 = (int32_t)ctx->f12.u32l;
            goto L_800A6B48;
    }
    goto skip_0;
    // 0x800A6B2C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    skip_0:
    // 0x800A6B30: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800A6B34: jal         0x800A6BB0
    // 0x800A6B38: nop

    func_800A6BB0(rdram, ctx);
        goto after_0;
    // 0x800A6B38: nop

    after_0:
    // 0x800A6B3C: b           L_800A6B54
    // 0x800A6B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A6B54;
    // 0x800A6B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A6B44: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
L_800A6B48:
    // 0x800A6B48: jal         0x800A6B60
    // 0x800A6B4C: nop

    func_800A6B60(rdram, ctx);
        goto after_1;
    // 0x800A6B4C: nop

    after_1:
    // 0x800A6B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A6B54:
    // 0x800A6B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A6B58: jr          $ra
    // 0x800A6B5C: nop

    return;
    // 0x800A6B5C: nop

;}
RECOMP_FUNC void func_800A6B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6B60: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x800A6B64: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800A6B68: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x800A6B6C: beq         $v1, $zero, L_800A6BA8
    if (ctx->r3 == 0) {
        // 0x800A6B70: lw          $a1, 0x10($a0)
        ctx->r5 = MEM_W(ctx->r4, 0X10);
            goto L_800A6BA8;
    }
    // 0x800A6B70: lw          $a1, 0x10($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X10);
L_800A6B74:
    // 0x800A6B74: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x800A6B78: beq         $t6, $zero, L_800A6B9C
    if (ctx->r14 == 0) {
        // 0x800A6B7C: sra         $t8, $v1, 1
        ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
            goto L_800A6B9C;
    }
    // 0x800A6B7C: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800A6B80: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x800A6B84: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800A6B88: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x800A6B8C: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800A6B90: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x800A6B94: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800A6B98: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
L_800A6B9C:
    // 0x800A6B9C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800A6BA0: bne         $t8, $zero, L_800A6B74
    if (ctx->r24 != 0) {
        // 0x800A6BA4: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_800A6B74;
    }
    // 0x800A6BA4: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_800A6BA8:
    // 0x800A6BA8: jr          $ra
    // 0x800A6BAC: nop

    return;
    // 0x800A6BAC: nop

;}
RECOMP_FUNC void func_800A6BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6BB0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x800A6BB4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800A6BB8: lw          $t0, 0x1C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X1C);
    // 0x800A6BBC: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x800A6BC0: lw          $t1, 0x14($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X14);
    // 0x800A6BC4: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800A6BC8: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x800A6BCC: addiu       $a1, $a2, 0x158
    ctx->r5 = ADD32(ctx->r6, 0X158);
    // 0x800A6BD0: addiu       $a3, $a2, 0x164
    ctx->r7 = ADD32(ctx->r6, 0X164);
L_800A6BD4:
    // 0x800A6BD4: andi        $t6, $t1, 0x1
    ctx->r14 = ctx->r9 & 0X1;
    // 0x800A6BD8: beq         $t6, $zero, L_800A6C2C
    if (ctx->r14 == 0) {
        // 0x800A6BDC: addiu       $t2, $t2, -0x1
        ctx->r10 = ADD32(ctx->r10, -0X1);
            goto L_800A6C2C;
    }
    // 0x800A6BDC: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x800A6BE0: lw          $t7, 0x10($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X10);
    // 0x800A6BE4: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800A6BE8: addiu       $t0, $t0, 0x14
    ctx->r8 = ADD32(ctx->r8, 0X14);
    // 0x800A6BEC: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800A6BF0: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x800A6BF4: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800A6BF8: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x800A6BFC: lw          $t8, -0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, -0X4);
    // 0x800A6C00: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800A6C04: lwc1        $f18, 0x4($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800A6C08: mul.s       $f6, $f18, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x800A6C0C: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x800A6C10: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x800A6C14: lw          $t9, -0x4($t0)
    ctx->r25 = MEM_W(ctx->r8, -0X4);
    // 0x800A6C18: lwc1        $f8, 0x0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X0);
    // 0x800A6C1C: lwc1        $f10, 0x8($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800A6C20: mul.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800A6C24: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x800A6C28: swc1        $f16, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f16.u32l;
L_800A6C2C:
    // 0x800A6C2C: sra         $t3, $t1, 1
    ctx->r11 = S32(SIGNED(ctx->r9) >> 1);
    // 0x800A6C30: or          $t1, $t3, $zero
    ctx->r9 = ctx->r11 | 0;
    // 0x800A6C34: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A6C38: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800A6C3C: bne         $t2, $zero, L_800A6BD4
    if (ctx->r10 != 0) {
        // 0x800A6C40: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_800A6BD4;
    }
    // 0x800A6C40: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800A6C44: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x800A6C48: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800A6C4C: addiu       $a1, $a2, 0x140
    ctx->r5 = ADD32(ctx->r6, 0X140);
    // 0x800A6C50: addiu       $a3, $a2, 0x14C
    ctx->r7 = ADD32(ctx->r6, 0X14C);
L_800A6C54:
    // 0x800A6C54: andi        $t4, $t1, 0x1
    ctx->r12 = ctx->r9 & 0X1;
    // 0x800A6C58: beq         $t4, $zero, L_800A6CAC
    if (ctx->r12 == 0) {
        // 0x800A6C5C: addiu       $t2, $t2, -0x1
        ctx->r10 = ADD32(ctx->r10, -0X1);
            goto L_800A6CAC;
    }
    // 0x800A6C5C: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x800A6C60: lw          $t5, 0x10($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X10);
    // 0x800A6C64: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800A6C68: addiu       $t0, $t0, 0x14
    ctx->r8 = ADD32(ctx->r8, 0X14);
    // 0x800A6C6C: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800A6C70: mul.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x800A6C74: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800A6C78: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    // 0x800A6C7C: lw          $t6, -0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, -0X4);
    // 0x800A6C80: lwc1        $f18, 0x0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800A6C84: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800A6C88: mul.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x800A6C8C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800A6C90: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
    // 0x800A6C94: lw          $t7, -0x4($t0)
    ctx->r15 = MEM_W(ctx->r8, -0X4);
    // 0x800A6C98: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x800A6C9C: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800A6CA0: mul.s       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x800A6CA4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800A6CA8: swc1        $f18, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
L_800A6CAC:
    // 0x800A6CAC: sra         $t8, $t1, 1
    ctx->r24 = S32(SIGNED(ctx->r9) >> 1);
    // 0x800A6CB0: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x800A6CB4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A6CB8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800A6CBC: bne         $t2, $zero, L_800A6C54
    if (ctx->r10 != 0) {
        // 0x800A6CC0: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_800A6C54;
    }
    // 0x800A6CC0: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800A6CC4: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
L_800A6CC8:
    // 0x800A6CC8: andi        $t9, $t1, 0x1
    ctx->r25 = ctx->r9 & 0X1;
    // 0x800A6CCC: beq         $t9, $zero, L_800A6CF0
    if (ctx->r25 == 0) {
        // 0x800A6CD0: addiu       $t2, $t2, -0x1
        ctx->r10 = ADD32(ctx->r10, -0X1);
            goto L_800A6CF0;
    }
    // 0x800A6CD0: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x800A6CD4: lw          $t3, 0x10($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X10);
    // 0x800A6CD8: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800A6CDC: addiu       $t0, $t0, 0x14
    ctx->r8 = ADD32(ctx->r8, 0X14);
    // 0x800A6CE0: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x800A6CE4: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x800A6CE8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800A6CEC: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
L_800A6CF0:
    // 0x800A6CF0: sra         $t4, $t1, 1
    ctx->r12 = S32(SIGNED(ctx->r9) >> 1);
    // 0x800A6CF4: or          $t1, $t4, $zero
    ctx->r9 = ctx->r12 | 0;
    // 0x800A6CF8: bne         $t2, $zero, L_800A6CC8
    if (ctx->r10 != 0) {
        // 0x800A6CFC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800A6CC8;
    }
    // 0x800A6CFC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A6D00: jr          $ra
    // 0x800A6D04: nop

    return;
    // 0x800A6D04: nop

;}
RECOMP_FUNC void func_800A6D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6D08: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x800A6D0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A6D10: bnel        $t6, $at, L_800A6D60
    if (ctx->r14 != ctx->r1) {
        // 0x800A6D14: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_800A6D60;
    }
    goto skip_0;
    // 0x800A6D14: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x800A6D18: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x800A6D1C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800A6D20: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x800A6D24: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x800A6D28: swc1        $f0, 0x16C($a1)
    MEM_W(0X16C, ctx->r5) = ctx->f0.u32l;
    // 0x800A6D2C: swc1        $f0, 0x168($a1)
    MEM_W(0X168, ctx->r5) = ctx->f0.u32l;
    // 0x800A6D30: swc1        $f0, 0x164($a1)
    MEM_W(0X164, ctx->r5) = ctx->f0.u32l;
    // 0x800A6D34: swc1        $f0, 0x160($a1)
    MEM_W(0X160, ctx->r5) = ctx->f0.u32l;
    // 0x800A6D38: swc1        $f0, 0x15C($a1)
    MEM_W(0X15C, ctx->r5) = ctx->f0.u32l;
    // 0x800A6D3C: swc1        $f0, 0x158($a1)
    MEM_W(0X158, ctx->r5) = ctx->f0.u32l;
    // 0x800A6D40: swc1        $f0, 0x154($a1)
    MEM_W(0X154, ctx->r5) = ctx->f0.u32l;
    // 0x800A6D44: swc1        $f0, 0x150($a1)
    MEM_W(0X150, ctx->r5) = ctx->f0.u32l;
    // 0x800A6D48: swc1        $f0, 0x14C($a1)
    MEM_W(0X14C, ctx->r5) = ctx->f0.u32l;
    // 0x800A6D4C: swc1        $f0, 0x148($a1)
    MEM_W(0X148, ctx->r5) = ctx->f0.u32l;
    // 0x800A6D50: swc1        $f0, 0x144($a1)
    MEM_W(0X144, ctx->r5) = ctx->f0.u32l;
    // 0x800A6D54: b           L_800A6D64
    // 0x800A6D58: swc1        $f0, 0x140($a1)
    MEM_W(0X140, ctx->r5) = ctx->f0.u32l;
        goto L_800A6D64;
    // 0x800A6D58: swc1        $f0, 0x140($a1)
    MEM_W(0X140, ctx->r5) = ctx->f0.u32l;
    // 0x800A6D5C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_800A6D60:
    // 0x800A6D60: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
L_800A6D64:
    // 0x800A6D64: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x800A6D68: beq         $v0, $zero, L_800A6D88
    if (ctx->r2 == 0) {
        // 0x800A6D6C: andi        $t7, $v0, 0x1
        ctx->r15 = ctx->r2 & 0X1;
            goto L_800A6D88;
    }
L_800A6D6C:
    // 0x800A6D6C: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x800A6D70: beq         $t7, $zero, L_800A6D7C
    if (ctx->r15 == 0) {
        // 0x800A6D74: sra         $t8, $v0, 1
        ctx->r24 = S32(SIGNED(ctx->r2) >> 1);
            goto L_800A6D7C;
    }
    // 0x800A6D74: sra         $t8, $v0, 1
    ctx->r24 = S32(SIGNED(ctx->r2) >> 1);
    // 0x800A6D78: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
L_800A6D7C:
    // 0x800A6D7C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800A6D80: bne         $t8, $zero, L_800A6D6C
    if (ctx->r24 != 0) {
        // 0x800A6D84: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_800A6D6C;
    }
    // 0x800A6D84: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_800A6D88:
    // 0x800A6D88: jr          $ra
    // 0x800A6D8C: nop

    return;
    // 0x800A6D8C: nop

;}
RECOMP_FUNC void func_800A6D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6D90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A6D94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A6D98: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A6D9C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A6DA0: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x800A6DA4: lw          $s1, 0x1C($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X1C);
    // 0x800A6DA8: beql        $s0, $zero, L_800A6DC8
    if (ctx->r16 == 0) {
        // 0x800A6DAC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800A6DC8;
    }
    goto skip_0;
    // 0x800A6DAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_800A6DB0:
    // 0x800A6DB0: jal         0x800A6AC8
    // 0x800A6DB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A6AC8(rdram, ctx);
        goto after_0;
    // 0x800A6DB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x800A6DB8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800A6DBC: bne         $s0, $zero, L_800A6DB0
    if (ctx->r16 != 0) {
        // 0x800A6DC0: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_800A6DB0;
    }
    // 0x800A6DC0: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x800A6DC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800A6DC8:
    // 0x800A6DC8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A6DCC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A6DD0: jr          $ra
    // 0x800A6DD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800A6DD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800A6DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6DD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A6DDC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A6DE0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800A6DE4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800A6DE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A6DEC: lw          $s2, 0x1D0($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X1D0);
    // 0x800A6DF0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A6DF4: sh          $t6, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r14;
    // 0x800A6DF8: beql        $s2, $zero, L_800A6E34
    if (ctx->r18 == 0) {
        // 0x800A6DFC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800A6E34;
    }
    goto skip_0;
    // 0x800A6DFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x800A6E00: lw          $s0, 0x24($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X24);
L_800A6E04:
    // 0x800A6E04: lw          $s1, 0x28($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X28);
    // 0x800A6E08: beql        $s0, $zero, L_800A6E28
    if (ctx->r16 == 0) {
        // 0x800A6E0C: lw          $s2, 0xC($s2)
        ctx->r18 = MEM_W(ctx->r18, 0XC);
            goto L_800A6E28;
    }
    goto skip_1;
    // 0x800A6E0C: lw          $s2, 0xC($s2)
    ctx->r18 = MEM_W(ctx->r18, 0XC);
    skip_1:
L_800A6E10:
    // 0x800A6E10: jal         0x800A6D90
    // 0x800A6E14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A6D90(rdram, ctx);
        goto after_0;
    // 0x800A6E14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x800A6E18: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800A6E1C: bne         $s0, $zero, L_800A6E10
    if (ctx->r16 != 0) {
        // 0x800A6E20: addiu       $s1, $s1, 0x24
        ctx->r17 = ADD32(ctx->r17, 0X24);
            goto L_800A6E10;
    }
    // 0x800A6E20: addiu       $s1, $s1, 0x24
    ctx->r17 = ADD32(ctx->r17, 0X24);
    // 0x800A6E24: lw          $s2, 0xC($s2)
    ctx->r18 = MEM_W(ctx->r18, 0XC);
L_800A6E28:
    // 0x800A6E28: bnel        $s2, $zero, L_800A6E04
    if (ctx->r18 != 0) {
        // 0x800A6E2C: lw          $s0, 0x24($s2)
        ctx->r16 = MEM_W(ctx->r18, 0X24);
            goto L_800A6E04;
    }
    goto skip_2;
    // 0x800A6E2C: lw          $s0, 0x24($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X24);
    skip_2:
    // 0x800A6E30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800A6E34:
    // 0x800A6E34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A6E38: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800A6E3C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800A6E40: jr          $ra
    // 0x800A6E44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A6E44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A6E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6E48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A6E4C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A6E50: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800A6E54: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800A6E58: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800A6E5C: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x800A6E60: lw          $s0, 0x1C($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X1C);
    // 0x800A6E64: beql        $s1, $zero, L_800A7094
    if (ctx->r17 == 0) {
        // 0x800A6E68: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800A7094;
    }
    goto skip_0;
    // 0x800A6E68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x800A6E6C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800A6E70: nop

L_800A6E74:
    // 0x800A6E74: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x800A6E78: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
    // 0x800A6E7C: bnel        $t6, $v0, L_800A6EE0
    if (ctx->r14 != ctx->r2) {
        // 0x800A6E80: lw          $a2, 0x8($s0)
        ctx->r6 = MEM_W(ctx->r16, 0X8);
            goto L_800A6EE0;
    }
    goto skip_1;
    // 0x800A6E80: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    skip_1:
    // 0x800A6E84: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800A6E88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A6E8C: beq         $v0, $zero, L_800A6EAC
    if (ctx->r2 == 0) {
        // 0x800A6E90: nop
    
            goto L_800A6EAC;
    }
    // 0x800A6E90: nop

    // 0x800A6E94: beq         $v0, $at, L_800A6EBC
    if (ctx->r2 == ctx->r1) {
        // 0x800A6E98: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800A6EBC;
    }
    // 0x800A6E98: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A6E9C: beq         $v0, $at, L_800A6ECC
    if (ctx->r2 == ctx->r1) {
        // 0x800A6EA0: nop
    
            goto L_800A6ECC;
    }
    // 0x800A6EA0: nop

    // 0x800A6EA4: b           L_800A7088
    // 0x800A6EA8: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
        goto L_800A7088;
    // 0x800A6EA8: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_800A6EAC:
    // 0x800A6EAC: jal         0x800A6AC8
    // 0x800A6EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A6AC8(rdram, ctx);
        goto after_0;
    // 0x800A6EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800A6EB4: b           L_800A7088
    // 0x800A6EB8: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
        goto L_800A7088;
    // 0x800A6EB8: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_800A6EBC:
    // 0x800A6EBC: jal         0x800A6AC8
    // 0x800A6EC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A6AC8(rdram, ctx);
        goto after_1;
    // 0x800A6EC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800A6EC4: b           L_800A7088
    // 0x800A6EC8: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
        goto L_800A7088;
    // 0x800A6EC8: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_800A6ECC:
    // 0x800A6ECC: jal         0x800A6AC8
    // 0x800A6ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A6AC8(rdram, ctx);
        goto after_2;
    // 0x800A6ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800A6ED4: b           L_800A7088
    // 0x800A6ED8: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
        goto L_800A7088;
    // 0x800A6ED8: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x800A6EDC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
L_800A6EE0:
    // 0x800A6EE0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800A6EE4: lh          $t7, 0x8($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X8);
    // 0x800A6EE8: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x800A6EEC: bnel        $v0, $t7, L_800A7014
    if (ctx->r2 != ctx->r15) {
        // 0x800A6EF0: lw          $a2, 0x8($s0)
        ctx->r6 = MEM_W(ctx->r16, 0X8);
            goto L_800A7014;
    }
    goto skip_2;
    // 0x800A6EF0: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    skip_2:
    // 0x800A6EF4: sw          $a2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r6;
    // 0x800A6EF8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x800A6EFC: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x800A6F00: lh          $v1, 0x2($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X2);
L_800A6F04:
    // 0x800A6F04: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x800A6F08: bne         $t8, $zero, L_800A6F20
    if (ctx->r24 != 0) {
        // 0x800A6F0C: sra         $t9, $v1, 1
        ctx->r25 = S32(SIGNED(ctx->r3) >> 1);
            goto L_800A6F20;
    }
    // 0x800A6F0C: sra         $t9, $v1, 1
    ctx->r25 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800A6F10: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x800A6F14: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800A6F18: bne         $a1, $zero, L_800A6F04
    if (ctx->r5 != 0) {
        // 0x800A6F1C: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_800A6F04;
    }
    // 0x800A6F1C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_800A6F20:
    // 0x800A6F20: beq         $a1, $zero, L_800A7010
    if (ctx->r5 == 0) {
        // 0x800A6F24: andi        $a3, $a1, 0x3
        ctx->r7 = ctx->r5 & 0X3;
            goto L_800A7010;
    }
    // 0x800A6F24: andi        $a3, $a1, 0x3
    ctx->r7 = ctx->r5 & 0X3;
    // 0x800A6F28: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    // 0x800A6F2C: beq         $a3, $zero, L_800A6F68
    if (ctx->r7 == 0) {
        // 0x800A6F30: addu        $a2, $a3, $a1
        ctx->r6 = ADD32(ctx->r7, ctx->r5);
            goto L_800A6F68;
    }
    // 0x800A6F30: addu        $a2, $a3, $a1
    ctx->r6 = ADD32(ctx->r7, ctx->r5);
L_800A6F34:
    // 0x800A6F34: andi        $t0, $v1, 0x1
    ctx->r8 = ctx->r3 & 0X1;
    // 0x800A6F38: beq         $t0, $zero, L_800A6F50
    if (ctx->r8 == 0) {
        // 0x800A6F3C: sra         $t1, $v1, 1
        ctx->r9 = S32(SIGNED(ctx->r3) >> 1);
            goto L_800A6F50;
    }
    // 0x800A6F3C: sra         $t1, $v1, 1
    ctx->r9 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800A6F40: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800A6F44: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800A6F48: b           L_800A6F54
    // 0x800A6F4C: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
        goto L_800A6F54;
    // 0x800A6F4C: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_800A6F50:
    // 0x800A6F50: swc1        $f20, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f20.u32l;
L_800A6F54:
    // 0x800A6F54: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x800A6F58: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800A6F5C: bne         $a2, $a1, L_800A6F34
    if (ctx->r6 != ctx->r5) {
        // 0x800A6F60: or          $v1, $t1, $zero
        ctx->r3 = ctx->r9 | 0;
            goto L_800A6F34;
    }
    // 0x800A6F60: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x800A6F64: beq         $a1, $zero, L_800A7010
    if (ctx->r5 == 0) {
        // 0x800A6F68: andi        $t2, $v1, 0x1
        ctx->r10 = ctx->r3 & 0X1;
            goto L_800A7010;
    }
L_800A6F68:
    // 0x800A6F68: andi        $t2, $v1, 0x1
    ctx->r10 = ctx->r3 & 0X1;
    // 0x800A6F6C: beq         $t2, $zero, L_800A6F84
    if (ctx->r10 == 0) {
        // 0x800A6F70: sra         $t3, $v1, 1
        ctx->r11 = S32(SIGNED(ctx->r3) >> 1);
            goto L_800A6F84;
    }
    // 0x800A6F70: sra         $t3, $v1, 1
    ctx->r11 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800A6F74: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800A6F78: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800A6F7C: b           L_800A6F88
    // 0x800A6F80: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
        goto L_800A6F88;
    // 0x800A6F80: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
L_800A6F84:
    // 0x800A6F84: swc1        $f20, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f20.u32l;
L_800A6F88:
    // 0x800A6F88: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x800A6F8C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800A6F90: beq         $t4, $zero, L_800A6FA8
    if (ctx->r12 == 0) {
        // 0x800A6F94: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_800A6FA8;
    }
    // 0x800A6F94: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x800A6F98: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800A6F9C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800A6FA0: b           L_800A6FAC
    // 0x800A6FA4: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
        goto L_800A6FAC;
    // 0x800A6FA4: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
L_800A6FA8:
    // 0x800A6FA8: swc1        $f20, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f20.u32l;
L_800A6FAC:
    // 0x800A6FAC: sra         $t5, $v1, 1
    ctx->r13 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800A6FB0: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x800A6FB4: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x800A6FB8: beq         $t6, $zero, L_800A6FD0
    if (ctx->r14 == 0) {
        // 0x800A6FBC: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800A6FD0;
    }
    // 0x800A6FBC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800A6FC0: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800A6FC4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800A6FC8: b           L_800A6FD4
    // 0x800A6FCC: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
        goto L_800A6FD4;
    // 0x800A6FCC: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
L_800A6FD0:
    // 0x800A6FD0: swc1        $f20, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f20.u32l;
L_800A6FD4:
    // 0x800A6FD4: sra         $t7, $v1, 1
    ctx->r15 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800A6FD8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x800A6FDC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x800A6FE0: beq         $t8, $zero, L_800A6FF8
    if (ctx->r24 == 0) {
        // 0x800A6FE4: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800A6FF8;
    }
    // 0x800A6FE4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800A6FE8: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800A6FEC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800A6FF0: b           L_800A6FFC
    // 0x800A6FF4: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
        goto L_800A6FFC;
    // 0x800A6FF4: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
L_800A6FF8:
    // 0x800A6FF8: swc1        $f20, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f20.u32l;
L_800A6FFC:
    // 0x800A6FFC: sra         $t9, $v1, 1
    ctx->r25 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800A7000: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x800A7004: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x800A7008: bne         $a1, $zero, L_800A6F68
    if (ctx->r5 != 0) {
        // 0x800A700C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800A6F68;
    }
    // 0x800A700C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_800A7010:
    // 0x800A7010: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
L_800A7014:
    // 0x800A7014: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x800A7018: lh          $v1, 0x2($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X2);
    // 0x800A701C: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    // 0x800A7020: andi        $t0, $v1, 0x2
    ctx->r8 = ctx->r3 & 0X2;
    // 0x800A7024: beql        $t0, $zero, L_800A707C
    if (ctx->r8 == 0) {
        // 0x800A7028: lh          $t3, 0x6($s0)
        ctx->r11 = MEM_H(ctx->r16, 0X6);
            goto L_800A707C;
    }
    goto skip_3;
    // 0x800A7028: lh          $t3, 0x6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X6);
    skip_3:
    // 0x800A702C: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800A7030: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800A7034: andi        $t1, $v1, 0x4
    ctx->r9 = ctx->r3 & 0X4;
    // 0x800A7038: addiu       $a0, $a1, 0x4
    ctx->r4 = ADD32(ctx->r5, 0X4);
    // 0x800A703C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800A7040: beq         $t1, $zero, L_800A7078
    if (ctx->r9 == 0) {
        // 0x800A7044: swc1        $f6, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
            goto L_800A7078;
    }
    // 0x800A7044: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x800A7048: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800A704C: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800A7050: andi        $t2, $v1, 0x8
    ctx->r10 = ctx->r3 & 0X8;
    // 0x800A7054: addiu       $v0, $a1, 0x4
    ctx->r2 = ADD32(ctx->r5, 0X4);
    // 0x800A7058: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800A705C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800A7060: beq         $t2, $zero, L_800A7078
    if (ctx->r10 == 0) {
        // 0x800A7064: swc1        $f16, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
            goto L_800A7078;
    }
    // 0x800A7064: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    // 0x800A7068: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800A706C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800A7070: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800A7074: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
L_800A7078:
    // 0x800A7078: lh          $t3, 0x6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X6);
L_800A707C:
    // 0x800A707C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800A7080: sh          $t4, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r12;
    // 0x800A7084: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_800A7088:
    // 0x800A7088: bne         $s1, $zero, L_800A6E74
    if (ctx->r17 != 0) {
        // 0x800A708C: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_800A6E74;
    }
    // 0x800A708C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x800A7090: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800A7094:
    // 0x800A7094: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800A7098: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800A709C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800A70A0: jr          $ra
    // 0x800A70A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A70A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A70A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A70A8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800A70AC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800A70B0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x800A70B4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x800A70B8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800A70BC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800A70C0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800A70C4: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x800A70C8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800A70CC: lbu         $t6, 0x5($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5);
    // 0x800A70D0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x800A70D4: beql        $t6, $zero, L_800A71B8
    if (ctx->r14 == 0) {
        // 0x800A70D8: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800A71B8;
    }
    goto skip_0;
    // 0x800A70D8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x800A70DC: lw          $v0, 0x1D0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1D0);
    // 0x800A70E0: beql        $v0, $zero, L_800A71B8
    if (ctx->r2 == 0) {
        // 0x800A70E4: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800A71B8;
    }
    goto skip_1;
    // 0x800A70E4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_1:
    // 0x800A70E8: beq         $v0, $zero, L_800A7144
    if (ctx->r2 == 0) {
        // 0x800A70EC: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_800A7144;
    }
    // 0x800A70EC: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800A70F0: lw          $s2, 0x24($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X24);
L_800A70F4:
    // 0x800A70F4: lw          $s1, 0x28($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X28);
    // 0x800A70F8: beql        $s2, $zero, L_800A7138
    if (ctx->r18 == 0) {
        // 0x800A70FC: lw          $s3, 0xC($s3)
        ctx->r19 = MEM_W(ctx->r19, 0XC);
            goto L_800A7138;
    }
    goto skip_2;
    // 0x800A70FC: lw          $s3, 0xC($s3)
    ctx->r19 = MEM_W(ctx->r19, 0XC);
    skip_2:
L_800A7100:
    // 0x800A7100: lbu         $s0, 0x5($s4)
    ctx->r16 = MEM_BU(ctx->r20, 0X5);
    // 0x800A7104: beq         $s0, $zero, L_800A7120
    if (ctx->r16 == 0) {
        // 0x800A7108: nop
    
            goto L_800A7120;
    }
    // 0x800A7108: nop

L_800A710C:
    // 0x800A710C: jal         0x800A6E48
    // 0x800A7110: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A6E48(rdram, ctx);
        goto after_0;
    // 0x800A7110: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x800A7114: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800A7118: bne         $s0, $zero, L_800A710C
    if (ctx->r16 != 0) {
        // 0x800A711C: nop
    
            goto L_800A710C;
    }
    // 0x800A711C: nop

L_800A7120:
    // 0x800A7120: jal         0x800A6D08
    // 0x800A7124: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A6D08(rdram, ctx);
        goto after_1;
    // 0x800A7124: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x800A7128: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x800A712C: bne         $s2, $zero, L_800A7100
    if (ctx->r18 != 0) {
        // 0x800A7130: addiu       $s1, $s1, 0x24
        ctx->r17 = ADD32(ctx->r17, 0X24);
            goto L_800A7100;
    }
    // 0x800A7130: addiu       $s1, $s1, 0x24
    ctx->r17 = ADD32(ctx->r17, 0X24);
    // 0x800A7134: lw          $s3, 0xC($s3)
    ctx->r19 = MEM_W(ctx->r19, 0XC);
L_800A7138:
    // 0x800A7138: bnel        $s3, $zero, L_800A70F4
    if (ctx->r19 != 0) {
        // 0x800A713C: lw          $s2, 0x24($s3)
        ctx->r18 = MEM_W(ctx->r19, 0X24);
            goto L_800A70F4;
    }
    goto skip_3;
    // 0x800A713C: lw          $s2, 0x24($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X24);
    skip_3:
    // 0x800A7140: lw          $s3, 0x1D0($s4)
    ctx->r19 = MEM_W(ctx->r20, 0X1D0);
L_800A7144:
    // 0x800A7144: beql        $s3, $zero, L_800A71A8
    if (ctx->r19 == 0) {
        // 0x800A7148: lhu         $t7, 0x6($s4)
        ctx->r15 = MEM_HU(ctx->r20, 0X6);
            goto L_800A71A8;
    }
    goto skip_4;
    // 0x800A7148: lhu         $t7, 0x6($s4)
    ctx->r15 = MEM_HU(ctx->r20, 0X6);
    skip_4:
    // 0x800A714C: mtc1        $zero, $f23
    ctx->f_odd[(23 - 1) * 2] = 0;
    // 0x800A7150: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x800A7154: nop

    // 0x800A7158: lwc1        $f20, 0x18($s3)
    ctx->f20.u32l = MEM_W(ctx->r19, 0X18);
L_800A715C:
    // 0x800A715C: cvt.d.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.d = CVT_D_S(ctx->f20.fl);
    // 0x800A7160: c.eq.d      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.d == ctx->f4.d;
    // 0x800A7164: nop

    // 0x800A7168: bc1tl       L_800A719C
    if (c1cs) {
        // 0x800A716C: lw          $s3, 0xC($s3)
        ctx->r19 = MEM_W(ctx->r19, 0XC);
            goto L_800A719C;
    }
    goto skip_5;
    // 0x800A716C: lw          $s3, 0xC($s3)
    ctx->r19 = MEM_W(ctx->r19, 0XC);
    skip_5:
    // 0x800A7170: lw          $s0, 0x24($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X24);
    // 0x800A7174: lw          $s1, 0x28($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X28);
    // 0x800A7178: beql        $s0, $zero, L_800A719C
    if (ctx->r16 == 0) {
        // 0x800A717C: lw          $s3, 0xC($s3)
        ctx->r19 = MEM_W(ctx->r19, 0XC);
            goto L_800A719C;
    }
    goto skip_6;
    // 0x800A717C: lw          $s3, 0xC($s3)
    ctx->r19 = MEM_W(ctx->r19, 0XC);
    skip_6:
L_800A7180:
    // 0x800A7180: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800A7184: jal         0x800A6B14
    // 0x800A7188: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A6B14(rdram, ctx);
        goto after_2;
    // 0x800A7188: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x800A718C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800A7190: bne         $s0, $zero, L_800A7180
    if (ctx->r16 != 0) {
        // 0x800A7194: addiu       $s1, $s1, 0x24
        ctx->r17 = ADD32(ctx->r17, 0X24);
            goto L_800A7180;
    }
    // 0x800A7194: addiu       $s1, $s1, 0x24
    ctx->r17 = ADD32(ctx->r17, 0X24);
    // 0x800A7198: lw          $s3, 0xC($s3)
    ctx->r19 = MEM_W(ctx->r19, 0XC);
L_800A719C:
    // 0x800A719C: bnel        $s3, $zero, L_800A715C
    if (ctx->r19 != 0) {
        // 0x800A71A0: lwc1        $f20, 0x18($s3)
        ctx->f20.u32l = MEM_W(ctx->r19, 0X18);
            goto L_800A715C;
    }
    goto skip_7;
    // 0x800A71A0: lwc1        $f20, 0x18($s3)
    ctx->f20.u32l = MEM_W(ctx->r19, 0X18);
    skip_7:
    // 0x800A71A4: lhu         $t7, 0x6($s4)
    ctx->r15 = MEM_HU(ctx->r20, 0X6);
L_800A71A8:
    // 0x800A71A8: lbu         $t8, 0x5($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X5);
    // 0x800A71AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A71B0: sh          $t9, 0x6($s4)
    MEM_H(0X6, ctx->r20) = ctx->r25;
    // 0x800A71B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800A71B8:
    // 0x800A71B8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800A71BC: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x800A71C0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800A71C4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800A71C8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x800A71CC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x800A71D0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x800A71D4: jr          $ra
    // 0x800A71D8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800A71D8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800A71DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A71DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A71E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A71E4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800A71E8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800A71EC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A71F0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A71F4: lw          $s2, 0x24($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X24);
    // 0x800A71F8: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x800A71FC: lw          $s1, 0x28($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X28);
    // 0x800A7200: beql        $s2, $zero, L_800A7234
    if (ctx->r18 == 0) {
        // 0x800A7204: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800A7234;
    }
    goto skip_0;
    // 0x800A7204: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_800A7208:
    // 0x800A7208: beq         $s3, $zero, L_800A7224
    if (ctx->r19 == 0) {
        // 0x800A720C: or          $s0, $s3, $zero
        ctx->r16 = ctx->r19 | 0;
            goto L_800A7224;
    }
    // 0x800A720C: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
L_800A7210:
    // 0x800A7210: jal         0x800A6E48
    // 0x800A7214: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A6E48(rdram, ctx);
        goto after_0;
    // 0x800A7214: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x800A7218: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800A721C: bne         $s0, $zero, L_800A7210
    if (ctx->r16 != 0) {
        // 0x800A7220: nop
    
            goto L_800A7210;
    }
    // 0x800A7220: nop

L_800A7224:
    // 0x800A7224: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x800A7228: bne         $s2, $zero, L_800A7208
    if (ctx->r18 != 0) {
        // 0x800A722C: nop
    
            goto L_800A7208;
    }
    // 0x800A722C: nop

    // 0x800A7230: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800A7234:
    // 0x800A7234: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A7238: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A723C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800A7240: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800A7244: jr          $ra
    // 0x800A7248: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A7248: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A724C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A724C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A7250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7254: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A7258: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A725C: jal         0x800A70A8
    // 0x800A7260: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800A70A8(rdram, ctx);
        goto after_0;
    // 0x800A7260: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x800A7264: jal         0x800A58A4
    // 0x800A7268: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800A58A4(rdram, ctx);
        goto after_1;
    // 0x800A7268: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800A726C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A7270: jal         0x800A7EFC
    // 0x800A7274: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800A7EFC(rdram, ctx);
        goto after_2;
    // 0x800A7274: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x800A7278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A727C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A7280: jr          $ra
    // 0x800A7284: nop

    return;
    // 0x800A7284: nop

;}
RECOMP_FUNC void func_800A7288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7288: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A728C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A7290: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A7294: sw          $a0, -0x6C10($at)
    MEM_W(-0X6C10, ctx->r1) = ctx->r4;
    // 0x800A7298: jal         0x800A70A8
    // 0x800A729C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A70A8(rdram, ctx);
        goto after_0;
    // 0x800A729C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A72A0: jal         0x800A58A4
    // 0x800A72A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A58A4(rdram, ctx);
        goto after_1;
    // 0x800A72A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800A72A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A72AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A72B0: jr          $ra
    // 0x800A72B4: nop

    return;
    // 0x800A72B4: nop

;}
RECOMP_FUNC void func_800A72B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A72B8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800A72BC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A72C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A72C4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800A72C8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A72CC: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x800A72D0: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x800A72D4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800A72D8: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800A72DC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800A72E0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800A72E4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A72E8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800A72EC: jal         0x800B3BFC
    // 0x800A72F0: addiu       $a0, $a0, 0x9B8
    ctx->r4 = ADD32(ctx->r4, 0X9B8);
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x800A72F0: addiu       $a0, $a0, 0x9B8
    ctx->r4 = ADD32(ctx->r4, 0X9B8);
    after_0:
    // 0x800A72F4: lui         $s6, 0x800E
    ctx->r22 = S32(0X800E << 16);
    // 0x800A72F8: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x800A72FC: addiu       $s2, $s2, 0x9BC
    ctx->r18 = ADD32(ctx->r18, 0X9BC);
    // 0x800A7300: addiu       $s6, $s6, 0x9C4
    ctx->r22 = ADD32(ctx->r22, 0X9C4);
    // 0x800A7304: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800A7308: or          $s5, $s0, $zero
    ctx->r21 = ctx->r16 | 0;
    // 0x800A730C: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
    // 0x800A7310: addiu       $s3, $zero, 0x10
    ctx->r19 = ADD32(0, 0X10);
L_800A7314:
    // 0x800A7314: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800A7318: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
L_800A731C:
    // 0x800A731C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800A7320: jal         0x800B3BFC
    // 0x800A7324: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    osSyncPrintf(rdram, ctx);
        goto after_1;
    // 0x800A7324: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    after_1:
    // 0x800A7328: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800A732C: bne         $s0, $s3, L_800A731C
    if (ctx->r16 != ctx->r19) {
        // 0x800A7330: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800A731C;
    }
    // 0x800A7330: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800A7334: jal         0x800B3BFC
    // 0x800A7338: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_2;
    // 0x800A7338: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_2:
    // 0x800A733C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x800A7340: bne         $s4, $s7, L_800A7314
    if (ctx->r20 != ctx->r23) {
        // 0x800A7344: addiu       $s5, $s5, 0x10
        ctx->r21 = ADD32(ctx->r21, 0X10);
            goto L_800A7314;
    }
    // 0x800A7344: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
    // 0x800A7348: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800A734C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A7350: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A7354: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800A7358: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800A735C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800A7360: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800A7364: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x800A7368: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x800A736C: jr          $ra
    // 0x800A7370: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800A7370: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800A7374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7374: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800A7378: addiu       $t0, $t0, -0x6C10
    ctx->r8 = ADD32(ctx->r8, -0X6C10);
    // 0x800A737C: lui         $t6, 0x22
    ctx->r14 = S32(0X22 << 16);
    // 0x800A7380: lui         $t7, 0xD
    ctx->r15 = S32(0XD << 16);
    // 0x800A7384: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x800A7388: ori         $t6, $t6, 0x405
    ctx->r14 = ctx->r14 | 0X405;
    // 0x800A738C: lui         $t8, 0x44
    ctx->r24 = S32(0X44 << 16);
    // 0x800A7390: lui         $t9, 0x11
    ctx->r25 = S32(0X11 << 16);
    // 0x800A7394: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800A7398: nor         $t3, $t7, $zero
    ctx->r11 = ~(ctx->r15 | 0);
    // 0x800A739C: sw          $t6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->r14;
    // 0x800A73A0: ori         $t8, $t8, 0x2078
    ctx->r24 = ctx->r24 | 0X2078;
    // 0x800A73A4: ori         $t9, $t9, 0x2078
    ctx->r25 = ctx->r25 | 0X2078;
    // 0x800A73A8: addiu       $t1, $zero, 0x2000
    ctx->r9 = ADD32(0, 0X2000);
    // 0x800A73AC: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x800A73B0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800A73B4: sw          $t7, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->r15;
    // 0x800A73B8: sw          $zero, 0x4C($t0)
    MEM_W(0X4C, ctx->r8) = 0;
    // 0x800A73BC: sb          $zero, 0x48($t0)
    MEM_B(0X48, ctx->r8) = 0;
    // 0x800A73C0: sb          $zero, 0x49($t0)
    MEM_B(0X49, ctx->r8) = 0;
    // 0x800A73C4: sb          $zero, 0x4A($t0)
    MEM_B(0X4A, ctx->r8) = 0;
    // 0x800A73C8: sb          $zero, 0x4B($t0)
    MEM_B(0X4B, ctx->r8) = 0;
    // 0x800A73CC: sw          $t8, 0x50($t0)
    MEM_W(0X50, ctx->r8) = ctx->r24;
    // 0x800A73D0: sw          $t9, 0x54($t0)
    MEM_W(0X54, ctx->r8) = ctx->r25;
    // 0x800A73D4: sw          $t1, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->r9;
    // 0x800A73D8: lui         $at, 0xD900
    ctx->r1 = S32(0XD900 << 16);
    // 0x800A73DC: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x800A73E0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A73E4: lui         $t6, 0xD9FF
    ctx->r14 = S32(0XD9FF << 16);
    // 0x800A73E8: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x800A73EC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800A73F0: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x800A73F4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800A73F8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800A73FC: lw          $t7, 0x3C($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X3C);
    // 0x800A7400: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A7404: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x800A7408: ori         $t8, $t8, 0xA01
    ctx->r24 = ctx->r24 | 0XA01;
    // 0x800A740C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800A7410: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x800A7414: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x800A7418: lw          $t9, 0x4C($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X4C);
    // 0x800A741C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A7420: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800A7424: lui         $t1, 0xFA00
    ctx->r9 = S32(0XFA00 << 16);
    // 0x800A7428: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x800A742C: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x800A7430: lbu         $t6, 0x49($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X49);
    // 0x800A7434: lbu         $t3, 0x48($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X48);
    // 0x800A7438: lbu         $t1, 0x4A($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X4A);
    // 0x800A743C: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x800A7440: sll         $t4, $t3, 24
    ctx->r12 = S32(ctx->r11 << 24);
    // 0x800A7444: lbu         $t6, 0x4B($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X4B);
    // 0x800A7448: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x800A744C: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x800A7450: or          $t3, $t8, $t2
    ctx->r11 = ctx->r24 | ctx->r10;
    // 0x800A7454: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A7458: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x800A745C: or          $t4, $t3, $t6
    ctx->r12 = ctx->r11 | ctx->r14;
    // 0x800A7460: sw          $t4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r12;
    // 0x800A7464: ori         $t7, $t7, 0x1C
    ctx->r15 = ctx->r15 | 0X1C;
    // 0x800A7468: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800A746C: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x800A7470: lw          $t1, 0x54($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X54);
    // 0x800A7474: lw          $t9, 0x50($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X50);
    // 0x800A7478: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A747C: lui         $t2, 0xE300
    ctx->r10 = S32(0XE300 << 16);
    // 0x800A7480: or          $t8, $t9, $t1
    ctx->r24 = ctx->r25 | ctx->r9;
    // 0x800A7484: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x800A7488: ori         $t2, $t2, 0x1201
    ctx->r10 = ctx->r10 | 0X1201;
    // 0x800A748C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800A7490: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x800A7494: lw          $t5, 0x44($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X44);
    // 0x800A7498: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x800A749C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A74A0: addiu       $t3, $t3, -0x6C70
    ctx->r11 = ADD32(ctx->r11, -0X6C70);
    // 0x800A74A4: or          $t7, $t0, $zero
    ctx->r15 = ctx->r8 | 0;
    // 0x800A74A8: addiu       $t4, $t0, 0x60
    ctx->r12 = ADD32(ctx->r8, 0X60);
    // 0x800A74AC: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
L_800A74B0:
    // 0x800A74B0: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x800A74B4: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x800A74B8: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x800A74BC: sw          $at, -0xC($t3)
    MEM_W(-0XC, ctx->r11) = ctx->r1;
    // 0x800A74C0: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x800A74C4: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x800A74C8: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x800A74CC: bne         $t7, $t4, L_800A74B0
    if (ctx->r15 != ctx->r12) {
        // 0x800A74D0: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_800A74B0;
    }
    // 0x800A74D0: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
    // 0x800A74D4: jr          $ra
    // 0x800A74D8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x800A74D8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_800A74DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A74DC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800A74E0: addiu       $v1, $v1, -0x6C10
    ctx->r3 = ADD32(ctx->r3, -0X6C10);
    // 0x800A74E4: lw          $t6, 0x14($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X14);
    // 0x800A74E8: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x800A74EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A74F0: lwl         $a2, 0x0($t6)
    ctx->r6 = do_lwl(rdram, ctx->r6, ctx->r14, 0X0);
    // 0x800A74F4: beq         $v0, $zero, L_800A75A0
    if (ctx->r2 == 0) {
        // 0x800A74F8: lwr         $a2, 0x3($t6)
        ctx->r6 = do_lwr(rdram, ctx->r6, ctx->r14, 0X3);
            goto L_800A75A0;
    }
    // 0x800A74F8: lwr         $a2, 0x3($t6)
    ctx->r6 = do_lwr(rdram, ctx->r6, ctx->r14, 0X3);
    // 0x800A74FC: andi        $t7, $a2, 0x1
    ctx->r15 = ctx->r6 & 0X1;
    // 0x800A7500: beq         $t7, $zero, L_800A7550
    if (ctx->r15 == 0) {
        // 0x800A7504: lui         $at, 0xD700
        ctx->r1 = S32(0XD700 << 16);
            goto L_800A7550;
    }
    // 0x800A7504: lui         $at, 0xD700
    ctx->r1 = S32(0XD700 << 16);
    // 0x800A7508: lbu         $t8, 0xF($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XF);
    // 0x800A750C: lui         $at, 0xD700
    ctx->r1 = S32(0XD700 << 16);
    // 0x800A7510: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800A7514: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x800A7518: sll         $t6, $t9, 11
    ctx->r14 = S32(ctx->r25 << 11);
    // 0x800A751C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800A7520: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x800A7524: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x800A7528: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x800A752C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A7530: lh          $t7, 0xA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XA);
    // 0x800A7534: lh          $t9, 0xC($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XC);
    // 0x800A7538: sll         $t8, $t7, 22
    ctx->r24 = S32(ctx->r15 << 22);
    // 0x800A753C: sll         $t6, $t9, 6
    ctx->r14 = S32(ctx->r25 << 6);
    // 0x800A7540: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x800A7544: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x800A7548: b           L_800A75A0
    // 0x800A754C: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
        goto L_800A75A0;
    // 0x800A754C: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
L_800A7550:
    // 0x800A7550: lbu         $t6, 0xE($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XE);
    // 0x800A7554: andi        $t8, $t6, 0x40
    ctx->r24 = ctx->r14 & 0X40;
    // 0x800A7558: beql        $t8, $zero, L_800A7578
    if (ctx->r24 == 0) {
        // 0x800A755C: lbu         $a1, 0xF($v0)
        ctx->r5 = MEM_BU(ctx->r2, 0XF);
            goto L_800A7578;
    }
    goto skip_0;
    // 0x800A755C: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    skip_0:
    // 0x800A7560: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    // 0x800A7564: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x800A7568: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x800A756C: b           L_800A7578
    // 0x800A7570: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
        goto L_800A7578;
    // 0x800A7570: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x800A7574: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
L_800A7578:
    // 0x800A7578: andi        $t9, $a1, 0x7
    ctx->r25 = ctx->r5 & 0X7;
    // 0x800A757C: sll         $t6, $t9, 11
    ctx->r14 = S32(ctx->r25 << 11);
    // 0x800A7580: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800A7584: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x800A7588: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x800A758C: ori         $t9, $t9, 0x8000
    ctx->r25 = ctx->r25 | 0X8000;
    // 0x800A7590: ori         $t7, $t8, 0x2
    ctx->r15 = ctx->r24 | 0X2;
    // 0x800A7594: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800A7598: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800A759C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_800A75A0:
    // 0x800A75A0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800A75A4: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x800A75A8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800A75AC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800A75B0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x800A75B4: andi        $t2, $a2, 0x200
    ctx->r10 = ctx->r6 & 0X200;
    // 0x800A75B8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A75BC: sw          $t8, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r24;
    // 0x800A75C0: sw          $zero, 0x40($v1)
    MEM_W(0X40, ctx->r3) = 0;
    // 0x800A75C4: beq         $t2, $zero, L_800A75D8
    if (ctx->r10 == 0) {
        // 0x800A75C8: andi        $t1, $a2, 0x1
        ctx->r9 = ctx->r6 & 0X1;
            goto L_800A75D8;
    }
    // 0x800A75C8: andi        $t1, $a2, 0x1
    ctx->r9 = ctx->r6 & 0X1;
    // 0x800A75CC: ori         $t9, $zero, 0x1
    ctx->r25 = 0 | 0X1;
    // 0x800A75D0: b           L_800A75E4
    // 0x800A75D4: sw          $t9, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r25;
        goto L_800A75E4;
    // 0x800A75D4: sw          $t9, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r25;
L_800A75D8:
    // 0x800A75D8: lw          $t6, 0x3C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X3C);
    // 0x800A75DC: ori         $t8, $t6, 0x1
    ctx->r24 = ctx->r14 | 0X1;
    // 0x800A75E0: sw          $t8, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r24;
L_800A75E4:
    // 0x800A75E4: andi        $t7, $a2, 0x10
    ctx->r15 = ctx->r6 & 0X10;
    // 0x800A75E8: beql        $t7, $zero, L_800A7608
    if (ctx->r15 == 0) {
        // 0x800A75EC: lw          $t8, 0x40($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X40);
            goto L_800A7608;
    }
    goto skip_1;
    // 0x800A75EC: lw          $t8, 0x40($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X40);
    skip_1:
    // 0x800A75F0: lw          $t9, 0x3C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X3C);
    // 0x800A75F4: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x800A75F8: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x800A75FC: b           L_800A7614
    // 0x800A7600: sw          $t6, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r14;
        goto L_800A7614;
    // 0x800A7600: sw          $t6, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r14;
    // 0x800A7604: lw          $t8, 0x40($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X40);
L_800A7608:
    // 0x800A7608: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x800A760C: or          $t7, $t8, $at
    ctx->r15 = ctx->r24 | ctx->r1;
    // 0x800A7610: sw          $t7, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r15;
L_800A7614:
    // 0x800A7614: andi        $t9, $a2, 0x4
    ctx->r25 = ctx->r6 & 0X4;
    // 0x800A7618: beql        $t9, $zero, L_800A7634
    if (ctx->r25 == 0) {
        // 0x800A761C: lw          $t7, 0x40($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X40);
            goto L_800A7634;
    }
    goto skip_2;
    // 0x800A761C: lw          $t7, 0x40($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X40);
    skip_2:
    // 0x800A7620: lw          $t6, 0x3C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X3C);
    // 0x800A7624: ori         $t8, $t6, 0x400
    ctx->r24 = ctx->r14 | 0X400;
    // 0x800A7628: b           L_800A763C
    // 0x800A762C: sw          $t8, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r24;
        goto L_800A763C;
    // 0x800A762C: sw          $t8, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r24;
    // 0x800A7630: lw          $t7, 0x40($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X40);
L_800A7634:
    // 0x800A7634: ori         $t9, $t7, 0x400
    ctx->r25 = ctx->r15 | 0X400;
    // 0x800A7638: sw          $t9, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r25;
L_800A763C:
    // 0x800A763C: andi        $t6, $a2, 0x8
    ctx->r14 = ctx->r6 & 0X8;
    // 0x800A7640: beql        $t6, $zero, L_800A7660
    if (ctx->r14 == 0) {
        // 0x800A7644: lw          $t9, 0x3C($v1)
        ctx->r25 = MEM_W(ctx->r3, 0X3C);
            goto L_800A7660;
    }
    goto skip_3;
    // 0x800A7644: lw          $t9, 0x3C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X3C);
    skip_3:
    // 0x800A7648: lw          $t8, 0x40($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X40);
    // 0x800A764C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800A7650: or          $t7, $t8, $at
    ctx->r15 = ctx->r24 | ctx->r1;
    // 0x800A7654: b           L_800A766C
    // 0x800A7658: sw          $t7, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r15;
        goto L_800A766C;
    // 0x800A7658: sw          $t7, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r15;
    // 0x800A765C: lw          $t9, 0x3C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X3C);
L_800A7660:
    // 0x800A7660: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800A7664: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x800A7668: sw          $t6, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r14;
L_800A766C:
    // 0x800A766C: beql        $t1, $zero, L_800A76B4
    if (ctx->r9 == 0) {
        // 0x800A7670: lw          $t6, 0x40($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X40);
            goto L_800A76B4;
    }
    goto skip_4;
    // 0x800A7670: lw          $t6, 0x40($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X40);
    skip_4:
    // 0x800A7674: lw          $t8, 0x3C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X3C);
    // 0x800A7678: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800A767C: andi        $t9, $a2, 0x2
    ctx->r25 = ctx->r6 & 0X2;
    // 0x800A7680: or          $t7, $t8, $at
    ctx->r15 = ctx->r24 | ctx->r1;
    // 0x800A7684: beq         $t9, $zero, L_800A769C
    if (ctx->r25 == 0) {
        // 0x800A7688: sw          $t7, 0x3C($v1)
        MEM_W(0X3C, ctx->r3) = ctx->r15;
            goto L_800A769C;
    }
    // 0x800A7688: sw          $t7, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r15;
    // 0x800A768C: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x800A7690: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x800A7694: b           L_800A76C0
    // 0x800A7698: sw          $t8, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r24;
        goto L_800A76C0;
    // 0x800A7698: sw          $t8, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r24;
L_800A769C:
    // 0x800A769C: lw          $t7, 0x40($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X40);
    // 0x800A76A0: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x800A76A4: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x800A76A8: b           L_800A76C0
    // 0x800A76AC: sw          $t9, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r25;
        goto L_800A76C0;
    // 0x800A76AC: sw          $t9, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r25;
    // 0x800A76B0: lw          $t6, 0x40($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X40);
L_800A76B4:
    // 0x800A76B4: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x800A76B8: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x800A76BC: sw          $t8, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r24;
L_800A76C0:
    // 0x800A76C0: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x800A76C4: lw          $v0, 0x20($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X20);
    // 0x800A76C8: beq         $v0, $zero, L_800A7898
    if (ctx->r2 == 0) {
        // 0x800A76CC: andi        $t9, $a2, 0x400
        ctx->r25 = ctx->r6 & 0X400;
            goto L_800A7898;
    }
    // 0x800A76CC: andi        $t9, $a2, 0x400
    ctx->r25 = ctx->r6 & 0X400;
    // 0x800A76D0: bne         $t9, $zero, L_800A7898
    if (ctx->r25 != 0) {
        // 0x800A76D4: lui         $at, 0x437F
        ctx->r1 = S32(0X437F << 16);
            goto L_800A7898;
    }
    // 0x800A76D4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A76D8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800A76DC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800A76E0: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800A76E4: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x800A76E8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800A76EC: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800A76F0: lui         $t6, 0xF800
    ctx->r14 = S32(0XF800 << 16);
    // 0x800A76F4: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800A76F8: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800A76FC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800A7700: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800A7704: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800A7708: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800A770C: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800A7710: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x800A7714: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800A7718: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800A771C: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x800A7720: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x800A7724: bgezl       $a1, L_800A7734
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800A7728: slti        $at, $a1, 0x100
        ctx->r1 = SIGNED(ctx->r5) < 0X100 ? 1 : 0;
            goto L_800A7734;
    }
    goto skip_5;
    // 0x800A7728: slti        $at, $a1, 0x100
    ctx->r1 = SIGNED(ctx->r5) < 0X100 ? 1 : 0;
    skip_5:
    // 0x800A772C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A7730: slti        $at, $a1, 0x100
    ctx->r1 = SIGNED(ctx->r5) < 0X100 ? 1 : 0;
L_800A7734:
    // 0x800A7734: bne         $at, $zero, L_800A7740
    if (ctx->r1 != 0) {
        // 0x800A7738: nop
    
            goto L_800A7740;
    }
    // 0x800A7738: nop

    // 0x800A773C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
L_800A7740:
    // 0x800A7740: bgez        $a3, L_800A774C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x800A7744: sll         $t7, $a1, 24
        ctx->r15 = S32(ctx->r5 << 24);
            goto L_800A774C;
    }
    // 0x800A7744: sll         $t7, $a1, 24
    ctx->r15 = S32(ctx->r5 << 24);
    // 0x800A7748: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_800A774C:
    // 0x800A774C: slti        $at, $a3, 0x100
    ctx->r1 = SIGNED(ctx->r7) < 0X100 ? 1 : 0;
    // 0x800A7750: bne         $at, $zero, L_800A775C
    if (ctx->r1 != 0) {
        // 0x800A7754: nop
    
            goto L_800A775C;
    }
    // 0x800A7754: nop

    // 0x800A7758: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
L_800A775C:
    // 0x800A775C: bgez        $t3, L_800A7768
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800A7760: andi        $t9, $a3, 0xFF
        ctx->r25 = ctx->r7 & 0XFF;
            goto L_800A7768;
    }
    // 0x800A7760: andi        $t9, $a3, 0xFF
    ctx->r25 = ctx->r7 & 0XFF;
    // 0x800A7764: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
L_800A7768:
    // 0x800A7768: slti        $at, $t3, 0x100
    ctx->r1 = SIGNED(ctx->r11) < 0X100 ? 1 : 0;
    // 0x800A776C: bne         $at, $zero, L_800A7778
    if (ctx->r1 != 0) {
        // 0x800A7770: nop
    
            goto L_800A7778;
    }
    // 0x800A7770: nop

    // 0x800A7774: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
L_800A7778:
    // 0x800A7778: bgezl       $t4, L_800A7788
    if (SIGNED(ctx->r12) >= 0) {
        // 0x800A777C: slti        $at, $t4, 0x100
        ctx->r1 = SIGNED(ctx->r12) < 0X100 ? 1 : 0;
            goto L_800A7788;
    }
    goto skip_6;
    // 0x800A777C: slti        $at, $t4, 0x100
    ctx->r1 = SIGNED(ctx->r12) < 0X100 ? 1 : 0;
    skip_6:
    // 0x800A7780: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x800A7784: slti        $at, $t4, 0x100
    ctx->r1 = SIGNED(ctx->r12) < 0X100 ? 1 : 0;
L_800A7788:
    // 0x800A7788: bnel        $at, $zero, L_800A7798
    if (ctx->r1 != 0) {
        // 0x800A778C: sw          $t6, 0x0($t0)
        MEM_W(0X0, ctx->r8) = ctx->r14;
            goto L_800A7798;
    }
    goto skip_7;
    // 0x800A778C: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    skip_7:
    // 0x800A7790: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800A7794: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
L_800A7798:
    // 0x800A7798: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x800A779C: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x800A77A0: andi        $t9, $t3, 0xFF
    ctx->r25 = ctx->r11 & 0XFF;
    // 0x800A77A4: sll         $t7, $t9, 8
    ctx->r15 = S32(ctx->r25 << 8);
    // 0x800A77A8: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x800A77AC: andi        $t9, $t4, 0xFF
    ctx->r25 = ctx->r12 & 0XFF;
    // 0x800A77B0: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x800A77B4: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x800A77B8: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x800A77BC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A77C0: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x800A77C4: lw          $v0, 0x20($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X20);
    // 0x800A77C8: lui         $t6, 0xDB08
    ctx->r14 = S32(0XDB08 << 16);
    // 0x800A77CC: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800A77D0: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800A77D4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800A77D8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800A77DC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800A77E0: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x800A77E4: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x800A77E8: nop

    // 0x800A77EC: beq         $t5, $t7, L_800A7884
    if (ctx->r13 == ctx->r15) {
        // 0x800A77F0: sw          $t7, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r15;
            goto L_800A7884;
    }
    // 0x800A77F0: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x800A77F4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800A77F8: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800A77FC: ori         $t8, $t8, 0xF400
    ctx->r24 = ctx->r24 | 0XF400;
    // 0x800A7800: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A7804: subu        $a1, $t9, $t5
    ctx->r5 = SUB32(ctx->r25, ctx->r13);
    // 0x800A7808: div         $zero, $t8, $a1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r5)));
    // 0x800A780C: bne         $a1, $zero, L_800A7818
    if (ctx->r5 != 0) {
        // 0x800A7810: nop
    
            goto L_800A7818;
    }
    // 0x800A7810: nop

    // 0x800A7814: break       7
    do_break(2148169748);
L_800A7818:
    // 0x800A7818: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A781C: bne         $a1, $at, L_800A7830
    if (ctx->r5 != ctx->r1) {
        // 0x800A7820: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800A7830;
    }
    // 0x800A7820: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800A7824: bne         $t8, $at, L_800A7830
    if (ctx->r24 != ctx->r1) {
        // 0x800A7828: nop
    
            goto L_800A7830;
    }
    // 0x800A7828: nop

    // 0x800A782C: break       6
    do_break(2148169772);
L_800A7830:
    // 0x800A7830: mflo        $t6
    ctx->r14 = lo;
    // 0x800A7834: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x800A7838: negu        $t8, $t5
    ctx->r24 = SUB32(0, ctx->r13);
    // 0x800A783C: sll         $t7, $t8, 8
    ctx->r15 = S32(ctx->r24 << 8);
    // 0x800A7840: ori         $at, $at, 0xF400
    ctx->r1 = ctx->r1 | 0XF400;
    // 0x800A7844: sll         $t9, $t6, 16
    ctx->r25 = S32(ctx->r14 << 16);
    // 0x800A7848: addu        $t6, $t7, $at
    ctx->r14 = ADD32(ctx->r15, ctx->r1);
    // 0x800A784C: div         $zero, $t6, $a1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r5)));
    // 0x800A7850: mflo        $t8
    ctx->r24 = lo;
    // 0x800A7854: andi        $t7, $t8, 0xFFFF
    ctx->r15 = ctx->r24 & 0XFFFF;
    // 0x800A7858: bne         $a1, $zero, L_800A7864
    if (ctx->r5 != 0) {
        // 0x800A785C: nop
    
            goto L_800A7864;
    }
    // 0x800A785C: nop

    // 0x800A7860: break       7
    do_break(2148169824);
L_800A7864:
    // 0x800A7864: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A7868: bne         $a1, $at, L_800A787C
    if (ctx->r5 != ctx->r1) {
        // 0x800A786C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800A787C;
    }
    // 0x800A786C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800A7870: bne         $t6, $at, L_800A787C
    if (ctx->r14 != ctx->r1) {
        // 0x800A7874: nop
    
            goto L_800A787C;
    }
    // 0x800A7874: nop

    // 0x800A7878: break       6
    do_break(2148169848);
L_800A787C:
    // 0x800A787C: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x800A7880: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_800A7884:
    // 0x800A7884: lw          $t8, 0x3C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X3C);
    // 0x800A7888: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x800A788C: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x800A7890: b           L_800A78B0
    // 0x800A7894: sw          $t9, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r25;
        goto L_800A78B0;
    // 0x800A7894: sw          $t9, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r25;
L_800A7898:
    // 0x800A7898: lw          $t7, 0x40($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X40);
    // 0x800A789C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x800A78A0: or          $t6, $t7, $at
    ctx->r14 = ctx->r15 | ctx->r1;
    // 0x800A78A4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A78A8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800A78AC: sw          $t6, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r14;
L_800A78B0:
    // 0x800A78B0: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800A78B4: addiu       $t0, $t0, -0x6C70
    ctx->r8 = ADD32(ctx->r8, -0X6C70);
    // 0x800A78B8: lw          $t8, 0x40($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X40);
    // 0x800A78BC: lw          $v0, 0x40($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X40);
    // 0x800A78C0: beq         $v0, $t8, L_800A78EC
    if (ctx->r2 == ctx->r24) {
        // 0x800A78C4: lui         $at, 0xFF
        ctx->r1 = S32(0XFF << 16);
            goto L_800A78EC;
    }
    // 0x800A78C4: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x800A78C8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800A78CC: nor         $t9, $v0, $zero
    ctx->r25 = ~(ctx->r2 | 0);
    // 0x800A78D0: and         $t7, $t9, $at
    ctx->r15 = ctx->r25 & ctx->r1;
    // 0x800A78D4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800A78D8: lui         $at, 0xD900
    ctx->r1 = S32(0XD900 << 16);
    // 0x800A78DC: or          $t6, $t7, $at
    ctx->r14 = ctx->r15 | ctx->r1;
    // 0x800A78E0: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x800A78E4: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x800A78E8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_800A78EC:
    // 0x800A78EC: lw          $t8, 0x3C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X3C);
    // 0x800A78F0: lw          $t9, 0x3C($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X3C);
    // 0x800A78F4: beq         $t8, $t9, L_800A7914
    if (ctx->r24 == ctx->r25) {
        // 0x800A78F8: lui         $t7, 0xD9FF
        ctx->r15 = S32(0XD9FF << 16);
            goto L_800A7914;
    }
    // 0x800A78F8: lui         $t7, 0xD9FF
    ctx->r15 = S32(0XD9FF << 16);
    // 0x800A78FC: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x800A7900: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800A7904: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800A7908: lw          $t6, 0x3C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X3C);
    // 0x800A790C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A7910: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_800A7914:
    // 0x800A7914: andi        $t8, $a2, 0x80
    ctx->r24 = ctx->r6 & 0X80;
    // 0x800A7918: beql        $t8, $zero, L_800A792C
    if (ctx->r24 == 0) {
        // 0x800A791C: addiu       $t9, $zero, 0x2000
        ctx->r25 = ADD32(0, 0X2000);
            goto L_800A792C;
    }
    goto skip_8;
    // 0x800A791C: addiu       $t9, $zero, 0x2000
    ctx->r25 = ADD32(0, 0X2000);
    skip_8:
    // 0x800A7920: b           L_800A7930
    // 0x800A7924: sw          $zero, 0x44($v1)
    MEM_W(0X44, ctx->r3) = 0;
        goto L_800A7930;
    // 0x800A7924: sw          $zero, 0x44($v1)
    MEM_W(0X44, ctx->r3) = 0;
    // 0x800A7928: addiu       $t9, $zero, 0x2000
    ctx->r25 = ADD32(0, 0X2000);
L_800A792C:
    // 0x800A792C: sw          $t9, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r25;
L_800A7930:
    // 0x800A7930: lw          $t7, 0x44($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X44);
    // 0x800A7934: lw          $t6, 0x44($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X44);
    // 0x800A7938: beq         $t7, $t6, L_800A7958
    if (ctx->r15 == ctx->r14) {
        // 0x800A793C: lui         $t8, 0xE300
        ctx->r24 = S32(0XE300 << 16);
            goto L_800A7958;
    }
    // 0x800A793C: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x800A7940: ori         $t8, $t8, 0x1201
    ctx->r24 = ctx->r24 | 0X1201;
    // 0x800A7944: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800A7948: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800A794C: lw          $t9, 0x44($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X44);
    // 0x800A7950: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A7954: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
L_800A7958:
    // 0x800A7958: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x800A795C: lw          $t9, 0xC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XC);
    // 0x800A7960: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A7964: lwl         $t7, 0x4($v0)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r2, 0X4);
    // 0x800A7968: lwr         $t7, 0x7($v0)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r2, 0X7);
    // 0x800A796C: lwl         $t8, 0x8($v0)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r2, 0X8);
    // 0x800A7970: lwr         $t8, 0xB($v0)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r2, 0XB);
    // 0x800A7974: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x800A7978: lwl         $t7, 0xC($v0)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r2, 0XC);
    // 0x800A797C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800A7980: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800A7984: lwr         $t7, 0xF($v0)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r2, 0XF);
    // 0x800A7988: lwl         $t8, 0x10($v0)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r2, 0X10);
    // 0x800A798C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800A7990: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x800A7994: lwr         $t8, 0x13($v0)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r2, 0X13);
    // 0x800A7998: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800A799C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800A79A0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800A79A4: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800A79A8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800A79AC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800A79B0: sub.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x800A79B4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800A79B8: lwc1        $f10, 0x10($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X10);
    // 0x800A79BC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x800A79C0: sub.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x800A79C4: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x800A79C8: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800A79CC: nop

    // 0x800A79D0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x800A79D4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800A79D8: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x800A79DC: bgez        $a1, L_800A79E8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800A79E0: nop
    
            goto L_800A79E8;
    }
    // 0x800A79E0: nop

    // 0x800A79E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800A79E8:
    // 0x800A79E8: slti        $at, $a1, 0x100
    ctx->r1 = SIGNED(ctx->r5) < 0X100 ? 1 : 0;
    // 0x800A79EC: bne         $at, $zero, L_800A79F8
    if (ctx->r1 != 0) {
        // 0x800A79F0: nop
    
            goto L_800A79F8;
    }
    // 0x800A79F0: nop

    // 0x800A79F4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
L_800A79F8:
    // 0x800A79F8: bgez        $a3, L_800A7A04
    if (SIGNED(ctx->r7) >= 0) {
        // 0x800A79FC: andi        $t8, $a1, 0xFF
        ctx->r24 = ctx->r5 & 0XFF;
            goto L_800A7A04;
    }
    // 0x800A79FC: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x800A7A00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_800A7A04:
    // 0x800A7A04: slti        $at, $a3, 0x100
    ctx->r1 = SIGNED(ctx->r7) < 0X100 ? 1 : 0;
    // 0x800A7A08: bne         $at, $zero, L_800A7A14
    if (ctx->r1 != 0) {
        // 0x800A7A0C: nop
    
            goto L_800A7A14;
    }
    // 0x800A7A0C: nop

    // 0x800A7A10: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
L_800A7A14:
    // 0x800A7A14: bgezl       $t3, L_800A7A24
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800A7A18: slti        $at, $t3, 0x100
        ctx->r1 = SIGNED(ctx->r11) < 0X100 ? 1 : 0;
            goto L_800A7A24;
    }
    goto skip_9;
    // 0x800A7A18: slti        $at, $t3, 0x100
    ctx->r1 = SIGNED(ctx->r11) < 0X100 ? 1 : 0;
    skip_9:
    // 0x800A7A1C: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x800A7A20: slti        $at, $t3, 0x100
    ctx->r1 = SIGNED(ctx->r11) < 0X100 ? 1 : 0;
L_800A7A24:
    // 0x800A7A24: bne         $at, $zero, L_800A7A30
    if (ctx->r1 != 0) {
        // 0x800A7A28: addiu       $sp, $sp, 0x30
        ctx->r29 = ADD32(ctx->r29, 0X30);
            goto L_800A7A30;
    }
    // 0x800A7A28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800A7A2C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
L_800A7A30:
    // 0x800A7A30: bgezl       $t4, L_800A7A40
    if (SIGNED(ctx->r12) >= 0) {
        // 0x800A7A34: slti        $at, $t4, 0x100
        ctx->r1 = SIGNED(ctx->r12) < 0X100 ? 1 : 0;
            goto L_800A7A40;
    }
    goto skip_10;
    // 0x800A7A34: slti        $at, $t4, 0x100
    ctx->r1 = SIGNED(ctx->r12) < 0X100 ? 1 : 0;
    skip_10:
    // 0x800A7A38: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x800A7A3C: slti        $at, $t4, 0x100
    ctx->r1 = SIGNED(ctx->r12) < 0X100 ? 1 : 0;
L_800A7A40:
    // 0x800A7A40: bnel        $at, $zero, L_800A7A50
    if (ctx->r1 != 0) {
        // 0x800A7A44: lbu         $t6, 0x48($t0)
        ctx->r14 = MEM_BU(ctx->r8, 0X48);
            goto L_800A7A50;
    }
    goto skip_11;
    // 0x800A7A44: lbu         $t6, 0x48($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X48);
    skip_11:
    // 0x800A7A48: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800A7A4C: lbu         $t6, 0x48($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X48);
L_800A7A50:
    // 0x800A7A50: sb          $a1, 0x48($v1)
    MEM_B(0X48, ctx->r3) = ctx->r5;
    // 0x800A7A54: sb          $a3, 0x49($v1)
    MEM_B(0X49, ctx->r3) = ctx->r7;
    // 0x800A7A58: sb          $t3, 0x4A($v1)
    MEM_B(0X4A, ctx->r3) = ctx->r11;
    // 0x800A7A5C: bne         $t6, $t8, L_800A7A90
    if (ctx->r14 != ctx->r24) {
        // 0x800A7A60: sb          $t4, 0x4B($v1)
        MEM_B(0X4B, ctx->r3) = ctx->r12;
            goto L_800A7A90;
    }
    // 0x800A7A60: sb          $t4, 0x4B($v1)
    MEM_B(0X4B, ctx->r3) = ctx->r12;
    // 0x800A7A64: lbu         $t9, 0x49($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X49);
    // 0x800A7A68: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x800A7A6C: bnel        $t9, $t7, L_800A7A94
    if (ctx->r25 != ctx->r15) {
        // 0x800A7A70: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_800A7A94;
    }
    goto skip_12;
    // 0x800A7A70: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    skip_12:
    // 0x800A7A74: lbu         $t6, 0x4A($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X4A);
    // 0x800A7A78: andi        $t8, $t3, 0xFF
    ctx->r24 = ctx->r11 & 0XFF;
    // 0x800A7A7C: bnel        $t6, $t8, L_800A7A94
    if (ctx->r14 != ctx->r24) {
        // 0x800A7A80: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_800A7A94;
    }
    goto skip_13;
    // 0x800A7A80: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    skip_13:
    // 0x800A7A84: lbu         $t9, 0x4B($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X4B);
    // 0x800A7A88: andi        $v0, $t4, 0xFF
    ctx->r2 = ctx->r12 & 0XFF;
    // 0x800A7A8C: beq         $t9, $v0, L_800A7AD0
    if (ctx->r25 == ctx->r2) {
        // 0x800A7A90: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_800A7AD0;
    }
L_800A7A90:
    // 0x800A7A90: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_800A7A94:
    // 0x800A7A94: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x800A7A98: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x800A7A9C: lbu         $t8, 0x48($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X48);
    // 0x800A7AA0: lbu         $t6, 0x49($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X49);
    // 0x800A7AA4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A7AA8: sll         $t9, $t8, 24
    ctx->r25 = S32(ctx->r24 << 24);
    // 0x800A7AAC: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x800A7AB0: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x800A7AB4: lbu         $t9, 0x4A($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X4A);
    // 0x800A7AB8: sll         $t8, $t9, 8
    ctx->r24 = S32(ctx->r25 << 8);
    // 0x800A7ABC: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x800A7AC0: lbu         $t7, 0x4B($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X4B);
    // 0x800A7AC4: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x800A7AC8: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x800A7ACC: lbu         $v0, 0x4B($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4B);
L_800A7AD0:
    // 0x800A7AD0: slti        $at, $v0, 0xFF
    ctx->r1 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
    // 0x800A7AD4: beq         $at, $zero, L_800A7B20
    if (ctx->r1 == 0) {
        // 0x800A7AD8: lw          $a3, 0x4($v1)
        ctx->r7 = MEM_W(ctx->r3, 0X4);
            goto L_800A7B20;
    }
    // 0x800A7AD8: lw          $a3, 0x4($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X4);
    // 0x800A7ADC: andi        $a1, $a2, 0x100
    ctx->r5 = ctx->r6 & 0X100;
    // 0x800A7AE0: beq         $a1, $zero, L_800A7B04
    if (ctx->r5 == 0) {
        // 0x800A7AE4: lui         $t7, 0x40
        ctx->r15 = S32(0X40 << 16);
            goto L_800A7B04;
    }
    // 0x800A7AE4: lui         $t7, 0x40
    ctx->r15 = S32(0X40 << 16);
    // 0x800A7AE8: lui         $t9, 0x40
    ctx->r25 = S32(0X40 << 16);
    // 0x800A7AEC: lui         $t6, 0x10
    ctx->r14 = S32(0X10 << 16);
    // 0x800A7AF0: ori         $t9, $t9, 0x4DD8
    ctx->r25 = ctx->r25 | 0X4DD8;
    // 0x800A7AF4: ori         $t6, $t6, 0x4DD8
    ctx->r14 = ctx->r14 | 0X4DD8;
    // 0x800A7AF8: sw          $t9, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r25;
    // 0x800A7AFC: b           L_800A7B18
    // 0x800A7B00: sw          $t6, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r14;
        goto L_800A7B18;
    // 0x800A7B00: sw          $t6, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r14;
L_800A7B04:
    // 0x800A7B04: lui         $t8, 0x10
    ctx->r24 = S32(0X10 << 16);
    // 0x800A7B08: ori         $t7, $t7, 0x49F8
    ctx->r15 = ctx->r15 | 0X49F8;
    // 0x800A7B0C: ori         $t8, $t8, 0x49F8
    ctx->r24 = ctx->r24 | 0X49F8;
    // 0x800A7B10: sw          $t7, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r15;
    // 0x800A7B14: sw          $t8, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r24;
L_800A7B18:
    // 0x800A7B18: b           L_800A7C30
    // 0x800A7B1C: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
        goto L_800A7C30;
    // 0x800A7B1C: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
L_800A7B20:
    // 0x800A7B20: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x800A7B24: andi        $a1, $a2, 0x100
    ctx->r5 = ctx->r6 & 0X100;
    // 0x800A7B28: beq         $v0, $zero, L_800A7BF8
    if (ctx->r2 == 0) {
        // 0x800A7B2C: nop
    
            goto L_800A7BF8;
    }
    // 0x800A7B2C: nop

    // 0x800A7B30: lbu         $t9, 0xE($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XE);
    // 0x800A7B34: lh          $t3, 0x8($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X8);
    // 0x800A7B38: andi        $a1, $a2, 0x100
    ctx->r5 = ctx->r6 & 0X100;
    // 0x800A7B3C: andi        $t6, $t9, 0x20
    ctx->r14 = ctx->r25 & 0X20;
    // 0x800A7B40: beq         $t6, $zero, L_800A7BBC
    if (ctx->r14 == 0) {
        // 0x800A7B44: nop
    
            goto L_800A7BBC;
    }
    // 0x800A7B44: nop

    // 0x800A7B48: andi        $a1, $a2, 0x100
    ctx->r5 = ctx->r6 & 0X100;
    // 0x800A7B4C: beq         $a1, $zero, L_800A7B70
    if (ctx->r5 == 0) {
        // 0x800A7B50: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800A7B70;
    }
    // 0x800A7B50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A7B54: lui         $t7, 0x40
    ctx->r15 = S32(0X40 << 16);
    // 0x800A7B58: lui         $t8, 0x10
    ctx->r24 = S32(0X10 << 16);
    // 0x800A7B5C: ori         $t7, $t7, 0x4DD8
    ctx->r15 = ctx->r15 | 0X4DD8;
    // 0x800A7B60: ori         $t8, $t8, 0x4DD8
    ctx->r24 = ctx->r24 | 0X4DD8;
    // 0x800A7B64: sw          $t7, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r15;
    // 0x800A7B68: b           L_800A7C30
    // 0x800A7B6C: sw          $t8, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r24;
        goto L_800A7C30;
    // 0x800A7B6C: sw          $t8, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r24;
L_800A7B70:
    // 0x800A7B70: beq         $t3, $at, L_800A7B8C
    if (ctx->r11 == ctx->r1) {
        // 0x800A7B74: lui         $t9, 0x40
        ctx->r25 = S32(0X40 << 16);
            goto L_800A7B8C;
    }
    // 0x800A7B74: lui         $t9, 0x40
    ctx->r25 = S32(0X40 << 16);
    // 0x800A7B78: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A7B7C: beq         $t3, $at, L_800A7B8C
    if (ctx->r11 == ctx->r1) {
        // 0x800A7B80: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_800A7B8C;
    }
    // 0x800A7B80: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x800A7B84: bne         $t3, $at, L_800A7BA4
    if (ctx->r11 != ctx->r1) {
        // 0x800A7B88: lui         $t7, 0x44
        ctx->r15 = S32(0X44 << 16);
            goto L_800A7BA4;
    }
    // 0x800A7B88: lui         $t7, 0x44
    ctx->r15 = S32(0X44 << 16);
L_800A7B8C:
    // 0x800A7B8C: lui         $t6, 0x10
    ctx->r14 = S32(0X10 << 16);
    // 0x800A7B90: ori         $t9, $t9, 0x49F8
    ctx->r25 = ctx->r25 | 0X49F8;
    // 0x800A7B94: ori         $t6, $t6, 0x49F8
    ctx->r14 = ctx->r14 | 0X49F8;
    // 0x800A7B98: sw          $t9, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r25;
    // 0x800A7B9C: b           L_800A7C30
    // 0x800A7BA0: sw          $t6, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r14;
        goto L_800A7C30;
    // 0x800A7BA0: sw          $t6, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r14;
L_800A7BA4:
    // 0x800A7BA4: lui         $t8, 0x11
    ctx->r24 = S32(0X11 << 16);
    // 0x800A7BA8: ori         $t7, $t7, 0x3078
    ctx->r15 = ctx->r15 | 0X3078;
    // 0x800A7BAC: ori         $t8, $t8, 0x3078
    ctx->r24 = ctx->r24 | 0X3078;
    // 0x800A7BB0: sw          $t7, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r15;
    // 0x800A7BB4: b           L_800A7C30
    // 0x800A7BB8: sw          $t8, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r24;
        goto L_800A7C30;
    // 0x800A7BB8: sw          $t8, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r24;
L_800A7BBC:
    // 0x800A7BBC: beq         $a1, $zero, L_800A7BE0
    if (ctx->r5 == 0) {
        // 0x800A7BC0: lui         $t7, 0x44
        ctx->r15 = S32(0X44 << 16);
            goto L_800A7BE0;
    }
    // 0x800A7BC0: lui         $t7, 0x44
    ctx->r15 = S32(0X44 << 16);
    // 0x800A7BC4: lui         $t9, 0x44
    ctx->r25 = S32(0X44 << 16);
    // 0x800A7BC8: lui         $t6, 0x11
    ctx->r14 = S32(0X11 << 16);
    // 0x800A7BCC: ori         $t9, $t9, 0x2D58
    ctx->r25 = ctx->r25 | 0X2D58;
    // 0x800A7BD0: ori         $t6, $t6, 0x2D58
    ctx->r14 = ctx->r14 | 0X2D58;
    // 0x800A7BD4: sw          $t9, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r25;
    // 0x800A7BD8: b           L_800A7C30
    // 0x800A7BDC: sw          $t6, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r14;
        goto L_800A7C30;
    // 0x800A7BDC: sw          $t6, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r14;
L_800A7BE0:
    // 0x800A7BE0: lui         $t8, 0x11
    ctx->r24 = S32(0X11 << 16);
    // 0x800A7BE4: ori         $t7, $t7, 0x2078
    ctx->r15 = ctx->r15 | 0X2078;
    // 0x800A7BE8: ori         $t8, $t8, 0x2078
    ctx->r24 = ctx->r24 | 0X2078;
    // 0x800A7BEC: sw          $t7, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r15;
    // 0x800A7BF0: b           L_800A7C30
    // 0x800A7BF4: sw          $t8, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r24;
        goto L_800A7C30;
    // 0x800A7BF4: sw          $t8, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r24;
L_800A7BF8:
    // 0x800A7BF8: beq         $a1, $zero, L_800A7C1C
    if (ctx->r5 == 0) {
        // 0x800A7BFC: lui         $t7, 0x44
        ctx->r15 = S32(0X44 << 16);
            goto L_800A7C1C;
    }
    // 0x800A7BFC: lui         $t7, 0x44
    ctx->r15 = S32(0X44 << 16);
    // 0x800A7C00: lui         $t9, 0x44
    ctx->r25 = S32(0X44 << 16);
    // 0x800A7C04: lui         $t6, 0x11
    ctx->r14 = S32(0X11 << 16);
    // 0x800A7C08: ori         $t9, $t9, 0x2D58
    ctx->r25 = ctx->r25 | 0X2D58;
    // 0x800A7C0C: ori         $t6, $t6, 0x2D58
    ctx->r14 = ctx->r14 | 0X2D58;
    // 0x800A7C10: sw          $t9, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r25;
    // 0x800A7C14: b           L_800A7C30
    // 0x800A7C18: sw          $t6, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r14;
        goto L_800A7C30;
    // 0x800A7C18: sw          $t6, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r14;
L_800A7C1C:
    // 0x800A7C1C: lui         $t8, 0x11
    ctx->r24 = S32(0X11 << 16);
    // 0x800A7C20: ori         $t7, $t7, 0x2078
    ctx->r15 = ctx->r15 | 0X2078;
    // 0x800A7C24: ori         $t8, $t8, 0x2078
    ctx->r24 = ctx->r24 | 0X2078;
    // 0x800A7C28: sw          $t7, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r15;
    // 0x800A7C2C: sw          $t8, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r24;
L_800A7C30:
    // 0x800A7C30: andi        $t9, $a2, 0x40
    ctx->r25 = ctx->r6 & 0X40;
    // 0x800A7C34: bne         $t9, $zero, L_800A7C58
    if (ctx->r25 != 0) {
        // 0x800A7C38: nop
    
            goto L_800A7C58;
    }
    // 0x800A7C38: nop

    // 0x800A7C3C: lw          $t6, 0x50($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X50);
    // 0x800A7C40: lw          $t8, 0x54($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X54);
    // 0x800A7C44: addiu       $t3, $zero, -0x9
    ctx->r11 = ADD32(0, -0X9);
    // 0x800A7C48: and         $t7, $t6, $t3
    ctx->r15 = ctx->r14 & ctx->r11;
    // 0x800A7C4C: and         $t9, $t8, $t3
    ctx->r25 = ctx->r24 & ctx->r11;
    // 0x800A7C50: sw          $t7, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r15;
    // 0x800A7C54: sw          $t9, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r25;
L_800A7C58:
    // 0x800A7C58: beq         $t2, $zero, L_800A7C7C
    if (ctx->r10 == 0) {
        // 0x800A7C5C: nop
    
            goto L_800A7C7C;
    }
    // 0x800A7C5C: nop

    // 0x800A7C60: lw          $t6, 0x50($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X50);
    // 0x800A7C64: lw          $t8, 0x54($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X54);
    // 0x800A7C68: addiu       $t2, $zero, -0x31
    ctx->r10 = ADD32(0, -0X31);
    // 0x800A7C6C: and         $t7, $t6, $t2
    ctx->r15 = ctx->r14 & ctx->r10;
    // 0x800A7C70: and         $t9, $t8, $t2
    ctx->r25 = ctx->r24 & ctx->r10;
    // 0x800A7C74: sw          $t7, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r15;
    // 0x800A7C78: sw          $t9, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r25;
L_800A7C7C:
    // 0x800A7C7C: beq         $v0, $zero, L_800A7CC4
    if (ctx->r2 == 0) {
        // 0x800A7C80: sw          $zero, 0x4C($v1)
        MEM_W(0X4C, ctx->r3) = 0;
            goto L_800A7CC4;
    }
    // 0x800A7C80: sw          $zero, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = 0;
    // 0x800A7C84: lbu         $t6, 0xF($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XF);
    // 0x800A7C88: lui         $t9, 0xC08
    ctx->r25 = S32(0XC08 << 16);
    // 0x800A7C8C: bnel        $t6, $zero, L_800A7CA4
    if (ctx->r14 != 0) {
        // 0x800A7C90: lui         $t6, 0x10
        ctx->r14 = S32(0X10 << 16);
            goto L_800A7CA4;
    }
    goto skip_14;
    // 0x800A7C90: lui         $t6, 0x10
    ctx->r14 = S32(0X10 << 16);
    skip_14:
    // 0x800A7C94: lbu         $t7, 0xE($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XE);
    // 0x800A7C98: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x800A7C9C: beq         $t8, $zero, L_800A7CB0
    if (ctx->r24 == 0) {
        // 0x800A7CA0: lui         $t6, 0x10
        ctx->r14 = S32(0X10 << 16);
            goto L_800A7CB0;
    }
    // 0x800A7CA0: lui         $t6, 0x10
    ctx->r14 = S32(0X10 << 16);
L_800A7CA4:
    // 0x800A7CA4: sw          $t9, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r25;
    // 0x800A7CA8: b           L_800A7CC4
    // 0x800A7CAC: sw          $t6, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r14;
        goto L_800A7CC4;
    // 0x800A7CAC: sw          $t6, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r14;
L_800A7CB0:
    // 0x800A7CB0: beq         $t1, $zero, L_800A7CC4
    if (ctx->r9 == 0) {
        // 0x800A7CB4: lui         $t7, 0xC08
        ctx->r15 = S32(0XC08 << 16);
            goto L_800A7CC4;
    }
    // 0x800A7CB4: lui         $t7, 0xC08
    ctx->r15 = S32(0XC08 << 16);
    // 0x800A7CB8: lui         $t8, 0x10
    ctx->r24 = S32(0X10 << 16);
    // 0x800A7CBC: sw          $t7, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r15;
    // 0x800A7CC0: sw          $t8, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r24;
L_800A7CC4:
    // 0x800A7CC4: lw          $t9, 0x20($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X20);
    // 0x800A7CC8: andi        $t6, $a2, 0x400
    ctx->r14 = ctx->r6 & 0X400;
    // 0x800A7CCC: beq         $t9, $zero, L_800A7CE8
    if (ctx->r25 == 0) {
        // 0x800A7CD0: nop
    
            goto L_800A7CE8;
    }
    // 0x800A7CD0: nop

    // 0x800A7CD4: bne         $t6, $zero, L_800A7CE8
    if (ctx->r14 != 0) {
        // 0x800A7CD8: lui         $t7, 0xC800
        ctx->r15 = S32(0XC800 << 16);
            goto L_800A7CE8;
    }
    // 0x800A7CD8: lui         $t7, 0xC800
    ctx->r15 = S32(0XC800 << 16);
    // 0x800A7CDC: lui         $t8, 0x10
    ctx->r24 = S32(0X10 << 16);
    // 0x800A7CE0: sw          $t7, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r15;
    // 0x800A7CE4: sw          $t8, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r24;
L_800A7CE8:
    // 0x800A7CE8: beql        $v0, $zero, L_800A7E30
    if (ctx->r2 == 0) {
        // 0x800A7CEC: lw          $t8, 0x20($a3)
        ctx->r24 = MEM_W(ctx->r7, 0X20);
            goto L_800A7E30;
    }
    goto skip_15;
    // 0x800A7CEC: lw          $t8, 0x20($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X20);
    skip_15:
    // 0x800A7CF0: beq         $t1, $zero, L_800A7D18
    if (ctx->r9 == 0) {
        // 0x800A7CF4: lui         $t9, 0xFCFF
        ctx->r25 = S32(0XFCFF << 16);
            goto L_800A7D18;
    }
    // 0x800A7CF4: lui         $t9, 0xFCFF
    ctx->r25 = S32(0XFCFF << 16);
    // 0x800A7CF8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800A7CFC: lui         $t6, 0xFF0C
    ctx->r14 = S32(0XFF0C << 16);
    // 0x800A7D00: ori         $t6, $t6, 0xF3FF
    ctx->r14 = ctx->r14 | 0XF3FF;
    // 0x800A7D04: ori         $t9, $t9, 0xFE04
    ctx->r25 = ctx->r25 | 0XFE04;
    // 0x800A7D08: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800A7D0C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800A7D10: b           L_800A7E84
    // 0x800A7D14: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
        goto L_800A7E84;
    // 0x800A7D14: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_800A7D18:
    // 0x800A7D18: lbu         $t7, 0xF($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XF);
    // 0x800A7D1C: bne         $t7, $zero, L_800A7D34
    if (ctx->r15 != 0) {
        // 0x800A7D20: nop
    
            goto L_800A7D34;
    }
    // 0x800A7D20: nop

    // 0x800A7D24: lbu         $t8, 0xE($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XE);
    // 0x800A7D28: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x800A7D2C: beql        $t9, $zero, L_800A7D84
    if (ctx->r25 == 0) {
        // 0x800A7D30: lw          $t6, 0x20($a3)
        ctx->r14 = MEM_W(ctx->r7, 0X20);
            goto L_800A7D84;
    }
    goto skip_16;
    // 0x800A7D30: lw          $t6, 0x20($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X20);
    skip_16:
L_800A7D34:
    // 0x800A7D34: beq         $a1, $zero, L_800A7D60
    if (ctx->r5 == 0) {
        // 0x800A7D38: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_800A7D60;
    }
    // 0x800A7D38: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800A7D3C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800A7D40: lui         $t6, 0xFC26
    ctx->r14 = S32(0XFC26 << 16);
    // 0x800A7D44: lui         $t7, 0x1F0C
    ctx->r15 = S32(0X1F0C << 16);
    // 0x800A7D48: ori         $t7, $t7, 0x93FF
    ctx->r15 = ctx->r15 | 0X93FF;
    // 0x800A7D4C: ori         $t6, $t6, 0xA004
    ctx->r14 = ctx->r14 | 0XA004;
    // 0x800A7D50: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800A7D54: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800A7D58: b           L_800A7E84
    // 0x800A7D5C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
        goto L_800A7E84;
    // 0x800A7D5C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_800A7D60:
    // 0x800A7D60: lui         $t8, 0xFC26
    ctx->r24 = S32(0XFC26 << 16);
    // 0x800A7D64: lui         $t9, 0x1F0C
    ctx->r25 = S32(0X1F0C << 16);
    // 0x800A7D68: ori         $t9, $t9, 0x93FF
    ctx->r25 = ctx->r25 | 0X93FF;
    // 0x800A7D6C: ori         $t8, $t8, 0xA004
    ctx->r24 = ctx->r24 | 0XA004;
    // 0x800A7D70: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800A7D74: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800A7D78: b           L_800A7E84
    // 0x800A7D7C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
        goto L_800A7E84;
    // 0x800A7D7C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A7D80: lw          $t6, 0x20($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X20);
L_800A7D84:
    // 0x800A7D84: andi        $t7, $a2, 0x400
    ctx->r15 = ctx->r6 & 0X400;
    // 0x800A7D88: beq         $t6, $zero, L_800A7DE0
    if (ctx->r14 == 0) {
        // 0x800A7D8C: nop
    
            goto L_800A7DE0;
    }
    // 0x800A7D8C: nop

    // 0x800A7D90: bne         $t7, $zero, L_800A7DE0
    if (ctx->r15 != 0) {
        // 0x800A7D94: nop
    
            goto L_800A7DE0;
    }
    // 0x800A7D94: nop

    // 0x800A7D98: beq         $a1, $zero, L_800A7DC0
    if (ctx->r5 == 0) {
        // 0x800A7D9C: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_800A7DC0;
    }
    // 0x800A7D9C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800A7DA0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800A7DA4: lui         $t8, 0xFC12
    ctx->r24 = S32(0XFC12 << 16);
    // 0x800A7DA8: ori         $t8, $t8, 0x17FF
    ctx->r24 = ctx->r24 | 0X17FF;
    // 0x800A7DAC: addiu       $t9, $zero, -0x1C4
    ctx->r25 = ADD32(0, -0X1C4);
    // 0x800A7DB0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800A7DB4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800A7DB8: b           L_800A7E84
    // 0x800A7DBC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
        goto L_800A7E84;
    // 0x800A7DBC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_800A7DC0:
    // 0x800A7DC0: lui         $t6, 0xFC12
    ctx->r14 = S32(0XFC12 << 16);
    // 0x800A7DC4: lui         $t7, 0xFF0F
    ctx->r15 = S32(0XFF0F << 16);
    // 0x800A7DC8: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x800A7DCC: ori         $t6, $t6, 0x1604
    ctx->r14 = ctx->r14 | 0X1604;
    // 0x800A7DD0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800A7DD4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800A7DD8: b           L_800A7E84
    // 0x800A7DDC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
        goto L_800A7E84;
    // 0x800A7DDC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_800A7DE0:
    // 0x800A7DE0: beq         $a1, $zero, L_800A7E0C
    if (ctx->r5 == 0) {
        // 0x800A7DE4: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_800A7E0C;
    }
    // 0x800A7DE4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800A7DE8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800A7DEC: lui         $t8, 0xFC12
    ctx->r24 = S32(0XFC12 << 16);
    // 0x800A7DF0: lui         $t9, 0xFF33
    ctx->r25 = S32(0XFF33 << 16);
    // 0x800A7DF4: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x800A7DF8: ori         $t8, $t8, 0x1824
    ctx->r24 = ctx->r24 | 0X1824;
    // 0x800A7DFC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800A7E00: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800A7E04: b           L_800A7E84
    // 0x800A7E08: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
        goto L_800A7E84;
    // 0x800A7E08: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_800A7E0C:
    // 0x800A7E0C: lui         $t6, 0xFC12
    ctx->r14 = S32(0XFC12 << 16);
    // 0x800A7E10: lui         $t7, 0xFF2F
    ctx->r15 = S32(0XFF2F << 16);
    // 0x800A7E14: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x800A7E18: ori         $t6, $t6, 0x1624
    ctx->r14 = ctx->r14 | 0X1624;
    // 0x800A7E1C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800A7E20: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800A7E24: b           L_800A7E84
    // 0x800A7E28: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
        goto L_800A7E84;
    // 0x800A7E28: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A7E2C: lw          $t8, 0x20($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X20);
L_800A7E30:
    // 0x800A7E30: andi        $t9, $a2, 0x400
    ctx->r25 = ctx->r6 & 0X400;
    // 0x800A7E34: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800A7E38: beql        $t8, $zero, L_800A7E6C
    if (ctx->r24 == 0) {
        // 0x800A7E3C: lui         $t8, 0xFC32
        ctx->r24 = S32(0XFC32 << 16);
            goto L_800A7E6C;
    }
    goto skip_17;
    // 0x800A7E3C: lui         $t8, 0xFC32
    ctx->r24 = S32(0XFC32 << 16);
    skip_17:
    // 0x800A7E40: bne         $t9, $zero, L_800A7E68
    if (ctx->r25 != 0) {
        // 0x800A7E44: lui         $t6, 0xFCFF
        ctx->r14 = S32(0XFCFF << 16);
            goto L_800A7E68;
    }
    // 0x800A7E44: lui         $t6, 0xFCFF
    ctx->r14 = S32(0XFCFF << 16);
    // 0x800A7E48: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800A7E4C: lui         $t7, 0xFF70
    ctx->r15 = S32(0XFF70 << 16);
    // 0x800A7E50: ori         $t7, $t7, 0x71FF
    ctx->r15 = ctx->r15 | 0X71FF;
    // 0x800A7E54: ori         $t6, $t6, 0xFE64
    ctx->r14 = ctx->r14 | 0XFE64;
    // 0x800A7E58: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800A7E5C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800A7E60: b           L_800A7E84
    // 0x800A7E64: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
        goto L_800A7E84;
    // 0x800A7E64: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_800A7E68:
    // 0x800A7E68: lui         $t8, 0xFC32
    ctx->r24 = S32(0XFC32 << 16);
L_800A7E6C:
    // 0x800A7E6C: lui         $t9, 0xFF73
    ctx->r25 = S32(0XFF73 << 16);
    // 0x800A7E70: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x800A7E74: ori         $t8, $t8, 0x3864
    ctx->r24 = ctx->r24 | 0X3864;
    // 0x800A7E78: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800A7E7C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800A7E80: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_800A7E84:
    // 0x800A7E84: lui         $t6, 0xE300
    ctx->r14 = S32(0XE300 << 16);
    // 0x800A7E88: ori         $t6, $t6, 0xA01
    ctx->r14 = ctx->r14 | 0XA01;
    // 0x800A7E8C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800A7E90: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x800A7E94: lw          $t7, 0x4C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4C);
    // 0x800A7E98: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A7E9C: lui         $t8, 0xE200
    ctx->r24 = S32(0XE200 << 16);
    // 0x800A7EA0: ori         $t8, $t8, 0x1C
    ctx->r24 = ctx->r24 | 0X1C;
    // 0x800A7EA4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800A7EA8: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x800A7EAC: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x800A7EB0: lw          $t6, 0x54($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X54);
    // 0x800A7EB4: lw          $t9, 0x50($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X50);
    // 0x800A7EB8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A7EBC: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x800A7EC0: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x800A7EC4: or          $t7, $t0, $zero
    ctx->r15 = ctx->r8 | 0;
    // 0x800A7EC8: or          $t6, $v1, $zero
    ctx->r14 = ctx->r3 | 0;
    // 0x800A7ECC: addiu       $t9, $v1, 0x60
    ctx->r25 = ADD32(ctx->r3, 0X60);
L_800A7ED0:
    // 0x800A7ED0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x800A7ED4: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x800A7ED8: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x800A7EDC: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x800A7EE0: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x800A7EE4: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x800A7EE8: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x800A7EEC: bne         $t6, $t9, L_800A7ED0
    if (ctx->r14 != ctx->r25) {
        // 0x800A7EF0: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_800A7ED0;
    }
    // 0x800A7EF0: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x800A7EF4: jr          $ra
    // 0x800A7EF8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x800A7EF8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_800A7EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7EFC: addiu       $sp, $sp, -0x1D0
    ctx->r29 = ADD32(ctx->r29, -0X1D0);
    // 0x800A7F00: sw          $s3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r19;
    // 0x800A7F04: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x800A7F08: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x800A7F0C: sw          $s5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r21;
    // 0x800A7F10: sw          $s4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r20;
    // 0x800A7F14: sw          $s2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r18;
    // 0x800A7F18: sw          $s1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r17;
    // 0x800A7F1C: sw          $s0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r16;
    // 0x800A7F20: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x800A7F24: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x800A7F28: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x800A7F2C: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x800A7F30: lbu         $s5, 0x4($a1)
    ctx->r21 = MEM_BU(ctx->r5, 0X4);
    // 0x800A7F34: addiu       $s3, $s3, -0x6C10
    ctx->r19 = ADD32(ctx->r19, -0X6C10);
    // 0x800A7F38: sw          $a1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r5;
    // 0x800A7F3C: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x800A7F40: sw          $zero, 0xC($s3)
    MEM_W(0XC, ctx->r19) = 0;
    // 0x800A7F44: sw          $zero, 0x10($s3)
    MEM_W(0X10, ctx->r19) = 0;
    // 0x800A7F48: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x800A7F4C: sw          $t8, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r24;
    // 0x800A7F50: sw          $zero, 0x14($s3)
    MEM_W(0X14, ctx->r19) = 0;
    // 0x800A7F54: lw          $t9, 0x8($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X8);
    // 0x800A7F58: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x800A7F5C: andi        $t6, $s5, 0x1
    ctx->r14 = ctx->r21 & 0X1;
    // 0x800A7F60: lw          $a3, 0x28($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X28);
    // 0x800A7F64: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x800A7F68: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x800A7F6C: lw          $v1, 0x4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4);
    // 0x800A7F70: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x800A7F74: or          $s5, $t6, $zero
    ctx->r21 = ctx->r14 | 0;
    // 0x800A7F78: lw          $t0, 0x24($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X24);
    // 0x800A7F7C: addiu       $s2, $a0, 0x8
    ctx->r18 = ADD32(ctx->r4, 0X8);
    // 0x800A7F80: beql        $t0, $zero, L_800A81B4
    if (ctx->r8 == 0) {
        // 0x800A7F84: lw          $a1, 0x28($v1)
        ctx->r5 = MEM_W(ctx->r3, 0X28);
            goto L_800A81B4;
    }
    goto skip_0;
    // 0x800A7F84: lw          $a1, 0x28($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X28);
    skip_0:
    // 0x800A7F88: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x800A7F8C: lui         $t8, 0xE200
    ctx->r24 = S32(0XE200 << 16);
    // 0x800A7F90: ori         $t8, $t8, 0x1E01
    ctx->r24 = ctx->r24 | 0X1E01;
    // 0x800A7F94: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x800A7F98: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800A7F9C: lui         $t9, 0xE200
    ctx->r25 = S32(0XE200 << 16);
    // 0x800A7FA0: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x800A7FA4: bne         $t7, $zero, L_800A81B0
    if (ctx->r15 != 0) {
        // 0x800A7FA8: addiu       $a3, $a3, 0x40
        ctx->r7 = ADD32(ctx->r7, 0X40);
            goto L_800A81B0;
    }
    // 0x800A7FA8: addiu       $a3, $a3, 0x40
    ctx->r7 = ADD32(ctx->r7, 0X40);
    // 0x800A7FAC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A7FB0: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800A7FB4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800A7FB8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800A7FBC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A7FC0: ori         $t9, $t9, 0x1D00
    ctx->r25 = ctx->r25 | 0X1D00;
    // 0x800A7FC4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800A7FC8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800A7FCC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800A7FD0: lui         $t4, 0xE300
    ctx->r12 = S32(0XE300 << 16);
    // 0x800A7FD4: ori         $t4, $t4, 0x1A01
    ctx->r12 = ctx->r12 | 0X1A01;
    // 0x800A7FD8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A7FDC: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x800A7FE0: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x800A7FE4: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x800A7FE8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800A7FEC: lui         $t6, 0xE300
    ctx->r14 = S32(0XE300 << 16);
    // 0x800A7FF0: ori         $t6, $t6, 0x1801
    ctx->r14 = ctx->r14 | 0X1801;
    // 0x800A7FF4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A7FF8: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x800A7FFC: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x800A8000: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x800A8004: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800A8008: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A800C: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x800A8010: ori         $t8, $t8, 0x1700
    ctx->r24 = ctx->r24 | 0X1700;
    // 0x800A8014: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800A8018: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x800A801C: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x800A8020: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A8024: lui         $t9, 0xE300
    ctx->r25 = S32(0XE300 << 16);
    // 0x800A8028: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x800A802C: addiu       $t4, $zero, 0xC00
    ctx->r12 = ADD32(0, 0XC00);
    // 0x800A8030: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800A8034: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x800A8038: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800A803C: lui         $t5, 0xE300
    ctx->r13 = S32(0XE300 << 16);
    // 0x800A8040: ori         $t5, $t5, 0x1201
    ctx->r13 = ctx->r13 | 0X1201;
    // 0x800A8044: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A8048: addiu       $t6, $zero, 0x2000
    ctx->r14 = ADD32(0, 0X2000);
    // 0x800A804C: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x800A8050: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x800A8054: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800A8058: lui         $t7, 0xE300
    ctx->r15 = S32(0XE300 << 16);
    // 0x800A805C: ori         $t7, $t7, 0xF00
    ctx->r15 = ctx->r15 | 0XF00;
    // 0x800A8060: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A8064: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x800A8068: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x800A806C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800A8070: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800A8074: lui         $t9, 0xE300
    ctx->r25 = S32(0XE300 << 16);
    // 0x800A8078: ori         $t9, $t9, 0x1001
    ctx->r25 = ctx->r25 | 0X1001;
    // 0x800A807C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A8080: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x800A8084: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800A8088: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x800A808C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A8090: lui         $t4, 0xE300
    ctx->r12 = S32(0XE300 << 16);
    // 0x800A8094: ori         $t4, $t4, 0xD01
    ctx->r12 = ctx->r12 | 0XD01;
    // 0x800A8098: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800A809C: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x800A80A0: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x800A80A4: lui         $t5, 0xE300
    ctx->r13 = S32(0XE300 << 16);
    // 0x800A80A8: ori         $t5, $t5, 0xC00
    ctx->r13 = ctx->r13 | 0XC00;
    // 0x800A80AC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A80B0: lui         $t6, 0x8
    ctx->r14 = S32(0X8 << 16);
    // 0x800A80B4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800A80B8: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x800A80BC: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800A80C0: lui         $t7, 0xE300
    ctx->r15 = S32(0XE300 << 16);
    // 0x800A80C4: ori         $t7, $t7, 0xA01
    ctx->r15 = ctx->r15 | 0XA01;
    // 0x800A80C8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A80CC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800A80D0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800A80D4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800A80D8: lui         $t9, 0x55
    ctx->r25 = S32(0X55 << 16);
    // 0x800A80DC: lui         $t8, 0xE200
    ctx->r24 = S32(0XE200 << 16);
    // 0x800A80E0: ori         $t8, $t8, 0x1C
    ctx->r24 = ctx->r24 | 0X1C;
    // 0x800A80E4: ori         $t9, $t9, 0x2078
    ctx->r25 = ctx->r25 | 0X2078;
    // 0x800A80E8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A80EC: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x800A80F0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800A80F4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800A80F8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A80FC: addiu       $t5, $zero, -0x80
    ctx->r13 = ADD32(0, -0X80);
    // 0x800A8100: lui         $t4, 0xFA00
    ctx->r12 = S32(0XFA00 << 16);
    // 0x800A8104: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800A8108: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x800A810C: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    // 0x800A8110: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A8114: lui         $t7, 0xFFFE
    ctx->r15 = S32(0XFFFE << 16);
    // 0x800A8118: lui         $t6, 0xFCFF
    ctx->r14 = S32(0XFCFF << 16);
    // 0x800A811C: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x800A8120: ori         $t7, $t7, 0x793C
    ctx->r15 = ctx->r15 | 0X793C;
    // 0x800A8124: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800A8128: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x800A812C: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x800A8130: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x800A8134: ori         $t8, $t8, 0x800
    ctx->r24 = ctx->r24 | 0X800;
    // 0x800A8138: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A813C: lui         $t9, 0xDA38
    ctx->r25 = S32(0XDA38 << 16);
    // 0x800A8140: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800A8144: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800A8148: ori         $t9, $t9, 0x7
    ctx->r25 = ctx->r25 | 0X7;
    // 0x800A814C: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800A8150: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800A8154: lw          $t4, 0x2C($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X2C);
    // 0x800A8158: sll         $t5, $s5, 6
    ctx->r13 = S32(ctx->r21 << 6);
    // 0x800A815C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A8160: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800A8164: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x800A8168: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800A816C: sll         $t8, $s5, 1
    ctx->r24 = S32(ctx->r21 << 1);
    // 0x800A8170: lui         $t7, 0xDB0E
    ctx->r15 = S32(0XDB0E << 16);
    // 0x800A8174: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800A8178: addu        $t9, $t0, $t8
    ctx->r25 = ADD32(ctx->r8, ctx->r24);
    // 0x800A817C: lhu         $t4, 0x8($t9)
    ctx->r12 = MEM_HU(ctx->r25, 0X8);
    // 0x800A8180: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A8184: lui         $t5, 0xDC08
    ctx->r13 = S32(0XDC08 << 16);
    // 0x800A8188: ori         $t5, $t5, 0x8
    ctx->r13 = ctx->r13 | 0X8;
    // 0x800A818C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800A8190: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x800A8194: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x800A8198: lw          $t6, 0x28($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X28);
    // 0x800A819C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A81A0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A81A4: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x800A81A8: sw          $t0, -0x6A70($at)
    MEM_W(-0X6A70, ctx->r1) = ctx->r8;
    // 0x800A81AC: lw          $v1, 0x4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4);
L_800A81B0:
    // 0x800A81B0: lw          $a1, 0x28($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X28);
L_800A81B4:
    // 0x800A81B4: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x800A81B8: beql        $a1, $zero, L_800A88A4
    if (ctx->r5 == 0) {
        // 0x800A81BC: lw          $v0, 0x4($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X4);
            goto L_800A88A4;
    }
    goto skip_1;
    // 0x800A81BC: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    skip_1:
    // 0x800A81C0: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x800A81C4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800A81C8: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x800A81CC: andi        $t9, $t8, 0x80
    ctx->r25 = ctx->r24 & 0X80;
    // 0x800A81D0: bnel        $t9, $zero, L_800A88A4
    if (ctx->r25 != 0) {
        // 0x800A81D4: lw          $v0, 0x4($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X4);
            goto L_800A88A4;
    }
    goto skip_2;
    // 0x800A81D4: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    skip_2:
    // 0x800A81D8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x800A81DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A81E0: sw          $a3, -0x6A6C($at)
    MEM_W(-0X6A6C, ctx->r1) = ctx->r7;
    // 0x800A81E4: beq         $v0, $zero, L_800A8588
    if (ctx->r2 == 0) {
        // 0x800A81E8: or          $t1, $v0, $zero
        ctx->r9 = ctx->r2 | 0;
            goto L_800A8588;
    }
    // 0x800A81E8: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x800A81EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A81F0: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x800A81F4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800A81F8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800A81FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A8200: ldc1        $f18, 0xA18($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0XA18);
    // 0x800A8204: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800A8208: sll         $t4, $zero, 2
    ctx->r12 = S32(0 << 2);
    // 0x800A820C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800A8210: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x800A8214: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x800A8218: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800A821C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A8220: addu        $t2, $s3, $t4
    ctx->r10 = ADD32(ctx->r19, ctx->r12);
    // 0x800A8224: sll         $t0, $s5, 4
    ctx->r8 = S32(ctx->r21 << 4);
    // 0x800A8228: sll         $a2, $s5, 4
    ctx->r6 = S32(ctx->r21 << 4);
L_800A822C:
    // 0x800A822C: lw          $v1, 0xC($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC);
    // 0x800A8230: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x800A8234: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x800A8238: lwc1        $f4, 0xE0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XE0);
    // 0x800A823C: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x800A8240: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    // 0x800A8244: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x800A8248: addu        $v0, $t6, $t0
    ctx->r2 = ADD32(ctx->r14, ctx->r8);
    // 0x800A824C: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x800A8250: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x800A8254: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x800A8258: nop

    // 0x800A825C: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x800A8260: lwc1        $f10, 0x24($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X24);
    // 0x800A8264: mul.s       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x800A8268: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800A826C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x800A8270: nop

    // 0x800A8274: sb          $t4, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r12;
    // 0x800A8278: lwc1        $f8, 0x28($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X28);
    // 0x800A827C: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x800A8280: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x800A8284: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x800A8288: nop

    // 0x800A828C: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x800A8290: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x800A8294: lwc1        $f14, 0xC($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0XC);
    // 0x800A8298: cvt.d.s     $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.d = CVT_D_S(ctx->f14.fl);
    // 0x800A829C: c.lt.d      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.d < ctx->f0.d;
    // 0x800A82A0: nop

    // 0x800A82A4: bc1fl       L_800A82B8
    if (!c1cs) {
        // 0x800A82A8: c.lt.d      $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.d < ctx->f20.d;
            goto L_800A82B8;
    }
    goto skip_3;
    // 0x800A82A8: c.lt.d      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.d < ctx->f20.d;
    skip_3:
    // 0x800A82AC: b           L_800A82C8
    // 0x800A82B0: mov.s       $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    ctx->f14.fl = ctx->f26.fl;
        goto L_800A82C8;
    // 0x800A82B0: mov.s       $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    ctx->f14.fl = ctx->f26.fl;
    // 0x800A82B4: c.lt.d      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.d < ctx->f20.d;
L_800A82B8:
    // 0x800A82B8: nop

    // 0x800A82BC: bc1fl       L_800A82CC
    if (!c1cs) {
        // 0x800A82C0: lwc1        $f12, 0x10($a1)
        ctx->f12.u32l = MEM_W(ctx->r5, 0X10);
            goto L_800A82CC;
    }
    goto skip_4;
    // 0x800A82C0: lwc1        $f12, 0x10($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X10);
    skip_4:
    // 0x800A82C4: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
L_800A82C8:
    // 0x800A82C8: lwc1        $f12, 0x10($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X10);
L_800A82CC:
    // 0x800A82CC: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x800A82D0: c.lt.d      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.d < ctx->f0.d;
    // 0x800A82D4: nop

    // 0x800A82D8: bc1fl       L_800A82EC
    if (!c1cs) {
        // 0x800A82DC: c.lt.d      $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.d < ctx->f20.d;
            goto L_800A82EC;
    }
    goto skip_5;
    // 0x800A82DC: c.lt.d      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.d < ctx->f20.d;
    skip_5:
    // 0x800A82E0: b           L_800A82FC
    // 0x800A82E4: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
        goto L_800A82FC;
    // 0x800A82E4: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    // 0x800A82E8: c.lt.d      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.d < ctx->f20.d;
L_800A82EC:
    // 0x800A82EC: nop

    // 0x800A82F0: bc1fl       L_800A8300
    if (!c1cs) {
        // 0x800A82F4: lwc1        $f2, 0x14($a1)
        ctx->f2.u32l = MEM_W(ctx->r5, 0X14);
            goto L_800A8300;
    }
    goto skip_6;
    // 0x800A82F4: lwc1        $f2, 0x14($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X14);
    skip_6:
    // 0x800A82F8: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
L_800A82FC:
    // 0x800A82FC: lwc1        $f2, 0x14($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X14);
L_800A8300:
    // 0x800A8300: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x800A8304: c.lt.d      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.d < ctx->f0.d;
    // 0x800A8308: nop

    // 0x800A830C: bc1fl       L_800A8320
    if (!c1cs) {
        // 0x800A8310: c.lt.d      $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.d < ctx->f20.d;
            goto L_800A8320;
    }
    goto skip_7;
    // 0x800A8310: c.lt.d      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.d < ctx->f20.d;
    skip_7:
    // 0x800A8314: b           L_800A8330
    // 0x800A8318: mov.s       $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    ctx->f2.fl = ctx->f26.fl;
        goto L_800A8330;
    // 0x800A8318: mov.s       $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    ctx->f2.fl = ctx->f26.fl;
    // 0x800A831C: c.lt.d      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.d < ctx->f20.d;
L_800A8320:
    // 0x800A8320: nop

    // 0x800A8324: bc1fl       L_800A8334
    if (!c1cs) {
        // 0x800A8328: lwc1        $f6, 0x8($a1)
        ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
            goto L_800A8334;
    }
    goto skip_8;
    // 0x800A8328: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    skip_8:
    // 0x800A832C: mov.s       $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    ctx->f2.fl = ctx->f24.fl;
L_800A8330:
    // 0x800A8330: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
L_800A8334:
    // 0x800A8334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800A8338: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x800A833C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800A8340: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x800A8344: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800A8348: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800A834C: nop

    // 0x800A8350: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x800A8354: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800A8358: nop

    // 0x800A835C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x800A8360: beql        $v0, $zero, L_800A83B4
    if (ctx->r2 == 0) {
        // 0x800A8364: mfc1        $v0, $f6
        ctx->r2 = (int32_t)ctx->f6.u32l;
            goto L_800A83B4;
    }
    goto skip_9;
    // 0x800A8364: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    skip_9:
    // 0x800A8368: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800A836C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A8370: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800A8374: sub.d       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f6.d = ctx->f4.d - ctx->f6.d;
    // 0x800A8378: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800A837C: nop

    // 0x800A8380: cvt.w.d     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_D(ctx->f6.d);
    // 0x800A8384: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800A8388: nop

    // 0x800A838C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x800A8390: bne         $v0, $zero, L_800A83A8
    if (ctx->r2 != 0) {
        // 0x800A8394: nop
    
            goto L_800A83A8;
    }
    // 0x800A8394: nop

    // 0x800A8398: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x800A839C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800A83A0: b           L_800A83C0
    // 0x800A83A4: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_800A83C0;
    // 0x800A83A4: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_800A83A8:
    // 0x800A83A8: b           L_800A83C0
    // 0x800A83AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800A83C0;
    // 0x800A83AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800A83B0: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
L_800A83B4:
    // 0x800A83B4: nop

    // 0x800A83B8: bltz        $v0, L_800A83A8
    if (SIGNED(ctx->r2) < 0) {
        // 0x800A83BC: nop
    
            goto L_800A83A8;
    }
    // 0x800A83BC: nop

L_800A83C0:
    // 0x800A83C0: lw          $t9, 0x18($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X18);
    // 0x800A83C4: or          $t8, $v0, $zero
    ctx->r24 = ctx->r2 | 0;
    // 0x800A83C8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800A83CC: addu        $t4, $t9, $a2
    ctx->r12 = ADD32(ctx->r25, ctx->r6);
    // 0x800A83D0: sb          $t8, 0x4($t4)
    MEM_B(0X4, ctx->r12) = ctx->r24;
    // 0x800A83D4: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x800A83D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800A83DC: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x800A83E0: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x800A83E4: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x800A83E8: sb          $t8, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r24;
    // 0x800A83EC: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x800A83F0: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800A83F4: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x800A83F8: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x800A83FC: mul.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f18.d);
    // 0x800A8400: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800A8404: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800A8408: nop

    // 0x800A840C: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x800A8410: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800A8414: nop

    // 0x800A8418: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x800A841C: beql        $v0, $zero, L_800A8470
    if (ctx->r2 == 0) {
        // 0x800A8420: mfc1        $v0, $f8
        ctx->r2 = (int32_t)ctx->f8.u32l;
            goto L_800A8470;
    }
    goto skip_10;
    // 0x800A8420: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    skip_10:
    // 0x800A8424: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x800A8428: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A842C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800A8430: sub.d       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f8.d = ctx->f6.d - ctx->f8.d;
    // 0x800A8434: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800A8438: nop

    // 0x800A843C: cvt.w.d     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_D(ctx->f8.d);
    // 0x800A8440: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800A8444: nop

    // 0x800A8448: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x800A844C: bne         $v0, $zero, L_800A8464
    if (ctx->r2 != 0) {
        // 0x800A8450: nop
    
            goto L_800A8464;
    }
    // 0x800A8450: nop

    // 0x800A8454: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x800A8458: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800A845C: b           L_800A847C
    // 0x800A8460: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_800A847C;
    // 0x800A8460: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_800A8464:
    // 0x800A8464: b           L_800A847C
    // 0x800A8468: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800A847C;
    // 0x800A8468: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800A846C: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
L_800A8470:
    // 0x800A8470: nop

    // 0x800A8474: bltz        $v0, L_800A8464
    if (SIGNED(ctx->r2) < 0) {
        // 0x800A8478: nop
    
            goto L_800A8464;
    }
    // 0x800A8478: nop

L_800A847C:
    // 0x800A847C: lw          $t4, 0x18($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X18);
    // 0x800A8480: or          $t9, $v0, $zero
    ctx->r25 = ctx->r2 | 0;
    // 0x800A8484: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800A8488: addu        $t5, $t4, $a2
    ctx->r13 = ADD32(ctx->r12, ctx->r6);
    // 0x800A848C: sb          $t9, 0x5($t5)
    MEM_B(0X5, ctx->r13) = ctx->r25;
    // 0x800A8490: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A8494: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800A8498: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x800A849C: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x800A84A0: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x800A84A4: sb          $t9, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r25;
    // 0x800A84A8: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x800A84AC: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800A84B0: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800A84B4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800A84B8: mul.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f18.d);
    // 0x800A84BC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800A84C0: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800A84C4: nop

    // 0x800A84C8: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x800A84CC: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800A84D0: nop

    // 0x800A84D4: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x800A84D8: beql        $v0, $zero, L_800A852C
    if (ctx->r2 == 0) {
        // 0x800A84DC: mfc1        $v0, $f10
        ctx->r2 = (int32_t)ctx->f10.u32l;
            goto L_800A852C;
    }
    goto skip_11;
    // 0x800A84DC: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    skip_11:
    // 0x800A84E0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x800A84E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A84E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800A84EC: sub.d       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f10.d = ctx->f8.d - ctx->f10.d;
    // 0x800A84F0: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800A84F4: nop

    // 0x800A84F8: cvt.w.d     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_D(ctx->f10.d);
    // 0x800A84FC: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800A8500: nop

    // 0x800A8504: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x800A8508: bne         $v0, $zero, L_800A8520
    if (ctx->r2 != 0) {
        // 0x800A850C: nop
    
            goto L_800A8520;
    }
    // 0x800A850C: nop

    // 0x800A8510: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x800A8514: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800A8518: b           L_800A8538
    // 0x800A851C: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_800A8538;
    // 0x800A851C: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_800A8520:
    // 0x800A8520: b           L_800A8538
    // 0x800A8524: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800A8538;
    // 0x800A8524: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800A8528: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
L_800A852C:
    // 0x800A852C: nop

    // 0x800A8530: bltz        $v0, L_800A8520
    if (SIGNED(ctx->r2) < 0) {
        // 0x800A8534: nop
    
            goto L_800A8520;
    }
    // 0x800A8534: nop

L_800A8538:
    // 0x800A8538: lw          $t5, 0x18($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X18);
    // 0x800A853C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800A8540: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x800A8544: addu        $t6, $t5, $a2
    ctx->r14 = ADD32(ctx->r13, ctx->r6);
    // 0x800A8548: sb          $v0, 0x6($t6)
    MEM_B(0X6, ctx->r14) = ctx->r2;
    // 0x800A854C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800A8550: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800A8554: addiu       $a3, $a3, 0x40
    ctx->r7 = ADD32(ctx->r7, 0X40);
    // 0x800A8558: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x800A855C: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x800A8560: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x800A8564: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x800A8568: sb          $v0, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r2;
    // 0x800A856C: lw          $t4, -0x4($a0)
    ctx->r12 = MEM_W(ctx->r4, -0X4);
    // 0x800A8570: bne         $t1, $zero, L_800A822C
    if (ctx->r9 != 0) {
        // 0x800A8574: sw          $t4, 0x18($t2)
        MEM_W(0X18, ctx->r10) = ctx->r12;
            goto L_800A822C;
    }
    // 0x800A8574: sw          $t4, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->r12;
    // 0x800A8578: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A857C: sw          $a3, -0x6A6C($at)
    MEM_W(-0X6A6C, ctx->r1) = ctx->r7;
    // 0x800A8580: lw          $v1, 0x4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4);
    // 0x800A8584: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
L_800A8588:
    // 0x800A8588: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A858C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x800A8590: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x800A8594: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A8598: bne         $v0, $at, L_800A85F4
    if (ctx->r2 != ctx->r1) {
        // 0x800A859C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_800A85F4;
    }
    // 0x800A859C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800A85A0: lui         $t5, 0xDC08
    ctx->r13 = S32(0XDC08 << 16);
    // 0x800A85A4: ori         $t5, $t5, 0x90A
    ctx->r13 = ctx->r13 | 0X90A;
    // 0x800A85A8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800A85AC: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x800A85B0: lw          $t6, 0x4($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X4);
    // 0x800A85B4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A85B8: sll         $t4, $s5, 4
    ctx->r12 = S32(ctx->r21 << 4);
    // 0x800A85BC: lw          $t7, 0x28($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X28);
    // 0x800A85C0: lui         $t6, 0xDC08
    ctx->r14 = S32(0XDC08 << 16);
    // 0x800A85C4: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800A85C8: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x800A85CC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800A85D0: addiu       $t7, $t7, 0x6208
    ctx->r15 = ADD32(ctx->r15, 0X6208);
    // 0x800A85D4: lw          $t9, 0x18($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X18);
    // 0x800A85D8: ori         $t6, $t6, 0x60A
    ctx->r14 = ctx->r14 | 0X60A;
    // 0x800A85DC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A85E0: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x800A85E4: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x800A85E8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x800A85EC: b           L_800A879C
    // 0x800A85F0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
        goto L_800A879C;
    // 0x800A85F0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_800A85F4:
    // 0x800A85F4: lw          $a0, 0x28($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X28);
    // 0x800A85F8: beq         $v0, $zero, L_800A879C
    if (ctx->r2 == 0) {
        // 0x800A85FC: or          $t1, $v0, $zero
        ctx->r9 = ctx->r2 | 0;
            goto L_800A879C;
    }
    // 0x800A85FC: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x800A8600: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x800A8604: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x800A8608: beq         $v1, $zero, L_800A867C
    if (ctx->r3 == 0) {
        // 0x800A860C: sll         $t0, $s5, 4
        ctx->r8 = S32(ctx->r21 << 4);
            goto L_800A867C;
    }
    // 0x800A860C: sll         $t0, $s5, 4
    ctx->r8 = S32(ctx->r21 << 4);
    // 0x800A8610: addu        $a3, $v1, $v0
    ctx->r7 = ADD32(ctx->r3, ctx->r2);
    // 0x800A8614: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x800A8618: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x800A861C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800A8620: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x800A8624: lui         $a1, 0xDC08
    ctx->r5 = S32(0XDC08 << 16);
L_800A8628:
    // 0x800A8628: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800A862C: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x800A8630: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A8634: bgez        $v0, L_800A8644
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800A8638: sra         $t8, $v0, 3
        ctx->r24 = S32(SIGNED(ctx->r2) >> 3);
            goto L_800A8644;
    }
    // 0x800A8638: sra         $t8, $v0, 3
    ctx->r24 = S32(SIGNED(ctx->r2) >> 3);
    // 0x800A863C: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x800A8640: sra         $t8, $at, 3
    ctx->r24 = S32(SIGNED(ctx->r1) >> 3);
L_800A8644:
    // 0x800A8644: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x800A8648: sll         $t4, $t9, 8
    ctx->r12 = S32(ctx->r25 << 8);
    // 0x800A864C: or          $t5, $t4, $a1
    ctx->r13 = ctx->r12 | ctx->r5;
    // 0x800A8650: ori         $t6, $t5, 0xA
    ctx->r14 = ctx->r13 | 0XA;
    // 0x800A8654: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800A8658: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800A865C: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x800A8660: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800A8664: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x800A8668: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800A866C: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x800A8670: bne         $a3, $t1, L_800A8628
    if (ctx->r7 != ctx->r9) {
        // 0x800A8674: sw          $t9, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r25;
            goto L_800A8628;
    }
    // 0x800A8674: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x800A8678: beq         $t1, $zero, L_800A879C
    if (ctx->r9 == 0) {
        // 0x800A867C: sll         $v0, $a2, 2
        ctx->r2 = S32(ctx->r6 << 2);
            goto L_800A879C;
    }
L_800A867C:
    // 0x800A867C: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x800A8680: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x800A8684: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800A8688: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x800A868C: lui         $a1, 0xDC08
    ctx->r5 = S32(0XDC08 << 16);
L_800A8690:
    // 0x800A8690: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800A8694: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A8698: bgez        $v0, L_800A86A8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800A869C: sra         $t4, $v0, 3
        ctx->r12 = S32(SIGNED(ctx->r2) >> 3);
            goto L_800A86A8;
    }
    // 0x800A869C: sra         $t4, $v0, 3
    ctx->r12 = S32(SIGNED(ctx->r2) >> 3);
    // 0x800A86A0: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x800A86A4: sra         $t4, $at, 3
    ctx->r12 = S32(SIGNED(ctx->r1) >> 3);
L_800A86A8:
    // 0x800A86A8: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x800A86AC: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x800A86B0: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x800A86B4: ori         $t8, $t7, 0xA
    ctx->r24 = ctx->r15 | 0XA;
    // 0x800A86B8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800A86BC: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x800A86C0: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x800A86C4: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
    // 0x800A86C8: lw          $t4, 0x18($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X18);
    // 0x800A86CC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x800A86D0: addu        $t5, $t4, $t0
    ctx->r13 = ADD32(ctx->r12, ctx->r8);
    // 0x800A86D4: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x800A86D8: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800A86DC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A86E0: bgez        $v0, L_800A86F0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800A86E4: sra         $t6, $v0, 3
        ctx->r14 = S32(SIGNED(ctx->r2) >> 3);
            goto L_800A86F0;
    }
    // 0x800A86E4: sra         $t6, $v0, 3
    ctx->r14 = S32(SIGNED(ctx->r2) >> 3);
    // 0x800A86E8: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x800A86EC: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_800A86F0:
    // 0x800A86F0: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x800A86F4: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x800A86F8: or          $t9, $t8, $a1
    ctx->r25 = ctx->r24 | ctx->r5;
    // 0x800A86FC: ori         $t4, $t9, 0xA
    ctx->r12 = ctx->r25 | 0XA;
    // 0x800A8700: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x800A8704: lw          $t5, -0xC($a0)
    ctx->r13 = MEM_W(ctx->r4, -0XC);
    // 0x800A8708: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x800A870C: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x800A8710: addu        $t7, $t6, $t0
    ctx->r15 = ADD32(ctx->r14, ctx->r8);
    // 0x800A8714: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x800A8718: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800A871C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A8720: bgez        $v0, L_800A8730
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800A8724: sra         $t8, $v0, 3
        ctx->r24 = S32(SIGNED(ctx->r2) >> 3);
            goto L_800A8730;
    }
    // 0x800A8724: sra         $t8, $v0, 3
    ctx->r24 = S32(SIGNED(ctx->r2) >> 3);
    // 0x800A8728: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x800A872C: sra         $t8, $at, 3
    ctx->r24 = S32(SIGNED(ctx->r1) >> 3);
L_800A8730:
    // 0x800A8730: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x800A8734: sll         $t4, $t9, 8
    ctx->r12 = S32(ctx->r25 << 8);
    // 0x800A8738: or          $t5, $t4, $a1
    ctx->r13 = ctx->r12 | ctx->r5;
    // 0x800A873C: ori         $t6, $t5, 0xA
    ctx->r14 = ctx->r13 | 0XA;
    // 0x800A8740: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800A8744: lw          $t7, -0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, -0X8);
    // 0x800A8748: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x800A874C: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x800A8750: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x800A8754: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x800A8758: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800A875C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A8760: bgez        $v0, L_800A8770
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800A8764: sra         $t4, $v0, 3
        ctx->r12 = S32(SIGNED(ctx->r2) >> 3);
            goto L_800A8770;
    }
    // 0x800A8764: sra         $t4, $v0, 3
    ctx->r12 = S32(SIGNED(ctx->r2) >> 3);
    // 0x800A8768: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x800A876C: sra         $t4, $at, 3
    ctx->r12 = S32(SIGNED(ctx->r1) >> 3);
L_800A8770:
    // 0x800A8770: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x800A8774: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x800A8778: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x800A877C: ori         $t8, $t7, 0xA
    ctx->r24 = ctx->r15 | 0XA;
    // 0x800A8780: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800A8784: lw          $t9, -0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, -0X4);
    // 0x800A8788: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x800A878C: lw          $t4, 0x18($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X18);
    // 0x800A8790: addu        $t5, $t4, $t0
    ctx->r13 = ADD32(ctx->r12, ctx->r8);
    // 0x800A8794: bne         $t1, $zero, L_800A8690
    if (ctx->r9 != 0) {
        // 0x800A8798: sw          $t5, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r13;
            goto L_800A8690;
    }
    // 0x800A8798: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
L_800A879C:
    // 0x800A879C: addiu       $t6, $t3, -0x1
    ctx->r14 = ADD32(ctx->r11, -0X1);
    // 0x800A87A0: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x800A87A4: beq         $at, $zero, L_800A88FC
    if (ctx->r1 == 0) {
        // 0x800A87A8: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_800A88FC;
    }
    // 0x800A87A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A87AC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A87B0: addu        $at, $at, $t6
    gpr jr_addend_800A87B8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800A87B4: lw          $t6, 0xA20($at)
    ctx->r14 = ADD32(ctx->r1, 0XA20);
    // 0x800A87B8: jr          $t6
    // 0x800A87BC: nop

    switch (jr_addend_800A87B8 >> 2) {
        case 0: goto L_800A87C0; break;
        case 1: goto L_800A87DC; break;
        case 2: goto L_800A87F8; break;
        case 3: goto L_800A8814; break;
        case 4: goto L_800A8830; break;
        case 5: goto L_800A884C; break;
        case 6: goto L_800A8868; break;
        case 7: goto L_800A8884; break;
        default: switch_error(__func__, 0x800A87B8, 0x800E0A20);
    }
    // 0x800A87BC: nop

L_800A87C0:
    // 0x800A87C0: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800A87C4: lui         $t7, 0xDB02
    ctx->r15 = S32(0XDB02 << 16);
    // 0x800A87C8: addiu       $t8, $zero, 0x18
    ctx->r24 = ADD32(0, 0X18);
    // 0x800A87CC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800A87D0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800A87D4: b           L_800A88FC
    // 0x800A87D8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
        goto L_800A88FC;
    // 0x800A87D8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_800A87DC:
    // 0x800A87DC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800A87E0: lui         $t9, 0xDB02
    ctx->r25 = S32(0XDB02 << 16);
    // 0x800A87E4: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    // 0x800A87E8: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x800A87EC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800A87F0: b           L_800A88FC
    // 0x800A87F4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
        goto L_800A88FC;
    // 0x800A87F4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_800A87F8:
    // 0x800A87F8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800A87FC: lui         $t5, 0xDB02
    ctx->r13 = S32(0XDB02 << 16);
    // 0x800A8800: addiu       $t6, $zero, 0x30
    ctx->r14 = ADD32(0, 0X30);
    // 0x800A8804: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800A8808: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x800A880C: b           L_800A88FC
    // 0x800A8810: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
        goto L_800A88FC;
    // 0x800A8810: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_800A8814:
    // 0x800A8814: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800A8818: lui         $t7, 0xDB02
    ctx->r15 = S32(0XDB02 << 16);
    // 0x800A881C: addiu       $t8, $zero, 0x48
    ctx->r24 = ADD32(0, 0X48);
    // 0x800A8820: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800A8824: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800A8828: b           L_800A88FC
    // 0x800A882C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
        goto L_800A88FC;
    // 0x800A882C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_800A8830:
    // 0x800A8830: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800A8834: lui         $t9, 0xDB02
    ctx->r25 = S32(0XDB02 << 16);
    // 0x800A8838: addiu       $t4, $zero, 0x60
    ctx->r12 = ADD32(0, 0X60);
    // 0x800A883C: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x800A8840: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800A8844: b           L_800A88FC
    // 0x800A8848: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
        goto L_800A88FC;
    // 0x800A8848: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_800A884C:
    // 0x800A884C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800A8850: lui         $t5, 0xDB02
    ctx->r13 = S32(0XDB02 << 16);
    // 0x800A8854: addiu       $t6, $zero, 0x78
    ctx->r14 = ADD32(0, 0X78);
    // 0x800A8858: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800A885C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x800A8860: b           L_800A88FC
    // 0x800A8864: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
        goto L_800A88FC;
    // 0x800A8864: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_800A8868:
    // 0x800A8868: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800A886C: lui         $t7, 0xDB02
    ctx->r15 = S32(0XDB02 << 16);
    // 0x800A8870: addiu       $t8, $zero, 0x90
    ctx->r24 = ADD32(0, 0X90);
    // 0x800A8874: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800A8878: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800A887C: b           L_800A88FC
    // 0x800A8880: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
        goto L_800A88FC;
    // 0x800A8880: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_800A8884:
    // 0x800A8884: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800A8888: lui         $t9, 0xDB02
    ctx->r25 = S32(0XDB02 << 16);
    // 0x800A888C: addiu       $t4, $zero, 0xA8
    ctx->r12 = ADD32(0, 0XA8);
    // 0x800A8890: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x800A8894: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800A8898: b           L_800A88FC
    // 0x800A889C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
        goto L_800A88FC;
    // 0x800A889C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A88A0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
L_800A88A4:
    // 0x800A88A4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A88A8: sw          $a3, -0x6A6C($at)
    MEM_W(-0X6A6C, ctx->r1) = ctx->r7;
    // 0x800A88AC: beq         $v0, $zero, L_800A88FC
    if (ctx->r2 == 0) {
        // 0x800A88B0: or          $t1, $v0, $zero
        ctx->r9 = ctx->r2 | 0;
            goto L_800A88FC;
    }
    // 0x800A88B0: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x800A88B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A88B8: beq         $v0, $zero, L_800A88FC
    if (ctx->r2 == 0) {
        // 0x800A88BC: sw          $a3, -0x6A6C($at)
        MEM_W(-0X6A6C, ctx->r1) = ctx->r7;
            goto L_800A88FC;
    }
    // 0x800A88BC: sw          $a3, -0x6A6C($at)
    MEM_W(-0X6A6C, ctx->r1) = ctx->r7;
    // 0x800A88C0: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x800A88C4: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x800A88C8: beq         $v1, $zero, L_800A88E8
    if (ctx->r3 == 0) {
        // 0x800A88CC: addu        $v0, $v1, $t1
        ctx->r2 = ADD32(ctx->r3, ctx->r9);
            goto L_800A88E8;
    }
    // 0x800A88CC: addu        $v0, $v1, $t1
    ctx->r2 = ADD32(ctx->r3, ctx->r9);
L_800A88D0:
    // 0x800A88D0: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x800A88D4: bne         $v0, $t1, L_800A88D0
    if (ctx->r2 != ctx->r9) {
        // 0x800A88D8: addiu       $a3, $a3, 0x40
        ctx->r7 = ADD32(ctx->r7, 0X40);
            goto L_800A88D0;
    }
    // 0x800A88D8: addiu       $a3, $a3, 0x40
    ctx->r7 = ADD32(ctx->r7, 0X40);
    // 0x800A88DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A88E0: beq         $t1, $zero, L_800A88FC
    if (ctx->r9 == 0) {
        // 0x800A88E4: sw          $a3, -0x6A6C($at)
        MEM_W(-0X6A6C, ctx->r1) = ctx->r7;
            goto L_800A88FC;
    }
    // 0x800A88E4: sw          $a3, -0x6A6C($at)
    MEM_W(-0X6A6C, ctx->r1) = ctx->r7;
L_800A88E8:
    // 0x800A88E8: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
    // 0x800A88EC: bne         $t1, $zero, L_800A88E8
    if (ctx->r9 != 0) {
        // 0x800A88F0: addiu       $a3, $a3, 0x100
        ctx->r7 = ADD32(ctx->r7, 0X100);
            goto L_800A88E8;
    }
    // 0x800A88F0: addiu       $a3, $a3, 0x100
    ctx->r7 = ADD32(ctx->r7, 0X100);
    // 0x800A88F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A88F8: sw          $a3, -0x6A6C($at)
    MEM_W(-0X6A6C, ctx->r1) = ctx->r7;
L_800A88FC:
    // 0x800A88FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A8900: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x800A8904: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A8908: sw          $t3, -0x6A78($at)
    MEM_W(-0X6A78, ctx->r1) = ctx->r11;
    // 0x800A890C: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x800A8910: slti        $at, $t3, 0x8
    ctx->r1 = SIGNED(ctx->r11) < 0X8 ? 1 : 0;
    // 0x800A8914: beq         $at, $zero, L_800A8984
    if (ctx->r1 == 0) {
        // 0x800A8918: or          $t1, $t3, $zero
        ctx->r9 = ctx->r11 | 0;
            goto L_800A8984;
    }
    // 0x800A8918: or          $t1, $t3, $zero
    ctx->r9 = ctx->r11 | 0;
    // 0x800A891C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800A8920: subu        $a0, $a1, $t3
    ctx->r4 = SUB32(ctx->r5, ctx->r11);
    // 0x800A8924: andi        $t5, $a0, 0x3
    ctx->r13 = ctx->r4 & 0X3;
    // 0x800A8928: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A892C: beq         $t5, $zero, L_800A895C
    if (ctx->r13 == 0) {
        // 0x800A8930: sw          $t3, -0x6A78($at)
        MEM_W(-0X6A78, ctx->r1) = ctx->r11;
            goto L_800A895C;
    }
    // 0x800A8930: sw          $t3, -0x6A78($at)
    MEM_W(-0X6A78, ctx->r1) = ctx->r11;
    // 0x800A8934: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x800A8938: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A893C: sw          $t3, -0x6A78($at)
    MEM_W(-0X6A78, ctx->r1) = ctx->r11;
    // 0x800A8940: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x800A8944: addu        $v1, $t5, $t3
    ctx->r3 = ADD32(ctx->r13, ctx->r11);
L_800A8948:
    // 0x800A8948: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800A894C: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x800A8950: bne         $v1, $t1, L_800A8948
    if (ctx->r3 != ctx->r9) {
        // 0x800A8954: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800A8948;
    }
    // 0x800A8954: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800A8958: beq         $t1, $a1, L_800A8984
    if (ctx->r9 == ctx->r5) {
        // 0x800A895C: sll         $t7, $t1, 2
        ctx->r15 = S32(ctx->r9 << 2);
            goto L_800A8984;
    }
L_800A895C:
    // 0x800A895C: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x800A8960: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800A8964: addiu       $v1, $v1, -0x6BF0
    ctx->r3 = ADD32(ctx->r3, -0X6BF0);
    // 0x800A8968: addu        $v0, $s3, $t7
    ctx->r2 = ADD32(ctx->r19, ctx->r15);
L_800A896C:
    // 0x800A896C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800A8970: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x800A8974: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x800A8978: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x800A897C: bne         $v0, $v1, L_800A896C
    if (ctx->r2 != ctx->r3) {
        // 0x800A8980: sw          $zero, 0xC($v0)
        MEM_W(0XC, ctx->r2) = 0;
            goto L_800A896C;
    }
    // 0x800A8980: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
L_800A8984:
    // 0x800A8984: jal         0x800A7374
    // 0x800A8988: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800A7374(rdram, ctx);
        goto after_0;
    // 0x800A8988: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x800A898C: lw          $v1, 0x4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4);
    // 0x800A8990: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A8994: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800A8998: lw          $t8, 0x38($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X38);
    // 0x800A899C: lw          $t1, 0x14($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X14);
    // 0x800A89A0: sw          $t8, -0x6A24($at)
    MEM_W(-0X6A24, ctx->r1) = ctx->r24;
    // 0x800A89A4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A89A8: beq         $t1, $zero, L_800A8F58
    if (ctx->r9 == 0) {
        // 0x800A89AC: sw          $t1, -0x6A80($at)
        MEM_W(-0X6A80, ctx->r1) = ctx->r9;
            goto L_800A8F58;
    }
    // 0x800A89AC: sw          $t1, -0x6A80($at)
    MEM_W(-0X6A80, ctx->r1) = ctx->r9;
    // 0x800A89B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A89B4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800A89B8: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x800A89BC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800A89C0: nop

L_800A89C4:
    // 0x800A89C4: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800A89C8: lw          $t9, -0x6A24($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6A24);
    // 0x800A89CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A89D0: lh          $v0, 0x0($t9)
    ctx->r2 = MEM_H(ctx->r25, 0X0);
    // 0x800A89D4: sw          $t1, -0x6A80($at)
    MEM_W(-0X6A80, ctx->r1) = ctx->r9;
    // 0x800A89D8: sra         $v1, $v0, 8
    ctx->r3 = S32(SIGNED(ctx->r2) >> 8);
    // 0x800A89DC: addiu       $t4, $v1, -0x1
    ctx->r12 = ADD32(ctx->r3, -0X1);
    // 0x800A89E0: sltiu       $at, $t4, 0x5
    ctx->r1 = ctx->r12 < 0X5 ? 1 : 0;
    // 0x800A89E4: beq         $at, $zero, L_800A8F34
    if (ctx->r1 == 0) {
        // 0x800A89E8: andi        $s0, $v0, 0xFF
        ctx->r16 = ctx->r2 & 0XFF;
            goto L_800A8F34;
    }
    // 0x800A89E8: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x800A89EC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A89F0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A89F4: addu        $at, $at, $t4
    gpr jr_addend_800A89FC = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A89F8: lw          $t4, 0xA40($at)
    ctx->r12 = ADD32(ctx->r1, 0XA40);
    // 0x800A89FC: jr          $t4
    // 0x800A8A00: nop

    switch (jr_addend_800A89FC >> 2) {
        case 0: goto L_800A8A4C; break;
        case 1: goto L_800A8AB0; break;
        case 2: goto L_800A8A04; break;
        case 3: goto L_800A8D88; break;
        case 4: goto L_800A8DD0; break;
        default: switch_error(__func__, 0x800A89FC, 0x800E0A40);
    }
    // 0x800A8A00: nop

L_800A8A04:
    // 0x800A8A04: lw          $t5, 0x4($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X4);
    // 0x800A8A08: sll         $t6, $s0, 3
    ctx->r14 = S32(ctx->r16 << 3);
    // 0x800A8A0C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800A8A10: lw          $v0, 0x34($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X34);
    // 0x800A8A14: sll         $t9, $v1, 3
    ctx->r25 = S32(ctx->r3 << 3);
    // 0x800A8A18: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x800A8A1C: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800A8A20: addu        $a0, $v0, $t9
    ctx->r4 = ADD32(ctx->r2, ctx->r25);
    // 0x800A8A24: lh          $a1, 0x6($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X6);
    // 0x800A8A28: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800A8A2C: mfc1        $s0, $f6
    ctx->r16 = (int32_t)ctx->f6.u32l;
    // 0x800A8A30: nop

    // 0x800A8A34: slt         $at, $a1, $s0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800A8A38: beql        $at, $zero, L_800A8A48
    if (ctx->r1 == 0) {
        // 0x800A8A3C: lh          $t4, 0x4($a0)
        ctx->r12 = MEM_H(ctx->r4, 0X4);
            goto L_800A8A48;
    }
    goto skip_12;
    // 0x800A8A3C: lh          $t4, 0x4($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X4);
    skip_12:
    // 0x800A8A40: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800A8A44: lh          $t4, 0x4($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X4);
L_800A8A48:
    // 0x800A8A48: addu        $s0, $s0, $t4
    ctx->r16 = ADD32(ctx->r16, ctx->r12);
L_800A8A4C:
    // 0x800A8A4C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800A8A50: bne         $s0, $at, L_800A8A78
    if (ctx->r16 != ctx->r1) {
        // 0x800A8A54: or          $v0, $s2, $zero
        ctx->r2 = ctx->r18 | 0;
            goto L_800A8A78;
    }
    // 0x800A8A54: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800A8A58: sw          $zero, 0x10($s3)
    MEM_W(0X10, ctx->r19) = 0;
    // 0x800A8A5C: lui         $t5, 0xD700
    ctx->r13 = S32(0XD700 << 16);
    // 0x800A8A60: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x800A8A64: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800A8A68: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A8A6C: sw          $t1, -0x6A80($at)
    MEM_W(-0X6A80, ctx->r1) = ctx->r9;
    // 0x800A8A70: b           L_800A8AA4
    // 0x800A8A74: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
        goto L_800A8AA4;
    // 0x800A8A74: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_800A8A78:
    // 0x800A8A78: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A8A7C: sw          $t1, -0x6A80($at)
    MEM_W(-0X6A80, ctx->r1) = ctx->r9;
    // 0x800A8A80: lw          $t6, 0x4($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X4);
    // 0x800A8A84: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x800A8A88: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800A8A8C: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x800A8A90: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A8A94: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x800A8A98: jal         0x800A4B98
    // 0x800A8A9C: sw          $a1, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r5;
    func_800A4B98(rdram, ctx);
        goto after_1;
    // 0x800A8A9C: sw          $a1, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r5;
    after_1:
    // 0x800A8AA0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_800A8AA4:
    // 0x800A8AA4: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800A8AA8: b           L_800A8F34
    // 0x800A8AAC: lw          $t1, -0x6A80($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X6A80);
        goto L_800A8F34;
    // 0x800A8AAC: lw          $t1, -0x6A80($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X6A80);
L_800A8AB0:
    // 0x800A8AB0: lw          $t5, 0x4($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X4);
    // 0x800A8AB4: sll         $t7, $s0, 6
    ctx->r15 = S32(ctx->r16 << 6);
    // 0x800A8AB8: lui         $t9, 0xDA38
    ctx->r25 = S32(0XDA38 << 16);
    // 0x800A8ABC: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x800A8AC0: ori         $t9, $t9, 0x3
    ctx->r25 = ctx->r25 | 0X3;
    // 0x800A8AC4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800A8AC8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800A8ACC: sw          $t8, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r24;
    // 0x800A8AD0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800A8AD4: lw          $t4, 0x8($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X8);
    // 0x800A8AD8: sll         $t6, $s5, 6
    ctx->r14 = S32(ctx->r21 << 6);
    // 0x800A8ADC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A8AE0: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x800A8AE4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A8AE8: sll         $t9, $s5, 6
    ctx->r25 = S32(ctx->r21 << 6);
    // 0x800A8AEC: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800A8AF0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800A8AF4: lw          $v1, 0x8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X8);
    // 0x800A8AF8: lhu         $a1, 0x0($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X0);
    // 0x800A8AFC: andi        $t8, $a1, 0x2
    ctx->r24 = ctx->r5 & 0X2;
    // 0x800A8B00: bne         $t8, $zero, L_800A8F34
    if (ctx->r24 != 0) {
        // 0x800A8B04: nop
    
            goto L_800A8F34;
    }
    // 0x800A8B04: nop

    // 0x800A8B08: sw          $t1, -0x6A80($at)
    MEM_W(-0X6A80, ctx->r1) = ctx->r9;
    // 0x800A8B0C: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x800A8B10: andi        $t4, $a1, 0x200
    ctx->r12 = ctx->r5 & 0X200;
    // 0x800A8B14: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x800A8B18: addiu       $a2, $v0, 0x80
    ctx->r6 = ADD32(ctx->r2, 0X80);
    // 0x800A8B1C: beq         $t4, $zero, L_800A8C80
    if (ctx->r12 == 0) {
        // 0x800A8B20: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_800A8C80;
    }
    // 0x800A8B20: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800A8B24: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A8B28: sw          $a0, -0x6A28($at)
    MEM_W(-0X6A28, ctx->r1) = ctx->r4;
    // 0x800A8B2C: addiu       $s0, $v0, 0xC0
    ctx->r16 = ADD32(ctx->r2, 0XC0);
    // 0x800A8B30: lwc1        $f10, 0x30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X30);
    // 0x800A8B34: lwc1        $f8, 0x7C($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X7C);
    // 0x800A8B38: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x800A8B3C: addiu       $a0, $sp, 0x110
    ctx->r4 = ADD32(ctx->r29, 0X110);
    // 0x800A8B40: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800A8B44: addiu       $a1, $sp, 0x114
    ctx->r5 = ADD32(ctx->r29, 0X114);
    // 0x800A8B48: addiu       $a2, $sp, 0x118
    ctx->r6 = ADD32(ctx->r29, 0X118);
    // 0x800A8B4C: swc1        $f4, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f4.u32l;
    // 0x800A8B50: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x800A8B54: lwc1        $f6, 0x80($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X80);
    // 0x800A8B58: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800A8B5C: swc1        $f10, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f10.u32l;
    // 0x800A8B60: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x800A8B64: lwc1        $f4, 0x84($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X84);
    // 0x800A8B68: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800A8B6C: jal         0x800BA660
    // 0x800A8B70: swc1        $f8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f8.u32l;
    guNormalize(rdram, ctx);
        goto after_2;
    // 0x800A8B70: swc1        $f8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x800A8B74: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800A8B78: addiu       $a0, $sp, 0xF8
    ctx->r4 = ADD32(ctx->r29, 0XF8);
    // 0x800A8B7C: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    // 0x800A8B80: swc1        $f10, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f10.u32l;
    // 0x800A8B84: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x800A8B88: addiu       $a2, $sp, 0x110
    ctx->r6 = ADD32(ctx->r29, 0X110);
    // 0x800A8B8C: swc1        $f4, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f4.u32l;
    // 0x800A8B90: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x800A8B94: jal         0x800AFF34
    // 0x800A8B98: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    func_800AFF34(rdram, ctx);
        goto after_3;
    // 0x800A8B98: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x800A8B9C: addiu       $a0, $sp, 0xF8
    ctx->r4 = ADD32(ctx->r29, 0XF8);
    // 0x800A8BA0: addiu       $a1, $sp, 0xFC
    ctx->r5 = ADD32(ctx->r29, 0XFC);
    // 0x800A8BA4: jal         0x800BA660
    // 0x800A8BA8: addiu       $a2, $sp, 0x100
    ctx->r6 = ADD32(ctx->r29, 0X100);
    guNormalize(rdram, ctx);
        goto after_4;
    // 0x800A8BA8: addiu       $a2, $sp, 0x100
    ctx->r6 = ADD32(ctx->r29, 0X100);
    after_4:
    // 0x800A8BAC: addiu       $a0, $sp, 0x110
    ctx->r4 = ADD32(ctx->r29, 0X110);
    // 0x800A8BB0: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    // 0x800A8BB4: jal         0x800AFF34
    // 0x800A8BB8: addiu       $a2, $sp, 0x104
    ctx->r6 = ADD32(ctx->r29, 0X104);
    func_800AFF34(rdram, ctx);
        goto after_5;
    // 0x800A8BB8: addiu       $a2, $sp, 0x104
    ctx->r6 = ADD32(ctx->r29, 0X104);
    after_5:
    // 0x800A8BBC: lwc1        $f8, 0x28($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X28);
    // 0x800A8BC0: lwc1        $f10, 0xF8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x800A8BC4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800A8BC8: lw          $a0, -0x6A28($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6A28);
    // 0x800A8BCC: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800A8BD0: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x800A8BD4: lwc1        $f6, 0x28($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X28);
    // 0x800A8BD8: lwc1        $f8, 0xFC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x800A8BDC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800A8BE0: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x800A8BE4: lwc1        $f6, 0x100($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X100);
    // 0x800A8BE8: lwc1        $f4, 0x28($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X28);
    // 0x800A8BEC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A8BF0: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x800A8BF4: lwc1        $f10, 0x2C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x800A8BF8: lwc1        $f4, 0x104($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X104);
    // 0x800A8BFC: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800A8C00: swc1        $f6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f6.u32l;
    // 0x800A8C04: lwc1        $f8, 0x2C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x800A8C08: lwc1        $f10, 0x108($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X108);
    // 0x800A8C0C: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800A8C10: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x800A8C14: lwc1        $f8, 0x10C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x800A8C18: lwc1        $f6, 0x2C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x800A8C1C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800A8C20: swc1        $f10, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f10.u32l;
    // 0x800A8C24: lwc1        $f4, 0x30($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X30);
    // 0x800A8C28: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x800A8C2C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A8C30: swc1        $f8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f8.u32l;
    // 0x800A8C34: lwc1        $f10, 0x30($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X30);
    // 0x800A8C38: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
    // 0x800A8C3C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800A8C40: swc1        $f6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f6.u32l;
    // 0x800A8C44: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x800A8C48: lwc1        $f8, 0x30($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X30);
    // 0x800A8C4C: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800A8C50: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x800A8C54: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x800A8C58: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    // 0x800A8C5C: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x800A8C60: swc1        $f8, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f8.u32l;
    // 0x800A8C64: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x800A8C68: swc1        $f26, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f26.u32l;
    // 0x800A8C6C: swc1        $f24, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f24.u32l;
    // 0x800A8C70: swc1        $f24, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f24.u32l;
    // 0x800A8C74: swc1        $f24, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f24.u32l;
    // 0x800A8C78: b           L_800A8CB8
    // 0x800A8C7C: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
        goto L_800A8CB8;
    // 0x800A8C7C: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
L_800A8C80:
    // 0x800A8C80: or          $t7, $v0, $zero
    ctx->r15 = ctx->r2 | 0;
    // 0x800A8C84: or          $t8, $a2, $zero
    ctx->r24 = ctx->r6 | 0;
    // 0x800A8C88: addiu       $t6, $v0, 0x3C
    ctx->r14 = ADD32(ctx->r2, 0X3C);
L_800A8C8C:
    // 0x800A8C8C: lw          $at, 0xC0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0XC0);
    // 0x800A8C90: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x800A8C94: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x800A8C98: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x800A8C9C: lw          $at, 0xB8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0XB8);
    // 0x800A8CA0: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x800A8CA4: lw          $at, 0xBC($t7)
    ctx->r1 = MEM_W(ctx->r15, 0XBC);
    // 0x800A8CA8: bne         $t7, $t6, L_800A8C8C
    if (ctx->r15 != ctx->r14) {
        // 0x800A8CAC: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_800A8C8C;
    }
    // 0x800A8CAC: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x800A8CB0: lw          $at, 0xC0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0XC0);
    // 0x800A8CB4: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
L_800A8CB8:
    // 0x800A8CB8: lw          $t9, 0xC($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XC);
    // 0x800A8CBC: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800A8CC0: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x800A8CC4: lwc1        $f0, 0x18($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X18);
    // 0x800A8CC8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A8CCC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800A8CD0: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x800A8CD4: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800A8CD8: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800A8CDC: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x800A8CE0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800A8CE4: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x800A8CE8: swc1        $f10, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f10.u32l;
    // 0x800A8CEC: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800A8CF0: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x800A8CF4: swc1        $f6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f6.u32l;
    // 0x800A8CF8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800A8CFC: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800A8D00: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x800A8D04: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800A8D08: lwc1        $f8, 0x18($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X18);
    // 0x800A8D0C: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
    // 0x800A8D10: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800A8D14: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x800A8D18: swc1        $f10, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f10.u32l;
    // 0x800A8D1C: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800A8D20: lwc1        $f8, 0x30($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X30);
    // 0x800A8D24: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x800A8D28: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800A8D2C: lwc1        $f4, 0x34($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X34);
    // 0x800A8D30: swc1        $f10, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f10.u32l;
    // 0x800A8D34: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x800A8D38: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x800A8D3C: swc1        $f6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f6.u32l;
    // 0x800A8D40: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x800A8D44: swc1        $f10, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f10.u32l;
    // 0x800A8D48: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x800A8D4C: swc1        $f6, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f6.u32l;
    // 0x800A8D50: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
    // 0x800A8D54: lw          $t4, 0x8($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X8);
    // 0x800A8D58: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x800A8D5C: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x800A8D60: sw          $a0, -0x6A28($at)
    MEM_W(-0X6A28, ctx->r1) = ctx->r4;
    // 0x800A8D64: jal         0x800B78D0
    // 0x800A8D68: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    guMtxF2L(rdram, ctx);
        goto after_6;
    // 0x800A8D68: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    after_6:
    // 0x800A8D6C: lw          $v1, 0x8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X8);
    // 0x800A8D70: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800A8D74: lhu         $t7, 0x0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X0);
    // 0x800A8D78: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x800A8D7C: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x800A8D80: b           L_800A8F34
    // 0x800A8D84: lw          $t1, -0x6A80($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X6A80);
        goto L_800A8F34;
    // 0x800A8D84: lw          $t1, -0x6A80($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X6A80);
L_800A8D88:
    // 0x800A8D88: lw          $t9, 0x4($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X4);
    // 0x800A8D8C: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x800A8D90: lui         $t8, 0xDB06
    ctx->r24 = S32(0XDB06 << 16);
    // 0x800A8D94: lw          $t4, 0x2C($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X2C);
    // 0x800A8D98: ori         $t8, $t8, 0x28
    ctx->r24 = ctx->r24 | 0X28;
    // 0x800A8D9C: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x800A8DA0: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800A8DA4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800A8DA8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A8DAC: sw          $t7, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r15;
    // 0x800A8DB0: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x800A8DB4: lw          $t9, 0xC($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XC);
    // 0x800A8DB8: jal         0x800B87A0
    // 0x800A8DBC: lw          $a0, 0x20($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X20);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_7;
    // 0x800A8DBC: lw          $a0, 0x20($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X20);
    after_7:
    // 0x800A8DC0: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x800A8DC4: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800A8DC8: b           L_800A8F34
    // 0x800A8DCC: lw          $t1, -0x6A80($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X6A80);
        goto L_800A8F34;
    // 0x800A8DCC: lw          $t1, -0x6A80($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X6A80);
L_800A8DD0:
    // 0x800A8DD0: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x800A8DD4: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x800A8DD8: addu        $t5, $t5, $s0
    ctx->r13 = ADD32(ctx->r13, ctx->r16);
    // 0x800A8DDC: lw          $t4, 0x2C($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X2C);
    // 0x800A8DE0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800A8DE4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A8DE8: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800A8DEC: sw          $t6, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r14;
    // 0x800A8DF0: beq         $t6, $zero, L_800A8F2C
    if (ctx->r14 == 0) {
        // 0x800A8DF4: sw          $t1, -0x6A80($at)
        MEM_W(-0X6A80, ctx->r1) = ctx->r9;
            goto L_800A8F2C;
    }
    // 0x800A8DF4: sw          $t1, -0x6A80($at)
    MEM_W(-0X6A80, ctx->r1) = ctx->r9;
    // 0x800A8DF8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A8DFC: sw          $t1, -0x6A80($at)
    MEM_W(-0X6A80, ctx->r1) = ctx->r9;
    // 0x800A8E00: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800A8E04: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A8E08: c.lt.s      $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f4.fl < ctx->f22.fl;
    // 0x800A8E0C: nop

    // 0x800A8E10: bc1f        L_800A8F2C
    if (!c1cs) {
        // 0x800A8E14: nop
    
            goto L_800A8F2C;
    }
    // 0x800A8E14: nop

    // 0x800A8E18: sw          $t1, -0x6A80($at)
    MEM_W(-0X6A80, ctx->r1) = ctx->r9;
    // 0x800A8E1C: lwl         $t7, 0x10($t6)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r14, 0X10);
    // 0x800A8E20: lwr         $t7, 0x13($t6)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r14, 0X13);
    // 0x800A8E24: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800A8E28: nop

    // 0x800A8E2C: c.lt.s      $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f6.fl < ctx->f22.fl;
    // 0x800A8E30: nop

    // 0x800A8E34: bc1f        L_800A8F2C
    if (!c1cs) {
        // 0x800A8E38: nop
    
            goto L_800A8F2C;
    }
    // 0x800A8E38: nop

    // 0x800A8E3C: jal         0x800A74DC
    // 0x800A8E40: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800A74DC(rdram, ctx);
        goto after_8;
    // 0x800A8E40: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_8:
    // 0x800A8E44: lw          $t8, 0x14($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X14);
    // 0x800A8E48: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800A8E4C: lwl         $t9, 0x0($t8)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r24, 0X0);
    // 0x800A8E50: lwr         $t9, 0x3($t8)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r24, 0X3);
    // 0x800A8E54: andi        $t4, $t9, 0x1
    ctx->r12 = ctx->r25 & 0X1;
    // 0x800A8E58: beql        $t4, $zero, L_800A8F04
    if (ctx->r12 == 0) {
        // 0x800A8E5C: or          $s1, $s2, $zero
        ctx->r17 = ctx->r18 | 0;
            goto L_800A8F04;
    }
    goto skip_13;
    // 0x800A8E5C: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    skip_13:
    // 0x800A8E60: lw          $t5, 0xC($s3)
    ctx->r13 = MEM_W(ctx->r19, 0XC);
    // 0x800A8E64: lwc1        $f8, 0x84($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X84);
    // 0x800A8E68: lw          $t7, 0x8($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X8);
    // 0x800A8E6C: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x800A8E70: lw          $a2, 0x7C($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X7C);
    // 0x800A8E74: lw          $a3, 0x80($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X80);
    // 0x800A8E78: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800A8E7C: lw          $v0, 0xC($t7)
    ctx->r2 = MEM_W(ctx->r15, 0XC);
    // 0x800A8E80: sll         $s1, $s5, 5
    ctx->r17 = S32(ctx->r21 << 5);
    // 0x800A8E84: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    // 0x800A8E88: lwc1        $f10, 0xF0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XF0);
    // 0x800A8E8C: addu        $a1, $t6, $s1
    ctx->r5 = ADD32(ctx->r14, ctx->r17);
    // 0x800A8E90: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x800A8E94: lwc1        $f4, 0xF4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XF4);
    // 0x800A8E98: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x800A8E9C: lwc1        $f6, 0xF8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XF8);
    // 0x800A8EA0: swc1        $f24, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f24.u32l;
    // 0x800A8EA4: swc1        $f26, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f26.u32l;
    // 0x800A8EA8: swc1        $f24, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f24.u32l;
    // 0x800A8EAC: jal         0x800BAD0C
    // 0x800A8EB0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    guLookAtReflect(rdram, ctx);
        goto after_9;
    // 0x800A8EB0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x800A8EB4: lui         $t8, 0xDC08
    ctx->r24 = S32(0XDC08 << 16);
    // 0x800A8EB8: ori         $t8, $t8, 0xA
    ctx->r24 = ctx->r24 | 0XA;
    // 0x800A8EBC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800A8EC0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800A8EC4: lw          $t9, 0xC($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XC);
    // 0x800A8EC8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A8ECC: lui         $t6, 0xDC08
    ctx->r14 = S32(0XDC08 << 16);
    // 0x800A8ED0: lw          $t4, 0x8($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X8);
    // 0x800A8ED4: ori         $t6, $t6, 0x30A
    ctx->r14 = ctx->r14 | 0X30A;
    // 0x800A8ED8: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800A8EDC: addu        $t5, $t4, $s1
    ctx->r13 = ADD32(ctx->r12, ctx->r17);
    // 0x800A8EE0: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x800A8EE4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800A8EE8: lw          $t7, 0xC($s3)
    ctx->r15 = MEM_W(ctx->r19, 0XC);
    // 0x800A8EEC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A8EF0: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x800A8EF4: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x800A8EF8: addiu       $t4, $t9, 0x10
    ctx->r12 = ADD32(ctx->r25, 0X10);
    // 0x800A8EFC: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x800A8F00: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
L_800A8F04:
    // 0x800A8F04: lui         $t5, 0xDE00
    ctx->r13 = S32(0XDE00 << 16);
    // 0x800A8F08: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x800A8F0C: lw          $t6, 0xC($s3)
    ctx->r14 = MEM_W(ctx->r19, 0XC);
    // 0x800A8F10: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x800A8F14: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800A8F18: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x800A8F1C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A8F20: jal         0x800B87A0
    // 0x800A8F24: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_10;
    // 0x800A8F24: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_10:
    // 0x800A8F28: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
L_800A8F2C:
    // 0x800A8F2C: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800A8F30: lw          $t1, -0x6A80($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X6A80);
L_800A8F34:
    // 0x800A8F34: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x800A8F38: lw          $t4, -0x6A24($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X6A24);
    // 0x800A8F3C: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x800A8F40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A8F44: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x800A8F48: bne         $t1, $zero, L_800A89C4
    if (ctx->r9 != 0) {
        // 0x800A8F4C: sw          $t5, -0x6A24($at)
        MEM_W(-0X6A24, ctx->r1) = ctx->r13;
            goto L_800A89C4;
    }
    // 0x800A8F4C: sw          $t5, -0x6A24($at)
    MEM_W(-0X6A24, ctx->r1) = ctx->r13;
    // 0x800A8F50: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A8F54: sw          $t1, -0x6A80($at)
    MEM_W(-0X6A80, ctx->r1) = ctx->r9;
L_800A8F58:
    // 0x800A8F58: lbu         $t6, 0x4($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X4);
    // 0x800A8F5C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800A8F60: xori        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 ^ 0X1;
    // 0x800A8F64: sb          $t7, 0x4($s4)
    MEM_B(0X4, ctx->r20) = ctx->r15;
    // 0x800A8F68: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x800A8F6C: sw          $zero, 0x4($s3)
    MEM_W(0X4, ctx->r19) = 0;
    // 0x800A8F70: lw          $s3, 0x60($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X60);
    // 0x800A8F74: lw          $s5, 0x68($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X68);
    // 0x800A8F78: lw          $s4, 0x64($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X64);
    // 0x800A8F7C: lw          $s2, 0x5C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X5C);
    // 0x800A8F80: lw          $s1, 0x58($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X58);
    // 0x800A8F84: lw          $s0, 0x54($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X54);
    // 0x800A8F88: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x800A8F8C: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x800A8F90: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x800A8F94: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x800A8F98: jr          $ra
    // 0x800A8F9C: addiu       $sp, $sp, 0x1D0
    ctx->r29 = ADD32(ctx->r29, 0X1D0);
    return;
    // 0x800A8F9C: addiu       $sp, $sp, 0x1D0
    ctx->r29 = ADD32(ctx->r29, 0X1D0);
;}
RECOMP_FUNC void func_800A8FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8FA0: beq         $a2, $zero, L_800A8FBC
    if (ctx->r6 == 0) {
        // 0x800A8FA4: add         $t0, $a2, $a1
        ctx->r8 = ADD32(ctx->r6, ctx->r5);
            goto L_800A8FBC;
    }
    // 0x800A8FA4: add         $t0, $a2, $a1
    ctx->r8 = ADD32(ctx->r6, ctx->r5);
L_800A8FA8:
    // 0x800A8FA8: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x800A8FAC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800A8FB0: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x800A8FB4: bne         $a1, $t0, L_800A8FA8
    if (ctx->r5 != ctx->r8) {
        // 0x800A8FB8: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_800A8FA8;
    }
    // 0x800A8FB8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_800A8FBC:
    // 0x800A8FBC: add         $v0, $zero, $a0
    ctx->r2 = ADD32(0, ctx->r4);
    // 0x800A8FC0: jr          $ra
    // 0x800A8FC4: nop

    return;
    // 0x800A8FC4: nop

;}
RECOMP_FUNC void func_800A8FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8FC8: beq         $a1, $zero, L_800A8FDC
    if (ctx->r5 == 0) {
        // 0x800A8FCC: sh          $a2, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r6;
            goto L_800A8FDC;
    }
L_800A8FCC:
    // 0x800A8FCC: sh          $a2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r6;
    // 0x800A8FD0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x800A8FD4: bne         $a1, $zero, L_800A8FCC
    if (ctx->r5 != 0) {
        // 0x800A8FD8: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_800A8FCC;
    }
    // 0x800A8FD8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_800A8FDC:
    // 0x800A8FDC: add         $v0, $zero, $a0
    ctx->r2 = ADD32(0, ctx->r4);
    // 0x800A8FE0: jr          $ra
    // 0x800A8FE4: nop

    return;
    // 0x800A8FE4: nop

;}
RECOMP_FUNC void func_800A8FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8FE8: beq         $a2, $zero, L_800A8FFC
    if (ctx->r6 == 0) {
        // 0x800A8FEC: add         $t0, $a2, $a0
        ctx->r8 = ADD32(ctx->r6, ctx->r4);
            goto L_800A8FFC;
    }
    // 0x800A8FEC: add         $t0, $a2, $a0
    ctx->r8 = ADD32(ctx->r6, ctx->r4);
L_800A8FF0:
    // 0x800A8FF0: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x800A8FF4: bne         $a0, $t0, L_800A8FF0
    if (ctx->r4 != ctx->r8) {
        // 0x800A8FF8: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_800A8FF0;
    }
    // 0x800A8FF8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_800A8FFC:
    // 0x800A8FFC: add         $v0, $zero, $a0
    ctx->r2 = ADD32(0, ctx->r4);
    // 0x800A9000: jr          $ra
    // 0x800A9004: nop

    return;
    // 0x800A9004: nop

    // 0x800A9008: nop

    // 0x800A900C: nop

;}
RECOMP_FUNC void func_800A9010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9010: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x800A9014: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800A9018: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800A901C: lw          $t7, -0x6A20($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X6A20);
    // 0x800A9020: lw          $t6, -0x6A1C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6A1C);
    // 0x800A9024: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800A9028: lui         $at, 0x4390
    ctx->r1 = S32(0X4390 << 16);
    // 0x800A902C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A9030: addiu       $at, $zero, 0x2625
    ctx->r1 = ADD32(0, 0X2625);
    // 0x800A9034: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x800A9038: divu        $zero, $t8, $at
    lo = S32(U32(ctx->r24) / U32(ctx->r1)); hi = S32(U32(ctx->r24) % U32(ctx->r1));
    // 0x800A903C: mflo        $t9
    ctx->r25 = lo;
    // 0x800A9040: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800A9044: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800A9048: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800A904C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800A9050: bgez        $t9, L_800A9068
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800A9054: cvt.s.w     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800A9068;
    }
    // 0x800A9054: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A9058: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800A905C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A9060: nop

    // 0x800A9064: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
L_800A9068:
    // 0x800A9068: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x800A906C: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x800A9070: bc1fl       L_800A9080
    if (!c1cs) {
        // 0x800A9074: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_800A9080;
    }
    goto skip_0;
    // 0x800A9074: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_0:
    // 0x800A9078: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x800A907C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_800A9080:
    // 0x800A9080: nop

    // 0x800A9084: bc1f        L_800A90A8
    if (!c1cs) {
        // 0x800A9088: lui         $at, 0x4300
        ctx->r1 = S32(0X4300 << 16);
            goto L_800A90A8;
    }
    // 0x800A9088: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x800A908C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800A9090: nop

    // 0x800A9094: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x800A9098: nop

    // 0x800A909C: bc1fl       L_800A90AC
    if (!c1cs) {
        // 0x800A90A0: lui         $at, 0x4300
        ctx->r1 = S32(0X4300 << 16);
            goto L_800A90AC;
    }
    goto skip_1;
    // 0x800A90A0: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    skip_1:
    // 0x800A90A4: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_800A90A8:
    // 0x800A90A8: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
L_800A90AC:
    // 0x800A90AC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800A90B0: nop

    // 0x800A90B4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x800A90B8: nop

    // 0x800A90BC: bc1f        L_800A90E0
    if (!c1cs) {
        // 0x800A90C0: lui         $at, 0x4340
        ctx->r1 = S32(0X4340 << 16);
            goto L_800A90E0;
    }
    // 0x800A90C0: lui         $at, 0x4340
    ctx->r1 = S32(0X4340 << 16);
    // 0x800A90C4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800A90C8: nop

    // 0x800A90CC: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x800A90D0: nop

    // 0x800A90D4: bc1fl       L_800A90E4
    if (!c1cs) {
        // 0x800A90D8: lui         $at, 0x4340
        ctx->r1 = S32(0X4340 << 16);
            goto L_800A90E4;
    }
    goto skip_2;
    // 0x800A90D8: lui         $at, 0x4340
    ctx->r1 = S32(0X4340 << 16);
    skip_2:
    // 0x800A90DC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_800A90E0:
    // 0x800A90E0: lui         $at, 0x4340
    ctx->r1 = S32(0X4340 << 16);
L_800A90E4:
    // 0x800A90E4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800A90E8: nop

    // 0x800A90EC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x800A90F0: nop

    // 0x800A90F4: bc1f        L_800A9118
    if (!c1cs) {
        // 0x800A90F8: lui         $at, 0x4380
        ctx->r1 = S32(0X4380 << 16);
            goto L_800A9118;
    }
    // 0x800A90F8: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x800A90FC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800A9100: nop

    // 0x800A9104: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x800A9108: nop

    // 0x800A910C: bc1fl       L_800A911C
    if (!c1cs) {
        // 0x800A9110: div.s       $f8, $f0, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
            goto L_800A911C;
    }
    goto skip_3;
    // 0x800A9110: div.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    skip_3:
    // 0x800A9114: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_800A9118:
    // 0x800A9118: div.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
L_800A911C:
    // 0x800A911C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A9120: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A9124: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x800A9128: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800A912C: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x800A9130: addiu       $t2, $zero, 0xD2
    ctx->r10 = ADD32(0, 0XD2);
    // 0x800A9134: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A9138: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800A913C: addiu       $t5, $zero, 0x85
    ctx->r13 = ADD32(0, 0X85);
    // 0x800A9140: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x800A9144: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x800A9148: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x800A914C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x800A9150: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x800A9154: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800A9158: addiu       $a2, $a2, 0x7430
    ctx->r6 = ADD32(ctx->r6, 0X7430);
    // 0x800A915C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800A9160: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A9164: addiu       $a3, $zero, 0x120
    ctx->r7 = ADD32(0, 0X120);
    // 0x800A9168: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x800A916C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x800A9170: jal         0x800B1BFC
    // 0x800A9174: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800B1BFC(rdram, ctx);
        goto after_0;
    // 0x800A9174: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x800A9178: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800A917C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800A9180: lw          $t7, -0x6A18($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X6A18);
    // 0x800A9184: lw          $t6, -0x6A14($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6A14);
    // 0x800A9188: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800A918C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800A9190: addiu       $at, $zero, 0x2625
    ctx->r1 = ADD32(0, 0X2625);
    // 0x800A9194: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x800A9198: divu        $zero, $t8, $at
    lo = S32(U32(ctx->r24) / U32(ctx->r1)); hi = S32(U32(ctx->r24) % U32(ctx->r1));
    // 0x800A919C: mflo        $t9
    ctx->r25 = lo;
    // 0x800A91A0: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x800A91A4: bgez        $t9, L_800A91BC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800A91A8: cvt.s.w     $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
            goto L_800A91BC;
    }
    // 0x800A91A8: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800A91AC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800A91B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800A91B4: nop

    // 0x800A91B8: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
L_800A91BC:
    // 0x800A91BC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800A91C0: lui         $at, 0x4390
    ctx->r1 = S32(0X4390 << 16);
    // 0x800A91C4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800A91C8: bc1fl       L_800A91D8
    if (!c1cs) {
        // 0x800A91CC: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_800A91D8;
    }
    goto skip_4;
    // 0x800A91CC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_4:
    // 0x800A91D0: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x800A91D4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_800A91D8:
    // 0x800A91D8: nop

    // 0x800A91DC: bc1fl       L_800A91EC
    if (!c1cs) {
        // 0x800A91E0: div.s       $f4, $f2, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
            goto L_800A91EC;
    }
    goto skip_5;
    // 0x800A91E0: div.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    skip_5:
    // 0x800A91E4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x800A91E8: div.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
L_800A91EC:
    // 0x800A91EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A91F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A91F4: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x800A91F8: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800A91FC: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x800A9200: addiu       $t2, $zero, 0xD5
    ctx->r10 = ADD32(0, 0XD5);
    // 0x800A9204: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A9208: addiu       $t4, $zero, 0x85
    ctx->r12 = ADD32(0, 0X85);
    // 0x800A920C: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x800A9210: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x800A9214: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x800A9218: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x800A921C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800A9220: addiu       $a2, $a2, 0x7430
    ctx->r6 = ADD32(ctx->r6, 0X7430);
    // 0x800A9224: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800A9228: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A922C: addiu       $a3, $zero, 0x120
    ctx->r7 = ADD32(0, 0X120);
    // 0x800A9230: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x800A9234: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x800A9238: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x800A923C: jal         0x800B1BFC
    // 0x800A9240: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800B1BFC(rdram, ctx);
        goto after_1;
    // 0x800A9240: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x800A9244: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800A9248: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A924C: lw          $a1, -0x6A0C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6A0C);
    // 0x800A9250: lw          $a0, -0x6A10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6A10);
    // 0x800A9254: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800A9258: jal         0x800B7658
    // 0x800A925C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    __ll_mul_recomp(rdram, ctx);
        goto after_2;
    // 0x800A925C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_2:
    // 0x800A9260: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A9264: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x800A9268: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800A926C: jal         0x800B7558
    // 0x800A9270: addiu       $a3, $zero, 0xBB8
    ctx->r7 = ADD32(0, 0XBB8);
    __ull_div_recomp(rdram, ctx);
        goto after_3;
    // 0x800A9270: addiu       $a3, $zero, 0xBB8
    ctx->r7 = ADD32(0, 0XBB8);
    after_3:
    // 0x800A9274: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A9278: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x800A927C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800A9280: jal         0x800B7558
    // 0x800A9284: addiu       $a3, $zero, 0xD0
    ctx->r7 = ADD32(0, 0XD0);
    __ull_div_recomp(rdram, ctx);
        goto after_4;
    // 0x800A9284: addiu       $a3, $zero, 0xD0
    ctx->r7 = ADD32(0, 0XD0);
    after_4:
    // 0x800A9288: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A928C: jal         0x800BAF68
    // 0x800A9290: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    __ull_to_f_recomp(rdram, ctx);
        goto after_5;
    // 0x800A9290: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    after_5:
    // 0x800A9294: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800A9298: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800A929C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x800A92A0: lui         $at, 0x4390
    ctx->r1 = S32(0X4390 << 16);
    // 0x800A92A4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x800A92A8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800A92AC: bc1fl       L_800A92BC
    if (!c1cs) {
        // 0x800A92B0: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_800A92BC;
    }
    goto skip_6;
    // 0x800A92B0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_6:
    // 0x800A92B4: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x800A92B8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_800A92BC:
    // 0x800A92BC: nop

    // 0x800A92C0: bc1fl       L_800A92D0
    if (!c1cs) {
        // 0x800A92C4: div.s       $f8, $f2, $f0
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
            goto L_800A92D0;
    }
    goto skip_7;
    // 0x800A92C4: div.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    skip_7:
    // 0x800A92C8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x800A92CC: div.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
L_800A92D0:
    // 0x800A92D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A92D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A92D8: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x800A92DC: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800A92E0: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x800A92E4: addiu       $t7, $zero, 0xD8
    ctx->r15 = ADD32(0, 0XD8);
    // 0x800A92E8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800A92EC: addiu       $t9, $zero, 0x85
    ctx->r25 = ADD32(0, 0X85);
    // 0x800A92F0: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x800A92F4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x800A92F8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x800A92FC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800A9300: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800A9304: addiu       $a2, $a2, 0x7430
    ctx->r6 = ADD32(ctx->r6, 0X7430);
    // 0x800A9308: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800A930C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A9310: addiu       $a3, $zero, 0x120
    ctx->r7 = ADD32(0, 0X120);
    // 0x800A9314: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x800A9318: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x800A931C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x800A9320: jal         0x800B1BFC
    // 0x800A9324: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800B1BFC(rdram, ctx);
        goto after_6;
    // 0x800A9324: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x800A9328: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A932C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A9330: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800A9334: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x800A9338: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x800A933C: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x800A9340: addiu       $t2, $zero, 0xDB
    ctx->r10 = ADD32(0, 0XDB);
    // 0x800A9344: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A9348: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800A934C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800A9350: addiu       $t6, $zero, 0x85
    ctx->r14 = ADD32(0, 0X85);
    // 0x800A9354: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x800A9358: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x800A935C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x800A9360: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x800A9364: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x800A9368: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x800A936C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800A9370: addiu       $a2, $a2, 0x6228
    ctx->r6 = ADD32(ctx->r6, 0X6228);
    // 0x800A9374: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800A9378: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A937C: addiu       $a3, $zero, 0x120
    ctx->r7 = ADD32(0, 0X120);
    // 0x800A9380: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x800A9384: jal         0x800B1BFC
    // 0x800A9388: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_800B1BFC(rdram, ctx);
        goto after_7;
    // 0x800A9388: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x800A938C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800A9390: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800A9394: jr          $ra
    // 0x800A9398: nop

    return;
    // 0x800A9398: nop

;}
RECOMP_FUNC void func_800A939C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A939C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A93A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A93A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A93A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800A93AC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800A93B0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800A93B4: jal         0x8007E03C
    // 0x800A93B8: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x800A93B8: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    after_0:
    // 0x800A93BC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800A93C0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800A93C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800A93C8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800A93CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800A93D0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_800A93D4:
    // 0x800A93D4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800A93D8: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x800A93DC: addiu       $t9, $zero, 0x0
    ctx->r25 = ADD32(0, 0X0);
    // 0x800A93E0: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x800A93E4: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x800A93E8: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x800A93EC: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
    // 0x800A93F0: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x800A93F4: addiu       $t5, $zero, 0x0
    ctx->r13 = ADD32(0, 0X0);
    // 0x800A93F8: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    // 0x800A93FC: sh          $zero, -0x10($v1)
    MEM_H(-0X10, ctx->r3) = 0;
    // 0x800A9400: sw          $t9, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r25;
    // 0x800A9404: sw          $t8, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->r24;
    // 0x800A9408: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x800A940C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x800A9410: sh          $zero, 0x28($v1)
    MEM_H(0X28, ctx->r3) = 0;
    // 0x800A9414: sw          $t3, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r11;
    // 0x800A9418: sw          $t2, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r10;
    // 0x800A941C: sw          $t5, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r13;
    // 0x800A9420: bne         $a0, $a1, L_800A93D4
    if (ctx->r4 != ctx->r5) {
        // 0x800A9424: sw          $t4, 0x38($v1)
        MEM_W(0X38, ctx->r3) = ctx->r12;
            goto L_800A93D4;
    }
    // 0x800A9424: sw          $t4, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r12;
    // 0x800A9428: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x800A942C: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x800A9430: sb          $zero, 0x38($v0)
    MEM_B(0X38, ctx->r2) = 0;
    // 0x800A9434: sb          $zero, 0x39($v0)
    MEM_B(0X39, ctx->r2) = 0;
    // 0x800A9438: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x800A943C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800A9440: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A9444: sb          $t7, 0x70($v0)
    MEM_B(0X70, ctx->r2) = ctx->r15;
    // 0x800A9448: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x800A944C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800A9450: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x800A9454: sb          $t6, 0x71($v0)
    MEM_B(0X71, ctx->r2) = ctx->r14;
    // 0x800A9458: lbu         $t8, 0x27($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X27);
    // 0x800A945C: sb          $t8, 0x72($v0)
    MEM_B(0X72, ctx->r2) = ctx->r24;
    // 0x800A9460: lw          $t9, 0x7AF0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7AF0);
    // 0x800A9464: bne         $t9, $zero, L_800A947C
    if (ctx->r25 != 0) {
        // 0x800A9468: nop
    
            goto L_800A947C;
    }
    // 0x800A9468: nop

    // 0x800A946C: sw          $v0, 0x7AF0($at)
    MEM_W(0X7AF0, ctx->r1) = ctx->r2;
    // 0x800A9470: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A9474: b           L_800A948C
    // 0x800A9478: sw          $v0, 0x7AF4($at)
    MEM_W(0X7AF4, ctx->r1) = ctx->r2;
        goto L_800A948C;
    // 0x800A9478: sw          $v0, 0x7AF4($at)
    MEM_W(0X7AF4, ctx->r1) = ctx->r2;
L_800A947C:
    // 0x800A947C: lw          $t0, 0x7AF4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7AF4);
    // 0x800A9480: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A9484: sw          $v0, 0x74($t0)
    MEM_W(0X74, ctx->r8) = ctx->r2;
    // 0x800A9488: sw          $v0, 0x7AF4($at)
    MEM_W(0X7AF4, ctx->r1) = ctx->r2;
L_800A948C:
    // 0x800A948C: lw          $t1, 0x7AF4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7AF4);
    // 0x800A9490: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x800A9494: sw          $zero, 0x74($t1)
    MEM_W(0X74, ctx->r9) = 0;
    // 0x800A9498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A949C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A94A0: jr          $ra
    // 0x800A94A4: nop

    return;
    // 0x800A94A4: nop

;}
RECOMP_FUNC void func_800A94A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A94A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A94AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A94B0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A94B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A94B8: bnel        $t6, $at, L_800A950C
    if (ctx->r14 != ctx->r1) {
        // 0x800A94BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A950C;
    }
    goto skip_0;
    // 0x800A94BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A94C0: jal         0x800B6540
    // 0x800A94C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    osGetCount_recomp(rdram, ctx);
        goto after_0;
    // 0x800A94C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A94C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A94CC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x800A94D0: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x800A94D4: lbu         $t7, 0x4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4);
    // 0x800A94D8: multu       $t7, $a1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A94DC: mflo        $t0
    ctx->r8 = lo;
    // 0x800A94E0: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x800A94E4: sw          $t8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r24;
    // 0x800A94E8: sw          $v0, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r2;
    // 0x800A94EC: lbu         $t2, 0x4($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X4);
    // 0x800A94F0: multu       $t2, $a1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A94F4: mflo        $t3
    ctx->r11 = lo;
    // 0x800A94F8: addu        $v1, $a0, $t3
    ctx->r3 = ADD32(ctx->r4, ctx->r11);
    // 0x800A94FC: lhu         $t4, 0x8($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X8);
    // 0x800A9500: ori         $t5, $t4, 0x1
    ctx->r13 = ctx->r12 | 0X1;
    // 0x800A9504: sh          $t5, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r13;
    // 0x800A9508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A950C:
    // 0x800A950C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A9510: jr          $ra
    // 0x800A9514: nop

    return;
    // 0x800A9514: nop

;}
RECOMP_FUNC void func_800A9518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9518: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A951C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9520: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A9524: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A9528: bnel        $t6, $at, L_800A9580
    if (ctx->r14 != ctx->r1) {
        // 0x800A952C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A9580;
    }
    goto skip_0;
    // 0x800A952C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A9530: jal         0x800B6540
    // 0x800A9534: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    osGetCount_recomp(rdram, ctx);
        goto after_0;
    // 0x800A9534: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A9538: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A953C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x800A9540: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x800A9544: lbu         $t7, 0x4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4);
    // 0x800A9548: multu       $t7, $a1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A954C: mflo        $t0
    ctx->r8 = lo;
    // 0x800A9550: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x800A9554: sw          $t8, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->r24;
    // 0x800A9558: sw          $v0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->r2;
    // 0x800A955C: lbu         $t2, 0x4($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X4);
    // 0x800A9560: multu       $t2, $a1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A9564: mflo        $t3
    ctx->r11 = lo;
    // 0x800A9568: addu        $v1, $a0, $t3
    ctx->r3 = ADD32(ctx->r4, ctx->r11);
    // 0x800A956C: lhu         $t4, 0x8($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X8);
    // 0x800A9570: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x800A9574: jal         0x800A9854
    // 0x800A9578: sh          $t5, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r13;
    func_800A9854(rdram, ctx);
        goto after_1;
    // 0x800A9578: sh          $t5, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r13;
    after_1:
    // 0x800A957C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A9580:
    // 0x800A9580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A9584: jr          $ra
    // 0x800A9588: nop

    return;
    // 0x800A9588: nop

;}
RECOMP_FUNC void func_800A958C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A958C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A9590: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9594: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A9598: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A959C: bnel        $t6, $at, L_800A95EC
    if (ctx->r14 != ctx->r1) {
        // 0x800A95A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A95EC;
    }
    goto skip_0;
    // 0x800A95A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A95A4: jal         0x800B6550
    // 0x800A95A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    osGetTime_recomp(rdram, ctx);
        goto after_0;
    // 0x800A95A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A95AC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800A95B0: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x800A95B4: lbu         $t7, 0x4($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X4);
    // 0x800A95B8: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A95BC: mflo        $t8
    ctx->r24 = lo;
    // 0x800A95C0: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x800A95C4: sw          $v0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r2;
    // 0x800A95C8: sw          $v1, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r3;
    // 0x800A95CC: lbu         $t0, 0x4($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X4);
    // 0x800A95D0: multu       $t0, $a2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A95D4: mflo        $t1
    ctx->r9 = lo;
    // 0x800A95D8: addu        $a0, $a1, $t1
    ctx->r4 = ADD32(ctx->r5, ctx->r9);
    // 0x800A95DC: lhu         $t2, 0x8($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X8);
    // 0x800A95E0: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x800A95E4: sh          $t3, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r11;
    // 0x800A95E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A95EC:
    // 0x800A95EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A95F0: jr          $ra
    // 0x800A95F4: nop

    return;
    // 0x800A95F4: nop

;}
RECOMP_FUNC void func_800A95F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A95F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A95FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9600: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A9604: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A9608: bnel        $t6, $at, L_800A965C
    if (ctx->r14 != ctx->r1) {
        // 0x800A960C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A965C;
    }
    goto skip_0;
    // 0x800A960C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A9610: jal         0x800B6550
    // 0x800A9614: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    osGetTime_recomp(rdram, ctx);
        goto after_0;
    // 0x800A9614: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A9618: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A961C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x800A9620: lbu         $t7, 0x4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4);
    // 0x800A9624: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A9628: mflo        $t8
    ctx->r24 = lo;
    // 0x800A962C: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x800A9630: sw          $v0, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->r2;
    // 0x800A9634: sw          $v1, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->r3;
    // 0x800A9638: lbu         $t0, 0x4($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X4);
    // 0x800A963C: multu       $t0, $a2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A9640: mflo        $t1
    ctx->r9 = lo;
    // 0x800A9644: addu        $a1, $a0, $t1
    ctx->r5 = ADD32(ctx->r4, ctx->r9);
    // 0x800A9648: lhu         $t2, 0x8($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X8);
    // 0x800A964C: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x800A9650: jal         0x800A9854
    // 0x800A9654: sh          $t3, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r11;
    func_800A9854(rdram, ctx);
        goto after_1;
    // 0x800A9654: sh          $t3, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r11;
    after_1:
    // 0x800A9658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A965C:
    // 0x800A965C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A9660: jr          $ra
    // 0x800A9664: nop

    return;
    // 0x800A9664: nop

;}
RECOMP_FUNC void func_800A9668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9668: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A966C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9670: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800A9674: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800A9678: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A967C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A9680: bnel        $t6, $at, L_800A96E8
    if (ctx->r14 != ctx->r1) {
        // 0x800A9684: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A96E8;
    }
    goto skip_0;
    // 0x800A9684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A9688: lbu         $t7, 0x4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4);
    // 0x800A968C: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x800A9690: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A9694: mflo        $t0
    ctx->r8 = lo;
    // 0x800A9698: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x800A969C: sw          $a2, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r6;
    // 0x800A96A0: sw          $a3, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r7;
    // 0x800A96A4: lbu         $t4, 0x4($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X4);
    // 0x800A96A8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800A96AC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800A96B0: multu       $t4, $v1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A96B4: mflo        $t5
    ctx->r13 = lo;
    // 0x800A96B8: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x800A96BC: sw          $t3, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->r11;
    // 0x800A96C0: sw          $t2, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->r10;
    // 0x800A96C4: lbu         $t7, 0x4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4);
    // 0x800A96C8: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A96CC: mflo        $t0
    ctx->r8 = lo;
    // 0x800A96D0: addu        $v0, $a0, $t0
    ctx->r2 = ADD32(ctx->r4, ctx->r8);
    // 0x800A96D4: lhu         $t8, 0x8($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X8);
    // 0x800A96D8: ori         $t9, $t8, 0x3
    ctx->r25 = ctx->r24 | 0X3;
    // 0x800A96DC: jal         0x800A9854
    // 0x800A96E0: sh          $t9, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r25;
    func_800A9854(rdram, ctx);
        goto after_0;
    // 0x800A96E0: sh          $t9, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r25;
    after_0:
    // 0x800A96E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A96E8:
    // 0x800A96E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A96EC: jr          $ra
    // 0x800A96F0: nop

    return;
    // 0x800A96F0: nop

;}
RECOMP_FUNC void func_800A96F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A96F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A96F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A96FC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A9700: bnel        $t6, $zero, L_800A974C
    if (ctx->r14 != 0) {
        // 0x800A9704: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800A974C;
    }
    goto skip_0;
    // 0x800A9704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800A9708: lbu         $t7, 0x4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4);
    // 0x800A970C: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x800A9710: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x800A9714: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A9718: mflo        $t0
    ctx->r8 = lo;
    // 0x800A971C: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x800A9720: sw          $t8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r24;
    // 0x800A9724: sw          $a1, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r5;
    // 0x800A9728: lbu         $t2, 0x4($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X4);
    // 0x800A972C: multu       $t2, $v1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A9730: mflo        $t3
    ctx->r11 = lo;
    // 0x800A9734: addu        $v0, $a0, $t3
    ctx->r2 = ADD32(ctx->r4, ctx->r11);
    // 0x800A9738: lhu         $t4, 0x8($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X8);
    // 0x800A973C: ori         $t5, $t4, 0x3
    ctx->r13 = ctx->r12 | 0X3;
    // 0x800A9740: jal         0x800A9854
    // 0x800A9744: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
    func_800A9854(rdram, ctx);
        goto after_0;
    // 0x800A9744: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
    after_0:
    // 0x800A9748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A974C:
    // 0x800A974C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A9750: jr          $ra
    // 0x800A9754: nop

    return;
    // 0x800A9754: nop

;}
RECOMP_FUNC void func_800A9758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9758: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A975C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A9760: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x800A9764: lw          $s0, 0x7AF0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X7AF0);
    // 0x800A9768: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A976C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800A9770: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800A9774: beq         $s0, $zero, L_800A9838
    if (ctx->r16 == 0) {
        // 0x800A9778: sw          $s1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r17;
            goto L_800A9838;
    }
    // 0x800A9778: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A977C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x800A9780: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x800A9784: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
    // 0x800A9788: lbu         $t6, 0x5($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X5);
L_800A978C:
    // 0x800A978C: multu       $t6, $s1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A9790: mflo        $t7
    ctx->r15 = lo;
    // 0x800A9794: addu        $v0, $s0, $t7
    ctx->r2 = ADD32(ctx->r16, ctx->r15);
    // 0x800A9798: lhu         $t8, 0x8($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X8);
    // 0x800A979C: bnel        $s2, $t8, L_800A9830
    if (ctx->r18 != ctx->r24) {
        // 0x800A97A0: lw          $s0, 0x74($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X74);
            goto L_800A9830;
    }
    goto skip_0;
    // 0x800A97A0: lw          $s0, 0x74($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X74);
    skip_0:
    // 0x800A97A4: lbu         $t9, 0x38($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X38);
    // 0x800A97A8: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x800A97AC: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x800A97B0: multu       $t9, $s1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A97B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A97B8: mflo        $t2
    ctx->r10 = lo;
    // 0x800A97BC: addu        $t3, $s0, $t2
    ctx->r11 = ADD32(ctx->r16, ctx->r10);
    // 0x800A97C0: sw          $t0, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->r8;
    // 0x800A97C4: sw          $t1, 0x4C($t3)
    MEM_W(0X4C, ctx->r11) = ctx->r9;
    // 0x800A97C8: lbu         $t4, 0x5($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X5);
    // 0x800A97CC: lbu         $t7, 0x38($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X38);
    // 0x800A97D0: multu       $t4, $s1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A97D4: mflo        $t5
    ctx->r13 = lo;
    // 0x800A97D8: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x800A97DC: lw          $t8, 0x18($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X18);
    // 0x800A97E0: multu       $t7, $s1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A97E4: lw          $t9, 0x1C($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X1C);
    // 0x800A97E8: mflo        $t2
    ctx->r10 = lo;
    // 0x800A97EC: addu        $t0, $s0, $t2
    ctx->r8 = ADD32(ctx->r16, ctx->r10);
    // 0x800A97F0: sw          $t8, 0x50($t0)
    MEM_W(0X50, ctx->r8) = ctx->r24;
    // 0x800A97F4: sw          $t9, 0x54($t0)
    MEM_W(0X54, ctx->r8) = ctx->r25;
    // 0x800A97F8: lbu         $t1, 0x5($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X5);
    // 0x800A97FC: multu       $t1, $s1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A9800: mflo        $t3
    ctx->r11 = lo;
    // 0x800A9804: addu        $t4, $s0, $t3
    ctx->r12 = ADD32(ctx->r16, ctx->r11);
    // 0x800A9808: sh          $zero, 0x8($t4)
    MEM_H(0X8, ctx->r12) = 0;
    // 0x800A980C: lbu         $t5, 0x38($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X38);
    // 0x800A9810: multu       $t5, $s1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A9814: mflo        $t6
    ctx->r14 = lo;
    // 0x800A9818: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x800A981C: jal         0x800A9878
    // 0x800A9820: sh          $s3, 0x40($t7)
    MEM_H(0X40, ctx->r15) = ctx->r19;
    func_800A9878(rdram, ctx);
        goto after_0;
    // 0x800A9820: sh          $s3, 0x40($t7)
    MEM_H(0X40, ctx->r15) = ctx->r19;
    after_0:
    // 0x800A9824: jal         0x800A989C
    // 0x800A9828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A989C(rdram, ctx);
        goto after_1;
    // 0x800A9828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800A982C: lw          $s0, 0x74($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X74);
L_800A9830:
    // 0x800A9830: bnel        $s0, $zero, L_800A978C
    if (ctx->r16 != 0) {
        // 0x800A9834: lbu         $t6, 0x5($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X5);
            goto L_800A978C;
    }
    goto skip_1;
    // 0x800A9834: lbu         $t6, 0x5($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X5);
    skip_1:
L_800A9838:
    // 0x800A9838: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A983C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A9840: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A9844: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800A9848: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800A984C: jr          $ra
    // 0x800A9850: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A9850: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A9854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9854: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
    // 0x800A9858: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A985C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800A9860: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x800A9864: bne         $t8, $at, L_800A9870
    if (ctx->r24 != ctx->r1) {
        // 0x800A9868: sb          $t7, 0x4($a0)
        MEM_B(0X4, ctx->r4) = ctx->r15;
            goto L_800A9870;
    }
    // 0x800A9868: sb          $t7, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r15;
    // 0x800A986C: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
L_800A9870:
    // 0x800A9870: jr          $ra
    // 0x800A9874: nop

    return;
    // 0x800A9874: nop

;}
RECOMP_FUNC void func_800A9878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9878: lbu         $t6, 0x5($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5);
    // 0x800A987C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A9880: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800A9884: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x800A9888: bne         $t8, $at, L_800A9894
    if (ctx->r24 != ctx->r1) {
        // 0x800A988C: sb          $t7, 0x5($a0)
        MEM_B(0X5, ctx->r4) = ctx->r15;
            goto L_800A9894;
    }
    // 0x800A988C: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x800A9890: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
L_800A9894:
    // 0x800A9894: jr          $ra
    // 0x800A9898: nop

    return;
    // 0x800A9898: nop

;}
RECOMP_FUNC void func_800A989C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A989C: lbu         $t6, 0x38($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X38);
    // 0x800A98A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A98A4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800A98A8: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x800A98AC: bne         $t8, $at, L_800A98B8
    if (ctx->r24 != ctx->r1) {
        // 0x800A98B0: sb          $t7, 0x38($a0)
        MEM_B(0X38, ctx->r4) = ctx->r15;
            goto L_800A98B8;
    }
    // 0x800A98B0: sb          $t7, 0x38($a0)
    MEM_B(0X38, ctx->r4) = ctx->r15;
    // 0x800A98B4: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
L_800A98B8:
    // 0x800A98B8: jr          $ra
    // 0x800A98BC: nop

    return;
    // 0x800A98BC: nop

;}
RECOMP_FUNC void func_800A98C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A98C0: lbu         $t6, 0x39($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X39);
    // 0x800A98C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A98C8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800A98CC: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x800A98D0: bne         $t8, $at, L_800A98DC
    if (ctx->r24 != ctx->r1) {
        // 0x800A98D4: sb          $t7, 0x39($a0)
        MEM_B(0X39, ctx->r4) = ctx->r15;
            goto L_800A98DC;
    }
    // 0x800A98D4: sb          $t7, 0x39($a0)
    MEM_B(0X39, ctx->r4) = ctx->r15;
    // 0x800A98D8: sb          $zero, 0x39($a0)
    MEM_B(0X39, ctx->r4) = 0;
L_800A98DC:
    // 0x800A98DC: jr          $ra
    // 0x800A98E0: nop

    return;
    // 0x800A98E0: nop

;}
RECOMP_FUNC void func_800A98E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A98E4: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x800A98E8: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x800A98EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A98F0: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x800A98F4: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x800A98F8: sw          $a0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r4;
    // 0x800A98FC: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x800A9900: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x800A9904: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x800A9908: addiu       $t8, $zero, 0xDC
    ctx->r24 = ADD32(0, 0XDC);
    // 0x800A990C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A9910: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800A9914: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A9918: addiu       $t2, $zero, 0x85
    ctx->r10 = ADD32(0, 0X85);
    // 0x800A991C: sw          $s5, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r21;
    // 0x800A9920: sw          $s4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r20;
    // 0x800A9924: sw          $s3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r19;
    // 0x800A9928: sw          $s2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r18;
    // 0x800A992C: sw          $s1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r17;
    // 0x800A9930: sw          $s0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r16;
    // 0x800A9934: sdc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X60, ctx->r29);
    // 0x800A9938: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x800A993C: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x800A9940: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x800A9944: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x800A9948: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x800A994C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x800A9950: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x800A9954: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A9958: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x800A995C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800A9960: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A9964: addiu       $a2, $a2, 0x6228
    ctx->r6 = ADD32(ctx->r6, 0X6228);
    // 0x800A9968: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x800A996C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A9970: addiu       $a3, $zero, 0x120
    ctx->r7 = ADD32(0, 0X120);
    // 0x800A9974: swc1        $f28, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f28.u32l;
    // 0x800A9978: jal         0x800B1BFC
    // 0x800A997C: swc1        $f28, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f28.u32l;
    func_800B1BFC(rdram, ctx);
        goto after_0;
    // 0x800A997C: swc1        $f28, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f28.u32l;
    after_0:
    // 0x800A9980: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800A9984: lw          $v1, 0x7AF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7AF0);
    // 0x800A9988: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x800A998C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x800A9990: addiu       $s2, $zero, 0xD9
    ctx->r18 = ADD32(0, 0XD9);
    // 0x800A9994: sw          $t5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r13;
    // 0x800A9998: sw          $t4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r12;
    // 0x800A999C: beq         $v1, $zero, L_800A9A2C
    if (ctx->r3 == 0) {
        // 0x800A99A0: or          $s1, $v1, $zero
        ctx->r17 = ctx->r3 | 0;
            goto L_800A9A2C;
    }
    // 0x800A99A0: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x800A99A4: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x800A99A8: addiu       $s3, $zero, 0x18
    ctx->r19 = ADD32(0, 0X18);
    // 0x800A99AC: lbu         $v0, 0x39($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X39);
L_800A99B0:
    // 0x800A99B0: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A99B4: mflo        $t3
    ctx->r11 = lo;
    // 0x800A99B8: addu        $s0, $s1, $t3
    ctx->r16 = ADD32(ctx->r17, ctx->r11);
    // 0x800A99BC: lhu         $t6, 0x40($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X40);
    // 0x800A99C0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800A99C4: beql        $t7, $zero, L_800A9A20
    if (ctx->r15 == 0) {
        // 0x800A99C8: lw          $s1, 0x74($s1)
        ctx->r17 = MEM_W(ctx->r17, 0X74);
            goto L_800A9A20;
    }
    goto skip_0;
    // 0x800A99C8: lw          $s1, 0x74($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X74);
    skip_0:
    // 0x800A99CC: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x800A99D0: bnel        $s4, $t8, L_800A9A20
    if (ctx->r20 != ctx->r24) {
        // 0x800A99D4: lw          $s1, 0x74($s1)
        ctx->r17 = MEM_W(ctx->r17, 0X74);
            goto L_800A9A20;
    }
    goto skip_1;
    // 0x800A99D4: lw          $s1, 0x74($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X74);
    skip_1:
    // 0x800A99D8: lw          $t0, 0x48($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X48);
    // 0x800A99DC: lw          $t4, 0xC0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC0);
    // 0x800A99E0: lw          $t1, 0x4C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4C);
    // 0x800A99E4: lw          $t5, 0xC4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC4);
    // 0x800A99E8: sltu        $at, $t4, $t0
    ctx->r1 = ctx->r12 < ctx->r8 ? 1 : 0;
    // 0x800A99EC: sw          $t0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r8;
    // 0x800A99F0: or          $t2, $t0, $zero
    ctx->r10 = ctx->r8 | 0;
    // 0x800A99F4: sw          $t1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r9;
    // 0x800A99F8: bne         $at, $zero, L_800A9A1C
    if (ctx->r1 != 0) {
        // 0x800A99FC: or          $t3, $t1, $zero
        ctx->r11 = ctx->r9 | 0;
            goto L_800A9A1C;
    }
    // 0x800A99FC: or          $t3, $t1, $zero
    ctx->r11 = ctx->r9 | 0;
    // 0x800A9A00: sltu        $at, $t0, $t4
    ctx->r1 = ctx->r8 < ctx->r12 ? 1 : 0;
    // 0x800A9A04: bne         $at, $zero, L_800A9A14
    if (ctx->r1 != 0) {
        // 0x800A9A08: sltu        $at, $t1, $t5
        ctx->r1 = ctx->r9 < ctx->r13 ? 1 : 0;
            goto L_800A9A14;
    }
    // 0x800A9A08: sltu        $at, $t1, $t5
    ctx->r1 = ctx->r9 < ctx->r13 ? 1 : 0;
    // 0x800A9A0C: beql        $at, $zero, L_800A9A20
    if (ctx->r1 == 0) {
        // 0x800A9A10: lw          $s1, 0x74($s1)
        ctx->r17 = MEM_W(ctx->r17, 0X74);
            goto L_800A9A20;
    }
    goto skip_2;
    // 0x800A9A10: lw          $s1, 0x74($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X74);
    skip_2:
L_800A9A14:
    // 0x800A9A14: sw          $t2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r10;
    // 0x800A9A18: sw          $t3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r11;
L_800A9A1C:
    // 0x800A9A1C: lw          $s1, 0x74($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X74);
L_800A9A20:
    // 0x800A9A20: bnel        $s1, $zero, L_800A99B0
    if (ctx->r17 != 0) {
        // 0x800A9A24: lbu         $v0, 0x39($s1)
        ctx->r2 = MEM_BU(ctx->r17, 0X39);
            goto L_800A99B0;
    }
    goto skip_3;
    // 0x800A9A24: lbu         $v0, 0x39($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X39);
    skip_3:
    // 0x800A9A28: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
L_800A9A2C:
    // 0x800A9A2C: addiu       $s3, $zero, 0x18
    ctx->r19 = ADD32(0, 0X18);
    // 0x800A9A30: beq         $s1, $zero, L_800A9D08
    if (ctx->r17 == 0) {
        // 0x800A9A34: addiu       $s4, $zero, 0x2
        ctx->r20 = ADD32(0, 0X2);
            goto L_800A9D08;
    }
    // 0x800A9A34: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x800A9A38: beq         $s2, $zero, L_800A9D08
    if (ctx->r18 == 0) {
        // 0x800A9A3C: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_800A9D08;
    }
    // 0x800A9A3C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A9A40: ldc1        $f30, 0xA60($at)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r1, 0XA60);
    // 0x800A9A44: lui         $at, 0x4390
    ctx->r1 = S32(0X4390 << 16);
    // 0x800A9A48: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x800A9A4C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A9A50: ldc1        $f24, 0xA68($at)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r1, 0XA68);
    // 0x800A9A54: lwc1        $f22, 0xB8($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x800A9A58: lwc1        $f20, 0xBC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x800A9A5C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x800A9A60: lbu         $v0, 0x39($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X39);
L_800A9A64:
    // 0x800A9A64: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A9A68: mflo        $t9
    ctx->r25 = lo;
    // 0x800A9A6C: addu        $s0, $s1, $t9
    ctx->r16 = ADD32(ctx->r17, ctx->r25);
    // 0x800A9A70: lhu         $t6, 0x40($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X40);
    // 0x800A9A74: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800A9A78: beql        $t7, $zero, L_800A9CF0
    if (ctx->r15 == 0) {
        // 0x800A9A7C: lw          $s1, 0x74($s1)
        ctx->r17 = MEM_W(ctx->r17, 0X74);
            goto L_800A9CF0;
    }
    goto skip_4;
    // 0x800A9A7C: lw          $s1, 0x74($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X74);
    skip_4:
    // 0x800A9A80: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800A9A84: beql        $v0, $zero, L_800A9AA8
    if (ctx->r2 == 0) {
        // 0x800A9A88: lw          $a0, 0x48($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X48);
            goto L_800A9AA8;
    }
    goto skip_5;
    // 0x800A9A88: lw          $a0, 0x48($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X48);
    skip_5:
    // 0x800A9A8C: beql        $v0, $s5, L_800A9AD0
    if (ctx->r2 == ctx->r21) {
        // 0x800A9A90: lw          $t8, 0x50($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X50);
            goto L_800A9AD0;
    }
    goto skip_6;
    // 0x800A9A90: lw          $t8, 0x50($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X50);
    skip_6:
    // 0x800A9A94: beq         $v0, $s4, L_800A9B24
    if (ctx->r2 == ctx->r20) {
        // 0x800A9A98: addiu       $a2, $zero, 0x0
        ctx->r6 = ADD32(0, 0X0);
            goto L_800A9B24;
    }
    // 0x800A9A98: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800A9A9C: b           L_800A9BDC
    // 0x800A9AA0: c.lt.s      $f26, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f26.fl < ctx->f20.fl;
        goto L_800A9BDC;
    // 0x800A9AA0: c.lt.s      $f26, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f26.fl < ctx->f20.fl;
    // 0x800A9AA4: lw          $a0, 0x48($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X48);
L_800A9AA8:
    // 0x800A9AA8: jal         0x800BAF34
    // 0x800A9AAC: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    __ull_to_d_recomp(rdram, ctx);
        goto after_1;
    // 0x800A9AAC: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    after_1:
    // 0x800A9AB0: lui         $at, 0x4050
    ctx->r1 = S32(0X4050 << 16);
    // 0x800A9AB4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x800A9AB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A9ABC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x800A9AC0: mul.d       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x800A9AC4: b           L_800A9BD8
    // 0x800A9AC8: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
        goto L_800A9BD8;
    // 0x800A9AC8: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
    // 0x800A9ACC: lw          $t8, 0x50($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X50);
L_800A9AD0:
    // 0x800A9AD0: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x800A9AD4: lw          $t0, 0x48($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X48);
    // 0x800A9AD8: lw          $t1, 0x4C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4C);
    // 0x800A9ADC: subu        $t4, $t8, $t0
    ctx->r12 = SUB32(ctx->r24, ctx->r8);
    // 0x800A9AE0: sltu        $at, $t9, $t1
    ctx->r1 = ctx->r25 < ctx->r9 ? 1 : 0;
    // 0x800A9AE4: subu        $a0, $t4, $at
    ctx->r4 = SUB32(ctx->r12, ctx->r1);
    // 0x800A9AE8: subu        $a1, $t9, $t1
    ctx->r5 = SUB32(ctx->r25, ctx->r9);
    // 0x800A9AEC: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x800A9AF0: jal         0x800BAF68
    // 0x800A9AF4: sw          $a0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r4;
    __ull_to_f_recomp(rdram, ctx);
        goto after_2;
    // 0x800A9AF4: sw          $a0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r4;
    after_2:
    // 0x800A9AF8: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x800A9AFC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A9B00: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800A9B04: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A9B08: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800A9B0C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x800A9B10: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800A9B14: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800A9B18: div.d       $f6, $f4, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f30.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f30.d);
    // 0x800A9B1C: b           L_800A9BD8
    // 0x800A9B20: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
        goto L_800A9BD8;
    // 0x800A9B20: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
L_800A9B24:
    // 0x800A9B24: lw          $t2, 0x50($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X50);
    // 0x800A9B28: lw          $t3, 0x54($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X54);
    // 0x800A9B2C: lw          $t6, 0x48($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X48);
    // 0x800A9B30: lw          $t7, 0x4C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4C);
    // 0x800A9B34: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x800A9B38: subu        $t8, $t2, $t6
    ctx->r24 = SUB32(ctx->r10, ctx->r14);
    // 0x800A9B3C: sltu        $at, $t3, $t7
    ctx->r1 = ctx->r11 < ctx->r15 ? 1 : 0;
    // 0x800A9B40: subu        $a0, $t8, $at
    ctx->r4 = SUB32(ctx->r24, ctx->r1);
    // 0x800A9B44: subu        $a1, $t3, $t7
    ctx->r5 = SUB32(ctx->r11, ctx->r15);
    // 0x800A9B48: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x800A9B4C: jal         0x800B7658
    // 0x800A9B50: sw          $a0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r4;
    __ll_mul_recomp(rdram, ctx);
        goto after_3;
    // 0x800A9B50: sw          $a0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r4;
    after_3:
    // 0x800A9B54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A9B58: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x800A9B5C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800A9B60: jal         0x800B7558
    // 0x800A9B64: addiu       $a3, $zero, 0xBB8
    ctx->r7 = ADD32(0, 0XBB8);
    __ull_div_recomp(rdram, ctx);
        goto after_4;
    // 0x800A9B64: addiu       $a3, $zero, 0xBB8
    ctx->r7 = ADD32(0, 0XBB8);
    after_4:
    // 0x800A9B68: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A9B6C: jal         0x800BAF34
    // 0x800A9B70: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    __ull_to_d_recomp(rdram, ctx);
        goto after_5;
    // 0x800A9B70: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    after_5:
    // 0x800A9B74: mul.d       $f8, $f0, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f24.d);
    // 0x800A9B78: lw          $t0, 0x48($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X48);
    // 0x800A9B7C: lw          $t1, 0x4C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4C);
    // 0x800A9B80: lw          $t4, 0xC0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC0);
    // 0x800A9B84: lw          $t5, 0xC4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC4);
    // 0x800A9B88: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800A9B8C: subu        $t2, $t0, $t4
    ctx->r10 = SUB32(ctx->r8, ctx->r12);
    // 0x800A9B90: sltu        $at, $t1, $t5
    ctx->r1 = ctx->r9 < ctx->r13 ? 1 : 0;
    // 0x800A9B94: subu        $a0, $t2, $at
    ctx->r4 = SUB32(ctx->r10, ctx->r1);
    // 0x800A9B98: subu        $a1, $t1, $t5
    ctx->r5 = SUB32(ctx->r9, ctx->r13);
    // 0x800A9B9C: cvt.s.d     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f20.fl = CVT_S_D(ctx->f8.d);
    // 0x800A9BA0: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x800A9BA4: sw          $a0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r4;
    // 0x800A9BA8: jal         0x800B7658
    // 0x800A9BAC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    __ll_mul_recomp(rdram, ctx);
        goto after_6;
    // 0x800A9BAC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_6:
    // 0x800A9BB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A9BB4: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x800A9BB8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800A9BBC: jal         0x800B7558
    // 0x800A9BC0: addiu       $a3, $zero, 0xBB8
    ctx->r7 = ADD32(0, 0XBB8);
    __ull_div_recomp(rdram, ctx);
        goto after_7;
    // 0x800A9BC0: addiu       $a3, $zero, 0xBB8
    ctx->r7 = ADD32(0, 0XBB8);
    after_7:
    // 0x800A9BC4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A9BC8: jal         0x800BAF34
    // 0x800A9BCC: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    __ull_to_d_recomp(rdram, ctx);
        goto after_8;
    // 0x800A9BCC: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    after_8:
    // 0x800A9BD0: mul.d       $f10, $f0, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f24.d);
    // 0x800A9BD4: cvt.s.d     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f22.fl = CVT_S_D(ctx->f10.d);
L_800A9BD8:
    // 0x800A9BD8: c.lt.s      $f26, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f26.fl < ctx->f20.fl;
L_800A9BDC:
    // 0x800A9BDC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x800A9BE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A9BE4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800A9BE8: bc1f        L_800A9BF8
    if (!c1cs) {
        // 0x800A9BEC: add.s       $f22, $f22, $f16
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f16.fl;
            goto L_800A9BF8;
    }
    // 0x800A9BEC: add.s       $f22, $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f16.fl;
    // 0x800A9BF0: b           L_800A9C0C
    // 0x800A9BF4: mov.s       $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    ctx->f20.fl = ctx->f26.fl;
        goto L_800A9C0C;
    // 0x800A9BF4: mov.s       $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    ctx->f20.fl = ctx->f26.fl;
L_800A9BF8:
    // 0x800A9BF8: c.lt.s      $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f20.fl < ctx->f28.fl;
    // 0x800A9BFC: nop

    // 0x800A9C00: bc1fl       L_800A9C10
    if (!c1cs) {
        // 0x800A9C04: div.s       $f18, $f20, $f26
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = DIV_S(ctx->f20.fl, ctx->f26.fl);
            goto L_800A9C10;
    }
    goto skip_7;
    // 0x800A9C04: div.s       $f18, $f20, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = DIV_S(ctx->f20.fl, ctx->f26.fl);
    skip_7:
    // 0x800A9C08: mov.s       $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    ctx->f20.fl = ctx->f28.fl;
L_800A9C0C:
    // 0x800A9C0C: div.s       $f18, $f20, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = DIV_S(ctx->f20.fl, ctx->f26.fl);
L_800A9C10:
    // 0x800A9C10: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800A9C14: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x800A9C18: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800A9C1C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A9C20: addiu       $a2, $a2, 0x7430
    ctx->r6 = ADD32(ctx->r6, 0X7430);
    // 0x800A9C24: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x800A9C28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A9C2C: addiu       $a3, $zero, 0x120
    ctx->r7 = ADD32(0, 0X120);
    // 0x800A9C30: swc1        $f28, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f28.u32l;
    // 0x800A9C34: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800A9C38: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800A9C3C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x800A9C40: cvt.w.s     $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    ctx->f4.u32l = CVT_W_S(ctx->f22.fl);
    // 0x800A9C44: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800A9C48: nop

    // 0x800A9C4C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x800A9C50: beql        $t8, $zero, L_800A9CA0
    if (ctx->r24 == 0) {
        // 0x800A9C54: mfc1        $t8, $f4
        ctx->r24 = (int32_t)ctx->f4.u32l;
            goto L_800A9CA0;
    }
    goto skip_8;
    // 0x800A9C54: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    skip_8:
    // 0x800A9C58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A9C5C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800A9C60: sub.s       $f4, $f22, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f22.fl - ctx->f4.fl;
    // 0x800A9C64: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800A9C68: nop

    // 0x800A9C6C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800A9C70: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800A9C74: nop

    // 0x800A9C78: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x800A9C7C: bne         $t8, $zero, L_800A9C94
    if (ctx->r24 != 0) {
        // 0x800A9C80: nop
    
            goto L_800A9C94;
    }
    // 0x800A9C80: nop

    // 0x800A9C84: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x800A9C88: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800A9C8C: b           L_800A9CAC
    // 0x800A9C90: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_800A9CAC;
    // 0x800A9C90: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_800A9C94:
    // 0x800A9C94: b           L_800A9CAC
    // 0x800A9C98: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_800A9CAC;
    // 0x800A9C98: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800A9C9C: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
L_800A9CA0:
    // 0x800A9CA0: nop

    // 0x800A9CA4: bltz        $t8, L_800A9C94
    if (SIGNED(ctx->r24) < 0) {
        // 0x800A9CA8: nop
    
            goto L_800A9C94;
    }
    // 0x800A9CA8: nop

L_800A9CAC:
    // 0x800A9CAC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800A9CB0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800A9CB4: lbu         $t9, 0x70($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X70);
    // 0x800A9CB8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800A9CBC: addiu       $t4, $zero, 0x85
    ctx->r12 = ADD32(0, 0X85);
    // 0x800A9CC0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A9CC4: lbu         $t0, 0x71($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X71);
    // 0x800A9CC8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x800A9CCC: lbu         $t1, 0x72($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X72);
    // 0x800A9CD0: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x800A9CD4: jal         0x800B1BFC
    // 0x800A9CD8: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    func_800B1BFC(rdram, ctx);
        goto after_9;
    // 0x800A9CD8: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    after_9:
    // 0x800A9CDC: addiu       $s2, $s2, -0x3
    ctx->r18 = ADD32(ctx->r18, -0X3);
    // 0x800A9CE0: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x800A9CE4: jal         0x800A98C0
    // 0x800A9CE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A98C0(rdram, ctx);
        goto after_10;
    // 0x800A9CE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x800A9CEC: lw          $s1, 0x74($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X74);
L_800A9CF0:
    // 0x800A9CF0: beql        $s1, $zero, L_800A9D0C
    if (ctx->r17 == 0) {
        // 0x800A9CF4: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_800A9D0C;
    }
    goto skip_9;
    // 0x800A9CF4: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_9:
    // 0x800A9CF8: bnel        $s2, $zero, L_800A9A64
    if (ctx->r18 != 0) {
        // 0x800A9CFC: lbu         $v0, 0x39($s1)
        ctx->r2 = MEM_BU(ctx->r17, 0X39);
            goto L_800A9A64;
    }
    goto skip_10;
    // 0x800A9CFC: lbu         $v0, 0x39($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X39);
    skip_10:
    // 0x800A9D00: swc1        $f22, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f22.u32l;
    // 0x800A9D04: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
L_800A9D08:
    // 0x800A9D08: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
L_800A9D0C:
    // 0x800A9D0C: lw          $v0, 0xD8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD8);
    // 0x800A9D10: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x800A9D14: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x800A9D18: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x800A9D1C: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x800A9D20: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x800A9D24: ldc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X60);
    // 0x800A9D28: lw          $s0, 0x6C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X6C);
    // 0x800A9D2C: lw          $s1, 0x70($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X70);
    // 0x800A9D30: lw          $s2, 0x74($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X74);
    // 0x800A9D34: lw          $s3, 0x78($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X78);
    // 0x800A9D38: lw          $s4, 0x7C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X7C);
    // 0x800A9D3C: lw          $s5, 0x80($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X80);
    // 0x800A9D40: jr          $ra
    // 0x800A9D44: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x800A9D44: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x800A9D48: nop

    // 0x800A9D4C: nop

;}
RECOMP_FUNC void func_800A9D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9D50: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A9D54: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A9D58: jr          $ra
    // 0x800A9D5C: sw          $t6, 0x7B04($at)
    MEM_W(0X7B04, ctx->r1) = ctx->r14;
    return;
    // 0x800A9D5C: sw          $t6, 0x7B04($at)
    MEM_W(0X7B04, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800A9D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9D60: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A9D64: jr          $ra
    // 0x800A9D68: sw          $zero, 0x7B04($at)
    MEM_W(0X7B04, ctx->r1) = 0;
    return;
    // 0x800A9D68: sw          $zero, 0x7B04($at)
    MEM_W(0X7B04, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800A9D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9D6C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800A9D70: jr          $ra
    // 0x800A9D74: lw          $v0, -0x69F8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X69F8);
    return;
    // 0x800A9D74: lw          $v0, -0x69F8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X69F8);
;}
RECOMP_FUNC void func_800A9D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9D78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A9D7C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A9D80: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800A9D84: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A9D88: addiu       $s1, $sp, 0x24
    ctx->r17 = ADD32(ctx->r29, 0X24);
    // 0x800A9D8C: addiu       $s0, $s0, -0x67B8
    ctx->r16 = ADD32(ctx->r16, -0X67B8);
    // 0x800A9D90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A9D94: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800A9D98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A9D9C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800A9DA0: jal         0x800B3C20
    // 0x800A9DA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x800A9DA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800A9DA8: beq         $v0, $zero, L_800A9DC4
    if (ctx->r2 == 0) {
        // 0x800A9DAC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A9DC4;
    }
    // 0x800A9DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800A9DB0:
    // 0x800A9DB0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800A9DB4: jal         0x800B3C20
    // 0x800A9DB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800A9DB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x800A9DBC: bnel        $v0, $zero, L_800A9DB0
    if (ctx->r2 != 0) {
        // 0x800A9DC0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800A9DB0;
    }
    goto skip_0;
    // 0x800A9DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
L_800A9DC4:
    // 0x800A9DC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A9DC8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A9DCC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A9DD0: jr          $ra
    // 0x800A9DD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A9DD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A9DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9DD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A9DDC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800A9DE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A9DE4: addiu       $t6, $t6, -0x6840
    ctx->r14 = ADD32(ctx->r14, -0X6840);
    // 0x800A9DE8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800A9DEC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x800A9DF0: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x800A9DF4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800A9DF8: addiu       $a2, $a2, -0x6288
    ctx->r6 = ADD32(ctx->r6, -0X6288);
    // 0x800A9DFC: addiu       $a0, $a0, -0x69F0
    ctx->r4 = ADD32(ctx->r4, -0X69F0);
    // 0x800A9E00: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A9E04: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x800A9E08: jal         0x800B6010
    // 0x800A9E0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    osCreateThread_recomp(rdram, ctx);
        goto after_0;
    // 0x800A9E0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800A9E10: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800A9E14: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A9E18: addiu       $a1, $a1, -0x67A0
    ctx->r5 = ADD32(ctx->r5, -0X67A0);
    // 0x800A9E1C: addiu       $a0, $a0, -0x67B8
    ctx->r4 = ADD32(ctx->r4, -0X67B8);
    // 0x800A9E20: jal         0x800B3080
    // 0x800A9E24: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x800A9E24: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    after_1:
    // 0x800A9E28: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800A9E2C: jal         0x800B6160
    // 0x800A9E30: addiu       $a0, $a0, -0x69F0
    ctx->r4 = ADD32(ctx->r4, -0X69F0);
    osStartThread_recomp(rdram, ctx);
        goto after_2;
    // 0x800A9E30: addiu       $a0, $a0, -0x69F0
    ctx->r4 = ADD32(ctx->r4, -0X69F0);
    after_2:
    // 0x800A9E34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A9E38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A9E3C: jr          $ra
    // 0x800A9E40: nop

    return;
    // 0x800A9E40: nop

;}
RECOMP_FUNC void func_800A9E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9E44: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800A9E48: addiu       $v0, $v0, -0x6A00
    ctx->r2 = ADD32(ctx->r2, -0X6A00);
    // 0x800A9E4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A9E50: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x800A9E54: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A9E58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9E5C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800A9E60: sw          $a1, -0x69FC($at)
    MEM_W(-0X69FC, ctx->r1) = ctx->r5;
    // 0x800A9E64: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800A9E68: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800A9E6C: jal         0x800ABFF0
    // 0x800A9E70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_800ABFF0(rdram, ctx);
        goto after_0;
    // 0x800A9E70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x800A9E74: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x800A9E78: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A9E7C: addiu       $a1, $a1, -0x69F8
    ctx->r5 = ADD32(ctx->r5, -0X69F8);
    // 0x800A9E80: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x800A9E84: jal         0x8007E03C
    // 0x800A9E88: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x800A9E88: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    after_1:
    // 0x800A9E8C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A9E90: addiu       $a1, $a1, -0x69F8
    ctx->r5 = ADD32(ctx->r5, -0X69F8);
    // 0x800A9E94: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x800A9E98: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800A9E9C: addiu       $a0, $a0, 0x7B00
    ctx->r4 = ADD32(ctx->r4, 0X7B00);
    // 0x800A9EA0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x800A9EA4: blez        $t7, L_800A9EE0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800A9EA8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800A9EE0;
    }
    // 0x800A9EA8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800A9EAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A9EB0: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
L_800A9EB4:
    // 0x800A9EB4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800A9EB8: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x800A9EBC: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x800A9EC0: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x800A9EC4: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x800A9EC8: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x800A9ECC: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x800A9ED0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800A9ED4: slt         $at, $v1, $t2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800A9ED8: bnel        $at, $zero, L_800A9EB4
    if (ctx->r1 != 0) {
        // 0x800A9EDC: lw          $t8, 0x0($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X0);
            goto L_800A9EB4;
    }
    goto skip_0;
    // 0x800A9EDC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    skip_0:
L_800A9EE0:
    // 0x800A9EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A9EE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A9EE8: jr          $ra
    // 0x800A9EEC: nop

    return;
    // 0x800A9EEC: nop

;}
RECOMP_FUNC void func_800A9EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9EF0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800A9EF4: addiu       $v0, $v0, -0x6A00
    ctx->r2 = ADD32(ctx->r2, -0X6A00);
    // 0x800A9EF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A9EFC: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x800A9F00: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A9F04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9F08: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800A9F0C: sw          $a1, -0x69FC($at)
    MEM_W(-0X69FC, ctx->r1) = ctx->r5;
    // 0x800A9F10: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800A9F14: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800A9F18: jal         0x800ABFF0
    // 0x800A9F1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_800ABFF0(rdram, ctx);
        goto after_0;
    // 0x800A9F1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x800A9F20: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x800A9F24: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A9F28: addiu       $a1, $a1, -0x69F8
    ctx->r5 = ADD32(ctx->r5, -0X69F8);
    // 0x800A9F2C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x800A9F30: jal         0x8007E03C
    // 0x800A9F34: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x800A9F34: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    after_1:
    // 0x800A9F38: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A9F3C: addiu       $a1, $a1, -0x69F8
    ctx->r5 = ADD32(ctx->r5, -0X69F8);
    // 0x800A9F40: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x800A9F44: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800A9F48: addiu       $a0, $a0, 0x7B00
    ctx->r4 = ADD32(ctx->r4, 0X7B00);
    // 0x800A9F4C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x800A9F50: blez        $t7, L_800A9F8C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800A9F54: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800A9F8C;
    }
    // 0x800A9F54: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800A9F58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A9F5C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
L_800A9F60:
    // 0x800A9F60: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800A9F64: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x800A9F68: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x800A9F6C: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x800A9F70: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x800A9F74: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x800A9F78: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x800A9F7C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800A9F80: slt         $at, $v1, $t2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800A9F84: bnel        $at, $zero, L_800A9F60
    if (ctx->r1 != 0) {
        // 0x800A9F88: lw          $t8, 0x0($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X0);
            goto L_800A9F60;
    }
    goto skip_0;
    // 0x800A9F88: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    skip_0:
L_800A9F8C:
    // 0x800A9F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A9F90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A9F94: jr          $ra
    // 0x800A9F98: nop

    return;
    // 0x800A9F98: nop

;}
RECOMP_FUNC void func_800A9F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9F9C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A9FA0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800A9FA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A9FA8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800A9FAC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800A9FB0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800A9FB4: beq         $t6, $zero, L_800A9FD0
    if (ctx->r14 == 0) {
        // 0x800A9FB8: sw          $a3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r7;
            goto L_800A9FD0;
    }
    // 0x800A9FB8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x800A9FBC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A9FC0: beq         $t6, $at, L_800A9FE8
    if (ctx->r14 == ctx->r1) {
        // 0x800A9FC4: nop
    
            goto L_800A9FE8;
    }
    // 0x800A9FC4: nop

    // 0x800A9FC8: b           L_800AA02C
    // 0x800A9FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800AA02C;
    // 0x800A9FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A9FD0:
    // 0x800A9FD0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800A9FD4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800A9FD8: jal         0x800ABFF0
    // 0x800A9FDC: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    func_800ABFF0(rdram, ctx);
        goto after_0;
    // 0x800A9FDC: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_0:
    // 0x800A9FE0: b           L_800AA02C
    // 0x800A9FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800AA02C;
    // 0x800A9FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A9FE8:
    // 0x800A9FE8: jal         0x8007E03C
    // 0x800A9FEC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x800A9FEC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x800A9FF0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800A9FF4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800A9FF8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800A9FFC: jal         0x800ABFF0
    // 0x800AA000: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    func_800ABFF0(rdram, ctx);
        goto after_2;
    // 0x800AA000: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_2:
    // 0x800AA004: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800AA008: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800AA00C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800AA010: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800AA014: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x800AA018: jal         0x80080EC8
    // 0x800AA01C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_80080EC8(rdram, ctx);
        goto after_3;
    // 0x800AA01C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_3:
    // 0x800AA020: jal         0x8007E328
    // 0x800AA024: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8007E328(rdram, ctx);
        goto after_4;
    // 0x800AA024: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x800AA028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800AA02C:
    // 0x800AA02C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800AA030: jr          $ra
    // 0x800AA034: nop

    return;
    // 0x800AA034: nop

;}
RECOMP_FUNC void func_800AA038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA038: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800AA03C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800AA040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA044: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800AA048: lw          $a0, -0x6A00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6A00);
    // 0x800AA04C: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x800AA050: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800AA054: jal         0x800ABFF0
    // 0x800AA058: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_800ABFF0(rdram, ctx);
        goto after_0;
    // 0x800AA058: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x800AA05C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x800AA060: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800AA064: bltz        $a3, L_800AA074
    if (SIGNED(ctx->r7) < 0) {
        // 0x800AA068: slt         $at, $a3, $t6
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r14) ? 1 : 0;
            goto L_800AA074;
    }
    // 0x800AA068: slt         $at, $a3, $t6
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800AA06C: bne         $at, $zero, L_800AA07C
    if (ctx->r1 != 0) {
        // 0x800AA070: sll         $t7, $a3, 4
        ctx->r15 = S32(ctx->r7 << 4);
            goto L_800AA07C;
    }
    // 0x800AA070: sll         $t7, $a3, 4
    ctx->r15 = S32(ctx->r7 << 4);
L_800AA074:
    // 0x800AA074: b           L_800AA09C
    // 0x800AA078: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800AA09C;
    // 0x800AA078: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800AA07C:
    // 0x800AA07C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800AA080: lw          $t8, -0x6A00($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6A00);
    // 0x800AA084: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800AA088: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x800AA08C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x800AA090: jal         0x800ABFF0
    // 0x800AA094: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_800ABFF0(rdram, ctx);
        goto after_1;
    // 0x800AA094: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_1:
    // 0x800AA098: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
L_800AA09C:
    // 0x800AA09C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AA0A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800AA0A4: jr          $ra
    // 0x800AA0A8: nop

    return;
    // 0x800AA0A8: nop

;}
RECOMP_FUNC void func_800AA0AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA0AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800AA0B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800AA0B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA0B8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800AA0BC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800AA0C0: lw          $a0, -0x6A00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6A00);
    // 0x800AA0C4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800AA0C8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800AA0CC: jal         0x800ABFF0
    // 0x800AA0D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_800ABFF0(rdram, ctx);
        goto after_0;
    // 0x800AA0D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x800AA0D4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x800AA0D8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800AA0DC: bltz        $a3, L_800AA0EC
    if (SIGNED(ctx->r7) < 0) {
        // 0x800AA0E0: slt         $at, $a3, $t6
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r14) ? 1 : 0;
            goto L_800AA0EC;
    }
    // 0x800AA0E0: slt         $at, $a3, $t6
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800AA0E4: bne         $at, $zero, L_800AA0F4
    if (ctx->r1 != 0) {
        // 0x800AA0E8: sll         $t7, $a3, 4
        ctx->r15 = S32(ctx->r7 << 4);
            goto L_800AA0F4;
    }
    // 0x800AA0E8: sll         $t7, $a3, 4
    ctx->r15 = S32(ctx->r7 << 4);
L_800AA0EC:
    // 0x800AA0EC: b           L_800AA124
    // 0x800AA0F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800AA124;
    // 0x800AA0F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800AA0F4:
    // 0x800AA0F4: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800AA0F8: lw          $t8, -0x6A00($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6A00);
    // 0x800AA0FC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800AA100: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x800AA104: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x800AA108: jal         0x800ABFF0
    // 0x800AA10C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_800ABFF0(rdram, ctx);
        goto after_1;
    // 0x800AA10C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_1:
    // 0x800AA110: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800AA114: lb          $at, 0x0($t9)
    ctx->r1 = MEM_B(ctx->r25, 0X0);
    // 0x800AA118: lbu         $v0, 0x1($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X1);
    // 0x800AA11C: sll         $at, $at, 8
    ctx->r1 = S32(ctx->r1 << 8);
    // 0x800AA120: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_800AA124:
    // 0x800AA124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AA128: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800AA12C: jr          $ra
    // 0x800AA130: nop

    return;
    // 0x800AA130: nop

;}
