#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void recomp_entrypoint(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AD80: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8003AD84: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x8003AD88: addiu       $t0, $t0, 0x1F10
    ctx->r8 = ADD32(ctx->r8, 0X1F10);
    // 0x8003AD8C: ori         $t1, $t1, 0xD8C0
    ctx->r9 = ctx->r9 | 0XD8C0;
L_8003AD90:
    // 0x8003AD90: addi        $t1, $t1, -0x8
    ctx->r9 = ADD32(ctx->r9, -0X8);
    // 0x8003AD94: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x8003AD98: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8003AD9C: bne         $t1, $zero, L_8003AD90
    if (ctx->r9 != 0) {
        // 0x8003ADA0: addi        $t0, $t0, 0x8
        ctx->r8 = ADD32(ctx->r8, 0X8);
            goto L_8003AD90;
    }
    // 0x8003ADA0: addi        $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x8003ADA4: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8003ADA8: lui         $sp, 0x8010
    ctx->r29 = S32(0X8010 << 16);
    // 0x8003ADAC: addiu       $t2, $t2, -0x6320
    ctx->r10 = ADD32(ctx->r10, -0X6320);
    // 0x8003ADB0: jr          $t2
    // 0x8003ADB4: addiu       $sp, $sp, 0x56D0
    ctx->r29 = ADD32(ctx->r29, 0X56D0);
    LOOKUP_FUNC(ctx->r10)(rdram, ctx);
    return;
    // 0x8003ADB4: addiu       $sp, $sp, 0x56D0
    ctx->r29 = ADD32(ctx->r29, 0X56D0);
    // 0x8003ADB8: nop

    // 0x8003ADBC: nop

    // 0x8003ADC0: nop

    // 0x8003ADC4: nop

    // 0x8003ADC8: nop

    // 0x8003ADCC: nop

;}
RECOMP_FUNC void func_8003ADD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003ADD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003ADD4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003ADD8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003ADDC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8003ADE0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8003ADE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003ADE8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8003ADEC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8003ADF0: sw          $t6, 0x25A8($t7)
    MEM_W(0X25A8, ctx->r15) = ctx->r14;
    // 0x8003ADF4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8003ADF8: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8003ADFC: sh          $t8, 0x252C($t9)
    MEM_H(0X252C, ctx->r25) = ctx->r24;
    // 0x8003AE00: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8003AE04: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8003AE08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8003AE0C: sw          $t0, 0x2610($t1)
    MEM_W(0X2610, ctx->r9) = ctx->r8;
    // 0x8003AE10: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8003AE14: lbu         $t2, 0x2F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X2F);
    // 0x8003AE18: nop

    // 0x8003AE1C: sb          $t2, 0x25AC($t3)
    MEM_B(0X25AC, ctx->r11) = ctx->r10;
    // 0x8003AE20: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8003AE24: nop

    // 0x8003AE28: sh          $zero, 0x25AE($t4)
    MEM_H(0X25AE, ctx->r12) = 0;
    // 0x8003AE2C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8003AE30: nop

    // 0x8003AE34: addiu       $a0, $t5, 0x1B0
    ctx->r4 = ADD32(ctx->r13, 0X1B0);
    // 0x8003AE38: jal         0x800B3080
    // 0x8003AE3C: addiu       $a1, $t5, 0x270
    ctx->r5 = ADD32(ctx->r13, 0X270);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x8003AE3C: addiu       $a1, $t5, 0x270
    ctx->r5 = ADD32(ctx->r13, 0X270);
    after_0:
    // 0x8003AE40: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8003AE44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8003AE48: addiu       $a0, $t6, 0x1E0
    ctx->r4 = ADD32(ctx->r14, 0X1E0);
    // 0x8003AE4C: jal         0x800B3080
    // 0x8003AE50: addiu       $a1, $t6, 0x2B0
    ctx->r5 = ADD32(ctx->r14, 0X2B0);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x8003AE50: addiu       $a1, $t6, 0x2B0
    ctx->r5 = ADD32(ctx->r14, 0X2B0);
    after_1:
    // 0x8003AE54: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8003AE58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8003AE5C: addiu       $a0, $t7, 0x1C8
    ctx->r4 = ADD32(ctx->r15, 0X1C8);
    // 0x8003AE60: jal         0x800B3080
    // 0x8003AE64: addiu       $a1, $t7, 0x290
    ctx->r5 = ADD32(ctx->r15, 0X290);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_2;
    // 0x8003AE64: addiu       $a1, $t7, 0x290
    ctx->r5 = ADD32(ctx->r15, 0X290);
    after_2:
    // 0x8003AE68: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8003AE6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8003AE70: addiu       $a0, $t8, 0x1F8
    ctx->r4 = ADD32(ctx->r24, 0X1F8);
    // 0x8003AE74: jal         0x800B3080
    // 0x8003AE78: addiu       $a1, $t8, 0x2D0
    ctx->r5 = ADD32(ctx->r24, 0X2D0);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_3;
    // 0x8003AE78: addiu       $a1, $t8, 0x2D0
    ctx->r5 = ADD32(ctx->r24, 0X2D0);
    after_3:
    // 0x8003AE7C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8003AE80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8003AE84: addiu       $a0, $t9, 0x210
    ctx->r4 = ADD32(ctx->r25, 0X210);
    // 0x8003AE88: jal         0x800B3080
    // 0x8003AE8C: addiu       $a1, $t9, 0x2F0
    ctx->r5 = ADD32(ctx->r25, 0X2F0);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_4;
    // 0x8003AE8C: addiu       $a1, $t9, 0x2F0
    ctx->r5 = ADD32(ctx->r25, 0X2F0);
    after_4:
    // 0x8003AE90: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8003AE94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8003AE98: addiu       $a0, $t0, 0x228
    ctx->r4 = ADD32(ctx->r8, 0X228);
    // 0x8003AE9C: jal         0x800B3080
    // 0x8003AEA0: addiu       $a1, $t0, 0x310
    ctx->r5 = ADD32(ctx->r8, 0X310);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_5;
    // 0x8003AEA0: addiu       $a1, $t0, 0x310
    ctx->r5 = ADD32(ctx->r8, 0X310);
    after_5:
    // 0x8003AEA4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8003AEA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003AEAC: addiu       $a0, $t1, 0x240
    ctx->r4 = ADD32(ctx->r9, 0X240);
    // 0x8003AEB0: jal         0x800B3080
    // 0x8003AEB4: addiu       $a1, $t1, 0x330
    ctx->r5 = ADD32(ctx->r9, 0X330);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_6;
    // 0x8003AEB4: addiu       $a1, $t1, 0x330
    ctx->r5 = ADD32(ctx->r9, 0X330);
    after_6:
    // 0x8003AEB8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8003AEBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8003AEC0: addiu       $a0, $t2, 0x258
    ctx->r4 = ADD32(ctx->r10, 0X258);
    // 0x8003AEC4: jal         0x800B3080
    // 0x8003AEC8: addiu       $a1, $t2, 0x334
    ctx->r5 = ADD32(ctx->r10, 0X334);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_7;
    // 0x8003AEC8: addiu       $a1, $t2, 0x334
    ctx->r5 = ADD32(ctx->r10, 0X334);
    after_7:
    // 0x8003AECC: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8003AED0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x8003AED4: addiu       $a1, $t3, 0x258
    ctx->r5 = ADD32(ctx->r11, 0X258);
    // 0x8003AED8: jal         0x800B30B0
    // 0x8003AEDC: addiu       $a2, $t3, 0x334
    ctx->r6 = ADD32(ctx->r11, 0X334);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_8;
    // 0x8003AEDC: addiu       $a2, $t3, 0x334
    ctx->r6 = ADD32(ctx->r11, 0X334);
    after_8:
    // 0x8003AEE0: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8003AEE4: nop

    // 0x8003AEE8: addiu       $a0, $t4, 0x258
    ctx->r4 = ADD32(ctx->r12, 0X258);
    // 0x8003AEEC: addiu       $a1, $t4, 0x2360
    ctx->r5 = ADD32(ctx->r12, 0X2360);
    // 0x8003AEF0: jal         0x800B3120
    // 0x8003AEF4: addiu       $a2, $t4, 0x2362
    ctx->r6 = ADD32(ctx->r12, 0X2362);
    tnt_osContInit(rdram, ctx);
        goto after_9;
    // 0x8003AEF4: addiu       $a2, $t4, 0x2362
    ctx->r6 = ADD32(ctx->r12, 0X2362);
    after_9:
    // 0x8003AEF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AEFC: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x8003AF00: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x8003AF04: jr          $ra
    // 0x8003AF08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8003AF08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003AF0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AF0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003AF10: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8003AF14: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8003AF18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003AF1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003AF20: jal         0x800B3460
    // 0x8003AF24: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    osEepromProbe_recomp(rdram, ctx);
        goto after_0;
    // 0x8003AF24: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    after_0:
    // 0x8003AF28: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8003AF2C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8003AF30: nop

    // 0x8003AF34: beq         $t6, $zero, L_8003B084
    if (ctx->r14 == 0) {
        // 0x8003AF38: nop
    
            goto L_8003B084;
    }
    // 0x8003AF38: nop

    // 0x8003AF3C: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8003AF40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003AF44: beq         $s0, $at, L_8003AF5C
    if (ctx->r16 == ctx->r1) {
        // 0x8003AF48: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8003AF5C;
    }
    // 0x8003AF48: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003AF4C: beq         $s0, $at, L_8003AF6C
    if (ctx->r16 == ctx->r1) {
        // 0x8003AF50: nop
    
            goto L_8003AF6C;
    }
    // 0x8003AF50: nop

    // 0x8003AF54: b           L_8003AF78
    // 0x8003AF58: nop

        goto L_8003AF78;
    // 0x8003AF58: nop

L_8003AF5C:
    // 0x8003AF5C: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x8003AF60: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8003AF64: b           L_8003AF78
    // 0x8003AF68: sw          $t7, 0x1F10($at)
    MEM_W(0X1F10, ctx->r1) = ctx->r15;
        goto L_8003AF78;
    // 0x8003AF68: sw          $t7, 0x1F10($at)
    MEM_W(0X1F10, ctx->r1) = ctx->r15;
L_8003AF6C:
    // 0x8003AF6C: addiu       $t8, $zero, 0x800
    ctx->r24 = ADD32(0, 0X800);
    // 0x8003AF70: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8003AF74: sw          $t8, 0x1F10($at)
    MEM_W(0X1F10, ctx->r1) = ctx->r24;
L_8003AF78:
    // 0x8003AF78: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003AF7C: lw          $a0, 0x1F10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F10);
    // 0x8003AF80: jal         0x8007E03C
    // 0x8003AF84: nop

    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x8003AF84: nop

    after_1:
    // 0x8003AF88: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8003AF8C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003AF90: sw          $v0, 0x25B0($t9)
    MEM_W(0X25B0, ctx->r25) = ctx->r2;
    // 0x8003AF94: lw          $a0, 0x1F10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F10);
    // 0x8003AF98: nop

    // 0x8003AF9C: bgez        $a0, L_8003AFAC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8003AFA0: sra         $t0, $a0, 3
        ctx->r8 = S32(SIGNED(ctx->r4) >> 3);
            goto L_8003AFAC;
    }
    // 0x8003AFA0: sra         $t0, $a0, 3
    ctx->r8 = S32(SIGNED(ctx->r4) >> 3);
    // 0x8003AFA4: addiu       $at, $a0, 0x7
    ctx->r1 = ADD32(ctx->r4, 0X7);
    // 0x8003AFA8: sra         $t0, $at, 3
    ctx->r8 = S32(SIGNED(ctx->r1) >> 3);
L_8003AFAC:
    // 0x8003AFAC: jal         0x8007E03C
    // 0x8003AFB0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8007E03C(rdram, ctx);
        goto after_2;
    // 0x8003AFB0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_2:
    // 0x8003AFB4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8003AFB8: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8003AFBC: sw          $v0, 0x25B4($t1)
    MEM_W(0X25B4, ctx->r9) = ctx->r2;
    // 0x8003AFC0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8003AFC4: nop

    // 0x8003AFC8: lhu         $t3, 0x25AE($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X25AE);
    // 0x8003AFCC: nop

    // 0x8003AFD0: ori         $t4, $t3, 0x10
    ctx->r12 = ctx->r11 | 0X10;
    // 0x8003AFD4: sh          $t4, 0x25AE($t2)
    MEM_H(0X25AE, ctx->r10) = ctx->r12;
    // 0x8003AFD8: lw          $t5, 0x1F10($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1F10);
    // 0x8003AFDC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8003AFE0: blez        $t5, L_8003B018
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8003AFE4: nop
    
            goto L_8003B018;
    }
    // 0x8003AFE4: nop

L_8003AFE8:
    // 0x8003AFE8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8003AFEC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8003AFF0: lw          $t7, 0x25B0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X25B0);
    // 0x8003AFF4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8003AFF8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8003AFFC: sb          $zero, 0x0($t9)
    MEM_B(0X0, ctx->r25) = 0;
    // 0x8003B000: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8003B004: lw          $t3, 0x1F10($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1F10);
    // 0x8003B008: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8003B00C: slt         $at, $t1, $t3
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8003B010: bne         $at, $zero, L_8003AFE8
    if (ctx->r1 != 0) {
        // 0x8003B014: sw          $t1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r9;
            goto L_8003AFE8;
    }
    // 0x8003B014: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_8003B018:
    // 0x8003B018: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8003B01C: lw          $t4, 0x1F10($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1F10);
    // 0x8003B020: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8003B024: bgez        $t4, L_8003B034
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8003B028: sra         $t2, $t4, 3
        ctx->r10 = S32(SIGNED(ctx->r12) >> 3);
            goto L_8003B034;
    }
    // 0x8003B028: sra         $t2, $t4, 3
    ctx->r10 = S32(SIGNED(ctx->r12) >> 3);
    // 0x8003B02C: addiu       $at, $t4, 0x7
    ctx->r1 = ADD32(ctx->r12, 0X7);
    // 0x8003B030: sra         $t2, $at, 3
    ctx->r10 = S32(SIGNED(ctx->r1) >> 3);
L_8003B034:
    // 0x8003B034: blez        $t2, L_8003B084
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8003B038: nop
    
            goto L_8003B084;
    }
    // 0x8003B038: nop

L_8003B03C:
    // 0x8003B03C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8003B040: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8003B044: lw          $t6, 0x25B4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X25B4);
    // 0x8003B048: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8003B04C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8003B050: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x8003B054: lw          $t1, 0x1F10($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1F10);
    // 0x8003B058: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8003B05C: nop

    // 0x8003B060: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8003B064: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8003B068: bgez        $t1, L_8003B078
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8003B06C: sra         $t3, $t1, 3
        ctx->r11 = S32(SIGNED(ctx->r9) >> 3);
            goto L_8003B078;
    }
    // 0x8003B06C: sra         $t3, $t1, 3
    ctx->r11 = S32(SIGNED(ctx->r9) >> 3);
    // 0x8003B070: addiu       $at, $t1, 0x7
    ctx->r1 = ADD32(ctx->r9, 0X7);
    // 0x8003B074: sra         $t3, $at, 3
    ctx->r11 = S32(SIGNED(ctx->r1) >> 3);
L_8003B078:
    // 0x8003B078: slt         $at, $t0, $t3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8003B07C: bne         $at, $zero, L_8003B03C
    if (ctx->r1 != 0) {
        // 0x8003B080: nop
    
            goto L_8003B03C;
    }
    // 0x8003B080: nop

L_8003B084:
    // 0x8003B084: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8003B088: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B08C: lhu         $v0, 0x25AE($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X25AE);
    // 0x8003B090: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x8003B094: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003B098: and         $t2, $v0, $at
    ctx->r10 = ctx->r2 & ctx->r1;
    // 0x8003B09C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x8003B0A0: jr          $ra
    // 0x8003B0A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8003B0A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003B0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B0A8: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8003B0AC: lw          $t6, 0x1F10($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F10);
    // 0x8003B0B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003B0B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B0B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003B0BC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003B0C0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8003B0C4: bgez        $t6, L_8003B0D4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8003B0C8: sra         $t7, $t6, 3
        ctx->r15 = S32(SIGNED(ctx->r14) >> 3);
            goto L_8003B0D4;
    }
    // 0x8003B0C8: sra         $t7, $t6, 3
    ctx->r15 = S32(SIGNED(ctx->r14) >> 3);
    // 0x8003B0CC: addiu       $at, $t6, 0x7
    ctx->r1 = ADD32(ctx->r14, 0X7);
    // 0x8003B0D0: sra         $t7, $at, 3
    ctx->r15 = S32(SIGNED(ctx->r1) >> 3);
L_8003B0D4:
    // 0x8003B0D4: blez        $t7, L_8003B178
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8003B0D8: nop
    
            goto L_8003B178;
    }
    // 0x8003B0D8: nop

L_8003B0DC:
    // 0x8003B0DC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8003B0E0:
    // 0x8003B0E0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B0E4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003B0E8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8003B0EC: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8003B0F0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8003B0F4: lw          $t3, 0x25B0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X25B0);
    // 0x8003B0F8: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8003B0FC: addu        $t7, $t6, $t1
    ctx->r15 = ADD32(ctx->r14, ctx->r9);
    // 0x8003B100: addu        $t4, $t3, $t1
    ctx->r12 = ADD32(ctx->r11, ctx->r9);
    // 0x8003B104: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x8003B108: lbu         $t9, 0x0($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X0);
    // 0x8003B10C: nop

    // 0x8003B110: beq         $t5, $t9, L_8003B12C
    if (ctx->r13 == ctx->r25) {
        // 0x8003B114: nop
    
            goto L_8003B12C;
    }
    // 0x8003B114: nop

    // 0x8003B118: lw          $t3, 0x25B4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X25B4);
    // 0x8003B11C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8003B120: addu        $t4, $t3, $t8
    ctx->r12 = ADD32(ctx->r11, ctx->r24);
    // 0x8003B124: b           L_8003B144
    // 0x8003B128: sb          $t0, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r8;
        goto L_8003B144;
    // 0x8003B128: sb          $t0, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r8;
L_8003B12C:
    // 0x8003B12C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8003B130: nop

    // 0x8003B134: addiu       $t1, $t6, 0x1
    ctx->r9 = ADD32(ctx->r14, 0X1);
    // 0x8003B138: slti        $at, $t1, 0x8
    ctx->r1 = SIGNED(ctx->r9) < 0X8 ? 1 : 0;
    // 0x8003B13C: bne         $at, $zero, L_8003B0E0
    if (ctx->r1 != 0) {
        // 0x8003B140: sw          $t1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r9;
            goto L_8003B0E0;
    }
    // 0x8003B140: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
L_8003B144:
    // 0x8003B144: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8003B148: lw          $t9, 0x1F10($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1F10);
    // 0x8003B14C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B150: nop

    // 0x8003B154: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x8003B158: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8003B15C: bgez        $t9, L_8003B16C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8003B160: sra         $t2, $t9, 3
        ctx->r10 = S32(SIGNED(ctx->r25) >> 3);
            goto L_8003B16C;
    }
    // 0x8003B160: sra         $t2, $t9, 3
    ctx->r10 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8003B164: addiu       $at, $t9, 0x7
    ctx->r1 = ADD32(ctx->r25, 0X7);
    // 0x8003B168: sra         $t2, $at, 3
    ctx->r10 = S32(SIGNED(ctx->r1) >> 3);
L_8003B16C:
    // 0x8003B16C: slt         $at, $t5, $t2
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8003B170: bne         $at, $zero, L_8003B0DC
    if (ctx->r1 != 0) {
        // 0x8003B174: nop
    
            goto L_8003B0DC;
    }
    // 0x8003B174: nop

L_8003B178:
    // 0x8003B178: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8003B17C: lw          $t3, 0x1F10($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1F10);
    // 0x8003B180: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8003B184: blez        $t3, L_8003B1C8
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8003B188: nop
    
            goto L_8003B1C8;
    }
    // 0x8003B188: nop

L_8003B18C:
    // 0x8003B18C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8003B190: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B194: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8003B198: addu        $t4, $t8, $t0
    ctx->r12 = ADD32(ctx->r24, ctx->r8);
    // 0x8003B19C: lw          $t7, 0x25B0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X25B0);
    // 0x8003B1A0: lbu         $t6, 0x0($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X0);
    // 0x8003B1A4: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x8003B1A8: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    // 0x8003B1AC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B1B0: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8003B1B4: lw          $t3, 0x1F10($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1F10);
    // 0x8003B1B8: addiu       $t2, $t5, 0x1
    ctx->r10 = ADD32(ctx->r13, 0X1);
    // 0x8003B1BC: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8003B1C0: bne         $at, $zero, L_8003B18C
    if (ctx->r1 != 0) {
        // 0x8003B1C4: sw          $t2, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r10;
            goto L_8003B18C;
    }
    // 0x8003B1C4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_8003B1C8:
    // 0x8003B1C8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8003B1CC: nop

    // 0x8003B1D0: lhu         $t4, 0x25AE($t8)
    ctx->r12 = MEM_HU(ctx->r24, 0X25AE);
    // 0x8003B1D4: nop

    // 0x8003B1D8: andi        $t1, $t4, 0x10
    ctx->r9 = ctx->r12 & 0X10;
    // 0x8003B1DC: beq         $t1, $zero, L_8003B21C
    if (ctx->r9 == 0) {
        // 0x8003B1E0: nop
    
            goto L_8003B21C;
    }
    // 0x8003B1E0: nop

    // 0x8003B1E4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8003B1E8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8003B1EC: sw          $t7, 0x25BC($t8)
    MEM_W(0X25BC, ctx->r24) = ctx->r15;
    // 0x8003B1F0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8003B1F4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8003B1F8: sh          $t0, 0x2560($t6)
    MEM_H(0X2560, ctx->r14) = ctx->r8;
    // 0x8003B1FC: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8003B200: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003B204: sb          $t9, 0x25B9($t5)
    MEM_B(0X25B9, ctx->r13) = ctx->r25;
    // 0x8003B208: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8003B20C: nop

    // 0x8003B210: addiu       $a0, $t2, 0x1C8
    ctx->r4 = ADD32(ctx->r10, 0X1C8);
    // 0x8003B214: jal         0x800B34D0
    // 0x8003B218: addiu       $a1, $t2, 0x2560
    ctx->r5 = ADD32(ctx->r10, 0X2560);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003B218: addiu       $a1, $t2, 0x2560
    ctx->r5 = ADD32(ctx->r10, 0X2560);
    after_0:
L_8003B21C:
    // 0x8003B21C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B220: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003B224: jr          $ra
    // 0x8003B228: nop

    return;
    // 0x8003B228: nop

;}
RECOMP_FUNC void func_8003B22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B22C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B230: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B234: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8003B238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B23C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B240: lhu         $t7, 0x25AE($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X25AE);
    // 0x8003B244: nop

    // 0x8003B248: andi        $t8, $t7, 0x10
    ctx->r24 = ctx->r15 & 0X10;
    // 0x8003B24C: beq         $t8, $zero, L_8003B28C
    if (ctx->r24 == 0) {
        // 0x8003B250: nop
    
            goto L_8003B28C;
    }
    // 0x8003B250: nop

    // 0x8003B254: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B258: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8003B25C: sw          $t9, 0x25BC($t6)
    MEM_W(0X25BC, ctx->r14) = ctx->r25;
    // 0x8003B260: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8003B264: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8003B268: sh          $t0, 0x2560($t1)
    MEM_H(0X2560, ctx->r9) = ctx->r8;
    // 0x8003B26C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003B270: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003B274: sb          $t2, 0x25B8($t3)
    MEM_B(0X25B8, ctx->r11) = ctx->r10;
    // 0x8003B278: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8003B27C: nop

    // 0x8003B280: addiu       $a0, $t4, 0x1C8
    ctx->r4 = ADD32(ctx->r12, 0X1C8);
    // 0x8003B284: jal         0x800B34D0
    // 0x8003B288: addiu       $a1, $t4, 0x2560
    ctx->r5 = ADD32(ctx->r12, 0X2560);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003B288: addiu       $a1, $t4, 0x2560
    ctx->r5 = ADD32(ctx->r12, 0X2560);
    after_0:
L_8003B28C:
    // 0x8003B28C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B294: jr          $ra
    // 0x8003B298: nop

    return;
    // 0x8003B298: nop

;}
RECOMP_FUNC void func_8003B29C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B29C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003B2A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B2A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003B2A8: sb          $zero, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = 0;
L_8003B2AC:
    // 0x8003B2AC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8003B2B0: lbu         $t8, 0x1B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1B);
    // 0x8003B2B4: lbu         $t7, 0x2360($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2360);
    // 0x8003B2B8: nop

    // 0x8003B2BC: srav        $t9, $t7, $t8
    ctx->r25 = S32(SIGNED(ctx->r15) >> (ctx->r24 & 31));
    // 0x8003B2C0: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8003B2C4: beq         $t0, $zero, L_8003B3B8
    if (ctx->r8 == 0) {
        // 0x8003B2C8: nop
    
            goto L_8003B3B8;
    }
    // 0x8003B2C8: nop

    // 0x8003B2CC: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x8003B2D0: addu        $t2, $t6, $t1
    ctx->r10 = ADD32(ctx->r14, ctx->r9);
    // 0x8003B2D4: lhu         $t3, 0x2362($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X2362);
    // 0x8003B2D8: nop

    // 0x8003B2DC: andi        $t4, $t3, 0x4
    ctx->r12 = ctx->r11 & 0X4;
    // 0x8003B2E0: sltu        $t5, $zero, $t4
    ctx->r13 = 0 < ctx->r12 ? 1 : 0;
    // 0x8003B2E4: beq         $t5, $zero, L_8003B3B8
    if (ctx->r13 == 0) {
        // 0x8003B2E8: nop
    
            goto L_8003B3B8;
    }
    // 0x8003B2E8: nop

    // 0x8003B2EC: beq         $t5, $zero, L_8003B3B8
    if (ctx->r13 == 0) {
        // 0x8003B2F0: nop
    
            goto L_8003B3B8;
    }
    // 0x8003B2F0: nop

    // 0x8003B2F4: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8003B2F8: subu        $t7, $t7, $t8
    ctx->r15 = SUB32(ctx->r15, ctx->r24);
    // 0x8003B2FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003B300: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8003B304: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003B308: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x8003B30C: addiu       $a1, $a1, 0x238C
    ctx->r5 = ADD32(ctx->r5, 0X238C);
    // 0x8003B310: addiu       $a0, $t6, 0x258
    ctx->r4 = ADD32(ctx->r14, 0X258);
    // 0x8003B314: jal         0x800B3620
    // 0x8003B318: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    osPfsInitPak_recomp(rdram, ctx);
        goto after_0;
    // 0x8003B318: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    after_0:
    // 0x8003B31C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8003B320: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B324: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8003B328: beq         $t9, $at, L_8003B338
    if (ctx->r25 == ctx->r1) {
        // 0x8003B32C: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_8003B338;
    }
    // 0x8003B32C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8003B330: bne         $t9, $at, L_8003B3B8
    if (ctx->r25 != ctx->r1) {
        // 0x8003B334: nop
    
            goto L_8003B3B8;
    }
    // 0x8003B334: nop

L_8003B338:
    // 0x8003B338: lbu         $t1, 0x1B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1B);
    // 0x8003B33C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8003B340: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8003B344: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8003B348: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8003B34C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8003B350: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8003B354: addu        $a1, $t0, $t2
    ctx->r5 = ADD32(ctx->r8, ctx->r10);
    // 0x8003B358: addiu       $a1, $a1, 0x238C
    ctx->r5 = ADD32(ctx->r5, 0X238C);
    // 0x8003B35C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8003B360: jal         0x800B3A84
    // 0x8003B364: addiu       $a0, $t0, 0x258
    ctx->r4 = ADD32(ctx->r8, 0X258);
    osMotorInit_recomp(rdram, ctx);
        goto after_1;
    // 0x8003B364: addiu       $a0, $t0, 0x258
    ctx->r4 = ADD32(ctx->r8, 0X258);
    after_1:
    // 0x8003B368: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8003B36C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B370: nop

    // 0x8003B374: bne         $t3, $zero, L_8003B3B8
    if (ctx->r11 != 0) {
        // 0x8003B378: nop
    
            goto L_8003B3B8;
    }
    // 0x8003B378: nop

    // 0x8003B37C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8003B380: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x8003B384: lhu         $t5, 0x25AE($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X25AE);
    // 0x8003B388: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003B38C: sllv        $t8, $t7, $t6
    ctx->r24 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x8003B390: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x8003B394: sh          $t9, 0x25AE($t4)
    MEM_H(0X25AE, ctx->r12) = ctx->r25;
    // 0x8003B398: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8003B39C: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
    // 0x8003B3A0: lhu         $a2, 0x25AE($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X25AE);
    // 0x8003B3A4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003B3A8: andi        $t2, $a2, 0xF
    ctx->r10 = ctx->r6 & 0XF;
    // 0x8003B3AC: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x8003B3B0: jal         0x800B3BFC
    // 0x8003B3B4: addiu       $a0, $a0, -0x4C60
    ctx->r4 = ADD32(ctx->r4, -0X4C60);
    osSyncPrintf(rdram, ctx);
        goto after_2;
    // 0x8003B3B4: addiu       $a0, $a0, -0x4C60
    ctx->r4 = ADD32(ctx->r4, -0X4C60);
    after_2:
L_8003B3B8:
    // 0x8003B3B8: lbu         $t1, 0x1B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1B);
    // 0x8003B3BC: nop

    // 0x8003B3C0: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x8003B3C4: andi        $t7, $t3, 0xFF
    ctx->r15 = ctx->r11 & 0XFF;
    // 0x8003B3C8: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x8003B3CC: bne         $at, $zero, L_8003B2AC
    if (ctx->r1 != 0) {
        // 0x8003B3D0: sb          $t3, 0x1B($sp)
        MEM_B(0X1B, ctx->r29) = ctx->r11;
            goto L_8003B2AC;
    }
    // 0x8003B3D0: sb          $t3, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r11;
    // 0x8003B3D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B3D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003B3DC: jr          $ra
    // 0x8003B3E0: nop

    return;
    // 0x8003B3E0: nop

;}
RECOMP_FUNC void func_8003B3E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B3E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B3E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B3EC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003B3F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B3F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B3F8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8003B3FC: sh          $t6, 0x254C($t7)
    MEM_H(0X254C, ctx->r15) = ctx->r14;
    // 0x8003B400: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003B404: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B408: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003B40C: sw          $t8, 0x2550($t9)
    MEM_W(0X2550, ctx->r25) = ctx->r24;
    // 0x8003B410: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003B414: nop

    // 0x8003B418: sw          $zero, 0x2554($t0)
    MEM_W(0X2554, ctx->r8) = 0;
    // 0x8003B41C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8003B420: nop

    // 0x8003B424: addiu       $t2, $t1, 0x240
    ctx->r10 = ADD32(ctx->r9, 0X240);
    // 0x8003B428: sw          $t2, 0x255C($t1)
    MEM_W(0X255C, ctx->r9) = ctx->r10;
    // 0x8003B42C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003B430: nop

    // 0x8003B434: addiu       $a0, $t3, 0x1E0
    ctx->r4 = ADD32(ctx->r11, 0X1E0);
    // 0x8003B438: jal         0x800B34D0
    // 0x8003B43C: addiu       $a1, $t3, 0x254C
    ctx->r5 = ADD32(ctx->r11, 0X254C);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003B43C: addiu       $a1, $t3, 0x254C
    ctx->r5 = ADD32(ctx->r11, 0X254C);
    after_0:
    // 0x8003B440: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003B444: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003B448: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003B44C: jal         0x800B3C20
    // 0x8003B450: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003B450: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003B454: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8003B458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B45C: lw          $v0, 0x2554($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X2554);
    // 0x8003B460: jr          $ra
    // 0x8003B464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003B464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003B468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B468: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B46C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B470: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8003B474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B478: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B47C: lhu         $t7, 0x25AE($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X25AE);
    // 0x8003B480: nop

    // 0x8003B484: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x8003B488: beq         $t8, $zero, L_8003B4C4
    if (ctx->r24 == 0) {
        // 0x8003B48C: nop
    
            goto L_8003B4C4;
    }
    // 0x8003B48C: nop

    // 0x8003B490: sh          $zero, 0x254C($t6)
    MEM_H(0X254C, ctx->r14) = 0;
    // 0x8003B494: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003B498: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B49C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003B4A0: sw          $t9, 0x2550($t0)
    MEM_W(0X2550, ctx->r8) = ctx->r25;
    // 0x8003B4A4: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8003B4A8: nop

    // 0x8003B4AC: sw          $zero, 0x2554($t1)
    MEM_W(0X2554, ctx->r9) = 0;
    // 0x8003B4B0: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8003B4B4: nop

    // 0x8003B4B8: addiu       $a0, $t2, 0x1E0
    ctx->r4 = ADD32(ctx->r10, 0X1E0);
    // 0x8003B4BC: jal         0x800B34D0
    // 0x8003B4C0: addiu       $a1, $t2, 0x254C
    ctx->r5 = ADD32(ctx->r10, 0X254C);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003B4C0: addiu       $a1, $t2, 0x254C
    ctx->r5 = ADD32(ctx->r10, 0X254C);
    after_0:
L_8003B4C4:
    // 0x8003B4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B4C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B4CC: jr          $ra
    // 0x8003B4D0: nop

    return;
    // 0x8003B4D0: nop

;}
RECOMP_FUNC void func_8003B4D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B4D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B4D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B4DC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8003B4E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B4E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B4E8: lhu         $t7, 0x25AE($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X25AE);
    // 0x8003B4EC: nop

    // 0x8003B4F0: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x8003B4F4: beq         $t8, $zero, L_8003B534
    if (ctx->r24 == 0) {
        // 0x8003B4F8: nop
    
            goto L_8003B534;
    }
    // 0x8003B4F8: nop

    // 0x8003B4FC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8003B500: sh          $t9, 0x254C($t6)
    MEM_H(0X254C, ctx->r14) = ctx->r25;
    // 0x8003B504: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8003B508: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B50C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003B510: sw          $t0, 0x2550($t1)
    MEM_W(0X2550, ctx->r9) = ctx->r8;
    // 0x8003B514: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8003B518: nop

    // 0x8003B51C: sw          $zero, 0x2554($t2)
    MEM_W(0X2554, ctx->r10) = 0;
    // 0x8003B520: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003B524: nop

    // 0x8003B528: addiu       $a0, $t3, 0x1E0
    ctx->r4 = ADD32(ctx->r11, 0X1E0);
    // 0x8003B52C: jal         0x800B34D0
    // 0x8003B530: addiu       $a1, $t3, 0x254C
    ctx->r5 = ADD32(ctx->r11, 0X254C);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003B530: addiu       $a1, $t3, 0x254C
    ctx->r5 = ADD32(ctx->r11, 0X254C);
    after_0:
L_8003B534:
    // 0x8003B534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B53C: jr          $ra
    // 0x8003B540: nop

    return;
    // 0x8003B540: nop

;}
RECOMP_FUNC void func_8003B544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B548: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B54C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8003B550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B554: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B558: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003B55C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8003B560: lhu         $t7, 0x25AE($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X25AE);
    // 0x8003B564: nop

    // 0x8003B568: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x8003B56C: beq         $t8, $zero, L_8003B5C0
    if (ctx->r24 == 0) {
        // 0x8003B570: nop
    
            goto L_8003B5C0;
    }
    // 0x8003B570: nop

    // 0x8003B574: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8003B578: sh          $t9, 0x254C($t6)
    MEM_H(0X254C, ctx->r14) = ctx->r25;
    // 0x8003B57C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8003B580: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B584: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003B588: sw          $t0, 0x2550($t1)
    MEM_W(0X2550, ctx->r9) = ctx->r8;
    // 0x8003B58C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003B590: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8003B594: nop

    // 0x8003B598: sw          $t2, 0x2554($t3)
    MEM_W(0X2554, ctx->r11) = ctx->r10;
    // 0x8003B59C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8003B5A0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8003B5A4: nop

    // 0x8003B5A8: sw          $t4, 0x2558($t5)
    MEM_W(0X2558, ctx->r13) = ctx->r12;
    // 0x8003B5AC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003B5B0: nop

    // 0x8003B5B4: addiu       $a0, $t7, 0x1E0
    ctx->r4 = ADD32(ctx->r15, 0X1E0);
    // 0x8003B5B8: jal         0x800B34D0
    // 0x8003B5BC: addiu       $a1, $t7, 0x254C
    ctx->r5 = ADD32(ctx->r15, 0X254C);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003B5BC: addiu       $a1, $t7, 0x254C
    ctx->r5 = ADD32(ctx->r15, 0X254C);
    after_0:
L_8003B5C0:
    // 0x8003B5C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B5C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B5C8: jr          $ra
    // 0x8003B5CC: nop

    return;
    // 0x8003B5CC: nop

;}
RECOMP_FUNC void func_8003B5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B5D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B5D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B5D8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8003B5DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B5E0: sh          $zero, 0x2568($t6)
    MEM_H(0X2568, ctx->r14) = 0;
    // 0x8003B5E4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003B5E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003B5EC: addiu       $t8, $t7, 0x240
    ctx->r24 = ADD32(ctx->r15, 0X240);
    // 0x8003B5F0: sw          $t8, 0x2564($t7)
    MEM_W(0X2564, ctx->r15) = ctx->r24;
    // 0x8003B5F4: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003B5F8: nop

    // 0x8003B5FC: addiu       $t0, $t9, 0x2362
    ctx->r8 = ADD32(ctx->r25, 0X2362);
    // 0x8003B600: sw          $t0, 0x256C($t9)
    MEM_W(0X256C, ctx->r25) = ctx->r8;
    // 0x8003B604: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8003B608: nop

    // 0x8003B60C: addiu       $a0, $t1, 0x210
    ctx->r4 = ADD32(ctx->r9, 0X210);
    // 0x8003B610: jal         0x800B34D0
    // 0x8003B614: addiu       $a1, $t1, 0x2564
    ctx->r5 = ADD32(ctx->r9, 0X2564);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003B614: addiu       $a1, $t1, 0x2564
    ctx->r5 = ADD32(ctx->r9, 0X2564);
    after_0:
    // 0x8003B618: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003B61C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003B620: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003B624: jal         0x800B3C20
    // 0x8003B628: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003B628: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003B62C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B634: jr          $ra
    // 0x8003B638: nop

    return;
    // 0x8003B638: nop

;}
RECOMP_FUNC void func_8003B63C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B63C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8003B640: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8003B644: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8003B648: lhu         $v0, 0x2362($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X2362);
    // 0x8003B64C: jr          $ra
    // 0x8003B650: nop

    return;
    // 0x8003B650: nop

;}
RECOMP_FUNC void func_8003B654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B654: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8003B658: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8003B65C: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8003B660: lbu         $v0, 0x2364($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X2364);
    // 0x8003B664: jr          $ra
    // 0x8003B668: nop

    return;
    // 0x8003B668: nop

;}
RECOMP_FUNC void func_8003B66C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B66C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8003B670: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8003B674: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8003B678: lbu         $v0, 0x2365($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X2365);
    // 0x8003B67C: jr          $ra
    // 0x8003B680: nop

    return;
    // 0x8003B680: nop

;}
RECOMP_FUNC void func_8003B684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B688: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B68C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8003B690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B694: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B698: sh          $zero, 0x2578($t6)
    MEM_H(0X2578, ctx->r14) = 0;
    // 0x8003B69C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8003B6A0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B6A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003B6A8: sb          $t7, 0x2570($t8)
    MEM_B(0X2570, ctx->r24) = ctx->r15;
    // 0x8003B6AC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003B6B0: nop

    // 0x8003B6B4: addiu       $a0, $t9, 0x1F8
    ctx->r4 = ADD32(ctx->r25, 0X1F8);
    // 0x8003B6B8: jal         0x800B34D0
    // 0x8003B6BC: addiu       $a1, $t9, 0x2570
    ctx->r5 = ADD32(ctx->r25, 0X2570);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003B6BC: addiu       $a1, $t9, 0x2570
    ctx->r5 = ADD32(ctx->r25, 0X2570);
    after_0:
    // 0x8003B6C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003B6C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003B6C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003B6CC: jal         0x800B3C20
    // 0x8003B6D0: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003B6D0: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003B6D4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003B6D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B6DC: lw          $v0, 0x2580($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X2580);
    // 0x8003B6E0: jr          $ra
    // 0x8003B6E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003B6E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003B6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B6E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B6EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B6F0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003B6F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B6F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B6FC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003B700: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8003B704: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003B708: sh          $t6, 0x2578($t7)
    MEM_H(0X2578, ctx->r15) = ctx->r14;
    // 0x8003B70C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003B710: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x8003B714: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003B718: sb          $t8, 0x2570($t9)
    MEM_B(0X2570, ctx->r25) = ctx->r24;
    // 0x8003B71C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003B720: nop

    // 0x8003B724: addiu       $t1, $t0, 0x240
    ctx->r9 = ADD32(ctx->r8, 0X240);
    // 0x8003B728: sw          $t1, 0x2584($t0)
    MEM_W(0X2584, ctx->r8) = ctx->r9;
    // 0x8003B72C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003B730: lbu         $t2, 0x1F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X1F);
    // 0x8003B734: nop

    // 0x8003B738: sb          $t2, 0x2571($t3)
    MEM_B(0X2571, ctx->r11) = ctx->r10;
    // 0x8003B73C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8003B740: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8003B744: nop

    // 0x8003B748: sw          $t4, 0x2580($t5)
    MEM_W(0X2580, ctx->r13) = ctx->r12;
    // 0x8003B74C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003B750: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8003B754: nop

    // 0x8003B758: sw          $t6, 0x2574($t7)
    MEM_W(0X2574, ctx->r15) = ctx->r14;
    // 0x8003B75C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003B760: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8003B764: nop

    // 0x8003B768: sw          $t8, 0x257C($t9)
    MEM_W(0X257C, ctx->r25) = ctx->r24;
    // 0x8003B76C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8003B770: nop

    // 0x8003B774: addiu       $a0, $t1, 0x1F8
    ctx->r4 = ADD32(ctx->r9, 0X1F8);
    // 0x8003B778: jal         0x800B34D0
    // 0x8003B77C: addiu       $a1, $t1, 0x2570
    ctx->r5 = ADD32(ctx->r9, 0X2570);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003B77C: addiu       $a1, $t1, 0x2570
    ctx->r5 = ADD32(ctx->r9, 0X2570);
    after_0:
    // 0x8003B780: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003B784: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003B788: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003B78C: jal         0x800B3C20
    // 0x8003B790: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003B790: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003B794: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003B798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B79C: lw          $v0, 0x2580($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X2580);
    // 0x8003B7A0: jr          $ra
    // 0x8003B7A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003B7A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003B7A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B7A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B7AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B7B0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003B7B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B7B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B7BC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003B7C0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8003B7C4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8003B7C8: sh          $t6, 0x2578($t7)
    MEM_H(0X2578, ctx->r15) = ctx->r14;
    // 0x8003B7CC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003B7D0: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x8003B7D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003B7D8: sb          $t8, 0x2570($t9)
    MEM_B(0X2570, ctx->r25) = ctx->r24;
    // 0x8003B7DC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003B7E0: nop

    // 0x8003B7E4: addiu       $t1, $t0, 0x240
    ctx->r9 = ADD32(ctx->r8, 0X240);
    // 0x8003B7E8: sw          $t1, 0x2584($t0)
    MEM_W(0X2584, ctx->r8) = ctx->r9;
    // 0x8003B7EC: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003B7F0: lbu         $t2, 0x1F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X1F);
    // 0x8003B7F4: nop

    // 0x8003B7F8: sb          $t2, 0x2571($t3)
    MEM_B(0X2571, ctx->r11) = ctx->r10;
    // 0x8003B7FC: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8003B800: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8003B804: nop

    // 0x8003B808: sw          $t4, 0x2580($t5)
    MEM_W(0X2580, ctx->r13) = ctx->r12;
    // 0x8003B80C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003B810: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8003B814: nop

    // 0x8003B818: sw          $t6, 0x2574($t7)
    MEM_W(0X2574, ctx->r15) = ctx->r14;
    // 0x8003B81C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003B820: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8003B824: nop

    // 0x8003B828: sw          $t8, 0x257C($t9)
    MEM_W(0X257C, ctx->r25) = ctx->r24;
    // 0x8003B82C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8003B830: nop

    // 0x8003B834: addiu       $a0, $t1, 0x1F8
    ctx->r4 = ADD32(ctx->r9, 0X1F8);
    // 0x8003B838: jal         0x800B34D0
    // 0x8003B83C: addiu       $a1, $t1, 0x2570
    ctx->r5 = ADD32(ctx->r9, 0X2570);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003B83C: addiu       $a1, $t1, 0x2570
    ctx->r5 = ADD32(ctx->r9, 0X2570);
    after_0:
    // 0x8003B840: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003B844: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003B848: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003B84C: jal         0x800B3C20
    // 0x8003B850: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003B850: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003B854: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003B858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B85C: lw          $v0, 0x2580($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X2580);
    // 0x8003B860: jr          $ra
    // 0x8003B864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003B864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003B868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B86C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B870: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003B874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B878: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B87C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003B880: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8003B884: sh          $t6, 0x2578($t7)
    MEM_H(0X2578, ctx->r15) = ctx->r14;
    // 0x8003B888: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003B88C: lbu         $t8, 0x23($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X23);
    // 0x8003B890: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003B894: sb          $t8, 0x2570($t9)
    MEM_B(0X2570, ctx->r25) = ctx->r24;
    // 0x8003B898: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003B89C: nop

    // 0x8003B8A0: addiu       $t1, $t0, 0x240
    ctx->r9 = ADD32(ctx->r8, 0X240);
    // 0x8003B8A4: sw          $t1, 0x2584($t0)
    MEM_W(0X2584, ctx->r8) = ctx->r9;
    // 0x8003B8A8: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003B8AC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B8B0: nop

    // 0x8003B8B4: sw          $t2, 0x2588($t3)
    MEM_W(0X2588, ctx->r11) = ctx->r10;
    // 0x8003B8B8: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8003B8BC: nop

    // 0x8003B8C0: addiu       $a0, $t4, 0x1F8
    ctx->r4 = ADD32(ctx->r12, 0X1F8);
    // 0x8003B8C4: jal         0x800B34D0
    // 0x8003B8C8: addiu       $a1, $t4, 0x2570
    ctx->r5 = ADD32(ctx->r12, 0X2570);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003B8C8: addiu       $a1, $t4, 0x2570
    ctx->r5 = ADD32(ctx->r12, 0X2570);
    after_0:
    // 0x8003B8CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003B8D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003B8D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003B8D8: jal         0x800B3C20
    // 0x8003B8DC: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003B8DC: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003B8E0: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8003B8E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B8E8: lw          $v0, 0x2580($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X2580);
    // 0x8003B8EC: jr          $ra
    // 0x8003B8F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003B8F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003B8F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B8F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B8F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B8FC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003B900: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B904: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B908: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003B90C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8003B910: sh          $t6, 0x2578($t7)
    MEM_H(0X2578, ctx->r15) = ctx->r14;
    // 0x8003B914: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003B918: lbu         $t8, 0x23($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X23);
    // 0x8003B91C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003B920: sb          $t8, 0x2570($t9)
    MEM_B(0X2570, ctx->r25) = ctx->r24;
    // 0x8003B924: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003B928: nop

    // 0x8003B92C: addiu       $t1, $t0, 0x240
    ctx->r9 = ADD32(ctx->r8, 0X240);
    // 0x8003B930: sw          $t1, 0x2584($t0)
    MEM_W(0X2584, ctx->r8) = ctx->r9;
    // 0x8003B934: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003B938: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B93C: nop

    // 0x8003B940: sw          $t2, 0x2588($t3)
    MEM_W(0X2588, ctx->r11) = ctx->r10;
    // 0x8003B944: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8003B948: nop

    // 0x8003B94C: addiu       $a0, $t4, 0x1F8
    ctx->r4 = ADD32(ctx->r12, 0X1F8);
    // 0x8003B950: jal         0x800B34D0
    // 0x8003B954: addiu       $a1, $t4, 0x2570
    ctx->r5 = ADD32(ctx->r12, 0X2570);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003B954: addiu       $a1, $t4, 0x2570
    ctx->r5 = ADD32(ctx->r12, 0X2570);
    after_0:
    // 0x8003B958: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003B95C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003B960: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003B964: jal         0x800B3C20
    // 0x8003B968: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003B968: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003B96C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8003B970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B974: lw          $v0, 0x2580($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X2580);
    // 0x8003B978: jr          $ra
    // 0x8003B97C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003B97C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003B980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B984: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B988: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003B98C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B990: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B994: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003B998: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8003B99C: sh          $t6, 0x2578($t7)
    MEM_H(0X2578, ctx->r15) = ctx->r14;
    // 0x8003B9A0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003B9A4: lbu         $t8, 0x23($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X23);
    // 0x8003B9A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003B9AC: sb          $t8, 0x2570($t9)
    MEM_B(0X2570, ctx->r25) = ctx->r24;
    // 0x8003B9B0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003B9B4: nop

    // 0x8003B9B8: addiu       $t1, $t0, 0x240
    ctx->r9 = ADD32(ctx->r8, 0X240);
    // 0x8003B9BC: sw          $t1, 0x2584($t0)
    MEM_W(0X2584, ctx->r8) = ctx->r9;
    // 0x8003B9C0: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003B9C4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B9C8: nop

    // 0x8003B9CC: sw          $t2, 0x2588($t3)
    MEM_W(0X2588, ctx->r11) = ctx->r10;
    // 0x8003B9D0: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8003B9D4: nop

    // 0x8003B9D8: addiu       $a0, $t4, 0x1F8
    ctx->r4 = ADD32(ctx->r12, 0X1F8);
    // 0x8003B9DC: jal         0x800B34D0
    // 0x8003B9E0: addiu       $a1, $t4, 0x2570
    ctx->r5 = ADD32(ctx->r12, 0X2570);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003B9E0: addiu       $a1, $t4, 0x2570
    ctx->r5 = ADD32(ctx->r12, 0X2570);
    after_0:
    // 0x8003B9E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003B9E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003B9EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003B9F0: jal         0x800B3C20
    // 0x8003B9F4: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003B9F4: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003B9F8: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8003B9FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BA00: lw          $v0, 0x2580($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X2580);
    // 0x8003BA04: jr          $ra
    // 0x8003BA08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003BA08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003BA0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BA0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BA10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BA14: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003BA18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BA1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BA20: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8003BA24: sh          $t6, 0x2578($t7)
    MEM_H(0X2578, ctx->r15) = ctx->r14;
    // 0x8003BA28: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003BA2C: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x8003BA30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003BA34: sb          $t8, 0x2570($t9)
    MEM_B(0X2570, ctx->r25) = ctx->r24;
    // 0x8003BA38: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003BA3C: nop

    // 0x8003BA40: addiu       $t1, $t0, 0x240
    ctx->r9 = ADD32(ctx->r8, 0X240);
    // 0x8003BA44: sw          $t1, 0x2584($t0)
    MEM_W(0X2584, ctx->r8) = ctx->r9;
    // 0x8003BA48: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8003BA4C: nop

    // 0x8003BA50: addiu       $a0, $t2, 0x1F8
    ctx->r4 = ADD32(ctx->r10, 0X1F8);
    // 0x8003BA54: jal         0x800B34D0
    // 0x8003BA58: addiu       $a1, $t2, 0x2570
    ctx->r5 = ADD32(ctx->r10, 0X2570);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003BA58: addiu       $a1, $t2, 0x2570
    ctx->r5 = ADD32(ctx->r10, 0X2570);
    after_0:
    // 0x8003BA5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003BA60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003BA64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003BA68: jal         0x800B3C20
    // 0x8003BA6C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003BA6C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003BA70: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003BA74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BA78: lw          $v0, 0x2580($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X2580);
    // 0x8003BA7C: jr          $ra
    // 0x8003BA80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003BA80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003BA84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BA84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BA88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BA8C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003BA90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BA94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BA98: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003BA9C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8003BAA0: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8003BAA4: sh          $t6, 0x2578($t7)
    MEM_H(0X2578, ctx->r15) = ctx->r14;
    // 0x8003BAA8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003BAAC: lbu         $t8, 0x27($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X27);
    // 0x8003BAB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003BAB4: sb          $t8, 0x2570($t9)
    MEM_B(0X2570, ctx->r25) = ctx->r24;
    // 0x8003BAB8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003BABC: nop

    // 0x8003BAC0: addiu       $t1, $t0, 0x240
    ctx->r9 = ADD32(ctx->r8, 0X240);
    // 0x8003BAC4: sw          $t1, 0x2584($t0)
    MEM_W(0X2584, ctx->r8) = ctx->r9;
    // 0x8003BAC8: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003BACC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8003BAD0: nop

    // 0x8003BAD4: sw          $t2, 0x2588($t3)
    MEM_W(0X2588, ctx->r11) = ctx->r10;
    // 0x8003BAD8: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8003BADC: lbu         $t4, 0x23($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X23);
    // 0x8003BAE0: nop

    // 0x8003BAE4: sb          $t4, 0x2571($t5)
    MEM_B(0X2571, ctx->r13) = ctx->r12;
    // 0x8003BAE8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8003BAEC: nop

    // 0x8003BAF0: addiu       $a0, $t6, 0x1F8
    ctx->r4 = ADD32(ctx->r14, 0X1F8);
    // 0x8003BAF4: jal         0x800B34D0
    // 0x8003BAF8: addiu       $a1, $t6, 0x2570
    ctx->r5 = ADD32(ctx->r14, 0X2570);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003BAF8: addiu       $a1, $t6, 0x2570
    ctx->r5 = ADD32(ctx->r14, 0X2570);
    after_0:
    // 0x8003BAFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003BB00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003BB04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003BB08: jal         0x800B3C20
    // 0x8003BB0C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003BB0C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003BB10: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003BB14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BB18: lw          $v0, 0x2580($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X2580);
    // 0x8003BB1C: jr          $ra
    // 0x8003BB20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003BB20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003BB24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BB24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BB28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BB2C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003BB30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BB34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BB38: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003BB3C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8003BB40: sh          $t6, 0x2578($t7)
    MEM_H(0X2578, ctx->r15) = ctx->r14;
    // 0x8003BB44: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003BB48: lbu         $t8, 0x23($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X23);
    // 0x8003BB4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003BB50: sb          $t8, 0x2570($t9)
    MEM_B(0X2570, ctx->r25) = ctx->r24;
    // 0x8003BB54: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003BB58: nop

    // 0x8003BB5C: addiu       $t1, $t0, 0x240
    ctx->r9 = ADD32(ctx->r8, 0X240);
    // 0x8003BB60: sw          $t1, 0x2584($t0)
    MEM_W(0X2584, ctx->r8) = ctx->r9;
    // 0x8003BB64: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003BB68: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8003BB6C: nop

    // 0x8003BB70: sw          $t2, 0x2588($t3)
    MEM_W(0X2588, ctx->r11) = ctx->r10;
    // 0x8003BB74: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8003BB78: nop

    // 0x8003BB7C: addiu       $a0, $t4, 0x1F8
    ctx->r4 = ADD32(ctx->r12, 0X1F8);
    // 0x8003BB80: jal         0x800B34D0
    // 0x8003BB84: addiu       $a1, $t4, 0x2570
    ctx->r5 = ADD32(ctx->r12, 0X2570);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003BB84: addiu       $a1, $t4, 0x2570
    ctx->r5 = ADD32(ctx->r12, 0X2570);
    after_0:
    // 0x8003BB88: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003BB8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003BB90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003BB94: jal         0x800B3C20
    // 0x8003BB98: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003BB98: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003BB9C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8003BBA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BBA4: lw          $v0, 0x2580($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X2580);
    // 0x8003BBA8: jr          $ra
    // 0x8003BBAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003BBAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003BBB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BBB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BBB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BBB8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003BBBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BBC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BBC4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003BBC8: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x8003BBCC: sh          $t6, 0x2578($t7)
    MEM_H(0X2578, ctx->r15) = ctx->r14;
    // 0x8003BBD0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003BBD4: lbu         $t8, 0x23($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X23);
    // 0x8003BBD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003BBDC: sb          $t8, 0x2570($t9)
    MEM_B(0X2570, ctx->r25) = ctx->r24;
    // 0x8003BBE0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003BBE4: nop

    // 0x8003BBE8: addiu       $t1, $t0, 0x240
    ctx->r9 = ADD32(ctx->r8, 0X240);
    // 0x8003BBEC: sw          $t1, 0x2584($t0)
    MEM_W(0X2584, ctx->r8) = ctx->r9;
    // 0x8003BBF0: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003BBF4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8003BBF8: nop

    // 0x8003BBFC: sw          $t2, 0x2588($t3)
    MEM_W(0X2588, ctx->r11) = ctx->r10;
    // 0x8003BC00: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8003BC04: nop

    // 0x8003BC08: addiu       $a0, $t4, 0x1F8
    ctx->r4 = ADD32(ctx->r12, 0X1F8);
    // 0x8003BC0C: jal         0x800B34D0
    // 0x8003BC10: addiu       $a1, $t4, 0x2570
    ctx->r5 = ADD32(ctx->r12, 0X2570);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003BC10: addiu       $a1, $t4, 0x2570
    ctx->r5 = ADD32(ctx->r12, 0X2570);
    after_0:
    // 0x8003BC14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003BC18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003BC1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003BC20: jal         0x800B3C20
    // 0x8003BC24: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003BC24: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003BC28: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8003BC2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BC30: lw          $v0, 0x2580($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X2580);
    // 0x8003BC34: jr          $ra
    // 0x8003BC38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003BC38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003BC3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BC3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BC40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BC44: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8003BC48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BC4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BC50: sh          $zero, 0x2590($t6)
    MEM_H(0X2590, ctx->r14) = 0;
    // 0x8003BC54: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8003BC58: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x8003BC5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003BC60: sb          $t7, 0x2592($t8)
    MEM_B(0X2592, ctx->r24) = ctx->r15;
    // 0x8003BC64: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003BC68: nop

    // 0x8003BC6C: addiu       $t0, $t9, 0x240
    ctx->r8 = ADD32(ctx->r25, 0X240);
    // 0x8003BC70: sw          $t0, 0x25A4($t9)
    MEM_W(0X25A4, ctx->r25) = ctx->r8;
    // 0x8003BC74: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8003BC78: nop

    // 0x8003BC7C: addiu       $a0, $t1, 0x228
    ctx->r4 = ADD32(ctx->r9, 0X228);
    // 0x8003BC80: jal         0x800B34D0
    // 0x8003BC84: addiu       $a1, $t1, 0x2590
    ctx->r5 = ADD32(ctx->r9, 0X2590);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003BC84: addiu       $a1, $t1, 0x2590
    ctx->r5 = ADD32(ctx->r9, 0X2590);
    after_0:
    // 0x8003BC88: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003BC8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003BC90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003BC94: jal         0x800B3C20
    // 0x8003BC98: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003BC98: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003BC9C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8003BCA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BCA4: lw          $v0, 0x2594($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X2594);
    // 0x8003BCA8: jr          $ra
    // 0x8003BCAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003BCAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003BCB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BCB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BCB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BCB8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003BCBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BCC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BCC4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003BCC8: sh          $t6, 0x2590($t7)
    MEM_H(0X2590, ctx->r15) = ctx->r14;
    // 0x8003BCCC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003BCD0: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x8003BCD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003BCD8: sb          $t8, 0x2592($t9)
    MEM_B(0X2592, ctx->r25) = ctx->r24;
    // 0x8003BCDC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003BCE0: nop

    // 0x8003BCE4: addiu       $t1, $t0, 0x240
    ctx->r9 = ADD32(ctx->r8, 0X240);
    // 0x8003BCE8: sw          $t1, 0x25A4($t0)
    MEM_W(0X25A4, ctx->r8) = ctx->r9;
    // 0x8003BCEC: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8003BCF0: nop

    // 0x8003BCF4: addiu       $a0, $t2, 0x228
    ctx->r4 = ADD32(ctx->r10, 0X228);
    // 0x8003BCF8: jal         0x800B34D0
    // 0x8003BCFC: addiu       $a1, $t2, 0x2590
    ctx->r5 = ADD32(ctx->r10, 0X2590);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003BCFC: addiu       $a1, $t2, 0x2590
    ctx->r5 = ADD32(ctx->r10, 0X2590);
    after_0:
    // 0x8003BD00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003BD04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003BD08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003BD0C: jal         0x800B3C20
    // 0x8003BD10: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003BD10: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003BD14: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003BD18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BD1C: lw          $v0, 0x2594($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X2594);
    // 0x8003BD20: jr          $ra
    // 0x8003BD24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003BD24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003BD28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BD28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BD2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BD30: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003BD34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BD38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BD3C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8003BD40: sh          $t6, 0x2590($t7)
    MEM_H(0X2590, ctx->r15) = ctx->r14;
    // 0x8003BD44: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003BD48: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x8003BD4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003BD50: sb          $t8, 0x2592($t9)
    MEM_B(0X2592, ctx->r25) = ctx->r24;
    // 0x8003BD54: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003BD58: nop

    // 0x8003BD5C: addiu       $t1, $t0, 0x240
    ctx->r9 = ADD32(ctx->r8, 0X240);
    // 0x8003BD60: sw          $t1, 0x25A4($t0)
    MEM_W(0X25A4, ctx->r8) = ctx->r9;
    // 0x8003BD64: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8003BD68: nop

    // 0x8003BD6C: addiu       $a0, $t2, 0x228
    ctx->r4 = ADD32(ctx->r10, 0X228);
    // 0x8003BD70: jal         0x800B34D0
    // 0x8003BD74: addiu       $a1, $t2, 0x2590
    ctx->r5 = ADD32(ctx->r10, 0X2590);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003BD74: addiu       $a1, $t2, 0x2590
    ctx->r5 = ADD32(ctx->r10, 0X2590);
    after_0:
    // 0x8003BD78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003BD7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003BD80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003BD84: jal         0x800B3C20
    // 0x8003BD88: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003BD88: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003BD8C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003BD90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BD94: lw          $v0, 0x2594($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X2594);
    // 0x8003BD98: jr          $ra
    // 0x8003BD9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003BD9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003BDA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BDA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BDA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BDA8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003BDAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BDB0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BDB4: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8003BDB8: sh          $t6, 0x2590($t7)
    MEM_H(0X2590, ctx->r15) = ctx->r14;
    // 0x8003BDBC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003BDC0: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x8003BDC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003BDC8: sb          $t8, 0x2592($t9)
    MEM_B(0X2592, ctx->r25) = ctx->r24;
    // 0x8003BDCC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003BDD0: nop

    // 0x8003BDD4: addiu       $t1, $t0, 0x240
    ctx->r9 = ADD32(ctx->r8, 0X240);
    // 0x8003BDD8: sw          $t1, 0x25A4($t0)
    MEM_W(0X25A4, ctx->r8) = ctx->r9;
    // 0x8003BDDC: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8003BDE0: nop

    // 0x8003BDE4: addiu       $a0, $t2, 0x228
    ctx->r4 = ADD32(ctx->r10, 0X228);
    // 0x8003BDE8: jal         0x800B34D0
    // 0x8003BDEC: addiu       $a1, $t2, 0x2590
    ctx->r5 = ADD32(ctx->r10, 0X2590);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003BDEC: addiu       $a1, $t2, 0x2590
    ctx->r5 = ADD32(ctx->r10, 0X2590);
    after_0:
    // 0x8003BDF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003BDF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003BDF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003BDFC: jal         0x800B3C20
    // 0x8003BE00: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003BE00: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003BE04: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003BE08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BE0C: lw          $v0, 0x2594($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X2594);
    // 0x8003BE10: jr          $ra
    // 0x8003BE14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003BE14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003BE18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BE18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BE1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BE20: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003BE24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BE28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BE2C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003BE30: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8003BE34: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8003BE38: sh          $t6, 0x2590($t7)
    MEM_H(0X2590, ctx->r15) = ctx->r14;
    // 0x8003BE3C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003BE40: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x8003BE44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003BE48: sb          $t8, 0x2592($t9)
    MEM_B(0X2592, ctx->r25) = ctx->r24;
    // 0x8003BE4C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8003BE50: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8003BE54: nop

    // 0x8003BE58: sw          $t0, 0x259C($t1)
    MEM_W(0X259C, ctx->r9) = ctx->r8;
    // 0x8003BE5C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003BE60: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8003BE64: nop

    // 0x8003BE68: sw          $t2, 0x2598($t3)
    MEM_W(0X2598, ctx->r11) = ctx->r10;
    // 0x8003BE6C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8003BE70: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8003BE74: nop

    // 0x8003BE78: sw          $t4, 0x2594($t5)
    MEM_W(0X2594, ctx->r13) = ctx->r12;
    // 0x8003BE7C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8003BE80: nop

    // 0x8003BE84: sb          $zero, 0x25A0($t6)
    MEM_B(0X25A0, ctx->r14) = 0;
    // 0x8003BE88: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003BE8C: nop

    // 0x8003BE90: addiu       $t8, $t7, 0x240
    ctx->r24 = ADD32(ctx->r15, 0X240);
    // 0x8003BE94: sw          $t8, 0x25A4($t7)
    MEM_W(0X25A4, ctx->r15) = ctx->r24;
    // 0x8003BE98: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003BE9C: nop

    // 0x8003BEA0: addiu       $a0, $t9, 0x228
    ctx->r4 = ADD32(ctx->r25, 0X228);
    // 0x8003BEA4: jal         0x800B34D0
    // 0x8003BEA8: addiu       $a1, $t9, 0x2590
    ctx->r5 = ADD32(ctx->r25, 0X2590);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003BEA8: addiu       $a1, $t9, 0x2590
    ctx->r5 = ADD32(ctx->r25, 0X2590);
    after_0:
    // 0x8003BEAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003BEB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003BEB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003BEB8: jal         0x800B3C20
    // 0x8003BEBC: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003BEBC: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003BEC0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003BEC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BEC8: lw          $v0, 0x2594($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X2594);
    // 0x8003BECC: jr          $ra
    // 0x8003BED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003BED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003BED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BED4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BED8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BEDC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003BEE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BEE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BEE8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003BEEC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8003BEF0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8003BEF4: sh          $t6, 0x2590($t7)
    MEM_H(0X2590, ctx->r15) = ctx->r14;
    // 0x8003BEF8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003BEFC: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x8003BF00: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003BF04: sb          $t8, 0x2592($t9)
    MEM_B(0X2592, ctx->r25) = ctx->r24;
    // 0x8003BF08: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8003BF0C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8003BF10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003BF14: sw          $t0, 0x259C($t1)
    MEM_W(0X259C, ctx->r9) = ctx->r8;
    // 0x8003BF18: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8003BF1C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8003BF20: nop

    // 0x8003BF24: sw          $t2, 0x2598($t3)
    MEM_W(0X2598, ctx->r11) = ctx->r10;
    // 0x8003BF28: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8003BF2C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8003BF30: nop

    // 0x8003BF34: sw          $t4, 0x2594($t5)
    MEM_W(0X2594, ctx->r13) = ctx->r12;
    // 0x8003BF38: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003BF3C: nop

    // 0x8003BF40: sb          $t6, 0x25A0($t7)
    MEM_B(0X25A0, ctx->r15) = ctx->r14;
    // 0x8003BF44: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8003BF48: nop

    // 0x8003BF4C: addiu       $t9, $t8, 0x240
    ctx->r25 = ADD32(ctx->r24, 0X240);
    // 0x8003BF50: sw          $t9, 0x25A4($t8)
    MEM_W(0X25A4, ctx->r24) = ctx->r25;
    // 0x8003BF54: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003BF58: nop

    // 0x8003BF5C: addiu       $a0, $t0, 0x228
    ctx->r4 = ADD32(ctx->r8, 0X228);
    // 0x8003BF60: jal         0x800B34D0
    // 0x8003BF64: addiu       $a1, $t0, 0x2590
    ctx->r5 = ADD32(ctx->r8, 0X2590);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003BF64: addiu       $a1, $t0, 0x2590
    ctx->r5 = ADD32(ctx->r8, 0X2590);
    after_0:
    // 0x8003BF68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003BF6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003BF70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003BF74: jal         0x800B3C20
    // 0x8003BF78: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003BF78: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_1:
    // 0x8003BF7C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8003BF80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BF84: lw          $v0, 0x2594($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X2594);
    // 0x8003BF88: jr          $ra
    // 0x8003BF8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003BF8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003BF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BF90: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x8003BF94: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x8003BF98: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
    // 0x8003BF9C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003BFA0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8003BFA4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8003BFA8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8003BFAC: sh          $zero, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = 0;
    // 0x8003BFB0: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x8003BFB4: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x8003BFB8: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x8003BFBC: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x8003BFC0: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
    // 0x8003BFC4: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x8003BFC8: sb          $t6, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r14;
    // 0x8003BFCC: sw          $t7, 0x1F18($at)
    MEM_W(0X1F18, ctx->r1) = ctx->r15;
    // 0x8003BFD0: lw          $a0, 0x25A8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X25A8);
    // 0x8003BFD4: addiu       $a1, $t7, 0x354
    ctx->r5 = ADD32(ctx->r15, 0X354);
    // 0x8003BFD8: jal         0x8005ED58
    // 0x8003BFDC: addiu       $a2, $t7, 0x1B0
    ctx->r6 = ADD32(ctx->r15, 0X1B0);
    func_8005ED58(rdram, ctx);
        goto after_0;
    // 0x8003BFDC: addiu       $a2, $t7, 0x1B0
    ctx->r6 = ADD32(ctx->r15, 0X1B0);
    after_0:
L_8003BFE0:
    // 0x8003BFE0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003BFE4: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003BFE8: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x8003BFEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003BFF0: jal         0x800B3C20
    // 0x8003BFF4: addiu       $a0, $a0, 0x1B0
    ctx->r4 = ADD32(ctx->r4, 0X1B0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8003BFF4: addiu       $a0, $a0, 0x1B0
    ctx->r4 = ADD32(ctx->r4, 0X1B0);
    after_1:
    // 0x8003BFF8: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x8003BFFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003C000: lh          $s0, 0x0($t8)
    ctx->r16 = MEM_H(ctx->r24, 0X0);
    // 0x8003C004: nop

    // 0x8003C008: beq         $s0, $at, L_8003C020
    if (ctx->r16 == ctx->r1) {
        // 0x8003C00C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8003C020;
    }
    // 0x8003C00C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8003C010: beq         $s0, $at, L_8003DB3C
    if (ctx->r16 == ctx->r1) {
        // 0x8003C014: nop
    
            goto L_8003DB3C;
    }
    // 0x8003C014: nop

    // 0x8003C018: b           L_8003BFE0
    // 0x8003C01C: nop

        goto L_8003BFE0;
    // 0x8003C01C: nop

L_8003C020:
    // 0x8003C020: lbu         $t9, 0x87($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X87);
    // 0x8003C024: nop

    // 0x8003C028: beq         $t9, $zero, L_8003BFE0
    if (ctx->r25 == 0) {
        // 0x8003C02C: nop
    
            goto L_8003BFE0;
    }
    // 0x8003C02C: nop

    // 0x8003C030: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003C034: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003C038: sb          $zero, 0x87($sp)
    MEM_B(0X87, ctx->r29) = 0;
    // 0x8003C03C: jal         0x800B3D60
    // 0x8003C040: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    osContStartReadData_recomp(rdram, ctx);
        goto after_2;
    // 0x8003C040: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    after_2:
    // 0x8003C044: bne         $v0, $zero, L_8003C108
    if (ctx->r2 != 0) {
        // 0x8003C048: nop
    
            goto L_8003C108;
    }
    // 0x8003C048: nop

    // 0x8003C04C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8003C050: lw          $t0, 0x1F18($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1F18);
    // 0x8003C054: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003C058: addiu       $a0, $t0, 0x258
    ctx->r4 = ADD32(ctx->r8, 0X258);
    // 0x8003C05C: jal         0x800B3C20
    // 0x8003C060: addiu       $a1, $t0, 0x334
    ctx->r5 = ADD32(ctx->r8, 0X334);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x8003C060: addiu       $a1, $t0, 0x334
    ctx->r5 = ADD32(ctx->r8, 0X334);
    after_3:
    // 0x8003C064: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8003C068: lw          $t1, 0x1F18($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1F18);
    // 0x8003C06C: sh          $zero, 0x84($sp)
    MEM_H(0X84, ctx->r29) = 0;
    // 0x8003C070: lbu         $t2, 0x25AC($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X25AC);
    // 0x8003C074: nop

    // 0x8003C078: blez        $t2, L_8003C108
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8003C07C: nop
    
            goto L_8003C108;
    }
    // 0x8003C07C: nop

L_8003C080:
    // 0x8003C080: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003C084: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003C088: jal         0x800B3DE4
    // 0x8003C08C: addiu       $a0, $a0, 0x2372
    ctx->r4 = ADD32(ctx->r4, 0X2372);
    osContGetReadData_recomp(rdram, ctx);
        goto after_4;
    // 0x8003C08C: addiu       $a0, $a0, 0x2372
    ctx->r4 = ADD32(ctx->r4, 0X2372);
    after_4:
    // 0x8003C090: lh          $t4, 0x84($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X84);
    // 0x8003C094: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8003C098: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8003C09C: lw          $t3, 0x1F18($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1F18);
    // 0x8003C0A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8003C0A4: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x8003C0A8: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8003C0AC: addiu       $t7, $t6, 0x2372
    ctx->r15 = ADD32(ctx->r14, 0X2372);
    // 0x8003C0B0: sw          $t7, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r15;
    // 0x8003C0B4: lw          $t8, 0x2610($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X2610);
    // 0x8003C0B8: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x8003C0BC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8003C0C0: beq         $t0, $zero, L_8003C0DC
    if (ctx->r8 == 0) {
        // 0x8003C0C4: nop
    
            goto L_8003C0DC;
    }
    // 0x8003C0C4: nop

    // 0x8003C0C8: sll         $t1, $t4, 2
    ctx->r9 = S32(ctx->r12 << 2);
    // 0x8003C0CC: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x8003C0D0: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x8003C0D4: jal         0x800A3300
    // 0x8003C0D8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_800A3300(rdram, ctx);
        goto after_5;
    // 0x8003C0D8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_5:
L_8003C0DC:
    // 0x8003C0DC: lh          $t5, 0x84($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X84);
    // 0x8003C0E0: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8003C0E4: lw          $t0, 0x1F18($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1F18);
    // 0x8003C0E8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8003C0EC: sh          $t6, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r14;
    // 0x8003C0F0: lbu         $t4, 0x25AC($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X25AC);
    // 0x8003C0F4: sll         $t3, $t6, 16
    ctx->r11 = S32(ctx->r14 << 16);
    // 0x8003C0F8: sra         $t9, $t3, 16
    ctx->r25 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8003C0FC: slt         $at, $t9, $t4
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8003C100: bne         $at, $zero, L_8003C080
    if (ctx->r1 != 0) {
        // 0x8003C104: nop
    
            goto L_8003C080;
    }
    // 0x8003C104: nop

L_8003C108:
    // 0x8003C108: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003C10C: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003C110: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x8003C114: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003C118: jal         0x800B3C20
    // 0x8003C11C: addiu       $a0, $a0, 0x210
    ctx->r4 = ADD32(ctx->r4, 0X210);
    osRecvMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x8003C11C: addiu       $a0, $a0, 0x210
    ctx->r4 = ADD32(ctx->r4, 0X210);
    after_6:
    // 0x8003C120: bne         $v0, $zero, L_8003C194
    if (ctx->r2 != 0) {
        // 0x8003C124: nop
    
            goto L_8003C194;
    }
    // 0x8003C124: nop

    // 0x8003C128: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x8003C12C: nop

    // 0x8003C130: lhu         $t1, 0x4($t8)
    ctx->r9 = MEM_HU(ctx->r24, 0X4);
    // 0x8003C134: nop

    // 0x8003C138: bne         $t1, $zero, L_8003C194
    if (ctx->r9 != 0) {
        // 0x8003C13C: nop
    
            goto L_8003C194;
    }
    // 0x8003C13C: nop

    // 0x8003C140: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003C144: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003C148: jal         0x800B3F40
    // 0x8003C14C: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    osContStartQuery_recomp(rdram, ctx);
        goto after_7;
    // 0x8003C14C: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    after_7:
    // 0x8003C150: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003C154: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003C158: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003C15C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003C160: jal         0x800B3C20
    // 0x8003C164: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    osRecvMesg_recomp(rdram, ctx);
        goto after_8;
    // 0x8003C164: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    after_8:
    // 0x8003C168: lw          $t2, 0x90($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X90);
    // 0x8003C16C: nop

    // 0x8003C170: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    // 0x8003C174: jal         0x800B3FC4
    // 0x8003C178: nop

    tnt_osContGetQuery(rdram, ctx);
        goto after_9;
    // 0x8003C178: nop

    after_9:
    // 0x8003C17C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003C180: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003C184: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003C188: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003C18C: jal         0x800B34D0
    // 0x8003C190: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_10;
    // 0x8003C190: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_10:
L_8003C194:
    // 0x8003C194: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003C198: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003C19C: addiu       $a1, $sp, 0x98
    ctx->r5 = ADD32(ctx->r29, 0X98);
    // 0x8003C1A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003C1A4: jal         0x800B3C20
    // 0x8003C1A8: addiu       $a0, $a0, 0x1E0
    ctx->r4 = ADD32(ctx->r4, 0X1E0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_11;
    // 0x8003C1A8: addiu       $a0, $a0, 0x1E0
    ctx->r4 = ADD32(ctx->r4, 0X1E0);
    after_11:
    // 0x8003C1AC: bne         $v0, $zero, L_8003C3A8
    if (ctx->r2 != 0) {
        // 0x8003C1B0: nop
    
            goto L_8003C3A8;
    }
    // 0x8003C1B0: nop

    // 0x8003C1B4: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x8003C1B8: nop

    // 0x8003C1BC: lhu         $s0, 0x0($t7)
    ctx->r16 = MEM_HU(ctx->r15, 0X0);
    // 0x8003C1C0: nop

    // 0x8003C1C4: beq         $s0, $zero, L_8003C2F0
    if (ctx->r16 == 0) {
        // 0x8003C1C8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8003C2F0;
    }
    // 0x8003C1C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003C1CC: beq         $s0, $at, L_8003C270
    if (ctx->r16 == ctx->r1) {
        // 0x8003C1D0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8003C270;
    }
    // 0x8003C1D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003C1D4: beq         $s0, $at, L_8003C36C
    if (ctx->r16 == ctx->r1) {
        // 0x8003C1D8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8003C36C;
    }
    // 0x8003C1D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003C1DC: bne         $s0, $at, L_8003C3A8
    if (ctx->r16 != ctx->r1) {
        // 0x8003C1E0: nop
    
            goto L_8003C3A8;
    }
    // 0x8003C1E0: nop

    // 0x8003C1E4: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x8003C1E8: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8003C1EC: lw          $t3, 0x4($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X4);
    // 0x8003C1F0: lw          $t5, 0x1F18($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1F18);
    // 0x8003C1F4: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x8003C1F8: subu        $t0, $t0, $t3
    ctx->r8 = SUB32(ctx->r8, ctx->r11);
    // 0x8003C1FC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003C200: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x8003C204: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8003C208: addu        $a1, $t5, $t0
    ctx->r5 = ADD32(ctx->r13, ctx->r8);
    // 0x8003C20C: addiu       $a1, $a1, 0x238C
    ctx->r5 = ADD32(ctx->r5, 0X238C);
    // 0x8003C210: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8003C214: jal         0x800B3A84
    // 0x8003C218: addiu       $a0, $t5, 0x258
    ctx->r4 = ADD32(ctx->r13, 0X258);
    osMotorInit_recomp(rdram, ctx);
        goto after_12;
    // 0x8003C218: addiu       $a0, $t5, 0x258
    ctx->r4 = ADD32(ctx->r13, 0X258);
    after_12:
    // 0x8003C21C: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x8003C220: nop

    // 0x8003C224: sw          $v0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r2;
    // 0x8003C228: lw          $t4, 0x98($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X98);
    // 0x8003C22C: nop

    // 0x8003C230: lw          $t8, 0x8($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X8);
    // 0x8003C234: nop

    // 0x8003C238: beq         $t8, $zero, L_8003C250
    if (ctx->r24 == 0) {
        // 0x8003C23C: nop
    
            goto L_8003C250;
    }
    // 0x8003C23C: nop

    // 0x8003C240: sll         $t1, $t8, 4
    ctx->r9 = S32(ctx->r24 << 4);
    // 0x8003C244: andi        $t2, $t1, 0xF0
    ctx->r10 = ctx->r9 & 0XF0;
    // 0x8003C248: ori         $t7, $t2, 0xF
    ctx->r15 = ctx->r10 | 0XF;
    // 0x8003C24C: sw          $t7, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r15;
L_8003C250:
    // 0x8003C250: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003C254: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003C258: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003C25C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003C260: jal         0x800B34D0
    // 0x8003C264: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_13;
    // 0x8003C264: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_13:
    // 0x8003C268: b           L_8003C3A8
    // 0x8003C26C: nop

        goto L_8003C3A8;
    // 0x8003C26C: nop

L_8003C270:
    // 0x8003C270: lw          $t5, 0x98($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X98);
    // 0x8003C274: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8003C278: lw          $t0, 0x4($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X4);
    // 0x8003C27C: lw          $t6, 0x1F18($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F18);
    // 0x8003C280: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x8003C284: subu        $t3, $t3, $t0
    ctx->r11 = SUB32(ctx->r11, ctx->r8);
    // 0x8003C288: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003C28C: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x8003C290: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8003C294: addu        $a0, $t6, $t3
    ctx->r4 = ADD32(ctx->r14, ctx->r11);
    // 0x8003C298: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003C29C: jal         0x800B3810
    // 0x8003C2A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    __osMotorAccess_recomp(rdram, ctx);
        goto after_14;
    // 0x8003C2A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x8003C2A4: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x8003C2A8: sh          $v0, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r2;
    // 0x8003C2AC: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x8003C2B0: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8003C2B4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8003C2B8: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8003C2BC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8003C2C0: lw          $t9, 0x1F18($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1F18);
    // 0x8003C2C4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8003C2C8: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8003C2CC: addu        $a0, $t9, $t2
    ctx->r4 = ADD32(ctx->r25, ctx->r10);
    // 0x8003C2D0: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003C2D4: jal         0x800B3810
    // 0x8003C2D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    __osMotorAccess_recomp(rdram, ctx);
        goto after_15;
    // 0x8003C2D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x8003C2DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003C2E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8003C2E4: sh          $v0, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r2;
    // 0x8003C2E8: b           L_8003C3A8
    // 0x8003C2EC: sb          $t7, 0x5590($at)
    MEM_B(0X5590, ctx->r1) = ctx->r15;
        goto L_8003C3A8;
    // 0x8003C2EC: sb          $t7, 0x5590($at)
    MEM_B(0X5590, ctx->r1) = ctx->r15;
L_8003C2F0:
    // 0x8003C2F0: lw          $t5, 0x98($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X98);
    // 0x8003C2F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8003C2F8: sb          $zero, 0x5590($at)
    MEM_B(0X5590, ctx->r1) = 0;
    // 0x8003C2FC: lw          $t0, 0x4($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X4);
    // 0x8003C300: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8003C304: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x8003C308: subu        $t6, $t6, $t0
    ctx->r14 = SUB32(ctx->r14, ctx->r8);
    // 0x8003C30C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003C310: lw          $t4, 0x1F18($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1F18);
    // 0x8003C314: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x8003C318: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8003C31C: addu        $a0, $t4, $t6
    ctx->r4 = ADD32(ctx->r12, ctx->r14);
    // 0x8003C320: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003C324: jal         0x800B3810
    // 0x8003C328: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    __osMotorAccess_recomp(rdram, ctx);
        goto after_16;
    // 0x8003C328: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x8003C32C: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x8003C330: sh          $v0, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r2;
    // 0x8003C334: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x8003C338: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8003C33C: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x8003C340: subu        $t9, $t9, $t1
    ctx->r25 = SUB32(ctx->r25, ctx->r9);
    // 0x8003C344: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003C348: lw          $t3, 0x1F18($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1F18);
    // 0x8003C34C: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x8003C350: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8003C354: addu        $a0, $t3, $t9
    ctx->r4 = ADD32(ctx->r11, ctx->r25);
    // 0x8003C358: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003C35C: jal         0x800B3810
    // 0x8003C360: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    __osMotorAccess_recomp(rdram, ctx);
        goto after_17;
    // 0x8003C360: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x8003C364: b           L_8003C3A8
    // 0x8003C368: sh          $v0, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r2;
        goto L_8003C3A8;
    // 0x8003C368: sh          $v0, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r2;
L_8003C36C:
    // 0x8003C36C: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x8003C370: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8003C374: lw          $t7, 0x4($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X4);
    // 0x8003C378: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8003C37C: sw          $t7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r15;
    // 0x8003C380: lw          $t5, 0x8($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X8);
    // 0x8003C384: nop

    // 0x8003C388: sw          $t5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r13;
    // 0x8003C38C: lw          $t0, 0xC($t2)
    ctx->r8 = MEM_W(ctx->r10, 0XC);
    // 0x8003C390: sb          $t4, 0x5590($at)
    MEM_B(0X5590, ctx->r1) = ctx->r12;
    // 0x8003C394: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8003C398: sb          $zero, 0x5598($at)
    MEM_B(0X5598, ctx->r1) = 0;
    // 0x8003C39C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8003C3A0: sb          $zero, 0x5594($at)
    MEM_B(0X5594, ctx->r1) = 0;
    // 0x8003C3A4: sw          $t0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r8;
L_8003C3A8:
    // 0x8003C3A8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x8003C3AC: lbu         $t6, 0x5590($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5590);
    // 0x8003C3B0: nop

    // 0x8003C3B4: beq         $t6, $zero, L_8003C5E0
    if (ctx->r14 == 0) {
        // 0x8003C3B8: nop
    
            goto L_8003C5E0;
    }
    // 0x8003C3B8: nop

    // 0x8003C3BC: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x8003C3C0: lbu         $t8, 0x5594($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5594);
    // 0x8003C3C4: nop

    // 0x8003C3C8: bne         $t8, $zero, L_8003C5CC
    if (ctx->r24 != 0) {
        // 0x8003C3CC: nop
    
            goto L_8003C5CC;
    }
    // 0x8003C3CC: nop

    // 0x8003C3D0: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8003C3D4: lbu         $t1, 0x5598($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X5598);
    // 0x8003C3D8: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8003C3DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8003C3E0: addu        $t9, $t1, $t3
    ctx->r25 = ADD32(ctx->r9, ctx->r11);
    // 0x8003C3E4: lbu         $t7, 0x0($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X0);
    // 0x8003C3E8: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x8003C3EC: sb          $t7, 0x5594($at)
    MEM_B(0X5594, ctx->r1) = ctx->r15;
    // 0x8003C3F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8003C3F4: addiu       $t5, $t1, 0x1
    ctx->r13 = ADD32(ctx->r9, 0X1);
    // 0x8003C3F8: beq         $t2, $zero, L_8003C430
    if (ctx->r10 == 0) {
        // 0x8003C3FC: sb          $t5, 0x5598($at)
        MEM_B(0X5598, ctx->r1) = ctx->r13;
            goto L_8003C430;
    }
    // 0x8003C3FC: sb          $t5, 0x5598($at)
    MEM_B(0X5598, ctx->r1) = ctx->r13;
    // 0x8003C400: andi        $t0, $t5, 0xFF
    ctx->r8 = ctx->r13 & 0XFF;
    // 0x8003C404: slt         $at, $t2, $t0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8003C408: beq         $at, $zero, L_8003C4C8
    if (ctx->r1 == 0) {
        // 0x8003C40C: lui         $at, 0x800C
        ctx->r1 = S32(0X800C << 16);
            goto L_8003C4C8;
    }
    // 0x8003C40C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8003C410: sb          $zero, 0x5598($at)
    MEM_B(0X5598, ctx->r1) = 0;
    // 0x8003C414: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x8003C418: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8003C41C: sb          $t4, 0x5594($at)
    MEM_B(0X5594, ctx->r1) = ctx->r12;
    // 0x8003C420: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8003C424: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003C428: b           L_8003C4C8
    // 0x8003C42C: sb          $t6, 0x5598($at)
    MEM_B(0X5598, ctx->r1) = ctx->r14;
        goto L_8003C4C8;
    // 0x8003C42C: sb          $t6, 0x5598($at)
    MEM_B(0X5598, ctx->r1) = ctx->r14;
L_8003C430:
    // 0x8003C430: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x8003C434: lbu         $t8, 0x5594($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5594);
    // 0x8003C438: nop

    // 0x8003C43C: bne         $t8, $zero, L_8003C4C8
    if (ctx->r24 != 0) {
        // 0x8003C440: nop
    
            goto L_8003C4C8;
    }
    // 0x8003C440: nop

    // 0x8003C444: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x8003C448: lbu         $t9, 0x5598($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X5598);
    // 0x8003C44C: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8003C450: nop

    // 0x8003C454: addu        $t1, $t9, $t7
    ctx->r9 = ADD32(ctx->r25, ctx->r15);
    // 0x8003C458: lbu         $t5, 0x0($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X0);
    // 0x8003C45C: nop

    // 0x8003C460: bne         $t5, $zero, L_8003C4A4
    if (ctx->r13 != 0) {
        // 0x8003C464: nop
    
            goto L_8003C4A4;
    }
    // 0x8003C464: nop

    // 0x8003C468: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x8003C46C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8003C470: sb          $zero, 0x5590($at)
    MEM_B(0X5590, ctx->r1) = 0;
    // 0x8003C474: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x8003C478: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8003C47C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8003C480: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8003C484: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8003C488: lw          $t0, 0x1F18($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1F18);
    // 0x8003C48C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8003C490: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x8003C494: addu        $a0, $t0, $t4
    ctx->r4 = ADD32(ctx->r8, ctx->r12);
    // 0x8003C498: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003C49C: jal         0x800B3810
    // 0x8003C4A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    __osMotorAccess_recomp(rdram, ctx);
        goto after_18;
    // 0x8003C4A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
L_8003C4A4:
    // 0x8003C4A4: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8003C4A8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8003C4AC: sb          $zero, 0x5598($at)
    MEM_B(0X5598, ctx->r1) = 0;
    // 0x8003C4B0: lbu         $t8, 0x0($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X0);
    // 0x8003C4B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8003C4B8: sb          $t8, 0x5594($at)
    MEM_B(0X5594, ctx->r1) = ctx->r24;
    // 0x8003C4BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8003C4C0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8003C4C4: sb          $t9, 0x5598($at)
    MEM_B(0X5598, ctx->r1) = ctx->r25;
L_8003C4C8:
    // 0x8003C4C8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x8003C4CC: lbu         $t7, 0x5590($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X5590);
    // 0x8003C4D0: nop

    // 0x8003C4D4: beq         $t7, $zero, L_8003C5CC
    if (ctx->r15 == 0) {
        // 0x8003C4D8: nop
    
            goto L_8003C5CC;
    }
    // 0x8003C4D8: nop

    // 0x8003C4DC: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8003C4E0: lbu         $t1, 0x5598($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X5598);
    // 0x8003C4E4: nop

    // 0x8003C4E8: bgez        $t1, L_8003C4FC
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8003C4EC: andi        $t5, $t1, 0x1
        ctx->r13 = ctx->r9 & 0X1;
            goto L_8003C4FC;
    }
    // 0x8003C4EC: andi        $t5, $t1, 0x1
    ctx->r13 = ctx->r9 & 0X1;
    // 0x8003C4F0: beq         $t5, $zero, L_8003C4FC
    if (ctx->r13 == 0) {
        // 0x8003C4F4: nop
    
            goto L_8003C4FC;
    }
    // 0x8003C4F4: nop

    // 0x8003C4F8: addiu       $t5, $t5, -0x2
    ctx->r13 = ADD32(ctx->r13, -0X2);
L_8003C4FC:
    // 0x8003C4FC: beq         $t5, $zero, L_8003C56C
    if (ctx->r13 == 0) {
        // 0x8003C500: nop
    
            goto L_8003C56C;
    }
    // 0x8003C500: nop

    // 0x8003C504: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x8003C508: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8003C50C: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x8003C510: subu        $t0, $t0, $t3
    ctx->r8 = SUB32(ctx->r8, ctx->r11);
    // 0x8003C514: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003C518: lw          $t2, 0x1F18($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1F18);
    // 0x8003C51C: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x8003C520: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8003C524: addu        $a0, $t2, $t0
    ctx->r4 = ADD32(ctx->r10, ctx->r8);
    // 0x8003C528: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003C52C: jal         0x800B3810
    // 0x8003C530: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    __osMotorAccess_recomp(rdram, ctx);
        goto after_19;
    // 0x8003C530: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x8003C534: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x8003C538: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8003C53C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8003C540: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x8003C544: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003C548: lw          $t4, 0x1F18($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1F18);
    // 0x8003C54C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8003C550: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8003C554: addu        $a0, $t4, $t8
    ctx->r4 = ADD32(ctx->r12, ctx->r24);
    // 0x8003C558: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003C55C: jal         0x800B3810
    // 0x8003C560: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    __osMotorAccess_recomp(rdram, ctx);
        goto after_20;
    // 0x8003C560: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x8003C564: b           L_8003C5CC
    // 0x8003C568: nop

        goto L_8003C5CC;
    // 0x8003C568: nop

L_8003C56C:
    // 0x8003C56C: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x8003C570: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8003C574: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x8003C578: subu        $t1, $t1, $t7
    ctx->r9 = SUB32(ctx->r9, ctx->r15);
    // 0x8003C57C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8003C580: lw          $t9, 0x1F18($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1F18);
    // 0x8003C584: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x8003C588: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8003C58C: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    // 0x8003C590: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003C594: jal         0x800B3810
    // 0x8003C598: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    __osMotorAccess_recomp(rdram, ctx);
        goto after_21;
    // 0x8003C598: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_21:
    // 0x8003C59C: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x8003C5A0: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8003C5A4: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x8003C5A8: subu        $t2, $t2, $t3
    ctx->r10 = SUB32(ctx->r10, ctx->r11);
    // 0x8003C5AC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8003C5B0: lw          $t5, 0x1F18($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1F18);
    // 0x8003C5B4: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8003C5B8: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8003C5BC: addu        $a0, $t5, $t2
    ctx->r4 = ADD32(ctx->r13, ctx->r10);
    // 0x8003C5C0: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003C5C4: jal         0x800B3810
    // 0x8003C5C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    __osMotorAccess_recomp(rdram, ctx);
        goto after_22;
    // 0x8003C5C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_22:
L_8003C5CC:
    // 0x8003C5CC: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x8003C5D0: lbu         $t0, 0x5594($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X5594);
    // 0x8003C5D4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8003C5D8: addiu       $t6, $t0, -0x1
    ctx->r14 = ADD32(ctx->r8, -0X1);
    // 0x8003C5DC: sb          $t6, 0x5594($at)
    MEM_B(0X5594, ctx->r1) = ctx->r14;
L_8003C5E0:
    // 0x8003C5E0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003C5E4: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003C5E8: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x8003C5EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003C5F0: jal         0x800B3C20
    // 0x8003C5F4: addiu       $a0, $a0, 0x1C8
    ctx->r4 = ADD32(ctx->r4, 0X1C8);
    osRecvMesg_recomp(rdram, ctx);
        goto after_23;
    // 0x8003C5F4: addiu       $a0, $a0, 0x1C8
    ctx->r4 = ADD32(ctx->r4, 0X1C8);
    after_23:
    // 0x8003C5F8: bne         $v0, $zero, L_8003C800
    if (ctx->r2 != 0) {
        // 0x8003C5FC: nop
    
            goto L_8003C800;
    }
    // 0x8003C5FC: nop

    // 0x8003C600: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x8003C604: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003C608: lhu         $s0, 0x0($t4)
    ctx->r16 = MEM_HU(ctx->r12, 0X0);
    // 0x8003C60C: nop

    // 0x8003C610: beq         $s0, $at, L_8003C628
    if (ctx->r16 == ctx->r1) {
        // 0x8003C614: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8003C628;
    }
    // 0x8003C614: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003C618: beq         $s0, $at, L_8003C700
    if (ctx->r16 == ctx->r1) {
        // 0x8003C61C: nop
    
            goto L_8003C700;
    }
    // 0x8003C61C: nop

    // 0x8003C620: b           L_8003C800
    // 0x8003C624: nop

        goto L_8003C800;
    // 0x8003C624: nop

L_8003C628:
    // 0x8003C628: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8003C62C: lw          $t8, 0x1F10($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F10);
    // 0x8003C630: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x8003C634: bgez        $t8, L_8003C644
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8003C638: sra         $t7, $t8, 3
        ctx->r15 = S32(SIGNED(ctx->r24) >> 3);
            goto L_8003C644;
    }
    // 0x8003C638: sra         $t7, $t8, 3
    ctx->r15 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8003C63C: addiu       $at, $t8, 0x7
    ctx->r1 = ADD32(ctx->r24, 0X7);
    // 0x8003C640: sra         $t7, $at, 3
    ctx->r15 = S32(SIGNED(ctx->r1) >> 3);
L_8003C644:
    // 0x8003C644: blez        $t7, L_8003C6F0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8003C648: nop
    
            goto L_8003C6F0;
    }
    // 0x8003C648: nop

L_8003C64C:
    // 0x8003C64C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8003C650: lw          $t9, 0x1F18($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1F18);
    // 0x8003C654: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x8003C658: lw          $t1, 0x25B4($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X25B4);
    // 0x8003C65C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003C660: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x8003C664: lbu         $t2, 0x0($t5)
    ctx->r10 = MEM_BU(ctx->r13, 0X0);
    // 0x8003C668: nop

    // 0x8003C66C: bne         $t2, $at, L_8003C6BC
    if (ctx->r10 != ctx->r1) {
        // 0x8003C670: nop
    
            goto L_8003C6BC;
    }
    // 0x8003C670: nop

    // 0x8003C674: sb          $zero, 0x0($t5)
    MEM_B(0X0, ctx->r13) = 0;
    // 0x8003C678: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8003C67C: lw          $t0, 0x1F18($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1F18);
    // 0x8003C680: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x8003C684: lw          $t4, 0x25BC($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X25BC);
    // 0x8003C688: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x8003C68C: addiu       $a0, $t0, 0x258
    ctx->r4 = ADD32(ctx->r8, 0X258);
    // 0x8003C690: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8003C694: jal         0x800B3FF0
    // 0x8003C698: addu        $a2, $t4, $t8
    ctx->r6 = ADD32(ctx->r12, ctx->r24);
    osEepromWrite_recomp(rdram, ctx);
        goto after_24;
    // 0x8003C698: addu        $a2, $t4, $t8
    ctx->r6 = ADD32(ctx->r12, ctx->r24);
    after_24:
    // 0x8003C69C: bne         $v0, $zero, L_8003C6F0
    if (ctx->r2 != 0) {
        // 0x8003C6A0: nop
    
            goto L_8003C6F0;
    }
    // 0x8003C6A0: nop

    // 0x8003C6A4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003C6A8: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003C6AC: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x8003C6B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003C6B4: jal         0x800B3C20
    // 0x8003C6B8: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    osRecvMesg_recomp(rdram, ctx);
        goto after_25;
    // 0x8003C6B8: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    after_25:
L_8003C6BC:
    // 0x8003C6BC: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8003C6C0: lw          $t1, 0x1F10($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1F10);
    // 0x8003C6C4: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x8003C6C8: nop

    // 0x8003C6CC: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x8003C6D0: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
    // 0x8003C6D4: bgez        $t1, L_8003C6E4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8003C6D8: sra         $t3, $t1, 3
        ctx->r11 = S32(SIGNED(ctx->r9) >> 3);
            goto L_8003C6E4;
    }
    // 0x8003C6D8: sra         $t3, $t1, 3
    ctx->r11 = S32(SIGNED(ctx->r9) >> 3);
    // 0x8003C6DC: addiu       $at, $t1, 0x7
    ctx->r1 = ADD32(ctx->r9, 0X7);
    // 0x8003C6E0: sra         $t3, $at, 3
    ctx->r11 = S32(SIGNED(ctx->r1) >> 3);
L_8003C6E4:
    // 0x8003C6E4: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8003C6E8: bne         $at, $zero, L_8003C64C
    if (ctx->r1 != 0) {
        // 0x8003C6EC: nop
    
            goto L_8003C64C;
    }
    // 0x8003C6EC: nop

L_8003C6F0:
    // 0x8003C6F0: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8003C6F4: lw          $t2, 0x1F18($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1F18);
    // 0x8003C6F8: b           L_8003C800
    // 0x8003C6FC: sb          $zero, 0x25B9($t2)
    MEM_B(0X25B9, ctx->r10) = 0;
        goto L_8003C800;
    // 0x8003C6FC: sb          $zero, 0x25B9($t2)
    MEM_B(0X25B9, ctx->r10) = 0;
L_8003C700:
    // 0x8003C700: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8003C704: lw          $t5, 0x1F10($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1F10);
    // 0x8003C708: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x8003C70C: bgez        $t5, L_8003C71C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8003C710: sra         $t0, $t5, 3
        ctx->r8 = S32(SIGNED(ctx->r13) >> 3);
            goto L_8003C71C;
    }
    // 0x8003C710: sra         $t0, $t5, 3
    ctx->r8 = S32(SIGNED(ctx->r13) >> 3);
    // 0x8003C714: addiu       $at, $t5, 0x7
    ctx->r1 = ADD32(ctx->r13, 0X7);
    // 0x8003C718: sra         $t0, $at, 3
    ctx->r8 = S32(SIGNED(ctx->r1) >> 3);
L_8003C71C:
    // 0x8003C71C: blez        $t0, L_8003C79C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8003C720: nop
    
            goto L_8003C79C;
    }
    // 0x8003C720: nop

L_8003C724:
    // 0x8003C724: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8003C728: lw          $t6, 0x1F18($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F18);
    // 0x8003C72C: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x8003C730: lw          $t8, 0x25BC($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X25BC);
    // 0x8003C734: sll         $t7, $t4, 3
    ctx->r15 = S32(ctx->r12 << 3);
    // 0x8003C738: addiu       $a0, $t6, 0x258
    ctx->r4 = ADD32(ctx->r14, 0X258);
    // 0x8003C73C: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x8003C740: jal         0x800B43C0
    // 0x8003C744: addu        $a2, $t8, $t7
    ctx->r6 = ADD32(ctx->r24, ctx->r15);
    osEepromRead_recomp(rdram, ctx);
        goto after_26;
    // 0x8003C744: addu        $a2, $t8, $t7
    ctx->r6 = ADD32(ctx->r24, ctx->r15);
    after_26:
    // 0x8003C748: bne         $v0, $zero, L_8003C79C
    if (ctx->r2 != 0) {
        // 0x8003C74C: nop
    
            goto L_8003C79C;
    }
    // 0x8003C74C: nop

    // 0x8003C750: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003C754: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003C758: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x8003C75C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003C760: jal         0x800B3C20
    // 0x8003C764: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    osRecvMesg_recomp(rdram, ctx);
        goto after_27;
    // 0x8003C764: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    after_27:
    // 0x8003C768: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8003C76C: lw          $t3, 0x1F10($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1F10);
    // 0x8003C770: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x8003C774: nop

    // 0x8003C778: addiu       $t9, $t1, 0x1
    ctx->r25 = ADD32(ctx->r9, 0X1);
    // 0x8003C77C: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
    // 0x8003C780: bgez        $t3, L_8003C790
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8003C784: sra         $t2, $t3, 3
        ctx->r10 = S32(SIGNED(ctx->r11) >> 3);
            goto L_8003C790;
    }
    // 0x8003C784: sra         $t2, $t3, 3
    ctx->r10 = S32(SIGNED(ctx->r11) >> 3);
    // 0x8003C788: addiu       $at, $t3, 0x7
    ctx->r1 = ADD32(ctx->r11, 0X7);
    // 0x8003C78C: sra         $t2, $at, 3
    ctx->r10 = S32(SIGNED(ctx->r1) >> 3);
L_8003C790:
    // 0x8003C790: slt         $at, $t9, $t2
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8003C794: bne         $at, $zero, L_8003C724
    if (ctx->r1 != 0) {
        // 0x8003C798: nop
    
            goto L_8003C724;
    }
    // 0x8003C798: nop

L_8003C79C:
    // 0x8003C79C: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8003C7A0: lw          $t5, 0x1F10($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1F10);
    // 0x8003C7A4: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x8003C7A8: blez        $t5, L_8003C7F0
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8003C7AC: nop
    
            goto L_8003C7F0;
    }
    // 0x8003C7AC: nop

L_8003C7B0:
    // 0x8003C7B0: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8003C7B4: lw          $t0, 0x1F18($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1F18);
    // 0x8003C7B8: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x8003C7BC: lw          $t6, 0x25BC($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X25BC);
    // 0x8003C7C0: lw          $t1, 0x25B0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X25B0);
    // 0x8003C7C4: addu        $t8, $t6, $t4
    ctx->r24 = ADD32(ctx->r14, ctx->r12);
    // 0x8003C7C8: lbu         $t7, 0x0($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X0);
    // 0x8003C7CC: addu        $t3, $t1, $t4
    ctx->r11 = ADD32(ctx->r9, ctx->r12);
    // 0x8003C7D0: sb          $t7, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r15;
    // 0x8003C7D4: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x8003C7D8: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8003C7DC: lw          $t5, 0x1F10($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1F10);
    // 0x8003C7E0: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x8003C7E4: slt         $at, $t2, $t5
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8003C7E8: bne         $at, $zero, L_8003C7B0
    if (ctx->r1 != 0) {
        // 0x8003C7EC: sw          $t2, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r10;
            goto L_8003C7B0;
    }
    // 0x8003C7EC: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
L_8003C7F0:
    // 0x8003C7F0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8003C7F4: lw          $t6, 0x1F18($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F18);
    // 0x8003C7F8: nop

    // 0x8003C7FC: sb          $zero, 0x25B8($t6)
    MEM_B(0X25B8, ctx->r14) = 0;
L_8003C800:
    // 0x8003C800: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003C804: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003C808: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x8003C80C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003C810: jal         0x800B3C20
    // 0x8003C814: addiu       $a0, $a0, 0x1F8
    ctx->r4 = ADD32(ctx->r4, 0X1F8);
    osRecvMesg_recomp(rdram, ctx);
        goto after_28;
    // 0x8003C814: addiu       $a0, $a0, 0x1F8
    ctx->r4 = ADD32(ctx->r4, 0X1F8);
    after_28:
    // 0x8003C818: bne         $v0, $zero, L_8003CEEC
    if (ctx->r2 != 0) {
        // 0x8003C81C: nop
    
            goto L_8003CEEC;
    }
    // 0x8003C81C: nop

    // 0x8003C820: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x8003C824: nop

    // 0x8003C828: lhu         $t0, 0x8($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X8);
    // 0x8003C82C: nop

    // 0x8003C830: sltiu       $at, $t0, 0xA
    ctx->r1 = ctx->r8 < 0XA ? 1 : 0;
    // 0x8003C834: beq         $at, $zero, L_8003CEEC
    if (ctx->r1 == 0) {
        // 0x8003C838: nop
    
            goto L_8003CEEC;
    }
    // 0x8003C838: nop

    // 0x8003C83C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003C840: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8003C844: addu        $at, $at, $t0
    gpr jr_addend_8003C850 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8003C848: lw          $t0, -0x4C34($at)
    ctx->r8 = ADD32(ctx->r1, -0X4C34);
    // 0x8003C84C: nop

    // 0x8003C850: jr          $t0
    // 0x8003C854: nop

    switch (jr_addend_8003C850 >> 2) {
        case 0: goto L_8003C858; break;
        case 1: goto L_8003C8E4; break;
        case 2: goto L_8003C9A0; break;
        case 3: goto L_8003CA5C; break;
        case 4: goto L_8003CB24; break;
        case 5: goto L_8003CBE4; break;
        case 6: goto L_8003CC9C; break;
        case 7: goto L_8003CD58; break;
        case 8: goto L_8003CE00; break;
        case 9: goto L_8003CEA0; break;
        default: switch_error(__func__, 0x8003C850, 0x800DB3CC);
    }
    // 0x8003C854: nop

L_8003C858:
    // 0x8003C858: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x8003C85C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8003C860: lbu         $t7, 0x0($t4)
    ctx->r15 = MEM_BU(ctx->r12, 0X0);
    // 0x8003C864: lw          $t1, 0x1F18($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1F18);
    // 0x8003C868: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x8003C86C: subu        $t3, $t3, $t7
    ctx->r11 = SUB32(ctx->r11, ctx->r15);
    // 0x8003C870: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003C874: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x8003C878: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8003C87C: addu        $a1, $t1, $t3
    ctx->r5 = ADD32(ctx->r9, ctx->r11);
    // 0x8003C880: addiu       $a1, $a1, 0x238C
    ctx->r5 = ADD32(ctx->r5, 0X238C);
    // 0x8003C884: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8003C888: jal         0x800B3620
    // 0x8003C88C: addiu       $a0, $t1, 0x258
    ctx->r4 = ADD32(ctx->r9, 0X258);
    osPfsInitPak_recomp(rdram, ctx);
        goto after_29;
    // 0x8003C88C: addiu       $a0, $t1, 0x258
    ctx->r4 = ADD32(ctx->r9, 0X258);
    after_29:
    // 0x8003C890: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x8003C894: nop

    // 0x8003C898: sw          $v0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r2;
    // 0x8003C89C: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
    // 0x8003C8A0: nop

    // 0x8003C8A4: lw          $t5, 0x10($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X10);
    // 0x8003C8A8: nop

    // 0x8003C8AC: beq         $t5, $zero, L_8003C8C4
    if (ctx->r13 == 0) {
        // 0x8003C8B0: nop
    
            goto L_8003C8C4;
    }
    // 0x8003C8B0: nop

    // 0x8003C8B4: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x8003C8B8: andi        $t8, $t6, 0xF0
    ctx->r24 = ctx->r14 & 0XF0;
    // 0x8003C8BC: ori         $t0, $t8, 0xF
    ctx->r8 = ctx->r24 | 0XF;
    // 0x8003C8C0: sw          $t0, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r8;
L_8003C8C4:
    // 0x8003C8C4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003C8C8: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003C8CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003C8D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003C8D4: jal         0x800B34D0
    // 0x8003C8D8: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_30;
    // 0x8003C8D8: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_30:
    // 0x8003C8DC: b           L_8003CEEC
    // 0x8003C8E0: nop

        goto L_8003CEEC;
    // 0x8003C8E0: nop

L_8003C8E4:
    // 0x8003C8E4: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x8003C8E8: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8003C8EC: lbu         $t3, 0x0($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X0);
    // 0x8003C8F0: lw          $t9, 0x10($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X10);
    // 0x8003C8F4: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x8003C8F8: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x8003C8FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003C900: lbu         $a1, 0x1($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X1);
    // 0x8003C904: lw          $a3, 0xC($t1)
    ctx->r7 = MEM_W(ctx->r9, 0XC);
    // 0x8003C908: lw          $t4, 0x1F18($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1F18);
    // 0x8003C90C: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x8003C910: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8003C914: lw          $t5, 0x4($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X4);
    // 0x8003C918: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003C91C: addu        $a0, $t4, $t7
    ctx->r4 = ADD32(ctx->r12, ctx->r15);
    // 0x8003C920: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003C924: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003C928: jal         0x800B46E4
    // 0x8003C92C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    tnt_PfsUnknown_46E4(rdram, ctx);
        goto after_31;
    // 0x8003C92C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_31:
    // 0x8003C930: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x8003C934: nop

    // 0x8003C938: sw          $v0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r2;
    // 0x8003C93C: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x8003C940: nop

    // 0x8003C944: lw          $t0, 0x10($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X10);
    // 0x8003C948: nop

    // 0x8003C94C: bne         $t0, $zero, L_8003C960
    if (ctx->r8 != 0) {
        // 0x8003C950: nop
    
            goto L_8003C960;
    }
    // 0x8003C950: nop

    // 0x8003C954: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x8003C958: b           L_8003C980
    // 0x8003C95C: sw          $t2, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r10;
        goto L_8003C980;
    // 0x8003C95C: sw          $t2, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r10;
L_8003C960:
    // 0x8003C960: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x8003C964: nop

    // 0x8003C968: lw          $t4, 0x10($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X10);
    // 0x8003C96C: nop

    // 0x8003C970: sll         $t7, $t4, 4
    ctx->r15 = S32(ctx->r12 << 4);
    // 0x8003C974: andi        $t9, $t7, 0xF0
    ctx->r25 = ctx->r15 & 0XF0;
    // 0x8003C978: ori         $t1, $t9, 0xF
    ctx->r9 = ctx->r25 | 0XF;
    // 0x8003C97C: sw          $t1, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r9;
L_8003C980:
    // 0x8003C980: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003C984: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003C988: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003C98C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003C990: jal         0x800B34D0
    // 0x8003C994: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_32;
    // 0x8003C994: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_32:
    // 0x8003C998: b           L_8003CEEC
    // 0x8003C99C: nop

        goto L_8003CEEC;
    // 0x8003C99C: nop

L_8003C9A0:
    // 0x8003C9A0: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x8003C9A4: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8003C9A8: lbu         $t0, 0x0($t6)
    ctx->r8 = MEM_BU(ctx->r14, 0X0);
    // 0x8003C9AC: lw          $t8, 0x10($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X10);
    // 0x8003C9B0: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x8003C9B4: subu        $t2, $t2, $t0
    ctx->r10 = SUB32(ctx->r10, ctx->r8);
    // 0x8003C9B8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8003C9BC: lbu         $a1, 0x1($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X1);
    // 0x8003C9C0: lw          $a3, 0xC($t6)
    ctx->r7 = MEM_W(ctx->r14, 0XC);
    // 0x8003C9C4: lw          $t5, 0x1F18($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1F18);
    // 0x8003C9C8: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8003C9CC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8003C9D0: lw          $t4, 0x4($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X4);
    // 0x8003C9D4: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8003C9D8: addu        $a0, $t5, $t2
    ctx->r4 = ADD32(ctx->r13, ctx->r10);
    // 0x8003C9DC: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003C9E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003C9E4: jal         0x800B46E4
    // 0x8003C9E8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    tnt_PfsUnknown_46E4(rdram, ctx);
        goto after_33;
    // 0x8003C9E8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_33:
    // 0x8003C9EC: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x8003C9F0: nop

    // 0x8003C9F4: sw          $v0, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r2;
    // 0x8003C9F8: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x8003C9FC: nop

    // 0x8003CA00: lw          $t1, 0x10($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X10);
    // 0x8003CA04: nop

    // 0x8003CA08: bne         $t1, $zero, L_8003CA1C
    if (ctx->r9 != 0) {
        // 0x8003CA0C: nop
    
            goto L_8003CA1C;
    }
    // 0x8003CA0C: nop

    // 0x8003CA10: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x8003CA14: b           L_8003CA3C
    // 0x8003CA18: sw          $t3, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r11;
        goto L_8003CA3C;
    // 0x8003CA18: sw          $t3, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r11;
L_8003CA1C:
    // 0x8003CA1C: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CA20: nop

    // 0x8003CA24: lw          $t5, 0x10($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X10);
    // 0x8003CA28: nop

    // 0x8003CA2C: sll         $t2, $t5, 4
    ctx->r10 = S32(ctx->r13 << 4);
    // 0x8003CA30: andi        $t8, $t2, 0xF0
    ctx->r24 = ctx->r10 & 0XF0;
    // 0x8003CA34: ori         $t6, $t8, 0xF
    ctx->r14 = ctx->r24 | 0XF;
    // 0x8003CA38: sw          $t6, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r14;
L_8003CA3C:
    // 0x8003CA3C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003CA40: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003CA44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003CA48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003CA4C: jal         0x800B34D0
    // 0x8003CA50: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_34;
    // 0x8003CA50: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_34:
    // 0x8003CA54: b           L_8003CEEC
    // 0x8003CA58: nop

        goto L_8003CEEC;
    // 0x8003CA58: nop

L_8003CA5C:
    // 0x8003CA5C: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CA60: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8003CA64: lbu         $t1, 0x0($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X0);
    // 0x8003CA68: lw          $t9, 0x18($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X18);
    // 0x8003CA6C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8003CA70: subu        $t3, $t3, $t1
    ctx->r11 = SUB32(ctx->r11, ctx->r9);
    // 0x8003CA74: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003CA78: lhu         $a1, 0x8($t9)
    ctx->r5 = MEM_HU(ctx->r25, 0X8);
    // 0x8003CA7C: lw          $a2, 0x4($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X4);
    // 0x8003CA80: addiu       $t5, $t9, 0xA
    ctx->r13 = ADD32(ctx->r25, 0XA);
    // 0x8003CA84: lw          $t4, 0x1F18($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1F18);
    // 0x8003CA88: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8003CA8C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8003CA90: lw          $t2, 0x0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X0);
    // 0x8003CA94: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8003CA98: addiu       $t8, $sp, 0x64
    ctx->r24 = ADD32(ctx->r29, 0X64);
    // 0x8003CA9C: addu        $a0, $t4, $t3
    ctx->r4 = ADD32(ctx->r12, ctx->r11);
    // 0x8003CAA0: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003CAA4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8003CAA8: addiu       $a3, $t9, 0xE
    ctx->r7 = ADD32(ctx->r25, 0XE);
    // 0x8003CAAC: jal         0x800B4A60
    // 0x8003CAB0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    osPfsAllocateFile_recomp(rdram, ctx);
        goto after_35;
    // 0x8003CAB0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_35:
    // 0x8003CAB4: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CAB8: nop

    // 0x8003CABC: sw          $v0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r2;
    // 0x8003CAC0: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CAC4: nop

    // 0x8003CAC8: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x8003CACC: nop

    // 0x8003CAD0: bne         $t1, $zero, L_8003CAE4
    if (ctx->r9 != 0) {
        // 0x8003CAD4: nop
    
            goto L_8003CAE4;
    }
    // 0x8003CAD4: nop

    // 0x8003CAD8: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x8003CADC: b           L_8003CB04
    // 0x8003CAE0: sw          $t4, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r12;
        goto L_8003CB04;
    // 0x8003CAE0: sw          $t4, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r12;
L_8003CAE4:
    // 0x8003CAE4: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CAE8: nop

    // 0x8003CAEC: lw          $t7, 0x10($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X10);
    // 0x8003CAF0: nop

    // 0x8003CAF4: sll         $t5, $t7, 4
    ctx->r13 = S32(ctx->r15 << 4);
    // 0x8003CAF8: andi        $t9, $t5, 0xF0
    ctx->r25 = ctx->r13 & 0XF0;
    // 0x8003CAFC: ori         $t2, $t9, 0xF
    ctx->r10 = ctx->r25 | 0XF;
    // 0x8003CB00: sw          $t2, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r10;
L_8003CB04:
    // 0x8003CB04: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003CB08: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003CB0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003CB10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003CB14: jal         0x800B34D0
    // 0x8003CB18: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_36;
    // 0x8003CB18: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_36:
    // 0x8003CB1C: b           L_8003CEEC
    // 0x8003CB20: nop

        goto L_8003CEEC;
    // 0x8003CB20: nop

L_8003CB24:
    // 0x8003CB24: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CB28: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8003CB2C: lbu         $t1, 0x0($t6)
    ctx->r9 = MEM_BU(ctx->r14, 0X0);
    // 0x8003CB30: lw          $t0, 0x18($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X18);
    // 0x8003CB34: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x8003CB38: subu        $t4, $t4, $t1
    ctx->r12 = SUB32(ctx->r12, ctx->r9);
    // 0x8003CB3C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8003CB40: lw          $t8, 0x1F18($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F18);
    // 0x8003CB44: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8003CB48: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x8003CB4C: lhu         $a1, 0x8($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X8);
    // 0x8003CB50: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x8003CB54: addiu       $t5, $sp, 0x64
    ctx->r13 = ADD32(ctx->r29, 0X64);
    // 0x8003CB58: addiu       $t7, $t0, 0xA
    ctx->r15 = ADD32(ctx->r8, 0XA);
    // 0x8003CB5C: addu        $a0, $t8, $t4
    ctx->r4 = ADD32(ctx->r24, ctx->r12);
    // 0x8003CB60: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003CB64: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8003CB68: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8003CB6C: jal         0x800B4EE0
    // 0x8003CB70: addiu       $a3, $t0, 0xE
    ctx->r7 = ADD32(ctx->r8, 0XE);
    osPfsFindFile_recomp(rdram, ctx);
        goto after_37;
    // 0x8003CB70: addiu       $a3, $t0, 0xE
    ctx->r7 = ADD32(ctx->r8, 0XE);
    after_37:
    // 0x8003CB74: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CB78: nop

    // 0x8003CB7C: sw          $v0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r2;
    // 0x8003CB80: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CB84: nop

    // 0x8003CB88: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x8003CB8C: nop

    // 0x8003CB90: bne         $t3, $zero, L_8003CBA4
    if (ctx->r11 != 0) {
        // 0x8003CB94: nop
    
            goto L_8003CBA4;
    }
    // 0x8003CB94: nop

    // 0x8003CB98: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x8003CB9C: b           L_8003CBC4
    // 0x8003CBA0: sw          $t1, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r9;
        goto L_8003CBC4;
    // 0x8003CBA0: sw          $t1, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r9;
L_8003CBA4:
    // 0x8003CBA4: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CBA8: nop

    // 0x8003CBAC: lw          $t4, 0x10($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X10);
    // 0x8003CBB0: nop

    // 0x8003CBB4: sll         $t6, $t4, 4
    ctx->r14 = S32(ctx->r12 << 4);
    // 0x8003CBB8: andi        $t0, $t6, 0xF0
    ctx->r8 = ctx->r14 & 0XF0;
    // 0x8003CBBC: ori         $t7, $t0, 0xF
    ctx->r15 = ctx->r8 | 0XF;
    // 0x8003CBC0: sw          $t7, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r15;
L_8003CBC4:
    // 0x8003CBC4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003CBC8: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003CBCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003CBD0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003CBD4: jal         0x800B34D0
    // 0x8003CBD8: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_38;
    // 0x8003CBD8: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_38:
    // 0x8003CBDC: b           L_8003CEEC
    // 0x8003CBE0: nop

        goto L_8003CEEC;
    // 0x8003CBE0: nop

L_8003CBE4:
    // 0x8003CBE4: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CBE8: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8003CBEC: lbu         $t3, 0x0($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X0);
    // 0x8003CBF0: lw          $t2, 0x18($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X18);
    // 0x8003CBF4: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x8003CBF8: subu        $t1, $t1, $t3
    ctx->r9 = SUB32(ctx->r9, ctx->r11);
    // 0x8003CBFC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8003CC00: lw          $t5, 0x1F18($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1F18);
    // 0x8003CC04: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x8003CC08: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8003CC0C: lhu         $a1, 0x8($t2)
    ctx->r5 = MEM_HU(ctx->r10, 0X8);
    // 0x8003CC10: lw          $a2, 0x4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X4);
    // 0x8003CC14: addiu       $t4, $t2, 0xA
    ctx->r12 = ADD32(ctx->r10, 0XA);
    // 0x8003CC18: addu        $a0, $t5, $t1
    ctx->r4 = ADD32(ctx->r13, ctx->r9);
    // 0x8003CC1C: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003CC20: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8003CC24: jal         0x800B5090
    // 0x8003CC28: addiu       $a3, $t2, 0xE
    ctx->r7 = ADD32(ctx->r10, 0XE);
    osPfsDeleteFile_recomp(rdram, ctx);
        goto after_39;
    // 0x8003CC28: addiu       $a3, $t2, 0xE
    ctx->r7 = ADD32(ctx->r10, 0XE);
    after_39:
    // 0x8003CC2C: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CC30: nop

    // 0x8003CC34: sw          $v0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r2;
    // 0x8003CC38: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CC3C: nop

    // 0x8003CC40: lw          $t7, 0x10($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X10);
    // 0x8003CC44: nop

    // 0x8003CC48: bne         $t7, $zero, L_8003CC5C
    if (ctx->r15 != 0) {
        // 0x8003CC4C: nop
    
            goto L_8003CC5C;
    }
    // 0x8003CC4C: nop

    // 0x8003CC50: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x8003CC54: b           L_8003CC7C
    // 0x8003CC58: sw          $t8, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r24;
        goto L_8003CC7C;
    // 0x8003CC58: sw          $t8, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r24;
L_8003CC5C:
    // 0x8003CC5C: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CC60: nop

    // 0x8003CC64: lw          $t5, 0x10($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X10);
    // 0x8003CC68: nop

    // 0x8003CC6C: sll         $t1, $t5, 4
    ctx->r9 = S32(ctx->r13 << 4);
    // 0x8003CC70: andi        $t9, $t1, 0xF0
    ctx->r25 = ctx->r9 & 0XF0;
    // 0x8003CC74: ori         $t2, $t9, 0xF
    ctx->r10 = ctx->r25 | 0XF;
    // 0x8003CC78: sw          $t2, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r10;
L_8003CC7C:
    // 0x8003CC7C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003CC80: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003CC84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003CC88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003CC8C: jal         0x800B34D0
    // 0x8003CC90: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_40;
    // 0x8003CC90: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_40:
    // 0x8003CC94: b           L_8003CEEC
    // 0x8003CC98: nop

        goto L_8003CEEC;
    // 0x8003CC98: nop

L_8003CC9C:
    // 0x8003CC9C: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CCA0: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8003CCA4: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8003CCA8: lw          $t4, 0x1F18($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1F18);
    // 0x8003CCAC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8003CCB0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8003CCB4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003CCB8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8003CCBC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8003CCC0: addu        $a0, $t4, $t8
    ctx->r4 = ADD32(ctx->r12, ctx->r24);
    // 0x8003CCC4: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003CCC8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x8003CCCC: jal         0x800B5300
    // 0x8003CCD0: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    osPfsFileState_recomp(rdram, ctx);
        goto after_41;
    // 0x8003CCD0: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_41:
    // 0x8003CCD4: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CCD8: nop

    // 0x8003CCDC: sw          $v0, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r2;
    // 0x8003CCE0: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CCE4: nop

    // 0x8003CCE8: lw          $t1, 0x10($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X10);
    // 0x8003CCEC: nop

    // 0x8003CCF0: bne         $t1, $zero, L_8003CD18
    if (ctx->r9 != 0) {
        // 0x8003CCF4: nop
    
            goto L_8003CD18;
    }
    // 0x8003CCF4: nop

    // 0x8003CCF8: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x8003CCFC: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x8003CD00: sll         $t2, $t9, 16
    ctx->r10 = S32(ctx->r25 << 16);
    // 0x8003CD04: andi        $t3, $t2, 0xFF00
    ctx->r11 = ctx->r10 & 0XFF00;
    // 0x8003CD08: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8003CD0C: or          $t4, $t3, $t7
    ctx->r12 = ctx->r11 | ctx->r15;
    // 0x8003CD10: b           L_8003CD38
    // 0x8003CD14: sw          $t4, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->r12;
        goto L_8003CD38;
    // 0x8003CD14: sw          $t4, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->r12;
L_8003CD18:
    // 0x8003CD18: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CD1C: nop

    // 0x8003CD20: lw          $t0, 0x10($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X10);
    // 0x8003CD24: nop

    // 0x8003CD28: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x8003CD2C: andi        $t9, $t1, 0xF0
    ctx->r25 = ctx->r9 & 0XF0;
    // 0x8003CD30: ori         $t2, $t9, 0xF
    ctx->r10 = ctx->r25 | 0XF;
    // 0x8003CD34: sw          $t2, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r10;
L_8003CD38:
    // 0x8003CD38: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003CD3C: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003CD40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003CD44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003CD48: jal         0x800B34D0
    // 0x8003CD4C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_42;
    // 0x8003CD4C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_42:
    // 0x8003CD50: b           L_8003CEEC
    // 0x8003CD54: nop

        goto L_8003CEEC;
    // 0x8003CD54: nop

L_8003CD58:
    // 0x8003CD58: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CD5C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8003CD60: lbu         $t7, 0x0($t3)
    ctx->r15 = MEM_BU(ctx->r11, 0X0);
    // 0x8003CD64: lw          $t6, 0x1F18($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F18);
    // 0x8003CD68: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x8003CD6C: subu        $t4, $t4, $t7
    ctx->r12 = SUB32(ctx->r12, ctx->r15);
    // 0x8003CD70: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8003CD74: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x8003CD78: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x8003CD7C: lbu         $a1, 0x1($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0X1);
    // 0x8003CD80: lw          $a2, 0x18($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X18);
    // 0x8003CD84: addu        $a0, $t6, $t4
    ctx->r4 = ADD32(ctx->r14, ctx->r12);
    // 0x8003CD88: jal         0x800B5420
    // 0x8003CD8C: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    osPfsReadWriteFile_recomp(rdram, ctx);
        goto after_43;
    // 0x8003CD8C: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    after_43:
    // 0x8003CD90: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CD94: nop

    // 0x8003CD98: sw          $v0, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->r2;
    // 0x8003CD9C: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CDA0: nop

    // 0x8003CDA4: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x8003CDA8: nop

    // 0x8003CDAC: bne         $t1, $zero, L_8003CDC0
    if (ctx->r9 != 0) {
        // 0x8003CDB0: nop
    
            goto L_8003CDC0;
    }
    // 0x8003CDB0: nop

    // 0x8003CDB4: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x8003CDB8: b           L_8003CDE0
    // 0x8003CDBC: sw          $t9, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r25;
        goto L_8003CDE0;
    // 0x8003CDBC: sw          $t9, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r25;
L_8003CDC0:
    // 0x8003CDC0: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CDC4: nop

    // 0x8003CDC8: lw          $t8, 0x10($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X10);
    // 0x8003CDCC: nop

    // 0x8003CDD0: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x8003CDD4: andi        $t6, $t7, 0xF0
    ctx->r14 = ctx->r15 & 0XF0;
    // 0x8003CDD8: ori         $t4, $t6, 0xF
    ctx->r12 = ctx->r14 | 0XF;
    // 0x8003CDDC: sw          $t4, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r12;
L_8003CDE0:
    // 0x8003CDE0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003CDE4: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003CDE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003CDEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003CDF0: jal         0x800B34D0
    // 0x8003CDF4: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_44;
    // 0x8003CDF4: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_44:
    // 0x8003CDF8: b           L_8003CEEC
    // 0x8003CDFC: nop

        goto L_8003CEEC;
    // 0x8003CDFC: nop

L_8003CE00:
    // 0x8003CE00: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CE04: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8003CE08: lbu         $t1, 0x0($t5)
    ctx->r9 = MEM_BU(ctx->r13, 0X0);
    // 0x8003CE0C: lw          $t3, 0x1F18($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1F18);
    // 0x8003CE10: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x8003CE14: subu        $t9, $t9, $t1
    ctx->r25 = SUB32(ctx->r25, ctx->r9);
    // 0x8003CE18: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003CE1C: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x8003CE20: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8003CE24: addu        $a0, $t3, $t9
    ctx->r4 = ADD32(ctx->r11, ctx->r25);
    // 0x8003CE28: jal         0x800B5600
    // 0x8003CE2C: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    osPfsRepairId_recomp(rdram, ctx);
        goto after_45;
    // 0x8003CE2C: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    after_45:
    // 0x8003CE30: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CE34: nop

    // 0x8003CE38: sw          $v0, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r2;
    // 0x8003CE3C: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CE40: nop

    // 0x8003CE44: lw          $t7, 0x10($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X10);
    // 0x8003CE48: nop

    // 0x8003CE4C: bne         $t7, $zero, L_8003CE60
    if (ctx->r15 != 0) {
        // 0x8003CE50: nop
    
            goto L_8003CE60;
    }
    // 0x8003CE50: nop

    // 0x8003CE54: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x8003CE58: b           L_8003CE80
    // 0x8003CE5C: sw          $t6, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r14;
        goto L_8003CE80;
    // 0x8003CE5C: sw          $t6, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r14;
L_8003CE60:
    // 0x8003CE60: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CE64: nop

    // 0x8003CE68: lw          $t2, 0x10($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X10);
    // 0x8003CE6C: nop

    // 0x8003CE70: sll         $t5, $t2, 4
    ctx->r13 = S32(ctx->r10 << 4);
    // 0x8003CE74: andi        $t1, $t5, 0xF0
    ctx->r9 = ctx->r13 & 0XF0;
    // 0x8003CE78: ori         $t3, $t1, 0xF
    ctx->r11 = ctx->r9 | 0XF;
    // 0x8003CE7C: sw          $t3, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r11;
L_8003CE80:
    // 0x8003CE80: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003CE84: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003CE88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003CE8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003CE90: jal         0x800B34D0
    // 0x8003CE94: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_46;
    // 0x8003CE94: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_46:
    // 0x8003CE98: b           L_8003CEEC
    // 0x8003CE9C: nop

        goto L_8003CEEC;
    // 0x8003CE9C: nop

L_8003CEA0:
    // 0x8003CEA0: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x8003CEA4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8003CEA8: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x8003CEAC: lw          $t9, 0x1F18($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1F18);
    // 0x8003CEB0: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8003CEB4: subu        $t6, $t6, $t7
    ctx->r14 = SUB32(ctx->r14, ctx->r15);
    // 0x8003CEB8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003CEBC: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x8003CEC0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8003CEC4: addu        $a0, $t9, $t6
    ctx->r4 = ADD32(ctx->r25, ctx->r14);
    // 0x8003CEC8: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003CECC: jal         0x800B5660
    // 0x8003CED0: addiu       $a1, $t0, 0x10
    ctx->r5 = ADD32(ctx->r8, 0X10);
    osPfsFreeBlocks_recomp(rdram, ctx);
        goto after_47;
    // 0x8003CED0: addiu       $a1, $t0, 0x10
    ctx->r5 = ADD32(ctx->r8, 0X10);
    after_47:
    // 0x8003CED4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003CED8: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003CEDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003CEE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003CEE4: jal         0x800B34D0
    // 0x8003CEE8: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_48;
    // 0x8003CEE8: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_48:
L_8003CEEC:
    // 0x8003CEEC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003CEF0: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003CEF4: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x8003CEF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003CEFC: jal         0x800B3C20
    // 0x8003CF00: addiu       $a0, $a0, 0x228
    ctx->r4 = ADD32(ctx->r4, 0X228);
    osRecvMesg_recomp(rdram, ctx);
        goto after_49;
    // 0x8003CF00: addiu       $a0, $a0, 0x228
    ctx->r4 = ADD32(ctx->r4, 0X228);
    after_49:
    // 0x8003CF04: bne         $v0, $zero, L_8003DB30
    if (ctx->r2 != 0) {
        // 0x8003CF08: nop
    
            goto L_8003DB30;
    }
    // 0x8003CF08: nop

    // 0x8003CF0C: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x8003CF10: nop

    // 0x8003CF14: lhu         $t2, 0x0($t8)
    ctx->r10 = MEM_HU(ctx->r24, 0X0);
    // 0x8003CF18: nop

    // 0x8003CF1C: sltiu       $at, $t2, 0x5
    ctx->r1 = ctx->r10 < 0X5 ? 1 : 0;
    // 0x8003CF20: beq         $at, $zero, L_8003DB30
    if (ctx->r1 == 0) {
        // 0x8003CF24: nop
    
            goto L_8003DB30;
    }
    // 0x8003CF24: nop

    // 0x8003CF28: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8003CF2C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8003CF30: addu        $at, $at, $t2
    gpr jr_addend_8003CF3C = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8003CF34: lw          $t2, -0x4C0C($at)
    ctx->r10 = ADD32(ctx->r1, -0X4C0C);
    // 0x8003CF38: nop

    // 0x8003CF3C: jr          $t2
    // 0x8003CF40: nop

    switch (jr_addend_8003CF3C >> 2) {
        case 0: goto L_8003CF44; break;
        case 1: goto L_8003CFDC; break;
        case 2: goto L_8003D09C; break;
        case 3: goto L_8003D6BC; break;
        case 4: goto L_8003D3AC; break;
        default: switch_error(__func__, 0x8003CF3C, 0x800DB3F4);
    }
    // 0x8003CF40: nop

L_8003CF44:
    // 0x8003CF44: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003CF48: jal         0x800B3BFC
    // 0x8003CF4C: addiu       $a0, $a0, -0x4C44
    ctx->r4 = ADD32(ctx->r4, -0X4C44);
    osSyncPrintf(rdram, ctx);
        goto after_50;
    // 0x8003CF4C: addiu       $a0, $a0, -0x4C44
    ctx->r4 = ADD32(ctx->r4, -0X4C44);
    after_50:
    // 0x8003CF50: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x8003CF54: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8003CF58: lbu         $t3, 0x2($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X2);
    // 0x8003CF5C: lw          $t5, 0x1F18($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1F18);
    // 0x8003CF60: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8003CF64: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8003CF68: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8003CF6C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8003CF70: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x8003CF74: addu        $a1, $t5, $t4
    ctx->r5 = ADD32(ctx->r13, ctx->r12);
    // 0x8003CF78: addiu       $a1, $a1, 0x238C
    ctx->r5 = ADD32(ctx->r5, 0X238C);
    // 0x8003CF7C: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8003CF80: jal         0x800B5800
    // 0x8003CF84: addiu       $a0, $t5, 0x258
    ctx->r4 = ADD32(ctx->r13, 0X258);
    osGbpakInit(rdram, ctx);
        goto after_51;
    // 0x8003CF84: addiu       $a0, $t5, 0x258
    ctx->r4 = ADD32(ctx->r13, 0X258);
    after_51:
    // 0x8003CF88: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x8003CF8C: nop

    // 0x8003CF90: sw          $v0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r2;
    // 0x8003CF94: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x8003CF98: nop

    // 0x8003CF9C: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x8003CFA0: nop

    // 0x8003CFA4: beq         $t6, $zero, L_8003CFBC
    if (ctx->r14 == 0) {
        // 0x8003CFA8: nop
    
            goto L_8003CFBC;
    }
    // 0x8003CFA8: nop

    // 0x8003CFAC: sll         $t0, $t6, 4
    ctx->r8 = S32(ctx->r14 << 4);
    // 0x8003CFB0: andi        $t8, $t0, 0xF0
    ctx->r24 = ctx->r8 & 0XF0;
    // 0x8003CFB4: ori         $t2, $t8, 0xF
    ctx->r10 = ctx->r24 | 0XF;
    // 0x8003CFB8: sw          $t2, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r10;
L_8003CFBC:
    // 0x8003CFBC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003CFC0: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003CFC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003CFC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003CFCC: jal         0x800B34D0
    // 0x8003CFD0: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_52;
    // 0x8003CFD0: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_52:
    // 0x8003CFD4: b           L_8003DB30
    // 0x8003CFD8: nop

        goto L_8003DB30;
    // 0x8003CFD8: nop

L_8003CFDC:
    // 0x8003CFDC: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x8003CFE0: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8003CFE4: lbu         $t4, 0x2($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0X2);
    // 0x8003CFE8: lw          $t1, 0x1F18($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1F18);
    // 0x8003CFEC: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x8003CFF0: subu        $t3, $t3, $t4
    ctx->r11 = SUB32(ctx->r11, ctx->r12);
    // 0x8003CFF4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003CFF8: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8003CFFC: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8003D000: addu        $a0, $t1, $t3
    ctx->r4 = ADD32(ctx->r9, ctx->r11);
    // 0x8003D004: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003D008: jal         0x800B5A20
    // 0x8003D00C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    osGbpakPower(rdram, ctx);
        goto after_53;
    // 0x8003D00C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_53:
    // 0x8003D010: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x8003D014: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8003D018: lbu         $t0, 0x2($t6)
    ctx->r8 = MEM_BU(ctx->r14, 0X2);
    // 0x8003D01C: lw          $t7, 0x1F18($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1F18);
    // 0x8003D020: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x8003D024: subu        $t8, $t8, $t0
    ctx->r24 = SUB32(ctx->r24, ctx->r8);
    // 0x8003D028: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003D02C: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x8003D030: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8003D034: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x8003D038: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003D03C: addiu       $a2, $t6, 0x10
    ctx->r6 = ADD32(ctx->r14, 0X10);
    // 0x8003D040: jal         0x800B5B30
    // 0x8003D044: addiu       $a1, $t7, 0x25C0
    ctx->r5 = ADD32(ctx->r15, 0X25C0);
    func_800B5B30(rdram, ctx);
        goto after_54;
    // 0x8003D044: addiu       $a1, $t7, 0x25C0
    ctx->r5 = ADD32(ctx->r15, 0X25C0);
    after_54:
    // 0x8003D048: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x8003D04C: nop

    // 0x8003D050: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x8003D054: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x8003D058: nop

    // 0x8003D05C: lw          $t5, 0x4($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X4);
    // 0x8003D060: nop

    // 0x8003D064: beq         $t5, $zero, L_8003D07C
    if (ctx->r13 == 0) {
        // 0x8003D068: nop
    
            goto L_8003D07C;
    }
    // 0x8003D068: nop

    // 0x8003D06C: sll         $t4, $t5, 4
    ctx->r12 = S32(ctx->r13 << 4);
    // 0x8003D070: andi        $t1, $t4, 0xF0
    ctx->r9 = ctx->r12 & 0XF0;
    // 0x8003D074: ori         $t3, $t1, 0xF
    ctx->r11 = ctx->r9 | 0XF;
    // 0x8003D078: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
L_8003D07C:
    // 0x8003D07C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003D080: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003D084: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003D088: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003D08C: jal         0x800B34D0
    // 0x8003D090: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_55;
    // 0x8003D090: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_55:
    // 0x8003D094: b           L_8003DB30
    // 0x8003D098: nop

        goto L_8003DB30;
    // 0x8003D098: nop

L_8003D09C:
    // 0x8003D09C: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x8003D0A0: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8003D0A4: lbu         $t7, 0x2($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X2);
    // 0x8003D0A8: lw          $t0, 0x1F18($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1F18);
    // 0x8003D0AC: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8003D0B0: subu        $t6, $t6, $t7
    ctx->r14 = SUB32(ctx->r14, ctx->r15);
    // 0x8003D0B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003D0B8: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x8003D0BC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8003D0C0: addu        $a0, $t0, $t6
    ctx->r4 = ADD32(ctx->r8, ctx->r14);
    // 0x8003D0C4: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003D0C8: jal         0x800B5A20
    // 0x8003D0CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    osGbpakPower(rdram, ctx);
        goto after_56;
    // 0x8003D0CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_56:
    // 0x8003D0D0: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x8003D0D4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8003D0D8: lbu         $t4, 0x2($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0X2);
    // 0x8003D0DC: lw          $t2, 0x1F18($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1F18);
    // 0x8003D0E0: sll         $t1, $t4, 2
    ctx->r9 = S32(ctx->r12 << 2);
    // 0x8003D0E4: subu        $t1, $t1, $t4
    ctx->r9 = SUB32(ctx->r9, ctx->r12);
    // 0x8003D0E8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8003D0EC: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x8003D0F0: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8003D0F4: addu        $a0, $t2, $t1
    ctx->r4 = ADD32(ctx->r10, ctx->r9);
    // 0x8003D0F8: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003D0FC: jal         0x800B5CF0
    // 0x8003D100: addiu       $a1, $t5, 0x10
    ctx->r5 = ADD32(ctx->r13, 0X10);
    tnt_GbpakUnknown_5CF0(rdram, ctx);
        goto after_57;
    // 0x8003D100: addiu       $a1, $t5, 0x10
    ctx->r5 = ADD32(ctx->r13, 0X10);
    after_57:
    // 0x8003D104: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x8003D108: nop

    // 0x8003D10C: sw          $v0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r2;
    // 0x8003D110: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x8003D114: nop

    // 0x8003D118: lw          $t8, 0x4($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X4);
    // 0x8003D11C: nop

    // 0x8003D120: beq         $t8, $zero, L_8003D158
    if (ctx->r24 == 0) {
        // 0x8003D124: nop
    
            goto L_8003D158;
    }
    // 0x8003D124: nop

    // 0x8003D128: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x8003D12C: andi        $t0, $t7, 0xF0
    ctx->r8 = ctx->r15 & 0XF0;
    // 0x8003D130: ori         $t6, $t0, 0xF
    ctx->r14 = ctx->r8 | 0XF;
    // 0x8003D134: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
    // 0x8003D138: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003D13C: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003D140: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003D144: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003D148: jal         0x800B34D0
    // 0x8003D14C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_58;
    // 0x8003D14C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_58:
    // 0x8003D150: b           L_8003DB30
    // 0x8003D154: nop

        goto L_8003DB30;
    // 0x8003D154: nop

L_8003D158:
    // 0x8003D158: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
L_8003D15C:
    // 0x8003D15C: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x8003D160: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8003D164: addu        $t1, $sp, $t2
    ctx->r9 = ADD32(ctx->r29, ctx->r10);
    // 0x8003D168: sb          $t4, 0x38($t1)
    MEM_B(0X38, ctx->r9) = ctx->r12;
    // 0x8003D16C: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x8003D170: nop

    // 0x8003D174: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x8003D178: slti        $at, $t3, 0x20
    ctx->r1 = SIGNED(ctx->r11) < 0X20 ? 1 : 0;
    // 0x8003D17C: bne         $at, $zero, L_8003D15C
    if (ctx->r1 != 0) {
        // 0x8003D180: sw          $t3, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r11;
            goto L_8003D15C;
    }
    // 0x8003D180: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x8003D184: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x8003D188: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8003D18C: lbu         $t0, 0x2($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X2);
    // 0x8003D190: lw          $t8, 0x1F18($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F18);
    // 0x8003D194: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x8003D198: subu        $t6, $t6, $t0
    ctx->r14 = SUB32(ctx->r14, ctx->r8);
    // 0x8003D19C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003D1A0: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x8003D1A4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8003D1A8: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x8003D1AC: addu        $a0, $t8, $t6
    ctx->r4 = ADD32(ctx->r24, ctx->r14);
    // 0x8003D1B0: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003D1B4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8003D1B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003D1BC: addiu       $a2, $zero, 0x6000
    ctx->r6 = ADD32(0, 0X6000);
    // 0x8003D1C0: jal         0x800B5E50
    // 0x8003D1C4: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    osGbpakReadWrite(rdram, ctx);
        goto after_59;
    // 0x8003D1C4: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_59:
    // 0x8003D1C8: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    // 0x8003D1CC: nop

    // 0x8003D1D0: sw          $v0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r2;
    // 0x8003D1D4: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x8003D1D8: nop

    // 0x8003D1DC: lw          $t1, 0x4($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X4);
    // 0x8003D1E0: nop

    // 0x8003D1E4: beq         $t1, $zero, L_8003D21C
    if (ctx->r9 == 0) {
        // 0x8003D1E8: nop
    
            goto L_8003D21C;
    }
    // 0x8003D1E8: nop

    // 0x8003D1EC: sll         $t5, $t1, 4
    ctx->r13 = S32(ctx->r9 << 4);
    // 0x8003D1F0: andi        $t3, $t5, 0xF0
    ctx->r11 = ctx->r13 & 0XF0;
    // 0x8003D1F4: ori         $t7, $t3, 0xF
    ctx->r15 = ctx->r11 | 0XF;
    // 0x8003D1F8: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x8003D1FC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003D200: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003D204: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003D208: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003D20C: jal         0x800B34D0
    // 0x8003D210: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_60;
    // 0x8003D210: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_60:
    // 0x8003D214: b           L_8003DB30
    // 0x8003D218: nop

        goto L_8003DB30;
    // 0x8003D218: nop

L_8003D21C:
    // 0x8003D21C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
L_8003D220:
    // 0x8003D220: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x8003D224: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x8003D228: addu        $t6, $sp, $t8
    ctx->r14 = ADD32(ctx->r29, ctx->r24);
    // 0x8003D22C: sb          $t0, 0x38($t6)
    MEM_B(0X38, ctx->r14) = ctx->r8;
    // 0x8003D230: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8003D234: nop

    // 0x8003D238: addiu       $t4, $t9, 0x1
    ctx->r12 = ADD32(ctx->r25, 0X1);
    // 0x8003D23C: slti        $at, $t4, 0x20
    ctx->r1 = SIGNED(ctx->r12) < 0X20 ? 1 : 0;
    // 0x8003D240: bne         $at, $zero, L_8003D220
    if (ctx->r1 != 0) {
        // 0x8003D244: sw          $t4, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r12;
            goto L_8003D220;
    }
    // 0x8003D244: sw          $t4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r12;
    // 0x8003D248: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x8003D24C: addiu       $t5, $sp, 0x38
    ctx->r13 = ADD32(ctx->r29, 0X38);
    // 0x8003D250: sb          $t1, 0x1F($t5)
    MEM_B(0X1F, ctx->r13) = ctx->r9;
    // 0x8003D254: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x8003D258: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8003D25C: lbu         $t2, 0x2($t7)
    ctx->r10 = MEM_BU(ctx->r15, 0X2);
    // 0x8003D260: lw          $t3, 0x1F18($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1F18);
    // 0x8003D264: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x8003D268: subu        $t0, $t0, $t2
    ctx->r8 = SUB32(ctx->r8, ctx->r10);
    // 0x8003D26C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003D270: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x8003D274: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8003D278: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x8003D27C: addu        $a0, $t3, $t0
    ctx->r4 = ADD32(ctx->r11, ctx->r8);
    // 0x8003D280: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003D284: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8003D288: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003D28C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003D290: jal         0x800B5E50
    // 0x8003D294: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    osGbpakReadWrite(rdram, ctx);
        goto after_61;
    // 0x8003D294: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_61:
    // 0x8003D298: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x8003D29C: nop

    // 0x8003D2A0: sw          $v0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r2;
    // 0x8003D2A4: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x8003D2A8: nop

    // 0x8003D2AC: lw          $t4, 0x4($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X4);
    // 0x8003D2B0: nop

    // 0x8003D2B4: beq         $t4, $zero, L_8003D2EC
    if (ctx->r12 == 0) {
        // 0x8003D2B8: nop
    
            goto L_8003D2EC;
    }
    // 0x8003D2B8: nop

    // 0x8003D2BC: sll         $t1, $t4, 4
    ctx->r9 = S32(ctx->r12 << 4);
    // 0x8003D2C0: andi        $t5, $t1, 0xF0
    ctx->r13 = ctx->r9 & 0XF0;
    // 0x8003D2C4: ori         $t7, $t5, 0xF
    ctx->r15 = ctx->r13 | 0XF;
    // 0x8003D2C8: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x8003D2CC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003D2D0: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003D2D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003D2D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003D2DC: jal         0x800B34D0
    // 0x8003D2E0: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_62;
    // 0x8003D2E0: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_62:
    // 0x8003D2E4: b           L_8003DB30
    // 0x8003D2E8: nop

        goto L_8003DB30;
    // 0x8003D2E8: nop

L_8003D2EC:
    // 0x8003D2EC: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x8003D2F0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8003D2F4: lbu         $t0, 0x2($t3)
    ctx->r8 = MEM_BU(ctx->r11, 0X2);
    // 0x8003D2F8: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x8003D2FC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8003D300: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8003D304: sb          $t2, 0x1F14($at)
    MEM_B(0X1F14, ctx->r1) = ctx->r10;
    // 0x8003D308: lbu         $t4, 0x2($t6)
    ctx->r12 = MEM_BU(ctx->r14, 0X2);
    // 0x8003D30C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8003D310: sll         $t1, $t4, 2
    ctx->r9 = S32(ctx->r12 << 2);
    // 0x8003D314: subu        $t1, $t1, $t4
    ctx->r9 = SUB32(ctx->r9, ctx->r12);
    // 0x8003D318: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8003D31C: lw          $t8, 0x1F18($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F18);
    // 0x8003D320: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x8003D324: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8003D328: addu        $a0, $t8, $t1
    ctx->r4 = ADD32(ctx->r24, ctx->r9);
    // 0x8003D32C: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003D330: jal         0x800B5CF0
    // 0x8003D334: addiu       $a1, $t6, 0x10
    ctx->r5 = ADD32(ctx->r14, 0X10);
    tnt_GbpakUnknown_5CF0(rdram, ctx);
        goto after_63;
    // 0x8003D334: addiu       $a1, $t6, 0x10
    ctx->r5 = ADD32(ctx->r14, 0X10);
    after_63:
    // 0x8003D338: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x8003D33C: nop

    // 0x8003D340: sw          $v0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r2;
    // 0x8003D344: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x8003D348: nop

    // 0x8003D34C: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x8003D350: nop

    // 0x8003D354: beq         $t9, $zero, L_8003D38C
    if (ctx->r25 == 0) {
        // 0x8003D358: nop
    
            goto L_8003D38C;
    }
    // 0x8003D358: nop

    // 0x8003D35C: sll         $t3, $t9, 4
    ctx->r11 = S32(ctx->r25 << 4);
    // 0x8003D360: andi        $t2, $t3, 0xF0
    ctx->r10 = ctx->r11 & 0XF0;
    // 0x8003D364: ori         $t0, $t2, 0xF
    ctx->r8 = ctx->r10 | 0XF;
    // 0x8003D368: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x8003D36C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003D370: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003D374: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003D378: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003D37C: jal         0x800B34D0
    // 0x8003D380: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_64;
    // 0x8003D380: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_64:
    // 0x8003D384: b           L_8003DB30
    // 0x8003D388: nop

        goto L_8003DB30;
    // 0x8003D388: nop

L_8003D38C:
    // 0x8003D38C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003D390: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003D394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003D398: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003D39C: jal         0x800B34D0
    // 0x8003D3A0: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_65;
    // 0x8003D3A0: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_65:
    // 0x8003D3A4: b           L_8003DB30
    // 0x8003D3A8: nop

        goto L_8003DB30;
    // 0x8003D3A8: nop

L_8003D3AC:
    // 0x8003D3AC: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x8003D3B0: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8003D3B4: lbu         $t1, 0x2($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X2);
    // 0x8003D3B8: lw          $t4, 0x1F18($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1F18);
    // 0x8003D3BC: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8003D3C0: subu        $t6, $t6, $t1
    ctx->r14 = SUB32(ctx->r14, ctx->r9);
    // 0x8003D3C4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003D3C8: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x8003D3CC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8003D3D0: addu        $a0, $t4, $t6
    ctx->r4 = ADD32(ctx->r12, ctx->r14);
    // 0x8003D3D4: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003D3D8: jal         0x800B5A20
    // 0x8003D3DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    osGbpakPower(rdram, ctx);
        goto after_66;
    // 0x8003D3DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_66:
    // 0x8003D3E0: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x8003D3E4: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8003D3E8: lbu         $t3, 0x2($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X2);
    // 0x8003D3EC: lw          $t5, 0x1F18($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1F18);
    // 0x8003D3F0: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x8003D3F4: subu        $t2, $t2, $t3
    ctx->r10 = SUB32(ctx->r10, ctx->r11);
    // 0x8003D3F8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8003D3FC: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8003D400: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8003D404: addu        $a0, $t5, $t2
    ctx->r4 = ADD32(ctx->r13, ctx->r10);
    // 0x8003D408: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003D40C: jal         0x800B5CF0
    // 0x8003D410: addiu       $a1, $t9, 0x10
    ctx->r5 = ADD32(ctx->r25, 0X10);
    tnt_GbpakUnknown_5CF0(rdram, ctx);
        goto after_67;
    // 0x8003D410: addiu       $a1, $t9, 0x10
    ctx->r5 = ADD32(ctx->r25, 0X10);
    after_67:
    // 0x8003D414: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x8003D418: nop

    // 0x8003D41C: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x8003D420: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x8003D424: nop

    // 0x8003D428: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x8003D42C: nop

    // 0x8003D430: beq         $t8, $zero, L_8003D468
    if (ctx->r24 == 0) {
        // 0x8003D434: nop
    
            goto L_8003D468;
    }
    // 0x8003D434: nop

    // 0x8003D438: sll         $t1, $t8, 4
    ctx->r9 = S32(ctx->r24 << 4);
    // 0x8003D43C: andi        $t4, $t1, 0xF0
    ctx->r12 = ctx->r9 & 0XF0;
    // 0x8003D440: ori         $t6, $t4, 0xF
    ctx->r14 = ctx->r12 | 0XF;
    // 0x8003D444: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8003D448: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003D44C: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003D450: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003D454: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003D458: jal         0x800B34D0
    // 0x8003D45C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_68;
    // 0x8003D45C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_68:
    // 0x8003D460: b           L_8003DB30
    // 0x8003D464: nop

        goto L_8003DB30;
    // 0x8003D464: nop

L_8003D468:
    // 0x8003D468: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
L_8003D46C:
    // 0x8003D46C: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x8003D470: nop

    // 0x8003D474: addu        $t5, $sp, $t3
    ctx->r13 = ADD32(ctx->r29, ctx->r11);
    // 0x8003D478: sb          $zero, 0x38($t5)
    MEM_B(0X38, ctx->r13) = 0;
    // 0x8003D47C: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x8003D480: nop

    // 0x8003D484: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x8003D488: slti        $at, $t9, 0x20
    ctx->r1 = SIGNED(ctx->r25) < 0X20 ? 1 : 0;
    // 0x8003D48C: bne         $at, $zero, L_8003D46C
    if (ctx->r1 != 0) {
        // 0x8003D490: sw          $t9, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r25;
            goto L_8003D46C;
    }
    // 0x8003D490: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x8003D494: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x8003D498: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8003D49C: lbu         $t1, 0x2($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X2);
    // 0x8003D4A0: lw          $t0, 0x1F18($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1F18);
    // 0x8003D4A4: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x8003D4A8: subu        $t4, $t4, $t1
    ctx->r12 = SUB32(ctx->r12, ctx->r9);
    // 0x8003D4AC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8003D4B0: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8003D4B4: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x8003D4B8: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x8003D4BC: addu        $a0, $t0, $t4
    ctx->r4 = ADD32(ctx->r8, ctx->r12);
    // 0x8003D4C0: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003D4C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8003D4C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003D4CC: addiu       $a2, $zero, 0x5000
    ctx->r6 = ADD32(0, 0X5000);
    // 0x8003D4D0: jal         0x800B5E50
    // 0x8003D4D4: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    osGbpakReadWrite(rdram, ctx);
        goto after_69;
    // 0x8003D4D4: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_69:
    // 0x8003D4D8: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x8003D4DC: nop

    // 0x8003D4E0: sw          $v0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r2;
    // 0x8003D4E4: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x8003D4E8: nop

    // 0x8003D4EC: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x8003D4F0: nop

    // 0x8003D4F4: beq         $t5, $zero, L_8003D52C
    if (ctx->r13 == 0) {
        // 0x8003D4F8: nop
    
            goto L_8003D52C;
    }
    // 0x8003D4F8: nop

    // 0x8003D4FC: sll         $t2, $t5, 4
    ctx->r10 = S32(ctx->r13 << 4);
    // 0x8003D500: andi        $t9, $t2, 0xF0
    ctx->r25 = ctx->r10 & 0XF0;
    // 0x8003D504: ori         $t8, $t9, 0xF
    ctx->r24 = ctx->r25 | 0XF;
    // 0x8003D508: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
    // 0x8003D50C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003D510: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003D514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003D518: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003D51C: jal         0x800B34D0
    // 0x8003D520: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_70;
    // 0x8003D520: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_70:
    // 0x8003D524: b           L_8003DB30
    // 0x8003D528: nop

        goto L_8003DB30;
    // 0x8003D528: nop

L_8003D52C:
    // 0x8003D52C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
L_8003D530:
    // 0x8003D530: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8003D534: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x8003D538: addu        $t4, $sp, $t0
    ctx->r12 = ADD32(ctx->r29, ctx->r8);
    // 0x8003D53C: sb          $t1, 0x38($t4)
    MEM_B(0X38, ctx->r12) = ctx->r9;
    // 0x8003D540: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x8003D544: nop

    // 0x8003D548: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8003D54C: slti        $at, $t7, 0x20
    ctx->r1 = SIGNED(ctx->r15) < 0X20 ? 1 : 0;
    // 0x8003D550: bne         $at, $zero, L_8003D530
    if (ctx->r1 != 0) {
        // 0x8003D554: sw          $t7, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r15;
            goto L_8003D530;
    }
    // 0x8003D554: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x8003D558: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8003D55C: addiu       $t2, $sp, 0x38
    ctx->r10 = ADD32(ctx->r29, 0X38);
    // 0x8003D560: sb          $t5, 0x1F($t2)
    MEM_B(0X1F, ctx->r10) = ctx->r13;
    // 0x8003D564: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x8003D568: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8003D56C: lbu         $t3, 0x2($t8)
    ctx->r11 = MEM_BU(ctx->r24, 0X2);
    // 0x8003D570: lw          $t9, 0x1F18($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1F18);
    // 0x8003D574: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x8003D578: subu        $t1, $t1, $t3
    ctx->r9 = SUB32(ctx->r9, ctx->r11);
    // 0x8003D57C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8003D580: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x8003D584: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8003D588: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x8003D58C: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    // 0x8003D590: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003D594: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8003D598: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003D59C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003D5A0: jal         0x800B5E50
    // 0x8003D5A4: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    osGbpakReadWrite(rdram, ctx);
        goto after_71;
    // 0x8003D5A4: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_71:
    // 0x8003D5A8: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    // 0x8003D5AC: nop

    // 0x8003D5B0: sw          $v0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r2;
    // 0x8003D5B4: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x8003D5B8: nop

    // 0x8003D5BC: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8003D5C0: nop

    // 0x8003D5C4: beq         $t7, $zero, L_8003D5FC
    if (ctx->r15 == 0) {
        // 0x8003D5C8: nop
    
            goto L_8003D5FC;
    }
    // 0x8003D5C8: nop

    // 0x8003D5CC: sll         $t5, $t7, 4
    ctx->r13 = S32(ctx->r15 << 4);
    // 0x8003D5D0: andi        $t2, $t5, 0xF0
    ctx->r10 = ctx->r13 & 0XF0;
    // 0x8003D5D4: ori         $t8, $t2, 0xF
    ctx->r24 = ctx->r10 | 0XF;
    // 0x8003D5D8: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x8003D5DC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003D5E0: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003D5E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003D5E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003D5EC: jal         0x800B34D0
    // 0x8003D5F0: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_72;
    // 0x8003D5F0: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_72:
    // 0x8003D5F4: b           L_8003DB30
    // 0x8003D5F8: nop

        goto L_8003DB30;
    // 0x8003D5F8: nop

L_8003D5FC:
    // 0x8003D5FC: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x8003D600: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8003D604: lbu         $t1, 0x2($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X2);
    // 0x8003D608: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    // 0x8003D60C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8003D610: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8003D614: sb          $t3, 0x1F14($at)
    MEM_B(0X1F14, ctx->r1) = ctx->r11;
    // 0x8003D618: lbu         $t7, 0x2($t4)
    ctx->r15 = MEM_BU(ctx->r12, 0X2);
    // 0x8003D61C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8003D620: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x8003D624: subu        $t5, $t5, $t7
    ctx->r13 = SUB32(ctx->r13, ctx->r15);
    // 0x8003D628: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8003D62C: lw          $t0, 0x1F18($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1F18);
    // 0x8003D630: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x8003D634: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x8003D638: addu        $a0, $t0, $t5
    ctx->r4 = ADD32(ctx->r8, ctx->r13);
    // 0x8003D63C: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003D640: jal         0x800B5CF0
    // 0x8003D644: addiu       $a1, $t4, 0x10
    ctx->r5 = ADD32(ctx->r12, 0X10);
    tnt_GbpakUnknown_5CF0(rdram, ctx);
        goto after_73;
    // 0x8003D644: addiu       $a1, $t4, 0x10
    ctx->r5 = ADD32(ctx->r12, 0X10);
    after_73:
    // 0x8003D648: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x8003D64C: nop

    // 0x8003D650: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x8003D654: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x8003D658: nop

    // 0x8003D65C: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x8003D660: nop

    // 0x8003D664: beq         $t6, $zero, L_8003D69C
    if (ctx->r14 == 0) {
        // 0x8003D668: nop
    
            goto L_8003D69C;
    }
    // 0x8003D668: nop

    // 0x8003D66C: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x8003D670: andi        $t3, $t9, 0xF0
    ctx->r11 = ctx->r25 & 0XF0;
    // 0x8003D674: ori         $t1, $t3, 0xF
    ctx->r9 = ctx->r11 | 0XF;
    // 0x8003D678: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x8003D67C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003D680: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003D684: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003D688: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003D68C: jal         0x800B34D0
    // 0x8003D690: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_74;
    // 0x8003D690: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_74:
    // 0x8003D694: b           L_8003DB30
    // 0x8003D698: nop

        goto L_8003DB30;
    // 0x8003D698: nop

L_8003D69C:
    // 0x8003D69C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003D6A0: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003D6A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003D6A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003D6AC: jal         0x800B34D0
    // 0x8003D6B0: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_75;
    // 0x8003D6B0: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_75:
    // 0x8003D6B4: b           L_8003DB30
    // 0x8003D6B8: nop

        goto L_8003DB30;
    // 0x8003D6B8: nop

L_8003D6BC:
    // 0x8003D6BC: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x8003D6C0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8003D6C4: lbu         $t5, 0x2($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X2);
    // 0x8003D6C8: lw          $t7, 0x1F18($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1F18);
    // 0x8003D6CC: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x8003D6D0: subu        $t4, $t4, $t5
    ctx->r12 = SUB32(ctx->r12, ctx->r13);
    // 0x8003D6D4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8003D6D8: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x8003D6DC: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x8003D6E0: addu        $a0, $t7, $t4
    ctx->r4 = ADD32(ctx->r15, ctx->r12);
    // 0x8003D6E4: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003D6E8: jal         0x800B5CF0
    // 0x8003D6EC: addiu       $a1, $t0, 0x10
    ctx->r5 = ADD32(ctx->r8, 0X10);
    tnt_GbpakUnknown_5CF0(rdram, ctx);
        goto after_76;
    // 0x8003D6EC: addiu       $a1, $t0, 0x10
    ctx->r5 = ADD32(ctx->r8, 0X10);
    after_76:
    // 0x8003D6F0: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x8003D6F4: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x8003D6F8: nop

    // 0x8003D6FC: beq         $t2, $zero, L_8003D738
    if (ctx->r10 == 0) {
        // 0x8003D700: nop
    
            goto L_8003D738;
    }
    // 0x8003D700: nop

    // 0x8003D704: sll         $t6, $t2, 4
    ctx->r14 = S32(ctx->r10 << 4);
    // 0x8003D708: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x8003D70C: andi        $t9, $t6, 0xF0
    ctx->r25 = ctx->r14 & 0XF0;
    // 0x8003D710: ori         $t3, $t9, 0xF
    ctx->r11 = ctx->r25 | 0XF;
    // 0x8003D714: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003D718: sw          $t3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r11;
    // 0x8003D71C: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003D720: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003D724: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003D728: jal         0x800B34D0
    // 0x8003D72C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_77;
    // 0x8003D72C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_77:
    // 0x8003D730: b           L_8003DB30
    // 0x8003D734: nop

        goto L_8003DB30;
    // 0x8003D734: nop

L_8003D738:
    // 0x8003D738: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x8003D73C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8003D740: lw          $t5, 0x8($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X8);
    // 0x8003D744: nop

    // 0x8003D748: srl         $t7, $t5, 13
    ctx->r15 = S32(U32(ctx->r13) >> 13);
    // 0x8003D74C: sb          $t7, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r15;
    // 0x8003D750: lbu         $t4, 0x2($t8)
    ctx->r12 = MEM_BU(ctx->r24, 0X2);
    // 0x8003D754: andi        $t2, $t7, 0xFF
    ctx->r10 = ctx->r15 & 0XFF;
    // 0x8003D758: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x8003D75C: lbu         $t0, 0x1F14($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X1F14);
    // 0x8003D760: nop

    // 0x8003D764: beq         $t0, $t2, L_8003D83C
    if (ctx->r8 == ctx->r10) {
        // 0x8003D768: nop
    
            goto L_8003D83C;
    }
    // 0x8003D768: nop

    // 0x8003D76C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
L_8003D770:
    // 0x8003D770: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8003D774: lbu         $t6, 0x37($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X37);
    // 0x8003D778: addu        $t3, $sp, $t9
    ctx->r11 = ADD32(ctx->r29, ctx->r25);
    // 0x8003D77C: sb          $t6, 0x38($t3)
    MEM_B(0X38, ctx->r11) = ctx->r14;
    // 0x8003D780: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8003D784: nop

    // 0x8003D788: addiu       $t5, $t1, 0x1
    ctx->r13 = ADD32(ctx->r9, 0X1);
    // 0x8003D78C: slti        $at, $t5, 0x20
    ctx->r1 = SIGNED(ctx->r13) < 0X20 ? 1 : 0;
    // 0x8003D790: bne         $at, $zero, L_8003D770
    if (ctx->r1 != 0) {
        // 0x8003D794: sw          $t5, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r13;
            goto L_8003D770;
    }
    // 0x8003D794: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x8003D798: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    // 0x8003D79C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8003D7A0: lbu         $t7, 0x2($t4)
    ctx->r15 = MEM_BU(ctx->r12, 0X2);
    // 0x8003D7A4: lw          $t8, 0x1F18($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F18);
    // 0x8003D7A8: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x8003D7AC: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x8003D7B0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003D7B4: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8003D7B8: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8003D7BC: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x8003D7C0: addu        $a0, $t8, $t0
    ctx->r4 = ADD32(ctx->r24, ctx->r8);
    // 0x8003D7C4: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003D7C8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8003D7CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003D7D0: addiu       $a2, $zero, 0x4000
    ctx->r6 = ADD32(0, 0X4000);
    // 0x8003D7D4: jal         0x800B5E50
    // 0x8003D7D8: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    osGbpakReadWrite(rdram, ctx);
        goto after_78;
    // 0x8003D7D8: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_78:
    // 0x8003D7DC: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x8003D7E0: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x8003D7E4: nop

    // 0x8003D7E8: beq         $t6, $zero, L_8003D824
    if (ctx->r14 == 0) {
        // 0x8003D7EC: nop
    
            goto L_8003D824;
    }
    // 0x8003D7EC: nop

    // 0x8003D7F0: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x8003D7F4: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x8003D7F8: andi        $t3, $t9, 0xF0
    ctx->r11 = ctx->r25 & 0XF0;
    // 0x8003D7FC: ori         $t1, $t3, 0xF
    ctx->r9 = ctx->r11 | 0XF;
    // 0x8003D800: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003D804: sw          $t1, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r9;
    // 0x8003D808: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003D80C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003D810: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003D814: jal         0x800B34D0
    // 0x8003D818: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_79;
    // 0x8003D818: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_79:
    // 0x8003D81C: b           L_8003DB30
    // 0x8003D820: nop

        goto L_8003DB30;
    // 0x8003D820: nop

L_8003D824:
    // 0x8003D824: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x8003D828: lbu         $t4, 0x37($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X37);
    // 0x8003D82C: lbu         $t8, 0x2($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2);
    // 0x8003D830: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8003D834: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8003D838: sb          $t4, 0x1F14($at)
    MEM_B(0X1F14, ctx->r1) = ctx->r12;
L_8003D83C:
    // 0x8003D83C: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x8003D840: nop

    // 0x8003D844: lw          $t2, 0x8($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X8);
    // 0x8003D848: nop

    // 0x8003D84C: andi        $t6, $t2, 0x1FFF
    ctx->r14 = ctx->r10 & 0X1FFF;
    // 0x8003D850: sw          $t6, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r14;
    // 0x8003D854: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x8003D858: nop

    // 0x8003D85C: lw          $t3, 0x8($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X8);
    // 0x8003D860: lw          $t1, 0x4($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X4);
    // 0x8003D864: nop

    // 0x8003D868: addu        $t5, $t3, $t1
    ctx->r13 = ADD32(ctx->r11, ctx->r9);
    // 0x8003D86C: sw          $t5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r13;
L_8003D870:
    // 0x8003D870: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x8003D874: nop

    // 0x8003D878: slti        $at, $t7, 0x2001
    ctx->r1 = SIGNED(ctx->r15) < 0X2001 ? 1 : 0;
    // 0x8003D87C: bne         $at, $zero, L_8003DA04
    if (ctx->r1 != 0) {
        // 0x8003D880: nop
    
            goto L_8003DA04;
    }
    // 0x8003D880: nop

    // 0x8003D884: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x8003D888: addiu       $t4, $t7, -0x2000
    ctx->r12 = ADD32(ctx->r15, -0X2000);
    // 0x8003D88C: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
    // 0x8003D890: lbu         $t6, 0x2($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X2);
    // 0x8003D894: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8003D898: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8003D89C: subu        $t0, $t0, $t6
    ctx->r8 = SUB32(ctx->r8, ctx->r14);
    // 0x8003D8A0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003D8A4: lw          $t8, 0x1F18($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F18);
    // 0x8003D8A8: lw          $t9, 0x8($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X8);
    // 0x8003D8AC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8003D8B0: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8003D8B4: addiu       $t3, $zero, 0x2000
    ctx->r11 = ADD32(0, 0X2000);
    // 0x8003D8B8: ori         $at, $zero, 0xA000
    ctx->r1 = 0 | 0XA000;
    // 0x8003D8BC: lw          $a3, 0xC($t2)
    ctx->r7 = MEM_W(ctx->r10, 0XC);
    // 0x8003D8C0: lbu         $a1, 0x10($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0X10);
    // 0x8003D8C4: addu        $a0, $t8, $t0
    ctx->r4 = ADD32(ctx->r24, ctx->r8);
    // 0x8003D8C8: subu        $t1, $t3, $t9
    ctx->r9 = SUB32(ctx->r11, ctx->r25);
    // 0x8003D8CC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8003D8D0: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003D8D4: jal         0x800B5E50
    // 0x8003D8D8: addu        $a2, $t9, $at
    ctx->r6 = ADD32(ctx->r25, ctx->r1);
    osGbpakReadWrite(rdram, ctx);
        goto after_80;
    // 0x8003D8D8: addu        $a2, $t9, $at
    ctx->r6 = ADD32(ctx->r25, ctx->r1);
    after_80:
    // 0x8003D8DC: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x8003D8E0: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x8003D8E4: nop

    // 0x8003D8E8: bne         $t5, $zero, L_8003DA90
    if (ctx->r13 != 0) {
        // 0x8003D8EC: nop
    
            goto L_8003DA90;
    }
    // 0x8003D8EC: nop

    // 0x8003D8F0: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x8003D8F4: nop

    // 0x8003D8F8: lw          $t4, 0xC($t7)
    ctx->r12 = MEM_W(ctx->r15, 0XC);
    // 0x8003D8FC: lw          $t6, 0x8($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X8);
    // 0x8003D900: nop

    // 0x8003D904: subu        $t8, $t4, $t6
    ctx->r24 = SUB32(ctx->r12, ctx->r14);
    // 0x8003D908: addiu       $t0, $t8, 0x2000
    ctx->r8 = ADD32(ctx->r24, 0X2000);
    // 0x8003D90C: sw          $t0, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r8;
    // 0x8003D910: lbu         $t2, 0x37($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X37);
    // 0x8003D914: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x8003D918: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8003D91C: sb          $t3, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r11;
L_8003D920:
    // 0x8003D920: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8003D924: lbu         $t9, 0x37($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X37);
    // 0x8003D928: addu        $t5, $sp, $t1
    ctx->r13 = ADD32(ctx->r29, ctx->r9);
    // 0x8003D92C: sb          $t9, 0x38($t5)
    MEM_B(0X38, ctx->r13) = ctx->r25;
    // 0x8003D930: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x8003D934: nop

    // 0x8003D938: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x8003D93C: slti        $at, $t6, 0x20
    ctx->r1 = SIGNED(ctx->r14) < 0X20 ? 1 : 0;
    // 0x8003D940: bne         $at, $zero, L_8003D920
    if (ctx->r1 != 0) {
        // 0x8003D944: sw          $t6, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r14;
            goto L_8003D920;
    }
    // 0x8003D944: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x8003D948: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x8003D94C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8003D950: lbu         $t7, 0x2($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X2);
    // 0x8003D954: lw          $t8, 0x1F18($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F18);
    // 0x8003D958: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x8003D95C: subu        $t2, $t2, $t7
    ctx->r10 = SUB32(ctx->r10, ctx->r15);
    // 0x8003D960: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8003D964: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x8003D968: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8003D96C: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x8003D970: addu        $a0, $t8, $t2
    ctx->r4 = ADD32(ctx->r24, ctx->r10);
    // 0x8003D974: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003D978: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8003D97C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003D980: addiu       $a2, $zero, 0x4000
    ctx->r6 = ADD32(0, 0X4000);
    // 0x8003D984: jal         0x800B5E50
    // 0x8003D988: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    osGbpakReadWrite(rdram, ctx);
        goto after_81;
    // 0x8003D988: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_81:
    // 0x8003D98C: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x8003D990: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8003D994: nop

    // 0x8003D998: beq         $t9, $zero, L_8003D9D4
    if (ctx->r25 == 0) {
        // 0x8003D99C: nop
    
            goto L_8003D9D4;
    }
    // 0x8003D99C: nop

    // 0x8003D9A0: sll         $t1, $t9, 4
    ctx->r9 = S32(ctx->r25 << 4);
    // 0x8003D9A4: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x8003D9A8: andi        $t5, $t1, 0xF0
    ctx->r13 = ctx->r9 & 0XF0;
    // 0x8003D9AC: ori         $t4, $t5, 0xF
    ctx->r12 = ctx->r13 | 0XF;
    // 0x8003D9B0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003D9B4: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x8003D9B8: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003D9BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003D9C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003D9C4: jal         0x800B34D0
    // 0x8003D9C8: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_82;
    // 0x8003D9C8: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_82:
    // 0x8003D9CC: b           L_8003DA90
    // 0x8003D9D0: nop

        goto L_8003DA90;
    // 0x8003D9D0: nop

L_8003D9D4:
    // 0x8003D9D4: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x8003D9D8: lbu         $t0, 0x37($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X37);
    // 0x8003D9DC: lbu         $t8, 0x2($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2);
    // 0x8003D9E0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8003D9E4: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x8003D9E8: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x8003D9EC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8003D9F0: sb          $t0, 0x1F14($at)
    MEM_B(0X1F14, ctx->r1) = ctx->r8;
    // 0x8003D9F4: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8003D9F8: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x8003D9FC: b           L_8003D870
    // 0x8003DA00: sw          $zero, 0x8($t9)
    MEM_W(0X8, ctx->r25) = 0;
        goto L_8003D870;
    // 0x8003DA00: sw          $zero, 0x8($t9)
    MEM_W(0X8, ctx->r25) = 0;
L_8003DA04:
    // 0x8003DA04: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x8003DA08: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8003DA0C: lbu         $t4, 0x2($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0X2);
    // 0x8003DA10: lw          $t1, 0x1F18($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1F18);
    // 0x8003DA14: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8003DA18: subu        $t6, $t6, $t4
    ctx->r14 = SUB32(ctx->r14, ctx->r12);
    // 0x8003DA1C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003DA20: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8003DA24: lw          $a2, 0x8($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X8);
    // 0x8003DA28: lw          $t7, 0x4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4);
    // 0x8003DA2C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8003DA30: ori         $at, $zero, 0xA000
    ctx->r1 = 0 | 0XA000;
    // 0x8003DA34: lbu         $a1, 0x10($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X10);
    // 0x8003DA38: lw          $a3, 0xC($t5)
    ctx->r7 = MEM_W(ctx->r13, 0XC);
    // 0x8003DA3C: addu        $a0, $t1, $t6
    ctx->r4 = ADD32(ctx->r9, ctx->r14);
    // 0x8003DA40: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003DA44: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x8003DA48: jal         0x800B5E50
    // 0x8003DA4C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    osGbpakReadWrite(rdram, ctx);
        goto after_83;
    // 0x8003DA4C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_83:
    // 0x8003DA50: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x8003DA54: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8003DA58: nop

    // 0x8003DA5C: beq         $t0, $zero, L_8003DA90
    if (ctx->r8 == 0) {
        // 0x8003DA60: nop
    
            goto L_8003DA90;
    }
    // 0x8003DA60: nop

    // 0x8003DA64: sll         $t8, $t0, 4
    ctx->r24 = S32(ctx->r8 << 4);
    // 0x8003DA68: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x8003DA6C: andi        $t2, $t8, 0xF0
    ctx->r10 = ctx->r24 & 0XF0;
    // 0x8003DA70: ori         $t3, $t2, 0xF
    ctx->r11 = ctx->r10 | 0XF;
    // 0x8003DA74: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003DA78: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x8003DA7C: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003DA80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003DA84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003DA88: jal         0x800B34D0
    // 0x8003DA8C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_84;
    // 0x8003DA8C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_84:
L_8003DA90:
    // 0x8003DA90: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x8003DA94: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8003DA98: lbu         $t6, 0x2($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X2);
    // 0x8003DA9C: lw          $t4, 0x1F18($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1F18);
    // 0x8003DAA0: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8003DAA4: subu        $t5, $t5, $t6
    ctx->r13 = SUB32(ctx->r13, ctx->r14);
    // 0x8003DAA8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8003DAAC: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8003DAB0: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x8003DAB4: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x8003DAB8: addiu       $a0, $a0, 0x238C
    ctx->r4 = ADD32(ctx->r4, 0X238C);
    // 0x8003DABC: jal         0x800B5CF0
    // 0x8003DAC0: addiu       $a1, $t1, 0x10
    ctx->r5 = ADD32(ctx->r9, 0X10);
    tnt_GbpakUnknown_5CF0(rdram, ctx);
        goto after_85;
    // 0x8003DAC0: addiu       $a1, $t1, 0x10
    ctx->r5 = ADD32(ctx->r9, 0X10);
    after_85:
    // 0x8003DAC4: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x8003DAC8: nop

    // 0x8003DACC: sw          $v0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r2;
    // 0x8003DAD0: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x8003DAD4: nop

    // 0x8003DAD8: lw          $t8, 0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X4);
    // 0x8003DADC: nop

    // 0x8003DAE0: beq         $t8, $zero, L_8003DB18
    if (ctx->r24 == 0) {
        // 0x8003DAE4: nop
    
            goto L_8003DB18;
    }
    // 0x8003DAE4: nop

    // 0x8003DAE8: sll         $t2, $t8, 4
    ctx->r10 = S32(ctx->r24 << 4);
    // 0x8003DAEC: andi        $t3, $t2, 0xF0
    ctx->r11 = ctx->r10 & 0XF0;
    // 0x8003DAF0: ori         $t9, $t3, 0xF
    ctx->r25 = ctx->r11 | 0XF;
    // 0x8003DAF4: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8003DAF8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003DAFC: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003DB00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003DB04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003DB08: jal         0x800B34D0
    // 0x8003DB0C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_86;
    // 0x8003DB0C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_86:
    // 0x8003DB10: b           L_8003DB30
    // 0x8003DB14: nop

        goto L_8003DB30;
    // 0x8003DB14: nop

L_8003DB18:
    // 0x8003DB18: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003DB1C: lw          $a0, 0x1F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F18);
    // 0x8003DB20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003DB24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8003DB28: jal         0x800B34D0
    // 0x8003DB2C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    osSendMesg_recomp(rdram, ctx);
        goto after_87;
    // 0x8003DB2C: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    after_87:
L_8003DB30:
    // 0x8003DB30: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003DB34: b           L_8003BFE0
    // 0x8003DB38: sb          $t6, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r14;
        goto L_8003BFE0;
    // 0x8003DB38: sb          $t6, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r14;
L_8003DB3C:
    // 0x8003DB3C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8003DB40: b           L_8003BFE0
    // 0x8003DB44: sh          $t4, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r12;
        goto L_8003BFE0;
    // 0x8003DB44: sh          $t4, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r12;
    // 0x8003DB48: nop

    // 0x8003DB4C: nop

    // 0x8003DB50: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8003DB54: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8003DB58: jr          $ra
    // 0x8003DB5C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x8003DB5C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_8003DB60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003DB60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003DB64: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003DB68: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8003DB6C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8003DB70: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8003DB74: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003DB78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003DB7C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8003DB80: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x8003DB84: addiu       $t7, $t6, 0x2360
    ctx->r15 = ADD32(ctx->r14, 0X2360);
    // 0x8003DB88: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8003DB8C: addiu       $a2, $a2, -0x4070
    ctx->r6 = ADD32(ctx->r6, -0X4070);
    // 0x8003DB90: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8003DB94: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8003DB98: jal         0x800B6010
    // 0x8003DB9C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    osCreateThread_recomp(rdram, ctx);
        goto after_0;
    // 0x8003DB9C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
    // 0x8003DBA0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8003DBA4: jal         0x800B6160
    // 0x8003DBA8: nop

    osStartThread_recomp(rdram, ctx);
        goto after_1;
    // 0x8003DBA8: nop

    after_1:
    // 0x8003DBAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003DBB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003DBB4: jr          $ra
    // 0x8003DBB8: nop

    return;
    // 0x8003DBB8: nop

    // 0x8003DBBC: nop

;}
RECOMP_FUNC void func_8003DBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003DBC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003DBC4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003DBC8: lw          $t6, -0x490($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X490);
    // 0x8003DBCC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003DBD0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8003DBD4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8003DBD8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8003DBDC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003DBE0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003DBE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003DBE8: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8003DBEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003DBF0: beq         $t7, $at, L_8003DC00
    if (ctx->r15 == ctx->r1) {
        // 0x8003DBF4: nop
    
            goto L_8003DC00;
    }
    // 0x8003DBF4: nop

    // 0x8003DBF8: b           L_8003DD90
    // 0x8003DBFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003DD90;
    // 0x8003DBFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003DC00:
    // 0x8003DC00: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8003DC04: lw          $t9, -0x490($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X490);
    // 0x8003DC08: sb          $zero, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = 0;
    // 0x8003DC0C: lb          $t8, 0x37($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X37);
    // 0x8003DC10: lb          $t0, 0x12($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X12);
    // 0x8003DC14: nop

    // 0x8003DC18: subu        $s2, $t8, $t0
    ctx->r18 = SUB32(ctx->r24, ctx->r8);
    // 0x8003DC1C: sll         $t1, $s2, 24
    ctx->r9 = S32(ctx->r18 << 24);
    // 0x8003DC20: or          $s2, $t1, $zero
    ctx->r18 = ctx->r9 | 0;
    // 0x8003DC24: sra         $t2, $s2, 24
    ctx->r10 = S32(SIGNED(ctx->r18) >> 24);
    // 0x8003DC28: or          $s2, $t2, $zero
    ctx->r18 = ctx->r10 | 0;
    // 0x8003DC2C: addiu       $s1, $s2, -0x1
    ctx->r17 = ADD32(ctx->r18, -0X1);
    // 0x8003DC30: sll         $t3, $s1, 24
    ctx->r11 = S32(ctx->r17 << 24);
    // 0x8003DC34: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x8003DC38: sra         $t4, $s1, 24
    ctx->r12 = S32(SIGNED(ctx->r17) >> 24);
    // 0x8003DC3C: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x8003DC40: addiu       $t5, $s2, 0x2
    ctx->r13 = ADD32(ctx->r18, 0X2);
    // 0x8003DC44: slt         $at, $s1, $t5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8003DC48: beq         $at, $zero, L_8003DD88
    if (ctx->r1 == 0) {
        // 0x8003DC4C: nop
    
            goto L_8003DD88;
    }
    // 0x8003DC4C: nop

L_8003DC50:
    // 0x8003DC50: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8003DC54: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x8003DC58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003DC5C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8003DC60: jal         0x80066D8C
    // 0x8003DC64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80066D8C(rdram, ctx);
        goto after_0;
    // 0x8003DC64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8003DC68: beq         $v0, $zero, L_8003DD64
    if (ctx->r2 == 0) {
        // 0x8003DC6C: nop
    
            goto L_8003DD64;
    }
    // 0x8003DC6C: nop

    // 0x8003DC70: addiu       $s0, $zero, -0x2
    ctx->r16 = ADD32(0, -0X2);
    // 0x8003DC74: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8003DC78: beq         $at, $zero, L_8003DD54
    if (ctx->r1 == 0) {
        // 0x8003DC7C: nop
    
            goto L_8003DD54;
    }
    // 0x8003DC7C: nop

L_8003DC80:
    // 0x8003DC80: beq         $s0, $zero, L_8003DD34
    if (ctx->r16 == 0) {
        // 0x8003DC84: nop
    
            goto L_8003DD34;
    }
    // 0x8003DC84: nop

    // 0x8003DC88: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8003DC8C: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x8003DC90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003DC94: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8003DC98: jal         0x80066D8C
    // 0x8003DC9C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_80066D8C(rdram, ctx);
        goto after_1;
    // 0x8003DC9C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_1:
    // 0x8003DCA0: beq         $v0, $zero, L_8003DD34
    if (ctx->r2 == 0) {
        // 0x8003DCA4: nop
    
            goto L_8003DD34;
    }
    // 0x8003DCA4: nop

    // 0x8003DCA8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8003DCAC: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x8003DCB0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8003DCB4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8003DCB8: jal         0x80066D8C
    // 0x8003DCBC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_80066D8C(rdram, ctx);
        goto after_2;
    // 0x8003DCBC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_2:
    // 0x8003DCC0: bne         $v0, $zero, L_8003DD34
    if (ctx->r2 != 0) {
        // 0x8003DCC4: nop
    
            goto L_8003DD34;
    }
    // 0x8003DCC4: nop

    // 0x8003DCC8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8003DCCC: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x8003DCD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003DCD4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8003DCD8: jal         0x80066D8C
    // 0x8003DCDC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_80066D8C(rdram, ctx);
        goto after_3;
    // 0x8003DCDC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_3:
    // 0x8003DCE0: bne         $v0, $zero, L_8003DD34
    if (ctx->r2 != 0) {
        // 0x8003DCE4: nop
    
            goto L_8003DD34;
    }
    // 0x8003DCE4: nop

    // 0x8003DCE8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8003DCEC: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x8003DCF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003DCF4: addiu       $a2, $s1, -0x1
    ctx->r6 = ADD32(ctx->r17, -0X1);
    // 0x8003DCF8: jal         0x80066D8C
    // 0x8003DCFC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_80066D8C(rdram, ctx);
        goto after_4;
    // 0x8003DCFC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_4:
    // 0x8003DD00: bne         $v0, $zero, L_8003DD34
    if (ctx->r2 != 0) {
        // 0x8003DD04: nop
    
            goto L_8003DD34;
    }
    // 0x8003DD04: nop

    // 0x8003DD08: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8003DD0C: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x8003DD10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003DD14: addiu       $a2, $s1, 0x1
    ctx->r6 = ADD32(ctx->r17, 0X1);
    // 0x8003DD18: jal         0x80066D8C
    // 0x8003DD1C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_80066D8C(rdram, ctx);
        goto after_5;
    // 0x8003DD1C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_5:
    // 0x8003DD20: bne         $v0, $zero, L_8003DD34
    if (ctx->r2 != 0) {
        // 0x8003DD24: nop
    
            goto L_8003DD34;
    }
    // 0x8003DD24: nop

    // 0x8003DD28: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003DD2C: b           L_8003DD54
    // 0x8003DD30: sb          $t6, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r14;
        goto L_8003DD54;
    // 0x8003DD30: sb          $t6, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r14;
L_8003DD34:
    // 0x8003DD34: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003DD38: sll         $t7, $s0, 24
    ctx->r15 = S32(ctx->r16 << 24);
    // 0x8003DD3C: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x8003DD40: sra         $t9, $s0, 24
    ctx->r25 = S32(SIGNED(ctx->r16) >> 24);
    // 0x8003DD44: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x8003DD48: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8003DD4C: bne         $at, $zero, L_8003DC80
    if (ctx->r1 != 0) {
        // 0x8003DD50: nop
    
            goto L_8003DC80;
    }
    // 0x8003DD50: nop

L_8003DD54:
    // 0x8003DD54: lbu         $t8, 0x2C($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2C);
    // 0x8003DD58: nop

    // 0x8003DD5C: bne         $t8, $zero, L_8003DD88
    if (ctx->r24 != 0) {
        // 0x8003DD60: nop
    
            goto L_8003DD88;
    }
    // 0x8003DD60: nop

L_8003DD64:
    // 0x8003DD64: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003DD68: sll         $t0, $s1, 24
    ctx->r8 = S32(ctx->r17 << 24);
    // 0x8003DD6C: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x8003DD70: sra         $t1, $s1, 24
    ctx->r9 = S32(SIGNED(ctx->r17) >> 24);
    // 0x8003DD74: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x8003DD78: addiu       $t2, $s2, 0x2
    ctx->r10 = ADD32(ctx->r18, 0X2);
    // 0x8003DD7C: slt         $at, $s1, $t2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8003DD80: bne         $at, $zero, L_8003DC50
    if (ctx->r1 != 0) {
        // 0x8003DD84: nop
    
            goto L_8003DC50;
    }
    // 0x8003DD84: nop

L_8003DD88:
    // 0x8003DD88: lbu         $v0, 0x2C($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2C);
    // 0x8003DD8C: nop

L_8003DD90:
    // 0x8003DD90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003DD94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003DD98: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003DD9C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003DDA0: jr          $ra
    // 0x8003DDA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8003DDA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8003DDA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003DDA8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8003DDAC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8003DDB0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8003DDB4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8003DDB8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8003DDBC: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8003DDC0: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8003DDC4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8003DDC8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8003DDCC: jal         0x800412E0
    // 0x8003DDD0: addiu       $a0, $sp, 0x33
    ctx->r4 = ADD32(ctx->r29, 0X33);
    func_800412E0(rdram, ctx);
        goto after_0;
    // 0x8003DDD0: addiu       $a0, $sp, 0x33
    ctx->r4 = ADD32(ctx->r29, 0X33);
    after_0:
    // 0x8003DDD4: lb          $t6, 0x3F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X3F);
    // 0x8003DDD8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8003DDDC: addiu       $s3, $t6, -0x1
    ctx->r19 = ADD32(ctx->r14, -0X1);
    // 0x8003DDE0: sll         $t7, $s3, 24
    ctx->r15 = S32(ctx->r19 << 24);
    // 0x8003DDE4: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x8003DDE8: sra         $t8, $s3, 24
    ctx->r24 = S32(SIGNED(ctx->r19) >> 24);
    // 0x8003DDEC: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
    // 0x8003DDF0: addiu       $t9, $t6, 0x4
    ctx->r25 = ADD32(ctx->r14, 0X4);
    // 0x8003DDF4: slt         $at, $s3, $t9
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8003DDF8: beq         $at, $zero, L_8003DF80
    if (ctx->r1 == 0) {
        // 0x8003DDFC: nop
    
            goto L_8003DF80;
    }
    // 0x8003DDFC: nop

L_8003DE00:
    // 0x8003DE00: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x8003DE04: lbu         $a2, 0x43($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X43);
    // 0x8003DE08: jal         0x80041810
    // 0x8003DE0C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80041810(rdram, ctx);
        goto after_1;
    // 0x8003DE0C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x8003DE10: beq         $v0, $zero, L_8003DF58
    if (ctx->r2 == 0) {
        // 0x8003DE14: nop
    
            goto L_8003DF58;
    }
    // 0x8003DE14: nop

    // 0x8003DE18: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x8003DE1C: lbu         $a2, 0x43($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X43);
    // 0x8003DE20: jal         0x800416CC
    // 0x8003DE24: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800416CC(rdram, ctx);
        goto after_2;
    // 0x8003DE24: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x8003DE28: beq         $v0, $zero, L_8003DF58
    if (ctx->r2 == 0) {
        // 0x8003DE2C: nop
    
            goto L_8003DF58;
    }
    // 0x8003DE2C: nop

    // 0x8003DE30: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x8003DE34: lbu         $a2, 0x43($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X43);
    // 0x8003DE38: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8003DE3C: jal         0x800413C0
    // 0x8003DE40: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_800413C0(rdram, ctx);
        goto after_3;
    // 0x8003DE40: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_3:
    // 0x8003DE44: addiu       $t0, $s3, -0x3
    ctx->r8 = ADD32(ctx->r19, -0X3);
    // 0x8003DE48: blez        $t0, L_8003DE68
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8003DE4C: nop
    
            goto L_8003DE68;
    }
    // 0x8003DE4C: nop

    // 0x8003DE50: addiu       $s1, $s3, -0x3
    ctx->r17 = ADD32(ctx->r19, -0X3);
    // 0x8003DE54: sll         $t1, $s1, 24
    ctx->r9 = S32(ctx->r17 << 24);
    // 0x8003DE58: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x8003DE5C: sra         $t2, $s1, 24
    ctx->r10 = S32(SIGNED(ctx->r17) >> 24);
    // 0x8003DE60: b           L_8003DE6C
    // 0x8003DE64: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
        goto L_8003DE6C;
    // 0x8003DE64: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
L_8003DE68:
    // 0x8003DE68: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8003DE6C:
    // 0x8003DE6C: slt         $at, $s3, $s1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8003DE70: bne         $at, $zero, L_8003DF3C
    if (ctx->r1 != 0) {
        // 0x8003DE74: nop
    
            goto L_8003DF3C;
    }
    // 0x8003DE74: nop

L_8003DE78:
    // 0x8003DE78: lbu         $t3, 0x3B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X3B);
    // 0x8003DE7C: nop

    // 0x8003DE80: addiu       $t4, $t3, -0x3
    ctx->r12 = ADD32(ctx->r11, -0X3);
    // 0x8003DE84: blez        $t4, L_8003DE9C
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8003DE88: nop
    
            goto L_8003DE9C;
    }
    // 0x8003DE88: nop

    // 0x8003DE8C: sll         $s0, $t4, 24
    ctx->r16 = S32(ctx->r12 << 24);
    // 0x8003DE90: sra         $t5, $s0, 24
    ctx->r13 = S32(SIGNED(ctx->r16) >> 24);
    // 0x8003DE94: b           L_8003DEA0
    // 0x8003DE98: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
        goto L_8003DEA0;
    // 0x8003DE98: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
L_8003DE9C:
    // 0x8003DE9C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003DEA0:
    // 0x8003DEA0: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x8003DEA4: nop

    // 0x8003DEA8: slt         $at, $t7, $s0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8003DEAC: bne         $at, $zero, L_8003DF14
    if (ctx->r1 != 0) {
        // 0x8003DEB0: nop
    
            goto L_8003DF14;
    }
    // 0x8003DEB0: nop

L_8003DEB4:
    // 0x8003DEB4: addiu       $t8, $sp, 0x31
    ctx->r24 = ADD32(ctx->r29, 0X31);
    // 0x8003DEB8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8003DEBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003DEC0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8003DEC4: addiu       $a2, $sp, 0x33
    ctx->r6 = ADD32(ctx->r29, 0X33);
    // 0x8003DEC8: jal         0x80041B48
    // 0x8003DECC: addiu       $a3, $sp, 0x32
    ctx->r7 = ADD32(ctx->r29, 0X32);
    func_80041B48(rdram, ctx);
        goto after_4;
    // 0x8003DECC: addiu       $a3, $sp, 0x32
    ctx->r7 = ADD32(ctx->r29, 0X32);
    after_4:
    // 0x8003DED0: beq         $v0, $zero, L_8003DEF0
    if (ctx->r2 == 0) {
        // 0x8003DED4: nop
    
            goto L_8003DEF0;
    }
    // 0x8003DED4: nop

    // 0x8003DED8: lbu         $t6, 0x32($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X32);
    // 0x8003DEDC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8003DEE0: bne         $t6, $at, L_8003DEF0
    if (ctx->r14 != ctx->r1) {
        // 0x8003DEE4: nop
    
            goto L_8003DEF0;
    }
    // 0x8003DEE4: nop

    // 0x8003DEE8: b           L_8003DF14
    // 0x8003DEEC: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_8003DF14;
    // 0x8003DEEC: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_8003DEF0:
    // 0x8003DEF0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003DEF4: sll         $t9, $s0, 24
    ctx->r25 = S32(ctx->r16 << 24);
    // 0x8003DEF8: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x8003DEFC: lbu         $t1, 0x3B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3B);
    // 0x8003DF00: sra         $t0, $s0, 24
    ctx->r8 = S32(SIGNED(ctx->r16) >> 24);
    // 0x8003DF04: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x8003DF08: slt         $at, $t1, $s0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8003DF0C: beq         $at, $zero, L_8003DEB4
    if (ctx->r1 == 0) {
        // 0x8003DF10: nop
    
            goto L_8003DEB4;
    }
    // 0x8003DF10: nop

L_8003DF14:
    // 0x8003DF14: bne         $s2, $zero, L_8003DF3C
    if (ctx->r18 != 0) {
        // 0x8003DF18: nop
    
            goto L_8003DF3C;
    }
    // 0x8003DF18: nop

    // 0x8003DF1C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003DF20: sll         $t2, $s1, 24
    ctx->r10 = S32(ctx->r17 << 24);
    // 0x8003DF24: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x8003DF28: sra         $t3, $s1, 24
    ctx->r11 = S32(SIGNED(ctx->r17) >> 24);
    // 0x8003DF2C: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x8003DF30: slt         $at, $s3, $s1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8003DF34: beq         $at, $zero, L_8003DE78
    if (ctx->r1 == 0) {
        // 0x8003DF38: nop
    
            goto L_8003DE78;
    }
    // 0x8003DF38: nop

L_8003DF3C:
    // 0x8003DF3C: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x8003DF40: lbu         $a2, 0x43($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X43);
    // 0x8003DF44: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8003DF48: jal         0x800413C0
    // 0x8003DF4C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_800413C0(rdram, ctx);
        goto after_5;
    // 0x8003DF4C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_5:
    // 0x8003DF50: bne         $s2, $zero, L_8003DF80
    if (ctx->r18 != 0) {
        // 0x8003DF54: nop
    
            goto L_8003DF80;
    }
    // 0x8003DF54: nop

L_8003DF58:
    // 0x8003DF58: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8003DF5C: sll         $t4, $s3, 24
    ctx->r12 = S32(ctx->r19 << 24);
    // 0x8003DF60: lb          $t7, 0x3F($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X3F);
    // 0x8003DF64: or          $s3, $t4, $zero
    ctx->r19 = ctx->r12 | 0;
    // 0x8003DF68: sra         $t5, $s3, 24
    ctx->r13 = S32(SIGNED(ctx->r19) >> 24);
    // 0x8003DF6C: or          $s3, $t5, $zero
    ctx->r19 = ctx->r13 | 0;
    // 0x8003DF70: addiu       $t8, $t7, 0x4
    ctx->r24 = ADD32(ctx->r15, 0X4);
    // 0x8003DF74: slt         $at, $s3, $t8
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8003DF78: bne         $at, $zero, L_8003DE00
    if (ctx->r1 != 0) {
        // 0x8003DF7C: nop
    
            goto L_8003DE00;
    }
    // 0x8003DF7C: nop

L_8003DF80:
    // 0x8003DF80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8003DF84: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8003DF88: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8003DF8C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8003DF90: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8003DF94: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8003DF98: jr          $ra
    // 0x8003DF9C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8003DF9C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8003DFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003DFA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003DFA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003DFA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003DFAC: jal         0x8007E03C
    // 0x8003DFB0: addiu       $a0, $zero, 0x962
    ctx->r4 = ADD32(0, 0X962);
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x8003DFB0: addiu       $a0, $zero, 0x962
    ctx->r4 = ADD32(0, 0X962);
    after_0:
    // 0x8003DFB4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8003DFB8: sw          $v0, 0x1F20($at)
    MEM_W(0X1F20, ctx->r1) = ctx->r2;
    // 0x8003DFBC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003DFC0: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8003DFC4: beq         $at, $zero, L_8003DFF4
    if (ctx->r1 == 0) {
        // 0x8003DFC8: nop
    
            goto L_8003DFF4;
    }
    // 0x8003DFC8: nop

L_8003DFCC:
    // 0x8003DFCC: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8003DFD0: lw          $t6, 0x1F20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F20);
    // 0x8003DFD4: nop

    // 0x8003DFD8: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8003DFDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003DFE0: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x8003DFE4: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x8003DFE8: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8003DFEC: bne         $at, $zero, L_8003DFCC
    if (ctx->r1 != 0) {
        // 0x8003DFF0: sb          $zero, 0x0($t7)
        MEM_B(0X0, ctx->r15) = 0;
            goto L_8003DFCC;
    }
    // 0x8003DFF0: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
L_8003DFF4:
    // 0x8003DFF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003DFF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003DFFC: jr          $ra
    // 0x8003E000: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8003E000: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003E004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E004: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8003E008: lw          $t6, 0x1F20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F20);
    // 0x8003E00C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E010: beq         $t6, $zero, L_8003E028
    if (ctx->r14 == 0) {
        // 0x8003E014: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8003E028;
    }
    // 0x8003E014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E018: jal         0x8007E328
    // 0x8003E01C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x8003E01C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x8003E020: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8003E024: sw          $zero, 0x1F20($at)
    MEM_W(0X1F20, ctx->r1) = 0;
L_8003E028:
    // 0x8003E028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E02C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003E030: jr          $ra
    // 0x8003E034: nop

    return;
    // 0x8003E034: nop

;}
RECOMP_FUNC void func_8003E038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E038: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8003E03C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8003E040: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8003E044: lw          $t6, 0x1F20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F20);
    // 0x8003E048: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x8003E04C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003E050: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003E054: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003E058: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8003E05C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003E060: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003E064: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x8003E068: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8003E06C: beq         $at, $zero, L_8003E1C0
    if (ctx->r1 == 0) {
        // 0x8003E070: sb          $zero, 0x0($t8)
        MEM_B(0X0, ctx->r24) = 0;
            goto L_8003E1C0;
    }
    // 0x8003E070: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
L_8003E074:
    // 0x8003E074: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8003E078: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x8003E07C: beq         $at, $zero, L_8003E1A8
    if (ctx->r1 == 0) {
        // 0x8003E080: nop
    
            goto L_8003E1A8;
    }
    // 0x8003E080: nop

L_8003E084:
    // 0x8003E084: addiu       $t9, $zero, 0x13
    ctx->r25 = ADD32(0, 0X13);
    // 0x8003E088: lbu         $a3, 0x3F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X3F);
    // 0x8003E08C: sb          $t9, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r25;
    // 0x8003E090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003E094: addiu       $a1, $sp, 0x2F
    ctx->r5 = ADD32(ctx->r29, 0X2F);
    // 0x8003E098: jal         0x8004199C
    // 0x8003E09C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8004199C(rdram, ctx);
        goto after_0;
    // 0x8003E09C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
    // 0x8003E0A0: beq         $v0, $zero, L_8003E190
    if (ctx->r2 == 0) {
        // 0x8003E0A4: nop
    
            goto L_8003E190;
    }
    // 0x8003E0A4: nop

L_8003E0A8:
    // 0x8003E0A8: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8003E0AC: lw          $t0, 0x1F20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1F20);
    // 0x8003E0B0: lbu         $t1, 0x3B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3B);
    // 0x8003E0B4: nop

    // 0x8003E0B8: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8003E0BC: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x8003E0C0: nop

    // 0x8003E0C4: slti        $at, $t3, 0x190
    ctx->r1 = SIGNED(ctx->r11) < 0X190 ? 1 : 0;
    // 0x8003E0C8: beq         $at, $zero, L_8003E1C0
    if (ctx->r1 == 0) {
        // 0x8003E0CC: nop
    
            goto L_8003E1C0;
    }
    // 0x8003E0CC: nop

    // 0x8003E0D0: lbu         $t5, 0x3B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X3B);
    // 0x8003E0D4: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8003E0D8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8003E0DC: lw          $t4, 0x1F20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1F20);
    // 0x8003E0E0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8003E0E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003E0E8: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8003E0EC: addu        $t8, $t4, $t5
    ctx->r24 = ADD32(ctx->r12, ctx->r13);
    // 0x8003E0F0: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x8003E0F4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003E0F8: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8003E0FC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8003E100: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8003E104: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x8003E108: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8003E10C: addu        $s2, $t7, $t0
    ctx->r18 = ADD32(ctx->r15, ctx->r8);
    // 0x8003E110: sb          $s0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r16;
    // 0x8003E114: lbu         $t1, 0x2F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X2F);
    // 0x8003E118: sb          $s1, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r17;
    // 0x8003E11C: sb          $t1, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r9;
    // 0x8003E120: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8003E124: lw          $t2, 0x1F20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1F20);
    // 0x8003E128: lbu         $t3, 0x3B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X3B);
    // 0x8003E12C: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x8003E130: addu        $t6, $t2, $t3
    ctx->r14 = ADD32(ctx->r10, ctx->r11);
    // 0x8003E134: lbu         $t4, 0x0($t6)
    ctx->r12 = MEM_BU(ctx->r14, 0X0);
    // 0x8003E138: nop

    // 0x8003E13C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8003E140: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x8003E144: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x8003E148: nop

    // 0x8003E14C: beq         $t8, $zero, L_8003E190
    if (ctx->r24 == 0) {
        // 0x8003E150: nop
    
            goto L_8003E190;
    }
    // 0x8003E150: nop

    // 0x8003E154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003E158: jal         0x8004191C
    // 0x8003E15C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8004191C(rdram, ctx);
        goto after_1;
    // 0x8003E15C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_1:
    // 0x8003E160: bne         $v0, $zero, L_8003E190
    if (ctx->r2 != 0) {
        // 0x8003E164: nop
    
            goto L_8003E190;
    }
    // 0x8003E164: nop

    // 0x8003E168: lbu         $t9, 0x2F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2F);
    // 0x8003E16C: lbu         $a3, 0x3F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X3F);
    // 0x8003E170: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x8003E174: sb          $t7, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r15;
    // 0x8003E178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003E17C: addiu       $a1, $sp, 0x2F
    ctx->r5 = ADD32(ctx->r29, 0X2F);
    // 0x8003E180: jal         0x8004199C
    // 0x8003E184: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8004199C(rdram, ctx);
        goto after_2;
    // 0x8003E184: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x8003E188: bne         $v0, $zero, L_8003E0A8
    if (ctx->r2 != 0) {
        // 0x8003E18C: nop
    
            goto L_8003E0A8;
    }
    // 0x8003E18C: nop

L_8003E190:
    // 0x8003E190: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003E194: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x8003E198: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x8003E19C: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x8003E1A0: bne         $at, $zero, L_8003E084
    if (ctx->r1 != 0) {
        // 0x8003E1A4: nop
    
            goto L_8003E084;
    }
    // 0x8003E1A4: nop

L_8003E1A8:
    // 0x8003E1A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003E1AC: andi        $t1, $s0, 0xFF
    ctx->r9 = ctx->r16 & 0XFF;
    // 0x8003E1B0: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x8003E1B4: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x8003E1B8: bne         $at, $zero, L_8003E074
    if (ctx->r1 != 0) {
        // 0x8003E1BC: nop
    
            goto L_8003E074;
    }
    // 0x8003E1BC: nop

L_8003E1C0:
    // 0x8003E1C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003E1C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003E1C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E1CC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003E1D0: jr          $ra
    // 0x8003E1D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8003E1D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8003E1D8: nop

    // 0x8003E1DC: nop

;}
RECOMP_FUNC void func_8003E1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E1E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003E1E4: slti        $at, $a1, 0x6
    ctx->r1 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
    // 0x8003E1E8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8003E1EC: beq         $at, $zero, L_8003E224
    if (ctx->r1 == 0) {
        // 0x8003E1F0: sb          $zero, 0x0($a0)
        MEM_B(0X0, ctx->r4) = 0;
            goto L_8003E224;
    }
    // 0x8003E1F0: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
L_8003E1F4:
    // 0x8003E1F4: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x8003E1F8: addu        $t7, $a0, $a1
    ctx->r15 = ADD32(ctx->r4, ctx->r5);
    // 0x8003E1FC: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x8003E200: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8003E204: andi        $t0, $a1, 0xFF
    ctx->r8 = ctx->r5 & 0XFF;
    // 0x8003E208: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8003E20C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8003E210: slti        $at, $a1, 0x6
    ctx->r1 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
    // 0x8003E214: sb          $t6, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r14;
    // 0x8003E218: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x8003E21C: bne         $at, $zero, L_8003E1F4
    if (ctx->r1 != 0) {
        // 0x8003E220: sb          $zero, 0x9($t9)
        MEM_B(0X9, ctx->r25) = 0;
            goto L_8003E1F4;
    }
    // 0x8003E220: sb          $zero, 0x9($t9)
    MEM_B(0X9, ctx->r25) = 0;
L_8003E224:
    // 0x8003E224: jr          $ra
    // 0x8003E228: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8003E228: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8003E22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E22C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8003E230: slti        $at, $a3, 0x6
    ctx->r1 = SIGNED(ctx->r7) < 0X6 ? 1 : 0;
    // 0x8003E234: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8003E238: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8003E23C: beq         $at, $zero, L_8003E278
    if (ctx->r1 == 0) {
        // 0x8003E240: andi        $a2, $a2, 0xFF
        ctx->r6 = ctx->r6 & 0XFF;
            goto L_8003E278;
    }
    // 0x8003E240: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
L_8003E244:
    // 0x8003E244: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x8003E248: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x8003E24C: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8003E250: lbu         $t8, 0x9($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X9);
    // 0x8003E254: nop

    // 0x8003E258: beq         $t8, $zero, L_8003E278
    if (ctx->r24 == 0) {
        // 0x8003E25C: nop
    
            goto L_8003E278;
    }
    // 0x8003E25C: nop

    // 0x8003E260: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8003E264: andi        $t9, $a3, 0xFF
    ctx->r25 = ctx->r7 & 0XFF;
    // 0x8003E268: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x8003E26C: slti        $at, $a3, 0x6
    ctx->r1 = SIGNED(ctx->r7) < 0X6 ? 1 : 0;
    // 0x8003E270: bne         $at, $zero, L_8003E244
    if (ctx->r1 != 0) {
        // 0x8003E274: nop
    
            goto L_8003E244;
    }
    // 0x8003E274: nop

L_8003E278:
    // 0x8003E278: slti        $at, $a3, 0x6
    ctx->r1 = SIGNED(ctx->r7) < 0X6 ? 1 : 0;
    // 0x8003E27C: beq         $at, $zero, L_8003E2C0
    if (ctx->r1 == 0) {
        // 0x8003E280: nop
    
            goto L_8003E2C0;
    }
    // 0x8003E280: nop

    // 0x8003E284: sll         $t1, $a3, 2
    ctx->r9 = S32(ctx->r7 << 2);
    // 0x8003E288: subu        $t1, $t1, $a3
    ctx->r9 = SUB32(ctx->r9, ctx->r7);
    // 0x8003E28C: addu        $t0, $a0, $t1
    ctx->r8 = ADD32(ctx->r4, ctx->r9);
    // 0x8003E290: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8003E294: sb          $t2, 0x9($t0)
    MEM_B(0X9, ctx->r8) = ctx->r10;
    // 0x8003E298: sb          $a1, 0x7($t0)
    MEM_B(0X7, ctx->r8) = ctx->r5;
    // 0x8003E29C: sb          $a2, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r6;
    // 0x8003E2A0: lbu         $t3, 0x0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X0);
    // 0x8003E2A4: addiu       $t0, $t0, 0x7
    ctx->r8 = ADD32(ctx->r8, 0X7);
    // 0x8003E2A8: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x8003E2AC: sb          $a3, 0x1($t4)
    MEM_B(0X1, ctx->r12) = ctx->r7;
    // 0x8003E2B0: lbu         $t5, 0x0($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X0);
    // 0x8003E2B4: nop

    // 0x8003E2B8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8003E2BC: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
L_8003E2C0:
    // 0x8003E2C0: jr          $ra
    // 0x8003E2C4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8003E2C4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8003E2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E2C8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8003E2CC: addu        $t6, $a0, $a1
    ctx->r14 = ADD32(ctx->r4, ctx->r5);
    // 0x8003E2D0: lb          $t7, 0x1($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X1);
    // 0x8003E2D4: andi        $a2, $a1, 0xFF
    ctx->r6 = ctx->r5 & 0XFF;
    // 0x8003E2D8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8003E2DC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8003E2E0: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x8003E2E4: slti        $at, $a2, 0x5
    ctx->r1 = SIGNED(ctx->r6) < 0X5 ? 1 : 0;
    // 0x8003E2E8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8003E2EC: beq         $at, $zero, L_8003E32C
    if (ctx->r1 == 0) {
        // 0x8003E2F0: sb          $zero, 0x9($t9)
        MEM_B(0X9, ctx->r25) = 0;
            goto L_8003E32C;
    }
    // 0x8003E2F0: sb          $zero, 0x9($t9)
    MEM_B(0X9, ctx->r25) = 0;
L_8003E2F4:
    // 0x8003E2F4: addu        $t0, $a0, $a2
    ctx->r8 = ADD32(ctx->r4, ctx->r6);
    // 0x8003E2F8: lb          $t1, 0x2($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X2);
    // 0x8003E2FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003E300: beq         $t1, $at, L_8003E32C
    if (ctx->r9 == ctx->r1) {
        // 0x8003E304: nop
    
            goto L_8003E32C;
    }
    // 0x8003E304: nop

    // 0x8003E308: addu        $t2, $a0, $a2
    ctx->r10 = ADD32(ctx->r4, ctx->r6);
    // 0x8003E30C: addu        $t4, $a0, $a2
    ctx->r12 = ADD32(ctx->r4, ctx->r6);
    // 0x8003E310: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8003E314: andi        $t5, $a2, 0xFF
    ctx->r13 = ctx->r6 & 0XFF;
    // 0x8003E318: lb          $t3, 0x2($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X2);
    // 0x8003E31C: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x8003E320: slti        $at, $a2, 0x5
    ctx->r1 = SIGNED(ctx->r6) < 0X5 ? 1 : 0;
    // 0x8003E324: bne         $at, $zero, L_8003E2F4
    if (ctx->r1 != 0) {
        // 0x8003E328: sb          $t3, 0x1($t4)
        MEM_B(0X1, ctx->r12) = ctx->r11;
            goto L_8003E2F4;
    }
    // 0x8003E328: sb          $t3, 0x1($t4)
    MEM_B(0X1, ctx->r12) = ctx->r11;
L_8003E32C:
    // 0x8003E32C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8003E330: addu        $t7, $a0, $a2
    ctx->r15 = ADD32(ctx->r4, ctx->r6);
    // 0x8003E334: sb          $t6, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r14;
    // 0x8003E338: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x8003E33C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8003E340: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8003E344: jr          $ra
    // 0x8003E348: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
    return;
    // 0x8003E348: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_8003E34C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E34C: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x8003E350: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8003E354: slt         $at, $a3, $t6
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8003E358: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8003E35C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8003E360: beq         $at, $zero, L_8003E44C
    if (ctx->r1 == 0) {
        // 0x8003E364: andi        $a2, $a2, 0xFF
        ctx->r6 = ctx->r6 & 0XFF;
            goto L_8003E44C;
    }
    // 0x8003E364: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
L_8003E368:
    // 0x8003E368: addu        $t7, $a0, $a3
    ctx->r15 = ADD32(ctx->r4, ctx->r7);
    // 0x8003E36C: lb          $t8, 0x1($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X1);
    // 0x8003E370: nop

    // 0x8003E374: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8003E378: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8003E37C: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x8003E380: lbu         $t1, 0x7($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X7);
    // 0x8003E384: addiu       $t0, $t0, 0x7
    ctx->r8 = ADD32(ctx->r8, 0X7);
    // 0x8003E388: slt         $at, $a1, $t1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8003E38C: bne         $at, $zero, L_8003E3D8
    if (ctx->r1 != 0) {
        // 0x8003E390: nop
    
            goto L_8003E3D8;
    }
    // 0x8003E390: nop

    // 0x8003E394: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x8003E398: nop

    // 0x8003E39C: addiu       $t3, $t2, 0x3
    ctx->r11 = ADD32(ctx->r10, 0X3);
    // 0x8003E3A0: slt         $at, $t3, $a1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8003E3A4: bne         $at, $zero, L_8003E3D8
    if (ctx->r1 != 0) {
        // 0x8003E3A8: nop
    
            goto L_8003E3D8;
    }
    // 0x8003E3A8: nop

    // 0x8003E3AC: lbu         $t4, 0x1($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X1);
    // 0x8003E3B0: nop

    // 0x8003E3B4: slt         $at, $a2, $t4
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8003E3B8: bne         $at, $zero, L_8003E3D8
    if (ctx->r1 != 0) {
        // 0x8003E3BC: nop
    
            goto L_8003E3D8;
    }
    // 0x8003E3BC: nop

    // 0x8003E3C0: lbu         $t5, 0x1($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X1);
    // 0x8003E3C4: nop

    // 0x8003E3C8: addiu       $t6, $t5, 0x3
    ctx->r14 = ADD32(ctx->r13, 0X3);
    // 0x8003E3CC: slt         $at, $t6, $a2
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8003E3D0: beq         $at, $zero, L_8003E428
    if (ctx->r1 == 0) {
        // 0x8003E3D4: nop
    
            goto L_8003E428;
    }
    // 0x8003E3D4: nop

L_8003E3D8:
    // 0x8003E3D8: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x8003E3DC: nop

    // 0x8003E3E0: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8003E3E4: bne         $at, $zero, L_8003E430
    if (ctx->r1 != 0) {
        // 0x8003E3E8: nop
    
            goto L_8003E430;
    }
    // 0x8003E3E8: nop

    // 0x8003E3EC: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x8003E3F0: addiu       $t9, $a1, 0x3
    ctx->r25 = ADD32(ctx->r5, 0X3);
    // 0x8003E3F4: slt         $at, $t9, $t8
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8003E3F8: bne         $at, $zero, L_8003E430
    if (ctx->r1 != 0) {
        // 0x8003E3FC: nop
    
            goto L_8003E430;
    }
    // 0x8003E3FC: nop

    // 0x8003E400: lbu         $t1, 0x1($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1);
    // 0x8003E404: nop

    // 0x8003E408: slt         $at, $t1, $a2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8003E40C: bne         $at, $zero, L_8003E430
    if (ctx->r1 != 0) {
        // 0x8003E410: nop
    
            goto L_8003E430;
    }
    // 0x8003E410: nop

    // 0x8003E414: lbu         $t2, 0x1($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X1);
    // 0x8003E418: addiu       $t3, $a2, 0x3
    ctx->r11 = ADD32(ctx->r6, 0X3);
    // 0x8003E41C: slt         $at, $t3, $t2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8003E420: bne         $at, $zero, L_8003E430
    if (ctx->r1 != 0) {
        // 0x8003E424: nop
    
            goto L_8003E430;
    }
    // 0x8003E424: nop

L_8003E428:
    // 0x8003E428: b           L_8003E450
    // 0x8003E42C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003E450;
    // 0x8003E42C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003E430:
    // 0x8003E430: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8003E434: lbu         $t5, 0x0($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X0);
    // 0x8003E438: andi        $t4, $a3, 0xFF
    ctx->r12 = ctx->r7 & 0XFF;
    // 0x8003E43C: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    // 0x8003E440: slt         $at, $a3, $t5
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8003E444: bne         $at, $zero, L_8003E368
    if (ctx->r1 != 0) {
        // 0x8003E448: nop
    
            goto L_8003E368;
    }
    // 0x8003E448: nop

L_8003E44C:
    // 0x8003E44C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003E450:
    // 0x8003E450: jr          $ra
    // 0x8003E454: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8003E454: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8003E458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E458: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003E45C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8003E460: addiu       $s1, $zero, 0x10
    ctx->r17 = ADD32(0, 0X10);
    // 0x8003E464: slti        $at, $s1, 0x7
    ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
    // 0x8003E468: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003E46C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8003E470: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8003E474: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8003E478: bne         $at, $zero, L_8003E544
    if (ctx->r1 != 0) {
        // 0x8003E47C: sw          $s0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r16;
            goto L_8003E544;
    }
    // 0x8003E47C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
L_8003E480:
    // 0x8003E480: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003E484: slti        $at, $s0, 0x7
    ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x8003E488: beq         $at, $zero, L_8003E524
    if (ctx->r1 == 0) {
        // 0x8003E48C: nop
    
            goto L_8003E524;
    }
    // 0x8003E48C: nop

L_8003E490:
    // 0x8003E490: addiu       $t6, $sp, 0x2B
    ctx->r14 = ADD32(ctx->r29, 0X2B);
    // 0x8003E494: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8003E498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003E49C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8003E4A0: addiu       $a2, $sp, 0x2D
    ctx->r6 = ADD32(ctx->r29, 0X2D);
    // 0x8003E4A4: jal         0x80041B48
    // 0x8003E4A8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_80041B48(rdram, ctx);
        goto after_0;
    // 0x8003E4A8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x8003E4AC: beq         $v0, $zero, L_8003E50C
    if (ctx->r2 == 0) {
        // 0x8003E4B0: nop
    
            goto L_8003E50C;
    }
    // 0x8003E4B0: nop

    // 0x8003E4B4: lbu         $t7, 0x2C($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2C);
    // 0x8003E4B8: nop

    // 0x8003E4BC: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x8003E4C0: beq         $at, $zero, L_8003E50C
    if (ctx->r1 == 0) {
        // 0x8003E4C4: nop
    
            goto L_8003E50C;
    }
    // 0x8003E4C4: nop

    // 0x8003E4C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003E4CC: jal         0x80041AB4
    // 0x8003E4D0: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    func_80041AB4(rdram, ctx);
        goto after_1;
    // 0x8003E4D0: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    after_1:
    // 0x8003E4D4: beq         $v0, $zero, L_8003E50C
    if (ctx->r2 == 0) {
        // 0x8003E4D8: nop
    
            goto L_8003E50C;
    }
    // 0x8003E4D8: nop

    // 0x8003E4DC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8003E4E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8003E4E4: jal         0x8003E34C
    // 0x8003E4E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8003E34C(rdram, ctx);
        goto after_2;
    // 0x8003E4E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x8003E4EC: bne         $v0, $zero, L_8003E50C
    if (ctx->r2 != 0) {
        // 0x8003E4F0: nop
    
            goto L_8003E50C;
    }
    // 0x8003E4F0: nop

    // 0x8003E4F4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8003E4F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003E4FC: sb          $s0, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r16;
    // 0x8003E500: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8003E504: b           L_8003E548
    // 0x8003E508: sb          $s1, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r17;
        goto L_8003E548;
    // 0x8003E508: sb          $s1, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r17;
L_8003E50C:
    // 0x8003E50C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003E510: andi        $t0, $s0, 0xFF
    ctx->r8 = ctx->r16 & 0XFF;
    // 0x8003E514: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x8003E518: slti        $at, $s0, 0x7
    ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x8003E51C: bne         $at, $zero, L_8003E490
    if (ctx->r1 != 0) {
        // 0x8003E520: nop
    
            goto L_8003E490;
    }
    // 0x8003E520: nop

L_8003E524:
    // 0x8003E524: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8003E528: sll         $t1, $s1, 24
    ctx->r9 = S32(ctx->r17 << 24);
    // 0x8003E52C: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x8003E530: sra         $t2, $s1, 24
    ctx->r10 = S32(SIGNED(ctx->r17) >> 24);
    // 0x8003E534: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x8003E538: slti        $at, $s1, 0x7
    ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
    // 0x8003E53C: beq         $at, $zero, L_8003E480
    if (ctx->r1 == 0) {
        // 0x8003E540: nop
    
            goto L_8003E480;
    }
    // 0x8003E540: nop

L_8003E544:
    // 0x8003E544: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003E548:
    // 0x8003E548: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003E54C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E550: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8003E554: jr          $ra
    // 0x8003E558: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8003E558: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8003E55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E55C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8003E560: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8003E564: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8003E568: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003E56C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8003E570: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8003E574: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8003E578: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003E57C: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8003E580: beq         $at, $zero, L_8003E5F0
    if (ctx->r1 == 0) {
        // 0x8003E584: nop
    
            goto L_8003E5F0;
    }
    // 0x8003E584: nop

L_8003E588:
    // 0x8003E588: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8003E58C: addiu       $t2, $sp, 0x2D
    ctx->r10 = ADD32(ctx->r29, 0X2D);
    // 0x8003E590: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x8003E594: lb          $t0, 0x1($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X1);
    // 0x8003E598: addiu       $a2, $sp, 0x2F
    ctx->r6 = ADD32(ctx->r29, 0X2F);
    // 0x8003E59C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8003E5A0: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8003E5A4: addu        $s1, $t8, $t1
    ctx->r17 = ADD32(ctx->r24, ctx->r9);
    // 0x8003E5A8: lbu         $a1, 0x8($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X8);
    // 0x8003E5AC: lbu         $a0, 0x7($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X7);
    // 0x8003E5B0: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x8003E5B4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8003E5B8: jal         0x80041B48
    // 0x8003E5BC: addiu       $a3, $sp, 0x2E
    ctx->r7 = ADD32(ctx->r29, 0X2E);
    func_80041B48(rdram, ctx);
        goto after_0;
    // 0x8003E5BC: addiu       $a3, $sp, 0x2E
    ctx->r7 = ADD32(ctx->r29, 0X2E);
    after_0:
    // 0x8003E5C0: bne         $v0, $zero, L_8003E5D0
    if (ctx->r2 != 0) {
        // 0x8003E5C4: nop
    
            goto L_8003E5D0;
    }
    // 0x8003E5C4: nop

    // 0x8003E5C8: b           L_8003E5F4
    // 0x8003E5CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003E5F4;
    // 0x8003E5CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003E5D0:
    // 0x8003E5D0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8003E5D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003E5D8: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x8003E5DC: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x8003E5E0: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x8003E5E4: slt         $at, $s0, $t5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8003E5E8: bne         $at, $zero, L_8003E588
    if (ctx->r1 != 0) {
        // 0x8003E5EC: nop
    
            goto L_8003E588;
    }
    // 0x8003E5EC: nop

L_8003E5F0:
    // 0x8003E5F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003E5F4:
    // 0x8003E5F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003E5F8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E5FC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8003E600: jr          $ra
    // 0x8003E604: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8003E604: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8003E608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E608: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x8003E60C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003E610: slt         $at, $a2, $t6
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8003E614: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8003E618: beq         $at, $zero, L_8003E684
    if (ctx->r1 == 0) {
        // 0x8003E61C: andi        $a1, $a1, 0xFF
        ctx->r5 = ctx->r5 & 0XFF;
            goto L_8003E684;
    }
    // 0x8003E61C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
L_8003E620:
    // 0x8003E620: addu        $t7, $a0, $a2
    ctx->r15 = ADD32(ctx->r4, ctx->r6);
    // 0x8003E624: lb          $t8, 0x1($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X1);
    // 0x8003E628: nop

    // 0x8003E62C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8003E630: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8003E634: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x8003E638: lbu         $a3, 0x8($t0)
    ctx->r7 = MEM_BU(ctx->r8, 0X8);
    // 0x8003E63C: addiu       $t0, $t0, 0x7
    ctx->r8 = ADD32(ctx->r8, 0X7);
    // 0x8003E640: addiu       $a3, $a3, 0x3
    ctx->r7 = ADD32(ctx->r7, 0X3);
    // 0x8003E644: andi        $t1, $a3, 0xFF
    ctx->r9 = ctx->r7 & 0XFF;
    // 0x8003E648: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8003E64C: slt         $at, $a3, $a1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8003E650: beq         $at, $zero, L_8003E668
    if (ctx->r1 == 0) {
        // 0x8003E654: nop
    
            goto L_8003E668;
    }
    // 0x8003E654: nop

    // 0x8003E658: lbu         $t2, 0x1($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X1);
    // 0x8003E65C: nop

    // 0x8003E660: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8003E664: sb          $t3, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r11;
L_8003E668:
    // 0x8003E668: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8003E66C: lbu         $t5, 0x0($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X0);
    // 0x8003E670: andi        $t4, $a2, 0xFF
    ctx->r12 = ctx->r6 & 0XFF;
    // 0x8003E674: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8003E678: slt         $at, $a2, $t5
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8003E67C: bne         $at, $zero, L_8003E620
    if (ctx->r1 != 0) {
        // 0x8003E680: nop
    
            goto L_8003E620;
    }
    // 0x8003E680: nop

L_8003E684:
    // 0x8003E684: jr          $ra
    // 0x8003E688: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8003E688: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8003E68C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E68C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8003E690: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x8003E694: lbu         $t6, 0x73($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X73);
    // 0x8003E698: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003E69C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8003E6A0: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x8003E6A4: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8003E6A8: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x8003E6AC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8003E6B0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8003E6B4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8003E6B8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8003E6BC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8003E6C0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8003E6C4: beq         $t6, $at, L_8003E6D4
    if (ctx->r14 == ctx->r1) {
        // 0x8003E6C8: sw          $s0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r16;
            goto L_8003E6D4;
    }
    // 0x8003E6C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8003E6CC: b           L_8003ED18
    // 0x8003E6D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003ED18;
    // 0x8003E6D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003E6D4:
    // 0x8003E6D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003E6D8: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8003E6DC: beq         $at, $zero, L_8003E734
    if (ctx->r1 == 0) {
        // 0x8003E6E0: nop
    
            goto L_8003E734;
    }
    // 0x8003E6E0: nop

L_8003E6E4:
    // 0x8003E6E4: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x8003E6E8: addu        $t8, $t8, $s0
    ctx->r24 = ADD32(ctx->r24, ctx->r16);
    // 0x8003E6EC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8003E6F0: addu        $t8, $t8, $s0
    ctx->r24 = ADD32(ctx->r24, ctx->r16);
    // 0x8003E6F4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003E6F8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8003E6FC: lw          $t7, -0x480($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X480);
    // 0x8003E700: addu        $t8, $t8, $s0
    ctx->r24 = ADD32(ctx->r24, ctx->r16);
    // 0x8003E704: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8003E708: addu        $t3, $sp, $s0
    ctx->r11 = ADD32(ctx->r29, ctx->r16);
    // 0x8003E70C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003E710: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8003E714: lbu         $t0, 0x78($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X78);
    // 0x8003E718: andi        $t4, $s0, 0xFF
    ctx->r12 = ctx->r16 & 0XFF;
    // 0x8003E71C: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x8003E720: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8003E724: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8003E728: sllv        $t2, $t1, $t0
    ctx->r10 = S32(ctx->r9 << (ctx->r8 & 31));
    // 0x8003E72C: bne         $at, $zero, L_8003E6E4
    if (ctx->r1 != 0) {
        // 0x8003E730: sb          $t2, 0x58($t3)
        MEM_B(0X58, ctx->r11) = ctx->r10;
            goto L_8003E6E4;
    }
    // 0x8003E730: sb          $t2, 0x58($t3)
    MEM_B(0X58, ctx->r11) = ctx->r10;
L_8003E734:
    // 0x8003E734: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8003E738: lw          $t5, -0x490($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X490);
    // 0x8003E73C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8003E740: slti        $at, $s2, 0x7
    ctx->r1 = SIGNED(ctx->r18) < 0X7 ? 1 : 0;
    // 0x8003E744: lbu         $s1, 0x13($t5)
    ctx->r17 = MEM_BU(ctx->r13, 0X13);
    // 0x8003E748: beq         $at, $zero, L_8003ED04
    if (ctx->r1 == 0) {
        // 0x8003E74C: nop
    
            goto L_8003ED04;
    }
    // 0x8003E74C: nop

L_8003E750:
    // 0x8003E750: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003E754: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x8003E758: beq         $at, $zero, L_8003E794
    if (ctx->r1 == 0) {
        // 0x8003E75C: nop
    
            goto L_8003E794;
    }
    // 0x8003E75C: nop

L_8003E760:
    // 0x8003E760: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x8003E764: lbu         $t7, 0x77($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X77);
    // 0x8003E768: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x8003E76C: lbu         $t6, 0x55B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X55B0);
    // 0x8003E770: or          $t8, $t7, $s2
    ctx->r24 = ctx->r15 | ctx->r18;
    // 0x8003E774: beq         $t6, $t8, L_8003E794
    if (ctx->r14 == ctx->r24) {
        // 0x8003E778: nop
    
            goto L_8003E794;
    }
    // 0x8003E778: nop

    // 0x8003E77C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003E780: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x8003E784: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x8003E788: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x8003E78C: bne         $at, $zero, L_8003E760
    if (ctx->r1 != 0) {
        // 0x8003E790: nop
    
            goto L_8003E760;
    }
    // 0x8003E790: nop

L_8003E794:
    // 0x8003E794: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8003E798: bne         $s0, $at, L_8003E7E8
    if (ctx->r16 != ctx->r1) {
        // 0x8003E79C: nop
    
            goto L_8003E7E8;
    }
    // 0x8003E79C: nop

    // 0x8003E7A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003E7A4: slti        $at, $s0, 0x13
    ctx->r1 = SIGNED(ctx->r16) < 0X13 ? 1 : 0;
    // 0x8003E7A8: beq         $at, $zero, L_8003E7E8
    if (ctx->r1 == 0) {
        // 0x8003E7AC: nop
    
            goto L_8003E7E8;
    }
    // 0x8003E7AC: nop

L_8003E7B0:
    // 0x8003E7B0: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8003E7B4: lbu         $t0, 0x77($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X77);
    // 0x8003E7B8: addu        $t1, $t1, $s0
    ctx->r9 = ADD32(ctx->r9, ctx->r16);
    // 0x8003E7BC: lbu         $t1, 0x55B0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X55B0);
    // 0x8003E7C0: or          $t2, $t0, $s2
    ctx->r10 = ctx->r8 | ctx->r18;
    // 0x8003E7C4: and         $t3, $t1, $t2
    ctx->r11 = ctx->r9 & ctx->r10;
    // 0x8003E7C8: bne         $t3, $zero, L_8003E7E8
    if (ctx->r11 != 0) {
        // 0x8003E7CC: nop
    
            goto L_8003E7E8;
    }
    // 0x8003E7CC: nop

    // 0x8003E7D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003E7D4: andi        $t4, $s0, 0xFF
    ctx->r12 = ctx->r16 & 0XFF;
    // 0x8003E7D8: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x8003E7DC: slti        $at, $s0, 0x13
    ctx->r1 = SIGNED(ctx->r16) < 0X13 ? 1 : 0;
    // 0x8003E7E0: bne         $at, $zero, L_8003E7B0
    if (ctx->r1 != 0) {
        // 0x8003E7E4: nop
    
            goto L_8003E7B0;
    }
    // 0x8003E7E4: nop

L_8003E7E8:
    // 0x8003E7E8: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x8003E7EC: beq         $s0, $at, L_8003ECEC
    if (ctx->r16 == ctx->r1) {
        // 0x8003E7F0: nop
    
            goto L_8003ECEC;
    }
    // 0x8003E7F0: nop

    // 0x8003E7F4: jal         0x80067DD8
    // 0x8003E7F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80067DD8(rdram, ctx);
        goto after_0;
    // 0x8003E7F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x8003E7FC: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x8003E800: nop

    // 0x8003E804: lbu         $t7, 0x0($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X0);
    // 0x8003E808: lbu         $s3, 0x0($t5)
    ctx->r19 = MEM_BU(ctx->r13, 0X0);
    // 0x8003E80C: addiu       $t6, $t7, 0x4
    ctx->r14 = ADD32(ctx->r15, 0X4);
    // 0x8003E810: slt         $at, $s3, $t6
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8003E814: beq         $at, $zero, L_8003ECEC
    if (ctx->r1 == 0) {
        // 0x8003E818: nop
    
            goto L_8003ECEC;
    }
    // 0x8003E818: nop

L_8003E81C:
    // 0x8003E81C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8003E820: slti        $at, $s4, 0x4
    ctx->r1 = SIGNED(ctx->r20) < 0X4 ? 1 : 0;
    // 0x8003E824: beq         $at, $zero, L_8003ECC8
    if (ctx->r1 == 0) {
        // 0x8003E828: nop
    
            goto L_8003ECC8;
    }
    // 0x8003E828: nop

L_8003E82C:
    // 0x8003E82C: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x8003E830: lbu         $a3, 0x7F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X7F);
    // 0x8003E834: lbu         $t9, 0x1($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1);
    // 0x8003E838: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8003E83C: addiu       $t0, $t9, 0x3
    ctx->r8 = ADD32(ctx->r25, 0X3);
    // 0x8003E840: sb          $t0, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r8;
    // 0x8003E844: addiu       $a1, $sp, 0x57
    ctx->r5 = ADD32(ctx->r29, 0X57);
    // 0x8003E848: jal         0x8004199C
    // 0x8003E84C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004199C(rdram, ctx);
        goto after_1;
    // 0x8003E84C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_1:
    // 0x8003E850: beq         $v0, $zero, L_8003ECB0
    if (ctx->r2 == 0) {
        // 0x8003E854: nop
    
            goto L_8003ECB0;
    }
    // 0x8003E854: nop

    // 0x8003E858: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x8003E85C: lbu         $t1, 0x57($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X57);
    // 0x8003E860: lbu         $t3, 0x1($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X1);
    // 0x8003E864: nop

    // 0x8003E868: slt         $at, $t1, $t3
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8003E86C: bne         $at, $zero, L_8003ECB0
    if (ctx->r1 != 0) {
        // 0x8003E870: nop
    
            goto L_8003ECB0;
    }
    // 0x8003E870: nop

L_8003E874:
    // 0x8003E874: lbu         $a1, 0x57($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X57);
    // 0x8003E878: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8003E87C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8003E880: jal         0x800413C0
    // 0x8003E884: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_800413C0(rdram, ctx);
        goto after_2;
    // 0x8003E884: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_2:
    // 0x8003E888: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x8003E88C: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
    // 0x8003E890: lbu         $a0, 0x0($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0X0);
    // 0x8003E894: lbu         $a1, 0x1($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X1);
    // 0x8003E898: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8003E89C: addiu       $a2, $sp, 0x56
    ctx->r6 = ADD32(ctx->r29, 0X56);
    // 0x8003E8A0: jal         0x80041B48
    // 0x8003E8A4: addiu       $a3, $sp, 0x55
    ctx->r7 = ADD32(ctx->r29, 0X55);
    func_80041B48(rdram, ctx);
        goto after_3;
    // 0x8003E8A4: addiu       $a3, $sp, 0x55
    ctx->r7 = ADD32(ctx->r29, 0X55);
    after_3:
    // 0x8003E8A8: beq         $v0, $zero, L_8003EC34
    if (ctx->r2 == 0) {
        // 0x8003E8AC: nop
    
            goto L_8003EC34;
    }
    // 0x8003E8AC: nop

    // 0x8003E8B0: lbu         $t7, 0x56($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X56);
    // 0x8003E8B4: lbu         $t6, 0x6F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X6F);
    // 0x8003E8B8: nop

    // 0x8003E8BC: bne         $t7, $t6, L_8003EC34
    if (ctx->r15 != ctx->r14) {
        // 0x8003E8C0: nop
    
            goto L_8003EC34;
    }
    // 0x8003E8C0: nop

    // 0x8003E8C4: lbu         $t8, 0x73($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X73);
    // 0x8003E8C8: lbu         $t9, 0x55($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X55);
    // 0x8003E8CC: nop

    // 0x8003E8D0: beq         $t8, $t9, L_8003EC34
    if (ctx->r24 == ctx->r25) {
        // 0x8003E8D4: nop
    
            goto L_8003EC34;
    }
    // 0x8003E8D4: nop

    // 0x8003E8D8: lbu         $t0, 0x77($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X77);
    // 0x8003E8DC: lbu         $t2, 0x54($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X54);
    // 0x8003E8E0: nop

    // 0x8003E8E4: beq         $t0, $t2, L_8003EC34
    if (ctx->r8 == ctx->r10) {
        // 0x8003E8E8: nop
    
            goto L_8003EC34;
    }
    // 0x8003E8E8: nop

    // 0x8003E8EC: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8003E8F0: slti        $at, $s5, 0x4
    ctx->r1 = SIGNED(ctx->r21) < 0X4 ? 1 : 0;
    // 0x8003E8F4: beq         $at, $zero, L_8003E948
    if (ctx->r1 == 0) {
        // 0x8003E8F8: nop
    
            goto L_8003E948;
    }
    // 0x8003E8F8: nop

L_8003E8FC:
    // 0x8003E8FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003E900: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8003E904: beq         $at, $zero, L_8003E930
    if (ctx->r1 == 0) {
        // 0x8003E908: nop
    
            goto L_8003E930;
    }
    // 0x8003E908: nop

L_8003E90C:
    // 0x8003E90C: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x8003E910: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003E914: andi        $t5, $s0, 0xFF
    ctx->r13 = ctx->r16 & 0XFF;
    // 0x8003E918: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x8003E91C: addu        $t3, $t1, $s5
    ctx->r11 = ADD32(ctx->r9, ctx->r21);
    // 0x8003E920: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8003E924: addu        $t4, $sp, $t3
    ctx->r12 = ADD32(ctx->r29, ctx->r11);
    // 0x8003E928: bne         $at, $zero, L_8003E90C
    if (ctx->r1 != 0) {
        // 0x8003E92C: sb          $zero, 0x44($t4)
        MEM_B(0X44, ctx->r12) = 0;
            goto L_8003E90C;
    }
    // 0x8003E92C: sb          $zero, 0x44($t4)
    MEM_B(0X44, ctx->r12) = 0;
L_8003E930:
    // 0x8003E930: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8003E934: andi        $t7, $s5, 0xFF
    ctx->r15 = ctx->r21 & 0XFF;
    // 0x8003E938: or          $s5, $t7, $zero
    ctx->r21 = ctx->r15 | 0;
    // 0x8003E93C: slti        $at, $s5, 0x4
    ctx->r1 = SIGNED(ctx->r21) < 0X4 ? 1 : 0;
    // 0x8003E940: bne         $at, $zero, L_8003E8FC
    if (ctx->r1 != 0) {
        // 0x8003E944: nop
    
            goto L_8003E8FC;
    }
    // 0x8003E944: nop

L_8003E948:
    // 0x8003E948: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x8003E94C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8003E950: lbu         $t8, 0x0($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X0);
    // 0x8003E954: lbu         $t9, 0x1($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X1);
    // 0x8003E958: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8003E95C: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8003E960: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x8003E964: jal         0x8003F300
    // 0x8003E968: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_8003F300(rdram, ctx);
        goto after_4;
    // 0x8003E968: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_4:
    // 0x8003E96C: bgez        $v0, L_8003E980
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8003E970: andi        $t0, $v0, 0x3
        ctx->r8 = ctx->r2 & 0X3;
            goto L_8003E980;
    }
    // 0x8003E970: andi        $t0, $v0, 0x3
    ctx->r8 = ctx->r2 & 0X3;
    // 0x8003E974: beq         $t0, $zero, L_8003E980
    if (ctx->r8 == 0) {
        // 0x8003E978: nop
    
            goto L_8003E980;
    }
    // 0x8003E978: nop

    // 0x8003E97C: addiu       $t0, $t0, -0x4
    ctx->r8 = ADD32(ctx->r8, -0X4);
L_8003E980:
    // 0x8003E980: bne         $t0, $zero, L_8003EC34
    if (ctx->r8 != 0) {
        // 0x8003E984: nop
    
            goto L_8003EC34;
    }
    // 0x8003E984: nop

    // 0x8003E988: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8003E98C: slti        $at, $s5, 0x4
    ctx->r1 = SIGNED(ctx->r21) < 0X4 ? 1 : 0;
    // 0x8003E990: beq         $at, $zero, L_8003EA4C
    if (ctx->r1 == 0) {
        // 0x8003E994: nop
    
            goto L_8003EA4C;
    }
    // 0x8003E994: nop

L_8003E998:
    // 0x8003E998: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003E99C: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8003E9A0: beq         $at, $zero, L_8003EA34
    if (ctx->r1 == 0) {
        // 0x8003E9A4: nop
    
            goto L_8003EA34;
    }
    // 0x8003E9A4: nop

L_8003E9A8:
    // 0x8003E9A8: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x8003E9AC: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8003E9B0: lbu         $t4, 0x1($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X1);
    // 0x8003E9B4: lbu         $t1, 0x0($t2)
    ctx->r9 = MEM_BU(ctx->r10, 0X0);
    // 0x8003E9B8: addu        $t5, $s5, $t4
    ctx->r13 = ADD32(ctx->r21, ctx->r12);
    // 0x8003E9BC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8003E9C0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8003E9C4: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x8003E9C8: addu        $t3, $s0, $t1
    ctx->r11 = ADD32(ctx->r16, ctx->r9);
    // 0x8003E9CC: addu        $t6, $t3, $t7
    ctx->r14 = ADD32(ctx->r11, ctx->r15);
    // 0x8003E9D0: lw          $t9, 0x1F30($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1F30);
    // 0x8003E9D4: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8003E9D8: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x8003E9DC: addu        $s6, $t9, $t8
    ctx->r22 = ADD32(ctx->r25, ctx->r24);
    // 0x8003E9E0: lbu         $t0, 0x0($s6)
    ctx->r8 = MEM_BU(ctx->r22, 0X0);
    // 0x8003E9E4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8003E9E8: bne         $t0, $at, L_8003EA08
    if (ctx->r8 != ctx->r1) {
        // 0x8003E9EC: nop
    
            goto L_8003EA08;
    }
    // 0x8003E9EC: nop

    // 0x8003E9F0: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x8003E9F4: addu        $t4, $t2, $s5
    ctx->r12 = ADD32(ctx->r10, ctx->r21);
    // 0x8003E9F8: addu        $t5, $sp, $t4
    ctx->r13 = ADD32(ctx->r29, ctx->r12);
    // 0x8003E9FC: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8003EA00: b           L_8003EA1C
    // 0x8003EA04: sb          $t1, 0x44($t5)
    MEM_B(0X44, ctx->r13) = ctx->r9;
        goto L_8003EA1C;
    // 0x8003EA04: sb          $t1, 0x44($t5)
    MEM_B(0X44, ctx->r13) = ctx->r9;
L_8003EA08:
    // 0x8003EA08: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x8003EA0C: lbu         $t3, 0x1($s6)
    ctx->r11 = MEM_BU(ctx->r22, 0X1);
    // 0x8003EA10: addu        $t6, $t7, $s5
    ctx->r14 = ADD32(ctx->r15, ctx->r21);
    // 0x8003EA14: addu        $t9, $sp, $t6
    ctx->r25 = ADD32(ctx->r29, ctx->r14);
    // 0x8003EA18: sb          $t3, 0x44($t9)
    MEM_B(0X44, ctx->r25) = ctx->r11;
L_8003EA1C:
    // 0x8003EA1C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003EA20: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x8003EA24: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x8003EA28: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8003EA2C: bne         $at, $zero, L_8003E9A8
    if (ctx->r1 != 0) {
        // 0x8003EA30: nop
    
            goto L_8003E9A8;
    }
    // 0x8003EA30: nop

L_8003EA34:
    // 0x8003EA34: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8003EA38: andi        $t0, $s5, 0xFF
    ctx->r8 = ctx->r21 & 0XFF;
    // 0x8003EA3C: or          $s5, $t0, $zero
    ctx->r21 = ctx->r8 | 0;
    // 0x8003EA40: slti        $at, $s5, 0x4
    ctx->r1 = SIGNED(ctx->r21) < 0X4 ? 1 : 0;
    // 0x8003EA44: bne         $at, $zero, L_8003E998
    if (ctx->r1 != 0) {
        // 0x8003EA48: nop
    
            goto L_8003E998;
    }
    // 0x8003EA48: nop

L_8003EA4C:
    // 0x8003EA4C: lbu         $t2, 0x56($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X56);
    // 0x8003EA50: nop

    // 0x8003EA54: bne         $t2, $zero, L_8003EB48
    if (ctx->r10 != 0) {
        // 0x8003EA58: nop
    
            goto L_8003EB48;
    }
    // 0x8003EA58: nop

    // 0x8003EA5C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003EA60: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x8003EA64: beq         $at, $zero, L_8003EB48
    if (ctx->r1 == 0) {
        // 0x8003EA68: nop
    
            goto L_8003EB48;
    }
    // 0x8003EA68: nop

L_8003EA6C:
    // 0x8003EA6C: lbu         $a2, 0x54($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X54);
    // 0x8003EA70: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8003EA74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003EA78: jal         0x8003F4F4
    // 0x8003EA7C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_8003F4F4(rdram, ctx);
        goto after_5;
    // 0x8003EA7C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_5:
    // 0x8003EA80: beq         $v0, $zero, L_8003EB30
    if (ctx->r2 == 0) {
        // 0x8003EA84: nop
    
            goto L_8003EB30;
    }
    // 0x8003EA84: nop

    // 0x8003EA88: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x8003EA8C: lbu         $t4, 0x7F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X7F);
    // 0x8003EA90: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8003EA94: lbu         $a1, 0x56($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X56);
    // 0x8003EA98: lbu         $a2, 0x55($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X55);
    // 0x8003EA9C: lbu         $a3, 0x54($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X54);
    // 0x8003EAA0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8003EAA4: jal         0x8003E68C
    // 0x8003EAA8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_8003E68C(rdram, ctx);
        goto after_6;
    // 0x8003EAA8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_6:
    // 0x8003EAAC: beq         $v0, $zero, L_8003EB30
    if (ctx->r2 == 0) {
        // 0x8003EAB0: nop
    
            goto L_8003EB30;
    }
    // 0x8003EAB0: nop

    // 0x8003EAB4: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8003EAB8: slti        $at, $s5, 0x4
    ctx->r1 = SIGNED(ctx->r21) < 0X4 ? 1 : 0;
    // 0x8003EABC: beq         $at, $zero, L_8003EB0C
    if (ctx->r1 == 0) {
        // 0x8003EAC0: nop
    
            goto L_8003EB0C;
    }
    // 0x8003EAC0: nop

L_8003EAC4:
    // 0x8003EAC4: addu        $t5, $sp, $s5
    ctx->r13 = ADD32(ctx->r29, ctx->r21);
    // 0x8003EAC8: lbu         $t5, 0x58($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X58);
    // 0x8003EACC: nop

    // 0x8003EAD0: bne         $t5, $s2, L_8003EAF4
    if (ctx->r13 != ctx->r18) {
        // 0x8003EAD4: nop
    
            goto L_8003EAF4;
    }
    // 0x8003EAD4: nop

    // 0x8003EAD8: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x8003EADC: nop

    // 0x8003EAE0: lh          $t3, 0x0($t7)
    ctx->r11 = MEM_H(ctx->r15, 0X0);
    // 0x8003EAE4: nop

    // 0x8003EAE8: addiu       $t6, $t3, 0x14
    ctx->r14 = ADD32(ctx->r11, 0X14);
    // 0x8003EAEC: b           L_8003EB0C
    // 0x8003EAF0: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
        goto L_8003EB0C;
    // 0x8003EAF0: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
L_8003EAF4:
    // 0x8003EAF4: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8003EAF8: andi        $t9, $s5, 0xFF
    ctx->r25 = ctx->r21 & 0XFF;
    // 0x8003EAFC: or          $s5, $t9, $zero
    ctx->r21 = ctx->r25 | 0;
    // 0x8003EB00: slti        $at, $s5, 0x4
    ctx->r1 = SIGNED(ctx->r21) < 0X4 ? 1 : 0;
    // 0x8003EB04: bne         $at, $zero, L_8003EAC4
    if (ctx->r1 != 0) {
        // 0x8003EB08: nop
    
            goto L_8003EAC4;
    }
    // 0x8003EB08: nop

L_8003EB0C:
    // 0x8003EB0C: lbu         $a1, 0x57($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X57);
    // 0x8003EB10: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8003EB14: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8003EB18: jal         0x800413C0
    // 0x8003EB1C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_800413C0(rdram, ctx);
        goto after_7;
    // 0x8003EB1C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_7:
    // 0x8003EB20: jal         0x80067DD8
    // 0x8003EB24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80067DD8(rdram, ctx);
        goto after_8;
    // 0x8003EB24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x8003EB28: b           L_8003ED18
    // 0x8003EB2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003ED18;
    // 0x8003EB2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003EB30:
    // 0x8003EB30: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003EB34: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x8003EB38: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x8003EB3C: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x8003EB40: bne         $at, $zero, L_8003EA6C
    if (ctx->r1 != 0) {
        // 0x8003EB44: nop
    
            goto L_8003EA6C;
    }
    // 0x8003EB44: nop

L_8003EB48:
    // 0x8003EB48: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003EB4C: slti        $at, $s0, 0x13
    ctx->r1 = SIGNED(ctx->r16) < 0X13 ? 1 : 0;
    // 0x8003EB50: beq         $at, $zero, L_8003EC34
    if (ctx->r1 == 0) {
        // 0x8003EB54: nop
    
            goto L_8003EC34;
    }
    // 0x8003EB54: nop

L_8003EB58:
    // 0x8003EB58: lbu         $a2, 0x54($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X54);
    // 0x8003EB5C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8003EB60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003EB64: jal         0x8003F4F4
    // 0x8003EB68: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_8003F4F4(rdram, ctx);
        goto after_9;
    // 0x8003EB68: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_9:
    // 0x8003EB6C: beq         $v0, $zero, L_8003EC1C
    if (ctx->r2 == 0) {
        // 0x8003EB70: nop
    
            goto L_8003EC1C;
    }
    // 0x8003EB70: nop

    // 0x8003EB74: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x8003EB78: lbu         $t2, 0x7F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X7F);
    // 0x8003EB7C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8003EB80: lbu         $a1, 0x56($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X56);
    // 0x8003EB84: lbu         $a2, 0x55($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X55);
    // 0x8003EB88: lbu         $a3, 0x54($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X54);
    // 0x8003EB8C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8003EB90: jal         0x8003E68C
    // 0x8003EB94: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_8003E68C(rdram, ctx);
        goto after_10;
    // 0x8003EB94: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_10:
    // 0x8003EB98: beq         $v0, $zero, L_8003EC1C
    if (ctx->r2 == 0) {
        // 0x8003EB9C: nop
    
            goto L_8003EC1C;
    }
    // 0x8003EB9C: nop

    // 0x8003EBA0: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8003EBA4: slti        $at, $s5, 0x4
    ctx->r1 = SIGNED(ctx->r21) < 0X4 ? 1 : 0;
    // 0x8003EBA8: beq         $at, $zero, L_8003EBF8
    if (ctx->r1 == 0) {
        // 0x8003EBAC: nop
    
            goto L_8003EBF8;
    }
    // 0x8003EBAC: nop

L_8003EBB0:
    // 0x8003EBB0: addu        $t1, $sp, $s5
    ctx->r9 = ADD32(ctx->r29, ctx->r21);
    // 0x8003EBB4: lbu         $t1, 0x58($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X58);
    // 0x8003EBB8: nop

    // 0x8003EBBC: bne         $t1, $s2, L_8003EBE0
    if (ctx->r9 != ctx->r18) {
        // 0x8003EBC0: nop
    
            goto L_8003EBE0;
    }
    // 0x8003EBC0: nop

    // 0x8003EBC4: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x8003EBC8: nop

    // 0x8003EBCC: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x8003EBD0: nop

    // 0x8003EBD4: addiu       $t3, $t5, 0x14
    ctx->r11 = ADD32(ctx->r13, 0X14);
    // 0x8003EBD8: b           L_8003EBF8
    // 0x8003EBDC: sh          $t3, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r11;
        goto L_8003EBF8;
    // 0x8003EBDC: sh          $t3, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r11;
L_8003EBE0:
    // 0x8003EBE0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8003EBE4: andi        $t6, $s5, 0xFF
    ctx->r14 = ctx->r21 & 0XFF;
    // 0x8003EBE8: or          $s5, $t6, $zero
    ctx->r21 = ctx->r14 | 0;
    // 0x8003EBEC: slti        $at, $s5, 0x4
    ctx->r1 = SIGNED(ctx->r21) < 0X4 ? 1 : 0;
    // 0x8003EBF0: bne         $at, $zero, L_8003EBB0
    if (ctx->r1 != 0) {
        // 0x8003EBF4: nop
    
            goto L_8003EBB0;
    }
    // 0x8003EBF4: nop

L_8003EBF8:
    // 0x8003EBF8: lbu         $a1, 0x57($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X57);
    // 0x8003EBFC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8003EC00: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8003EC04: jal         0x800413C0
    // 0x8003EC08: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_800413C0(rdram, ctx);
        goto after_11;
    // 0x8003EC08: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_11:
    // 0x8003EC0C: jal         0x80067DD8
    // 0x8003EC10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80067DD8(rdram, ctx);
        goto after_12;
    // 0x8003EC10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x8003EC14: b           L_8003ED18
    // 0x8003EC18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003ED18;
    // 0x8003EC18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003EC1C:
    // 0x8003EC1C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003EC20: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x8003EC24: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x8003EC28: slti        $at, $s0, 0x13
    ctx->r1 = SIGNED(ctx->r16) < 0X13 ? 1 : 0;
    // 0x8003EC2C: bne         $at, $zero, L_8003EB58
    if (ctx->r1 != 0) {
        // 0x8003EC30: nop
    
            goto L_8003EB58;
    }
    // 0x8003EC30: nop

L_8003EC34:
    // 0x8003EC34: lbu         $a1, 0x57($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X57);
    // 0x8003EC38: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8003EC3C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8003EC40: jal         0x800413C0
    // 0x8003EC44: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_800413C0(rdram, ctx);
        goto after_13;
    // 0x8003EC44: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_13:
    // 0x8003EC48: lbu         $t9, 0x57($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X57);
    // 0x8003EC4C: nop

    // 0x8003EC50: beq         $t9, $zero, L_8003ECB0
    if (ctx->r25 == 0) {
        // 0x8003EC54: nop
    
            goto L_8003ECB0;
    }
    // 0x8003EC54: nop

    // 0x8003EC58: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8003EC5C: jal         0x8004191C
    // 0x8003EC60: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8004191C(rdram, ctx);
        goto after_14;
    // 0x8003EC60: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_14:
    // 0x8003EC64: bne         $v0, $zero, L_8003ECB0
    if (ctx->r2 != 0) {
        // 0x8003EC68: nop
    
            goto L_8003ECB0;
    }
    // 0x8003EC68: nop

    // 0x8003EC6C: lbu         $t8, 0x57($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X57);
    // 0x8003EC70: lbu         $a3, 0x7F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X7F);
    // 0x8003EC74: addiu       $t0, $t8, -0x1
    ctx->r8 = ADD32(ctx->r24, -0X1);
    // 0x8003EC78: sb          $t0, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r8;
    // 0x8003EC7C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8003EC80: addiu       $a1, $sp, 0x57
    ctx->r5 = ADD32(ctx->r29, 0X57);
    // 0x8003EC84: jal         0x8004199C
    // 0x8003EC88: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004199C(rdram, ctx);
        goto after_15;
    // 0x8003EC88: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_15:
    // 0x8003EC8C: beq         $v0, $zero, L_8003ECB0
    if (ctx->r2 == 0) {
        // 0x8003EC90: nop
    
            goto L_8003ECB0;
    }
    // 0x8003EC90: nop

    // 0x8003EC94: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x8003EC98: lbu         $t2, 0x57($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X57);
    // 0x8003EC9C: lbu         $t5, 0x1($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X1);
    // 0x8003ECA0: nop

    // 0x8003ECA4: slt         $at, $t2, $t5
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8003ECA8: beq         $at, $zero, L_8003E874
    if (ctx->r1 == 0) {
        // 0x8003ECAC: nop
    
            goto L_8003E874;
    }
    // 0x8003ECAC: nop

L_8003ECB0:
    // 0x8003ECB0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8003ECB4: andi        $t3, $s4, 0xFF
    ctx->r11 = ctx->r20 & 0XFF;
    // 0x8003ECB8: or          $s4, $t3, $zero
    ctx->r20 = ctx->r11 | 0;
    // 0x8003ECBC: slti        $at, $s4, 0x4
    ctx->r1 = SIGNED(ctx->r20) < 0X4 ? 1 : 0;
    // 0x8003ECC0: bne         $at, $zero, L_8003E82C
    if (ctx->r1 != 0) {
        // 0x8003ECC4: nop
    
            goto L_8003E82C;
    }
    // 0x8003ECC4: nop

L_8003ECC8:
    // 0x8003ECC8: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x8003ECCC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8003ECD0: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8003ECD4: andi        $t4, $s3, 0xFF
    ctx->r12 = ctx->r19 & 0XFF;
    // 0x8003ECD8: or          $s3, $t4, $zero
    ctx->r19 = ctx->r12 | 0;
    // 0x8003ECDC: addiu       $t9, $t7, 0x4
    ctx->r25 = ADD32(ctx->r15, 0X4);
    // 0x8003ECE0: slt         $at, $s3, $t9
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8003ECE4: bne         $at, $zero, L_8003E81C
    if (ctx->r1 != 0) {
        // 0x8003ECE8: nop
    
            goto L_8003E81C;
    }
    // 0x8003ECE8: nop

L_8003ECEC:
    // 0x8003ECEC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8003ECF0: andi        $t8, $s2, 0xFF
    ctx->r24 = ctx->r18 & 0XFF;
    // 0x8003ECF4: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    // 0x8003ECF8: slti        $at, $s2, 0x7
    ctx->r1 = SIGNED(ctx->r18) < 0X7 ? 1 : 0;
    // 0x8003ECFC: bne         $at, $zero, L_8003E750
    if (ctx->r1 != 0) {
        // 0x8003ED00: nop
    
            goto L_8003E750;
    }
    // 0x8003ED00: nop

L_8003ED04:
    // 0x8003ED04: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x8003ED08: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8003ED0C: jal         0x80067DD8
    // 0x8003ED10: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    func_80067DD8(rdram, ctx);
        goto after_16;
    // 0x8003ED10: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    after_16:
    // 0x8003ED14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003ED18:
    // 0x8003ED18: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8003ED1C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8003ED20: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8003ED24: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8003ED28: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8003ED2C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8003ED30: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8003ED34: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8003ED38: jr          $ra
    // 0x8003ED3C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8003ED3C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8003ED40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003ED40: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8003ED44: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x8003ED48: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x8003ED4C: lbu         $t8, 0x77($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X77);
    // 0x8003ED50: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x8003ED54: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x8003ED58: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8003ED5C: lw          $t2, 0x1F20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1F20);
    // 0x8003ED60: lbu         $t3, 0x7F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X7F);
    // 0x8003ED64: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8003ED68: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x8003ED6C: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x8003ED70: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x8003ED74: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8003ED78: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8003ED7C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8003ED80: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8003ED84: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8003ED88: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8003ED8C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8003ED90: lb          $t0, 0x1($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X1);
    // 0x8003ED94: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8003ED98: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x8003ED9C: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x8003EDA0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8003EDA4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8003EDA8: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8003EDAC: addu        $s4, $t7, $t1
    ctx->r20 = ADD32(ctx->r15, ctx->r9);
    // 0x8003EDB0: lbu         $s0, 0x0($t6)
    ctx->r16 = MEM_BU(ctx->r14, 0X0);
    // 0x8003EDB4: slt         $at, $s1, $t5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8003EDB8: beq         $at, $zero, L_8003F2BC
    if (ctx->r1 == 0) {
        // 0x8003EDBC: addiu       $s4, $s4, 0x7
        ctx->r20 = ADD32(ctx->r20, 0X7);
            goto L_8003F2BC;
    }
    // 0x8003EDBC: addiu       $s4, $s4, 0x7
    ctx->r20 = ADD32(ctx->r20, 0X7);
L_8003EDC0:
    // 0x8003EDC0: slti        $at, $s0, 0xC8
    ctx->r1 = SIGNED(ctx->r16) < 0XC8 ? 1 : 0;
    // 0x8003EDC4: bne         $at, $zero, L_8003EDF4
    if (ctx->r1 != 0) {
        // 0x8003EDC8: nop
    
            goto L_8003EDF4;
    }
    // 0x8003EDC8: nop

    // 0x8003EDCC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8003EDD0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8003EDD4: addiu       $a1, $a1, -0x4BD8
    ctx->r5 = ADD32(ctx->r5, -0X4BD8);
    // 0x8003EDD8: jal         0x80083560
    // 0x8003EDDC: addiu       $a0, $a0, -0x4BF0
    ctx->r4 = ADD32(ctx->r4, -0X4BF0);
    Fault_Assert(rdram, ctx);
        goto after_0;
    // 0x8003EDDC: addiu       $a0, $a0, -0x4BF0
    ctx->r4 = ADD32(ctx->r4, -0X4BF0);
    after_0:
    // 0x8003EDE0: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x8003EDE4: addiu       $s0, $zero, 0xC8
    ctx->r16 = ADD32(0, 0XC8);
    // 0x8003EDE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003EDEC: b           L_8003F2C8
    // 0x8003EDF0: sb          $s0, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r16;
        goto L_8003F2C8;
    // 0x8003EDF0: sb          $s0, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r16;
L_8003EDF4:
    // 0x8003EDF4: lbu         $t9, 0x7F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X7F);
    // 0x8003EDF8: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8003EDFC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8003EE00: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8003EE04: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003EE08: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8003EE0C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003EE10: lw          $t8, 0x1F20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F20);
    // 0x8003EE14: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8003EE18: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8003EE1C: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x8003EE20: subu        $t1, $t1, $s1
    ctx->r9 = SUB32(ctx->r9, ctx->r17);
    // 0x8003EE24: addu        $t7, $t8, $t0
    ctx->r15 = ADD32(ctx->r24, ctx->r8);
    // 0x8003EE28: addu        $s7, $t7, $t1
    ctx->r23 = ADD32(ctx->r15, ctx->r9);
    // 0x8003EE2C: lbu         $t2, 0x2($s7)
    ctx->r10 = MEM_BU(ctx->r23, 0X2);
    // 0x8003EE30: addiu       $s7, $s7, 0x2
    ctx->r23 = ADD32(ctx->r23, 0X2);
    // 0x8003EE34: sb          $t2, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r10;
    // 0x8003EE38: lb          $t3, 0x1($s7)
    ctx->r11 = MEM_B(ctx->r23, 0X1);
    // 0x8003EE3C: lbu         $t6, 0x5B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003EE40: sb          $t3, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r11;
    // 0x8003EE44: lbu         $t4, 0x2($s7)
    ctx->r12 = MEM_BU(ctx->r23, 0X2);
    // 0x8003EE48: nop

    // 0x8003EE4C: sb          $t4, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r12;
    // 0x8003EE50: lbu         $t5, 0x0($s4)
    ctx->r13 = MEM_BU(ctx->r20, 0X0);
    // 0x8003EE54: nop

    // 0x8003EE58: slt         $at, $t6, $t5
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8003EE5C: bne         $at, $zero, L_8003F290
    if (ctx->r1 != 0) {
        // 0x8003EE60: nop
    
            goto L_8003F290;
    }
    // 0x8003EE60: nop

    // 0x8003EE64: lbu         $t9, 0x0($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X0);
    // 0x8003EE68: nop

    // 0x8003EE6C: addiu       $t8, $t9, 0x3
    ctx->r24 = ADD32(ctx->r25, 0X3);
    // 0x8003EE70: slt         $at, $t8, $t6
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8003EE74: bne         $at, $zero, L_8003F290
    if (ctx->r1 != 0) {
        // 0x8003EE78: nop
    
            goto L_8003F290;
    }
    // 0x8003EE78: nop

    // 0x8003EE7C: lbu         $t0, 0x1($s4)
    ctx->r8 = MEM_BU(ctx->r20, 0X1);
    // 0x8003EE80: lbu         $t7, 0x5A($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X5A);
    // 0x8003EE84: nop

    // 0x8003EE88: slt         $at, $t7, $t0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8003EE8C: bne         $at, $zero, L_8003F290
    if (ctx->r1 != 0) {
        // 0x8003EE90: nop
    
            goto L_8003F290;
    }
    // 0x8003EE90: nop

    // 0x8003EE94: lbu         $t1, 0x1($s4)
    ctx->r9 = MEM_BU(ctx->r20, 0X1);
    // 0x8003EE98: nop

    // 0x8003EE9C: addiu       $t2, $t1, 0x3
    ctx->r10 = ADD32(ctx->r9, 0X3);
    // 0x8003EEA0: slt         $at, $t2, $t7
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8003EEA4: bne         $at, $zero, L_8003F290
    if (ctx->r1 != 0) {
        // 0x8003EEA8: nop
    
            goto L_8003F290;
    }
    // 0x8003EEA8: nop

    // 0x8003EEAC: lbu         $a2, 0x59($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X59);
    // 0x8003EEB0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8003EEB4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8003EEB8: jal         0x800413C0
    // 0x8003EEBC: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_800413C0(rdram, ctx);
        goto after_1;
    // 0x8003EEBC: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_1:
    // 0x8003EEC0: sh          $zero, 0x52($sp)
    MEM_H(0X52, ctx->r29) = 0;
    // 0x8003EEC4: lbu         $a1, 0x1($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0X1);
    // 0x8003EEC8: lbu         $a0, 0x0($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X0);
    // 0x8003EECC: addiu       $t3, $sp, 0x57
    ctx->r11 = ADD32(ctx->r29, 0X57);
    // 0x8003EED0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8003EED4: addiu       $a2, $sp, 0x56
    ctx->r6 = ADD32(ctx->r29, 0X56);
    // 0x8003EED8: jal         0x80041B48
    // 0x8003EEDC: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    func_80041B48(rdram, ctx);
        goto after_2;
    // 0x8003EEDC: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    after_2:
    // 0x8003EEE0: beq         $v0, $zero, L_8003F218
    if (ctx->r2 == 0) {
        // 0x8003EEE4: nop
    
            goto L_8003F218;
    }
    // 0x8003EEE4: nop

    // 0x8003EEE8: lbu         $t4, 0x58($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X58);
    // 0x8003EEEC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8003EEF0: bne         $t4, $at, L_8003EF70
    if (ctx->r12 != ctx->r1) {
        // 0x8003EEF4: nop
    
            goto L_8003EF70;
    }
    // 0x8003EEF4: nop

    // 0x8003EEF8: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8003EEFC: lw          $t5, 0x1F40($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1F40);
    // 0x8003EF00: lbu         $t0, 0x5B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003EF04: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x8003EF08: sll         $t8, $s0, 3
    ctx->r24 = S32(ctx->r16 << 3);
    // 0x8003EF0C: addu        $s5, $t9, $t8
    ctx->r21 = ADD32(ctx->r25, ctx->r24);
    // 0x8003EF10: sb          $t0, 0x2($s5)
    MEM_B(0X2, ctx->r21) = ctx->r8;
    // 0x8003EF14: lbu         $t1, 0x5A($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X5A);
    // 0x8003EF18: addiu       $t6, $zero, 0x7FFF
    ctx->r14 = ADD32(0, 0X7FFF);
    // 0x8003EF1C: sb          $t1, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r9;
    // 0x8003EF20: lbu         $t2, 0x59($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X59);
    // 0x8003EF24: sh          $t6, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r14;
    // 0x8003EF28: addiu       $a0, $s5, 0x5
    ctx->r4 = ADD32(ctx->r21, 0X5);
    // 0x8003EF2C: addiu       $a3, $s5, 0x6
    ctx->r7 = ADD32(ctx->r21, 0X6);
    // 0x8003EF30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003EF34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003EF38: jal         0x80040784
    // 0x8003EF3C: sb          $t2, 0x4($s5)
    MEM_B(0X4, ctx->r21) = ctx->r10;
    func_80040784(rdram, ctx);
        goto after_3;
    // 0x8003EF3C: sb          $t2, 0x4($s5)
    MEM_B(0X4, ctx->r21) = ctx->r10;
    after_3:
    // 0x8003EF40: lbu         $a0, 0x5B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003EF44: lbu         $a1, 0x5A($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5A);
    // 0x8003EF48: lbu         $a2, 0x59($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X59);
    // 0x8003EF4C: jal         0x800413C0
    // 0x8003EF50: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_800413C0(rdram, ctx);
        goto after_4;
    // 0x8003EF50: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_4:
    // 0x8003EF54: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003EF58: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x8003EF5C: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x8003EF60: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x8003EF64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003EF68: b           L_8003F2C8
    // 0x8003EF6C: sb          $s0, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r16;
        goto L_8003F2C8;
    // 0x8003EF6C: sb          $s0, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r16;
L_8003EF70:
    // 0x8003EF70: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8003EF74: slti        $at, $s3, 0x4
    ctx->r1 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
    // 0x8003EF78: beq         $at, $zero, L_8003EFCC
    if (ctx->r1 == 0) {
        // 0x8003EF7C: nop
    
            goto L_8003EFCC;
    }
    // 0x8003EF7C: nop

L_8003EF80:
    // 0x8003EF80: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8003EF84: slti        $at, $s2, 0x4
    ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x8003EF88: beq         $at, $zero, L_8003EFB4
    if (ctx->r1 == 0) {
        // 0x8003EF8C: nop
    
            goto L_8003EFB4;
    }
    // 0x8003EF8C: nop

L_8003EF90:
    // 0x8003EF90: sll         $t4, $s2, 2
    ctx->r12 = S32(ctx->r18 << 2);
    // 0x8003EF94: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8003EF98: andi        $t8, $s2, 0xFF
    ctx->r24 = ctx->r18 & 0XFF;
    // 0x8003EF9C: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    // 0x8003EFA0: addu        $t5, $t4, $s3
    ctx->r13 = ADD32(ctx->r12, ctx->r19);
    // 0x8003EFA4: slti        $at, $s2, 0x4
    ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x8003EFA8: addu        $t9, $sp, $t5
    ctx->r25 = ADD32(ctx->r29, ctx->r13);
    // 0x8003EFAC: bne         $at, $zero, L_8003EF90
    if (ctx->r1 != 0) {
        // 0x8003EFB0: sb          $zero, 0x40($t9)
        MEM_B(0X40, ctx->r25) = 0;
            goto L_8003EF90;
    }
    // 0x8003EFB0: sb          $zero, 0x40($t9)
    MEM_B(0X40, ctx->r25) = 0;
L_8003EFB4:
    // 0x8003EFB4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8003EFB8: andi        $t0, $s3, 0xFF
    ctx->r8 = ctx->r19 & 0XFF;
    // 0x8003EFBC: or          $s3, $t0, $zero
    ctx->r19 = ctx->r8 | 0;
    // 0x8003EFC0: slti        $at, $s3, 0x4
    ctx->r1 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
    // 0x8003EFC4: bne         $at, $zero, L_8003EF80
    if (ctx->r1 != 0) {
        // 0x8003EFC8: nop
    
            goto L_8003EF80;
    }
    // 0x8003EFC8: nop

L_8003EFCC:
    // 0x8003EFCC: lbu         $t1, 0x1($s4)
    ctx->r9 = MEM_BU(ctx->r20, 0X1);
    // 0x8003EFD0: lbu         $a1, 0x0($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0X0);
    // 0x8003EFD4: lbu         $a2, 0x1($s4)
    ctx->r6 = MEM_BU(ctx->r20, 0X1);
    // 0x8003EFD8: lbu         $a3, 0x0($s4)
    ctx->r7 = MEM_BU(ctx->r20, 0X0);
    // 0x8003EFDC: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8003EFE0: jal         0x8003F300
    // 0x8003EFE4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_8003F300(rdram, ctx);
        goto after_5;
    // 0x8003EFE4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_5:
    // 0x8003EFE8: bgez        $v0, L_8003EFFC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8003EFEC: andi        $t2, $v0, 0x3
        ctx->r10 = ctx->r2 & 0X3;
            goto L_8003EFFC;
    }
    // 0x8003EFEC: andi        $t2, $v0, 0x3
    ctx->r10 = ctx->r2 & 0X3;
    // 0x8003EFF0: beq         $t2, $zero, L_8003EFFC
    if (ctx->r10 == 0) {
        // 0x8003EFF4: nop
    
            goto L_8003EFFC;
    }
    // 0x8003EFF4: nop

    // 0x8003EFF8: addiu       $t2, $t2, -0x4
    ctx->r10 = ADD32(ctx->r10, -0X4);
L_8003EFFC:
    // 0x8003EFFC: bne         $t2, $zero, L_8003F218
    if (ctx->r10 != 0) {
        // 0x8003F000: nop
    
            goto L_8003F218;
    }
    // 0x8003F000: nop

    // 0x8003F004: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8003F008: slti        $at, $s3, 0x4
    ctx->r1 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
    // 0x8003F00C: beq         $at, $zero, L_8003F0C4
    if (ctx->r1 == 0) {
        // 0x8003F010: nop
    
            goto L_8003F0C4;
    }
    // 0x8003F010: nop

L_8003F014:
    // 0x8003F014: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8003F018: slti        $at, $s2, 0x4
    ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x8003F01C: beq         $at, $zero, L_8003F0AC
    if (ctx->r1 == 0) {
        // 0x8003F020: nop
    
            goto L_8003F0AC;
    }
    // 0x8003F020: nop

L_8003F024:
    // 0x8003F024: lbu         $t3, 0x1($s4)
    ctx->r11 = MEM_BU(ctx->r20, 0X1);
    // 0x8003F028: lbu         $t6, 0x0($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X0);
    // 0x8003F02C: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x8003F030: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8003F034: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8003F038: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x8003F03C: addu        $t7, $s2, $t6
    ctx->r15 = ADD32(ctx->r18, ctx->r14);
    // 0x8003F040: addu        $t9, $t7, $t5
    ctx->r25 = ADD32(ctx->r15, ctx->r13);
    // 0x8003F044: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8003F048: lw          $t0, 0x1F30($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1F30);
    // 0x8003F04C: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8003F050: subu        $t8, $t8, $t9
    ctx->r24 = SUB32(ctx->r24, ctx->r25);
    // 0x8003F054: addu        $s6, $t0, $t8
    ctx->r22 = ADD32(ctx->r8, ctx->r24);
    // 0x8003F058: lbu         $t1, 0x0($s6)
    ctx->r9 = MEM_BU(ctx->r22, 0X0);
    // 0x8003F05C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8003F060: bne         $t1, $at, L_8003F080
    if (ctx->r9 != ctx->r1) {
        // 0x8003F064: nop
    
            goto L_8003F080;
    }
    // 0x8003F064: nop

    // 0x8003F068: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x8003F06C: addu        $t3, $t6, $s3
    ctx->r11 = ADD32(ctx->r14, ctx->r19);
    // 0x8003F070: addu        $t4, $sp, $t3
    ctx->r12 = ADD32(ctx->r29, ctx->r11);
    // 0x8003F074: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8003F078: b           L_8003F094
    // 0x8003F07C: sb          $t2, 0x40($t4)
    MEM_B(0X40, ctx->r12) = ctx->r10;
        goto L_8003F094;
    // 0x8003F07C: sb          $t2, 0x40($t4)
    MEM_B(0X40, ctx->r12) = ctx->r10;
L_8003F080:
    // 0x8003F080: sll         $t5, $s2, 2
    ctx->r13 = S32(ctx->r18 << 2);
    // 0x8003F084: lbu         $t7, 0x1($s6)
    ctx->r15 = MEM_BU(ctx->r22, 0X1);
    // 0x8003F088: addu        $t9, $t5, $s3
    ctx->r25 = ADD32(ctx->r13, ctx->r19);
    // 0x8003F08C: addu        $t0, $sp, $t9
    ctx->r8 = ADD32(ctx->r29, ctx->r25);
    // 0x8003F090: sb          $t7, 0x40($t0)
    MEM_B(0X40, ctx->r8) = ctx->r15;
L_8003F094:
    // 0x8003F094: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8003F098: andi        $t8, $s2, 0xFF
    ctx->r24 = ctx->r18 & 0XFF;
    // 0x8003F09C: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    // 0x8003F0A0: slti        $at, $s2, 0x4
    ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x8003F0A4: bne         $at, $zero, L_8003F024
    if (ctx->r1 != 0) {
        // 0x8003F0A8: nop
    
            goto L_8003F024;
    }
    // 0x8003F0A8: nop

L_8003F0AC:
    // 0x8003F0AC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8003F0B0: andi        $t1, $s3, 0xFF
    ctx->r9 = ctx->r19 & 0XFF;
    // 0x8003F0B4: or          $s3, $t1, $zero
    ctx->r19 = ctx->r9 | 0;
    // 0x8003F0B8: slti        $at, $s3, 0x4
    ctx->r1 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
    // 0x8003F0BC: bne         $at, $zero, L_8003F014
    if (ctx->r1 != 0) {
        // 0x8003F0C0: nop
    
            goto L_8003F014;
    }
    // 0x8003F0C0: nop

L_8003F0C4:
    // 0x8003F0C4: lbu         $t6, 0x56($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X56);
    // 0x8003F0C8: nop

    // 0x8003F0CC: bne         $t6, $zero, L_8003F154
    if (ctx->r14 != 0) {
        // 0x8003F0D0: nop
    
            goto L_8003F154;
    }
    // 0x8003F0D0: nop

    // 0x8003F0D4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8003F0D8: slti        $at, $s2, 0x5
    ctx->r1 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
    // 0x8003F0DC: beq         $at, $zero, L_8003F154
    if (ctx->r1 == 0) {
        // 0x8003F0E0: nop
    
            goto L_8003F154;
    }
    // 0x8003F0E0: nop

L_8003F0E4:
    // 0x8003F0E4: lbu         $a2, 0x57($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X57);
    // 0x8003F0E8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8003F0EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003F0F0: jal         0x8003F4F4
    // 0x8003F0F4: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_8003F4F4(rdram, ctx);
        goto after_6;
    // 0x8003F0F4: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_6:
    // 0x8003F0F8: beq         $v0, $zero, L_8003F13C
    if (ctx->r2 == 0) {
        // 0x8003F0FC: nop
    
            goto L_8003F13C;
    }
    // 0x8003F0FC: nop

    // 0x8003F100: lbu         $t3, 0x83($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X83);
    // 0x8003F104: lbu         $a2, 0x58($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X58);
    // 0x8003F108: lbu         $a3, 0x57($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X57);
    // 0x8003F10C: addiu       $t2, $sp, 0x52
    ctx->r10 = ADD32(ctx->r29, 0X52);
    // 0x8003F110: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8003F114: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8003F118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003F11C: jal         0x8003E68C
    // 0x8003F120: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_8003E68C(rdram, ctx);
        goto after_7;
    // 0x8003F120: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_7:
    // 0x8003F124: beq         $v0, $zero, L_8003F13C
    if (ctx->r2 == 0) {
        // 0x8003F128: nop
    
            goto L_8003F13C;
    }
    // 0x8003F128: nop

    // 0x8003F12C: lh          $t4, 0x52($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X52);
    // 0x8003F130: nop

    // 0x8003F134: addiu       $t5, $t4, 0x14
    ctx->r13 = ADD32(ctx->r12, 0X14);
    // 0x8003F138: sh          $t5, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r13;
L_8003F13C:
    // 0x8003F13C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8003F140: andi        $t7, $s2, 0xFF
    ctx->r15 = ctx->r18 & 0XFF;
    // 0x8003F144: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x8003F148: slti        $at, $s2, 0x5
    ctx->r1 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
    // 0x8003F14C: bne         $at, $zero, L_8003F0E4
    if (ctx->r1 != 0) {
        // 0x8003F150: nop
    
            goto L_8003F0E4;
    }
    // 0x8003F150: nop

L_8003F154:
    // 0x8003F154: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8003F158: slti        $at, $s2, 0x13
    ctx->r1 = SIGNED(ctx->r18) < 0X13 ? 1 : 0;
    // 0x8003F15C: beq         $at, $zero, L_8003F1EC
    if (ctx->r1 == 0) {
        // 0x8003F160: nop
    
            goto L_8003F1EC;
    }
    // 0x8003F160: nop

L_8003F164:
    // 0x8003F164: lbu         $a2, 0x57($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X57);
    // 0x8003F168: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8003F16C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003F170: jal         0x8003F4F4
    // 0x8003F174: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_8003F4F4(rdram, ctx);
        goto after_8;
    // 0x8003F174: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_8:
    // 0x8003F178: sb          $v0, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r2;
    // 0x8003F17C: lbu         $t9, 0x55($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X55);
    // 0x8003F180: nop

    // 0x8003F184: beq         $t9, $zero, L_8003F1D4
    if (ctx->r25 == 0) {
        // 0x8003F188: nop
    
            goto L_8003F1D4;
    }
    // 0x8003F188: nop

    // 0x8003F18C: lbu         $t8, 0x83($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X83);
    // 0x8003F190: lbu         $a2, 0x58($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X58);
    // 0x8003F194: lbu         $a3, 0x57($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X57);
    // 0x8003F198: addiu       $t0, $sp, 0x52
    ctx->r8 = ADD32(ctx->r29, 0X52);
    // 0x8003F19C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8003F1A0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8003F1A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003F1A8: jal         0x8003E68C
    // 0x8003F1AC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_8003E68C(rdram, ctx);
        goto after_9;
    // 0x8003F1AC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_9:
    // 0x8003F1B0: beq         $v0, $zero, L_8003F1D4
    if (ctx->r2 == 0) {
        // 0x8003F1B4: nop
    
            goto L_8003F1D4;
    }
    // 0x8003F1B4: nop

    // 0x8003F1B8: lbu         $t6, 0x55($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X55);
    // 0x8003F1BC: lh          $t1, 0x52($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X52);
    // 0x8003F1C0: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x8003F1C4: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x8003F1C8: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x8003F1CC: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8003F1D0: sh          $t3, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r11;
L_8003F1D4:
    // 0x8003F1D4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8003F1D8: andi        $t4, $s2, 0xFF
    ctx->r12 = ctx->r18 & 0XFF;
    // 0x8003F1DC: or          $s2, $t4, $zero
    ctx->r18 = ctx->r12 | 0;
    // 0x8003F1E0: slti        $at, $s2, 0x13
    ctx->r1 = SIGNED(ctx->r18) < 0X13 ? 1 : 0;
    // 0x8003F1E4: bne         $at, $zero, L_8003F164
    if (ctx->r1 != 0) {
        // 0x8003F1E8: nop
    
            goto L_8003F164;
    }
    // 0x8003F1E8: nop

L_8003F1EC:
    // 0x8003F1EC: lh          $t5, 0x52($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X52);
    // 0x8003F1F0: nop

    // 0x8003F1F4: beq         $t5, $zero, L_8003F218
    if (ctx->r13 == 0) {
        // 0x8003F1F8: nop
    
            goto L_8003F218;
    }
    // 0x8003F1F8: nop

    // 0x8003F1FC: lbu         $t7, 0x58($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X58);
    // 0x8003F200: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x8003F204: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8003F208: lbu         $t9, 0x55A0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X55A0);
    // 0x8003F20C: nop

    // 0x8003F210: addu        $t0, $t5, $t9
    ctx->r8 = ADD32(ctx->r13, ctx->r25);
    // 0x8003F214: sh          $t0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r8;
L_8003F218:
    // 0x8003F218: lh          $t8, 0x52($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X52);
    // 0x8003F21C: nop

    // 0x8003F220: beq         $t8, $zero, L_8003F27C
    if (ctx->r24 == 0) {
        // 0x8003F224: nop
    
            goto L_8003F27C;
    }
    // 0x8003F224: nop

    // 0x8003F228: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8003F22C: lw          $t6, 0x1F40($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F40);
    // 0x8003F230: lbu         $t3, 0x5B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003F234: lw          $t1, 0x0($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X0);
    // 0x8003F238: sll         $t2, $s0, 3
    ctx->r10 = S32(ctx->r16 << 3);
    // 0x8003F23C: addu        $s5, $t1, $t2
    ctx->r21 = ADD32(ctx->r9, ctx->r10);
    // 0x8003F240: sb          $t3, 0x2($s5)
    MEM_B(0X2, ctx->r21) = ctx->r11;
    // 0x8003F244: lbu         $t4, 0x5A($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X5A);
    // 0x8003F248: addiu       $a0, $s5, 0x5
    ctx->r4 = ADD32(ctx->r21, 0X5);
    // 0x8003F24C: sb          $t4, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r12;
    // 0x8003F250: lbu         $t7, 0x59($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X59);
    // 0x8003F254: addiu       $a3, $s5, 0x6
    ctx->r7 = ADD32(ctx->r21, 0X6);
    // 0x8003F258: sb          $t7, 0x4($s5)
    MEM_B(0X4, ctx->r21) = ctx->r15;
    // 0x8003F25C: lh          $t5, 0x52($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X52);
    // 0x8003F260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003F264: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003F268: jal         0x80040784
    // 0x8003F26C: sh          $t5, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r13;
    func_80040784(rdram, ctx);
        goto after_10;
    // 0x8003F26C: sh          $t5, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r13;
    after_10:
    // 0x8003F270: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003F274: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x8003F278: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
L_8003F27C:
    // 0x8003F27C: lbu         $a0, 0x5B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003F280: lbu         $a1, 0x5A($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5A);
    // 0x8003F284: lbu         $a2, 0x59($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X59);
    // 0x8003F288: jal         0x800413C0
    // 0x8003F28C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_800413C0(rdram, ctx);
        goto after_11;
    // 0x8003F28C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_11:
L_8003F290:
    // 0x8003F290: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8003F294: lw          $t8, 0x1F20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F20);
    // 0x8003F298: lbu         $t6, 0x7F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X7F);
    // 0x8003F29C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003F2A0: addu        $t1, $t8, $t6
    ctx->r9 = ADD32(ctx->r24, ctx->r14);
    // 0x8003F2A4: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x8003F2A8: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x8003F2AC: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x8003F2B0: slt         $at, $s1, $t2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8003F2B4: bne         $at, $zero, L_8003EDC0
    if (ctx->r1 != 0) {
        // 0x8003F2B8: nop
    
            goto L_8003EDC0;
    }
    // 0x8003F2B8: nop

L_8003F2BC:
    // 0x8003F2BC: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x8003F2C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003F2C4: sb          $s0, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r16;
L_8003F2C8:
    // 0x8003F2C8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8003F2CC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8003F2D0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8003F2D4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8003F2D8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8003F2DC: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8003F2E0: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x8003F2E4: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x8003F2E8: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x8003F2EC: jr          $ra
    // 0x8003F2F0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8003F2F0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8003F2F4: nop

    // 0x8003F2F8: nop

    // 0x8003F2FC: nop

;}
RECOMP_FUNC void func_8003F300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F300: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8003F304: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8003F308: lbu         $t6, 0x57($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X57);
    // 0x8003F30C: lbu         $t8, 0x5B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003F310: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8003F314: lbu         $t0, 0x4F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4F);
    // 0x8003F318: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8003F31C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8003F320: addiu       $s2, $t6, 0x3
    ctx->r18 = ADD32(ctx->r14, 0X3);
    // 0x8003F324: addiu       $s3, $t8, 0x3
    ctx->r19 = ADD32(ctx->r24, 0X3);
    // 0x8003F328: andi        $t7, $s2, 0xFF
    ctx->r15 = ctx->r18 & 0XFF;
    // 0x8003F32C: andi        $t9, $s3, 0xFF
    ctx->r25 = ctx->r19 & 0XFF;
    // 0x8003F330: slt         $at, $t0, $t6
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8003F334: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8003F338: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8003F33C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8003F340: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8003F344: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8003F348: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8003F34C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8003F350: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8003F354: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x8003F358: bne         $at, $zero, L_8003F388
    if (ctx->r1 != 0) {
        // 0x8003F35C: or          $s3, $t9, $zero
        ctx->r19 = ctx->r25 | 0;
            goto L_8003F388;
    }
    // 0x8003F35C: or          $s3, $t9, $zero
    ctx->r19 = ctx->r25 | 0;
    // 0x8003F360: slt         $at, $s2, $t0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8003F364: bne         $at, $zero, L_8003F388
    if (ctx->r1 != 0) {
        // 0x8003F368: nop
    
            goto L_8003F388;
    }
    // 0x8003F368: nop

    // 0x8003F36C: lbu         $t1, 0x53($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X53);
    // 0x8003F370: nop

    // 0x8003F374: slt         $at, $t1, $t8
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8003F378: bne         $at, $zero, L_8003F388
    if (ctx->r1 != 0) {
        // 0x8003F37C: slt         $at, $s3, $t1
        ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r9) ? 1 : 0;
            goto L_8003F388;
    }
    // 0x8003F37C: slt         $at, $s3, $t1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8003F380: beq         $at, $zero, L_8003F390
    if (ctx->r1 == 0) {
        // 0x8003F384: nop
    
            goto L_8003F390;
    }
    // 0x8003F384: nop

L_8003F388:
    // 0x8003F388: b           L_8003F4CC
    // 0x8003F38C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003F4CC;
    // 0x8003F38C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003F390:
    // 0x8003F390: lbu         $t2, 0x4F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4F);
    // 0x8003F394: lbu         $t3, 0x57($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X57);
    // 0x8003F398: lbu         $t5, 0x53($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X53);
    // 0x8003F39C: lbu         $t7, 0x5B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003F3A0: subu        $s0, $t2, $t3
    ctx->r16 = SUB32(ctx->r10, ctx->r11);
    // 0x8003F3A4: andi        $t4, $s0, 0xFF
    ctx->r12 = ctx->r16 & 0XFF;
    // 0x8003F3A8: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8003F3AC: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x8003F3B0: subu        $s1, $t5, $t7
    ctx->r17 = SUB32(ctx->r13, ctx->r15);
    // 0x8003F3B4: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x8003F3B8: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x8003F3BC: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x8003F3C0: addu        $t8, $t6, $t0
    ctx->r24 = ADD32(ctx->r14, ctx->r8);
    // 0x8003F3C4: addu        $t1, $t8, $s1
    ctx->r9 = ADD32(ctx->r24, ctx->r17);
    // 0x8003F3C8: lb          $t3, 0x0($t1)
    ctx->r11 = MEM_B(ctx->r9, 0X0);
    // 0x8003F3CC: nop

    // 0x8003F3D0: bne         $t3, $zero, L_8003F4C8
    if (ctx->r11 != 0) {
        // 0x8003F3D4: nop
    
            goto L_8003F4C8;
    }
    // 0x8003F3D4: nop

    // 0x8003F3D8: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x8003F3DC: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x8003F3E0: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x8003F3E4: addu        $t7, $t2, $t4
    ctx->r15 = ADD32(ctx->r10, ctx->r12);
    // 0x8003F3E8: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8003F3EC: lw          $t0, 0x1F30($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1F30);
    // 0x8003F3F0: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8003F3F4: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x8003F3F8: addu        $t8, $t0, $t9
    ctx->r24 = ADD32(ctx->r8, ctx->r25);
    // 0x8003F3FC: lbu         $t1, 0x0($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X0);
    // 0x8003F400: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8003F404: bne         $t1, $at, L_8003F4C8
    if (ctx->r9 != ctx->r1) {
        // 0x8003F408: nop
    
            goto L_8003F4C8;
    }
    // 0x8003F408: nop

    // 0x8003F40C: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x8003F410: addu        $t2, $t6, $t5
    ctx->r10 = ADD32(ctx->r14, ctx->r13);
    // 0x8003F414: addu        $t4, $t2, $s1
    ctx->r12 = ADD32(ctx->r10, ctx->r17);
    // 0x8003F418: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8003F41C: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    // 0x8003F420: lbu         $t7, 0x5B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003F424: lbu         $a2, 0x53($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X53);
    // 0x8003F428: lbu         $a3, 0x57($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X57);
    // 0x8003F42C: lbu         $a1, 0x4F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X4F);
    // 0x8003F430: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8003F434: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8003F438: jal         0x8003F300
    // 0x8003F43C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    func_8003F300(rdram, ctx);
        goto after_0;
    // 0x8003F43C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    after_0:
    // 0x8003F440: lbu         $a1, 0x4F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X4F);
    // 0x8003F444: lbu         $t0, 0x5B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003F448: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8003F44C: lbu         $a2, 0x53($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X53);
    // 0x8003F450: lbu         $a3, 0x57($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X57);
    // 0x8003F454: andi        $s6, $v0, 0xFF
    ctx->r22 = ctx->r2 & 0XFF;
    // 0x8003F458: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8003F45C: jal         0x8003F300
    // 0x8003F460: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_8003F300(rdram, ctx);
        goto after_1;
    // 0x8003F460: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_1:
    // 0x8003F464: lbu         $a1, 0x4F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X4F);
    // 0x8003F468: lbu         $t9, 0x5B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003F46C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8003F470: lbu         $a2, 0x53($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X53);
    // 0x8003F474: lbu         $a3, 0x57($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X57);
    // 0x8003F478: andi        $s5, $v0, 0xFF
    ctx->r21 = ctx->r2 & 0XFF;
    // 0x8003F47C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8003F480: jal         0x8003F300
    // 0x8003F484: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_8003F300(rdram, ctx);
        goto after_2;
    // 0x8003F484: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_2:
    // 0x8003F488: lbu         $a2, 0x53($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X53);
    // 0x8003F48C: lbu         $t8, 0x5B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003F490: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8003F494: lbu         $a1, 0x4F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X4F);
    // 0x8003F498: lbu         $a3, 0x57($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X57);
    // 0x8003F49C: andi        $s4, $v0, 0xFF
    ctx->r20 = ctx->r2 & 0XFF;
    // 0x8003F4A0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8003F4A4: jal         0x8003F300
    // 0x8003F4A8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8003F300(rdram, ctx);
        goto after_3;
    // 0x8003F4A8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_3:
    // 0x8003F4AC: addu        $t1, $s4, $s5
    ctx->r9 = ADD32(ctx->r20, ctx->r21);
    // 0x8003F4B0: addu        $t6, $t1, $s6
    ctx->r14 = ADD32(ctx->r9, ctx->r22);
    // 0x8003F4B4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8003F4B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003F4BC: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x8003F4C0: b           L_8003F4CC
    // 0x8003F4C4: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
        goto L_8003F4CC;
    // 0x8003F4C4: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_8003F4C8:
    // 0x8003F4C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003F4CC:
    // 0x8003F4CC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8003F4D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8003F4D4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8003F4D8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8003F4DC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8003F4E0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8003F4E4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8003F4E8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8003F4EC: jr          $ra
    // 0x8003F4F0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8003F4F0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8003F4F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F4F4: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8003F4F8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8003F4FC: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8003F500: andi        $a3, $a3, 0xFF
    ctx->r7 = ctx->r7 & 0XFF;
    // 0x8003F504: bne         $a1, $zero, L_8003F5D8
    if (ctx->r5 != 0) {
        // 0x8003F508: or          $t4, $zero, $zero
        ctx->r12 = 0 | 0;
            goto L_8003F5D8;
    }
    // 0x8003F508: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x8003F50C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x8003F510: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x8003F514: lbu         $t6, 0x55B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X55B0);
    // 0x8003F518: nop

    // 0x8003F51C: bne         $t6, $a2, L_8003F714
    if (ctx->r14 != ctx->r6) {
        // 0x8003F520: nop
    
            goto L_8003F714;
    }
    // 0x8003F520: nop

    // 0x8003F524: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x8003F528: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x8003F52C: beq         $at, $zero, L_8003F5D0
    if (ctx->r1 == 0) {
        // 0x8003F530: nop
    
            goto L_8003F5D0;
    }
    // 0x8003F530: nop

L_8003F534:
    // 0x8003F534: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x8003F538: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x8003F53C: beq         $at, $zero, L_8003F5B8
    if (ctx->r1 == 0) {
        // 0x8003F540: nop
    
            goto L_8003F5B8;
    }
    // 0x8003F540: nop

L_8003F544:
    // 0x8003F544: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x8003F548: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x8003F54C: addu        $t9, $t8, $t2
    ctx->r25 = ADD32(ctx->r24, ctx->r10);
    // 0x8003F550: lb          $t5, 0x0($t9)
    ctx->r13 = MEM_B(ctx->r25, 0X0);
    // 0x8003F554: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003F558: beq         $t5, $at, L_8003F5A0
    if (ctx->r13 == ctx->r1) {
        // 0x8003F55C: nop
    
            goto L_8003F5A0;
    }
    // 0x8003F55C: nop

    // 0x8003F560: sll         $t6, $a3, 4
    ctx->r14 = S32(ctx->r7 << 4);
    // 0x8003F564: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x8003F568: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8003F56C: addu        $t9, $t8, $t1
    ctx->r25 = ADD32(ctx->r24, ctx->r9);
    // 0x8003F570: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8003F574: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x8003F578: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x8003F57C: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8003F580: addu        $t8, $t7, $t2
    ctx->r24 = ADD32(ctx->r15, ctx->r10);
    // 0x8003F584: lb          $t9, 0x0($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X0);
    // 0x8003F588: lb          $t5, 0x55F4($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X55F4);
    // 0x8003F58C: nop

    // 0x8003F590: beq         $t5, $t9, L_8003F5A0
    if (ctx->r13 == ctx->r25) {
        // 0x8003F594: nop
    
            goto L_8003F5A0;
    }
    // 0x8003F594: nop

    // 0x8003F598: b           L_8003F718
    // 0x8003F59C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
        goto L_8003F718;
    // 0x8003F59C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_8003F5A0:
    // 0x8003F5A0: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x8003F5A4: andi        $t6, $t1, 0xFF
    ctx->r14 = ctx->r9 & 0XFF;
    // 0x8003F5A8: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x8003F5AC: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x8003F5B0: bne         $at, $zero, L_8003F544
    if (ctx->r1 != 0) {
        // 0x8003F5B4: nop
    
            goto L_8003F544;
    }
    // 0x8003F5B4: nop

L_8003F5B8:
    // 0x8003F5B8: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x8003F5BC: andi        $t7, $t2, 0xFF
    ctx->r15 = ctx->r10 & 0XFF;
    // 0x8003F5C0: or          $t2, $t7, $zero
    ctx->r10 = ctx->r15 | 0;
    // 0x8003F5C4: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x8003F5C8: bne         $at, $zero, L_8003F534
    if (ctx->r1 != 0) {
        // 0x8003F5CC: nop
    
            goto L_8003F534;
    }
    // 0x8003F5CC: nop

L_8003F5D0:
    // 0x8003F5D0: b           L_8003F714
    // 0x8003F5D4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
        goto L_8003F714;
    // 0x8003F5D4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_8003F5D8:
    // 0x8003F5D8: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x8003F5DC: addu        $t8, $t8, $a3
    ctx->r24 = ADD32(ctx->r24, ctx->r7);
    // 0x8003F5E0: lbu         $t8, 0x55B8($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X55B8);
    // 0x8003F5E4: nop

    // 0x8003F5E8: and         $t5, $t8, $a2
    ctx->r13 = ctx->r24 & ctx->r6;
    // 0x8003F5EC: beq         $t5, $zero, L_8003F714
    if (ctx->r13 == 0) {
        // 0x8003F5F0: nop
    
            goto L_8003F714;
    }
    // 0x8003F5F0: nop

    // 0x8003F5F4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x8003F5F8: addiu       $t6, $t6, 0x55CC
    ctx->r14 = ADD32(ctx->r14, 0X55CC);
    // 0x8003F5FC: sll         $t9, $a3, 1
    ctx->r25 = S32(ctx->r7 << 1);
    // 0x8003F600: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8003F604: sll         $t8, $a3, 1
    ctx->r24 = S32(ctx->r7 << 1);
    // 0x8003F608: addu        $t5, $t8, $t6
    ctx->r13 = ADD32(ctx->r24, ctx->r14);
    // 0x8003F60C: lbu         $t9, 0x1($t5)
    ctx->r25 = MEM_BU(ctx->r13, 0X1);
    // 0x8003F610: lbu         $t0, 0x0($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X0);
    // 0x8003F614: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x8003F618: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8003F61C: bne         $at, $zero, L_8003F714
    if (ctx->r1 != 0) {
        // 0x8003F620: nop
    
            goto L_8003F714;
    }
    // 0x8003F620: nop

L_8003F624:
    // 0x8003F624: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x8003F628: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x8003F62C: beq         $at, $zero, L_8003F6D8
    if (ctx->r1 == 0) {
        // 0x8003F630: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_8003F6D8;
    }
    // 0x8003F630: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_8003F634:
    // 0x8003F634: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x8003F638: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x8003F63C: beq         $at, $zero, L_8003F6B8
    if (ctx->r1 == 0) {
        // 0x8003F640: nop
    
            goto L_8003F6B8;
    }
    // 0x8003F640: nop

L_8003F644:
    // 0x8003F644: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x8003F648: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x8003F64C: addu        $t6, $t8, $t2
    ctx->r14 = ADD32(ctx->r24, ctx->r10);
    // 0x8003F650: lb          $t5, 0x0($t6)
    ctx->r13 = MEM_B(ctx->r14, 0X0);
    // 0x8003F654: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003F658: beq         $t5, $at, L_8003F6A0
    if (ctx->r13 == ctx->r1) {
        // 0x8003F65C: nop
    
            goto L_8003F6A0;
    }
    // 0x8003F65C: nop

    // 0x8003F660: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x8003F664: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x8003F668: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x8003F66C: addu        $t6, $t8, $t1
    ctx->r14 = ADD32(ctx->r24, ctx->r9);
    // 0x8003F670: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x8003F674: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x8003F678: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8003F67C: addu        $t7, $a0, $t9
    ctx->r15 = ADD32(ctx->r4, ctx->r25);
    // 0x8003F680: addu        $t8, $t7, $t2
    ctx->r24 = ADD32(ctx->r15, ctx->r10);
    // 0x8003F684: lb          $t6, 0x0($t8)
    ctx->r14 = MEM_B(ctx->r24, 0X0);
    // 0x8003F688: lb          $t5, 0x5644($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X5644);
    // 0x8003F68C: nop

    // 0x8003F690: beq         $t5, $t6, L_8003F6A0
    if (ctx->r13 == ctx->r14) {
        // 0x8003F694: nop
    
            goto L_8003F6A0;
    }
    // 0x8003F694: nop

    // 0x8003F698: b           L_8003F6B8
    // 0x8003F69C: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
        goto L_8003F6B8;
    // 0x8003F69C: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
L_8003F6A0:
    // 0x8003F6A0: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x8003F6A4: andi        $t9, $t1, 0xFF
    ctx->r25 = ctx->r9 & 0XFF;
    // 0x8003F6A8: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
    // 0x8003F6AC: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x8003F6B0: bne         $at, $zero, L_8003F644
    if (ctx->r1 != 0) {
        // 0x8003F6B4: nop
    
            goto L_8003F644;
    }
    // 0x8003F6B4: nop

L_8003F6B8:
    // 0x8003F6B8: beq         $t3, $zero, L_8003F6D8
    if (ctx->r11 == 0) {
        // 0x8003F6BC: nop
    
            goto L_8003F6D8;
    }
    // 0x8003F6BC: nop

    // 0x8003F6C0: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x8003F6C4: andi        $t7, $t2, 0xFF
    ctx->r15 = ctx->r10 & 0XFF;
    // 0x8003F6C8: or          $t2, $t7, $zero
    ctx->r10 = ctx->r15 | 0;
    // 0x8003F6CC: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x8003F6D0: bne         $at, $zero, L_8003F634
    if (ctx->r1 != 0) {
        // 0x8003F6D4: nop
    
            goto L_8003F634;
    }
    // 0x8003F6D4: nop

L_8003F6D8:
    // 0x8003F6D8: beq         $t3, $zero, L_8003F6EC
    if (ctx->r11 == 0) {
        // 0x8003F6DC: nop
    
            goto L_8003F6EC;
    }
    // 0x8003F6DC: nop

    // 0x8003F6E0: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x8003F6E4: andi        $t8, $t4, 0xFF
    ctx->r24 = ctx->r12 & 0XFF;
    // 0x8003F6E8: or          $t4, $t8, $zero
    ctx->r12 = ctx->r24 | 0;
L_8003F6EC:
    // 0x8003F6EC: sll         $t6, $a3, 1
    ctx->r14 = S32(ctx->r7 << 1);
    // 0x8003F6F0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x8003F6F4: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8003F6F8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8003F6FC: lbu         $t9, 0x55CD($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X55CD);
    // 0x8003F700: andi        $t5, $t0, 0xFF
    ctx->r13 = ctx->r8 & 0XFF;
    // 0x8003F704: or          $t0, $t5, $zero
    ctx->r8 = ctx->r13 | 0;
    // 0x8003F708: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8003F70C: beq         $at, $zero, L_8003F624
    if (ctx->r1 == 0) {
        // 0x8003F710: nop
    
            goto L_8003F624;
    }
    // 0x8003F710: nop

L_8003F714:
    // 0x8003F714: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_8003F718:
    // 0x8003F718: jr          $ra
    // 0x8003F71C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8003F71C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8003F720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F720: lb          $t6, 0x0($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X0);
    // 0x8003F724: sll         $a2, $a2, 24
    ctx->r6 = S32(ctx->r6 << 24);
    // 0x8003F728: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003F72C: addu        $t0, $a0, $t7
    ctx->r8 = ADD32(ctx->r4, ctx->r15);
    // 0x8003F730: sra         $a2, $a2, 24
    ctx->r6 = S32(SIGNED(ctx->r6) >> 24);
    // 0x8003F734: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8003F738: andi        $a3, $a3, 0xFF
    ctx->r7 = ctx->r7 & 0XFF;
    // 0x8003F73C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8003F740: sb          $a1, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r5;
    // 0x8003F744: sb          $a2, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r6;
    // 0x8003F748: sb          $a3, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r7;
    // 0x8003F74C: lbu         $t8, 0x1B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1B);
    // 0x8003F750: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8003F754: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8003F758: jr          $ra
    // 0x8003F75C: sb          $t8, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r24;
    return;
    // 0x8003F75C: sb          $t8, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r24;
;}
RECOMP_FUNC void func_8003F760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F760: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003F764: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003F768: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8003F76C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003F770: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003F774: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8003F778: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8003F77C: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x8003F780: lbu         $t7, 0x33($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X33);
    // 0x8003F784: lbu         $a3, 0x2F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X2F);
    // 0x8003F788: lb          $a2, 0x2B($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X2B);
    // 0x8003F78C: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x8003F790: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8003F794: jal         0x8003F720
    // 0x8003F798: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8003F720(rdram, ctx);
        goto after_0;
    // 0x8003F798: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x8003F79C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003F7A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003F7A4: jr          $ra
    // 0x8003F7A8: nop

    return;
    // 0x8003F7A8: nop

;}
