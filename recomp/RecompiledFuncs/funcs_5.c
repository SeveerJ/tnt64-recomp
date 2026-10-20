#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80053F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053F48: jr          $ra
    // 0x80053F4C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80053F4C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80053F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053F50: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80053F54: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80053F58: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80053F5C: lw          $s0, -0xDD0($s0)
    ctx->r16 = MEM_W(ctx->r16, -0XDD0);
    // 0x80053F60: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80053F64: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80053F68: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80053F6C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80053F70: lbu         $t6, 0x4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4);
    // 0x80053F74: nop

    // 0x80053F78: blez        $t6, L_80053F94
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80053F7C: nop
    
            goto L_80053F94;
    }
    // 0x80053F7C: nop

    // 0x80053F80: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
    // 0x80053F84: nop

    // 0x80053F88: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80053F8C: b           L_80054204
    // 0x80053F90: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
        goto L_80054204;
    // 0x80053F90: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
L_80053F94:
    // 0x80053F94: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x80053F98: addiu       $s3, $s0, 0x830
    ctx->r19 = ADD32(ctx->r16, 0X830);
    // 0x80053F9C: lw          $s1, -0xDF0($s1)
    ctx->r17 = MEM_W(ctx->r17, -0XDF0);
    // 0x80053FA0: lbu         $t9, 0x0($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X0);
    // 0x80053FA4: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x80053FA8: lbu         $s2, -0x10DF($s2)
    ctx->r18 = MEM_BU(ctx->r18, -0X10DF);
    // 0x80053FAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80053FB0: bne         $t9, $at, L_80054198
    if (ctx->r25 != ctx->r1) {
        // 0x80053FB4: addiu       $s1, $s1, 0x28
        ctx->r17 = ADD32(ctx->r17, 0X28);
            goto L_80054198;
    }
    // 0x80053FB4: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x80053FB8: lw          $t0, 0x8C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X8C);
    // 0x80053FBC: nop

    // 0x80053FC0: andi        $t1, $t0, 0x20
    ctx->r9 = ctx->r8 & 0X20;
    // 0x80053FC4: beq         $t1, $zero, L_80053FF0
    if (ctx->r9 == 0) {
        // 0x80053FC8: nop
    
            goto L_80053FF0;
    }
    // 0x80053FC8: nop

    // 0x80053FCC: addiu       $a0, $s0, 0x51F0
    ctx->r4 = ADD32(ctx->r16, 0X51F0);
    // 0x80053FD0: jal         0x800661D4
    // 0x80053FD4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800661D4(rdram, ctx);
        goto after_0;
    // 0x80053FD4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_0:
    // 0x80053FD8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80053FDC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80053FE0: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x80053FE4: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x80053FE8: jal         0x8008A5C8
    // 0x80053FEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8008A5C8(rdram, ctx);
        goto after_1;
    // 0x80053FEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_80053FF0:
    // 0x80053FF0: lw          $t2, 0x84($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X84);
    // 0x80053FF4: nop

    // 0x80053FF8: andi        $t3, $t2, 0x200
    ctx->r11 = ctx->r10 & 0X200;
    // 0x80053FFC: beq         $t3, $zero, L_80054014
    if (ctx->r11 == 0) {
        // 0x80054000: nop
    
            goto L_80054014;
    }
    // 0x80054000: nop

    // 0x80054004: lbu         $t4, 0x2($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X2);
    // 0x80054008: nop

    // 0x8005400C: ori         $t5, $t4, 0x1
    ctx->r13 = ctx->r12 | 0X1;
    // 0x80054010: sb          $t5, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r13;
L_80054014:
    // 0x80054014: lw          $t6, 0x84($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X84);
    // 0x80054018: nop

    // 0x8005401C: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x80054020: beq         $t7, $zero, L_80054038
    if (ctx->r15 == 0) {
        // 0x80054024: nop
    
            goto L_80054038;
    }
    // 0x80054024: nop

    // 0x80054028: lbu         $t8, 0x2($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X2);
    // 0x8005402C: nop

    // 0x80054030: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x80054034: sb          $t9, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r25;
L_80054038:
    // 0x80054038: lw          $t0, 0x84($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X84);
    // 0x8005403C: nop

    // 0x80054040: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x80054044: beq         $t1, $zero, L_8005405C
    if (ctx->r9 == 0) {
        // 0x80054048: nop
    
            goto L_8005405C;
    }
    // 0x80054048: nop

    // 0x8005404C: lbu         $t2, 0x2($s3)
    ctx->r10 = MEM_BU(ctx->r19, 0X2);
    // 0x80054050: nop

    // 0x80054054: ori         $t3, $t2, 0x8
    ctx->r11 = ctx->r10 | 0X8;
    // 0x80054058: sb          $t3, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r11;
L_8005405C:
    // 0x8005405C: lw          $t4, 0x84($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X84);
    // 0x80054060: nop

    // 0x80054064: andi        $t5, $t4, 0x4000
    ctx->r13 = ctx->r12 & 0X4000;
    // 0x80054068: beq         $t5, $zero, L_80054080
    if (ctx->r13 == 0) {
        // 0x8005406C: nop
    
            goto L_80054080;
    }
    // 0x8005406C: nop

    // 0x80054070: lbu         $t6, 0x2($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X2);
    // 0x80054074: nop

    // 0x80054078: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x8005407C: sb          $t7, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r15;
L_80054080:
    // 0x80054080: lw          $t8, 0x88($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X88);
    // 0x80054084: nop

    // 0x80054088: andi        $t9, $t8, 0x200
    ctx->r25 = ctx->r24 & 0X200;
    // 0x8005408C: bne         $t9, $zero, L_800540A4
    if (ctx->r25 != 0) {
        // 0x80054090: nop
    
            goto L_800540A4;
    }
    // 0x80054090: nop

    // 0x80054094: lbu         $t0, 0x2($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X2);
    // 0x80054098: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8005409C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x800540A0: sb          $t1, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r9;
L_800540A4:
    // 0x800540A4: lw          $t2, 0x88($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X88);
    // 0x800540A8: nop

    // 0x800540AC: andi        $t3, $t2, 0x100
    ctx->r11 = ctx->r10 & 0X100;
    // 0x800540B0: bne         $t3, $zero, L_800540C8
    if (ctx->r11 != 0) {
        // 0x800540B4: nop
    
            goto L_800540C8;
    }
    // 0x800540B4: nop

    // 0x800540B8: lbu         $t4, 0x2($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X2);
    // 0x800540BC: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x800540C0: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x800540C4: sb          $t5, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r13;
L_800540C8:
    // 0x800540C8: lw          $t6, 0x88($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X88);
    // 0x800540CC: nop

    // 0x800540D0: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x800540D4: bne         $t7, $zero, L_800540EC
    if (ctx->r15 != 0) {
        // 0x800540D8: nop
    
            goto L_800540EC;
    }
    // 0x800540D8: nop

    // 0x800540DC: lbu         $t8, 0x2($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X2);
    // 0x800540E0: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x800540E4: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x800540E8: sb          $t9, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r25;
L_800540EC:
    // 0x800540EC: lw          $t0, 0x88($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X88);
    // 0x800540F0: nop

    // 0x800540F4: andi        $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 & 0X4000;
    // 0x800540F8: bne         $t1, $zero, L_80054110
    if (ctx->r9 != 0) {
        // 0x800540FC: nop
    
            goto L_80054110;
    }
    // 0x800540FC: nop

    // 0x80054100: lbu         $t2, 0x2($s3)
    ctx->r10 = MEM_BU(ctx->r19, 0X2);
    // 0x80054104: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x80054108: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x8005410C: sb          $t3, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r11;
L_80054110:
    // 0x80054110: lw          $t4, 0x8C($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X8C);
    // 0x80054114: nop

    // 0x80054118: andi        $t5, $t4, 0x400
    ctx->r13 = ctx->r12 & 0X400;
    // 0x8005411C: beq         $t5, $zero, L_80054144
    if (ctx->r13 == 0) {
        // 0x80054120: nop
    
            goto L_80054144;
    }
    // 0x80054120: nop

    // 0x80054124: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x80054128: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005412C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80054130: sh          $t6, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r14;
    // 0x80054134: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x80054138: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8005413C: jal         0x8008A5C8
    // 0x80054140: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_8008A5C8(rdram, ctx);
        goto after_2;
    // 0x80054140: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_2:
L_80054144:
    // 0x80054144: lw          $t7, 0x88($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X88);
    // 0x80054148: nop

    // 0x8005414C: andi        $t8, $t7, 0x400
    ctx->r24 = ctx->r15 & 0X400;
    // 0x80054150: bne         $t8, $zero, L_80054164
    if (ctx->r24 != 0) {
        // 0x80054154: nop
    
            goto L_80054164;
    }
    // 0x80054154: nop

    // 0x80054158: lh          $t9, 0x8($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X8);
    // 0x8005415C: nop

    // 0x80054160: sh          $t9, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r25;
L_80054164:
    // 0x80054164: lw          $t0, 0x8C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X8C);
    // 0x80054168: nop

    // 0x8005416C: andi        $t1, $t0, 0x800
    ctx->r9 = ctx->r8 & 0X800;
    // 0x80054170: beq         $t1, $zero, L_80054198
    if (ctx->r9 == 0) {
        // 0x80054174: nop
    
            goto L_80054198;
    }
    // 0x80054174: nop

    // 0x80054178: jal         0x800676AC
    // 0x8005417C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800676AC(rdram, ctx);
        goto after_3;
    // 0x8005417C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x80054180: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80054184: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80054188: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x8005418C: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x80054190: jal         0x8008A5C8
    // 0x80054194: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_8008A5C8(rdram, ctx);
        goto after_4;
    // 0x80054194: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_4:
L_80054198:
    // 0x80054198: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8005419C: lbu         $t2, -0x10E0($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X10E0);
    // 0x800541A0: nop

    // 0x800541A4: slti        $at, $t2, 0x3
    ctx->r1 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x800541A8: bne         $at, $zero, L_80054204
    if (ctx->r1 != 0) {
        // 0x800541AC: nop
    
            goto L_80054204;
    }
    // 0x800541AC: nop

    // 0x800541B0: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800541B4: lw          $t3, -0x390($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X390);
    // 0x800541B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800541BC: lbu         $t4, 0x5($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X5);
    // 0x800541C0: nop

    // 0x800541C4: bne         $t4, $at, L_80054204
    if (ctx->r12 != ctx->r1) {
        // 0x800541C8: nop
    
            goto L_80054204;
    }
    // 0x800541C8: nop

    // 0x800541CC: lw          $t5, 0x8C($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X8C);
    // 0x800541D0: nop

    // 0x800541D4: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x800541D8: beq         $t6, $zero, L_800541E8
    if (ctx->r14 == 0) {
        // 0x800541DC: nop
    
            goto L_800541E8;
    }
    // 0x800541DC: nop

    // 0x800541E0: jal         0x80072508
    // 0x800541E4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80072508(rdram, ctx);
        goto after_5;
    // 0x800541E4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_5:
L_800541E8:
    // 0x800541E8: lw          $t7, 0x8C($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8C);
    // 0x800541EC: nop

    // 0x800541F0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x800541F4: beq         $t8, $zero, L_80054204
    if (ctx->r24 == 0) {
        // 0x800541F8: nop
    
            goto L_80054204;
    }
    // 0x800541F8: nop

    // 0x800541FC: jal         0x8007257C
    // 0x80054200: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8007257C(rdram, ctx);
        goto after_6;
    // 0x80054200: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
L_80054204:
    // 0x80054204: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80054208: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8005420C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80054210: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80054214: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80054218: jr          $ra
    // 0x8005421C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8005421C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80054220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054220: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80054224: bne         $a1, $zero, L_80054234
    if (ctx->r5 != 0) {
        // 0x80054228: sb          $a1, 0x3($a0)
        MEM_B(0X3, ctx->r4) = ctx->r5;
            goto L_80054234;
    }
    // 0x80054228: sb          $a1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r5;
    // 0x8005422C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80054230: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
L_80054234:
    // 0x80054234: jr          $ra
    // 0x80054238: nop

    return;
    // 0x80054238: nop

;}
RECOMP_FUNC void func_8005423C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005423C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80054240: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80054244: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80054248: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005424C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80054250: sb          $zero, 0x1($t6)
    MEM_B(0X1, ctx->r14) = 0;
    // 0x80054254: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80054258: nop

    // 0x8005425C: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x80054260: nop

    // 0x80054264: bne         $t8, $zero, L_8005427C
    if (ctx->r24 != 0) {
        // 0x80054268: nop
    
            goto L_8005427C;
    }
    // 0x80054268: nop

    // 0x8005426C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80054270: sb          $t9, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r25;
    // 0x80054274: b           L_8005446C
    // 0x80054278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005446C;
    // 0x80054278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005427C:
    // 0x8005427C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80054280: nop

    // 0x80054284: lbu         $t1, 0x2($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X2);
    // 0x80054288: nop

    // 0x8005428C: beq         $t1, $zero, L_800542B0
    if (ctx->r9 == 0) {
        // 0x80054290: nop
    
            goto L_800542B0;
    }
    // 0x80054290: nop

    // 0x80054294: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80054298: lbu         $t2, -0x118($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X118);
    // 0x8005429C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x800542A0: beq         $t2, $at, L_800542B0
    if (ctx->r10 == ctx->r1) {
        // 0x800542A4: nop
    
            goto L_800542B0;
    }
    // 0x800542A4: nop

    // 0x800542A8: jal         0x80053F50
    // 0x800542AC: nop

    func_80053F50(rdram, ctx);
        goto after_0;
    // 0x800542AC: nop

    after_0:
L_800542B0:
    // 0x800542B0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800542B4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800542B8: lw          $a1, 0x9F4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9F4);
    // 0x800542BC: jal         0x80053C70
    // 0x800542C0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_80053C70(rdram, ctx);
        goto after_1;
    // 0x800542C0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_1:
    // 0x800542C4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800542C8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800542CC: addiu       $a1, $a1, -0x3150
    ctx->r5 = ADD32(ctx->r5, -0X3150);
    // 0x800542D0: jal         0x8006CF08
    // 0x800542D4: addiu       $a0, $a0, -0x3160
    ctx->r4 = ADD32(ctx->r4, -0X3160);
    alSynFreeFX(rdram, ctx);
        goto after_2;
    // 0x800542D4: addiu       $a0, $a0, -0x3160
    ctx->r4 = ADD32(ctx->r4, -0X3160);
    after_2:
    // 0x800542D8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800542DC: lw          $t3, -0xDE0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0XDE0);
    // 0x800542E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800542E4: lbu         $t4, 0x1($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1);
    // 0x800542E8: nop

    // 0x800542EC: bne         $t4, $at, L_80054300
    if (ctx->r12 != ctx->r1) {
        // 0x800542F0: nop
    
            goto L_80054300;
    }
    // 0x800542F0: nop

    // 0x800542F4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800542F8: nop

    // 0x800542FC: sb          $zero, 0x0($t5)
    MEM_B(0X0, ctx->r13) = 0;
L_80054300:
    // 0x80054300: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80054304: nop

    // 0x80054308: lbu         $t8, 0x2($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X2);
    // 0x8005430C: nop

    // 0x80054310: beq         $t8, $zero, L_8005441C
    if (ctx->r24 == 0) {
        // 0x80054314: nop
    
            goto L_8005441C;
    }
    // 0x80054314: nop

    // 0x80054318: lbu         $t9, 0x3($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X3);
    // 0x8005431C: nop

    // 0x80054320: bne         $t9, $zero, L_8005441C
    if (ctx->r25 != 0) {
        // 0x80054324: nop
    
            goto L_8005441C;
    }
    // 0x80054324: nop

    // 0x80054328: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8005432C: lw          $a1, 0x9F4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9F4);
    // 0x80054330: jal         0x80066160
    // 0x80054334: addiu       $a0, $t6, 0x51F0
    ctx->r4 = ADD32(ctx->r14, 0X51F0);
    func_80066160(rdram, ctx);
        goto after_3;
    // 0x80054334: addiu       $a0, $t6, 0x51F0
    ctx->r4 = ADD32(ctx->r14, 0X51F0);
    after_3:
    // 0x80054338: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8005433C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80054340: addiu       $a1, $a1, -0x3128
    ctx->r5 = ADD32(ctx->r5, -0X3128);
    // 0x80054344: jal         0x8006CF08
    // 0x80054348: addiu       $a0, $a0, -0x3138
    ctx->r4 = ADD32(ctx->r4, -0X3138);
    alSynFreeFX(rdram, ctx);
        goto after_4;
    // 0x80054348: addiu       $a0, $a0, -0x3138
    ctx->r4 = ADD32(ctx->r4, -0X3138);
    after_4:
    // 0x8005434C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80054350: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80054354: lw          $a1, 0x9F4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9F4);
    // 0x80054358: jal         0x8006D1B0
    // 0x8005435C: addiu       $a0, $a0, 0x830
    ctx->r4 = ADD32(ctx->r4, 0X830);
    func_8006D1B0(rdram, ctx);
        goto after_5;
    // 0x8005435C: addiu       $a0, $a0, 0x830
    ctx->r4 = ADD32(ctx->r4, 0X830);
    after_5:
    // 0x80054360: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80054364: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80054368: addiu       $a1, $a1, -0x3104
    ctx->r5 = ADD32(ctx->r5, -0X3104);
    // 0x8005436C: jal         0x8006CF08
    // 0x80054370: addiu       $a0, $a0, -0x3114
    ctx->r4 = ADD32(ctx->r4, -0X3114);
    alSynFreeFX(rdram, ctx);
        goto after_6;
    // 0x80054370: addiu       $a0, $a0, -0x3114
    ctx->r4 = ADD32(ctx->r4, -0X3114);
    after_6:
    // 0x80054374: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80054378: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8005437C: lw          $a1, 0x9F4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9F4);
    // 0x80054380: jal         0x800529BC
    // 0x80054384: addiu       $a0, $a0, 0x6808
    ctx->r4 = ADD32(ctx->r4, 0X6808);
    func_800529BC(rdram, ctx);
        goto after_7;
    // 0x80054384: addiu       $a0, $a0, 0x6808
    ctx->r4 = ADD32(ctx->r4, 0X6808);
    after_7:
    // 0x80054388: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8005438C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80054390: addiu       $a1, $a1, -0x30E4
    ctx->r5 = ADD32(ctx->r5, -0X30E4);
    // 0x80054394: jal         0x8006CF08
    // 0x80054398: addiu       $a0, $a0, -0x30F4
    ctx->r4 = ADD32(ctx->r4, -0X30F4);
    alSynFreeFX(rdram, ctx);
        goto after_8;
    // 0x80054398: addiu       $a0, $a0, -0x30F4
    ctx->r4 = ADD32(ctx->r4, -0X30F4);
    after_8:
    // 0x8005439C: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x800543A0: lw          $s0, 0x9F4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X9F4);
    // 0x800543A4: nop

    // 0x800543A8: blez        $s0, L_800543F4
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800543AC: nop
    
            goto L_800543F4;
    }
    // 0x800543AC: nop

L_800543B0:
    // 0x800543B0: jal         0x8006EFEC
    // 0x800543B4: nop

    func_8006EFEC(rdram, ctx);
        goto after_9;
    // 0x800543B4: nop

    after_9:
    // 0x800543B8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800543BC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800543C0: addiu       $a1, $a1, -0x30C0
    ctx->r5 = ADD32(ctx->r5, -0X30C0);
    // 0x800543C4: jal         0x8006CF08
    // 0x800543C8: addiu       $a0, $a0, -0x30D0
    ctx->r4 = ADD32(ctx->r4, -0X30D0);
    alSynFreeFX(rdram, ctx);
        goto after_10;
    // 0x800543C8: addiu       $a0, $a0, -0x30D0
    ctx->r4 = ADD32(ctx->r4, -0X30D0);
    after_10:
    // 0x800543CC: jal         0x8006EC4C
    // 0x800543D0: nop

    func_8006EC4C(rdram, ctx);
        goto after_11;
    // 0x800543D0: nop

    after_11:
    // 0x800543D4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800543D8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800543DC: addiu       $a1, $a1, -0x309C
    ctx->r5 = ADD32(ctx->r5, -0X309C);
    // 0x800543E0: jal         0x8006CF08
    // 0x800543E4: addiu       $a0, $a0, -0x30AC
    ctx->r4 = ADD32(ctx->r4, -0X30AC);
    alSynFreeFX(rdram, ctx);
        goto after_12;
    // 0x800543E4: addiu       $a0, $a0, -0x30AC
    ctx->r4 = ADD32(ctx->r4, -0X30AC);
    after_12:
    // 0x800543E8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800543EC: bgtz        $s0, L_800543B0
    if (SIGNED(ctx->r16) > 0) {
        // 0x800543F0: nop
    
            goto L_800543B0;
    }
    // 0x800543F0: nop

L_800543F4:
    // 0x800543F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800543F8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800543FC: lw          $a1, 0x9F4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9F4);
    // 0x80054400: jal         0x8006ADEC
    // 0x80054404: addiu       $a0, $a0, 0x44C
    ctx->r4 = ADD32(ctx->r4, 0X44C);
    func_8006ADEC(rdram, ctx);
        goto after_13;
    // 0x80054404: addiu       $a0, $a0, 0x44C
    ctx->r4 = ADD32(ctx->r4, 0X44C);
    after_13:
    // 0x80054408: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8005440C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80054410: addiu       $a1, $a1, -0x3078
    ctx->r5 = ADD32(ctx->r5, -0X3078);
    // 0x80054414: jal         0x8006CF08
    // 0x80054418: addiu       $a0, $a0, -0x3088
    ctx->r4 = ADD32(ctx->r4, -0X3088);
    alSynFreeFX(rdram, ctx);
        goto after_14;
    // 0x80054418: addiu       $a0, $a0, -0x3088
    ctx->r4 = ADD32(ctx->r4, -0X3088);
    after_14:
L_8005441C:
    // 0x8005441C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80054420: nop

    // 0x80054424: lbu         $t0, 0x3($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X3);
    // 0x80054428: nop

    // 0x8005442C: beq         $t0, $zero, L_8005443C
    if (ctx->r8 == 0) {
        // 0x80054430: nop
    
            goto L_8005443C;
    }
    // 0x80054430: nop

    // 0x80054434: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80054438: sb          $t1, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r9;
L_8005443C:
    // 0x8005443C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80054440: nop

    // 0x80054444: lbu         $t3, 0xB($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XB);
    // 0x80054448: nop

    // 0x8005444C: beq         $t3, $zero, L_8005445C
    if (ctx->r11 == 0) {
        // 0x80054450: nop
    
            goto L_8005445C;
    }
    // 0x80054450: nop

    // 0x80054454: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80054458: sb          $t4, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r12;
L_8005445C:
    // 0x8005445C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80054460: nop

    // 0x80054464: lbu         $v0, 0x1($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X1);
    // 0x80054468: nop

L_8005446C:
    // 0x8005446C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80054470: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80054474: jr          $ra
    // 0x80054478: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80054478: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8005447C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005447C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80054480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80054484: jal         0x8005FC78
    // 0x80054488: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8005FC78(rdram, ctx);
        goto after_0;
    // 0x80054488: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8005448C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80054490: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80054494: addiu       $a1, $a1, -0x3054
    ctx->r5 = ADD32(ctx->r5, -0X3054);
    // 0x80054498: jal         0x8006CF08
    // 0x8005449C: addiu       $a0, $a0, -0x305C
    ctx->r4 = ADD32(ctx->r4, -0X305C);
    alSynFreeFX(rdram, ctx);
        goto after_1;
    // 0x8005449C: addiu       $a0, $a0, -0x305C
    ctx->r4 = ADD32(ctx->r4, -0X305C);
    after_1:
    // 0x800544A0: jal         0x8006ECC0
    // 0x800544A4: nop

    func_8006ECC0(rdram, ctx);
        goto after_2;
    // 0x800544A4: nop

    after_2:
    // 0x800544A8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800544AC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800544B0: addiu       $a1, $a1, -0x3038
    ctx->r5 = ADD32(ctx->r5, -0X3038);
    // 0x800544B4: jal         0x8006CF08
    // 0x800544B8: addiu       $a0, $a0, -0x3040
    ctx->r4 = ADD32(ctx->r4, -0X3040);
    alSynFreeFX(rdram, ctx);
        goto after_3;
    // 0x800544B8: addiu       $a0, $a0, -0x3040
    ctx->r4 = ADD32(ctx->r4, -0X3040);
    after_3:
    // 0x800544BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800544C0: jal         0x80067D50
    // 0x800544C4: addiu       $a0, $a0, 0x830
    ctx->r4 = ADD32(ctx->r4, 0X830);
    func_80067D50(rdram, ctx);
        goto after_4;
    // 0x800544C4: addiu       $a0, $a0, 0x830
    ctx->r4 = ADD32(ctx->r4, 0X830);
    after_4:
    // 0x800544C8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800544CC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800544D0: addiu       $a1, $a1, -0x301C
    ctx->r5 = ADD32(ctx->r5, -0X301C);
    // 0x800544D4: jal         0x8006CF08
    // 0x800544D8: addiu       $a0, $a0, -0x3024
    ctx->r4 = ADD32(ctx->r4, -0X3024);
    alSynFreeFX(rdram, ctx);
        goto after_5;
    // 0x800544D8: addiu       $a0, $a0, -0x3024
    ctx->r4 = ADD32(ctx->r4, -0X3024);
    after_5:
    // 0x800544DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800544E0: jal         0x800661A0
    // 0x800544E4: addiu       $a0, $a0, 0x51F0
    ctx->r4 = ADD32(ctx->r4, 0X51F0);
    func_800661A0(rdram, ctx);
        goto after_6;
    // 0x800544E4: addiu       $a0, $a0, 0x51F0
    ctx->r4 = ADD32(ctx->r4, 0X51F0);
    after_6:
    // 0x800544E8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800544EC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800544F0: addiu       $a1, $a1, -0x3000
    ctx->r5 = ADD32(ctx->r5, -0X3000);
    // 0x800544F4: jal         0x8006CF08
    // 0x800544F8: addiu       $a0, $a0, -0x3008
    ctx->r4 = ADD32(ctx->r4, -0X3008);
    alSynFreeFX(rdram, ctx);
        goto after_7;
    // 0x800544F8: addiu       $a0, $a0, -0x3008
    ctx->r4 = ADD32(ctx->r4, -0X3008);
    after_7:
    // 0x800544FC: jal         0x80068940
    // 0x80054500: nop

    func_80068940(rdram, ctx);
        goto after_8;
    // 0x80054500: nop

    after_8:
    // 0x80054504: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80054508: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8005450C: addiu       $a1, $a1, -0x2FE4
    ctx->r5 = ADD32(ctx->r5, -0X2FE4);
    // 0x80054510: jal         0x8006CF08
    // 0x80054514: addiu       $a0, $a0, -0x2FEC
    ctx->r4 = ADD32(ctx->r4, -0X2FEC);
    alSynFreeFX(rdram, ctx);
        goto after_9;
    // 0x80054514: addiu       $a0, $a0, -0x2FEC
    ctx->r4 = ADD32(ctx->r4, -0X2FEC);
    after_9:
    // 0x80054518: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8005451C: jal         0x80052A00
    // 0x80054520: addiu       $a0, $a0, 0x6808
    ctx->r4 = ADD32(ctx->r4, 0X6808);
    func_80052A00(rdram, ctx);
        goto after_10;
    // 0x80054520: addiu       $a0, $a0, 0x6808
    ctx->r4 = ADD32(ctx->r4, 0X6808);
    after_10:
    // 0x80054524: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80054528: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8005452C: addiu       $a1, $a1, -0x2FC8
    ctx->r5 = ADD32(ctx->r5, -0X2FC8);
    // 0x80054530: jal         0x8006CF08
    // 0x80054534: addiu       $a0, $a0, -0x2FD0
    ctx->r4 = ADD32(ctx->r4, -0X2FD0);
    alSynFreeFX(rdram, ctx);
        goto after_11;
    // 0x80054534: addiu       $a0, $a0, -0x2FD0
    ctx->r4 = ADD32(ctx->r4, -0X2FD0);
    after_11:
    // 0x80054538: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8005453C: jal         0x8006AE58
    // 0x80054540: addiu       $a0, $a0, 0x44C
    ctx->r4 = ADD32(ctx->r4, 0X44C);
    func_8006AE58(rdram, ctx);
        goto after_12;
    // 0x80054540: addiu       $a0, $a0, 0x44C
    ctx->r4 = ADD32(ctx->r4, 0X44C);
    after_12:
    // 0x80054544: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80054548: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8005454C: addiu       $a1, $a1, -0x2FAC
    ctx->r5 = ADD32(ctx->r5, -0X2FAC);
    // 0x80054550: jal         0x8006CF08
    // 0x80054554: addiu       $a0, $a0, -0x2FB4
    ctx->r4 = ADD32(ctx->r4, -0X2FB4);
    alSynFreeFX(rdram, ctx);
        goto after_13;
    // 0x80054554: addiu       $a0, $a0, -0x2FB4
    ctx->r4 = ADD32(ctx->r4, -0X2FB4);
    after_13:
    // 0x80054558: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8005455C: jal         0x80053DC0
    // 0x80054560: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_80053DC0(rdram, ctx);
        goto after_14;
    // 0x80054560: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_14:
    // 0x80054564: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80054568: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8005456C: addiu       $a1, $a1, -0x2F88
    ctx->r5 = ADD32(ctx->r5, -0X2F88);
    // 0x80054570: jal         0x8006CF08
    // 0x80054574: addiu       $a0, $a0, -0x2F90
    ctx->r4 = ADD32(ctx->r4, -0X2F90);
    alSynFreeFX(rdram, ctx);
        goto after_15;
    // 0x80054574: addiu       $a0, $a0, -0x2F90
    ctx->r4 = ADD32(ctx->r4, -0X2F90);
    after_15:
    // 0x80054578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005457C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80054580: jr          $ra
    // 0x80054584: nop

    return;
    // 0x80054584: nop

;}
RECOMP_FUNC void func_80054588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054588: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005458C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80054590: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80054594: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80054598: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8005459C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800545A0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800545A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800545A8: lbu         $t7, 0x9($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X9);
    // 0x800545AC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800545B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800545B4: lbu         $t8, -0x100($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X100);
    // 0x800545B8: addiu       $t9, $zero, 0x13
    ctx->r25 = ADD32(0, 0X13);
    // 0x800545BC: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x800545C0: subu        $s0, $t9, $t8
    ctx->r16 = SUB32(ctx->r25, ctx->r24);
    // 0x800545C4: beq         $s0, $at, L_80054634
    if (ctx->r16 == ctx->r1) {
        // 0x800545C8: nop
    
            goto L_80054634;
    }
    // 0x800545C8: nop

    // 0x800545CC: jal         0x80069F10
    // 0x800545D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80069F10(rdram, ctx);
        goto after_0;
    // 0x800545D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800545D4: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    // 0x800545D8: slti        $at, $s1, 0x14
    ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
    // 0x800545DC: beq         $at, $zero, L_80054624
    if (ctx->r1 == 0) {
        // 0x800545E0: nop
    
            goto L_80054624;
    }
    // 0x800545E0: nop

L_800545E4:
    // 0x800545E4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800545E8: slti        $at, $s2, 0xA
    ctx->r1 = SIGNED(ctx->r18) < 0XA ? 1 : 0;
    // 0x800545EC: beq         $at, $zero, L_80054614
    if (ctx->r1 == 0) {
        // 0x800545F0: nop
    
            goto L_80054614;
    }
    // 0x800545F0: nop

L_800545F4:
    // 0x800545F4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800545F8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800545FC: jal         0x8006DE40
    // 0x80054600: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8006DE40(rdram, ctx);
        goto after_1;
    // 0x80054600: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x80054604: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80054608: slti        $at, $s2, 0xA
    ctx->r1 = SIGNED(ctx->r18) < 0XA ? 1 : 0;
    // 0x8005460C: bne         $at, $zero, L_800545F4
    if (ctx->r1 != 0) {
        // 0x80054610: nop
    
            goto L_800545F4;
    }
    // 0x80054610: nop

L_80054614:
    // 0x80054614: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80054618: slti        $at, $s1, 0x14
    ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
    // 0x8005461C: bne         $at, $zero, L_800545E4
    if (ctx->r1 != 0) {
        // 0x80054620: nop
    
            goto L_800545E4;
    }
    // 0x80054620: nop

L_80054624:
    // 0x80054624: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80054628: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005462C: jal         0x80053F40
    // 0x80054630: addiu       $a0, $a0, 0x6840
    ctx->r4 = ADD32(ctx->r4, 0X6840);
    func_80053F40(rdram, ctx);
        goto after_2;
    // 0x80054630: addiu       $a0, $a0, 0x6840
    ctx->r4 = ADD32(ctx->r4, 0X6840);
    after_2:
L_80054634:
    // 0x80054634: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80054638: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005463C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80054640: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80054644: jr          $ra
    // 0x80054648: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80054648: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8005464C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005464C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80054650: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80054654: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80054658: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8005465C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80054660: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80054664: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80054668: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005466C: lbu         $t7, 0x9($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X9);
    // 0x80054670: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80054674: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80054678: lbu         $t8, -0x100($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X100);
    // 0x8005467C: addiu       $t9, $zero, 0x13
    ctx->r25 = ADD32(0, 0X13);
    // 0x80054680: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x80054684: subu        $s0, $t9, $t8
    ctx->r16 = SUB32(ctx->r25, ctx->r24);
    // 0x80054688: beq         $s0, $at, L_800546F8
    if (ctx->r16 == ctx->r1) {
        // 0x8005468C: nop
    
            goto L_800546F8;
    }
    // 0x8005468C: nop

    // 0x80054690: jal         0x80069F10
    // 0x80054694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80069F10(rdram, ctx);
        goto after_0;
    // 0x80054694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80054698: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    // 0x8005469C: slti        $at, $s1, 0x14
    ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
    // 0x800546A0: beq         $at, $zero, L_800546E8
    if (ctx->r1 == 0) {
        // 0x800546A4: nop
    
            goto L_800546E8;
    }
    // 0x800546A4: nop

L_800546A8:
    // 0x800546A8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800546AC: slti        $at, $s2, 0xA
    ctx->r1 = SIGNED(ctx->r18) < 0XA ? 1 : 0;
    // 0x800546B0: beq         $at, $zero, L_800546D8
    if (ctx->r1 == 0) {
        // 0x800546B4: nop
    
            goto L_800546D8;
    }
    // 0x800546B4: nop

L_800546B8:
    // 0x800546B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800546BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800546C0: jal         0x8006DE40
    // 0x800546C4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8006DE40(rdram, ctx);
        goto after_1;
    // 0x800546C4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x800546C8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800546CC: slti        $at, $s2, 0xA
    ctx->r1 = SIGNED(ctx->r18) < 0XA ? 1 : 0;
    // 0x800546D0: bne         $at, $zero, L_800546B8
    if (ctx->r1 != 0) {
        // 0x800546D4: nop
    
            goto L_800546B8;
    }
    // 0x800546D4: nop

L_800546D8:
    // 0x800546D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800546DC: slti        $at, $s1, 0x14
    ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
    // 0x800546E0: bne         $at, $zero, L_800546A8
    if (ctx->r1 != 0) {
        // 0x800546E4: nop
    
            goto L_800546A8;
    }
    // 0x800546E4: nop

L_800546E8:
    // 0x800546E8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800546EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800546F0: jal         0x80053F40
    // 0x800546F4: addiu       $a0, $a0, 0x6840
    ctx->r4 = ADD32(ctx->r4, 0X6840);
    func_80053F40(rdram, ctx);
        goto after_2;
    // 0x800546F4: addiu       $a0, $a0, 0x6840
    ctx->r4 = ADD32(ctx->r4, 0X6840);
    after_2:
L_800546F8:
    // 0x800546F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800546FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80054700: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80054704: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80054708: jr          $ra
    // 0x8005470C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8005470C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80054710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054710: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80054714: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80054718: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8005471C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80054720: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80054724: lbu         $t7, 0x9($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X9);
    // 0x80054728: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8005472C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80054730: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80054734: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x80054738: addiu       $t9, $t8, 0x96
    ctx->r25 = ADD32(ctx->r24, 0X96);
    // 0x8005473C: sw          $t9, 0x6834($t0)
    MEM_W(0X6834, ctx->r8) = ctx->r25;
    // 0x80054740: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80054744: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80054748: jal         0x80053F40
    // 0x8005474C: addiu       $a0, $a0, 0x6840
    ctx->r4 = ADD32(ctx->r4, 0X6840);
    func_80053F40(rdram, ctx);
        goto after_0;
    // 0x8005474C: addiu       $a0, $a0, 0x6840
    ctx->r4 = ADD32(ctx->r4, 0X6840);
    after_0:
    // 0x80054750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80054754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80054758: jr          $ra
    // 0x8005475C: nop

    return;
    // 0x8005475C: nop

;}
RECOMP_FUNC void func_80054760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054760: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80054764: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80054768: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8005476C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80054770: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80054774: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80054778: lbu         $s0, 0xA($t6)
    ctx->r16 = MEM_BU(ctx->r14, 0XA);
    // 0x8005477C: nop

    // 0x80054780: beq         $s0, $zero, L_800547A0
    if (ctx->r16 == 0) {
        // 0x80054784: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800547A0;
    }
    // 0x80054784: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80054788: beq         $s0, $at, L_800547B8
    if (ctx->r16 == ctx->r1) {
        // 0x8005478C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800547B8;
    }
    // 0x8005478C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80054790: beq         $s0, $at, L_800547D0
    if (ctx->r16 == ctx->r1) {
        // 0x80054794: nop
    
            goto L_800547D0;
    }
    // 0x80054794: nop

    // 0x80054798: b           L_800547E0
    // 0x8005479C: nop

        goto L_800547E0;
    // 0x8005479C: nop

L_800547A0:
    // 0x800547A0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800547A4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800547A8: jal         0x80054588
    // 0x800547AC: nop

    func_80054588(rdram, ctx);
        goto after_0;
    // 0x800547AC: nop

    after_0:
    // 0x800547B0: b           L_800547E0
    // 0x800547B4: nop

        goto L_800547E0;
    // 0x800547B4: nop

L_800547B8:
    // 0x800547B8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800547BC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800547C0: jal         0x8005464C
    // 0x800547C4: nop

    func_8005464C(rdram, ctx);
        goto after_1;
    // 0x800547C4: nop

    after_1:
    // 0x800547C8: b           L_800547E0
    // 0x800547CC: nop

        goto L_800547E0;
    // 0x800547CC: nop

L_800547D0:
    // 0x800547D0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800547D4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800547D8: jal         0x80054710
    // 0x800547DC: nop

    func_80054710(rdram, ctx);
        goto after_2;
    // 0x800547DC: nop

    after_2:
L_800547E0:
    // 0x800547E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800547E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800547E8: jr          $ra
    // 0x800547EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800547EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800547F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800547F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800547F4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800547F8: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800547FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80054800: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80054804: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80054808: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8005480C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80054810: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80054814: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80054818: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8005481C: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x80054820: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
    // 0x80054824: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80054828: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8005482C: sb          $t0, 0x2($t1)
    MEM_B(0X2, ctx->r9) = ctx->r8;
    // 0x80054830: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80054834: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80054838: sb          $zero, 0x3($t2)
    MEM_B(0X3, ctx->r10) = 0;
    // 0x8005483C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80054840: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80054844: sb          $t3, 0x4($t4)
    MEM_B(0X4, ctx->r12) = ctx->r11;
    // 0x80054848: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8005484C: jal         0x800713F0
    // 0x80054850: addiu       $a0, $a0, 0x6690
    ctx->r4 = ADD32(ctx->r4, 0X6690);
    func_800713F0(rdram, ctx);
        goto after_0;
    // 0x80054850: addiu       $a0, $a0, 0x6690
    ctx->r4 = ADD32(ctx->r4, 0X6690);
    after_0:
    // 0x80054854: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80054858: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8005485C: lw          $a1, 0x4($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X4);
    // 0x80054860: jal         0x80070D40
    // 0x80054864: addiu       $a0, $a0, 0x7D0
    ctx->r4 = ADD32(ctx->r4, 0X7D0);
    func_80070D40(rdram, ctx);
        goto after_1;
    // 0x80054864: addiu       $a0, $a0, 0x7D0
    ctx->r4 = ADD32(ctx->r4, 0X7D0);
    after_1:
    // 0x80054868: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8005486C: nop

    // 0x80054870: lbu         $a0, 0x8($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X8);
    // 0x80054874: jal         0x80060598
    // 0x80054878: nop

    func_80060598(rdram, ctx);
        goto after_2;
    // 0x80054878: nop

    after_2:
    // 0x8005487C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80054880: nop

    // 0x80054884: addiu       $a0, $t7, 0x830
    ctx->r4 = ADD32(ctx->r15, 0X830);
    // 0x80054888: addiu       $a1, $t7, 0x6690
    ctx->r5 = ADD32(ctx->r15, 0X6690);
    // 0x8005488C: jal         0x8006D200
    // 0x80054890: addiu       $a2, $t7, 0x7D0
    ctx->r6 = ADD32(ctx->r15, 0X7D0);
    func_8006D200(rdram, ctx);
        goto after_3;
    // 0x80054890: addiu       $a2, $t7, 0x7D0
    ctx->r6 = ADD32(ctx->r15, 0X7D0);
    after_3:
    // 0x80054894: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80054898: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8005489C: lbu         $t9, 0x8($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X8);
    // 0x800548A0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x800548A4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x800548A8: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x800548AC: addiu       $a0, $a0, 0x51F0
    ctx->r4 = ADD32(ctx->r4, 0X51F0);
    // 0x800548B0: jal         0x80066518
    // 0x800548B4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80066518(rdram, ctx);
        goto after_4;
    // 0x800548B4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_4:
    // 0x800548B8: jal         0x8006ADA4
    // 0x800548BC: nop

    func_8006ADA4(rdram, ctx);
        goto after_5;
    // 0x800548BC: nop

    after_5:
    // 0x800548C0: jal         0x80069F68
    // 0x800548C4: nop

    func_80069F68(rdram, ctx);
        goto after_6;
    // 0x800548C4: nop

    after_6:
    // 0x800548C8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800548CC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x800548D0: jal         0x80054760
    // 0x800548D4: nop

    func_80054760(rdram, ctx);
        goto after_7;
    // 0x800548D4: nop

    after_7:
    // 0x800548D8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800548DC: jal         0x80052A28
    // 0x800548E0: addiu       $a0, $a0, 0x6808
    ctx->r4 = ADD32(ctx->r4, 0X6808);
    func_80052A28(rdram, ctx);
        goto after_8;
    // 0x800548E0: addiu       $a0, $a0, 0x6808
    ctx->r4 = ADD32(ctx->r4, 0X6808);
    after_8:
    // 0x800548E4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x800548E8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x800548EC: jal         0x8005FE68
    // 0x800548F0: addiu       $a1, $a1, 0x6750
    ctx->r5 = ADD32(ctx->r5, 0X6750);
    func_8005FE68(rdram, ctx);
        goto after_9;
    // 0x800548F0: addiu       $a1, $a1, 0x6750
    ctx->r5 = ADD32(ctx->r5, 0X6750);
    after_9:
    // 0x800548F4: lwl         $t0, 0x34($sp)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r29, 0X34);
    // 0x800548F8: lwr         $t0, 0x37($sp)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r29, 0X37);
    // 0x800548FC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80054900: lw          $t1, -0x3F0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3F0);
    // 0x80054904: swl         $t0, 0x4($sp)
    do_swl(rdram, 0X4, ctx->r29, ctx->r8);
    // 0x80054908: swr         $t0, 0x7($sp)
    do_swr(rdram, 0X7, ctx->r29, ctx->r8);
    // 0x8005490C: lhu         $a2, 0x2($t1)
    ctx->r6 = MEM_HU(ctx->r9, 0X2);
    // 0x80054910: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80054914: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80054918: sra         $t2, $a2, 8
    ctx->r10 = S32(SIGNED(ctx->r6) >> 8);
    // 0x8005491C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x80054920: jal         0x8006D2C0
    // 0x80054924: addiu       $a0, $a0, 0x6838
    ctx->r4 = ADD32(ctx->r4, 0X6838);
    func_8006D2C0(rdram, ctx);
        goto after_10;
    // 0x80054924: addiu       $a0, $a0, 0x6838
    ctx->r4 = ADD32(ctx->r4, 0X6838);
    after_10:
    // 0x80054928: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x8005492C: nop

    // 0x80054930: addiu       $a0, $t3, 0x8
    ctx->r4 = ADD32(ctx->r11, 0X8);
    // 0x80054934: addiu       $a1, $t3, 0x51F0
    ctx->r5 = ADD32(ctx->r11, 0X51F0);
    // 0x80054938: addiu       $a2, $t3, 0x6840
    ctx->r6 = ADD32(ctx->r11, 0X6840);
    // 0x8005493C: jal         0x80053DF8
    // 0x80054940: addiu       $a3, $t3, 0x6838
    ctx->r7 = ADD32(ctx->r11, 0X6838);
    func_80053DF8(rdram, ctx);
        goto after_11;
    // 0x80054940: addiu       $a3, $t3, 0x6838
    ctx->r7 = ADD32(ctx->r11, 0X6838);
    after_11:
    // 0x80054944: jal         0x8007283C
    // 0x80054948: nop

    func_8007283C(rdram, ctx);
        goto after_12;
    // 0x80054948: nop

    after_12:
    // 0x8005494C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80054950: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80054954: sw          $v0, 0x674C($t4)
    MEM_W(0X674C, ctx->r12) = ctx->r2;
    // 0x80054958: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8005495C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80054960: lw          $t6, 0x674C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X674C);
    // 0x80054964: nop

    // 0x80054968: sw          $t6, -0x380($at)
    MEM_W(-0X380, ctx->r1) = ctx->r14;
    // 0x8005496C: lw          $a0, 0x674C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X674C);
    // 0x80054970: jal         0x80072D38
    // 0x80054974: nop

    func_80072D38(rdram, ctx);
        goto after_13;
    // 0x80054974: nop

    after_13:
    // 0x80054978: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8005497C: lw          $t7, -0x390($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X390);
    // 0x80054980: nop

    // 0x80054984: lbu         $s2, 0x5($t7)
    ctx->r18 = MEM_BU(ctx->r15, 0X5);
    // 0x80054988: nop

    // 0x8005498C: beq         $s2, $zero, L_800549AC
    if (ctx->r18 == 0) {
        // 0x80054990: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800549AC;
    }
    // 0x80054990: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80054994: beq         $s2, $at, L_80054A80
    if (ctx->r18 == ctx->r1) {
        // 0x80054998: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80054A80;
    }
    // 0x80054998: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005499C: beq         $s2, $at, L_800549C4
    if (ctx->r18 == ctx->r1) {
        // 0x800549A0: nop
    
            goto L_800549C4;
    }
    // 0x800549A0: nop

    // 0x800549A4: b           L_80054AB4
    // 0x800549A8: nop

        goto L_80054AB4;
    // 0x800549A8: nop

L_800549AC:
    // 0x800549AC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800549B0: lw          $a0, -0x380($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X380);
    // 0x800549B4: jal         0x80072E2C
    // 0x800549B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80072E2C(rdram, ctx);
        goto after_14;
    // 0x800549B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x800549BC: b           L_80054ACC
    // 0x800549C0: nop

        goto L_80054ACC;
    // 0x800549C0: nop

L_800549C4:
    // 0x800549C4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800549C8: lw          $a0, -0x380($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X380);
    // 0x800549CC: jal         0x80072E2C
    // 0x800549D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80072E2C(rdram, ctx);
        goto after_15;
    // 0x800549D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x800549D4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800549D8: lbu         $s0, -0x10DF($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X10DF);
    // 0x800549DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800549E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800549E4: jal         0x800723A0
    // 0x800549E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800723A0(rdram, ctx);
        goto after_16;
    // 0x800549E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_16:
    // 0x800549EC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800549F0: lbu         $t9, -0x10E0($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X10E0);
    // 0x800549F4: addiu       $t8, $s0, 0x1
    ctx->r24 = ADD32(ctx->r16, 0X1);
    // 0x800549F8: div         $zero, $t8, $t9
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r25))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r25)));
    // 0x800549FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80054A00: bne         $t9, $zero, L_80054A0C
    if (ctx->r25 != 0) {
        // 0x80054A04: nop
    
            goto L_80054A0C;
    }
    // 0x80054A04: nop

    // 0x80054A08: break       7
    do_break(2147830280);
L_80054A0C:
    // 0x80054A0C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80054A10: bne         $t9, $at, L_80054A24
    if (ctx->r25 != ctx->r1) {
        // 0x80054A14: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80054A24;
    }
    // 0x80054A14: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80054A18: bne         $t8, $at, L_80054A24
    if (ctx->r24 != ctx->r1) {
        // 0x80054A1C: nop
    
            goto L_80054A24;
    }
    // 0x80054A1C: nop

    // 0x80054A20: break       6
    do_break(2147830304);
L_80054A24:
    // 0x80054A24: mfhi        $a1
    ctx->r5 = hi;
    // 0x80054A28: jal         0x8007240C
    // 0x80054A2C: nop

    func_8007240C(rdram, ctx);
        goto after_17;
    // 0x80054A2C: nop

    after_17:
    // 0x80054A30: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80054A34: lbu         $t0, -0x10E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X10E0);
    // 0x80054A38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80054A3C: bne         $t0, $at, L_80054ACC
    if (ctx->r8 != ctx->r1) {
        // 0x80054A40: nop
    
            goto L_80054ACC;
    }
    // 0x80054A40: nop

    // 0x80054A44: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80054A48: lbu         $t1, -0x10DF($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X10DF);
    // 0x80054A4C: nop

    // 0x80054A50: bne         $t1, $zero, L_80054A6C
    if (ctx->r9 != 0) {
        // 0x80054A54: nop
    
            goto L_80054A6C;
    }
    // 0x80054A54: nop

    // 0x80054A58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80054A5C: jal         0x8007240C
    // 0x80054A60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8007240C(rdram, ctx);
        goto after_18;
    // 0x80054A60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x80054A64: b           L_80054ACC
    // 0x80054A68: nop

        goto L_80054ACC;
    // 0x80054A68: nop

L_80054A6C:
    // 0x80054A6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80054A70: jal         0x8007240C
    // 0x80054A74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8007240C(rdram, ctx);
        goto after_19;
    // 0x80054A74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x80054A78: b           L_80054ACC
    // 0x80054A7C: nop

        goto L_80054ACC;
    // 0x80054A7C: nop

L_80054A80:
    // 0x80054A80: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80054A84: lw          $a0, -0x380($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X380);
    // 0x80054A88: jal         0x80072E2C
    // 0x80054A8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80072E2C(rdram, ctx);
        goto after_20;
    // 0x80054A8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x80054A90: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80054A94: lw          $t2, -0x390($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X390);
    // 0x80054A98: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80054A9C: lbu         $s1, 0x30($t2)
    ctx->r17 = MEM_BU(ctx->r10, 0X30);
    // 0x80054AA0: lbu         $a0, -0x10DF($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X10DF);
    // 0x80054AA4: jal         0x8007240C
    // 0x80054AA8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8007240C(rdram, ctx);
        goto after_21;
    // 0x80054AA8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_21:
    // 0x80054AAC: b           L_80054ACC
    // 0x80054AB0: nop

        goto L_80054ACC;
    // 0x80054AB0: nop

L_80054AB4:
    // 0x80054AB4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80054AB8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80054ABC: addiu       $a1, $a1, -0x2F6C
    ctx->r5 = ADD32(ctx->r5, -0X2F6C);
    // 0x80054AC0: addiu       $a0, $a0, -0x2F78
    ctx->r4 = ADD32(ctx->r4, -0X2F78);
    // 0x80054AC4: jal         0x8004A5A0
    // 0x80054AC8: addiu       $a2, $zero, 0x1F8
    ctx->r6 = ADD32(0, 0X1F8);
    func_8004A5A0(rdram, ctx);
        goto after_22;
    // 0x80054AC8: addiu       $a2, $zero, 0x1F8
    ctx->r6 = ADD32(0, 0X1F8);
    after_22:
L_80054ACC:
    // 0x80054ACC: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80054AD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80054AD4: jal         0x80053670
    // 0x80054AD8: sw          $zero, 0x6818($t3)
    MEM_W(0X6818, ctx->r11) = 0;
    func_80053670(rdram, ctx);
        goto after_23;
    // 0x80054AD8: sw          $zero, 0x6818($t3)
    MEM_W(0X6818, ctx->r11) = 0;
    after_23:
    // 0x80054ADC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80054AE0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80054AE4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80054AE8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80054AEC: jr          $ra
    // 0x80054AF0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80054AF0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80054AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054AF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80054AF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80054AFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80054B00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80054B04: jal         0x80053F48
    // 0x80054B08: addiu       $a0, $a0, 0x6840
    ctx->r4 = ADD32(ctx->r4, 0X6840);
    func_80053F48(rdram, ctx);
        goto after_0;
    // 0x80054B08: addiu       $a0, $a0, 0x6840
    ctx->r4 = ADD32(ctx->r4, 0X6840);
    after_0:
    // 0x80054B0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80054B10: jal         0x80053E70
    // 0x80054B14: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_80053E70(rdram, ctx);
        goto after_1;
    // 0x80054B14: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_1:
    // 0x80054B18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80054B1C: jal         0x800666A8
    // 0x80054B20: addiu       $a0, $a0, 0x51F0
    ctx->r4 = ADD32(ctx->r4, 0X51F0);
    func_800666A8(rdram, ctx);
        goto after_2;
    // 0x80054B20: addiu       $a0, $a0, 0x51F0
    ctx->r4 = ADD32(ctx->r4, 0X51F0);
    after_2:
    // 0x80054B24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80054B28: jal         0x8006D278
    // 0x80054B2C: addiu       $a0, $a0, 0x830
    ctx->r4 = ADD32(ctx->r4, 0X830);
    func_8006D278(rdram, ctx);
        goto after_3;
    // 0x80054B2C: addiu       $a0, $a0, 0x830
    ctx->r4 = ADD32(ctx->r4, 0X830);
    after_3:
    // 0x80054B30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80054B34: jal         0x80070EC0
    // 0x80054B38: addiu       $a0, $a0, 0x7D0
    ctx->r4 = ADD32(ctx->r4, 0X7D0);
    func_80070EC0(rdram, ctx);
        goto after_4;
    // 0x80054B38: addiu       $a0, $a0, 0x7D0
    ctx->r4 = ADD32(ctx->r4, 0X7D0);
    after_4:
    // 0x80054B3C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80054B40: nop

    // 0x80054B44: lw          $a0, 0x674C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X674C);
    // 0x80054B48: jal         0x80072E24
    // 0x80054B4C: nop

    func_80072E24(rdram, ctx);
        goto after_5;
    // 0x80054B4C: nop

    after_5:
    // 0x80054B50: jal         0x8006ADE4
    // 0x80054B54: nop

    func_8006ADE4(rdram, ctx);
        goto after_6;
    // 0x80054B54: nop

    after_6:
    // 0x80054B58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80054B5C: jal         0x80071470
    // 0x80054B60: addiu       $a0, $a0, 0x6690
    ctx->r4 = ADD32(ctx->r4, 0X6690);
    func_80071470(rdram, ctx);
        goto after_7;
    // 0x80054B60: addiu       $a0, $a0, 0x6690
    ctx->r4 = ADD32(ctx->r4, 0X6690);
    after_7:
    // 0x80054B64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80054B68: jal         0x80052A90
    // 0x80054B6C: addiu       $a0, $a0, 0x6808
    ctx->r4 = ADD32(ctx->r4, 0X6808);
    func_80052A90(rdram, ctx);
        goto after_8;
    // 0x80054B6C: addiu       $a0, $a0, 0x6808
    ctx->r4 = ADD32(ctx->r4, 0X6808);
    after_8:
    // 0x80054B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80054B74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80054B78: jr          $ra
    // 0x80054B7C: nop

    return;
    // 0x80054B7C: nop

;}
RECOMP_FUNC void func_80054B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054B80: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80054B84: addiu       $t7, $zero, 0xFF0
    ctx->r15 = ADD32(0, 0XFF0);
    // 0x80054B88: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x80054B8C: multu       $t8, $a1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054B90: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80054B94: lh          $t3, 0x2($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X2);
    // 0x80054B98: addiu       $t4, $zero, 0xFF0
    ctx->r12 = ADD32(0, 0XFF0);
    // 0x80054B9C: subu        $t5, $t4, $t3
    ctx->r13 = SUB32(ctx->r12, ctx->r11);
    // 0x80054BA0: lh          $t1, 0x0($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X0);
    // 0x80054BA4: lh          $t8, 0x2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X2);
    // 0x80054BA8: mflo        $t9
    ctx->r25 = lo;
    // 0x80054BAC: nop

    // 0x80054BB0: nop

    // 0x80054BB4: divu        $zero, $t9, $at
    lo = S32(U32(ctx->r25) / U32(ctx->r1)); hi = S32(U32(ctx->r25) % U32(ctx->r1));
    // 0x80054BB8: mflo        $t0
    ctx->r8 = lo;
    // 0x80054BBC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80054BC0: lh          $t0, 0x4($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X4);
    // 0x80054BC4: multu       $t5, $a1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054BC8: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    // 0x80054BCC: addiu       $t1, $zero, 0xFF0
    ctx->r9 = ADD32(0, 0XFF0);
    // 0x80054BD0: subu        $t2, $t1, $t0
    ctx->r10 = SUB32(ctx->r9, ctx->r8);
    // 0x80054BD4: lh          $t5, 0x4($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X4);
    // 0x80054BD8: mflo        $t7
    ctx->r15 = lo;
    // 0x80054BDC: nop

    // 0x80054BE0: nop

    // 0x80054BE4: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x80054BE8: mflo        $t6
    ctx->r14 = lo;
    // 0x80054BEC: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80054BF0: lh          $t6, 0x6($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X6);
    // 0x80054BF4: multu       $t2, $a1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054BF8: sh          $t9, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r25;
    // 0x80054BFC: addiu       $t8, $zero, 0xFF0
    ctx->r24 = ADD32(0, 0XFF0);
    // 0x80054C00: subu        $t9, $t8, $t6
    ctx->r25 = SUB32(ctx->r24, ctx->r14);
    // 0x80054C04: lh          $t2, 0x6($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X6);
    // 0x80054C08: mflo        $t4
    ctx->r12 = lo;
    // 0x80054C0C: nop

    // 0x80054C10: nop

    // 0x80054C14: divu        $zero, $t4, $at
    lo = S32(U32(ctx->r12) / U32(ctx->r1)); hi = S32(U32(ctx->r12) % U32(ctx->r1));
    // 0x80054C18: mflo        $t3
    ctx->r11 = lo;
    // 0x80054C1C: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x80054C20: lh          $t3, 0x8($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X8);
    // 0x80054C24: multu       $t9, $a1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054C28: sh          $t7, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r15;
    // 0x80054C2C: addiu       $t5, $zero, 0xFF0
    ctx->r13 = ADD32(0, 0XFF0);
    // 0x80054C30: subu        $t7, $t5, $t3
    ctx->r15 = SUB32(ctx->r13, ctx->r11);
    // 0x80054C34: lh          $t9, 0x8($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X8);
    // 0x80054C38: mflo        $t1
    ctx->r9 = lo;
    // 0x80054C3C: nop

    // 0x80054C40: nop

    // 0x80054C44: divu        $zero, $t1, $at
    lo = S32(U32(ctx->r9) / U32(ctx->r1)); hi = S32(U32(ctx->r9) % U32(ctx->r1));
    // 0x80054C48: mflo        $t0
    ctx->r8 = lo;
    // 0x80054C4C: addu        $t4, $t0, $t2
    ctx->r12 = ADD32(ctx->r8, ctx->r10);
    // 0x80054C50: lh          $t0, 0xA($a0)
    ctx->r8 = MEM_H(ctx->r4, 0XA);
    // 0x80054C54: multu       $t7, $a1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054C58: sh          $t4, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r12;
    // 0x80054C5C: addiu       $t2, $zero, 0xFF0
    ctx->r10 = ADD32(0, 0XFF0);
    // 0x80054C60: subu        $t4, $t2, $t0
    ctx->r12 = SUB32(ctx->r10, ctx->r8);
    // 0x80054C64: lh          $t7, 0xA($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA);
    // 0x80054C68: mflo        $t8
    ctx->r24 = lo;
    // 0x80054C6C: nop

    // 0x80054C70: nop

    // 0x80054C74: divu        $zero, $t8, $at
    lo = S32(U32(ctx->r24) / U32(ctx->r1)); hi = S32(U32(ctx->r24) % U32(ctx->r1));
    // 0x80054C78: mflo        $t6
    ctx->r14 = lo;
    // 0x80054C7C: addu        $t1, $t6, $t9
    ctx->r9 = ADD32(ctx->r14, ctx->r25);
    // 0x80054C80: sh          $t1, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r9;
    // 0x80054C84: multu       $t4, $a1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054C88: mflo        $t5
    ctx->r13 = lo;
    // 0x80054C8C: nop

    // 0x80054C90: nop

    // 0x80054C94: divu        $zero, $t5, $at
    lo = S32(U32(ctx->r13) / U32(ctx->r1)); hi = S32(U32(ctx->r13) % U32(ctx->r1));
    // 0x80054C98: mflo        $t3
    ctx->r11 = lo;
    // 0x80054C9C: addu        $t8, $t3, $t7
    ctx->r24 = ADD32(ctx->r11, ctx->r15);
    // 0x80054CA0: jr          $ra
    // 0x80054CA4: sh          $t8, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r24;
    return;
    // 0x80054CA4: sh          $t8, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_80054CA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054CA8: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80054CAC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80054CB0: multu       $t6, $a1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054CB4: lh          $t1, 0x2($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X2);
    // 0x80054CB8: lh          $t6, 0x4($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X4);
    // 0x80054CBC: lh          $t9, 0x0($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X0);
    // 0x80054CC0: lh          $t4, 0x2($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X2);
    // 0x80054CC4: mflo        $t7
    ctx->r15 = lo;
    // 0x80054CC8: nop

    // 0x80054CCC: nop

    // 0x80054CD0: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x80054CD4: mflo        $t8
    ctx->r24 = lo;
    // 0x80054CD8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80054CDC: lh          $t9, 0x4($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X4);
    // 0x80054CE0: multu       $t1, $a1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054CE4: lh          $t1, 0x6($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X6);
    // 0x80054CE8: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    // 0x80054CEC: mflo        $t2
    ctx->r10 = lo;
    // 0x80054CF0: nop

    // 0x80054CF4: nop

    // 0x80054CF8: divu        $zero, $t2, $at
    lo = S32(U32(ctx->r10) / U32(ctx->r1)); hi = S32(U32(ctx->r10) % U32(ctx->r1));
    // 0x80054CFC: mflo        $t3
    ctx->r11 = lo;
    // 0x80054D00: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80054D04: lh          $t4, 0x6($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X6);
    // 0x80054D08: multu       $t6, $a1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054D0C: lh          $t6, 0x8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8);
    // 0x80054D10: sh          $t5, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r13;
    // 0x80054D14: mflo        $t7
    ctx->r15 = lo;
    // 0x80054D18: nop

    // 0x80054D1C: nop

    // 0x80054D20: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x80054D24: mflo        $t8
    ctx->r24 = lo;
    // 0x80054D28: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80054D2C: lh          $t9, 0x8($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X8);
    // 0x80054D30: multu       $t1, $a1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054D34: lh          $t1, 0xA($a0)
    ctx->r9 = MEM_H(ctx->r4, 0XA);
    // 0x80054D38: sh          $t0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r8;
    // 0x80054D3C: mflo        $t2
    ctx->r10 = lo;
    // 0x80054D40: nop

    // 0x80054D44: nop

    // 0x80054D48: divu        $zero, $t2, $at
    lo = S32(U32(ctx->r10) / U32(ctx->r1)); hi = S32(U32(ctx->r10) % U32(ctx->r1));
    // 0x80054D4C: mflo        $t3
    ctx->r11 = lo;
    // 0x80054D50: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80054D54: lh          $t4, 0xA($a0)
    ctx->r12 = MEM_H(ctx->r4, 0XA);
    // 0x80054D58: multu       $t6, $a1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054D5C: sh          $t5, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r13;
    // 0x80054D60: mflo        $t7
    ctx->r15 = lo;
    // 0x80054D64: nop

    // 0x80054D68: nop

    // 0x80054D6C: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x80054D70: mflo        $t8
    ctx->r24 = lo;
    // 0x80054D74: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80054D78: sh          $t0, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r8;
    // 0x80054D7C: multu       $t1, $a1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054D80: mflo        $t2
    ctx->r10 = lo;
    // 0x80054D84: nop

    // 0x80054D88: nop

    // 0x80054D8C: divu        $zero, $t2, $at
    lo = S32(U32(ctx->r10) / U32(ctx->r1)); hi = S32(U32(ctx->r10) % U32(ctx->r1));
    // 0x80054D90: mflo        $t3
    ctx->r11 = lo;
    // 0x80054D94: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80054D98: jr          $ra
    // 0x80054D9C: sh          $t5, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r13;
    return;
    // 0x80054D9C: sh          $t5, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r13;
;}
RECOMP_FUNC void func_80054DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054DA0: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x80054DA4: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x80054DA8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80054DAC: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x80054DB0: multu       $t8, $a2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054DB4: lh          $t1, 0x0($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X0);
    // 0x80054DB8: lh          $t4, 0x2($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X2);
    // 0x80054DBC: lh          $t8, 0x2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X2);
    // 0x80054DC0: mflo        $t9
    ctx->r25 = lo;
    // 0x80054DC4: nop

    // 0x80054DC8: nop

    // 0x80054DCC: divu        $zero, $t9, $at
    lo = S32(U32(ctx->r25) / U32(ctx->r1)); hi = S32(U32(ctx->r25) % U32(ctx->r1));
    // 0x80054DD0: mflo        $t0
    ctx->r8 = lo;
    // 0x80054DD4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80054DD8: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    // 0x80054DDC: lh          $t3, 0x2($a1)
    ctx->r11 = MEM_H(ctx->r5, 0X2);
    // 0x80054DE0: lh          $t1, 0x4($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X4);
    // 0x80054DE4: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x80054DE8: multu       $t5, $a2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054DEC: lh          $t5, 0x4($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X4);
    // 0x80054DF0: mflo        $t6
    ctx->r14 = lo;
    // 0x80054DF4: nop

    // 0x80054DF8: nop

    // 0x80054DFC: divu        $zero, $t6, $at
    lo = S32(U32(ctx->r14) / U32(ctx->r1)); hi = S32(U32(ctx->r14) % U32(ctx->r1));
    // 0x80054E00: mflo        $t7
    ctx->r15 = lo;
    // 0x80054E04: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80054E08: sh          $t9, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r25;
    // 0x80054E0C: lh          $t0, 0x4($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X4);
    // 0x80054E10: lh          $t8, 0x6($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X6);
    // 0x80054E14: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x80054E18: multu       $t2, $a2
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054E1C: lh          $t2, 0x6($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X6);
    // 0x80054E20: mflo        $t3
    ctx->r11 = lo;
    // 0x80054E24: nop

    // 0x80054E28: nop

    // 0x80054E2C: divu        $zero, $t3, $at
    lo = S32(U32(ctx->r11) / U32(ctx->r1)); hi = S32(U32(ctx->r11) % U32(ctx->r1));
    // 0x80054E30: mflo        $t4
    ctx->r12 = lo;
    // 0x80054E34: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80054E38: sh          $t6, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r14;
    // 0x80054E3C: lh          $t7, 0x6($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X6);
    // 0x80054E40: lh          $t5, 0x8($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X8);
    // 0x80054E44: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x80054E48: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054E4C: lh          $t9, 0x8($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X8);
    // 0x80054E50: mflo        $t0
    ctx->r8 = lo;
    // 0x80054E54: nop

    // 0x80054E58: nop

    // 0x80054E5C: divu        $zero, $t0, $at
    lo = S32(U32(ctx->r8) / U32(ctx->r1)); hi = S32(U32(ctx->r8) % U32(ctx->r1));
    // 0x80054E60: mflo        $t1
    ctx->r9 = lo;
    // 0x80054E64: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80054E68: sh          $t3, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r11;
    // 0x80054E6C: lh          $t4, 0x8($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X8);
    // 0x80054E70: lh          $t2, 0xA($a0)
    ctx->r10 = MEM_H(ctx->r4, 0XA);
    // 0x80054E74: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x80054E78: multu       $t6, $a2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054E7C: lh          $t6, 0xA($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA);
    // 0x80054E80: mflo        $t7
    ctx->r15 = lo;
    // 0x80054E84: nop

    // 0x80054E88: nop

    // 0x80054E8C: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x80054E90: mflo        $t8
    ctx->r24 = lo;
    // 0x80054E94: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80054E98: sh          $t0, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r8;
    // 0x80054E9C: lh          $t1, 0xA($a1)
    ctx->r9 = MEM_H(ctx->r5, 0XA);
    // 0x80054EA0: nop

    // 0x80054EA4: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x80054EA8: multu       $t3, $a2
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054EAC: mflo        $t4
    ctx->r12 = lo;
    // 0x80054EB0: nop

    // 0x80054EB4: nop

    // 0x80054EB8: divu        $zero, $t4, $at
    lo = S32(U32(ctx->r12) / U32(ctx->r1)); hi = S32(U32(ctx->r12) % U32(ctx->r1));
    // 0x80054EBC: mflo        $t5
    ctx->r13 = lo;
    // 0x80054EC0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80054EC4: jr          $ra
    // 0x80054EC8: sh          $t7, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r15;
    return;
    // 0x80054EC8: sh          $t7, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r15;
    // 0x80054ECC: nop

;}
RECOMP_FUNC void func_80054ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054ED0: lb          $t6, 0x1C($a1)
    ctx->r14 = MEM_B(ctx->r5, 0X1C);
    // 0x80054ED4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80054ED8: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x80054EDC: sh          $t7, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r15;
    // 0x80054EE0: lb          $t8, 0x1D($a1)
    ctx->r24 = MEM_B(ctx->r5, 0X1D);
    // 0x80054EE4: addiu       $t0, $sp, 0x4
    ctx->r8 = ADD32(ctx->r29, 0X4);
    // 0x80054EE8: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x80054EEC: sh          $t9, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r25;
    // 0x80054EF0: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80054EF4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80054EF8: swl         $at, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, ctx->r1);
    // 0x80054EFC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80054F00: jr          $ra
    // 0x80054F04: swr         $at, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r1);
    return;
    // 0x80054F04: swr         $at, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r1);
;}
RECOMP_FUNC void func_80054F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054F08: lbu         $t6, 0x1E($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X1E);
    // 0x80054F0C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80054F10: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80054F14: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x80054F18: lb          $t9, 0xE($t8)
    ctx->r25 = MEM_B(ctx->r24, 0XE);
    // 0x80054F1C: addiu       $t6, $sp, 0x4
    ctx->r14 = ADD32(ctx->r29, 0X4);
    // 0x80054F20: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x80054F24: sh          $t0, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r8;
    // 0x80054F28: lbu         $t1, 0x1E($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X1E);
    // 0x80054F2C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80054F30: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80054F34: addu        $t3, $a1, $t2
    ctx->r11 = ADD32(ctx->r5, ctx->r10);
    // 0x80054F38: lb          $t4, 0xF($t3)
    ctx->r12 = MEM_B(ctx->r11, 0XF);
    // 0x80054F3C: nop

    // 0x80054F40: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x80054F44: sh          $t5, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r13;
    // 0x80054F48: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80054F4C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80054F50: swl         $at, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, ctx->r1);
    // 0x80054F54: jr          $ra
    // 0x80054F58: swr         $at, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r1);
    return;
    // 0x80054F58: swr         $at, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r1);
;}
RECOMP_FUNC void func_80054F5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054F5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80054F60: sltiu       $at, $a2, 0x7
    ctx->r1 = ctx->r6 < 0X7 ? 1 : 0;
    // 0x80054F64: beq         $at, $zero, L_80054FEC
    if (ctx->r1 == 0) {
        // 0x80054F68: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_80054FEC;
    }
    // 0x80054F68: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
L_80054F6C:
    // 0x80054F6C: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x80054F70: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80054F74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80054F78: lw          $t7, 0x110($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X110);
    // 0x80054F7C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80054F80: lw          $a1, 0x18($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X18);
    // 0x80054F84: nop

    // 0x80054F88: lh          $t8, 0x0($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X0);
    // 0x80054F8C: lh          $t0, 0x2($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X2);
    // 0x80054F90: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x80054F94: lh          $t2, 0x4($a1)
    ctx->r10 = MEM_H(ctx->r5, 0X4);
    // 0x80054F98: lh          $t4, 0x6($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X6);
    // 0x80054F9C: lh          $t6, 0x8($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X8);
    // 0x80054FA0: lh          $t8, 0xA($a1)
    ctx->r24 = MEM_H(ctx->r5, 0XA);
    // 0x80054FA4: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x80054FA8: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x80054FAC: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
    // 0x80054FB0: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x80054FB4: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x80054FB8: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80054FBC: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x80054FC0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80054FC4: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80054FC8: sh          $t1, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r9;
    // 0x80054FCC: sh          $t3, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r11;
    // 0x80054FD0: sh          $t5, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r13;
    // 0x80054FD4: sh          $t7, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r15;
    // 0x80054FD8: sh          $t9, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r25;
    // 0x80054FDC: sltiu       $at, $a2, 0x7
    ctx->r1 = ctx->r6 < 0X7 ? 1 : 0;
    // 0x80054FE0: lw          $a0, 0x110($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X110);
    // 0x80054FE4: bne         $at, $zero, L_80054F6C
    if (ctx->r1 != 0) {
        // 0x80054FE8: nop
    
            goto L_80054F6C;
    }
    // 0x80054FE8: nop

L_80054FEC:
    // 0x80054FEC: jr          $ra
    // 0x80054FF0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80054FF0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x80054FF4: nop

    // 0x80054FF8: nop

    // 0x80054FFC: nop

;}
RECOMP_FUNC void func_80055000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80055000: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80055004: addiu       $t6, $t6, 0xA00
    ctx->r14 = ADD32(ctx->r14, 0XA00);
    // 0x80055008: ori         $at, $zero, 0xE49C
    ctx->r1 = 0 | 0XE49C;
    // 0x8005500C: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x80055010: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055014: sw          $zero, 0x14C($at)
    MEM_W(0X14C, ctx->r1) = 0;
    // 0x80055018: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005501C: sb          $zero, -0xDAC($at)
    MEM_B(-0XDAC, ctx->r1) = 0;
    // 0x80055020: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055024: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80055028: lbu         $t8, -0x118($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X118);
    // 0x8005502C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80055030: sb          $zero, 0x148($at)
    MEM_B(0X148, ctx->r1) = 0;
    // 0x80055034: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80055038: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005503C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80055040: beq         $t8, $at, L_800554D4
    if (ctx->r24 == ctx->r1) {
        // 0x80055044: sw          $t7, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r15;
            goto L_800554D4;
    }
    // 0x80055044: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80055048: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_8005504C:
    // 0x8005504C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80055050: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80055054: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80055058: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8005505C: sw          $zero, 0x8($t2)
    MEM_W(0X8, ctx->r10) = 0;
    // 0x80055060: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80055064: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80055068: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8005506C: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80055070: sw          $zero, 0x18($t6)
    MEM_W(0X18, ctx->r14) = 0;
    // 0x80055074: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80055078: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8005507C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80055080: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x80055084: sb          $t7, 0x1($t9)
    MEM_B(0X1, ctx->r25) = ctx->r15;
    // 0x80055088: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8005508C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80055090: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80055094: addu        $t3, $t1, $t4
    ctx->r11 = ADD32(ctx->r9, ctx->r12);
    // 0x80055098: sw          $zero, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = 0;
    // 0x8005509C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800550A0: nop

    // 0x800550A4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800550A8: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x800550AC: bne         $at, $zero, L_8005504C
    if (ctx->r1 != 0) {
        // 0x800550B0: sw          $t6, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r14;
            goto L_8005504C;
    }
    // 0x800550B0: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x800550B4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800550B8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800550BC: sw          $zero, 0x38($t8)
    MEM_W(0X38, ctx->r24) = 0;
    // 0x800550C0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800550C4: lbu         $t0, -0x10E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X10E0);
    // 0x800550C8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800550CC: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    // 0x800550D0: jal         0x8005102C
    // 0x800550D4: sb          $t0, 0x5($t7)
    MEM_B(0X5, ctx->r15) = ctx->r8;
    func_8005102C(rdram, ctx);
        goto after_0;
    // 0x800550D4: sb          $t0, 0x5($t7)
    MEM_B(0X5, ctx->r15) = ctx->r8;
    after_0:
    // 0x800550D8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800550DC: nop

    // 0x800550E0: sb          $v0, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r2;
    // 0x800550E4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800550E8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x800550EC: lbu         $t1, 0x5($t2)
    ctx->r9 = MEM_BU(ctx->r10, 0X5);
    // 0x800550F0: nop

    // 0x800550F4: blez        $t1, L_80055208
    if (SIGNED(ctx->r9) <= 0) {
        // 0x800550F8: nop
    
            goto L_80055208;
    }
    // 0x800550F8: nop

L_800550FC:
    // 0x800550FC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80055100: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80055104: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80055108: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8005510C: lw          $t5, -0x14D4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X14D4);
    // 0x80055110: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x80055114: lw          $t6, 0x6818($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X6818);
    // 0x80055118: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8005511C: divu        $zero, $t6, $at
    lo = S32(U32(ctx->r14) / U32(ctx->r1)); hi = S32(U32(ctx->r14) % U32(ctx->r1));
    // 0x80055120: addu        $t7, $t0, $t3
    ctx->r15 = ADD32(ctx->r8, ctx->r11);
    // 0x80055124: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80055128: mflo        $t8
    ctx->r24 = lo;
    // 0x8005512C: sw          $t8, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r24;
    // 0x80055130: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80055134: nop

    // 0x80055138: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x8005513C: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x80055140: lw          $a0, -0x14D4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14D4);
    // 0x80055144: jal         0x8005282C
    // 0x80055148: addiu       $a0, $a0, 0x681C
    ctx->r4 = ADD32(ctx->r4, 0X681C);
    func_8005282C(rdram, ctx);
        goto after_1;
    // 0x80055148: addiu       $a0, $a0, 0x681C
    ctx->r4 = ADD32(ctx->r4, 0X681C);
    after_1:
    // 0x8005514C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80055150: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80055154: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80055158: addu        $t6, $t1, $t5
    ctx->r14 = ADD32(ctx->r9, ctx->r13);
    // 0x8005515C: sw          $v0, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->r2;
    // 0x80055160: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80055164: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80055168: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x8005516C: addu        $t7, $t0, $t8
    ctx->r15 = ADD32(ctx->r8, ctx->r24);
    // 0x80055170: lw          $t9, 0x18($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X18);
    // 0x80055174: lw          $t2, 0x38($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X38);
    // 0x80055178: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005517C: addu        $t4, $t2, $t9
    ctx->r12 = ADD32(ctx->r10, ctx->r25);
    // 0x80055180: sw          $t4, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r12;
    // 0x80055184: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80055188: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8005518C: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x80055190: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80055194: lw          $t6, -0x14D4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X14D4);
    // 0x80055198: addu        $t7, $t8, $t5
    ctx->r15 = ADD32(ctx->r24, ctx->r13);
    // 0x8005519C: lw          $t3, 0x440($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X440);
    // 0x800551A0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800551A4: sw          $t3, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r11;
    // 0x800551A8: lbu         $t2, -0x1114($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X1114);
    // 0x800551AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800551B0: bne         $t2, $at, L_800551E4
    if (ctx->r10 != ctx->r1) {
        // 0x800551B4: nop
    
            goto L_800551E4;
    }
    // 0x800551B4: nop

    // 0x800551B8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800551BC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800551C0: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x800551C4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800551C8: lw          $t6, 0x8($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X8);
    // 0x800551CC: nop

    // 0x800551D0: sltiu       $at, $t6, 0xB3
    ctx->r1 = ctx->r14 < 0XB3 ? 1 : 0;
    // 0x800551D4: bne         $at, $zero, L_800551E4
    if (ctx->r1 != 0) {
        // 0x800551D8: nop
    
            goto L_800551E4;
    }
    // 0x800551D8: nop

    // 0x800551DC: addiu       $t8, $zero, 0xB4
    ctx->r24 = ADD32(0, 0XB4);
    // 0x800551E0: sw          $t8, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r24;
L_800551E4:
    // 0x800551E4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800551E8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800551EC: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x800551F0: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x800551F4: lbu         $t2, 0x5($t7)
    ctx->r10 = MEM_BU(ctx->r15, 0X5);
    // 0x800551F8: nop

    // 0x800551FC: slt         $at, $t3, $t2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80055200: bne         $at, $zero, L_800550FC
    if (ctx->r1 != 0) {
        // 0x80055204: nop
    
            goto L_800550FC;
    }
    // 0x80055204: nop

L_80055208:
    // 0x80055208: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8005520C: nop

    // 0x80055210: lbu         $t9, 0x0($t4)
    ctx->r25 = MEM_BU(ctx->r12, 0X0);
    // 0x80055214: nop

    // 0x80055218: bne         $t9, $zero, L_80055228
    if (ctx->r25 != 0) {
        // 0x8005521C: nop
    
            goto L_80055228;
    }
    // 0x8005521C: nop

    // 0x80055220: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80055224: sb          $t0, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r8;
L_80055228:
    // 0x80055228: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8005522C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80055230: lw          $t8, 0x38($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X38);
    // 0x80055234: lbu         $t1, 0x0($t6)
    ctx->r9 = MEM_BU(ctx->r14, 0X0);
    // 0x80055238: nop

    // 0x8005523C: divu        $zero, $t8, $t1
    lo = S32(U32(ctx->r24) / U32(ctx->r9)); hi = S32(U32(ctx->r24) % U32(ctx->r9));
    // 0x80055240: bne         $t1, $zero, L_8005524C
    if (ctx->r9 != 0) {
        // 0x80055244: nop
    
            goto L_8005524C;
    }
    // 0x80055244: nop

    // 0x80055248: break       7
    do_break(2147832392);
L_8005524C:
    // 0x8005524C: mflo        $t5
    ctx->r13 = lo;
    // 0x80055250: sw          $t5, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->r13;
    // 0x80055254: lh          $t7, -0x12C($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X12C);
    // 0x80055258: nop

    // 0x8005525C: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x80055260: bne         $at, $zero, L_800552D0
    if (ctx->r1 != 0) {
        // 0x80055264: nop
    
            goto L_800552D0;
    }
    // 0x80055264: nop

    // 0x80055268: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8005526C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80055270: lbu         $t2, 0x5($t3)
    ctx->r10 = MEM_BU(ctx->r11, 0X5);
    // 0x80055274: nop

    // 0x80055278: blez        $t2, L_800552DC
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8005527C: nop
    
            goto L_800552DC;
    }
    // 0x8005527C: nop

L_80055280:
    // 0x80055280: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80055284: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80055288: jal         0x80050E60
    // 0x8005528C: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    func_80050E60(rdram, ctx);
        goto after_2;
    // 0x8005528C: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    after_2:
    // 0x80055290: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80055294: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80055298: nop

    // 0x8005529C: addu        $t4, $t9, $t0
    ctx->r12 = ADD32(ctx->r25, ctx->r8);
    // 0x800552A0: sb          $v0, 0x1($t4)
    MEM_B(0X1, ctx->r12) = ctx->r2;
    // 0x800552A4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800552A8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800552AC: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x800552B0: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x800552B4: lbu         $t6, 0x5($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X5);
    // 0x800552B8: nop

    // 0x800552BC: slt         $at, $t1, $t6
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800552C0: bne         $at, $zero, L_80055280
    if (ctx->r1 != 0) {
        // 0x800552C4: nop
    
            goto L_80055280;
    }
    // 0x800552C4: nop

    // 0x800552C8: b           L_800552DC
    // 0x800552CC: nop

        goto L_800552DC;
    // 0x800552CC: nop

L_800552D0:
    // 0x800552D0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800552D4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800552D8: sb          $t7, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r15;
L_800552DC:
    // 0x800552DC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800552E0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x800552E4: lbu         $t9, 0x5($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X5);
    // 0x800552E8: nop

    // 0x800552EC: blez        $t9, L_800554C8
    if (SIGNED(ctx->r25) <= 0) {
        // 0x800552F0: nop
    
            goto L_800554C8;
    }
    // 0x800552F0: nop

L_800552F4:
    // 0x800552F4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800552F8: ori         $at, $zero, 0xE13C
    ctx->r1 = 0 | 0XE13C;
    // 0x800552FC: sll         $t4, $t0, 3
    ctx->r12 = S32(ctx->r8 << 3);
    // 0x80055300: subu        $t4, $t4, $t0
    ctx->r12 = SUB32(ctx->r12, ctx->r8);
    // 0x80055304: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80055308: subu        $t4, $t4, $t0
    ctx->r12 = SUB32(ctx->r12, ctx->r8);
    // 0x8005530C: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80055310: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x80055314: addiu       $t5, $t5, 0xA00
    ctx->r13 = ADD32(ctx->r13, 0XA00);
    // 0x80055318: addu        $t8, $t4, $at
    ctx->r24 = ADD32(ctx->r12, ctx->r1);
    // 0x8005531C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80055320: addiu       $a0, $a0, 0x2D80
    ctx->r4 = ADD32(ctx->r4, 0X2D80);
    // 0x80055324: jal         0x8007AA5C
    // 0x80055328: addu        $a1, $t8, $t5
    ctx->r5 = ADD32(ctx->r24, ctx->r13);
    func_8007AA5C(rdram, ctx);
        goto after_3;
    // 0x80055328: addu        $a1, $t8, $t5
    ctx->r5 = ADD32(ctx->r24, ctx->r13);
    after_3:
    // 0x8005532C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80055330: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80055334: nop

    // 0x80055338: beq         $t1, $zero, L_800554A4
    if (ctx->r9 == 0) {
        // 0x8005533C: nop
    
            goto L_800554A4;
    }
    // 0x8005533C: nop

    // 0x80055340: lw          $t6, 0xC($t1)
    ctx->r14 = MEM_W(ctx->r9, 0XC);
    // 0x80055344: nop

    // 0x80055348: beq         $t6, $zero, L_80055490
    if (ctx->r14 == 0) {
        // 0x8005534C: nop
    
            goto L_80055490;
    }
    // 0x8005534C: nop

    // 0x80055350: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80055354: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80055358: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x8005535C: addu        $t9, $t7, $t2
    ctx->r25 = ADD32(ctx->r15, ctx->r10);
    // 0x80055360: sw          $t6, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r14;
    // 0x80055364: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80055368: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x8005536C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80055370: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    // 0x80055374: jal         0x8007875C
    // 0x80055378: nop

    func_8007875C(rdram, ctx);
        goto after_4;
    // 0x80055378: nop

    after_4:
    // 0x8005537C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80055380: nop

    // 0x80055384: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x80055388: jal         0x8007B420
    // 0x8005538C: nop

    func_8007B420(rdram, ctx);
        goto after_5;
    // 0x8005538C: nop

    after_5:
    // 0x80055390: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80055394: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80055398: lbu         $s0, 0xB($t8)
    ctx->r16 = MEM_BU(ctx->r24, 0XB);
    // 0x8005539C: nop

    // 0x800553A0: andi        $t5, $s0, 0xF
    ctx->r13 = ctx->r16 & 0XF;
    // 0x800553A4: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x800553A8: beq         $s0, $at, L_8005546C
    if (ctx->r16 == ctx->r1) {
        // 0x800553AC: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_8005546C;
    }
    // 0x800553AC: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x800553B0: bne         $s0, $at, L_800554A4
    if (ctx->r16 != ctx->r1) {
        // 0x800553B4: nop
    
            goto L_800554A4;
    }
    // 0x800553B4: nop

    // 0x800553B8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_800553BC:
    // 0x800553BC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800553C0: lw          $t2, -0x310($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X310);
    // 0x800553C4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800553C8: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x800553CC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800553D0: sllv        $t7, $t3, $t1
    ctx->r15 = S32(ctx->r11 << (ctx->r9 & 31));
    // 0x800553D4: and         $t9, $t7, $t6
    ctx->r25 = ctx->r15 & ctx->r14;
    // 0x800553D8: beq         $t9, $zero, L_8005543C
    if (ctx->r25 == 0) {
        // 0x800553DC: nop
    
            goto L_8005543C;
    }
    // 0x800553DC: nop

    // 0x800553E0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800553E4: sll         $t0, $t1, 4
    ctx->r8 = S32(ctx->r9 << 4);
    // 0x800553E8: lw          $t8, 0xC($t4)
    ctx->r24 = MEM_W(ctx->r12, 0XC);
    // 0x800553EC: subu        $t0, $t0, $t1
    ctx->r8 = SUB32(ctx->r8, ctx->r9);
    // 0x800553F0: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x800553F4: addu        $a0, $t2, $t0
    ctx->r4 = ADD32(ctx->r10, ctx->r8);
    // 0x800553F8: lbu         $a1, 0x9($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X9);
    // 0x800553FC: lbu         $a2, 0xA($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0XA);
    // 0x80055400: jal         0x8007AADC
    // 0x80055404: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_8007AADC(rdram, ctx);
        goto after_6;
    // 0x80055404: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_6:
    // 0x80055408: beq         $v0, $zero, L_8005543C
    if (ctx->r2 == 0) {
        // 0x8005540C: nop
    
            goto L_8005543C;
    }
    // 0x8005540C: nop

    // 0x80055410: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80055414: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80055418: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8005541C: sll         $t3, $a2, 4
    ctx->r11 = S32(ctx->r6 << 4);
    // 0x80055420: lw          $a1, -0x310($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X310);
    // 0x80055424: subu        $t3, $t3, $a2
    ctx->r11 = SUB32(ctx->r11, ctx->r6);
    // 0x80055428: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8005542C: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    // 0x80055430: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80055434: jal         0x8007AF88
    // 0x80055438: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_8007AF88(rdram, ctx);
        goto after_7;
    // 0x80055438: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_7:
L_8005543C:
    // 0x8005543C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80055440: nop

    // 0x80055444: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x80055448: slti        $at, $t6, 0x20
    ctx->r1 = SIGNED(ctx->r14) < 0X20 ? 1 : 0;
    // 0x8005544C: bne         $at, $zero, L_800553BC
    if (ctx->r1 != 0) {
        // 0x80055450: sw          $t6, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r14;
            goto L_800553BC;
    }
    // 0x80055450: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80055454: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80055458: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x8005545C: jal         0x8007C5CC
    // 0x80055460: nop

    func_8007C5CC(rdram, ctx);
        goto after_8;
    // 0x80055460: nop

    after_8:
    // 0x80055464: b           L_800554A4
    // 0x80055468: nop

        goto L_800554A4;
    // 0x80055468: nop

L_8005546C:
    // 0x8005546C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80055470: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80055474: lbu         $t9, -0xDAC($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0XDAC);
    // 0x80055478: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8005547C: sllv        $t0, $t2, $t1
    ctx->r8 = S32(ctx->r10 << (ctx->r9 & 31));
    // 0x80055480: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80055484: or          $t4, $t9, $t0
    ctx->r12 = ctx->r25 | ctx->r8;
    // 0x80055488: b           L_800554A4
    // 0x8005548C: sb          $t4, -0xDAC($at)
    MEM_B(-0XDAC, ctx->r1) = ctx->r12;
        goto L_800554A4;
    // 0x8005548C: sb          $t4, -0xDAC($at)
    MEM_B(-0XDAC, ctx->r1) = ctx->r12;
L_80055490:
    // 0x80055490: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80055494: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80055498: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x8005549C: addu        $t7, $t8, $t3
    ctx->r15 = ADD32(ctx->r24, ctx->r11);
    // 0x800554A0: sw          $zero, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = 0;
L_800554A4:
    // 0x800554A4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800554A8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800554AC: addiu       $t2, $t6, 0x1
    ctx->r10 = ADD32(ctx->r14, 0X1);
    // 0x800554B0: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x800554B4: lbu         $t9, 0x5($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X5);
    // 0x800554B8: nop

    // 0x800554BC: slt         $at, $t2, $t9
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800554C0: bne         $at, $zero, L_800552F4
    if (ctx->r1 != 0) {
        // 0x800554C4: nop
    
            goto L_800552F4;
    }
    // 0x800554C4: nop

L_800554C8:
    // 0x800554C8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800554CC: b           L_800554F0
    // 0x800554D0: sw          $zero, 0x144($at)
    MEM_W(0X144, ctx->r1) = 0;
        goto L_800554F0;
    // 0x800554D0: sw          $zero, 0x144($at)
    MEM_W(0X144, ctx->r1) = 0;
L_800554D4:
    // 0x800554D4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800554D8: lbu         $t0, -0x10E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X10E0);
    // 0x800554DC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800554E0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800554E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800554E8: sb          $t0, 0x5($t4)
    MEM_B(0X5, ctx->r12) = ctx->r8;
    // 0x800554EC: sw          $t5, 0x144($at)
    MEM_W(0X144, ctx->r1) = ctx->r13;
L_800554F0:
    // 0x800554F0: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x800554F4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800554F8: sb          $t8, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r24;
    // 0x800554FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055500: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80055504: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80055508: sb          $t3, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r11;
    // 0x8005550C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055510: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80055514: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80055518: sw          $t7, 0x140($at)
    MEM_W(0X140, ctx->r1) = ctx->r15;
    // 0x8005551C: jr          $ra
    // 0x80055520: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80055520: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80055524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80055524: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80055528: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8005552C: jal         0x8004A34C
    // 0x80055530: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x80055530: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x80055534: jal         0x80084F80
    // 0x80055538: nop

    func_80084F80(rdram, ctx);
        goto after_1;
    // 0x80055538: nop

    after_1:
    // 0x8005553C: jal         0x80052570
    // 0x80055540: nop

    func_80052570(rdram, ctx);
        goto after_2;
    // 0x80055540: nop

    after_2:
    // 0x80055544: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80055548: jal         0x80085030
    // 0x8005554C: addiu       $a0, $a0, 0x3988
    ctx->r4 = ADD32(ctx->r4, 0X3988);
    func_80085030(rdram, ctx);
        goto after_3;
    // 0x8005554C: addiu       $a0, $a0, 0x3988
    ctx->r4 = ADD32(ctx->r4, 0X3988);
    after_3:
    // 0x80055550: lui         $a0, 0x3
    ctx->r4 = S32(0X3 << 16);
    // 0x80055554: jal         0x8007E03C
    // 0x80055558: ori         $a0, $a0, 0xA988
    ctx->r4 = ctx->r4 | 0XA988;
    func_8007E03C(rdram, ctx);
        goto after_4;
    // 0x80055558: ori         $a0, $a0, 0xA988
    ctx->r4 = ctx->r4 | 0XA988;
    after_4:
    // 0x8005555C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80055560: sw          $v0, -0xDB0($at)
    MEM_W(-0XDB0, ctx->r1) = ctx->r2;
    // 0x80055564: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80055568: lw          $t7, -0xDB0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0XDB0);
    // 0x8005556C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80055570: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80055574: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x80055578: lw          $t9, -0xDB0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XDB0);
    // 0x8005557C: addiu       $t8, $zero, 0x90
    ctx->r24 = ADD32(0, 0X90);
    // 0x80055580: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80055584: sb          $t8, 0x1($t9)
    MEM_B(0X1, ctx->r25) = ctx->r24;
    // 0x80055588: lw          $t1, -0xDB0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0XDB0);
    // 0x8005558C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80055590: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80055594: sb          $t0, 0x2($t1)
    MEM_B(0X2, ctx->r9) = ctx->r8;
    // 0x80055598: lw          $t3, -0xDB0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0XDB0);
    // 0x8005559C: addiu       $t2, $zero, 0x2C
    ctx->r10 = ADD32(0, 0X2C);
    // 0x800555A0: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800555A4: sb          $t2, 0x3($t3)
    MEM_B(0X3, ctx->r11) = ctx->r10;
    // 0x800555A8: lw          $t4, -0xDB0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0XDB0);
    // 0x800555AC: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800555B0: sb          $zero, 0x4($t4)
    MEM_B(0X4, ctx->r12) = 0;
    // 0x800555B4: lw          $t5, -0xDB0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0XDB0);
    // 0x800555B8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800555BC: sb          $zero, 0x5($t5)
    MEM_B(0X5, ctx->r13) = 0;
    // 0x800555C0: lw          $t6, -0xDB0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XDB0);
    // 0x800555C4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800555C8: sb          $zero, 0x6($t6)
    MEM_B(0X6, ctx->r14) = 0;
    // 0x800555CC: lw          $t7, -0xDB0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0XDB0);
    // 0x800555D0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800555D4: sb          $zero, 0x7($t7)
    MEM_B(0X7, ctx->r15) = 0;
    // 0x800555D8: lw          $a0, -0xDB0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XDB0);
    // 0x800555DC: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x800555E0: ori         $a1, $a1, 0xD4C4
    ctx->r5 = ctx->r5 | 0XD4C4;
    // 0x800555E4: jal         0x800A8FC8
    // 0x800555E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800A8FC8(rdram, ctx);
        goto after_5;
    // 0x800555E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x800555EC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800555F0: lw          $t8, -0xDB0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0XDB0);
    // 0x800555F4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800555F8: addiu       $a0, $a0, -0x6F30
    ctx->r4 = ADD32(ctx->r4, -0X6F30);
    // 0x800555FC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80055600: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    // 0x80055604: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x80055608: jal         0x8008F280
    // 0x8005560C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8008F280(rdram, ctx);
        goto after_6;
    // 0x8005560C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_6:
    // 0x80055610: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80055614: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80055618: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x8005561C: addiu       $a2, $a2, 0x5FE8
    ctx->r6 = ADD32(ctx->r6, 0X5FE8);
    // 0x80055620: addiu       $a1, $a1, 0x6010
    ctx->r5 = ADD32(ctx->r5, 0X6010);
    // 0x80055624: jal         0x8008F360
    // 0x80055628: addiu       $a0, $a0, -0x6F30
    ctx->r4 = ADD32(ctx->r4, -0X6F30);
    func_8008F360(rdram, ctx);
        goto after_7;
    // 0x80055628: addiu       $a0, $a0, -0x6F30
    ctx->r4 = ADD32(ctx->r4, -0X6F30);
    after_7:
    // 0x8005562C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055630: sw          $zero, 0x3CF4($at)
    MEM_W(0X3CF4, ctx->r1) = 0;
    // 0x80055634: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055638: sw          $zero, 0x3CF8($at)
    MEM_W(0X3CF8, ctx->r1) = 0;
    // 0x8005563C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055640: sw          $zero, 0x3CFC($at)
    MEM_W(0X3CFC, ctx->r1) = 0;
    // 0x80055644: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80055648: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8005564C: sw          $zero, -0x6E1C($at)
    MEM_W(-0X6E1C, ctx->r1) = 0;
    // 0x80055650: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x80055654: jal         0x80074888
    // 0x80055658: addiu       $a1, $zero, 0x55
    ctx->r5 = ADD32(0, 0X55);
    func_80074888(rdram, ctx);
        goto after_8;
    // 0x80055658: addiu       $a1, $zero, 0x55
    ctx->r5 = ADD32(0, 0X55);
    after_8:
    // 0x8005565C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80055660: jal         0x8007E03C
    // 0x80055664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_9;
    // 0x80055664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80055668: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005566C: sw          $v0, -0xDC0($at)
    MEM_W(-0XDC0, ctx->r1) = ctx->r2;
    // 0x80055670: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80055674: lw          $a1, -0xDC0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XDC0);
    // 0x80055678: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8005567C: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x80055680: jal         0x800746C0
    // 0x80055684: addiu       $a2, $zero, 0x55
    ctx->r6 = ADD32(0, 0X55);
    func_800746C0(rdram, ctx);
        goto after_10;
    // 0x80055684: addiu       $a2, $zero, 0x55
    ctx->r6 = ADD32(0, 0X55);
    after_10:
    // 0x80055688: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8005568C: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x80055690: jal         0x80074888
    // 0x80055694: addiu       $a1, $zero, 0x9C
    ctx->r5 = ADD32(0, 0X9C);
    func_80074888(rdram, ctx);
        goto after_11;
    // 0x80055694: addiu       $a1, $zero, 0x9C
    ctx->r5 = ADD32(0, 0X9C);
    after_11:
    // 0x80055698: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8005569C: jal         0x8007E03C
    // 0x800556A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_12;
    // 0x800556A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x800556A4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800556A8: sw          $v0, -0xDA8($at)
    MEM_W(-0XDA8, ctx->r1) = ctx->r2;
    // 0x800556AC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800556B0: lw          $a1, -0xDA8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XDA8);
    // 0x800556B4: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x800556B8: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x800556BC: jal         0x800746C0
    // 0x800556C0: addiu       $a2, $zero, 0x9C
    ctx->r6 = ADD32(0, 0X9C);
    func_800746C0(rdram, ctx);
        goto after_13;
    // 0x800556C0: addiu       $a2, $zero, 0x9C
    ctx->r6 = ADD32(0, 0X9C);
    after_13:
    // 0x800556C4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800556C8: addiu       $a0, $a0, -0x7150
    ctx->r4 = ADD32(ctx->r4, -0X7150);
    // 0x800556CC: jal         0x80077408
    // 0x800556D0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_80077408(rdram, ctx);
        goto after_14;
    // 0x800556D0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_14:
    // 0x800556D4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800556D8: addiu       $a0, $a0, -0x70D8
    ctx->r4 = ADD32(ctx->r4, -0X70D8);
    // 0x800556DC: jal         0x80077408
    // 0x800556E0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80077408(rdram, ctx);
        goto after_15;
    // 0x800556E0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_15:
    // 0x800556E4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800556E8: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    // 0x800556EC: jal         0x80077408
    // 0x800556F0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80077408(rdram, ctx);
        goto after_16;
    // 0x800556F0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_16:
    // 0x800556F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800556F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800556FC: jr          $ra
    // 0x80055700: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80055700: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80055704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80055704: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80055708: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005570C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80055710: lw          $a0, -0xDA8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XDA8);
    // 0x80055714: jal         0x8007E328
    // 0x80055718: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x80055718: nop

    after_0:
    // 0x8005571C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80055720: lw          $a0, -0xDC0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XDC0);
    // 0x80055724: jal         0x8007E328
    // 0x80055728: nop

    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x80055728: nop

    after_1:
    // 0x8005572C: jal         0x80090A44
    // 0x80055730: nop

    func_80090A44(rdram, ctx);
        goto after_2;
    // 0x80055730: nop

    after_2:
    // 0x80055734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80055738: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8005573C: jr          $ra
    // 0x80055740: nop

    return;
    // 0x80055740: nop

;}
RECOMP_FUNC void func_80055744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80055744: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80055748: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x8005574C: addiu       $t6, $t6, 0xA00
    ctx->r14 = ADD32(ctx->r14, 0XA00);
    // 0x80055750: ori         $at, $zero, 0xE49C
    ctx->r1 = 0 | 0XE49C;
    // 0x80055754: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x80055758: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8005575C: lw          $t9, 0x144($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X144);
    // 0x80055760: ori         $at, $zero, 0xE13C
    ctx->r1 = 0 | 0XE13C;
    // 0x80055764: addu        $t8, $t6, $at
    ctx->r24 = ADD32(ctx->r14, ctx->r1);
    // 0x80055768: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8005576C: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80055770: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x80055774: sw          $t7, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r15;
    // 0x80055778: beq         $t9, $zero, L_80055838
    if (ctx->r25 == 0) {
        // 0x8005577C: sw          $t8, 0xF8($sp)
        MEM_W(0XF8, ctx->r29) = ctx->r24;
            goto L_80055838;
    }
    // 0x8005577C: sw          $t8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r24;
    // 0x80055780: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80055784: lw          $t0, 0x140($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X140);
    // 0x80055788: nop

    // 0x8005578C: beq         $t0, $zero, L_80055838
    if (ctx->r8 == 0) {
        // 0x80055790: nop
    
            goto L_80055838;
    }
    // 0x80055790: nop

    // 0x80055794: jal         0x8004A34C
    // 0x80055798: nop

    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x80055798: nop

    after_0:
    // 0x8005579C: jal         0x80052570
    // 0x800557A0: nop

    func_80052570(rdram, ctx);
        goto after_1;
    // 0x800557A0: nop

    after_1:
    // 0x800557A4: lw          $t1, 0xFC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XFC);
    // 0x800557A8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800557AC: sw          $zero, 0x14C($at)
    MEM_W(0X14C, ctx->r1) = 0;
    // 0x800557B0: lbu         $t2, 0x5($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X5);
    // 0x800557B4: nop

    // 0x800557B8: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x800557BC: bne         $at, $zero, L_800557F8
    if (ctx->r1 != 0) {
        // 0x800557C0: nop
    
            goto L_800557F8;
    }
    // 0x800557C0: nop

    // 0x800557C4: lw          $t3, 0xF8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF8);
    // 0x800557C8: nop

    // 0x800557CC: lbu         $t4, 0x1A8($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1A8);
    // 0x800557D0: nop

    // 0x800557D4: bne         $t4, $zero, L_800557F8
    if (ctx->r12 != 0) {
        // 0x800557D8: nop
    
            goto L_800557F8;
    }
    // 0x800557D8: nop

    // 0x800557DC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800557E0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800557E4: addiu       $a1, $a1, 0x5CE8
    ctx->r5 = ADD32(ctx->r5, 0X5CE8);
    // 0x800557E8: jal         0x8009035C
    // 0x800557EC: addiu       $a0, $a0, 0x5D48
    ctx->r4 = ADD32(ctx->r4, 0X5D48);
    func_8009035C(rdram, ctx);
        goto after_2;
    // 0x800557EC: addiu       $a0, $a0, 0x5D48
    ctx->r4 = ADD32(ctx->r4, 0X5D48);
    after_2:
    // 0x800557F0: b           L_8005580C
    // 0x800557F4: nop

        goto L_8005580C;
    // 0x800557F4: nop

L_800557F8:
    // 0x800557F8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800557FC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80055800: addiu       $a1, $a1, 0x5808
    ctx->r5 = ADD32(ctx->r5, 0X5808);
    // 0x80055804: jal         0x8009035C
    // 0x80055808: addiu       $a0, $a0, 0x5850
    ctx->r4 = ADD32(ctx->r4, 0X5850);
    func_8009035C(rdram, ctx);
        goto after_3;
    // 0x80055808: addiu       $a0, $a0, 0x5850
    ctx->r4 = ADD32(ctx->r4, 0X5850);
    after_3:
L_8005580C:
    // 0x8005580C: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80055810: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055814: sb          $t5, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r13;
    // 0x80055818: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005581C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80055820: sb          $t7, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r15;
    // 0x80055824: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055828: sw          $zero, 0x140($at)
    MEM_W(0X140, ctx->r1) = 0;
    // 0x8005582C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055830: b           L_80057068
    // 0x80055834: sb          $zero, 0x154($at)
    MEM_B(0X154, ctx->r1) = 0;
        goto L_80057068;
    // 0x80055834: sb          $zero, 0x154($at)
    MEM_B(0X154, ctx->r1) = 0;
L_80055838:
    // 0x80055838: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8005583C: lw          $t6, 0x140($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X140);
    // 0x80055840: nop

    // 0x80055844: beq         $t6, $zero, L_8005588C
    if (ctx->r14 == 0) {
        // 0x80055848: nop
    
            goto L_8005588C;
    }
    // 0x80055848: nop

    // 0x8005584C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80055850: lw          $t8, 0x144($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X144);
    // 0x80055854: nop

    // 0x80055858: bne         $t8, $zero, L_8005588C
    if (ctx->r24 != 0) {
        // 0x8005585C: nop
    
            goto L_8005588C;
    }
    // 0x8005585C: nop

    // 0x80055860: jal         0x8004A34C
    // 0x80055864: nop

    func_8004A34C(rdram, ctx);
        goto after_4;
    // 0x80055864: nop

    after_4:
    // 0x80055868: jal         0x80055524
    // 0x8005586C: nop

    func_80055524(rdram, ctx);
        goto after_5;
    // 0x8005586C: nop

    after_5:
    // 0x80055870: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055874: sw          $zero, 0x140($at)
    MEM_W(0X140, ctx->r1) = 0;
    // 0x80055878: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005587C: sw          $zero, 0x150($at)
    MEM_W(0X150, ctx->r1) = 0;
    // 0x80055880: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055884: b           L_80057068
    // 0x80055888: sb          $zero, 0x154($at)
    MEM_B(0X154, ctx->r1) = 0;
        goto L_80057068;
    // 0x80055888: sb          $zero, 0x154($at)
    MEM_B(0X154, ctx->r1) = 0;
L_8005588C:
    // 0x8005588C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80055890: lw          $t9, 0x150($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X150);
    // 0x80055894: nop

    // 0x80055898: slti        $at, $t9, 0x78
    ctx->r1 = SIGNED(ctx->r25) < 0X78 ? 1 : 0;
    // 0x8005589C: beq         $at, $zero, L_8005594C
    if (ctx->r1 == 0) {
        // 0x800558A0: nop
    
            goto L_8005594C;
    }
    // 0x800558A0: nop

    // 0x800558A4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800558A8: addiu       $t0, $t0, -0x10D0
    ctx->r8 = ADD32(ctx->r8, -0X10D0);
    // 0x800558AC: lw          $t1, 0x24($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X24);
    // 0x800558B0: nop

    // 0x800558B4: andi        $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 & 0X8000;
    // 0x800558B8: beq         $t2, $zero, L_8005594C
    if (ctx->r10 == 0) {
        // 0x800558BC: slti        $at, $t9, 0x1E
        ctx->r1 = SIGNED(ctx->r25) < 0X1E ? 1 : 0;
            goto L_8005594C;
    }
    // 0x800558BC: slti        $at, $t9, 0x1E
    ctx->r1 = SIGNED(ctx->r25) < 0X1E ? 1 : 0;
    // 0x800558C0: beq         $at, $zero, L_800558D8
    if (ctx->r1 == 0) {
        // 0x800558C4: nop
    
            goto L_800558D8;
    }
    // 0x800558C4: nop

    // 0x800558C8: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x800558CC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800558D0: b           L_8005594C
    // 0x800558D4: sw          $t3, 0x150($at)
    MEM_W(0X150, ctx->r1) = ctx->r11;
        goto L_8005594C;
    // 0x800558D4: sw          $t3, 0x150($at)
    MEM_W(0X150, ctx->r1) = ctx->r11;
L_800558D8:
    // 0x800558D8: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x800558DC: lw          $t4, 0x150($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X150);
    // 0x800558E0: nop

    // 0x800558E4: slti        $at, $t4, 0x3C
    ctx->r1 = SIGNED(ctx->r12) < 0X3C ? 1 : 0;
    // 0x800558E8: beq         $at, $zero, L_80055900
    if (ctx->r1 == 0) {
        // 0x800558EC: nop
    
            goto L_80055900;
    }
    // 0x800558EC: nop

    // 0x800558F0: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x800558F4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800558F8: b           L_8005594C
    // 0x800558FC: sw          $t5, 0x150($at)
    MEM_W(0X150, ctx->r1) = ctx->r13;
        goto L_8005594C;
    // 0x800558FC: sw          $t5, 0x150($at)
    MEM_W(0X150, ctx->r1) = ctx->r13;
L_80055900:
    // 0x80055900: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80055904: lw          $t7, 0x150($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X150);
    // 0x80055908: nop

    // 0x8005590C: slti        $at, $t7, 0x5A
    ctx->r1 = SIGNED(ctx->r15) < 0X5A ? 1 : 0;
    // 0x80055910: beq         $at, $zero, L_80055928
    if (ctx->r1 == 0) {
        // 0x80055914: nop
    
            goto L_80055928;
    }
    // 0x80055914: nop

    // 0x80055918: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x8005591C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055920: b           L_8005594C
    // 0x80055924: sw          $t6, 0x150($at)
    MEM_W(0X150, ctx->r1) = ctx->r14;
        goto L_8005594C;
    // 0x80055924: sw          $t6, 0x150($at)
    MEM_W(0X150, ctx->r1) = ctx->r14;
L_80055928:
    // 0x80055928: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8005592C: lw          $t8, 0x150($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X150);
    // 0x80055930: nop

    // 0x80055934: slti        $at, $t8, 0x78
    ctx->r1 = SIGNED(ctx->r24) < 0X78 ? 1 : 0;
    // 0x80055938: beq         $at, $zero, L_8005594C
    if (ctx->r1 == 0) {
        // 0x8005593C: nop
    
            goto L_8005594C;
    }
    // 0x8005593C: nop

    // 0x80055940: addiu       $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
    // 0x80055944: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055948: sw          $t0, 0x150($at)
    MEM_W(0X150, ctx->r1) = ctx->r8;
L_8005594C:
    // 0x8005594C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80055950: lbu         $t1, -0xDAC($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0XDAC);
    // 0x80055954: nop

    // 0x80055958: bne         $t1, $zero, L_80055974
    if (ctx->r9 != 0) {
        // 0x8005595C: nop
    
            goto L_80055974;
    }
    // 0x8005595C: nop

    // 0x80055960: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80055964: lw          $t2, 0x14C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X14C);
    // 0x80055968: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005596C: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x80055970: sw          $t9, 0x14C($at)
    MEM_W(0X14C, ctx->r1) = ctx->r25;
L_80055974:
    // 0x80055974: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80055978: lw          $t3, 0x14C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X14C);
    // 0x8005597C: nop

    // 0x80055980: slti        $at, $t3, 0xBB8
    ctx->r1 = SIGNED(ctx->r11) < 0XBB8 ? 1 : 0;
    // 0x80055984: beq         $at, $zero, L_800559C0
    if (ctx->r1 == 0) {
        // 0x80055988: nop
    
            goto L_800559C0;
    }
    // 0x80055988: nop

    // 0x8005598C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80055990: addiu       $t4, $t4, -0x10D0
    ctx->r12 = ADD32(ctx->r12, -0X10D0);
    // 0x80055994: lw          $t5, 0x24($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X24);
    // 0x80055998: nop

    // 0x8005599C: andi        $t7, $t5, 0x8000
    ctx->r15 = ctx->r13 & 0X8000;
    // 0x800559A0: beq         $t7, $zero, L_80055B9C
    if (ctx->r15 == 0) {
        // 0x800559A4: nop
    
            goto L_80055B9C;
    }
    // 0x800559A4: nop

    // 0x800559A8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800559AC: lw          $t6, 0x150($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X150);
    // 0x800559B0: nop

    // 0x800559B4: slti        $at, $t6, 0x79
    ctx->r1 = SIGNED(ctx->r14) < 0X79 ? 1 : 0;
    // 0x800559B8: bne         $at, $zero, L_80055B9C
    if (ctx->r1 != 0) {
        // 0x800559BC: nop
    
            goto L_80055B9C;
    }
    // 0x800559BC: nop

L_800559C0:
    // 0x800559C0: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800559C4: lbu         $t0, 0x158($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X158);
    // 0x800559C8: addiu       $t8, $zero, 0xBB8
    ctx->r24 = ADD32(0, 0XBB8);
    // 0x800559CC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800559D0: sw          $t8, 0x14C($at)
    MEM_W(0X14C, ctx->r1) = ctx->r24;
    // 0x800559D4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800559D8: sltiu       $s0, $t0, 0x1
    ctx->r16 = ctx->r8 < 0X1 ? 1 : 0;
    // 0x800559DC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800559E0: beq         $s0, $zero, L_80055B2C
    if (ctx->r16 == 0) {
        // 0x800559E4: sb          $t1, 0x158($at)
        MEM_B(0X158, ctx->r1) = ctx->r9;
            goto L_80055B2C;
    }
    // 0x800559E4: sb          $t1, 0x158($at)
    MEM_B(0X158, ctx->r1) = ctx->r9;
    // 0x800559E8: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800559EC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800559F0: jal         0x80055704
    // 0x800559F4: sb          $t2, 0x158($at)
    MEM_B(0X158, ctx->r1) = ctx->r10;
    func_80055704(rdram, ctx);
        goto after_6;
    // 0x800559F4: sb          $t2, 0x158($at)
    MEM_B(0X158, ctx->r1) = ctx->r10;
    after_6:
    // 0x800559F8: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x800559FC: nop

    // 0x80055A00: lbu         $t3, 0x0($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X0);
    // 0x80055A04: nop

    // 0x80055A08: beq         $t3, $zero, L_80055AAC
    if (ctx->r11 == 0) {
        // 0x80055A0C: nop
    
            goto L_80055AAC;
    }
    // 0x80055A0C: nop

    // 0x80055A10: jal         0x80045FDC
    // 0x80055A14: nop

    func_80045FDC(rdram, ctx);
        goto after_7;
    // 0x80055A14: nop

    after_7:
    // 0x80055A18: beq         $v0, $zero, L_80055AAC
    if (ctx->r2 == 0) {
        // 0x80055A1C: nop
    
            goto L_80055AAC;
    }
    // 0x80055A1C: nop

    // 0x80055A20: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x80055A24: lb          $t4, -0x7C8($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X7C8);
    // 0x80055A28: lw          $t5, 0xFC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XFC);
    // 0x80055A2C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80055A30: sb          $t4, -0x1108($at)
    MEM_B(-0X1108, ctx->r1) = ctx->r12;
    // 0x80055A34: lbu         $t7, 0x5($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X5);
    // 0x80055A38: nop

    // 0x80055A3C: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x80055A40: bne         $at, $zero, L_80055A70
    if (ctx->r1 != 0) {
        // 0x80055A44: nop
    
            goto L_80055A70;
    }
    // 0x80055A44: nop

    // 0x80055A48: lw          $t6, 0xF8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF8);
    // 0x80055A4C: nop

    // 0x80055A50: lbu         $t8, 0x1A8($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X1A8);
    // 0x80055A54: nop

    // 0x80055A58: bne         $t8, $zero, L_80055A70
    if (ctx->r24 != 0) {
        // 0x80055A5C: nop
    
            goto L_80055A70;
    }
    // 0x80055A5C: nop

    // 0x80055A60: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80055A64: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80055A68: b           L_80055A7C
    // 0x80055A6C: sb          $t0, 0x9F0($at)
    MEM_B(0X9F0, ctx->r1) = ctx->r8;
        goto L_80055A7C;
    // 0x80055A6C: sb          $t0, 0x9F0($at)
    MEM_B(0X9F0, ctx->r1) = ctx->r8;
L_80055A70:
    // 0x80055A70: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x80055A74: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80055A78: sb          $t1, 0x9F0($at)
    MEM_B(0X9F0, ctx->r1) = ctx->r9;
L_80055A7C:
    // 0x80055A7C: jal         0x8004A34C
    // 0x80055A80: nop

    func_8004A34C(rdram, ctx);
        goto after_8;
    // 0x80055A80: nop

    after_8:
    // 0x80055A84: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055A88: sb          $zero, 0x3CF0($at)
    MEM_B(0X3CF0, ctx->r1) = 0;
    // 0x80055A8C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80055A90: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055A94: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x80055A98: lb          $a0, -0x7D0($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X7D0);
    // 0x80055A9C: jal         0x80045BDC
    // 0x80055AA0: sb          $t2, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r10;
    func_80045BDC(rdram, ctx);
        goto after_9;
    // 0x80055AA0: sb          $t2, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r10;
    after_9:
    // 0x80055AA4: b           L_80057068
    // 0x80055AA8: nop

        goto L_80057068;
    // 0x80055AA8: nop

L_80055AAC:
    // 0x80055AAC: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x80055AB0: nop

    // 0x80055AB4: lbu         $t3, 0x5($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X5);
    // 0x80055AB8: nop

    // 0x80055ABC: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x80055AC0: bne         $at, $zero, L_80055AFC
    if (ctx->r1 != 0) {
        // 0x80055AC4: nop
    
            goto L_80055AFC;
    }
    // 0x80055AC4: nop

    // 0x80055AC8: lw          $t4, 0xF8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XF8);
    // 0x80055ACC: nop

    // 0x80055AD0: lbu         $t5, 0x1A8($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X1A8);
    // 0x80055AD4: nop

    // 0x80055AD8: bne         $t5, $zero, L_80055AFC
    if (ctx->r13 != 0) {
        // 0x80055ADC: nop
    
            goto L_80055AFC;
    }
    // 0x80055ADC: nop

    // 0x80055AE0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80055AE4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80055AE8: addiu       $a1, $a1, 0x5CE8
    ctx->r5 = ADD32(ctx->r5, 0X5CE8);
    // 0x80055AEC: jal         0x8009035C
    // 0x80055AF0: addiu       $a0, $a0, 0x5D48
    ctx->r4 = ADD32(ctx->r4, 0X5D48);
    func_8009035C(rdram, ctx);
        goto after_10;
    // 0x80055AF0: addiu       $a0, $a0, 0x5D48
    ctx->r4 = ADD32(ctx->r4, 0X5D48);
    after_10:
    // 0x80055AF4: b           L_80055B10
    // 0x80055AF8: nop

        goto L_80055B10;
    // 0x80055AF8: nop

L_80055AFC:
    // 0x80055AFC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80055B00: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80055B04: addiu       $a1, $a1, 0x5808
    ctx->r5 = ADD32(ctx->r5, 0X5808);
    // 0x80055B08: jal         0x8009035C
    // 0x80055B0C: addiu       $a0, $a0, 0x5850
    ctx->r4 = ADD32(ctx->r4, 0X5850);
    func_8009035C(rdram, ctx);
        goto after_11;
    // 0x80055B0C: addiu       $a0, $a0, 0x5850
    ctx->r4 = ADD32(ctx->r4, 0X5850);
    after_11:
L_80055B10:
    // 0x80055B10: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80055B14: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055B18: sb          $t7, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r15;
    // 0x80055B1C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055B20: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80055B24: b           L_80057068
    // 0x80055B28: sb          $t6, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r14;
        goto L_80057068;
    // 0x80055B28: sb          $t6, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r14;
L_80055B2C:
    // 0x80055B2C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80055B30: jal         0x8005BBFC
    // 0x80055B34: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_12;
    // 0x80055B34: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_12:
    // 0x80055B38: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80055B3C: lw          $t8, -0x6E0C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6E0C);
    // 0x80055B40: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80055B44: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x80055B48: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x80055B4C: lw          $a2, 0x4($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X4);
    // 0x80055B50: lw          $a3, 0x8($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X8);
    // 0x80055B54: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80055B58: lw          $t1, 0x10($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X10);
    // 0x80055B5C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80055B60: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80055B64: lw          $t2, 0x14($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X14);
    // 0x80055B68: nop

    // 0x80055B6C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80055B70: lw          $t9, 0x18($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X18);
    // 0x80055B74: nop

    // 0x80055B78: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80055B7C: lw          $t3, 0x1C($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X1C);
    // 0x80055B80: jal         0x80057460
    // 0x80055B84: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    func_80057460(rdram, ctx);
        goto after_13;
    // 0x80055B84: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_13:
    // 0x80055B88: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80055B8C: jal         0x8005BE40
    // 0x80055B90: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_14;
    // 0x80055B90: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_14:
    // 0x80055B94: b           L_80057068
    // 0x80055B98: nop

        goto L_80057068;
    // 0x80055B98: nop

L_80055B9C:
    // 0x80055B9C: jal         0x8009D5E4
    // 0x80055BA0: nop

    func_8009D5E4(rdram, ctx);
        goto after_15;
    // 0x80055BA0: nop

    after_15:
    // 0x80055BA4: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80055BA8: lbu         $t4, -0xDAC($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0XDAC);
    // 0x80055BAC: nop

    // 0x80055BB0: beq         $t4, $zero, L_800568B0
    if (ctx->r12 == 0) {
        // 0x80055BB4: nop
    
            goto L_800568B0;
    }
    // 0x80055BB4: nop

    // 0x80055BB8: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x80055BBC: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x80055BC0: addiu       $t6, $zero, 0x32
    ctx->r14 = ADD32(0, 0X32);
    // 0x80055BC4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80055BC8: sw          $t5, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r13;
    // 0x80055BCC: sw          $t7, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r15;
    // 0x80055BD0: sw          $t6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r14;
    // 0x80055BD4: jal         0x8005BBFC
    // 0x80055BD8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_16;
    // 0x80055BD8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_16:
    // 0x80055BDC: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80055BE0: lbu         $t1, 0x154($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X154);
    // 0x80055BE4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80055BE8: lbu         $t0, -0xDAC($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0XDAC);
    // 0x80055BEC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80055BF0: sllv        $t9, $t2, $t1
    ctx->r25 = S32(ctx->r10 << (ctx->r9 & 31));
    // 0x80055BF4: and         $t8, $t0, $t9
    ctx->r24 = ctx->r8 & ctx->r25;
    // 0x80055BF8: beq         $t8, $zero, L_80056888
    if (ctx->r24 == 0) {
        // 0x80055BFC: nop
    
            goto L_80056888;
    }
    // 0x80055BFC: nop

    // 0x80055C00: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80055C04: lbu         $s0, 0x148($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X148);
    // 0x80055C08: addiu       $t3, $zero, 0x1A
    ctx->r11 = ADD32(0, 0X1A);
    // 0x80055C0C: sb          $t3, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r11;
    // 0x80055C10: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x80055C14: beq         $s0, $zero, L_80055C38
    if (ctx->r16 == 0) {
        // 0x80055C18: sw          $zero, 0x70($sp)
        MEM_W(0X70, ctx->r29) = 0;
            goto L_80055C38;
    }
    // 0x80055C18: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x80055C1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80055C20: beq         $s0, $at, L_80055F34
    if (ctx->r16 == ctx->r1) {
        // 0x80055C24: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80055F34;
    }
    // 0x80055C24: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80055C28: beq         $s0, $at, L_800563B4
    if (ctx->r16 == ctx->r1) {
        // 0x80055C2C: nop
    
            goto L_800563B4;
    }
    // 0x80055C2C: nop

    // 0x80055C30: b           L_8005689C
    // 0x80055C34: nop

        goto L_8005689C;
    // 0x80055C34: nop

L_80055C38:
    // 0x80055C38: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80055C3C: lbu         $a1, 0x154($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X154);
    // 0x80055C40: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80055C44: jal         0x8003B684
    // 0x80055C48: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003B684(rdram, ctx);
        goto after_17;
    // 0x80055C48: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_17:
    // 0x80055C4C: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x80055C50: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x80055C54: nop

    // 0x80055C58: srl         $t5, $t4, 4
    ctx->r13 = S32(U32(ctx->r12) >> 4);
    // 0x80055C5C: andi        $t7, $t5, 0xF
    ctx->r15 = ctx->r13 & 0XF;
    // 0x80055C60: beq         $t7, $zero, L_80055C78
    if (ctx->r15 == 0) {
        // 0x80055C64: nop
    
            goto L_80055C78;
    }
    // 0x80055C64: nop

    // 0x80055C68: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80055C6C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055C70: b           L_80057068
    // 0x80055C74: sb          $t6, 0x148($at)
    MEM_B(0X148, ctx->r1) = ctx->r14;
        goto L_80057068;
    // 0x80055C74: sb          $t6, 0x148($at)
    MEM_B(0X148, ctx->r1) = ctx->r14;
L_80055C78:
    // 0x80055C78: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x80055C7C: addiu       $a0, $a0, 0xA
    ctx->r4 = ADD32(ctx->r4, 0XA);
    // 0x80055C80: jal         0x800B7450
    // 0x80055C84: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    _bzero(rdram, ctx);
        goto after_18;
    // 0x80055C84: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_18:
    // 0x80055C88: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x80055C8C: addiu       $a0, $a0, 0xE
    ctx->r4 = ADD32(ctx->r4, 0XE);
    // 0x80055C90: jal         0x800B7450
    // 0x80055C94: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    _bzero(rdram, ctx);
        goto after_19;
    // 0x80055C94: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_19:
    // 0x80055C98: lui         $t1, 0x4E52
    ctx->r9 = S32(0X4E52 << 16);
    // 0x80055C9C: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x80055CA0: ori         $t1, $t1, 0x4945
    ctx->r9 = ctx->r9 | 0X4945;
    // 0x80055CA4: addiu       $t0, $zero, 0x3031
    ctx->r8 = ADD32(0, 0X3031);
    // 0x80055CA8: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x80055CAC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80055CB0: addiu       $t9, $zero, 0x30
    ctx->r25 = ADD32(0, 0X30);
    // 0x80055CB4: addiu       $t8, $zero, 0x2D
    ctx->r24 = ADD32(0, 0X2D);
    // 0x80055CB8: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x80055CBC: addiu       $t4, $zero, 0x2D
    ctx->r12 = ADD32(0, 0X2D);
    // 0x80055CC0: addiu       $t5, $zero, 0x2B
    ctx->r13 = ADD32(0, 0X2B);
    // 0x80055CC4: addiu       $t7, $zero, 0x22
    ctx->r15 = ADD32(0, 0X22);
    // 0x80055CC8: addiu       $t6, $zero, 0x2C
    ctx->r14 = ADD32(0, 0X2C);
    // 0x80055CCC: sw          $t2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r10;
    // 0x80055CD0: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    // 0x80055CD4: sh          $t0, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r8;
    // 0x80055CD8: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80055CDC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80055CE0: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80055CE4: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80055CE8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80055CEC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80055CF0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80055CF4: addiu       $a1, $a1, -0x2F60
    ctx->r5 = ADD32(ctx->r5, -0X2F60);
    // 0x80055CF8: addiu       $a0, $a0, 0xE
    ctx->r4 = ADD32(ctx->r4, 0XE);
    // 0x80055CFC: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x80055D00: jal         0x800B62D4
    // 0x80055D04: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    sprintf_recomp(rdram, ctx);
        goto after_20;
    // 0x80055D04: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_20:
    // 0x80055D08: lbu         $t2, 0x7B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X7B);
    // 0x80055D0C: addiu       $t1, $sp, 0x7C
    ctx->r9 = ADD32(ctx->r29, 0X7C);
    // 0x80055D10: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x80055D14: jal         0x8007E03C
    // 0x80055D18: sb          $t2, 0xA($t1)
    MEM_B(0XA, ctx->r9) = ctx->r10;
    func_8007E03C(rdram, ctx);
        goto after_21;
    // 0x80055D18: sb          $t2, 0xA($t1)
    MEM_B(0XA, ctx->r9) = ctx->r10;
    after_21:
    // 0x80055D1C: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x80055D20: sb          $zero, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = 0;
    // 0x80055D24: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x80055D28: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
L_80055D2C:
    // 0x80055D2C: lbu         $t0, 0x7B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X7B);
    // 0x80055D30: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x80055D34: addiu       $t3, $sp, 0x7C
    ctx->r11 = ADD32(ctx->r29, 0X7C);
    // 0x80055D38: addu        $t8, $t0, $t9
    ctx->r24 = ADD32(ctx->r8, ctx->r25);
    // 0x80055D3C: sb          $t8, 0xA($t3)
    MEM_B(0XA, ctx->r11) = ctx->r24;
    // 0x80055D40: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x80055D44: lbu         $a2, 0x154($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X154);
    // 0x80055D48: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80055D4C: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x80055D50: jal         0x8003B8F4
    // 0x80055D54: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    func_8003B8F4(rdram, ctx);
        goto after_22;
    // 0x80055D54: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    after_22:
    // 0x80055D58: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x80055D5C: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x80055D60: nop

    // 0x80055D64: srl         $t5, $t4, 4
    ctx->r13 = S32(U32(ctx->r12) >> 4);
    // 0x80055D68: andi        $t7, $t5, 0xF
    ctx->r15 = ctx->r13 & 0XF;
    // 0x80055D6C: bne         $t7, $zero, L_80055E98
    if (ctx->r15 != 0) {
        // 0x80055D70: nop
    
            goto L_80055E98;
    }
    // 0x80055D70: nop

    // 0x80055D74: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80055D78: lbu         $t2, 0x154($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X154);
    // 0x80055D7C: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x80055D80: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80055D84: sw          $t4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r12;
    // 0x80055D88: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x80055D8C: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x80055D90: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80055D94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80055D98: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80055D9C: jal         0x8003B6E8
    // 0x80055DA0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8003B6E8(rdram, ctx);
        goto after_23;
    // 0x80055DA0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_23:
    // 0x80055DA4: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80055DA8: lbu         $t0, 0x154($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X154);
    // 0x80055DAC: lw          $t1, 0xFC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XFC);
    // 0x80055DB0: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x80055DB4: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x80055DB8: addu        $t8, $t1, $t9
    ctx->r24 = ADD32(ctx->r9, ctx->r25);
    // 0x80055DBC: lw          $t3, 0x3C($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X3C);
    // 0x80055DC0: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80055DC4: lbu         $a1, 0x9($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0X9);
    // 0x80055DC8: lbu         $a2, 0xA($t3)
    ctx->r6 = MEM_BU(ctx->r11, 0XA);
    // 0x80055DCC: jal         0x8007AADC
    // 0x80055DD0: nop

    func_8007AADC(rdram, ctx);
        goto after_24;
    // 0x80055DD0: nop

    after_24:
    // 0x80055DD4: beq         $v0, $zero, L_80055EB8
    if (ctx->r2 == 0) {
        // 0x80055DD8: nop
    
            goto L_80055EB8;
    }
    // 0x80055DD8: nop

    // 0x80055DDC: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80055DE0: jal         0x800B7450
    // 0x80055DE4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    _bzero(rdram, ctx);
        goto after_25;
    // 0x80055DE4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_25:
    // 0x80055DE8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80055DEC: lbu         $t7, 0x154($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X154);
    // 0x80055DF0: lw          $t5, 0xFC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XFC);
    // 0x80055DF4: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x80055DF8: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x80055DFC: lw          $a0, 0x3C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X3C);
    // 0x80055E00: jal         0x8007B420
    // 0x80055E04: nop

    func_8007B420(rdram, ctx);
        goto after_26;
    // 0x80055E04: nop

    after_26:
    // 0x80055E08: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80055E0C: lbu         $t0, 0x154($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X154);
    // 0x80055E10: lw          $t2, 0xFC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XFC);
    // 0x80055E14: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80055E18: addu        $t9, $t2, $t1
    ctx->r25 = ADD32(ctx->r10, ctx->r9);
    // 0x80055E1C: lw          $a0, 0x3C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3C);
    // 0x80055E20: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x80055E24: jal         0x8007AF88
    // 0x80055E28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8007AF88(rdram, ctx);
        goto after_27;
    // 0x80055E28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_27:
    // 0x80055E2C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80055E30: lbu         $t3, 0x154($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X154);
    // 0x80055E34: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x80055E38: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80055E3C: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x80055E40: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x80055E44: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x80055E48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80055E4C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80055E50: jal         0x8003B7A8
    // 0x80055E54: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8003B7A8(rdram, ctx);
        goto after_28;
    // 0x80055E54: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_28:
    // 0x80055E58: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x80055E5C: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x80055E60: nop

    // 0x80055E64: srl         $t5, $t7, 4
    ctx->r13 = S32(U32(ctx->r15) >> 4);
    // 0x80055E68: andi        $t4, $t5, 0xF
    ctx->r12 = ctx->r13 & 0XF;
    // 0x80055E6C: beq         $t4, $zero, L_80055E90
    if (ctx->r12 == 0) {
        // 0x80055E70: nop
    
            goto L_80055E90;
    }
    // 0x80055E70: nop

    // 0x80055E74: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80055E78: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055E7C: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80055E80: jal         0x8007E328
    // 0x80055E84: sb          $t6, 0x148($at)
    MEM_B(0X148, ctx->r1) = ctx->r14;
    func_8007E328(rdram, ctx);
        goto after_29;
    // 0x80055E84: sb          $t6, 0x148($at)
    MEM_B(0X148, ctx->r1) = ctx->r14;
    after_29:
    // 0x80055E88: b           L_80057068
    // 0x80055E8C: nop

        goto L_80057068;
    // 0x80055E8C: nop

L_80055E90:
    // 0x80055E90: b           L_80055ED0
    // 0x80055E94: sb          $zero, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = 0;
        goto L_80055ED0;
    // 0x80055E94: sb          $zero, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = 0;
L_80055E98:
    // 0x80055E98: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x80055E9C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80055EA0: srl         $t2, $t0, 4
    ctx->r10 = S32(U32(ctx->r8) >> 4);
    // 0x80055EA4: andi        $t1, $t2, 0xF
    ctx->r9 = ctx->r10 & 0XF;
    // 0x80055EA8: bne         $t1, $at, L_80055EB8
    if (ctx->r9 != ctx->r1) {
        // 0x80055EAC: nop
    
            goto L_80055EB8;
    }
    // 0x80055EAC: nop

    // 0x80055EB0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80055EB4: sb          $t9, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r25;
L_80055EB8:
    // 0x80055EB8: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x80055EBC: nop

    // 0x80055EC0: addiu       $t3, $t8, 0x1
    ctx->r11 = ADD32(ctx->r24, 0X1);
    // 0x80055EC4: slti        $at, $t3, 0x10
    ctx->r1 = SIGNED(ctx->r11) < 0X10 ? 1 : 0;
    // 0x80055EC8: bne         $at, $zero, L_80055D2C
    if (ctx->r1 != 0) {
        // 0x80055ECC: sw          $t3, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r11;
            goto L_80055D2C;
    }
    // 0x80055ECC: sw          $t3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r11;
L_80055ED0:
    // 0x80055ED0: lbu         $t7, 0x6B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X6B);
    // 0x80055ED4: nop

    // 0x80055ED8: beq         $t7, $zero, L_80055EFC
    if (ctx->r15 == 0) {
        // 0x80055EDC: nop
    
            goto L_80055EFC;
    }
    // 0x80055EDC: nop

    // 0x80055EE0: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80055EE4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80055EE8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80055EEC: jal         0x8007E328
    // 0x80055EF0: sb          $t5, 0x148($at)
    MEM_B(0X148, ctx->r1) = ctx->r13;
    func_8007E328(rdram, ctx);
        goto after_30;
    // 0x80055EF0: sb          $t5, 0x148($at)
    MEM_B(0X148, ctx->r1) = ctx->r13;
    after_30:
    // 0x80055EF4: b           L_80057068
    // 0x80055EF8: nop

        goto L_80057068;
    // 0x80055EF8: nop

L_80055EFC:
    // 0x80055EFC: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80055F00: jal         0x8007E328
    // 0x80055F04: nop

    func_8007E328(rdram, ctx);
        goto after_31;
    // 0x80055F04: nop

    after_31:
    // 0x80055F08: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x80055F0C: lbu         $t4, 0x154($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X154);
    // 0x80055F10: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80055F14: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80055F18: lbu         $t1, -0xDAC($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0XDAC);
    // 0x80055F1C: sllv        $t0, $t6, $t4
    ctx->r8 = S32(ctx->r14 << (ctx->r12 & 31));
    // 0x80055F20: nor         $t2, $t0, $zero
    ctx->r10 = ~(ctx->r8 | 0);
    // 0x80055F24: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80055F28: and         $t9, $t2, $t1
    ctx->r25 = ctx->r10 & ctx->r9;
    // 0x80055F2C: b           L_8005689C
    // 0x80055F30: sb          $t9, -0xDAC($at)
    MEM_B(-0XDAC, ctx->r1) = ctx->r25;
        goto L_8005689C;
    // 0x80055F30: sb          $t9, -0xDAC($at)
    MEM_B(-0XDAC, ctx->r1) = ctx->r25;
L_80055F34:
    // 0x80055F34: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80055F38: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x80055F3C: addiu       $t3, $zero, 0x32
    ctx->r11 = ADD32(0, 0X32);
    // 0x80055F40: lw          $a1, -0xDA8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XDA8);
    // 0x80055F44: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80055F48: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x80055F4C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80055F50: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80055F54: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80055F58: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80055F5C: sw          $t8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r24;
    // 0x80055F60: sw          $t3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r11;
    // 0x80055F64: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80055F68: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80055F6C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80055F70: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80055F74: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80055F78: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80055F7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80055F80: jal         0x80057460
    // 0x80055F84: addiu       $a3, $zero, 0x32
    ctx->r7 = ADD32(0, 0X32);
    func_80057460(rdram, ctx);
        goto after_32;
    // 0x80055F84: addiu       $a3, $zero, 0x32
    ctx->r7 = ADD32(0, 0X32);
    after_32:
    // 0x80055F88: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80055F8C: lbu         $t1, 0x154($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X154);
    // 0x80055F90: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
    // 0x80055F94: sll         $t9, $t1, 3
    ctx->r25 = S32(ctx->r9 << 3);
    // 0x80055F98: subu        $t9, $t9, $t1
    ctx->r25 = SUB32(ctx->r25, ctx->r9);
    // 0x80055F9C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80055FA0: subu        $t9, $t9, $t1
    ctx->r25 = SUB32(ctx->r25, ctx->r9);
    // 0x80055FA4: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80055FA8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80055FAC: addiu       $a1, $a1, -0x2F4C
    ctx->r5 = ADD32(ctx->r5, -0X2F4C);
    // 0x80055FB0: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x80055FB4: jal         0x800B62D4
    // 0x80055FB8: addu        $a2, $t2, $t9
    ctx->r6 = ADD32(ctx->r10, ctx->r25);
    sprintf_recomp(rdram, ctx);
        goto after_33;
    // 0x80055FB8: addu        $a2, $t2, $t9
    ctx->r6 = ADD32(ctx->r10, ctx->r25);
    after_33:
    // 0x80055FBC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80055FC0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80055FC4: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x80055FC8: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x80055FCC: addiu       $t8, $sp, 0xB8
    ctx->r24 = ADD32(ctx->r29, 0XB8);
    // 0x80055FD0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80055FD4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80055FD8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80055FDC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80055FE0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80055FE4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80055FE8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80055FEC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80055FF0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80055FF4: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x80055FF8: jal         0x80077960
    // 0x80055FFC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_80077960(rdram, ctx);
        goto after_34;
    // 0x80055FFC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_34:
    // 0x80056000: lw          $t4, 0xA4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA4);
    // 0x80056004: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80056008: addiu       $t1, $t1, -0x2F48
    ctx->r9 = ADD32(ctx->r9, -0X2F48);
    // 0x8005600C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80056010: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80056014: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x80056018: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8005601C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80056020: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80056024: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80056028: addiu       $t0, $t4, 0xF
    ctx->r8 = ADD32(ctx->r12, 0XF);
    // 0x8005602C: sw          $t0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r8;
    // 0x80056030: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x80056034: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80056038: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8005603C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80056040: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80056044: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x80056048: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8005604C: jal         0x80077960
    // 0x80056050: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80077960(rdram, ctx);
        goto after_35;
    // 0x80056050: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_35:
    // 0x80056054: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x80056058: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x8005605C: lbu         $a2, 0x154($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X154);
    // 0x80056060: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80056064: addiu       $t5, $t7, 0xF
    ctx->r13 = ADD32(ctx->r15, 0XF);
    // 0x80056068: sw          $t5, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r13;
    // 0x8005606C: addiu       $a1, $a1, -0x2F24
    ctx->r5 = ADD32(ctx->r5, -0X2F24);
    // 0x80056070: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x80056074: jal         0x800B62D4
    // 0x80056078: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    sprintf_recomp(rdram, ctx);
        goto after_36;
    // 0x80056078: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_36:
    // 0x8005607C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80056080: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80056084: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x80056088: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x8005608C: addiu       $t6, $sp, 0xB8
    ctx->r14 = ADD32(ctx->r29, 0XB8);
    // 0x80056090: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80056094: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80056098: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8005609C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x800560A0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x800560A4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x800560A8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800560AC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800560B0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800560B4: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800560B8: jal         0x80077960
    // 0x800560BC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_80077960(rdram, ctx);
        goto after_37;
    // 0x800560BC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_37:
    // 0x800560C0: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x800560C4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x800560C8: addiu       $t3, $t3, -0x2EFC
    ctx->r11 = ADD32(ctx->r11, -0X2EFC);
    // 0x800560CC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800560D0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800560D4: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x800560D8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800560DC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800560E0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800560E4: addiu       $t8, $t9, 0x14
    ctx->r24 = ADD32(ctx->r25, 0X14);
    // 0x800560E8: sw          $t8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r24;
    // 0x800560EC: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x800560F0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800560F4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x800560F8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800560FC: addiu       $a1, $a1, -0x70D8
    ctx->r5 = ADD32(ctx->r5, -0X70D8);
    // 0x80056100: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80056104: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80056108: jal         0x80077960
    // 0x8005610C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_38;
    // 0x8005610C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_38:
    // 0x80056110: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80056114: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80056118: addiu       $a1, $a1, -0x2EF4
    ctx->r5 = ADD32(ctx->r5, -0X2EF4);
    // 0x8005611C: jal         0x80077D88
    // 0x80056120: addiu       $a0, $a0, -0x70D8
    ctx->r4 = ADD32(ctx->r4, -0X70D8);
    func_80077D88(rdram, ctx);
        goto after_39;
    // 0x80056120: addiu       $a0, $a0, -0x70D8
    ctx->r4 = ADD32(ctx->r4, -0X70D8);
    after_39:
    // 0x80056124: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
    // 0x80056128: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8005612C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80056130: addiu       $t1, $t1, -0x2EEC
    ctx->r9 = ADD32(ctx->r9, -0X2EEC);
    // 0x80056134: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80056138: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8005613C: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x80056140: addiu       $t2, $zero, 0x5A
    ctx->r10 = ADD32(0, 0X5A);
    // 0x80056144: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x80056148: addiu       $t8, $zero, 0xB9
    ctx->r24 = ADD32(0, 0XB9);
    // 0x8005614C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80056150: addu        $t0, $t4, $s0
    ctx->r8 = ADD32(ctx->r12, ctx->r16);
    // 0x80056154: sw          $t0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r8;
    // 0x80056158: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x8005615C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80056160: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80056164: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80056168: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8005616C: addiu       $a1, $a1, -0x70D8
    ctx->r5 = ADD32(ctx->r5, -0X70D8);
    // 0x80056170: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80056174: jal         0x80077960
    // 0x80056178: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80077960(rdram, ctx);
        goto after_40;
    // 0x80056178: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_40:
    // 0x8005617C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80056180: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80056184: addiu       $a1, $a1, -0x2EE8
    ctx->r5 = ADD32(ctx->r5, -0X2EE8);
    // 0x80056188: jal         0x80077D88
    // 0x8005618C: addiu       $a0, $a0, -0x70D8
    ctx->r4 = ADD32(ctx->r4, -0X70D8);
    func_80077D88(rdram, ctx);
        goto after_41;
    // 0x8005618C: addiu       $a0, $a0, -0x70D8
    ctx->r4 = ADD32(ctx->r4, -0X70D8);
    after_41:
    // 0x80056190: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
    // 0x80056194: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80056198: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8005619C: addiu       $t6, $t6, -0x2EE4
    ctx->r14 = ADD32(ctx->r14, -0X2EE4);
    // 0x800561A0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800561A4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800561A8: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x800561AC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800561B0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800561B4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800561B8: addu        $t5, $t7, $s0
    ctx->r13 = ADD32(ctx->r15, ctx->r16);
    // 0x800561BC: sw          $t5, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r13;
    // 0x800561C0: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x800561C4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800561C8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800561CC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800561D0: addiu       $a1, $a1, -0x70D8
    ctx->r5 = ADD32(ctx->r5, -0X70D8);
    // 0x800561D4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800561D8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800561DC: jal         0x80077960
    // 0x800561E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_42;
    // 0x800561E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_42:
    // 0x800561E4: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x800561E8: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x800561EC: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x800561F0: addiu       $t3, $t3, -0x2EDC
    ctx->r11 = ADD32(ctx->r11, -0X2EDC);
    // 0x800561F4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800561F8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800561FC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80056200: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80056204: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80056208: addiu       $t9, $t2, 0x11
    ctx->r25 = ADD32(ctx->r10, 0X11);
    // 0x8005620C: sw          $t9, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r25;
    // 0x80056210: sw          $t8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r24;
    // 0x80056214: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x80056218: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8005621C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80056220: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80056224: addiu       $a1, $a1, -0x70D8
    ctx->r5 = ADD32(ctx->r5, -0X70D8);
    // 0x80056228: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8005622C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80056230: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x80056234: jal         0x80077960
    // 0x80056238: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_43;
    // 0x80056238: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_43:
    // 0x8005623C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80056240: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80056244: addiu       $a1, $a1, -0x2ED4
    ctx->r5 = ADD32(ctx->r5, -0X2ED4);
    // 0x80056248: jal         0x80077D88
    // 0x8005624C: addiu       $a0, $a0, -0x70D8
    ctx->r4 = ADD32(ctx->r4, -0X70D8);
    func_80077D88(rdram, ctx);
        goto after_44;
    // 0x8005624C: addiu       $a0, $a0, -0x70D8
    ctx->r4 = ADD32(ctx->r4, -0X70D8);
    after_44:
    // 0x80056250: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
    // 0x80056254: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80056258: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8005625C: addiu       $t1, $t1, -0x2ECC
    ctx->r9 = ADD32(ctx->r9, -0X2ECC);
    // 0x80056260: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80056264: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80056268: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x8005626C: addiu       $t2, $zero, 0x70
    ctx->r10 = ADD32(0, 0X70);
    // 0x80056270: addiu       $t8, $zero, 0xC3
    ctx->r24 = ADD32(0, 0XC3);
    // 0x80056274: addiu       $t9, $zero, 0x74
    ctx->r25 = ADD32(0, 0X74);
    // 0x80056278: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8005627C: addu        $t0, $t4, $s0
    ctx->r8 = ADD32(ctx->r12, ctx->r16);
    // 0x80056280: sw          $t0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r8;
    // 0x80056284: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x80056288: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8005628C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80056290: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80056294: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80056298: addiu       $a1, $a1, -0x70D8
    ctx->r5 = ADD32(ctx->r5, -0X70D8);
    // 0x8005629C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800562A0: jal         0x80077960
    // 0x800562A4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80077960(rdram, ctx);
        goto after_45;
    // 0x800562A4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_45:
    // 0x800562A8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800562AC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800562B0: addiu       $a1, $a1, -0x2EC8
    ctx->r5 = ADD32(ctx->r5, -0X2EC8);
    // 0x800562B4: jal         0x80077D88
    // 0x800562B8: addiu       $a0, $a0, -0x70D8
    ctx->r4 = ADD32(ctx->r4, -0X70D8);
    func_80077D88(rdram, ctx);
        goto after_46;
    // 0x800562B8: addiu       $a0, $a0, -0x70D8
    ctx->r4 = ADD32(ctx->r4, -0X70D8);
    after_46:
    // 0x800562BC: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
    // 0x800562C0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800562C4: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x800562C8: addiu       $t6, $t6, -0x2EC4
    ctx->r14 = ADD32(ctx->r14, -0X2EC4);
    // 0x800562CC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800562D0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800562D4: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x800562D8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800562DC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800562E0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800562E4: addu        $t5, $t7, $s0
    ctx->r13 = ADD32(ctx->r15, ctx->r16);
    // 0x800562E8: sw          $t5, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r13;
    // 0x800562EC: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x800562F0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800562F4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800562F8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800562FC: addiu       $a1, $a1, -0x70D8
    ctx->r5 = ADD32(ctx->r5, -0X70D8);
    // 0x80056300: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80056304: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80056308: jal         0x80077960
    // 0x8005630C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_47;
    // 0x8005630C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_47:
    // 0x80056310: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80056314: lbu         $t2, 0x154($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X154);
    // 0x80056318: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8005631C: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x80056320: subu        $t8, $t8, $t2
    ctx->r24 = SUB32(ctx->r24, ctx->r10);
    // 0x80056324: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80056328: subu        $t8, $t8, $t2
    ctx->r24 = SUB32(ctx->r24, ctx->r10);
    // 0x8005632C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80056330: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80056334: lw          $t9, -0x10AC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X10AC);
    // 0x80056338: nop

    // 0x8005633C: andi        $t3, $t9, 0x8000
    ctx->r11 = ctx->r25 & 0X8000;
    // 0x80056340: beq         $t3, $zero, L_80056350
    if (ctx->r11 == 0) {
        // 0x80056344: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_80056350;
    }
    // 0x80056344: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80056348: b           L_80057068
    // 0x8005634C: sb          $zero, 0x148($at)
    MEM_B(0X148, ctx->r1) = 0;
        goto L_80057068;
    // 0x8005634C: sb          $zero, 0x148($at)
    MEM_B(0X148, ctx->r1) = 0;
L_80056350:
    // 0x80056350: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80056354: lbu         $t7, 0x154($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X154);
    // 0x80056358: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005635C: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x80056360: subu        $t5, $t5, $t7
    ctx->r13 = SUB32(ctx->r13, ctx->r15);
    // 0x80056364: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80056368: subu        $t5, $t5, $t7
    ctx->r13 = SUB32(ctx->r13, ctx->r15);
    // 0x8005636C: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80056370: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80056374: lw          $t6, -0x10AC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10AC);
    // 0x80056378: nop

    // 0x8005637C: andi        $t4, $t6, 0x4000
    ctx->r12 = ctx->r14 & 0X4000;
    // 0x80056380: beq         $t4, $zero, L_8005689C
    if (ctx->r12 == 0) {
        // 0x80056384: nop
    
            goto L_8005689C;
    }
    // 0x80056384: nop

    // 0x80056388: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8005638C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80056390: lbu         $t8, -0xDAC($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0XDAC);
    // 0x80056394: sllv        $t1, $t0, $t7
    ctx->r9 = S32(ctx->r8 << (ctx->r15 & 31));
    // 0x80056398: nor         $t2, $t1, $zero
    ctx->r10 = ~(ctx->r9 | 0);
    // 0x8005639C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800563A0: and         $t9, $t2, $t8
    ctx->r25 = ctx->r10 & ctx->r24;
    // 0x800563A4: sb          $t9, -0xDAC($at)
    MEM_B(-0XDAC, ctx->r1) = ctx->r25;
    // 0x800563A8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800563AC: b           L_80057068
    // 0x800563B0: sb          $zero, 0x148($at)
    MEM_B(0X148, ctx->r1) = 0;
        goto L_80057068;
    // 0x800563B0: sb          $zero, 0x148($at)
    MEM_B(0X148, ctx->r1) = 0;
L_800563B4:
    // 0x800563B4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800563B8: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x800563BC: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x800563C0: lw          $a1, -0xDA8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XDA8);
    // 0x800563C4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800563C8: addiu       $t6, $zero, 0x29
    ctx->r14 = ADD32(0, 0X29);
    // 0x800563CC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800563D0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800563D4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800563D8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800563DC: sw          $t3, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r11;
    // 0x800563E0: sw          $t5, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r13;
    // 0x800563E4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800563E8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800563EC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800563F0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800563F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800563F8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800563FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80056400: jal         0x80057460
    // 0x80056404: addiu       $a3, $zero, 0x34
    ctx->r7 = ADD32(0, 0X34);
    func_80057460(rdram, ctx);
        goto after_48;
    // 0x80056404: addiu       $a3, $zero, 0x34
    ctx->r7 = ADD32(0, 0X34);
    after_48:
    // 0x80056408: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8005640C: lbu         $t8, 0x154($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X154);
    // 0x80056410: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
    // 0x80056414: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80056418: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8005641C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80056420: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80056424: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80056428: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8005642C: addiu       $a1, $a1, -0x2EB8
    ctx->r5 = ADD32(ctx->r5, -0X2EB8);
    // 0x80056430: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x80056434: jal         0x800B62D4
    // 0x80056438: addu        $a2, $t2, $t9
    ctx->r6 = ADD32(ctx->r10, ctx->r25);
    sprintf_recomp(rdram, ctx);
        goto after_49;
    // 0x80056438: addu        $a2, $t2, $t9
    ctx->r6 = ADD32(ctx->r10, ctx->r25);
    after_49:
    // 0x8005643C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80056440: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80056444: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x80056448: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x8005644C: addiu       $t3, $sp, 0xB8
    ctx->r11 = ADD32(ctx->r29, 0XB8);
    // 0x80056450: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80056454: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80056458: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8005645C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80056460: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80056464: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80056468: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8005646C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80056470: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80056474: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x80056478: jal         0x80077960
    // 0x8005647C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_80077960(rdram, ctx);
        goto after_50;
    // 0x8005647C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_50:
    // 0x80056480: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x80056484: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80056488: addiu       $t8, $t8, -0x2EB4
    ctx->r24 = ADD32(ctx->r24, -0X2EB4);
    // 0x8005648C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80056490: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80056494: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x80056498: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8005649C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800564A0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800564A4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800564A8: addiu       $t1, $t7, 0xF
    ctx->r9 = ADD32(ctx->r15, 0XF);
    // 0x800564AC: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x800564B0: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x800564B4: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x800564B8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800564BC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800564C0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x800564C4: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800564C8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800564CC: jal         0x80077960
    // 0x800564D0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80077960(rdram, ctx);
        goto after_51;
    // 0x800564D0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_51:
    // 0x800564D4: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x800564D8: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x800564DC: addiu       $t0, $t0, -0x2E8C
    ctx->r8 = ADD32(ctx->r8, -0X2E8C);
    // 0x800564E0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800564E4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800564E8: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x800564EC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800564F0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800564F4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800564F8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x800564FC: addiu       $t4, $t6, 0xE
    ctx->r12 = ADD32(ctx->r14, 0XE);
    // 0x80056500: sw          $t4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r12;
    // 0x80056504: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    // 0x80056508: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8005650C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80056510: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80056514: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80056518: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x8005651C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80056520: jal         0x80077960
    // 0x80056524: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80077960(rdram, ctx);
        goto after_52;
    // 0x80056524: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_52:
    // 0x80056528: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x8005652C: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x80056530: lbu         $a2, 0x154($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X154);
    // 0x80056534: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80056538: addiu       $t3, $t9, 0xE
    ctx->r11 = ADD32(ctx->r25, 0XE);
    // 0x8005653C: sw          $t3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r11;
    // 0x80056540: addiu       $a1, $a1, -0x2E64
    ctx->r5 = ADD32(ctx->r5, -0X2E64);
    // 0x80056544: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x80056548: jal         0x800B62D4
    // 0x8005654C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    sprintf_recomp(rdram, ctx);
        goto after_53;
    // 0x8005654C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_53:
    // 0x80056550: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80056554: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80056558: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x8005655C: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x80056560: addiu       $t5, $sp, 0xB8
    ctx->r13 = ADD32(ctx->r29, 0XB8);
    // 0x80056564: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80056568: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8005656C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80056570: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80056574: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80056578: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8005657C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80056580: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80056584: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80056588: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x8005658C: jal         0x80077960
    // 0x80056590: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_80077960(rdram, ctx);
        goto after_54;
    // 0x80056590: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_54:
    // 0x80056594: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x80056598: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8005659C: addiu       $t2, $t2, -0x2E3C
    ctx->r10 = ADD32(ctx->r10, -0X2E3C);
    // 0x800565A0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800565A4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800565A8: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x800565AC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800565B0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800565B4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800565B8: addiu       $t8, $t1, 0x11
    ctx->r24 = ADD32(ctx->r9, 0X11);
    // 0x800565BC: sw          $t8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r24;
    // 0x800565C0: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x800565C4: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x800565C8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x800565CC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800565D0: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800565D4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800565D8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800565DC: jal         0x80077960
    // 0x800565E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_55;
    // 0x800565E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_55:
    // 0x800565E4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800565E8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800565EC: addiu       $a1, $a1, -0x2E34
    ctx->r5 = ADD32(ctx->r5, -0X2E34);
    // 0x800565F0: jal         0x80077D88
    // 0x800565F4: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    func_80077D88(rdram, ctx);
        goto after_56;
    // 0x800565F4: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    after_56:
    // 0x800565F8: lw          $t6, 0xA8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA8);
    // 0x800565FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80056600: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80056604: addiu       $t0, $t0, -0x2E2C
    ctx->r8 = ADD32(ctx->r8, -0X2E2C);
    // 0x80056608: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8005660C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80056610: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x80056614: addiu       $t7, $zero, 0x5A
    ctx->r15 = ADD32(0, 0X5A);
    // 0x80056618: addiu       $t1, $zero, 0x50
    ctx->r9 = ADD32(0, 0X50);
    // 0x8005661C: addiu       $t8, $zero, 0xB9
    ctx->r24 = ADD32(0, 0XB9);
    // 0x80056620: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80056624: addu        $t4, $t6, $s0
    ctx->r12 = ADD32(ctx->r14, ctx->r16);
    // 0x80056628: sw          $t4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r12;
    // 0x8005662C: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x80056630: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80056634: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80056638: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8005663C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80056640: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x80056644: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80056648: jal         0x80077960
    // 0x8005664C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80077960(rdram, ctx);
        goto after_57;
    // 0x8005664C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_57:
    // 0x80056650: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80056654: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80056658: addiu       $a1, $a1, -0x2E28
    ctx->r5 = ADD32(ctx->r5, -0X2E28);
    // 0x8005665C: jal         0x80077D88
    // 0x80056660: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    func_80077D88(rdram, ctx);
        goto after_58;
    // 0x80056660: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    after_58:
    // 0x80056664: lw          $t9, 0xA8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA8);
    // 0x80056668: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8005666C: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80056670: addiu       $t5, $t5, -0x2E24
    ctx->r13 = ADD32(ctx->r13, -0X2E24);
    // 0x80056674: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80056678: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8005667C: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x80056680: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80056684: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80056688: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8005668C: addu        $t3, $t9, $s0
    ctx->r11 = ADD32(ctx->r25, ctx->r16);
    // 0x80056690: sw          $t3, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r11;
    // 0x80056694: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80056698: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8005669C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800566A0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800566A4: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800566A8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800566AC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800566B0: jal         0x80077960
    // 0x800566B4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_59;
    // 0x800566B4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_59:
    // 0x800566B8: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x800566BC: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x800566C0: addiu       $t8, $zero, 0x3A
    ctx->r24 = ADD32(0, 0X3A);
    // 0x800566C4: addiu       $t2, $t2, -0x2E14
    ctx->r10 = ADD32(ctx->r10, -0X2E14);
    // 0x800566C8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800566CC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800566D0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800566D4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800566D8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800566DC: addiu       $t1, $t7, 0xD
    ctx->r9 = ADD32(ctx->r15, 0XD);
    // 0x800566E0: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x800566E4: sw          $t8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r24;
    // 0x800566E8: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x800566EC: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x800566F0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x800566F4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800566F8: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800566FC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80056700: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80056704: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    // 0x80056708: jal         0x80077960
    // 0x8005670C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_60;
    // 0x8005670C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_60:
    // 0x80056710: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80056714: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80056718: addiu       $a1, $a1, -0x2E0C
    ctx->r5 = ADD32(ctx->r5, -0X2E0C);
    // 0x8005671C: jal         0x80077D88
    // 0x80056720: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    func_80077D88(rdram, ctx);
        goto after_61;
    // 0x80056720: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    after_61:
    // 0x80056724: lw          $t6, 0xA8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA8);
    // 0x80056728: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8005672C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80056730: addiu       $t0, $t0, -0x2E04
    ctx->r8 = ADD32(ctx->r8, -0X2E04);
    // 0x80056734: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80056738: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8005673C: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x80056740: addiu       $t7, $zero, 0x70
    ctx->r15 = ADD32(0, 0X70);
    // 0x80056744: addiu       $t8, $zero, 0xC3
    ctx->r24 = ADD32(0, 0XC3);
    // 0x80056748: addiu       $t1, $zero, 0x74
    ctx->r9 = ADD32(0, 0X74);
    // 0x8005674C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80056750: addu        $t4, $t6, $s0
    ctx->r12 = ADD32(ctx->r14, ctx->r16);
    // 0x80056754: sw          $t4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r12;
    // 0x80056758: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8005675C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80056760: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80056764: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80056768: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8005676C: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x80056770: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80056774: jal         0x80077960
    // 0x80056778: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80077960(rdram, ctx);
        goto after_62;
    // 0x80056778: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_62:
    // 0x8005677C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80056780: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80056784: addiu       $a1, $a1, -0x2E00
    ctx->r5 = ADD32(ctx->r5, -0X2E00);
    // 0x80056788: jal         0x80077D88
    // 0x8005678C: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    func_80077D88(rdram, ctx);
        goto after_63;
    // 0x8005678C: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    after_63:
    // 0x80056790: lw          $t9, 0xA8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA8);
    // 0x80056794: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80056798: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8005679C: addiu       $t5, $t5, -0x2DFC
    ctx->r13 = ADD32(ctx->r13, -0X2DFC);
    // 0x800567A0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800567A4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800567A8: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x800567AC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800567B0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800567B4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800567B8: addu        $t3, $t9, $s0
    ctx->r11 = ADD32(ctx->r25, ctx->r16);
    // 0x800567BC: sw          $t3, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r11;
    // 0x800567C0: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x800567C4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x800567C8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800567CC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800567D0: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800567D4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800567D8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800567DC: jal         0x80077960
    // 0x800567E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_64;
    // 0x800567E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_64:
    // 0x800567E4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800567E8: lbu         $t7, 0x154($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X154);
    // 0x800567EC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800567F0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800567F4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800567F8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800567FC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80056800: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80056804: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80056808: lw          $t1, -0x10AC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X10AC);
    // 0x8005680C: nop

    // 0x80056810: andi        $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 & 0X8000;
    // 0x80056814: beq         $t2, $zero, L_80056824
    if (ctx->r10 == 0) {
        // 0x80056818: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_80056824;
    }
    // 0x80056818: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005681C: b           L_80057068
    // 0x80056820: sb          $zero, 0x148($at)
    MEM_B(0X148, ctx->r1) = 0;
        goto L_80057068;
    // 0x80056820: sb          $zero, 0x148($at)
    MEM_B(0X148, ctx->r1) = 0;
L_80056824:
    // 0x80056824: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80056828: lbu         $t9, 0x154($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X154);
    // 0x8005682C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80056830: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80056834: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x80056838: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8005683C: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x80056840: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80056844: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80056848: lw          $t5, -0x10AC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X10AC);
    // 0x8005684C: nop

    // 0x80056850: andi        $t6, $t5, 0x4000
    ctx->r14 = ctx->r13 & 0X4000;
    // 0x80056854: beq         $t6, $zero, L_8005689C
    if (ctx->r14 == 0) {
        // 0x80056858: nop
    
            goto L_8005689C;
    }
    // 0x80056858: nop

    // 0x8005685C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80056860: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80056864: lbu         $t8, -0xDAC($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0XDAC);
    // 0x80056868: sllv        $t0, $t4, $t9
    ctx->r8 = S32(ctx->r12 << (ctx->r25 & 31));
    // 0x8005686C: nor         $t7, $t0, $zero
    ctx->r15 = ~(ctx->r8 | 0);
    // 0x80056870: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80056874: and         $t1, $t7, $t8
    ctx->r9 = ctx->r15 & ctx->r24;
    // 0x80056878: sb          $t1, -0xDAC($at)
    MEM_B(-0XDAC, ctx->r1) = ctx->r9;
    // 0x8005687C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80056880: b           L_80057068
    // 0x80056884: sb          $zero, 0x148($at)
    MEM_B(0X148, ctx->r1) = 0;
        goto L_80057068;
    // 0x80056884: sb          $zero, 0x148($at)
    MEM_B(0X148, ctx->r1) = 0;
L_80056888:
    // 0x80056888: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8005688C: lbu         $t2, 0x154($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X154);
    // 0x80056890: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80056894: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80056898: sb          $t3, 0x154($at)
    MEM_B(0X154, ctx->r1) = ctx->r11;
L_8005689C:
    // 0x8005689C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800568A0: jal         0x8005BE40
    // 0x800568A4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_65;
    // 0x800568A4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_65:
    // 0x800568A8: b           L_80057068
    // 0x800568AC: nop

        goto L_80057068;
    // 0x800568AC: nop

L_800568B0:
    // 0x800568B0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800568B4: jal         0x8005BBFC
    // 0x800568B8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_66;
    // 0x800568B8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_66:
    // 0x800568BC: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x800568C0: lw          $t5, 0x20C0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X20C0);
    // 0x800568C4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800568C8: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    // 0x800568CC: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x800568D0: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x800568D4: sw          $t6, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r14;
    // 0x800568D8: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x800568DC: sw          $t4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r12;
    // 0x800568E0: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x800568E4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800568E8: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x800568EC: lw          $t7, 0x144($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X144);
    // 0x800568F0: nop

    // 0x800568F4: bne         $t7, $zero, L_80057068
    if (ctx->r15 != 0) {
        // 0x800568F8: nop
    
            goto L_80057068;
    }
    // 0x800568F8: nop

    // 0x800568FC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80056900: lw          $t8, 0x150($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X150);
    // 0x80056904: lw          $t3, 0xFC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XFC);
    // 0x80056908: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005690C: addiu       $t2, $zero, 0x5A
    ctx->r10 = ADD32(0, 0X5A);
    // 0x80056910: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x80056914: sw          $t1, 0x150($at)
    MEM_W(0X150, ctx->r1) = ctx->r9;
    // 0x80056918: sw          $t2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r10;
    // 0x8005691C: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x80056920: lbu         $t5, 0x5($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X5);
    // 0x80056924: nop

    // 0x80056928: blez        $t5, L_80056B54
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8005692C: nop
    
            goto L_80056B54;
    }
    // 0x8005692C: nop

L_80056930:
    // 0x80056930: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x80056934: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80056938: sll         $t4, $t6, 3
    ctx->r12 = S32(ctx->r14 << 3);
    // 0x8005693C: subu        $t4, $t4, $t6
    ctx->r12 = SUB32(ctx->r12, ctx->r14);
    // 0x80056940: lw          $t7, 0x20C0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X20C0);
    // 0x80056944: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80056948: lw          $t9, 0xF8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF8);
    // 0x8005694C: subu        $t4, $t4, $t6
    ctx->r12 = SUB32(ctx->r12, ctx->r14);
    // 0x80056950: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80056954: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x80056958: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x8005695C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80056960: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80056964: addu        $t0, $t4, $t9
    ctx->r8 = ADD32(ctx->r12, ctx->r25);
    // 0x80056968: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x8005696C: sw          $t8, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r24;
    // 0x80056970: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x80056974: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80056978: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x8005697C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80056980: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x80056984: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x80056988: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x8005698C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80056990: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80056994: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80056998: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8005699C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800569A0: addiu       $a1, $a1, -0x70D8
    ctx->r5 = ADD32(ctx->r5, -0X70D8);
    // 0x800569A4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800569A8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800569AC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800569B0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800569B4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x800569B8: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    // 0x800569BC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800569C0: jal         0x80077960
    // 0x800569C4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    func_80077960(rdram, ctx);
        goto after_67;
    // 0x800569C4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    after_67:
    // 0x800569C8: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x800569CC: lw          $t7, 0x20C0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X20C0);
    // 0x800569D0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800569D4: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x800569D8: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x800569DC: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x800569E0: sw          $t8, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r24;
    // 0x800569E4: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x800569E8: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x800569EC: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x800569F0: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x800569F4: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x800569F8: lw          $t5, 0x150($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X150);
    // 0x800569FC: nop

    // 0x80056A00: slti        $at, $t5, 0x5B
    ctx->r1 = SIGNED(ctx->r13) < 0X5B ? 1 : 0;
    // 0x80056A04: bne         $at, $zero, L_80056A60
    if (ctx->r1 != 0) {
        // 0x80056A08: nop
    
            goto L_80056A60;
    }
    // 0x80056A08: nop

    // 0x80056A0C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80056A10: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80056A14: jal         0x8007AA5C
    // 0x80056A18: addiu       $a0, $a0, 0x2D98
    ctx->r4 = ADD32(ctx->r4, 0X2D98);
    func_8007AA5C(rdram, ctx);
        goto after_68;
    // 0x80056A18: addiu       $a0, $a0, 0x2D98
    ctx->r4 = ADD32(ctx->r4, 0X2D98);
    after_68:
    // 0x80056A1C: sw          $v0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r2;
    // 0x80056A20: lw          $t6, 0xF4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF4);
    // 0x80056A24: nop

    // 0x80056A28: beq         $t6, $zero, L_80056A48
    if (ctx->r14 == 0) {
        // 0x80056A2C: nop
    
            goto L_80056A48;
    }
    // 0x80056A2C: nop

    // 0x80056A30: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    // 0x80056A34: jal         0x80078300
    // 0x80056A38: nop

    func_80078300(rdram, ctx);
        goto after_69;
    // 0x80056A38: nop

    after_69:
    // 0x80056A3C: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x80056A40: b           L_80056A74
    // 0x80056A44: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
        goto L_80056A74;
    // 0x80056A44: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
L_80056A48:
    // 0x80056A48: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80056A4C: jal         0x80078300
    // 0x80056A50: nop

    func_80078300(rdram, ctx);
        goto after_70;
    // 0x80056A50: nop

    after_70:
    // 0x80056A54: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x80056A58: b           L_80056A74
    // 0x80056A5C: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
        goto L_80056A74;
    // 0x80056A5C: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
L_80056A60:
    // 0x80056A60: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80056A64: jal         0x80078300
    // 0x80056A68: nop

    func_80078300(rdram, ctx);
        goto after_71;
    // 0x80056A68: nop

    after_71:
    // 0x80056A6C: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x80056A70: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
L_80056A74:
    // 0x80056A74: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80056A78: lw          $t7, 0x20C0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X20C0);
    // 0x80056A7C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80056A80: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x80056A84: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80056A88: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80056A8C: sw          $t8, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r24;
    // 0x80056A90: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x80056A94: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80056A98: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80056A9C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80056AA0: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x80056AA4: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80056AA8: addiu       $a1, $a1, -0x2DF0
    ctx->r5 = ADD32(ctx->r5, -0X2DF0);
    // 0x80056AAC: jal         0x800B62D4
    // 0x80056AB0: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    sprintf_recomp(rdram, ctx);
        goto after_72;
    // 0x80056AB0: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    after_72:
    // 0x80056AB4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80056AB8: addiu       $a0, $a0, -0x70D8
    ctx->r4 = ADD32(ctx->r4, -0X70D8);
    // 0x80056ABC: jal         0x80077D88
    // 0x80056AC0: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    func_80077D88(rdram, ctx);
        goto after_73;
    // 0x80056AC0: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    after_73:
    // 0x80056AC4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80056AC8: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x80056ACC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80056AD0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80056AD4: addiu       $t6, $zero, 0xA6
    ctx->r14 = ADD32(0, 0XA6);
    // 0x80056AD8: addiu       $t4, $sp, 0xB8
    ctx->r12 = ADD32(ctx->r29, 0XB8);
    // 0x80056ADC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80056AE0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80056AE4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80056AE8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80056AEC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80056AF0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80056AF4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80056AF8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80056AFC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80056B00: addiu       $a1, $a1, -0x70D8
    ctx->r5 = ADD32(ctx->r5, -0X70D8);
    // 0x80056B04: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80056B08: bgez        $s0, L_80056B18
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80056B0C: sra         $t5, $s0, 1
        ctx->r13 = S32(SIGNED(ctx->r16) >> 1);
            goto L_80056B18;
    }
    // 0x80056B0C: sra         $t5, $s0, 1
    ctx->r13 = S32(SIGNED(ctx->r16) >> 1);
    // 0x80056B10: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x80056B14: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_80056B18:
    // 0x80056B18: subu        $a2, $t6, $t5
    ctx->r6 = SUB32(ctx->r14, ctx->r13);
    // 0x80056B1C: jal         0x80077960
    // 0x80056B20: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    func_80077960(rdram, ctx);
        goto after_74;
    // 0x80056B20: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    after_74:
    // 0x80056B24: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x80056B28: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x80056B2C: lw          $t5, 0xFC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XFC);
    // 0x80056B30: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80056B34: addiu       $t6, $t3, 0x19
    ctx->r14 = ADD32(ctx->r11, 0X19);
    // 0x80056B38: sw          $t6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r14;
    // 0x80056B3C: sw          $t2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r10;
    // 0x80056B40: lbu         $t4, 0x5($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0X5);
    // 0x80056B44: nop

    // 0x80056B48: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80056B4C: bne         $at, $zero, L_80056930
    if (ctx->r1 != 0) {
        // 0x80056B50: nop
    
            goto L_80056930;
    }
    // 0x80056B50: nop

L_80056B54:
    // 0x80056B54: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80056B58: lw          $t9, 0x150($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X150);
    // 0x80056B5C: nop

    // 0x80056B60: slti        $at, $t9, 0x1F
    ctx->r1 = SIGNED(ctx->r25) < 0X1F ? 1 : 0;
    // 0x80056B64: bne         $at, $zero, L_80056CD4
    if (ctx->r1 != 0) {
        // 0x80056B68: nop
    
            goto L_80056CD4;
    }
    // 0x80056B68: nop

    // 0x80056B6C: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x80056B70: addiu       $t0, $zero, 0x5D
    ctx->r8 = ADD32(0, 0X5D);
    // 0x80056B74: sw          $t0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r8;
    // 0x80056B78: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x80056B7C: lbu         $t8, 0x5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5);
    // 0x80056B80: nop

    // 0x80056B84: blez        $t8, L_80056CD4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80056B88: nop
    
            goto L_80056CD4;
    }
    // 0x80056B88: nop

L_80056B8C:
    // 0x80056B8C: lw          $t3, 0xAC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XAC);
    // 0x80056B90: lw          $t1, 0xFC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XFC);
    // 0x80056B94: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x80056B98: addu        $t5, $t1, $t6
    ctx->r13 = ADD32(ctx->r9, ctx->r14);
    // 0x80056B9C: lw          $a2, 0x18($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X18);
    // 0x80056BA0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80056BA4: addiu       $a1, $a1, -0x2DEC
    ctx->r5 = ADD32(ctx->r5, -0X2DEC);
    // 0x80056BA8: jal         0x800B62D4
    // 0x80056BAC: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    sprintf_recomp(rdram, ctx);
        goto after_75;
    // 0x80056BAC: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    after_75:
    // 0x80056BB0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80056BB4: addiu       $a0, $a0, -0x70D8
    ctx->r4 = ADD32(ctx->r4, -0X70D8);
    // 0x80056BB8: jal         0x80077D88
    // 0x80056BBC: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    func_80077D88(rdram, ctx);
        goto after_76;
    // 0x80056BBC: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    after_76:
    // 0x80056BC0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80056BC4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80056BC8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80056BCC: addiu       $t4, $zero, 0xF0
    ctx->r12 = ADD32(0, 0XF0);
    // 0x80056BD0: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x80056BD4: addiu       $t9, $sp, 0xB8
    ctx->r25 = ADD32(ctx->r29, 0XB8);
    // 0x80056BD8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80056BDC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80056BE0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80056BE4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80056BE8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80056BEC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80056BF0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80056BF4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80056BF8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80056BFC: addiu       $a1, $a1, -0x70D8
    ctx->r5 = ADD32(ctx->r5, -0X70D8);
    // 0x80056C00: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80056C04: bgez        $s0, L_80056C14
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80056C08: sra         $t2, $s0, 1
        ctx->r10 = S32(SIGNED(ctx->r16) >> 1);
            goto L_80056C14;
    }
    // 0x80056C08: sra         $t2, $s0, 1
    ctx->r10 = S32(SIGNED(ctx->r16) >> 1);
    // 0x80056C0C: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x80056C10: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_80056C14:
    // 0x80056C14: jal         0x80077960
    // 0x80056C18: subu        $a2, $t4, $t2
    ctx->r6 = SUB32(ctx->r12, ctx->r10);
    func_80077960(rdram, ctx);
        goto after_77;
    // 0x80056C18: subu        $a2, $t4, $t2
    ctx->r6 = SUB32(ctx->r12, ctx->r10);
    after_77:
    // 0x80056C1C: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x80056C20: lw          $t1, 0xFC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XFC);
    // 0x80056C24: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80056C28: addu        $t4, $t1, $t5
    ctx->r12 = ADD32(ctx->r9, ctx->r13);
    // 0x80056C2C: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    // 0x80056C30: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80056C34: sll         $t2, $a0, 4
    ctx->r10 = S32(ctx->r4 << 4);
    // 0x80056C38: subu        $t2, $t2, $a0
    ctx->r10 = SUB32(ctx->r10, ctx->r4);
    // 0x80056C3C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80056C40: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x80056C44: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80056C48: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80056C4C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80056C50: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80056C54: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80056C58: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80056C5C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80056C60: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80056C64: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80056C68: addiu       $a1, $a1, -0x70D8
    ctx->r5 = ADD32(ctx->r5, -0X70D8);
    // 0x80056C6C: jal         0x80071480
    // 0x80056C70: addiu       $a2, $zero, 0x14D
    ctx->r6 = ADD32(0, 0X14D);
    func_80071480(rdram, ctx);
        goto after_78;
    // 0x80056C70: addiu       $a2, $zero, 0x14D
    ctx->r6 = ADD32(0, 0X14D);
    after_78:
    // 0x80056C74: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80056C78: lw          $t3, 0x20C0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X20C0);
    // 0x80056C7C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80056C80: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x80056C84: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x80056C88: addiu       $t6, $t3, 0x8
    ctx->r14 = ADD32(ctx->r11, 0X8);
    // 0x80056C8C: sw          $t6, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r14;
    // 0x80056C90: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x80056C94: sw          $t1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r9;
    // 0x80056C98: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x80056C9C: nop

    // 0x80056CA0: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x80056CA4: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x80056CA8: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x80056CAC: lw          $t8, 0xFC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XFC);
    // 0x80056CB0: addiu       $t7, $t0, 0x19
    ctx->r15 = ADD32(ctx->r8, 0X19);
    // 0x80056CB4: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x80056CB8: sw          $t9, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r25;
    // 0x80056CBC: sw          $t7, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r15;
    // 0x80056CC0: lbu         $t3, 0x5($t8)
    ctx->r11 = MEM_BU(ctx->r24, 0X5);
    // 0x80056CC4: nop

    // 0x80056CC8: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80056CCC: bne         $at, $zero, L_80056B8C
    if (ctx->r1 != 0) {
        // 0x80056CD0: nop
    
            goto L_80056B8C;
    }
    // 0x80056CD0: nop

L_80056CD4:
    // 0x80056CD4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80056CD8: lw          $t6, 0x150($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X150);
    // 0x80056CDC: nop

    // 0x80056CE0: slti        $at, $t6, 0x3D
    ctx->r1 = SIGNED(ctx->r14) < 0X3D ? 1 : 0;
    // 0x80056CE4: bne         $at, $zero, L_80056DB8
    if (ctx->r1 != 0) {
        // 0x80056CE8: nop
    
            goto L_80056DB8;
    }
    // 0x80056CE8: nop

    // 0x80056CEC: lw          $t1, 0xFC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XFC);
    // 0x80056CF0: nop

    // 0x80056CF4: lbu         $t5, 0x5($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X5);
    // 0x80056CF8: nop

    // 0x80056CFC: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x80056D00: bne         $at, $zero, L_80056DB8
    if (ctx->r1 != 0) {
        // 0x80056D04: nop
    
            goto L_80056DB8;
    }
    // 0x80056D04: nop

    // 0x80056D08: addiu       $t4, $zero, 0x5A
    ctx->r12 = ADD32(0, 0X5A);
    // 0x80056D0C: sw          $t4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r12;
    // 0x80056D10: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x80056D14: lbu         $t2, 0x5($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X5);
    // 0x80056D18: nop

    // 0x80056D1C: blez        $t2, L_80056DB8
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80056D20: nop
    
            goto L_80056DB8;
    }
    // 0x80056D20: nop

L_80056D24:
    // 0x80056D24: lw          $t0, 0xFC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XFC);
    // 0x80056D28: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x80056D2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80056D30: addu        $t8, $t0, $t7
    ctx->r24 = ADD32(ctx->r8, ctx->r15);
    // 0x80056D34: lbu         $t9, 0x1($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1);
    // 0x80056D38: nop

    // 0x80056D3C: bne         $t9, $at, L_80056D88
    if (ctx->r25 != ctx->r1) {
        // 0x80056D40: nop
    
            goto L_80056D88;
    }
    // 0x80056D40: nop

    // 0x80056D44: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x80056D48: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80056D4C: lw          $a1, -0xDC0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XDC0);
    // 0x80056D50: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80056D54: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80056D58: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80056D5C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80056D60: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80056D64: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80056D68: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80056D6C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80056D70: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80056D74: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80056D78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80056D7C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x80056D80: jal         0x80057460
    // 0x80056D84: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_80057460(rdram, ctx);
        goto after_79;
    // 0x80056D84: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_79:
L_80056D88:
    // 0x80056D88: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x80056D8C: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x80056D90: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x80056D94: addiu       $t0, $t2, 0x1
    ctx->r8 = ADD32(ctx->r10, 0X1);
    // 0x80056D98: addiu       $t8, $t7, 0x19
    ctx->r24 = ADD32(ctx->r15, 0X19);
    // 0x80056D9C: sw          $t8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r24;
    // 0x80056DA0: sw          $t0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r8;
    // 0x80056DA4: lbu         $t3, 0x5($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X5);
    // 0x80056DA8: nop

    // 0x80056DAC: slt         $at, $t0, $t3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80056DB0: bne         $at, $zero, L_80056D24
    if (ctx->r1 != 0) {
        // 0x80056DB4: nop
    
            goto L_80056D24;
    }
    // 0x80056DB4: nop

L_80056DB8:
    // 0x80056DB8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80056DBC: lw          $t6, 0x150($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X150);
    // 0x80056DC0: nop

    // 0x80056DC4: slti        $at, $t6, 0x5B
    ctx->r1 = SIGNED(ctx->r14) < 0X5B ? 1 : 0;
    // 0x80056DC8: bne         $at, $zero, L_80056E80
    if (ctx->r1 != 0) {
        // 0x80056DCC: nop
    
            goto L_80056E80;
    }
    // 0x80056DCC: nop

    // 0x80056DD0: lw          $t4, 0xFC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XFC);
    // 0x80056DD4: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x80056DD8: sw          $t5, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r13;
    // 0x80056DDC: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x80056DE0: lbu         $t1, 0x5($t4)
    ctx->r9 = MEM_BU(ctx->r12, 0X5);
    // 0x80056DE4: nop

    // 0x80056DE8: blez        $t1, L_80056E80
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80056DEC: nop
    
            goto L_80056E80;
    }
    // 0x80056DEC: nop

L_80056DF0:
    // 0x80056DF0: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x80056DF4: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
    // 0x80056DF8: sll         $t7, $t2, 3
    ctx->r15 = S32(ctx->r10 << 3);
    // 0x80056DFC: subu        $t7, $t7, $t2
    ctx->r15 = SUB32(ctx->r15, ctx->r10);
    // 0x80056E00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80056E04: subu        $t7, $t7, $t2
    ctx->r15 = SUB32(ctx->r15, ctx->r10);
    // 0x80056E08: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80056E0C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80056E10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80056E14: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x80056E18: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80056E1C: jal         0x8007AA5C
    // 0x80056E20: addiu       $a0, $a0, 0x2D98
    ctx->r4 = ADD32(ctx->r4, 0X2D98);
    func_8007AA5C(rdram, ctx);
        goto after_80;
    // 0x80056E20: addiu       $a0, $a0, 0x2D98
    ctx->r4 = ADD32(ctx->r4, 0X2D98);
    after_80:
    // 0x80056E24: sw          $v0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r2;
    // 0x80056E28: lw          $t0, 0xF4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XF4);
    // 0x80056E2C: nop

    // 0x80056E30: beq         $t0, $zero, L_80056E50
    if (ctx->r8 == 0) {
        // 0x80056E34: nop
    
            goto L_80056E50;
    }
    // 0x80056E34: nop

    // 0x80056E38: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    // 0x80056E3C: jal         0x80078300
    // 0x80056E40: nop

    func_80078300(rdram, ctx);
        goto after_81;
    // 0x80056E40: nop

    after_81:
    // 0x80056E44: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80056E48: jal         0x80078300
    // 0x80056E4C: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    func_80078300(rdram, ctx);
        goto after_82;
    // 0x80056E4C: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    after_82:
L_80056E50:
    // 0x80056E50: lw          $t3, 0xAC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XAC);
    // 0x80056E54: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x80056E58: lw          $t1, 0xFC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XFC);
    // 0x80056E5C: addiu       $t6, $t3, 0x1
    ctx->r14 = ADD32(ctx->r11, 0X1);
    // 0x80056E60: addiu       $t4, $t5, 0x19
    ctx->r12 = ADD32(ctx->r13, 0X19);
    // 0x80056E64: sw          $t4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r12;
    // 0x80056E68: sw          $t6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r14;
    // 0x80056E6C: lbu         $t2, 0x5($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X5);
    // 0x80056E70: nop

    // 0x80056E74: slt         $at, $t6, $t2
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80056E78: bne         $at, $zero, L_80056DF0
    if (ctx->r1 != 0) {
        // 0x80056E7C: nop
    
            goto L_80056DF0;
    }
    // 0x80056E7C: nop

L_80056E80:
    // 0x80056E80: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80056E84: lw          $t7, 0x150($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X150);
    // 0x80056E88: nop

    // 0x80056E8C: slti        $at, $t7, 0x79
    ctx->r1 = SIGNED(ctx->r15) < 0X79 ? 1 : 0;
    // 0x80056E90: bne         $at, $zero, L_8005705C
    if (ctx->r1 != 0) {
        // 0x80056E94: nop
    
            goto L_8005705C;
    }
    // 0x80056E94: nop

    // 0x80056E98: lw          $t8, 0xFC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XFC);
    // 0x80056E9C: nop

    // 0x80056EA0: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x80056EA4: nop

    // 0x80056EA8: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x80056EAC: bne         $at, $zero, L_80056F4C
    if (ctx->r1 != 0) {
        // 0x80056EB0: nop
    
            goto L_80056F4C;
    }
    // 0x80056EB0: nop

    // 0x80056EB4: lw          $t0, 0x38($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X38);
    // 0x80056EB8: nop

    // 0x80056EBC: beq         $t0, $zero, L_8005705C
    if (ctx->r8 == 0) {
        // 0x80056EC0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8005705C;
    }
    // 0x80056EC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80056EC4: bne         $t0, $at, L_80056EE8
    if (ctx->r8 != ctx->r1) {
        // 0x80056EC8: nop
    
            goto L_80056EE8;
    }
    // 0x80056EC8: nop

    // 0x80056ECC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80056ED0: addiu       $a1, $a1, -0x2DE8
    ctx->r5 = ADD32(ctx->r5, -0X2DE8);
    // 0x80056ED4: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x80056ED8: jal         0x800B62D4
    // 0x80056EDC: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    sprintf_recomp(rdram, ctx);
        goto after_83;
    // 0x80056EDC: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    after_83:
    // 0x80056EE0: b           L_80056F00
    // 0x80056EE4: nop

        goto L_80056F00;
    // 0x80056EE4: nop

L_80056EE8:
    // 0x80056EE8: lw          $t3, 0xFC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XFC);
    // 0x80056EEC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80056EF0: lw          $a2, 0x38($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X38);
    // 0x80056EF4: addiu       $a1, $a1, -0x2DD4
    ctx->r5 = ADD32(ctx->r5, -0X2DD4);
    // 0x80056EF8: jal         0x800B62D4
    // 0x80056EFC: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    sprintf_recomp(rdram, ctx);
        goto after_84;
    // 0x80056EFC: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    after_84:
L_80056F00:
    // 0x80056F00: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80056F04: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80056F08: addiu       $t5, $sp, 0xB8
    ctx->r13 = ADD32(ctx->r29, 0XB8);
    // 0x80056F0C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80056F10: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80056F14: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80056F18: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80056F1C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80056F20: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80056F24: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80056F28: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80056F2C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80056F30: addiu       $a1, $a1, -0x70D8
    ctx->r5 = ADD32(ctx->r5, -0X70D8);
    // 0x80056F34: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80056F38: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    // 0x80056F3C: jal         0x80077960
    // 0x80056F40: addiu       $a3, $zero, 0xC6
    ctx->r7 = ADD32(0, 0XC6);
    func_80077960(rdram, ctx);
        goto after_85;
    // 0x80056F40: addiu       $a3, $zero, 0xC6
    ctx->r7 = ADD32(0, 0XC6);
    after_85:
    // 0x80056F44: b           L_8005705C
    // 0x80056F48: nop

        goto L_8005705C;
    // 0x80056F48: nop

L_80056F4C:
    // 0x80056F4C: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x80056F50: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x80056F54: lbu         $t9, 0x5($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X5);
    // 0x80056F58: nop

    // 0x80056F5C: blez        $t9, L_8005705C
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80056F60: nop
    
            goto L_8005705C;
    }
    // 0x80056F60: nop

L_80056F64:
    // 0x80056F64: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x80056F68: lw          $t3, 0xF8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF8);
    // 0x80056F6C: sll         $t0, $t8, 3
    ctx->r8 = S32(ctx->r24 << 3);
    // 0x80056F70: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x80056F74: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80056F78: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x80056F7C: lw          $t4, 0xFC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XFC);
    // 0x80056F80: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80056F84: addu        $t5, $t0, $t3
    ctx->r13 = ADD32(ctx->r8, ctx->r11);
    // 0x80056F88: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x80056F8C: addu        $t1, $t4, $t8
    ctx->r9 = ADD32(ctx->r12, ctx->r24);
    // 0x80056F90: lbu         $t6, 0x1($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X1);
    // 0x80056F94: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80056F98: bne         $t6, $at, L_80057038
    if (ctx->r14 != ctx->r1) {
        // 0x80056F9C: nop
    
            goto L_80057038;
    }
    // 0x80056F9C: nop

    // 0x80056FA0: lw          $t2, 0x38($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X38);
    // 0x80056FA4: nop

    // 0x80056FA8: beq         $t2, $zero, L_80057038
    if (ctx->r10 == 0) {
        // 0x80056FAC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80057038;
    }
    // 0x80056FAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80056FB0: bne         $t2, $at, L_80056FD8
    if (ctx->r10 != ctx->r1) {
        // 0x80056FB4: nop
    
            goto L_80056FD8;
    }
    // 0x80056FB4: nop

    // 0x80056FB8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80056FBC: addiu       $a1, $a1, -0x2DBC
    ctx->r5 = ADD32(ctx->r5, -0X2DBC);
    // 0x80056FC0: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x80056FC4: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x80056FC8: jal         0x800B62D4
    // 0x80056FCC: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    sprintf_recomp(rdram, ctx);
        goto after_86;
    // 0x80056FCC: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    after_86:
    // 0x80056FD0: b           L_80056FF4
    // 0x80056FD4: nop

        goto L_80056FF4;
    // 0x80056FD4: nop

L_80056FD8:
    // 0x80056FD8: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x80056FDC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80056FE0: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x80056FE4: lw          $a3, 0x38($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X38);
    // 0x80056FE8: addiu       $a1, $a1, -0x2DAC
    ctx->r5 = ADD32(ctx->r5, -0X2DAC);
    // 0x80056FEC: jal         0x800B62D4
    // 0x80056FF0: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    sprintf_recomp(rdram, ctx);
        goto after_87;
    // 0x80056FF0: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    after_87:
L_80056FF4:
    // 0x80056FF4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80056FF8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80056FFC: addiu       $t9, $sp, 0xB8
    ctx->r25 = ADD32(ctx->r29, 0XB8);
    // 0x80057000: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80057004: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80057008: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8005700C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80057010: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80057014: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80057018: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8005701C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80057020: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80057024: addiu       $a1, $a1, -0x70D8
    ctx->r5 = ADD32(ctx->r5, -0X70D8);
    // 0x80057028: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8005702C: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    // 0x80057030: jal         0x80077960
    // 0x80057034: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    func_80077960(rdram, ctx);
        goto after_88;
    // 0x80057034: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    after_88:
L_80057038:
    // 0x80057038: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x8005703C: lw          $t5, 0xFC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XFC);
    // 0x80057040: addiu       $t4, $t6, 0x1
    ctx->r12 = ADD32(ctx->r14, 0X1);
    // 0x80057044: sw          $t4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r12;
    // 0x80057048: lbu         $t2, 0x5($t5)
    ctx->r10 = MEM_BU(ctx->r13, 0X5);
    // 0x8005704C: nop

    // 0x80057050: slt         $at, $t4, $t2
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80057054: bne         $at, $zero, L_80056F64
    if (ctx->r1 != 0) {
        // 0x80057058: nop
    
            goto L_80056F64;
    }
    // 0x80057058: nop

L_8005705C:
    // 0x8005705C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80057060: jal         0x8005BE40
    // 0x80057064: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_89;
    // 0x80057064: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_89:
L_80057068:
    // 0x80057068: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8005706C: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x80057070: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x80057074: jr          $ra
    // 0x80057078: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    // 0x80057078: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    // 0x8005707C: nop

;}
RECOMP_FUNC void func_80057080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057080: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80057084: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80057088: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8005708C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80057090: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80057094: sh          $zero, 0x4($a0)
    MEM_H(0X4, ctx->r4) = 0;
    // 0x80057098: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x8005709C: sb          $t9, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r25;
    // 0x800570A0: sb          $t8, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r24;
    // 0x800570A4: sb          $t7, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r15;
    // 0x800570A8: jr          $ra
    // 0x800570AC: sb          $t6, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r14;
    return;
    // 0x800570AC: sb          $t6, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_800570B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800570B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800570B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800570B8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800570BC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800570C0: jal         0x8004A34C
    // 0x800570C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x800570C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x800570C8: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x800570CC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800570D0: jal         0x80074888
    // 0x800570D4: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_80074888(rdram, ctx);
        goto after_1;
    // 0x800570D4: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_1:
    // 0x800570D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800570DC: jal         0x8007E03C
    // 0x800570E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_2;
    // 0x800570E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800570E4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800570E8: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x800570EC: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x800570F0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800570F4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800570F8: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x800570FC: jal         0x800746C0
    // 0x80057100: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_800746C0(rdram, ctx);
        goto after_3;
    // 0x80057100: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_3:
    // 0x80057104: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80057108: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005710C: jr          $ra
    // 0x80057110: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80057110: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80057114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80057118: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8005711C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80057120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80057124: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x80057128: jal         0x8007E328
    // 0x8005712C: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x8005712C: nop

    after_0:
    // 0x80057130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80057134: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80057138: jr          $ra
    // 0x8005713C: nop

    return;
    // 0x8005713C: nop

;}
RECOMP_FUNC void func_80057140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057140: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80057144: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x80057148: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005714C: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80057150: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80057154: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057158: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005715C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80057160: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80057164: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x80057168: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8005716C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80057170: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80057174: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80057178: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8005717C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80057180: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80057184: lh          $t2, 0x6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X6);
    // 0x80057188: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x8005718C: lh          $a3, 0x4($t1)
    ctx->r7 = MEM_H(ctx->r9, 0X4);
    // 0x80057190: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80057194: lbu         $t3, 0x8($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X8);
    // 0x80057198: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005719C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x800571A0: lbu         $t4, 0x9($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X9);
    // 0x800571A4: nop

    // 0x800571A8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800571AC: lbu         $t5, 0xA($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0XA);
    // 0x800571B0: nop

    // 0x800571B4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x800571B8: lbu         $t6, 0xB($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0XB);
    // 0x800571BC: jal         0x80057460
    // 0x800571C0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    func_80057460(rdram, ctx);
        goto after_0;
    // 0x800571C0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_0:
    // 0x800571C4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800571C8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800571CC: jr          $ra
    // 0x800571D0: nop

    return;
    // 0x800571D0: nop

;}
RECOMP_FUNC void func_800571D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800571D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800571D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800571DC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800571E0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800571E4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800571E8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800571EC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800571F0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800571F4: jal         0x8004A34C
    // 0x800571F8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x800571F8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x800571FC: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80057200: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80057204: jal         0x80074888
    // 0x80057208: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_80074888(rdram, ctx);
        goto after_1;
    // 0x80057208: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_1:
    // 0x8005720C: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80057210: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80057214: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80057218: jal         0x80074888
    // 0x8005721C: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_80074888(rdram, ctx);
        goto after_2;
    // 0x8005721C: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_2:
    // 0x80057220: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80057224: jal         0x8007E03C
    // 0x80057228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_3;
    // 0x80057228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8005722C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80057230: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80057234: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x80057238: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8005723C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80057240: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x80057244: jal         0x800746C0
    // 0x80057248: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_800746C0(rdram, ctx);
        goto after_4;
    // 0x80057248: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_4:
    // 0x8005724C: jal         0x8007E03C
    // 0x80057250: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8007E03C(rdram, ctx);
        goto after_5;
    // 0x80057250: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80057254: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80057258: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8005725C: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x80057260: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80057264: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80057268: lw          $a1, 0x4($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X4);
    // 0x8005726C: jal         0x800746C0
    // 0x80057270: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_800746C0(rdram, ctx);
        goto after_6;
    // 0x80057270: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_6:
    // 0x80057274: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80057278: addiu       $t2, $zero, 0x400
    ctx->r10 = ADD32(0, 0X400);
    // 0x8005727C: sh          $zero, 0x8($t0)
    MEM_H(0X8, ctx->r8) = 0;
    // 0x80057280: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80057284: addiu       $t4, $zero, 0x400
    ctx->r12 = ADD32(0, 0X400);
    // 0x80057288: sh          $zero, 0xA($t1)
    MEM_H(0XA, ctx->r9) = 0;
    // 0x8005728C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80057290: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80057294: sh          $t2, 0xC($t3)
    MEM_H(0XC, ctx->r11) = ctx->r10;
    // 0x80057298: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8005729C: nop

    // 0x800572A0: sh          $t4, 0xE($t5)
    MEM_H(0XE, ctx->r13) = ctx->r12;
    // 0x800572A4: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800572A8: nop

    // 0x800572AC: sb          $t6, 0x13($t7)
    MEM_B(0X13, ctx->r15) = ctx->r14;
    // 0x800572B0: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800572B4: nop

    // 0x800572B8: lbu         $s3, 0x13($t8)
    ctx->r19 = MEM_BU(ctx->r24, 0X13);
    // 0x800572BC: nop

    // 0x800572C0: sb          $s3, 0x12($t8)
    MEM_B(0X12, ctx->r24) = ctx->r19;
    // 0x800572C4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800572C8: andi        $s2, $s3, 0xFF
    ctx->r18 = ctx->r19 & 0XFF;
    // 0x800572CC: sb          $s2, 0x11($t9)
    MEM_B(0X11, ctx->r25) = ctx->r18;
    // 0x800572D0: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800572D4: nop

    // 0x800572D8: sb          $s2, 0x10($t0)
    MEM_B(0X10, ctx->r8) = ctx->r18;
    // 0x800572DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800572E0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800572E4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800572E8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800572EC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800572F0: jr          $ra
    // 0x800572F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800572F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800572F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800572F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800572FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80057300: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80057304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80057308: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8005730C: jal         0x8007E328
    // 0x80057310: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x80057310: nop

    after_0:
    // 0x80057314: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80057318: nop

    // 0x8005731C: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    // 0x80057320: jal         0x8007E328
    // 0x80057324: nop

    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x80057324: nop

    after_1:
    // 0x80057328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005732C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80057330: jr          $ra
    // 0x80057334: nop

    return;
    // 0x80057334: nop

;}
RECOMP_FUNC void func_80057338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057338: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8005733C: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x80057340: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80057344: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x80057348: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8005734C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057350: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80057354: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80057358: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8005735C: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x80057360: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80057364: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80057368: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8005736C: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x80057370: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80057374: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80057378: nop

    // 0x8005737C: lh          $t2, 0xC($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC);
    // 0x80057380: nop

    // 0x80057384: bne         $t2, $at, L_800573E8
    if (ctx->r10 != ctx->r1) {
        // 0x80057388: nop
    
            goto L_800573E8;
    }
    // 0x80057388: nop

    // 0x8005738C: lh          $t3, 0xE($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XE);
    // 0x80057390: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x80057394: bne         $t3, $at, L_800573E8
    if (ctx->r11 != ctx->r1) {
        // 0x80057398: nop
    
            goto L_800573E8;
    }
    // 0x80057398: nop

    // 0x8005739C: lh          $t4, 0xA($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XA);
    // 0x800573A0: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x800573A4: lw          $a2, 0x4($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X4);
    // 0x800573A8: lh          $a3, 0x8($t1)
    ctx->r7 = MEM_H(ctx->r9, 0X8);
    // 0x800573AC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800573B0: lbu         $t5, 0x10($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X10);
    // 0x800573B4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800573B8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x800573BC: lbu         $t6, 0x11($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X11);
    // 0x800573C0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800573C4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800573C8: lbu         $t7, 0x12($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X12);
    // 0x800573CC: nop

    // 0x800573D0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800573D4: lbu         $t8, 0x13($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X13);
    // 0x800573D8: jal         0x80057460
    // 0x800573DC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    func_80057460(rdram, ctx);
        goto after_0;
    // 0x800573DC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_0:
    // 0x800573E0: b           L_8005744C
    // 0x800573E4: nop

        goto L_8005744C;
    // 0x800573E4: nop

L_800573E8:
    // 0x800573E8: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800573EC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800573F0: lh          $t0, 0xA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA);
    // 0x800573F4: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x800573F8: lw          $a2, 0x4($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X4);
    // 0x800573FC: lh          $a3, 0x8($t9)
    ctx->r7 = MEM_H(ctx->r25, 0X8);
    // 0x80057400: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80057404: lbu         $t2, 0x10($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X10);
    // 0x80057408: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8005740C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80057410: lbu         $t3, 0x11($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X11);
    // 0x80057414: nop

    // 0x80057418: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8005741C: lbu         $t4, 0x12($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0X12);
    // 0x80057420: nop

    // 0x80057424: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80057428: lbu         $t5, 0x13($t9)
    ctx->r13 = MEM_BU(ctx->r25, 0X13);
    // 0x8005742C: nop

    // 0x80057430: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80057434: lh          $t6, 0xC($t9)
    ctx->r14 = MEM_H(ctx->r25, 0XC);
    // 0x80057438: nop

    // 0x8005743C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80057440: lh          $t7, 0xE($t9)
    ctx->r15 = MEM_H(ctx->r25, 0XE);
    // 0x80057444: jal         0x8005DB90
    // 0x80057448: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    func_8005DB90(rdram, ctx);
        goto after_1;
    // 0x80057448: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_1:
L_8005744C:
    // 0x8005744C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80057450: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80057454: jr          $ra
    // 0x80057458: nop

    return;
    // 0x80057458: nop

    // 0x8005745C: nop

;}
RECOMP_FUNC void func_80057460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057460: beq         $a1, $zero, L_80059040
    if (ctx->r5 == 0) {
        // 0x80057464: addiu       $sp, $sp, -0x168
        ctx->r29 = ADD32(ctx->r29, -0X168);
            goto L_80059040;
    }
    // 0x80057464: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    // 0x80057468: lw          $t6, 0x188($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X188);
    // 0x8005746C: nop

    // 0x80057470: beq         $t6, $zero, L_80059040
    if (ctx->r14 == 0) {
        // 0x80057474: nop
    
            goto L_80059040;
    }
    // 0x80057474: nop

    // 0x80057478: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x8005747C: nop

    // 0x80057480: sw          $t7, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r15;
    // 0x80057484: lhu         $t8, 0x2($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X2);
    // 0x80057488: lw          $t1, 0x15C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X15C);
    // 0x8005748C: sw          $t8, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r24;
    // 0x80057490: lhu         $t9, 0x4($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X4);
    // 0x80057494: blez        $t1, L_80059040
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80057498: sw          $t9, 0x154($sp)
        MEM_W(0X154, ctx->r29) = ctx->r25;
            goto L_80059040;
    }
    // 0x80057498: sw          $t9, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r25;
    // 0x8005749C: lw          $t2, 0x158($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X158);
    // 0x800574A0: nop

    // 0x800574A4: blez        $t2, L_80059040
    if (SIGNED(ctx->r10) <= 0) {
        // 0x800574A8: nop
    
            goto L_80059040;
    }
    // 0x800574A8: nop

    // 0x800574AC: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800574B0: lh          $t3, 0x164($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X164);
    // 0x800574B4: lw          $t4, 0x154($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X154);
    // 0x800574B8: nop

    // 0x800574BC: beq         $t3, $t4, L_80057728
    if (ctx->r11 == ctx->r12) {
        // 0x800574C0: nop
    
            goto L_80057728;
    }
    // 0x800574C0: nop

    // 0x800574C4: or          $t0, $t4, $zero
    ctx->r8 = ctx->r12 | 0;
    // 0x800574C8: beq         $t0, $zero, L_800574F0
    if (ctx->r8 == 0) {
        // 0x800574CC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800574F0;
    }
    // 0x800574CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800574D0: beq         $t0, $at, L_80057570
    if (ctx->r8 == ctx->r1) {
        // 0x800574D4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80057570;
    }
    // 0x800574D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800574D8: beq         $t0, $at, L_80057530
    if (ctx->r8 == ctx->r1) {
        // 0x800574DC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80057530;
    }
    // 0x800574DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800574E0: beq         $t0, $at, L_800575B0
    if (ctx->r8 == ctx->r1) {
        // 0x800574E4: nop
    
            goto L_800575B0;
    }
    // 0x800574E4: nop

    // 0x800574E8: b           L_80059040
    // 0x800574EC: nop

        goto L_80059040;
    // 0x800574EC: nop

L_800574F0:
    // 0x800574F0: addiu       $t5, $zero, 0x800
    ctx->r13 = ADD32(0, 0X800);
    // 0x800574F4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800574F8: sw          $t5, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r13;
    // 0x800574FC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80057500: lui         $t9, 0xE300
    ctx->r25 = S32(0XE300 << 16);
    // 0x80057504: sw          $t6, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r14;
    // 0x80057508: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005750C: ori         $t9, $t9, 0x1001
    ctx->r25 = ctx->r25 | 0X1001;
    // 0x80057510: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80057514: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80057518: lw          $t1, 0x150($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X150);
    // 0x8005751C: nop

    // 0x80057520: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x80057524: lw          $t2, 0x150($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X150);
    // 0x80057528: b           L_80057870
    // 0x8005752C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
        goto L_80057870;
    // 0x8005752C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
L_80057530:
    // 0x80057530: addiu       $t3, $zero, 0x800
    ctx->r11 = ADD32(0, 0X800);
    // 0x80057534: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80057538: sw          $t3, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r11;
    // 0x8005753C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80057540: lui         $t7, 0xE300
    ctx->r15 = S32(0XE300 << 16);
    // 0x80057544: sw          $t4, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r12;
    // 0x80057548: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005754C: ori         $t7, $t7, 0x1001
    ctx->r15 = ctx->r15 | 0X1001;
    // 0x80057550: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x80057554: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80057558: lw          $t8, 0x14C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14C);
    // 0x8005755C: nop

    // 0x80057560: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x80057564: lw          $t9, 0x14C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14C);
    // 0x80057568: b           L_80057870
    // 0x8005756C: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
        goto L_80057870;
    // 0x8005756C: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
L_80057570:
    // 0x80057570: addiu       $t1, $zero, 0x1000
    ctx->r9 = ADD32(0, 0X1000);
    // 0x80057574: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80057578: sw          $t1, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r9;
    // 0x8005757C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80057580: lui         $t5, 0xE300
    ctx->r13 = S32(0XE300 << 16);
    // 0x80057584: sw          $t2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r10;
    // 0x80057588: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005758C: ori         $t5, $t5, 0x1001
    ctx->r13 = ctx->r13 | 0X1001;
    // 0x80057590: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80057594: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x80057598: lw          $t6, 0x148($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X148);
    // 0x8005759C: nop

    // 0x800575A0: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x800575A4: lw          $t7, 0x148($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X148);
    // 0x800575A8: b           L_80057870
    // 0x800575AC: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
        goto L_80057870;
    // 0x800575AC: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
L_800575B0:
    // 0x800575B0: addiu       $t8, $zero, 0x800
    ctx->r24 = ADD32(0, 0X800);
    // 0x800575B4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800575B8: sw          $t8, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r24;
    // 0x800575BC: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x800575C0: lui         $t3, 0xE300
    ctx->r11 = S32(0XE300 << 16);
    // 0x800575C4: sw          $t9, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r25;
    // 0x800575C8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x800575CC: ori         $t3, $t3, 0x1001
    ctx->r11 = ctx->r11 | 0X1001;
    // 0x800575D0: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x800575D4: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x800575D8: lw          $t4, 0x144($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X144);
    // 0x800575DC: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x800575E0: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x800575E4: lw          $t6, 0x144($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X144);
    // 0x800575E8: lui         $t1, 0xFD10
    ctx->r9 = S32(0XFD10 << 16);
    // 0x800575EC: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x800575F0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800575F4: nop

    // 0x800575F8: sw          $t7, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r15;
    // 0x800575FC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80057600: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x80057604: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80057608: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005760C: lw          $t2, 0x140($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X140);
    // 0x80057610: nop

    // 0x80057614: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80057618: lw          $t3, 0x140($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X140);
    // 0x8005761C: nop

    // 0x80057620: sw          $a2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r6;
    // 0x80057624: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80057628: nop

    // 0x8005762C: sw          $t4, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r12;
    // 0x80057630: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80057634: lui         $t4, 0xF500
    ctx->r12 = S32(0XF500 << 16);
    // 0x80057638: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8005763C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80057640: lw          $t8, 0x13C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X13C);
    // 0x80057644: ori         $t4, $t4, 0x100
    ctx->r12 = ctx->r12 | 0X100;
    // 0x80057648: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005764C: lw          $t9, 0x13C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X13C);
    // 0x80057650: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x80057654: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x80057658: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005765C: nop

    // 0x80057660: sw          $t1, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r9;
    // 0x80057664: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80057668: nop

    // 0x8005766C: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80057670: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80057674: lw          $t5, 0x138($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X138);
    // 0x80057678: lui         $t2, 0xE600
    ctx->r10 = S32(0XE600 << 16);
    // 0x8005767C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80057680: lw          $t7, 0x138($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X138);
    // 0x80057684: nop

    // 0x80057688: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8005768C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80057690: nop

    // 0x80057694: sw          $t8, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r24;
    // 0x80057698: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005769C: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x800576A0: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x800576A4: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x800576A8: lw          $t3, 0x134($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X134);
    // 0x800576AC: lui         $t1, 0x73F
    ctx->r9 = S32(0X73F << 16);
    // 0x800576B0: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x800576B4: lw          $t4, 0x134($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X134);
    // 0x800576B8: ori         $t1, $t1, 0xC000
    ctx->r9 = ctx->r9 | 0XC000;
    // 0x800576BC: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x800576C0: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x800576C4: nop

    // 0x800576C8: sw          $t5, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r13;
    // 0x800576CC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800576D0: nop

    // 0x800576D4: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x800576D8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800576DC: lw          $t9, 0x130($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X130);
    // 0x800576E0: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x800576E4: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800576E8: lw          $t2, 0x130($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X130);
    // 0x800576EC: nop

    // 0x800576F0: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x800576F4: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x800576F8: nop

    // 0x800576FC: sw          $t3, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r11;
    // 0x80057700: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80057704: nop

    // 0x80057708: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8005770C: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x80057710: lw          $t7, 0x12C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X12C);
    // 0x80057714: nop

    // 0x80057718: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8005771C: lw          $t8, 0x12C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X12C);
    // 0x80057720: b           L_80057870
    // 0x80057724: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
        goto L_80057870;
    // 0x80057724: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
L_80057728:
    // 0x80057728: lw          $t9, 0x154($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X154);
    // 0x8005772C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80057730: bne         $t9, $at, L_80057870
    if (ctx->r25 != ctx->r1) {
        // 0x80057734: nop
    
            goto L_80057870;
    }
    // 0x80057734: nop

    // 0x80057738: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005773C: lui         $t4, 0xFD10
    ctx->r12 = S32(0XFD10 << 16);
    // 0x80057740: sw          $t1, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r9;
    // 0x80057744: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80057748: lui         $t1, 0xE800
    ctx->r9 = S32(0XE800 << 16);
    // 0x8005774C: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80057750: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80057754: lw          $t5, 0x128($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X128);
    // 0x80057758: nop

    // 0x8005775C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80057760: lw          $t6, 0x128($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X128);
    // 0x80057764: nop

    // 0x80057768: sw          $a2, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r6;
    // 0x8005776C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80057770: nop

    // 0x80057774: sw          $t7, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r15;
    // 0x80057778: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005777C: lui         $t7, 0xF500
    ctx->r15 = S32(0XF500 << 16);
    // 0x80057780: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80057784: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80057788: lw          $t2, 0x124($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X124);
    // 0x8005778C: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x80057790: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80057794: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
    // 0x80057798: lui         $t9, 0x700
    ctx->r25 = S32(0X700 << 16);
    // 0x8005779C: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x800577A0: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x800577A4: nop

    // 0x800577A8: sw          $t4, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r12;
    // 0x800577AC: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x800577B0: nop

    // 0x800577B4: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x800577B8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800577BC: lw          $t8, 0x120($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X120);
    // 0x800577C0: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x800577C4: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x800577C8: lw          $t1, 0x120($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X120);
    // 0x800577CC: nop

    // 0x800577D0: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x800577D4: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x800577D8: nop

    // 0x800577DC: sw          $t2, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r10;
    // 0x800577E0: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x800577E4: lui         $t2, 0xF000
    ctx->r10 = S32(0XF000 << 16);
    // 0x800577E8: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x800577EC: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x800577F0: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x800577F4: lui         $t4, 0x73F
    ctx->r12 = S32(0X73F << 16);
    // 0x800577F8: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x800577FC: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x80057800: ori         $t4, $t4, 0xC000
    ctx->r12 = ctx->r12 | 0XC000;
    // 0x80057804: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x80057808: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005780C: nop

    // 0x80057810: sw          $t8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r24;
    // 0x80057814: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80057818: nop

    // 0x8005781C: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x80057820: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80057824: lw          $t3, 0x118($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X118);
    // 0x80057828: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8005782C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80057830: lw          $t5, 0x118($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X118);
    // 0x80057834: nop

    // 0x80057838: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8005783C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80057840: nop

    // 0x80057844: sw          $t6, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r14;
    // 0x80057848: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005784C: nop

    // 0x80057850: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80057854: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80057858: lw          $t1, 0x114($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X114);
    // 0x8005785C: nop

    // 0x80057860: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x80057864: lw          $t2, 0x114($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X114);
    // 0x80057868: nop

    // 0x8005786C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
L_80057870:
    // 0x80057870: lw          $t4, 0x15C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X15C);
    // 0x80057874: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80057878: lw          $t3, 0x160($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X160);
    // 0x8005787C: addiu       $t5, $t4, 0x3
    ctx->r13 = ADD32(ctx->r12, 0X3);
    // 0x80057880: andi        $t6, $t5, 0xFFFC
    ctx->r14 = ctx->r13 & 0XFFFC;
    // 0x80057884: div         $zero, $t3, $t6
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r14)));
    // 0x80057888: bne         $t6, $zero, L_80057894
    if (ctx->r14 != 0) {
        // 0x8005788C: nop
    
            goto L_80057894;
    }
    // 0x8005788C: nop

    // 0x80057890: break       7
    do_break(2147842192);
L_80057894:
    // 0x80057894: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80057898: bne         $t6, $at, L_800578AC
    if (ctx->r14 != ctx->r1) {
        // 0x8005789C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800578AC;
    }
    // 0x8005789C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800578A0: bne         $t3, $at, L_800578AC
    if (ctx->r11 != ctx->r1) {
        // 0x800578A4: nop
    
            goto L_800578AC;
    }
    // 0x800578A4: nop

    // 0x800578A8: break       6
    do_break(2147842216);
L_800578AC:
    // 0x800578AC: mflo        $t7
    ctx->r15 = lo;
    // 0x800578B0: sw          $t7, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r15;
    // 0x800578B4: blez        $t7, L_80059040
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800578B8: nop
    
            goto L_80059040;
    }
    // 0x800578B8: nop

    // 0x800578BC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800578C0: lbu         $t8, 0x168($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X168);
    // 0x800578C4: lw          $t9, 0x17C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X17C);
    // 0x800578C8: nop

    // 0x800578CC: bne         $t8, $t9, L_80057934
    if (ctx->r24 != ctx->r25) {
        // 0x800578D0: nop
    
            goto L_80057934;
    }
    // 0x800578D0: nop

    // 0x800578D4: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x800578D8: lbu         $t1, 0x16C($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X16C);
    // 0x800578DC: lw          $t2, 0x180($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X180);
    // 0x800578E0: nop

    // 0x800578E4: bne         $t1, $t2, L_80057934
    if (ctx->r9 != ctx->r10) {
        // 0x800578E8: nop
    
            goto L_80057934;
    }
    // 0x800578E8: nop

    // 0x800578EC: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x800578F0: lbu         $t4, 0x170($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X170);
    // 0x800578F4: lw          $t5, 0x184($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X184);
    // 0x800578F8: nop

    // 0x800578FC: bne         $t4, $t5, L_80057934
    if (ctx->r12 != ctx->r13) {
        // 0x80057900: nop
    
            goto L_80057934;
    }
    // 0x80057900: nop

    // 0x80057904: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80057908: lbu         $t3, 0x174($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X174);
    // 0x8005790C: lw          $t6, 0x188($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X188);
    // 0x80057910: nop

    // 0x80057914: bne         $t3, $t6, L_80057934
    if (ctx->r11 != ctx->r14) {
        // 0x80057918: nop
    
            goto L_80057934;
    }
    // 0x80057918: nop

    // 0x8005791C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80057920: lh          $t7, 0x164($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X164);
    // 0x80057924: lw          $t8, 0x154($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X154);
    // 0x80057928: nop

    // 0x8005792C: beq         $t7, $t8, L_80057AE0
    if (ctx->r15 == ctx->r24) {
        // 0x80057930: nop
    
            goto L_80057AE0;
    }
    // 0x80057930: nop

L_80057934:
    // 0x80057934: lw          $t9, 0x188($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X188);
    // 0x80057938: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005793C: bne         $t9, $at, L_800579AC
    if (ctx->r25 != ctx->r1) {
        // 0x80057940: nop
    
            goto L_800579AC;
    }
    // 0x80057940: nop

    // 0x80057944: lw          $t1, 0x17C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X17C);
    // 0x80057948: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005794C: bne         $t1, $at, L_800579AC
    if (ctx->r9 != ctx->r1) {
        // 0x80057950: nop
    
            goto L_800579AC;
    }
    // 0x80057950: nop

    // 0x80057954: lw          $t2, 0x180($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X180);
    // 0x80057958: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005795C: bne         $t2, $at, L_800579AC
    if (ctx->r10 != ctx->r1) {
        // 0x80057960: nop
    
            goto L_800579AC;
    }
    // 0x80057960: nop

    // 0x80057964: lw          $t4, 0x184($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X184);
    // 0x80057968: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005796C: bne         $t4, $at, L_800579AC
    if (ctx->r12 != ctx->r1) {
        // 0x80057970: nop
    
            goto L_800579AC;
    }
    // 0x80057970: nop

    // 0x80057974: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80057978: lui         $t7, 0xFCFF
    ctx->r15 = S32(0XFCFF << 16);
    // 0x8005797C: sw          $t5, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r13;
    // 0x80057980: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80057984: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x80057988: addiu       $t6, $t3, 0x8
    ctx->r14 = ADD32(ctx->r11, 0X8);
    // 0x8005798C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80057990: lw          $t8, 0x110($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X110);
    // 0x80057994: lui         $t9, 0xFFFC
    ctx->r25 = S32(0XFFFC << 16);
    // 0x80057998: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005799C: lw          $t1, 0x110($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X110);
    // 0x800579A0: ori         $t9, $t9, 0xF279
    ctx->r25 = ctx->r25 | 0XF279;
    // 0x800579A4: b           L_80057AB0
    // 0x800579A8: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
        goto L_80057AB0;
    // 0x800579A8: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
L_800579AC:
    // 0x800579AC: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x800579B0: lbu         $t2, 0x168($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X168);
    // 0x800579B4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800579B8: bne         $t2, $at, L_800579FC
    if (ctx->r10 != ctx->r1) {
        // 0x800579BC: nop
    
            goto L_800579FC;
    }
    // 0x800579BC: nop

    // 0x800579C0: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x800579C4: lbu         $t4, 0x16C($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X16C);
    // 0x800579C8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800579CC: bne         $t4, $at, L_800579FC
    if (ctx->r12 != ctx->r1) {
        // 0x800579D0: nop
    
            goto L_800579FC;
    }
    // 0x800579D0: nop

    // 0x800579D4: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x800579D8: lbu         $t5, 0x170($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X170);
    // 0x800579DC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800579E0: bne         $t5, $at, L_800579FC
    if (ctx->r13 != ctx->r1) {
        // 0x800579E4: nop
    
            goto L_800579FC;
    }
    // 0x800579E4: nop

    // 0x800579E8: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800579EC: lbu         $t3, 0x174($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X174);
    // 0x800579F0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800579F4: beq         $t3, $at, L_80057A14
    if (ctx->r11 == ctx->r1) {
        // 0x800579F8: nop
    
            goto L_80057A14;
    }
    // 0x800579F8: nop

L_800579FC:
    // 0x800579FC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80057A00: lh          $t6, 0x164($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X164);
    // 0x80057A04: lw          $t7, 0x154($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X154);
    // 0x80057A08: nop

    // 0x80057A0C: beq         $t6, $t7, L_80057A48
    if (ctx->r14 == ctx->r15) {
        // 0x80057A10: nop
    
            goto L_80057A48;
    }
    // 0x80057A10: nop

L_80057A14:
    // 0x80057A14: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80057A18: lui         $t2, 0xFC11
    ctx->r10 = S32(0XFC11 << 16);
    // 0x80057A1C: sw          $t8, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r24;
    // 0x80057A20: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80057A24: ori         $t2, $t2, 0x9623
    ctx->r10 = ctx->r10 | 0X9623;
    // 0x80057A28: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x80057A2C: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80057A30: lw          $t4, 0x10C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10C);
    // 0x80057A34: lui         $t5, 0xFF2F
    ctx->r13 = S32(0XFF2F << 16);
    // 0x80057A38: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x80057A3C: lw          $t3, 0x10C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10C);
    // 0x80057A40: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x80057A44: sw          $t5, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r13;
L_80057A48:
    // 0x80057A48: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80057A4C: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x80057A50: sw          $t6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r14;
    // 0x80057A54: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80057A58: nop

    // 0x80057A5C: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80057A60: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80057A64: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x80057A68: nop

    // 0x80057A6C: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x80057A70: lw          $t3, 0x180($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X180);
    // 0x80057A74: lw          $t2, 0x17C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X17C);
    // 0x80057A78: lw          $t9, 0x184($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X184);
    // 0x80057A7C: andi        $t6, $t3, 0xFF
    ctx->r14 = ctx->r11 & 0XFF;
    // 0x80057A80: andi        $t4, $t2, 0xFF
    ctx->r12 = ctx->r10 & 0XFF;
    // 0x80057A84: sll         $t5, $t4, 24
    ctx->r13 = S32(ctx->r12 << 24);
    // 0x80057A88: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80057A8C: lw          $t3, 0x188($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X188);
    // 0x80057A90: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x80057A94: andi        $t1, $t9, 0xFF
    ctx->r9 = ctx->r25 & 0XFF;
    // 0x80057A98: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x80057A9C: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
    // 0x80057AA0: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x80057AA4: andi        $t6, $t3, 0xFF
    ctx->r14 = ctx->r11 & 0XFF;
    // 0x80057AA8: or          $t5, $t4, $t6
    ctx->r13 = ctx->r12 | ctx->r14;
    // 0x80057AAC: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
L_80057AB0:
    // 0x80057AB0: lw          $t9, 0x17C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X17C);
    // 0x80057AB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80057AB8: lw          $t1, 0x180($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X180);
    // 0x80057ABC: sb          $t9, 0x168($at)
    MEM_B(0X168, ctx->r1) = ctx->r25;
    // 0x80057AC0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80057AC4: lw          $t8, 0x184($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X184);
    // 0x80057AC8: sb          $t1, 0x16C($at)
    MEM_B(0X16C, ctx->r1) = ctx->r9;
    // 0x80057ACC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80057AD0: lw          $t2, 0x188($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X188);
    // 0x80057AD4: sb          $t8, 0x170($at)
    MEM_B(0X170, ctx->r1) = ctx->r24;
    // 0x80057AD8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80057ADC: sb          $t2, 0x174($at)
    MEM_B(0X174, ctx->r1) = ctx->r10;
L_80057AE0:
    // 0x80057AE0: lw          $t3, 0x154($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X154);
    // 0x80057AE4: lw          $t4, 0x158($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X158);
    // 0x80057AE8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80057AEC: sh          $t3, 0x164($at)
    MEM_H(0X164, ctx->r1) = ctx->r11;
    // 0x80057AF0: beq         $t4, $zero, L_8005900C
    if (ctx->r12 == 0) {
        // 0x80057AF4: sw          $t4, 0x160($sp)
        MEM_W(0X160, ctx->r29) = ctx->r12;
            goto L_8005900C;
    }
    // 0x80057AF4: sw          $t4, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r12;
L_80057AF8:
    // 0x80057AF8: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    // 0x80057AFC: lw          $t5, 0x164($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X164);
    // 0x80057B00: nop

    // 0x80057B04: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80057B08: beq         $at, $zero, L_800585D8
    if (ctx->r1 == 0) {
        // 0x80057B0C: nop
    
            goto L_800585D8;
    }
    // 0x80057B0C: nop

    // 0x80057B10: lw          $t0, 0x154($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X154);
    // 0x80057B14: nop

    // 0x80057B18: beq         $t0, $zero, L_80057B40
    if (ctx->r8 == 0) {
        // 0x80057B1C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80057B40;
    }
    // 0x80057B1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80057B20: beq         $t0, $at, L_80057D8C
    if (ctx->r8 == ctx->r1) {
        // 0x80057B24: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80057D8C;
    }
    // 0x80057B24: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80057B28: beq         $t0, $at, L_80057FDC
    if (ctx->r8 == ctx->r1) {
        // 0x80057B2C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80057FDC;
    }
    // 0x80057B2C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80057B30: beq         $t0, $at, L_80058220
    if (ctx->r8 == ctx->r1) {
        // 0x80057B34: nop
    
            goto L_80058220;
    }
    // 0x80057B34: nop

    // 0x80057B38: b           L_80058460
    // 0x80057B3C: nop

        goto L_80058460;
    // 0x80057B3C: nop

L_80057B40:
    // 0x80057B40: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80057B44: lui         $at, 0xFD10
    ctx->r1 = S32(0XFD10 << 16);
    // 0x80057B48: sw          $t7, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r15;
    // 0x80057B4C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80057B50: addiu       $t5, $a1, 0x8
    ctx->r13 = ADD32(ctx->r5, 0X8);
    // 0x80057B54: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x80057B58: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80057B5C: lw          $t8, 0x15C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X15C);
    // 0x80057B60: lw          $t6, 0x104($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X104);
    // 0x80057B64: addiu       $t2, $t8, -0x1
    ctx->r10 = ADD32(ctx->r24, -0X1);
    // 0x80057B68: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x80057B6C: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x80057B70: sw          $t4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r12;
    // 0x80057B74: lw          $t7, 0x104($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X104);
    // 0x80057B78: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x80057B7C: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
    // 0x80057B80: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80057B84: nop

    // 0x80057B88: sw          $t9, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r25;
    // 0x80057B8C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80057B90: nop

    // 0x80057B94: addiu       $t8, $t1, 0x8
    ctx->r24 = ADD32(ctx->r9, 0X8);
    // 0x80057B98: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80057B9C: lw          $t2, 0x15C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X15C);
    // 0x80057BA0: lw          $t1, 0x100($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X100);
    // 0x80057BA4: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80057BA8: addiu       $t4, $t3, 0x7
    ctx->r12 = ADD32(ctx->r11, 0X7);
    // 0x80057BAC: sra         $t6, $t4, 3
    ctx->r14 = S32(SIGNED(ctx->r12) >> 3);
    // 0x80057BB0: andi        $t5, $t6, 0x1FF
    ctx->r13 = ctx->r14 & 0X1FF;
    // 0x80057BB4: sll         $t7, $t5, 9
    ctx->r15 = S32(ctx->r13 << 9);
    // 0x80057BB8: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x80057BBC: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x80057BC0: lw          $t2, 0x100($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X100);
    // 0x80057BC4: lui         $t8, 0x708
    ctx->r24 = S32(0X708 << 16);
    // 0x80057BC8: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x80057BCC: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x80057BD0: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80057BD4: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x80057BD8: sw          $t3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r11;
    // 0x80057BDC: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80057BE0: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80057BE4: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x80057BE8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80057BEC: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x80057BF0: nop

    // 0x80057BF4: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x80057BF8: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x80057BFC: nop

    // 0x80057C00: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x80057C04: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80057C08: nop

    // 0x80057C0C: sw          $t1, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r9;
    // 0x80057C10: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80057C14: nop

    // 0x80057C18: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x80057C1C: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80057C20: lw          $t4, 0x160($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X160);
    // 0x80057C24: lw          $t3, 0x158($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X158);
    // 0x80057C28: lw          $t1, 0xF8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF8);
    // 0x80057C2C: subu        $t6, $t3, $t4
    ctx->r14 = SUB32(ctx->r11, ctx->r12);
    // 0x80057C30: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80057C34: andi        $t7, $t5, 0xFFF
    ctx->r15 = ctx->r13 & 0XFFF;
    // 0x80057C38: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x80057C3C: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x80057C40: lw          $t2, 0x160($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X160);
    // 0x80057C44: lw          $t8, 0x158($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X158);
    // 0x80057C48: lw          $t1, 0x15C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X15C);
    // 0x80057C4C: lw          $t4, 0x164($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X164);
    // 0x80057C50: subu        $t3, $t8, $t2
    ctx->r11 = SUB32(ctx->r24, ctx->r10);
    // 0x80057C54: addiu       $t8, $t1, -0x1
    ctx->r24 = ADD32(ctx->r9, -0X1);
    // 0x80057C58: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x80057C5C: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x80057C60: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80057C64: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x80057C68: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80057C6C: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x80057C70: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x80057C74: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80057C78: lw          $t7, 0xF8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF8);
    // 0x80057C7C: or          $t6, $t4, $at
    ctx->r14 = ctx->r12 | ctx->r1;
    // 0x80057C80: or          $t5, $t6, $t9
    ctx->r13 = ctx->r14 | ctx->r25;
    // 0x80057C84: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
    // 0x80057C88: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80057C8C: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x80057C90: sw          $t1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r9;
    // 0x80057C94: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80057C98: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x80057C9C: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x80057CA0: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80057CA4: lw          $t4, 0xF4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XF4);
    // 0x80057CA8: nop

    // 0x80057CAC: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80057CB0: lw          $t6, 0xF4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF4);
    // 0x80057CB4: nop

    // 0x80057CB8: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x80057CBC: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80057CC0: nop

    // 0x80057CC4: sw          $t9, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r25;
    // 0x80057CC8: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80057CCC: nop

    // 0x80057CD0: addiu       $t7, $t5, 0x8
    ctx->r15 = ADD32(ctx->r13, 0X8);
    // 0x80057CD4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80057CD8: lw          $t1, 0x15C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X15C);
    // 0x80057CDC: lw          $t5, 0xF0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF0);
    // 0x80057CE0: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x80057CE4: addiu       $t2, $t8, 0x7
    ctx->r10 = ADD32(ctx->r24, 0X7);
    // 0x80057CE8: sra         $t3, $t2, 3
    ctx->r11 = S32(SIGNED(ctx->r10) >> 3);
    // 0x80057CEC: andi        $t4, $t3, 0x1FF
    ctx->r12 = ctx->r11 & 0X1FF;
    // 0x80057CF0: sll         $t6, $t4, 9
    ctx->r14 = S32(ctx->r12 << 9);
    // 0x80057CF4: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x80057CF8: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x80057CFC: lw          $t1, 0xF0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF0);
    // 0x80057D00: lui         $t7, 0x8
    ctx->r15 = S32(0X8 << 16);
    // 0x80057D04: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x80057D08: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x80057D0C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80057D10: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80057D14: sw          $t8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r24;
    // 0x80057D18: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80057D1C: nop

    // 0x80057D20: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80057D24: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80057D28: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    // 0x80057D2C: lw          $t4, 0x158($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X158);
    // 0x80057D30: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x80057D34: subu        $t9, $t4, $t6
    ctx->r25 = SUB32(ctx->r12, ctx->r14);
    // 0x80057D38: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x80057D3C: andi        $t7, $t5, 0xFFF
    ctx->r15 = ctx->r13 & 0XFFF;
    // 0x80057D40: or          $t1, $t7, $at
    ctx->r9 = ctx->r15 | ctx->r1;
    // 0x80057D44: sw          $t1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r9;
    // 0x80057D48: lw          $t3, 0x160($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X160);
    // 0x80057D4C: lw          $t2, 0x158($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X158);
    // 0x80057D50: lw          $t6, 0x164($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X164);
    // 0x80057D54: lw          $t8, 0x15C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X15C);
    // 0x80057D58: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x80057D5C: addu        $t9, $t4, $t6
    ctx->r25 = ADD32(ctx->r12, ctx->r14);
    // 0x80057D60: addiu       $t5, $t9, -0x1
    ctx->r13 = ADD32(ctx->r25, -0X1);
    // 0x80057D64: addiu       $t2, $t8, -0x1
    ctx->r10 = ADD32(ctx->r24, -0X1);
    // 0x80057D68: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80057D6C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80057D70: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x80057D74: lw          $t5, 0xEC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XEC);
    // 0x80057D78: sll         $t6, $t4, 12
    ctx->r14 = S32(ctx->r12 << 12);
    // 0x80057D7C: andi        $t1, $t7, 0xFFF
    ctx->r9 = ctx->r15 & 0XFFF;
    // 0x80057D80: or          $t9, $t6, $t1
    ctx->r25 = ctx->r14 | ctx->r9;
    // 0x80057D84: b           L_80058460
    // 0x80057D88: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
        goto L_80058460;
    // 0x80057D88: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
L_80057D8C:
    // 0x80057D8C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80057D90: lui         $at, 0xFD88
    ctx->r1 = S32(0XFD88 << 16);
    // 0x80057D94: sw          $t7, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r15;
    // 0x80057D98: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80057D9C: addiu       $t7, $a1, 0x8
    ctx->r15 = ADD32(ctx->r5, 0X8);
    // 0x80057DA0: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x80057DA4: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80057DA8: lw          $t3, 0x15C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X15C);
    // 0x80057DAC: lw          $t5, 0xE8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE8);
    // 0x80057DB0: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x80057DB4: addiu       $t6, $t4, -0x1
    ctx->r14 = ADD32(ctx->r12, -0X1);
    // 0x80057DB8: andi        $t1, $t6, 0xFFF
    ctx->r9 = ctx->r14 & 0XFFF;
    // 0x80057DBC: or          $t9, $t1, $at
    ctx->r25 = ctx->r9 | ctx->r1;
    // 0x80057DC0: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x80057DC4: lw          $t8, 0xE8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE8);
    // 0x80057DC8: lui         $at, 0xF588
    ctx->r1 = S32(0XF588 << 16);
    // 0x80057DCC: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x80057DD0: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80057DD4: nop

    // 0x80057DD8: sw          $t2, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r10;
    // 0x80057DDC: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80057DE0: nop

    // 0x80057DE4: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80057DE8: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x80057DEC: lw          $t6, 0x15C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X15C);
    // 0x80057DF0: lw          $t3, 0xE4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE4);
    // 0x80057DF4: sra         $t1, $t6, 1
    ctx->r9 = S32(SIGNED(ctx->r14) >> 1);
    // 0x80057DF8: addiu       $t9, $t1, 0x7
    ctx->r25 = ADD32(ctx->r9, 0X7);
    // 0x80057DFC: sra         $t5, $t9, 3
    ctx->r13 = S32(SIGNED(ctx->r25) >> 3);
    // 0x80057E00: andi        $t7, $t5, 0x1FF
    ctx->r15 = ctx->r13 & 0X1FF;
    // 0x80057E04: sll         $t8, $t7, 9
    ctx->r24 = S32(ctx->r15 << 9);
    // 0x80057E08: or          $t2, $t8, $at
    ctx->r10 = ctx->r24 | ctx->r1;
    // 0x80057E0C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80057E10: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
    // 0x80057E14: lui         $t4, 0x708
    ctx->r12 = S32(0X708 << 16);
    // 0x80057E18: ori         $t4, $t4, 0x200
    ctx->r12 = ctx->r12 | 0X200;
    // 0x80057E1C: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x80057E20: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80057E24: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x80057E28: sw          $t1, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r9;
    // 0x80057E2C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80057E30: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80057E34: addiu       $t5, $t9, 0x8
    ctx->r13 = ADD32(ctx->r25, 0X8);
    // 0x80057E38: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x80057E3C: lw          $t8, 0xE0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE0);
    // 0x80057E40: nop

    // 0x80057E44: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x80057E48: lw          $t2, 0xE0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE0);
    // 0x80057E4C: nop

    // 0x80057E50: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x80057E54: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80057E58: nop

    // 0x80057E5C: sw          $t3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r11;
    // 0x80057E60: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80057E64: nop

    // 0x80057E68: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x80057E6C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80057E70: lw          $t9, 0x160($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X160);
    // 0x80057E74: lw          $t1, 0x158($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X158);
    // 0x80057E78: lw          $t3, 0xDC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XDC);
    // 0x80057E7C: subu        $t5, $t1, $t9
    ctx->r13 = SUB32(ctx->r9, ctx->r25);
    // 0x80057E80: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80057E84: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80057E88: or          $t2, $t8, $at
    ctx->r10 = ctx->r24 | ctx->r1;
    // 0x80057E8C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80057E90: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    // 0x80057E94: lw          $t4, 0x158($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X158);
    // 0x80057E98: lw          $t3, 0x15C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X15C);
    // 0x80057E9C: lw          $t9, 0x164($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X164);
    // 0x80057EA0: subu        $t1, $t4, $t6
    ctx->r9 = SUB32(ctx->r12, ctx->r14);
    // 0x80057EA4: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80057EA8: addu        $t5, $t1, $t9
    ctx->r13 = ADD32(ctx->r9, ctx->r25);
    // 0x80057EAC: addiu       $t7, $t5, -0x1
    ctx->r15 = ADD32(ctx->r13, -0X1);
    // 0x80057EB0: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x80057EB4: andi        $t1, $t6, 0xFFF
    ctx->r9 = ctx->r14 & 0XFFF;
    // 0x80057EB8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80057EBC: andi        $t2, $t8, 0xFFF
    ctx->r10 = ctx->r24 & 0XFFF;
    // 0x80057EC0: sll         $t9, $t1, 12
    ctx->r25 = S32(ctx->r9 << 12);
    // 0x80057EC4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80057EC8: lw          $t8, 0xDC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XDC);
    // 0x80057ECC: or          $t5, $t9, $at
    ctx->r13 = ctx->r25 | ctx->r1;
    // 0x80057ED0: or          $t7, $t5, $t2
    ctx->r15 = ctx->r13 | ctx->r10;
    // 0x80057ED4: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x80057ED8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80057EDC: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x80057EE0: sw          $t3, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r11;
    // 0x80057EE4: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80057EE8: lui         $at, 0xF580
    ctx->r1 = S32(0XF580 << 16);
    // 0x80057EEC: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x80057EF0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80057EF4: lw          $t9, 0xD8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD8);
    // 0x80057EF8: nop

    // 0x80057EFC: sw          $t1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r9;
    // 0x80057F00: lw          $t5, 0xD8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD8);
    // 0x80057F04: nop

    // 0x80057F08: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x80057F0C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80057F10: nop

    // 0x80057F14: sw          $t2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r10;
    // 0x80057F18: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80057F1C: nop

    // 0x80057F20: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80057F24: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80057F28: lw          $t3, 0x15C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X15C);
    // 0x80057F2C: lw          $t7, 0xD4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD4);
    // 0x80057F30: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x80057F34: addiu       $t6, $t4, 0x7
    ctx->r14 = ADD32(ctx->r12, 0X7);
    // 0x80057F38: sra         $t1, $t6, 3
    ctx->r9 = S32(SIGNED(ctx->r14) >> 3);
    // 0x80057F3C: andi        $t9, $t1, 0x1FF
    ctx->r25 = ctx->r9 & 0X1FF;
    // 0x80057F40: sll         $t5, $t9, 9
    ctx->r13 = S32(ctx->r25 << 9);
    // 0x80057F44: or          $t2, $t5, $at
    ctx->r10 = ctx->r13 | ctx->r1;
    // 0x80057F48: sw          $t2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r10;
    // 0x80057F4C: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    // 0x80057F50: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x80057F54: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x80057F58: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
    // 0x80057F5C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80057F60: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80057F64: sw          $t4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r12;
    // 0x80057F68: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80057F6C: nop

    // 0x80057F70: addiu       $t1, $t6, 0x8
    ctx->r9 = ADD32(ctx->r14, 0X8);
    // 0x80057F74: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80057F78: lw          $t5, 0x160($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X160);
    // 0x80057F7C: lw          $t9, 0x158($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X158);
    // 0x80057F80: lw          $t4, 0xD0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD0);
    // 0x80057F84: subu        $t2, $t9, $t5
    ctx->r10 = SUB32(ctx->r25, ctx->r13);
    // 0x80057F88: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x80057F8C: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80057F90: or          $t3, $t8, $at
    ctx->r11 = ctx->r24 | ctx->r1;
    // 0x80057F94: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80057F98: lw          $t1, 0x160($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X160);
    // 0x80057F9C: lw          $t6, 0x158($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X158);
    // 0x80057FA0: lw          $t5, 0x164($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X164);
    // 0x80057FA4: lw          $t4, 0x15C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X15C);
    // 0x80057FA8: subu        $t9, $t6, $t1
    ctx->r25 = SUB32(ctx->r14, ctx->r9);
    // 0x80057FAC: addu        $t2, $t9, $t5
    ctx->r10 = ADD32(ctx->r25, ctx->r13);
    // 0x80057FB0: addiu       $t7, $t2, -0x1
    ctx->r15 = ADD32(ctx->r10, -0X1);
    // 0x80057FB4: addiu       $t6, $t4, -0x1
    ctx->r14 = ADD32(ctx->r12, -0X1);
    // 0x80057FB8: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80057FBC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80057FC0: andi        $t9, $t1, 0xFFF
    ctx->r25 = ctx->r9 & 0XFFF;
    // 0x80057FC4: lw          $t7, 0xD0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD0);
    // 0x80057FC8: sll         $t5, $t9, 12
    ctx->r13 = S32(ctx->r25 << 12);
    // 0x80057FCC: andi        $t3, $t8, 0xFFF
    ctx->r11 = ctx->r24 & 0XFFF;
    // 0x80057FD0: or          $t2, $t5, $t3
    ctx->r10 = ctx->r13 | ctx->r11;
    // 0x80057FD4: b           L_80058460
    // 0x80057FD8: sw          $t2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r10;
        goto L_80058460;
    // 0x80057FD8: sw          $t2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r10;
L_80057FDC:
    // 0x80057FDC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80057FE0: lui         $at, 0xFD68
    ctx->r1 = S32(0XFD68 << 16);
    // 0x80057FE4: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
    // 0x80057FE8: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80057FEC: addiu       $t7, $a1, 0x8
    ctx->r15 = ADD32(ctx->r5, 0X8);
    // 0x80057FF0: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x80057FF4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80057FF8: lw          $t1, 0x15C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X15C);
    // 0x80057FFC: lw          $t2, 0xCC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XCC);
    // 0x80058000: addiu       $t9, $t1, -0x1
    ctx->r25 = ADD32(ctx->r9, -0X1);
    // 0x80058004: andi        $t5, $t9, 0xFFF
    ctx->r13 = ctx->r25 & 0XFFF;
    // 0x80058008: or          $t3, $t5, $at
    ctx->r11 = ctx->r13 | ctx->r1;
    // 0x8005800C: sw          $t3, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r11;
    // 0x80058010: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x80058014: lui         $at, 0xF568
    ctx->r1 = S32(0XF568 << 16);
    // 0x80058018: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8005801C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80058020: nop

    // 0x80058024: sw          $t4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r12;
    // 0x80058028: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005802C: nop

    // 0x80058030: addiu       $t1, $t6, 0x8
    ctx->r9 = ADD32(ctx->r14, 0X8);
    // 0x80058034: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80058038: lw          $t9, 0x15C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X15C);
    // 0x8005803C: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x80058040: addiu       $t5, $t9, 0x7
    ctx->r13 = ADD32(ctx->r25, 0X7);
    // 0x80058044: sra         $t3, $t5, 3
    ctx->r11 = S32(SIGNED(ctx->r13) >> 3);
    // 0x80058048: andi        $t2, $t3, 0x1FF
    ctx->r10 = ctx->r11 & 0X1FF;
    // 0x8005804C: sll         $t7, $t2, 9
    ctx->r15 = S32(ctx->r10 << 9);
    // 0x80058050: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80058054: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x80058058: lw          $t1, 0xC8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC8);
    // 0x8005805C: lui         $t6, 0x708
    ctx->r14 = S32(0X708 << 16);
    // 0x80058060: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x80058064: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x80058068: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005806C: lui         $t2, 0xE600
    ctx->r10 = S32(0XE600 << 16);
    // 0x80058070: sw          $t9, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r25;
    // 0x80058074: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80058078: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005807C: addiu       $t3, $t5, 0x8
    ctx->r11 = ADD32(ctx->r13, 0X8);
    // 0x80058080: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80058084: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x80058088: nop

    // 0x8005808C: sw          $t2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r10;
    // 0x80058090: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x80058094: nop

    // 0x80058098: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8005809C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x800580A0: nop

    // 0x800580A4: sw          $t4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r12;
    // 0x800580A8: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800580AC: nop

    // 0x800580B0: addiu       $t1, $t6, 0x8
    ctx->r9 = ADD32(ctx->r14, 0X8);
    // 0x800580B4: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x800580B8: lw          $t5, 0x160($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X160);
    // 0x800580BC: lw          $t9, 0x158($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X158);
    // 0x800580C0: lw          $t4, 0xC0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC0);
    // 0x800580C4: subu        $t3, $t9, $t5
    ctx->r11 = SUB32(ctx->r25, ctx->r13);
    // 0x800580C8: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x800580CC: andi        $t7, $t2, 0xFFF
    ctx->r15 = ctx->r10 & 0XFFF;
    // 0x800580D0: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x800580D4: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x800580D8: lw          $t1, 0x160($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X160);
    // 0x800580DC: lw          $t6, 0x158($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X158);
    // 0x800580E0: lw          $t4, 0x15C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X15C);
    // 0x800580E4: lw          $t5, 0x164($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X164);
    // 0x800580E8: subu        $t9, $t6, $t1
    ctx->r25 = SUB32(ctx->r14, ctx->r9);
    // 0x800580EC: addiu       $t6, $t4, -0x1
    ctx->r14 = ADD32(ctx->r12, -0X1);
    // 0x800580F0: addu        $t3, $t9, $t5
    ctx->r11 = ADD32(ctx->r25, ctx->r13);
    // 0x800580F4: addiu       $t2, $t3, -0x1
    ctx->r10 = ADD32(ctx->r11, -0X1);
    // 0x800580F8: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x800580FC: andi        $t9, $t1, 0xFFF
    ctx->r25 = ctx->r9 & 0XFFF;
    // 0x80058100: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x80058104: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80058108: sll         $t5, $t9, 12
    ctx->r13 = S32(ctx->r25 << 12);
    // 0x8005810C: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80058110: lw          $t7, 0xC0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC0);
    // 0x80058114: or          $t3, $t5, $at
    ctx->r11 = ctx->r13 | ctx->r1;
    // 0x80058118: or          $t2, $t3, $t8
    ctx->r10 = ctx->r11 | ctx->r24;
    // 0x8005811C: sw          $t2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r10;
    // 0x80058120: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80058124: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x80058128: sw          $t4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r12;
    // 0x8005812C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80058130: lui         $at, 0xF568
    ctx->r1 = S32(0XF568 << 16);
    // 0x80058134: addiu       $t1, $t6, 0x8
    ctx->r9 = ADD32(ctx->r14, 0X8);
    // 0x80058138: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005813C: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x80058140: nop

    // 0x80058144: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x80058148: lw          $t3, 0xBC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XBC);
    // 0x8005814C: nop

    // 0x80058150: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x80058154: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80058158: nop

    // 0x8005815C: sw          $t8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r24;
    // 0x80058160: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80058164: nop

    // 0x80058168: addiu       $t7, $t2, 0x8
    ctx->r15 = ADD32(ctx->r10, 0X8);
    // 0x8005816C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80058170: lw          $t4, 0x15C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X15C);
    // 0x80058174: lw          $t8, 0xB8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB8);
    // 0x80058178: addiu       $t6, $t4, 0x7
    ctx->r14 = ADD32(ctx->r12, 0X7);
    // 0x8005817C: sra         $t1, $t6, 3
    ctx->r9 = S32(SIGNED(ctx->r14) >> 3);
    // 0x80058180: andi        $t9, $t1, 0x1FF
    ctx->r25 = ctx->r9 & 0X1FF;
    // 0x80058184: sll         $t5, $t9, 9
    ctx->r13 = S32(ctx->r25 << 9);
    // 0x80058188: or          $t3, $t5, $at
    ctx->r11 = ctx->r13 | ctx->r1;
    // 0x8005818C: sw          $t3, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r11;
    // 0x80058190: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x80058194: lui         $t2, 0x8
    ctx->r10 = S32(0X8 << 16);
    // 0x80058198: ori         $t2, $t2, 0x200
    ctx->r10 = ctx->r10 | 0X200;
    // 0x8005819C: sw          $t2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r10;
    // 0x800581A0: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x800581A4: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x800581A8: sw          $t4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r12;
    // 0x800581AC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800581B0: nop

    // 0x800581B4: addiu       $t1, $t6, 0x8
    ctx->r9 = ADD32(ctx->r14, 0X8);
    // 0x800581B8: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x800581BC: lw          $t5, 0x160($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X160);
    // 0x800581C0: lw          $t9, 0x158($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X158);
    // 0x800581C4: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x800581C8: subu        $t3, $t9, $t5
    ctx->r11 = SUB32(ctx->r25, ctx->r13);
    // 0x800581CC: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x800581D0: andi        $t2, $t8, 0xFFF
    ctx->r10 = ctx->r24 & 0XFFF;
    // 0x800581D4: or          $t7, $t2, $at
    ctx->r15 = ctx->r10 | ctx->r1;
    // 0x800581D8: sw          $t7, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r15;
    // 0x800581DC: lw          $t1, 0x160($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X160);
    // 0x800581E0: lw          $t6, 0x158($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X158);
    // 0x800581E4: lw          $t5, 0x164($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X164);
    // 0x800581E8: lw          $t4, 0x15C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X15C);
    // 0x800581EC: subu        $t9, $t6, $t1
    ctx->r25 = SUB32(ctx->r14, ctx->r9);
    // 0x800581F0: addu        $t3, $t9, $t5
    ctx->r11 = ADD32(ctx->r25, ctx->r13);
    // 0x800581F4: addiu       $t8, $t3, -0x1
    ctx->r24 = ADD32(ctx->r11, -0X1);
    // 0x800581F8: addiu       $t6, $t4, -0x1
    ctx->r14 = ADD32(ctx->r12, -0X1);
    // 0x800581FC: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80058200: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80058204: andi        $t9, $t1, 0xFFF
    ctx->r25 = ctx->r9 & 0XFFF;
    // 0x80058208: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x8005820C: sll         $t5, $t9, 12
    ctx->r13 = S32(ctx->r25 << 12);
    // 0x80058210: andi        $t7, $t2, 0xFFF
    ctx->r15 = ctx->r10 & 0XFFF;
    // 0x80058214: or          $t3, $t5, $t7
    ctx->r11 = ctx->r13 | ctx->r15;
    // 0x80058218: b           L_80058460
    // 0x8005821C: sw          $t3, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r11;
        goto L_80058460;
    // 0x8005821C: sw          $t3, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r11;
L_80058220:
    // 0x80058220: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80058224: lui         $at, 0xFD48
    ctx->r1 = S32(0XFD48 << 16);
    // 0x80058228: sw          $t2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r10;
    // 0x8005822C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80058230: addiu       $t8, $a1, 0x8
    ctx->r24 = ADD32(ctx->r5, 0X8);
    // 0x80058234: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x80058238: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005823C: lw          $t1, 0x15C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X15C);
    // 0x80058240: lw          $t3, 0xB0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB0);
    // 0x80058244: addiu       $t9, $t1, -0x1
    ctx->r25 = ADD32(ctx->r9, -0X1);
    // 0x80058248: andi        $t5, $t9, 0xFFF
    ctx->r13 = ctx->r25 & 0XFFF;
    // 0x8005824C: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x80058250: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x80058254: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x80058258: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8005825C: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x80058260: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80058264: nop

    // 0x80058268: sw          $t4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r12;
    // 0x8005826C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80058270: nop

    // 0x80058274: addiu       $t1, $t6, 0x8
    ctx->r9 = ADD32(ctx->r14, 0X8);
    // 0x80058278: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005827C: lw          $t9, 0x15C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X15C);
    // 0x80058280: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x80058284: addiu       $t5, $t9, 0x7
    ctx->r13 = ADD32(ctx->r25, 0X7);
    // 0x80058288: sra         $t7, $t5, 3
    ctx->r15 = S32(SIGNED(ctx->r13) >> 3);
    // 0x8005828C: andi        $t3, $t7, 0x1FF
    ctx->r11 = ctx->r15 & 0X1FF;
    // 0x80058290: sll         $t8, $t3, 9
    ctx->r24 = S32(ctx->r11 << 9);
    // 0x80058294: or          $t2, $t8, $at
    ctx->r10 = ctx->r24 | ctx->r1;
    // 0x80058298: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x8005829C: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x800582A0: lui         $t6, 0x708
    ctx->r14 = S32(0X708 << 16);
    // 0x800582A4: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x800582A8: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x800582AC: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x800582B0: lui         $t3, 0xE600
    ctx->r11 = S32(0XE600 << 16);
    // 0x800582B4: sw          $t9, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r25;
    // 0x800582B8: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x800582BC: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x800582C0: addiu       $t7, $t5, 0x8
    ctx->r15 = ADD32(ctx->r13, 0X8);
    // 0x800582C4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800582C8: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    // 0x800582CC: nop

    // 0x800582D0: sw          $t3, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r11;
    // 0x800582D4: lw          $t2, 0xA8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8);
    // 0x800582D8: nop

    // 0x800582DC: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x800582E0: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x800582E4: nop

    // 0x800582E8: sw          $t4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r12;
    // 0x800582EC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800582F0: nop

    // 0x800582F4: addiu       $t1, $t6, 0x8
    ctx->r9 = ADD32(ctx->r14, 0X8);
    // 0x800582F8: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x800582FC: lw          $t5, 0x160($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X160);
    // 0x80058300: lw          $t9, 0x158($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X158);
    // 0x80058304: lw          $t4, 0xA4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA4);
    // 0x80058308: subu        $t7, $t9, $t5
    ctx->r15 = SUB32(ctx->r25, ctx->r13);
    // 0x8005830C: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x80058310: andi        $t8, $t3, 0xFFF
    ctx->r24 = ctx->r11 & 0XFFF;
    // 0x80058314: or          $t2, $t8, $at
    ctx->r10 = ctx->r24 | ctx->r1;
    // 0x80058318: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x8005831C: lw          $t1, 0x160($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X160);
    // 0x80058320: lw          $t6, 0x158($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X158);
    // 0x80058324: lw          $t4, 0x15C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X15C);
    // 0x80058328: lw          $t5, 0x164($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X164);
    // 0x8005832C: subu        $t9, $t6, $t1
    ctx->r25 = SUB32(ctx->r14, ctx->r9);
    // 0x80058330: addiu       $t6, $t4, -0x1
    ctx->r14 = ADD32(ctx->r12, -0X1);
    // 0x80058334: addu        $t7, $t9, $t5
    ctx->r15 = ADD32(ctx->r25, ctx->r13);
    // 0x80058338: addiu       $t3, $t7, -0x1
    ctx->r11 = ADD32(ctx->r15, -0X1);
    // 0x8005833C: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80058340: andi        $t9, $t1, 0xFFF
    ctx->r25 = ctx->r9 & 0XFFF;
    // 0x80058344: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x80058348: andi        $t2, $t8, 0xFFF
    ctx->r10 = ctx->r24 & 0XFFF;
    // 0x8005834C: sll         $t5, $t9, 12
    ctx->r13 = S32(ctx->r25 << 12);
    // 0x80058350: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80058354: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x80058358: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x8005835C: or          $t3, $t7, $t2
    ctx->r11 = ctx->r15 | ctx->r10;
    // 0x80058360: sw          $t3, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r11;
    // 0x80058364: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80058368: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8005836C: sw          $t4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r12;
    // 0x80058370: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80058374: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x80058378: addiu       $t1, $t6, 0x8
    ctx->r9 = ADD32(ctx->r14, 0X8);
    // 0x8005837C: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80058380: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x80058384: nop

    // 0x80058388: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x8005838C: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x80058390: nop

    // 0x80058394: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x80058398: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005839C: nop

    // 0x800583A0: sw          $t2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r10;
    // 0x800583A4: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x800583A8: nop

    // 0x800583AC: addiu       $t8, $t3, 0x8
    ctx->r24 = ADD32(ctx->r11, 0X8);
    // 0x800583B0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800583B4: lw          $t4, 0x15C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X15C);
    // 0x800583B8: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x800583BC: addiu       $t6, $t4, 0x7
    ctx->r14 = ADD32(ctx->r12, 0X7);
    // 0x800583C0: sra         $t1, $t6, 3
    ctx->r9 = S32(SIGNED(ctx->r14) >> 3);
    // 0x800583C4: andi        $t9, $t1, 0x1FF
    ctx->r25 = ctx->r9 & 0X1FF;
    // 0x800583C8: sll         $t5, $t9, 9
    ctx->r13 = S32(ctx->r25 << 9);
    // 0x800583CC: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x800583D0: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x800583D4: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x800583D8: lui         $t3, 0x8
    ctx->r11 = S32(0X8 << 16);
    // 0x800583DC: ori         $t3, $t3, 0x200
    ctx->r11 = ctx->r11 | 0X200;
    // 0x800583E0: sw          $t3, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r11;
    // 0x800583E4: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x800583E8: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x800583EC: sw          $t4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r12;
    // 0x800583F0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800583F4: nop

    // 0x800583F8: addiu       $t1, $t6, 0x8
    ctx->r9 = ADD32(ctx->r14, 0X8);
    // 0x800583FC: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80058400: lw          $t5, 0x160($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X160);
    // 0x80058404: lw          $t9, 0x158($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X158);
    // 0x80058408: lw          $t4, 0x98($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X98);
    // 0x8005840C: subu        $t7, $t9, $t5
    ctx->r15 = SUB32(ctx->r25, ctx->r13);
    // 0x80058410: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x80058414: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x80058418: or          $t8, $t3, $at
    ctx->r24 = ctx->r11 | ctx->r1;
    // 0x8005841C: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x80058420: lw          $t1, 0x160($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X160);
    // 0x80058424: lw          $t6, 0x158($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X158);
    // 0x80058428: lw          $t5, 0x164($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X164);
    // 0x8005842C: lw          $t4, 0x15C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X15C);
    // 0x80058430: subu        $t9, $t6, $t1
    ctx->r25 = SUB32(ctx->r14, ctx->r9);
    // 0x80058434: addu        $t7, $t9, $t5
    ctx->r15 = ADD32(ctx->r25, ctx->r13);
    // 0x80058438: addiu       $t2, $t7, -0x1
    ctx->r10 = ADD32(ctx->r15, -0X1);
    // 0x8005843C: addiu       $t6, $t4, -0x1
    ctx->r14 = ADD32(ctx->r12, -0X1);
    // 0x80058440: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80058444: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80058448: andi        $t9, $t1, 0xFFF
    ctx->r25 = ctx->r9 & 0XFFF;
    // 0x8005844C: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x80058450: sll         $t5, $t9, 12
    ctx->r13 = S32(ctx->r25 << 12);
    // 0x80058454: andi        $t8, $t3, 0xFFF
    ctx->r24 = ctx->r11 & 0XFFF;
    // 0x80058458: or          $t7, $t5, $t8
    ctx->r15 = ctx->r13 | ctx->r24;
    // 0x8005845C: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
L_80058460:
    // 0x80058460: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80058464: lui         $t1, 0xF200
    ctx->r9 = S32(0XF200 << 16);
    // 0x80058468: sw          $t3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r11;
    // 0x8005846C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80058470: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80058474: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x80058478: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005847C: lw          $t9, 0x94($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94);
    // 0x80058480: nop

    // 0x80058484: sw          $t1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r9;
    // 0x80058488: lw          $t5, 0x15C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X15C);
    // 0x8005848C: lw          $t4, 0x164($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X164);
    // 0x80058490: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80058494: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x80058498: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8005849C: addiu       $t1, $t6, -0x1
    ctx->r9 = ADD32(ctx->r14, -0X1);
    // 0x800584A0: andi        $t2, $t7, 0xFFF
    ctx->r10 = ctx->r15 & 0XFFF;
    // 0x800584A4: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x800584A8: sll         $t3, $t2, 12
    ctx->r11 = S32(ctx->r10 << 12);
    // 0x800584AC: andi        $t9, $t1, 0xFFF
    ctx->r25 = ctx->r9 & 0XFFF;
    // 0x800584B0: or          $t5, $t3, $t9
    ctx->r13 = ctx->r11 | ctx->r25;
    // 0x800584B4: sw          $t5, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r13;
    // 0x800584B8: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800584BC: nop

    // 0x800584C0: sw          $t7, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r15;
    // 0x800584C4: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x800584C8: nop

    // 0x800584CC: addiu       $t4, $t2, 0x8
    ctx->r12 = ADD32(ctx->r10, 0X8);
    // 0x800584D0: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x800584D4: lw          $t1, 0x158($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X158);
    // 0x800584D8: lw          $t6, 0x178($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X178);
    // 0x800584DC: lw          $t9, 0x160($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X160);
    // 0x800584E0: addu        $t3, $t6, $t1
    ctx->r11 = ADD32(ctx->r14, ctx->r9);
    // 0x800584E4: lw          $t1, 0x15C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X15C);
    // 0x800584E8: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
    // 0x800584EC: subu        $t5, $t3, $t9
    ctx->r13 = SUB32(ctx->r11, ctx->r25);
    // 0x800584F0: addu        $t3, $a3, $t1
    ctx->r11 = ADD32(ctx->r7, ctx->r9);
    // 0x800584F4: addu        $t7, $t5, $t8
    ctx->r15 = ADD32(ctx->r13, ctx->r24);
    // 0x800584F8: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x800584FC: addiu       $t5, $t9, -0x1
    ctx->r13 = ADD32(ctx->r25, -0X1);
    // 0x80058500: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x80058504: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x80058508: andi        $t8, $t5, 0xFFF
    ctx->r24 = ctx->r13 & 0XFFF;
    // 0x8005850C: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x80058510: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
    // 0x80058514: or          $t2, $t7, $at
    ctx->r10 = ctx->r15 | ctx->r1;
    // 0x80058518: andi        $t6, $t4, 0xFFF
    ctx->r14 = ctx->r12 & 0XFFF;
    // 0x8005851C: or          $t4, $t2, $t6
    ctx->r12 = ctx->r10 | ctx->r14;
    // 0x80058520: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    // 0x80058524: lw          $t9, 0x158($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X158);
    // 0x80058528: lw          $t3, 0x178($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X178);
    // 0x8005852C: lw          $t8, 0x160($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X160);
    // 0x80058530: addu        $t5, $t3, $t9
    ctx->r13 = ADD32(ctx->r11, ctx->r25);
    // 0x80058534: sll         $t4, $a3, 2
    ctx->r12 = S32(ctx->r7 << 2);
    // 0x80058538: subu        $t7, $t5, $t8
    ctx->r15 = SUB32(ctx->r13, ctx->r24);
    // 0x8005853C: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x80058540: andi        $t1, $t4, 0xFFF
    ctx->r9 = ctx->r12 & 0XFFF;
    // 0x80058544: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
    // 0x80058548: sll         $t3, $t1, 12
    ctx->r11 = S32(ctx->r9 << 12);
    // 0x8005854C: andi        $t6, $t2, 0xFFF
    ctx->r14 = ctx->r10 & 0XFFF;
    // 0x80058550: or          $t9, $t3, $t6
    ctx->r25 = ctx->r11 | ctx->r14;
    // 0x80058554: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x80058558: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005855C: lui         $t4, 0xE100
    ctx->r12 = S32(0XE100 << 16);
    // 0x80058560: sw          $t8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r24;
    // 0x80058564: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80058568: lui         $t8, 0xF100
    ctx->r24 = S32(0XF100 << 16);
    // 0x8005856C: addiu       $t2, $t7, 0x8
    ctx->r10 = ADD32(ctx->r15, 0X8);
    // 0x80058570: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80058574: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x80058578: lui         $t2, 0x400
    ctx->r10 = S32(0X400 << 16);
    // 0x8005857C: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    // 0x80058580: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x80058584: ori         $t2, $t2, 0x400
    ctx->r10 = ctx->r10 | 0X400;
    // 0x80058588: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8005858C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80058590: nop

    // 0x80058594: sw          $t6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r14;
    // 0x80058598: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005859C: nop

    // 0x800585A0: addiu       $t5, $t9, 0x8
    ctx->r13 = ADD32(ctx->r25, 0X8);
    // 0x800585A4: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x800585A8: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x800585AC: nop

    // 0x800585B0: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x800585B4: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    // 0x800585B8: nop

    // 0x800585BC: sw          $t2, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r10;
    // 0x800585C0: lw          $t1, 0x160($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X160);
    // 0x800585C4: lw          $t3, 0x164($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X164);
    // 0x800585C8: nop

    // 0x800585CC: subu        $t6, $t1, $t3
    ctx->r14 = SUB32(ctx->r9, ctx->r11);
    // 0x800585D0: b           L_80058FFC
    // 0x800585D4: sw          $t6, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r14;
        goto L_80058FFC;
    // 0x800585D4: sw          $t6, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r14;
L_800585D8:
    // 0x800585D8: lw          $t0, 0x154($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X154);
    // 0x800585DC: nop

    // 0x800585E0: beq         $t0, $zero, L_80058608
    if (ctx->r8 == 0) {
        // 0x800585E4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80058608;
    }
    // 0x800585E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800585E8: beq         $t0, $at, L_80058834
    if (ctx->r8 == ctx->r1) {
        // 0x800585EC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80058834;
    }
    // 0x800585EC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800585F0: beq         $t0, $at, L_80058A64
    if (ctx->r8 == ctx->r1) {
        // 0x800585F4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80058A64;
    }
    // 0x800585F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800585F8: beq         $t0, $at, L_80058C88
    if (ctx->r8 == ctx->r1) {
        // 0x800585FC: nop
    
            goto L_80058C88;
    }
    // 0x800585FC: nop

    // 0x80058600: b           L_80058EA8
    // 0x80058604: nop

        goto L_80058EA8;
    // 0x80058604: nop

L_80058608:
    // 0x80058608: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005860C: lui         $at, 0xFD10
    ctx->r1 = S32(0XFD10 << 16);
    // 0x80058610: sw          $t9, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r25;
    // 0x80058614: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80058618: addiu       $t6, $a1, 0x8
    ctx->r14 = ADD32(ctx->r5, 0X8);
    // 0x8005861C: addiu       $t8, $t5, 0x8
    ctx->r24 = ADD32(ctx->r13, 0X8);
    // 0x80058620: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80058624: lw          $t7, 0x15C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X15C);
    // 0x80058628: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8005862C: addiu       $t2, $t7, -0x1
    ctx->r10 = ADD32(ctx->r15, -0X1);
    // 0x80058630: andi        $t4, $t2, 0xFFF
    ctx->r12 = ctx->r10 & 0XFFF;
    // 0x80058634: or          $t1, $t4, $at
    ctx->r9 = ctx->r12 | ctx->r1;
    // 0x80058638: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x8005863C: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80058640: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x80058644: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
    // 0x80058648: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005864C: nop

    // 0x80058650: sw          $t5, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r13;
    // 0x80058654: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80058658: nop

    // 0x8005865C: addiu       $t7, $t8, 0x8
    ctx->r15 = ADD32(ctx->r24, 0X8);
    // 0x80058660: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80058664: lw          $t2, 0x15C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X15C);
    // 0x80058668: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x8005866C: sll         $t4, $t2, 1
    ctx->r12 = S32(ctx->r10 << 1);
    // 0x80058670: addiu       $t1, $t4, 0x7
    ctx->r9 = ADD32(ctx->r12, 0X7);
    // 0x80058674: sra         $t3, $t1, 3
    ctx->r11 = S32(SIGNED(ctx->r9) >> 3);
    // 0x80058678: andi        $t6, $t3, 0x1FF
    ctx->r14 = ctx->r11 & 0X1FF;
    // 0x8005867C: sll         $t9, $t6, 9
    ctx->r25 = S32(ctx->r14 << 9);
    // 0x80058680: or          $t5, $t9, $at
    ctx->r13 = ctx->r25 | ctx->r1;
    // 0x80058684: sw          $t5, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r13;
    // 0x80058688: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    // 0x8005868C: lui         $t7, 0x708
    ctx->r15 = S32(0X708 << 16);
    // 0x80058690: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x80058694: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x80058698: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005869C: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x800586A0: sw          $t4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r12;
    // 0x800586A4: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x800586A8: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x800586AC: addiu       $t3, $t1, 0x8
    ctx->r11 = ADD32(ctx->r9, 0X8);
    // 0x800586B0: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x800586B4: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x800586B8: nop

    // 0x800586BC: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x800586C0: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x800586C4: nop

    // 0x800586C8: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x800586CC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x800586D0: nop

    // 0x800586D4: sw          $t8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r24;
    // 0x800586D8: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800586DC: nop

    // 0x800586E0: addiu       $t2, $t7, 0x8
    ctx->r10 = ADD32(ctx->r15, 0X8);
    // 0x800586E4: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x800586E8: lw          $t4, 0x158($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X158);
    // 0x800586EC: lw          $t1, 0x160($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X160);
    // 0x800586F0: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x800586F4: subu        $t3, $t4, $t1
    ctx->r11 = SUB32(ctx->r12, ctx->r9);
    // 0x800586F8: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x800586FC: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x80058700: or          $t5, $t9, $at
    ctx->r13 = ctx->r25 | ctx->r1;
    // 0x80058704: sw          $t5, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r13;
    // 0x80058708: lw          $t7, 0x15C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X15C);
    // 0x8005870C: lw          $t9, 0x158($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X158);
    // 0x80058710: addiu       $t2, $t7, -0x1
    ctx->r10 = ADD32(ctx->r15, -0X1);
    // 0x80058714: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80058718: andi        $t1, $t4, 0xFFF
    ctx->r9 = ctx->r12 & 0XFFF;
    // 0x8005871C: addiu       $t5, $t9, -0x1
    ctx->r13 = ADD32(ctx->r25, -0X1);
    // 0x80058720: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80058724: sll         $t3, $t1, 12
    ctx->r11 = S32(ctx->r9 << 12);
    // 0x80058728: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005872C: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x80058730: or          $t6, $t3, $at
    ctx->r14 = ctx->r11 | ctx->r1;
    // 0x80058734: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x80058738: or          $t2, $t6, $t7
    ctx->r10 = ctx->r14 | ctx->r15;
    // 0x8005873C: sw          $t2, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r10;
    // 0x80058740: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80058744: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x80058748: sw          $t1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r9;
    // 0x8005874C: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80058750: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x80058754: addiu       $t9, $t3, 0x8
    ctx->r25 = ADD32(ctx->r11, 0X8);
    // 0x80058758: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005875C: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x80058760: nop

    // 0x80058764: sw          $t5, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r13;
    // 0x80058768: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x8005876C: nop

    // 0x80058770: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x80058774: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80058778: nop

    // 0x8005877C: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x80058780: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80058784: nop

    // 0x80058788: addiu       $t4, $t2, 0x8
    ctx->r12 = ADD32(ctx->r10, 0X8);
    // 0x8005878C: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x80058790: lw          $t1, 0x15C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X15C);
    // 0x80058794: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x80058798: sll         $t3, $t1, 1
    ctx->r11 = S32(ctx->r9 << 1);
    // 0x8005879C: addiu       $t9, $t3, 0x7
    ctx->r25 = ADD32(ctx->r11, 0X7);
    // 0x800587A0: sra         $t5, $t9, 3
    ctx->r13 = S32(SIGNED(ctx->r25) >> 3);
    // 0x800587A4: andi        $t8, $t5, 0x1FF
    ctx->r24 = ctx->r13 & 0X1FF;
    // 0x800587A8: sll         $t6, $t8, 9
    ctx->r14 = S32(ctx->r24 << 9);
    // 0x800587AC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800587B0: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x800587B4: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x800587B8: lui         $t4, 0x8
    ctx->r12 = S32(0X8 << 16);
    // 0x800587BC: ori         $t4, $t4, 0x200
    ctx->r12 = ctx->r12 | 0X200;
    // 0x800587C0: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x800587C4: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x800587C8: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x800587CC: sw          $t3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r11;
    // 0x800587D0: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x800587D4: nop

    // 0x800587D8: addiu       $t5, $t9, 0x8
    ctx->r13 = ADD32(ctx->r25, 0X8);
    // 0x800587DC: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x800587E0: lw          $t8, 0x158($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X158);
    // 0x800587E4: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    // 0x800587E8: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x800587EC: subu        $t7, $t8, $t6
    ctx->r15 = SUB32(ctx->r24, ctx->r14);
    // 0x800587F0: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x800587F4: andi        $t4, $t2, 0xFFF
    ctx->r12 = ctx->r10 & 0XFFF;
    // 0x800587F8: or          $t1, $t4, $at
    ctx->r9 = ctx->r12 | ctx->r1;
    // 0x800587FC: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x80058800: lw          $t9, 0x15C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X15C);
    // 0x80058804: lw          $t2, 0x158($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X158);
    // 0x80058808: addiu       $t5, $t9, -0x1
    ctx->r13 = ADD32(ctx->r25, -0X1);
    // 0x8005880C: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80058810: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x80058814: sll         $t1, $t4, 2
    ctx->r9 = S32(ctx->r12 << 2);
    // 0x80058818: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x8005881C: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x80058820: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x80058824: andi        $t3, $t1, 0xFFF
    ctx->r11 = ctx->r9 & 0XFFF;
    // 0x80058828: or          $t9, $t7, $t3
    ctx->r25 = ctx->r15 | ctx->r11;
    // 0x8005882C: b           L_80058EA8
    // 0x80058830: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
        goto L_80058EA8;
    // 0x80058830: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
L_80058834:
    // 0x80058834: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80058838: lui         $at, 0xFD88
    ctx->r1 = S32(0XFD88 << 16);
    // 0x8005883C: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
    // 0x80058840: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80058844: addiu       $t8, $a1, 0x8
    ctx->r24 = ADD32(ctx->r5, 0X8);
    // 0x80058848: addiu       $t2, $t6, 0x8
    ctx->r10 = ADD32(ctx->r14, 0X8);
    // 0x8005884C: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80058850: lw          $t4, 0x15C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X15C);
    // 0x80058854: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x80058858: sra         $t1, $t4, 1
    ctx->r9 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8005885C: addiu       $t7, $t1, -0x1
    ctx->r15 = ADD32(ctx->r9, -0X1);
    // 0x80058860: andi        $t3, $t7, 0xFFF
    ctx->r11 = ctx->r15 & 0XFFF;
    // 0x80058864: or          $t9, $t3, $at
    ctx->r25 = ctx->r11 | ctx->r1;
    // 0x80058868: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x8005886C: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x80058870: lui         $at, 0xF588
    ctx->r1 = S32(0XF588 << 16);
    // 0x80058874: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x80058878: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005887C: nop

    // 0x80058880: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x80058884: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80058888: nop

    // 0x8005888C: addiu       $t1, $t4, 0x8
    ctx->r9 = ADD32(ctx->r12, 0X8);
    // 0x80058890: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80058894: lw          $t7, 0x15C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X15C);
    // 0x80058898: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x8005889C: sra         $t3, $t7, 1
    ctx->r11 = S32(SIGNED(ctx->r15) >> 1);
    // 0x800588A0: addiu       $t9, $t3, 0x7
    ctx->r25 = ADD32(ctx->r11, 0X7);
    // 0x800588A4: sra         $t5, $t9, 3
    ctx->r13 = S32(SIGNED(ctx->r25) >> 3);
    // 0x800588A8: andi        $t8, $t5, 0x1FF
    ctx->r24 = ctx->r13 & 0X1FF;
    // 0x800588AC: sll         $t6, $t8, 9
    ctx->r14 = S32(ctx->r24 << 9);
    // 0x800588B0: or          $t2, $t6, $at
    ctx->r10 = ctx->r14 | ctx->r1;
    // 0x800588B4: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x800588B8: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x800588BC: lui         $t1, 0x708
    ctx->r9 = S32(0X708 << 16);
    // 0x800588C0: ori         $t1, $t1, 0x200
    ctx->r9 = ctx->r9 | 0X200;
    // 0x800588C4: sw          $t1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r9;
    // 0x800588C8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x800588CC: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x800588D0: sw          $t3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r11;
    // 0x800588D4: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x800588D8: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x800588DC: addiu       $t5, $t9, 0x8
    ctx->r13 = ADD32(ctx->r25, 0X8);
    // 0x800588E0: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x800588E4: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x800588E8: nop

    // 0x800588EC: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x800588F0: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x800588F4: nop

    // 0x800588F8: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x800588FC: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80058900: nop

    // 0x80058904: sw          $t4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r12;
    // 0x80058908: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005890C: nop

    // 0x80058910: addiu       $t7, $t1, 0x8
    ctx->r15 = ADD32(ctx->r9, 0X8);
    // 0x80058914: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80058918: lw          $t3, 0x158($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X158);
    // 0x8005891C: lw          $t9, 0x160($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X160);
    // 0x80058920: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x80058924: subu        $t5, $t3, $t9
    ctx->r13 = SUB32(ctx->r11, ctx->r25);
    // 0x80058928: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x8005892C: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x80058930: or          $t2, $t6, $at
    ctx->r10 = ctx->r14 | ctx->r1;
    // 0x80058934: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x80058938: lw          $t1, 0x15C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X15C);
    // 0x8005893C: lw          $t6, 0x158($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X158);
    // 0x80058940: addiu       $t7, $t1, -0x1
    ctx->r15 = ADD32(ctx->r9, -0X1);
    // 0x80058944: sll         $t3, $t7, 1
    ctx->r11 = S32(ctx->r15 << 1);
    // 0x80058948: andi        $t9, $t3, 0xFFF
    ctx->r25 = ctx->r11 & 0XFFF;
    // 0x8005894C: addiu       $t2, $t6, -0x1
    ctx->r10 = ADD32(ctx->r14, -0X1);
    // 0x80058950: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80058954: sll         $t5, $t9, 12
    ctx->r13 = S32(ctx->r25 << 12);
    // 0x80058958: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005895C: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80058960: or          $t8, $t5, $at
    ctx->r24 = ctx->r13 | ctx->r1;
    // 0x80058964: andi        $t1, $t4, 0xFFF
    ctx->r9 = ctx->r12 & 0XFFF;
    // 0x80058968: or          $t7, $t8, $t1
    ctx->r15 = ctx->r24 | ctx->r9;
    // 0x8005896C: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x80058970: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80058974: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x80058978: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x8005897C: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80058980: lui         $at, 0xF580
    ctx->r1 = S32(0XF580 << 16);
    // 0x80058984: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x80058988: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005898C: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x80058990: nop

    // 0x80058994: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x80058998: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x8005899C: nop

    // 0x800589A0: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x800589A4: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x800589A8: nop

    // 0x800589AC: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x800589B0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800589B4: nop

    // 0x800589B8: addiu       $t3, $t7, 0x8
    ctx->r11 = ADD32(ctx->r15, 0X8);
    // 0x800589BC: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x800589C0: lw          $t9, 0x15C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X15C);
    // 0x800589C4: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x800589C8: sra         $t5, $t9, 1
    ctx->r13 = S32(SIGNED(ctx->r25) >> 1);
    // 0x800589CC: addiu       $t6, $t5, 0x7
    ctx->r14 = ADD32(ctx->r13, 0X7);
    // 0x800589D0: sra         $t2, $t6, 3
    ctx->r10 = S32(SIGNED(ctx->r14) >> 3);
    // 0x800589D4: andi        $t4, $t2, 0x1FF
    ctx->r12 = ctx->r10 & 0X1FF;
    // 0x800589D8: sll         $t8, $t4, 9
    ctx->r24 = S32(ctx->r12 << 9);
    // 0x800589DC: or          $t1, $t8, $at
    ctx->r9 = ctx->r24 | ctx->r1;
    // 0x800589E0: sw          $t1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r9;
    // 0x800589E4: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x800589E8: lui         $t3, 0x8
    ctx->r11 = S32(0X8 << 16);
    // 0x800589EC: ori         $t3, $t3, 0x200
    ctx->r11 = ctx->r11 | 0X200;
    // 0x800589F0: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x800589F4: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x800589F8: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x800589FC: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
    // 0x80058A00: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80058A04: nop

    // 0x80058A08: addiu       $t2, $t6, 0x8
    ctx->r10 = ADD32(ctx->r14, 0X8);
    // 0x80058A0C: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80058A10: lw          $t4, 0x158($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X158);
    // 0x80058A14: lw          $t8, 0x160($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X160);
    // 0x80058A18: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80058A1C: subu        $t1, $t4, $t8
    ctx->r9 = SUB32(ctx->r12, ctx->r24);
    // 0x80058A20: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x80058A24: andi        $t3, $t7, 0xFFF
    ctx->r11 = ctx->r15 & 0XFFF;
    // 0x80058A28: or          $t9, $t3, $at
    ctx->r25 = ctx->r11 | ctx->r1;
    // 0x80058A2C: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x80058A30: lw          $t6, 0x15C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X15C);
    // 0x80058A34: lw          $t7, 0x158($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X158);
    // 0x80058A38: addiu       $t2, $t6, -0x1
    ctx->r10 = ADD32(ctx->r14, -0X1);
    // 0x80058A3C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80058A40: addiu       $t3, $t7, -0x1
    ctx->r11 = ADD32(ctx->r15, -0X1);
    // 0x80058A44: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80058A48: andi        $t8, $t4, 0xFFF
    ctx->r24 = ctx->r12 & 0XFFF;
    // 0x80058A4C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80058A50: sll         $t1, $t8, 12
    ctx->r9 = S32(ctx->r24 << 12);
    // 0x80058A54: andi        $t5, $t9, 0xFFF
    ctx->r13 = ctx->r25 & 0XFFF;
    // 0x80058A58: or          $t6, $t1, $t5
    ctx->r14 = ctx->r9 | ctx->r13;
    // 0x80058A5C: b           L_80058EA8
    // 0x80058A60: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
        goto L_80058EA8;
    // 0x80058A60: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
L_80058A64:
    // 0x80058A64: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80058A68: lui         $at, 0xFD68
    ctx->r1 = S32(0XFD68 << 16);
    // 0x80058A6C: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x80058A70: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80058A74: addiu       $t2, $a1, 0x8
    ctx->r10 = ADD32(ctx->r5, 0X8);
    // 0x80058A78: addiu       $t7, $t8, 0x8
    ctx->r15 = ADD32(ctx->r24, 0X8);
    // 0x80058A7C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80058A80: lw          $t3, 0x15C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X15C);
    // 0x80058A84: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80058A88: addiu       $t9, $t3, -0x1
    ctx->r25 = ADD32(ctx->r11, -0X1);
    // 0x80058A8C: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x80058A90: or          $t5, $t1, $at
    ctx->r13 = ctx->r9 | ctx->r1;
    // 0x80058A94: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80058A98: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x80058A9C: lui         $at, 0xF568
    ctx->r1 = S32(0XF568 << 16);
    // 0x80058AA0: sw          $t2, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r10;
    // 0x80058AA4: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80058AA8: nop

    // 0x80058AAC: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x80058AB0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80058AB4: nop

    // 0x80058AB8: addiu       $t3, $t7, 0x8
    ctx->r11 = ADD32(ctx->r15, 0X8);
    // 0x80058ABC: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80058AC0: lw          $t9, 0x15C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X15C);
    // 0x80058AC4: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80058AC8: addiu       $t1, $t9, 0x7
    ctx->r9 = ADD32(ctx->r25, 0X7);
    // 0x80058ACC: sra         $t5, $t1, 3
    ctx->r13 = S32(SIGNED(ctx->r9) >> 3);
    // 0x80058AD0: andi        $t6, $t5, 0x1FF
    ctx->r14 = ctx->r13 & 0X1FF;
    // 0x80058AD4: sll         $t2, $t6, 9
    ctx->r10 = S32(ctx->r14 << 9);
    // 0x80058AD8: or          $t4, $t2, $at
    ctx->r12 = ctx->r10 | ctx->r1;
    // 0x80058ADC: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x80058AE0: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80058AE4: lui         $t7, 0x708
    ctx->r15 = S32(0X708 << 16);
    // 0x80058AE8: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x80058AEC: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x80058AF0: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80058AF4: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x80058AF8: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80058AFC: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80058B00: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80058B04: addiu       $t5, $t1, 0x8
    ctx->r13 = ADD32(ctx->r9, 0X8);
    // 0x80058B08: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x80058B0C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80058B10: nop

    // 0x80058B14: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x80058B18: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80058B1C: nop

    // 0x80058B20: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x80058B24: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80058B28: nop

    // 0x80058B2C: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x80058B30: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80058B34: nop

    // 0x80058B38: addiu       $t3, $t7, 0x8
    ctx->r11 = ADD32(ctx->r15, 0X8);
    // 0x80058B3C: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80058B40: lw          $t9, 0x158($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X158);
    // 0x80058B44: lw          $t1, 0x160($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X160);
    // 0x80058B48: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80058B4C: subu        $t5, $t9, $t1
    ctx->r13 = SUB32(ctx->r25, ctx->r9);
    // 0x80058B50: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80058B54: andi        $t2, $t6, 0xFFF
    ctx->r10 = ctx->r14 & 0XFFF;
    // 0x80058B58: or          $t4, $t2, $at
    ctx->r12 = ctx->r10 | ctx->r1;
    // 0x80058B5C: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x80058B60: lw          $t7, 0x15C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X15C);
    // 0x80058B64: lw          $t2, 0x158($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X158);
    // 0x80058B68: addiu       $t3, $t7, -0x1
    ctx->r11 = ADD32(ctx->r15, -0X1);
    // 0x80058B6C: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80058B70: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x80058B74: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x80058B78: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x80058B7C: sll         $t5, $t1, 12
    ctx->r13 = S32(ctx->r9 << 12);
    // 0x80058B80: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80058B84: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80058B88: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80058B8C: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x80058B90: or          $t3, $t6, $t7
    ctx->r11 = ctx->r14 | ctx->r15;
    // 0x80058B94: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x80058B98: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80058B9C: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x80058BA0: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x80058BA4: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80058BA8: lui         $at, 0xF568
    ctx->r1 = S32(0XF568 << 16);
    // 0x80058BAC: addiu       $t2, $t5, 0x8
    ctx->r10 = ADD32(ctx->r13, 0X8);
    // 0x80058BB0: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80058BB4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80058BB8: nop

    // 0x80058BBC: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x80058BC0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80058BC4: nop

    // 0x80058BC8: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x80058BCC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80058BD0: nop

    // 0x80058BD4: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x80058BD8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80058BDC: nop

    // 0x80058BE0: addiu       $t9, $t3, 0x8
    ctx->r25 = ADD32(ctx->r11, 0X8);
    // 0x80058BE4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80058BE8: lw          $t1, 0x15C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X15C);
    // 0x80058BEC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80058BF0: addiu       $t5, $t1, 0x7
    ctx->r13 = ADD32(ctx->r9, 0X7);
    // 0x80058BF4: sra         $t2, $t5, 3
    ctx->r10 = S32(SIGNED(ctx->r13) >> 3);
    // 0x80058BF8: andi        $t4, $t2, 0x1FF
    ctx->r12 = ctx->r10 & 0X1FF;
    // 0x80058BFC: sll         $t8, $t4, 9
    ctx->r24 = S32(ctx->r12 << 9);
    // 0x80058C00: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x80058C04: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80058C08: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80058C0C: lui         $t3, 0x8
    ctx->r11 = S32(0X8 << 16);
    // 0x80058C10: ori         $t3, $t3, 0x200
    ctx->r11 = ctx->r11 | 0X200;
    // 0x80058C14: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x80058C18: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80058C1C: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80058C20: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x80058C24: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80058C28: nop

    // 0x80058C2C: addiu       $t2, $t5, 0x8
    ctx->r10 = ADD32(ctx->r13, 0X8);
    // 0x80058C30: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80058C34: lw          $t4, 0x158($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X158);
    // 0x80058C38: lw          $t8, 0x160($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X160);
    // 0x80058C3C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80058C40: subu        $t6, $t4, $t8
    ctx->r14 = SUB32(ctx->r12, ctx->r24);
    // 0x80058C44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80058C48: andi        $t3, $t7, 0xFFF
    ctx->r11 = ctx->r15 & 0XFFF;
    // 0x80058C4C: or          $t9, $t3, $at
    ctx->r25 = ctx->r11 | ctx->r1;
    // 0x80058C50: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x80058C54: lw          $t5, 0x15C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X15C);
    // 0x80058C58: lw          $t7, 0x158($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X158);
    // 0x80058C5C: addiu       $t2, $t5, -0x1
    ctx->r10 = ADD32(ctx->r13, -0X1);
    // 0x80058C60: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80058C64: addiu       $t3, $t7, -0x1
    ctx->r11 = ADD32(ctx->r15, -0X1);
    // 0x80058C68: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80058C6C: andi        $t8, $t4, 0xFFF
    ctx->r24 = ctx->r12 & 0XFFF;
    // 0x80058C70: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80058C74: sll         $t6, $t8, 12
    ctx->r14 = S32(ctx->r24 << 12);
    // 0x80058C78: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x80058C7C: or          $t5, $t6, $t1
    ctx->r13 = ctx->r14 | ctx->r9;
    // 0x80058C80: b           L_80058EA8
    // 0x80058C84: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
        goto L_80058EA8;
    // 0x80058C84: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
L_80058C88:
    // 0x80058C88: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80058C8C: lui         $at, 0xFD48
    ctx->r1 = S32(0XFD48 << 16);
    // 0x80058C90: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x80058C94: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80058C98: addiu       $t2, $a1, 0x8
    ctx->r10 = ADD32(ctx->r5, 0X8);
    // 0x80058C9C: addiu       $t7, $t8, 0x8
    ctx->r15 = ADD32(ctx->r24, 0X8);
    // 0x80058CA0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80058CA4: lw          $t3, 0x15C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X15C);
    // 0x80058CA8: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80058CAC: addiu       $t9, $t3, -0x1
    ctx->r25 = ADD32(ctx->r11, -0X1);
    // 0x80058CB0: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x80058CB4: or          $t1, $t6, $at
    ctx->r9 = ctx->r14 | ctx->r1;
    // 0x80058CB8: sw          $t1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r9;
    // 0x80058CBC: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80058CC0: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x80058CC4: sw          $t2, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r10;
    // 0x80058CC8: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80058CCC: nop

    // 0x80058CD0: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x80058CD4: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80058CD8: nop

    // 0x80058CDC: addiu       $t3, $t7, 0x8
    ctx->r11 = ADD32(ctx->r15, 0X8);
    // 0x80058CE0: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80058CE4: lw          $t9, 0x15C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X15C);
    // 0x80058CE8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80058CEC: addiu       $t6, $t9, 0x7
    ctx->r14 = ADD32(ctx->r25, 0X7);
    // 0x80058CF0: sra         $t1, $t6, 3
    ctx->r9 = S32(SIGNED(ctx->r14) >> 3);
    // 0x80058CF4: andi        $t5, $t1, 0x1FF
    ctx->r13 = ctx->r9 & 0X1FF;
    // 0x80058CF8: sll         $t2, $t5, 9
    ctx->r10 = S32(ctx->r13 << 9);
    // 0x80058CFC: or          $t4, $t2, $at
    ctx->r12 = ctx->r10 | ctx->r1;
    // 0x80058D00: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x80058D04: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80058D08: lui         $t7, 0x708
    ctx->r15 = S32(0X708 << 16);
    // 0x80058D0C: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x80058D10: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x80058D14: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80058D18: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x80058D1C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80058D20: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80058D24: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80058D28: addiu       $t1, $t6, 0x8
    ctx->r9 = ADD32(ctx->r14, 0X8);
    // 0x80058D2C: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80058D30: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80058D34: nop

    // 0x80058D38: sw          $t5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r13;
    // 0x80058D3C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80058D40: nop

    // 0x80058D44: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x80058D48: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80058D4C: nop

    // 0x80058D50: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80058D54: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80058D58: nop

    // 0x80058D5C: addiu       $t3, $t7, 0x8
    ctx->r11 = ADD32(ctx->r15, 0X8);
    // 0x80058D60: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80058D64: lw          $t9, 0x158($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X158);
    // 0x80058D68: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    // 0x80058D6C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80058D70: subu        $t1, $t9, $t6
    ctx->r9 = SUB32(ctx->r25, ctx->r14);
    // 0x80058D74: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x80058D78: andi        $t2, $t5, 0xFFF
    ctx->r10 = ctx->r13 & 0XFFF;
    // 0x80058D7C: or          $t4, $t2, $at
    ctx->r12 = ctx->r10 | ctx->r1;
    // 0x80058D80: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x80058D84: lw          $t7, 0x15C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X15C);
    // 0x80058D88: lw          $t2, 0x158($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X158);
    // 0x80058D8C: addiu       $t3, $t7, -0x1
    ctx->r11 = ADD32(ctx->r15, -0X1);
    // 0x80058D90: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80058D94: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x80058D98: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x80058D9C: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x80058DA0: sll         $t1, $t6, 12
    ctx->r9 = S32(ctx->r14 << 12);
    // 0x80058DA4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80058DA8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80058DAC: or          $t5, $t1, $at
    ctx->r13 = ctx->r9 | ctx->r1;
    // 0x80058DB0: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x80058DB4: or          $t3, $t5, $t7
    ctx->r11 = ctx->r13 | ctx->r15;
    // 0x80058DB8: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x80058DBC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80058DC0: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x80058DC4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80058DC8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80058DCC: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x80058DD0: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80058DD4: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80058DD8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80058DDC: nop

    // 0x80058DE0: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x80058DE4: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80058DE8: nop

    // 0x80058DEC: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x80058DF0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80058DF4: nop

    // 0x80058DF8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80058DFC: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80058E00: nop

    // 0x80058E04: addiu       $t9, $t3, 0x8
    ctx->r25 = ADD32(ctx->r11, 0X8);
    // 0x80058E08: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80058E0C: lw          $t6, 0x15C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X15C);
    // 0x80058E10: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80058E14: addiu       $t1, $t6, 0x7
    ctx->r9 = ADD32(ctx->r14, 0X7);
    // 0x80058E18: sra         $t2, $t1, 3
    ctx->r10 = S32(SIGNED(ctx->r9) >> 3);
    // 0x80058E1C: andi        $t4, $t2, 0x1FF
    ctx->r12 = ctx->r10 & 0X1FF;
    // 0x80058E20: sll         $t8, $t4, 9
    ctx->r24 = S32(ctx->r12 << 9);
    // 0x80058E24: or          $t5, $t8, $at
    ctx->r13 = ctx->r24 | ctx->r1;
    // 0x80058E28: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x80058E2C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80058E30: lui         $t3, 0x8
    ctx->r11 = S32(0X8 << 16);
    // 0x80058E34: ori         $t3, $t3, 0x200
    ctx->r11 = ctx->r11 | 0X200;
    // 0x80058E38: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x80058E3C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80058E40: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80058E44: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80058E48: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80058E4C: nop

    // 0x80058E50: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80058E54: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80058E58: lw          $t4, 0x158($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X158);
    // 0x80058E5C: lw          $t8, 0x160($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X160);
    // 0x80058E60: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80058E64: subu        $t5, $t4, $t8
    ctx->r13 = SUB32(ctx->r12, ctx->r24);
    // 0x80058E68: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80058E6C: andi        $t3, $t7, 0xFFF
    ctx->r11 = ctx->r15 & 0XFFF;
    // 0x80058E70: or          $t9, $t3, $at
    ctx->r25 = ctx->r11 | ctx->r1;
    // 0x80058E74: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x80058E78: lw          $t1, 0x15C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X15C);
    // 0x80058E7C: lw          $t7, 0x158($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X158);
    // 0x80058E80: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80058E84: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80058E88: addiu       $t3, $t7, -0x1
    ctx->r11 = ADD32(ctx->r15, -0X1);
    // 0x80058E8C: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80058E90: andi        $t8, $t4, 0xFFF
    ctx->r24 = ctx->r12 & 0XFFF;
    // 0x80058E94: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80058E98: sll         $t5, $t8, 12
    ctx->r13 = S32(ctx->r24 << 12);
    // 0x80058E9C: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x80058EA0: or          $t1, $t5, $t6
    ctx->r9 = ctx->r13 | ctx->r14;
    // 0x80058EA4: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
L_80058EA8:
    // 0x80058EA8: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80058EAC: lui         $t3, 0xF200
    ctx->r11 = S32(0XF200 << 16);
    // 0x80058EB0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80058EB4: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80058EB8: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80058EBC: addiu       $t7, $t8, 0x8
    ctx->r15 = ADD32(ctx->r24, 0X8);
    // 0x80058EC0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80058EC4: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80058EC8: nop

    // 0x80058ECC: sw          $t3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r11;
    // 0x80058ED0: lw          $t5, 0x15C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X15C);
    // 0x80058ED4: lw          $t8, 0x160($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X160);
    // 0x80058ED8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80058EDC: addiu       $t1, $t6, -0x1
    ctx->r9 = ADD32(ctx->r14, -0X1);
    // 0x80058EE0: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80058EE4: addiu       $t3, $t7, -0x1
    ctx->r11 = ADD32(ctx->r15, -0X1);
    // 0x80058EE8: andi        $t2, $t1, 0xFFF
    ctx->r10 = ctx->r9 & 0XFFF;
    // 0x80058EEC: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x80058EF0: sll         $t4, $t2, 12
    ctx->r12 = S32(ctx->r10 << 12);
    // 0x80058EF4: andi        $t9, $t3, 0xFFF
    ctx->r25 = ctx->r11 & 0XFFF;
    // 0x80058EF8: or          $t5, $t4, $t9
    ctx->r13 = ctx->r12 | ctx->r25;
    // 0x80058EFC: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x80058F00: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80058F04: nop

    // 0x80058F08: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80058F0C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80058F10: nop

    // 0x80058F14: addiu       $t8, $t2, 0x8
    ctx->r24 = ADD32(ctx->r10, 0X8);
    // 0x80058F18: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80058F1C: lw          $t3, 0x158($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X158);
    // 0x80058F20: lw          $t7, 0x178($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X178);
    // 0x80058F24: lw          $t1, 0x15C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X15C);
    // 0x80058F28: addu        $t4, $t7, $t3
    ctx->r12 = ADD32(ctx->r15, ctx->r11);
    // 0x80058F2C: addu        $t2, $a3, $t1
    ctx->r10 = ADD32(ctx->r7, ctx->r9);
    // 0x80058F30: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x80058F34: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x80058F38: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x80058F3C: addiu       $t5, $t9, -0x1
    ctx->r13 = ADD32(ctx->r25, -0X1);
    // 0x80058F40: andi        $t3, $t7, 0xFFF
    ctx->r11 = ctx->r15 & 0XFFF;
    // 0x80058F44: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x80058F48: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x80058F4C: or          $t9, $t4, $at
    ctx->r25 = ctx->r12 | ctx->r1;
    // 0x80058F50: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x80058F54: or          $t5, $t9, $t6
    ctx->r13 = ctx->r25 | ctx->r14;
    // 0x80058F58: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x80058F5C: lw          $t8, 0x158($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X158);
    // 0x80058F60: lw          $t2, 0x178($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X178);
    // 0x80058F64: lw          $t3, 0x160($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X160);
    // 0x80058F68: addu        $t7, $t2, $t8
    ctx->r15 = ADD32(ctx->r10, ctx->r24);
    // 0x80058F6C: sll         $t5, $a3, 2
    ctx->r13 = S32(ctx->r7 << 2);
    // 0x80058F70: subu        $t4, $t7, $t3
    ctx->r12 = SUB32(ctx->r15, ctx->r11);
    // 0x80058F74: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x80058F78: andi        $t1, $t5, 0xFFF
    ctx->r9 = ctx->r13 & 0XFFF;
    // 0x80058F7C: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x80058F80: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x80058F84: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x80058F88: or          $t8, $t2, $t6
    ctx->r24 = ctx->r10 | ctx->r14;
    // 0x80058F8C: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
    // 0x80058F90: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80058F94: lui         $t5, 0xE100
    ctx->r13 = S32(0XE100 << 16);
    // 0x80058F98: sw          $t3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r11;
    // 0x80058F9C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80058FA0: lui         $t3, 0xF100
    ctx->r11 = S32(0XF100 << 16);
    // 0x80058FA4: addiu       $t9, $t4, 0x8
    ctx->r25 = ADD32(ctx->r12, 0X8);
    // 0x80058FA8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80058FAC: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x80058FB0: lui         $t9, 0x400
    ctx->r25 = S32(0X400 << 16);
    // 0x80058FB4: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x80058FB8: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x80058FBC: ori         $t9, $t9, 0x400
    ctx->r25 = ctx->r25 | 0X400;
    // 0x80058FC0: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x80058FC4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80058FC8: nop

    // 0x80058FCC: sw          $t6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r14;
    // 0x80058FD0: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80058FD4: nop

    // 0x80058FD8: addiu       $t7, $t8, 0x8
    ctx->r15 = ADD32(ctx->r24, 0X8);
    // 0x80058FDC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80058FE0: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x80058FE4: nop

    // 0x80058FE8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80058FEC: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x80058FF0: nop

    // 0x80058FF4: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x80058FF8: sw          $zero, 0x160($sp)
    MEM_W(0X160, ctx->r29) = 0;
L_80058FFC:
    // 0x80058FFC: lw          $t1, 0x160($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X160);
    // 0x80059000: nop

    // 0x80059004: bne         $t1, $zero, L_80057AF8
    if (ctx->r9 != 0) {
        // 0x80059008: nop
    
            goto L_80057AF8;
    }
    // 0x80059008: nop

L_8005900C:
    // 0x8005900C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80059010: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x80059014: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x80059018: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005901C: nop

    // 0x80059020: addiu       $t8, $t6, 0x8
    ctx->r24 = ADD32(ctx->r14, 0X8);
    // 0x80059024: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80059028: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8005902C: nop

    // 0x80059030: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x80059034: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80059038: nop

    // 0x8005903C: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
L_80059040:
    // 0x80059040: jr          $ra
    // 0x80059044: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    // 0x80059044: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void func_80059048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059048: beq         $a1, $zero, L_8005AA94
    if (ctx->r5 == 0) {
        // 0x8005904C: addiu       $sp, $sp, -0x138
        ctx->r29 = ADD32(ctx->r29, -0X138);
            goto L_8005AA94;
    }
    // 0x8005904C: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x80059050: lw          $t6, 0x164($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X164);
    // 0x80059054: nop

    // 0x80059058: beq         $t6, $zero, L_8005AA94
    if (ctx->r14 == 0) {
        // 0x8005905C: nop
    
            goto L_8005AA94;
    }
    // 0x8005905C: nop

    // 0x80059060: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80059064: nop

    // 0x80059068: sw          $t7, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r15;
    // 0x8005906C: lhu         $t8, 0x2($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X2);
    // 0x80059070: lw          $t1, 0x12C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X12C);
    // 0x80059074: sw          $t8, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r24;
    // 0x80059078: lhu         $t9, 0x4($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X4);
    // 0x8005907C: blez        $t1, L_8005AA94
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80059080: sw          $t9, 0x124($sp)
        MEM_W(0X124, ctx->r29) = ctx->r25;
            goto L_8005AA94;
    }
    // 0x80059080: sw          $t9, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r25;
    // 0x80059084: lw          $t2, 0x128($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X128);
    // 0x80059088: nop

    // 0x8005908C: blez        $t2, L_8005AA94
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80059090: nop
    
            goto L_8005AA94;
    }
    // 0x80059090: nop

    // 0x80059094: lw          $t3, 0x148($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X148);
    // 0x80059098: nop

    // 0x8005909C: slt         $at, $t3, $a2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x800590A0: bne         $at, $zero, L_8005AA94
    if (ctx->r1 != 0) {
        // 0x800590A4: nop
    
            goto L_8005AA94;
    }
    // 0x800590A4: nop

    // 0x800590A8: lw          $t4, 0x14C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14C);
    // 0x800590AC: nop

    // 0x800590B0: slt         $at, $t4, $a3
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x800590B4: bne         $at, $zero, L_8005AA94
    if (ctx->r1 != 0) {
        // 0x800590B8: nop
    
            goto L_8005AA94;
    }
    // 0x800590B8: nop

    // 0x800590BC: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x800590C0: lh          $t5, 0x164($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X164);
    // 0x800590C4: lw          $t6, 0x124($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X124);
    // 0x800590C8: nop

    // 0x800590CC: beq         $t5, $t6, L_800591CC
    if (ctx->r13 == ctx->r14) {
        // 0x800590D0: nop
    
            goto L_800591CC;
    }
    // 0x800590D0: nop

    // 0x800590D4: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
    // 0x800590D8: beq         $t0, $zero, L_80059100
    if (ctx->r8 == 0) {
        // 0x800590DC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80059100;
    }
    // 0x800590DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800590E0: beq         $t0, $at, L_80059180
    if (ctx->r8 == ctx->r1) {
        // 0x800590E4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80059180;
    }
    // 0x800590E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800590E8: beq         $t0, $at, L_80059140
    if (ctx->r8 == ctx->r1) {
        // 0x800590EC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80059140;
    }
    // 0x800590EC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800590F0: beq         $t0, $at, L_800591C0
    if (ctx->r8 == ctx->r1) {
        // 0x800590F4: nop
    
            goto L_800591C0;
    }
    // 0x800590F4: nop

    // 0x800590F8: b           L_8005AA94
    // 0x800590FC: nop

        goto L_8005AA94;
    // 0x800590FC: nop

L_80059100:
    // 0x80059100: addiu       $t7, $zero, 0x800
    ctx->r15 = ADD32(0, 0X800);
    // 0x80059104: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80059108: sw          $t7, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r15;
    // 0x8005910C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80059110: lui         $t2, 0xE300
    ctx->r10 = S32(0XE300 << 16);
    // 0x80059114: sw          $t8, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r24;
    // 0x80059118: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005911C: ori         $t2, $t2, 0x1001
    ctx->r10 = ctx->r10 | 0X1001;
    // 0x80059120: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x80059124: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80059128: lw          $t3, 0x120($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X120);
    // 0x8005912C: nop

    // 0x80059130: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80059134: lw          $t4, 0x120($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X120);
    // 0x80059138: b           L_800591CC
    // 0x8005913C: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
        goto L_800591CC;
    // 0x8005913C: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
L_80059140:
    // 0x80059140: addiu       $t5, $zero, 0x800
    ctx->r13 = ADD32(0, 0X800);
    // 0x80059144: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80059148: sw          $t5, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r13;
    // 0x8005914C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80059150: lui         $t9, 0xE300
    ctx->r25 = S32(0XE300 << 16);
    // 0x80059154: sw          $t6, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r14;
    // 0x80059158: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005915C: ori         $t9, $t9, 0x1001
    ctx->r25 = ctx->r25 | 0X1001;
    // 0x80059160: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80059164: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80059168: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
    // 0x8005916C: nop

    // 0x80059170: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x80059174: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
    // 0x80059178: b           L_800591CC
    // 0x8005917C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
        goto L_800591CC;
    // 0x8005917C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
L_80059180:
    // 0x80059180: addiu       $t3, $zero, 0x1000
    ctx->r11 = ADD32(0, 0X1000);
    // 0x80059184: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80059188: sw          $t3, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r11;
    // 0x8005918C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80059190: lui         $t7, 0xE300
    ctx->r15 = S32(0XE300 << 16);
    // 0x80059194: sw          $t4, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r12;
    // 0x80059198: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005919C: ori         $t7, $t7, 0x1001
    ctx->r15 = ctx->r15 | 0X1001;
    // 0x800591A0: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x800591A4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800591A8: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x800591AC: nop

    // 0x800591B0: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x800591B4: lw          $t9, 0x118($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X118);
    // 0x800591B8: b           L_800591CC
    // 0x800591BC: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
        goto L_800591CC;
    // 0x800591BC: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
L_800591C0:
    // 0x800591C0: addiu       $t1, $zero, 0x800
    ctx->r9 = ADD32(0, 0X800);
    // 0x800591C4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800591C8: sw          $t1, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r9;
L_800591CC:
    // 0x800591CC: lw          $t3, 0x148($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X148);
    // 0x800591D0: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x800591D4: subu        $t4, $t3, $a2
    ctx->r12 = SUB32(ctx->r11, ctx->r6);
    // 0x800591D8: lw          $t2, 0x160($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X160);
    // 0x800591DC: addiu       $t5, $t4, 0x4
    ctx->r13 = ADD32(ctx->r12, 0X4);
    // 0x800591E0: andi        $t6, $t5, 0xFFFC
    ctx->r14 = ctx->r13 & 0XFFFC;
    // 0x800591E4: div         $zero, $t2, $t6
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r14)));
    // 0x800591E8: bne         $t6, $zero, L_800591F4
    if (ctx->r14 != 0) {
        // 0x800591EC: nop
    
            goto L_800591F4;
    }
    // 0x800591EC: nop

    // 0x800591F0: break       7
    do_break(2147848688);
L_800591F4:
    // 0x800591F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800591F8: bne         $t6, $at, L_8005920C
    if (ctx->r14 != ctx->r1) {
        // 0x800591FC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005920C;
    }
    // 0x800591FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80059200: bne         $t2, $at, L_8005920C
    if (ctx->r10 != ctx->r1) {
        // 0x80059204: nop
    
            goto L_8005920C;
    }
    // 0x80059204: nop

    // 0x80059208: break       6
    do_break(2147848712);
L_8005920C:
    // 0x8005920C: mflo        $t7
    ctx->r15 = lo;
    // 0x80059210: sw          $t7, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r15;
    // 0x80059214: blez        $t7, L_8005AA94
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80059218: nop
    
            goto L_8005AA94;
    }
    // 0x80059218: nop

    // 0x8005921C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80059220: lbu         $t8, 0x168($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X168);
    // 0x80059224: lw          $t9, 0x158($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X158);
    // 0x80059228: nop

    // 0x8005922C: bne         $t8, $t9, L_80059294
    if (ctx->r24 != ctx->r25) {
        // 0x80059230: nop
    
            goto L_80059294;
    }
    // 0x80059230: nop

    // 0x80059234: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80059238: lbu         $t1, 0x16C($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X16C);
    // 0x8005923C: lw          $t3, 0x15C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X15C);
    // 0x80059240: nop

    // 0x80059244: bne         $t1, $t3, L_80059294
    if (ctx->r9 != ctx->r11) {
        // 0x80059248: nop
    
            goto L_80059294;
    }
    // 0x80059248: nop

    // 0x8005924C: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x80059250: lbu         $t4, 0x170($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X170);
    // 0x80059254: lw          $t5, 0x160($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X160);
    // 0x80059258: nop

    // 0x8005925C: bne         $t4, $t5, L_80059294
    if (ctx->r12 != ctx->r13) {
        // 0x80059260: nop
    
            goto L_80059294;
    }
    // 0x80059260: nop

    // 0x80059264: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80059268: lbu         $t2, 0x174($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X174);
    // 0x8005926C: lw          $t6, 0x164($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X164);
    // 0x80059270: nop

    // 0x80059274: bne         $t2, $t6, L_80059294
    if (ctx->r10 != ctx->r14) {
        // 0x80059278: nop
    
            goto L_80059294;
    }
    // 0x80059278: nop

    // 0x8005927C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80059280: lh          $t7, 0x164($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X164);
    // 0x80059284: lw          $t8, 0x124($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X124);
    // 0x80059288: nop

    // 0x8005928C: beq         $t7, $t8, L_80059440
    if (ctx->r15 == ctx->r24) {
        // 0x80059290: nop
    
            goto L_80059440;
    }
    // 0x80059290: nop

L_80059294:
    // 0x80059294: lw          $t9, 0x164($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X164);
    // 0x80059298: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005929C: bne         $t9, $at, L_8005930C
    if (ctx->r25 != ctx->r1) {
        // 0x800592A0: nop
    
            goto L_8005930C;
    }
    // 0x800592A0: nop

    // 0x800592A4: lw          $t1, 0x158($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X158);
    // 0x800592A8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800592AC: bne         $t1, $at, L_8005930C
    if (ctx->r9 != ctx->r1) {
        // 0x800592B0: nop
    
            goto L_8005930C;
    }
    // 0x800592B0: nop

    // 0x800592B4: lw          $t3, 0x15C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X15C);
    // 0x800592B8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800592BC: bne         $t3, $at, L_8005930C
    if (ctx->r11 != ctx->r1) {
        // 0x800592C0: nop
    
            goto L_8005930C;
    }
    // 0x800592C0: nop

    // 0x800592C4: lw          $t4, 0x160($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X160);
    // 0x800592C8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800592CC: bne         $t4, $at, L_8005930C
    if (ctx->r12 != ctx->r1) {
        // 0x800592D0: nop
    
            goto L_8005930C;
    }
    // 0x800592D0: nop

    // 0x800592D4: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x800592D8: lui         $t7, 0xFCFF
    ctx->r15 = S32(0XFCFF << 16);
    // 0x800592DC: sw          $t5, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r13;
    // 0x800592E0: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x800592E4: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x800592E8: addiu       $t6, $t2, 0x8
    ctx->r14 = ADD32(ctx->r10, 0X8);
    // 0x800592EC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800592F0: lw          $t8, 0x114($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X114);
    // 0x800592F4: lui         $t9, 0xFFFC
    ctx->r25 = S32(0XFFFC << 16);
    // 0x800592F8: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x800592FC: lw          $t1, 0x114($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X114);
    // 0x80059300: ori         $t9, $t9, 0xF279
    ctx->r25 = ctx->r25 | 0XF279;
    // 0x80059304: b           L_80059410
    // 0x80059308: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
        goto L_80059410;
    // 0x80059308: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
L_8005930C:
    // 0x8005930C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80059310: lbu         $t3, 0x168($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X168);
    // 0x80059314: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80059318: bne         $t3, $at, L_8005935C
    if (ctx->r11 != ctx->r1) {
        // 0x8005931C: nop
    
            goto L_8005935C;
    }
    // 0x8005931C: nop

    // 0x80059320: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x80059324: lbu         $t4, 0x16C($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X16C);
    // 0x80059328: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005932C: bne         $t4, $at, L_8005935C
    if (ctx->r12 != ctx->r1) {
        // 0x80059330: nop
    
            goto L_8005935C;
    }
    // 0x80059330: nop

    // 0x80059334: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80059338: lbu         $t5, 0x170($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X170);
    // 0x8005933C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80059340: bne         $t5, $at, L_8005935C
    if (ctx->r13 != ctx->r1) {
        // 0x80059344: nop
    
            goto L_8005935C;
    }
    // 0x80059344: nop

    // 0x80059348: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8005934C: lbu         $t2, 0x174($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X174);
    // 0x80059350: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80059354: beq         $t2, $at, L_80059374
    if (ctx->r10 == ctx->r1) {
        // 0x80059358: nop
    
            goto L_80059374;
    }
    // 0x80059358: nop

L_8005935C:
    // 0x8005935C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80059360: lh          $t6, 0x164($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X164);
    // 0x80059364: lw          $t7, 0x124($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X124);
    // 0x80059368: nop

    // 0x8005936C: beq         $t6, $t7, L_800593A8
    if (ctx->r14 == ctx->r15) {
        // 0x80059370: nop
    
            goto L_800593A8;
    }
    // 0x80059370: nop

L_80059374:
    // 0x80059374: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80059378: lui         $t3, 0xFC11
    ctx->r11 = S32(0XFC11 << 16);
    // 0x8005937C: sw          $t8, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r24;
    // 0x80059380: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80059384: ori         $t3, $t3, 0x9623
    ctx->r11 = ctx->r11 | 0X9623;
    // 0x80059388: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x8005938C: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80059390: lw          $t4, 0x110($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X110);
    // 0x80059394: lui         $t5, 0xFF2F
    ctx->r13 = S32(0XFF2F << 16);
    // 0x80059398: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005939C: lw          $t2, 0x110($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X110);
    // 0x800593A0: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x800593A4: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
L_800593A8:
    // 0x800593A8: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800593AC: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x800593B0: sw          $t6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r14;
    // 0x800593B4: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800593B8: nop

    // 0x800593BC: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x800593C0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800593C4: lw          $t1, 0x10C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10C);
    // 0x800593C8: nop

    // 0x800593CC: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x800593D0: lw          $t2, 0x15C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X15C);
    // 0x800593D4: lw          $t3, 0x158($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X158);
    // 0x800593D8: lw          $t9, 0x160($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X160);
    // 0x800593DC: andi        $t6, $t2, 0xFF
    ctx->r14 = ctx->r10 & 0XFF;
    // 0x800593E0: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x800593E4: sll         $t5, $t4, 24
    ctx->r13 = S32(ctx->r12 << 24);
    // 0x800593E8: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x800593EC: lw          $t2, 0x164($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X164);
    // 0x800593F0: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x800593F4: andi        $t1, $t9, 0xFF
    ctx->r9 = ctx->r25 & 0XFF;
    // 0x800593F8: sll         $t3, $t1, 8
    ctx->r11 = S32(ctx->r9 << 8);
    // 0x800593FC: lw          $t7, 0x10C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10C);
    // 0x80059400: or          $t4, $t8, $t3
    ctx->r12 = ctx->r24 | ctx->r11;
    // 0x80059404: andi        $t6, $t2, 0xFF
    ctx->r14 = ctx->r10 & 0XFF;
    // 0x80059408: or          $t5, $t4, $t6
    ctx->r13 = ctx->r12 | ctx->r14;
    // 0x8005940C: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
L_80059410:
    // 0x80059410: lw          $t9, 0x158($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X158);
    // 0x80059414: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80059418: lw          $t1, 0x15C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X15C);
    // 0x8005941C: sb          $t9, 0x168($at)
    MEM_B(0X168, ctx->r1) = ctx->r25;
    // 0x80059420: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80059424: lw          $t8, 0x160($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X160);
    // 0x80059428: sb          $t1, 0x16C($at)
    MEM_B(0X16C, ctx->r1) = ctx->r9;
    // 0x8005942C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80059430: lw          $t3, 0x164($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X164);
    // 0x80059434: sb          $t8, 0x170($at)
    MEM_B(0X170, ctx->r1) = ctx->r24;
    // 0x80059438: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005943C: sb          $t3, 0x174($at)
    MEM_B(0X174, ctx->r1) = ctx->r11;
L_80059440:
    // 0x80059440: lw          $t4, 0x14C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14C);
    // 0x80059444: lw          $t2, 0x124($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X124);
    // 0x80059448: subu        $t6, $t4, $a3
    ctx->r14 = SUB32(ctx->r12, ctx->r7);
    // 0x8005944C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80059450: addiu       $t5, $t6, 0x1
    ctx->r13 = ADD32(ctx->r14, 0X1);
    // 0x80059454: sw          $t5, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r13;
    // 0x80059458: beq         $t5, $zero, L_8005AA60
    if (ctx->r13 == 0) {
        // 0x8005945C: sh          $t2, 0x164($at)
        MEM_H(0X164, ctx->r1) = ctx->r10;
            goto L_8005AA60;
    }
    // 0x8005945C: sh          $t2, 0x164($at)
    MEM_H(0X164, ctx->r1) = ctx->r10;
L_80059460:
    // 0x80059460: lw          $t7, 0x130($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X130);
    // 0x80059464: lw          $t9, 0x134($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X134);
    // 0x80059468: nop

    // 0x8005946C: slt         $at, $t9, $t7
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80059470: beq         $at, $zero, L_80059FB8
    if (ctx->r1 == 0) {
        // 0x80059474: nop
    
            goto L_80059FB8;
    }
    // 0x80059474: nop

    // 0x80059478: lw          $t0, 0x124($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X124);
    // 0x8005947C: nop

    // 0x80059480: beq         $t0, $zero, L_800594A8
    if (ctx->r8 == 0) {
        // 0x80059484: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800594A8;
    }
    // 0x80059484: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80059488: beq         $t0, $at, L_8005970C
    if (ctx->r8 == ctx->r1) {
        // 0x8005948C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8005970C;
    }
    // 0x8005948C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80059490: beq         $t0, $at, L_80059984
    if (ctx->r8 == ctx->r1) {
        // 0x80059494: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80059984;
    }
    // 0x80059494: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80059498: beq         $t0, $at, L_80059BE0
    if (ctx->r8 == ctx->r1) {
        // 0x8005949C: nop
    
            goto L_80059BE0;
    }
    // 0x8005949C: nop

    // 0x800594A0: b           L_80059E38
    // 0x800594A4: nop

        goto L_80059E38;
    // 0x800594A4: nop

L_800594A8:
    // 0x800594A8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x800594AC: lui         $at, 0xFD10
    ctx->r1 = S32(0XFD10 << 16);
    // 0x800594B0: sw          $t1, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r9;
    // 0x800594B4: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x800594B8: addiu       $t9, $a1, 0x8
    ctx->r25 = ADD32(ctx->r5, 0X8);
    // 0x800594BC: addiu       $t3, $t8, 0x8
    ctx->r11 = ADD32(ctx->r24, 0X8);
    // 0x800594C0: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x800594C4: lw          $t2, 0x12C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X12C);
    // 0x800594C8: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
    // 0x800594CC: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x800594D0: andi        $t6, $t4, 0xFFF
    ctx->r14 = ctx->r12 & 0XFFF;
    // 0x800594D4: or          $t5, $t6, $at
    ctx->r13 = ctx->r14 | ctx->r1;
    // 0x800594D8: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x800594DC: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x800594E0: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x800594E4: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x800594E8: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x800594EC: nop

    // 0x800594F0: sw          $t8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r24;
    // 0x800594F4: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x800594F8: nop

    // 0x800594FC: addiu       $t2, $t3, 0x8
    ctx->r10 = ADD32(ctx->r11, 0X8);
    // 0x80059500: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80059504: lw          $t4, 0x148($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X148);
    // 0x80059508: lw          $t2, 0x104($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X104);
    // 0x8005950C: subu        $t6, $t4, $a2
    ctx->r14 = SUB32(ctx->r12, ctx->r6);
    // 0x80059510: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x80059514: addiu       $t7, $t5, 0x9
    ctx->r15 = ADD32(ctx->r13, 0X9);
    // 0x80059518: sra         $t9, $t7, 3
    ctx->r25 = S32(SIGNED(ctx->r15) >> 3);
    // 0x8005951C: andi        $t1, $t9, 0x1FF
    ctx->r9 = ctx->r25 & 0X1FF;
    // 0x80059520: sll         $t8, $t1, 9
    ctx->r24 = S32(ctx->r9 << 9);
    // 0x80059524: or          $t3, $t8, $at
    ctx->r11 = ctx->r24 | ctx->r1;
    // 0x80059528: sw          $t3, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r11;
    // 0x8005952C: lw          $t6, 0x104($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X104);
    // 0x80059530: lui         $t4, 0x708
    ctx->r12 = S32(0X708 << 16);
    // 0x80059534: ori         $t4, $t4, 0x200
    ctx->r12 = ctx->r12 | 0X200;
    // 0x80059538: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x8005953C: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80059540: lui         $t1, 0xE600
    ctx->r9 = S32(0XE600 << 16);
    // 0x80059544: sw          $t5, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r13;
    // 0x80059548: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005954C: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80059550: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x80059554: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80059558: lw          $t8, 0x100($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X100);
    // 0x8005955C: nop

    // 0x80059560: sw          $t1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r9;
    // 0x80059564: lw          $t3, 0x100($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X100);
    // 0x80059568: nop

    // 0x8005956C: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x80059570: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80059574: nop

    // 0x80059578: sw          $t2, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r10;
    // 0x8005957C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80059580: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x80059584: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x80059588: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005958C: lw          $t7, 0x130($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X130);
    // 0x80059590: lw          $t5, 0x14C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14C);
    // 0x80059594: andi        $t4, $t2, 0xFFF
    ctx->r12 = ctx->r10 & 0XFFF;
    // 0x80059598: subu        $t9, $t5, $t7
    ctx->r25 = SUB32(ctx->r13, ctx->r15);
    // 0x8005959C: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x800595A0: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x800595A4: sll         $t6, $t4, 12
    ctx->r14 = S32(ctx->r12 << 12);
    // 0x800595A8: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x800595AC: or          $t5, $t6, $at
    ctx->r13 = ctx->r14 | ctx->r1;
    // 0x800595B0: andi        $t3, $t8, 0xFFF
    ctx->r11 = ctx->r24 & 0XFFF;
    // 0x800595B4: or          $t7, $t5, $t3
    ctx->r15 = ctx->r13 | ctx->r11;
    // 0x800595B8: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x800595BC: lw          $t8, 0x130($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X130);
    // 0x800595C0: lw          $t1, 0x14C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14C);
    // 0x800595C4: lw          $t7, 0x148($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X148);
    // 0x800595C8: lw          $t4, 0x134($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X134);
    // 0x800595CC: subu        $t2, $t1, $t8
    ctx->r10 = SUB32(ctx->r9, ctx->r24);
    // 0x800595D0: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800595D4: addu        $t6, $t2, $t4
    ctx->r14 = ADD32(ctx->r10, ctx->r12);
    // 0x800595D8: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x800595DC: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x800595E0: sll         $t8, $t1, 12
    ctx->r24 = S32(ctx->r9 << 12);
    // 0x800595E4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x800595E8: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x800595EC: or          $t2, $t8, $at
    ctx->r10 = ctx->r24 | ctx->r1;
    // 0x800595F0: andi        $t3, $t5, 0xFFF
    ctx->r11 = ctx->r13 & 0XFFF;
    // 0x800595F4: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x800595F8: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x800595FC: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80059600: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x80059604: sw          $t5, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r13;
    // 0x80059608: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005960C: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x80059610: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x80059614: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80059618: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
    // 0x8005961C: nop

    // 0x80059620: sw          $t1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r9;
    // 0x80059624: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
    // 0x80059628: nop

    // 0x8005962C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x80059630: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80059634: nop

    // 0x80059638: sw          $t3, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r11;
    // 0x8005963C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80059640: nop

    // 0x80059644: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x80059648: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005964C: lw          $t5, 0x148($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X148);
    // 0x80059650: lw          $t6, 0xF4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF4);
    // 0x80059654: subu        $t7, $t5, $a2
    ctx->r15 = SUB32(ctx->r13, ctx->r6);
    // 0x80059658: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x8005965C: addiu       $t1, $t9, 0x9
    ctx->r9 = ADD32(ctx->r25, 0X9);
    // 0x80059660: sra         $t8, $t1, 3
    ctx->r24 = S32(SIGNED(ctx->r9) >> 3);
    // 0x80059664: andi        $t2, $t8, 0x1FF
    ctx->r10 = ctx->r24 & 0X1FF;
    // 0x80059668: sll         $t3, $t2, 9
    ctx->r11 = S32(ctx->r10 << 9);
    // 0x8005966C: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x80059670: sw          $t4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r12;
    // 0x80059674: lw          $t7, 0xF4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF4);
    // 0x80059678: lui         $t5, 0x8
    ctx->r13 = S32(0X8 << 16);
    // 0x8005967C: ori         $t5, $t5, 0x200
    ctx->r13 = ctx->r13 | 0X200;
    // 0x80059680: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
    // 0x80059684: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80059688: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005968C: sw          $t9, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r25;
    // 0x80059690: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80059694: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x80059698: addiu       $t8, $t1, 0x8
    ctx->r24 = ADD32(ctx->r9, 0X8);
    // 0x8005969C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800596A0: lw          $t3, 0x130($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X130);
    // 0x800596A4: lw          $t2, 0x14C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14C);
    // 0x800596A8: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x800596AC: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x800596B0: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x800596B4: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x800596B8: sll         $t8, $t1, 12
    ctx->r24 = S32(ctx->r9 << 12);
    // 0x800596BC: lw          $t4, 0xF0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XF0);
    // 0x800596C0: or          $t2, $t8, $at
    ctx->r10 = ctx->r24 | ctx->r1;
    // 0x800596C4: andi        $t7, $t5, 0xFFF
    ctx->r15 = ctx->r13 & 0XFFF;
    // 0x800596C8: or          $t3, $t2, $t7
    ctx->r11 = ctx->r10 | ctx->r15;
    // 0x800596CC: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x800596D0: lw          $t5, 0x130($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X130);
    // 0x800596D4: lw          $t6, 0x14C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14C);
    // 0x800596D8: lw          $t3, 0x148($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X148);
    // 0x800596DC: lw          $t1, 0x134($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X134);
    // 0x800596E0: subu        $t9, $t6, $t5
    ctx->r25 = SUB32(ctx->r14, ctx->r13);
    // 0x800596E4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800596E8: addu        $t8, $t9, $t1
    ctx->r24 = ADD32(ctx->r25, ctx->r9);
    // 0x800596EC: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x800596F0: andi        $t6, $t4, 0xFFF
    ctx->r14 = ctx->r12 & 0XFFF;
    // 0x800596F4: lw          $t1, 0xF0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF0);
    // 0x800596F8: sll         $t5, $t6, 12
    ctx->r13 = S32(ctx->r14 << 12);
    // 0x800596FC: andi        $t7, $t2, 0xFFF
    ctx->r15 = ctx->r10 & 0XFFF;
    // 0x80059700: or          $t9, $t5, $t7
    ctx->r25 = ctx->r13 | ctx->r15;
    // 0x80059704: b           L_80059E38
    // 0x80059708: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
        goto L_80059E38;
    // 0x80059708: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
L_8005970C:
    // 0x8005970C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80059710: lui         $at, 0xFD88
    ctx->r1 = S32(0XFD88 << 16);
    // 0x80059714: sw          $t8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r24;
    // 0x80059718: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005971C: addiu       $t8, $a1, 0x8
    ctx->r24 = ADD32(ctx->r5, 0X8);
    // 0x80059720: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80059724: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80059728: lw          $t4, 0x12C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X12C);
    // 0x8005972C: lw          $t1, 0xEC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XEC);
    // 0x80059730: sra         $t6, $t4, 1
    ctx->r14 = S32(SIGNED(ctx->r12) >> 1);
    // 0x80059734: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x80059738: andi        $t7, $t5, 0xFFF
    ctx->r15 = ctx->r13 & 0XFFF;
    // 0x8005973C: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x80059740: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x80059744: lw          $t2, 0xEC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XEC);
    // 0x80059748: lui         $at, 0xF588
    ctx->r1 = S32(0XF588 << 16);
    // 0x8005974C: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x80059750: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80059754: nop

    // 0x80059758: sw          $t3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r11;
    // 0x8005975C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80059760: nop

    // 0x80059764: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x80059768: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005976C: lw          $t5, 0x148($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X148);
    // 0x80059770: nop

    // 0x80059774: subu        $t7, $t5, $a2
    ctx->r15 = SUB32(ctx->r13, ctx->r6);
    // 0x80059778: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x8005977C: sra         $t1, $t9, 1
    ctx->r9 = S32(SIGNED(ctx->r25) >> 1);
    // 0x80059780: addiu       $t8, $t1, 0x7
    ctx->r24 = ADD32(ctx->r9, 0X7);
    // 0x80059784: sra         $t2, $t8, 3
    ctx->r10 = S32(SIGNED(ctx->r24) >> 3);
    // 0x80059788: andi        $t3, $t2, 0x1FF
    ctx->r11 = ctx->r10 & 0X1FF;
    // 0x8005978C: lw          $t5, 0xE8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE8);
    // 0x80059790: sll         $t4, $t3, 9
    ctx->r12 = S32(ctx->r11 << 9);
    // 0x80059794: or          $t6, $t4, $at
    ctx->r14 = ctx->r12 | ctx->r1;
    // 0x80059798: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x8005979C: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
    // 0x800597A0: lui         $t7, 0x708
    ctx->r15 = S32(0X708 << 16);
    // 0x800597A4: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x800597A8: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x800597AC: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x800597B0: lui         $t3, 0xE600
    ctx->r11 = S32(0XE600 << 16);
    // 0x800597B4: sw          $t1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r9;
    // 0x800597B8: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x800597BC: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x800597C0: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x800597C4: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x800597C8: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x800597CC: nop

    // 0x800597D0: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x800597D4: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
    // 0x800597D8: nop

    // 0x800597DC: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x800597E0: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x800597E4: nop

    // 0x800597E8: sw          $t5, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r13;
    // 0x800597EC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800597F0: sll         $t5, $a2, 1
    ctx->r13 = S32(ctx->r6 << 1);
    // 0x800597F4: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x800597F8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800597FC: lw          $t8, 0x130($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X130);
    // 0x80059800: lw          $t1, 0x14C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14C);
    // 0x80059804: andi        $t7, $t5, 0xFFF
    ctx->r15 = ctx->r13 & 0XFFF;
    // 0x80059808: subu        $t2, $t1, $t8
    ctx->r10 = SUB32(ctx->r9, ctx->r24);
    // 0x8005980C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80059810: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80059814: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x80059818: lw          $t2, 0xE0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE0);
    // 0x8005981C: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x80059820: andi        $t6, $t4, 0xFFF
    ctx->r14 = ctx->r12 & 0XFFF;
    // 0x80059824: or          $t8, $t1, $t6
    ctx->r24 = ctx->r9 | ctx->r14;
    // 0x80059828: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8005982C: lw          $t4, 0x130($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X130);
    // 0x80059830: lw          $t3, 0x14C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14C);
    // 0x80059834: lw          $t8, 0x148($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X148);
    // 0x80059838: lw          $t7, 0x134($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X134);
    // 0x8005983C: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x80059840: sll         $t2, $t8, 1
    ctx->r10 = S32(ctx->r24 << 1);
    // 0x80059844: addu        $t9, $t5, $t7
    ctx->r25 = ADD32(ctx->r13, ctx->r15);
    // 0x80059848: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8005984C: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x80059850: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x80059854: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80059858: lw          $t9, 0xE0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE0);
    // 0x8005985C: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80059860: andi        $t6, $t1, 0xFFF
    ctx->r14 = ctx->r9 & 0XFFF;
    // 0x80059864: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x80059868: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x8005986C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80059870: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x80059874: sw          $t1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r9;
    // 0x80059878: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005987C: lui         $at, 0xF580
    ctx->r1 = S32(0XF580 << 16);
    // 0x80059880: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x80059884: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80059888: lw          $t4, 0xDC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XDC);
    // 0x8005988C: nop

    // 0x80059890: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80059894: lw          $t5, 0xDC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XDC);
    // 0x80059898: nop

    // 0x8005989C: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x800598A0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800598A4: nop

    // 0x800598A8: sw          $t6, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r14;
    // 0x800598AC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800598B0: nop

    // 0x800598B4: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x800598B8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800598BC: lw          $t1, 0x148($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X148);
    // 0x800598C0: nop

    // 0x800598C4: subu        $t8, $t1, $a2
    ctx->r24 = SUB32(ctx->r9, ctx->r6);
    // 0x800598C8: addiu       $t2, $t8, 0x1
    ctx->r10 = ADD32(ctx->r24, 0X1);
    // 0x800598CC: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x800598D0: addiu       $t4, $t3, 0x7
    ctx->r12 = ADD32(ctx->r11, 0X7);
    // 0x800598D4: sra         $t5, $t4, 3
    ctx->r13 = S32(SIGNED(ctx->r12) >> 3);
    // 0x800598D8: andi        $t6, $t5, 0x1FF
    ctx->r14 = ctx->r13 & 0X1FF;
    // 0x800598DC: lw          $t1, 0xD8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD8);
    // 0x800598E0: sll         $t7, $t6, 9
    ctx->r15 = S32(ctx->r14 << 9);
    // 0x800598E4: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x800598E8: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x800598EC: lw          $t2, 0xD8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD8);
    // 0x800598F0: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x800598F4: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x800598F8: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x800598FC: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80059900: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80059904: sw          $t3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r11;
    // 0x80059908: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005990C: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x80059910: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x80059914: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x80059918: lw          $t7, 0x130($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X130);
    // 0x8005991C: lw          $t6, 0x14C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14C);
    // 0x80059920: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x80059924: subu        $t9, $t6, $t7
    ctx->r25 = SUB32(ctx->r14, ctx->r15);
    // 0x80059928: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8005992C: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x80059930: sll         $t5, $t4, 12
    ctx->r13 = S32(ctx->r12 << 12);
    // 0x80059934: lw          $t9, 0xD4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD4);
    // 0x80059938: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8005993C: andi        $t2, $t8, 0xFFF
    ctx->r10 = ctx->r24 & 0XFFF;
    // 0x80059940: or          $t7, $t6, $t2
    ctx->r15 = ctx->r14 | ctx->r10;
    // 0x80059944: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x80059948: lw          $t8, 0x130($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X130);
    // 0x8005994C: lw          $t1, 0x14C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14C);
    // 0x80059950: lw          $t7, 0x148($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X148);
    // 0x80059954: lw          $t4, 0x134($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X134);
    // 0x80059958: subu        $t3, $t1, $t8
    ctx->r11 = SUB32(ctx->r9, ctx->r24);
    // 0x8005995C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80059960: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80059964: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80059968: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x8005996C: lw          $t4, 0xD4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD4);
    // 0x80059970: sll         $t8, $t1, 12
    ctx->r24 = S32(ctx->r9 << 12);
    // 0x80059974: andi        $t2, $t6, 0xFFF
    ctx->r10 = ctx->r14 & 0XFFF;
    // 0x80059978: or          $t3, $t8, $t2
    ctx->r11 = ctx->r24 | ctx->r10;
    // 0x8005997C: b           L_80059E38
    // 0x80059980: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
        goto L_80059E38;
    // 0x80059980: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
L_80059984:
    // 0x80059984: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80059988: lui         $at, 0xFD68
    ctx->r1 = S32(0XFD68 << 16);
    // 0x8005998C: sw          $t5, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r13;
    // 0x80059990: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80059994: addiu       $t4, $a1, 0x8
    ctx->r12 = ADD32(ctx->r5, 0X8);
    // 0x80059998: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005999C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800599A0: lw          $t9, 0x12C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X12C);
    // 0x800599A4: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x800599A8: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x800599AC: andi        $t8, $t1, 0xFFF
    ctx->r24 = ctx->r9 & 0XFFF;
    // 0x800599B0: or          $t2, $t8, $at
    ctx->r10 = ctx->r24 | ctx->r1;
    // 0x800599B4: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x800599B8: lw          $t5, 0xD0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD0);
    // 0x800599BC: lui         $at, 0xF568
    ctx->r1 = S32(0XF568 << 16);
    // 0x800599C0: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x800599C4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800599C8: nop

    // 0x800599CC: sw          $t6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r14;
    // 0x800599D0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800599D4: nop

    // 0x800599D8: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x800599DC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800599E0: lw          $t1, 0x148($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X148);
    // 0x800599E4: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x800599E8: subu        $t8, $t1, $a2
    ctx->r24 = SUB32(ctx->r9, ctx->r6);
    // 0x800599EC: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x800599F0: sra         $t3, $t2, 3
    ctx->r11 = S32(SIGNED(ctx->r10) >> 3);
    // 0x800599F4: andi        $t4, $t3, 0x1FF
    ctx->r12 = ctx->r11 & 0X1FF;
    // 0x800599F8: sll         $t5, $t4, 9
    ctx->r13 = S32(ctx->r12 << 9);
    // 0x800599FC: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80059A00: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80059A04: lw          $t1, 0xCC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XCC);
    // 0x80059A08: lui         $t9, 0x708
    ctx->r25 = S32(0X708 << 16);
    // 0x80059A0C: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x80059A10: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x80059A14: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80059A18: lui         $t4, 0xE600
    ctx->r12 = S32(0XE600 << 16);
    // 0x80059A1C: sw          $t8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r24;
    // 0x80059A20: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80059A24: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80059A28: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80059A2C: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80059A30: lw          $t5, 0xC8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC8);
    // 0x80059A34: nop

    // 0x80059A38: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80059A3C: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x80059A40: nop

    // 0x80059A44: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x80059A48: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80059A4C: nop

    // 0x80059A50: sw          $t7, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r15;
    // 0x80059A54: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80059A58: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x80059A5C: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x80059A60: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80059A64: lw          $t2, 0x130($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X130);
    // 0x80059A68: lw          $t8, 0x14C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14C);
    // 0x80059A6C: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x80059A70: subu        $t3, $t8, $t2
    ctx->r11 = SUB32(ctx->r24, ctx->r10);
    // 0x80059A74: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80059A78: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80059A7C: sll         $t1, $t9, 12
    ctx->r9 = S32(ctx->r25 << 12);
    // 0x80059A80: lw          $t3, 0xC4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC4);
    // 0x80059A84: or          $t8, $t1, $at
    ctx->r24 = ctx->r9 | ctx->r1;
    // 0x80059A88: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x80059A8C: or          $t2, $t8, $t6
    ctx->r10 = ctx->r24 | ctx->r14;
    // 0x80059A90: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80059A94: lw          $t5, 0x130($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X130);
    // 0x80059A98: lw          $t4, 0x14C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14C);
    // 0x80059A9C: lw          $t2, 0x148($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X148);
    // 0x80059AA0: lw          $t9, 0x134($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X134);
    // 0x80059AA4: subu        $t7, $t4, $t5
    ctx->r15 = SUB32(ctx->r12, ctx->r13);
    // 0x80059AA8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80059AAC: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x80059AB0: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x80059AB4: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x80059AB8: sll         $t5, $t4, 12
    ctx->r13 = S32(ctx->r12 << 12);
    // 0x80059ABC: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80059AC0: lw          $t1, 0xC4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC4);
    // 0x80059AC4: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x80059AC8: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x80059ACC: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x80059AD0: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x80059AD4: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80059AD8: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x80059ADC: sw          $t8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r24;
    // 0x80059AE0: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80059AE4: lui         $at, 0xF568
    ctx->r1 = S32(0XF568 << 16);
    // 0x80059AE8: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80059AEC: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80059AF0: lw          $t5, 0xC0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC0);
    // 0x80059AF4: nop

    // 0x80059AF8: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80059AFC: lw          $t7, 0xC0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC0);
    // 0x80059B00: nop

    // 0x80059B04: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x80059B08: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80059B0C: nop

    // 0x80059B10: sw          $t6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r14;
    // 0x80059B14: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80059B18: nop

    // 0x80059B1C: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x80059B20: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80059B24: lw          $t8, 0x148($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X148);
    // 0x80059B28: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x80059B2C: subu        $t2, $t8, $a2
    ctx->r10 = SUB32(ctx->r24, ctx->r6);
    // 0x80059B30: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80059B34: sra         $t4, $t3, 3
    ctx->r12 = S32(SIGNED(ctx->r11) >> 3);
    // 0x80059B38: andi        $t5, $t4, 0x1FF
    ctx->r13 = ctx->r12 & 0X1FF;
    // 0x80059B3C: sll         $t7, $t5, 9
    ctx->r15 = S32(ctx->r13 << 9);
    // 0x80059B40: or          $t6, $t7, $at
    ctx->r14 = ctx->r15 | ctx->r1;
    // 0x80059B44: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x80059B48: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x80059B4C: lui         $t1, 0x8
    ctx->r9 = S32(0X8 << 16);
    // 0x80059B50: ori         $t1, $t1, 0x200
    ctx->r9 = ctx->r9 | 0X200;
    // 0x80059B54: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x80059B58: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80059B5C: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80059B60: sw          $t2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r10;
    // 0x80059B64: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80059B68: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x80059B6C: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80059B70: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x80059B74: lw          $t7, 0x130($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X130);
    // 0x80059B78: lw          $t5, 0x14C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14C);
    // 0x80059B7C: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x80059B80: subu        $t6, $t5, $t7
    ctx->r14 = SUB32(ctx->r13, ctx->r15);
    // 0x80059B84: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x80059B88: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80059B8C: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x80059B90: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x80059B94: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80059B98: andi        $t8, $t1, 0xFFF
    ctx->r24 = ctx->r9 & 0XFFF;
    // 0x80059B9C: or          $t7, $t5, $t8
    ctx->r15 = ctx->r13 | ctx->r24;
    // 0x80059BA0: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
    // 0x80059BA4: lw          $t1, 0x130($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X130);
    // 0x80059BA8: lw          $t9, 0x14C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14C);
    // 0x80059BAC: lw          $t7, 0x148($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X148);
    // 0x80059BB0: lw          $t3, 0x134($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X134);
    // 0x80059BB4: subu        $t2, $t9, $t1
    ctx->r10 = SUB32(ctx->r25, ctx->r9);
    // 0x80059BB8: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80059BBC: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80059BC0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80059BC4: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x80059BC8: lw          $t3, 0xB8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB8);
    // 0x80059BCC: sll         $t1, $t9, 12
    ctx->r9 = S32(ctx->r25 << 12);
    // 0x80059BD0: andi        $t8, $t5, 0xFFF
    ctx->r24 = ctx->r13 & 0XFFF;
    // 0x80059BD4: or          $t2, $t1, $t8
    ctx->r10 = ctx->r9 | ctx->r24;
    // 0x80059BD8: b           L_80059E38
    // 0x80059BDC: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
        goto L_80059E38;
    // 0x80059BDC: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
L_80059BE0:
    // 0x80059BE0: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80059BE4: lui         $at, 0xFD48
    ctx->r1 = S32(0XFD48 << 16);
    // 0x80059BE8: sw          $t4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r12;
    // 0x80059BEC: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80059BF0: addiu       $t3, $a1, 0x8
    ctx->r11 = ADD32(ctx->r5, 0X8);
    // 0x80059BF4: addiu       $t7, $t5, 0x8
    ctx->r15 = ADD32(ctx->r13, 0X8);
    // 0x80059BF8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80059BFC: lw          $t6, 0x12C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X12C);
    // 0x80059C00: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x80059C04: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x80059C08: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x80059C0C: or          $t8, $t1, $at
    ctx->r24 = ctx->r9 | ctx->r1;
    // 0x80059C10: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80059C14: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x80059C18: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x80059C1C: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x80059C20: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80059C24: nop

    // 0x80059C28: sw          $t5, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r13;
    // 0x80059C2C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80059C30: nop

    // 0x80059C34: addiu       $t6, $t7, 0x8
    ctx->r14 = ADD32(ctx->r15, 0X8);
    // 0x80059C38: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80059C3C: lw          $t9, 0x148($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X148);
    // 0x80059C40: lw          $t7, 0xB0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB0);
    // 0x80059C44: subu        $t1, $t9, $a2
    ctx->r9 = SUB32(ctx->r25, ctx->r6);
    // 0x80059C48: addiu       $t8, $t1, 0x8
    ctx->r24 = ADD32(ctx->r9, 0X8);
    // 0x80059C4C: sra         $t2, $t8, 3
    ctx->r10 = S32(SIGNED(ctx->r24) >> 3);
    // 0x80059C50: andi        $t3, $t2, 0x1FF
    ctx->r11 = ctx->r10 & 0X1FF;
    // 0x80059C54: sll         $t4, $t3, 9
    ctx->r12 = S32(ctx->r11 << 9);
    // 0x80059C58: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80059C5C: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x80059C60: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
    // 0x80059C64: lui         $t6, 0x708
    ctx->r14 = S32(0X708 << 16);
    // 0x80059C68: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x80059C6C: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
    // 0x80059C70: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80059C74: lui         $t3, 0xE600
    ctx->r11 = S32(0XE600 << 16);
    // 0x80059C78: sw          $t1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r9;
    // 0x80059C7C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80059C80: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80059C84: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x80059C88: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80059C8C: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x80059C90: nop

    // 0x80059C94: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80059C98: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x80059C9C: nop

    // 0x80059CA0: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x80059CA4: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80059CA8: nop

    // 0x80059CAC: sw          $t7, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r15;
    // 0x80059CB0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80059CB4: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x80059CB8: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x80059CBC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80059CC0: lw          $t8, 0x130($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X130);
    // 0x80059CC4: lw          $t1, 0x14C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14C);
    // 0x80059CC8: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x80059CCC: subu        $t2, $t1, $t8
    ctx->r10 = SUB32(ctx->r9, ctx->r24);
    // 0x80059CD0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80059CD4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80059CD8: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x80059CDC: lw          $t2, 0xA8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8);
    // 0x80059CE0: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x80059CE4: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x80059CE8: or          $t8, $t1, $t5
    ctx->r24 = ctx->r9 | ctx->r13;
    // 0x80059CEC: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80059CF0: lw          $t4, 0x130($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X130);
    // 0x80059CF4: lw          $t3, 0x14C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14C);
    // 0x80059CF8: lw          $t8, 0x148($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X148);
    // 0x80059CFC: lw          $t6, 0x134($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X134);
    // 0x80059D00: subu        $t7, $t3, $t4
    ctx->r15 = SUB32(ctx->r11, ctx->r12);
    // 0x80059D04: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80059D08: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x80059D0C: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80059D10: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x80059D14: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x80059D18: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80059D1C: lw          $t9, 0xA8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA8);
    // 0x80059D20: or          $t7, $t4, $at
    ctx->r15 = ctx->r12 | ctx->r1;
    // 0x80059D24: andi        $t5, $t1, 0xFFF
    ctx->r13 = ctx->r9 & 0XFFF;
    // 0x80059D28: or          $t6, $t7, $t5
    ctx->r14 = ctx->r15 | ctx->r13;
    // 0x80059D2C: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
    // 0x80059D30: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80059D34: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x80059D38: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x80059D3C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80059D40: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x80059D44: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x80059D48: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80059D4C: lw          $t4, 0xA4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA4);
    // 0x80059D50: nop

    // 0x80059D54: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80059D58: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x80059D5C: nop

    // 0x80059D60: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x80059D64: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80059D68: nop

    // 0x80059D6C: sw          $t5, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r13;
    // 0x80059D70: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80059D74: nop

    // 0x80059D78: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x80059D7C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80059D80: lw          $t1, 0x148($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X148);
    // 0x80059D84: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x80059D88: subu        $t8, $t1, $a2
    ctx->r24 = SUB32(ctx->r9, ctx->r6);
    // 0x80059D8C: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x80059D90: sra         $t3, $t2, 3
    ctx->r11 = S32(SIGNED(ctx->r10) >> 3);
    // 0x80059D94: andi        $t4, $t3, 0x1FF
    ctx->r12 = ctx->r11 & 0X1FF;
    // 0x80059D98: sll         $t7, $t4, 9
    ctx->r15 = S32(ctx->r12 << 9);
    // 0x80059D9C: or          $t5, $t7, $at
    ctx->r13 = ctx->r15 | ctx->r1;
    // 0x80059DA0: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80059DA4: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x80059DA8: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x80059DAC: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x80059DB0: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x80059DB4: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80059DB8: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80059DBC: sw          $t8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r24;
    // 0x80059DC0: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80059DC4: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x80059DC8: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80059DCC: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80059DD0: lw          $t7, 0x130($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X130);
    // 0x80059DD4: lw          $t4, 0x14C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14C);
    // 0x80059DD8: andi        $t2, $t8, 0xFFF
    ctx->r10 = ctx->r24 & 0XFFF;
    // 0x80059DDC: subu        $t5, $t4, $t7
    ctx->r13 = SUB32(ctx->r12, ctx->r15);
    // 0x80059DE0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80059DE4: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80059DE8: sll         $t3, $t2, 12
    ctx->r11 = S32(ctx->r10 << 12);
    // 0x80059DEC: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x80059DF0: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x80059DF4: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x80059DF8: or          $t7, $t4, $t1
    ctx->r15 = ctx->r12 | ctx->r9;
    // 0x80059DFC: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x80059E00: lw          $t9, 0x130($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X130);
    // 0x80059E04: lw          $t6, 0x14C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14C);
    // 0x80059E08: lw          $t7, 0x148($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X148);
    // 0x80059E0C: lw          $t2, 0x134($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X134);
    // 0x80059E10: subu        $t8, $t6, $t9
    ctx->r24 = SUB32(ctx->r14, ctx->r25);
    // 0x80059E14: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x80059E18: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x80059E1C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80059E20: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x80059E24: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x80059E28: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x80059E2C: andi        $t1, $t4, 0xFFF
    ctx->r9 = ctx->r12 & 0XFFF;
    // 0x80059E30: or          $t8, $t9, $t1
    ctx->r24 = ctx->r25 | ctx->r9;
    // 0x80059E34: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
L_80059E38:
    // 0x80059E38: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80059E3C: lui         $t5, 0xF200
    ctx->r13 = S32(0XF200 << 16);
    // 0x80059E40: sw          $t3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r11;
    // 0x80059E44: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80059E48: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80059E4C: addiu       $t7, $t4, 0x8
    ctx->r15 = ADD32(ctx->r12, 0X8);
    // 0x80059E50: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80059E54: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x80059E58: nop

    // 0x80059E5C: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80059E60: lw          $t9, 0x148($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X148);
    // 0x80059E64: lw          $t5, 0x134($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X134);
    // 0x80059E68: subu        $t1, $t9, $a2
    ctx->r9 = SUB32(ctx->r25, ctx->r6);
    // 0x80059E6C: addiu       $t8, $t1, 0x1
    ctx->r24 = ADD32(ctx->r9, 0X1);
    // 0x80059E70: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80059E74: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80059E78: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80059E7C: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x80059E80: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x80059E84: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x80059E88: sll         $t7, $t4, 12
    ctx->r15 = S32(ctx->r12 << 12);
    // 0x80059E8C: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x80059E90: or          $t8, $t7, $t1
    ctx->r24 = ctx->r15 | ctx->r9;
    // 0x80059E94: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x80059E98: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80059E9C: nop

    // 0x80059EA0: sw          $t3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r11;
    // 0x80059EA4: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80059EA8: nop

    // 0x80059EAC: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x80059EB0: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x80059EB4: lw          $t6, 0x150($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X150);
    // 0x80059EB8: lw          $t9, 0x148($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X148);
    // 0x80059EBC: nop

    // 0x80059EC0: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x80059EC4: subu        $t1, $t7, $a2
    ctx->r9 = SUB32(ctx->r15, ctx->r6);
    // 0x80059EC8: lw          $t9, 0x134($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X134);
    // 0x80059ECC: lw          $t6, 0x154($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X154);
    // 0x80059ED0: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x80059ED4: addiu       $t2, $t8, 0x3
    ctx->r10 = ADD32(ctx->r24, 0X3);
    // 0x80059ED8: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x80059EDC: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x80059EE0: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x80059EE4: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x80059EE8: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80059EEC: addiu       $t8, $t1, -0x1
    ctx->r24 = ADD32(ctx->r9, -0X1);
    // 0x80059EF0: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x80059EF4: andi        $t2, $t8, 0xFFF
    ctx->r10 = ctx->r24 & 0XFFF;
    // 0x80059EF8: or          $t3, $t5, $t2
    ctx->r11 = ctx->r13 | ctx->r10;
    // 0x80059EFC: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80059F00: lw          $t8, 0x154($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X154);
    // 0x80059F04: lw          $t6, 0x150($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X150);
    // 0x80059F08: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x80059F0C: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80059F10: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x80059F14: addiu       $t2, $t5, 0x3
    ctx->r10 = ADD32(ctx->r13, 0X3);
    // 0x80059F18: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x80059F1C: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x80059F20: sll         $t1, $t7, 12
    ctx->r9 = S32(ctx->r15 << 12);
    // 0x80059F24: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x80059F28: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x80059F2C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80059F30: lui         $t5, 0xE100
    ctx->r13 = S32(0XE100 << 16);
    // 0x80059F34: sw          $t9, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r25;
    // 0x80059F38: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80059F3C: lui         $t9, 0xF100
    ctx->r25 = S32(0XF100 << 16);
    // 0x80059F40: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80059F44: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80059F48: lw          $t2, 0x90($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X90);
    // 0x80059F4C: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x80059F50: sw          $t5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r13;
    // 0x80059F54: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
    // 0x80059F58: ori         $t8, $t8, 0x400
    ctx->r24 = ctx->r24 | 0X400;
    // 0x80059F5C: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80059F60: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80059F64: nop

    // 0x80059F68: sw          $t3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r11;
    // 0x80059F6C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80059F70: nop

    // 0x80059F74: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x80059F78: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80059F7C: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x80059F80: nop

    // 0x80059F84: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x80059F88: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x80059F8C: nop

    // 0x80059F90: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x80059F94: lw          $t1, 0x134($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X134);
    // 0x80059F98: lw          $t2, 0x130($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X130);
    // 0x80059F9C: lw          $t4, 0x154($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X154);
    // 0x80059FA0: subu        $t3, $t2, $t1
    ctx->r11 = SUB32(ctx->r10, ctx->r9);
    // 0x80059FA4: addu        $t6, $t4, $t1
    ctx->r14 = ADD32(ctx->r12, ctx->r9);
    // 0x80059FA8: sw          $t3, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r11;
    // 0x80059FAC: sw          $t6, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r14;
    // 0x80059FB0: b           L_8005AA50
    // 0x80059FB4: addu        $a3, $a3, $t1
    ctx->r7 = ADD32(ctx->r7, ctx->r9);
        goto L_8005AA50;
    // 0x80059FB4: addu        $a3, $a3, $t1
    ctx->r7 = ADD32(ctx->r7, ctx->r9);
L_80059FB8:
    // 0x80059FB8: lw          $t0, 0x124($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X124);
    // 0x80059FBC: nop

    // 0x80059FC0: beq         $t0, $zero, L_80059FE8
    if (ctx->r8 == 0) {
        // 0x80059FC4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80059FE8;
    }
    // 0x80059FC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80059FC8: beq         $t0, $at, L_8005A22C
    if (ctx->r8 == ctx->r1) {
        // 0x80059FCC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8005A22C;
    }
    // 0x80059FCC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80059FD0: beq         $t0, $at, L_8005A484
    if (ctx->r8 == ctx->r1) {
        // 0x80059FD4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8005A484;
    }
    // 0x80059FD4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80059FD8: beq         $t0, $at, L_8005A6C0
    if (ctx->r8 == ctx->r1) {
        // 0x80059FDC: nop
    
            goto L_8005A6C0;
    }
    // 0x80059FDC: nop

    // 0x80059FE0: b           L_8005A8F8
    // 0x80059FE4: nop

        goto L_8005A8F8;
    // 0x80059FE4: nop

L_80059FE8:
    // 0x80059FE8: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80059FEC: lui         $at, 0xFD10
    ctx->r1 = S32(0XFD10 << 16);
    // 0x80059FF0: sw          $t9, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r25;
    // 0x80059FF4: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80059FF8: addiu       $t1, $a1, 0x8
    ctx->r9 = ADD32(ctx->r5, 0X8);
    // 0x80059FFC: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8005A000: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005A004: lw          $t5, 0x12C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X12C);
    // 0x8005A008: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x8005A00C: addiu       $t2, $t5, -0x1
    ctx->r10 = ADD32(ctx->r13, -0X1);
    // 0x8005A010: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x8005A014: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x8005A018: sw          $t4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r12;
    // 0x8005A01C: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x8005A020: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x8005A024: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x8005A028: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005A02C: nop

    // 0x8005A030: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
    // 0x8005A034: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005A038: nop

    // 0x8005A03C: addiu       $t5, $t8, 0x8
    ctx->r13 = ADD32(ctx->r24, 0X8);
    // 0x8005A040: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005A044: lw          $t2, 0x148($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X148);
    // 0x8005A048: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x8005A04C: subu        $t3, $t2, $a2
    ctx->r11 = SUB32(ctx->r10, ctx->r6);
    // 0x8005A050: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8005A054: addiu       $t6, $t4, 0x9
    ctx->r14 = ADD32(ctx->r12, 0X9);
    // 0x8005A058: sra         $t1, $t6, 3
    ctx->r9 = S32(SIGNED(ctx->r14) >> 3);
    // 0x8005A05C: andi        $t9, $t1, 0x1FF
    ctx->r25 = ctx->r9 & 0X1FF;
    // 0x8005A060: sll         $t7, $t9, 9
    ctx->r15 = S32(ctx->r25 << 9);
    // 0x8005A064: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8005A068: sw          $t8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r24;
    // 0x8005A06C: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8005A070: lui         $t2, 0x708
    ctx->r10 = S32(0X708 << 16);
    // 0x8005A074: ori         $t2, $t2, 0x200
    ctx->r10 = ctx->r10 | 0X200;
    // 0x8005A078: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8005A07C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005A080: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x8005A084: sw          $t4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r12;
    // 0x8005A088: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005A08C: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005A090: addiu       $t1, $t6, 0x8
    ctx->r9 = ADD32(ctx->r14, 0X8);
    // 0x8005A094: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005A098: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x8005A09C: nop

    // 0x8005A0A0: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x8005A0A4: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x8005A0A8: nop

    // 0x8005A0AC: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8005A0B0: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005A0B4: nop

    // 0x8005A0B8: sw          $t5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r13;
    // 0x8005A0BC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005A0C0: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x8005A0C4: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8005A0C8: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005A0CC: lw          $t4, 0x14C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14C);
    // 0x8005A0D0: lw          $t6, 0x130($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X130);
    // 0x8005A0D4: andi        $t2, $t5, 0xFFF
    ctx->r10 = ctx->r13 & 0XFFF;
    // 0x8005A0D8: subu        $t1, $t4, $t6
    ctx->r9 = SUB32(ctx->r12, ctx->r14);
    // 0x8005A0DC: addiu       $t9, $t1, 0x1
    ctx->r25 = ADD32(ctx->r9, 0X1);
    // 0x8005A0E0: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8005A0E4: sll         $t3, $t2, 12
    ctx->r11 = S32(ctx->r10 << 12);
    // 0x8005A0E8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8005A0EC: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x8005A0F0: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8005A0F4: or          $t6, $t4, $t8
    ctx->r14 = ctx->r12 | ctx->r24;
    // 0x8005A0F8: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x8005A0FC: lw          $t9, 0x148($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X148);
    // 0x8005A100: lw          $t4, 0x14C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14C);
    // 0x8005A104: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8005A108: andi        $t5, $t7, 0xFFF
    ctx->r13 = ctx->r15 & 0XFFF;
    // 0x8005A10C: sll         $t2, $t5, 12
    ctx->r10 = S32(ctx->r13 << 12);
    // 0x8005A110: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005A114: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x8005A118: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8005A11C: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x8005A120: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x8005A124: or          $t1, $t3, $t6
    ctx->r9 = ctx->r11 | ctx->r14;
    // 0x8005A128: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x8005A12C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005A130: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x8005A134: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    // 0x8005A138: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005A13C: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x8005A140: addiu       $t2, $t5, 0x8
    ctx->r10 = ADD32(ctx->r13, 0X8);
    // 0x8005A144: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005A148: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x8005A14C: nop

    // 0x8005A150: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x8005A154: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x8005A158: nop

    // 0x8005A15C: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8005A160: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005A164: nop

    // 0x8005A168: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
    // 0x8005A16C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005A170: nop

    // 0x8005A174: addiu       $t9, $t1, 0x8
    ctx->r25 = ADD32(ctx->r9, 0X8);
    // 0x8005A178: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005A17C: lw          $t7, 0x148($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X148);
    // 0x8005A180: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x8005A184: subu        $t5, $t7, $a2
    ctx->r13 = SUB32(ctx->r15, ctx->r6);
    // 0x8005A188: sll         $t2, $t5, 1
    ctx->r10 = S32(ctx->r13 << 1);
    // 0x8005A18C: addiu       $t4, $t2, 0x9
    ctx->r12 = ADD32(ctx->r10, 0X9);
    // 0x8005A190: sra         $t8, $t4, 3
    ctx->r24 = S32(SIGNED(ctx->r12) >> 3);
    // 0x8005A194: andi        $t3, $t8, 0x1FF
    ctx->r11 = ctx->r24 & 0X1FF;
    // 0x8005A198: sll         $t6, $t3, 9
    ctx->r14 = S32(ctx->r11 << 9);
    // 0x8005A19C: or          $t1, $t6, $at
    ctx->r9 = ctx->r14 | ctx->r1;
    // 0x8005A1A0: sw          $t1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r9;
    // 0x8005A1A4: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x8005A1A8: lui         $t7, 0x8
    ctx->r15 = S32(0X8 << 16);
    // 0x8005A1AC: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x8005A1B0: sw          $t7, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r15;
    // 0x8005A1B4: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005A1B8: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005A1BC: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    // 0x8005A1C0: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005A1C4: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x8005A1C8: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x8005A1CC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005A1D0: lw          $t3, 0x14C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14C);
    // 0x8005A1D4: lw          $t6, 0x130($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X130);
    // 0x8005A1D8: andi        $t4, $t2, 0xFFF
    ctx->r12 = ctx->r10 & 0XFFF;
    // 0x8005A1DC: subu        $t1, $t3, $t6
    ctx->r9 = SUB32(ctx->r11, ctx->r14);
    // 0x8005A1E0: addiu       $t9, $t1, 0x1
    ctx->r25 = ADD32(ctx->r9, 0X1);
    // 0x8005A1E4: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8005A1E8: sll         $t8, $t4, 12
    ctx->r24 = S32(ctx->r12 << 12);
    // 0x8005A1EC: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x8005A1F0: or          $t3, $t8, $at
    ctx->r11 = ctx->r24 | ctx->r1;
    // 0x8005A1F4: andi        $t5, $t7, 0xFFF
    ctx->r13 = ctx->r15 & 0XFFF;
    // 0x8005A1F8: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8005A1FC: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x8005A200: lw          $t9, 0x148($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X148);
    // 0x8005A204: lw          $t8, 0x14C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14C);
    // 0x8005A208: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8005A20C: andi        $t2, $t7, 0xFFF
    ctx->r10 = ctx->r15 & 0XFFF;
    // 0x8005A210: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x8005A214: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x8005A218: andi        $t5, $t3, 0xFFF
    ctx->r13 = ctx->r11 & 0XFFF;
    // 0x8005A21C: sll         $t4, $t2, 12
    ctx->r12 = S32(ctx->r10 << 12);
    // 0x8005A220: or          $t6, $t4, $t5
    ctx->r14 = ctx->r12 | ctx->r13;
    // 0x8005A224: b           L_8005A8F8
    // 0x8005A228: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
        goto L_8005A8F8;
    // 0x8005A228: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
L_8005A22C:
    // 0x8005A22C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005A230: lui         $at, 0xFD88
    ctx->r1 = S32(0XFD88 << 16);
    // 0x8005A234: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x8005A238: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005A23C: addiu       $t9, $a1, 0x8
    ctx->r25 = ADD32(ctx->r5, 0X8);
    // 0x8005A240: addiu       $t2, $t7, 0x8
    ctx->r10 = ADD32(ctx->r15, 0X8);
    // 0x8005A244: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005A248: lw          $t8, 0x12C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X12C);
    // 0x8005A24C: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x8005A250: sra         $t3, $t8, 1
    ctx->r11 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8005A254: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8005A258: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x8005A25C: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8005A260: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x8005A264: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x8005A268: lui         $at, 0xF588
    ctx->r1 = S32(0XF588 << 16);
    // 0x8005A26C: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x8005A270: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005A274: nop

    // 0x8005A278: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x8005A27C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005A280: nop

    // 0x8005A284: addiu       $t3, $t8, 0x8
    ctx->r11 = ADD32(ctx->r24, 0X8);
    // 0x8005A288: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005A28C: lw          $t4, 0x148($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X148);
    // 0x8005A290: nop

    // 0x8005A294: subu        $t5, $t4, $a2
    ctx->r13 = SUB32(ctx->r12, ctx->r6);
    // 0x8005A298: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8005A29C: sra         $t1, $t6, 1
    ctx->r9 = S32(SIGNED(ctx->r14) >> 1);
    // 0x8005A2A0: addiu       $t9, $t1, 0x7
    ctx->r25 = ADD32(ctx->r9, 0X7);
    // 0x8005A2A4: sra         $t7, $t9, 3
    ctx->r15 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8005A2A8: andi        $t2, $t7, 0x1FF
    ctx->r10 = ctx->r15 & 0X1FF;
    // 0x8005A2AC: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x8005A2B0: sll         $t8, $t2, 9
    ctx->r24 = S32(ctx->r10 << 9);
    // 0x8005A2B4: or          $t3, $t8, $at
    ctx->r11 = ctx->r24 | ctx->r1;
    // 0x8005A2B8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005A2BC: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x8005A2C0: lui         $t5, 0x708
    ctx->r13 = S32(0X708 << 16);
    // 0x8005A2C4: ori         $t5, $t5, 0x200
    ctx->r13 = ctx->r13 | 0X200;
    // 0x8005A2C8: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8005A2CC: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005A2D0: lui         $t2, 0xE600
    ctx->r10 = S32(0XE600 << 16);
    // 0x8005A2D4: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x8005A2D8: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005A2DC: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005A2E0: addiu       $t7, $t9, 0x8
    ctx->r15 = ADD32(ctx->r25, 0X8);
    // 0x8005A2E4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005A2E8: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x8005A2EC: nop

    // 0x8005A2F0: sw          $t2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r10;
    // 0x8005A2F4: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x8005A2F8: nop

    // 0x8005A2FC: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8005A300: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005A304: nop

    // 0x8005A308: sw          $t4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r12;
    // 0x8005A30C: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005A310: sll         $t4, $a2, 1
    ctx->r12 = S32(ctx->r6 << 1);
    // 0x8005A314: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8005A318: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005A31C: lw          $t1, 0x14C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14C);
    // 0x8005A320: lw          $t9, 0x130($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X130);
    // 0x8005A324: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x8005A328: subu        $t7, $t1, $t9
    ctx->r15 = SUB32(ctx->r9, ctx->r25);
    // 0x8005A32C: addiu       $t2, $t7, 0x1
    ctx->r10 = ADD32(ctx->r15, 0X1);
    // 0x8005A330: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x8005A334: sll         $t6, $t5, 12
    ctx->r14 = S32(ctx->r13 << 12);
    // 0x8005A338: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8005A33C: or          $t1, $t6, $at
    ctx->r9 = ctx->r14 | ctx->r1;
    // 0x8005A340: andi        $t3, $t8, 0xFFF
    ctx->r11 = ctx->r24 & 0XFFF;
    // 0x8005A344: or          $t9, $t1, $t3
    ctx->r25 = ctx->r9 | ctx->r11;
    // 0x8005A348: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x8005A34C: lw          $t2, 0x148($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X148);
    // 0x8005A350: lw          $t1, 0x14C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14C);
    // 0x8005A354: sll         $t8, $t2, 1
    ctx->r24 = S32(ctx->r10 << 1);
    // 0x8005A358: andi        $t4, $t8, 0xFFF
    ctx->r12 = ctx->r24 & 0XFFF;
    // 0x8005A35C: sll         $t5, $t4, 12
    ctx->r13 = S32(ctx->r12 << 12);
    // 0x8005A360: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005A364: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8005A368: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8005A36C: andi        $t9, $t3, 0xFFF
    ctx->r25 = ctx->r11 & 0XFFF;
    // 0x8005A370: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8005A374: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x8005A378: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x8005A37C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005A380: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x8005A384: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x8005A388: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005A38C: lui         $at, 0xF580
    ctx->r1 = S32(0XF580 << 16);
    // 0x8005A390: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8005A394: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005A398: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x8005A39C: nop

    // 0x8005A3A0: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x8005A3A4: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x8005A3A8: nop

    // 0x8005A3AC: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8005A3B0: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005A3B4: nop

    // 0x8005A3B8: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x8005A3BC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005A3C0: nop

    // 0x8005A3C4: addiu       $t2, $t7, 0x8
    ctx->r10 = ADD32(ctx->r15, 0X8);
    // 0x8005A3C8: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005A3CC: lw          $t8, 0x148($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X148);
    // 0x8005A3D0: nop

    // 0x8005A3D4: subu        $t4, $t8, $a2
    ctx->r12 = SUB32(ctx->r24, ctx->r6);
    // 0x8005A3D8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8005A3DC: sra         $t1, $t5, 1
    ctx->r9 = S32(SIGNED(ctx->r13) >> 1);
    // 0x8005A3E0: addiu       $t3, $t1, 0x7
    ctx->r11 = ADD32(ctx->r9, 0X7);
    // 0x8005A3E4: sra         $t6, $t3, 3
    ctx->r14 = S32(SIGNED(ctx->r11) >> 3);
    // 0x8005A3E8: andi        $t9, $t6, 0x1FF
    ctx->r25 = ctx->r14 & 0X1FF;
    // 0x8005A3EC: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x8005A3F0: sll         $t7, $t9, 9
    ctx->r15 = S32(ctx->r25 << 9);
    // 0x8005A3F4: or          $t2, $t7, $at
    ctx->r10 = ctx->r15 | ctx->r1;
    // 0x8005A3F8: sw          $t2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r10;
    // 0x8005A3FC: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x8005A400: lui         $t4, 0x8
    ctx->r12 = S32(0X8 << 16);
    // 0x8005A404: ori         $t4, $t4, 0x200
    ctx->r12 = ctx->r12 | 0X200;
    // 0x8005A408: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8005A40C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005A410: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005A414: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x8005A418: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005A41C: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x8005A420: addiu       $t6, $t3, 0x8
    ctx->r14 = ADD32(ctx->r11, 0X8);
    // 0x8005A424: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005A428: lw          $t9, 0x14C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14C);
    // 0x8005A42C: lw          $t7, 0x130($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X130);
    // 0x8005A430: andi        $t3, $t1, 0xFFF
    ctx->r11 = ctx->r9 & 0XFFF;
    // 0x8005A434: subu        $t2, $t9, $t7
    ctx->r10 = SUB32(ctx->r25, ctx->r15);
    // 0x8005A438: addiu       $t8, $t2, 0x1
    ctx->r24 = ADD32(ctx->r10, 0X1);
    // 0x8005A43C: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x8005A440: sll         $t6, $t3, 12
    ctx->r14 = S32(ctx->r11 << 12);
    // 0x8005A444: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x8005A448: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x8005A44C: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x8005A450: or          $t7, $t9, $t5
    ctx->r15 = ctx->r25 | ctx->r13;
    // 0x8005A454: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x8005A458: lw          $t8, 0x148($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X148);
    // 0x8005A45C: lw          $t6, 0x14C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14C);
    // 0x8005A460: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x8005A464: andi        $t1, $t4, 0xFFF
    ctx->r9 = ctx->r12 & 0XFFF;
    // 0x8005A468: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8005A46C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x8005A470: andi        $t5, $t9, 0xFFF
    ctx->r13 = ctx->r25 & 0XFFF;
    // 0x8005A474: sll         $t3, $t1, 12
    ctx->r11 = S32(ctx->r9 << 12);
    // 0x8005A478: or          $t7, $t3, $t5
    ctx->r15 = ctx->r11 | ctx->r13;
    // 0x8005A47C: b           L_8005A8F8
    // 0x8005A480: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
        goto L_8005A8F8;
    // 0x8005A480: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
L_8005A484:
    // 0x8005A484: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005A488: lui         $at, 0xFD68
    ctx->r1 = S32(0XFD68 << 16);
    // 0x8005A48C: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x8005A490: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005A494: addiu       $t2, $a1, 0x8
    ctx->r10 = ADD32(ctx->r5, 0X8);
    // 0x8005A498: addiu       $t1, $t4, 0x8
    ctx->r9 = ADD32(ctx->r12, 0X8);
    // 0x8005A49C: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005A4A0: lw          $t6, 0x12C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X12C);
    // 0x8005A4A4: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8005A4A8: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x8005A4AC: andi        $t3, $t9, 0xFFF
    ctx->r11 = ctx->r25 & 0XFFF;
    // 0x8005A4B0: or          $t5, $t3, $at
    ctx->r13 = ctx->r11 | ctx->r1;
    // 0x8005A4B4: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x8005A4B8: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8005A4BC: lui         $at, 0xF568
    ctx->r1 = S32(0XF568 << 16);
    // 0x8005A4C0: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
    // 0x8005A4C4: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005A4C8: nop

    // 0x8005A4CC: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x8005A4D0: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005A4D4: nop

    // 0x8005A4D8: addiu       $t6, $t1, 0x8
    ctx->r14 = ADD32(ctx->r9, 0X8);
    // 0x8005A4DC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005A4E0: lw          $t9, 0x148($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X148);
    // 0x8005A4E4: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8005A4E8: subu        $t3, $t9, $a2
    ctx->r11 = SUB32(ctx->r25, ctx->r6);
    // 0x8005A4EC: addiu       $t5, $t3, 0x8
    ctx->r13 = ADD32(ctx->r11, 0X8);
    // 0x8005A4F0: sra         $t7, $t5, 3
    ctx->r15 = S32(SIGNED(ctx->r13) >> 3);
    // 0x8005A4F4: andi        $t2, $t7, 0x1FF
    ctx->r10 = ctx->r15 & 0X1FF;
    // 0x8005A4F8: sll         $t8, $t2, 9
    ctx->r24 = S32(ctx->r10 << 9);
    // 0x8005A4FC: or          $t4, $t8, $at
    ctx->r12 = ctx->r24 | ctx->r1;
    // 0x8005A500: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    // 0x8005A504: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8005A508: lui         $t6, 0x708
    ctx->r14 = S32(0X708 << 16);
    // 0x8005A50C: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x8005A510: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
    // 0x8005A514: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005A518: lui         $t2, 0xE600
    ctx->r10 = S32(0XE600 << 16);
    // 0x8005A51C: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x8005A520: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005A524: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005A528: addiu       $t7, $t5, 0x8
    ctx->r15 = ADD32(ctx->r13, 0X8);
    // 0x8005A52C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005A530: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8005A534: nop

    // 0x8005A538: sw          $t2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r10;
    // 0x8005A53C: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8005A540: nop

    // 0x8005A544: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8005A548: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005A54C: nop

    // 0x8005A550: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x8005A554: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005A558: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x8005A55C: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x8005A560: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005A564: lw          $t3, 0x14C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14C);
    // 0x8005A568: lw          $t5, 0x130($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X130);
    // 0x8005A56C: andi        $t6, $t1, 0xFFF
    ctx->r14 = ctx->r9 & 0XFFF;
    // 0x8005A570: subu        $t7, $t3, $t5
    ctx->r15 = SUB32(ctx->r11, ctx->r13);
    // 0x8005A574: addiu       $t2, $t7, 0x1
    ctx->r10 = ADD32(ctx->r15, 0X1);
    // 0x8005A578: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x8005A57C: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x8005A580: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8005A584: or          $t3, $t9, $at
    ctx->r11 = ctx->r25 | ctx->r1;
    // 0x8005A588: andi        $t4, $t8, 0xFFF
    ctx->r12 = ctx->r24 & 0XFFF;
    // 0x8005A58C: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x8005A590: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x8005A594: lw          $t2, 0x148($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X148);
    // 0x8005A598: lw          $t3, 0x14C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14C);
    // 0x8005A59C: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x8005A5A0: andi        $t1, $t8, 0xFFF
    ctx->r9 = ctx->r24 & 0XFFF;
    // 0x8005A5A4: sll         $t6, $t1, 12
    ctx->r14 = S32(ctx->r9 << 12);
    // 0x8005A5A8: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005A5AC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8005A5B0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8005A5B4: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x8005A5B8: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x8005A5BC: or          $t7, $t9, $t5
    ctx->r15 = ctx->r25 | ctx->r13;
    // 0x8005A5C0: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x8005A5C4: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005A5C8: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x8005A5CC: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x8005A5D0: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005A5D4: lui         $at, 0xF568
    ctx->r1 = S32(0XF568 << 16);
    // 0x8005A5D8: addiu       $t6, $t1, 0x8
    ctx->r14 = ADD32(ctx->r9, 0X8);
    // 0x8005A5DC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005A5E0: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8005A5E4: nop

    // 0x8005A5E8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005A5EC: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8005A5F0: nop

    // 0x8005A5F4: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8005A5F8: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005A5FC: nop

    // 0x8005A600: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x8005A604: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005A608: nop

    // 0x8005A60C: addiu       $t2, $t7, 0x8
    ctx->r10 = ADD32(ctx->r15, 0X8);
    // 0x8005A610: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005A614: lw          $t8, 0x148($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X148);
    // 0x8005A618: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8005A61C: subu        $t1, $t8, $a2
    ctx->r9 = SUB32(ctx->r24, ctx->r6);
    // 0x8005A620: addiu       $t6, $t1, 0x8
    ctx->r14 = ADD32(ctx->r9, 0X8);
    // 0x8005A624: sra         $t3, $t6, 3
    ctx->r11 = S32(SIGNED(ctx->r14) >> 3);
    // 0x8005A628: andi        $t4, $t3, 0x1FF
    ctx->r12 = ctx->r11 & 0X1FF;
    // 0x8005A62C: sll         $t9, $t4, 9
    ctx->r25 = S32(ctx->r12 << 9);
    // 0x8005A630: or          $t5, $t9, $at
    ctx->r13 = ctx->r25 | ctx->r1;
    // 0x8005A634: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x8005A638: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8005A63C: lui         $t2, 0x8
    ctx->r10 = S32(0X8 << 16);
    // 0x8005A640: ori         $t2, $t2, 0x200
    ctx->r10 = ctx->r10 | 0X200;
    // 0x8005A644: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
    // 0x8005A648: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005A64C: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005A650: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x8005A654: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005A658: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x8005A65C: addiu       $t3, $t6, 0x8
    ctx->r11 = ADD32(ctx->r14, 0X8);
    // 0x8005A660: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005A664: lw          $t4, 0x14C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14C);
    // 0x8005A668: lw          $t9, 0x130($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X130);
    // 0x8005A66C: andi        $t6, $t1, 0xFFF
    ctx->r14 = ctx->r9 & 0XFFF;
    // 0x8005A670: subu        $t5, $t4, $t9
    ctx->r13 = SUB32(ctx->r12, ctx->r25);
    // 0x8005A674: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x8005A678: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x8005A67C: sll         $t3, $t6, 12
    ctx->r11 = S32(ctx->r14 << 12);
    // 0x8005A680: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8005A684: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x8005A688: andi        $t8, $t2, 0xFFF
    ctx->r24 = ctx->r10 & 0XFFF;
    // 0x8005A68C: or          $t9, $t4, $t8
    ctx->r25 = ctx->r12 | ctx->r24;
    // 0x8005A690: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x8005A694: lw          $t7, 0x148($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X148);
    // 0x8005A698: lw          $t3, 0x14C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14C);
    // 0x8005A69C: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x8005A6A0: andi        $t1, $t2, 0xFFF
    ctx->r9 = ctx->r10 & 0XFFF;
    // 0x8005A6A4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8005A6A8: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8005A6AC: andi        $t8, $t4, 0xFFF
    ctx->r24 = ctx->r12 & 0XFFF;
    // 0x8005A6B0: sll         $t6, $t1, 12
    ctx->r14 = S32(ctx->r9 << 12);
    // 0x8005A6B4: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x8005A6B8: b           L_8005A8F8
    // 0x8005A6BC: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
        goto L_8005A8F8;
    // 0x8005A6BC: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
L_8005A6C0:
    // 0x8005A6C0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005A6C4: lui         $at, 0xFD48
    ctx->r1 = S32(0XFD48 << 16);
    // 0x8005A6C8: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8005A6CC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005A6D0: addiu       $t5, $a1, 0x8
    ctx->r13 = ADD32(ctx->r5, 0X8);
    // 0x8005A6D4: addiu       $t1, $t2, 0x8
    ctx->r9 = ADD32(ctx->r10, 0X8);
    // 0x8005A6D8: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005A6DC: lw          $t3, 0x12C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X12C);
    // 0x8005A6E0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8005A6E4: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8005A6E8: andi        $t6, $t4, 0xFFF
    ctx->r14 = ctx->r12 & 0XFFF;
    // 0x8005A6EC: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x8005A6F0: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005A6F4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8005A6F8: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8005A6FC: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
    // 0x8005A700: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005A704: nop

    // 0x8005A708: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x8005A70C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005A710: nop

    // 0x8005A714: addiu       $t3, $t1, 0x8
    ctx->r11 = ADD32(ctx->r9, 0X8);
    // 0x8005A718: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005A71C: lw          $t4, 0x148($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X148);
    // 0x8005A720: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8005A724: subu        $t6, $t4, $a2
    ctx->r14 = SUB32(ctx->r12, ctx->r6);
    // 0x8005A728: addiu       $t8, $t6, 0x8
    ctx->r24 = ADD32(ctx->r14, 0X8);
    // 0x8005A72C: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8005A730: andi        $t5, $t9, 0x1FF
    ctx->r13 = ctx->r25 & 0X1FF;
    // 0x8005A734: sll         $t7, $t5, 9
    ctx->r15 = S32(ctx->r13 << 9);
    // 0x8005A738: or          $t2, $t7, $at
    ctx->r10 = ctx->r15 | ctx->r1;
    // 0x8005A73C: sw          $t2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r10;
    // 0x8005A740: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8005A744: lui         $t3, 0x708
    ctx->r11 = S32(0X708 << 16);
    // 0x8005A748: ori         $t3, $t3, 0x200
    ctx->r11 = ctx->r11 | 0X200;
    // 0x8005A74C: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8005A750: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005A754: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x8005A758: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x8005A75C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005A760: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005A764: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8005A768: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005A76C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8005A770: nop

    // 0x8005A774: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x8005A778: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8005A77C: nop

    // 0x8005A780: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8005A784: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005A788: nop

    // 0x8005A78C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x8005A790: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005A794: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x8005A798: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005A79C: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005A7A0: lw          $t6, 0x14C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14C);
    // 0x8005A7A4: lw          $t8, 0x130($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X130);
    // 0x8005A7A8: andi        $t3, $t1, 0xFFF
    ctx->r11 = ctx->r9 & 0XFFF;
    // 0x8005A7AC: subu        $t9, $t6, $t8
    ctx->r25 = SUB32(ctx->r14, ctx->r24);
    // 0x8005A7B0: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x8005A7B4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8005A7B8: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x8005A7BC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8005A7C0: or          $t6, $t4, $at
    ctx->r14 = ctx->r12 | ctx->r1;
    // 0x8005A7C4: andi        $t2, $t7, 0xFFF
    ctx->r10 = ctx->r15 & 0XFFF;
    // 0x8005A7C8: or          $t8, $t6, $t2
    ctx->r24 = ctx->r14 | ctx->r10;
    // 0x8005A7CC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005A7D0: lw          $t5, 0x148($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X148);
    // 0x8005A7D4: lw          $t6, 0x14C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14C);
    // 0x8005A7D8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8005A7DC: andi        $t1, $t7, 0xFFF
    ctx->r9 = ctx->r15 & 0XFFF;
    // 0x8005A7E0: sll         $t3, $t1, 12
    ctx->r11 = S32(ctx->r9 << 12);
    // 0x8005A7E4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005A7E8: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x8005A7EC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8005A7F0: andi        $t8, $t2, 0xFFF
    ctx->r24 = ctx->r10 & 0XFFF;
    // 0x8005A7F4: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x8005A7F8: or          $t9, $t4, $t8
    ctx->r25 = ctx->r12 | ctx->r24;
    // 0x8005A7FC: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x8005A800: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005A804: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8005A808: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8005A80C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005A810: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8005A814: addiu       $t3, $t1, 0x8
    ctx->r11 = ADD32(ctx->r9, 0X8);
    // 0x8005A818: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005A81C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8005A820: nop

    // 0x8005A824: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x8005A828: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8005A82C: nop

    // 0x8005A830: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8005A834: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005A838: nop

    // 0x8005A83C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8005A840: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005A844: nop

    // 0x8005A848: addiu       $t5, $t9, 0x8
    ctx->r13 = ADD32(ctx->r25, 0X8);
    // 0x8005A84C: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005A850: lw          $t7, 0x148($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X148);
    // 0x8005A854: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8005A858: subu        $t1, $t7, $a2
    ctx->r9 = SUB32(ctx->r15, ctx->r6);
    // 0x8005A85C: addiu       $t3, $t1, 0x8
    ctx->r11 = ADD32(ctx->r9, 0X8);
    // 0x8005A860: sra         $t6, $t3, 3
    ctx->r14 = S32(SIGNED(ctx->r11) >> 3);
    // 0x8005A864: andi        $t2, $t6, 0x1FF
    ctx->r10 = ctx->r14 & 0X1FF;
    // 0x8005A868: sll         $t4, $t2, 9
    ctx->r12 = S32(ctx->r10 << 9);
    // 0x8005A86C: or          $t8, $t4, $at
    ctx->r24 = ctx->r12 | ctx->r1;
    // 0x8005A870: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005A874: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8005A878: lui         $t5, 0x8
    ctx->r13 = S32(0X8 << 16);
    // 0x8005A87C: ori         $t5, $t5, 0x200
    ctx->r13 = ctx->r13 | 0X200;
    // 0x8005A880: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
    // 0x8005A884: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005A888: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005A88C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8005A890: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005A894: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x8005A898: addiu       $t6, $t3, 0x8
    ctx->r14 = ADD32(ctx->r11, 0X8);
    // 0x8005A89C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005A8A0: lw          $t2, 0x14C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14C);
    // 0x8005A8A4: lw          $t4, 0x130($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X130);
    // 0x8005A8A8: andi        $t3, $t1, 0xFFF
    ctx->r11 = ctx->r9 & 0XFFF;
    // 0x8005A8AC: subu        $t8, $t2, $t4
    ctx->r24 = SUB32(ctx->r10, ctx->r12);
    // 0x8005A8B0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8005A8B4: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x8005A8B8: sll         $t6, $t3, 12
    ctx->r14 = S32(ctx->r11 << 12);
    // 0x8005A8BC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8005A8C0: or          $t2, $t6, $at
    ctx->r10 = ctx->r14 | ctx->r1;
    // 0x8005A8C4: andi        $t7, $t5, 0xFFF
    ctx->r15 = ctx->r13 & 0XFFF;
    // 0x8005A8C8: or          $t4, $t2, $t7
    ctx->r12 = ctx->r10 | ctx->r15;
    // 0x8005A8CC: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x8005A8D0: lw          $t9, 0x148($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X148);
    // 0x8005A8D4: lw          $t6, 0x14C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14C);
    // 0x8005A8D8: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x8005A8DC: andi        $t1, $t5, 0xFFF
    ctx->r9 = ctx->r13 & 0XFFF;
    // 0x8005A8E0: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x8005A8E4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8005A8E8: andi        $t7, $t2, 0xFFF
    ctx->r15 = ctx->r10 & 0XFFF;
    // 0x8005A8EC: sll         $t3, $t1, 12
    ctx->r11 = S32(ctx->r9 << 12);
    // 0x8005A8F0: or          $t4, $t3, $t7
    ctx->r12 = ctx->r11 | ctx->r15;
    // 0x8005A8F4: sw          $t4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r12;
L_8005A8F8:
    // 0x8005A8F8: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005A8FC: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8005A900: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8005A904: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005A908: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8005A90C: addiu       $t1, $t5, 0x8
    ctx->r9 = ADD32(ctx->r13, 0X8);
    // 0x8005A910: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005A914: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8005A918: nop

    // 0x8005A91C: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x8005A920: lw          $t3, 0x148($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X148);
    // 0x8005A924: lw          $t1, 0x130($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X130);
    // 0x8005A928: subu        $t7, $t3, $a2
    ctx->r15 = SUB32(ctx->r11, ctx->r6);
    // 0x8005A92C: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x8005A930: addiu       $t8, $t4, 0x3
    ctx->r24 = ADD32(ctx->r12, 0X3);
    // 0x8005A934: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8005A938: addiu       $t2, $t6, -0x1
    ctx->r10 = ADD32(ctx->r14, -0X1);
    // 0x8005A93C: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8005A940: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8005A944: sll         $t5, $t9, 12
    ctx->r13 = S32(ctx->r25 << 12);
    // 0x8005A948: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x8005A94C: or          $t7, $t5, $t3
    ctx->r15 = ctx->r13 | ctx->r11;
    // 0x8005A950: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x8005A954: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005A958: nop

    // 0x8005A95C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8005A960: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005A964: nop

    // 0x8005A968: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x8005A96C: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005A970: lw          $t6, 0x150($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X150);
    // 0x8005A974: lw          $t2, 0x148($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X148);
    // 0x8005A978: nop

    // 0x8005A97C: addu        $t5, $t6, $t2
    ctx->r13 = ADD32(ctx->r14, ctx->r10);
    // 0x8005A980: subu        $t3, $t5, $a2
    ctx->r11 = SUB32(ctx->r13, ctx->r6);
    // 0x8005A984: lw          $t2, 0x130($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X130);
    // 0x8005A988: lw          $t6, 0x154($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X154);
    // 0x8005A98C: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x8005A990: addiu       $t4, $t7, 0x3
    ctx->r12 = ADD32(ctx->r15, 0X3);
    // 0x8005A994: andi        $t8, $t4, 0xFFF
    ctx->r24 = ctx->r12 & 0XFFF;
    // 0x8005A998: addu        $t5, $t6, $t2
    ctx->r13 = ADD32(ctx->r14, ctx->r10);
    // 0x8005A99C: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x8005A9A0: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x8005A9A4: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x8005A9A8: addiu       $t7, $t3, -0x1
    ctx->r15 = ADD32(ctx->r11, -0X1);
    // 0x8005A9AC: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x8005A9B0: andi        $t4, $t7, 0xFFF
    ctx->r12 = ctx->r15 & 0XFFF;
    // 0x8005A9B4: or          $t8, $t1, $t4
    ctx->r24 = ctx->r9 | ctx->r12;
    // 0x8005A9B8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005A9BC: lw          $t6, 0x150($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X150);
    // 0x8005A9C0: lw          $t7, 0x154($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X154);
    // 0x8005A9C4: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x8005A9C8: andi        $t5, $t2, 0xFFF
    ctx->r13 = ctx->r10 & 0XFFF;
    // 0x8005A9CC: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x8005A9D0: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x8005A9D4: andi        $t4, $t1, 0xFFF
    ctx->r12 = ctx->r9 & 0XFFF;
    // 0x8005A9D8: sll         $t3, $t5, 12
    ctx->r11 = S32(ctx->r13 << 12);
    // 0x8005A9DC: or          $t8, $t3, $t4
    ctx->r24 = ctx->r11 | ctx->r12;
    // 0x8005A9E0: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8005A9E4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005A9E8: lui         $t7, 0xE100
    ctx->r15 = S32(0XE100 << 16);
    // 0x8005A9EC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8005A9F0: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005A9F4: lui         $t6, 0xF100
    ctx->r14 = S32(0XF100 << 16);
    // 0x8005A9F8: addiu       $t5, $t2, 0x8
    ctx->r13 = ADD32(ctx->r10, 0X8);
    // 0x8005A9FC: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005AA00: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x8005AA04: lui         $t5, 0x400
    ctx->r13 = S32(0X400 << 16);
    // 0x8005AA08: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x8005AA0C: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x8005AA10: ori         $t5, $t5, 0x400
    ctx->r13 = ctx->r13 | 0X400;
    // 0x8005AA14: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8005AA18: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005AA1C: nop

    // 0x8005AA20: sw          $t4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r12;
    // 0x8005AA24: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005AA28: nop

    // 0x8005AA2C: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8005AA30: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005AA34: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8005AA38: nop

    // 0x8005AA3C: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x8005AA40: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x8005AA44: nop

    // 0x8005AA48: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
    // 0x8005AA4C: sw          $zero, 0x130($sp)
    MEM_W(0X130, ctx->r29) = 0;
L_8005AA50:
    // 0x8005AA50: lw          $t1, 0x130($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X130);
    // 0x8005AA54: nop

    // 0x8005AA58: bne         $t1, $zero, L_80059460
    if (ctx->r9 != 0) {
        // 0x8005AA5C: nop
    
            goto L_80059460;
    }
    // 0x8005AA5C: nop

L_8005AA60:
    // 0x8005AA60: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005AA64: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8005AA68: sw          $t3, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r11;
    // 0x8005AA6C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005AA70: nop

    // 0x8005AA74: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x8005AA78: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005AA7C: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x8005AA80: nop

    // 0x8005AA84: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x8005AA88: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x8005AA8C: nop

    // 0x8005AA90: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
L_8005AA94:
    // 0x8005AA94: jr          $ra
    // 0x8005AA98: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    // 0x8005AA98: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void func_8005AA9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AA9C: beq         $a1, $zero, L_8005BBF4
    if (ctx->r5 == 0) {
        // 0x8005AAA0: addiu       $sp, $sp, -0xE8
        ctx->r29 = ADD32(ctx->r29, -0XE8);
            goto L_8005BBF4;
    }
    // 0x8005AAA0: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x8005AAA4: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
    // 0x8005AAA8: nop

    // 0x8005AAAC: beq         $t6, $zero, L_8005BBF4
    if (ctx->r14 == 0) {
        // 0x8005AAB0: nop
    
            goto L_8005BBF4;
    }
    // 0x8005AAB0: nop

    // 0x8005AAB4: lw          $t1, 0xFC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XFC);
    // 0x8005AAB8: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x8005AABC: subu        $t2, $t1, $a3
    ctx->r10 = SUB32(ctx->r9, ctx->r7);
    // 0x8005AAC0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8005AAC4: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x8005AAC8: addiu       $t5, $t4, 0xFFF
    ctx->r13 = ADD32(ctx->r12, 0XFFF);
    // 0x8005AACC: div         $zero, $t5, $t6
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r14)));
    // 0x8005AAD0: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x8005AAD4: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
    // 0x8005AAD8: sw          $t7, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r15;
    // 0x8005AADC: lhu         $t8, 0x2($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X2);
    // 0x8005AAE0: nop

    // 0x8005AAE4: sw          $t8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r24;
    // 0x8005AAE8: lhu         $t9, 0x4($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X4);
    // 0x8005AAEC: nop

    // 0x8005AAF0: sw          $t9, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r25;
    // 0x8005AAF4: lw          $t9, 0x100($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X100);
    // 0x8005AAF8: bne         $t6, $zero, L_8005AB04
    if (ctx->r14 != 0) {
        // 0x8005AAFC: nop
    
            goto L_8005AB04;
    }
    // 0x8005AAFC: nop

    // 0x8005AB00: break       7
    do_break(2147855104);
L_8005AB04:
    // 0x8005AB04: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005AB08: bne         $t6, $at, L_8005AB1C
    if (ctx->r14 != ctx->r1) {
        // 0x8005AB0C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005AB1C;
    }
    // 0x8005AB0C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005AB10: bne         $t5, $at, L_8005AB1C
    if (ctx->r13 != ctx->r1) {
        // 0x8005AB14: nop
    
            goto L_8005AB1C;
    }
    // 0x8005AB14: nop

    // 0x8005AB18: break       6
    do_break(2147855128);
L_8005AB1C:
    // 0x8005AB1C: subu        $t3, $t9, $t2
    ctx->r11 = SUB32(ctx->r25, ctx->r10);
    // 0x8005AB20: addiu       $t4, $t3, 0x2
    ctx->r12 = ADD32(ctx->r11, 0X2);
    // 0x8005AB24: sll         $t5, $t4, 12
    ctx->r13 = S32(ctx->r12 << 12);
    // 0x8005AB28: addiu       $t6, $t5, 0xFFF
    ctx->r14 = ADD32(ctx->r13, 0XFFF);
    // 0x8005AB2C: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x8005AB30: mflo        $t7
    ctx->r15 = lo;
    // 0x8005AB34: addiu       $t8, $t7, -0x5
    ctx->r24 = ADD32(ctx->r15, -0X5);
    // 0x8005AB38: lw          $t7, 0x120($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X120);
    // 0x8005AB3C: sw          $t8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r24;
    // 0x8005AB40: div         $zero, $t6, $t7
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r15)));
    // 0x8005AB44: bne         $t7, $zero, L_8005AB50
    if (ctx->r15 != 0) {
        // 0x8005AB48: nop
    
            goto L_8005AB50;
    }
    // 0x8005AB48: nop

    // 0x8005AB4C: break       7
    do_break(2147855180);
L_8005AB50:
    // 0x8005AB50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005AB54: bne         $t7, $at, L_8005AB68
    if (ctx->r15 != ctx->r1) {
        // 0x8005AB58: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005AB68;
    }
    // 0x8005AB58: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005AB5C: bne         $t6, $at, L_8005AB68
    if (ctx->r14 != ctx->r1) {
        // 0x8005AB60: nop
    
            goto L_8005AB68;
    }
    // 0x8005AB60: nop

    // 0x8005AB64: break       6
    do_break(2147855204);
L_8005AB68:
    // 0x8005AB68: mflo        $t8
    ctx->r24 = lo;
    // 0x8005AB6C: addiu       $t3, $t8, -0x9
    ctx->r11 = ADD32(ctx->r24, -0X9);
    // 0x8005AB70: blez        $t4, L_8005BBF4
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8005AB74: sw          $t3, 0xD4($sp)
        MEM_W(0XD4, ctx->r29) = ctx->r11;
            goto L_8005BBF4;
    }
    // 0x8005AB74: sw          $t3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r11;
    // 0x8005AB78: lw          $t5, 0xE0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE0);
    // 0x8005AB7C: nop

    // 0x8005AB80: blez        $t5, L_8005BBF4
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8005AB84: slt         $at, $t1, $a3
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_8005BBF4;
    }
    // 0x8005AB84: slt         $at, $t1, $a3
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8005AB88: bne         $at, $zero, L_8005BBF4
    if (ctx->r1 != 0) {
        // 0x8005AB8C: slt         $at, $t9, $t2
        ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_8005BBF4;
    }
    // 0x8005AB8C: slt         $at, $t9, $t2
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8005AB90: bne         $at, $zero, L_8005BBF4
    if (ctx->r1 != 0) {
        // 0x8005AB94: nop
    
            goto L_8005BBF4;
    }
    // 0x8005AB94: nop

    // 0x8005AB98: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8005AB9C: lh          $t6, 0x164($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X164);
    // 0x8005ABA0: lw          $t7, 0xDC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XDC);
    // 0x8005ABA4: nop

    // 0x8005ABA8: beq         $t6, $t7, L_8005AE14
    if (ctx->r14 == ctx->r15) {
        // 0x8005ABAC: nop
    
            goto L_8005AE14;
    }
    // 0x8005ABAC: nop

    // 0x8005ABB0: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x8005ABB4: beq         $t0, $zero, L_8005ABDC
    if (ctx->r8 == 0) {
        // 0x8005ABB8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8005ABDC;
    }
    // 0x8005ABB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005ABBC: beq         $t0, $at, L_8005AC5C
    if (ctx->r8 == ctx->r1) {
        // 0x8005ABC0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8005AC5C;
    }
    // 0x8005ABC0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005ABC4: beq         $t0, $at, L_8005AC1C
    if (ctx->r8 == ctx->r1) {
        // 0x8005ABC8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8005AC1C;
    }
    // 0x8005ABC8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005ABCC: beq         $t0, $at, L_8005AC9C
    if (ctx->r8 == ctx->r1) {
        // 0x8005ABD0: nop
    
            goto L_8005AC9C;
    }
    // 0x8005ABD0: nop

    // 0x8005ABD4: b           L_8005BBF4
    // 0x8005ABD8: nop

        goto L_8005BBF4;
    // 0x8005ABD8: nop

L_8005ABDC:
    // 0x8005ABDC: addiu       $t8, $zero, 0x800
    ctx->r24 = ADD32(0, 0X800);
    // 0x8005ABE0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005ABE4: sw          $t8, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r24;
    // 0x8005ABE8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005ABEC: lui         $t1, 0xE300
    ctx->r9 = S32(0XE300 << 16);
    // 0x8005ABF0: sw          $t3, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r11;
    // 0x8005ABF4: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005ABF8: ori         $t1, $t1, 0x1001
    ctx->r9 = ctx->r9 | 0X1001;
    // 0x8005ABFC: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8005AC00: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005AC04: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x8005AC08: nop

    // 0x8005AC0C: sw          $t1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r9;
    // 0x8005AC10: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x8005AC14: b           L_8005AF4C
    // 0x8005AC18: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
        goto L_8005AF4C;
    // 0x8005AC18: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
L_8005AC1C:
    // 0x8005AC1C: addiu       $t6, $zero, 0x800
    ctx->r14 = ADD32(0, 0X800);
    // 0x8005AC20: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005AC24: sw          $t6, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r14;
    // 0x8005AC28: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005AC2C: lui         $t4, 0xE300
    ctx->r12 = S32(0XE300 << 16);
    // 0x8005AC30: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
    // 0x8005AC34: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005AC38: ori         $t4, $t4, 0x1001
    ctx->r12 = ctx->r12 | 0X1001;
    // 0x8005AC3C: addiu       $t3, $t8, 0x8
    ctx->r11 = ADD32(ctx->r24, 0X8);
    // 0x8005AC40: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005AC44: lw          $t5, 0xCC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XCC);
    // 0x8005AC48: nop

    // 0x8005AC4C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005AC50: lw          $t1, 0xCC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XCC);
    // 0x8005AC54: b           L_8005AF4C
    // 0x8005AC58: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
        goto L_8005AF4C;
    // 0x8005AC58: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
L_8005AC5C:
    // 0x8005AC5C: addiu       $t9, $zero, 0x1000
    ctx->r25 = ADD32(0, 0X1000);
    // 0x8005AC60: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005AC64: sw          $t9, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r25;
    // 0x8005AC68: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005AC6C: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x8005AC70: sw          $t2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r10;
    // 0x8005AC74: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005AC78: ori         $t8, $t8, 0x1001
    ctx->r24 = ctx->r24 | 0X1001;
    // 0x8005AC7C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005AC80: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005AC84: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x8005AC88: nop

    // 0x8005AC8C: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x8005AC90: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x8005AC94: b           L_8005AF4C
    // 0x8005AC98: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
        goto L_8005AF4C;
    // 0x8005AC98: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
L_8005AC9C:
    // 0x8005AC9C: addiu       $t5, $zero, 0x800
    ctx->r13 = ADD32(0, 0X800);
    // 0x8005ACA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005ACA4: sw          $t5, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r13;
    // 0x8005ACA8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005ACAC: lui         $t6, 0xE300
    ctx->r14 = S32(0XE300 << 16);
    // 0x8005ACB0: sw          $t1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r9;
    // 0x8005ACB4: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005ACB8: ori         $t6, $t6, 0x1001
    ctx->r14 = ctx->r14 | 0X1001;
    // 0x8005ACBC: addiu       $t2, $t9, 0x8
    ctx->r10 = ADD32(ctx->r25, 0X8);
    // 0x8005ACC0: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005ACC4: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x8005ACC8: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x8005ACCC: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8005ACD0: lw          $t3, 0xC4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC4);
    // 0x8005ACD4: lui         $t9, 0xFD10
    ctx->r25 = S32(0XFD10 << 16);
    // 0x8005ACD8: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
    // 0x8005ACDC: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005ACE0: nop

    // 0x8005ACE4: sw          $t4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r12;
    // 0x8005ACE8: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005ACEC: lui         $t4, 0xE800
    ctx->r12 = S32(0XE800 << 16);
    // 0x8005ACF0: addiu       $t1, $t5, 0x8
    ctx->r9 = ADD32(ctx->r13, 0X8);
    // 0x8005ACF4: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005ACF8: lw          $t2, 0xC0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC0);
    // 0x8005ACFC: nop

    // 0x8005AD00: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x8005AD04: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
    // 0x8005AD08: nop

    // 0x8005AD0C: sw          $a2, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r6;
    // 0x8005AD10: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005AD14: nop

    // 0x8005AD18: sw          $t7, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r15;
    // 0x8005AD1C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005AD20: lui         $t7, 0xF500
    ctx->r15 = S32(0XF500 << 16);
    // 0x8005AD24: addiu       $t3, $t8, 0x8
    ctx->r11 = ADD32(ctx->r24, 0X8);
    // 0x8005AD28: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005AD2C: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x8005AD30: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x8005AD34: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005AD38: lw          $t1, 0xBC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XBC);
    // 0x8005AD3C: lui         $t3, 0x700
    ctx->r11 = S32(0X700 << 16);
    // 0x8005AD40: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8005AD44: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005AD48: nop

    // 0x8005AD4C: sw          $t9, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r25;
    // 0x8005AD50: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005AD54: nop

    // 0x8005AD58: addiu       $t6, $t2, 0x8
    ctx->r14 = ADD32(ctx->r10, 0X8);
    // 0x8005AD5C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005AD60: lw          $t8, 0xB8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB8);
    // 0x8005AD64: lui         $t2, 0xE600
    ctx->r10 = S32(0XE600 << 16);
    // 0x8005AD68: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005AD6C: lw          $t4, 0xB8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB8);
    // 0x8005AD70: nop

    // 0x8005AD74: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8005AD78: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005AD7C: nop

    // 0x8005AD80: sw          $t5, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r13;
    // 0x8005AD84: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005AD88: lui         $t5, 0xF000
    ctx->r13 = S32(0XF000 << 16);
    // 0x8005AD8C: addiu       $t9, $t1, 0x8
    ctx->r25 = ADD32(ctx->r9, 0X8);
    // 0x8005AD90: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005AD94: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x8005AD98: lui         $t9, 0x73F
    ctx->r25 = S32(0X73F << 16);
    // 0x8005AD9C: sw          $t2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r10;
    // 0x8005ADA0: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x8005ADA4: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x8005ADA8: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8005ADAC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005ADB0: nop

    // 0x8005ADB4: sw          $t8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r24;
    // 0x8005ADB8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005ADBC: nop

    // 0x8005ADC0: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005ADC4: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005ADC8: lw          $t1, 0xB0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB0);
    // 0x8005ADCC: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x8005ADD0: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x8005ADD4: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x8005ADD8: nop

    // 0x8005ADDC: sw          $t9, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r25;
    // 0x8005ADE0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005ADE4: nop

    // 0x8005ADE8: sw          $t6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r14;
    // 0x8005ADEC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005ADF0: nop

    // 0x8005ADF4: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8005ADF8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005ADFC: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x8005AE00: nop

    // 0x8005AE04: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005AE08: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x8005AE0C: b           L_8005AF4C
    // 0x8005AE10: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
        goto L_8005AF4C;
    // 0x8005AE10: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
L_8005AE14:
    // 0x8005AE14: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005AE18: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x8005AE1C: sw          $t1, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r9;
    // 0x8005AE20: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005AE24: lui         $t1, 0xE800
    ctx->r9 = S32(0XE800 << 16);
    // 0x8005AE28: addiu       $t2, $t9, 0x8
    ctx->r10 = ADD32(ctx->r25, 0X8);
    // 0x8005AE2C: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005AE30: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
    // 0x8005AE34: nop

    // 0x8005AE38: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8005AE3C: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    // 0x8005AE40: nop

    // 0x8005AE44: sw          $a2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r6;
    // 0x8005AE48: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005AE4C: nop

    // 0x8005AE50: sw          $t3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r11;
    // 0x8005AE54: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005AE58: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8005AE5C: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8005AE60: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005AE64: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x8005AE68: ori         $t3, $t3, 0x100
    ctx->r11 = ctx->r11 | 0X100;
    // 0x8005AE6C: sw          $t1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r9;
    // 0x8005AE70: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x8005AE74: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x8005AE78: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8005AE7C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005AE80: nop

    // 0x8005AE84: sw          $t6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r14;
    // 0x8005AE88: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005AE8C: nop

    // 0x8005AE90: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8005AE94: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005AE98: lw          $t4, 0xA0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA0);
    // 0x8005AE9C: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x8005AEA0: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005AEA4: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x8005AEA8: nop

    // 0x8005AEAC: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x8005AEB0: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005AEB4: nop

    // 0x8005AEB8: sw          $t9, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r25;
    // 0x8005AEBC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005AEC0: lui         $t9, 0xF000
    ctx->r25 = S32(0XF000 << 16);
    // 0x8005AEC4: addiu       $t6, $t2, 0x8
    ctx->r14 = ADD32(ctx->r10, 0X8);
    // 0x8005AEC8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005AECC: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x8005AED0: lui         $t6, 0x73F
    ctx->r14 = S32(0X73F << 16);
    // 0x8005AED4: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005AED8: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x8005AEDC: ori         $t6, $t6, 0xC000
    ctx->r14 = ctx->r14 | 0XC000;
    // 0x8005AEE0: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8005AEE4: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005AEE8: nop

    // 0x8005AEEC: sw          $t4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r12;
    // 0x8005AEF0: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005AEF4: nop

    // 0x8005AEF8: addiu       $t1, $t5, 0x8
    ctx->r9 = ADD32(ctx->r13, 0X8);
    // 0x8005AEFC: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005AF00: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x8005AF04: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x8005AF08: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x8005AF0C: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x8005AF10: nop

    // 0x8005AF14: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8005AF18: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005AF1C: nop

    // 0x8005AF20: sw          $t8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r24;
    // 0x8005AF24: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005AF28: nop

    // 0x8005AF2C: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005AF30: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005AF34: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x8005AF38: nop

    // 0x8005AF3C: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x8005AF40: lw          $t9, 0x94($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94);
    // 0x8005AF44: nop

    // 0x8005AF48: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
L_8005AF4C:
    // 0x8005AF4C: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8005AF50: lbu         $t2, 0x168($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X168);
    // 0x8005AF54: lw          $t6, 0x10C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10C);
    // 0x8005AF58: nop

    // 0x8005AF5C: bne         $t2, $t6, L_8005AFC4
    if (ctx->r10 != ctx->r14) {
        // 0x8005AF60: nop
    
            goto L_8005AFC4;
    }
    // 0x8005AF60: nop

    // 0x8005AF64: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8005AF68: lbu         $t7, 0x16C($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X16C);
    // 0x8005AF6C: lw          $t8, 0x110($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X110);
    // 0x8005AF70: nop

    // 0x8005AF74: bne         $t7, $t8, L_8005AFC4
    if (ctx->r15 != ctx->r24) {
        // 0x8005AF78: nop
    
            goto L_8005AFC4;
    }
    // 0x8005AF78: nop

    // 0x8005AF7C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8005AF80: lbu         $t3, 0x170($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X170);
    // 0x8005AF84: lw          $t4, 0x114($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X114);
    // 0x8005AF88: nop

    // 0x8005AF8C: bne         $t3, $t4, L_8005AFC4
    if (ctx->r11 != ctx->r12) {
        // 0x8005AF90: nop
    
            goto L_8005AFC4;
    }
    // 0x8005AF90: nop

    // 0x8005AF94: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8005AF98: lbu         $t5, 0x174($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X174);
    // 0x8005AF9C: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x8005AFA0: nop

    // 0x8005AFA4: bne         $t5, $t1, L_8005AFC4
    if (ctx->r13 != ctx->r9) {
        // 0x8005AFA8: nop
    
            goto L_8005AFC4;
    }
    // 0x8005AFA8: nop

    // 0x8005AFAC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8005AFB0: lh          $t9, 0x164($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X164);
    // 0x8005AFB4: lw          $t2, 0xDC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XDC);
    // 0x8005AFB8: nop

    // 0x8005AFBC: beq         $t9, $t2, L_8005B170
    if (ctx->r25 == ctx->r10) {
        // 0x8005AFC0: nop
    
            goto L_8005B170;
    }
    // 0x8005AFC0: nop

L_8005AFC4:
    // 0x8005AFC4: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
    // 0x8005AFC8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005AFCC: bne         $t6, $at, L_8005B03C
    if (ctx->r14 != ctx->r1) {
        // 0x8005AFD0: nop
    
            goto L_8005B03C;
    }
    // 0x8005AFD0: nop

    // 0x8005AFD4: lw          $t7, 0x10C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10C);
    // 0x8005AFD8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005AFDC: bne         $t7, $at, L_8005B03C
    if (ctx->r15 != ctx->r1) {
        // 0x8005AFE0: nop
    
            goto L_8005B03C;
    }
    // 0x8005AFE0: nop

    // 0x8005AFE4: lw          $t8, 0x110($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X110);
    // 0x8005AFE8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005AFEC: bne         $t8, $at, L_8005B03C
    if (ctx->r24 != ctx->r1) {
        // 0x8005AFF0: nop
    
            goto L_8005B03C;
    }
    // 0x8005AFF0: nop

    // 0x8005AFF4: lw          $t3, 0x114($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X114);
    // 0x8005AFF8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005AFFC: bne         $t3, $at, L_8005B03C
    if (ctx->r11 != ctx->r1) {
        // 0x8005B000: nop
    
            goto L_8005B03C;
    }
    // 0x8005B000: nop

    // 0x8005B004: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005B008: lui         $t9, 0xFCFF
    ctx->r25 = S32(0XFCFF << 16);
    // 0x8005B00C: sw          $t4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r12;
    // 0x8005B010: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005B014: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x8005B018: addiu       $t1, $t5, 0x8
    ctx->r9 = ADD32(ctx->r13, 0X8);
    // 0x8005B01C: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005B020: lw          $t2, 0x90($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X90);
    // 0x8005B024: lui         $t6, 0xFFFC
    ctx->r14 = S32(0XFFFC << 16);
    // 0x8005B028: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x8005B02C: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x8005B030: ori         $t6, $t6, 0xF279
    ctx->r14 = ctx->r14 | 0XF279;
    // 0x8005B034: b           L_8005B140
    // 0x8005B038: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
        goto L_8005B140;
    // 0x8005B038: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
L_8005B03C:
    // 0x8005B03C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8005B040: lbu         $t8, 0x168($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X168);
    // 0x8005B044: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005B048: bne         $t8, $at, L_8005B08C
    if (ctx->r24 != ctx->r1) {
        // 0x8005B04C: nop
    
            goto L_8005B08C;
    }
    // 0x8005B04C: nop

    // 0x8005B050: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8005B054: lbu         $t3, 0x16C($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X16C);
    // 0x8005B058: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005B05C: bne         $t3, $at, L_8005B08C
    if (ctx->r11 != ctx->r1) {
        // 0x8005B060: nop
    
            goto L_8005B08C;
    }
    // 0x8005B060: nop

    // 0x8005B064: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8005B068: lbu         $t4, 0x170($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X170);
    // 0x8005B06C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005B070: bne         $t4, $at, L_8005B08C
    if (ctx->r12 != ctx->r1) {
        // 0x8005B074: nop
    
            goto L_8005B08C;
    }
    // 0x8005B074: nop

    // 0x8005B078: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8005B07C: lbu         $t5, 0x174($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X174);
    // 0x8005B080: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005B084: beq         $t5, $at, L_8005B0A4
    if (ctx->r13 == ctx->r1) {
        // 0x8005B088: nop
    
            goto L_8005B0A4;
    }
    // 0x8005B088: nop

L_8005B08C:
    // 0x8005B08C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8005B090: lh          $t1, 0x164($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X164);
    // 0x8005B094: lw          $t9, 0xDC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XDC);
    // 0x8005B098: nop

    // 0x8005B09C: beq         $t1, $t9, L_8005B0D8
    if (ctx->r9 == ctx->r25) {
        // 0x8005B0A0: nop
    
            goto L_8005B0D8;
    }
    // 0x8005B0A0: nop

L_8005B0A4:
    // 0x8005B0A4: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005B0A8: lui         $t8, 0xFC11
    ctx->r24 = S32(0XFC11 << 16);
    // 0x8005B0AC: sw          $t2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r10;
    // 0x8005B0B0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005B0B4: ori         $t8, $t8, 0x9623
    ctx->r24 = ctx->r24 | 0X9623;
    // 0x8005B0B8: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005B0BC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005B0C0: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x8005B0C4: lui         $t4, 0xFF2F
    ctx->r12 = S32(0XFF2F << 16);
    // 0x8005B0C8: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x8005B0CC: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x8005B0D0: ori         $t4, $t4, 0xFFFF
    ctx->r12 = ctx->r12 | 0XFFFF;
    // 0x8005B0D4: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
L_8005B0D8:
    // 0x8005B0D8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005B0DC: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x8005B0E0: sw          $t1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r9;
    // 0x8005B0E4: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005B0E8: nop

    // 0x8005B0EC: addiu       $t2, $t9, 0x8
    ctx->r10 = ADD32(ctx->r25, 0X8);
    // 0x8005B0F0: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005B0F4: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x8005B0F8: nop

    // 0x8005B0FC: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8005B100: lw          $t5, 0x110($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X110);
    // 0x8005B104: lw          $t8, 0x10C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10C);
    // 0x8005B108: lw          $t6, 0x114($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X114);
    // 0x8005B10C: andi        $t1, $t5, 0xFF
    ctx->r9 = ctx->r13 & 0XFF;
    // 0x8005B110: andi        $t3, $t8, 0xFF
    ctx->r11 = ctx->r24 & 0XFF;
    // 0x8005B114: sll         $t4, $t3, 24
    ctx->r12 = S32(ctx->r11 << 24);
    // 0x8005B118: sll         $t9, $t1, 16
    ctx->r25 = S32(ctx->r9 << 16);
    // 0x8005B11C: lw          $t5, 0x118($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X118);
    // 0x8005B120: or          $t2, $t4, $t9
    ctx->r10 = ctx->r12 | ctx->r25;
    // 0x8005B124: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8005B128: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8005B12C: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x8005B130: or          $t3, $t2, $t8
    ctx->r11 = ctx->r10 | ctx->r24;
    // 0x8005B134: andi        $t1, $t5, 0xFF
    ctx->r9 = ctx->r13 & 0XFF;
    // 0x8005B138: or          $t4, $t3, $t1
    ctx->r12 = ctx->r11 | ctx->r9;
    // 0x8005B13C: sw          $t4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r12;
L_8005B140:
    // 0x8005B140: lw          $t6, 0x10C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10C);
    // 0x8005B144: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005B148: lw          $t7, 0x110($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X110);
    // 0x8005B14C: sb          $t6, 0x168($at)
    MEM_B(0X168, ctx->r1) = ctx->r14;
    // 0x8005B150: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005B154: lw          $t2, 0x114($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X114);
    // 0x8005B158: sb          $t7, 0x16C($at)
    MEM_B(0X16C, ctx->r1) = ctx->r15;
    // 0x8005B15C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005B160: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x8005B164: sb          $t2, 0x170($at)
    MEM_B(0X170, ctx->r1) = ctx->r10;
    // 0x8005B168: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005B16C: sb          $t8, 0x174($at)
    MEM_B(0X174, ctx->r1) = ctx->r24;
L_8005B170:
    // 0x8005B170: lw          $t5, 0xDC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XDC);
    // 0x8005B174: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005B178: or          $t0, $t5, $zero
    ctx->r8 = ctx->r13 | 0;
    // 0x8005B17C: beq         $t0, $zero, L_8005B1A8
    if (ctx->r8 == 0) {
        // 0x8005B180: sh          $t5, 0x164($at)
        MEM_H(0X164, ctx->r1) = ctx->r13;
            goto L_8005B1A8;
    }
    // 0x8005B180: sh          $t5, 0x164($at)
    MEM_H(0X164, ctx->r1) = ctx->r13;
    // 0x8005B184: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005B188: beq         $t0, $at, L_8005B3D8
    if (ctx->r8 == ctx->r1) {
        // 0x8005B18C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8005B3D8;
    }
    // 0x8005B18C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005B190: beq         $t0, $at, L_8005B61C
    if (ctx->r8 == ctx->r1) {
        // 0x8005B194: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8005B61C;
    }
    // 0x8005B194: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005B198: beq         $t0, $at, L_8005B844
    if (ctx->r8 == ctx->r1) {
        // 0x8005B19C: nop
    
            goto L_8005B844;
    }
    // 0x8005B19C: nop

    // 0x8005B1A0: b           L_8005BA68
    // 0x8005B1A4: nop

        goto L_8005BA68;
    // 0x8005B1A4: nop

L_8005B1A8:
    // 0x8005B1A8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005B1AC: lui         $at, 0xFD10
    ctx->r1 = S32(0XFD10 << 16);
    // 0x8005B1B0: sw          $t3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r11;
    // 0x8005B1B4: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005B1B8: addiu       $t5, $a1, 0x8
    ctx->r13 = ADD32(ctx->r5, 0X8);
    // 0x8005B1BC: addiu       $t4, $t1, 0x8
    ctx->r12 = ADD32(ctx->r9, 0X8);
    // 0x8005B1C0: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005B1C4: lw          $t9, 0xE4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE4);
    // 0x8005B1C8: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x8005B1CC: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8005B1D0: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8005B1D4: or          $t2, $t7, $at
    ctx->r10 = ctx->r15 | ctx->r1;
    // 0x8005B1D8: sw          $t2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r10;
    // 0x8005B1DC: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8005B1E0: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x8005B1E4: sw          $t5, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r13;
    // 0x8005B1E8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005B1EC: nop

    // 0x8005B1F0: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    // 0x8005B1F4: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005B1F8: nop

    // 0x8005B1FC: addiu       $t9, $t4, 0x8
    ctx->r25 = ADD32(ctx->r12, 0X8);
    // 0x8005B200: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005B204: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x8005B208: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x8005B20C: subu        $t7, $t6, $a3
    ctx->r15 = SUB32(ctx->r14, ctx->r7);
    // 0x8005B210: sll         $t2, $t7, 1
    ctx->r10 = S32(ctx->r15 << 1);
    // 0x8005B214: addiu       $t8, $t2, 0xB
    ctx->r24 = ADD32(ctx->r10, 0XB);
    // 0x8005B218: sra         $t5, $t8, 3
    ctx->r13 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8005B21C: andi        $t3, $t5, 0x1FF
    ctx->r11 = ctx->r13 & 0X1FF;
    // 0x8005B220: sll         $t1, $t3, 9
    ctx->r9 = S32(ctx->r11 << 9);
    // 0x8005B224: or          $t4, $t1, $at
    ctx->r12 = ctx->r9 | ctx->r1;
    // 0x8005B228: sw          $t4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r12;
    // 0x8005B22C: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x8005B230: lui         $t6, 0x708
    ctx->r14 = S32(0X708 << 16);
    // 0x8005B234: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x8005B238: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8005B23C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005B240: lui         $t3, 0xE600
    ctx->r11 = S32(0XE600 << 16);
    // 0x8005B244: sw          $t2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r10;
    // 0x8005B248: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005B24C: sll         $t2, $a3, 2
    ctx->r10 = S32(ctx->r7 << 2);
    // 0x8005B250: addiu       $t5, $t8, 0x8
    ctx->r13 = ADD32(ctx->r24, 0X8);
    // 0x8005B254: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005B258: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8005B25C: andi        $t8, $t2, 0xFFF
    ctx->r24 = ctx->r10 & 0XFFF;
    // 0x8005B260: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
    // 0x8005B264: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8005B268: sll         $t5, $t8, 12
    ctx->r13 = S32(ctx->r24 << 12);
    // 0x8005B26C: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8005B270: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005B274: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005B278: sw          $t9, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r25;
    // 0x8005B27C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005B280: or          $t3, $t5, $at
    ctx->r11 = ctx->r13 | ctx->r1;
    // 0x8005B284: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005B288: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005B28C: lw          $t1, 0xF8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF8);
    // 0x8005B290: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x8005B294: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x8005B298: andi        $t9, $t4, 0xFFF
    ctx->r25 = ctx->r12 & 0XFFF;
    // 0x8005B29C: or          $t6, $t3, $t9
    ctx->r14 = ctx->r11 | ctx->r25;
    // 0x8005B2A0: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8005B2A4: lw          $t2, 0xFC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XFC);
    // 0x8005B2A8: lw          $t9, 0x100($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X100);
    // 0x8005B2AC: addiu       $t8, $t2, 0x1
    ctx->r24 = ADD32(ctx->r10, 0X1);
    // 0x8005B2B0: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x8005B2B4: andi        $t1, $t5, 0xFFF
    ctx->r9 = ctx->r13 & 0XFFF;
    // 0x8005B2B8: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x8005B2BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8005B2C0: sll         $t4, $t1, 12
    ctx->r12 = S32(ctx->r9 << 12);
    // 0x8005B2C4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005B2C8: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x8005B2CC: or          $t3, $t4, $at
    ctx->r11 = ctx->r12 | ctx->r1;
    // 0x8005B2D0: andi        $t2, $t7, 0xFFF
    ctx->r10 = ctx->r15 & 0XFFF;
    // 0x8005B2D4: or          $t8, $t3, $t2
    ctx->r24 = ctx->r11 | ctx->r10;
    // 0x8005B2D8: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x8005B2DC: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005B2E0: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8005B2E4: sw          $t1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r9;
    // 0x8005B2E8: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005B2EC: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x8005B2F0: addiu       $t9, $t4, 0x8
    ctx->r25 = ADD32(ctx->r12, 0X8);
    // 0x8005B2F4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005B2F8: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x8005B2FC: nop

    // 0x8005B300: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8005B304: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x8005B308: nop

    // 0x8005B30C: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8005B310: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005B314: nop

    // 0x8005B318: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    // 0x8005B31C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005B320: nop

    // 0x8005B324: addiu       $t5, $t8, 0x8
    ctx->r13 = ADD32(ctx->r24, 0X8);
    // 0x8005B328: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005B32C: lw          $t1, 0xFC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XFC);
    // 0x8005B330: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x8005B334: subu        $t4, $t1, $a3
    ctx->r12 = SUB32(ctx->r9, ctx->r7);
    // 0x8005B338: sll         $t9, $t4, 1
    ctx->r25 = S32(ctx->r12 << 1);
    // 0x8005B33C: addiu       $t6, $t9, 0xB
    ctx->r14 = ADD32(ctx->r25, 0XB);
    // 0x8005B340: sra         $t7, $t6, 3
    ctx->r15 = S32(SIGNED(ctx->r14) >> 3);
    // 0x8005B344: andi        $t3, $t7, 0x1FF
    ctx->r11 = ctx->r15 & 0X1FF;
    // 0x8005B348: sll         $t2, $t3, 9
    ctx->r10 = S32(ctx->r11 << 9);
    // 0x8005B34C: or          $t8, $t2, $at
    ctx->r24 = ctx->r10 | ctx->r1;
    // 0x8005B350: sw          $t8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r24;
    // 0x8005B354: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x8005B358: lui         $t1, 0x8
    ctx->r9 = S32(0X8 << 16);
    // 0x8005B35C: ori         $t1, $t1, 0x200
    ctx->r9 = ctx->r9 | 0X200;
    // 0x8005B360: sw          $t1, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r9;
    // 0x8005B364: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005B368: sll         $t3, $a3, 2
    ctx->r11 = S32(ctx->r7 << 2);
    // 0x8005B36C: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x8005B370: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005B374: andi        $t2, $t3, 0xFFF
    ctx->r10 = ctx->r11 & 0XFFF;
    // 0x8005B378: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005B37C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005B380: lw          $t1, 0xF8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF8);
    // 0x8005B384: sll         $t8, $t2, 12
    ctx->r24 = S32(ctx->r10 << 12);
    // 0x8005B388: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005B38C: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x8005B390: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x8005B394: andi        $t9, $t4, 0xFFF
    ctx->r25 = ctx->r12 & 0XFFF;
    // 0x8005B398: or          $t5, $t8, $at
    ctx->r13 = ctx->r24 | ctx->r1;
    // 0x8005B39C: or          $t6, $t5, $t9
    ctx->r14 = ctx->r13 | ctx->r25;
    // 0x8005B3A0: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8005B3A4: lw          $t3, 0xFC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XFC);
    // 0x8005B3A8: lw          $t5, 0x100($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X100);
    // 0x8005B3AC: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x8005B3B0: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x8005B3B4: addiu       $t9, $t5, 0x1
    ctx->r25 = ADD32(ctx->r13, 0X1);
    // 0x8005B3B8: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8005B3BC: andi        $t1, $t8, 0xFFF
    ctx->r9 = ctx->r24 & 0XFFF;
    // 0x8005B3C0: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x8005B3C4: sll         $t4, $t1, 12
    ctx->r12 = S32(ctx->r9 << 12);
    // 0x8005B3C8: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8005B3CC: or          $t3, $t4, $t7
    ctx->r11 = ctx->r12 | ctx->r15;
    // 0x8005B3D0: b           L_8005BA68
    // 0x8005B3D4: sw          $t3, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r11;
        goto L_8005BA68;
    // 0x8005B3D4: sw          $t3, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r11;
L_8005B3D8:
    // 0x8005B3D8: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005B3DC: lui         $at, 0xFD88
    ctx->r1 = S32(0XFD88 << 16);
    // 0x8005B3E0: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
    // 0x8005B3E4: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005B3E8: addiu       $t8, $a1, 0x8
    ctx->r24 = ADD32(ctx->r5, 0X8);
    // 0x8005B3EC: addiu       $t5, $t1, 0x8
    ctx->r13 = ADD32(ctx->r9, 0X8);
    // 0x8005B3F0: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005B3F4: lw          $t9, 0xE4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE4);
    // 0x8005B3F8: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x8005B3FC: sra         $t6, $t9, 1
    ctx->r14 = S32(SIGNED(ctx->r25) >> 1);
    // 0x8005B400: addiu       $t4, $t6, -0x1
    ctx->r12 = ADD32(ctx->r14, -0X1);
    // 0x8005B404: andi        $t7, $t4, 0xFFF
    ctx->r15 = ctx->r12 & 0XFFF;
    // 0x8005B408: or          $t3, $t7, $at
    ctx->r11 = ctx->r15 | ctx->r1;
    // 0x8005B40C: sw          $t3, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r11;
    // 0x8005B410: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x8005B414: lui         $at, 0xF588
    ctx->r1 = S32(0XF588 << 16);
    // 0x8005B418: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x8005B41C: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005B420: nop

    // 0x8005B424: sw          $t5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r13;
    // 0x8005B428: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005B42C: nop

    // 0x8005B430: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x8005B434: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005B438: lw          $t4, 0xFC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XFC);
    // 0x8005B43C: nop

    // 0x8005B440: subu        $t7, $t4, $a3
    ctx->r15 = SUB32(ctx->r12, ctx->r7);
    // 0x8005B444: addiu       $t3, $t7, 0x2
    ctx->r11 = ADD32(ctx->r15, 0X2);
    // 0x8005B448: sra         $t2, $t3, 1
    ctx->r10 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8005B44C: addiu       $t8, $t2, 0x7
    ctx->r24 = ADD32(ctx->r10, 0X7);
    // 0x8005B450: sra         $t1, $t8, 3
    ctx->r9 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8005B454: andi        $t5, $t1, 0x1FF
    ctx->r13 = ctx->r9 & 0X1FF;
    // 0x8005B458: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x8005B45C: sll         $t9, $t5, 9
    ctx->r25 = S32(ctx->r13 << 9);
    // 0x8005B460: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x8005B464: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x8005B468: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x8005B46C: lui         $t7, 0x708
    ctx->r15 = S32(0X708 << 16);
    // 0x8005B470: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x8005B474: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x8005B478: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005B47C: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x8005B480: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x8005B484: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005B488: sll         $t2, $a3, 1
    ctx->r10 = S32(ctx->r7 << 1);
    // 0x8005B48C: addiu       $t1, $t8, 0x8
    ctx->r9 = ADD32(ctx->r24, 0X8);
    // 0x8005B490: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005B494: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x8005B498: andi        $t8, $t2, 0xFFF
    ctx->r24 = ctx->r10 & 0XFFF;
    // 0x8005B49C: sw          $t5, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r13;
    // 0x8005B4A0: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8005B4A4: sll         $t1, $t8, 12
    ctx->r9 = S32(ctx->r24 << 12);
    // 0x8005B4A8: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8005B4AC: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005B4B0: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005B4B4: sw          $t4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r12;
    // 0x8005B4B8: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005B4BC: or          $t5, $t1, $at
    ctx->r13 = ctx->r9 | ctx->r1;
    // 0x8005B4C0: addiu       $t3, $t7, 0x8
    ctx->r11 = ADD32(ctx->r15, 0X8);
    // 0x8005B4C4: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005B4C8: lw          $t9, 0xF8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF8);
    // 0x8005B4CC: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x8005B4D0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8005B4D4: andi        $t4, $t6, 0xFFF
    ctx->r12 = ctx->r14 & 0XFFF;
    // 0x8005B4D8: or          $t7, $t5, $t4
    ctx->r15 = ctx->r13 | ctx->r12;
    // 0x8005B4DC: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x8005B4E0: lw          $t2, 0xFC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XFC);
    // 0x8005B4E4: lw          $t4, 0x100($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X100);
    // 0x8005B4E8: addiu       $t8, $t2, 0x1
    ctx->r24 = ADD32(ctx->r10, 0X1);
    // 0x8005B4EC: sll         $t1, $t8, 1
    ctx->r9 = S32(ctx->r24 << 1);
    // 0x8005B4F0: andi        $t9, $t1, 0xFFF
    ctx->r25 = ctx->r9 & 0XFFF;
    // 0x8005B4F4: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x8005B4F8: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x8005B4FC: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x8005B500: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005B504: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8005B508: or          $t5, $t6, $at
    ctx->r13 = ctx->r14 | ctx->r1;
    // 0x8005B50C: andi        $t2, $t3, 0xFFF
    ctx->r10 = ctx->r11 & 0XFFF;
    // 0x8005B510: or          $t8, $t5, $t2
    ctx->r24 = ctx->r13 | ctx->r10;
    // 0x8005B514: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x8005B518: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005B51C: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8005B520: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x8005B524: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005B528: lui         $at, 0xF580
    ctx->r1 = S32(0XF580 << 16);
    // 0x8005B52C: addiu       $t4, $t6, 0x8
    ctx->r12 = ADD32(ctx->r14, 0X8);
    // 0x8005B530: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005B534: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x8005B538: nop

    // 0x8005B53C: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x8005B540: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x8005B544: nop

    // 0x8005B548: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8005B54C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005B550: nop

    // 0x8005B554: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x8005B558: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005B55C: nop

    // 0x8005B560: addiu       $t1, $t8, 0x8
    ctx->r9 = ADD32(ctx->r24, 0X8);
    // 0x8005B564: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005B568: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x8005B56C: nop

    // 0x8005B570: subu        $t6, $t9, $a3
    ctx->r14 = SUB32(ctx->r25, ctx->r7);
    // 0x8005B574: addiu       $t4, $t6, 0x2
    ctx->r12 = ADD32(ctx->r14, 0X2);
    // 0x8005B578: sra         $t7, $t4, 1
    ctx->r15 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8005B57C: addiu       $t3, $t7, 0x7
    ctx->r11 = ADD32(ctx->r15, 0X7);
    // 0x8005B580: sra         $t5, $t3, 3
    ctx->r13 = S32(SIGNED(ctx->r11) >> 3);
    // 0x8005B584: andi        $t2, $t5, 0x1FF
    ctx->r10 = ctx->r13 & 0X1FF;
    // 0x8005B588: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8005B58C: sll         $t8, $t2, 9
    ctx->r24 = S32(ctx->r10 << 9);
    // 0x8005B590: or          $t1, $t8, $at
    ctx->r9 = ctx->r24 | ctx->r1;
    // 0x8005B594: sw          $t1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r9;
    // 0x8005B598: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x8005B59C: lui         $t6, 0x8
    ctx->r14 = S32(0X8 << 16);
    // 0x8005B5A0: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x8005B5A4: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x8005B5A8: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005B5AC: sll         $t2, $a3, 2
    ctx->r10 = S32(ctx->r7 << 2);
    // 0x8005B5B0: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x8005B5B4: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005B5B8: andi        $t8, $t2, 0xFFF
    ctx->r24 = ctx->r10 & 0XFFF;
    // 0x8005B5BC: addiu       $t5, $t3, 0x8
    ctx->r13 = ADD32(ctx->r11, 0X8);
    // 0x8005B5C0: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005B5C4: lw          $t6, 0xF8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF8);
    // 0x8005B5C8: sll         $t1, $t8, 12
    ctx->r9 = S32(ctx->r24 << 12);
    // 0x8005B5CC: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005B5D0: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x8005B5D4: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x8005B5D8: andi        $t7, $t4, 0xFFF
    ctx->r15 = ctx->r12 & 0XFFF;
    // 0x8005B5DC: or          $t9, $t1, $at
    ctx->r25 = ctx->r9 | ctx->r1;
    // 0x8005B5E0: or          $t3, $t9, $t7
    ctx->r11 = ctx->r25 | ctx->r15;
    // 0x8005B5E4: sw          $t3, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r11;
    // 0x8005B5E8: lw          $t2, 0xFC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XFC);
    // 0x8005B5EC: lw          $t9, 0x100($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X100);
    // 0x8005B5F0: addiu       $t8, $t2, 0x1
    ctx->r24 = ADD32(ctx->r10, 0X1);
    // 0x8005B5F4: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x8005B5F8: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x8005B5FC: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x8005B600: andi        $t6, $t1, 0xFFF
    ctx->r14 = ctx->r9 & 0XFFF;
    // 0x8005B604: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8005B608: sll         $t4, $t6, 12
    ctx->r12 = S32(ctx->r14 << 12);
    // 0x8005B60C: andi        $t5, $t3, 0xFFF
    ctx->r13 = ctx->r11 & 0XFFF;
    // 0x8005B610: or          $t2, $t4, $t5
    ctx->r10 = ctx->r12 | ctx->r13;
    // 0x8005B614: b           L_8005BA68
    // 0x8005B618: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
        goto L_8005BA68;
    // 0x8005B618: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
L_8005B61C:
    // 0x8005B61C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005B620: lui         $at, 0xFD68
    ctx->r1 = S32(0XFD68 << 16);
    // 0x8005B624: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x8005B628: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005B62C: addiu       $t8, $a1, 0x8
    ctx->r24 = ADD32(ctx->r5, 0X8);
    // 0x8005B630: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x8005B634: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005B638: lw          $t7, 0xE4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE4);
    // 0x8005B63C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x8005B640: addiu       $t3, $t7, -0x1
    ctx->r11 = ADD32(ctx->r15, -0X1);
    // 0x8005B644: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x8005B648: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x8005B64C: sw          $t5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r13;
    // 0x8005B650: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8005B654: lui         $at, 0xF568
    ctx->r1 = S32(0XF568 << 16);
    // 0x8005B658: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x8005B65C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005B660: nop

    // 0x8005B664: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x8005B668: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005B66C: nop

    // 0x8005B670: addiu       $t7, $t9, 0x8
    ctx->r15 = ADD32(ctx->r25, 0X8);
    // 0x8005B674: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005B678: lw          $t3, 0xFC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XFC);
    // 0x8005B67C: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8005B680: subu        $t4, $t3, $a3
    ctx->r12 = SUB32(ctx->r11, ctx->r7);
    // 0x8005B684: addiu       $t5, $t4, 0x9
    ctx->r13 = ADD32(ctx->r12, 0X9);
    // 0x8005B688: sra         $t2, $t5, 3
    ctx->r10 = S32(SIGNED(ctx->r13) >> 3);
    // 0x8005B68C: andi        $t8, $t2, 0x1FF
    ctx->r24 = ctx->r10 & 0X1FF;
    // 0x8005B690: sll         $t1, $t8, 9
    ctx->r9 = S32(ctx->r24 << 9);
    // 0x8005B694: or          $t6, $t1, $at
    ctx->r14 = ctx->r9 | ctx->r1;
    // 0x8005B698: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8005B69C: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x8005B6A0: lui         $t7, 0x708
    ctx->r15 = S32(0X708 << 16);
    // 0x8005B6A4: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x8005B6A8: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x8005B6AC: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005B6B0: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x8005B6B4: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x8005B6B8: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005B6BC: sll         $t4, $a3, 2
    ctx->r12 = S32(ctx->r7 << 2);
    // 0x8005B6C0: addiu       $t2, $t5, 0x8
    ctx->r10 = ADD32(ctx->r13, 0X8);
    // 0x8005B6C4: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005B6C8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8005B6CC: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x8005B6D0: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x8005B6D4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8005B6D8: sll         $t2, $t5, 12
    ctx->r10 = S32(ctx->r13 << 12);
    // 0x8005B6DC: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8005B6E0: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005B6E4: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005B6E8: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x8005B6EC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005B6F0: or          $t8, $t2, $at
    ctx->r24 = ctx->r10 | ctx->r1;
    // 0x8005B6F4: addiu       $t3, $t7, 0x8
    ctx->r11 = ADD32(ctx->r15, 0X8);
    // 0x8005B6F8: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005B6FC: lw          $t1, 0xF8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF8);
    // 0x8005B700: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x8005B704: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8005B708: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8005B70C: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x8005B710: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x8005B714: lw          $t4, 0xFC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XFC);
    // 0x8005B718: lw          $t9, 0x100($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X100);
    // 0x8005B71C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8005B720: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x8005B724: andi        $t1, $t2, 0xFFF
    ctx->r9 = ctx->r10 & 0XFFF;
    // 0x8005B728: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x8005B72C: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x8005B730: sll         $t6, $t1, 12
    ctx->r14 = S32(ctx->r9 << 12);
    // 0x8005B734: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005B738: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x8005B73C: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x8005B740: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x8005B744: or          $t5, $t8, $t4
    ctx->r13 = ctx->r24 | ctx->r12;
    // 0x8005B748: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x8005B74C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005B750: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8005B754: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x8005B758: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005B75C: lui         $at, 0xF568
    ctx->r1 = S32(0XF568 << 16);
    // 0x8005B760: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x8005B764: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005B768: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8005B76C: nop

    // 0x8005B770: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x8005B774: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8005B778: nop

    // 0x8005B77C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8005B780: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005B784: nop

    // 0x8005B788: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x8005B78C: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005B790: nop

    // 0x8005B794: addiu       $t2, $t5, 0x8
    ctx->r10 = ADD32(ctx->r13, 0X8);
    // 0x8005B798: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005B79C: lw          $t1, 0xFC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XFC);
    // 0x8005B7A0: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8005B7A4: subu        $t6, $t1, $a3
    ctx->r14 = SUB32(ctx->r9, ctx->r7);
    // 0x8005B7A8: addiu       $t9, $t6, 0x9
    ctx->r25 = ADD32(ctx->r14, 0X9);
    // 0x8005B7AC: sra         $t7, $t9, 3
    ctx->r15 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8005B7B0: andi        $t3, $t7, 0x1FF
    ctx->r11 = ctx->r15 & 0X1FF;
    // 0x8005B7B4: sll         $t8, $t3, 9
    ctx->r24 = S32(ctx->r11 << 9);
    // 0x8005B7B8: or          $t4, $t8, $at
    ctx->r12 = ctx->r24 | ctx->r1;
    // 0x8005B7BC: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005B7C0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8005B7C4: lui         $t2, 0x8
    ctx->r10 = S32(0X8 << 16);
    // 0x8005B7C8: ori         $t2, $t2, 0x200
    ctx->r10 = ctx->r10 | 0X200;
    // 0x8005B7CC: sw          $t2, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r10;
    // 0x8005B7D0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005B7D4: sll         $t3, $a3, 2
    ctx->r11 = S32(ctx->r7 << 2);
    // 0x8005B7D8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8005B7DC: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005B7E0: andi        $t8, $t3, 0xFFF
    ctx->r24 = ctx->r11 & 0XFFF;
    // 0x8005B7E4: addiu       $t7, $t9, 0x8
    ctx->r15 = ADD32(ctx->r25, 0X8);
    // 0x8005B7E8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005B7EC: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
    // 0x8005B7F0: sll         $t4, $t8, 12
    ctx->r12 = S32(ctx->r24 << 12);
    // 0x8005B7F4: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005B7F8: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x8005B7FC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8005B800: andi        $t6, $t1, 0xFFF
    ctx->r14 = ctx->r9 & 0XFFF;
    // 0x8005B804: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x8005B808: or          $t9, $t5, $t6
    ctx->r25 = ctx->r13 | ctx->r14;
    // 0x8005B80C: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x8005B810: lw          $t3, 0xFC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XFC);
    // 0x8005B814: lw          $t5, 0x100($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X100);
    // 0x8005B818: addiu       $t8, $t3, 0x1
    ctx->r24 = ADD32(ctx->r11, 0X1);
    // 0x8005B81C: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x8005B820: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8005B824: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8005B828: andi        $t2, $t4, 0xFFF
    ctx->r10 = ctx->r12 & 0XFFF;
    // 0x8005B82C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8005B830: sll         $t1, $t2, 12
    ctx->r9 = S32(ctx->r10 << 12);
    // 0x8005B834: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x8005B838: or          $t3, $t1, $t7
    ctx->r11 = ctx->r9 | ctx->r15;
    // 0x8005B83C: b           L_8005BA68
    // 0x8005B840: sw          $t3, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r11;
        goto L_8005BA68;
    // 0x8005B840: sw          $t3, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r11;
L_8005B844:
    // 0x8005B844: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005B848: lui         $at, 0xFD48
    ctx->r1 = S32(0XFD48 << 16);
    // 0x8005B84C: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x8005B850: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005B854: addiu       $t8, $a1, 0x8
    ctx->r24 = ADD32(ctx->r5, 0X8);
    // 0x8005B858: addiu       $t5, $t2, 0x8
    ctx->r13 = ADD32(ctx->r10, 0X8);
    // 0x8005B85C: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005B860: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
    // 0x8005B864: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8005B868: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x8005B86C: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x8005B870: or          $t7, $t1, $at
    ctx->r15 = ctx->r9 | ctx->r1;
    // 0x8005B874: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x8005B878: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8005B87C: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8005B880: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x8005B884: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005B888: nop

    // 0x8005B88C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x8005B890: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005B894: nop

    // 0x8005B898: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8005B89C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005B8A0: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x8005B8A4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8005B8A8: subu        $t1, $t9, $a3
    ctx->r9 = SUB32(ctx->r25, ctx->r7);
    // 0x8005B8AC: addiu       $t7, $t1, 0x9
    ctx->r15 = ADD32(ctx->r9, 0X9);
    // 0x8005B8B0: sra         $t3, $t7, 3
    ctx->r11 = S32(SIGNED(ctx->r15) >> 3);
    // 0x8005B8B4: andi        $t8, $t3, 0x1FF
    ctx->r24 = ctx->r11 & 0X1FF;
    // 0x8005B8B8: sll         $t4, $t8, 9
    ctx->r12 = S32(ctx->r24 << 9);
    // 0x8005B8BC: or          $t2, $t4, $at
    ctx->r10 = ctx->r12 | ctx->r1;
    // 0x8005B8C0: sw          $t2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r10;
    // 0x8005B8C4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8005B8C8: lui         $t6, 0x708
    ctx->r14 = S32(0X708 << 16);
    // 0x8005B8CC: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x8005B8D0: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
    // 0x8005B8D4: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005B8D8: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x8005B8DC: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x8005B8E0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005B8E4: sll         $t1, $a3, 2
    ctx->r9 = S32(ctx->r7 << 2);
    // 0x8005B8E8: addiu       $t3, $t7, 0x8
    ctx->r11 = ADD32(ctx->r15, 0X8);
    // 0x8005B8EC: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005B8F0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8005B8F4: andi        $t7, $t1, 0xFFF
    ctx->r15 = ctx->r9 & 0XFFF;
    // 0x8005B8F8: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x8005B8FC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8005B900: sll         $t3, $t7, 12
    ctx->r11 = S32(ctx->r15 << 12);
    // 0x8005B904: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8005B908: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005B90C: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005B910: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8005B914: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005B918: or          $t8, $t3, $at
    ctx->r24 = ctx->r11 | ctx->r1;
    // 0x8005B91C: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x8005B920: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005B924: lw          $t4, 0xF8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XF8);
    // 0x8005B928: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8005B92C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x8005B930: andi        $t5, $t2, 0xFFF
    ctx->r13 = ctx->r10 & 0XFFF;
    // 0x8005B934: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x8005B938: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8005B93C: lw          $t1, 0xFC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XFC);
    // 0x8005B940: lw          $t5, 0x100($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X100);
    // 0x8005B944: addiu       $t7, $t1, 0x1
    ctx->r15 = ADD32(ctx->r9, 0X1);
    // 0x8005B948: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x8005B94C: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x8005B950: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8005B954: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8005B958: sll         $t2, $t4, 12
    ctx->r10 = S32(ctx->r12 << 12);
    // 0x8005B95C: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005B960: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8005B964: or          $t8, $t2, $at
    ctx->r24 = ctx->r10 | ctx->r1;
    // 0x8005B968: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x8005B96C: or          $t7, $t8, $t1
    ctx->r15 = ctx->r24 | ctx->r9;
    // 0x8005B970: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x8005B974: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005B978: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8005B97C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8005B980: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005B984: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8005B988: addiu       $t5, $t2, 0x8
    ctx->r13 = ADD32(ctx->r10, 0X8);
    // 0x8005B98C: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005B990: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8005B994: nop

    // 0x8005B998: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8005B99C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8005B9A0: nop

    // 0x8005B9A4: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8005B9A8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005B9AC: nop

    // 0x8005B9B0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8005B9B4: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005B9B8: nop

    // 0x8005B9BC: addiu       $t3, $t7, 0x8
    ctx->r11 = ADD32(ctx->r15, 0X8);
    // 0x8005B9C0: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005B9C4: lw          $t4, 0xFC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XFC);
    // 0x8005B9C8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8005B9CC: subu        $t2, $t4, $a3
    ctx->r10 = SUB32(ctx->r12, ctx->r7);
    // 0x8005B9D0: addiu       $t5, $t2, 0x9
    ctx->r13 = ADD32(ctx->r10, 0X9);
    // 0x8005B9D4: sra         $t6, $t5, 3
    ctx->r14 = S32(SIGNED(ctx->r13) >> 3);
    // 0x8005B9D8: andi        $t9, $t6, 0x1FF
    ctx->r25 = ctx->r14 & 0X1FF;
    // 0x8005B9DC: sll         $t8, $t9, 9
    ctx->r24 = S32(ctx->r25 << 9);
    // 0x8005B9E0: or          $t1, $t8, $at
    ctx->r9 = ctx->r24 | ctx->r1;
    // 0x8005B9E4: sw          $t1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r9;
    // 0x8005B9E8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8005B9EC: lui         $t3, 0x8
    ctx->r11 = S32(0X8 << 16);
    // 0x8005B9F0: ori         $t3, $t3, 0x200
    ctx->r11 = ctx->r11 | 0X200;
    // 0x8005B9F4: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8005B9F8: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005B9FC: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x8005BA00: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8005BA04: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005BA08: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x8005BA0C: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8005BA10: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005BA14: lw          $t3, 0xF8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF8);
    // 0x8005BA18: sll         $t1, $t8, 12
    ctx->r9 = S32(ctx->r24 << 12);
    // 0x8005BA1C: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005BA20: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8005BA24: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8005BA28: andi        $t2, $t4, 0xFFF
    ctx->r10 = ctx->r12 & 0XFFF;
    // 0x8005BA2C: or          $t7, $t1, $at
    ctx->r15 = ctx->r9 | ctx->r1;
    // 0x8005BA30: or          $t5, $t7, $t2
    ctx->r13 = ctx->r15 | ctx->r10;
    // 0x8005BA34: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8005BA38: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x8005BA3C: lw          $t7, 0x100($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X100);
    // 0x8005BA40: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x8005BA44: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x8005BA48: addiu       $t2, $t7, 0x1
    ctx->r10 = ADD32(ctx->r15, 0X1);
    // 0x8005BA4C: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x8005BA50: andi        $t3, $t1, 0xFFF
    ctx->r11 = ctx->r9 & 0XFFF;
    // 0x8005BA54: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8005BA58: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x8005BA5C: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x8005BA60: or          $t9, $t4, $t6
    ctx->r25 = ctx->r12 | ctx->r14;
    // 0x8005BA64: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
L_8005BA68:
    // 0x8005BA68: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005BA6C: lui         $t2, 0xF200
    ctx->r10 = S32(0XF200 << 16);
    // 0x8005BA70: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8005BA74: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005BA78: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8005BA7C: addiu       $t7, $t3, 0x8
    ctx->r15 = ADD32(ctx->r11, 0X8);
    // 0x8005BA80: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005BA84: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x8005BA88: nop

    // 0x8005BA8C: sw          $t2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r10;
    // 0x8005BA90: lw          $t6, 0xF8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF8);
    // 0x8005BA94: lw          $t4, 0x100($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X100);
    // 0x8005BA98: lw          $t2, 0xFC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XFC);
    // 0x8005BA9C: subu        $t9, $t4, $t6
    ctx->r25 = SUB32(ctx->r12, ctx->r14);
    // 0x8005BAA0: subu        $t5, $t2, $a3
    ctx->r13 = SUB32(ctx->r10, ctx->r7);
    // 0x8005BAA4: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x8005BAA8: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x8005BAAC: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x8005BAB0: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8005BAB4: addiu       $t9, $t6, 0x3
    ctx->r25 = ADD32(ctx->r14, 0X3);
    // 0x8005BAB8: addiu       $t3, $t1, 0x3
    ctx->r11 = ADD32(ctx->r9, 0X3);
    // 0x8005BABC: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x8005BAC0: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x8005BAC4: sll         $t1, $t8, 12
    ctx->r9 = S32(ctx->r24 << 12);
    // 0x8005BAC8: andi        $t7, $t3, 0xFFF
    ctx->r15 = ctx->r11 & 0XFFF;
    // 0x8005BACC: or          $t3, $t1, $t7
    ctx->r11 = ctx->r9 | ctx->r15;
    // 0x8005BAD0: sw          $t3, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r11;
    // 0x8005BAD4: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005BAD8: nop

    // 0x8005BADC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8005BAE0: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005BAE4: nop

    // 0x8005BAE8: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x8005BAEC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005BAF0: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
    // 0x8005BAF4: lw          $t8, 0xD8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD8);
    // 0x8005BAF8: lw          $t5, 0x108($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X108);
    // 0x8005BAFC: lw          $t4, 0xD4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD4);
    // 0x8005BB00: addu        $t1, $t9, $t8
    ctx->r9 = ADD32(ctx->r25, ctx->r24);
    // 0x8005BB04: andi        $t7, $t1, 0xFFF
    ctx->r15 = ctx->r9 & 0XFFF;
    // 0x8005BB08: sll         $t3, $t7, 12
    ctx->r11 = S32(ctx->r15 << 12);
    // 0x8005BB0C: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x8005BB10: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x8005BB14: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8005BB18: or          $t2, $t3, $at
    ctx->r10 = ctx->r11 | ctx->r1;
    // 0x8005BB1C: or          $t8, $t2, $t9
    ctx->r24 = ctx->r10 | ctx->r25;
    // 0x8005BB20: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x8005BB24: lw          $t7, 0x104($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X104);
    // 0x8005BB28: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x8005BB2C: andi        $t3, $t7, 0xFFF
    ctx->r11 = ctx->r15 & 0XFFF;
    // 0x8005BB30: lw          $t9, 0x10($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X10);
    // 0x8005BB34: sll         $t5, $t3, 12
    ctx->r13 = S32(ctx->r11 << 12);
    // 0x8005BB38: andi        $t6, $t4, 0xFFF
    ctx->r14 = ctx->r12 & 0XFFF;
    // 0x8005BB3C: or          $t2, $t5, $t6
    ctx->r10 = ctx->r13 | ctx->r14;
    // 0x8005BB40: sw          $t2, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r10;
    // 0x8005BB44: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005BB48: lui         $t3, 0xE100
    ctx->r11 = S32(0XE100 << 16);
    // 0x8005BB4C: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x8005BB50: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005BB54: lui         $t8, 0xF100
    ctx->r24 = S32(0XF100 << 16);
    // 0x8005BB58: addiu       $t7, $t1, 0x8
    ctx->r15 = ADD32(ctx->r9, 0X8);
    // 0x8005BB5C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005BB60: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x8005BB64: nop

    // 0x8005BB68: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005BB6C: lw          $t5, 0xC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC);
    // 0x8005BB70: nop

    // 0x8005BB74: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8005BB78: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005BB7C: nop

    // 0x8005BB80: sw          $t6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r14;
    // 0x8005BB84: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005BB88: nop

    // 0x8005BB8C: addiu       $t9, $t2, 0x8
    ctx->r25 = ADD32(ctx->r10, 0X8);
    // 0x8005BB90: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005BB94: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x8005BB98: nop

    // 0x8005BB9C: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x8005BBA0: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x8005BBA4: lw          $t5, 0x120($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X120);
    // 0x8005BBA8: andi        $t3, $t7, 0xFFFF
    ctx->r11 = ctx->r15 & 0XFFFF;
    // 0x8005BBAC: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x8005BBB0: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x8005BBB4: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x8005BBB8: or          $t2, $t4, $t6
    ctx->r10 = ctx->r12 | ctx->r14;
    // 0x8005BBBC: sw          $t2, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r10;
    // 0x8005BBC0: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005BBC4: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x8005BBC8: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8005BBCC: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005BBD0: nop

    // 0x8005BBD4: addiu       $t7, $t1, 0x8
    ctx->r15 = ADD32(ctx->r9, 0X8);
    // 0x8005BBD8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005BBDC: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8005BBE0: nop

    // 0x8005BBE4: sw          $t3, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r11;
    // 0x8005BBE8: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8005BBEC: nop

    // 0x8005BBF0: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
L_8005BBF4:
    // 0x8005BBF4: jr          $ra
    // 0x8005BBF8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x8005BBF8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_8005BBFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BBFC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005BC00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005BC04: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x8005BC08: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005BC0C: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8005BC10: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8005BC14: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005BC18: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8005BC1C: lui         $t5, 0xE300
    ctx->r13 = S32(0XE300 << 16);
    // 0x8005BC20: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8005BC24: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8005BC28: ori         $t5, $t5, 0xA01
    ctx->r13 = ctx->r13 | 0XA01;
    // 0x8005BC2C: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8005BC30: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005BC34: lui         $t1, 0xD700
    ctx->r9 = S32(0XD700 << 16);
    // 0x8005BC38: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x8005BC3C: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005BC40: ori         $t1, $t1, 0x2
    ctx->r9 = ctx->r9 | 0X2;
    // 0x8005BC44: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005BC48: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005BC4C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8005BC50: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x8005BC54: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8005BC58: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8005BC5C: ori         $t3, $t3, 0x8000
    ctx->r11 = ctx->r11 | 0X8000;
    // 0x8005BC60: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8005BC64: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005BC68: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005BC6C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8005BC70: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005BC74: lui         $t8, 0xE200
    ctx->r24 = S32(0XE200 << 16);
    // 0x8005BC78: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8005BC7C: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x8005BC80: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8005BC84: ori         $t8, $t8, 0x1E01
    ctx->r24 = ctx->r24 | 0X1E01;
    // 0x8005BC88: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8005BC8C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8005BC90: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8005BC94: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8005BC98: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005BC9C: nop

    // 0x8005BCA0: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8005BCA4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005BCA8: lui         $t5, 0xE300
    ctx->r13 = S32(0XE300 << 16);
    // 0x8005BCAC: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005BCB0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005BCB4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8005BCB8: ori         $t5, $t5, 0xC00
    ctx->r13 = ctx->r13 | 0XC00;
    // 0x8005BCBC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005BCC0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8005BCC4: nop

    // 0x8005BCC8: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8005BCCC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005BCD0: lui         $t1, 0xE300
    ctx->r9 = S32(0XE300 << 16);
    // 0x8005BCD4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8005BCD8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005BCDC: ori         $t1, $t1, 0x1201
    ctx->r9 = ctx->r9 | 0X1201;
    // 0x8005BCE0: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005BCE4: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005BCE8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8005BCEC: addiu       $t3, $zero, 0x3000
    ctx->r11 = ADD32(0, 0X3000);
    // 0x8005BCF0: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8005BCF4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8005BCF8: nop

    // 0x8005BCFC: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8005BD00: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005BD04: nop

    // 0x8005BD08: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8005BD0C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005BD10: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x8005BD14: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8005BD18: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x8005BD1C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8005BD20: ori         $t8, $t8, 0x1402
    ctx->r24 = ctx->r24 | 0X1402;
    // 0x8005BD24: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8005BD28: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8005BD2C: addiu       $t0, $zero, 0xC00
    ctx->r8 = ADD32(0, 0XC00);
    // 0x8005BD30: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8005BD34: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005BD38: nop

    // 0x8005BD3C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8005BD40: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005BD44: lui         $t5, 0xE300
    ctx->r13 = S32(0XE300 << 16);
    // 0x8005BD48: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005BD4C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005BD50: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x8005BD54: ori         $t5, $t5, 0xD01
    ctx->r13 = ctx->r13 | 0XD01;
    // 0x8005BD58: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005BD5C: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x8005BD60: nop

    // 0x8005BD64: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8005BD68: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005BD6C: lui         $t1, 0xE300
    ctx->r9 = S32(0XE300 << 16);
    // 0x8005BD70: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8005BD74: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005BD78: ori         $t1, $t1, 0xF00
    ctx->r9 = ctx->r9 | 0XF00;
    // 0x8005BD7C: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005BD80: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005BD84: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x8005BD88: nop

    // 0x8005BD8C: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8005BD90: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x8005BD94: nop

    // 0x8005BD98: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8005BD9C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005BDA0: lui         $t7, 0xD9C0
    ctx->r15 = S32(0XD9C0 << 16);
    // 0x8005BDA4: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x8005BDA8: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005BDAC: ori         $t7, $t7, 0xF9FA
    ctx->r15 = ctx->r15 | 0XF9FA;
    // 0x8005BDB0: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8005BDB4: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x8005BDB8: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8005BDBC: nop

    // 0x8005BDC0: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8005BDC4: lw          $t3, 0xC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC);
    // 0x8005BDC8: nop

    // 0x8005BDCC: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8005BDD0: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005BDD4: lui         $t3, 0xE200
    ctx->r11 = S32(0XE200 << 16);
    // 0x8005BDD8: sw          $t4, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r12;
    // 0x8005BDDC: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005BDE0: ori         $t3, $t3, 0x1C
    ctx->r11 = ctx->r11 | 0X1C;
    // 0x8005BDE4: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8005BDE8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005BDEC: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x8005BDF0: lui         $t5, 0x50
    ctx->r13 = S32(0X50 << 16);
    // 0x8005BDF4: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005BDF8: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x8005BDFC: ori         $t5, $t5, 0x4240
    ctx->r13 = ctx->r13 | 0X4240;
    // 0x8005BE00: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8005BE04: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x8005BE08: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8005BE0C: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x8005BE10: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005BE14: nop

    // 0x8005BE18: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8005BE1C: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005BE20: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8005BE24: nop

    // 0x8005BE28: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005BE2C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8005BE30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8005BE34: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8005BE38: jr          $ra
    // 0x8005BE3C: sh          $t7, 0x164($at)
    MEM_H(0X164, ctx->r1) = ctx->r15;
    return;
    // 0x8005BE3C: sh          $t7, 0x164($at)
    MEM_H(0X164, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_8005BE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BE40: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005BE44: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8005BE48: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x8005BE4C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005BE50: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8005BE54: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8005BE58: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005BE5C: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8005BE60: lui         $t5, 0xFCFF
    ctx->r13 = S32(0XFCFF << 16);
    // 0x8005BE64: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8005BE68: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x8005BE6C: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x8005BE70: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8005BE74: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005BE78: lui         $t7, 0xFFFE
    ctx->r15 = S32(0XFFFE << 16);
    // 0x8005BE7C: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
    // 0x8005BE80: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005BE84: ori         $t7, $t7, 0x793C
    ctx->r15 = ctx->r15 | 0X793C;
    // 0x8005BE88: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005BE8C: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005BE90: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x8005BE94: lui         $t2, 0xE300
    ctx->r10 = S32(0XE300 << 16);
    // 0x8005BE98: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8005BE9C: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x8005BEA0: ori         $t2, $t2, 0xC00
    ctx->r10 = ctx->r10 | 0XC00;
    // 0x8005BEA4: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8005BEA8: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005BEAC: lui         $t4, 0x8
    ctx->r12 = S32(0X8 << 16);
    // 0x8005BEB0: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8005BEB4: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x8005BEB8: nop

    // 0x8005BEBC: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8005BEC0: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005BEC4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8005BEC8: nop

    // 0x8005BECC: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8005BED0: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8005BED4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x8005BED8: jr          $ra
    // 0x8005BEDC: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    return;
    // 0x8005BEDC: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
;}
RECOMP_FUNC void func_8005BEE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BEE0: beq         $a1, $zero, L_8005DB88
    if (ctx->r5 == 0) {
        // 0x8005BEE4: addiu       $sp, $sp, -0x170
        ctx->r29 = ADD32(ctx->r29, -0X170);
            goto L_8005DB88;
    }
    // 0x8005BEE4: addiu       $sp, $sp, -0x170
    ctx->r29 = ADD32(ctx->r29, -0X170);
    // 0x8005BEE8: lw          $t6, 0x1A0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A0);
    // 0x8005BEEC: nop

    // 0x8005BEF0: beq         $t6, $zero, L_8005DB88
    if (ctx->r14 == 0) {
        // 0x8005BEF4: nop
    
            goto L_8005DB88;
    }
    // 0x8005BEF4: nop

    // 0x8005BEF8: lw          $t1, 0x184($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X184);
    // 0x8005BEFC: lw          $t6, 0x1A4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A4);
    // 0x8005BF00: subu        $t2, $t1, $a3
    ctx->r10 = SUB32(ctx->r9, ctx->r7);
    // 0x8005BF04: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8005BF08: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x8005BF0C: addiu       $t5, $t4, 0xFFF
    ctx->r13 = ADD32(ctx->r12, 0XFFF);
    // 0x8005BF10: div         $zero, $t5, $t6
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r14)));
    // 0x8005BF14: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x8005BF18: lw          $t1, 0x180($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X180);
    // 0x8005BF1C: sw          $t7, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r15;
    // 0x8005BF20: lhu         $t8, 0x2($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X2);
    // 0x8005BF24: nop

    // 0x8005BF28: sw          $t8, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r24;
    // 0x8005BF2C: lhu         $t9, 0x4($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X4);
    // 0x8005BF30: nop

    // 0x8005BF34: sw          $t9, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r25;
    // 0x8005BF38: lw          $t9, 0x188($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X188);
    // 0x8005BF3C: bne         $t6, $zero, L_8005BF48
    if (ctx->r14 != 0) {
        // 0x8005BF40: nop
    
            goto L_8005BF48;
    }
    // 0x8005BF40: nop

    // 0x8005BF44: break       7
    do_break(2147860292);
L_8005BF48:
    // 0x8005BF48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005BF4C: bne         $t6, $at, L_8005BF60
    if (ctx->r14 != ctx->r1) {
        // 0x8005BF50: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005BF60;
    }
    // 0x8005BF50: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005BF54: bne         $t5, $at, L_8005BF60
    if (ctx->r13 != ctx->r1) {
        // 0x8005BF58: nop
    
            goto L_8005BF60;
    }
    // 0x8005BF58: nop

    // 0x8005BF5C: break       6
    do_break(2147860316);
L_8005BF60:
    // 0x8005BF60: subu        $t2, $t9, $t1
    ctx->r10 = SUB32(ctx->r25, ctx->r9);
    // 0x8005BF64: addiu       $t3, $t2, 0x2
    ctx->r11 = ADD32(ctx->r10, 0X2);
    // 0x8005BF68: lw          $t6, 0x1A8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A8);
    // 0x8005BF6C: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x8005BF70: addiu       $t5, $t4, 0xFFF
    ctx->r13 = ADD32(ctx->r12, 0XFFF);
    // 0x8005BF74: lw          $t9, 0x164($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X164);
    // 0x8005BF78: mflo        $t7
    ctx->r15 = lo;
    // 0x8005BF7C: addiu       $t8, $t7, -0x5
    ctx->r24 = ADD32(ctx->r15, -0X5);
    // 0x8005BF80: sw          $t8, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r24;
    // 0x8005BF84: div         $zero, $t5, $t6
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r14)));
    // 0x8005BF88: bne         $t6, $zero, L_8005BF94
    if (ctx->r14 != 0) {
        // 0x8005BF8C: nop
    
            goto L_8005BF94;
    }
    // 0x8005BF8C: nop

    // 0x8005BF90: break       7
    do_break(2147860368);
L_8005BF94:
    // 0x8005BF94: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005BF98: bne         $t6, $at, L_8005BFAC
    if (ctx->r14 != ctx->r1) {
        // 0x8005BF9C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005BFAC;
    }
    // 0x8005BF9C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005BFA0: bne         $t5, $at, L_8005BFAC
    if (ctx->r13 != ctx->r1) {
        // 0x8005BFA4: nop
    
            goto L_8005BFAC;
    }
    // 0x8005BFA4: nop

    // 0x8005BFA8: break       6
    do_break(2147860392);
L_8005BFAC:
    // 0x8005BFAC: mflo        $t7
    ctx->r15 = lo;
    // 0x8005BFB0: addiu       $t8, $t7, -0x9
    ctx->r24 = ADD32(ctx->r15, -0X9);
    // 0x8005BFB4: blez        $t9, L_8005DB88
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8005BFB8: sw          $t8, 0x154($sp)
        MEM_W(0X154, ctx->r29) = ctx->r24;
            goto L_8005DB88;
    }
    // 0x8005BFB8: sw          $t8, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r24;
    // 0x8005BFBC: lw          $t1, 0x160($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X160);
    // 0x8005BFC0: nop

    // 0x8005BFC4: blez        $t1, L_8005DB88
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8005BFC8: nop
    
            goto L_8005DB88;
    }
    // 0x8005BFC8: nop

    // 0x8005BFCC: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8005BFD0: lh          $t2, 0x164($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X164);
    // 0x8005BFD4: lw          $t3, 0x15C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X15C);
    // 0x8005BFD8: nop

    // 0x8005BFDC: beq         $t2, $t3, L_8005C248
    if (ctx->r10 == ctx->r11) {
        // 0x8005BFE0: nop
    
            goto L_8005C248;
    }
    // 0x8005BFE0: nop

    // 0x8005BFE4: or          $t0, $t3, $zero
    ctx->r8 = ctx->r11 | 0;
    // 0x8005BFE8: beq         $t0, $zero, L_8005C010
    if (ctx->r8 == 0) {
        // 0x8005BFEC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8005C010;
    }
    // 0x8005BFEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005BFF0: beq         $t0, $at, L_8005C090
    if (ctx->r8 == ctx->r1) {
        // 0x8005BFF4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8005C090;
    }
    // 0x8005BFF4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005BFF8: beq         $t0, $at, L_8005C050
    if (ctx->r8 == ctx->r1) {
        // 0x8005BFFC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8005C050;
    }
    // 0x8005BFFC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005C000: beq         $t0, $at, L_8005C0D0
    if (ctx->r8 == ctx->r1) {
        // 0x8005C004: nop
    
            goto L_8005C0D0;
    }
    // 0x8005C004: nop

    // 0x8005C008: b           L_8005DB88
    // 0x8005C00C: nop

        goto L_8005DB88;
    // 0x8005C00C: nop

L_8005C010:
    // 0x8005C010: addiu       $t4, $zero, 0x800
    ctx->r12 = ADD32(0, 0X800);
    // 0x8005C014: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005C018: sw          $t4, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r12;
    // 0x8005C01C: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005C020: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x8005C024: sw          $t5, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r13;
    // 0x8005C028: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005C02C: ori         $t8, $t8, 0x1001
    ctx->r24 = ctx->r24 | 0X1001;
    // 0x8005C030: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005C034: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005C038: lw          $t9, 0x150($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X150);
    // 0x8005C03C: nop

    // 0x8005C040: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005C044: lw          $t1, 0x150($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X150);
    // 0x8005C048: b           L_8005C380
    // 0x8005C04C: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
        goto L_8005C380;
    // 0x8005C04C: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
L_8005C050:
    // 0x8005C050: addiu       $t2, $zero, 0x800
    ctx->r10 = ADD32(0, 0X800);
    // 0x8005C054: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005C058: sw          $t2, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r10;
    // 0x8005C05C: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005C060: lui         $t6, 0xE300
    ctx->r14 = S32(0XE300 << 16);
    // 0x8005C064: sw          $t3, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r11;
    // 0x8005C068: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005C06C: ori         $t6, $t6, 0x1001
    ctx->r14 = ctx->r14 | 0X1001;
    // 0x8005C070: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8005C074: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005C078: lw          $t7, 0x14C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14C);
    // 0x8005C07C: nop

    // 0x8005C080: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8005C084: lw          $t8, 0x14C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14C);
    // 0x8005C088: b           L_8005C380
    // 0x8005C08C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
        goto L_8005C380;
    // 0x8005C08C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
L_8005C090:
    // 0x8005C090: addiu       $t9, $zero, 0x1000
    ctx->r25 = ADD32(0, 0X1000);
    // 0x8005C094: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005C098: sw          $t9, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r25;
    // 0x8005C09C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005C0A0: lui         $t4, 0xE300
    ctx->r12 = S32(0XE300 << 16);
    // 0x8005C0A4: sw          $t1, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r9;
    // 0x8005C0A8: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005C0AC: ori         $t4, $t4, 0x1001
    ctx->r12 = ctx->r12 | 0X1001;
    // 0x8005C0B0: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8005C0B4: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005C0B8: lw          $t5, 0x148($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X148);
    // 0x8005C0BC: nop

    // 0x8005C0C0: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005C0C4: lw          $t6, 0x148($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X148);
    // 0x8005C0C8: b           L_8005C380
    // 0x8005C0CC: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
        goto L_8005C380;
    // 0x8005C0CC: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
L_8005C0D0:
    // 0x8005C0D0: addiu       $t7, $zero, 0x800
    ctx->r15 = ADD32(0, 0X800);
    // 0x8005C0D4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005C0D8: sw          $t7, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r15;
    // 0x8005C0DC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005C0E0: lui         $t2, 0xE300
    ctx->r10 = S32(0XE300 << 16);
    // 0x8005C0E4: sw          $t8, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r24;
    // 0x8005C0E8: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005C0EC: ori         $t2, $t2, 0x1001
    ctx->r10 = ctx->r10 | 0X1001;
    // 0x8005C0F0: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x8005C0F4: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005C0F8: lw          $t3, 0x144($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X144);
    // 0x8005C0FC: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x8005C100: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8005C104: lw          $t5, 0x144($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X144);
    // 0x8005C108: lui         $t9, 0xFD10
    ctx->r25 = S32(0XFD10 << 16);
    // 0x8005C10C: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8005C110: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005C114: nop

    // 0x8005C118: sw          $t6, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r14;
    // 0x8005C11C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005C120: lui         $t6, 0xE800
    ctx->r14 = S32(0XE800 << 16);
    // 0x8005C124: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8005C128: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005C12C: lw          $t1, 0x140($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X140);
    // 0x8005C130: nop

    // 0x8005C134: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x8005C138: lw          $t2, 0x140($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X140);
    // 0x8005C13C: nop

    // 0x8005C140: sw          $a2, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r6;
    // 0x8005C144: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005C148: nop

    // 0x8005C14C: sw          $t3, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r11;
    // 0x8005C150: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005C154: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8005C158: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8005C15C: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005C160: lw          $t7, 0x13C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X13C);
    // 0x8005C164: ori         $t3, $t3, 0x100
    ctx->r11 = ctx->r11 | 0X100;
    // 0x8005C168: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8005C16C: lw          $t8, 0x13C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X13C);
    // 0x8005C170: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x8005C174: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8005C178: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005C17C: nop

    // 0x8005C180: sw          $t9, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r25;
    // 0x8005C184: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005C188: nop

    // 0x8005C18C: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8005C190: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005C194: lw          $t4, 0x138($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X138);
    // 0x8005C198: lui         $t1, 0xE600
    ctx->r9 = S32(0XE600 << 16);
    // 0x8005C19C: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005C1A0: lw          $t6, 0x138($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X138);
    // 0x8005C1A4: nop

    // 0x8005C1A8: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8005C1AC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005C1B0: nop

    // 0x8005C1B4: sw          $t7, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r15;
    // 0x8005C1B8: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005C1BC: lui         $t7, 0xF000
    ctx->r15 = S32(0XF000 << 16);
    // 0x8005C1C0: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8005C1C4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005C1C8: lw          $t2, 0x134($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X134);
    // 0x8005C1CC: lui         $t9, 0x73F
    ctx->r25 = S32(0X73F << 16);
    // 0x8005C1D0: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8005C1D4: lw          $t3, 0x134($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X134);
    // 0x8005C1D8: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x8005C1DC: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8005C1E0: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005C1E4: nop

    // 0x8005C1E8: sw          $t4, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r12;
    // 0x8005C1EC: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005C1F0: nop

    // 0x8005C1F4: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8005C1F8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005C1FC: lw          $t8, 0x130($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X130);
    // 0x8005C200: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x8005C204: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005C208: lw          $t1, 0x130($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X130);
    // 0x8005C20C: nop

    // 0x8005C210: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x8005C214: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005C218: nop

    // 0x8005C21C: sw          $t2, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r10;
    // 0x8005C220: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005C224: nop

    // 0x8005C228: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005C22C: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005C230: lw          $t6, 0x12C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X12C);
    // 0x8005C234: nop

    // 0x8005C238: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8005C23C: lw          $t7, 0x12C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X12C);
    // 0x8005C240: b           L_8005C380
    // 0x8005C244: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
        goto L_8005C380;
    // 0x8005C244: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
L_8005C248:
    // 0x8005C248: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005C24C: lui         $t2, 0xFD10
    ctx->r10 = S32(0XFD10 << 16);
    // 0x8005C250: sw          $t8, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r24;
    // 0x8005C254: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005C258: lui         $t8, 0xE800
    ctx->r24 = S32(0XE800 << 16);
    // 0x8005C25C: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x8005C260: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005C264: lw          $t3, 0x128($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X128);
    // 0x8005C268: nop

    // 0x8005C26C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8005C270: lw          $t4, 0x128($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X128);
    // 0x8005C274: nop

    // 0x8005C278: sw          $a2, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r6;
    // 0x8005C27C: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005C280: nop

    // 0x8005C284: sw          $t5, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r13;
    // 0x8005C288: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005C28C: lui         $t5, 0xF500
    ctx->r13 = S32(0XF500 << 16);
    // 0x8005C290: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005C294: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005C298: lw          $t9, 0x124($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X124);
    // 0x8005C29C: ori         $t5, $t5, 0x100
    ctx->r13 = ctx->r13 | 0X100;
    // 0x8005C2A0: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005C2A4: lw          $t1, 0x124($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X124);
    // 0x8005C2A8: lui         $t7, 0x700
    ctx->r15 = S32(0X700 << 16);
    // 0x8005C2AC: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8005C2B0: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005C2B4: nop

    // 0x8005C2B8: sw          $t2, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r10;
    // 0x8005C2BC: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005C2C0: nop

    // 0x8005C2C4: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005C2C8: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005C2CC: lw          $t6, 0x120($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X120);
    // 0x8005C2D0: lui         $t3, 0xE600
    ctx->r11 = S32(0XE600 << 16);
    // 0x8005C2D4: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8005C2D8: lw          $t8, 0x120($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X120);
    // 0x8005C2DC: nop

    // 0x8005C2E0: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8005C2E4: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005C2E8: nop

    // 0x8005C2EC: sw          $t9, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r25;
    // 0x8005C2F0: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005C2F4: lui         $t9, 0xF000
    ctx->r25 = S32(0XF000 << 16);
    // 0x8005C2F8: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8005C2FC: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005C300: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x8005C304: lui         $t2, 0x73F
    ctx->r10 = S32(0X73F << 16);
    // 0x8005C308: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005C30C: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x8005C310: ori         $t2, $t2, 0xC000
    ctx->r10 = ctx->r10 | 0XC000;
    // 0x8005C314: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8005C318: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005C31C: nop

    // 0x8005C320: sw          $t6, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r14;
    // 0x8005C324: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005C328: nop

    // 0x8005C32C: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8005C330: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005C334: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x8005C338: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8005C33C: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x8005C340: lw          $t3, 0x118($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X118);
    // 0x8005C344: nop

    // 0x8005C348: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8005C34C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005C350: nop

    // 0x8005C354: sw          $t4, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r12;
    // 0x8005C358: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005C35C: nop

    // 0x8005C360: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8005C364: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005C368: lw          $t8, 0x114($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X114);
    // 0x8005C36C: nop

    // 0x8005C370: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005C374: lw          $t9, 0x114($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X114);
    // 0x8005C378: nop

    // 0x8005C37C: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
L_8005C380:
    // 0x8005C380: lw          $t2, 0x164($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X164);
    // 0x8005C384: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8005C388: lw          $t1, 0x160($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X160);
    // 0x8005C38C: addiu       $t3, $t2, 0x3
    ctx->r11 = ADD32(ctx->r10, 0X3);
    // 0x8005C390: andi        $t4, $t3, 0xFFFC
    ctx->r12 = ctx->r11 & 0XFFFC;
    // 0x8005C394: div         $zero, $t1, $t4
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r12)));
    // 0x8005C398: bne         $t4, $zero, L_8005C3A4
    if (ctx->r12 != 0) {
        // 0x8005C39C: nop
    
            goto L_8005C3A4;
    }
    // 0x8005C39C: nop

    // 0x8005C3A0: break       7
    do_break(2147861408);
L_8005C3A4:
    // 0x8005C3A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005C3A8: bne         $t4, $at, L_8005C3BC
    if (ctx->r12 != ctx->r1) {
        // 0x8005C3AC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005C3BC;
    }
    // 0x8005C3AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005C3B0: bne         $t1, $at, L_8005C3BC
    if (ctx->r9 != ctx->r1) {
        // 0x8005C3B4: nop
    
            goto L_8005C3BC;
    }
    // 0x8005C3B4: nop

    // 0x8005C3B8: break       6
    do_break(2147861432);
L_8005C3BC:
    // 0x8005C3BC: mflo        $t5
    ctx->r13 = lo;
    // 0x8005C3C0: sw          $t5, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r13;
    // 0x8005C3C4: blez        $t5, L_8005DB88
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8005C3C8: nop
    
            goto L_8005DB88;
    }
    // 0x8005C3C8: nop

    // 0x8005C3CC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8005C3D0: lbu         $t6, 0x168($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X168);
    // 0x8005C3D4: lw          $t7, 0x194($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X194);
    // 0x8005C3D8: nop

    // 0x8005C3DC: bne         $t6, $t7, L_8005C444
    if (ctx->r14 != ctx->r15) {
        // 0x8005C3E0: nop
    
            goto L_8005C444;
    }
    // 0x8005C3E0: nop

    // 0x8005C3E4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8005C3E8: lbu         $t8, 0x16C($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X16C);
    // 0x8005C3EC: lw          $t9, 0x198($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X198);
    // 0x8005C3F0: nop

    // 0x8005C3F4: bne         $t8, $t9, L_8005C444
    if (ctx->r24 != ctx->r25) {
        // 0x8005C3F8: nop
    
            goto L_8005C444;
    }
    // 0x8005C3F8: nop

    // 0x8005C3FC: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8005C400: lbu         $t2, 0x170($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X170);
    // 0x8005C404: lw          $t3, 0x19C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X19C);
    // 0x8005C408: nop

    // 0x8005C40C: bne         $t2, $t3, L_8005C444
    if (ctx->r10 != ctx->r11) {
        // 0x8005C410: nop
    
            goto L_8005C444;
    }
    // 0x8005C410: nop

    // 0x8005C414: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8005C418: lbu         $t1, 0x174($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X174);
    // 0x8005C41C: lw          $t4, 0x1A0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1A0);
    // 0x8005C420: nop

    // 0x8005C424: bne         $t1, $t4, L_8005C444
    if (ctx->r9 != ctx->r12) {
        // 0x8005C428: nop
    
            goto L_8005C444;
    }
    // 0x8005C428: nop

    // 0x8005C42C: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8005C430: lh          $t5, 0x164($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X164);
    // 0x8005C434: lw          $t6, 0x15C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X15C);
    // 0x8005C438: nop

    // 0x8005C43C: beq         $t5, $t6, L_8005C5F0
    if (ctx->r13 == ctx->r14) {
        // 0x8005C440: nop
    
            goto L_8005C5F0;
    }
    // 0x8005C440: nop

L_8005C444:
    // 0x8005C444: lw          $t7, 0x1A0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1A0);
    // 0x8005C448: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005C44C: bne         $t7, $at, L_8005C4BC
    if (ctx->r15 != ctx->r1) {
        // 0x8005C450: nop
    
            goto L_8005C4BC;
    }
    // 0x8005C450: nop

    // 0x8005C454: lw          $t8, 0x194($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X194);
    // 0x8005C458: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005C45C: bne         $t8, $at, L_8005C4BC
    if (ctx->r24 != ctx->r1) {
        // 0x8005C460: nop
    
            goto L_8005C4BC;
    }
    // 0x8005C460: nop

    // 0x8005C464: lw          $t9, 0x198($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X198);
    // 0x8005C468: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005C46C: bne         $t9, $at, L_8005C4BC
    if (ctx->r25 != ctx->r1) {
        // 0x8005C470: nop
    
            goto L_8005C4BC;
    }
    // 0x8005C470: nop

    // 0x8005C474: lw          $t2, 0x19C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X19C);
    // 0x8005C478: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005C47C: bne         $t2, $at, L_8005C4BC
    if (ctx->r10 != ctx->r1) {
        // 0x8005C480: nop
    
            goto L_8005C4BC;
    }
    // 0x8005C480: nop

    // 0x8005C484: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005C488: lui         $t5, 0xFCFF
    ctx->r13 = S32(0XFCFF << 16);
    // 0x8005C48C: sw          $t3, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r11;
    // 0x8005C490: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005C494: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x8005C498: addiu       $t4, $t1, 0x8
    ctx->r12 = ADD32(ctx->r9, 0X8);
    // 0x8005C49C: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005C4A0: lw          $t6, 0x110($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X110);
    // 0x8005C4A4: lui         $t7, 0xFFFC
    ctx->r15 = S32(0XFFFC << 16);
    // 0x8005C4A8: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8005C4AC: lw          $t8, 0x110($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X110);
    // 0x8005C4B0: ori         $t7, $t7, 0xF279
    ctx->r15 = ctx->r15 | 0XF279;
    // 0x8005C4B4: b           L_8005C5C0
    // 0x8005C4B8: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
        goto L_8005C5C0;
    // 0x8005C4B8: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
L_8005C4BC:
    // 0x8005C4BC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8005C4C0: lbu         $t9, 0x168($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X168);
    // 0x8005C4C4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005C4C8: bne         $t9, $at, L_8005C50C
    if (ctx->r25 != ctx->r1) {
        // 0x8005C4CC: nop
    
            goto L_8005C50C;
    }
    // 0x8005C4CC: nop

    // 0x8005C4D0: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8005C4D4: lbu         $t2, 0x16C($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X16C);
    // 0x8005C4D8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005C4DC: bne         $t2, $at, L_8005C50C
    if (ctx->r10 != ctx->r1) {
        // 0x8005C4E0: nop
    
            goto L_8005C50C;
    }
    // 0x8005C4E0: nop

    // 0x8005C4E4: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8005C4E8: lbu         $t3, 0x170($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X170);
    // 0x8005C4EC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005C4F0: bne         $t3, $at, L_8005C50C
    if (ctx->r11 != ctx->r1) {
        // 0x8005C4F4: nop
    
            goto L_8005C50C;
    }
    // 0x8005C4F4: nop

    // 0x8005C4F8: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8005C4FC: lbu         $t1, 0x174($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X174);
    // 0x8005C500: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005C504: beq         $t1, $at, L_8005C524
    if (ctx->r9 == ctx->r1) {
        // 0x8005C508: nop
    
            goto L_8005C524;
    }
    // 0x8005C508: nop

L_8005C50C:
    // 0x8005C50C: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8005C510: lh          $t4, 0x164($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X164);
    // 0x8005C514: lw          $t5, 0x15C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X15C);
    // 0x8005C518: nop

    // 0x8005C51C: beq         $t4, $t5, L_8005C558
    if (ctx->r12 == ctx->r13) {
        // 0x8005C520: nop
    
            goto L_8005C558;
    }
    // 0x8005C520: nop

L_8005C524:
    // 0x8005C524: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005C528: lui         $t9, 0xFC11
    ctx->r25 = S32(0XFC11 << 16);
    // 0x8005C52C: sw          $t6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r14;
    // 0x8005C530: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005C534: ori         $t9, $t9, 0x9623
    ctx->r25 = ctx->r25 | 0X9623;
    // 0x8005C538: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8005C53C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005C540: lw          $t2, 0x10C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10C);
    // 0x8005C544: lui         $t3, 0xFF2F
    ctx->r11 = S32(0XFF2F << 16);
    // 0x8005C548: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x8005C54C: lw          $t1, 0x10C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10C);
    // 0x8005C550: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x8005C554: sw          $t3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r11;
L_8005C558:
    // 0x8005C558: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005C55C: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x8005C560: sw          $t4, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r12;
    // 0x8005C564: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005C568: nop

    // 0x8005C56C: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8005C570: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005C574: lw          $t8, 0x108($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X108);
    // 0x8005C578: nop

    // 0x8005C57C: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005C580: lw          $t1, 0x198($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X198);
    // 0x8005C584: lw          $t9, 0x194($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X194);
    // 0x8005C588: lw          $t7, 0x19C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X19C);
    // 0x8005C58C: andi        $t4, $t1, 0xFF
    ctx->r12 = ctx->r9 & 0XFF;
    // 0x8005C590: andi        $t2, $t9, 0xFF
    ctx->r10 = ctx->r25 & 0XFF;
    // 0x8005C594: sll         $t3, $t2, 24
    ctx->r11 = S32(ctx->r10 << 24);
    // 0x8005C598: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x8005C59C: lw          $t1, 0x1A0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1A0);
    // 0x8005C5A0: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8005C5A4: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8005C5A8: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x8005C5AC: lw          $t5, 0x108($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X108);
    // 0x8005C5B0: or          $t2, $t6, $t9
    ctx->r10 = ctx->r14 | ctx->r25;
    // 0x8005C5B4: andi        $t4, $t1, 0xFF
    ctx->r12 = ctx->r9 & 0XFF;
    // 0x8005C5B8: or          $t3, $t2, $t4
    ctx->r11 = ctx->r10 | ctx->r12;
    // 0x8005C5BC: sw          $t3, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r11;
L_8005C5C0:
    // 0x8005C5C0: lw          $t7, 0x194($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X194);
    // 0x8005C5C4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005C5C8: lw          $t8, 0x198($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X198);
    // 0x8005C5CC: sb          $t7, 0x168($at)
    MEM_B(0X168, ctx->r1) = ctx->r15;
    // 0x8005C5D0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005C5D4: lw          $t6, 0x19C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X19C);
    // 0x8005C5D8: sb          $t8, 0x16C($at)
    MEM_B(0X16C, ctx->r1) = ctx->r24;
    // 0x8005C5DC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005C5E0: lw          $t9, 0x1A0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1A0);
    // 0x8005C5E4: sb          $t6, 0x170($at)
    MEM_B(0X170, ctx->r1) = ctx->r14;
    // 0x8005C5E8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005C5EC: sb          $t9, 0x174($at)
    MEM_B(0X174, ctx->r1) = ctx->r25;
L_8005C5F0:
    // 0x8005C5F0: lw          $t1, 0x15C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X15C);
    // 0x8005C5F4: lw          $t2, 0x160($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X160);
    // 0x8005C5F8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005C5FC: sh          $t1, 0x164($at)
    MEM_H(0X164, ctx->r1) = ctx->r9;
    // 0x8005C600: beq         $t2, $zero, L_8005DB54
    if (ctx->r10 == 0) {
        // 0x8005C604: sw          $t2, 0x168($sp)
        MEM_W(0X168, ctx->r29) = ctx->r10;
            goto L_8005DB54;
    }
    // 0x8005C604: sw          $t2, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r10;
L_8005C608:
    // 0x8005C608: lw          $t4, 0x168($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X168);
    // 0x8005C60C: lw          $t3, 0x16C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X16C);
    // 0x8005C610: nop

    // 0x8005C614: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8005C618: beq         $at, $zero, L_8005D104
    if (ctx->r1 == 0) {
        // 0x8005C61C: nop
    
            goto L_8005D104;
    }
    // 0x8005C61C: nop

    // 0x8005C620: lw          $t0, 0x15C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X15C);
    // 0x8005C624: nop

    // 0x8005C628: beq         $t0, $zero, L_8005C650
    if (ctx->r8 == 0) {
        // 0x8005C62C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8005C650;
    }
    // 0x8005C62C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005C630: beq         $t0, $at, L_8005C89C
    if (ctx->r8 == ctx->r1) {
        // 0x8005C634: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8005C89C;
    }
    // 0x8005C634: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005C638: beq         $t0, $at, L_8005CAEC
    if (ctx->r8 == ctx->r1) {
        // 0x8005C63C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8005CAEC;
    }
    // 0x8005C63C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005C640: beq         $t0, $at, L_8005CD30
    if (ctx->r8 == ctx->r1) {
        // 0x8005C644: nop
    
            goto L_8005CD30;
    }
    // 0x8005C644: nop

    // 0x8005C648: b           L_8005CF70
    // 0x8005C64C: nop

        goto L_8005CF70;
    // 0x8005C64C: nop

L_8005C650:
    // 0x8005C650: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005C654: lui         $at, 0xFD10
    ctx->r1 = S32(0XFD10 << 16);
    // 0x8005C658: sw          $t5, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r13;
    // 0x8005C65C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005C660: addiu       $t3, $a1, 0x8
    ctx->r11 = ADD32(ctx->r5, 0X8);
    // 0x8005C664: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8005C668: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005C66C: lw          $t6, 0x164($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X164);
    // 0x8005C670: lw          $t4, 0x104($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X104);
    // 0x8005C674: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x8005C678: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x8005C67C: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x8005C680: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x8005C684: lw          $t5, 0x104($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X104);
    // 0x8005C688: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x8005C68C: sw          $t3, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r11;
    // 0x8005C690: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005C694: nop

    // 0x8005C698: sw          $t7, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r15;
    // 0x8005C69C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005C6A0: nop

    // 0x8005C6A4: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8005C6A8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005C6AC: lw          $t9, 0x164($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X164);
    // 0x8005C6B0: lw          $t8, 0x100($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X100);
    // 0x8005C6B4: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x8005C6B8: addiu       $t2, $t1, 0x7
    ctx->r10 = ADD32(ctx->r9, 0X7);
    // 0x8005C6BC: sra         $t4, $t2, 3
    ctx->r12 = S32(SIGNED(ctx->r10) >> 3);
    // 0x8005C6C0: andi        $t3, $t4, 0x1FF
    ctx->r11 = ctx->r12 & 0X1FF;
    // 0x8005C6C4: sll         $t5, $t3, 9
    ctx->r13 = S32(ctx->r11 << 9);
    // 0x8005C6C8: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x8005C6CC: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005C6D0: lw          $t9, 0x100($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X100);
    // 0x8005C6D4: lui         $t6, 0x708
    ctx->r14 = S32(0X708 << 16);
    // 0x8005C6D8: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x8005C6DC: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
    // 0x8005C6E0: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005C6E4: lui         $t3, 0xE600
    ctx->r11 = S32(0XE600 << 16);
    // 0x8005C6E8: sw          $t1, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r9;
    // 0x8005C6EC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005C6F0: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005C6F4: addiu       $t4, $t2, 0x8
    ctx->r12 = ADD32(ctx->r10, 0X8);
    // 0x8005C6F8: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005C6FC: lw          $t5, 0xFC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XFC);
    // 0x8005C700: nop

    // 0x8005C704: sw          $t3, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r11;
    // 0x8005C708: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x8005C70C: nop

    // 0x8005C710: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8005C714: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005C718: nop

    // 0x8005C71C: sw          $t8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r24;
    // 0x8005C720: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005C724: nop

    // 0x8005C728: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x8005C72C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005C730: lw          $t2, 0x168($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X168);
    // 0x8005C734: lw          $t1, 0x160($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X160);
    // 0x8005C738: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
    // 0x8005C73C: subu        $t4, $t1, $t2
    ctx->r12 = SUB32(ctx->r9, ctx->r10);
    // 0x8005C740: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x8005C744: andi        $t5, $t3, 0xFFF
    ctx->r13 = ctx->r11 & 0XFFF;
    // 0x8005C748: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x8005C74C: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005C750: lw          $t9, 0x168($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X168);
    // 0x8005C754: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    // 0x8005C758: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
    // 0x8005C75C: lw          $t2, 0x16C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X16C);
    // 0x8005C760: subu        $t1, $t6, $t9
    ctx->r9 = SUB32(ctx->r14, ctx->r25);
    // 0x8005C764: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x8005C768: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x8005C76C: addiu       $t3, $t4, -0x1
    ctx->r11 = ADD32(ctx->r12, -0X1);
    // 0x8005C770: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8005C774: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x8005C778: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8005C77C: andi        $t7, $t5, 0xFFF
    ctx->r15 = ctx->r13 & 0XFFF;
    // 0x8005C780: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x8005C784: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005C788: lw          $t5, 0xF8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF8);
    // 0x8005C78C: or          $t4, $t2, $at
    ctx->r12 = ctx->r10 | ctx->r1;
    // 0x8005C790: or          $t3, $t4, $t7
    ctx->r11 = ctx->r12 | ctx->r15;
    // 0x8005C794: sw          $t3, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r11;
    // 0x8005C798: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005C79C: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x8005C7A0: sw          $t8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r24;
    // 0x8005C7A4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005C7A8: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x8005C7AC: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x8005C7B0: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005C7B4: lw          $t2, 0xF4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF4);
    // 0x8005C7B8: nop

    // 0x8005C7BC: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8005C7C0: lw          $t4, 0xF4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XF4);
    // 0x8005C7C4: nop

    // 0x8005C7C8: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8005C7CC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005C7D0: nop

    // 0x8005C7D4: sw          $t7, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r15;
    // 0x8005C7D8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005C7DC: nop

    // 0x8005C7E0: addiu       $t5, $t3, 0x8
    ctx->r13 = ADD32(ctx->r11, 0X8);
    // 0x8005C7E4: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005C7E8: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
    // 0x8005C7EC: lw          $t3, 0xF0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF0);
    // 0x8005C7F0: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    // 0x8005C7F4: addiu       $t9, $t6, 0x7
    ctx->r25 = ADD32(ctx->r14, 0X7);
    // 0x8005C7F8: sra         $t1, $t9, 3
    ctx->r9 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8005C7FC: andi        $t2, $t1, 0x1FF
    ctx->r10 = ctx->r9 & 0X1FF;
    // 0x8005C800: sll         $t4, $t2, 9
    ctx->r12 = S32(ctx->r10 << 9);
    // 0x8005C804: or          $t7, $t4, $at
    ctx->r15 = ctx->r12 | ctx->r1;
    // 0x8005C808: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x8005C80C: lw          $t8, 0xF0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF0);
    // 0x8005C810: lui         $t5, 0x8
    ctx->r13 = S32(0X8 << 16);
    // 0x8005C814: ori         $t5, $t5, 0x200
    ctx->r13 = ctx->r13 | 0X200;
    // 0x8005C818: sw          $t5, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r13;
    // 0x8005C81C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005C820: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005C824: sw          $t6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r14;
    // 0x8005C828: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005C82C: nop

    // 0x8005C830: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x8005C834: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005C838: lw          $t4, 0x168($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X168);
    // 0x8005C83C: lw          $t2, 0x160($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X160);
    // 0x8005C840: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x8005C844: subu        $t7, $t2, $t4
    ctx->r15 = SUB32(ctx->r10, ctx->r12);
    // 0x8005C848: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x8005C84C: andi        $t5, $t3, 0xFFF
    ctx->r13 = ctx->r11 & 0XFFF;
    // 0x8005C850: or          $t8, $t5, $at
    ctx->r24 = ctx->r13 | ctx->r1;
    // 0x8005C854: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x8005C858: lw          $t1, 0x168($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X168);
    // 0x8005C85C: lw          $t9, 0x160($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X160);
    // 0x8005C860: lw          $t4, 0x16C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X16C);
    // 0x8005C864: lw          $t6, 0x164($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X164);
    // 0x8005C868: subu        $t2, $t9, $t1
    ctx->r10 = SUB32(ctx->r25, ctx->r9);
    // 0x8005C86C: addu        $t7, $t2, $t4
    ctx->r15 = ADD32(ctx->r10, ctx->r12);
    // 0x8005C870: addiu       $t3, $t7, -0x1
    ctx->r11 = ADD32(ctx->r15, -0X1);
    // 0x8005C874: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x8005C878: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8005C87C: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8005C880: andi        $t2, $t1, 0xFFF
    ctx->r10 = ctx->r9 & 0XFFF;
    // 0x8005C884: lw          $t3, 0xEC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XEC);
    // 0x8005C888: sll         $t4, $t2, 12
    ctx->r12 = S32(ctx->r10 << 12);
    // 0x8005C88C: andi        $t8, $t5, 0xFFF
    ctx->r24 = ctx->r13 & 0XFFF;
    // 0x8005C890: or          $t7, $t4, $t8
    ctx->r15 = ctx->r12 | ctx->r24;
    // 0x8005C894: b           L_8005CF70
    // 0x8005C898: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
        goto L_8005CF70;
    // 0x8005C898: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
L_8005C89C:
    // 0x8005C89C: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005C8A0: lui         $at, 0xFD88
    ctx->r1 = S32(0XFD88 << 16);
    // 0x8005C8A4: sw          $t5, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r13;
    // 0x8005C8A8: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005C8AC: addiu       $t5, $a1, 0x8
    ctx->r13 = ADD32(ctx->r5, 0X8);
    // 0x8005C8B0: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x8005C8B4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005C8B8: lw          $t1, 0x164($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X164);
    // 0x8005C8BC: lw          $t3, 0xE8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE8);
    // 0x8005C8C0: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8005C8C4: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x8005C8C8: andi        $t8, $t4, 0xFFF
    ctx->r24 = ctx->r12 & 0XFFF;
    // 0x8005C8CC: or          $t7, $t8, $at
    ctx->r15 = ctx->r24 | ctx->r1;
    // 0x8005C8D0: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x8005C8D4: lw          $t6, 0xE8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE8);
    // 0x8005C8D8: lui         $at, 0xF588
    ctx->r1 = S32(0XF588 << 16);
    // 0x8005C8DC: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8005C8E0: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005C8E4: nop

    // 0x8005C8E8: sw          $t9, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r25;
    // 0x8005C8EC: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005C8F0: nop

    // 0x8005C8F4: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8005C8F8: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005C8FC: lw          $t4, 0x164($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X164);
    // 0x8005C900: lw          $t1, 0xE4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE4);
    // 0x8005C904: sra         $t8, $t4, 1
    ctx->r24 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8005C908: addiu       $t7, $t8, 0x7
    ctx->r15 = ADD32(ctx->r24, 0X7);
    // 0x8005C90C: sra         $t3, $t7, 3
    ctx->r11 = S32(SIGNED(ctx->r15) >> 3);
    // 0x8005C910: andi        $t5, $t3, 0x1FF
    ctx->r13 = ctx->r11 & 0X1FF;
    // 0x8005C914: sll         $t6, $t5, 9
    ctx->r14 = S32(ctx->r13 << 9);
    // 0x8005C918: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x8005C91C: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x8005C920: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x8005C924: lui         $t2, 0x708
    ctx->r10 = S32(0X708 << 16);
    // 0x8005C928: ori         $t2, $t2, 0x200
    ctx->r10 = ctx->r10 | 0X200;
    // 0x8005C92C: sw          $t2, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r10;
    // 0x8005C930: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005C934: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x8005C938: sw          $t8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r24;
    // 0x8005C93C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005C940: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005C944: addiu       $t3, $t7, 0x8
    ctx->r11 = ADD32(ctx->r15, 0X8);
    // 0x8005C948: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005C94C: lw          $t6, 0xE0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE0);
    // 0x8005C950: nop

    // 0x8005C954: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8005C958: lw          $t9, 0xE0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE0);
    // 0x8005C95C: nop

    // 0x8005C960: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8005C964: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005C968: nop

    // 0x8005C96C: sw          $t1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r9;
    // 0x8005C970: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005C974: nop

    // 0x8005C978: addiu       $t4, $t2, 0x8
    ctx->r12 = ADD32(ctx->r10, 0X8);
    // 0x8005C97C: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005C980: lw          $t7, 0x168($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X168);
    // 0x8005C984: lw          $t8, 0x160($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X160);
    // 0x8005C988: lw          $t1, 0xDC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XDC);
    // 0x8005C98C: subu        $t3, $t8, $t7
    ctx->r11 = SUB32(ctx->r24, ctx->r15);
    // 0x8005C990: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8005C994: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x8005C998: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x8005C99C: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x8005C9A0: lw          $t4, 0x168($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X168);
    // 0x8005C9A4: lw          $t2, 0x160($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X160);
    // 0x8005C9A8: lw          $t1, 0x164($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X164);
    // 0x8005C9AC: lw          $t7, 0x16C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X16C);
    // 0x8005C9B0: subu        $t8, $t2, $t4
    ctx->r24 = SUB32(ctx->r10, ctx->r12);
    // 0x8005C9B4: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8005C9B8: addu        $t3, $t8, $t7
    ctx->r11 = ADD32(ctx->r24, ctx->r15);
    // 0x8005C9BC: addiu       $t5, $t3, -0x1
    ctx->r13 = ADD32(ctx->r11, -0X1);
    // 0x8005C9C0: sll         $t4, $t2, 1
    ctx->r12 = S32(ctx->r10 << 1);
    // 0x8005C9C4: andi        $t8, $t4, 0xFFF
    ctx->r24 = ctx->r12 & 0XFFF;
    // 0x8005C9C8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8005C9CC: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8005C9D0: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x8005C9D4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005C9D8: lw          $t6, 0xDC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XDC);
    // 0x8005C9DC: or          $t3, $t7, $at
    ctx->r11 = ctx->r15 | ctx->r1;
    // 0x8005C9E0: or          $t5, $t3, $t9
    ctx->r13 = ctx->r11 | ctx->r25;
    // 0x8005C9E4: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8005C9E8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005C9EC: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8005C9F0: sw          $t1, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r9;
    // 0x8005C9F4: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005C9F8: lui         $at, 0xF580
    ctx->r1 = S32(0XF580 << 16);
    // 0x8005C9FC: addiu       $t4, $t2, 0x8
    ctx->r12 = ADD32(ctx->r10, 0X8);
    // 0x8005CA00: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005CA04: lw          $t7, 0xD8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD8);
    // 0x8005CA08: nop

    // 0x8005CA0C: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x8005CA10: lw          $t3, 0xD8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD8);
    // 0x8005CA14: nop

    // 0x8005CA18: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8005CA1C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005CA20: nop

    // 0x8005CA24: sw          $t9, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r25;
    // 0x8005CA28: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005CA2C: nop

    // 0x8005CA30: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8005CA34: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005CA38: lw          $t1, 0x164($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X164);
    // 0x8005CA3C: lw          $t5, 0xD4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD4);
    // 0x8005CA40: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8005CA44: addiu       $t4, $t2, 0x7
    ctx->r12 = ADD32(ctx->r10, 0X7);
    // 0x8005CA48: sra         $t8, $t4, 3
    ctx->r24 = S32(SIGNED(ctx->r12) >> 3);
    // 0x8005CA4C: andi        $t7, $t8, 0x1FF
    ctx->r15 = ctx->r24 & 0X1FF;
    // 0x8005CA50: sll         $t3, $t7, 9
    ctx->r11 = S32(ctx->r15 << 9);
    // 0x8005CA54: or          $t9, $t3, $at
    ctx->r25 = ctx->r11 | ctx->r1;
    // 0x8005CA58: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x8005CA5C: lw          $t1, 0xD4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD4);
    // 0x8005CA60: lui         $t6, 0x8
    ctx->r14 = S32(0X8 << 16);
    // 0x8005CA64: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x8005CA68: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x8005CA6C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005CA70: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005CA74: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    // 0x8005CA78: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005CA7C: nop

    // 0x8005CA80: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x8005CA84: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005CA88: lw          $t3, 0x168($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X168);
    // 0x8005CA8C: lw          $t7, 0x160($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X160);
    // 0x8005CA90: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x8005CA94: subu        $t9, $t7, $t3
    ctx->r25 = SUB32(ctx->r15, ctx->r11);
    // 0x8005CA98: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x8005CA9C: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x8005CAA0: or          $t1, $t6, $at
    ctx->r9 = ctx->r14 | ctx->r1;
    // 0x8005CAA4: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8005CAA8: lw          $t8, 0x168($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X168);
    // 0x8005CAAC: lw          $t4, 0x160($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X160);
    // 0x8005CAB0: lw          $t3, 0x16C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X16C);
    // 0x8005CAB4: lw          $t2, 0x164($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X164);
    // 0x8005CAB8: subu        $t7, $t4, $t8
    ctx->r15 = SUB32(ctx->r12, ctx->r24);
    // 0x8005CABC: addu        $t9, $t7, $t3
    ctx->r25 = ADD32(ctx->r15, ctx->r11);
    // 0x8005CAC0: addiu       $t5, $t9, -0x1
    ctx->r13 = ADD32(ctx->r25, -0X1);
    // 0x8005CAC4: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x8005CAC8: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x8005CACC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8005CAD0: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8005CAD4: lw          $t5, 0xD0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD0);
    // 0x8005CAD8: sll         $t3, $t7, 12
    ctx->r11 = S32(ctx->r15 << 12);
    // 0x8005CADC: andi        $t1, $t6, 0xFFF
    ctx->r9 = ctx->r14 & 0XFFF;
    // 0x8005CAE0: or          $t9, $t3, $t1
    ctx->r25 = ctx->r11 | ctx->r9;
    // 0x8005CAE4: b           L_8005CF70
    // 0x8005CAE8: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
        goto L_8005CF70;
    // 0x8005CAE8: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
L_8005CAEC:
    // 0x8005CAEC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005CAF0: lui         $at, 0xFD68
    ctx->r1 = S32(0XFD68 << 16);
    // 0x8005CAF4: sw          $t6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r14;
    // 0x8005CAF8: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005CAFC: addiu       $t5, $a1, 0x8
    ctx->r13 = ADD32(ctx->r5, 0X8);
    // 0x8005CB00: addiu       $t4, $t2, 0x8
    ctx->r12 = ADD32(ctx->r10, 0X8);
    // 0x8005CB04: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005CB08: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
    // 0x8005CB0C: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    // 0x8005CB10: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x8005CB14: andi        $t3, $t7, 0xFFF
    ctx->r11 = ctx->r15 & 0XFFF;
    // 0x8005CB18: or          $t1, $t3, $at
    ctx->r9 = ctx->r11 | ctx->r1;
    // 0x8005CB1C: sw          $t1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r9;
    // 0x8005CB20: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x8005CB24: lui         $at, 0xF568
    ctx->r1 = S32(0XF568 << 16);
    // 0x8005CB28: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8005CB2C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005CB30: nop

    // 0x8005CB34: sw          $t2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r10;
    // 0x8005CB38: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005CB3C: nop

    // 0x8005CB40: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x8005CB44: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005CB48: lw          $t7, 0x164($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X164);
    // 0x8005CB4C: lw          $t2, 0xC8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC8);
    // 0x8005CB50: addiu       $t3, $t7, 0x7
    ctx->r11 = ADD32(ctx->r15, 0X7);
    // 0x8005CB54: sra         $t1, $t3, 3
    ctx->r9 = S32(SIGNED(ctx->r11) >> 3);
    // 0x8005CB58: andi        $t9, $t1, 0x1FF
    ctx->r25 = ctx->r9 & 0X1FF;
    // 0x8005CB5C: sll         $t5, $t9, 9
    ctx->r13 = S32(ctx->r25 << 9);
    // 0x8005CB60: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8005CB64: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x8005CB68: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x8005CB6C: lui         $t4, 0x708
    ctx->r12 = S32(0X708 << 16);
    // 0x8005CB70: ori         $t4, $t4, 0x200
    ctx->r12 = ctx->r12 | 0X200;
    // 0x8005CB74: sw          $t4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r12;
    // 0x8005CB78: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005CB7C: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x8005CB80: sw          $t7, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r15;
    // 0x8005CB84: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005CB88: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005CB8C: addiu       $t1, $t3, 0x8
    ctx->r9 = ADD32(ctx->r11, 0X8);
    // 0x8005CB90: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005CB94: lw          $t5, 0xC4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC4);
    // 0x8005CB98: nop

    // 0x8005CB9C: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x8005CBA0: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x8005CBA4: nop

    // 0x8005CBA8: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8005CBAC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005CBB0: nop

    // 0x8005CBB4: sw          $t2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r10;
    // 0x8005CBB8: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005CBBC: nop

    // 0x8005CBC0: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x8005CBC4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005CBC8: lw          $t3, 0x168($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X168);
    // 0x8005CBCC: lw          $t7, 0x160($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X160);
    // 0x8005CBD0: lw          $t2, 0xC0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC0);
    // 0x8005CBD4: subu        $t1, $t7, $t3
    ctx->r9 = SUB32(ctx->r15, ctx->r11);
    // 0x8005CBD8: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x8005CBDC: andi        $t5, $t9, 0xFFF
    ctx->r13 = ctx->r25 & 0XFFF;
    // 0x8005CBE0: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8005CBE4: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x8005CBE8: lw          $t8, 0x168($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X168);
    // 0x8005CBEC: lw          $t4, 0x160($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X160);
    // 0x8005CBF0: lw          $t2, 0x164($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X164);
    // 0x8005CBF4: lw          $t3, 0x16C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X16C);
    // 0x8005CBF8: subu        $t7, $t4, $t8
    ctx->r15 = SUB32(ctx->r12, ctx->r24);
    // 0x8005CBFC: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x8005CC00: addu        $t1, $t7, $t3
    ctx->r9 = ADD32(ctx->r15, ctx->r11);
    // 0x8005CC04: addiu       $t9, $t1, -0x1
    ctx->r25 = ADD32(ctx->r9, -0X1);
    // 0x8005CC08: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x8005CC0C: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8005CC10: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x8005CC14: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x8005CC18: sll         $t3, $t7, 12
    ctx->r11 = S32(ctx->r15 << 12);
    // 0x8005CC1C: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005CC20: lw          $t5, 0xC0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC0);
    // 0x8005CC24: or          $t1, $t3, $at
    ctx->r9 = ctx->r11 | ctx->r1;
    // 0x8005CC28: or          $t9, $t1, $t6
    ctx->r25 = ctx->r9 | ctx->r14;
    // 0x8005CC2C: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x8005CC30: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005CC34: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8005CC38: sw          $t2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r10;
    // 0x8005CC3C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005CC40: lui         $at, 0xF568
    ctx->r1 = S32(0XF568 << 16);
    // 0x8005CC44: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x8005CC48: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005CC4C: lw          $t3, 0xBC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XBC);
    // 0x8005CC50: nop

    // 0x8005CC54: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x8005CC58: lw          $t1, 0xBC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XBC);
    // 0x8005CC5C: nop

    // 0x8005CC60: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8005CC64: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005CC68: nop

    // 0x8005CC6C: sw          $t6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r14;
    // 0x8005CC70: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005CC74: nop

    // 0x8005CC78: addiu       $t5, $t9, 0x8
    ctx->r13 = ADD32(ctx->r25, 0X8);
    // 0x8005CC7C: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005CC80: lw          $t2, 0x164($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X164);
    // 0x8005CC84: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x8005CC88: addiu       $t4, $t2, 0x7
    ctx->r12 = ADD32(ctx->r10, 0X7);
    // 0x8005CC8C: sra         $t8, $t4, 3
    ctx->r24 = S32(SIGNED(ctx->r12) >> 3);
    // 0x8005CC90: andi        $t7, $t8, 0x1FF
    ctx->r15 = ctx->r24 & 0X1FF;
    // 0x8005CC94: sll         $t3, $t7, 9
    ctx->r11 = S32(ctx->r15 << 9);
    // 0x8005CC98: or          $t1, $t3, $at
    ctx->r9 = ctx->r11 | ctx->r1;
    // 0x8005CC9C: sw          $t1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r9;
    // 0x8005CCA0: lw          $t5, 0xB8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB8);
    // 0x8005CCA4: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x8005CCA8: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x8005CCAC: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x8005CCB0: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005CCB4: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005CCB8: sw          $t2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r10;
    // 0x8005CCBC: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005CCC0: nop

    // 0x8005CCC4: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x8005CCC8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005CCCC: lw          $t3, 0x168($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X168);
    // 0x8005CCD0: lw          $t7, 0x160($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X160);
    // 0x8005CCD4: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x8005CCD8: subu        $t1, $t7, $t3
    ctx->r9 = SUB32(ctx->r15, ctx->r11);
    // 0x8005CCDC: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8005CCE0: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8005CCE4: or          $t5, $t9, $at
    ctx->r13 = ctx->r25 | ctx->r1;
    // 0x8005CCE8: sw          $t5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r13;
    // 0x8005CCEC: lw          $t8, 0x168($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X168);
    // 0x8005CCF0: lw          $t4, 0x160($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X160);
    // 0x8005CCF4: lw          $t3, 0x16C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X16C);
    // 0x8005CCF8: lw          $t2, 0x164($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X164);
    // 0x8005CCFC: subu        $t7, $t4, $t8
    ctx->r15 = SUB32(ctx->r12, ctx->r24);
    // 0x8005CD00: addu        $t1, $t7, $t3
    ctx->r9 = ADD32(ctx->r15, ctx->r11);
    // 0x8005CD04: addiu       $t6, $t1, -0x1
    ctx->r14 = ADD32(ctx->r9, -0X1);
    // 0x8005CD08: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x8005CD0C: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x8005CD10: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8005CD14: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8005CD18: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x8005CD1C: sll         $t3, $t7, 12
    ctx->r11 = S32(ctx->r15 << 12);
    // 0x8005CD20: andi        $t5, $t9, 0xFFF
    ctx->r13 = ctx->r25 & 0XFFF;
    // 0x8005CD24: or          $t1, $t3, $t5
    ctx->r9 = ctx->r11 | ctx->r13;
    // 0x8005CD28: b           L_8005CF70
    // 0x8005CD2C: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
        goto L_8005CF70;
    // 0x8005CD2C: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
L_8005CD30:
    // 0x8005CD30: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005CD34: lui         $at, 0xFD48
    ctx->r1 = S32(0XFD48 << 16);
    // 0x8005CD38: sw          $t9, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r25;
    // 0x8005CD3C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005CD40: addiu       $t6, $a1, 0x8
    ctx->r14 = ADD32(ctx->r5, 0X8);
    // 0x8005CD44: addiu       $t4, $t2, 0x8
    ctx->r12 = ADD32(ctx->r10, 0X8);
    // 0x8005CD48: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005CD4C: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
    // 0x8005CD50: lw          $t1, 0xB0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB0);
    // 0x8005CD54: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x8005CD58: andi        $t3, $t7, 0xFFF
    ctx->r11 = ctx->r15 & 0XFFF;
    // 0x8005CD5C: or          $t5, $t3, $at
    ctx->r13 = ctx->r11 | ctx->r1;
    // 0x8005CD60: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x8005CD64: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
    // 0x8005CD68: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8005CD6C: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
    // 0x8005CD70: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005CD74: nop

    // 0x8005CD78: sw          $t2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r10;
    // 0x8005CD7C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005CD80: nop

    // 0x8005CD84: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x8005CD88: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005CD8C: lw          $t7, 0x164($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X164);
    // 0x8005CD90: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x8005CD94: addiu       $t3, $t7, 0x7
    ctx->r11 = ADD32(ctx->r15, 0X7);
    // 0x8005CD98: sra         $t5, $t3, 3
    ctx->r13 = S32(SIGNED(ctx->r11) >> 3);
    // 0x8005CD9C: andi        $t1, $t5, 0x1FF
    ctx->r9 = ctx->r13 & 0X1FF;
    // 0x8005CDA0: sll         $t6, $t1, 9
    ctx->r14 = S32(ctx->r9 << 9);
    // 0x8005CDA4: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x8005CDA8: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x8005CDAC: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x8005CDB0: lui         $t4, 0x708
    ctx->r12 = S32(0X708 << 16);
    // 0x8005CDB4: ori         $t4, $t4, 0x200
    ctx->r12 = ctx->r12 | 0X200;
    // 0x8005CDB8: sw          $t4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r12;
    // 0x8005CDBC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005CDC0: lui         $t1, 0xE600
    ctx->r9 = S32(0XE600 << 16);
    // 0x8005CDC4: sw          $t7, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r15;
    // 0x8005CDC8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005CDCC: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005CDD0: addiu       $t5, $t3, 0x8
    ctx->r13 = ADD32(ctx->r11, 0X8);
    // 0x8005CDD4: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005CDD8: lw          $t6, 0xA8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA8);
    // 0x8005CDDC: nop

    // 0x8005CDE0: sw          $t1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r9;
    // 0x8005CDE4: lw          $t9, 0xA8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA8);
    // 0x8005CDE8: nop

    // 0x8005CDEC: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8005CDF0: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005CDF4: nop

    // 0x8005CDF8: sw          $t2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r10;
    // 0x8005CDFC: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005CE00: nop

    // 0x8005CE04: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x8005CE08: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005CE0C: lw          $t3, 0x168($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X168);
    // 0x8005CE10: lw          $t7, 0x160($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X160);
    // 0x8005CE14: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x8005CE18: subu        $t5, $t7, $t3
    ctx->r13 = SUB32(ctx->r15, ctx->r11);
    // 0x8005CE1C: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x8005CE20: andi        $t6, $t1, 0xFFF
    ctx->r14 = ctx->r9 & 0XFFF;
    // 0x8005CE24: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x8005CE28: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x8005CE2C: lw          $t8, 0x168($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X168);
    // 0x8005CE30: lw          $t4, 0x160($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X160);
    // 0x8005CE34: lw          $t2, 0x164($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X164);
    // 0x8005CE38: lw          $t3, 0x16C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X16C);
    // 0x8005CE3C: subu        $t7, $t4, $t8
    ctx->r15 = SUB32(ctx->r12, ctx->r24);
    // 0x8005CE40: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x8005CE44: addu        $t5, $t7, $t3
    ctx->r13 = ADD32(ctx->r15, ctx->r11);
    // 0x8005CE48: addiu       $t1, $t5, -0x1
    ctx->r9 = ADD32(ctx->r13, -0X1);
    // 0x8005CE4C: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x8005CE50: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8005CE54: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8005CE58: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8005CE5C: sll         $t3, $t7, 12
    ctx->r11 = S32(ctx->r15 << 12);
    // 0x8005CE60: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005CE64: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x8005CE68: or          $t5, $t3, $at
    ctx->r13 = ctx->r11 | ctx->r1;
    // 0x8005CE6C: or          $t1, $t5, $t9
    ctx->r9 = ctx->r13 | ctx->r25;
    // 0x8005CE70: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
    // 0x8005CE74: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005CE78: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8005CE7C: sw          $t2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r10;
    // 0x8005CE80: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005CE84: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8005CE88: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x8005CE8C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005CE90: lw          $t3, 0xA0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA0);
    // 0x8005CE94: nop

    // 0x8005CE98: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x8005CE9C: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x8005CEA0: nop

    // 0x8005CEA4: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8005CEA8: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005CEAC: nop

    // 0x8005CEB0: sw          $t9, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r25;
    // 0x8005CEB4: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005CEB8: nop

    // 0x8005CEBC: addiu       $t6, $t1, 0x8
    ctx->r14 = ADD32(ctx->r9, 0X8);
    // 0x8005CEC0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005CEC4: lw          $t2, 0x164($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X164);
    // 0x8005CEC8: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x8005CECC: addiu       $t4, $t2, 0x7
    ctx->r12 = ADD32(ctx->r10, 0X7);
    // 0x8005CED0: sra         $t8, $t4, 3
    ctx->r24 = S32(SIGNED(ctx->r12) >> 3);
    // 0x8005CED4: andi        $t7, $t8, 0x1FF
    ctx->r15 = ctx->r24 & 0X1FF;
    // 0x8005CED8: sll         $t3, $t7, 9
    ctx->r11 = S32(ctx->r15 << 9);
    // 0x8005CEDC: or          $t5, $t3, $at
    ctx->r13 = ctx->r11 | ctx->r1;
    // 0x8005CEE0: sw          $t5, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r13;
    // 0x8005CEE4: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x8005CEE8: lui         $t1, 0x8
    ctx->r9 = S32(0X8 << 16);
    // 0x8005CEEC: ori         $t1, $t1, 0x200
    ctx->r9 = ctx->r9 | 0X200;
    // 0x8005CEF0: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
    // 0x8005CEF4: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005CEF8: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005CEFC: sw          $t2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r10;
    // 0x8005CF00: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005CF04: nop

    // 0x8005CF08: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x8005CF0C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005CF10: lw          $t3, 0x168($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X168);
    // 0x8005CF14: lw          $t7, 0x160($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X160);
    // 0x8005CF18: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x8005CF1C: subu        $t5, $t7, $t3
    ctx->r13 = SUB32(ctx->r15, ctx->r11);
    // 0x8005CF20: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x8005CF24: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x8005CF28: or          $t6, $t1, $at
    ctx->r14 = ctx->r9 | ctx->r1;
    // 0x8005CF2C: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x8005CF30: lw          $t8, 0x168($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X168);
    // 0x8005CF34: lw          $t4, 0x160($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X160);
    // 0x8005CF38: lw          $t3, 0x16C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X16C);
    // 0x8005CF3C: lw          $t2, 0x164($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X164);
    // 0x8005CF40: subu        $t7, $t4, $t8
    ctx->r15 = SUB32(ctx->r12, ctx->r24);
    // 0x8005CF44: addu        $t5, $t7, $t3
    ctx->r13 = ADD32(ctx->r15, ctx->r11);
    // 0x8005CF48: addiu       $t9, $t5, -0x1
    ctx->r25 = ADD32(ctx->r13, -0X1);
    // 0x8005CF4C: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x8005CF50: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x8005CF54: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8005CF58: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8005CF5C: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x8005CF60: sll         $t3, $t7, 12
    ctx->r11 = S32(ctx->r15 << 12);
    // 0x8005CF64: andi        $t6, $t1, 0xFFF
    ctx->r14 = ctx->r9 & 0XFFF;
    // 0x8005CF68: or          $t5, $t3, $t6
    ctx->r13 = ctx->r11 | ctx->r14;
    // 0x8005CF6C: sw          $t5, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r13;
L_8005CF70:
    // 0x8005CF70: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005CF74: lui         $t8, 0xF200
    ctx->r24 = S32(0XF200 << 16);
    // 0x8005CF78: sw          $t1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r9;
    // 0x8005CF7C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005CF80: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8005CF84: addiu       $t4, $t2, 0x8
    ctx->r12 = ADD32(ctx->r10, 0X8);
    // 0x8005CF88: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005CF8C: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x8005CF90: nop

    // 0x8005CF94: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x8005CF98: lw          $t3, 0x164($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X164);
    // 0x8005CF9C: lw          $t2, 0x16C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X16C);
    // 0x8005CFA0: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x8005CFA4: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x8005CFA8: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8005CFAC: addiu       $t8, $t4, -0x1
    ctx->r24 = ADD32(ctx->r12, -0X1);
    // 0x8005CFB0: andi        $t9, $t5, 0xFFF
    ctx->r25 = ctx->r13 & 0XFFF;
    // 0x8005CFB4: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x8005CFB8: sll         $t1, $t9, 12
    ctx->r9 = S32(ctx->r25 << 12);
    // 0x8005CFBC: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8005CFC0: or          $t3, $t1, $t7
    ctx->r11 = ctx->r9 | ctx->r15;
    // 0x8005CFC4: sw          $t3, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r11;
    // 0x8005CFC8: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005CFCC: nop

    // 0x8005CFD0: sw          $t5, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r13;
    // 0x8005CFD4: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005CFD8: nop

    // 0x8005CFDC: addiu       $t2, $t9, 0x8
    ctx->r10 = ADD32(ctx->r25, 0X8);
    // 0x8005CFE0: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005CFE4: lw          $t4, 0x18C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18C);
    // 0x8005CFE8: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
    // 0x8005CFEC: lw          $t2, 0x190($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X190);
    // 0x8005CFF0: addu        $t1, $t4, $t8
    ctx->r9 = ADD32(ctx->r12, ctx->r24);
    // 0x8005CFF4: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x8005CFF8: addiu       $t3, $t7, -0x1
    ctx->r11 = ADD32(ctx->r15, -0X1);
    // 0x8005CFFC: lw          $t4, 0x160($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X160);
    // 0x8005D000: andi        $t6, $t3, 0xFFF
    ctx->r14 = ctx->r11 & 0XFFF;
    // 0x8005D004: lw          $t1, 0x168($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X168);
    // 0x8005D008: lw          $t3, 0x16C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X16C);
    // 0x8005D00C: sll         $t5, $t6, 12
    ctx->r13 = S32(ctx->r14 << 12);
    // 0x8005D010: addu        $t8, $t2, $t4
    ctx->r24 = ADD32(ctx->r10, ctx->r12);
    // 0x8005D014: subu        $t7, $t8, $t1
    ctx->r15 = SUB32(ctx->r24, ctx->r9);
    // 0x8005D018: or          $t9, $t5, $at
    ctx->r25 = ctx->r13 | ctx->r1;
    // 0x8005D01C: addu        $t6, $t7, $t3
    ctx->r14 = ADD32(ctx->r15, ctx->r11);
    // 0x8005D020: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8005D024: addiu       $t2, $t5, -0x1
    ctx->r10 = ADD32(ctx->r13, -0X1);
    // 0x8005D028: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
    // 0x8005D02C: andi        $t4, $t2, 0xFFF
    ctx->r12 = ctx->r10 & 0XFFF;
    // 0x8005D030: or          $t8, $t9, $t4
    ctx->r24 = ctx->r25 | ctx->r12;
    // 0x8005D034: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x8005D038: lw          $t3, 0x160($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X160);
    // 0x8005D03C: lw          $t7, 0x190($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X190);
    // 0x8005D040: lw          $t5, 0x168($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X168);
    // 0x8005D044: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8005D048: addu        $t6, $t7, $t3
    ctx->r14 = ADD32(ctx->r15, ctx->r11);
    // 0x8005D04C: subu        $t2, $t6, $t5
    ctx->r10 = SUB32(ctx->r14, ctx->r13);
    // 0x8005D050: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x8005D054: andi        $t7, $t1, 0xFFF
    ctx->r15 = ctx->r9 & 0XFFF;
    // 0x8005D058: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x8005D05C: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
    // 0x8005D060: andi        $t4, $t9, 0xFFF
    ctx->r12 = ctx->r25 & 0XFFF;
    // 0x8005D064: sll         $t3, $t7, 12
    ctx->r11 = S32(ctx->r15 << 12);
    // 0x8005D068: or          $t6, $t3, $t4
    ctx->r14 = ctx->r11 | ctx->r12;
    // 0x8005D06C: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x8005D070: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005D074: lui         $t1, 0xE100
    ctx->r9 = S32(0XE100 << 16);
    // 0x8005D078: sw          $t2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r10;
    // 0x8005D07C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005D080: lui         $t2, 0xF100
    ctx->r10 = S32(0XF100 << 16);
    // 0x8005D084: addiu       $t8, $t9, 0x8
    ctx->r24 = ADD32(ctx->r25, 0X8);
    // 0x8005D088: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005D08C: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x8005D090: nop

    // 0x8005D094: sw          $t1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r9;
    // 0x8005D098: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x8005D09C: nop

    // 0x8005D0A0: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8005D0A4: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005D0A8: nop

    // 0x8005D0AC: sw          $t4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r12;
    // 0x8005D0B0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005D0B4: nop

    // 0x8005D0B8: addiu       $t5, $t6, 0x8
    ctx->r13 = ADD32(ctx->r14, 0X8);
    // 0x8005D0BC: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005D0C0: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x8005D0C4: nop

    // 0x8005D0C8: sw          $t2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r10;
    // 0x8005D0CC: lw          $t8, 0x1A4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1A4);
    // 0x8005D0D0: lw          $t3, 0x1A8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1A8);
    // 0x8005D0D4: andi        $t1, $t8, 0xFFFF
    ctx->r9 = ctx->r24 & 0XFFFF;
    // 0x8005D0D8: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x8005D0DC: sll         $t7, $t1, 16
    ctx->r15 = S32(ctx->r9 << 16);
    // 0x8005D0E0: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x8005D0E4: or          $t6, $t7, $t4
    ctx->r14 = ctx->r15 | ctx->r12;
    // 0x8005D0E8: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x8005D0EC: lw          $t2, 0x168($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X168);
    // 0x8005D0F0: lw          $t9, 0x16C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X16C);
    // 0x8005D0F4: nop

    // 0x8005D0F8: subu        $t8, $t2, $t9
    ctx->r24 = SUB32(ctx->r10, ctx->r25);
    // 0x8005D0FC: b           L_8005DB44
    // 0x8005D100: sw          $t8, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r24;
        goto L_8005DB44;
    // 0x8005D100: sw          $t8, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r24;
L_8005D104:
    // 0x8005D104: lw          $t0, 0x15C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X15C);
    // 0x8005D108: nop

    // 0x8005D10C: beq         $t0, $zero, L_8005D134
    if (ctx->r8 == 0) {
        // 0x8005D110: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8005D134;
    }
    // 0x8005D110: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005D114: beq         $t0, $at, L_8005D360
    if (ctx->r8 == ctx->r1) {
        // 0x8005D118: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8005D360;
    }
    // 0x8005D118: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005D11C: beq         $t0, $at, L_8005D590
    if (ctx->r8 == ctx->r1) {
        // 0x8005D120: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8005D590;
    }
    // 0x8005D120: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005D124: beq         $t0, $at, L_8005D7B4
    if (ctx->r8 == ctx->r1) {
        // 0x8005D128: nop
    
            goto L_8005D7B4;
    }
    // 0x8005D128: nop

    // 0x8005D12C: b           L_8005D9D4
    // 0x8005D130: nop

        goto L_8005D9D4;
    // 0x8005D130: nop

L_8005D134:
    // 0x8005D134: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005D138: lui         $at, 0xFD10
    ctx->r1 = S32(0XFD10 << 16);
    // 0x8005D13C: sw          $t1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r9;
    // 0x8005D140: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005D144: addiu       $t8, $a1, 0x8
    ctx->r24 = ADD32(ctx->r5, 0X8);
    // 0x8005D148: addiu       $t7, $t3, 0x8
    ctx->r15 = ADD32(ctx->r11, 0X8);
    // 0x8005D14C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005D150: lw          $t4, 0x164($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X164);
    // 0x8005D154: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x8005D158: addiu       $t6, $t4, -0x1
    ctx->r14 = ADD32(ctx->r12, -0X1);
    // 0x8005D15C: andi        $t5, $t6, 0xFFF
    ctx->r13 = ctx->r14 & 0XFFF;
    // 0x8005D160: or          $t2, $t5, $at
    ctx->r10 = ctx->r13 | ctx->r1;
    // 0x8005D164: sw          $t2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r10;
    // 0x8005D168: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8005D16C: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x8005D170: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x8005D174: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005D178: nop

    // 0x8005D17C: sw          $t3, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r11;
    // 0x8005D180: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005D184: nop

    // 0x8005D188: addiu       $t4, $t7, 0x8
    ctx->r12 = ADD32(ctx->r15, 0X8);
    // 0x8005D18C: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005D190: lw          $t6, 0x164($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X164);
    // 0x8005D194: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x8005D198: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x8005D19C: addiu       $t2, $t5, 0x7
    ctx->r10 = ADD32(ctx->r13, 0X7);
    // 0x8005D1A0: sra         $t9, $t2, 3
    ctx->r25 = S32(SIGNED(ctx->r10) >> 3);
    // 0x8005D1A4: andi        $t8, $t9, 0x1FF
    ctx->r24 = ctx->r25 & 0X1FF;
    // 0x8005D1A8: sll         $t1, $t8, 9
    ctx->r9 = S32(ctx->r24 << 9);
    // 0x8005D1AC: or          $t3, $t1, $at
    ctx->r11 = ctx->r9 | ctx->r1;
    // 0x8005D1B0: sw          $t3, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r11;
    // 0x8005D1B4: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x8005D1B8: lui         $t4, 0x708
    ctx->r12 = S32(0X708 << 16);
    // 0x8005D1BC: ori         $t4, $t4, 0x200
    ctx->r12 = ctx->r12 | 0X200;
    // 0x8005D1C0: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x8005D1C4: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005D1C8: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x8005D1CC: sw          $t5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r13;
    // 0x8005D1D0: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005D1D4: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005D1D8: addiu       $t9, $t2, 0x8
    ctx->r25 = ADD32(ctx->r10, 0X8);
    // 0x8005D1DC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005D1E0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8005D1E4: nop

    // 0x8005D1E8: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x8005D1EC: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8005D1F0: nop

    // 0x8005D1F4: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8005D1F8: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005D1FC: nop

    // 0x8005D200: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    // 0x8005D204: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005D208: nop

    // 0x8005D20C: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x8005D210: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005D214: lw          $t5, 0x160($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X160);
    // 0x8005D218: lw          $t2, 0x168($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X168);
    // 0x8005D21C: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x8005D220: subu        $t9, $t5, $t2
    ctx->r25 = SUB32(ctx->r13, ctx->r10);
    // 0x8005D224: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8005D228: andi        $t1, $t8, 0xFFF
    ctx->r9 = ctx->r24 & 0XFFF;
    // 0x8005D22C: or          $t3, $t1, $at
    ctx->r11 = ctx->r9 | ctx->r1;
    // 0x8005D230: sw          $t3, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r11;
    // 0x8005D234: lw          $t4, 0x164($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X164);
    // 0x8005D238: lw          $t1, 0x160($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X160);
    // 0x8005D23C: addiu       $t6, $t4, -0x1
    ctx->r14 = ADD32(ctx->r12, -0X1);
    // 0x8005D240: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8005D244: andi        $t2, $t5, 0xFFF
    ctx->r10 = ctx->r13 & 0XFFF;
    // 0x8005D248: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x8005D24C: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x8005D250: sll         $t9, $t2, 12
    ctx->r25 = S32(ctx->r10 << 12);
    // 0x8005D254: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005D258: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x8005D25C: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x8005D260: andi        $t4, $t7, 0xFFF
    ctx->r12 = ctx->r15 & 0XFFF;
    // 0x8005D264: or          $t6, $t8, $t4
    ctx->r14 = ctx->r24 | ctx->r12;
    // 0x8005D268: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x8005D26C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005D270: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x8005D274: sw          $t2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r10;
    // 0x8005D278: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005D27C: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x8005D280: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x8005D284: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005D288: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x8005D28C: nop

    // 0x8005D290: sw          $t3, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r11;
    // 0x8005D294: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x8005D298: nop

    // 0x8005D29C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8005D2A0: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005D2A4: nop

    // 0x8005D2A8: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x8005D2AC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005D2B0: nop

    // 0x8005D2B4: addiu       $t5, $t6, 0x8
    ctx->r13 = ADD32(ctx->r14, 0X8);
    // 0x8005D2B8: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005D2BC: lw          $t2, 0x164($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X164);
    // 0x8005D2C0: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x8005D2C4: sll         $t9, $t2, 1
    ctx->r25 = S32(ctx->r10 << 1);
    // 0x8005D2C8: addiu       $t1, $t9, 0x7
    ctx->r9 = ADD32(ctx->r25, 0X7);
    // 0x8005D2CC: sra         $t3, $t1, 3
    ctx->r11 = S32(SIGNED(ctx->r9) >> 3);
    // 0x8005D2D0: andi        $t7, $t3, 0x1FF
    ctx->r15 = ctx->r11 & 0X1FF;
    // 0x8005D2D4: sll         $t8, $t7, 9
    ctx->r24 = S32(ctx->r15 << 9);
    // 0x8005D2D8: or          $t4, $t8, $at
    ctx->r12 = ctx->r24 | ctx->r1;
    // 0x8005D2DC: sw          $t4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r12;
    // 0x8005D2E0: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x8005D2E4: lui         $t5, 0x8
    ctx->r13 = S32(0X8 << 16);
    // 0x8005D2E8: ori         $t5, $t5, 0x200
    ctx->r13 = ctx->r13 | 0X200;
    // 0x8005D2EC: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x8005D2F0: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005D2F4: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005D2F8: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x8005D2FC: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005D300: nop

    // 0x8005D304: addiu       $t3, $t1, 0x8
    ctx->r11 = ADD32(ctx->r9, 0X8);
    // 0x8005D308: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005D30C: lw          $t7, 0x160($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X160);
    // 0x8005D310: lw          $t8, 0x168($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X168);
    // 0x8005D314: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x8005D318: subu        $t4, $t7, $t8
    ctx->r12 = SUB32(ctx->r15, ctx->r24);
    // 0x8005D31C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8005D320: andi        $t5, $t6, 0xFFF
    ctx->r13 = ctx->r14 & 0XFFF;
    // 0x8005D324: or          $t2, $t5, $at
    ctx->r10 = ctx->r13 | ctx->r1;
    // 0x8005D328: sw          $t2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r10;
    // 0x8005D32C: lw          $t1, 0x164($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X164);
    // 0x8005D330: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    // 0x8005D334: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x8005D338: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x8005D33C: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x8005D340: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x8005D344: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8005D348: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x8005D34C: sll         $t4, $t8, 12
    ctx->r12 = S32(ctx->r24 << 12);
    // 0x8005D350: andi        $t9, $t2, 0xFFF
    ctx->r25 = ctx->r10 & 0XFFF;
    // 0x8005D354: or          $t1, $t4, $t9
    ctx->r9 = ctx->r12 | ctx->r25;
    // 0x8005D358: b           L_8005D9D4
    // 0x8005D35C: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
        goto L_8005D9D4;
    // 0x8005D35C: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
L_8005D360:
    // 0x8005D360: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005D364: lui         $at, 0xFD88
    ctx->r1 = S32(0XFD88 << 16);
    // 0x8005D368: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    // 0x8005D36C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005D370: addiu       $t7, $a1, 0x8
    ctx->r15 = ADD32(ctx->r5, 0X8);
    // 0x8005D374: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8005D378: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005D37C: lw          $t5, 0x164($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X164);
    // 0x8005D380: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x8005D384: sra         $t2, $t5, 1
    ctx->r10 = S32(SIGNED(ctx->r13) >> 1);
    // 0x8005D388: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x8005D38C: andi        $t9, $t4, 0xFFF
    ctx->r25 = ctx->r12 & 0XFFF;
    // 0x8005D390: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x8005D394: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x8005D398: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x8005D39C: lui         $at, 0xF588
    ctx->r1 = S32(0XF588 << 16);
    // 0x8005D3A0: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8005D3A4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005D3A8: nop

    // 0x8005D3AC: sw          $t6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r14;
    // 0x8005D3B0: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005D3B4: nop

    // 0x8005D3B8: addiu       $t2, $t5, 0x8
    ctx->r10 = ADD32(ctx->r13, 0X8);
    // 0x8005D3BC: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005D3C0: lw          $t4, 0x164($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X164);
    // 0x8005D3C4: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x8005D3C8: sra         $t9, $t4, 1
    ctx->r25 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8005D3CC: addiu       $t1, $t9, 0x7
    ctx->r9 = ADD32(ctx->r25, 0X7);
    // 0x8005D3D0: sra         $t3, $t1, 3
    ctx->r11 = S32(SIGNED(ctx->r9) >> 3);
    // 0x8005D3D4: andi        $t7, $t3, 0x1FF
    ctx->r15 = ctx->r11 & 0X1FF;
    // 0x8005D3D8: sll         $t8, $t7, 9
    ctx->r24 = S32(ctx->r15 << 9);
    // 0x8005D3DC: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x8005D3E0: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x8005D3E4: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x8005D3E8: lui         $t2, 0x708
    ctx->r10 = S32(0X708 << 16);
    // 0x8005D3EC: ori         $t2, $t2, 0x200
    ctx->r10 = ctx->r10 | 0X200;
    // 0x8005D3F0: sw          $t2, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r10;
    // 0x8005D3F4: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005D3F8: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x8005D3FC: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
    // 0x8005D400: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005D404: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005D408: addiu       $t3, $t1, 0x8
    ctx->r11 = ADD32(ctx->r9, 0X8);
    // 0x8005D40C: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005D410: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8005D414: nop

    // 0x8005D418: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005D41C: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8005D420: nop

    // 0x8005D424: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8005D428: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005D42C: nop

    // 0x8005D430: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x8005D434: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005D438: nop

    // 0x8005D43C: addiu       $t4, $t2, 0x8
    ctx->r12 = ADD32(ctx->r10, 0X8);
    // 0x8005D440: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005D444: lw          $t9, 0x160($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X160);
    // 0x8005D448: lw          $t1, 0x168($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X168);
    // 0x8005D44C: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x8005D450: subu        $t3, $t9, $t1
    ctx->r11 = SUB32(ctx->r25, ctx->r9);
    // 0x8005D454: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x8005D458: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8005D45C: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x8005D460: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x8005D464: lw          $t2, 0x164($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X164);
    // 0x8005D468: lw          $t8, 0x160($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X160);
    // 0x8005D46C: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x8005D470: sll         $t9, $t4, 1
    ctx->r25 = S32(ctx->r12 << 1);
    // 0x8005D474: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x8005D478: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x8005D47C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8005D480: sll         $t3, $t1, 12
    ctx->r11 = S32(ctx->r9 << 12);
    // 0x8005D484: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005D488: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8005D48C: or          $t7, $t3, $at
    ctx->r15 = ctx->r11 | ctx->r1;
    // 0x8005D490: andi        $t2, $t5, 0xFFF
    ctx->r10 = ctx->r13 & 0XFFF;
    // 0x8005D494: or          $t4, $t7, $t2
    ctx->r12 = ctx->r15 | ctx->r10;
    // 0x8005D498: sw          $t4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r12;
    // 0x8005D49C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005D4A0: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8005D4A4: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x8005D4A8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005D4AC: lui         $at, 0xF580
    ctx->r1 = S32(0XF580 << 16);
    // 0x8005D4B0: addiu       $t8, $t3, 0x8
    ctx->r24 = ADD32(ctx->r11, 0X8);
    // 0x8005D4B4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005D4B8: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x8005D4BC: nop

    // 0x8005D4C0: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x8005D4C4: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x8005D4C8: nop

    // 0x8005D4CC: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8005D4D0: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005D4D4: nop

    // 0x8005D4D8: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x8005D4DC: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005D4E0: nop

    // 0x8005D4E4: addiu       $t9, $t4, 0x8
    ctx->r25 = ADD32(ctx->r12, 0X8);
    // 0x8005D4E8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005D4EC: lw          $t1, 0x164($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X164);
    // 0x8005D4F0: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x8005D4F4: sra         $t3, $t1, 1
    ctx->r11 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8005D4F8: addiu       $t8, $t3, 0x7
    ctx->r24 = ADD32(ctx->r11, 0X7);
    // 0x8005D4FC: sra         $t6, $t8, 3
    ctx->r14 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8005D500: andi        $t5, $t6, 0x1FF
    ctx->r13 = ctx->r14 & 0X1FF;
    // 0x8005D504: sll         $t7, $t5, 9
    ctx->r15 = S32(ctx->r13 << 9);
    // 0x8005D508: or          $t2, $t7, $at
    ctx->r10 = ctx->r15 | ctx->r1;
    // 0x8005D50C: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x8005D510: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x8005D514: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x8005D518: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x8005D51C: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x8005D520: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005D524: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005D528: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x8005D52C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005D530: nop

    // 0x8005D534: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8005D538: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005D53C: lw          $t5, 0x160($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X160);
    // 0x8005D540: lw          $t7, 0x168($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X168);
    // 0x8005D544: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8005D548: subu        $t2, $t5, $t7
    ctx->r10 = SUB32(ctx->r13, ctx->r15);
    // 0x8005D54C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8005D550: andi        $t9, $t4, 0xFFF
    ctx->r25 = ctx->r12 & 0XFFF;
    // 0x8005D554: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x8005D558: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x8005D55C: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
    // 0x8005D560: lw          $t4, 0x160($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X160);
    // 0x8005D564: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x8005D568: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8005D56C: addiu       $t9, $t4, -0x1
    ctx->r25 = ADD32(ctx->r12, -0X1);
    // 0x8005D570: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8005D574: andi        $t7, $t5, 0xFFF
    ctx->r15 = ctx->r13 & 0XFFF;
    // 0x8005D578: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8005D57C: sll         $t2, $t7, 12
    ctx->r10 = S32(ctx->r15 << 12);
    // 0x8005D580: andi        $t3, $t1, 0xFFF
    ctx->r11 = ctx->r9 & 0XFFF;
    // 0x8005D584: or          $t8, $t2, $t3
    ctx->r24 = ctx->r10 | ctx->r11;
    // 0x8005D588: b           L_8005D9D4
    // 0x8005D58C: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
        goto L_8005D9D4;
    // 0x8005D58C: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
L_8005D590:
    // 0x8005D590: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005D594: lui         $at, 0xFD68
    ctx->r1 = S32(0XFD68 << 16);
    // 0x8005D598: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    // 0x8005D59C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005D5A0: addiu       $t6, $a1, 0x8
    ctx->r14 = ADD32(ctx->r5, 0X8);
    // 0x8005D5A4: addiu       $t4, $t7, 0x8
    ctx->r12 = ADD32(ctx->r15, 0X8);
    // 0x8005D5A8: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005D5AC: lw          $t9, 0x164($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X164);
    // 0x8005D5B0: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8005D5B4: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x8005D5B8: andi        $t2, $t1, 0xFFF
    ctx->r10 = ctx->r9 & 0XFFF;
    // 0x8005D5BC: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x8005D5C0: sw          $t3, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r11;
    // 0x8005D5C4: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x8005D5C8: lui         $at, 0xF568
    ctx->r1 = S32(0XF568 << 16);
    // 0x8005D5CC: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x8005D5D0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005D5D4: nop

    // 0x8005D5D8: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x8005D5DC: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005D5E0: nop

    // 0x8005D5E4: addiu       $t9, $t4, 0x8
    ctx->r25 = ADD32(ctx->r12, 0X8);
    // 0x8005D5E8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005D5EC: lw          $t1, 0x164($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X164);
    // 0x8005D5F0: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8005D5F4: addiu       $t2, $t1, 0x7
    ctx->r10 = ADD32(ctx->r9, 0X7);
    // 0x8005D5F8: sra         $t3, $t2, 3
    ctx->r11 = S32(SIGNED(ctx->r10) >> 3);
    // 0x8005D5FC: andi        $t8, $t3, 0x1FF
    ctx->r24 = ctx->r11 & 0X1FF;
    // 0x8005D600: sll         $t6, $t8, 9
    ctx->r14 = S32(ctx->r24 << 9);
    // 0x8005D604: or          $t5, $t6, $at
    ctx->r13 = ctx->r14 | ctx->r1;
    // 0x8005D608: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x8005D60C: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8005D610: lui         $t4, 0x708
    ctx->r12 = S32(0X708 << 16);
    // 0x8005D614: ori         $t4, $t4, 0x200
    ctx->r12 = ctx->r12 | 0X200;
    // 0x8005D618: sw          $t4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r12;
    // 0x8005D61C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005D620: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x8005D624: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x8005D628: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005D62C: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005D630: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8005D634: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005D638: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8005D63C: nop

    // 0x8005D640: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x8005D644: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8005D648: nop

    // 0x8005D64C: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8005D650: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005D654: nop

    // 0x8005D658: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x8005D65C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005D660: nop

    // 0x8005D664: addiu       $t9, $t4, 0x8
    ctx->r25 = ADD32(ctx->r12, 0X8);
    // 0x8005D668: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005D66C: lw          $t1, 0x160($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X160);
    // 0x8005D670: lw          $t2, 0x168($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X168);
    // 0x8005D674: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8005D678: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x8005D67C: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x8005D680: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x8005D684: or          $t5, $t6, $at
    ctx->r13 = ctx->r14 | ctx->r1;
    // 0x8005D688: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x8005D68C: lw          $t4, 0x164($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X164);
    // 0x8005D690: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    // 0x8005D694: addiu       $t9, $t4, -0x1
    ctx->r25 = ADD32(ctx->r12, -0X1);
    // 0x8005D698: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8005D69C: andi        $t2, $t1, 0xFFF
    ctx->r10 = ctx->r9 & 0XFFF;
    // 0x8005D6A0: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x8005D6A4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8005D6A8: sll         $t3, $t2, 12
    ctx->r11 = S32(ctx->r10 << 12);
    // 0x8005D6AC: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005D6B0: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x8005D6B4: or          $t8, $t3, $at
    ctx->r24 = ctx->r11 | ctx->r1;
    // 0x8005D6B8: andi        $t4, $t7, 0xFFF
    ctx->r12 = ctx->r15 & 0XFFF;
    // 0x8005D6BC: or          $t9, $t8, $t4
    ctx->r25 = ctx->r24 | ctx->r12;
    // 0x8005D6C0: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x8005D6C4: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005D6C8: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x8005D6CC: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x8005D6D0: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005D6D4: lui         $at, 0xF568
    ctx->r1 = S32(0XF568 << 16);
    // 0x8005D6D8: addiu       $t6, $t3, 0x8
    ctx->r14 = ADD32(ctx->r11, 0X8);
    // 0x8005D6DC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005D6E0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8005D6E4: nop

    // 0x8005D6E8: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x8005D6EC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8005D6F0: nop

    // 0x8005D6F4: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8005D6F8: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005D6FC: nop

    // 0x8005D700: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x8005D704: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005D708: nop

    // 0x8005D70C: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x8005D710: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005D714: lw          $t2, 0x164($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X164);
    // 0x8005D718: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8005D71C: addiu       $t3, $t2, 0x7
    ctx->r11 = ADD32(ctx->r10, 0X7);
    // 0x8005D720: sra         $t6, $t3, 3
    ctx->r14 = S32(SIGNED(ctx->r11) >> 3);
    // 0x8005D724: andi        $t5, $t6, 0x1FF
    ctx->r13 = ctx->r14 & 0X1FF;
    // 0x8005D728: sll         $t7, $t5, 9
    ctx->r15 = S32(ctx->r13 << 9);
    // 0x8005D72C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8005D730: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x8005D734: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8005D738: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x8005D73C: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x8005D740: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x8005D744: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005D748: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005D74C: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x8005D750: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005D754: nop

    // 0x8005D758: addiu       $t6, $t3, 0x8
    ctx->r14 = ADD32(ctx->r11, 0X8);
    // 0x8005D75C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005D760: lw          $t5, 0x160($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X160);
    // 0x8005D764: lw          $t7, 0x168($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X168);
    // 0x8005D768: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8005D76C: subu        $t8, $t5, $t7
    ctx->r24 = SUB32(ctx->r13, ctx->r15);
    // 0x8005D770: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x8005D774: andi        $t9, $t4, 0xFFF
    ctx->r25 = ctx->r12 & 0XFFF;
    // 0x8005D778: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x8005D77C: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8005D780: lw          $t3, 0x164($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X164);
    // 0x8005D784: lw          $t4, 0x160($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X160);
    // 0x8005D788: addiu       $t6, $t3, -0x1
    ctx->r14 = ADD32(ctx->r11, -0X1);
    // 0x8005D78C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8005D790: addiu       $t9, $t4, -0x1
    ctx->r25 = ADD32(ctx->r12, -0X1);
    // 0x8005D794: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8005D798: andi        $t7, $t5, 0xFFF
    ctx->r15 = ctx->r13 & 0XFFF;
    // 0x8005D79C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8005D7A0: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x8005D7A4: andi        $t2, $t1, 0xFFF
    ctx->r10 = ctx->r9 & 0XFFF;
    // 0x8005D7A8: or          $t3, $t8, $t2
    ctx->r11 = ctx->r24 | ctx->r10;
    // 0x8005D7AC: b           L_8005D9D4
    // 0x8005D7B0: sw          $t3, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r11;
        goto L_8005D9D4;
    // 0x8005D7B0: sw          $t3, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r11;
L_8005D7B4:
    // 0x8005D7B4: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005D7B8: lui         $at, 0xFD48
    ctx->r1 = S32(0XFD48 << 16);
    // 0x8005D7BC: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x8005D7C0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005D7C4: addiu       $t6, $a1, 0x8
    ctx->r14 = ADD32(ctx->r5, 0X8);
    // 0x8005D7C8: addiu       $t4, $t7, 0x8
    ctx->r12 = ADD32(ctx->r15, 0X8);
    // 0x8005D7CC: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005D7D0: lw          $t9, 0x164($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X164);
    // 0x8005D7D4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8005D7D8: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x8005D7DC: andi        $t8, $t1, 0xFFF
    ctx->r24 = ctx->r9 & 0XFFF;
    // 0x8005D7E0: or          $t2, $t8, $at
    ctx->r10 = ctx->r24 | ctx->r1;
    // 0x8005D7E4: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8005D7E8: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8005D7EC: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8005D7F0: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x8005D7F4: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005D7F8: nop

    // 0x8005D7FC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x8005D800: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005D804: nop

    // 0x8005D808: addiu       $t9, $t4, 0x8
    ctx->r25 = ADD32(ctx->r12, 0X8);
    // 0x8005D80C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005D810: lw          $t1, 0x164($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X164);
    // 0x8005D814: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8005D818: addiu       $t8, $t1, 0x7
    ctx->r24 = ADD32(ctx->r9, 0X7);
    // 0x8005D81C: sra         $t2, $t8, 3
    ctx->r10 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8005D820: andi        $t3, $t2, 0x1FF
    ctx->r11 = ctx->r10 & 0X1FF;
    // 0x8005D824: sll         $t6, $t3, 9
    ctx->r14 = S32(ctx->r11 << 9);
    // 0x8005D828: or          $t5, $t6, $at
    ctx->r13 = ctx->r14 | ctx->r1;
    // 0x8005D82C: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x8005D830: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8005D834: lui         $t4, 0x708
    ctx->r12 = S32(0X708 << 16);
    // 0x8005D838: ori         $t4, $t4, 0x200
    ctx->r12 = ctx->r12 | 0X200;
    // 0x8005D83C: sw          $t4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r12;
    // 0x8005D840: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005D844: lui         $t3, 0xE600
    ctx->r11 = S32(0XE600 << 16);
    // 0x8005D848: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x8005D84C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005D850: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8005D854: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x8005D858: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005D85C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8005D860: nop

    // 0x8005D864: sw          $t3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r11;
    // 0x8005D868: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8005D86C: nop

    // 0x8005D870: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8005D874: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005D878: nop

    // 0x8005D87C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8005D880: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005D884: nop

    // 0x8005D888: addiu       $t9, $t4, 0x8
    ctx->r25 = ADD32(ctx->r12, 0X8);
    // 0x8005D88C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005D890: lw          $t1, 0x160($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X160);
    // 0x8005D894: lw          $t8, 0x168($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X168);
    // 0x8005D898: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8005D89C: subu        $t2, $t1, $t8
    ctx->r10 = SUB32(ctx->r9, ctx->r24);
    // 0x8005D8A0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8005D8A4: andi        $t6, $t3, 0xFFF
    ctx->r14 = ctx->r11 & 0XFFF;
    // 0x8005D8A8: or          $t5, $t6, $at
    ctx->r13 = ctx->r14 | ctx->r1;
    // 0x8005D8AC: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x8005D8B0: lw          $t4, 0x164($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X164);
    // 0x8005D8B4: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    // 0x8005D8B8: addiu       $t9, $t4, -0x1
    ctx->r25 = ADD32(ctx->r12, -0X1);
    // 0x8005D8BC: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8005D8C0: andi        $t8, $t1, 0xFFF
    ctx->r24 = ctx->r9 & 0XFFF;
    // 0x8005D8C4: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x8005D8C8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8005D8CC: sll         $t2, $t8, 12
    ctx->r10 = S32(ctx->r24 << 12);
    // 0x8005D8D0: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005D8D4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8005D8D8: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x8005D8DC: andi        $t4, $t7, 0xFFF
    ctx->r12 = ctx->r15 & 0XFFF;
    // 0x8005D8E0: or          $t9, $t3, $t4
    ctx->r25 = ctx->r11 | ctx->r12;
    // 0x8005D8E4: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x8005D8E8: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005D8EC: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x8005D8F0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8005D8F4: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005D8F8: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8005D8FC: addiu       $t6, $t2, 0x8
    ctx->r14 = ADD32(ctx->r10, 0X8);
    // 0x8005D900: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005D904: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8005D908: nop

    // 0x8005D90C: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x8005D910: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8005D914: nop

    // 0x8005D918: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8005D91C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005D920: nop

    // 0x8005D924: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8005D928: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005D92C: nop

    // 0x8005D930: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x8005D934: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005D938: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
    // 0x8005D93C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8005D940: addiu       $t2, $t8, 0x7
    ctx->r10 = ADD32(ctx->r24, 0X7);
    // 0x8005D944: sra         $t6, $t2, 3
    ctx->r14 = S32(SIGNED(ctx->r10) >> 3);
    // 0x8005D948: andi        $t5, $t6, 0x1FF
    ctx->r13 = ctx->r14 & 0X1FF;
    // 0x8005D94C: sll         $t7, $t5, 9
    ctx->r15 = S32(ctx->r13 << 9);
    // 0x8005D950: or          $t3, $t7, $at
    ctx->r11 = ctx->r15 | ctx->r1;
    // 0x8005D954: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005D958: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8005D95C: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x8005D960: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x8005D964: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x8005D968: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005D96C: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8005D970: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8005D974: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005D978: nop

    // 0x8005D97C: addiu       $t6, $t2, 0x8
    ctx->r14 = ADD32(ctx->r10, 0X8);
    // 0x8005D980: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005D984: lw          $t5, 0x160($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X160);
    // 0x8005D988: lw          $t7, 0x168($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X168);
    // 0x8005D98C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8005D990: subu        $t3, $t5, $t7
    ctx->r11 = SUB32(ctx->r13, ctx->r15);
    // 0x8005D994: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8005D998: andi        $t9, $t4, 0xFFF
    ctx->r25 = ctx->r12 & 0XFFF;
    // 0x8005D99C: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x8005D9A0: sw          $t1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r9;
    // 0x8005D9A4: lw          $t2, 0x164($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X164);
    // 0x8005D9A8: lw          $t4, 0x160($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X160);
    // 0x8005D9AC: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x8005D9B0: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8005D9B4: addiu       $t9, $t4, -0x1
    ctx->r25 = ADD32(ctx->r12, -0X1);
    // 0x8005D9B8: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8005D9BC: andi        $t7, $t5, 0xFFF
    ctx->r15 = ctx->r13 & 0XFFF;
    // 0x8005D9C0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8005D9C4: sll         $t3, $t7, 12
    ctx->r11 = S32(ctx->r15 << 12);
    // 0x8005D9C8: andi        $t8, $t1, 0xFFF
    ctx->r24 = ctx->r9 & 0XFFF;
    // 0x8005D9CC: or          $t2, $t3, $t8
    ctx->r10 = ctx->r11 | ctx->r24;
    // 0x8005D9D0: sw          $t2, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r10;
L_8005D9D4:
    // 0x8005D9D4: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005D9D8: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x8005D9DC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8005D9E0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005D9E4: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8005D9E8: addiu       $t4, $t7, 0x8
    ctx->r12 = ADD32(ctx->r15, 0X8);
    // 0x8005D9EC: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005D9F0: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x8005D9F4: nop

    // 0x8005D9F8: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x8005D9FC: lw          $t3, 0x164($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X164);
    // 0x8005DA00: lw          $t7, 0x168($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X168);
    // 0x8005DA04: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x8005DA08: addiu       $t2, $t8, -0x1
    ctx->r10 = ADD32(ctx->r24, -0X1);
    // 0x8005DA0C: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x8005DA10: addiu       $t9, $t4, -0x1
    ctx->r25 = ADD32(ctx->r12, -0X1);
    // 0x8005DA14: andi        $t6, $t2, 0xFFF
    ctx->r14 = ctx->r10 & 0XFFF;
    // 0x8005DA18: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x8005DA1C: sll         $t5, $t6, 12
    ctx->r13 = S32(ctx->r14 << 12);
    // 0x8005DA20: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x8005DA24: or          $t3, $t5, $t1
    ctx->r11 = ctx->r13 | ctx->r9;
    // 0x8005DA28: sw          $t3, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r11;
    // 0x8005DA2C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005DA30: nop

    // 0x8005DA34: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8005DA38: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005DA3C: nop

    // 0x8005DA40: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005DA44: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005DA48: lw          $t4, 0x18C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18C);
    // 0x8005DA4C: lw          $t9, 0x164($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X164);
    // 0x8005DA50: lw          $t7, 0x190($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X190);
    // 0x8005DA54: addu        $t5, $t4, $t9
    ctx->r13 = ADD32(ctx->r12, ctx->r25);
    // 0x8005DA58: lw          $t4, 0x160($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X160);
    // 0x8005DA5C: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x8005DA60: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x8005DA64: andi        $t8, $t3, 0xFFF
    ctx->r24 = ctx->r11 & 0XFFF;
    // 0x8005DA68: addu        $t9, $t7, $t4
    ctx->r25 = ADD32(ctx->r15, ctx->r12);
    // 0x8005DA6C: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x8005DA70: sll         $t2, $t8, 12
    ctx->r10 = S32(ctx->r24 << 12);
    // 0x8005DA74: or          $t6, $t2, $at
    ctx->r14 = ctx->r10 | ctx->r1;
    // 0x8005DA78: addiu       $t1, $t5, -0x1
    ctx->r9 = ADD32(ctx->r13, -0X1);
    // 0x8005DA7C: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x8005DA80: andi        $t3, $t1, 0xFFF
    ctx->r11 = ctx->r9 & 0XFFF;
    // 0x8005DA84: or          $t8, $t6, $t3
    ctx->r24 = ctx->r14 | ctx->r11;
    // 0x8005DA88: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8005DA8C: lw          $t4, 0x160($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X160);
    // 0x8005DA90: lw          $t7, 0x190($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X190);
    // 0x8005DA94: lw          $t5, 0x168($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X168);
    // 0x8005DA98: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8005DA9C: addu        $t9, $t7, $t4
    ctx->r25 = ADD32(ctx->r15, ctx->r12);
    // 0x8005DAA0: subu        $t1, $t9, $t5
    ctx->r9 = SUB32(ctx->r25, ctx->r13);
    // 0x8005DAA4: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x8005DAA8: andi        $t7, $t2, 0xFFF
    ctx->r15 = ctx->r10 & 0XFFF;
    // 0x8005DAAC: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8005DAB0: lw          $t5, 0x10($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X10);
    // 0x8005DAB4: andi        $t3, $t6, 0xFFF
    ctx->r11 = ctx->r14 & 0XFFF;
    // 0x8005DAB8: sll         $t4, $t7, 12
    ctx->r12 = S32(ctx->r15 << 12);
    // 0x8005DABC: or          $t9, $t4, $t3
    ctx->r25 = ctx->r12 | ctx->r11;
    // 0x8005DAC0: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x8005DAC4: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005DAC8: lui         $t2, 0xE100
    ctx->r10 = S32(0XE100 << 16);
    // 0x8005DACC: sw          $t1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r9;
    // 0x8005DAD0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005DAD4: lui         $t1, 0xF100
    ctx->r9 = S32(0XF100 << 16);
    // 0x8005DAD8: addiu       $t8, $t6, 0x8
    ctx->r24 = ADD32(ctx->r14, 0X8);
    // 0x8005DADC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005DAE0: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x8005DAE4: nop

    // 0x8005DAE8: sw          $t2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r10;
    // 0x8005DAEC: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x8005DAF0: nop

    // 0x8005DAF4: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8005DAF8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005DAFC: nop

    // 0x8005DB00: sw          $t3, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r11;
    // 0x8005DB04: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005DB08: nop

    // 0x8005DB0C: addiu       $t5, $t9, 0x8
    ctx->r13 = ADD32(ctx->r25, 0X8);
    // 0x8005DB10: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005DB14: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x8005DB18: nop

    // 0x8005DB1C: sw          $t1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r9;
    // 0x8005DB20: lw          $t8, 0x1A4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1A4);
    // 0x8005DB24: lw          $t4, 0x1A8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1A8);
    // 0x8005DB28: andi        $t2, $t8, 0xFFFF
    ctx->r10 = ctx->r24 & 0XFFFF;
    // 0x8005DB2C: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x8005DB30: sll         $t7, $t2, 16
    ctx->r15 = S32(ctx->r10 << 16);
    // 0x8005DB34: andi        $t3, $t4, 0xFFFF
    ctx->r11 = ctx->r12 & 0XFFFF;
    // 0x8005DB38: or          $t9, $t7, $t3
    ctx->r25 = ctx->r15 | ctx->r11;
    // 0x8005DB3C: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x8005DB40: sw          $zero, 0x168($sp)
    MEM_W(0X168, ctx->r29) = 0;
L_8005DB44:
    // 0x8005DB44: lw          $t1, 0x168($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X168);
    // 0x8005DB48: nop

    // 0x8005DB4C: bne         $t1, $zero, L_8005C608
    if (ctx->r9 != 0) {
        // 0x8005DB50: nop
    
            goto L_8005C608;
    }
    // 0x8005DB50: nop

L_8005DB54:
    // 0x8005DB54: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005DB58: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x8005DB5C: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8005DB60: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005DB64: nop

    // 0x8005DB68: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x8005DB6C: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005DB70: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8005DB74: nop

    // 0x8005DB78: sw          $t4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r12;
    // 0x8005DB7C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8005DB80: nop

    // 0x8005DB84: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
L_8005DB88:
    // 0x8005DB88: jr          $ra
    // 0x8005DB8C: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
    return;
    // 0x8005DB8C: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
;}
RECOMP_FUNC void func_8005DB90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005DB90: beq         $a1, $zero, L_8005EBFC
    if (ctx->r5 == 0) {
        // 0x8005DB94: addiu       $sp, $sp, -0xE8
        ctx->r29 = ADD32(ctx->r29, -0XE8);
            goto L_8005EBFC;
    }
    // 0x8005DB94: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x8005DB98: lw          $t6, 0x108($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X108);
    // 0x8005DB9C: nop

    // 0x8005DBA0: beq         $t6, $zero, L_8005EBFC
    if (ctx->r14 == 0) {
        // 0x8005DBA4: nop
    
            goto L_8005EBFC;
    }
    // 0x8005DBA4: nop

    // 0x8005DBA8: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x8005DBAC: nop

    // 0x8005DBB0: sw          $t7, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r15;
    // 0x8005DBB4: lhu         $t8, 0x2($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X2);
    // 0x8005DBB8: lw          $t1, 0xE4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE4);
    // 0x8005DBBC: sw          $t8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r24;
    // 0x8005DBC0: lhu         $t9, 0x4($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X4);
    // 0x8005DBC4: blez        $t1, L_8005EBFC
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8005DBC8: sw          $t9, 0xDC($sp)
        MEM_W(0XDC, ctx->r29) = ctx->r25;
            goto L_8005EBFC;
    }
    // 0x8005DBC8: sw          $t9, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r25;
    // 0x8005DBCC: lw          $t2, 0xE0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE0);
    // 0x8005DBD0: nop

    // 0x8005DBD4: blez        $t2, L_8005EBFC
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8005DBD8: nop
    
            goto L_8005EBFC;
    }
    // 0x8005DBD8: nop

    // 0x8005DBDC: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8005DBE0: lh          $t3, 0x164($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X164);
    // 0x8005DBE4: lw          $t4, 0xDC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XDC);
    // 0x8005DBE8: nop

    // 0x8005DBEC: beq         $t3, $t4, L_8005DE58
    if (ctx->r11 == ctx->r12) {
        // 0x8005DBF0: nop
    
            goto L_8005DE58;
    }
    // 0x8005DBF0: nop

    // 0x8005DBF4: or          $t0, $t4, $zero
    ctx->r8 = ctx->r12 | 0;
    // 0x8005DBF8: beq         $t0, $zero, L_8005DC20
    if (ctx->r8 == 0) {
        // 0x8005DBFC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8005DC20;
    }
    // 0x8005DBFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005DC00: beq         $t0, $at, L_8005DCA0
    if (ctx->r8 == ctx->r1) {
        // 0x8005DC04: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8005DCA0;
    }
    // 0x8005DC04: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005DC08: beq         $t0, $at, L_8005DC60
    if (ctx->r8 == ctx->r1) {
        // 0x8005DC0C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8005DC60;
    }
    // 0x8005DC0C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005DC10: beq         $t0, $at, L_8005DCE0
    if (ctx->r8 == ctx->r1) {
        // 0x8005DC14: nop
    
            goto L_8005DCE0;
    }
    // 0x8005DC14: nop

    // 0x8005DC18: b           L_8005EBFC
    // 0x8005DC1C: nop

        goto L_8005EBFC;
    // 0x8005DC1C: nop

L_8005DC20:
    // 0x8005DC20: addiu       $t5, $zero, 0x800
    ctx->r13 = ADD32(0, 0X800);
    // 0x8005DC24: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005DC28: sw          $t5, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r13;
    // 0x8005DC2C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005DC30: lui         $t9, 0xE300
    ctx->r25 = S32(0XE300 << 16);
    // 0x8005DC34: sw          $t6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r14;
    // 0x8005DC38: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005DC3C: ori         $t9, $t9, 0x1001
    ctx->r25 = ctx->r25 | 0X1001;
    // 0x8005DC40: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8005DC44: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005DC48: lw          $t1, 0xD0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD0);
    // 0x8005DC4C: nop

    // 0x8005DC50: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x8005DC54: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x8005DC58: b           L_8005DFA0
    // 0x8005DC5C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
        goto L_8005DFA0;
    // 0x8005DC5C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
L_8005DC60:
    // 0x8005DC60: addiu       $t3, $zero, 0x800
    ctx->r11 = ADD32(0, 0X800);
    // 0x8005DC64: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005DC68: sw          $t3, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r11;
    // 0x8005DC6C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005DC70: lui         $t7, 0xE300
    ctx->r15 = S32(0XE300 << 16);
    // 0x8005DC74: sw          $t4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r12;
    // 0x8005DC78: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005DC7C: ori         $t7, $t7, 0x1001
    ctx->r15 = ctx->r15 | 0X1001;
    // 0x8005DC80: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8005DC84: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005DC88: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x8005DC8C: nop

    // 0x8005DC90: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005DC94: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    // 0x8005DC98: b           L_8005DFA0
    // 0x8005DC9C: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
        goto L_8005DFA0;
    // 0x8005DC9C: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
L_8005DCA0:
    // 0x8005DCA0: addiu       $t1, $zero, 0x1000
    ctx->r9 = ADD32(0, 0X1000);
    // 0x8005DCA4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005DCA8: sw          $t1, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r9;
    // 0x8005DCAC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005DCB0: lui         $t5, 0xE300
    ctx->r13 = S32(0XE300 << 16);
    // 0x8005DCB4: sw          $t2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r10;
    // 0x8005DCB8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005DCBC: ori         $t5, $t5, 0x1001
    ctx->r13 = ctx->r13 | 0X1001;
    // 0x8005DCC0: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005DCC4: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005DCC8: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x8005DCCC: nop

    // 0x8005DCD0: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8005DCD4: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x8005DCD8: b           L_8005DFA0
    // 0x8005DCDC: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
        goto L_8005DFA0;
    // 0x8005DCDC: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
L_8005DCE0:
    // 0x8005DCE0: addiu       $t8, $zero, 0x800
    ctx->r24 = ADD32(0, 0X800);
    // 0x8005DCE4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005DCE8: sw          $t8, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r24;
    // 0x8005DCEC: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005DCF0: lui         $t3, 0xE300
    ctx->r11 = S32(0XE300 << 16);
    // 0x8005DCF4: sw          $t9, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r25;
    // 0x8005DCF8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005DCFC: ori         $t3, $t3, 0x1001
    ctx->r11 = ctx->r11 | 0X1001;
    // 0x8005DD00: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8005DD04: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005DD08: lw          $t4, 0xC4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC4);
    // 0x8005DD0C: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x8005DD10: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005DD14: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x8005DD18: lui         $t1, 0xFD10
    ctx->r9 = S32(0XFD10 << 16);
    // 0x8005DD1C: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8005DD20: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005DD24: nop

    // 0x8005DD28: sw          $t7, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r15;
    // 0x8005DD2C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005DD30: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x8005DD34: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8005DD38: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005DD3C: lw          $t2, 0xC0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC0);
    // 0x8005DD40: nop

    // 0x8005DD44: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8005DD48: lw          $t3, 0xC0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC0);
    // 0x8005DD4C: nop

    // 0x8005DD50: sw          $a2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r6;
    // 0x8005DD54: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005DD58: nop

    // 0x8005DD5C: sw          $t4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r12;
    // 0x8005DD60: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005DD64: lui         $t4, 0xF500
    ctx->r12 = S32(0XF500 << 16);
    // 0x8005DD68: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8005DD6C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005DD70: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x8005DD74: ori         $t4, $t4, 0x100
    ctx->r12 = ctx->r12 | 0X100;
    // 0x8005DD78: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005DD7C: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x8005DD80: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x8005DD84: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8005DD88: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005DD8C: nop

    // 0x8005DD90: sw          $t1, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r9;
    // 0x8005DD94: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005DD98: nop

    // 0x8005DD9C: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8005DDA0: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005DDA4: lw          $t5, 0xB8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB8);
    // 0x8005DDA8: lui         $t2, 0xE600
    ctx->r10 = S32(0XE600 << 16);
    // 0x8005DDAC: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005DDB0: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x8005DDB4: nop

    // 0x8005DDB8: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8005DDBC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005DDC0: nop

    // 0x8005DDC4: sw          $t8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r24;
    // 0x8005DDC8: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005DDCC: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x8005DDD0: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x8005DDD4: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005DDD8: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x8005DDDC: lui         $t1, 0x73F
    ctx->r9 = S32(0X73F << 16);
    // 0x8005DDE0: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8005DDE4: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x8005DDE8: ori         $t1, $t1, 0xC000
    ctx->r9 = ctx->r9 | 0XC000;
    // 0x8005DDEC: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8005DDF0: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005DDF4: nop

    // 0x8005DDF8: sw          $t5, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r13;
    // 0x8005DDFC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005DE00: nop

    // 0x8005DE04: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005DE08: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005DE0C: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
    // 0x8005DE10: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8005DE14: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005DE18: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x8005DE1C: nop

    // 0x8005DE20: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8005DE24: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005DE28: nop

    // 0x8005DE2C: sw          $t3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r11;
    // 0x8005DE30: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005DE34: nop

    // 0x8005DE38: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8005DE3C: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005DE40: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x8005DE44: nop

    // 0x8005DE48: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8005DE4C: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x8005DE50: b           L_8005DFA0
    // 0x8005DE54: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
        goto L_8005DFA0;
    // 0x8005DE54: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
L_8005DE58:
    // 0x8005DE58: lw          $t9, 0xDC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XDC);
    // 0x8005DE5C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005DE60: bne         $t9, $at, L_8005DFA0
    if (ctx->r25 != ctx->r1) {
        // 0x8005DE64: nop
    
            goto L_8005DFA0;
    }
    // 0x8005DE64: nop

    // 0x8005DE68: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005DE6C: lui         $t4, 0xFD10
    ctx->r12 = S32(0XFD10 << 16);
    // 0x8005DE70: sw          $t1, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r9;
    // 0x8005DE74: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005DE78: lui         $t1, 0xE800
    ctx->r9 = S32(0XE800 << 16);
    // 0x8005DE7C: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8005DE80: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005DE84: lw          $t5, 0xA8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA8);
    // 0x8005DE88: nop

    // 0x8005DE8C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005DE90: lw          $t6, 0xA8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA8);
    // 0x8005DE94: nop

    // 0x8005DE98: sw          $a2, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r6;
    // 0x8005DE9C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005DEA0: nop

    // 0x8005DEA4: sw          $t7, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r15;
    // 0x8005DEA8: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005DEAC: lui         $t7, 0xF500
    ctx->r15 = S32(0XF500 << 16);
    // 0x8005DEB0: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8005DEB4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005DEB8: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x8005DEBC: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x8005DEC0: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8005DEC4: lw          $t3, 0xA4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA4);
    // 0x8005DEC8: lui         $t9, 0x700
    ctx->r25 = S32(0X700 << 16);
    // 0x8005DECC: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8005DED0: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005DED4: nop

    // 0x8005DED8: sw          $t4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r12;
    // 0x8005DEDC: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005DEE0: nop

    // 0x8005DEE4: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8005DEE8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005DEEC: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x8005DEF0: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x8005DEF4: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005DEF8: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x8005DEFC: nop

    // 0x8005DF00: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x8005DF04: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005DF08: nop

    // 0x8005DF0C: sw          $t2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r10;
    // 0x8005DF10: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005DF14: lui         $t2, 0xF000
    ctx->r10 = S32(0XF000 << 16);
    // 0x8005DF18: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005DF1C: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005DF20: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x8005DF24: lui         $t4, 0x73F
    ctx->r12 = S32(0X73F << 16);
    // 0x8005DF28: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8005DF2C: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x8005DF30: ori         $t4, $t4, 0xC000
    ctx->r12 = ctx->r12 | 0XC000;
    // 0x8005DF34: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8005DF38: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005DF3C: nop

    // 0x8005DF40: sw          $t8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r24;
    // 0x8005DF44: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005DF48: nop

    // 0x8005DF4C: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x8005DF50: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005DF54: lw          $t3, 0x98($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X98);
    // 0x8005DF58: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8005DF5C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8005DF60: lw          $t5, 0x98($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X98);
    // 0x8005DF64: nop

    // 0x8005DF68: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8005DF6C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005DF70: nop

    // 0x8005DF74: sw          $t6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r14;
    // 0x8005DF78: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005DF7C: nop

    // 0x8005DF80: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8005DF84: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005DF88: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x8005DF8C: nop

    // 0x8005DF90: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x8005DF94: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    // 0x8005DF98: nop

    // 0x8005DF9C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
L_8005DFA0:
    // 0x8005DFA0: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8005DFA4: lbu         $t3, 0x168($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X168);
    // 0x8005DFA8: lw          $t4, 0xFC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XFC);
    // 0x8005DFAC: nop

    // 0x8005DFB0: bne         $t3, $t4, L_8005E018
    if (ctx->r11 != ctx->r12) {
        // 0x8005DFB4: nop
    
            goto L_8005E018;
    }
    // 0x8005DFB4: nop

    // 0x8005DFB8: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8005DFBC: lbu         $t5, 0x16C($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X16C);
    // 0x8005DFC0: lw          $t6, 0x100($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X100);
    // 0x8005DFC4: nop

    // 0x8005DFC8: bne         $t5, $t6, L_8005E018
    if (ctx->r13 != ctx->r14) {
        // 0x8005DFCC: nop
    
            goto L_8005E018;
    }
    // 0x8005DFCC: nop

    // 0x8005DFD0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8005DFD4: lbu         $t7, 0x170($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X170);
    // 0x8005DFD8: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
    // 0x8005DFDC: nop

    // 0x8005DFE0: bne         $t7, $t8, L_8005E018
    if (ctx->r15 != ctx->r24) {
        // 0x8005DFE4: nop
    
            goto L_8005E018;
    }
    // 0x8005DFE4: nop

    // 0x8005DFE8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8005DFEC: lbu         $t9, 0x174($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X174);
    // 0x8005DFF0: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x8005DFF4: nop

    // 0x8005DFF8: bne         $t9, $t1, L_8005E018
    if (ctx->r25 != ctx->r9) {
        // 0x8005DFFC: nop
    
            goto L_8005E018;
    }
    // 0x8005DFFC: nop

    // 0x8005E000: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8005E004: lh          $t2, 0x164($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X164);
    // 0x8005E008: lw          $t3, 0xDC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XDC);
    // 0x8005E00C: nop

    // 0x8005E010: beq         $t2, $t3, L_8005E1C4
    if (ctx->r10 == ctx->r11) {
        // 0x8005E014: nop
    
            goto L_8005E1C4;
    }
    // 0x8005E014: nop

L_8005E018:
    // 0x8005E018: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x8005E01C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005E020: bne         $t4, $at, L_8005E090
    if (ctx->r12 != ctx->r1) {
        // 0x8005E024: nop
    
            goto L_8005E090;
    }
    // 0x8005E024: nop

    // 0x8005E028: lw          $t5, 0xFC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XFC);
    // 0x8005E02C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005E030: bne         $t5, $at, L_8005E090
    if (ctx->r13 != ctx->r1) {
        // 0x8005E034: nop
    
            goto L_8005E090;
    }
    // 0x8005E034: nop

    // 0x8005E038: lw          $t6, 0x100($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X100);
    // 0x8005E03C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005E040: bne         $t6, $at, L_8005E090
    if (ctx->r14 != ctx->r1) {
        // 0x8005E044: nop
    
            goto L_8005E090;
    }
    // 0x8005E044: nop

    // 0x8005E048: lw          $t7, 0x104($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X104);
    // 0x8005E04C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005E050: bne         $t7, $at, L_8005E090
    if (ctx->r15 != ctx->r1) {
        // 0x8005E054: nop
    
            goto L_8005E090;
    }
    // 0x8005E054: nop

    // 0x8005E058: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005E05C: lui         $t2, 0xFCFF
    ctx->r10 = S32(0XFCFF << 16);
    // 0x8005E060: sw          $t8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r24;
    // 0x8005E064: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005E068: ori         $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 | 0XFFFF;
    // 0x8005E06C: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x8005E070: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005E074: lw          $t3, 0x90($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X90);
    // 0x8005E078: lui         $t4, 0xFFFC
    ctx->r12 = S32(0XFFFC << 16);
    // 0x8005E07C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8005E080: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
    // 0x8005E084: ori         $t4, $t4, 0xF279
    ctx->r12 = ctx->r12 | 0XF279;
    // 0x8005E088: b           L_8005E194
    // 0x8005E08C: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
        goto L_8005E194;
    // 0x8005E08C: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
L_8005E090:
    // 0x8005E090: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8005E094: lbu         $t6, 0x168($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X168);
    // 0x8005E098: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005E09C: bne         $t6, $at, L_8005E0E0
    if (ctx->r14 != ctx->r1) {
        // 0x8005E0A0: nop
    
            goto L_8005E0E0;
    }
    // 0x8005E0A0: nop

    // 0x8005E0A4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8005E0A8: lbu         $t7, 0x16C($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X16C);
    // 0x8005E0AC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005E0B0: bne         $t7, $at, L_8005E0E0
    if (ctx->r15 != ctx->r1) {
        // 0x8005E0B4: nop
    
            goto L_8005E0E0;
    }
    // 0x8005E0B4: nop

    // 0x8005E0B8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8005E0BC: lbu         $t8, 0x170($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X170);
    // 0x8005E0C0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005E0C4: bne         $t8, $at, L_8005E0E0
    if (ctx->r24 != ctx->r1) {
        // 0x8005E0C8: nop
    
            goto L_8005E0E0;
    }
    // 0x8005E0C8: nop

    // 0x8005E0CC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8005E0D0: lbu         $t9, 0x174($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X174);
    // 0x8005E0D4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005E0D8: beq         $t9, $at, L_8005E0F8
    if (ctx->r25 == ctx->r1) {
        // 0x8005E0DC: nop
    
            goto L_8005E0F8;
    }
    // 0x8005E0DC: nop

L_8005E0E0:
    // 0x8005E0E0: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8005E0E4: lh          $t1, 0x164($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X164);
    // 0x8005E0E8: lw          $t2, 0xDC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XDC);
    // 0x8005E0EC: nop

    // 0x8005E0F0: beq         $t1, $t2, L_8005E12C
    if (ctx->r9 == ctx->r10) {
        // 0x8005E0F4: nop
    
            goto L_8005E12C;
    }
    // 0x8005E0F4: nop

L_8005E0F8:
    // 0x8005E0F8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005E0FC: lui         $t6, 0xFC11
    ctx->r14 = S32(0XFC11 << 16);
    // 0x8005E100: sw          $t3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r11;
    // 0x8005E104: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005E108: ori         $t6, $t6, 0x9623
    ctx->r14 = ctx->r14 | 0X9623;
    // 0x8005E10C: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8005E110: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005E114: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x8005E118: lui         $t8, 0xFF2F
    ctx->r24 = S32(0XFF2F << 16);
    // 0x8005E11C: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8005E120: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x8005E124: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x8005E128: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
L_8005E12C:
    // 0x8005E12C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005E130: lui         $t4, 0xFA00
    ctx->r12 = S32(0XFA00 << 16);
    // 0x8005E134: sw          $t1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r9;
    // 0x8005E138: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005E13C: nop

    // 0x8005E140: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8005E144: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005E148: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x8005E14C: nop

    // 0x8005E150: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005E154: lw          $t9, 0x100($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X100);
    // 0x8005E158: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x8005E15C: lw          $t4, 0x104($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X104);
    // 0x8005E160: andi        $t1, $t9, 0xFF
    ctx->r9 = ctx->r25 & 0XFF;
    // 0x8005E164: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8005E168: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x8005E16C: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x8005E170: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x8005E174: or          $t3, $t8, $t2
    ctx->r11 = ctx->r24 | ctx->r10;
    // 0x8005E178: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x8005E17C: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x8005E180: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x8005E184: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x8005E188: andi        $t1, $t9, 0xFF
    ctx->r9 = ctx->r25 & 0XFF;
    // 0x8005E18C: or          $t8, $t7, $t1
    ctx->r24 = ctx->r15 | ctx->r9;
    // 0x8005E190: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
L_8005E194:
    // 0x8005E194: lw          $t4, 0xFC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XFC);
    // 0x8005E198: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005E19C: lw          $t5, 0x100($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X100);
    // 0x8005E1A0: sb          $t4, 0x168($at)
    MEM_B(0X168, ctx->r1) = ctx->r12;
    // 0x8005E1A4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005E1A8: lw          $t3, 0x104($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X104);
    // 0x8005E1AC: sb          $t5, 0x16C($at)
    MEM_B(0X16C, ctx->r1) = ctx->r13;
    // 0x8005E1B0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005E1B4: lw          $t6, 0x108($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X108);
    // 0x8005E1B8: sb          $t3, 0x170($at)
    MEM_B(0X170, ctx->r1) = ctx->r11;
    // 0x8005E1BC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005E1C0: sb          $t6, 0x174($at)
    MEM_B(0X174, ctx->r1) = ctx->r14;
L_8005E1C4:
    // 0x8005E1C4: lw          $t9, 0xDC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XDC);
    // 0x8005E1C8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005E1CC: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x8005E1D0: beq         $t0, $zero, L_8005E1FC
    if (ctx->r8 == 0) {
        // 0x8005E1D4: sh          $t9, 0x164($at)
        MEM_H(0X164, ctx->r1) = ctx->r25;
            goto L_8005E1FC;
    }
    // 0x8005E1D4: sh          $t9, 0x164($at)
    MEM_H(0X164, ctx->r1) = ctx->r25;
    // 0x8005E1D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005E1DC: beq         $t0, $at, L_8005E3FC
    if (ctx->r8 == ctx->r1) {
        // 0x8005E1E0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8005E3FC;
    }
    // 0x8005E1E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005E1E4: beq         $t0, $at, L_8005E600
    if (ctx->r8 == ctx->r1) {
        // 0x8005E1E8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8005E600;
    }
    // 0x8005E1E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005E1EC: beq         $t0, $at, L_8005E7F8
    if (ctx->r8 == ctx->r1) {
        // 0x8005E1F0: nop
    
            goto L_8005E7F8;
    }
    // 0x8005E1F0: nop

    // 0x8005E1F4: b           L_8005E9EC
    // 0x8005E1F8: nop

        goto L_8005E9EC;
    // 0x8005E1F8: nop

L_8005E1FC:
    // 0x8005E1FC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005E200: lui         $at, 0xFD10
    ctx->r1 = S32(0XFD10 << 16);
    // 0x8005E204: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
    // 0x8005E208: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005E20C: addiu       $t9, $a1, 0x8
    ctx->r25 = ADD32(ctx->r5, 0X8);
    // 0x8005E210: addiu       $t8, $t1, 0x8
    ctx->r24 = ADD32(ctx->r9, 0X8);
    // 0x8005E214: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005E218: lw          $t2, 0xE4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E21C: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x8005E220: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x8005E224: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x8005E228: or          $t3, $t5, $at
    ctx->r11 = ctx->r13 | ctx->r1;
    // 0x8005E22C: sw          $t3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r11;
    // 0x8005E230: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x8005E234: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x8005E238: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x8005E23C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005E240: nop

    // 0x8005E244: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    // 0x8005E248: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005E24C: nop

    // 0x8005E250: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x8005E254: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005E258: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E25C: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x8005E260: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8005E264: addiu       $t3, $t5, 0x7
    ctx->r11 = ADD32(ctx->r13, 0X7);
    // 0x8005E268: sra         $t6, $t3, 3
    ctx->r14 = S32(SIGNED(ctx->r11) >> 3);
    // 0x8005E26C: andi        $t9, $t6, 0x1FF
    ctx->r25 = ctx->r14 & 0X1FF;
    // 0x8005E270: sll         $t7, $t9, 9
    ctx->r15 = S32(ctx->r25 << 9);
    // 0x8005E274: or          $t1, $t7, $at
    ctx->r9 = ctx->r15 | ctx->r1;
    // 0x8005E278: sw          $t1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r9;
    // 0x8005E27C: lw          $t4, 0x80($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X80);
    // 0x8005E280: lui         $t2, 0x708
    ctx->r10 = S32(0X708 << 16);
    // 0x8005E284: ori         $t2, $t2, 0x200
    ctx->r10 = ctx->r10 | 0X200;
    // 0x8005E288: sw          $t2, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r10;
    // 0x8005E28C: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005E290: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x8005E294: sw          $t5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r13;
    // 0x8005E298: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005E29C: lui         $t5, 0xF400
    ctx->r13 = S32(0XF400 << 16);
    // 0x8005E2A0: addiu       $t6, $t3, 0x8
    ctx->r14 = ADD32(ctx->r11, 0X8);
    // 0x8005E2A4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005E2A8: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8005E2AC: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005E2B0: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x8005E2B4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8005E2B8: nop

    // 0x8005E2BC: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8005E2C0: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005E2C4: nop

    // 0x8005E2C8: sw          $t8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r24;
    // 0x8005E2CC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005E2D0: nop

    // 0x8005E2D4: addiu       $t4, $t2, 0x8
    ctx->r12 = ADD32(ctx->r10, 0X8);
    // 0x8005E2D8: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005E2DC: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x8005E2E0: nop

    // 0x8005E2E4: sw          $t5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r13;
    // 0x8005E2E8: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E2EC: lw          $t4, 0xE0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE0);
    // 0x8005E2F0: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x8005E2F4: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8005E2F8: andi        $t1, $t7, 0xFFF
    ctx->r9 = ctx->r15 & 0XFFF;
    // 0x8005E2FC: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x8005E300: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x8005E304: sll         $t8, $t1, 12
    ctx->r24 = S32(ctx->r9 << 12);
    // 0x8005E308: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x8005E30C: or          $t2, $t8, $at
    ctx->r10 = ctx->r24 | ctx->r1;
    // 0x8005E310: andi        $t6, $t3, 0xFFF
    ctx->r14 = ctx->r11 & 0XFFF;
    // 0x8005E314: or          $t9, $t2, $t6
    ctx->r25 = ctx->r10 | ctx->r14;
    // 0x8005E318: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x8005E31C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005E320: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x8005E324: sw          $t1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r9;
    // 0x8005E328: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005E32C: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x8005E330: addiu       $t4, $t8, 0x8
    ctx->r12 = ADD32(ctx->r24, 0X8);
    // 0x8005E334: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005E338: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x8005E33C: nop

    // 0x8005E340: sw          $t5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r13;
    // 0x8005E344: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x8005E348: nop

    // 0x8005E34C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8005E350: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005E354: nop

    // 0x8005E358: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x8005E35C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005E360: nop

    // 0x8005E364: addiu       $t7, $t9, 0x8
    ctx->r15 = ADD32(ctx->r25, 0X8);
    // 0x8005E368: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005E36C: lw          $t1, 0xE4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E370: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x8005E374: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x8005E378: addiu       $t4, $t8, 0x7
    ctx->r12 = ADD32(ctx->r24, 0X7);
    // 0x8005E37C: sra         $t5, $t4, 3
    ctx->r13 = S32(SIGNED(ctx->r12) >> 3);
    // 0x8005E380: andi        $t3, $t5, 0x1FF
    ctx->r11 = ctx->r13 & 0X1FF;
    // 0x8005E384: sll         $t2, $t3, 9
    ctx->r10 = S32(ctx->r11 << 9);
    // 0x8005E388: or          $t6, $t2, $at
    ctx->r14 = ctx->r10 | ctx->r1;
    // 0x8005E38C: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8005E390: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x8005E394: lui         $t7, 0x8
    ctx->r15 = S32(0X8 << 16);
    // 0x8005E398: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x8005E39C: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x8005E3A0: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005E3A4: lui         $t3, 0xF200
    ctx->r11 = S32(0XF200 << 16);
    // 0x8005E3A8: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x8005E3AC: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005E3B0: nop

    // 0x8005E3B4: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8005E3B8: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005E3BC: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x8005E3C0: nop

    // 0x8005E3C4: sw          $t3, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r11;
    // 0x8005E3C8: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E3CC: lw          $t4, 0xE0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE0);
    // 0x8005E3D0: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x8005E3D4: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8005E3D8: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x8005E3DC: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x8005E3E0: andi        $t1, $t7, 0xFFF
    ctx->r9 = ctx->r15 & 0XFFF;
    // 0x8005E3E4: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x8005E3E8: sll         $t8, $t1, 12
    ctx->r24 = S32(ctx->r9 << 12);
    // 0x8005E3EC: andi        $t2, $t3, 0xFFF
    ctx->r10 = ctx->r11 & 0XFFF;
    // 0x8005E3F0: or          $t6, $t8, $t2
    ctx->r14 = ctx->r24 | ctx->r10;
    // 0x8005E3F4: b           L_8005E9EC
    // 0x8005E3F8: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
        goto L_8005E9EC;
    // 0x8005E3F8: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
L_8005E3FC:
    // 0x8005E3FC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005E400: lui         $at, 0xFD88
    ctx->r1 = S32(0XFD88 << 16);
    // 0x8005E404: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    // 0x8005E408: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005E40C: addiu       $t7, $a1, 0x8
    ctx->r15 = ADD32(ctx->r5, 0X8);
    // 0x8005E410: addiu       $t4, $t1, 0x8
    ctx->r12 = ADD32(ctx->r9, 0X8);
    // 0x8005E414: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005E418: lw          $t5, 0xE4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E41C: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x8005E420: sra         $t3, $t5, 1
    ctx->r11 = S32(SIGNED(ctx->r13) >> 1);
    // 0x8005E424: addiu       $t8, $t3, -0x1
    ctx->r24 = ADD32(ctx->r11, -0X1);
    // 0x8005E428: andi        $t2, $t8, 0xFFF
    ctx->r10 = ctx->r24 & 0XFFF;
    // 0x8005E42C: or          $t6, $t2, $at
    ctx->r14 = ctx->r10 | ctx->r1;
    // 0x8005E430: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8005E434: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x8005E438: lui         $at, 0xF588
    ctx->r1 = S32(0XF588 << 16);
    // 0x8005E43C: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x8005E440: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005E444: nop

    // 0x8005E448: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
    // 0x8005E44C: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005E450: nop

    // 0x8005E454: addiu       $t3, $t5, 0x8
    ctx->r11 = ADD32(ctx->r13, 0X8);
    // 0x8005E458: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005E45C: lw          $t8, 0xE4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E460: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x8005E464: sra         $t2, $t8, 1
    ctx->r10 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8005E468: addiu       $t6, $t2, 0x7
    ctx->r14 = ADD32(ctx->r10, 0X7);
    // 0x8005E46C: sra         $t9, $t6, 3
    ctx->r25 = S32(SIGNED(ctx->r14) >> 3);
    // 0x8005E470: andi        $t7, $t9, 0x1FF
    ctx->r15 = ctx->r25 & 0X1FF;
    // 0x8005E474: sll         $t1, $t7, 9
    ctx->r9 = S32(ctx->r15 << 9);
    // 0x8005E478: or          $t4, $t1, $at
    ctx->r12 = ctx->r9 | ctx->r1;
    // 0x8005E47C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005E480: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x8005E484: lui         $t3, 0x708
    ctx->r11 = S32(0X708 << 16);
    // 0x8005E488: ori         $t3, $t3, 0x200
    ctx->r11 = ctx->r11 | 0X200;
    // 0x8005E48C: sw          $t3, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r11;
    // 0x8005E490: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005E494: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x8005E498: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x8005E49C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005E4A0: lui         $t2, 0xF400
    ctx->r10 = S32(0XF400 << 16);
    // 0x8005E4A4: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x8005E4A8: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8005E4AC: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x8005E4B0: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005E4B4: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x8005E4B8: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x8005E4BC: nop

    // 0x8005E4C0: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8005E4C4: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005E4C8: nop

    // 0x8005E4CC: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x8005E4D0: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005E4D4: nop

    // 0x8005E4D8: addiu       $t8, $t3, 0x8
    ctx->r24 = ADD32(ctx->r11, 0X8);
    // 0x8005E4DC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005E4E0: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x8005E4E4: nop

    // 0x8005E4E8: sw          $t2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r10;
    // 0x8005E4EC: lw          $t9, 0xE4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E4F0: lw          $t8, 0xE0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE0);
    // 0x8005E4F4: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x8005E4F8: sll         $t1, $t7, 1
    ctx->r9 = S32(ctx->r15 << 1);
    // 0x8005E4FC: andi        $t4, $t1, 0xFFF
    ctx->r12 = ctx->r9 & 0XFFF;
    // 0x8005E500: addiu       $t2, $t8, -0x1
    ctx->r10 = ADD32(ctx->r24, -0X1);
    // 0x8005E504: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x8005E508: sll         $t5, $t4, 12
    ctx->r13 = S32(ctx->r12 << 12);
    // 0x8005E50C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8005E510: or          $t3, $t5, $at
    ctx->r11 = ctx->r13 | ctx->r1;
    // 0x8005E514: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8005E518: or          $t7, $t3, $t9
    ctx->r15 = ctx->r11 | ctx->r25;
    // 0x8005E51C: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x8005E520: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005E524: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x8005E528: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
    // 0x8005E52C: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005E530: lui         $at, 0xF580
    ctx->r1 = S32(0XF580 << 16);
    // 0x8005E534: addiu       $t8, $t5, 0x8
    ctx->r24 = ADD32(ctx->r13, 0X8);
    // 0x8005E538: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005E53C: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x8005E540: nop

    // 0x8005E544: sw          $t2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r10;
    // 0x8005E548: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x8005E54C: nop

    // 0x8005E550: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8005E554: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005E558: nop

    // 0x8005E55C: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x8005E560: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005E564: nop

    // 0x8005E568: addiu       $t1, $t7, 0x8
    ctx->r9 = ADD32(ctx->r15, 0X8);
    // 0x8005E56C: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005E570: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E574: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8005E578: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8005E57C: addiu       $t8, $t5, 0x7
    ctx->r24 = ADD32(ctx->r13, 0X7);
    // 0x8005E580: sra         $t2, $t8, 3
    ctx->r10 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8005E584: andi        $t6, $t2, 0x1FF
    ctx->r14 = ctx->r10 & 0X1FF;
    // 0x8005E588: sll         $t3, $t6, 9
    ctx->r11 = S32(ctx->r14 << 9);
    // 0x8005E58C: or          $t9, $t3, $at
    ctx->r25 = ctx->r11 | ctx->r1;
    // 0x8005E590: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x8005E594: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x8005E598: lui         $t1, 0x8
    ctx->r9 = S32(0X8 << 16);
    // 0x8005E59C: ori         $t1, $t1, 0x200
    ctx->r9 = ctx->r9 | 0X200;
    // 0x8005E5A0: sw          $t1, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r9;
    // 0x8005E5A4: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005E5A8: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8005E5AC: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
    // 0x8005E5B0: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005E5B4: nop

    // 0x8005E5B8: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x8005E5BC: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005E5C0: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8005E5C4: nop

    // 0x8005E5C8: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x8005E5CC: lw          $t9, 0xE4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E5D0: lw          $t8, 0xE0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE0);
    // 0x8005E5D4: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x8005E5D8: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x8005E5DC: addiu       $t2, $t8, -0x1
    ctx->r10 = ADD32(ctx->r24, -0X1);
    // 0x8005E5E0: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x8005E5E4: andi        $t4, $t1, 0xFFF
    ctx->r12 = ctx->r9 & 0XFFF;
    // 0x8005E5E8: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8005E5EC: sll         $t5, $t4, 12
    ctx->r13 = S32(ctx->r12 << 12);
    // 0x8005E5F0: andi        $t3, $t6, 0xFFF
    ctx->r11 = ctx->r14 & 0XFFF;
    // 0x8005E5F4: or          $t9, $t5, $t3
    ctx->r25 = ctx->r13 | ctx->r11;
    // 0x8005E5F8: b           L_8005E9EC
    // 0x8005E5FC: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
        goto L_8005E9EC;
    // 0x8005E5FC: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
L_8005E600:
    // 0x8005E600: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005E604: lui         $at, 0xFD68
    ctx->r1 = S32(0XFD68 << 16);
    // 0x8005E608: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x8005E60C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005E610: addiu       $t7, $a1, 0x8
    ctx->r15 = ADD32(ctx->r5, 0X8);
    // 0x8005E614: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x8005E618: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8005E61C: lw          $t2, 0xE4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E620: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8005E624: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x8005E628: andi        $t5, $t6, 0xFFF
    ctx->r13 = ctx->r14 & 0XFFF;
    // 0x8005E62C: or          $t3, $t5, $at
    ctx->r11 = ctx->r13 | ctx->r1;
    // 0x8005E630: sw          $t3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r11;
    // 0x8005E634: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8005E638: lui         $at, 0xF568
    ctx->r1 = S32(0XF568 << 16);
    // 0x8005E63C: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x8005E640: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005E644: nop

    // 0x8005E648: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x8005E64C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005E650: nop

    // 0x8005E654: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x8005E658: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005E65C: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E660: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8005E664: addiu       $t5, $t6, 0x7
    ctx->r13 = ADD32(ctx->r14, 0X7);
    // 0x8005E668: sra         $t3, $t5, 3
    ctx->r11 = S32(SIGNED(ctx->r13) >> 3);
    // 0x8005E66C: andi        $t9, $t3, 0x1FF
    ctx->r25 = ctx->r11 & 0X1FF;
    // 0x8005E670: sll         $t7, $t9, 9
    ctx->r15 = S32(ctx->r25 << 9);
    // 0x8005E674: or          $t1, $t7, $at
    ctx->r9 = ctx->r15 | ctx->r1;
    // 0x8005E678: sw          $t1, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r9;
    // 0x8005E67C: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x8005E680: lui         $t8, 0x708
    ctx->r24 = S32(0X708 << 16);
    // 0x8005E684: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x8005E688: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x8005E68C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005E690: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x8005E694: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x8005E698: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005E69C: lui         $t6, 0xF400
    ctx->r14 = S32(0XF400 << 16);
    // 0x8005E6A0: addiu       $t3, $t5, 0x8
    ctx->r11 = ADD32(ctx->r13, 0X8);
    // 0x8005E6A4: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005E6A8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8005E6AC: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005E6B0: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x8005E6B4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8005E6B8: nop

    // 0x8005E6BC: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8005E6C0: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005E6C4: nop

    // 0x8005E6C8: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x8005E6CC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005E6D0: nop

    // 0x8005E6D4: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x8005E6D8: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005E6DC: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8005E6E0: nop

    // 0x8005E6E4: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x8005E6E8: lw          $t3, 0xE4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E6EC: lw          $t2, 0xE0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE0);
    // 0x8005E6F0: addiu       $t9, $t3, -0x1
    ctx->r25 = ADD32(ctx->r11, -0X1);
    // 0x8005E6F4: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8005E6F8: andi        $t1, $t7, 0xFFF
    ctx->r9 = ctx->r15 & 0XFFF;
    // 0x8005E6FC: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x8005E700: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8005E704: sll         $t4, $t1, 12
    ctx->r12 = S32(ctx->r9 << 12);
    // 0x8005E708: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8005E70C: or          $t8, $t4, $at
    ctx->r24 = ctx->r12 | ctx->r1;
    // 0x8005E710: andi        $t3, $t5, 0xFFF
    ctx->r11 = ctx->r13 & 0XFFF;
    // 0x8005E714: or          $t9, $t8, $t3
    ctx->r25 = ctx->r24 | ctx->r11;
    // 0x8005E718: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x8005E71C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005E720: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8005E724: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x8005E728: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005E72C: lui         $at, 0xF568
    ctx->r1 = S32(0XF568 << 16);
    // 0x8005E730: addiu       $t2, $t4, 0x8
    ctx->r10 = ADD32(ctx->r12, 0X8);
    // 0x8005E734: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005E738: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8005E73C: nop

    // 0x8005E740: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x8005E744: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8005E748: nop

    // 0x8005E74C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8005E750: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005E754: nop

    // 0x8005E758: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x8005E75C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005E760: nop

    // 0x8005E764: addiu       $t7, $t9, 0x8
    ctx->r15 = ADD32(ctx->r25, 0X8);
    // 0x8005E768: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005E76C: lw          $t1, 0xE4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E770: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8005E774: addiu       $t4, $t1, 0x7
    ctx->r12 = ADD32(ctx->r9, 0X7);
    // 0x8005E778: sra         $t2, $t4, 3
    ctx->r10 = S32(SIGNED(ctx->r12) >> 3);
    // 0x8005E77C: andi        $t6, $t2, 0x1FF
    ctx->r14 = ctx->r10 & 0X1FF;
    // 0x8005E780: sll         $t5, $t6, 9
    ctx->r13 = S32(ctx->r14 << 9);
    // 0x8005E784: or          $t8, $t5, $at
    ctx->r24 = ctx->r13 | ctx->r1;
    // 0x8005E788: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x8005E78C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8005E790: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x8005E794: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x8005E798: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x8005E79C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005E7A0: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8005E7A4: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x8005E7A8: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005E7AC: nop

    // 0x8005E7B0: addiu       $t2, $t4, 0x8
    ctx->r10 = ADD32(ctx->r12, 0X8);
    // 0x8005E7B4: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005E7B8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8005E7BC: nop

    // 0x8005E7C0: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x8005E7C4: lw          $t8, 0xE4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E7C8: lw          $t4, 0xE0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE0);
    // 0x8005E7CC: addiu       $t3, $t8, -0x1
    ctx->r11 = ADD32(ctx->r24, -0X1);
    // 0x8005E7D0: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x8005E7D4: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x8005E7D8: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x8005E7DC: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x8005E7E0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8005E7E4: sll         $t1, $t7, 12
    ctx->r9 = S32(ctx->r15 << 12);
    // 0x8005E7E8: andi        $t5, $t6, 0xFFF
    ctx->r13 = ctx->r14 & 0XFFF;
    // 0x8005E7EC: or          $t8, $t1, $t5
    ctx->r24 = ctx->r9 | ctx->r13;
    // 0x8005E7F0: b           L_8005E9EC
    // 0x8005E7F4: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
        goto L_8005E9EC;
    // 0x8005E7F4: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
L_8005E7F8:
    // 0x8005E7F8: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005E7FC: lui         $at, 0xFD48
    ctx->r1 = S32(0XFD48 << 16);
    // 0x8005E800: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x8005E804: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005E808: addiu       $t3, $a1, 0x8
    ctx->r11 = ADD32(ctx->r5, 0X8);
    // 0x8005E80C: addiu       $t4, $t7, 0x8
    ctx->r12 = ADD32(ctx->r15, 0X8);
    // 0x8005E810: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x8005E814: lw          $t2, 0xE4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E818: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8005E81C: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x8005E820: andi        $t1, $t6, 0xFFF
    ctx->r9 = ctx->r14 & 0XFFF;
    // 0x8005E824: or          $t5, $t1, $at
    ctx->r13 = ctx->r9 | ctx->r1;
    // 0x8005E828: sw          $t5, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r13;
    // 0x8005E82C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8005E830: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8005E834: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x8005E838: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005E83C: nop

    // 0x8005E840: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x8005E844: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005E848: nop

    // 0x8005E84C: addiu       $t2, $t4, 0x8
    ctx->r10 = ADD32(ctx->r12, 0X8);
    // 0x8005E850: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005E854: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E858: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8005E85C: addiu       $t1, $t6, 0x7
    ctx->r9 = ADD32(ctx->r14, 0X7);
    // 0x8005E860: sra         $t5, $t1, 3
    ctx->r13 = S32(SIGNED(ctx->r9) >> 3);
    // 0x8005E864: andi        $t8, $t5, 0x1FF
    ctx->r24 = ctx->r13 & 0X1FF;
    // 0x8005E868: sll         $t3, $t8, 9
    ctx->r11 = S32(ctx->r24 << 9);
    // 0x8005E86C: or          $t9, $t3, $at
    ctx->r25 = ctx->r11 | ctx->r1;
    // 0x8005E870: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x8005E874: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8005E878: lui         $t4, 0x708
    ctx->r12 = S32(0X708 << 16);
    // 0x8005E87C: ori         $t4, $t4, 0x200
    ctx->r12 = ctx->r12 | 0X200;
    // 0x8005E880: sw          $t4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r12;
    // 0x8005E884: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005E888: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x8005E88C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8005E890: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8005E894: lui         $t6, 0xF400
    ctx->r14 = S32(0XF400 << 16);
    // 0x8005E898: addiu       $t5, $t1, 0x8
    ctx->r13 = ADD32(ctx->r9, 0X8);
    // 0x8005E89C: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005E8A0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8005E8A4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8005E8A8: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x8005E8AC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8005E8B0: nop

    // 0x8005E8B4: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8005E8B8: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005E8BC: nop

    // 0x8005E8C0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8005E8C4: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005E8C8: nop

    // 0x8005E8CC: addiu       $t2, $t4, 0x8
    ctx->r10 = ADD32(ctx->r12, 0X8);
    // 0x8005E8D0: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005E8D4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8005E8D8: nop

    // 0x8005E8DC: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x8005E8E0: lw          $t5, 0xE4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E8E4: lw          $t2, 0xE0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE0);
    // 0x8005E8E8: addiu       $t8, $t5, -0x1
    ctx->r24 = ADD32(ctx->r13, -0X1);
    // 0x8005E8EC: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x8005E8F0: andi        $t9, $t3, 0xFFF
    ctx->r25 = ctx->r11 & 0XFFF;
    // 0x8005E8F4: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x8005E8F8: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x8005E8FC: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x8005E900: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8005E904: or          $t4, $t7, $at
    ctx->r12 = ctx->r15 | ctx->r1;
    // 0x8005E908: andi        $t5, $t1, 0xFFF
    ctx->r13 = ctx->r9 & 0XFFF;
    // 0x8005E90C: or          $t8, $t4, $t5
    ctx->r24 = ctx->r12 | ctx->r13;
    // 0x8005E910: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
    // 0x8005E914: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005E918: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8005E91C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8005E920: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005E924: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8005E928: addiu       $t2, $t7, 0x8
    ctx->r10 = ADD32(ctx->r15, 0X8);
    // 0x8005E92C: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005E930: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8005E934: nop

    // 0x8005E938: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x8005E93C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8005E940: nop

    // 0x8005E944: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8005E948: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005E94C: nop

    // 0x8005E950: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8005E954: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005E958: nop

    // 0x8005E95C: addiu       $t3, $t8, 0x8
    ctx->r11 = ADD32(ctx->r24, 0X8);
    // 0x8005E960: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8005E964: lw          $t9, 0xE4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E968: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8005E96C: addiu       $t7, $t9, 0x7
    ctx->r15 = ADD32(ctx->r25, 0X7);
    // 0x8005E970: sra         $t2, $t7, 3
    ctx->r10 = S32(SIGNED(ctx->r15) >> 3);
    // 0x8005E974: andi        $t6, $t2, 0x1FF
    ctx->r14 = ctx->r10 & 0X1FF;
    // 0x8005E978: sll         $t1, $t6, 9
    ctx->r9 = S32(ctx->r14 << 9);
    // 0x8005E97C: or          $t4, $t1, $at
    ctx->r12 = ctx->r9 | ctx->r1;
    // 0x8005E980: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005E984: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8005E988: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x8005E98C: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x8005E990: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
    // 0x8005E994: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005E998: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8005E99C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8005E9A0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005E9A4: nop

    // 0x8005E9A8: addiu       $t2, $t7, 0x8
    ctx->r10 = ADD32(ctx->r15, 0X8);
    // 0x8005E9AC: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005E9B0: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8005E9B4: nop

    // 0x8005E9B8: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x8005E9BC: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E9C0: lw          $t7, 0xE0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE0);
    // 0x8005E9C4: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x8005E9C8: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x8005E9CC: addiu       $t2, $t7, -0x1
    ctx->r10 = ADD32(ctx->r15, -0X1);
    // 0x8005E9D0: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x8005E9D4: andi        $t3, $t8, 0xFFF
    ctx->r11 = ctx->r24 & 0XFFF;
    // 0x8005E9D8: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8005E9DC: sll         $t9, $t3, 12
    ctx->r25 = S32(ctx->r11 << 12);
    // 0x8005E9E0: andi        $t1, $t6, 0xFFF
    ctx->r9 = ctx->r14 & 0XFFF;
    // 0x8005E9E4: or          $t4, $t9, $t1
    ctx->r12 = ctx->r25 | ctx->r9;
    // 0x8005E9E8: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
L_8005E9EC:
    // 0x8005E9EC: lw          $t8, 0xE4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE4);
    // 0x8005E9F0: lw          $t7, 0x10C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10C);
    // 0x8005E9F4: sll         $t3, $t8, 10
    ctx->r11 = S32(ctx->r24 << 10);
    // 0x8005E9F8: div         $zero, $t3, $t7
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r15)));
    // 0x8005E9FC: lw          $t9, 0xE0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE0);
    // 0x8005EA00: lw          $t4, 0x110($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X110);
    // 0x8005EA04: sll         $t1, $t9, 10
    ctx->r9 = S32(ctx->r25 << 10);
    // 0x8005EA08: bne         $t7, $zero, L_8005EA14
    if (ctx->r15 != 0) {
        // 0x8005EA0C: nop
    
            goto L_8005EA14;
    }
    // 0x8005EA0C: nop

    // 0x8005EA10: break       7
    do_break(2147871248);
L_8005EA14:
    // 0x8005EA14: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005EA18: bne         $t7, $at, L_8005EA2C
    if (ctx->r15 != ctx->r1) {
        // 0x8005EA1C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005EA2C;
    }
    // 0x8005EA1C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005EA20: bne         $t3, $at, L_8005EA2C
    if (ctx->r11 != ctx->r1) {
        // 0x8005EA24: nop
    
            goto L_8005EA2C;
    }
    // 0x8005EA24: nop

    // 0x8005EA28: break       6
    do_break(2147871272);
L_8005EA2C:
    // 0x8005EA2C: mflo        $t2
    ctx->r10 = lo;
    // 0x8005EA30: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x8005EA34: sw          $t6, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r14;
    // 0x8005EA38: div         $zero, $t1, $t4
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r12)));
    // 0x8005EA3C: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8005EA40: bne         $t4, $zero, L_8005EA4C
    if (ctx->r12 != 0) {
        // 0x8005EA44: nop
    
            goto L_8005EA4C;
    }
    // 0x8005EA44: nop

    // 0x8005EA48: break       7
    do_break(2147871304);
L_8005EA4C:
    // 0x8005EA4C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005EA50: bne         $t4, $at, L_8005EA64
    if (ctx->r12 != ctx->r1) {
        // 0x8005EA54: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005EA64;
    }
    // 0x8005EA54: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005EA58: bne         $t1, $at, L_8005EA64
    if (ctx->r9 != ctx->r1) {
        // 0x8005EA5C: nop
    
            goto L_8005EA64;
    }
    // 0x8005EA5C: nop

    // 0x8005EA60: break       6
    do_break(2147871328);
L_8005EA64:
    // 0x8005EA64: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8005EA68: mflo        $t5
    ctx->r13 = lo;
    // 0x8005EA6C: addiu       $t8, $t5, -0x1
    ctx->r24 = ADD32(ctx->r13, -0X1);
    // 0x8005EA70: sw          $t8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r24;
    // 0x8005EA74: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8005EA78: nop

    // 0x8005EA7C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8005EA80: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8005EA84: nop

    // 0x8005EA88: addiu       $t2, $t7, 0x8
    ctx->r10 = ADD32(ctx->r15, 0X8);
    // 0x8005EA8C: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8005EA90: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x8005EA94: nop

    // 0x8005EA98: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8005EA9C: lw          $t1, 0xD8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD8);
    // 0x8005EAA0: lw          $t7, 0xD4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD4);
    // 0x8005EAA4: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x8005EAA8: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x8005EAAC: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x8005EAB0: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x8005EAB4: andi        $t8, $t5, 0xFFF
    ctx->r24 = ctx->r13 & 0XFFF;
    // 0x8005EAB8: lw          $t4, 0x14($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14);
    // 0x8005EABC: sll         $t3, $t8, 12
    ctx->r11 = S32(ctx->r24 << 12);
    // 0x8005EAC0: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8005EAC4: or          $t1, $t3, $t9
    ctx->r9 = ctx->r11 | ctx->r25;
    // 0x8005EAC8: sw          $t1, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r9;
    // 0x8005EACC: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005EAD0: nop

    // 0x8005EAD4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8005EAD8: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005EADC: nop

    // 0x8005EAE0: addiu       $t7, $t8, 0x8
    ctx->r15 = ADD32(ctx->r24, 0X8);
    // 0x8005EAE4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005EAE8: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
    // 0x8005EAEC: lw          $t5, 0xD8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD8);
    // 0x8005EAF0: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x8005EAF4: addu        $t8, $a3, $t5
    ctx->r24 = ADD32(ctx->r7, ctx->r13);
    // 0x8005EAF8: addu        $t3, $t2, $t6
    ctx->r11 = ADD32(ctx->r10, ctx->r14);
    // 0x8005EAFC: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8005EB00: addiu       $t2, $t7, -0x1
    ctx->r10 = ADD32(ctx->r15, -0X1);
    // 0x8005EB04: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x8005EB08: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x8005EB0C: andi        $t6, $t2, 0xFFF
    ctx->r14 = ctx->r10 & 0XFFF;
    // 0x8005EB10: sll         $t3, $t6, 12
    ctx->r11 = S32(ctx->r14 << 12);
    // 0x8005EB14: lw          $t5, 0x10($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X10);
    // 0x8005EB18: or          $t9, $t3, $at
    ctx->r25 = ctx->r11 | ctx->r1;
    // 0x8005EB1C: andi        $t4, $t1, 0xFFF
    ctx->r12 = ctx->r9 & 0XFFF;
    // 0x8005EB20: or          $t1, $t9, $t4
    ctx->r9 = ctx->r25 | ctx->r12;
    // 0x8005EB24: sw          $t1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r9;
    // 0x8005EB28: lw          $t6, 0xF8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF8);
    // 0x8005EB2C: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x8005EB30: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8005EB34: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x8005EB38: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x8005EB3C: andi        $t9, $t3, 0xFFF
    ctx->r25 = ctx->r11 & 0XFFF;
    // 0x8005EB40: sll         $t2, $t7, 12
    ctx->r10 = S32(ctx->r15 << 12);
    // 0x8005EB44: or          $t4, $t2, $t9
    ctx->r12 = ctx->r10 | ctx->r25;
    // 0x8005EB48: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x8005EB4C: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005EB50: lui         $t6, 0xE100
    ctx->r14 = S32(0XE100 << 16);
    // 0x8005EB54: sw          $t5, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r13;
    // 0x8005EB58: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005EB5C: lui         $t5, 0xF100
    ctx->r13 = S32(0XF100 << 16);
    // 0x8005EB60: addiu       $t7, $t8, 0x8
    ctx->r15 = ADD32(ctx->r24, 0X8);
    // 0x8005EB64: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005EB68: lw          $t3, 0xC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC);
    // 0x8005EB6C: nop

    // 0x8005EB70: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x8005EB74: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8005EB78: nop

    // 0x8005EB7C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8005EB80: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8005EB84: nop

    // 0x8005EB88: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x8005EB8C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005EB90: nop

    // 0x8005EB94: addiu       $t1, $t4, 0x8
    ctx->r9 = ADD32(ctx->r12, 0X8);
    // 0x8005EB98: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8005EB9C: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x8005EBA0: nop

    // 0x8005EBA4: sw          $t5, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r13;
    // 0x8005EBA8: lw          $t7, 0x10C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10C);
    // 0x8005EBAC: lw          $t2, 0x110($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X110);
    // 0x8005EBB0: andi        $t6, $t7, 0xFFFF
    ctx->r14 = ctx->r15 & 0XFFFF;
    // 0x8005EBB4: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x8005EBB8: sll         $t3, $t6, 16
    ctx->r11 = S32(ctx->r14 << 16);
    // 0x8005EBBC: andi        $t9, $t2, 0xFFFF
    ctx->r25 = ctx->r10 & 0XFFFF;
    // 0x8005EBC0: or          $t4, $t3, $t9
    ctx->r12 = ctx->r11 | ctx->r25;
    // 0x8005EBC4: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x8005EBC8: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005EBCC: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8005EBD0: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x8005EBD4: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005EBD8: nop

    // 0x8005EBDC: addiu       $t7, $t8, 0x8
    ctx->r15 = ADD32(ctx->r24, 0X8);
    // 0x8005EBE0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8005EBE4: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8005EBE8: nop

    // 0x8005EBEC: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x8005EBF0: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8005EBF4: nop

    // 0x8005EBF8: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
L_8005EBFC:
    // 0x8005EBFC: jr          $ra
    // 0x8005EC00: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x8005EC00: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x8005EC04: nop

    // 0x8005EC08: nop

    // 0x8005EC0C: nop

;}
RECOMP_FUNC void func_8005EC10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EC10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005EC14: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8005EC18: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8005EC1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005EC20: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8005EC24: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8005EC28: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8005EC2C: sw          $zero, 0x274($t6)
    MEM_W(0X274, ctx->r14) = 0;
    // 0x8005EC30: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8005EC34: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8005EC38: sw          $zero, 0x278($t7)
    MEM_W(0X278, ctx->r15) = 0;
    // 0x8005EC3C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8005EC40: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8005EC44: sw          $zero, 0x260($t8)
    MEM_W(0X260, ctx->r24) = 0;
    // 0x8005EC48: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8005EC4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8005EC50: sw          $zero, 0x27C($t9)
    MEM_W(0X27C, ctx->r25) = 0;
    // 0x8005EC54: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8005EC58: nop

    // 0x8005EC5C: sw          $zero, 0x264($t0)
    MEM_W(0X264, ctx->r8) = 0;
    // 0x8005EC60: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8005EC64: nop

    // 0x8005EC68: sw          $zero, 0x268($t1)
    MEM_W(0X268, ctx->r9) = 0;
    // 0x8005EC6C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8005EC70: nop

    // 0x8005EC74: sw          $zero, 0x26C($t2)
    MEM_W(0X26C, ctx->r10) = 0;
    // 0x8005EC78: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8005EC7C: nop

    // 0x8005EC80: sw          $zero, 0x270($t3)
    MEM_W(0X270, ctx->r11) = 0;
    // 0x8005EC84: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8005EC88: nop

    // 0x8005EC8C: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x8005EC90: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8005EC94: nop

    // 0x8005EC98: sh          $t6, 0x20($t7)
    MEM_H(0X20, ctx->r15) = ctx->r14;
    // 0x8005EC9C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8005ECA0: nop

    // 0x8005ECA4: addiu       $a0, $t8, 0x40
    ctx->r4 = ADD32(ctx->r24, 0X40);
    // 0x8005ECA8: jal         0x800B3080
    // 0x8005ECAC: addiu       $a1, $t8, 0x58
    ctx->r5 = ADD32(ctx->r24, 0X58);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x8005ECAC: addiu       $a1, $t8, 0x58
    ctx->r5 = ADD32(ctx->r24, 0X58);
    after_0:
    // 0x8005ECB0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8005ECB4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8005ECB8: addiu       $a0, $t9, 0x78
    ctx->r4 = ADD32(ctx->r25, 0X78);
    // 0x8005ECBC: jal         0x800B3080
    // 0x8005ECC0: addiu       $a1, $t9, 0x90
    ctx->r5 = ADD32(ctx->r25, 0X90);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x8005ECC0: addiu       $a1, $t9, 0x90
    ctx->r5 = ADD32(ctx->r25, 0X90);
    after_1:
    // 0x8005ECC4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8005ECC8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8005ECCC: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    // 0x8005ECD0: jal         0x800B30B0
    // 0x8005ECD4: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x8005ECD4: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    after_2:
    // 0x8005ECD8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8005ECDC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8005ECE0: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    // 0x8005ECE4: jal         0x800B30B0
    // 0x8005ECE8: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x8005ECE8: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    after_3:
    // 0x8005ECEC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8005ECF0: lbu         $a2, 0x3B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3B);
    // 0x8005ECF4: addiu       $a1, $zero, 0x29A
    ctx->r5 = ADD32(0, 0X29A);
    // 0x8005ECF8: jal         0x800B65E0
    // 0x8005ECFC: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    osViSetEvent_recomp(rdram, ctx);
        goto after_4;
    // 0x8005ECFC: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_4:
    // 0x8005ED00: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8005ED04: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8005ED08: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8005ED0C: lui         $a2, 0x8006
    ctx->r6 = S32(0X8006 << 16);
    // 0x8005ED10: addiu       $a2, $a2, -0x1174
    ctx->r6 = ADD32(ctx->r6, -0X1174);
    // 0x8005ED14: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8005ED18: addiu       $a0, $t0, 0xB0
    ctx->r4 = ADD32(ctx->r8, 0XB0);
    // 0x8005ED1C: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x8005ED20: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8005ED24: jal         0x800B6010
    // 0x8005ED28: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    osCreateThread_recomp(rdram, ctx);
        goto after_5;
    // 0x8005ED28: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_5:
    // 0x8005ED2C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8005ED30: jal         0x800B6160
    // 0x8005ED34: addiu       $a0, $a0, 0xB0
    ctx->r4 = ADD32(ctx->r4, 0XB0);
    osStartThread_recomp(rdram, ctx);
        goto after_6;
    // 0x8005ED34: addiu       $a0, $a0, 0xB0
    ctx->r4 = ADD32(ctx->r4, 0XB0);
    after_6:
    // 0x8005ED38: jal         0x800A39B0
    // 0x8005ED3C: nop

    func_800A39B0(rdram, ctx);
        goto after_7;
    // 0x8005ED3C: nop

    after_7:
    // 0x8005ED40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005ED44: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8005ED48: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005ED4C: sb          $t3, 0x180($at)
    MEM_B(0X180, ctx->r1) = ctx->r11;
    // 0x8005ED50: jr          $ra
    // 0x8005ED54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8005ED54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8005ED58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005ED58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005ED5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005ED60: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8005ED64: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8005ED68: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8005ED6C: jal         0x800B6A90
    // 0x8005ED70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8005ED70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8005ED74: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8005ED78: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8005ED7C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8005ED80: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8005ED84: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8005ED88: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8005ED8C: lw          $t9, 0x260($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X260);
    // 0x8005ED90: nop

    // 0x8005ED94: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8005ED98: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8005ED9C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8005EDA0: nop

    // 0x8005EDA4: sw          $t1, 0x260($t2)
    MEM_W(0X260, ctx->r10) = ctx->r9;
    // 0x8005EDA8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8005EDAC: jal         0x800B6A90
    // 0x8005EDB0: nop

    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x8005EDB0: nop

    after_1:
    // 0x8005EDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005EDB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8005EDBC: jr          $ra
    // 0x8005EDC0: nop

    return;
    // 0x8005EDC0: nop

;}
RECOMP_FUNC void func_8005EDC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EDC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005EDC8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8005EDCC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8005EDD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005EDD4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8005EDD8: lw          $t7, 0x260($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X260);
    // 0x8005EDDC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8005EDE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005EDE4: jal         0x800B6A90
    // 0x8005EDE8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8005EDE8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_0:
    // 0x8005EDEC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8005EDF0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8005EDF4: beq         $t8, $zero, L_8005EE68
    if (ctx->r24 == 0) {
        // 0x8005EDF8: nop
    
            goto L_8005EE68;
    }
    // 0x8005EDF8: nop

L_8005EDFC:
    // 0x8005EDFC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8005EE00: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8005EE04: nop

    // 0x8005EE08: bne         $t9, $t0, L_8005EE40
    if (ctx->r25 != ctx->r8) {
        // 0x8005EE0C: nop
    
            goto L_8005EE40;
    }
    // 0x8005EE0C: nop

    // 0x8005EE10: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8005EE14: nop

    // 0x8005EE18: beq         $t1, $zero, L_8005EE2C
    if (ctx->r9 == 0) {
        // 0x8005EE1C: nop
    
            goto L_8005EE2C;
    }
    // 0x8005EE1C: nop

    // 0x8005EE20: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x8005EE24: b           L_8005EE68
    // 0x8005EE28: sw          $t2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r10;
        goto L_8005EE68;
    // 0x8005EE28: sw          $t2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r10;
L_8005EE2C:
    // 0x8005EE2C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8005EE30: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8005EE34: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8005EE38: b           L_8005EE68
    // 0x8005EE3C: sw          $t4, 0x260($t5)
    MEM_W(0X260, ctx->r13) = ctx->r12;
        goto L_8005EE68;
    // 0x8005EE3C: sw          $t4, 0x260($t5)
    MEM_W(0X260, ctx->r13) = ctx->r12;
L_8005EE40:
    // 0x8005EE40: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8005EE44: nop

    // 0x8005EE48: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8005EE4C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8005EE50: nop

    // 0x8005EE54: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8005EE58: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8005EE5C: nop

    // 0x8005EE60: bne         $t8, $zero, L_8005EDFC
    if (ctx->r24 != 0) {
        // 0x8005EE64: nop
    
            goto L_8005EDFC;
    }
    // 0x8005EE64: nop

L_8005EE68:
    // 0x8005EE68: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8005EE6C: jal         0x800B6A90
    // 0x8005EE70: nop

    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x8005EE70: nop

    after_1:
    // 0x8005EE74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005EE78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8005EE7C: jr          $ra
    // 0x8005EE80: nop

    return;
    // 0x8005EE80: nop

;}
RECOMP_FUNC void func_8005EE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EE84: jr          $ra
    // 0x8005EE88: addiu       $v0, $a0, 0x78
    ctx->r2 = ADD32(ctx->r4, 0X78);
    return;
    // 0x8005EE88: addiu       $v0, $a0, 0x78
    ctx->r2 = ADD32(ctx->r4, 0X78);
;}
RECOMP_FUNC void func_8005EE8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EE8C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005EE90: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8005EE94: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8005EE98: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x8005EE9C: ori         $t7, $t7, 0x6598
    ctx->r15 = ctx->r15 | 0X6598;
    // 0x8005EEA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005EEA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005EEA8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x8005EEAC: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
L_8005EEB0:
    // 0x8005EEB0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8005EEB4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8005EEB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8005EEBC: jal         0x800B3C20
    // 0x8005EEC0: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8005EEC0: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_0:
    // 0x8005EEC4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8005EEC8: lbu         $t8, 0x180($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X180);
    // 0x8005EECC: nop

    // 0x8005EED0: beq         $t8, $zero, L_8005EEB0
    if (ctx->r24 == 0) {
        // 0x8005EED4: nop
    
            goto L_8005EEB0;
    }
    // 0x8005EED4: nop

    // 0x8005EED8: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x8005EEDC: addiu       $at, $zero, 0x29A
    ctx->r1 = ADD32(0, 0X29A);
    // 0x8005EEE0: beq         $s0, $at, L_8005EF08
    if (ctx->r16 == ctx->r1) {
        // 0x8005EEE4: addiu       $at, $zero, 0x29B
        ctx->r1 = ADD32(0, 0X29B);
            goto L_8005EF08;
    }
    // 0x8005EEE4: addiu       $at, $zero, 0x29B
    ctx->r1 = ADD32(0, 0X29B);
    // 0x8005EEE8: beq         $s0, $at, L_8005EF1C
    if (ctx->r16 == ctx->r1) {
        // 0x8005EEEC: addiu       $at, $zero, 0x29C
        ctx->r1 = ADD32(0, 0X29C);
            goto L_8005EF1C;
    }
    // 0x8005EEEC: addiu       $at, $zero, 0x29C
    ctx->r1 = ADD32(0, 0X29C);
    // 0x8005EEF0: beq         $s0, $at, L_8005EF30
    if (ctx->r16 == ctx->r1) {
        // 0x8005EEF4: addiu       $at, $zero, 0x29D
        ctx->r1 = ADD32(0, 0X29D);
            goto L_8005EF30;
    }
    // 0x8005EEF4: addiu       $at, $zero, 0x29D
    ctx->r1 = ADD32(0, 0X29D);
    // 0x8005EEF8: beq         $s0, $at, L_8005EF44
    if (ctx->r16 == ctx->r1) {
        // 0x8005EEFC: nop
    
            goto L_8005EF44;
    }
    // 0x8005EEFC: nop

    // 0x8005EF00: b           L_8005EEB0
    // 0x8005EF04: nop

        goto L_8005EEB0;
    // 0x8005EF04: nop

L_8005EF08:
    // 0x8005EF08: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8005EF0C: jal         0x8005EFC0
    // 0x8005EF10: nop

    func_8005EFC0(rdram, ctx);
        goto after_1;
    // 0x8005EF10: nop

    after_1:
    // 0x8005EF14: b           L_8005EEB0
    // 0x8005EF18: nop

        goto L_8005EEB0;
    // 0x8005EF18: nop

L_8005EF1C:
    // 0x8005EF1C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8005EF20: jal         0x8005F118
    // 0x8005EF24: nop

    func_8005F118(rdram, ctx);
        goto after_2;
    // 0x8005EF24: nop

    after_2:
    // 0x8005EF28: b           L_8005EEB0
    // 0x8005EF2C: nop

        goto L_8005EEB0;
    // 0x8005EF2C: nop

L_8005EF30:
    // 0x8005EF30: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8005EF34: jal         0x8005F2D0
    // 0x8005EF38: nop

    func_8005F2D0(rdram, ctx);
        goto after_3;
    // 0x8005EF38: nop

    after_3:
    // 0x8005EF3C: b           L_8005EEB0
    // 0x8005EF40: nop

        goto L_8005EEB0;
    // 0x8005EF40: nop

L_8005EF44:
    // 0x8005EF44: jal         0x80061198
    // 0x8005EF48: nop

    func_80061198(rdram, ctx);
        goto after_4;
    // 0x8005EF48: nop

    after_4:
    // 0x8005EF4C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8005EF50: nop

    // 0x8005EF54: lw          $t0, 0x260($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X260);
    // 0x8005EF58: nop

    // 0x8005EF5C: beq         $t0, $zero, L_8005EF94
    if (ctx->r8 == 0) {
        // 0x8005EF60: sw          $t0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r8;
            goto L_8005EF94;
    }
    // 0x8005EF60: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_8005EF64:
    // 0x8005EF64: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8005EF68: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8005EF6C: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    // 0x8005EF70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005EF74: jal         0x800B34D0
    // 0x8005EF78: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    osSendMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x8005EF78: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    after_5:
    // 0x8005EF7C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8005EF80: nop

    // 0x8005EF84: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8005EF88: nop

    // 0x8005EF8C: bne         $t3, $zero, L_8005EF64
    if (ctx->r11 != 0) {
        // 0x8005EF90: sw          $t3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r11;
            goto L_8005EF64;
    }
    // 0x8005EF90: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
L_8005EF94:
    // 0x8005EF94: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005EF98: b           L_8005EEB0
    // 0x8005EF9C: sb          $zero, 0x180($at)
    MEM_B(0X180, ctx->r1) = 0;
        goto L_8005EEB0;
    // 0x8005EF9C: sb          $zero, 0x180($at)
    MEM_B(0X180, ctx->r1) = 0;
    // 0x8005EFA0: nop

    // 0x8005EFA4: nop

    // 0x8005EFA8: nop

    // 0x8005EFAC: nop

    // 0x8005EFB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005EFB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005EFB8: jr          $ra
    // 0x8005EFBC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8005EFBC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8005EFC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EFC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005EFC4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8005EFC8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8005EFCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005EFD0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8005EFD4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8005EFD8: lw          $t7, 0x27C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X27C);
    // 0x8005EFDC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8005EFE0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8005EFE4: sw          $t8, 0x27C($t6)
    MEM_W(0X27C, ctx->r14) = ctx->r24;
    // 0x8005EFE8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8005EFEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005EFF0: jal         0x800B3C20
    // 0x8005EFF4: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8005EFF4: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_0:
    // 0x8005EFF8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005EFFC: beq         $v0, $at, L_8005F034
    if (ctx->r2 == ctx->r1) {
        // 0x8005F000: nop
    
            goto L_8005F034;
    }
    // 0x8005F000: nop

L_8005F004:
    // 0x8005F004: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8005F008: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F00C: jal         0x8005F510
    // 0x8005F010: nop

    func_8005F510(rdram, ctx);
        goto after_1;
    // 0x8005F010: nop

    after_1:
    // 0x8005F014: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8005F018: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8005F01C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005F020: jal         0x800B3C20
    // 0x8005F024: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x8005F024: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_2:
    // 0x8005F028: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005F02C: bne         $v0, $at, L_8005F004
    if (ctx->r2 != ctx->r1) {
        // 0x8005F030: nop
    
            goto L_8005F004;
    }
    // 0x8005F030: nop

L_8005F034:
    // 0x8005F034: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8005F038: nop

    // 0x8005F03C: lw          $t0, 0x280($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X280);
    // 0x8005F040: nop

    // 0x8005F044: beq         $t0, $zero, L_8005F06C
    if (ctx->r8 == 0) {
        // 0x8005F048: nop
    
            goto L_8005F06C;
    }
    // 0x8005F048: nop

    // 0x8005F04C: lw          $t1, 0x274($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X274);
    // 0x8005F050: nop

    // 0x8005F054: beq         $t1, $zero, L_8005F06C
    if (ctx->r9 == 0) {
        // 0x8005F058: nop
    
            goto L_8005F06C;
    }
    // 0x8005F058: nop

    // 0x8005F05C: jal         0x8005F6AC
    // 0x8005F060: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_8005F6AC(rdram, ctx);
        goto after_3;
    // 0x8005F060: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_3:
    // 0x8005F064: b           L_8005F0C4
    // 0x8005F068: nop

        goto L_8005F0C4;
    // 0x8005F068: nop

L_8005F06C:
    // 0x8005F06C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8005F070: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8005F074: lw          $t3, 0x274($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X274);
    // 0x8005F078: lw          $t7, 0x278($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X278);
    // 0x8005F07C: sltiu       $t4, $t3, 0x1
    ctx->r12 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x8005F080: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8005F084: sltiu       $t8, $t7, 0x1
    ctx->r24 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x8005F088: or          $t6, $t5, $t8
    ctx->r14 = ctx->r13 | ctx->r24;
    // 0x8005F08C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8005F090: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8005F094: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x8005F098: jal         0x8005F6F8
    // 0x8005F09C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_8005F6F8(rdram, ctx);
        goto after_4;
    // 0x8005F09C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_4:
    // 0x8005F0A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8005F0A4: nop

    // 0x8005F0A8: beq         $v0, $t0, L_8005F0C4
    if (ctx->r2 == ctx->r8) {
        // 0x8005F0AC: nop
    
            goto L_8005F0C4;
    }
    // 0x8005F0AC: nop

    // 0x8005F0B0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8005F0B4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8005F0B8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8005F0BC: jal         0x8005F598
    // 0x8005F0C0: nop

    func_8005F598(rdram, ctx);
        goto after_5;
    // 0x8005F0C0: nop

    after_5:
L_8005F0C4:
    // 0x8005F0C4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8005F0C8: nop

    // 0x8005F0CC: lw          $t9, 0x260($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X260);
    // 0x8005F0D0: nop

    // 0x8005F0D4: beq         $t9, $zero, L_8005F108
    if (ctx->r25 == 0) {
        // 0x8005F0D8: sw          $t9, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r25;
            goto L_8005F108;
    }
    // 0x8005F0D8: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
L_8005F0DC:
    // 0x8005F0DC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8005F0E0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8005F0E4: lw          $a0, 0x4($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X4);
    // 0x8005F0E8: jal         0x800B34D0
    // 0x8005F0EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x8005F0EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x8005F0F0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8005F0F4: nop

    // 0x8005F0F8: lw          $t7, 0x0($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X0);
    // 0x8005F0FC: nop

    // 0x8005F100: bne         $t7, $zero, L_8005F0DC
    if (ctx->r15 != 0) {
        // 0x8005F104: sw          $t7, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r15;
            goto L_8005F0DC;
    }
    // 0x8005F104: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
L_8005F108:
    // 0x8005F108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005F10C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8005F110: jr          $ra
    // 0x8005F114: nop

    return;
    // 0x8005F114: nop

;}
RECOMP_FUNC void func_8005F118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F118: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005F11C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8005F120: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8005F124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005F128: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8005F12C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8005F130: lw          $t7, 0x274($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X274);
    // 0x8005F134: nop

    // 0x8005F138: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x8005F13C: sw          $zero, 0x274($t6)
    MEM_W(0X274, ctx->r14) = 0;
    // 0x8005F140: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F144: nop

    // 0x8005F148: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8005F14C: nop

    // 0x8005F150: andi        $t0, $t9, 0x10
    ctx->r8 = ctx->r25 & 0X10;
    // 0x8005F154: beq         $t0, $zero, L_8005F240
    if (ctx->r8 == 0) {
        // 0x8005F158: nop
    
            goto L_8005F240;
    }
    // 0x8005F158: nop

    // 0x8005F15C: jal         0x800B77B0
    // 0x8005F160: addiu       $a0, $t8, 0x10
    ctx->r4 = ADD32(ctx->r24, 0X10);
    osSpTaskYielded_recomp(rdram, ctx);
        goto after_0;
    // 0x8005F160: addiu       $a0, $t8, 0x10
    ctx->r4 = ADD32(ctx->r24, 0X10);
    after_0:
    // 0x8005F164: beq         $v0, $zero, L_8005F240
    if (ctx->r2 == 0) {
        // 0x8005F168: nop
    
            goto L_8005F240;
    }
    // 0x8005F168: nop

    // 0x8005F16C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F170: nop

    // 0x8005F174: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x8005F178: nop

    // 0x8005F17C: ori         $t3, $t2, 0x20
    ctx->r11 = ctx->r10 | 0X20;
    // 0x8005F180: sw          $t3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r11;
    // 0x8005F184: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F188: nop

    // 0x8005F18C: addiu       $t5, $t4, 0x60
    ctx->r13 = ADD32(ctx->r12, 0X60);
    // 0x8005F190: jal         0x800B6550
    // 0x8005F194: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    osGetTime_recomp(rdram, ctx);
        goto after_1;
    // 0x8005F194: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    after_1:
    // 0x8005F198: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F19C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8005F1A0: lw          $t6, 0x58($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X58);
    // 0x8005F1A4: lw          $t7, 0x5C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5C);
    // 0x8005F1A8: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x8005F1AC: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
    // 0x8005F1B0: lw          $t9, 0x4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4);
    // 0x8005F1B4: subu        $t0, $v0, $t6
    ctx->r8 = SUB32(ctx->r2, ctx->r14);
    // 0x8005F1B8: sltu        $at, $v1, $t7
    ctx->r1 = ctx->r3 < ctx->r15 ? 1 : 0;
    // 0x8005F1BC: subu        $t1, $v1, $t7
    ctx->r9 = SUB32(ctx->r3, ctx->r15);
    // 0x8005F1C0: subu        $t0, $t0, $at
    ctx->r8 = SUB32(ctx->r8, ctx->r1);
    // 0x8005F1C4: addu        $t5, $t1, $t9
    ctx->r13 = ADD32(ctx->r9, ctx->r25);
    // 0x8005F1C8: sltu        $at, $t5, $t9
    ctx->r1 = ctx->r13 < ctx->r25 ? 1 : 0;
    // 0x8005F1CC: addu        $t4, $at, $t0
    ctx->r12 = ADD32(ctx->r1, ctx->r8);
    // 0x8005F1D0: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x8005F1D4: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    // 0x8005F1D8: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x8005F1DC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F1E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005F1E4: lw          $t6, 0x8($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X8);
    // 0x8005F1E8: nop

    // 0x8005F1EC: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x8005F1F0: bne         $t7, $at, L_8005F268
    if (ctx->r15 != ctx->r1) {
        // 0x8005F1F4: nop
    
            goto L_8005F268;
    }
    // 0x8005F1F4: nop

    // 0x8005F1F8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8005F1FC: nop

    // 0x8005F200: lw          $t1, 0x268($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X268);
    // 0x8005F204: nop

    // 0x8005F208: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x8005F20C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8005F210: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F214: nop

    // 0x8005F218: sw          $t8, 0x268($t9)
    MEM_W(0X268, ctx->r25) = ctx->r24;
    // 0x8005F21C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8005F220: nop

    // 0x8005F224: lw          $t5, 0x270($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X270);
    // 0x8005F228: nop

    // 0x8005F22C: bne         $t5, $zero, L_8005F268
    if (ctx->r13 != 0) {
        // 0x8005F230: nop
    
            goto L_8005F268;
    }
    // 0x8005F230: nop

    // 0x8005F234: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F238: b           L_8005F268
    // 0x8005F23C: sw          $t2, 0x270($t4)
    MEM_W(0X270, ctx->r12) = ctx->r10;
        goto L_8005F268;
    // 0x8005F23C: sw          $t2, 0x270($t4)
    MEM_W(0X270, ctx->r12) = ctx->r10;
L_8005F240:
    // 0x8005F240: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F244: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8005F248: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8005F24C: nop

    // 0x8005F250: and         $t0, $t7, $at
    ctx->r8 = ctx->r15 & ctx->r1;
    // 0x8005F254: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x8005F258: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F25C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8005F260: jal         0x8005F3F0
    // 0x8005F264: nop

    func_8005F3F0(rdram, ctx);
        goto after_2;
    // 0x8005F264: nop

    after_2:
L_8005F268:
    // 0x8005F268: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8005F26C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8005F270: lw          $t3, 0x274($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X274);
    // 0x8005F274: lw          $t5, 0x278($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X278);
    // 0x8005F278: sltiu       $t8, $t3, 0x1
    ctx->r24 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x8005F27C: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8005F280: sltiu       $t2, $t5, 0x1
    ctx->r10 = ctx->r13 < 0X1 ? 1 : 0;
    // 0x8005F284: or          $t4, $t9, $t2
    ctx->r12 = ctx->r25 | ctx->r10;
    // 0x8005F288: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8005F28C: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    // 0x8005F290: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x8005F294: jal         0x8005F6F8
    // 0x8005F298: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_8005F6F8(rdram, ctx);
        goto after_3;
    // 0x8005F298: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_3:
    // 0x8005F29C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8005F2A0: nop

    // 0x8005F2A4: beq         $v0, $t7, L_8005F2C0
    if (ctx->r2 == ctx->r15) {
        // 0x8005F2A8: nop
    
            goto L_8005F2C0;
    }
    // 0x8005F2A8: nop

    // 0x8005F2AC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8005F2B0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8005F2B4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8005F2B8: jal         0x8005F598
    // 0x8005F2BC: nop

    func_8005F598(rdram, ctx);
        goto after_4;
    // 0x8005F2BC: nop

    after_4:
L_8005F2C0:
    // 0x8005F2C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005F2C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8005F2C8: jr          $ra
    // 0x8005F2CC: nop

    return;
    // 0x8005F2CC: nop

;}
RECOMP_FUNC void func_8005F2D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F2D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005F2D4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8005F2D8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8005F2DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005F2E0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8005F2E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8005F2E8: lw          $t7, 0x278($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X278);
    // 0x8005F2EC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8005F2F0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8005F2F4: sw          $zero, 0x278($t6)
    MEM_W(0X278, ctx->r14) = 0;
    // 0x8005F2F8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8005F2FC: nop

    // 0x8005F300: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8005F304: nop

    // 0x8005F308: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x8005F30C: sw          $t0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r8;
    // 0x8005F310: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8005F314: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8005F318: jal         0x8005F3F0
    // 0x8005F31C: nop

    func_8005F3F0(rdram, ctx);
        goto after_0;
    // 0x8005F31C: nop

    after_0:
    // 0x8005F320: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8005F324: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8005F328: lw          $t2, 0x274($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X274);
    // 0x8005F32C: lw          $t5, 0x278($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X278);
    // 0x8005F330: sltiu       $t3, $t2, 0x1
    ctx->r11 = ctx->r10 < 0X1 ? 1 : 0;
    // 0x8005F334: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8005F338: sltiu       $t7, $t5, 0x1
    ctx->r15 = ctx->r13 < 0X1 ? 1 : 0;
    // 0x8005F33C: or          $t6, $t4, $t7
    ctx->r14 = ctx->r12 | ctx->r15;
    // 0x8005F340: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8005F344: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8005F348: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x8005F34C: jal         0x8005F6F8
    // 0x8005F350: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_8005F6F8(rdram, ctx);
        goto after_1;
    // 0x8005F350: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_1:
    // 0x8005F354: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8005F358: nop

    // 0x8005F35C: beq         $v0, $t9, L_8005F378
    if (ctx->r2 == ctx->r25) {
        // 0x8005F360: nop
    
            goto L_8005F378;
    }
    // 0x8005F360: nop

    // 0x8005F364: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8005F368: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8005F36C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8005F370: jal         0x8005F598
    // 0x8005F374: nop

    func_8005F598(rdram, ctx);
        goto after_2;
    // 0x8005F374: nop

    after_2:
L_8005F378:
    // 0x8005F378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005F37C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8005F380: jr          $ra
    // 0x8005F384: nop

    return;
    // 0x8005F384: nop

;}
RECOMP_FUNC void func_8005F388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F388: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005F38C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8005F390: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8005F394: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005F398: beq         $t6, $zero, L_8005F3DC
    if (ctx->r14 == 0) {
        // 0x8005F39C: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8005F3DC;
    }
    // 0x8005F39C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005F3A0: jal         0x800B7830
    // 0x8005F3A4: nop

    osViGetCurrentFramebuffer_recomp(rdram, ctx);
        goto after_0;
    // 0x8005F3A4: nop

    after_0:
    // 0x8005F3A8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8005F3AC: jal         0x800B7870
    // 0x8005F3B0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    osViGetNextFramebuffer_recomp(rdram, ctx);
        goto after_1;
    // 0x8005F3B0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    after_1:
    // 0x8005F3B4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8005F3B8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8005F3BC: nop

    // 0x8005F3C0: beq         $t7, $s0, L_8005F3D0
    if (ctx->r15 == ctx->r16) {
        // 0x8005F3C4: nop
    
            goto L_8005F3D0;
    }
    // 0x8005F3C4: nop

    // 0x8005F3C8: b           L_8005F3E0
    // 0x8005F3CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8005F3E0;
    // 0x8005F3CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8005F3D0:
    // 0x8005F3D0: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8005F3D4: b           L_8005F3E0
    // 0x8005F3D8: nop

        goto L_8005F3E0;
    // 0x8005F3D8: nop

L_8005F3DC:
    // 0x8005F3DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8005F3E0:
    // 0x8005F3E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005F3E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005F3E8: jr          $ra
    // 0x8005F3EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8005F3EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8005F3F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F3F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005F3F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8005F3F8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8005F3FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005F400: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8005F404: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8005F408: nop

    // 0x8005F40C: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x8005F410: bne         $t8, $zero, L_8005F4FC
    if (ctx->r24 != 0) {
        // 0x8005F414: nop
    
            goto L_8005F4FC;
    }
    // 0x8005F414: nop

    // 0x8005F418: addiu       $t9, $t6, 0x60
    ctx->r25 = ADD32(ctx->r14, 0X60);
    // 0x8005F41C: jal         0x800B6550
    // 0x8005F420: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    osGetTime_recomp(rdram, ctx);
        goto after_0;
    // 0x8005F420: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_0:
    // 0x8005F424: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8005F428: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8005F42C: lw          $t3, 0x5C($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X5C);
    // 0x8005F430: lw          $t2, 0x58($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X58);
    // 0x8005F434: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x8005F438: sltu        $at, $v1, $t3
    ctx->r1 = ctx->r3 < ctx->r11 ? 1 : 0;
    // 0x8005F43C: subu        $t5, $v1, $t3
    ctx->r13 = SUB32(ctx->r3, ctx->r11);
    // 0x8005F440: subu        $t4, $v0, $t2
    ctx->r12 = SUB32(ctx->r2, ctx->r10);
    // 0x8005F444: subu        $t4, $t4, $at
    ctx->r12 = SUB32(ctx->r12, ctx->r1);
    // 0x8005F448: addu        $t7, $t5, $t9
    ctx->r15 = ADD32(ctx->r13, ctx->r25);
    // 0x8005F44C: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x8005F450: sltu        $at, $t7, $t9
    ctx->r1 = ctx->r15 < ctx->r25 ? 1 : 0;
    // 0x8005F454: addu        $t6, $at, $t4
    ctx->r14 = ADD32(ctx->r1, ctx->r12);
    // 0x8005F458: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x8005F45C: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x8005F460: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x8005F464: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8005F468: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8005F46C: lw          $a0, 0x50($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X50);
    // 0x8005F470: lw          $a1, 0x54($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X54);
    // 0x8005F474: jal         0x800B34D0
    // 0x8005F478: nop

    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8005F478: nop

    after_1:
    // 0x8005F47C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8005F480: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8005F484: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x8005F488: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005F48C: bne         $t3, $at, L_8005F4F4
    if (ctx->r11 != ctx->r1) {
        // 0x8005F490: nop
    
            goto L_8005F4F4;
    }
    // 0x8005F490: nop

    // 0x8005F494: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8005F498: lbu         $t4, 0x190($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X190);
    // 0x8005F49C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005F4A0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8005F4A4: sb          $t5, 0x190($at)
    MEM_B(0X190, ctx->r1) = ctx->r13;
    // 0x8005F4A8: lw          $t8, 0x8($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X8);
    // 0x8005F4AC: nop

    // 0x8005F4B0: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x8005F4B4: beq         $t9, $zero, L_8005F4F4
    if (ctx->r25 == 0) {
        // 0x8005F4B8: nop
    
            goto L_8005F4F4;
    }
    // 0x8005F4B8: nop

    // 0x8005F4BC: andi        $t6, $t8, 0x20
    ctx->r14 = ctx->r24 & 0X20;
    // 0x8005F4C0: beq         $t6, $zero, L_8005F4F4
    if (ctx->r14 == 0) {
        // 0x8005F4C4: nop
    
            goto L_8005F4F4;
    }
    // 0x8005F4C4: nop

    // 0x8005F4C8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8005F4CC: lw          $t7, 0x194($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X194);
    // 0x8005F4D0: nop

    // 0x8005F4D4: beq         $t7, $zero, L_8005F4E0
    if (ctx->r15 == 0) {
        // 0x8005F4D8: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_8005F4E0;
    }
    // 0x8005F4D8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005F4DC: sw          $zero, 0x194($at)
    MEM_W(0X194, ctx->r1) = 0;
L_8005F4E0:
    // 0x8005F4E0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8005F4E4: nop

    // 0x8005F4E8: lw          $a0, 0xC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XC);
    // 0x8005F4EC: jal         0x800B64F0
    // 0x8005F4F0: nop

    osViSwapBuffer_recomp(rdram, ctx);
        goto after_2;
    // 0x8005F4F0: nop

    after_2:
L_8005F4F4:
    // 0x8005F4F4: b           L_8005F500
    // 0x8005F4F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005F500;
    // 0x8005F4F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005F4FC:
    // 0x8005F4FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8005F500:
    // 0x8005F500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005F504: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8005F508: jr          $ra
    // 0x8005F50C: nop

    return;
    // 0x8005F50C: nop

;}
RECOMP_FUNC void func_8005F510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F510: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x8005F514: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8005F518: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8005F51C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8005F520: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005F524: bne         $t7, $at, L_8005F55C
    if (ctx->r15 != ctx->r1) {
        // 0x8005F528: nop
    
            goto L_8005F55C;
    }
    // 0x8005F528: nop

    // 0x8005F52C: lw          $t8, 0x26C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X26C);
    // 0x8005F530: nop

    // 0x8005F534: beq         $t8, $zero, L_8005F548
    if (ctx->r24 == 0) {
        // 0x8005F538: nop
    
            goto L_8005F548;
    }
    // 0x8005F538: nop

    // 0x8005F53C: lw          $t9, 0x26C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X26C);
    // 0x8005F540: b           L_8005F54C
    // 0x8005F544: sw          $a1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r5;
        goto L_8005F54C;
    // 0x8005F544: sw          $a1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r5;
L_8005F548:
    // 0x8005F548: sw          $a1, 0x264($a0)
    MEM_W(0X264, ctx->r4) = ctx->r5;
L_8005F54C:
    // 0x8005F54C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8005F550: sw          $a1, 0x26C($a0)
    MEM_W(0X26C, ctx->r4) = ctx->r5;
    // 0x8005F554: b           L_8005F580
    // 0x8005F558: sw          $t0, 0x280($a0)
    MEM_W(0X280, ctx->r4) = ctx->r8;
        goto L_8005F580;
    // 0x8005F558: sw          $t0, 0x280($a0)
    MEM_W(0X280, ctx->r4) = ctx->r8;
L_8005F55C:
    // 0x8005F55C: lw          $t1, 0x270($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X270);
    // 0x8005F560: nop

    // 0x8005F564: beq         $t1, $zero, L_8005F578
    if (ctx->r9 == 0) {
        // 0x8005F568: nop
    
            goto L_8005F578;
    }
    // 0x8005F568: nop

    // 0x8005F56C: lw          $t2, 0x270($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X270);
    // 0x8005F570: b           L_8005F57C
    // 0x8005F574: sw          $a1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r5;
        goto L_8005F57C;
    // 0x8005F574: sw          $a1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r5;
L_8005F578:
    // 0x8005F578: sw          $a1, 0x268($a0)
    MEM_W(0X268, ctx->r4) = ctx->r5;
L_8005F57C:
    // 0x8005F57C: sw          $a1, 0x270($a0)
    MEM_W(0X270, ctx->r4) = ctx->r5;
L_8005F580:
    // 0x8005F580: lw          $t3, 0x8($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X8);
    // 0x8005F584: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x8005F588: andi        $t4, $t3, 0x3
    ctx->r12 = ctx->r11 & 0X3;
    // 0x8005F58C: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x8005F590: jr          $ra
    // 0x8005F594: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8005F594: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8005F598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F598: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005F59C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8005F5A0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8005F5A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005F5A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8005F5AC: beq         $t6, $zero, L_8005F640
    if (ctx->r14 == 0) {
        // 0x8005F5B0: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_8005F640;
    }
    // 0x8005F5B0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8005F5B4: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x8005F5B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005F5BC: bne         $t7, $at, L_8005F5CC
    if (ctx->r15 != ctx->r1) {
        // 0x8005F5C0: nop
    
            goto L_8005F5CC;
    }
    // 0x8005F5C0: nop

    // 0x8005F5C4: jal         0x800B6650
    // 0x8005F5C8: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_0;
    // 0x8005F5C8: nop

    after_0:
L_8005F5CC:
    // 0x8005F5CC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8005F5D0: addiu       $at, $zero, -0x31
    ctx->r1 = ADD32(0, -0X31);
    // 0x8005F5D4: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8005F5D8: nop

    // 0x8005F5DC: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x8005F5E0: jal         0x800B6550
    // 0x8005F5E4: sw          $t0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r8;
    osGetTime_recomp(rdram, ctx);
        goto after_1;
    // 0x8005F5E4: sw          $t0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r8;
    after_1:
    // 0x8005F5E8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8005F5EC: nop

    // 0x8005F5F0: sw          $v0, 0x58($t1)
    MEM_W(0X58, ctx->r9) = ctx->r2;
    // 0x8005F5F4: sw          $v1, 0x5C($t1)
    MEM_W(0X5C, ctx->r9) = ctx->r3;
    // 0x8005F5F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8005F5FC: jal         0x800B679C
    // 0x8005F600: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_2;
    // 0x8005F600: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_2:
    // 0x8005F604: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8005F608: jal         0x800B692C
    // 0x8005F60C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_3;
    // 0x8005F60C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_3:
    // 0x8005F610: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8005F614: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8005F618: nop

    // 0x8005F61C: sw          $t2, 0x274($t3)
    MEM_W(0X274, ctx->r11) = ctx->r10;
    // 0x8005F620: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8005F624: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8005F628: nop

    // 0x8005F62C: bne         $t4, $t5, L_8005F640
    if (ctx->r12 != ctx->r13) {
        // 0x8005F630: nop
    
            goto L_8005F640;
    }
    // 0x8005F630: nop

    // 0x8005F634: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8005F638: nop

    // 0x8005F63C: sw          $t5, 0x278($t6)
    MEM_W(0X278, ctx->r14) = ctx->r13;
L_8005F640:
    // 0x8005F640: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8005F644: nop

    // 0x8005F648: beq         $t7, $zero, L_8005F69C
    if (ctx->r15 == 0) {
        // 0x8005F64C: nop
    
            goto L_8005F69C;
    }
    // 0x8005F64C: nop

    // 0x8005F650: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8005F654: nop

    // 0x8005F658: beq         $t7, $t9, L_8005F69C
    if (ctx->r15 == ctx->r25) {
        // 0x8005F65C: nop
    
            goto L_8005F69C;
    }
    // 0x8005F65C: nop

    // 0x8005F660: lw          $t0, 0x3C($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X3C);
    // 0x8005F664: lw          $a0, 0x38($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X38);
    // 0x8005F668: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x8005F66C: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x8005F670: jal         0x800B6970
    // 0x8005F674: nop

    osDpSetNextBuffer_recomp(rdram, ctx);
        goto after_4;
    // 0x8005F674: nop

    after_4:
    // 0x8005F678: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8005F67C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005F680: sw          $t8, 0x188($at)
    MEM_W(0X188, ctx->r1) = ctx->r24;
    // 0x8005F684: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8005F688: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8005F68C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005F690: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8005F694: sw          $zero, 0x18C($at)
    MEM_W(0X18C, ctx->r1) = 0;
    // 0x8005F698: sw          $t1, 0x278($t2)
    MEM_W(0X278, ctx->r10) = ctx->r9;
L_8005F69C:
    // 0x8005F69C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005F6A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8005F6A4: jr          $ra
    // 0x8005F6A8: nop

    return;
    // 0x8005F6A8: nop

;}
RECOMP_FUNC void func_8005F6AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F6AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005F6B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8005F6B4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8005F6B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005F6BC: lw          $t7, 0x274($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X274);
    // 0x8005F6C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005F6C4: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x8005F6C8: nop

    // 0x8005F6CC: bne         $t8, $at, L_8005F6E8
    if (ctx->r24 != ctx->r1) {
        // 0x8005F6D0: nop
    
            goto L_8005F6E8;
    }
    // 0x8005F6D0: nop

    // 0x8005F6D4: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x8005F6D8: nop

    // 0x8005F6DC: ori         $t0, $t9, 0x10
    ctx->r8 = ctx->r25 | 0X10;
    // 0x8005F6E0: jal         0x800B78B0
    // 0x8005F6E4: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    osSpTaskYield_recomp(rdram, ctx);
        goto after_0;
    // 0x8005F6E4: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    after_0:
L_8005F6E8:
    // 0x8005F6E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005F6EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005F6F0: jr          $ra
    // 0x8005F6F4: nop

    return;
    // 0x8005F6F4: nop

;}
RECOMP_FUNC void func_8005F6F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F6F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005F6FC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8005F700: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8005F704: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8005F708: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8005F70C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005F710: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8005F714: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8005F718: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8005F71C: lw          $t8, 0x268($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X268);
    // 0x8005F720: nop

    // 0x8005F724: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8005F728: lw          $t9, 0x264($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X264);
    // 0x8005F72C: nop

    // 0x8005F730: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8005F734: lw          $t0, 0x280($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X280);
    // 0x8005F738: nop

    // 0x8005F73C: beq         $t0, $zero, L_8005F7EC
    if (ctx->r8 == 0) {
        // 0x8005F740: nop
    
            goto L_8005F7EC;
    }
    // 0x8005F740: nop

    // 0x8005F744: andi        $t1, $t6, 0x2
    ctx->r9 = ctx->r14 & 0X2;
    // 0x8005F748: beq         $t1, $zero, L_8005F7EC
    if (ctx->r9 == 0) {
        // 0x8005F74C: nop
    
            goto L_8005F7EC;
    }
    // 0x8005F74C: nop

    // 0x8005F750: beq         $t8, $zero, L_8005F78C
    if (ctx->r24 == 0) {
        // 0x8005F754: nop
    
            goto L_8005F78C;
    }
    // 0x8005F754: nop

    // 0x8005F758: lw          $t2, 0x8($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X8);
    // 0x8005F75C: nop

    // 0x8005F760: andi        $t3, $t2, 0x10
    ctx->r11 = ctx->r10 & 0X10;
    // 0x8005F764: beq         $t3, $zero, L_8005F78C
    if (ctx->r11 == 0) {
        // 0x8005F768: nop
    
            goto L_8005F78C;
    }
    // 0x8005F768: nop

    // 0x8005F76C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F770: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8005F774: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x8005F778: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8005F77C: nop

    // 0x8005F780: and         $t9, $t5, $at
    ctx->r25 = ctx->r13 & ctx->r1;
    // 0x8005F784: b           L_8005FA3C
    // 0x8005F788: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
        goto L_8005FA3C;
    // 0x8005F788: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_8005F78C:
    // 0x8005F78C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8005F790: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F794: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8005F798: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x8005F79C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8005F7A0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8005F7A4: and         $t1, $t6, $at
    ctx->r9 = ctx->r14 & ctx->r1;
    // 0x8005F7A8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8005F7AC: sw          $zero, 0x280($t2)
    MEM_W(0X280, ctx->r10) = 0;
    // 0x8005F7B0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8005F7B4: nop

    // 0x8005F7B8: lw          $t8, 0x264($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X264);
    // 0x8005F7BC: nop

    // 0x8005F7C0: lw          $t4, 0x0($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X0);
    // 0x8005F7C4: nop

    // 0x8005F7C8: sw          $t4, 0x264($t3)
    MEM_W(0X264, ctx->r11) = ctx->r12;
    // 0x8005F7CC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8005F7D0: nop

    // 0x8005F7D4: lw          $t9, 0x264($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X264);
    // 0x8005F7D8: nop

    // 0x8005F7DC: bne         $t9, $zero, L_8005FA3C
    if (ctx->r25 != 0) {
        // 0x8005F7E0: nop
    
            goto L_8005FA3C;
    }
    // 0x8005F7E0: nop

    // 0x8005F7E4: b           L_8005FA3C
    // 0x8005F7E8: sw          $zero, 0x26C($t5)
    MEM_W(0X26C, ctx->r13) = 0;
        goto L_8005FA3C;
    // 0x8005F7E8: sw          $zero, 0x26C($t5)
    MEM_W(0X26C, ctx->r13) = 0;
L_8005F7EC:
    // 0x8005F7EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8005F7F0: jal         0x8005F388
    // 0x8005F7F4: nop

    func_8005F388(rdram, ctx);
        goto after_0;
    // 0x8005F7F4: nop

    after_0:
    // 0x8005F7F8: beq         $v0, $zero, L_8005FA3C
    if (ctx->r2 == 0) {
        // 0x8005F7FC: nop
    
            goto L_8005FA3C;
    }
    // 0x8005F7FC: nop

    // 0x8005F800: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8005F804: nop

    // 0x8005F808: lw          $t0, 0x8($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X8);
    // 0x8005F80C: nop

    // 0x8005F810: andi        $t6, $t0, 0x7
    ctx->r14 = ctx->r8 & 0X7;
    // 0x8005F814: addiu       $t1, $t6, -0x1
    ctx->r9 = ADD32(ctx->r14, -0X1);
    // 0x8005F818: sltiu       $at, $t1, 0x7
    ctx->r1 = ctx->r9 < 0X7 ? 1 : 0;
    // 0x8005F81C: beq         $at, $zero, L_8005FA3C
    if (ctx->r1 == 0) {
        // 0x8005F820: nop
    
            goto L_8005FA3C;
    }
    // 0x8005F820: nop

    // 0x8005F824: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8005F828: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005F82C: addu        $at, $at, $t1
    gpr jr_addend_8005F838 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8005F830: lw          $t1, -0x2D90($at)
    ctx->r9 = ADD32(ctx->r1, -0X2D90);
    // 0x8005F834: nop

    // 0x8005F838: jr          $t1
    // 0x8005F83C: nop

    switch (jr_addend_8005F838 >> 2) {
        case 0: goto L_8005FA3C; break;
        case 1: goto L_8005F970; break;
        case 2: goto L_8005F840; break;
        case 3: goto L_8005FA3C; break;
        case 4: goto L_8005FA3C; break;
        case 5: goto L_8005F970; break;
        case 6: goto L_8005F970; break;
        default: switch_error(__func__, 0x8005F838, 0x800DD270);
    }
    // 0x8005F83C: nop

L_8005F840:
    // 0x8005F840: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8005F844: nop

    // 0x8005F848: lw          $t8, 0x4($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X4);
    // 0x8005F84C: nop

    // 0x8005F850: andi        $t4, $t8, 0x20
    ctx->r12 = ctx->r24 & 0X20;
    // 0x8005F854: beq         $t4, $zero, L_8005F8F8
    if (ctx->r12 == 0) {
        // 0x8005F858: nop
    
            goto L_8005F8F8;
    }
    // 0x8005F858: nop

    // 0x8005F85C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8005F860: nop

    // 0x8005F864: andi        $t9, $t3, 0x2
    ctx->r25 = ctx->r11 & 0X2;
    // 0x8005F868: beq         $t9, $zero, L_8005FA3C
    if (ctx->r25 == 0) {
        // 0x8005F86C: nop
    
            goto L_8005FA3C;
    }
    // 0x8005F86C: nop

    // 0x8005F870: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F874: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8005F878: sw          $t2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r10;
    // 0x8005F87C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8005F880: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8005F884: and         $t0, $t7, $at
    ctx->r8 = ctx->r15 & ctx->r1;
    // 0x8005F888: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8005F88C: lw          $t1, 0x4($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X4);
    // 0x8005F890: nop

    // 0x8005F894: andi        $t8, $t1, 0x1
    ctx->r24 = ctx->r9 & 0X1;
    // 0x8005F898: beq         $t8, $zero, L_8005F8BC
    if (ctx->r24 == 0) {
        // 0x8005F89C: nop
    
            goto L_8005F8BC;
    }
    // 0x8005F89C: nop

    // 0x8005F8A0: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8005F8A4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8005F8A8: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x8005F8AC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8005F8B0: nop

    // 0x8005F8B4: and         $t9, $t3, $at
    ctx->r25 = ctx->r11 & ctx->r1;
    // 0x8005F8B8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_8005F8BC:
    // 0x8005F8BC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8005F8C0: nop

    // 0x8005F8C4: lw          $t5, 0x268($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X268);
    // 0x8005F8C8: nop

    // 0x8005F8CC: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x8005F8D0: nop

    // 0x8005F8D4: sw          $t7, 0x268($t2)
    MEM_W(0X268, ctx->r10) = ctx->r15;
    // 0x8005F8D8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8005F8DC: nop

    // 0x8005F8E0: lw          $t1, 0x268($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X268);
    // 0x8005F8E4: nop

    // 0x8005F8E8: bne         $t1, $zero, L_8005FA3C
    if (ctx->r9 != 0) {
        // 0x8005F8EC: nop
    
            goto L_8005FA3C;
    }
    // 0x8005F8EC: nop

    // 0x8005F8F0: b           L_8005FA3C
    // 0x8005F8F4: sw          $zero, 0x270($t0)
    MEM_W(0X270, ctx->r8) = 0;
        goto L_8005FA3C;
    // 0x8005F8F4: sw          $zero, 0x270($t0)
    MEM_W(0X270, ctx->r8) = 0;
L_8005F8F8:
    // 0x8005F8F8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8005F8FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005F900: bne         $t8, $at, L_8005FA3C
    if (ctx->r24 != ctx->r1) {
        // 0x8005F904: nop
    
            goto L_8005FA3C;
    }
    // 0x8005F904: nop

    // 0x8005F908: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8005F90C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8005F910: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x8005F914: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x8005F918: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8005F91C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F920: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x8005F924: nop

    // 0x8005F928: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x8005F92C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8005F930: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8005F934: and         $t2, $t7, $at
    ctx->r10 = ctx->r15 & ctx->r1;
    // 0x8005F938: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x8005F93C: lw          $t0, 0x268($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X268);
    // 0x8005F940: nop

    // 0x8005F944: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x8005F948: nop

    // 0x8005F94C: sw          $t8, 0x268($t1)
    MEM_W(0X268, ctx->r9) = ctx->r24;
    // 0x8005F950: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8005F954: nop

    // 0x8005F958: lw          $t4, 0x268($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X268);
    // 0x8005F95C: nop

    // 0x8005F960: bne         $t4, $zero, L_8005FA3C
    if (ctx->r12 != 0) {
        // 0x8005F964: nop
    
            goto L_8005FA3C;
    }
    // 0x8005F964: nop

    // 0x8005F968: b           L_8005FA3C
    // 0x8005F96C: sw          $zero, 0x270($t6)
    MEM_W(0X270, ctx->r14) = 0;
        goto L_8005FA3C;
    // 0x8005F96C: sw          $zero, 0x270($t6)
    MEM_W(0X270, ctx->r14) = 0;
L_8005F970:
    // 0x8005F970: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8005F974: nop

    // 0x8005F978: lw          $t9, 0x4($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X4);
    // 0x8005F97C: nop

    // 0x8005F980: andi        $t5, $t9, 0x2
    ctx->r13 = ctx->r25 & 0X2;
    // 0x8005F984: beq         $t5, $zero, L_8005F9C0
    if (ctx->r13 == 0) {
        // 0x8005F988: nop
    
            goto L_8005F9C0;
    }
    // 0x8005F988: nop

    // 0x8005F98C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8005F990: nop

    // 0x8005F994: andi        $t2, $t7, 0x2
    ctx->r10 = ctx->r15 & 0X2;
    // 0x8005F998: beq         $t2, $zero, L_8005FA3C
    if (ctx->r10 == 0) {
        // 0x8005F99C: nop
    
            goto L_8005FA3C;
    }
    // 0x8005F99C: nop

    // 0x8005F9A0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F9A4: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8005F9A8: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x8005F9AC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8005F9B0: nop

    // 0x8005F9B4: and         $t1, $t8, $at
    ctx->r9 = ctx->r24 & ctx->r1;
    // 0x8005F9B8: b           L_8005FA3C
    // 0x8005F9BC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
        goto L_8005FA3C;
    // 0x8005F9BC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_8005F9C0:
    // 0x8005F9C0: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8005F9C4: nop

    // 0x8005F9C8: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
    // 0x8005F9CC: nop

    // 0x8005F9D0: andi        $t9, $t6, 0x1
    ctx->r25 = ctx->r14 & 0X1;
    // 0x8005F9D4: beq         $t9, $zero, L_8005FA3C
    if (ctx->r25 == 0) {
        // 0x8005F9D8: nop
    
            goto L_8005FA3C;
    }
    // 0x8005F9D8: nop

    // 0x8005F9DC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8005F9E0: nop

    // 0x8005F9E4: andi        $t7, $t5, 0x1
    ctx->r15 = ctx->r13 & 0X1;
    // 0x8005F9E8: beq         $t7, $zero, L_8005FA3C
    if (ctx->r15 == 0) {
        // 0x8005F9EC: nop
    
            goto L_8005FA3C;
    }
    // 0x8005F9EC: nop

    // 0x8005F9F0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8005F9F4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8005F9F8: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    // 0x8005F9FC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8005FA00: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8005FA04: and         $t0, $t3, $at
    ctx->r8 = ctx->r11 & ctx->r1;
    // 0x8005FA08: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8005FA0C: lw          $t1, 0x268($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X268);
    // 0x8005FA10: nop

    // 0x8005FA14: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x8005FA18: nop

    // 0x8005FA1C: sw          $t6, 0x268($t8)
    MEM_W(0X268, ctx->r24) = ctx->r14;
    // 0x8005FA20: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8005FA24: nop

    // 0x8005FA28: lw          $t5, 0x268($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X268);
    // 0x8005FA2C: nop

    // 0x8005FA30: bne         $t5, $zero, L_8005FA3C
    if (ctx->r13 != 0) {
        // 0x8005FA34: nop
    
            goto L_8005FA3C;
    }
    // 0x8005FA34: nop

    // 0x8005FA38: sw          $zero, 0x270($t9)
    MEM_W(0X270, ctx->r25) = 0;
L_8005FA3C:
    // 0x8005FA3C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8005FA40: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8005FA44: nop

    // 0x8005FA48: beq         $t7, $t4, L_8005FA68
    if (ctx->r15 == ctx->r12) {
        // 0x8005FA4C: nop
    
            goto L_8005FA68;
    }
    // 0x8005FA4C: nop

    // 0x8005FA50: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8005FA54: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8005FA58: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8005FA5C: jal         0x8005F6F8
    // 0x8005FA60: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    func_8005F6F8(rdram, ctx);
        goto after_1;
    // 0x8005FA60: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    after_1:
    // 0x8005FA64: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_8005FA68:
    // 0x8005FA68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005FA6C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8005FA70: jr          $ra
    // 0x8005FA74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8005FA74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8005FA78: nop

    // 0x8005FA7C: nop

;}
RECOMP_FUNC void func_8005FA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FA80: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005FA84: lw          $a0, -0xDA0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XDA0);
    // 0x8005FA88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005FA8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005FA90: jal         0x800B7A58
    // 0x8005FA94: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    guMtxIdent(rdram, ctx);
        goto after_0;
    // 0x8005FA94: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    after_0:
    // 0x8005FA98: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8005FA9C: lw          $t7, -0xDA0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0XDA0);
    // 0x8005FAA0: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x8005FAA4: sh          $t6, 0x90($t7)
    MEM_H(0X90, ctx->r15) = ctx->r14;
    // 0x8005FAA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005FAAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005FAB0: jr          $ra
    // 0x8005FAB4: nop

    return;
    // 0x8005FAB4: nop

;}
