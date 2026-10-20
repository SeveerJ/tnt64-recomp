#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80072B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072B30: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80072B34: divu        $zero, $a1, $at
    lo = S32(U32(ctx->r5) / U32(ctx->r1)); hi = S32(U32(ctx->r5) % U32(ctx->r1));
    // 0x80072B38: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80072B3C: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x80072B40: sb          $zero, 0x2($a0)
    MEM_B(0X2, ctx->r4) = 0;
    // 0x80072B44: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x80072B48: mfhi        $t7
    ctx->r15 = hi;
    // 0x80072B4C: sb          $t7, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r15;
    // 0x80072B50: jr          $ra
    // 0x80072B54: nop

    return;
    // 0x80072B54: nop

;}
RECOMP_FUNC void func_80072B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072B58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80072B5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80072B60: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80072B64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80072B68: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x80072B6C: jal         0x8006089C
    // 0x80072B70: nop

    func_8006089C(rdram, ctx);
        goto after_0;
    // 0x80072B70: nop

    after_0:
    // 0x80072B74: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80072B78: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80072B7C: sw          $v0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r2;
    // 0x80072B80: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80072B84: nop

    // 0x80072B88: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80072B8C: nop

    // 0x80072B90: divu        $zero, $t9, $at
    lo = S32(U32(ctx->r25) / U32(ctx->r1)); hi = S32(U32(ctx->r25) % U32(ctx->r1));
    // 0x80072B94: mfhi        $t0
    ctx->r8 = hi;
    // 0x80072B98: sb          $t0, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r8;
    // 0x80072B9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80072BA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80072BA4: jr          $ra
    // 0x80072BA8: nop

    return;
    // 0x80072BA8: nop

;}
RECOMP_FUNC void func_80072BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072BAC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80072BB0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80072BB4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80072BB8: slti        $at, $s1, 0x13
    ctx->r1 = SIGNED(ctx->r17) < 0X13 ? 1 : 0;
    // 0x80072BBC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80072BC0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80072BC4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80072BC8: beq         $at, $zero, L_80072C14
    if (ctx->r1 == 0) {
        // 0x80072BCC: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80072C14;
    }
    // 0x80072BCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
L_80072BD0:
    // 0x80072BD0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80072BD4: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x80072BD8: beq         $at, $zero, L_80072C04
    if (ctx->r1 == 0) {
        // 0x80072BDC: nop
    
            goto L_80072C04;
    }
    // 0x80072BDC: nop

L_80072BE0:
    // 0x80072BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80072BE4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80072BE8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80072BEC: jal         0x8006E0E8
    // 0x80072BF0: addiu       $a3, $s1, 0x1
    ctx->r7 = ADD32(ctx->r17, 0X1);
    func_8006E0E8(rdram, ctx);
        goto after_0;
    // 0x80072BF0: addiu       $a3, $s1, 0x1
    ctx->r7 = ADD32(ctx->r17, 0X1);
    after_0:
    // 0x80072BF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80072BF8: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x80072BFC: bne         $at, $zero, L_80072BE0
    if (ctx->r1 != 0) {
        // 0x80072C00: nop
    
            goto L_80072BE0;
    }
    // 0x80072C00: nop

L_80072C04:
    // 0x80072C04: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80072C08: slti        $at, $s1, 0x13
    ctx->r1 = SIGNED(ctx->r17) < 0X13 ? 1 : 0;
    // 0x80072C0C: bne         $at, $zero, L_80072BD0
    if (ctx->r1 != 0) {
        // 0x80072C10: nop
    
            goto L_80072BD0;
    }
    // 0x80072C10: nop

L_80072C14:
    // 0x80072C14: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80072C18: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x80072C1C: beq         $at, $zero, L_80072C74
    if (ctx->r1 == 0) {
        // 0x80072C20: nop
    
            goto L_80072C74;
    }
    // 0x80072C20: nop

L_80072C24:
    // 0x80072C24: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80072C28: nop

    // 0x80072C2C: lbu         $t7, 0x1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1);
    // 0x80072C30: nop

    // 0x80072C34: beq         $t7, $s0, L_80072C64
    if (ctx->r15 == ctx->r16) {
        // 0x80072C38: nop
    
            goto L_80072C64;
    }
    // 0x80072C38: nop

    // 0x80072C3C: jal         0x80060814
    // 0x80072C40: nop

    func_80060814(rdram, ctx);
        goto after_1;
    // 0x80072C40: nop

    after_1:
    // 0x80072C44: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80072C48: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80072C4C: divu        $zero, $s2, $at
    lo = S32(U32(ctx->r18) / U32(ctx->r1)); hi = S32(U32(ctx->r18) % U32(ctx->r1));
    // 0x80072C50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80072C54: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x80072C58: mfhi        $a2
    ctx->r6 = hi;
    // 0x80072C5C: jal         0x8006DE40
    // 0x80072C60: nop

    func_8006DE40(rdram, ctx);
        goto after_2;
    // 0x80072C60: nop

    after_2:
L_80072C64:
    // 0x80072C64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80072C68: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x80072C6C: bne         $at, $zero, L_80072C24
    if (ctx->r1 != 0) {
        // 0x80072C70: nop
    
            goto L_80072C24;
    }
    // 0x80072C70: nop

L_80072C74:
    // 0x80072C74: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80072C78: nop

    // 0x80072C7C: lbu         $t9, 0x2($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X2);
    // 0x80072C80: nop

    // 0x80072C84: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80072C88: sb          $t0, 0x2($t8)
    MEM_B(0X2, ctx->r24) = ctx->r8;
    // 0x80072C8C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80072C90: nop

    // 0x80072C94: lbu         $t2, 0x2($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X2);
    // 0x80072C98: lbu         $t3, 0x0($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X0);
    // 0x80072C9C: nop

    // 0x80072CA0: bne         $t2, $t3, L_80072CB0
    if (ctx->r10 != ctx->r11) {
        // 0x80072CA4: nop
    
            goto L_80072CB0;
    }
    // 0x80072CA4: nop

    // 0x80072CA8: jal         0x80072B58
    // 0x80072CAC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_80072B58(rdram, ctx);
        goto after_3;
    // 0x80072CAC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_3:
L_80072CB0:
    // 0x80072CB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80072CB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80072CB8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80072CBC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80072CC0: jr          $ra
    // 0x80072CC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80072CC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80072CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072CC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80072CCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80072CD0: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x80072CD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80072CD8: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x80072CDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80072CE0: bne         $at, $zero, L_80072D00
    if (ctx->r1 != 0) {
        // 0x80072CE4: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_80072D00;
    }
    // 0x80072CE4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80072CE8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80072CEC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80072CF0: addiu       $a1, $a1, -0x2570
    ctx->r5 = ADD32(ctx->r5, -0X2570);
    // 0x80072CF4: addiu       $a0, $a0, -0x2580
    ctx->r4 = ADD32(ctx->r4, -0X2580);
    // 0x80072CF8: jal         0x8004A5A0
    // 0x80072CFC: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    func_8004A5A0(rdram, ctx);
        goto after_0;
    // 0x80072CFC: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    after_0:
L_80072D00:
    // 0x80072D00: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80072D04: lbu         $t9, 0x1F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1F);
    // 0x80072D08: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    // 0x80072D0C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80072D10: sb          $t7, 0x1E($t0)
    MEM_B(0X1E, ctx->r8) = ctx->r15;
    // 0x80072D14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80072D18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80072D1C: jr          $ra
    // 0x80072D20: nop

    return;
    // 0x80072D20: nop

;}
RECOMP_FUNC void func_80072D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072D24: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80072D28: addu        $t6, $a0, $a1
    ctx->r14 = ADD32(ctx->r4, ctx->r5);
    // 0x80072D2C: lbu         $v0, 0x1E($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X1E);
    // 0x80072D30: jr          $ra
    // 0x80072D34: nop

    return;
    // 0x80072D34: nop

;}
RECOMP_FUNC void func_80072D38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072D38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80072D3C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80072D40: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80072D44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80072D48: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80072D4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80072D50: sb          $zero, 0x1($t6)
    MEM_B(0X1, ctx->r14) = 0;
    // 0x80072D54: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80072D58: jal         0x80072E2C
    // 0x80072D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80072E2C(rdram, ctx);
        goto after_0;
    // 0x80072D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80072D60: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80072D64: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x80072D68: sb          $zero, 0x1C($t7)
    MEM_B(0X1C, ctx->r15) = 0;
    // 0x80072D6C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80072D70: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80072D74: sw          $zero, 0x8($t8)
    MEM_W(0X8, ctx->r24) = 0;
    // 0x80072D78: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80072D7C: nop

    // 0x80072D80: sw          $zero, 0xC($t9)
    MEM_W(0XC, ctx->r25) = 0;
    // 0x80072D84: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80072D88: nop

    // 0x80072D8C: sb          $t0, 0x10($t1)
    MEM_B(0X10, ctx->r9) = ctx->r8;
    // 0x80072D90: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80072D94: lbu         $t2, -0x10DF($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X10DF);
    // 0x80072D98: nop

    // 0x80072D9C: sb          $t2, 0x1D($t3)
    MEM_B(0X1D, ctx->r11) = ctx->r10;
    // 0x80072DA0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80072DA4: nop

    // 0x80072DA8: sb          $zero, 0x3($t4)
    MEM_B(0X3, ctx->r12) = 0;
    // 0x80072DAC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80072DB0: nop

    // 0x80072DB4: sb          $zero, 0x4($t5)
    MEM_B(0X4, ctx->r13) = 0;
    // 0x80072DB8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80072DBC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80072DC0: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x80072DC4: jal         0x80072B30
    // 0x80072DC8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_80072B30(rdram, ctx);
        goto after_1;
    // 0x80072DC8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_1:
    // 0x80072DCC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80072DD0: nop

    // 0x80072DD4: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80072DD8: jal         0x8006089C
    // 0x80072DDC: nop

    func_8006089C(rdram, ctx);
        goto after_2;
    // 0x80072DDC: nop

    after_2:
    // 0x80072DE0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80072DE4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80072DE8: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80072DEC: beq         $at, $zero, L_80072E14
    if (ctx->r1 == 0) {
        // 0x80072DF0: sw          $v0, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->r2;
            goto L_80072E14;
    }
    // 0x80072DF0: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
L_80072DF4:
    // 0x80072DF4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80072DF8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80072DFC: jal         0x80072CC8
    // 0x80072E00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80072CC8(rdram, ctx);
        goto after_3;
    // 0x80072E00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80072E04: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80072E08: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80072E0C: bne         $at, $zero, L_80072DF4
    if (ctx->r1 != 0) {
        // 0x80072E10: nop
    
            goto L_80072DF4;
    }
    // 0x80072E10: nop

L_80072E14:
    // 0x80072E14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80072E18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80072E1C: jr          $ra
    // 0x80072E20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80072E20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80072E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072E24: jr          $ra
    // 0x80072E28: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    return;
    // 0x80072E28: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80072E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072E2C: jr          $ra
    // 0x80072E30: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    return;
    // 0x80072E30: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80072E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072E34: jr          $ra
    // 0x80072E38: sb          $a1, 0x1D($a0)
    MEM_B(0X1D, ctx->r4) = ctx->r5;
    return;
    // 0x80072E38: sb          $a1, 0x1D($a0)
    MEM_B(0X1D, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80072E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072E3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80072E40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80072E44: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80072E48: lw          $s0, -0x380($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X380);
    // 0x80072E4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80072E50: lbu         $t6, 0x3($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3);
    // 0x80072E54: nop

    // 0x80072E58: beq         $t6, $zero, L_80072E7C
    if (ctx->r14 == 0) {
        // 0x80072E5C: nop
    
            goto L_80072E7C;
    }
    // 0x80072E5C: nop

    // 0x80072E60: jal         0x8006DDD0
    // 0x80072E64: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8006DDD0(rdram, ctx);
        goto after_0;
    // 0x80072E64: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x80072E68: beq         $v0, $zero, L_80072E98
    if (ctx->r2 == 0) {
        // 0x80072E6C: nop
    
            goto L_80072E98;
    }
    // 0x80072E6C: nop

    // 0x80072E70: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80072E74: b           L_80072F0C
    // 0x80072E78: sb          $t7, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r15;
        goto L_80072F0C;
    // 0x80072E78: sb          $t7, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r15;
L_80072E7C:
    // 0x80072E7C: jal         0x8006DD64
    // 0x80072E80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006DD64(rdram, ctx);
        goto after_1;
    // 0x80072E80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80072E84: beq         $v0, $zero, L_80072E98
    if (ctx->r2 == 0) {
        // 0x80072E88: nop
    
            goto L_80072E98;
    }
    // 0x80072E88: nop

    // 0x80072E8C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80072E90: b           L_80072F0C
    // 0x80072E94: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
        goto L_80072F0C;
    // 0x80072E94: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
L_80072E98:
    // 0x80072E98: lbu         $t9, 0x6($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X6);
    // 0x80072E9C: nop

    // 0x80072EA0: bne         $t9, $zero, L_80072EFC
    if (ctx->r25 != 0) {
        // 0x80072EA4: nop
    
            goto L_80072EFC;
    }
    // 0x80072EA4: nop

    // 0x80072EA8: jal         0x80072BAC
    // 0x80072EAC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_80072BAC(rdram, ctx);
        goto after_2;
    // 0x80072EAC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80072EB0: lbu         $t0, 0x1C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1C);
    // 0x80072EB4: lbu         $t2, 0x5($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X5);
    // 0x80072EB8: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80072EBC: sb          $t1, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r9;
    // 0x80072EC0: lbu         $t5, 0x1C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1C);
    // 0x80072EC4: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80072EC8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80072ECC: sb          $t3, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r11;
    // 0x80072ED0: beq         $t5, $zero, L_80072EF0
    if (ctx->r13 == 0) {
        // 0x80072ED4: sb          $t4, 0x6($s0)
        MEM_B(0X6, ctx->r16) = ctx->r12;
            goto L_80072EF0;
    }
    // 0x80072ED4: sb          $t4, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r12;
    // 0x80072ED8: lbu         $t6, 0x5($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X5);
    // 0x80072EDC: lbu         $t7, 0x10($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X10);
    // 0x80072EE0: nop

    // 0x80072EE4: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80072EE8: bne         $at, $zero, L_80072F0C
    if (ctx->r1 != 0) {
        // 0x80072EEC: nop
    
            goto L_80072F0C;
    }
    // 0x80072EEC: nop

L_80072EF0:
    // 0x80072EF0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80072EF4: b           L_80072F0C
    // 0x80072EF8: sb          $t8, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r24;
        goto L_80072F0C;
    // 0x80072EF8: sb          $t8, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r24;
L_80072EFC:
    // 0x80072EFC: lbu         $t9, 0x6($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X6);
    // 0x80072F00: nop

    // 0x80072F04: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80072F08: sb          $t0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r8;
L_80072F0C:
    // 0x80072F0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80072F10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80072F14: jr          $ra
    // 0x80072F18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80072F18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80072F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072F1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80072F20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80072F24: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80072F28: lw          $s0, -0x380($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X380);
    // 0x80072F2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80072F30: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80072F34: lbu         $t6, 0x1($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1);
    // 0x80072F38: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x80072F3C: beq         $t6, $zero, L_80072F54
    if (ctx->r14 == 0) {
        // 0x80072F40: nop
    
            goto L_80072F54;
    }
    // 0x80072F40: nop

    // 0x80072F44: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
    // 0x80072F48: nop

    // 0x80072F4C: bne         $t7, $zero, L_80072F68
    if (ctx->r15 != 0) {
        // 0x80072F50: nop
    
            goto L_80072F68;
    }
    // 0x80072F50: nop

L_80072F54:
    // 0x80072F54: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80072F58: sb          $t8, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r24;
    // 0x80072F5C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80072F60: b           L_80072FA0
    // 0x80072F64: nop

        goto L_80072FA0;
    // 0x80072F64: nop

L_80072F68:
    // 0x80072F68: lbu         $t9, 0x1($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1);
    // 0x80072F6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80072F70: bne         $t9, $at, L_80072F80
    if (ctx->r25 != ctx->r1) {
        // 0x80072F74: nop
    
            goto L_80072F80;
    }
    // 0x80072F74: nop

    // 0x80072F78: jal         0x80072E3C
    // 0x80072F7C: nop

    func_80072E3C(rdram, ctx);
        goto after_0;
    // 0x80072F7C: nop

    after_0:
L_80072F80:
    // 0x80072F80: lbu         $t0, 0x4($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X4);
    // 0x80072F84: nop

    // 0x80072F88: beq         $t0, $zero, L_80072F98
    if (ctx->r8 == 0) {
        // 0x80072F8C: nop
    
            goto L_80072F98;
    }
    // 0x80072F8C: nop

    // 0x80072F90: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80072F94: sb          $t1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r9;
L_80072F98:
    // 0x80072F98: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80072F9C: nop

L_80072FA0:
    // 0x80072FA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80072FA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80072FA8: jr          $ra
    // 0x80072FAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80072FAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80072FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072FB0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80072FB4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80072FB8: lw          $a0, -0x380($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X380);
    // 0x80072FBC: jr          $ra
    // 0x80072FC0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80072FC0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80072FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072FC4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80072FC8: lw          $a0, -0x380($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X380);
    // 0x80072FCC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80072FD0: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x80072FD4: nop

    // 0x80072FD8: bne         $t6, $zero, L_80072FE4
    if (ctx->r14 != 0) {
        // 0x80072FDC: nop
    
            goto L_80072FE4;
    }
    // 0x80072FDC: nop

    // 0x80072FE0: sb          $zero, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = 0;
L_80072FE4:
    // 0x80072FE4: lbu         $t7, 0x1C($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1C);
    // 0x80072FE8: nop

    // 0x80072FEC: bne         $t7, $zero, L_80072FFC
    if (ctx->r15 != 0) {
        // 0x80072FF0: nop
    
            goto L_80072FFC;
    }
    // 0x80072FF0: nop

    // 0x80072FF4: b           L_8007300C
    // 0x80072FF8: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
        goto L_8007300C;
    // 0x80072FF8: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
L_80072FFC:
    // 0x80072FFC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80073000: sb          $t8, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r24;
    // 0x80073004: sb          $zero, 0x6($a0)
    MEM_B(0X6, ctx->r4) = 0;
    // 0x80073008: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
L_8007300C:
    // 0x8007300C: jr          $ra
    // 0x80073010: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80073010: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80073014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073014: lbu         $t6, 0x1C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1C);
    // 0x80073018: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x8007301C: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x80073020: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x80073024: sb          $t7, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = ctx->r15;
    // 0x80073028: jr          $ra
    // 0x8007302C: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    return;
    // 0x8007302C: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_80073030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073030: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80073034: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80073038: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8007303C: lw          $s0, -0x380($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X380);
    // 0x80073040: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80073044: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80073048: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8007304C: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x80073050: nop

    // 0x80073054: beq         $t6, $zero, L_80073118
    if (ctx->r14 == 0) {
        // 0x80073058: nop
    
            goto L_80073118;
    }
    // 0x80073058: nop

    // 0x8007305C: lbu         $t7, 0x1D($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1D);
    // 0x80073060: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80073064: beq         $t7, $at, L_80073118
    if (ctx->r15 == ctx->r1) {
        // 0x80073068: nop
    
            goto L_80073118;
    }
    // 0x80073068: nop

    // 0x8007306C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80073070: nop

    // 0x80073074: beq         $t8, $zero, L_80073118
    if (ctx->r24 == 0) {
        // 0x80073078: nop
    
            goto L_80073118;
    }
    // 0x80073078: nop

    // 0x8007307C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80073080: lbu         $t0, -0x10DF($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X10DF);
    // 0x80073084: lbu         $t9, 0x1D($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1D);
    // 0x80073088: nop

    // 0x8007308C: beq         $t9, $t0, L_80073118
    if (ctx->r25 == ctx->r8) {
        // 0x80073090: nop
    
            goto L_80073118;
    }
    // 0x80073090: nop

    // 0x80073094: lbu         $t1, 0x1C($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1C);
    // 0x80073098: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8007309C: nop

    // 0x800730A0: sltu        $at, $t2, $t1
    ctx->r1 = ctx->r10 < ctx->r9 ? 1 : 0;
    // 0x800730A4: beq         $at, $zero, L_800730C4
    if (ctx->r1 == 0) {
        // 0x800730A8: nop
    
            goto L_800730C4;
    }
    // 0x800730A8: nop

    // 0x800730AC: lbu         $t3, 0x1C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1C);
    // 0x800730B0: nop

    // 0x800730B4: subu        $t4, $t3, $t2
    ctx->r12 = SUB32(ctx->r11, ctx->r10);
    // 0x800730B8: sb          $t4, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r12;
    // 0x800730BC: b           L_800730DC
    // 0x800730C0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
        goto L_800730DC;
    // 0x800730C0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_800730C4:
    // 0x800730C4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800730C8: lbu         $t6, 0x1C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1C);
    // 0x800730CC: nop

    // 0x800730D0: subu        $t7, $t5, $t6
    ctx->r15 = SUB32(ctx->r13, ctx->r14);
    // 0x800730D4: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x800730D8: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
L_800730DC:
    // 0x800730DC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800730E0: nop

    // 0x800730E4: beq         $t8, $zero, L_80073118
    if (ctx->r24 == 0) {
        // 0x800730E8: nop
    
            goto L_80073118;
    }
    // 0x800730E8: nop

    // 0x800730EC: lbu         $t1, 0x1D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1D);
    // 0x800730F0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800730F4: lw          $t9, -0x390($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X390);
    // 0x800730F8: sll         $t3, $t1, 3
    ctx->r11 = S32(ctx->r9 << 3);
    // 0x800730FC: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80073100: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80073104: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80073108: addu        $s1, $t0, $t3
    ctx->r17 = ADD32(ctx->r8, ctx->r11);
    // 0x8007310C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80073110: jal         0x80073014
    // 0x80073114: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80073014(rdram, ctx);
        goto after_0;
    // 0x80073114: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_0:
L_80073118:
    // 0x80073118: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007311C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80073120: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80073124: jr          $ra
    // 0x80073128: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80073128: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007312C: nop

;}
RECOMP_FUNC void func_80073130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073130: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80073134: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80073138: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x8007313C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80073140: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80073144: beq         $at, $zero, L_80073164
    if (ctx->r1 == 0) {
        // 0x80073148: sb          $t6, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r14;
            goto L_80073164;
    }
    // 0x80073148: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
L_8007314C:
    // 0x8007314C: addu        $t8, $a0, $a2
    ctx->r24 = ADD32(ctx->r4, ctx->r6);
    // 0x80073150: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80073154: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x80073158: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8007315C: bne         $at, $zero, L_8007314C
    if (ctx->r1 != 0) {
        // 0x80073160: sb          $t7, 0x1($t8)
        MEM_B(0X1, ctx->r24) = ctx->r15;
            goto L_8007314C;
    }
    // 0x80073160: sb          $t7, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r15;
L_80073164:
    // 0x80073164: sb          $a1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r5;
    // 0x80073168: jr          $ra
    // 0x8007316C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007316C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80073170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073170: jr          $ra
    // 0x80073174: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80073174: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80073178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073178: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8007317C: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x80073180: addu        $t6, $a0, $a1
    ctx->r14 = ADD32(ctx->r4, ctx->r5);
    // 0x80073184: jr          $ra
    // 0x80073188: sb          $a2, 0x1($t6)
    MEM_B(0X1, ctx->r14) = ctx->r6;
    return;
    // 0x80073188: sb          $a2, 0x1($t6)
    MEM_B(0X1, ctx->r14) = ctx->r6;
;}
RECOMP_FUNC void func_8007318C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007318C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80073190: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80073194: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80073198: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8007319C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800731A0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800731A4: beq         $at, $zero, L_800731CC
    if (ctx->r1 == 0) {
        // 0x800731A8: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_800731CC;
    }
    // 0x800731A8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
L_800731AC:
    // 0x800731AC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800731B0: lbu         $a2, 0x2F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2F);
    // 0x800731B4: jal         0x80073178
    // 0x800731B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80073178(rdram, ctx);
        goto after_0;
    // 0x800731B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x800731BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800731C0: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x800731C4: bne         $at, $zero, L_800731AC
    if (ctx->r1 != 0) {
        // 0x800731C8: nop
    
            goto L_800731AC;
    }
    // 0x800731C8: nop

L_800731CC:
    // 0x800731CC: lbu         $t6, 0x2F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2F);
    // 0x800731D0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800731D4: nop

    // 0x800731D8: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x800731DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800731E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800731E4: jr          $ra
    // 0x800731E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800731E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800731EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800731EC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800731F0: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x800731F4: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x800731F8: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x800731FC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80073200: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80073204: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80073208: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8007320C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80073210: slti        $at, $s2, 0x4
    ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x80073214: lh          $s0, 0x6($t6)
    ctx->r16 = MEM_H(ctx->r14, 0X6);
    // 0x80073218: lh          $s1, 0x8($t6)
    ctx->r17 = MEM_H(ctx->r14, 0X8);
    // 0x8007321C: beq         $at, $zero, L_800732F8
    if (ctx->r1 == 0) {
        // 0x80073220: nop
    
            goto L_800732F8;
    }
    // 0x80073220: nop

L_80073224:
    // 0x80073224: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x80073228: nop

    // 0x8007322C: addu        $t8, $t7, $s2
    ctx->r24 = ADD32(ctx->r15, ctx->r18);
    // 0x80073230: lbu         $t9, 0x1($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1);
    // 0x80073234: nop

    // 0x80073238: bne         $t9, $zero, L_800732E8
    if (ctx->r25 != 0) {
        // 0x8007323C: nop
    
            goto L_800732E8;
    }
    // 0x8007323C: nop

    // 0x80073240: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80073244: lw          $t0, 0x20C0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X20C0);
    // 0x80073248: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007324C: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    // 0x80073250: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80073254: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80073258: sw          $t1, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r9;
    // 0x8007325C: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x80073260: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80073264: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x80073268: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8007326C: addiu       $t6, $t6, 0x5E0
    ctx->r14 = ADD32(ctx->r14, 0X5E0);
    // 0x80073270: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x80073274: addu        $t0, $t9, $t6
    ctx->r8 = ADD32(ctx->r25, ctx->r14);
    // 0x80073278: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8007327C: lh          $t1, 0x2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X2);
    // 0x80073280: sll         $t5, $s2, 2
    ctx->r13 = S32(ctx->r18 << 2);
    // 0x80073284: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80073288: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8007328C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80073290: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x80073294: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80073298: addiu       $t3, $t3, 0x5FC
    ctx->r11 = ADD32(ctx->r11, 0X5FC);
    // 0x8007329C: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x800732A0: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x800732A4: addiu       $t5, $t5, 0x5FC
    ctx->r13 = ADD32(ctx->r13, 0X5FC);
    // 0x800732A8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800732AC: lbu         $t7, 0x1($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X1);
    // 0x800732B0: addu        $a3, $t8, $s0
    ctx->r7 = ADD32(ctx->r24, ctx->r16);
    // 0x800732B4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800732B8: addiu       $t8, $t8, 0x5FC
    ctx->r24 = ADD32(ctx->r24, 0X5FC);
    // 0x800732BC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x800732C0: lbu         $t9, 0x2($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X2);
    // 0x800732C4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800732C8: lw          $a1, -0x370($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X370);
    // 0x800732CC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800732D0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800732D4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800732D8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800732DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800732E0: jal         0x80057460
    // 0x800732E4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_80057460(rdram, ctx);
        goto after_0;
    // 0x800732E4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_0:
L_800732E8:
    // 0x800732E8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800732EC: slti        $at, $s2, 0x4
    ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x800732F0: bne         $at, $zero, L_80073224
    if (ctx->r1 != 0) {
        // 0x800732F4: nop
    
            goto L_80073224;
    }
    // 0x800732F4: nop

L_800732F8:
    // 0x800732F8: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x800732FC: nop

    // 0x80073300: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x80073304: nop

    // 0x80073308: beq         $t1, $zero, L_800733D4
    if (ctx->r9 == 0) {
        // 0x8007330C: nop
    
            goto L_800733D4;
    }
    // 0x8007330C: nop

    // 0x80073310: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80073314: lw          $t2, 0x20C0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X20C0);
    // 0x80073318: lbu         $s3, 0xA($t0)
    ctx->r19 = MEM_BU(ctx->r8, 0XA);
    // 0x8007331C: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x80073320: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80073324: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80073328: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8007332C: sw          $t3, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r11;
    // 0x80073330: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x80073334: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80073338: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8007333C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80073340: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x80073344: addiu       $t9, $t9, 0x5E0
    ctx->r25 = ADD32(ctx->r25, 0X5E0);
    // 0x80073348: sll         $t8, $s3, 2
    ctx->r24 = S32(ctx->r19 << 2);
    // 0x8007334C: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80073350: lh          $t1, 0x0($t6)
    ctx->r9 = MEM_H(ctx->r14, 0X0);
    // 0x80073354: sll         $t0, $s3, 2
    ctx->r8 = S32(ctx->r19 << 2);
    // 0x80073358: addu        $t2, $t0, $t9
    ctx->r10 = ADD32(ctx->r8, ctx->r25);
    // 0x8007335C: lh          $t3, 0x2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X2);
    // 0x80073360: addu        $a3, $t1, $s0
    ctx->r7 = ADD32(ctx->r9, ctx->r16);
    // 0x80073364: sll         $t1, $s3, 2
    ctx->r9 = S32(ctx->r19 << 2);
    // 0x80073368: sll         $t8, $s3, 2
    ctx->r24 = S32(ctx->r19 << 2);
    // 0x8007336C: sll         $t5, $s3, 2
    ctx->r13 = S32(ctx->r19 << 2);
    // 0x80073370: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80073374: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80073378: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8007337C: subu        $t5, $t5, $s3
    ctx->r13 = SUB32(ctx->r13, ctx->r19);
    // 0x80073380: subu        $t8, $t8, $s3
    ctx->r24 = SUB32(ctx->r24, ctx->r19);
    // 0x80073384: subu        $t1, $t1, $s3
    ctx->r9 = SUB32(ctx->r9, ctx->r19);
    // 0x80073388: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x8007338C: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80073390: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80073394: lbu         $t7, 0x5F0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X5F0);
    // 0x80073398: lbu         $t6, 0x5F1($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5F1);
    // 0x8007339C: lbu         $t0, 0x5F2($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X5F2);
    // 0x800733A0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800733A4: lw          $a1, -0x370($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X370);
    // 0x800733A8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800733AC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800733B0: addu        $t4, $t3, $s1
    ctx->r12 = ADD32(ctx->r11, ctx->r17);
    // 0x800733B4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800733B8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800733BC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x800733C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800733C4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800733C8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800733CC: jal         0x80057460
    // 0x800733D0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_80057460(rdram, ctx);
        goto after_1;
    // 0x800733D0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_1:
L_800733D4:
    // 0x800733D4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800733D8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x800733DC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x800733E0: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x800733E4: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x800733E8: jr          $ra
    // 0x800733EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x800733EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800733F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800733F0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800733F4: lw          $a1, 0x20C0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X20C0);
    // 0x800733F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800733FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80073400: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80073404: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x80073408: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8007340C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80073410: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80073414: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x80073418: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x8007341C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80073420: lui         $t9, 0xE300
    ctx->r25 = S32(0XE300 << 16);
    // 0x80073424: ori         $t9, $t9, 0xA01
    ctx->r25 = ctx->r25 | 0XA01;
    // 0x80073428: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8007342C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80073430: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80073434: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80073438: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8007343C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80073440: lui         $t2, 0xE200
    ctx->r10 = S32(0XE200 << 16);
    // 0x80073444: ori         $t2, $t2, 0x1C
    ctx->r10 = ctx->r10 | 0X1C;
    // 0x80073448: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8007344C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80073450: lui         $t4, 0x50
    ctx->r12 = S32(0X50 << 16);
    // 0x80073454: ori         $t4, $t4, 0x4240
    ctx->r12 = ctx->r12 | 0X4240;
    // 0x80073458: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8007345C: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80073460: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x80073464: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80073468: lui         $t6, 0xFCFF
    ctx->r14 = S32(0XFCFF << 16);
    // 0x8007346C: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x80073470: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80073474: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80073478: lui         $t8, 0xFFFD
    ctx->r24 = S32(0XFFFD << 16);
    // 0x8007347C: ori         $t8, $t8, 0xF6FB
    ctx->r24 = ctx->r24 | 0XF6FB;
    // 0x80073480: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80073484: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x80073488: lbu         $t0, -0x10E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X10E0);
    // 0x8007348C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80073490: slt         $at, $a2, $t0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80073494: beq         $at, $zero, L_800735AC
    if (ctx->r1 == 0) {
        // 0x80073498: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_800735AC;
    }
    // 0x80073498: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
L_8007349C:
    // 0x8007349C: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x800734A0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800734A4: addu        $a3, $a3, $t1
    ctx->r7 = ADD32(ctx->r7, ctx->r9);
    // 0x800734A8: lw          $a3, -0x14D4($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X14D4);
    // 0x800734AC: addiu       $t4, $zero, 0xE4
    ctx->r12 = ADD32(0, 0XE4);
    // 0x800734B0: lh          $t2, 0x6800($a3)
    ctx->r10 = MEM_H(ctx->r7, 0X6800);
    // 0x800734B4: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x800734B8: sra         $t3, $t2, 2
    ctx->r11 = S32(SIGNED(ctx->r10) >> 2);
    // 0x800734BC: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x800734C0: sh          $t3, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r11;
    // 0x800734C4: sh          $t4, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r12;
    // 0x800734C8: lui         $t5, 0xFA00
    ctx->r13 = S32(0XFA00 << 16);
    // 0x800734CC: sll         $t2, $a2, 3
    ctx->r10 = S32(ctx->r6 << 3);
    // 0x800734D0: sll         $t7, $a2, 3
    ctx->r15 = S32(ctx->r6 << 3);
    // 0x800734D4: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x800734D8: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x800734DC: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x800734E0: lh          $t4, 0x8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8);
    // 0x800734E4: lh          $t9, 0x6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X6);
    // 0x800734E8: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x800734EC: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x800734F0: sll         $t1, $t0, 24
    ctx->r9 = S32(ctx->r8 << 24);
    // 0x800734F4: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x800734F8: sll         $t8, $a2, 3
    ctx->r24 = S32(ctx->r6 << 3);
    // 0x800734FC: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x80073500: lh          $t0, 0xA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA);
    // 0x80073504: or          $t7, $t1, $t6
    ctx->r15 = ctx->r9 | ctx->r14;
    // 0x80073508: sll         $t5, $a2, 3
    ctx->r13 = S32(ctx->r6 << 3);
    // 0x8007350C: addu        $t1, $a0, $t5
    ctx->r9 = ADD32(ctx->r4, ctx->r13);
    // 0x80073510: lh          $t6, 0xC($t1)
    ctx->r14 = MEM_H(ctx->r9, 0XC);
    // 0x80073514: andi        $t2, $t0, 0xFF
    ctx->r10 = ctx->r8 & 0XFF;
    // 0x80073518: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x8007351C: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x80073520: or          $t4, $t7, $t3
    ctx->r12 = ctx->r15 | ctx->r11;
    // 0x80073524: andi        $t8, $t6, 0xFF
    ctx->r24 = ctx->r14 & 0XFF;
    // 0x80073528: or          $t9, $t8, $t4
    ctx->r25 = ctx->r24 | ctx->r12;
    // 0x8007352C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80073530: lh          $t2, 0x10($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X10);
    // 0x80073534: lh          $t6, 0x12($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X12);
    // 0x80073538: addiu       $t7, $t2, 0x50
    ctx->r15 = ADD32(ctx->r10, 0X50);
    // 0x8007353C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80073540: andi        $t3, $t7, 0x3FF
    ctx->r11 = ctx->r15 & 0X3FF;
    // 0x80073544: addiu       $t8, $t6, 0x2
    ctx->r24 = ADD32(ctx->r14, 0X2);
    // 0x80073548: andi        $t4, $t8, 0x3FF
    ctx->r12 = ctx->r24 & 0X3FF;
    // 0x8007354C: sll         $t5, $t3, 14
    ctx->r13 = S32(ctx->r11 << 14);
    // 0x80073550: sw          $a1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r5;
    // 0x80073554: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x80073558: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x8007355C: or          $t1, $t5, $at
    ctx->r9 = ctx->r13 | ctx->r1;
    // 0x80073560: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x80073564: or          $t0, $t1, $t9
    ctx->r8 = ctx->r9 | ctx->r25;
    // 0x80073568: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x8007356C: lh          $t6, 0x12($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X12);
    // 0x80073570: lh          $t7, 0x10($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X10);
    // 0x80073574: andi        $t8, $t6, 0x3FF
    ctx->r24 = ctx->r14 & 0X3FF;
    // 0x80073578: andi        $t3, $t7, 0x3FF
    ctx->r11 = ctx->r15 & 0X3FF;
    // 0x8007357C: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x80073580: sll         $t5, $t3, 14
    ctx->r13 = S32(ctx->r11 << 14);
    // 0x80073584: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x80073588: or          $t1, $t5, $t4
    ctx->r9 = ctx->r13 | ctx->r12;
    // 0x8007358C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80073590: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x80073594: lbu         $t0, -0x10E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X10E0);
    // 0x80073598: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8007359C: slt         $at, $a2, $t0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800735A0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x800735A4: bne         $at, $zero, L_8007349C
    if (ctx->r1 != 0) {
        // 0x800735A8: addiu       $a3, $a3, 0x6750
        ctx->r7 = ADD32(ctx->r7, 0X6750);
            goto L_8007349C;
    }
    // 0x800735A8: addiu       $a3, $a3, 0x6750
    ctx->r7 = ADD32(ctx->r7, 0X6750);
L_800735AC:
    // 0x800735AC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800735B0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800735B4: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x800735B8: sw          $t2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r10;
    // 0x800735BC: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800735C0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x800735C4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800735C8: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x800735CC: sw          $a1, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r5;
    // 0x800735D0: jr          $ra
    // 0x800735D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800735D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800735D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800735D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800735DC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800735E0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800735E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800735E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800735EC: lbu         $t7, 0x4($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4);
    // 0x800735F0: nop

    // 0x800735F4: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x800735F8: bne         $at, $zero, L_80073678
    if (ctx->r1 != 0) {
        // 0x800735FC: nop
    
            goto L_80073678;
    }
    // 0x800735FC: nop

    // 0x80073600: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80073604: jal         0x800733F0
    // 0x80073608: nop

    func_800733F0(rdram, ctx);
        goto after_0;
    // 0x80073608: nop

    after_0:
    // 0x8007360C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80073610: jal         0x8005BBFC
    // 0x80073614: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_1;
    // 0x80073614: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_1:
    // 0x80073618: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8007361C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80073620: lbu         $t9, 0x4($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X4);
    // 0x80073624: nop

    // 0x80073628: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8007362C: beq         $at, $zero, L_8007366C
    if (ctx->r1 == 0) {
        // 0x80073630: nop
    
            goto L_8007366C;
    }
    // 0x80073630: nop

L_80073634:
    // 0x80073634: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80073638: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x8007363C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80073640: subu        $t2, $t2, $s0
    ctx->r10 = SUB32(ctx->r10, ctx->r16);
    // 0x80073644: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80073648: jal         0x800731EC
    // 0x8007364C: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    func_800731EC(rdram, ctx);
        goto after_2;
    // 0x8007364C: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    after_2:
    // 0x80073650: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80073654: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80073658: lbu         $t4, 0x4($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X4);
    // 0x8007365C: nop

    // 0x80073660: slt         $at, $s0, $t4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80073664: bne         $at, $zero, L_80073634
    if (ctx->r1 != 0) {
        // 0x80073668: nop
    
            goto L_80073634;
    }
    // 0x80073668: nop

L_8007366C:
    // 0x8007366C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80073670: jal         0x8005BE40
    // 0x80073674: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_3;
    // 0x80073674: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_3:
L_80073678:
    // 0x80073678: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007367C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80073680: jr          $ra
    // 0x80073684: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80073684: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80073688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073688: jr          $ra
    // 0x8007368C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8007368C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80073690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80073694: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80073698: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x8007369C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800736A0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800736A4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800736A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800736AC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800736B0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800736B4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800736B8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800736BC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800736C0: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x800736C4: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x800736C8: jal         0x80073178
    // 0x800736CC: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    func_80073178(rdram, ctx);
        goto after_0;
    // 0x800736CC: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    after_0:
    // 0x800736D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800736D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800736D8: jr          $ra
    // 0x800736DC: nop

    return;
    // 0x800736DC: nop

;}
RECOMP_FUNC void func_800736E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800736E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800736E4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800736E8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800736EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800736F0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800736F4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800736F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800736FC: lbu         $t7, 0x4($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4);
    // 0x80073700: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80073704: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80073708: beq         $at, $zero, L_80073750
    if (ctx->r1 == 0) {
        // 0x8007370C: nop
    
            goto L_80073750;
    }
    // 0x8007370C: nop

L_80073710:
    // 0x80073710: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80073714: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x80073718: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8007371C: subu        $t0, $t0, $s0
    ctx->r8 = SUB32(ctx->r8, ctx->r16);
    // 0x80073720: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80073724: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x80073728: lbu         $a2, 0x33($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X33);
    // 0x8007372C: jal         0x80073178
    // 0x80073730: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    func_80073178(rdram, ctx);
        goto after_0;
    // 0x80073730: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    after_0:
    // 0x80073734: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80073738: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8007373C: lbu         $t2, 0x4($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X4);
    // 0x80073740: nop

    // 0x80073744: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80073748: bne         $at, $zero, L_80073710
    if (ctx->r1 != 0) {
        // 0x8007374C: nop
    
            goto L_80073710;
    }
    // 0x8007374C: nop

L_80073750:
    // 0x80073750: lbu         $t5, 0x2F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X2F);
    // 0x80073754: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80073758: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8007375C: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80073760: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80073764: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80073768: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x8007376C: jal         0x8007318C
    // 0x80073770: addu        $a0, $t4, $t6
    ctx->r4 = ADD32(ctx->r12, ctx->r14);
    func_8007318C(rdram, ctx);
        goto after_1;
    // 0x80073770: addu        $a0, $t4, $t6
    ctx->r4 = ADD32(ctx->r12, ctx->r14);
    after_1:
    // 0x80073774: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80073778: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007377C: jr          $ra
    // 0x80073780: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80073780: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80073784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073784: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80073788: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8007378C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80073790: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80073794: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80073798: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007379C: lbu         $t7, 0x4($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4);
    // 0x800737A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800737A4: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800737A8: beq         $at, $zero, L_800737EC
    if (ctx->r1 == 0) {
        // 0x800737AC: nop
    
            goto L_800737EC;
    }
    // 0x800737AC: nop

L_800737B0:
    // 0x800737B0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800737B4: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x800737B8: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x800737BC: subu        $t0, $t0, $s0
    ctx->r8 = SUB32(ctx->r8, ctx->r16);
    // 0x800737C0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800737C4: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x800737C8: jal         0x8007318C
    // 0x800737CC: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    func_8007318C(rdram, ctx);
        goto after_0;
    // 0x800737CC: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    after_0:
    // 0x800737D0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800737D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800737D8: lbu         $t2, 0x4($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X4);
    // 0x800737DC: nop

    // 0x800737E0: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800737E4: bne         $at, $zero, L_800737B0
    if (ctx->r1 != 0) {
        // 0x800737E8: nop
    
            goto L_800737B0;
    }
    // 0x800737E8: nop

L_800737EC:
    // 0x800737EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800737F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800737F4: jr          $ra
    // 0x800737F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800737F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800737FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800737FC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80073800: addiu       $t6, $zero, 0x3D
    ctx->r14 = ADD32(0, 0X3D);
    // 0x80073804: sh          $t6, 0x6($t7)
    MEM_H(0X6, ctx->r15) = ctx->r14;
    // 0x80073808: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8007380C: addiu       $t8, $zero, 0x10B
    ctx->r24 = ADD32(0, 0X10B);
    // 0x80073810: sh          $t8, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r24;
    // 0x80073814: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80073818: addiu       $t0, $zero, 0x91
    ctx->r8 = ADD32(0, 0X91);
    // 0x8007381C: sh          $t0, 0x12($t1)
    MEM_H(0X12, ctx->r9) = ctx->r8;
    // 0x80073820: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80073824: addiu       $t2, $zero, 0x10B
    ctx->r10 = ADD32(0, 0X10B);
    // 0x80073828: sh          $t2, 0x14($t3)
    MEM_H(0X14, ctx->r11) = ctx->r10;
    // 0x8007382C: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80073830: addiu       $t4, $zero, 0xE6
    ctx->r12 = ADD32(0, 0XE6);
    // 0x80073834: sh          $t4, 0x1E($t5)
    MEM_H(0X1E, ctx->r13) = ctx->r12;
    // 0x80073838: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8007383C: addiu       $t6, $zero, 0x10B
    ctx->r14 = ADD32(0, 0X10B);
    // 0x80073840: sh          $t6, 0x20($t7)
    MEM_H(0X20, ctx->r15) = ctx->r14;
    // 0x80073844: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80073848: addiu       $t8, $zero, 0x13A
    ctx->r24 = ADD32(0, 0X13A);
    // 0x8007384C: sh          $t8, 0x2A($t9)
    MEM_H(0X2A, ctx->r25) = ctx->r24;
    // 0x80073850: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80073854: addiu       $t0, $zero, 0x10B
    ctx->r8 = ADD32(0, 0X10B);
    // 0x80073858: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8007385C: addiu       $t2, $t2, 0x5F0
    ctx->r10 = ADD32(ctx->r10, 0X5F0);
    // 0x80073860: sh          $t0, 0x2C($t1)
    MEM_H(0X2C, ctx->r9) = ctx->r8;
    // 0x80073864: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x80073868: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8007386C: addiu       $t4, $t4, 0x5F0
    ctx->r12 = ADD32(ctx->r12, 0X5F0);
    // 0x80073870: sh          $t3, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r11;
    // 0x80073874: lbu         $t5, 0x1($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X1);
    // 0x80073878: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8007387C: addiu       $t6, $t6, 0x5F0
    ctx->r14 = ADD32(ctx->r14, 0X5F0);
    // 0x80073880: sh          $t5, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r13;
    // 0x80073884: lbu         $t7, 0x2($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2);
    // 0x80073888: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x8007388C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80073890: sh          $t8, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r24;
    // 0x80073894: addiu       $t9, $t9, 0x5F0
    ctx->r25 = ADD32(ctx->r25, 0X5F0);
    // 0x80073898: sh          $t7, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r15;
    // 0x8007389C: lbu         $t0, 0x3($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X3);
    // 0x800738A0: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x800738A4: addiu       $t1, $t1, 0x5F0
    ctx->r9 = ADD32(ctx->r9, 0X5F0);
    // 0x800738A8: sh          $t0, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r8;
    // 0x800738AC: lbu         $t2, 0x4($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X4);
    // 0x800738B0: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800738B4: addiu       $t3, $t3, 0x5F0
    ctx->r11 = ADD32(ctx->r11, 0X5F0);
    // 0x800738B8: sh          $t2, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r10;
    // 0x800738BC: lbu         $t4, 0x5($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X5);
    // 0x800738C0: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x800738C4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800738C8: sh          $t5, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r13;
    // 0x800738CC: addiu       $t6, $t6, 0x5F0
    ctx->r14 = ADD32(ctx->r14, 0X5F0);
    // 0x800738D0: sh          $t4, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r12;
    // 0x800738D4: lbu         $t7, 0x6($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X6);
    // 0x800738D8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800738DC: addiu       $t8, $t8, 0x5F0
    ctx->r24 = ADD32(ctx->r24, 0X5F0);
    // 0x800738E0: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
    // 0x800738E4: lbu         $t9, 0x7($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X7);
    // 0x800738E8: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800738EC: addiu       $t0, $t0, 0x5F0
    ctx->r8 = ADD32(ctx->r8, 0X5F0);
    // 0x800738F0: sh          $t9, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r25;
    // 0x800738F4: lbu         $t1, 0x8($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X8);
    // 0x800738F8: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x800738FC: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80073900: sh          $t2, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r10;
    // 0x80073904: addiu       $t3, $t3, 0x5F0
    ctx->r11 = ADD32(ctx->r11, 0X5F0);
    // 0x80073908: sh          $t1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r9;
    // 0x8007390C: lbu         $t4, 0x9($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X9);
    // 0x80073910: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80073914: addiu       $t5, $t5, 0x5F0
    ctx->r13 = ADD32(ctx->r13, 0X5F0);
    // 0x80073918: sh          $t4, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r12;
    // 0x8007391C: lbu         $t6, 0xA($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XA);
    // 0x80073920: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80073924: addiu       $t7, $t7, 0x5F0
    ctx->r15 = ADD32(ctx->r15, 0X5F0);
    // 0x80073928: sh          $t6, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r14;
    // 0x8007392C: lbu         $t8, 0xB($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XB);
    // 0x80073930: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x80073934: sh          $t9, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r25;
    // 0x80073938: jr          $ra
    // 0x8007393C: sh          $t8, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r24;
    return;
    // 0x8007393C: sh          $t8, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_80073940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073940: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80073944: lbu         $t6, -0x10E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X10E0);
    // 0x80073948: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007394C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80073950: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80073954: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x80073958: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007395C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80073960: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80073964: beq         $at, $zero, L_80073978
    if (ctx->r1 == 0) {
        // 0x80073968: sw          $s1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r17;
            goto L_80073978;
    }
    // 0x80073968: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007396C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80073970: b           L_80073984
    // 0x80073974: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
        goto L_80073984;
    // 0x80073974: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
L_80073978:
    // 0x80073978: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8007397C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80073980: sb          $t8, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r24;
L_80073984:
    // 0x80073984: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80073988: nop

    // 0x8007398C: lbu         $a0, 0x4($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X4);
    // 0x80073990: nop

    // 0x80073994: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x80073998: subu        $t1, $t1, $a0
    ctx->r9 = SUB32(ctx->r9, ctx->r4);
    // 0x8007399C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800739A0: jal         0x8007E03C
    // 0x800739A4: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x800739A4: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_0:
    // 0x800739A8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800739AC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800739B0: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x800739B4: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800739B8: nop

    // 0x800739BC: lbu         $t4, 0x4($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X4);
    // 0x800739C0: nop

    // 0x800739C4: slt         $at, $s1, $t4
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800739C8: beq         $at, $zero, L_80073A0C
    if (ctx->r1 == 0) {
        // 0x800739CC: nop
    
            goto L_80073A0C;
    }
    // 0x800739CC: nop

L_800739D0:
    // 0x800739D0: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800739D4: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x800739D8: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x800739DC: subu        $t7, $t7, $s1
    ctx->r15 = SUB32(ctx->r15, ctx->r17);
    // 0x800739E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800739E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800739E8: jal         0x80073130
    // 0x800739EC: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_80073130(rdram, ctx);
        goto after_1;
    // 0x800739EC: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_1:
    // 0x800739F0: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800739F4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800739F8: lbu         $t9, 0x4($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X4);
    // 0x800739FC: nop

    // 0x80073A00: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80073A04: bne         $at, $zero, L_800739D0
    if (ctx->r1 != 0) {
        // 0x80073A08: nop
    
            goto L_800739D0;
    }
    // 0x80073A08: nop

L_80073A0C:
    // 0x80073A0C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80073A10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80073A14: lbu         $s2, 0x4($t0)
    ctx->r18 = MEM_BU(ctx->r8, 0X4);
    // 0x80073A18: nop

    // 0x80073A1C: beq         $s2, $at, L_80073A90
    if (ctx->r18 == ctx->r1) {
        // 0x80073A20: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80073A90;
    }
    // 0x80073A20: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80073A24: beq         $s2, $at, L_80073A90
    if (ctx->r18 == ctx->r1) {
        // 0x80073A28: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80073A90;
    }
    // 0x80073A28: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80073A2C: beq         $s2, $at, L_80073A44
    if (ctx->r18 == ctx->r1) {
        // 0x80073A30: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80073A44;
    }
    // 0x80073A30: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80073A34: beq         $s2, $at, L_80073A64
    if (ctx->r18 == ctx->r1) {
        // 0x80073A38: nop
    
            goto L_80073A64;
    }
    // 0x80073A38: nop

    // 0x80073A3C: b           L_80073A78
    // 0x80073A40: nop

        goto L_80073A78;
    // 0x80073A40: nop

L_80073A44:
    // 0x80073A44: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80073A48: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80073A4C: addiu       $a1, $a1, -0x2548
    ctx->r5 = ADD32(ctx->r5, -0X2548);
    // 0x80073A50: addiu       $a0, $a0, -0x2560
    ctx->r4 = ADD32(ctx->r4, -0X2560);
    // 0x80073A54: jal         0x8004A5A0
    // 0x80073A58: addiu       $a2, $zero, 0x18F
    ctx->r6 = ADD32(0, 0X18F);
    func_8004A5A0(rdram, ctx);
        goto after_2;
    // 0x80073A58: addiu       $a2, $zero, 0x18F
    ctx->r6 = ADD32(0, 0X18F);
    after_2:
    // 0x80073A5C: b           L_80073A90
    // 0x80073A60: nop

        goto L_80073A90;
    // 0x80073A60: nop

L_80073A64:
    // 0x80073A64: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80073A68: jal         0x800737FC
    // 0x80073A6C: nop

    func_800737FC(rdram, ctx);
        goto after_3;
    // 0x80073A6C: nop

    after_3:
    // 0x80073A70: b           L_80073A90
    // 0x80073A74: nop

        goto L_80073A90;
    // 0x80073A74: nop

L_80073A78:
    // 0x80073A78: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80073A7C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80073A80: addiu       $a1, $a1, -0x2524
    ctx->r5 = ADD32(ctx->r5, -0X2524);
    // 0x80073A84: addiu       $a0, $a0, -0x253C
    ctx->r4 = ADD32(ctx->r4, -0X253C);
    // 0x80073A88: jal         0x8004A5A0
    // 0x80073A8C: addiu       $a2, $zero, 0x197
    ctx->r6 = ADD32(0, 0X197);
    func_8004A5A0(rdram, ctx);
        goto after_4;
    // 0x80073A8C: addiu       $a2, $zero, 0x197
    ctx->r6 = ADD32(0, 0X197);
    after_4:
L_80073A90:
    // 0x80073A90: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80073A94: bne         $s0, $at, L_80073AAC
    if (ctx->r16 != ctx->r1) {
        // 0x80073A98: nop
    
            goto L_80073AAC;
    }
    // 0x80073A98: nop

    // 0x80073A9C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80073AA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80073AA4: jal         0x800736E0
    // 0x80073AA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800736E0(rdram, ctx);
        goto after_5;
    // 0x80073AA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_80073AAC:
    // 0x80073AAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80073AB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80073AB4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80073AB8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80073ABC: jr          $ra
    // 0x80073AC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80073AC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80073AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073AC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80073AC8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80073ACC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80073AD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80073AD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80073AD8: lbu         $t7, 0x4($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4);
    // 0x80073ADC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80073AE0: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80073AE4: beq         $at, $zero, L_80073B24
    if (ctx->r1 == 0) {
        // 0x80073AE8: nop
    
            goto L_80073B24;
    }
    // 0x80073AE8: nop

L_80073AEC:
    // 0x80073AEC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80073AF0: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x80073AF4: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80073AF8: subu        $t0, $t0, $s0
    ctx->r8 = SUB32(ctx->r8, ctx->r16);
    // 0x80073AFC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80073B00: jal         0x80073170
    // 0x80073B04: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    func_80073170(rdram, ctx);
        goto after_0;
    // 0x80073B04: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    after_0:
    // 0x80073B08: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80073B0C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80073B10: lbu         $t2, 0x4($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X4);
    // 0x80073B14: nop

    // 0x80073B18: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80073B1C: bne         $at, $zero, L_80073AEC
    if (ctx->r1 != 0) {
        // 0x80073B20: nop
    
            goto L_80073AEC;
    }
    // 0x80073B20: nop

L_80073B24:
    // 0x80073B24: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80073B28: nop

    // 0x80073B2C: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x80073B30: jal         0x8007E328
    // 0x80073B34: nop

    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x80073B34: nop

    after_1:
    // 0x80073B38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80073B3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80073B40: jr          $ra
    // 0x80073B44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80073B44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80073B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073B48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80073B4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80073B50: jal         0x8004A34C
    // 0x80073B54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x80073B54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80073B58: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80073B5C: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x80073B60: jal         0x80074888
    // 0x80073B64: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    func_80074888(rdram, ctx);
        goto after_1;
    // 0x80073B64: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_1:
    // 0x80073B68: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80073B6C: jal         0x8007E03C
    // 0x80073B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_2;
    // 0x80073B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80073B74: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80073B78: sw          $v0, -0x370($at)
    MEM_W(-0X370, ctx->r1) = ctx->r2;
    // 0x80073B7C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80073B80: lw          $a1, -0x370($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X370);
    // 0x80073B84: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80073B88: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x80073B8C: jal         0x800746C0
    // 0x80073B90: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_800746C0(rdram, ctx);
        goto after_3;
    // 0x80073B90: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_3:
    // 0x80073B94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80073B98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80073B9C: jr          $ra
    // 0x80073BA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80073BA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80073BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073BA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80073BA8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80073BAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80073BB0: lw          $a0, -0x370($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X370);
    // 0x80073BB4: jal         0x8007E328
    // 0x80073BB8: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x80073BB8: nop

    after_0:
    // 0x80073BBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80073BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80073BC4: jr          $ra
    // 0x80073BC8: nop

    return;
    // 0x80073BC8: nop

    // 0x80073BCC: nop

;}
RECOMP_FUNC void func_80073BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073BD0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80073BD4: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x80073BD8: lbu         $a2, -0x10E0($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X10E0);
    // 0x80073BDC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
L_80073BE0:
    // 0x80073BE0: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x80073BE4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80073BE8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80073BEC: div         $zero, $t7, $a2
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r6)));
    // 0x80073BF0: bne         $a2, $zero, L_80073BFC
    if (ctx->r6 != 0) {
        // 0x80073BF4: nop
    
            goto L_80073BFC;
    }
    // 0x80073BF4: nop

    // 0x80073BF8: break       7
    do_break(2147957752);
L_80073BFC:
    // 0x80073BFC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80073C00: bne         $a2, $at, L_80073C14
    if (ctx->r6 != ctx->r1) {
        // 0x80073C04: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80073C14;
    }
    // 0x80073C04: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80073C08: bne         $t7, $at, L_80073C14
    if (ctx->r15 != ctx->r1) {
        // 0x80073C0C: nop
    
            goto L_80073C14;
    }
    // 0x80073C0C: nop

    // 0x80073C10: break       6
    do_break(2147957776);
L_80073C14:
    // 0x80073C14: mfhi        $t8
    ctx->r24 = hi;
    // 0x80073C18: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
    // 0x80073C1C: lbu         $t1, 0x0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X0);
    // 0x80073C20: lw          $t9, -0x390($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X390);
    // 0x80073C24: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x80073C28: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80073C2C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80073C30: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80073C34: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80073C38: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x80073C3C: nop

    // 0x80073C40: bne         $t4, $zero, L_80073C58
    if (ctx->r12 != 0) {
        // 0x80073C44: nop
    
            goto L_80073C58;
    }
    // 0x80073C44: nop

    // 0x80073C48: lbu         $t5, 0x0($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X0);
    // 0x80073C4C: nop

    // 0x80073C50: bne         $t5, $a1, L_80073BE0
    if (ctx->r13 != ctx->r5) {
        // 0x80073C54: nop
    
            goto L_80073BE0;
    }
    // 0x80073C54: nop

L_80073C58:
    // 0x80073C58: jr          $ra
    // 0x80073C5C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80073C5C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80073C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073C60: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80073C64: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80073C68: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80073C6C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80073C70: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80073C74: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80073C78: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80073C7C: jal         0x8007232C
    // 0x80073C80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8007232C(rdram, ctx);
        goto after_0;
    // 0x80073C80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80073C84: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80073C88: sltiu       $at, $s0, 0x2
    ctx->r1 = ctx->r16 < 0X2 ? 1 : 0;
    // 0x80073C8C: bne         $at, $zero, L_80073D50
    if (ctx->r1 != 0) {
        // 0x80073C90: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80073D50;
    }
    // 0x80073C90: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80073C94: bne         $s0, $at, L_80073CB0
    if (ctx->r16 != ctx->r1) {
        // 0x80073C98: nop
    
            goto L_80073CB0;
    }
    // 0x80073C98: nop

    // 0x80073C9C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80073CA0: jal         0x80073BD0
    // 0x80073CA4: nop

    func_80073BD0(rdram, ctx);
        goto after_1;
    // 0x80073CA4: nop

    after_1:
    // 0x80073CA8: b           L_80073D00
    // 0x80073CAC: nop

        goto L_80073D00;
    // 0x80073CAC: nop

L_80073CB0:
    // 0x80073CB0: jal         0x8007232C
    // 0x80073CB4: nop

    func_8007232C(rdram, ctx);
        goto after_2;
    // 0x80073CB4: nop

    after_2:
    // 0x80073CB8: jal         0x80060814
    // 0x80073CBC: addiu       $s1, $v0, -0x1
    ctx->r17 = ADD32(ctx->r2, -0X1);
    func_80060814(rdram, ctx);
        goto after_3;
    // 0x80073CBC: addiu       $s1, $v0, -0x1
    ctx->r17 = ADD32(ctx->r2, -0X1);
    after_3:
    // 0x80073CC0: divu        $zero, $v0, $s1
    lo = S32(U32(ctx->r2) / U32(ctx->r17)); hi = S32(U32(ctx->r2) % U32(ctx->r17));
    // 0x80073CC4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80073CC8: bne         $s1, $zero, L_80073CD4
    if (ctx->r17 != 0) {
        // 0x80073CCC: nop
    
            goto L_80073CD4;
    }
    // 0x80073CCC: nop

    // 0x80073CD0: break       7
    do_break(2147957968);
L_80073CD4:
    // 0x80073CD4: mfhi        $s2
    ctx->r18 = hi;
    // 0x80073CD8: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80073CDC: bne         $at, $zero, L_80073D00
    if (ctx->r1 != 0) {
        // 0x80073CE0: nop
    
            goto L_80073D00;
    }
    // 0x80073CE0: nop

L_80073CE4:
    // 0x80073CE4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80073CE8: jal         0x80073BD0
    // 0x80073CEC: nop

    func_80073BD0(rdram, ctx);
        goto after_4;
    // 0x80073CEC: nop

    after_4:
    // 0x80073CF0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80073CF4: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80073CF8: beq         $at, $zero, L_80073CE4
    if (ctx->r1 == 0) {
        // 0x80073CFC: nop
    
            goto L_80073CE4;
    }
    // 0x80073CFC: nop

L_80073D00:
    // 0x80073D00: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80073D04: lbu         $t6, -0x10E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X10E0);
    // 0x80073D08: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80073D0C: slt         $at, $s4, $t6
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80073D10: beq         $at, $zero, L_80073D44
    if (ctx->r1 == 0) {
        // 0x80073D14: nop
    
            goto L_80073D44;
    }
    // 0x80073D14: nop

L_80073D18:
    // 0x80073D18: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80073D1C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80073D20: lbu         $a1, 0x0($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X0);
    // 0x80073D24: jal         0x8007240C
    // 0x80073D28: nop

    func_8007240C(rdram, ctx);
        goto after_5;
    // 0x80073D28: nop

    after_5:
    // 0x80073D2C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80073D30: lbu         $t8, -0x10E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X10E0);
    // 0x80073D34: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80073D38: slt         $at, $s4, $t8
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80073D3C: bne         $at, $zero, L_80073D18
    if (ctx->r1 != 0) {
        // 0x80073D40: nop
    
            goto L_80073D18;
    }
    // 0x80073D40: nop

L_80073D44:
    // 0x80073D44: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80073D48: nop

    // 0x80073D4C: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
L_80073D50:
    // 0x80073D50: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80073D54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80073D58: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80073D5C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80073D60: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80073D64: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80073D68: jr          $ra
    // 0x80073D6C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80073D6C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80073D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073D70: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80073D74: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80073D78: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80073D7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80073D80: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80073D84: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80073D88: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80073D8C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80073D90: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80073D94: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
    // 0x80073D98: lw          $s0, -0x14D4($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X14D4);
    // 0x80073D9C: addiu       $t1, $zero, 0xF3
    ctx->r9 = ADD32(0, 0XF3);
    // 0x80073DA0: lh          $t9, 0x6800($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X6800);
    // 0x80073DA4: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x80073DA8: sra         $t0, $t9, 2
    ctx->r8 = S32(SIGNED(ctx->r25) >> 2);
    // 0x80073DAC: sh          $t0, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r8;
    // 0x80073DB0: sh          $t1, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r9;
    // 0x80073DB4: lw          $s1, 0x20C0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X20C0);
    // 0x80073DB8: lhu         $a0, 0x12($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X12);
    // 0x80073DBC: jal         0x800B8010
    // 0x80073DC0: addiu       $s0, $s0, 0x6750
    ctx->r16 = ADD32(ctx->r16, 0X6750);
    sins(rdram, ctx);
        goto after_0;
    // 0x80073DC0: addiu       $s0, $s0, 0x6750
    ctx->r16 = ADD32(ctx->r16, 0X6750);
    after_0:
    // 0x80073DC4: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80073DC8: sra         $t2, $v0, 9
    ctx->r10 = S32(SIGNED(ctx->r2) >> 9);
    // 0x80073DCC: addiu       $t3, $t2, 0xA0
    ctx->r11 = ADD32(ctx->r10, 0XA0);
    // 0x80073DD0: sh          $t3, 0x8($t4)
    MEM_H(0X8, ctx->r12) = ctx->r11;
    // 0x80073DD4: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80073DD8: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x80073DDC: lhu         $t7, 0x12($t5)
    ctx->r15 = MEM_HU(ctx->r13, 0X12);
    // 0x80073DE0: lui         $t6, 0xE300
    ctx->r14 = S32(0XE300 << 16);
    // 0x80073DE4: addiu       $t8, $t7, 0x800
    ctx->r24 = ADD32(ctx->r15, 0X800);
    // 0x80073DE8: sh          $t8, 0x12($t5)
    MEM_H(0X12, ctx->r13) = ctx->r24;
    // 0x80073DEC: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x80073DF0: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80073DF4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80073DF8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80073DFC: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80073E00: ori         $t6, $t6, 0xA01
    ctx->r14 = ctx->r14 | 0XA01;
    // 0x80073E04: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80073E08: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80073E0C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80073E10: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80073E14: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x80073E18: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80073E1C: lui         $t4, 0xE200
    ctx->r12 = S32(0XE200 << 16);
    // 0x80073E20: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x80073E24: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80073E28: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80073E2C: ori         $t4, $t4, 0x1C
    ctx->r12 = ctx->r12 | 0X1C;
    // 0x80073E30: sw          $t4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r12;
    // 0x80073E34: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80073E38: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x80073E3C: ori         $t8, $t8, 0x4240
    ctx->r24 = ctx->r24 | 0X4240;
    // 0x80073E40: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80073E44: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x80073E48: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80073E4C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80073E50: lui         $t9, 0xFCFF
    ctx->r25 = S32(0XFCFF << 16);
    // 0x80073E54: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x80073E58: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80073E5C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80073E60: lui         $t1, 0xFFFD
    ctx->r9 = S32(0XFFFD << 16);
    // 0x80073E64: ori         $t1, $t1, 0xF6FB
    ctx->r9 = ctx->r9 | 0XF6FB;
    // 0x80073E68: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80073E6C: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
    // 0x80073E70: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80073E74: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80073E78: lui         $t2, 0xFA00
    ctx->r10 = S32(0XFA00 << 16);
    // 0x80073E7C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80073E80: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80073E84: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80073E88: lh          $t7, 0x2($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X2);
    // 0x80073E8C: lh          $t9, 0x4($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X4);
    // 0x80073E90: lh          $t2, 0x6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X6);
    // 0x80073E94: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x80073E98: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x80073E9C: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x80073EA0: sll         $t5, $t8, 24
    ctx->r13 = S32(ctx->r24 << 24);
    // 0x80073EA4: lh          $t9, 0x8($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X8);
    // 0x80073EA8: or          $t6, $t5, $t1
    ctx->r14 = ctx->r13 | ctx->r9;
    // 0x80073EAC: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x80073EB0: sll         $t7, $t3, 8
    ctx->r15 = S32(ctx->r11 << 8);
    // 0x80073EB4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80073EB8: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80073EBC: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x80073EC0: or          $t5, $t8, $t0
    ctx->r13 = ctx->r24 | ctx->r8;
    // 0x80073EC4: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x80073EC8: lh          $t2, 0x48($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X48);
    // 0x80073ECC: lh          $t9, 0x4A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4A);
    // 0x80073ED0: addiu       $t3, $t2, 0x64
    ctx->r11 = ADD32(ctx->r10, 0X64);
    // 0x80073ED4: andi        $t6, $t3, 0x3FF
    ctx->r14 = ctx->r11 & 0X3FF;
    // 0x80073ED8: addiu       $t8, $t9, 0x2
    ctx->r24 = ADD32(ctx->r25, 0X2);
    // 0x80073EDC: andi        $t0, $t8, 0x3FF
    ctx->r8 = ctx->r24 & 0X3FF;
    // 0x80073EE0: sll         $t7, $t6, 14
    ctx->r15 = S32(ctx->r14 << 14);
    // 0x80073EE4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80073EE8: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x80073EEC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80073EF0: or          $t4, $t7, $at
    ctx->r12 = ctx->r15 | ctx->r1;
    // 0x80073EF4: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x80073EF8: or          $t1, $t4, $t5
    ctx->r9 = ctx->r12 | ctx->r13;
    // 0x80073EFC: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80073F00: lh          $t9, 0x4A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4A);
    // 0x80073F04: lh          $t3, 0x48($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X48);
    // 0x80073F08: andi        $t8, $t9, 0x3FF
    ctx->r24 = ctx->r25 & 0X3FF;
    // 0x80073F0C: andi        $t6, $t3, 0x3FF
    ctx->r14 = ctx->r11 & 0X3FF;
    // 0x80073F10: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80073F14: sll         $t7, $t6, 14
    ctx->r15 = S32(ctx->r14 << 14);
    // 0x80073F18: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80073F1C: or          $t4, $t7, $t0
    ctx->r12 = ctx->r15 | ctx->r8;
    // 0x80073F20: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80073F24: lh          $t9, 0x4A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4A);
    // 0x80073F28: lh          $t1, 0x48($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X48);
    // 0x80073F2C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80073F30: addiu       $t8, $t9, 0x3
    ctx->r24 = ADD32(ctx->r25, 0X3);
    // 0x80073F34: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x80073F38: sll         $t3, $t2, 14
    ctx->r11 = S32(ctx->r10 << 14);
    // 0x80073F3C: andi        $t7, $t8, 0x3FF
    ctx->r15 = ctx->r24 & 0X3FF;
    // 0x80073F40: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80073F44: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80073F48: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80073F4C: or          $t6, $t3, $at
    ctx->r14 = ctx->r11 | ctx->r1;
    // 0x80073F50: or          $t4, $t6, $t0
    ctx->r12 = ctx->r14 | ctx->r8;
    // 0x80073F54: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80073F58: lh          $t8, 0x4A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4A);
    // 0x80073F5C: lh          $t1, 0x48($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X48);
    // 0x80073F60: addiu       $t7, $t8, -0xC8
    ctx->r15 = ADD32(ctx->r24, -0XC8);
    // 0x80073F64: addiu       $t2, $t1, -0x3
    ctx->r10 = ADD32(ctx->r9, -0X3);
    // 0x80073F68: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x80073F6C: andi        $t6, $t7, 0x3FF
    ctx->r14 = ctx->r15 & 0X3FF;
    // 0x80073F70: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80073F74: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80073F78: sll         $t9, $t3, 14
    ctx->r25 = S32(ctx->r11 << 14);
    // 0x80073F7C: or          $t4, $t9, $t0
    ctx->r12 = ctx->r25 | ctx->r8;
    // 0x80073F80: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80073F84: lh          $t1, 0x48($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X48);
    // 0x80073F88: lh          $t6, 0x4A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X4A);
    // 0x80073F8C: addiu       $t2, $t1, 0x67
    ctx->r10 = ADD32(ctx->r9, 0X67);
    // 0x80073F90: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80073F94: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x80073F98: addiu       $t9, $t6, 0x3
    ctx->r25 = ADD32(ctx->r14, 0X3);
    // 0x80073F9C: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x80073FA0: sll         $t8, $t3, 14
    ctx->r24 = S32(ctx->r11 << 14);
    // 0x80073FA4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80073FA8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80073FAC: or          $t7, $t8, $at
    ctx->r15 = ctx->r24 | ctx->r1;
    // 0x80073FB0: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x80073FB4: or          $t5, $t7, $t4
    ctx->r13 = ctx->r15 | ctx->r12;
    // 0x80073FB8: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x80073FBC: lh          $t9, 0x4A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4A);
    // 0x80073FC0: lh          $t2, 0x48($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X48);
    // 0x80073FC4: addiu       $t0, $t9, -0xC8
    ctx->r8 = ADD32(ctx->r25, -0XC8);
    // 0x80073FC8: addiu       $t3, $t2, 0x64
    ctx->r11 = ADD32(ctx->r10, 0X64);
    // 0x80073FCC: andi        $t8, $t3, 0x3FF
    ctx->r24 = ctx->r11 & 0X3FF;
    // 0x80073FD0: andi        $t7, $t0, 0x3FF
    ctx->r15 = ctx->r8 & 0X3FF;
    // 0x80073FD4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80073FD8: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x80073FDC: sll         $t6, $t8, 14
    ctx->r14 = S32(ctx->r24 << 14);
    // 0x80073FE0: or          $t5, $t6, $t4
    ctx->r13 = ctx->r14 | ctx->r12;
    // 0x80073FE4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80073FE8: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x80073FEC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80073FF0: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80073FF4: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x80073FF8: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80073FFC: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80074000: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80074004: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x80074008: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007400C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80074010: sw          $s1, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r17;
    // 0x80074014: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80074018: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8007401C: jr          $ra
    // 0x80074020: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80074020: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80074024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074024: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80074028: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x8007402C: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x80074030: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80074034: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80074038: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8007403C: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80074040: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80074044: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80074048: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
    // 0x8007404C: lw          $s0, -0x14D4($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X14D4);
    // 0x80074050: addiu       $t1, $zero, 0xE4
    ctx->r9 = ADD32(0, 0XE4);
    // 0x80074054: lh          $t9, 0x6800($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X6800);
    // 0x80074058: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x8007405C: sra         $t0, $t9, 2
    ctx->r8 = S32(SIGNED(ctx->r25) >> 2);
    // 0x80074060: sh          $t0, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r8;
    // 0x80074064: sh          $t1, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r9;
    // 0x80074068: lw          $s1, 0x20C0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X20C0);
    // 0x8007406C: lhu         $a0, 0x12($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X12);
    // 0x80074070: jal         0x800B8010
    // 0x80074074: addiu       $s0, $s0, 0x6750
    ctx->r16 = ADD32(ctx->r16, 0X6750);
    sins(rdram, ctx);
        goto after_0;
    // 0x80074074: addiu       $s0, $s0, 0x6750
    ctx->r16 = ADD32(ctx->r16, 0X6750);
    after_0:
    // 0x80074078: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x8007407C: sra         $t2, $v0, 9
    ctx->r10 = S32(SIGNED(ctx->r2) >> 9);
    // 0x80074080: addiu       $t3, $t2, 0xA0
    ctx->r11 = ADD32(ctx->r10, 0XA0);
    // 0x80074084: sh          $t3, 0x8($t4)
    MEM_H(0X8, ctx->r12) = ctx->r11;
    // 0x80074088: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x8007408C: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x80074090: lhu         $t7, 0x12($t5)
    ctx->r15 = MEM_HU(ctx->r13, 0X12);
    // 0x80074094: lui         $t6, 0xE300
    ctx->r14 = S32(0XE300 << 16);
    // 0x80074098: addiu       $t8, $t7, 0x800
    ctx->r24 = ADD32(ctx->r15, 0X800);
    // 0x8007409C: sh          $t8, 0x12($t5)
    MEM_H(0X12, ctx->r13) = ctx->r24;
    // 0x800740A0: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x800740A4: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x800740A8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x800740AC: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x800740B0: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x800740B4: ori         $t6, $t6, 0xA01
    ctx->r14 = ctx->r14 | 0XA01;
    // 0x800740B8: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x800740BC: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x800740C0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800740C4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x800740C8: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x800740CC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800740D0: lui         $t4, 0xE200
    ctx->r12 = S32(0XE200 << 16);
    // 0x800740D4: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x800740D8: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x800740DC: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800740E0: ori         $t4, $t4, 0x1C
    ctx->r12 = ctx->r12 | 0X1C;
    // 0x800740E4: sw          $t4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r12;
    // 0x800740E8: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x800740EC: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x800740F0: ori         $t8, $t8, 0x4240
    ctx->r24 = ctx->r24 | 0X4240;
    // 0x800740F4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x800740F8: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x800740FC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80074100: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80074104: lui         $t9, 0xFCFF
    ctx->r25 = S32(0XFCFF << 16);
    // 0x80074108: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x8007410C: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80074110: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80074114: lui         $t1, 0xFFFD
    ctx->r9 = S32(0XFFFD << 16);
    // 0x80074118: ori         $t1, $t1, 0xF6FB
    ctx->r9 = ctx->r9 | 0XF6FB;
    // 0x8007411C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80074120: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
    // 0x80074124: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80074128: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8007412C: lui         $t2, 0xFA00
    ctx->r10 = S32(0XFA00 << 16);
    // 0x80074130: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80074134: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x80074138: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8007413C: lh          $t7, 0x2($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X2);
    // 0x80074140: lh          $t9, 0x4($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X4);
    // 0x80074144: lh          $t2, 0x6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X6);
    // 0x80074148: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8007414C: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x80074150: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x80074154: sll         $t5, $t8, 24
    ctx->r13 = S32(ctx->r24 << 24);
    // 0x80074158: lh          $t9, 0x8($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X8);
    // 0x8007415C: or          $t6, $t5, $t1
    ctx->r14 = ctx->r13 | ctx->r9;
    // 0x80074160: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x80074164: sll         $t7, $t3, 8
    ctx->r15 = S32(ctx->r11 << 8);
    // 0x80074168: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8007416C: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80074170: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x80074174: or          $t5, $t8, $t0
    ctx->r13 = ctx->r24 | ctx->r8;
    // 0x80074178: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x8007417C: lh          $t4, 0x52($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X52);
    // 0x80074180: lh          $t2, 0x50($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X50);
    // 0x80074184: addiu       $t9, $t4, 0x3
    ctx->r25 = ADD32(ctx->r12, 0X3);
    // 0x80074188: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x8007418C: sll         $t6, $t3, 14
    ctx->r14 = S32(ctx->r11 << 14);
    // 0x80074190: andi        $t8, $t9, 0x3FF
    ctx->r24 = ctx->r25 & 0X3FF;
    // 0x80074194: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80074198: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8007419C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800741A0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800741A4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800741A8: or          $t5, $t7, $t0
    ctx->r13 = ctx->r15 | ctx->r8;
    // 0x800741AC: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x800741B0: lh          $t9, 0x52($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X52);
    // 0x800741B4: lh          $t2, 0x50($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X50);
    // 0x800741B8: addiu       $t8, $t9, -0xA0
    ctx->r24 = ADD32(ctx->r25, -0XA0);
    // 0x800741BC: addiu       $t3, $t2, -0x3
    ctx->r11 = ADD32(ctx->r10, -0X3);
    // 0x800741C0: andi        $t6, $t3, 0x3FF
    ctx->r14 = ctx->r11 & 0X3FF;
    // 0x800741C4: andi        $t7, $t8, 0x3FF
    ctx->r15 = ctx->r24 & 0X3FF;
    // 0x800741C8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800741CC: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x800741D0: sll         $t4, $t6, 14
    ctx->r12 = S32(ctx->r14 << 14);
    // 0x800741D4: or          $t5, $t4, $t0
    ctx->r13 = ctx->r12 | ctx->r8;
    // 0x800741D8: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x800741DC: lh          $t2, 0x50($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X50);
    // 0x800741E0: lh          $t7, 0x52($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X52);
    // 0x800741E4: addiu       $t3, $t2, 0x53
    ctx->r11 = ADD32(ctx->r10, 0X53);
    // 0x800741E8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x800741EC: andi        $t6, $t3, 0x3FF
    ctx->r14 = ctx->r11 & 0X3FF;
    // 0x800741F0: addiu       $t4, $t7, 0x3
    ctx->r12 = ADD32(ctx->r15, 0X3);
    // 0x800741F4: andi        $t0, $t4, 0x3FF
    ctx->r8 = ctx->r12 & 0X3FF;
    // 0x800741F8: sll         $t9, $t6, 14
    ctx->r25 = S32(ctx->r14 << 14);
    // 0x800741FC: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80074200: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80074204: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x80074208: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x8007420C: or          $t1, $t8, $t5
    ctx->r9 = ctx->r24 | ctx->r13;
    // 0x80074210: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80074214: lh          $t4, 0x52($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X52);
    // 0x80074218: lh          $t3, 0x50($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X50);
    // 0x8007421C: addiu       $t0, $t4, -0xA0
    ctx->r8 = ADD32(ctx->r12, -0XA0);
    // 0x80074220: addiu       $t6, $t3, 0x50
    ctx->r14 = ADD32(ctx->r11, 0X50);
    // 0x80074224: andi        $t9, $t6, 0x3FF
    ctx->r25 = ctx->r14 & 0X3FF;
    // 0x80074228: andi        $t8, $t0, 0x3FF
    ctx->r24 = ctx->r8 & 0X3FF;
    // 0x8007422C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80074230: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x80074234: sll         $t7, $t9, 14
    ctx->r15 = S32(ctx->r25 << 14);
    // 0x80074238: or          $t1, $t7, $t5
    ctx->r9 = ctx->r15 | ctx->r13;
    // 0x8007423C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80074240: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x80074244: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80074248: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8007424C: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x80074250: sw          $t3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r11;
    // 0x80074254: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80074258: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8007425C: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x80074260: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80074264: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80074268: lui         $t4, 0xFA00
    ctx->r12 = S32(0XFA00 << 16);
    // 0x8007426C: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x80074270: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80074274: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80074278: lh          $t7, 0xA($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XA);
    // 0x8007427C: lh          $t2, 0xC($t8)
    ctx->r10 = MEM_H(ctx->r24, 0XC);
    // 0x80074280: lh          $t4, 0xE($t8)
    ctx->r12 = MEM_H(ctx->r24, 0XE);
    // 0x80074284: andi        $t5, $t7, 0xFF
    ctx->r13 = ctx->r15 & 0XFF;
    // 0x80074288: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x8007428C: sll         $t6, $t3, 16
    ctx->r14 = S32(ctx->r11 << 16);
    // 0x80074290: sll         $t1, $t5, 24
    ctx->r9 = S32(ctx->r13 << 24);
    // 0x80074294: lh          $t2, 0x10($t8)
    ctx->r10 = MEM_H(ctx->r24, 0X10);
    // 0x80074298: or          $t9, $t1, $t6
    ctx->r25 = ctx->r9 | ctx->r14;
    // 0x8007429C: andi        $t0, $t4, 0xFF
    ctx->r8 = ctx->r12 & 0XFF;
    // 0x800742A0: sll         $t7, $t0, 8
    ctx->r15 = S32(ctx->r8 << 8);
    // 0x800742A4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800742A8: or          $t5, $t9, $t7
    ctx->r13 = ctx->r25 | ctx->r15;
    // 0x800742AC: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x800742B0: or          $t1, $t5, $t3
    ctx->r9 = ctx->r13 | ctx->r11;
    // 0x800742B4: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
    // 0x800742B8: lh          $t4, 0x50($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X50);
    // 0x800742BC: lh          $t2, 0x52($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X52);
    // 0x800742C0: addiu       $t0, $t4, 0x50
    ctx->r8 = ADD32(ctx->r12, 0X50);
    // 0x800742C4: andi        $t9, $t0, 0x3FF
    ctx->r25 = ctx->r8 & 0X3FF;
    // 0x800742C8: sll         $t7, $t9, 14
    ctx->r15 = S32(ctx->r25 << 14);
    // 0x800742CC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800742D0: andi        $t5, $t2, 0x3FF
    ctx->r13 = ctx->r10 & 0X3FF;
    // 0x800742D4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800742D8: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x800742DC: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x800742E0: or          $t1, $t8, $t3
    ctx->r9 = ctx->r24 | ctx->r11;
    // 0x800742E4: sw          $t1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r9;
    // 0x800742E8: lh          $t7, 0x52($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X52);
    // 0x800742EC: lh          $t4, 0x50($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X50);
    // 0x800742F0: addiu       $t2, $t7, -0xA0
    ctx->r10 = ADD32(ctx->r15, -0XA0);
    // 0x800742F4: andi        $t5, $t2, 0x3FF
    ctx->r13 = ctx->r10 & 0X3FF;
    // 0x800742F8: andi        $t0, $t4, 0x3FF
    ctx->r8 = ctx->r12 & 0X3FF;
    // 0x800742FC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80074300: sll         $t9, $t0, 14
    ctx->r25 = S32(ctx->r8 << 14);
    // 0x80074304: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80074308: or          $t3, $t9, $t8
    ctx->r11 = ctx->r25 | ctx->r24;
    // 0x8007430C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80074310: sw          $t3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r11;
    // 0x80074314: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80074318: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8007431C: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x80074320: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x80074324: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80074328: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8007432C: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80074330: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80074334: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80074338: sw          $s1, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r17;
    // 0x8007433C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80074340: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80074344: jr          $ra
    // 0x80074348: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80074348: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8007434C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007434C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80074350: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80074354: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80074358: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007435C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80074360: lbu         $t7, 0x1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1);
    // 0x80074364: nop

    // 0x80074368: beq         $t7, $zero, L_80074378
    if (ctx->r15 == 0) {
        // 0x8007436C: nop
    
            goto L_80074378;
    }
    // 0x8007436C: nop

    // 0x80074370: jal         0x80073C60
    // 0x80074374: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_80073C60(rdram, ctx);
        goto after_0;
    // 0x80074374: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
L_80074378:
    // 0x80074378: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8007437C: lbu         $s0, -0x10E0($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X10E0);
    // 0x80074380: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80074384: beq         $s0, $at, L_800743E8
    if (ctx->r16 == ctx->r1) {
        // 0x80074388: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800743E8;
    }
    // 0x80074388: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007438C: beq         $s0, $at, L_800743AC
    if (ctx->r16 == ctx->r1) {
        // 0x80074390: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800743AC;
    }
    // 0x80074390: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80074394: beq         $s0, $at, L_800743C0
    if (ctx->r16 == ctx->r1) {
        // 0x80074398: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_800743C0;
    }
    // 0x80074398: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8007439C: beq         $s0, $at, L_800743C0
    if (ctx->r16 == ctx->r1) {
        // 0x800743A0: nop
    
            goto L_800743C0;
    }
    // 0x800743A0: nop

    // 0x800743A4: b           L_800743D4
    // 0x800743A8: nop

        goto L_800743D4;
    // 0x800743A8: nop

L_800743AC:
    // 0x800743AC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800743B0: jal         0x80073D70
    // 0x800743B4: nop

    func_80073D70(rdram, ctx);
        goto after_1;
    // 0x800743B4: nop

    after_1:
    // 0x800743B8: b           L_800743E8
    // 0x800743BC: nop

        goto L_800743E8;
    // 0x800743BC: nop

L_800743C0:
    // 0x800743C0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800743C4: jal         0x80074024
    // 0x800743C8: nop

    func_80074024(rdram, ctx);
        goto after_2;
    // 0x800743C8: nop

    after_2:
    // 0x800743CC: b           L_800743E8
    // 0x800743D0: nop

        goto L_800743E8;
    // 0x800743D0: nop

L_800743D4:
    // 0x800743D4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800743D8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800743DC: addiu       $a1, $a1, -0x24EC
    ctx->r5 = ADD32(ctx->r5, -0X24EC);
    // 0x800743E0: jal         0x80083560
    // 0x800743E4: addiu       $a0, $a0, -0x2510
    ctx->r4 = ADD32(ctx->r4, -0X2510);
    Fault_Assert(rdram, ctx);
        goto after_3;
    // 0x800743E4: addiu       $a0, $a0, -0x2510
    ctx->r4 = ADD32(ctx->r4, -0X2510);
    after_3:
L_800743E8:
    // 0x800743E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800743EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800743F0: jr          $ra
    // 0x800743F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800743F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800743F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800743F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800743FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80074400: jal         0x80060814
    // 0x80074404: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80060814(rdram, ctx);
        goto after_0;
    // 0x80074404: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80074408: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8007440C: lbu         $t6, -0x10E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X10E0);
    // 0x80074410: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80074414: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x80074418: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8007441C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80074420: bne         $t6, $zero, L_8007442C
    if (ctx->r14 != 0) {
        // 0x80074424: nop
    
            goto L_8007442C;
    }
    // 0x80074424: nop

    // 0x80074428: break       7
    do_break(2147959848);
L_8007442C:
    // 0x8007442C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80074430: mfhi        $t7
    ctx->r15 = hi;
    // 0x80074434: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x80074438: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8007443C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80074440: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
    // 0x80074444: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80074448: nop

    // 0x8007444C: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
    // 0x80074450: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80074454: nop

    // 0x80074458: sh          $zero, 0x4($t2)
    MEM_H(0X4, ctx->r10) = 0;
    // 0x8007445C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80074460: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x80074464: sh          $zero, 0x6($t3)
    MEM_H(0X6, ctx->r11) = 0;
    // 0x80074468: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8007446C: nop

    // 0x80074470: sh          $t4, 0x8($t5)
    MEM_H(0X8, ctx->r13) = ctx->r12;
    // 0x80074474: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80074478: nop

    // 0x8007447C: sh          $t6, 0xA($t7)
    MEM_H(0XA, ctx->r15) = ctx->r14;
    // 0x80074480: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80074484: nop

    // 0x80074488: sh          $t8, 0xC($t9)
    MEM_H(0XC, ctx->r25) = ctx->r24;
    // 0x8007448C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80074490: nop

    // 0x80074494: sh          $t0, 0xE($t1)
    MEM_H(0XE, ctx->r9) = ctx->r8;
    // 0x80074498: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8007449C: nop

    // 0x800744A0: sh          $t2, 0x10($t3)
    MEM_H(0X10, ctx->r11) = ctx->r10;
    // 0x800744A4: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x800744A8: nop

    // 0x800744AC: sh          $zero, 0x12($t4)
    MEM_H(0X12, ctx->r12) = 0;
    // 0x800744B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800744B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800744B8: jr          $ra
    // 0x800744BC: nop

    return;
    // 0x800744BC: nop

;}
RECOMP_FUNC void func_800744C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800744C0: jr          $ra
    // 0x800744C4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x800744C4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800744C8: nop

    // 0x800744CC: nop

;}
RECOMP_FUNC void func_800744D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800744D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800744D4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800744D8: lw          $t6, 0x600($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X600);
    // 0x800744DC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800744E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800744E4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800744E8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800744EC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800744F0: beq         $t6, $zero, L_8007452C
    if (ctx->r14 == 0) {
        // 0x800744F4: sw          $zero, -0x360($at)
        MEM_W(-0X360, ctx->r1) = 0;
            goto L_8007452C;
    }
    // 0x800744F4: sw          $zero, -0x360($at)
    MEM_W(-0X360, ctx->r1) = 0;
L_800744F8:
    // 0x800744F8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800744FC: lw          $t7, -0x360($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X360);
    // 0x80074500: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80074504: beq         $t7, $at, L_8007452C
    if (ctx->r15 == ctx->r1) {
        // 0x80074508: nop
    
            goto L_8007452C;
    }
    // 0x80074508: nop

    // 0x8007450C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80074510: lw          $t8, -0x360($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X360);
    // 0x80074514: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80074518: lw          $t0, 0x600($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X600);
    // 0x8007451C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80074520: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80074524: bne         $t0, $zero, L_800744F8
    if (ctx->r8 != 0) {
        // 0x80074528: sw          $t9, -0x360($at)
        MEM_W(-0X360, ctx->r1) = ctx->r25;
            goto L_800744F8;
    }
    // 0x80074528: sw          $t9, -0x360($at)
    MEM_W(-0X360, ctx->r1) = ctx->r25;
L_8007452C:
    // 0x8007452C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80074530: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80074534: jal         0x800B6650
    // 0x80074538: sw          $t1, 0x600($at)
    MEM_W(0X600, ctx->r1) = ctx->r9;
    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_0;
    // 0x80074538: sw          $t1, 0x600($at)
    MEM_W(0X600, ctx->r1) = ctx->r9;
    after_0:
    // 0x8007453C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80074540: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80074544: jal         0x800ABFF0
    // 0x80074548: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_800ABFF0(rdram, ctx);
        goto after_1;
    // 0x80074548: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x8007454C: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80074550: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80074554: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80074558: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    // 0x8007455C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80074560: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80074564: jal         0x800ABFF0
    // 0x80074568: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800ABFF0(rdram, ctx);
        goto after_2;
    // 0x80074568: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x8007456C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80074570: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80074574: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80074578: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007457C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80074580: addu        $a0, $t5, $t8
    ctx->r4 = ADD32(ctx->r13, ctx->r24);
    // 0x80074584: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80074588: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8007458C: jal         0x800ABFF0
    // 0x80074590: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800ABFF0(rdram, ctx);
        goto after_3;
    // 0x80074590: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x80074594: addiu       $t9, $sp, 0x18
    ctx->r25 = ADD32(ctx->r29, 0X18);
    // 0x80074598: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x8007459C: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x800745A0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800745A4: subu        $t3, $t0, $t1
    ctx->r11 = SUB32(ctx->r8, ctx->r9);
    // 0x800745A8: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x800745AC: lw          $t2, 0x0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X0);
    // 0x800745B0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x800745B4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x800745B8: jal         0x800ABFF0
    // 0x800745BC: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    func_800ABFF0(rdram, ctx);
        goto after_4;
    // 0x800745BC: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    after_4:
    // 0x800745C0: jal         0x800B6650
    // 0x800745C4: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_5;
    // 0x800745C4: nop

    after_5:
    // 0x800745C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800745CC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800745D0: sw          $zero, 0x600($at)
    MEM_W(0X600, ctx->r1) = 0;
    // 0x800745D4: jr          $ra
    // 0x800745D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800745D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800745DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800745DC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800745E0: lw          $t6, 0x600($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X600);
    // 0x800745E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800745E8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800745EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800745F0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800745F4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800745F8: beq         $t6, $zero, L_80074634
    if (ctx->r14 == 0) {
        // 0x800745FC: sw          $zero, -0x35C($at)
        MEM_W(-0X35C, ctx->r1) = 0;
            goto L_80074634;
    }
    // 0x800745FC: sw          $zero, -0x35C($at)
    MEM_W(-0X35C, ctx->r1) = 0;
L_80074600:
    // 0x80074600: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80074604: lw          $t7, -0x35C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X35C);
    // 0x80074608: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8007460C: beq         $t7, $at, L_80074634
    if (ctx->r15 == ctx->r1) {
        // 0x80074610: nop
    
            goto L_80074634;
    }
    // 0x80074610: nop

    // 0x80074614: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80074618: lw          $t8, -0x35C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X35C);
    // 0x8007461C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80074620: lw          $t0, 0x600($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X600);
    // 0x80074624: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80074628: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8007462C: bne         $t0, $zero, L_80074600
    if (ctx->r8 != 0) {
        // 0x80074630: sw          $t9, -0x35C($at)
        MEM_W(-0X35C, ctx->r1) = ctx->r25;
            goto L_80074600;
    }
    // 0x80074630: sw          $t9, -0x35C($at)
    MEM_W(-0X35C, ctx->r1) = ctx->r25;
L_80074634:
    // 0x80074634: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80074638: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007463C: jal         0x800B6650
    // 0x80074640: sw          $t1, 0x600($at)
    MEM_W(0X600, ctx->r1) = ctx->r9;
    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_0;
    // 0x80074640: sw          $t1, 0x600($at)
    MEM_W(0X600, ctx->r1) = ctx->r9;
    after_0:
    // 0x80074644: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80074648: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8007464C: jal         0x800ABFF0
    // 0x80074650: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_800ABFF0(rdram, ctx);
        goto after_1;
    // 0x80074650: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x80074654: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80074658: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8007465C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80074660: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    // 0x80074664: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80074668: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8007466C: jal         0x800ABFF0
    // 0x80074670: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800ABFF0(rdram, ctx);
        goto after_2;
    // 0x80074670: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x80074674: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80074678: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8007467C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80074680: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80074684: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80074688: addu        $a0, $t5, $t8
    ctx->r4 = ADD32(ctx->r13, ctx->r24);
    // 0x8007468C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80074690: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80074694: jal         0x800ABFF0
    // 0x80074698: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800ABFF0(rdram, ctx);
        goto after_3;
    // 0x80074698: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x8007469C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800746A0: sw          $zero, 0x600($at)
    MEM_W(0X600, ctx->r1) = 0;
    // 0x800746A4: addiu       $t9, $sp, 0x18
    ctx->r25 = ADD32(ctx->r29, 0X18);
    // 0x800746A8: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x800746AC: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x800746B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800746B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800746B8: jr          $ra
    // 0x800746BC: subu        $v0, $t0, $t1
    ctx->r2 = SUB32(ctx->r8, ctx->r9);
    return;
    // 0x800746BC: subu        $v0, $t0, $t1
    ctx->r2 = SUB32(ctx->r8, ctx->r9);
;}
RECOMP_FUNC void func_800746C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800746C0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800746C4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800746C8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800746CC: lw          $t6, 0x600($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X600);
    // 0x800746D0: sb          $zero, -0x2B4($at)
    MEM_B(-0X2B4, ctx->r1) = 0;
    // 0x800746D4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800746D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800746DC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x800746E0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x800746E4: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x800746E8: beq         $t6, $zero, L_80074724
    if (ctx->r14 == 0) {
        // 0x800746EC: sw          $zero, -0x358($at)
        MEM_W(-0X358, ctx->r1) = 0;
            goto L_80074724;
    }
    // 0x800746EC: sw          $zero, -0x358($at)
    MEM_W(-0X358, ctx->r1) = 0;
L_800746F0:
    // 0x800746F0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800746F4: lw          $t7, -0x358($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X358);
    // 0x800746F8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x800746FC: beq         $t7, $at, L_80074724
    if (ctx->r15 == ctx->r1) {
        // 0x80074700: nop
    
            goto L_80074724;
    }
    // 0x80074700: nop

    // 0x80074704: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80074708: lw          $t8, -0x358($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X358);
    // 0x8007470C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80074710: lw          $t0, 0x600($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X600);
    // 0x80074714: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80074718: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8007471C: bne         $t0, $zero, L_800746F0
    if (ctx->r8 != 0) {
        // 0x80074720: sw          $t9, -0x358($at)
        MEM_W(-0X358, ctx->r1) = ctx->r25;
            goto L_800746F0;
    }
    // 0x80074720: sw          $t9, -0x358($at)
    MEM_W(-0X358, ctx->r1) = ctx->r25;
L_80074724:
    // 0x80074724: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80074728: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007472C: jal         0x800B6650
    // 0x80074730: sw          $t1, 0x600($at)
    MEM_W(0X600, ctx->r1) = ctx->r9;
    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_0;
    // 0x80074730: sw          $t1, 0x600($at)
    MEM_W(0X600, ctx->r1) = ctx->r9;
    after_0:
    // 0x80074734: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80074738: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8007473C: jal         0x800ABFF0
    // 0x80074740: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_800ABFF0(rdram, ctx);
        goto after_1;
    // 0x80074740: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x80074744: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x80074748: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8007474C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80074750: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    // 0x80074754: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80074758: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8007475C: jal         0x800ABFF0
    // 0x80074760: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800ABFF0(rdram, ctx);
        goto after_2;
    // 0x80074760: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x80074764: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x80074768: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x8007476C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80074770: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80074774: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80074778: addu        $a0, $t5, $t8
    ctx->r4 = ADD32(ctx->r13, ctx->r24);
    // 0x8007477C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80074780: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80074784: jal         0x800ABFF0
    // 0x80074788: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800ABFF0(rdram, ctx);
        goto after_3;
    // 0x80074788: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x8007478C: addiu       $t9, $sp, 0x30
    ctx->r25 = ADD32(ctx->r29, 0X30);
    // 0x80074790: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80074794: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80074798: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8007479C: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x800747A0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800747A4: jal         0x800ABFF0
    // 0x800747A8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800ABFF0(rdram, ctx);
        goto after_4;
    // 0x800747A8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x800747AC: addiu       $t3, $sp, 0x30
    ctx->r11 = ADD32(ctx->r29, 0X30);
    // 0x800747B0: lw          $t2, 0x0($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X0);
    // 0x800747B4: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x800747B8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800747BC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800747C0: jal         0x800ABFF0
    // 0x800747C4: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    func_800ABFF0(rdram, ctx);
        goto after_5;
    // 0x800747C4: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    after_5:
    // 0x800747C8: addiu       $t6, $sp, 0x30
    ctx->r14 = ADD32(ctx->r29, 0X30);
    // 0x800747CC: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x800747D0: lw          $t5, 0x0($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X0);
    // 0x800747D4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800747D8: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x800747DC: ori         $t9, $t9, 0x400
    ctx->r25 = ctx->r25 | 0X400;
    // 0x800747E0: addiu       $at, $zero, 0x53
    ctx->r1 = ADD32(0, 0X53);
    // 0x800747E4: subu        $t8, $t7, $t5
    ctx->r24 = SUB32(ctx->r15, ctx->r13);
    // 0x800747E8: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x800747EC: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x800747F0: bne         $t1, $at, L_80074838
    if (ctx->r9 != ctx->r1) {
        // 0x800747F4: sw          $t9, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r25;
            goto L_80074838;
    }
    // 0x800747F4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800747F8: lw          $t3, 0x0($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X0);
    // 0x800747FC: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80074800: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80074804: ori         $a1, $a1, 0x400
    ctx->r5 = ctx->r5 | 0X400;
    // 0x80074808: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8007480C: jal         0x800ABFF0
    // 0x80074810: addu        $a0, $t3, $t2
    ctx->r4 = ADD32(ctx->r11, ctx->r10);
    func_800ABFF0(rdram, ctx);
        goto after_6;
    // 0x80074810: addu        $a0, $t3, $t2
    ctx->r4 = ADD32(ctx->r11, ctx->r10);
    after_6:
    // 0x80074814: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80074818: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x8007481C: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x80074820: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80074824: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80074828: jal         0x80080EC8
    // 0x8007482C: addiu       $a3, $a3, -0x8
    ctx->r7 = ADD32(ctx->r7, -0X8);
    func_80080EC8(rdram, ctx);
        goto after_7;
    // 0x8007482C: addiu       $a3, $a3, -0x8
    ctx->r7 = ADD32(ctx->r7, -0X8);
    after_7:
    // 0x80074830: b           L_8007485C
    // 0x80074834: nop

        goto L_8007485C;
    // 0x80074834: nop

L_80074838:
    // 0x80074838: addiu       $t4, $sp, 0x30
    ctx->r12 = ADD32(ctx->r29, 0X30);
    // 0x8007483C: lw          $t7, 0x0($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X0);
    // 0x80074840: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80074844: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x80074848: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x8007484C: addu        $a0, $t7, $t5
    ctx->r4 = ADD32(ctx->r15, ctx->r13);
    // 0x80074850: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80074854: jal         0x800ABFF0
    // 0x80074858: addiu       $a2, $a2, -0x8
    ctx->r6 = ADD32(ctx->r6, -0X8);
    func_800ABFF0(rdram, ctx);
        goto after_8;
    // 0x80074858: addiu       $a2, $a2, -0x8
    ctx->r6 = ADD32(ctx->r6, -0X8);
    after_8:
L_8007485C:
    // 0x8007485C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80074860: jal         0x800B6650
    // 0x80074864: sw          $zero, 0x600($at)
    MEM_W(0X600, ctx->r1) = 0;
    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_9;
    // 0x80074864: sw          $zero, 0x600($at)
    MEM_W(0X600, ctx->r1) = 0;
    after_9:
    // 0x80074868: jal         0x8004A34C
    // 0x8007486C: nop

    func_8004A34C(rdram, ctx);
        goto after_10;
    // 0x8007486C: nop

    after_10:
    // 0x80074870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80074874: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80074878: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007487C: sb          $t9, -0x2B4($at)
    MEM_B(-0X2B4, ctx->r1) = ctx->r25;
    // 0x80074880: jr          $ra
    // 0x80074884: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80074884: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80074888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074888: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8007488C: lw          $t6, 0x600($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X600);
    // 0x80074890: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80074894: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80074898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007489C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800748A0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800748A4: beq         $t6, $zero, L_800748E0
    if (ctx->r14 == 0) {
        // 0x800748A8: sw          $zero, -0x354($at)
        MEM_W(-0X354, ctx->r1) = 0;
            goto L_800748E0;
    }
    // 0x800748A8: sw          $zero, -0x354($at)
    MEM_W(-0X354, ctx->r1) = 0;
L_800748AC:
    // 0x800748AC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800748B0: lw          $t7, -0x354($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X354);
    // 0x800748B4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x800748B8: beq         $t7, $at, L_800748E0
    if (ctx->r15 == ctx->r1) {
        // 0x800748BC: nop
    
            goto L_800748E0;
    }
    // 0x800748BC: nop

    // 0x800748C0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800748C4: lw          $t8, -0x354($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X354);
    // 0x800748C8: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800748CC: lw          $t0, 0x600($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X600);
    // 0x800748D0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800748D4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800748D8: bne         $t0, $zero, L_800748AC
    if (ctx->r8 != 0) {
        // 0x800748DC: sw          $t9, -0x354($at)
        MEM_W(-0X354, ctx->r1) = ctx->r25;
            goto L_800748AC;
    }
    // 0x800748DC: sw          $t9, -0x354($at)
    MEM_W(-0X354, ctx->r1) = ctx->r25;
L_800748E0:
    // 0x800748E0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800748E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800748E8: jal         0x800B6650
    // 0x800748EC: sw          $t1, 0x600($at)
    MEM_W(0X600, ctx->r1) = ctx->r9;
    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_0;
    // 0x800748EC: sw          $t1, 0x600($at)
    MEM_W(0X600, ctx->r1) = ctx->r9;
    after_0:
    // 0x800748F0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800748F4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800748F8: jal         0x800ABFF0
    // 0x800748FC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_800ABFF0(rdram, ctx);
        goto after_1;
    // 0x800748FC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x80074900: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80074904: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80074908: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8007490C: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    // 0x80074910: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80074914: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80074918: jal         0x800ABFF0
    // 0x8007491C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800ABFF0(rdram, ctx);
        goto after_2;
    // 0x8007491C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x80074920: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80074924: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80074928: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8007492C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80074930: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80074934: addu        $a0, $t5, $t8
    ctx->r4 = ADD32(ctx->r13, ctx->r24);
    // 0x80074938: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8007493C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80074940: jal         0x800ABFF0
    // 0x80074944: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800ABFF0(rdram, ctx);
        goto after_3;
    // 0x80074944: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x80074948: addiu       $t9, $sp, 0x28
    ctx->r25 = ADD32(ctx->r29, 0X28);
    // 0x8007494C: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80074950: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80074954: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80074958: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x8007495C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80074960: jal         0x800ABFF0
    // 0x80074964: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800ABFF0(rdram, ctx);
        goto after_4;
    // 0x80074964: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x80074968: addiu       $t3, $sp, 0x28
    ctx->r11 = ADD32(ctx->r29, 0X28);
    // 0x8007496C: lw          $t2, 0x0($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X0);
    // 0x80074970: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80074974: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80074978: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8007497C: jal         0x800ABFF0
    // 0x80074980: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    func_800ABFF0(rdram, ctx);
        goto after_5;
    // 0x80074980: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    after_5:
    // 0x80074984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80074988: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007498C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80074990: sw          $zero, 0x600($at)
    MEM_W(0X600, ctx->r1) = 0;
    // 0x80074994: jr          $ra
    // 0x80074998: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80074998: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8007499C: nop

;}
RECOMP_FUNC void func_800749A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800749A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800749A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800749A8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800749AC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800749B0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800749B4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800749B8: jal         0x80060814
    // 0x800749BC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80060814(rdram, ctx);
        goto after_0;
    // 0x800749BC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x800749C0: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x800749C4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x800749C8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800749CC: mfhi        $s0
    ctx->r16 = hi;
    // 0x800749D0: addiu       $s0, $s0, 0xF
    ctx->r16 = ADD32(ctx->r16, 0XF);
    // 0x800749D4: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x800749D8: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x800749DC: sra         $t7, $s0, 16
    ctx->r15 = S32(SIGNED(ctx->r16) >> 16);
    // 0x800749E0: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x800749E4: sh          $s0, 0x12($t8)
    MEM_H(0X12, ctx->r24) = ctx->r16;
    // 0x800749E8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800749EC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800749F0: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800749F4: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x800749F8: jal         0x80060814
    // 0x800749FC: sh          $t1, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r9;
    func_80060814(rdram, ctx);
        goto after_1;
    // 0x800749FC: sh          $t1, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r9;
    after_1:
    // 0x80074A00: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80074A04: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80074A08: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x80074A0C: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x80074A10: lh          $t4, 0x4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X4);
    // 0x80074A14: bne         $t6, $zero, L_80074A20
    if (ctx->r14 != 0) {
        // 0x80074A18: nop
    
            goto L_80074A20;
    }
    // 0x80074A18: nop

    // 0x80074A1C: break       7
    do_break(2147961372);
L_80074A20:
    // 0x80074A20: mfhi        $t7
    ctx->r15 = hi;
    // 0x80074A24: subu        $s1, $t4, $t7
    ctx->r17 = SUB32(ctx->r12, ctx->r15);
    // 0x80074A28: negu        $t8, $s1
    ctx->r24 = SUB32(0, ctx->r17);
    // 0x80074A2C: div         $zero, $t8, $s0
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r16)));
    // 0x80074A30: bne         $s0, $zero, L_80074A3C
    if (ctx->r16 != 0) {
        // 0x80074A34: nop
    
            goto L_80074A3C;
    }
    // 0x80074A34: nop

    // 0x80074A38: break       7
    do_break(2147961400);
L_80074A3C:
    // 0x80074A3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80074A40: bne         $s0, $at, L_80074A54
    if (ctx->r16 != ctx->r1) {
        // 0x80074A44: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80074A54;
    }
    // 0x80074A44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80074A48: bne         $t8, $at, L_80074A54
    if (ctx->r24 != ctx->r1) {
        // 0x80074A4C: nop
    
            goto L_80074A54;
    }
    // 0x80074A4C: nop

    // 0x80074A50: break       6
    do_break(2147961424);
L_80074A54:
    // 0x80074A54: mflo        $t9
    ctx->r25 = lo;
    // 0x80074A58: sh          $t9, 0x6($t3)
    MEM_H(0X6, ctx->r11) = ctx->r25;
    // 0x80074A5C: jal         0x80060814
    // 0x80074A60: nop

    func_80060814(rdram, ctx);
        goto after_2;
    // 0x80074A60: nop

    after_2:
    // 0x80074A64: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80074A68: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x80074A6C: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x80074A70: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x80074A74: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80074A78: nop

    // 0x80074A7C: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x80074A80: nop

    // 0x80074A84: negu        $t4, $t6
    ctx->r12 = SUB32(0, ctx->r14);
    // 0x80074A88: div         $zero, $t4, $s0
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r16)));
    // 0x80074A8C: bne         $s0, $zero, L_80074A98
    if (ctx->r16 != 0) {
        // 0x80074A90: nop
    
            goto L_80074A98;
    }
    // 0x80074A90: nop

    // 0x80074A94: break       7
    do_break(2147961492);
L_80074A98:
    // 0x80074A98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80074A9C: bne         $s0, $at, L_80074AB0
    if (ctx->r16 != ctx->r1) {
        // 0x80074AA0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80074AB0;
    }
    // 0x80074AA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80074AA4: bne         $t4, $at, L_80074AB0
    if (ctx->r12 != ctx->r1) {
        // 0x80074AA8: nop
    
            goto L_80074AB0;
    }
    // 0x80074AA8: nop

    // 0x80074AAC: break       6
    do_break(2147961516);
L_80074AB0:
    // 0x80074AB0: mflo        $t7
    ctx->r15 = lo;
    // 0x80074AB4: sh          $t7, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r15;
    // 0x80074AB8: jal         0x80060814
    // 0x80074ABC: nop

    func_80060814(rdram, ctx);
        goto after_3;
    // 0x80074ABC: nop

    after_3:
    // 0x80074AC0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80074AC4: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x80074AC8: jal         0x80060814
    // 0x80074ACC: sh          $t8, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r24;
    func_80060814(rdram, ctx);
        goto after_4;
    // 0x80074ACC: sh          $t8, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r24;
    after_4:
    // 0x80074AD0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80074AD4: andi        $t3, $v0, 0x3FF
    ctx->r11 = ctx->r2 & 0X3FF;
    // 0x80074AD8: addiu       $t0, $t3, -0x200
    ctx->r8 = ADD32(ctx->r11, -0X200);
    // 0x80074ADC: jal         0x80060814
    // 0x80074AE0: sh          $t0, 0xA($t1)
    MEM_H(0XA, ctx->r9) = ctx->r8;
    func_80060814(rdram, ctx);
        goto after_5;
    // 0x80074AE0: sh          $t0, 0xA($t1)
    MEM_H(0XA, ctx->r9) = ctx->r8;
    after_5:
    // 0x80074AE4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80074AE8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80074AEC: sll         $t6, $t2, 4
    ctx->r14 = S32(ctx->r10 << 4);
    // 0x80074AF0: subu        $t6, $t6, $t2
    ctx->r14 = SUB32(ctx->r14, ctx->r10);
    // 0x80074AF4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80074AF8: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x80074AFC: bne         $t6, $zero, L_80074B08
    if (ctx->r14 != 0) {
        // 0x80074B00: nop
    
            goto L_80074B08;
    }
    // 0x80074B00: nop

    // 0x80074B04: break       7
    do_break(2147961604);
L_80074B08:
    // 0x80074B08: mfhi        $t4
    ctx->r12 = hi;
    // 0x80074B0C: sh          $t4, 0xC($t7)
    MEM_H(0XC, ctx->r15) = ctx->r12;
    // 0x80074B10: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80074B14: nop

    // 0x80074B18: lh          $t8, 0xC($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XC);
    // 0x80074B1C: nop

    // 0x80074B20: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x80074B24: div         $zero, $t9, $s0
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r16)));
    // 0x80074B28: bne         $s0, $zero, L_80074B34
    if (ctx->r16 != 0) {
        // 0x80074B2C: nop
    
            goto L_80074B34;
    }
    // 0x80074B2C: nop

    // 0x80074B30: break       7
    do_break(2147961648);
L_80074B34:
    // 0x80074B34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80074B38: bne         $s0, $at, L_80074B4C
    if (ctx->r16 != ctx->r1) {
        // 0x80074B3C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80074B4C;
    }
    // 0x80074B3C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80074B40: bne         $t9, $at, L_80074B4C
    if (ctx->r25 != ctx->r1) {
        // 0x80074B44: nop
    
            goto L_80074B4C;
    }
    // 0x80074B44: nop

    // 0x80074B48: break       6
    do_break(2147961672);
L_80074B4C:
    // 0x80074B4C: mflo        $t3
    ctx->r11 = lo;
    // 0x80074B50: sh          $t3, 0xE($t5)
    MEM_H(0XE, ctx->r13) = ctx->r11;
    // 0x80074B54: jal         0x80060814
    // 0x80074B58: nop

    func_80060814(rdram, ctx);
        goto after_6;
    // 0x80074B58: nop

    after_6:
    // 0x80074B5C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80074B60: andi        $t0, $v0, 0x3F
    ctx->r8 = ctx->r2 & 0X3F;
    // 0x80074B64: addiu       $t1, $t0, -0x1F
    ctx->r9 = ADD32(ctx->r8, -0X1F);
    // 0x80074B68: sh          $t1, 0x10($t2)
    MEM_H(0X10, ctx->r10) = ctx->r9;
    // 0x80074B6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80074B70: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80074B74: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80074B78: jr          $ra
    // 0x80074B7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80074B7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80074B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074B80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80074B84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80074B88: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80074B8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80074B90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80074B94: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80074B98: beq         $t6, $zero, L_80074C70
    if (ctx->r14 == 0) {
        // 0x80074B9C: sw          $a3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r7;
            goto L_80074C70;
    }
    // 0x80074B9C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
L_80074BA0:
    // 0x80074BA0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80074BA4: nop

    // 0x80074BA8: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x80074BAC: lh          $t9, 0x2($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X2);
    // 0x80074BB0: nop

    // 0x80074BB4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80074BB8: sh          $t0, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r8;
    // 0x80074BBC: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80074BC0: nop

    // 0x80074BC4: lh          $t2, 0xC($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC);
    // 0x80074BC8: lh          $t3, 0xE($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XE);
    // 0x80074BCC: nop

    // 0x80074BD0: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80074BD4: sh          $t4, 0xC($t1)
    MEM_H(0XC, ctx->r9) = ctx->r12;
    // 0x80074BD8: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80074BDC: nop

    // 0x80074BE0: lh          $t6, 0x4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X4);
    // 0x80074BE4: lh          $t8, 0x6($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X6);
    // 0x80074BE8: nop

    // 0x80074BEC: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80074BF0: sh          $t9, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r25;
    // 0x80074BF4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80074BF8: nop

    // 0x80074BFC: lhu         $t7, 0x8($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X8);
    // 0x80074C00: lh          $t2, 0xA($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA);
    // 0x80074C04: nop

    // 0x80074C08: addu        $t3, $t7, $t2
    ctx->r11 = ADD32(ctx->r15, ctx->r10);
    // 0x80074C0C: sh          $t3, 0x8($t0)
    MEM_H(0X8, ctx->r8) = ctx->r11;
    // 0x80074C10: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80074C14: nop

    // 0x80074C18: lhu         $t1, 0x12($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X12);
    // 0x80074C1C: nop

    // 0x80074C20: addiu       $t6, $t1, -0x1
    ctx->r14 = ADD32(ctx->r9, -0X1);
    // 0x80074C24: sh          $t6, 0x12($t4)
    MEM_H(0X12, ctx->r12) = ctx->r14;
    // 0x80074C28: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80074C2C: nop

    // 0x80074C30: lhu         $t9, 0x12($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X12);
    // 0x80074C34: nop

    // 0x80074C38: bne         $t9, $zero, L_80074C50
    if (ctx->r25 != 0) {
        // 0x80074C3C: nop
    
            goto L_80074C50;
    }
    // 0x80074C3C: nop

    // 0x80074C40: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80074C44: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80074C48: jal         0x800749A0
    // 0x80074C4C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_800749A0(rdram, ctx);
        goto after_0;
    // 0x80074C4C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_0:
L_80074C50:
    // 0x80074C50: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80074C54: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80074C58: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80074C5C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80074C60: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80074C64: addiu       $t7, $t5, 0x14
    ctx->r15 = ADD32(ctx->r13, 0X14);
    // 0x80074C68: bne         $t0, $zero, L_80074BA0
    if (ctx->r8 != 0) {
        // 0x80074C6C: sw          $t7, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r15;
            goto L_80074BA0;
    }
    // 0x80074C6C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
L_80074C70:
    // 0x80074C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80074C74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80074C78: jr          $ra
    // 0x80074C7C: nop

    return;
    // 0x80074C7C: nop

;}
RECOMP_FUNC void func_80074C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074C80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80074C84: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80074C88: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80074C8C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80074C90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80074C94: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80074C98: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80074C9C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80074CA0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80074CA4: beq         $t6, $zero, L_80074D68
    if (ctx->r14 == 0) {
        // 0x80074CA8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80074D68;
    }
    // 0x80074CA8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80074CAC:
    // 0x80074CAC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80074CB0: nop

    // 0x80074CB4: lhu         $a0, 0x8($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X8);
    // 0x80074CB8: jal         0x800B8010
    // 0x80074CBC: nop

    sins(rdram, ctx);
        goto after_0;
    // 0x80074CBC: nop

    after_0:
    // 0x80074CC0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80074CC4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80074CC8: lh          $t9, 0xC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC);
    // 0x80074CCC: lh          $s1, 0x4($t8)
    ctx->r17 = MEM_H(ctx->r24, 0X4);
    // 0x80074CD0: multu       $v0, $t9
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80074CD4: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x80074CD8: sra         $t3, $s1, 8
    ctx->r11 = S32(SIGNED(ctx->r17) >> 8);
    // 0x80074CDC: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80074CE0: mflo        $s0
    ctx->r16 = lo;
    // 0x80074CE4: sra         $t0, $s0, 23
    ctx->r8 = S32(SIGNED(ctx->r16) >> 23);
    // 0x80074CE8: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x80074CEC: addu        $s0, $s0, $t2
    ctx->r16 = ADD32(ctx->r16, ctx->r10);
    // 0x80074CF0: bltz        $s0, L_80074D68
    if (SIGNED(ctx->r16) < 0) {
        // 0x80074CF4: slt         $at, $s0, $t1
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
            goto L_80074D68;
    }
    // 0x80074CF4: slt         $at, $s0, $t1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80074CF8: beq         $at, $zero, L_80074D68
    if (ctx->r1 == 0) {
        // 0x80074CFC: nop
    
            goto L_80074D68;
    }
    // 0x80074CFC: nop

    // 0x80074D00: bltz        $s1, L_80074D68
    if (SIGNED(ctx->r17) < 0) {
        // 0x80074D04: nop
    
            goto L_80074D68;
    }
    // 0x80074D04: nop

    // 0x80074D08: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80074D0C: nop

    // 0x80074D10: slt         $at, $s1, $t4
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80074D14: beq         $at, $zero, L_80074D68
    if (ctx->r1 == 0) {
        // 0x80074D18: nop
    
            goto L_80074D68;
    }
    // 0x80074D18: nop

    // 0x80074D1C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80074D20: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80074D24: multu       $s1, $t0
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80074D28: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80074D2C: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x80074D30: nop

    // 0x80074D34: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x80074D38: mflo        $t2
    ctx->r10 = lo;
    // 0x80074D3C: addu        $t8, $s0, $t2
    ctx->r24 = ADD32(ctx->r16, ctx->r10);
    // 0x80074D40: addu        $t3, $t9, $t8
    ctx->r11 = ADD32(ctx->r25, ctx->r24);
    // 0x80074D44: sb          $t7, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r15;
    // 0x80074D48: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80074D4C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80074D50: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80074D54: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80074D58: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80074D5C: addiu       $t4, $t1, 0x14
    ctx->r12 = ADD32(ctx->r9, 0X14);
    // 0x80074D60: bne         $t0, $zero, L_80074CAC
    if (ctx->r8 != 0) {
        // 0x80074D64: sw          $t4, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r12;
            goto L_80074CAC;
    }
    // 0x80074D64: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
L_80074D68:
    // 0x80074D68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80074D6C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80074D70: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80074D74: jr          $ra
    // 0x80074D78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80074D78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80074D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074D7C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80074D80: lhu         $t6, 0x20B0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X20B0);
    // 0x80074D84: lbu         $t0, 0x15($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X15);
    // 0x80074D88: xori        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 ^ 0X1;
    // 0x80074D8C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80074D90: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x80074D94: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x80074D98: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x80074D9C: lw          $a1, 0xC($t9)
    ctx->r5 = MEM_W(ctx->r25, 0XC);
    // 0x80074DA0: lw          $a2, 0xC($t4)
    ctx->r6 = MEM_W(ctx->r12, 0XC);
    // 0x80074DA4: lbu         $t1, 0x14($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X14);
    // 0x80074DA8: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x80074DAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80074DB0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80074DB4: blez        $t0, L_80074E34
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80074DB8: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_80074E34;
    }
    // 0x80074DB8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_80074DBC:
    // 0x80074DBC: lbu         $a3, 0x14($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X14);
    // 0x80074DC0: nop

    // 0x80074DC4: addiu       $a3, $a3, -0x2
    ctx->r7 = ADD32(ctx->r7, -0X2);
    // 0x80074DC8: blez        $a3, L_80074E24
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80074DCC: nop
    
            goto L_80074E24;
    }
    // 0x80074DCC: nop

L_80074DD0:
    // 0x80074DD0: addu        $t5, $a1, $t1
    ctx->r13 = ADD32(ctx->r5, ctx->r9);
    // 0x80074DD4: addu        $t8, $a1, $t1
    ctx->r24 = ADD32(ctx->r5, ctx->r9);
    // 0x80074DD8: lbu         $t9, 0x1($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1);
    // 0x80074DDC: lbu         $t7, -0x1($t5)
    ctx->r15 = MEM_BU(ctx->r13, -0X1);
    // 0x80074DE0: addu        $t3, $a1, $t1
    ctx->r11 = ADD32(ctx->r5, ctx->r9);
    // 0x80074DE4: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x80074DE8: lbu         $t8, 0x0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X0);
    // 0x80074DEC: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80074DF0: addu        $t5, $t6, $t4
    ctx->r13 = ADD32(ctx->r14, ctx->r12);
    // 0x80074DF4: addu        $t2, $t8, $t5
    ctx->r10 = ADD32(ctx->r24, ctx->r13);
    // 0x80074DF8: sra         $t7, $t2, 2
    ctx->r15 = S32(SIGNED(ctx->r10) >> 2);
    // 0x80074DFC: or          $t2, $t7, $zero
    ctx->r10 = ctx->r15 | 0;
    // 0x80074E00: addiu       $t2, $t2, -0x4
    ctx->r10 = ADD32(ctx->r10, -0X4);
    // 0x80074E04: bgez        $t2, L_80074E10
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80074E08: nop
    
            goto L_80074E10;
    }
    // 0x80074E08: nop

    // 0x80074E0C: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
L_80074E10:
    // 0x80074E10: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x80074E14: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80074E18: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80074E1C: bgtz        $a3, L_80074DD0
    if (SIGNED(ctx->r7) > 0) {
        // 0x80074E20: sb          $t2, -0x1($a2)
        MEM_B(-0X1, ctx->r6) = ctx->r10;
            goto L_80074DD0;
    }
    // 0x80074E20: sb          $t2, -0x1($a2)
    MEM_B(-0X1, ctx->r6) = ctx->r10;
L_80074E24:
    // 0x80074E24: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x80074E28: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80074E2C: bgtz        $t0, L_80074DBC
    if (SIGNED(ctx->r8) > 0) {
        // 0x80074E30: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_80074DBC;
    }
    // 0x80074E30: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
L_80074E34:
    // 0x80074E34: jr          $ra
    // 0x80074E38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80074E38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80074E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074E3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80074E40: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80074E44: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80074E48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80074E4C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80074E50: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80074E54: lbu         $t2, 0x15($t6)
    ctx->r10 = MEM_BU(ctx->r14, 0X15);
    // 0x80074E58: lbu         $t1, 0x14($t6)
    ctx->r9 = MEM_BU(ctx->r14, 0X14);
    // 0x80074E5C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80074E60: multu       $t1, $t3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80074E64: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80074E68: lhu         $t7, 0x20B0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X20B0);
    // 0x80074E6C: lbu         $s1, 0x14($t6)
    ctx->r17 = MEM_BU(ctx->r14, 0X14);
    // 0x80074E70: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x80074E74: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80074E78: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x80074E7C: lw          $s0, 0xC($t0)
    ctx->r16 = MEM_W(ctx->r8, 0XC);
    // 0x80074E80: addiu       $s1, $s1, -0x2
    ctx->r17 = ADD32(ctx->r17, -0X2);
    // 0x80074E84: mflo        $t4
    ctx->r12 = lo;
    // 0x80074E88: addu        $s0, $s0, $t4
    ctx->r16 = ADD32(ctx->r16, ctx->r12);
    // 0x80074E8C: blez        $s1, L_80074EB0
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80074E90: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80074EB0;
    }
    // 0x80074E90: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80074E94:
    // 0x80074E94: jal         0x80060814
    // 0x80074E98: nop

    func_80060814(rdram, ctx);
        goto after_0;
    // 0x80074E98: nop

    after_0:
    // 0x80074E9C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x80074EA0: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x80074EA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80074EA8: bgtz        $s1, L_80074E94
    if (SIGNED(ctx->r17) > 0) {
        // 0x80074EAC: sb          $t5, -0x1($s0)
        MEM_B(-0X1, ctx->r16) = ctx->r13;
            goto L_80074E94;
    }
    // 0x80074EAC: sb          $t5, -0x1($s0)
    MEM_B(-0X1, ctx->r16) = ctx->r13;
L_80074EB0:
    // 0x80074EB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80074EB4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80074EB8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80074EBC: jr          $ra
    // 0x80074EC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80074EC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80074EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074EC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80074EC8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80074ECC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80074ED0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80074ED4: jal         0x80074D7C
    // 0x80074ED8: nop

    func_80074D7C(rdram, ctx);
        goto after_0;
    // 0x80074ED8: nop

    after_0:
    // 0x80074EDC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80074EE0: nop

    // 0x80074EE4: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    // 0x80074EE8: lhu         $a1, 0x4($t6)
    ctx->r5 = MEM_HU(ctx->r14, 0X4);
    // 0x80074EEC: lbu         $a2, 0x14($t6)
    ctx->r6 = MEM_BU(ctx->r14, 0X14);
    // 0x80074EF0: lbu         $a3, 0x15($t6)
    ctx->r7 = MEM_BU(ctx->r14, 0X15);
    // 0x80074EF4: jal         0x80074B80
    // 0x80074EF8: nop

    func_80074B80(rdram, ctx);
        goto after_1;
    // 0x80074EF8: nop

    after_1:
    // 0x80074EFC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80074F00: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80074F04: lhu         $t8, 0x20B0($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X20B0);
    // 0x80074F08: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    // 0x80074F0C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80074F10: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80074F14: lw          $t1, 0xC($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC);
    // 0x80074F18: lhu         $a1, 0x4($t7)
    ctx->r5 = MEM_HU(ctx->r15, 0X4);
    // 0x80074F1C: lbu         $a2, 0x14($t7)
    ctx->r6 = MEM_BU(ctx->r15, 0X14);
    // 0x80074F20: lbu         $a3, 0x15($t7)
    ctx->r7 = MEM_BU(ctx->r15, 0X15);
    // 0x80074F24: jal         0x80074C80
    // 0x80074F28: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80074C80(rdram, ctx);
        goto after_2;
    // 0x80074F28: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_2:
    // 0x80074F2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80074F30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80074F34: jr          $ra
    // 0x80074F38: nop

    return;
    // 0x80074F38: nop

;}
RECOMP_FUNC void func_80074F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074F3C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80074F40: lw          $a1, 0x20C0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X20C0);
    // 0x80074F44: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80074F48: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x80074F4C: lbu         $t6, 0x14($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X14);
    // 0x80074F50: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80074F54: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80074F58: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80074F5C: lui         $at, 0xFD88
    ctx->r1 = S32(0XFD88 << 16);
    // 0x80074F60: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80074F64: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80074F68: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80074F6C: lhu         $t1, 0x20B0($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X20B0);
    // 0x80074F70: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80074F74: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80074F78: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x80074F7C: lw          $t4, 0xC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC);
    // 0x80074F80: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80074F84: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80074F88: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80074F8C: lbu         $t6, 0x14($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X14);
    // 0x80074F90: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80074F94: addiu       $t7, $t6, 0x7
    ctx->r15 = ADD32(ctx->r14, 0X7);
    // 0x80074F98: sra         $t8, $t7, 3
    ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
    // 0x80074F9C: andi        $t9, $t8, 0x1FF
    ctx->r25 = ctx->r24 & 0X1FF;
    // 0x80074FA0: sll         $t0, $t9, 9
    ctx->r8 = S32(ctx->r25 << 9);
    // 0x80074FA4: lui         $at, 0xF588
    ctx->r1 = S32(0XF588 << 16);
    // 0x80074FA8: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x80074FAC: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80074FB0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80074FB4: lui         $t3, 0x700
    ctx->r11 = S32(0X700 << 16);
    // 0x80074FB8: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80074FBC: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x80074FC0: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x80074FC4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80074FC8: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x80074FCC: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80074FD0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80074FD4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80074FD8: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x80074FDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80074FE0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80074FE4: lui         $t8, 0xF400
    ctx->r24 = S32(0XF400 << 16);
    // 0x80074FE8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80074FEC: lbu         $t0, 0x14($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X14);
    // 0x80074FF0: lbu         $t6, 0x15($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X15);
    // 0x80074FF4: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80074FF8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80074FFC: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x80075000: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80075004: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80075008: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x8007500C: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80075010: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80075014: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80075018: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8007501C: or          $t0, $t5, $t9
    ctx->r8 = ctx->r13 | ctx->r25;
    // 0x80075020: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80075024: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80075028: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x8007502C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80075030: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x80075034: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80075038: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007503C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80075040: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x80075044: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x80075048: lbu         $t6, 0x14($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X14);
    // 0x8007504C: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x80075050: addiu       $t7, $t6, 0x7
    ctx->r15 = ADD32(ctx->r14, 0X7);
    // 0x80075054: sra         $t8, $t7, 3
    ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
    // 0x80075058: andi        $t5, $t8, 0x1FF
    ctx->r13 = ctx->r24 & 0X1FF;
    // 0x8007505C: sll         $t9, $t5, 9
    ctx->r25 = S32(ctx->r13 << 9);
    // 0x80075060: lui         $at, 0xF588
    ctx->r1 = S32(0XF588 << 16);
    // 0x80075064: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x80075068: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8007506C: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x80075070: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80075074: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x80075078: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x8007507C: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x80075080: lui         $t3, 0xF200
    ctx->r11 = S32(0XF200 << 16);
    // 0x80075084: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80075088: lbu         $t6, 0x14($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X14);
    // 0x8007508C: lbu         $t0, 0x15($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X15);
    // 0x80075090: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80075094: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80075098: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8007509C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800750A0: andi        $t5, $t8, 0xFFF
    ctx->r13 = ctx->r24 & 0XFFF;
    // 0x800750A4: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x800750A8: sll         $t9, $t5, 12
    ctx->r25 = S32(ctx->r13 << 12);
    // 0x800750AC: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x800750B0: or          $t4, $t9, $t3
    ctx->r12 = ctx->r25 | ctx->r11;
    // 0x800750B4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x800750B8: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x800750BC: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x800750C0: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x800750C4: lbu         $t8, 0x14($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X14);
    // 0x800750C8: lh          $t3, 0x2($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X2);
    // 0x800750CC: lbu         $t4, 0x15($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X15);
    // 0x800750D0: addu        $t5, $t7, $t8
    ctx->r13 = ADD32(ctx->r15, ctx->r24);
    // 0x800750D4: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x800750D8: andi        $t1, $t0, 0xFFF
    ctx->r9 = ctx->r8 & 0XFFF;
    // 0x800750DC: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x800750E0: addiu       $t7, $t6, -0x3
    ctx->r15 = ADD32(ctx->r14, -0X3);
    // 0x800750E4: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x800750E8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800750EC: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x800750F0: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x800750F4: or          $t9, $t2, $at
    ctx->r25 = ctx->r10 | ctx->r1;
    // 0x800750F8: andi        $t5, $t8, 0xFFF
    ctx->r13 = ctx->r24 & 0XFFF;
    // 0x800750FC: or          $t0, $t9, $t5
    ctx->r8 = ctx->r25 | ctx->r13;
    // 0x80075100: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80075104: lh          $t2, 0x0($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X0);
    // 0x80075108: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x8007510C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80075110: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x80075114: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80075118: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8007511C: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x80075120: sll         $t6, $t4, 12
    ctx->r14 = S32(ctx->r12 << 12);
    // 0x80075124: or          $t5, $t6, $t9
    ctx->r13 = ctx->r14 | ctx->r25;
    // 0x80075128: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8007512C: sw          $t5, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r13;
    // 0x80075130: sw          $a1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r5;
    // 0x80075134: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x80075138: lui         $t1, 0xE100
    ctx->r9 = S32(0XE100 << 16);
    // 0x8007513C: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80075140: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x80075144: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80075148: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8007514C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80075150: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80075154: lui         $t4, 0xF100
    ctx->r12 = S32(0XF100 << 16);
    // 0x80075158: sw          $t4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r12;
    // 0x8007515C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80075160: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x80075164: ori         $t8, $t8, 0x400
    ctx->r24 = ctx->r24 | 0X400;
    // 0x80075168: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8007516C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80075170: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x80075174: sw          $a1, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r5;
    // 0x80075178: jr          $ra
    // 0x8007517C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8007517C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80075180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075180: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80075184: lw          $a0, 0x20C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20C0);
    // 0x80075188: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007518C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80075190: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x80075194: lui         $t6, 0xDE00
    ctx->r14 = S32(0XDE00 << 16);
    // 0x80075198: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8007519C: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x800751A0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800751A4: addiu       $t8, $t8, 0x610
    ctx->r24 = ADD32(ctx->r24, 0X610);
    // 0x800751A8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800751AC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800751B0: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x800751B4: sw          $a0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r4;
    // 0x800751B8: jr          $ra
    // 0x800751BC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800751BC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
