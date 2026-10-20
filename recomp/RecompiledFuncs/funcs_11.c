#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8006DDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DDD0: bgtz        $a0, L_8006DDE0
    if (SIGNED(ctx->r4) > 0) {
        // 0x8006DDD4: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8006DDE0;
    }
    // 0x8006DDD4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006DDD8: b           L_8006DE38
    // 0x8006DDDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006DE38;
    // 0x8006DDDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006DDE0:
    // 0x8006DDE0: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8006DDE4: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8006DDE8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006DDEC: lw          $t6, -0x430($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X430);
    // 0x8006DDF0: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x8006DDF4: sll         $a2, $a0, 2
    ctx->r6 = S32(ctx->r4 << 2);
    // 0x8006DDF8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8006DDFC: addu        $a2, $a2, $a0
    ctx->r6 = ADD32(ctx->r6, ctx->r4);
    // 0x8006DE00: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x8006DE04: addu        $a1, $t6, $t8
    ctx->r5 = ADD32(ctx->r14, ctx->r24);
L_8006DE08:
    // 0x8006DE08: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x8006DE0C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006DE10: lbu         $t0, 0x1($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1);
    // 0x8006DE14: nop

    // 0x8006DE18: beq         $t0, $at, L_8006DE28
    if (ctx->r8 == ctx->r1) {
        // 0x8006DE1C: nop
    
            goto L_8006DE28;
    }
    // 0x8006DE1C: nop

    // 0x8006DE20: b           L_8006DE38
    // 0x8006DE24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006DE38;
    // 0x8006DE24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006DE28:
    // 0x8006DE28: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8006DE2C: bne         $a2, $zero, L_8006DE08
    if (ctx->r6 != 0) {
        // 0x8006DE30: addiu       $a1, $a1, -0x4
        ctx->r5 = ADD32(ctx->r5, -0X4);
            goto L_8006DE08;
    }
    // 0x8006DE30: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x8006DE34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006DE38:
    // 0x8006DE38: jr          $ra
    // 0x8006DE3C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006DE3C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8006DE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DE40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006DE44: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006DE48: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006DE4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006DE50: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8006DE54: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8006DE58: bltz        $t6, L_8006DF28
    if (SIGNED(ctx->r14) < 0) {
        // 0x8006DE5C: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8006DF28;
    }
    // 0x8006DE5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006DE60: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x8006DE64: beq         $at, $zero, L_8006DF28
    if (ctx->r1 == 0) {
        // 0x8006DE68: nop
    
            goto L_8006DF28;
    }
    // 0x8006DE68: nop

    // 0x8006DE6C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8006DE70: nop

    // 0x8006DE74: bltz        $t7, L_8006DF28
    if (SIGNED(ctx->r15) < 0) {
        // 0x8006DE78: slti        $at, $t7, 0x14
        ctx->r1 = SIGNED(ctx->r15) < 0X14 ? 1 : 0;
            goto L_8006DF28;
    }
    // 0x8006DE78: slti        $at, $t7, 0x14
    ctx->r1 = SIGNED(ctx->r15) < 0X14 ? 1 : 0;
    // 0x8006DE7C: beq         $at, $zero, L_8006DF28
    if (ctx->r1 == 0) {
        // 0x8006DE80: nop
    
            goto L_8006DF28;
    }
    // 0x8006DE80: nop

    // 0x8006DE84: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8006DE88: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8006DE8C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8006DE90: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8006DE94: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x8006DE98: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8006DE9C: lw          $t3, -0x430($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X430);
    // 0x8006DEA0: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8006DEA4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8006DEA8: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x8006DEAC: lw          $s0, 0x4($t4)
    ctx->r16 = MEM_W(ctx->r12, 0X4);
    // 0x8006DEB0: lbu         $t5, 0x33($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X33);
    // 0x8006DEB4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006DEB8: sb          $t5, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r13;
    // 0x8006DEBC: lw          $a0, -0x430($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X430);
    // 0x8006DEC0: jal         0x80050714
    // 0x8006DEC4: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    func_80050714(rdram, ctx);
        goto after_0;
    // 0x8006DEC4: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    after_0:
    // 0x8006DEC8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8006DECC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006DED0: lw          $a0, -0x430($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X430);
    // 0x8006DED4: lbu         $a1, 0x2($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2);
    // 0x8006DED8: jal         0x80050800
    // 0x8006DEDC: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    func_80050800(rdram, ctx);
        goto after_1;
    // 0x8006DEDC: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    after_1:
    // 0x8006DEE0: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x8006DEE4: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8006DEE8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8006DEEC: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
    // 0x8006DEF0: lbu         $t9, 0x33($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X33);
    // 0x8006DEF4: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8006DEF8: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8006DEFC: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8006DF00: lw          $t0, 0x110($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X110);
    // 0x8006DF04: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8006DF08: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8006DF0C: lw          $a3, 0x18($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X18);
    // 0x8006DF10: jal         0x8006E940
    // 0x8006DF14: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    func_8006E940(rdram, ctx);
        goto after_2;
    // 0x8006DF14: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    after_2:
    // 0x8006DF18: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8006DF1C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8006DF20: jal         0x8006E64C
    // 0x8006DF24: nop

    func_8006E64C(rdram, ctx);
        goto after_3;
    // 0x8006DF24: nop

    after_3:
L_8006DF28:
    // 0x8006DF28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006DF2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006DF30: jr          $ra
    // 0x8006DF34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006DF34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006DF38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DF38: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8006DF3C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8006DF40: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8006DF44: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8006DF48: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8006DF4C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8006DF50: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006DF54: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006DF58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006DF5C: lbu         $s2, 0x5($t6)
    ctx->r18 = MEM_BU(ctx->r14, 0X5);
    // 0x8006DF60: nop

    // 0x8006DF64: beq         $s2, $zero, L_8006E0C8
    if (ctx->r18 == 0) {
        // 0x8006DF68: nop
    
            goto L_8006E0C8;
    }
    // 0x8006DF68: nop

    // 0x8006DF6C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8006DF70: or          $s3, $s2, $zero
    ctx->r19 = ctx->r18 | 0;
    // 0x8006DF74: lw          $s1, 0x0($t7)
    ctx->r17 = MEM_W(ctx->r15, 0X0);
    // 0x8006DF78: blez        $s3, L_8006DFD4
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8006DF7C: nop
    
            goto L_8006DFD4;
    }
    // 0x8006DF7C: nop

L_8006DF80:
    // 0x8006DF80: lb          $t8, 0x0($s1)
    ctx->r24 = MEM_B(ctx->r17, 0X0);
    // 0x8006DF84: nop

    // 0x8006DF88: bltz        $t8, L_8006E0C8
    if (SIGNED(ctx->r24) < 0) {
        // 0x8006DF8C: nop
    
            goto L_8006E0C8;
    }
    // 0x8006DF8C: nop

    // 0x8006DF90: lb          $t9, 0x0($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X0);
    // 0x8006DF94: nop

    // 0x8006DF98: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x8006DF9C: beq         $at, $zero, L_8006E0C8
    if (ctx->r1 == 0) {
        // 0x8006DFA0: nop
    
            goto L_8006E0C8;
    }
    // 0x8006DFA0: nop

    // 0x8006DFA4: lb          $t0, 0x1($s1)
    ctx->r8 = MEM_B(ctx->r17, 0X1);
    // 0x8006DFA8: nop

    // 0x8006DFAC: bltz        $t0, L_8006E0C8
    if (SIGNED(ctx->r8) < 0) {
        // 0x8006DFB0: nop
    
            goto L_8006E0C8;
    }
    // 0x8006DFB0: nop

    // 0x8006DFB4: lb          $t1, 0x1($s1)
    ctx->r9 = MEM_B(ctx->r17, 0X1);
    // 0x8006DFB8: nop

    // 0x8006DFBC: slti        $at, $t1, 0x14
    ctx->r1 = SIGNED(ctx->r9) < 0X14 ? 1 : 0;
    // 0x8006DFC0: beq         $at, $zero, L_8006E0C8
    if (ctx->r1 == 0) {
        // 0x8006DFC4: nop
    
            goto L_8006E0C8;
    }
    // 0x8006DFC4: nop

    // 0x8006DFC8: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8006DFCC: bgtz        $s3, L_8006DF80
    if (SIGNED(ctx->r19) > 0) {
        // 0x8006DFD0: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_8006DF80;
    }
    // 0x8006DFD0: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_8006DFD4:
    // 0x8006DFD4: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x8006DFD8: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8006DFDC: lbu         $t3, 0x4($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X4);
    // 0x8006DFE0: or          $s3, $s2, $zero
    ctx->r19 = ctx->r18 | 0;
    // 0x8006DFE4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8006DFE8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8006DFEC: lw          $t5, 0x110($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X110);
    // 0x8006DFF0: nop

    // 0x8006DFF4: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x8006DFF8: nop

    // 0x8006DFFC: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8006E000: lw          $s1, 0x0($t2)
    ctx->r17 = MEM_W(ctx->r10, 0X0);
    // 0x8006E004: blez        $s3, L_8006E030
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8006E008: nop
    
            goto L_8006E030;
    }
    // 0x8006E008: nop

L_8006E00C:
    // 0x8006E00C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8006E010: lb          $a0, 0x0($s1)
    ctx->r4 = MEM_B(ctx->r17, 0X0);
    // 0x8006E014: lb          $a1, 0x1($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X1);
    // 0x8006E018: lbu         $a2, 0x4($t7)
    ctx->r6 = MEM_BU(ctx->r15, 0X4);
    // 0x8006E01C: jal         0x8006DE40
    // 0x8006E020: nop

    func_8006DE40(rdram, ctx);
        goto after_0;
    // 0x8006E020: nop

    after_0:
    // 0x8006E024: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8006E028: bgtz        $s3, L_8006E00C
    if (SIGNED(ctx->r19) > 0) {
        // 0x8006E02C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_8006E00C;
    }
    // 0x8006E02C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_8006E030:
    // 0x8006E030: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x8006E034: bne         $at, $zero, L_8006E0C8
    if (ctx->r1 != 0) {
        // 0x8006E038: nop
    
            goto L_8006E0C8;
    }
    // 0x8006E038: nop

    // 0x8006E03C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8006E040: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8006E044: lw          $s1, 0x0($t8)
    ctx->r17 = MEM_W(ctx->r24, 0X0);
    // 0x8006E048: lw          $t5, -0x430($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X430);
    // 0x8006E04C: lb          $t0, 0x1($s1)
    ctx->r8 = MEM_B(ctx->r17, 0X1);
    // 0x8006E050: lb          $t9, 0x0($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X0);
    // 0x8006E054: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8006E058: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8006E05C: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x8006E060: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x8006E064: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8006E068: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x8006E06C: lw          $s4, 0x4($t6)
    ctx->r20 = MEM_W(ctx->r14, 0X4);
    // 0x8006E070: addiu       $s3, $s2, -0x1
    ctx->r19 = ADD32(ctx->r18, -0X1);
    // 0x8006E074: blez        $s3, L_8006E0C0
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8006E078: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_8006E0C0;
    }
    // 0x8006E078: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_8006E07C:
    // 0x8006E07C: lb          $t7, 0x1($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X1);
    // 0x8006E080: lb          $t2, 0x0($s1)
    ctx->r10 = MEM_B(ctx->r17, 0X0);
    // 0x8006E084: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8006E088: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8006E08C: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x8006E090: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8006E094: lw          $t1, -0x430($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X430);
    // 0x8006E098: addu        $t0, $t2, $t8
    ctx->r8 = ADD32(ctx->r10, ctx->r24);
    // 0x8006E09C: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x8006E0A0: addu        $t3, $t1, $t9
    ctx->r11 = ADD32(ctx->r9, ctx->r25);
    // 0x8006E0A4: lw          $s0, 0x4($t3)
    ctx->r16 = MEM_W(ctx->r11, 0X4);
    // 0x8006E0A8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8006E0AC: jal         0x8006D450
    // 0x8006E0B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8006D450(rdram, ctx);
        goto after_1;
    // 0x8006E0B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x8006E0B4: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8006E0B8: bgtz        $s3, L_8006E07C
    if (SIGNED(ctx->r19) > 0) {
        // 0x8006E0BC: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_8006E07C;
    }
    // 0x8006E0BC: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_8006E0C0:
    // 0x8006E0C0: jal         0x8006D910
    // 0x8006E0C4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8006D910(rdram, ctx);
        goto after_2;
    // 0x8006E0C4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
L_8006E0C8:
    // 0x8006E0C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8006E0CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006E0D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E0D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006E0D8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8006E0DC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8006E0E0: jr          $ra
    // 0x8006E0E4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8006E0E4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8006E0E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E0E8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006E0EC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006E0F0: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8006E0F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006E0F8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8006E0FC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8006E100: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8006E104: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006E108: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006E10C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006E110: bltz        $t6, L_8006E13C
    if (SIGNED(ctx->r14) < 0) {
        // 0x8006E114: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_8006E13C;
    }
    // 0x8006E114: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006E118: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x8006E11C: beq         $at, $zero, L_8006E13C
    if (ctx->r1 == 0) {
        // 0x8006E120: nop
    
            goto L_8006E13C;
    }
    // 0x8006E120: nop

    // 0x8006E124: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8006E128: nop

    // 0x8006E12C: bltz        $t7, L_8006E13C
    if (SIGNED(ctx->r15) < 0) {
        // 0x8006E130: slti        $at, $t7, 0x14
        ctx->r1 = SIGNED(ctx->r15) < 0X14 ? 1 : 0;
            goto L_8006E13C;
    }
    // 0x8006E130: slti        $at, $t7, 0x14
    ctx->r1 = SIGNED(ctx->r15) < 0X14 ? 1 : 0;
    // 0x8006E134: bne         $at, $zero, L_8006E150
    if (ctx->r1 != 0) {
        // 0x8006E138: nop
    
            goto L_8006E150;
    }
    // 0x8006E138: nop

L_8006E13C:
    // 0x8006E13C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006E140: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8006E144: addiu       $a1, $a1, -0x2764
    ctx->r5 = ADD32(ctx->r5, -0X2764);
    // 0x8006E148: jal         0x80083560
    // 0x8006E14C: addiu       $a0, $a0, -0x277C
    ctx->r4 = ADD32(ctx->r4, -0X277C);
    Fault_Assert(rdram, ctx);
        goto after_0;
    // 0x8006E14C: addiu       $a0, $a0, -0x277C
    ctx->r4 = ADD32(ctx->r4, -0X277C);
    after_0:
L_8006E150:
    // 0x8006E150: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8006E154: nop

    // 0x8006E158: bltz        $t8, L_8006E180
    if (SIGNED(ctx->r24) < 0) {
        // 0x8006E15C: slti        $at, $t8, 0xA
        ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
            goto L_8006E180;
    }
    // 0x8006E15C: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x8006E160: beq         $at, $zero, L_8006E180
    if (ctx->r1 == 0) {
        // 0x8006E164: nop
    
            goto L_8006E180;
    }
    // 0x8006E164: nop

    // 0x8006E168: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8006E16C: nop

    // 0x8006E170: bltz        $t9, L_8006E180
    if (SIGNED(ctx->r25) < 0) {
        // 0x8006E174: slti        $at, $t9, 0x14
        ctx->r1 = SIGNED(ctx->r25) < 0X14 ? 1 : 0;
            goto L_8006E180;
    }
    // 0x8006E174: slti        $at, $t9, 0x14
    ctx->r1 = SIGNED(ctx->r25) < 0X14 ? 1 : 0;
    // 0x8006E178: bne         $at, $zero, L_8006E194
    if (ctx->r1 != 0) {
        // 0x8006E17C: nop
    
            goto L_8006E194;
    }
    // 0x8006E17C: nop

L_8006E180:
    // 0x8006E180: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006E184: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8006E188: addiu       $a1, $a1, -0x273C
    ctx->r5 = ADD32(ctx->r5, -0X273C);
    // 0x8006E18C: jal         0x80083560
    // 0x8006E190: addiu       $a0, $a0, -0x2754
    ctx->r4 = ADD32(ctx->r4, -0X2754);
    Fault_Assert(rdram, ctx);
        goto after_1;
    // 0x8006E190: addiu       $a0, $a0, -0x2754
    ctx->r4 = ADD32(ctx->r4, -0X2754);
    after_1:
L_8006E194:
    // 0x8006E194: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8006E198: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8006E19C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8006E1A0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8006E1A4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8006E1A8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8006E1AC: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8006E1B0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8006E1B4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8006E1B8: lw          $t5, -0x430($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X430);
    // 0x8006E1BC: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x8006E1C0: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x8006E1C4: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8006E1C8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8006E1CC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8006E1D0: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8006E1D4: addu        $s0, $t5, $t4
    ctx->r16 = ADD32(ctx->r13, ctx->r12);
    // 0x8006E1D8: addu        $s1, $t5, $t1
    ctx->r17 = ADD32(ctx->r13, ctx->r9);
    // 0x8006E1DC: lw          $s2, 0x4($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X4);
    // 0x8006E1E0: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x8006E1E4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8006E1E8: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x8006E1EC: sw          $s2, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r18;
    // 0x8006E1F0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8006E1F4: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8006E1F8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8006E1FC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8006E200: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x8006E204: lw          $t8, -0x430($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X430);
    // 0x8006E208: addu        $t7, $t2, $t4
    ctx->r15 = ADD32(ctx->r10, ctx->r12);
    // 0x8006E20C: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8006E210: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x8006E214: lw          $s3, 0x4($t9)
    ctx->r19 = MEM_W(ctx->r25, 0X4);
    // 0x8006E218: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006E21C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8006E220: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8006E224: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x8006E228: jal         0x8006E8F8
    // 0x8006E22C: addiu       $a0, $s3, 0x8
    ctx->r4 = ADD32(ctx->r19, 0X8);
    func_8006E8F8(rdram, ctx);
        goto after_2;
    // 0x8006E22C: addiu       $a0, $s3, 0x8
    ctx->r4 = ADD32(ctx->r19, 0X8);
    after_2:
    // 0x8006E230: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8006E234: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8006E238: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x8006E23C: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x8006E240: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x8006E244: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8006E248: lw          $t8, -0x430($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X430);
    // 0x8006E24C: addu        $t4, $t5, $t0
    ctx->r12 = ADD32(ctx->r13, ctx->r8);
    // 0x8006E250: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x8006E254: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x8006E258: lw          $s3, 0x4($t6)
    ctx->r19 = MEM_W(ctx->r14, 0X4);
    // 0x8006E25C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8006E260: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x8006E264: jal         0x8006E8F8
    // 0x8006E268: addiu       $a0, $s3, 0x8
    ctx->r4 = ADD32(ctx->r19, 0X8);
    func_8006E8F8(rdram, ctx);
        goto after_3;
    // 0x8006E268: addiu       $a0, $s3, 0x8
    ctx->r4 = ADD32(ctx->r19, 0X8);
    after_3:
    // 0x8006E26C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006E270: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006E274: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006E278: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E27C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006E280: jr          $ra
    // 0x8006E284: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006E284: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006E288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E288: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006E28C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006E290: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006E294: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006E298: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006E29C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006E2A0: lb          $s0, 0x9($t6)
    ctx->r16 = MEM_B(ctx->r14, 0X9);
    // 0x8006E2A4: lb          $s1, 0xA($t6)
    ctx->r17 = MEM_B(ctx->r14, 0XA);
    // 0x8006E2A8: jal         0x8006D674
    // 0x8006E2AC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8006D674(rdram, ctx);
        goto after_0;
    // 0x8006E2AC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x8006E2B0: addiu       $a0, $s0, -0x1
    ctx->r4 = ADD32(ctx->r16, -0X1);
    // 0x8006E2B4: jal         0x8006E64C
    // 0x8006E2B8: addiu       $a1, $s1, -0x1
    ctx->r5 = ADD32(ctx->r17, -0X1);
    func_8006E64C(rdram, ctx);
        goto after_1;
    // 0x8006E2B8: addiu       $a1, $s1, -0x1
    ctx->r5 = ADD32(ctx->r17, -0X1);
    after_1:
    // 0x8006E2BC: addiu       $a0, $s0, -0x1
    ctx->r4 = ADD32(ctx->r16, -0X1);
    // 0x8006E2C0: jal         0x8006E64C
    // 0x8006E2C4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8006E64C(rdram, ctx);
        goto after_2;
    // 0x8006E2C4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8006E2C8: addiu       $a0, $s0, -0x1
    ctx->r4 = ADD32(ctx->r16, -0X1);
    // 0x8006E2CC: jal         0x8006E64C
    // 0x8006E2D0: addiu       $a1, $s1, 0x1
    ctx->r5 = ADD32(ctx->r17, 0X1);
    func_8006E64C(rdram, ctx);
        goto after_3;
    // 0x8006E2D0: addiu       $a1, $s1, 0x1
    ctx->r5 = ADD32(ctx->r17, 0X1);
    after_3:
    // 0x8006E2D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006E2D8: jal         0x8006E64C
    // 0x8006E2DC: addiu       $a1, $s1, -0x1
    ctx->r5 = ADD32(ctx->r17, -0X1);
    func_8006E64C(rdram, ctx);
        goto after_4;
    // 0x8006E2DC: addiu       $a1, $s1, -0x1
    ctx->r5 = ADD32(ctx->r17, -0X1);
    after_4:
    // 0x8006E2E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006E2E4: jal         0x8006E64C
    // 0x8006E2E8: addiu       $a1, $s1, 0x1
    ctx->r5 = ADD32(ctx->r17, 0X1);
    func_8006E64C(rdram, ctx);
        goto after_5;
    // 0x8006E2E8: addiu       $a1, $s1, 0x1
    ctx->r5 = ADD32(ctx->r17, 0X1);
    after_5:
    // 0x8006E2EC: addiu       $a0, $s0, 0x1
    ctx->r4 = ADD32(ctx->r16, 0X1);
    // 0x8006E2F0: jal         0x8006E64C
    // 0x8006E2F4: addiu       $a1, $s1, -0x1
    ctx->r5 = ADD32(ctx->r17, -0X1);
    func_8006E64C(rdram, ctx);
        goto after_6;
    // 0x8006E2F4: addiu       $a1, $s1, -0x1
    ctx->r5 = ADD32(ctx->r17, -0X1);
    after_6:
    // 0x8006E2F8: addiu       $a0, $s0, 0x1
    ctx->r4 = ADD32(ctx->r16, 0X1);
    // 0x8006E2FC: jal         0x8006E64C
    // 0x8006E300: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8006E64C(rdram, ctx);
        goto after_7;
    // 0x8006E300: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x8006E304: addiu       $a0, $s0, 0x1
    ctx->r4 = ADD32(ctx->r16, 0X1);
    // 0x8006E308: jal         0x8006E64C
    // 0x8006E30C: addiu       $a1, $s1, 0x1
    ctx->r5 = ADD32(ctx->r17, 0X1);
    func_8006E64C(rdram, ctx);
        goto after_8;
    // 0x8006E30C: addiu       $a1, $s1, 0x1
    ctx->r5 = ADD32(ctx->r17, 0X1);
    after_8:
    // 0x8006E310: blez        $s1, L_8006E338
    if (SIGNED(ctx->r17) <= 0) {
        // 0x8006E314: nop
    
            goto L_8006E338;
    }
    // 0x8006E314: nop

L_8006E318:
    // 0x8006E318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006E31C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8006E320: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8006E324: jal         0x8006E0E8
    // 0x8006E328: addiu       $a3, $s1, -0x1
    ctx->r7 = ADD32(ctx->r17, -0X1);
    func_8006E0E8(rdram, ctx);
        goto after_9;
    // 0x8006E328: addiu       $a3, $s1, -0x1
    ctx->r7 = ADD32(ctx->r17, -0X1);
    after_9:
    // 0x8006E32C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8006E330: bgtz        $s1, L_8006E318
    if (SIGNED(ctx->r17) > 0) {
        // 0x8006E334: nop
    
            goto L_8006E318;
    }
    // 0x8006E334: nop

L_8006E338:
    // 0x8006E338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E33C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006E340: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006E344: jr          $ra
    // 0x8006E348: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006E348: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006E34C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E34C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006E350: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006E354: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8006E358: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006E35C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006E360: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006E364: bltz        $t6, L_8006E378
    if (SIGNED(ctx->r14) < 0) {
        // 0x8006E368: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8006E378;
    }
    // 0x8006E368: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006E36C: slti        $at, $t6, 0x14
    ctx->r1 = SIGNED(ctx->r14) < 0X14 ? 1 : 0;
    // 0x8006E370: bne         $at, $zero, L_8006E38C
    if (ctx->r1 != 0) {
        // 0x8006E374: nop
    
            goto L_8006E38C;
    }
    // 0x8006E374: nop

L_8006E378:
    // 0x8006E378: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006E37C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8006E380: addiu       $a1, $a1, -0x2714
    ctx->r5 = ADD32(ctx->r5, -0X2714);
    // 0x8006E384: jal         0x80083560
    // 0x8006E388: addiu       $a0, $a0, -0x272C
    ctx->r4 = ADD32(ctx->r4, -0X272C);
    Fault_Assert(rdram, ctx);
        goto after_0;
    // 0x8006E388: addiu       $a0, $a0, -0x272C
    ctx->r4 = ADD32(ctx->r4, -0X272C);
    after_0:
L_8006E38C:
    // 0x8006E38C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8006E390: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8006E394: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006E398: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006E39C: lw          $t7, -0x430($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X430);
    // 0x8006E3A0: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x8006E3A4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8006E3A8: addiu       $s0, $zero, 0xA
    ctx->r16 = ADD32(0, 0XA);
    // 0x8006E3AC: addu        $s2, $t7, $t0
    ctx->r18 = ADD32(ctx->r15, ctx->r8);
    // 0x8006E3B0: blez        $s0, L_8006E3D0
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8006E3B4: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_8006E3D0;
    }
    // 0x8006E3B4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_8006E3B8:
    // 0x8006E3B8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8006E3BC: jal         0x8006D674
    // 0x8006E3C0: nop

    func_8006D674(rdram, ctx);
        goto after_1;
    // 0x8006E3C0: nop

    after_1:
    // 0x8006E3C4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8006E3C8: bgtz        $s0, L_8006E3B8
    if (SIGNED(ctx->r16) > 0) {
        // 0x8006E3CC: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_8006E3B8;
    }
    // 0x8006E3CC: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_8006E3D0:
    // 0x8006E3D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006E3D4: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x8006E3D8: beq         $at, $zero, L_8006E400
    if (ctx->r1 == 0) {
        // 0x8006E3DC: nop
    
            goto L_8006E400;
    }
    // 0x8006E3DC: nop

L_8006E3E0:
    // 0x8006E3E0: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8006E3E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006E3E8: jal         0x8006E64C
    // 0x8006E3EC: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    func_8006E64C(rdram, ctx);
        goto after_2;
    // 0x8006E3EC: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    after_2:
    // 0x8006E3F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006E3F4: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x8006E3F8: bne         $at, $zero, L_8006E3E0
    if (ctx->r1 != 0) {
        // 0x8006E3FC: nop
    
            goto L_8006E3E0;
    }
    // 0x8006E3FC: nop

L_8006E400:
    // 0x8006E400: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006E404: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x8006E408: beq         $at, $zero, L_8006E430
    if (ctx->r1 == 0) {
        // 0x8006E40C: nop
    
            goto L_8006E430;
    }
    // 0x8006E40C: nop

L_8006E410:
    // 0x8006E410: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8006E414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006E418: jal         0x8006E64C
    // 0x8006E41C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    func_8006E64C(rdram, ctx);
        goto after_3;
    // 0x8006E41C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_3:
    // 0x8006E420: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006E424: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x8006E428: bne         $at, $zero, L_8006E410
    if (ctx->r1 != 0) {
        // 0x8006E42C: nop
    
            goto L_8006E410;
    }
    // 0x8006E42C: nop

L_8006E430:
    // 0x8006E430: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x8006E434: nop

    // 0x8006E438: blez        $s1, L_8006E480
    if (SIGNED(ctx->r17) <= 0) {
        // 0x8006E43C: nop
    
            goto L_8006E480;
    }
    // 0x8006E43C: nop

L_8006E440:
    // 0x8006E440: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006E444: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x8006E448: beq         $at, $zero, L_8006E474
    if (ctx->r1 == 0) {
        // 0x8006E44C: nop
    
            goto L_8006E474;
    }
    // 0x8006E44C: nop

L_8006E450:
    // 0x8006E450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006E454: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8006E458: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8006E45C: jal         0x8006E0E8
    // 0x8006E460: addiu       $a3, $s1, -0x1
    ctx->r7 = ADD32(ctx->r17, -0X1);
    func_8006E0E8(rdram, ctx);
        goto after_4;
    // 0x8006E460: addiu       $a3, $s1, -0x1
    ctx->r7 = ADD32(ctx->r17, -0X1);
    after_4:
    // 0x8006E464: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006E468: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x8006E46C: bne         $at, $zero, L_8006E450
    if (ctx->r1 != 0) {
        // 0x8006E470: nop
    
            goto L_8006E450;
    }
    // 0x8006E470: nop

L_8006E474:
    // 0x8006E474: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8006E478: bgtz        $s1, L_8006E440
    if (SIGNED(ctx->r17) > 0) {
        // 0x8006E47C: nop
    
            goto L_8006E440;
    }
    // 0x8006E47C: nop

L_8006E480:
    // 0x8006E480: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006E484: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006E488: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E48C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006E490: jr          $ra
    // 0x8006E494: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006E494: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006E498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E498: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006E49C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006E4A0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8006E4A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006E4A8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8006E4AC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8006E4B0: jal         0x8006E5E0
    // 0x8006E4B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8006E5E0(rdram, ctx);
        goto after_0;
    // 0x8006E4B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006E4B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006E4BC: lbu         $t6, 0x1($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1);
    // 0x8006E4C0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006E4C4: bne         $t6, $at, L_8006E4D4
    if (ctx->r14 != ctx->r1) {
        // 0x8006E4C8: nop
    
            goto L_8006E4D4;
    }
    // 0x8006E4C8: nop

    // 0x8006E4CC: b           L_8006E4D8
    // 0x8006E4D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006E4D8;
    // 0x8006E4D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006E4D4:
    // 0x8006E4D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006E4D8:
    // 0x8006E4D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E4DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006E4E0: jr          $ra
    // 0x8006E4E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006E4E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006E4E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E4E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006E4EC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8006E4F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8006E4F4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8006E4F8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8006E4FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006E500: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x8006E504: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x8006E508: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8006E50C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8006E510: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8006E514: jal         0x8006E498
    // 0x8006E518: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8006E498(rdram, ctx);
        goto after_0;
    // 0x8006E518: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x8006E51C: bne         $v0, $zero, L_8006E52C
    if (ctx->r2 != 0) {
        // 0x8006E520: nop
    
            goto L_8006E52C;
    }
    // 0x8006E520: nop

    // 0x8006E524: b           L_8006E5D0
    // 0x8006E528: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006E5D0;
    // 0x8006E528: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006E52C:
    // 0x8006E52C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8006E530: nop

    // 0x8006E534: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x8006E538: beq         $t1, $zero, L_8006E560
    if (ctx->r9 == 0) {
        // 0x8006E53C: nop
    
            goto L_8006E560;
    }
    // 0x8006E53C: nop

    // 0x8006E540: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E544: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8006E548: jal         0x8006E498
    // 0x8006E54C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_8006E498(rdram, ctx);
        goto after_1;
    // 0x8006E54C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_1:
    // 0x8006E550: bne         $v0, $zero, L_8006E560
    if (ctx->r2 != 0) {
        // 0x8006E554: nop
    
            goto L_8006E560;
    }
    // 0x8006E554: nop

    // 0x8006E558: b           L_8006E5D0
    // 0x8006E55C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006E5D0;
    // 0x8006E55C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006E560:
    // 0x8006E560: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8006E564: nop

    // 0x8006E568: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x8006E56C: beq         $t3, $zero, L_8006E5CC
    if (ctx->r11 == 0) {
        // 0x8006E570: nop
    
            goto L_8006E5CC;
    }
    // 0x8006E570: nop

    // 0x8006E574: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8006E578: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E57C: jal         0x8006E498
    // 0x8006E580: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    func_8006E498(rdram, ctx);
        goto after_2;
    // 0x8006E580: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_2:
    // 0x8006E584: bne         $v0, $zero, L_8006E594
    if (ctx->r2 != 0) {
        // 0x8006E588: nop
    
            goto L_8006E594;
    }
    // 0x8006E588: nop

    // 0x8006E58C: b           L_8006E5D0
    // 0x8006E590: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006E5D0;
    // 0x8006E590: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006E594:
    // 0x8006E594: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8006E598: nop

    // 0x8006E59C: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x8006E5A0: beq         $t5, $zero, L_8006E5CC
    if (ctx->r13 == 0) {
        // 0x8006E5A4: nop
    
            goto L_8006E5CC;
    }
    // 0x8006E5A4: nop

    // 0x8006E5A8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E5AC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8006E5B0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8006E5B4: jal         0x8006E498
    // 0x8006E5B8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    func_8006E498(rdram, ctx);
        goto after_3;
    // 0x8006E5B8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_3:
    // 0x8006E5BC: bne         $v0, $zero, L_8006E5CC
    if (ctx->r2 != 0) {
        // 0x8006E5C0: nop
    
            goto L_8006E5CC;
    }
    // 0x8006E5C0: nop

    // 0x8006E5C4: b           L_8006E5D0
    // 0x8006E5C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006E5D0;
    // 0x8006E5C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006E5CC:
    // 0x8006E5CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006E5D0:
    // 0x8006E5D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006E5D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006E5D8: jr          $ra
    // 0x8006E5DC: nop

    return;
    // 0x8006E5DC: nop

;}
RECOMP_FUNC void func_8006E5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E5E0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8006E5E4: lw          $a2, -0x430($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X430);
    // 0x8006E5E8: bltz        $a0, L_8006E604
    if (SIGNED(ctx->r4) < 0) {
        // 0x8006E5EC: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8006E604;
    }
    // 0x8006E5EC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006E5F0: slti        $at, $a0, 0xA
    ctx->r1 = SIGNED(ctx->r4) < 0XA ? 1 : 0;
    // 0x8006E5F4: beq         $at, $zero, L_8006E604
    if (ctx->r1 == 0) {
        // 0x8006E5F8: slti        $at, $a1, 0x14
        ctx->r1 = SIGNED(ctx->r5) < 0X14 ? 1 : 0;
            goto L_8006E604;
    }
    // 0x8006E5F8: slti        $at, $a1, 0x14
    ctx->r1 = SIGNED(ctx->r5) < 0X14 ? 1 : 0;
    // 0x8006E5FC: bne         $at, $zero, L_8006E60C
    if (ctx->r1 != 0) {
        // 0x8006E600: nop
    
            goto L_8006E60C;
    }
    // 0x8006E600: nop

L_8006E604:
    // 0x8006E604: b           L_8006E644
    // 0x8006E608: addiu       $v0, $a2, 0x334
    ctx->r2 = ADD32(ctx->r6, 0X334);
        goto L_8006E644;
    // 0x8006E608: addiu       $v0, $a2, 0x334
    ctx->r2 = ADD32(ctx->r6, 0X334);
L_8006E60C:
    // 0x8006E60C: bgez        $a1, L_8006E61C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8006E610: nop
    
            goto L_8006E61C;
    }
    // 0x8006E610: nop

    // 0x8006E614: b           L_8006E644
    // 0x8006E618: addiu       $v0, $a2, 0x324
    ctx->r2 = ADD32(ctx->r6, 0X324);
        goto L_8006E644;
    // 0x8006E618: addiu       $v0, $a2, 0x324
    ctx->r2 = ADD32(ctx->r6, 0X324);
L_8006E61C:
    // 0x8006E61C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8006E620: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x8006E624: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x8006E628: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006E62C: lw          $t6, -0x430($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X430);
    // 0x8006E630: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x8006E634: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006E638: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x8006E63C: lw          $v0, 0x4($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X4);
    // 0x8006E640: nop

L_8006E644:
    // 0x8006E644: jr          $ra
    // 0x8006E648: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006E648: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8006E64C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E64C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006E650: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006E654: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006E658: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006E65C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8006E660: bltz        $t6, L_8006E6E4
    if (SIGNED(ctx->r14) < 0) {
        // 0x8006E664: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8006E6E4;
    }
    // 0x8006E664: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006E668: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x8006E66C: beq         $at, $zero, L_8006E6E4
    if (ctx->r1 == 0) {
        // 0x8006E670: nop
    
            goto L_8006E6E4;
    }
    // 0x8006E670: nop

    // 0x8006E674: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8006E678: nop

    // 0x8006E67C: bltz        $t7, L_8006E6E4
    if (SIGNED(ctx->r15) < 0) {
        // 0x8006E680: slti        $at, $t7, 0x14
        ctx->r1 = SIGNED(ctx->r15) < 0X14 ? 1 : 0;
            goto L_8006E6E4;
    }
    // 0x8006E680: slti        $at, $t7, 0x14
    ctx->r1 = SIGNED(ctx->r15) < 0X14 ? 1 : 0;
    // 0x8006E684: beq         $at, $zero, L_8006E6E4
    if (ctx->r1 == 0) {
        // 0x8006E688: nop
    
            goto L_8006E6E4;
    }
    // 0x8006E688: nop

    // 0x8006E68C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8006E690: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8006E694: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8006E698: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8006E69C: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x8006E6A0: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8006E6A4: lw          $t3, -0x430($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X430);
    // 0x8006E6A8: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8006E6AC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8006E6B0: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x8006E6B4: lw          $s0, 0x4($t4)
    ctx->r16 = MEM_W(ctx->r12, 0X4);
    // 0x8006E6B8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006E6BC: lbu         $t5, 0x1($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1);
    // 0x8006E6C0: nop

    // 0x8006E6C4: beq         $t5, $at, L_8006E6E4
    if (ctx->r13 == ctx->r1) {
        // 0x8006E6C8: nop
    
            goto L_8006E6E4;
    }
    // 0x8006E6C8: nop

    // 0x8006E6CC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006E6D0: lw          $a0, -0x430($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X430);
    // 0x8006E6D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8006E6D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8006E6DC: jal         0x8006DC1C
    // 0x8006E6E0: addiu       $a0, $a0, 0x344
    ctx->r4 = ADD32(ctx->r4, 0X344);
    func_8006DC1C(rdram, ctx);
        goto after_0;
    // 0x8006E6E0: addiu       $a0, $a0, 0x344
    ctx->r4 = ADD32(ctx->r4, 0X344);
    after_0:
L_8006E6E4:
    // 0x8006E6E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E6E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006E6EC: jr          $ra
    // 0x8006E6F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006E6F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006E6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E6F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006E6F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006E6FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006E700: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006E704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006E708: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E70C: jal         0x8006DBB8
    // 0x8006E710: addiu       $a0, $a0, 0x344
    ctx->r4 = ADD32(ctx->r4, 0X344);
    func_8006DBB8(rdram, ctx);
        goto after_0;
    // 0x8006E710: addiu       $a0, $a0, 0x344
    ctx->r4 = ADD32(ctx->r4, 0X344);
    after_0:
    // 0x8006E714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006E718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006E71C: jr          $ra
    // 0x8006E720: nop

    return;
    // 0x8006E720: nop

;}
RECOMP_FUNC void func_8006E724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E724: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8006E728: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8006E72C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8006E730: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8006E734: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8006E738: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8006E73C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006E740: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006E744: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006E748: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x8006E74C: sh          $t6, 0x1614($t7)
    MEM_H(0X1614, ctx->r15) = ctx->r14;
    // 0x8006E750: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8006E754: jal         0x8006DCC0
    // 0x8006E758: addiu       $a0, $a0, 0x344
    ctx->r4 = ADD32(ctx->r4, 0X344);
    func_8006DCC0(rdram, ctx);
        goto after_0;
    // 0x8006E758: addiu       $a0, $a0, 0x344
    ctx->r4 = ADD32(ctx->r4, 0X344);
    after_0:
    // 0x8006E75C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8006E760: nop

    // 0x8006E764: lhu         $a1, 0x1614($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X1614);
    // 0x8006E768: addiu       $a0, $t8, 0x1608
    ctx->r4 = ADD32(ctx->r24, 0X1608);
    // 0x8006E76C: jal         0x80050650
    // 0x8006E770: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    func_80050650(rdram, ctx);
        goto after_1;
    // 0x8006E770: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_1:
    // 0x8006E774: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8006E778: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006E77C: jal         0x80050800
    // 0x8006E780: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    func_80050800(rdram, ctx);
        goto after_2;
    // 0x8006E780: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    after_2:
    // 0x8006E784: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8006E788: nop

    // 0x8006E78C: lhu         $a0, 0x1614($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X1614);
    // 0x8006E790: nop

    // 0x8006E794: sll         $t0, $a0, 4
    ctx->r8 = S32(ctx->r4 << 4);
    // 0x8006E798: jal         0x8007E03C
    // 0x8006E79C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8007E03C(rdram, ctx);
        goto after_3;
    // 0x8006E79C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_3:
    // 0x8006E7A0: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x8006E7A4: nop

    // 0x8006E7A8: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x8006E7AC: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x8006E7B0: nop

    // 0x8006E7B4: lhu         $s1, 0x1614($t2)
    ctx->r17 = MEM_HU(ctx->r10, 0X1614);
    // 0x8006E7B8: lw          $s0, 0x0($t2)
    ctx->r16 = MEM_W(ctx->r10, 0X0);
    // 0x8006E7BC: blez        $s1, L_8006E7D8
    if (SIGNED(ctx->r17) <= 0) {
        // 0x8006E7C0: nop
    
            goto L_8006E7D8;
    }
    // 0x8006E7C0: nop

L_8006E7C4:
    // 0x8006E7C4: jal         0x8006DAF0
    // 0x8006E7C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006DAF0(rdram, ctx);
        goto after_4;
    // 0x8006E7C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8006E7CC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8006E7D0: bgtz        $s1, L_8006E7C4
    if (SIGNED(ctx->r17) > 0) {
        // 0x8006E7D4: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_8006E7C4;
    }
    // 0x8006E7D4: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_8006E7D8:
    // 0x8006E7D8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8006E7DC: jal         0x8006DA8C
    // 0x8006E7E0: addiu       $a0, $a0, 0x324
    ctx->r4 = ADD32(ctx->r4, 0X324);
    func_8006DA8C(rdram, ctx);
        goto after_5;
    // 0x8006E7E0: addiu       $a0, $a0, 0x324
    ctx->r4 = ADD32(ctx->r4, 0X324);
    after_5:
    // 0x8006E7E4: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8006E7E8: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x8006E7EC: sb          $t3, 0x325($t4)
    MEM_B(0X325, ctx->r12) = ctx->r11;
    // 0x8006E7F0: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x8006E7F4: nop

    // 0x8006E7F8: lbu         $t6, 0x324($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X324);
    // 0x8006E7FC: nop

    // 0x8006E800: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x8006E804: sb          $t7, 0x324($t5)
    MEM_B(0X324, ctx->r13) = ctx->r15;
    // 0x8006E808: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8006E80C: jal         0x8006DA8C
    // 0x8006E810: addiu       $a0, $a0, 0x334
    ctx->r4 = ADD32(ctx->r4, 0X334);
    func_8006DA8C(rdram, ctx);
        goto after_6;
    // 0x8006E810: addiu       $a0, $a0, 0x334
    ctx->r4 = ADD32(ctx->r4, 0X334);
    after_6:
    // 0x8006E814: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8006E818: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x8006E81C: sb          $t8, 0x335($t9)
    MEM_B(0X335, ctx->r25) = ctx->r24;
    // 0x8006E820: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8006E824: nop

    // 0x8006E828: lhu         $s4, 0x1614($t0)
    ctx->r20 = MEM_HU(ctx->r8, 0X1614);
    // 0x8006E82C: lw          $s3, 0x0($t0)
    ctx->r19 = MEM_W(ctx->r8, 0X0);
    // 0x8006E830: blez        $s4, L_8006E84C
    if (SIGNED(ctx->r20) <= 0) {
        // 0x8006E834: addiu       $s2, $t0, 0x4
        ctx->r18 = ADD32(ctx->r8, 0X4);
            goto L_8006E84C;
    }
    // 0x8006E834: addiu       $s2, $t0, 0x4
    ctx->r18 = ADD32(ctx->r8, 0X4);
L_8006E838:
    // 0x8006E838: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x8006E83C: sw          $s3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r19;
    // 0x8006E840: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x8006E844: bgtz        $s4, L_8006E838
    if (SIGNED(ctx->r20) > 0) {
        // 0x8006E848: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_8006E838;
    }
    // 0x8006E848: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_8006E84C:
    // 0x8006E84C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8006E850: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006E854: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E858: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006E85C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8006E860: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8006E864: jr          $ra
    // 0x8006E868: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8006E868: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8006E86C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E86C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006E870: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006E874: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006E878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006E87C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8006E880: jal         0x8007E328
    // 0x8006E884: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x8006E884: nop

    after_0:
    // 0x8006E888: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8006E88C: nop

    // 0x8006E890: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x8006E894: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006E898: jal         0x800506D0
    // 0x8006E89C: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    func_800506D0(rdram, ctx);
        goto after_1;
    // 0x8006E89C: addiu       $a0, $a0, 0x1608
    ctx->r4 = ADD32(ctx->r4, 0X1608);
    after_1:
    // 0x8006E8A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006E8A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006E8A8: jr          $ra
    // 0x8006E8AC: nop

    return;
    // 0x8006E8AC: nop

;}
RECOMP_FUNC void func_8006E8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E8B0: lw          $a3, 0x4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X4);
    // 0x8006E8B4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006E8B8: sb          $a1, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r5;
    // 0x8006E8BC: beq         $a3, $zero, L_8006E8F0
    if (ctx->r7 == 0) {
        // 0x8006E8C0: sb          $a2, 0x2($a0)
        MEM_B(0X2, ctx->r4) = ctx->r6;
            goto L_8006E8F0;
    }
    // 0x8006E8C0: sb          $a2, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r6;
    // 0x8006E8C4: sll         $t6, $a1, 8
    ctx->r14 = S32(ctx->r5 << 8);
    // 0x8006E8C8: sll         $t7, $a2, 8
    ctx->r15 = S32(ctx->r6 << 8);
    // 0x8006E8CC: sh          $zero, 0x2($a3)
    MEM_H(0X2, ctx->r7) = 0;
    // 0x8006E8D0: sh          $zero, 0x4($a3)
    MEM_H(0X4, ctx->r7) = 0;
    // 0x8006E8D4: sh          $zero, 0x6($a3)
    MEM_H(0X6, ctx->r7) = 0;
    // 0x8006E8D8: sh          $t7, 0xA($a3)
    MEM_H(0XA, ctx->r7) = ctx->r15;
    // 0x8006E8DC: sh          $t6, 0x8($a3)
    MEM_H(0X8, ctx->r7) = ctx->r14;
    // 0x8006E8E0: sh          $zero, 0xC($a3)
    MEM_H(0XC, ctx->r7) = 0;
    // 0x8006E8E4: sh          $zero, 0xE($a3)
    MEM_H(0XE, ctx->r7) = 0;
    // 0x8006E8E8: sh          $zero, 0x10($a3)
    MEM_H(0X10, ctx->r7) = 0;
    // 0x8006E8EC: sh          $zero, 0x12($a3)
    MEM_H(0X12, ctx->r7) = 0;
L_8006E8F0:
    // 0x8006E8F0: jr          $ra
    // 0x8006E8F4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006E8F4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8006E8F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E8F8: lw          $a3, 0x4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X4);
    // 0x8006E8FC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006E900: sb          $a1, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r5;
    // 0x8006E904: beq         $a3, $zero, L_8006E938
    if (ctx->r7 == 0) {
        // 0x8006E908: sb          $a2, 0x2($a0)
        MEM_B(0X2, ctx->r4) = ctx->r6;
            goto L_8006E938;
    }
    // 0x8006E908: sb          $a2, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r6;
    // 0x8006E90C: sll         $t6, $a1, 8
    ctx->r14 = S32(ctx->r5 << 8);
    // 0x8006E910: sll         $t7, $a2, 8
    ctx->r15 = S32(ctx->r6 << 8);
    // 0x8006E914: sh          $zero, 0x14($a3)
    MEM_H(0X14, ctx->r7) = 0;
    // 0x8006E918: sh          $zero, 0x16($a3)
    MEM_H(0X16, ctx->r7) = 0;
    // 0x8006E91C: sh          $zero, 0x18($a3)
    MEM_H(0X18, ctx->r7) = 0;
    // 0x8006E920: sh          $t7, 0x1C($a3)
    MEM_H(0X1C, ctx->r7) = ctx->r15;
    // 0x8006E924: sh          $t6, 0x1A($a3)
    MEM_H(0X1A, ctx->r7) = ctx->r14;
    // 0x8006E928: sh          $zero, 0x1E($a3)
    MEM_H(0X1E, ctx->r7) = 0;
    // 0x8006E92C: sh          $zero, 0x20($a3)
    MEM_H(0X20, ctx->r7) = 0;
    // 0x8006E930: sh          $zero, 0x22($a3)
    MEM_H(0X22, ctx->r7) = 0;
    // 0x8006E934: sh          $zero, 0x24($a3)
    MEM_H(0X24, ctx->r7) = 0;
L_8006E938:
    // 0x8006E938: jr          $ra
    // 0x8006E93C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006E93C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8006E940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006E944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006E948: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006E94C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006E950: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8006E954: jal         0x8006ED94
    // 0x8006E958: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8006ED94(rdram, ctx);
        goto after_0;
    // 0x8006E958: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x8006E95C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006E960: nop

    // 0x8006E964: sw          $v0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r2;
    // 0x8006E968: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8006E96C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8006E970: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    // 0x8006E974: jal         0x80070820
    // 0x8006E978: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_80070820(rdram, ctx);
        goto after_1;
    // 0x8006E978: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_1:
    // 0x8006E97C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006E980: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E984: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8006E988: jal         0x8006E8B0
    // 0x8006E98C: nop

    func_8006E8B0(rdram, ctx);
        goto after_2;
    // 0x8006E98C: nop

    after_2:
    // 0x8006E990: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006E994: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E998: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8006E99C: jal         0x8006E8F8
    // 0x8006E9A0: nop

    func_8006E8F8(rdram, ctx);
        goto after_3;
    // 0x8006E9A0: nop

    after_3:
    // 0x8006E9A4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8006E9A8: nop

    // 0x8006E9AC: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    // 0x8006E9B0: jal         0x800702E4
    // 0x8006E9B4: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_800702E4(rdram, ctx);
        goto after_4;
    // 0x8006E9B4: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_4:
    // 0x8006E9B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006E9BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006E9C0: jr          $ra
    // 0x8006E9C4: nop

    return;
    // 0x8006E9C4: nop

;}
RECOMP_FUNC void func_8006E9C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E9C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006E9CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006E9D0: jal         0x8006EA18
    // 0x8006E9D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8006EA18(rdram, ctx);
        goto after_0;
    // 0x8006E9D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8006E9D8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006E9DC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8006E9E0: sb          $v0, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r2;
    // 0x8006E9E4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8006E9E8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8006E9EC: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8006E9F0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8006E9F4: nop

    // 0x8006E9F8: sb          $t8, 0x1($t9)
    MEM_B(0X1, ctx->r25) = ctx->r24;
    // 0x8006E9FC: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8006EA00: nop

    // 0x8006EA04: sb          $t0, 0x2($t1)
    MEM_B(0X2, ctx->r9) = ctx->r8;
    // 0x8006EA08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006EA0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006EA10: jr          $ra
    // 0x8006EA14: nop

    return;
    // 0x8006EA14: nop

;}
RECOMP_FUNC void func_8006EA18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006EA18: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006EA1C: lw          $a0, -0x420($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X420);
    // 0x8006EA20: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006EA24: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8006EA28: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x8006EA2C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8006EA30: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8006EA34: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x8006EA38: jr          $ra
    // 0x8006EA3C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x8006EA3C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void func_8006EA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006EA40: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x8006EA44: lh          $t7, 0x14($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X14);
    // 0x8006EA48: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006EA4C: subu        $a1, $t6, $t7
    ctx->r5 = SUB32(ctx->r14, ctx->r15);
    // 0x8006EA50: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8006EA54: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8006EA58: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8006EA5C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8006EA60: slti        $at, $a1, -0x40
    ctx->r1 = SIGNED(ctx->r5) < -0X40 ? 1 : 0;
    // 0x8006EA64: bne         $at, $zero, L_8006EA84
    if (ctx->r1 != 0) {
        // 0x8006EA68: sb          $zero, 0x26($a0)
        MEM_B(0X26, ctx->r4) = 0;
            goto L_8006EA84;
    }
    // 0x8006EA68: sb          $zero, 0x26($a0)
    MEM_B(0X26, ctx->r4) = 0;
    // 0x8006EA6C: slti        $at, $a1, 0x41
    ctx->r1 = SIGNED(ctx->r5) < 0X41 ? 1 : 0;
    // 0x8006EA70: beq         $at, $zero, L_8006EA84
    if (ctx->r1 == 0) {
        // 0x8006EA74: nop
    
            goto L_8006EA84;
    }
    // 0x8006EA74: nop

    // 0x8006EA78: lh          $t0, 0x14($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X14);
    // 0x8006EA7C: b           L_8006EA8C
    // 0x8006EA80: sh          $t0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r8;
        goto L_8006EA8C;
    // 0x8006EA80: sh          $t0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r8;
L_8006EA84:
    // 0x8006EA84: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8006EA88: sb          $t1, 0x26($a0)
    MEM_B(0X26, ctx->r4) = ctx->r9;
L_8006EA8C:
    // 0x8006EA8C: slti        $at, $a1, 0x41
    ctx->r1 = SIGNED(ctx->r5) < 0X41 ? 1 : 0;
    // 0x8006EA90: bne         $at, $zero, L_8006EAA8
    if (ctx->r1 != 0) {
        // 0x8006EA94: nop
    
            goto L_8006EAA8;
    }
    // 0x8006EA94: nop

    // 0x8006EA98: lh          $t2, 0x2($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X2);
    // 0x8006EA9C: nop

    // 0x8006EAA0: addiu       $t3, $t2, -0x40
    ctx->r11 = ADD32(ctx->r10, -0X40);
    // 0x8006EAA4: sh          $t3, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r11;
L_8006EAA8:
    // 0x8006EAA8: slti        $at, $a1, -0x40
    ctx->r1 = SIGNED(ctx->r5) < -0X40 ? 1 : 0;
    // 0x8006EAAC: beq         $at, $zero, L_8006EAC4
    if (ctx->r1 == 0) {
        // 0x8006EAB0: nop
    
            goto L_8006EAC4;
    }
    // 0x8006EAB0: nop

    // 0x8006EAB4: lh          $t4, 0x2($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X2);
    // 0x8006EAB8: nop

    // 0x8006EABC: addiu       $t5, $t4, 0x40
    ctx->r13 = ADD32(ctx->r12, 0X40);
    // 0x8006EAC0: sh          $t5, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r13;
L_8006EAC4:
    // 0x8006EAC4: lh          $t6, 0x8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8);
    // 0x8006EAC8: lh          $t7, 0x1A($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X1A);
    // 0x8006EACC: nop

    // 0x8006EAD0: subu        $a1, $t6, $t7
    ctx->r5 = SUB32(ctx->r14, ctx->r15);
    // 0x8006EAD4: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8006EAD8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8006EADC: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8006EAE0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8006EAE4: slti        $at, $a1, -0x40
    ctx->r1 = SIGNED(ctx->r5) < -0X40 ? 1 : 0;
    // 0x8006EAE8: bne         $at, $zero, L_8006EB04
    if (ctx->r1 != 0) {
        // 0x8006EAEC: slti        $at, $a1, 0x41
        ctx->r1 = SIGNED(ctx->r5) < 0X41 ? 1 : 0;
            goto L_8006EB04;
    }
    // 0x8006EAEC: slti        $at, $a1, 0x41
    ctx->r1 = SIGNED(ctx->r5) < 0X41 ? 1 : 0;
    // 0x8006EAF0: beq         $at, $zero, L_8006EB04
    if (ctx->r1 == 0) {
        // 0x8006EAF4: nop
    
            goto L_8006EB04;
    }
    // 0x8006EAF4: nop

    // 0x8006EAF8: lh          $t0, 0x1A($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X1A);
    // 0x8006EAFC: b           L_8006EB0C
    // 0x8006EB00: sh          $t0, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r8;
        goto L_8006EB0C;
    // 0x8006EB00: sh          $t0, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r8;
L_8006EB04:
    // 0x8006EB04: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8006EB08: sb          $t1, 0x26($a0)
    MEM_B(0X26, ctx->r4) = ctx->r9;
L_8006EB0C:
    // 0x8006EB0C: slti        $at, $a1, 0x41
    ctx->r1 = SIGNED(ctx->r5) < 0X41 ? 1 : 0;
    // 0x8006EB10: bne         $at, $zero, L_8006EB28
    if (ctx->r1 != 0) {
        // 0x8006EB14: nop
    
            goto L_8006EB28;
    }
    // 0x8006EB14: nop

    // 0x8006EB18: lh          $t2, 0x8($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X8);
    // 0x8006EB1C: nop

    // 0x8006EB20: addiu       $t3, $t2, -0x40
    ctx->r11 = ADD32(ctx->r10, -0X40);
    // 0x8006EB24: sh          $t3, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r11;
L_8006EB28:
    // 0x8006EB28: slti        $at, $a1, -0x40
    ctx->r1 = SIGNED(ctx->r5) < -0X40 ? 1 : 0;
    // 0x8006EB2C: beq         $at, $zero, L_8006EB44
    if (ctx->r1 == 0) {
        // 0x8006EB30: nop
    
            goto L_8006EB44;
    }
    // 0x8006EB30: nop

    // 0x8006EB34: lh          $t4, 0x8($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X8);
    // 0x8006EB38: nop

    // 0x8006EB3C: addiu       $t5, $t4, 0x40
    ctx->r13 = ADD32(ctx->r12, 0X40);
    // 0x8006EB40: sh          $t5, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r13;
L_8006EB44:
    // 0x8006EB44: lh          $t6, 0x4($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X4);
    // 0x8006EB48: lh          $t7, 0x16($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X16);
    // 0x8006EB4C: nop

    // 0x8006EB50: subu        $a1, $t6, $t7
    ctx->r5 = SUB32(ctx->r14, ctx->r15);
    // 0x8006EB54: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8006EB58: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8006EB5C: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8006EB60: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8006EB64: slti        $at, $a1, -0x40
    ctx->r1 = SIGNED(ctx->r5) < -0X40 ? 1 : 0;
    // 0x8006EB68: bne         $at, $zero, L_8006EB84
    if (ctx->r1 != 0) {
        // 0x8006EB6C: slti        $at, $a1, 0x41
        ctx->r1 = SIGNED(ctx->r5) < 0X41 ? 1 : 0;
            goto L_8006EB84;
    }
    // 0x8006EB6C: slti        $at, $a1, 0x41
    ctx->r1 = SIGNED(ctx->r5) < 0X41 ? 1 : 0;
    // 0x8006EB70: beq         $at, $zero, L_8006EB84
    if (ctx->r1 == 0) {
        // 0x8006EB74: nop
    
            goto L_8006EB84;
    }
    // 0x8006EB74: nop

    // 0x8006EB78: lh          $t0, 0x16($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X16);
    // 0x8006EB7C: b           L_8006EB8C
    // 0x8006EB80: sh          $t0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r8;
        goto L_8006EB8C;
    // 0x8006EB80: sh          $t0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r8;
L_8006EB84:
    // 0x8006EB84: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8006EB88: sb          $t1, 0x26($a0)
    MEM_B(0X26, ctx->r4) = ctx->r9;
L_8006EB8C:
    // 0x8006EB8C: slti        $at, $a1, 0x41
    ctx->r1 = SIGNED(ctx->r5) < 0X41 ? 1 : 0;
    // 0x8006EB90: bne         $at, $zero, L_8006EBA8
    if (ctx->r1 != 0) {
        // 0x8006EB94: nop
    
            goto L_8006EBA8;
    }
    // 0x8006EB94: nop

    // 0x8006EB98: lh          $t2, 0x4($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X4);
    // 0x8006EB9C: nop

    // 0x8006EBA0: addiu       $t3, $t2, -0x40
    ctx->r11 = ADD32(ctx->r10, -0X40);
    // 0x8006EBA4: sh          $t3, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r11;
L_8006EBA8:
    // 0x8006EBA8: slti        $at, $a1, -0x40
    ctx->r1 = SIGNED(ctx->r5) < -0X40 ? 1 : 0;
    // 0x8006EBAC: beq         $at, $zero, L_8006EBC4
    if (ctx->r1 == 0) {
        // 0x8006EBB0: nop
    
            goto L_8006EBC4;
    }
    // 0x8006EBB0: nop

    // 0x8006EBB4: lh          $t4, 0x4($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X4);
    // 0x8006EBB8: nop

    // 0x8006EBBC: addiu       $t5, $t4, 0x40
    ctx->r13 = ADD32(ctx->r12, 0X40);
    // 0x8006EBC0: sh          $t5, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r13;
L_8006EBC4:
    // 0x8006EBC4: lh          $t6, 0xA($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA);
    // 0x8006EBC8: lh          $t7, 0x1C($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X1C);
    // 0x8006EBCC: nop

    // 0x8006EBD0: subu        $a1, $t6, $t7
    ctx->r5 = SUB32(ctx->r14, ctx->r15);
    // 0x8006EBD4: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8006EBD8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8006EBDC: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8006EBE0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8006EBE4: slti        $at, $a1, -0x40
    ctx->r1 = SIGNED(ctx->r5) < -0X40 ? 1 : 0;
    // 0x8006EBE8: bne         $at, $zero, L_8006EC04
    if (ctx->r1 != 0) {
        // 0x8006EBEC: slti        $at, $a1, 0x41
        ctx->r1 = SIGNED(ctx->r5) < 0X41 ? 1 : 0;
            goto L_8006EC04;
    }
    // 0x8006EBEC: slti        $at, $a1, 0x41
    ctx->r1 = SIGNED(ctx->r5) < 0X41 ? 1 : 0;
    // 0x8006EBF0: beq         $at, $zero, L_8006EC04
    if (ctx->r1 == 0) {
        // 0x8006EBF4: nop
    
            goto L_8006EC04;
    }
    // 0x8006EBF4: nop

    // 0x8006EBF8: lh          $t0, 0x1C($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X1C);
    // 0x8006EBFC: b           L_8006EC0C
    // 0x8006EC00: sh          $t0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r8;
        goto L_8006EC0C;
    // 0x8006EC00: sh          $t0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r8;
L_8006EC04:
    // 0x8006EC04: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8006EC08: sb          $t1, 0x26($a0)
    MEM_B(0X26, ctx->r4) = ctx->r9;
L_8006EC0C:
    // 0x8006EC0C: slti        $at, $a1, 0x41
    ctx->r1 = SIGNED(ctx->r5) < 0X41 ? 1 : 0;
    // 0x8006EC10: bne         $at, $zero, L_8006EC28
    if (ctx->r1 != 0) {
        // 0x8006EC14: nop
    
            goto L_8006EC28;
    }
    // 0x8006EC14: nop

    // 0x8006EC18: lh          $t2, 0xA($a0)
    ctx->r10 = MEM_H(ctx->r4, 0XA);
    // 0x8006EC1C: nop

    // 0x8006EC20: addiu       $t3, $t2, -0x40
    ctx->r11 = ADD32(ctx->r10, -0X40);
    // 0x8006EC24: sh          $t3, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r11;
L_8006EC28:
    // 0x8006EC28: slti        $at, $a1, -0x40
    ctx->r1 = SIGNED(ctx->r5) < -0X40 ? 1 : 0;
    // 0x8006EC2C: beq         $at, $zero, L_8006EC44
    if (ctx->r1 == 0) {
        // 0x8006EC30: nop
    
            goto L_8006EC44;
    }
    // 0x8006EC30: nop

    // 0x8006EC34: lh          $t4, 0xA($a0)
    ctx->r12 = MEM_H(ctx->r4, 0XA);
    // 0x8006EC38: nop

    // 0x8006EC3C: addiu       $t5, $t4, 0x40
    ctx->r13 = ADD32(ctx->r12, 0X40);
    // 0x8006EC40: sh          $t5, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r13;
L_8006EC44:
    // 0x8006EC44: jr          $ra
    // 0x8006EC48: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006EC48: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8006EC4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006EC4C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006EC50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006EC54: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8006EC58: lw          $s0, -0x410($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X410);
    // 0x8006EC5C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006EC60: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006EC64: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006EC68: lbu         $s2, 0x5($s0)
    ctx->r18 = MEM_BU(ctx->r16, 0X5);
    // 0x8006EC6C: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8006EC70: beq         $s2, $zero, L_8006ECA8
    if (ctx->r18 == 0) {
        // 0x8006EC74: nop
    
            goto L_8006ECA8;
    }
    // 0x8006EC74: nop

L_8006EC78:
    // 0x8006EC78: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
    // 0x8006EC7C: nop

    // 0x8006EC80: bne         $t6, $zero, L_8006EC90
    if (ctx->r14 != 0) {
        // 0x8006EC84: nop
    
            goto L_8006EC90;
    }
    // 0x8006EC84: nop

    // 0x8006EC88: b           L_8006ECA0
    // 0x8006EC8C: addiu       $s1, $s1, 0x160
    ctx->r17 = ADD32(ctx->r17, 0X160);
        goto L_8006ECA0;
    // 0x8006EC8C: addiu       $s1, $s1, 0x160
    ctx->r17 = ADD32(ctx->r17, 0X160);
L_8006EC90:
    // 0x8006EC90: jal         0x8006EA40
    // 0x8006EC94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8006EA40(rdram, ctx);
        goto after_0;
    // 0x8006EC94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8006EC98: addiu       $s1, $s1, 0x160
    ctx->r17 = ADD32(ctx->r17, 0X160);
    // 0x8006EC9C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
L_8006ECA0:
    // 0x8006ECA0: bne         $s2, $zero, L_8006EC78
    if (ctx->r18 != 0) {
        // 0x8006ECA4: nop
    
            goto L_8006EC78;
    }
    // 0x8006ECA4: nop

L_8006ECA8:
    // 0x8006ECA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006ECAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006ECB0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006ECB4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006ECB8: jr          $ra
    // 0x8006ECBC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006ECBC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006ECC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006ECC0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006ECC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006ECC8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8006ECCC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006ECD0: lw          $s0, -0x410($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X410);
    // 0x8006ECD4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006ECD8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006ECDC: jal         0x80070D00
    // 0x8006ECE0: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    func_80070D00(rdram, ctx);
        goto after_0;
    // 0x8006ECE0: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_0:
    // 0x8006ECE4: lbu         $a0, 0x6($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X6);
    // 0x8006ECE8: jal         0x80070D30
    // 0x8006ECEC: nop

    func_80070D30(rdram, ctx);
        goto after_1;
    // 0x8006ECEC: nop

    after_1:
    // 0x8006ECF0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x8006ECF4: jal         0x80070EC8
    // 0x8006ECF8: nop

    func_80070EC8(rdram, ctx);
        goto after_2;
    // 0x8006ECF8: nop

    after_2:
    // 0x8006ECFC: jal         0x8007116C
    // 0x8006ED00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8007116C(rdram, ctx);
        goto after_3;
    // 0x8006ED00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8006ED04: lbu         $s2, 0x5($s0)
    ctx->r18 = MEM_BU(ctx->r16, 0X5);
    // 0x8006ED08: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8006ED0C: beq         $s2, $zero, L_8006ED70
    if (ctx->r18 == 0) {
        // 0x8006ED10: nop
    
            goto L_8006ED70;
    }
    // 0x8006ED10: nop

L_8006ED14:
    // 0x8006ED14: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
    // 0x8006ED18: nop

    // 0x8006ED1C: bne         $t6, $zero, L_8006ED2C
    if (ctx->r14 != 0) {
        // 0x8006ED20: nop
    
            goto L_8006ED2C;
    }
    // 0x8006ED20: nop

    // 0x8006ED24: b           L_8006ED68
    // 0x8006ED28: addiu       $s1, $s1, 0x160
    ctx->r17 = ADD32(ctx->r17, 0X160);
        goto L_8006ED68;
    // 0x8006ED28: addiu       $s1, $s1, 0x160
    ctx->r17 = ADD32(ctx->r17, 0X160);
L_8006ED2C:
    // 0x8006ED2C: lbu         $t7, 0x26($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X26);
    // 0x8006ED30: nop

    // 0x8006ED34: beq         $t7, $zero, L_8006ED4C
    if (ctx->r15 == 0) {
        // 0x8006ED38: nop
    
            goto L_8006ED4C;
    }
    // 0x8006ED38: nop

    // 0x8006ED3C: lbu         $t8, 0x29($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X29);
    // 0x8006ED40: nop

    // 0x8006ED44: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x8006ED48: sb          $t9, 0x29($s1)
    MEM_B(0X29, ctx->r17) = ctx->r25;
L_8006ED4C:
    // 0x8006ED4C: jal         0x80070528
    // 0x8006ED50: addiu       $a0, $s1, 0x28
    ctx->r4 = ADD32(ctx->r17, 0X28);
    func_80070528(rdram, ctx);
        goto after_4;
    // 0x8006ED50: addiu       $a0, $s1, 0x28
    ctx->r4 = ADD32(ctx->r17, 0X28);
    after_4:
    // 0x8006ED54: addiu       $a0, $s1, 0x28
    ctx->r4 = ADD32(ctx->r17, 0X28);
    // 0x8006ED58: jal         0x8006FE38
    // 0x8006ED5C: addiu       $a1, $s1, 0x2
    ctx->r5 = ADD32(ctx->r17, 0X2);
    func_8006FE38(rdram, ctx);
        goto after_5;
    // 0x8006ED5C: addiu       $a1, $s1, 0x2
    ctx->r5 = ADD32(ctx->r17, 0X2);
    after_5:
    // 0x8006ED60: addiu       $s1, $s1, 0x160
    ctx->r17 = ADD32(ctx->r17, 0X160);
    // 0x8006ED64: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
L_8006ED68:
    // 0x8006ED68: bne         $s2, $zero, L_8006ED14
    if (ctx->r18 != 0) {
        // 0x8006ED6C: nop
    
            goto L_8006ED14;
    }
    // 0x8006ED6C: nop

L_8006ED70:
    // 0x8006ED70: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x8006ED74: jal         0x80070F70
    // 0x8006ED78: nop

    func_80070F70(rdram, ctx);
        goto after_6;
    // 0x8006ED78: nop

    after_6:
    // 0x8006ED7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006ED80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006ED84: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006ED88: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006ED8C: jr          $ra
    // 0x8006ED90: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006ED90: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006ED94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006ED94: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006ED98: lw          $a0, -0x410($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X410);
    // 0x8006ED9C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8006EDA0: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x8006EDA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006EDA8: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x8006EDAC: nop

    // 0x8006EDB0: beq         $t6, $zero, L_8006EDF0
    if (ctx->r14 == 0) {
        // 0x8006EDB4: nop
    
            goto L_8006EDF0;
    }
    // 0x8006EDB4: nop

    // 0x8006EDB8: lbu         $t7, 0x4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4);
    // 0x8006EDBC: nop

    // 0x8006EDC0: slt         $at, $a1, $t7
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8006EDC4: beq         $at, $zero, L_8006EDF0
    if (ctx->r1 == 0) {
        // 0x8006EDC8: nop
    
            goto L_8006EDF0;
    }
    // 0x8006EDC8: nop

L_8006EDCC:
    // 0x8006EDCC: lbu         $t8, 0x160($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X160);
    // 0x8006EDD0: addiu       $a2, $a2, 0x160
    ctx->r6 = ADD32(ctx->r6, 0X160);
    // 0x8006EDD4: beq         $t8, $zero, L_8006EDF0
    if (ctx->r24 == 0) {
        // 0x8006EDD8: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8006EDF0;
    }
    // 0x8006EDD8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8006EDDC: lbu         $t9, 0x4($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X4);
    // 0x8006EDE0: nop

    // 0x8006EDE4: slt         $at, $a1, $t9
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8006EDE8: bne         $at, $zero, L_8006EDCC
    if (ctx->r1 != 0) {
        // 0x8006EDEC: nop
    
            goto L_8006EDCC;
    }
    // 0x8006EDEC: nop

L_8006EDF0:
    // 0x8006EDF0: lbu         $t0, 0x5($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X5);
    // 0x8006EDF4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8006EDF8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8006EDFC: sb          $t1, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r9;
    // 0x8006EE00: sb          $t2, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r10;
    // 0x8006EE04: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x8006EE08: jr          $ra
    // 0x8006EE0C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    // 0x8006EE0C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
;}
RECOMP_FUNC void func_8006EE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006EE10: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8006EE14: lw          $a1, -0x410($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X410);
    // 0x8006EE18: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8006EE1C: lbu         $t6, 0x5($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X5);
    // 0x8006EE20: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006EE24: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8006EE28: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8006EE2C: jr          $ra
    // 0x8006EE30: sb          $t7, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r15;
    return;
    // 0x8006EE30: sb          $t7, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r15;
;}
RECOMP_FUNC void func_8006EE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006EE34: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006EE38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006EE3C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8006EE40: lw          $s0, -0x410($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X410);
    // 0x8006EE44: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8006EE48: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8006EE4C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006EE50: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006EE54: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006EE58: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006EE5C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8006EE60: sb          $t7, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r15;
    // 0x8006EE64: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8006EE68: sw          $t6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r14;
    // 0x8006EE6C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8006EE70: nop

    // 0x8006EE74: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
    // 0x8006EE78: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8006EE7C: nop

    // 0x8006EE80: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8006EE84: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x8006EE88: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006EE8C: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x8006EE90: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x8006EE94: jal         0x8007E03C
    // 0x8006EE98: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x8006EE98: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_0:
    // 0x8006EE9C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8006EEA0: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x8006EEA4: lw          $s2, 0x0($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X0);
    // 0x8006EEA8: blez        $s1, L_8006EEC0
    if (SIGNED(ctx->r17) <= 0) {
        // 0x8006EEAC: nop
    
            goto L_8006EEC0;
    }
    // 0x8006EEAC: nop

L_8006EEB0:
    // 0x8006EEB0: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8006EEB4: addiu       $s2, $s2, 0x160
    ctx->r18 = ADD32(ctx->r18, 0X160);
    // 0x8006EEB8: bgtz        $s1, L_8006EEB0
    if (SIGNED(ctx->r17) > 0) {
        // 0x8006EEBC: sb          $zero, -0x160($s2)
        MEM_B(-0X160, ctx->r18) = 0;
            goto L_8006EEB0;
    }
    // 0x8006EEBC: sb          $zero, -0x160($s2)
    MEM_B(-0X160, ctx->r18) = 0;
L_8006EEC0:
    // 0x8006EEC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006EEC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006EEC8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006EECC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006EED0: jr          $ra
    // 0x8006EED4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006EED4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006EED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006EED8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006EEDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006EEE0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8006EEE4: lw          $s0, -0x410($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X410);
    // 0x8006EEE8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006EEEC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006EEF0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006EEF4: lbu         $s1, 0x4($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X4);
    // 0x8006EEF8: lw          $s2, 0x0($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X0);
    // 0x8006EEFC: blez        $s1, L_8006EF10
    if (SIGNED(ctx->r17) <= 0) {
        // 0x8006EF00: nop
    
            goto L_8006EF10;
    }
    // 0x8006EF00: nop

L_8006EF04:
    // 0x8006EF04: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8006EF08: bgtz        $s1, L_8006EF04
    if (SIGNED(ctx->r17) > 0) {
        // 0x8006EF0C: addiu       $s2, $s2, 0x160
        ctx->r18 = ADD32(ctx->r18, 0X160);
            goto L_8006EF04;
    }
    // 0x8006EF0C: addiu       $s2, $s2, 0x160
    ctx->r18 = ADD32(ctx->r18, 0X160);
L_8006EF10:
    // 0x8006EF10: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006EF14: jal         0x8007E328
    // 0x8006EF18: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x8006EF18: nop

    after_0:
    // 0x8006EF1C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x8006EF20: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8006EF24: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8006EF28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006EF2C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006EF30: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006EF34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006EF38: jr          $ra
    // 0x8006EF3C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006EF3C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006EF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006EF40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006EF44: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006EF48: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006EF4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006EF50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006EF54: lw          $s0, 0x0($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X0);
    // 0x8006EF58: nop

    // 0x8006EF5C: lh          $t7, 0xA($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XA);
    // 0x8006EF60: nop

    // 0x8006EF64: addiu       $t8, $t7, 0x80
    ctx->r24 = ADD32(ctx->r15, 0X80);
    // 0x8006EF68: sh          $t8, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r24;
    // 0x8006EF6C: lwl         $at, 0x8($s0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r16, 0X8);
    // 0x8006EF70: lwr         $at, 0xB($s0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r16, 0XB);
    // 0x8006EF74: lh          $t1, 0xA($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XA);
    // 0x8006EF78: swl         $at, 0x1A($s0)
    do_swl(rdram, 0X1A, ctx->r16, ctx->r1);
    // 0x8006EF7C: swr         $at, 0x1D($s0)
    do_swr(rdram, 0X1D, ctx->r16, ctx->r1);
    // 0x8006EF80: lhu         $at, 0xC($s0)
    ctx->r1 = MEM_HU(ctx->r16, 0XC);
    // 0x8006EF84: nop

    // 0x8006EF88: sh          $at, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r1;
    // 0x8006EF8C: slti        $at, $t1, 0x1601
    ctx->r1 = SIGNED(ctx->r9) < 0X1601 ? 1 : 0;
    // 0x8006EF90: bne         $at, $zero, L_8006EFDC
    if (ctx->r1 != 0) {
        // 0x8006EF94: nop
    
            goto L_8006EFDC;
    }
    // 0x8006EF94: nop

    // 0x8006EF98: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8006EF9C: nop

    // 0x8006EFA0: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x8006EFA4: jal         0x8006EE10
    // 0x8006EFA8: nop

    func_8006EE10(rdram, ctx);
        goto after_0;
    // 0x8006EFA8: nop

    after_0:
    // 0x8006EFAC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8006EFB0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8006EFB4: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
    // 0x8006EFB8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8006EFBC: nop

    // 0x8006EFC0: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
    // 0x8006EFC4: lw          $t5, -0x400($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X400);
    // 0x8006EFC8: nop

    // 0x8006EFCC: lbu         $t6, 0x5($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X5);
    // 0x8006EFD0: nop

    // 0x8006EFD4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8006EFD8: sb          $t7, 0x5($t5)
    MEM_B(0X5, ctx->r13) = ctx->r15;
L_8006EFDC:
    // 0x8006EFDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006EFE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006EFE4: jr          $ra
    // 0x8006EFE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006EFE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006EFEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006EFEC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006EFF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006EFF4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8006EFF8: lw          $s0, -0x400($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X400);
    // 0x8006EFFC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006F000: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006F004: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006F008: lbu         $s2, 0x5($s0)
    ctx->r18 = MEM_BU(ctx->r16, 0X5);
    // 0x8006F00C: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8006F010: beq         $s2, $zero, L_8006F04C
    if (ctx->r18 == 0) {
        // 0x8006F014: nop
    
            goto L_8006F04C;
    }
    // 0x8006F014: nop

L_8006F018:
    // 0x8006F018: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x8006F01C: nop

    // 0x8006F020: beq         $t6, $zero, L_8006F044
    if (ctx->r14 == 0) {
        // 0x8006F024: nop
    
            goto L_8006F044;
    }
    // 0x8006F024: nop

    // 0x8006F028: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006F02C: lbu         $a1, 0x6($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X6);
    // 0x8006F030: jal         0x800709D8
    // 0x8006F034: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_800709D8(rdram, ctx);
        goto after_0;
    // 0x8006F034: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_0:
    // 0x8006F038: jal         0x8006EF40
    // 0x8006F03C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8006EF40(rdram, ctx);
        goto after_1;
    // 0x8006F03C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8006F040: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
L_8006F044:
    // 0x8006F044: bne         $s2, $zero, L_8006F018
    if (ctx->r18 != 0) {
        // 0x8006F048: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8006F018;
    }
    // 0x8006F048: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8006F04C:
    // 0x8006F04C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006F050: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006F054: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006F058: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006F05C: jr          $ra
    // 0x8006F060: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006F060: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006F064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F064: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006F068: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006F06C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8006F070: lbu         $t6, 0x2F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2F);
    // 0x8006F074: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8006F078: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006F07C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006F080: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006F084: sb          $t6, 0x6($t7)
    MEM_B(0X6, ctx->r15) = ctx->r14;
    // 0x8006F088: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8006F08C: nop

    // 0x8006F090: lbu         $s0, 0x5($t8)
    ctx->r16 = MEM_BU(ctx->r24, 0X5);
    // 0x8006F094: lw          $s1, 0x0($t8)
    ctx->r17 = MEM_W(ctx->r24, 0X0);
    // 0x8006F098: blez        $s0, L_8006F0CC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8006F09C: nop
    
            goto L_8006F0CC;
    }
    // 0x8006F09C: nop

L_8006F0A0:
    // 0x8006F0A0: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8006F0A4: nop

    // 0x8006F0A8: beq         $t9, $zero, L_8006F0C4
    if (ctx->r25 == 0) {
        // 0x8006F0AC: nop
    
            goto L_8006F0C4;
    }
    // 0x8006F0AC: nop

    // 0x8006F0B0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006F0B4: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x8006F0B8: jal         0x800709D8
    // 0x8006F0BC: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_800709D8(rdram, ctx);
        goto after_0;
    // 0x8006F0BC: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_0:
    // 0x8006F0C0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_8006F0C4:
    // 0x8006F0C4: bgtz        $s0, L_8006F0A0
    if (SIGNED(ctx->r16) > 0) {
        // 0x8006F0C8: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8006F0A0;
    }
    // 0x8006F0C8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8006F0CC:
    // 0x8006F0CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006F0D0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006F0D4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006F0D8: jr          $ra
    // 0x8006F0DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006F0DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006F0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F0E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006F0E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006F0E8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8006F0EC: lw          $s0, -0x400($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X400);
    // 0x8006F0F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006F0F4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006F0F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006F0FC: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8006F100: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8006F104: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x8006F108: nop

    // 0x8006F10C: beq         $t6, $zero, L_8006F14C
    if (ctx->r14 == 0) {
        // 0x8006F110: nop
    
            goto L_8006F14C;
    }
    // 0x8006F110: nop

    // 0x8006F114: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
    // 0x8006F118: nop

    // 0x8006F11C: slt         $at, $s2, $t7
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8006F120: beq         $at, $zero, L_8006F14C
    if (ctx->r1 == 0) {
        // 0x8006F124: nop
    
            goto L_8006F14C;
    }
    // 0x8006F124: nop

L_8006F128:
    // 0x8006F128: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x8006F12C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8006F130: beq         $t8, $zero, L_8006F14C
    if (ctx->r24 == 0) {
        // 0x8006F134: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8006F14C;
    }
    // 0x8006F134: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8006F138: lbu         $t9, 0x4($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X4);
    // 0x8006F13C: nop

    // 0x8006F140: slt         $at, $s2, $t9
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8006F144: bne         $at, $zero, L_8006F128
    if (ctx->r1 != 0) {
        // 0x8006F148: nop
    
            goto L_8006F128;
    }
    // 0x8006F148: nop

L_8006F14C:
    // 0x8006F14C: lbu         $t0, 0x4($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X4);
    // 0x8006F150: nop

    // 0x8006F154: bne         $t0, $s2, L_8006F170
    if (ctx->r8 != ctx->r18) {
        // 0x8006F158: nop
    
            goto L_8006F170;
    }
    // 0x8006F158: nop

    // 0x8006F15C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006F160: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8006F164: addiu       $a1, $a1, -0x26E8
    ctx->r5 = ADD32(ctx->r5, -0X26E8);
    // 0x8006F168: jal         0x80083560
    // 0x8006F16C: addiu       $a0, $a0, -0x2700
    ctx->r4 = ADD32(ctx->r4, -0X2700);
    Fault_Assert(rdram, ctx);
        goto after_0;
    // 0x8006F16C: addiu       $a0, $a0, -0x2700
    ctx->r4 = ADD32(ctx->r4, -0X2700);
    after_0:
L_8006F170:
    // 0x8006F170: lbu         $t1, 0x5($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X5);
    // 0x8006F174: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x8006F178: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8006F17C: sb          $t2, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r10;
    // 0x8006F180: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006F184: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006F188: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006F18C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006F190: jr          $ra
    // 0x8006F194: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006F194: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006F198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F198: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006F19C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006F1A0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8006F1A4: lw          $s0, -0x400($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X400);
    // 0x8006F1A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006F1AC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006F1B0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006F1B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006F1B8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8006F1BC: sb          $t6, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r14;
    // 0x8006F1C0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8006F1C4: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8006F1C8: sb          $t7, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r15;
    // 0x8006F1CC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8006F1D0: nop

    // 0x8006F1D4: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8006F1D8: jal         0x8007E03C
    // 0x8006F1DC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x8006F1DC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_0:
    // 0x8006F1E0: lbu         $s1, 0x4($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X4);
    // 0x8006F1E4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8006F1E8: lw          $s2, 0x0($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X0);
    // 0x8006F1EC: blez        $s1, L_8006F204
    if (SIGNED(ctx->r17) <= 0) {
        // 0x8006F1F0: nop
    
            goto L_8006F204;
    }
    // 0x8006F1F0: nop

L_8006F1F4:
    // 0x8006F1F4: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x8006F1F8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8006F1FC: bgtz        $s1, L_8006F1F4
    if (SIGNED(ctx->r17) > 0) {
        // 0x8006F200: sw          $zero, -0x4($s2)
        MEM_W(-0X4, ctx->r18) = 0;
            goto L_8006F1F4;
    }
    // 0x8006F200: sw          $zero, -0x4($s2)
    MEM_W(-0X4, ctx->r18) = 0;
L_8006F204:
    // 0x8006F204: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006F208: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006F20C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006F210: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006F214: jr          $ra
    // 0x8006F218: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006F218: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006F21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F21C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006F220: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006F224: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8006F228: lw          $s0, -0x400($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X400);
    // 0x8006F22C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006F230: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006F234: jal         0x8007E328
    // 0x8006F238: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x8006F238: nop

    after_0:
    // 0x8006F23C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x8006F240: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8006F244: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8006F248: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006F24C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006F250: jr          $ra
    // 0x8006F254: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006F254: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8006F258: nop

    // 0x8006F25C: nop

;}
RECOMP_FUNC void func_8006F260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F260: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006F264: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006F268: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006F26C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006F270: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x8006F274: lw          $s1, -0x3C0($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3C0);
    // 0x8006F278: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006F27C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006F280: addiu       $t7, $t6, 0x24
    ctx->r15 = ADD32(ctx->r14, 0X24);
    // 0x8006F284: sw          $t7, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r15;
    // 0x8006F288: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8006F28C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8006F290: addiu       $s0, $s0, -0x3E8
    ctx->r16 = ADD32(ctx->r16, -0X3E8);
    // 0x8006F294: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x8006F298: addiu       $t9, $t8, 0xB0
    ctx->r25 = ADD32(ctx->r24, 0XB0);
    // 0x8006F29C: addiu       $a1, $s1, 0x24
    ctx->r5 = ADD32(ctx->r17, 0X24);
    // 0x8006F2A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006F2A4: jal         0x8007641C
    // 0x8006F2A8: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    func_8007641C(rdram, ctx);
        goto after_0;
    // 0x8006F2A8: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    after_0:
    // 0x8006F2AC: addiu       $a0, $s0, 0xA
    ctx->r4 = ADD32(ctx->r16, 0XA);
    // 0x8006F2B0: jal         0x8007641C
    // 0x8006F2B4: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    func_8007641C(rdram, ctx);
        goto after_1;
    // 0x8006F2B4: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    after_1:
    // 0x8006F2B8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8006F2BC: jal         0x8007641C
    // 0x8006F2C0: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    func_8007641C(rdram, ctx);
        goto after_2;
    // 0x8006F2C0: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    after_2:
    // 0x8006F2C4: addiu       $a0, $s0, 0x1E
    ctx->r4 = ADD32(ctx->r16, 0X1E);
    // 0x8006F2C8: jal         0x8007641C
    // 0x8006F2CC: addiu       $a1, $s1, 0x3C
    ctx->r5 = ADD32(ctx->r17, 0X3C);
    func_8007641C(rdram, ctx);
        goto after_3;
    // 0x8006F2CC: addiu       $a1, $s1, 0x3C
    ctx->r5 = ADD32(ctx->r17, 0X3C);
    after_3:
    // 0x8006F2D0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8006F2D4: lw          $t0, -0x3C0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3C0);
    // 0x8006F2D8: nop

    // 0x8006F2DC: lw          $t9, 0x58($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X58);
    // 0x8006F2E0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8006F2E4: jalr        $t9
    // 0x8006F2E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x8006F2E8: nop

    after_4:
    // 0x8006F2EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006F2F0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006F2F4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006F2F8: jr          $ra
    // 0x8006F2FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006F2FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006F300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F300: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006F304: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006F308: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006F30C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006F310: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x8006F314: lw          $s1, -0x3C0($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3C0);
    // 0x8006F318: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006F31C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006F320: addiu       $t7, $t6, 0x24
    ctx->r15 = ADD32(ctx->r14, 0X24);
    // 0x8006F324: sw          $t7, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r15;
    // 0x8006F328: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8006F32C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8006F330: addiu       $s0, $s0, -0x3E8
    ctx->r16 = ADD32(ctx->r16, -0X3E8);
    // 0x8006F334: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x8006F338: addiu       $t9, $t8, 0xF0
    ctx->r25 = ADD32(ctx->r24, 0XF0);
    // 0x8006F33C: addiu       $a1, $s1, 0x24
    ctx->r5 = ADD32(ctx->r17, 0X24);
    // 0x8006F340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006F344: jal         0x80076458
    // 0x8006F348: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    func_80076458(rdram, ctx);
        goto after_0;
    // 0x8006F348: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    after_0:
    // 0x8006F34C: addiu       $a0, $s0, 0xA
    ctx->r4 = ADD32(ctx->r16, 0XA);
    // 0x8006F350: jal         0x80076458
    // 0x8006F354: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    func_80076458(rdram, ctx);
        goto after_1;
    // 0x8006F354: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    after_1:
    // 0x8006F358: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8006F35C: jal         0x80076458
    // 0x8006F360: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    func_80076458(rdram, ctx);
        goto after_2;
    // 0x8006F360: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    after_2:
    // 0x8006F364: addiu       $a0, $s0, 0x1E
    ctx->r4 = ADD32(ctx->r16, 0X1E);
    // 0x8006F368: jal         0x80076458
    // 0x8006F36C: addiu       $a1, $s1, 0x3C
    ctx->r5 = ADD32(ctx->r17, 0X3C);
    func_80076458(rdram, ctx);
        goto after_3;
    // 0x8006F36C: addiu       $a1, $s1, 0x3C
    ctx->r5 = ADD32(ctx->r17, 0X3C);
    after_3:
    // 0x8006F370: lw          $t0, 0x28($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X28);
    // 0x8006F374: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x8006F378: lw          $t9, 0x58($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X58);
    // 0x8006F37C: nop

    // 0x8006F380: jalr        $t9
    // 0x8006F384: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x8006F384: nop

    after_4:
    // 0x8006F388: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006F38C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006F390: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006F394: jr          $ra
    // 0x8006F398: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006F398: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006F39C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F39C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006F3A0: addiu       $t6, $t6, -0x3E8
    ctx->r14 = ADD32(ctx->r14, -0X3E8);
    // 0x8006F3A4: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
    // 0x8006F3A8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006F3AC: sb          $t7, 0x2C($t0)
    MEM_B(0X2C, ctx->r8) = ctx->r15;
    // 0x8006F3B0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8006F3B4: lw          $t8, -0x3F0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3F0);
    // 0x8006F3B8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8006F3BC: lh          $t9, 0xA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA);
    // 0x8006F3C0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006F3C4: sh          $t9, 0x2E($t0)
    MEM_H(0X2E, ctx->r8) = ctx->r25;
    // 0x8006F3C8: lw          $t6, -0x3F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3F0);
    // 0x8006F3CC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8006F3D0: lh          $t7, 0xC($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC);
    // 0x8006F3D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006F3D8: sh          $t7, 0x30($t0)
    MEM_H(0X30, ctx->r8) = ctx->r15;
    // 0x8006F3DC: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8006F3E0: lh          $t9, 0x6($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X6);
    // 0x8006F3E4: lw          $t8, -0x3F0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3F0);
    // 0x8006F3E8: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8006F3EC: lh          $t9, 0xE($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE);
    // 0x8006F3F0: lhu         $t1, 0x8($t8)
    ctx->r9 = MEM_HU(ctx->r24, 0X8);
    // 0x8006F3F4: subu        $a2, $t7, $t9
    ctx->r6 = SUB32(ctx->r15, ctx->r25);
    // 0x8006F3F8: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x8006F3FC: lh          $t6, 0x8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8);
    // 0x8006F400: nop

    // 0x8006F404: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x8006F408: lh          $t6, 0x10($t8)
    ctx->r14 = MEM_H(ctx->r24, 0X10);
    // 0x8006F40C: subu        $t7, $a2, $t1
    ctx->r15 = SUB32(ctx->r6, ctx->r9);
    // 0x8006F410: subu        $a3, $t9, $t6
    ctx->r7 = SUB32(ctx->r25, ctx->r14);
    // 0x8006F414: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
    // 0x8006F418: subu        $t8, $a3, $t1
    ctx->r24 = SUB32(ctx->r7, ctx->r9);
    // 0x8006F41C: subu        $t6, $a3, $t1
    ctx->r14 = SUB32(ctx->r7, ctx->r9);
    // 0x8006F420: addu        $t9, $a2, $t1
    ctx->r25 = ADD32(ctx->r6, ctx->r9);
    // 0x8006F424: sh          $t8, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r24;
    // 0x8006F428: sh          $t9, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r25;
    // 0x8006F42C: sh          $t6, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r14;
    // 0x8006F430: subu        $t7, $a2, $t1
    ctx->r15 = SUB32(ctx->r6, ctx->r9);
    // 0x8006F434: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
    // 0x8006F438: addu        $t8, $a3, $t1
    ctx->r24 = ADD32(ctx->r7, ctx->r9);
    // 0x8006F43C: addu        $t6, $a3, $t1
    ctx->r14 = ADD32(ctx->r7, ctx->r9);
    // 0x8006F440: addu        $t9, $a2, $t1
    ctx->r25 = ADD32(ctx->r6, ctx->r9);
    // 0x8006F444: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x8006F448: sh          $t9, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r25;
    // 0x8006F44C: sh          $t6, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r14;
    // 0x8006F450: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8006F454: lw          $t7, -0x3F0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3F0);
    // 0x8006F458: nop

    // 0x8006F45C: lhu         $t2, 0x2($t7)
    ctx->r10 = MEM_HU(ctx->r15, 0X2);
    // 0x8006F460: lh          $t6, 0x12($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X12);
    // 0x8006F464: multu       $a2, $t2
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F468: srl         $t3, $t2, 7
    ctx->r11 = S32(U32(ctx->r10) >> 7);
    // 0x8006F46C: mflo        $t8
    ctx->r24 = lo;
    // 0x8006F470: srl         $t9, $t8, 14
    ctx->r25 = S32(U32(ctx->r24) >> 14);
    // 0x8006F474: addu        $t4, $t9, $t6
    ctx->r12 = ADD32(ctx->r25, ctx->r14);
    // 0x8006F478: multu       $a3, $t2
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F47C: lh          $t6, 0x14($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X14);
    // 0x8006F480: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8006F484: mflo        $t8
    ctx->r24 = lo;
    // 0x8006F488: srl         $t9, $t8, 14
    ctx->r25 = S32(U32(ctx->r24) >> 14);
    // 0x8006F48C: addu        $t5, $t9, $t6
    ctx->r13 = ADD32(ctx->r25, ctx->r14);
    // 0x8006F490: subu        $t8, $t4, $t3
    ctx->r24 = SUB32(ctx->r12, ctx->r11);
    // 0x8006F494: subu        $t7, $t5, $t3
    ctx->r15 = SUB32(ctx->r13, ctx->r11);
    // 0x8006F498: addu        $t9, $t4, $t3
    ctx->r25 = ADD32(ctx->r12, ctx->r11);
    // 0x8006F49C: addu        $t6, $t5, $t3
    ctx->r14 = ADD32(ctx->r13, ctx->r11);
    // 0x8006F4A0: sh          $t8, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r24;
    // 0x8006F4A4: sh          $t7, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r15;
    // 0x8006F4A8: sh          $t9, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r25;
    // 0x8006F4AC: jr          $ra
    // 0x8006F4B0: sh          $t6, 0x26($a1)
    MEM_H(0X26, ctx->r5) = ctx->r14;
    return;
    // 0x8006F4B0: sh          $t6, 0x26($a1)
    MEM_H(0X26, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_8006F4B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F4B4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8006F4B8: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8006F4BC: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8006F4C0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006F4C4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8006F4C8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8006F4CC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8006F4D0: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8006F4D4: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8006F4D8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8006F4DC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8006F4E0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006F4E4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006F4E8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006F4EC: sb          $t6, -0x3BC($at)
    MEM_B(-0X3BC, ctx->r1) = ctx->r14;
    // 0x8006F4F0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8006F4F4: lhu         $a0, 0x10($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X10);
    // 0x8006F4F8: jal         0x800B8010
    // 0x8006F4FC: addiu       $s0, $s0, -0x3E8
    ctx->r16 = ADD32(ctx->r16, -0X3E8);
    sins(rdram, ctx);
        goto after_0;
    // 0x8006F4FC: addiu       $s0, $s0, -0x3E8
    ctx->r16 = ADD32(ctx->r16, -0X3E8);
    after_0:
    // 0x8006F500: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8006F504: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8006F508: lhu         $a0, 0x10($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X10);
    // 0x8006F50C: jal         0x800B8080
    // 0x8006F510: nop

    coss(rdram, ctx);
        goto after_1;
    // 0x8006F510: nop

    after_1:
    // 0x8006F514: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8006F518: lw          $t9, -0x3F0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3F0);
    // 0x8006F51C: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8006F520: lh          $t2, 0xE($t9)
    ctx->r10 = MEM_H(ctx->r25, 0XE);
    // 0x8006F524: lh          $t1, 0x6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X6);
    // 0x8006F528: lhu         $s5, 0x6($t9)
    ctx->r21 = MEM_HU(ctx->r25, 0X6);
    // 0x8006F52C: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x8006F530: sh          $t3, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r11;
    // 0x8006F534: lh          $t5, 0x10($t9)
    ctx->r13 = MEM_H(ctx->r25, 0X10);
    // 0x8006F538: lh          $t4, 0x8($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X8);
    // 0x8006F53C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8006F540: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x8006F544: sh          $t6, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r14;
    // 0x8006F548: lhu         $t8, 0x8($t9)
    ctx->r24 = MEM_HU(ctx->r25, 0X8);
    // 0x8006F54C: lh          $t7, 0x0($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X0);
    // 0x8006F550: lhu         $t2, 0x8($t9)
    ctx->r10 = MEM_HU(ctx->r25, 0X8);
    // 0x8006F554: subu        $s3, $t7, $t8
    ctx->r19 = SUB32(ctx->r15, ctx->r24);
    // 0x8006F558: multu       $s3, $s2
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F55C: lh          $t1, 0x2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X2);
    // 0x8006F560: sll         $t8, $t3, 16
    ctx->r24 = S32(ctx->r11 << 16);
    // 0x8006F564: subu        $s4, $t1, $t2
    ctx->r20 = SUB32(ctx->r9, ctx->r10);
    // 0x8006F568: sra         $t0, $t8, 16
    ctx->r8 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8006F56C: mflo        $t4
    ctx->r12 = lo;
    // 0x8006F570: nop

    // 0x8006F574: nop

    // 0x8006F578: multu       $s4, $s1
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F57C: mflo        $t5
    ctx->r13 = lo;
    // 0x8006F580: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x8006F584: sra         $t7, $t6, 15
    ctx->r15 = S32(SIGNED(ctx->r14) >> 15);
    // 0x8006F588: multu       $s3, $s1
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F58C: addu        $s3, $s3, $s5
    ctx->r19 = ADD32(ctx->r19, ctx->r21);
    // 0x8006F590: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x8006F594: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
    // 0x8006F598: lh          $t6, 0x42($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X42);
    // 0x8006F59C: mflo        $t1
    ctx->r9 = lo;
    // 0x8006F5A0: nop

    // 0x8006F5A4: nop

    // 0x8006F5A8: multu       $s4, $s2
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F5AC: mflo        $t2
    ctx->r10 = lo;
    // 0x8006F5B0: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x8006F5B4: sra         $t5, $t4, 15
    ctx->r13 = S32(SIGNED(ctx->r12) >> 15);
    // 0x8006F5B8: multu       $s3, $s2
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F5BC: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x8006F5C0: sh          $t3, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r11;
    // 0x8006F5C4: lh          $t1, 0x40($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X40);
    // 0x8006F5C8: mflo        $t8
    ctx->r24 = lo;
    // 0x8006F5CC: nop

    // 0x8006F5D0: nop

    // 0x8006F5D4: multu       $s4, $s1
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F5D8: mflo        $t7
    ctx->r15 = lo;
    // 0x8006F5DC: subu        $t0, $t8, $t7
    ctx->r8 = SUB32(ctx->r24, ctx->r15);
    // 0x8006F5E0: sra         $t9, $t0, 15
    ctx->r25 = S32(SIGNED(ctx->r8) >> 15);
    // 0x8006F5E4: multu       $s3, $s1
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F5E8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8006F5EC: sh          $t2, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r10;
    // 0x8006F5F0: lh          $t8, 0x42($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X42);
    // 0x8006F5F4: mflo        $t4
    ctx->r12 = lo;
    // 0x8006F5F8: nop

    // 0x8006F5FC: nop

    // 0x8006F600: multu       $s4, $s2
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F604: addu        $s4, $s4, $s5
    ctx->r20 = ADD32(ctx->r20, ctx->r21);
    // 0x8006F608: mflo        $t5
    ctx->r13 = lo;
    // 0x8006F60C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8006F610: sra         $t3, $t6, 15
    ctx->r11 = S32(SIGNED(ctx->r14) >> 15);
    // 0x8006F614: multu       $s3, $s2
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F618: addu        $t7, $t3, $t8
    ctx->r15 = ADD32(ctx->r11, ctx->r24);
    // 0x8006F61C: sh          $t7, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r15;
    // 0x8006F620: lh          $t4, 0x40($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X40);
    // 0x8006F624: mflo        $t0
    ctx->r8 = lo;
    // 0x8006F628: nop

    // 0x8006F62C: nop

    // 0x8006F630: multu       $s4, $s1
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F634: mflo        $t9
    ctx->r25 = lo;
    // 0x8006F638: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x8006F63C: sra         $t2, $t1, 15
    ctx->r10 = S32(SIGNED(ctx->r9) >> 15);
    // 0x8006F640: multu       $s3, $s1
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F644: subu        $s3, $s3, $s5
    ctx->r19 = SUB32(ctx->r19, ctx->r21);
    // 0x8006F648: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8006F64C: sh          $t5, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r13;
    // 0x8006F650: lh          $t0, 0x42($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X42);
    // 0x8006F654: mflo        $t6
    ctx->r14 = lo;
    // 0x8006F658: nop

    // 0x8006F65C: nop

    // 0x8006F660: multu       $s4, $s2
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F664: mflo        $t3
    ctx->r11 = lo;
    // 0x8006F668: addu        $t8, $t6, $t3
    ctx->r24 = ADD32(ctx->r14, ctx->r11);
    // 0x8006F66C: sra         $t7, $t8, 15
    ctx->r15 = S32(SIGNED(ctx->r24) >> 15);
    // 0x8006F670: multu       $s3, $s2
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F674: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x8006F678: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
    // 0x8006F67C: lh          $t6, 0x40($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X40);
    // 0x8006F680: mflo        $t1
    ctx->r9 = lo;
    // 0x8006F684: nop

    // 0x8006F688: nop

    // 0x8006F68C: multu       $s4, $s1
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F690: mflo        $t2
    ctx->r10 = lo;
    // 0x8006F694: subu        $t4, $t1, $t2
    ctx->r12 = SUB32(ctx->r9, ctx->r10);
    // 0x8006F698: sra         $t5, $t4, 15
    ctx->r13 = S32(SIGNED(ctx->r12) >> 15);
    // 0x8006F69C: multu       $s3, $s1
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F6A0: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x8006F6A4: sh          $t3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r11;
    // 0x8006F6A8: lh          $t1, 0x42($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X42);
    // 0x8006F6AC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8006F6B0: mflo        $t8
    ctx->r24 = lo;
    // 0x8006F6B4: nop

    // 0x8006F6B8: nop

    // 0x8006F6BC: multu       $s4, $s2
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F6C0: mflo        $t7
    ctx->r15 = lo;
    // 0x8006F6C4: addu        $t0, $t8, $t7
    ctx->r8 = ADD32(ctx->r24, ctx->r15);
    // 0x8006F6C8: sra         $t9, $t0, 15
    ctx->r25 = S32(SIGNED(ctx->r8) >> 15);
    // 0x8006F6CC: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8006F6D0: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
    // 0x8006F6D4: lw          $t4, -0x3F0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3F0);
    // 0x8006F6D8: nop

    // 0x8006F6DC: lh          $t5, 0x14($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X14);
    // 0x8006F6E0: lhu         $s6, 0x2($t4)
    ctx->r22 = MEM_HU(ctx->r12, 0X2);
    // 0x8006F6E4: lh          $s7, 0x12($t4)
    ctx->r23 = MEM_H(ctx->r12, 0X12);
    // 0x8006F6E8: sh          $t5, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r13;
    // 0x8006F6EC: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x8006F6F0: lh          $t0, 0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2);
    // 0x8006F6F4: multu       $t6, $s6
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F6F8: lh          $t5, 0xA($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XA);
    // 0x8006F6FC: mflo        $t3
    ctx->r11 = lo;
    // 0x8006F700: srl         $t8, $t3, 14
    ctx->r24 = S32(U32(ctx->r11) >> 14);
    // 0x8006F704: addu        $t7, $t8, $s7
    ctx->r15 = ADD32(ctx->r24, ctx->r23);
    // 0x8006F708: multu       $t0, $s6
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F70C: sh          $t7, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r15;
    // 0x8006F710: lh          $t7, 0xC($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XC);
    // 0x8006F714: lh          $t2, 0x38($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X38);
    // 0x8006F718: mflo        $t9
    ctx->r25 = lo;
    // 0x8006F71C: srl         $t1, $t9, 14
    ctx->r9 = S32(U32(ctx->r25) >> 14);
    // 0x8006F720: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x8006F724: multu       $t5, $s6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F728: sh          $t4, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r12;
    // 0x8006F72C: lh          $t4, 0x14($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X14);
    // 0x8006F730: mflo        $t6
    ctx->r14 = lo;
    // 0x8006F734: srl         $t3, $t6, 14
    ctx->r11 = S32(U32(ctx->r14) >> 14);
    // 0x8006F738: addu        $t8, $t3, $s7
    ctx->r24 = ADD32(ctx->r11, ctx->r23);
    // 0x8006F73C: multu       $t7, $s6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F740: sh          $t8, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r24;
    // 0x8006F744: lh          $t8, 0x16($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X16);
    // 0x8006F748: lh          $t1, 0x38($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X38);
    // 0x8006F74C: mflo        $t0
    ctx->r8 = lo;
    // 0x8006F750: srl         $t9, $t0, 14
    ctx->r25 = S32(U32(ctx->r8) >> 14);
    // 0x8006F754: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8006F758: multu       $t4, $s6
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F75C: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
    // 0x8006F760: lh          $t2, 0x1E($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X1E);
    // 0x8006F764: mflo        $t5
    ctx->r13 = lo;
    // 0x8006F768: srl         $t6, $t5, 14
    ctx->r14 = S32(U32(ctx->r13) >> 14);
    // 0x8006F76C: addu        $t3, $t6, $s7
    ctx->r11 = ADD32(ctx->r14, ctx->r23);
    // 0x8006F770: multu       $t8, $s6
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F774: sh          $t3, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r11;
    // 0x8006F778: lh          $t3, 0x20($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X20);
    // 0x8006F77C: lh          $t9, 0x38($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X38);
    // 0x8006F780: mflo        $t7
    ctx->r15 = lo;
    // 0x8006F784: srl         $t0, $t7, 14
    ctx->r8 = S32(U32(ctx->r15) >> 14);
    // 0x8006F788: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x8006F78C: multu       $t2, $s6
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F790: sh          $t1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r9;
    // 0x8006F794: mflo        $t4
    ctx->r12 = lo;
    // 0x8006F798: srl         $t5, $t4, 14
    ctx->r13 = S32(U32(ctx->r12) >> 14);
    // 0x8006F79C: addu        $t6, $t5, $s7
    ctx->r14 = ADD32(ctx->r13, ctx->r23);
    // 0x8006F7A0: multu       $t3, $s6
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006F7A4: sh          $t6, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r14;
    // 0x8006F7A8: lh          $t0, 0x38($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X38);
    // 0x8006F7AC: mflo        $t8
    ctx->r24 = lo;
    // 0x8006F7B0: srl         $t7, $t8, 14
    ctx->r15 = S32(U32(ctx->r24) >> 14);
    // 0x8006F7B4: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x8006F7B8: sh          $t9, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r25;
    // 0x8006F7BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8006F7C0: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8006F7C4: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8006F7C8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8006F7CC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8006F7D0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006F7D4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006F7D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006F7DC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006F7E0: jr          $ra
    // 0x8006F7E4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8006F7E4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8006F7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F7E8: jr          $ra
    // 0x8006F7EC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8006F7EC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8006F7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F7F0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8006F7F4: lw          $a1, 0x20C0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X20C0);
    // 0x8006F7F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006F7FC: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x8006F800: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8006F804: lui         $t6, 0xE800
    ctx->r14 = S32(0XE800 << 16);
    // 0x8006F808: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8006F80C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8006F810: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8006F814: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8006F818: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006F81C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8006F820: lui         $t9, 0xF590
    ctx->r25 = S32(0XF590 << 16);
    // 0x8006F824: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8006F828: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8006F82C: lui         $t1, 0x700
    ctx->r9 = S32(0X700 << 16);
    // 0x8006F830: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8006F834: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8006F838: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x8006F83C: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8006F840: lui         $t3, 0xE600
    ctx->r11 = S32(0XE600 << 16);
    // 0x8006F844: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8006F848: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8006F84C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8006F850: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8006F854: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x8006F858: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x8006F85C: lui         $t6, 0xFD90
    ctx->r14 = S32(0XFD90 << 16);
    // 0x8006F860: ori         $t6, $t6, 0xFFF
    ctx->r14 = ctx->r14 | 0XFFF;
    // 0x8006F864: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8006F868: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x8006F86C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8006F870: sw          $a0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r4;
    // 0x8006F874: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x8006F878: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x8006F87C: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x8006F880: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8006F884: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x8006F888: lui         $t1, 0x701
    ctx->r9 = S32(0X701 << 16);
    // 0x8006F88C: ori         $t1, $t1, 0xF800
    ctx->r9 = ctx->r9 | 0XF800;
    // 0x8006F890: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8006F894: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8006F898: lbu         $t3, 0x560($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X560);
    // 0x8006F89C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8006F8A0: andi        $t4, $t3, 0x7
    ctx->r12 = ctx->r11 & 0X7;
    // 0x8006F8A4: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x8006F8A8: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x8006F8AC: lui         $at, 0xD700
    ctx->r1 = S32(0XD700 << 16);
    // 0x8006F8B0: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x8006F8B4: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8006F8B8: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x8006F8BC: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8006F8C0: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8006F8C4: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x8006F8C8: ori         $t9, $t9, 0x8000
    ctx->r25 = ctx->r25 | 0X8000;
    // 0x8006F8CC: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8006F8D0: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8006F8D4: sw          $a1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r5;
    // 0x8006F8D8: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x8006F8DC: lui         $t1, 0xE800
    ctx->r9 = S32(0XE800 << 16);
    // 0x8006F8E0: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8006F8E4: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x8006F8E8: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8006F8EC: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8006F8F0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8006F8F4: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8006F8F8: lui         $t4, 0xF588
    ctx->r12 = S32(0XF588 << 16);
    // 0x8006F8FC: ori         $t4, $t4, 0x200
    ctx->r12 = ctx->r12 | 0X200;
    // 0x8006F900: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8006F904: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8006F908: lbu         $t6, 0x560($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X560);
    // 0x8006F90C: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x8006F910: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x8006F914: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x8006F918: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8006F91C: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8006F920: ori         $t0, $t9, 0x200
    ctx->r8 = ctx->r25 | 0X200;
    // 0x8006F924: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8006F928: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8006F92C: sw          $a1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r5;
    // 0x8006F930: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x8006F934: lui         $t2, 0xF200
    ctx->r10 = S32(0XF200 << 16);
    // 0x8006F938: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8006F93C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8006F940: lbu         $t4, 0x560($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X560);
    // 0x8006F944: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8006F948: andi        $t5, $t4, 0x7
    ctx->r13 = ctx->r12 & 0X7;
    // 0x8006F94C: sll         $t6, $t5, 24
    ctx->r14 = S32(ctx->r13 << 24);
    // 0x8006F950: ori         $at, $at, 0xC000
    ctx->r1 = ctx->r1 | 0XC000;
    // 0x8006F954: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x8006F958: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8006F95C: ori         $t8, $t7, 0x1C
    ctx->r24 = ctx->r15 | 0X1C;
    // 0x8006F960: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8006F964: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8006F968: lbu         $t0, 0x560($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X560);
    // 0x8006F96C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8006F970: sb          $t0, -0x3AC($at)
    MEM_B(-0X3AC, ctx->r1) = ctx->r8;
    // 0x8006F974: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006F978: xori        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 ^ 0X2;
    // 0x8006F97C: sb          $t1, 0x560($at)
    MEM_B(0X560, ctx->r1) = ctx->r9;
    // 0x8006F980: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8006F984: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006F988: sw          $a1, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r5;
    // 0x8006F98C: jr          $ra
    // 0x8006F990: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006F990: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006F994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F994: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x8006F998: lw          $a2, 0x20C0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X20C0);
    // 0x8006F99C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8006F9A0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8006F9A4: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8006F9A8: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x8006F9AC: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8006F9B0: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8006F9B4: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006F9B8: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8006F9BC: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
    // 0x8006F9C0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8006F9C4: lui         $t9, 0xE800
    ctx->r25 = S32(0XE800 << 16);
    // 0x8006F9C8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8006F9CC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8006F9D0: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006F9D4: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8006F9D8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8006F9DC: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x8006F9E0: lui         $t2, 0xF590
    ctx->r10 = S32(0XF590 << 16);
    // 0x8006F9E4: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8006F9E8: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8006F9EC: lui         $t4, 0x700
    ctx->r12 = S32(0X700 << 16);
    // 0x8006F9F0: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006F9F4: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8006F9F8: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    // 0x8006F9FC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8006FA00: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FA04: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8006FA08: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8006FA0C: lui         $t9, 0xFD90
    ctx->r25 = S32(0XFD90 << 16);
    // 0x8006FA10: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8006FA14: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8006FA18: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8006FA1C: ori         $t9, $t9, 0xFFF
    ctx->r25 = ctx->r25 | 0XFFF;
    // 0x8006FA20: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8006FA24: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8006FA28: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FA2C: sw          $a0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r4;
    // 0x8006FA30: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    // 0x8006FA34: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8006FA38: lui         $t2, 0xF300
    ctx->r10 = S32(0XF300 << 16);
    // 0x8006FA3C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8006FA40: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8006FA44: lui         $t4, 0x701
    ctx->r12 = S32(0X701 << 16);
    // 0x8006FA48: ori         $t4, $t4, 0xF800
    ctx->r12 = ctx->r12 | 0XF800;
    // 0x8006FA4C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FA50: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8006FA54: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8006FA58: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8006FA5C: lui         $t6, 0xE800
    ctx->r14 = S32(0XE800 << 16);
    // 0x8006FA60: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8006FA64: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8006FA68: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FA6C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8006FA70: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x8006FA74: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8006FA78: lui         $t9, 0xF590
    ctx->r25 = S32(0XF590 << 16);
    // 0x8006FA7C: ori         $t9, $t9, 0x8
    ctx->r25 = ctx->r25 | 0X8;
    // 0x8006FA80: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8006FA84: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8006FA88: lui         $t1, 0x700
    ctx->r9 = S32(0X700 << 16);
    // 0x8006FA8C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FA90: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8006FA94: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8006FA98: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8006FA9C: lui         $t3, 0xE600
    ctx->r11 = S32(0XE600 << 16);
    // 0x8006FAA0: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8006FAA4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8006FAA8: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FAAC: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8006FAB0: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x8006FAB4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8006FAB8: lui         $t6, 0xFD90
    ctx->r14 = S32(0XFD90 << 16);
    // 0x8006FABC: ori         $t6, $t6, 0xFFF
    ctx->r14 = ctx->r14 | 0XFFF;
    // 0x8006FAC0: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8006FAC4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8006FAC8: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FACC: sw          $a1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r5;
    // 0x8006FAD0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8006FAD4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8006FAD8: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x8006FADC: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8006FAE0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8006FAE4: lui         $t1, 0x701
    ctx->r9 = S32(0X701 << 16);
    // 0x8006FAE8: ori         $t1, $t1, 0xF800
    ctx->r9 = ctx->r9 | 0XF800;
    // 0x8006FAEC: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8006FAF0: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8006FAF4: lbu         $t3, 0x560($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X560);
    // 0x8006FAF8: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FAFC: andi        $t4, $t3, 0x7
    ctx->r12 = ctx->r11 & 0X7;
    // 0x8006FB00: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x8006FB04: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8006FB08: lui         $at, 0xD700
    ctx->r1 = S32(0XD700 << 16);
    // 0x8006FB0C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8006FB10: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8006FB14: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x8006FB18: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8006FB1C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8006FB20: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x8006FB24: ori         $t9, $t9, 0x8000
    ctx->r25 = ctx->r25 | 0X8000;
    // 0x8006FB28: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FB2C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8006FB30: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8006FB34: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8006FB38: lui         $t1, 0xE800
    ctx->r9 = S32(0XE800 << 16);
    // 0x8006FB3C: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8006FB40: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8006FB44: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FB48: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8006FB4C: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x8006FB50: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x8006FB54: lui         $t4, 0xF588
    ctx->r12 = S32(0XF588 << 16);
    // 0x8006FB58: ori         $t4, $t4, 0x200
    ctx->r12 = ctx->r12 | 0X200;
    // 0x8006FB5C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8006FB60: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8006FB64: lbu         $t6, 0x560($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X560);
    // 0x8006FB68: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x8006FB6C: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x8006FB70: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x8006FB74: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x8006FB78: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8006FB7C: ori         $t0, $t9, 0x200
    ctx->r8 = ctx->r25 | 0X200;
    // 0x8006FB80: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FB84: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8006FB88: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x8006FB8C: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x8006FB90: lui         $t2, 0xF200
    ctx->r10 = S32(0XF200 << 16);
    // 0x8006FB94: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8006FB98: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8006FB9C: lbu         $t4, 0x560($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X560);
    // 0x8006FBA0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8006FBA4: andi        $t5, $t4, 0x7
    ctx->r13 = ctx->r12 & 0X7;
    // 0x8006FBA8: sll         $t6, $t5, 24
    ctx->r14 = S32(ctx->r13 << 24);
    // 0x8006FBAC: ori         $at, $at, 0xC000
    ctx->r1 = ctx->r1 | 0XC000;
    // 0x8006FBB0: lw          $t9, 0x10($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X10);
    // 0x8006FBB4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8006FBB8: ori         $t8, $t7, 0x1C
    ctx->r24 = ctx->r15 | 0X1C;
    // 0x8006FBBC: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FBC0: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8006FBC4: sw          $a2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r6;
    // 0x8006FBC8: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x8006FBCC: lui         $t0, 0xE800
    ctx->r8 = S32(0XE800 << 16);
    // 0x8006FBD0: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8006FBD4: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8006FBD8: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FBDC: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8006FBE0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8006FBE4: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x8006FBE8: lui         $t3, 0xF588
    ctx->r11 = S32(0XF588 << 16);
    // 0x8006FBEC: ori         $t3, $t3, 0x208
    ctx->r11 = ctx->r11 | 0X208;
    // 0x8006FBF0: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8006FBF4: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8006FBF8: lbu         $t5, 0x560($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X560);
    // 0x8006FBFC: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x8006FC00: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8006FC04: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x8006FC08: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x8006FC0C: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x8006FC10: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8006FC14: ori         $t0, $t9, 0x200
    ctx->r8 = ctx->r25 | 0X200;
    // 0x8006FC18: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FC1C: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8006FC20: sw          $a2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r6;
    // 0x8006FC24: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8006FC28: lui         $t2, 0xF200
    ctx->r10 = S32(0XF200 << 16);
    // 0x8006FC2C: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8006FC30: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8006FC34: lbu         $t4, 0x560($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X560);
    // 0x8006FC38: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8006FC3C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8006FC40: andi        $t6, $t5, 0x7
    ctx->r14 = ctx->r13 & 0X7;
    // 0x8006FC44: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x8006FC48: ori         $at, $at, 0xC000
    ctx->r1 = ctx->r1 | 0XC000;
    // 0x8006FC4C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8006FC50: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8006FC54: ori         $t9, $t8, 0x1C
    ctx->r25 = ctx->r24 | 0X1C;
    // 0x8006FC58: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8006FC5C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8006FC60: lbu         $t1, 0x560($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X560);
    // 0x8006FC64: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8006FC68: sb          $t1, -0x3AC($at)
    MEM_B(-0X3AC, ctx->r1) = ctx->r9;
    // 0x8006FC6C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006FC70: xori        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 ^ 0X2;
    // 0x8006FC74: sb          $t2, 0x560($at)
    MEM_B(0X560, ctx->r1) = ctx->r10;
    // 0x8006FC78: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FC7C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006FC80: sw          $a2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r6;
    // 0x8006FC84: jr          $ra
    // 0x8006FC88: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8006FC88: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8006FC8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006FC8C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006FC90: lbu         $t6, -0x3B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3B0);
    // 0x8006FC94: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8006FC98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006FC9C: bne         $a0, $t6, L_8006FCB8
    if (ctx->r4 != ctx->r14) {
        // 0x8006FCA0: andi        $a1, $a1, 0xFF
        ctx->r5 = ctx->r5 & 0XFF;
            goto L_8006FCB8;
    }
    // 0x8006FCA0: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8006FCA4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8006FCA8: lbu         $t7, -0x3AF($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3AF);
    // 0x8006FCAC: nop

    // 0x8006FCB0: beq         $a1, $t7, L_8006FE30
    if (ctx->r5 == ctx->r15) {
        // 0x8006FCB4: nop
    
            goto L_8006FE30;
    }
    // 0x8006FCB4: nop

L_8006FCB8:
    // 0x8006FCB8: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x8006FCBC: lw          $a2, 0x20C0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X20C0);
    // 0x8006FCC0: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8006FCC4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8006FCC8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8006FCCC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8006FCD0: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8006FCD4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8006FCD8: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FCDC: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8006FCE0: lbu         $t1, -0x3B0($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X3B0);
    // 0x8006FCE4: nop

    // 0x8006FCE8: beq         $a0, $t1, L_8006FDB0
    if (ctx->r4 == ctx->r9) {
        // 0x8006FCEC: nop
    
            goto L_8006FDB0;
    }
    // 0x8006FCEC: nop

    // 0x8006FCF0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8006FCF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006FCF8: beq         $a3, $at, L_8006FD10
    if (ctx->r7 == ctx->r1) {
        // 0x8006FCFC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8006FD10;
    }
    // 0x8006FCFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006FD00: beq         $a3, $at, L_8006FD5C
    if (ctx->r7 == ctx->r1) {
        // 0x8006FD04: nop
    
            goto L_8006FD5C;
    }
    // 0x8006FD04: nop

    // 0x8006FD08: b           L_8006FDA8
    // 0x8006FD0C: nop

        goto L_8006FDA8;
    // 0x8006FD0C: nop

L_8006FD10:
    // 0x8006FD10: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8006FD14: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8006FD18: lui         $t2, 0xE300
    ctx->r10 = S32(0XE300 << 16);
    // 0x8006FD1C: ori         $t2, $t2, 0xA01
    ctx->r10 = ctx->r10 | 0XA01;
    // 0x8006FD20: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8006FD24: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8006FD28: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FD2C: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8006FD30: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8006FD34: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006FD38: lui         $t5, 0xFC50
    ctx->r13 = S32(0XFC50 << 16);
    // 0x8006FD3C: ori         $t5, $t5, 0xFEA1
    ctx->r13 = ctx->r13 | 0XFEA1;
    // 0x8006FD40: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8006FD44: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8006FD48: lui         $t7, 0x33FD
    ctx->r15 = S32(0X33FD << 16);
    // 0x8006FD4C: ori         $t7, $t7, 0xF6FB
    ctx->r15 = ctx->r15 | 0XF6FB;
    // 0x8006FD50: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FD54: b           L_8006FDA8
    // 0x8006FD58: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
        goto L_8006FDA8;
    // 0x8006FD58: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
L_8006FD5C:
    // 0x8006FD5C: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x8006FD60: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x8006FD64: lui         $t9, 0xE300
    ctx->r25 = S32(0XE300 << 16);
    // 0x8006FD68: ori         $t9, $t9, 0xA01
    ctx->r25 = ctx->r25 | 0XA01;
    // 0x8006FD6C: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8006FD70: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x8006FD74: lui         $t1, 0x10
    ctx->r9 = S32(0X10 << 16);
    // 0x8006FD78: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FD7C: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8006FD80: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x8006FD84: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x8006FD88: lui         $t3, 0xFC26
    ctx->r11 = S32(0XFC26 << 16);
    // 0x8006FD8C: ori         $t3, $t3, 0x7EA0
    ctx->r11 = ctx->r11 | 0X7EA0;
    // 0x8006FD90: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8006FD94: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x8006FD98: lui         $t5, 0x13FC
    ctx->r13 = S32(0X13FC << 16);
    // 0x8006FD9C: ori         $t5, $t5, 0xF8FB
    ctx->r13 = ctx->r13 | 0XF8FB;
    // 0x8006FDA0: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FDA4: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
L_8006FDA8:
    // 0x8006FDA8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8006FDAC: sb          $a0, -0x3B0($at)
    MEM_B(-0X3B0, ctx->r1) = ctx->r4;
L_8006FDB0:
    // 0x8006FDB0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8006FDB4: lbu         $t7, -0x3AF($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3AF);
    // 0x8006FDB8: nop

    // 0x8006FDBC: beq         $a1, $t7, L_8006FE28
    if (ctx->r5 == ctx->r15) {
        // 0x8006FDC0: nop
    
            goto L_8006FE28;
    }
    // 0x8006FDC0: nop

    // 0x8006FDC4: beq         $a1, $zero, L_8006FDF8
    if (ctx->r5 == 0) {
        // 0x8006FDC8: nop
    
            goto L_8006FDF8;
    }
    // 0x8006FDC8: nop

    // 0x8006FDCC: sw          $a2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r6;
    // 0x8006FDD0: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x8006FDD4: lui         $t8, 0xE200
    ctx->r24 = S32(0XE200 << 16);
    // 0x8006FDD8: ori         $t8, $t8, 0x1C
    ctx->r24 = ctx->r24 | 0X1C;
    // 0x8006FDDC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8006FDE0: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x8006FDE4: lui         $t0, 0x50
    ctx->r8 = S32(0X50 << 16);
    // 0x8006FDE8: ori         $t0, $t0, 0x41C8
    ctx->r8 = ctx->r8 | 0X41C8;
    // 0x8006FDEC: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FDF0: b           L_8006FE20
    // 0x8006FDF4: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
        goto L_8006FE20;
    // 0x8006FDF4: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
L_8006FDF8:
    // 0x8006FDF8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8006FDFC: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x8006FE00: lui         $t2, 0xE200
    ctx->r10 = S32(0XE200 << 16);
    // 0x8006FE04: ori         $t2, $t2, 0x1C
    ctx->r10 = ctx->r10 | 0X1C;
    // 0x8006FE08: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8006FE0C: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x8006FE10: lui         $t4, 0x55
    ctx->r12 = S32(0X55 << 16);
    // 0x8006FE14: ori         $t4, $t4, 0x2048
    ctx->r12 = ctx->r12 | 0X2048;
    // 0x8006FE18: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8006FE1C: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
L_8006FE20:
    // 0x8006FE20: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8006FE24: sb          $a1, -0x3AF($at)
    MEM_B(-0X3AF, ctx->r1) = ctx->r5;
L_8006FE28:
    // 0x8006FE28: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006FE2C: sw          $a2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r6;
L_8006FE30:
    // 0x8006FE30: jr          $ra
    // 0x8006FE34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006FE34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006FE38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006FE38: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8006FE3C: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x8006FE40: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x8006FE44: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8006FE48: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x8006FE4C: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8006FE50: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8006FE54: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8006FE58: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8006FE5C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8006FE60: lbu         $t7, 0x1C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1C);
    // 0x8006FE64: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8006FE68: lbu         $s0, 0x21($t6)
    ctx->r16 = MEM_BU(ctx->r14, 0X21);
    // 0x8006FE6C: bne         $t7, $at, L_8006FE84
    if (ctx->r15 != ctx->r1) {
        // 0x8006FE70: nop
    
            goto L_8006FE84;
    }
    // 0x8006FE70: nop

    // 0x8006FE74: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x8006FE78: lbu         $s1, -0x3AE($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X3AE);
    // 0x8006FE7C: b           L_8006FED8
    // 0x8006FE80: nop

        goto L_8006FED8;
    // 0x8006FE80: nop

L_8006FE84:
    // 0x8006FE84: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8006FE88: lbu         $t8, -0x3AE($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X3AE);
    // 0x8006FE8C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8006FE90: bne         $t8, $at, L_8006FEAC
    if (ctx->r24 != ctx->r1) {
        // 0x8006FE94: nop
    
            goto L_8006FEAC;
    }
    // 0x8006FE94: nop

    // 0x8006FE98: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x8006FE9C: nop

    // 0x8006FEA0: lbu         $s1, 0x1C($t9)
    ctx->r17 = MEM_BU(ctx->r25, 0X1C);
    // 0x8006FEA4: b           L_8006FED8
    // 0x8006FEA8: nop

        goto L_8006FED8;
    // 0x8006FEA8: nop

L_8006FEAC:
    // 0x8006FEAC: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x8006FEB0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8006FEB4: lbu         $t2, -0x3AE($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X3AE);
    // 0x8006FEB8: lbu         $t1, 0x1C($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1C);
    // 0x8006FEBC: nop

    // 0x8006FEC0: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006FEC4: mflo        $s1
    ctx->r17 = lo;
    // 0x8006FEC8: srl         $t3, $s1, 8
    ctx->r11 = S32(U32(ctx->r17) >> 8);
    // 0x8006FECC: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x8006FED0: andi        $t4, $s1, 0xFF
    ctx->r12 = ctx->r17 & 0XFF;
    // 0x8006FED4: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
L_8006FED8:
    // 0x8006FED8: beq         $s1, $zero, L_800702C4
    if (ctx->r17 == 0) {
        // 0x8006FEDC: nop
    
            goto L_800702C4;
    }
    // 0x8006FEDC: nop

    // 0x8006FEE0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8006FEE4: lw          $t9, -0x3B4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3B4);
    // 0x8006FEE8: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x8006FEEC: jalr        $t9
    // 0x8006FEF0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8006FEF0: nop

    after_0:
    // 0x8006FEF4: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x8006FEF8: nop

    // 0x8006FEFC: lbu         $t6, 0x1($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X1);
    // 0x8006FF00: nop

    // 0x8006FF04: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8006FF08: bne         $t7, $zero, L_8006FF14
    if (ctx->r15 != 0) {
        // 0x8006FF0C: nop
    
            goto L_8006FF14;
    }
    // 0x8006FF0C: nop

    // 0x8006FF10: blez        $s0, L_8006FF58
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8006FF14: slti        $at, $s0, 0xFF
        ctx->r1 = SIGNED(ctx->r16) < 0XFF ? 1 : 0;
            goto L_8006FF58;
    }
L_8006FF14:
    // 0x8006FF14: slti        $at, $s0, 0xFF
    ctx->r1 = SIGNED(ctx->r16) < 0XFF ? 1 : 0;
    // 0x8006FF18: beq         $at, $zero, L_8006FF2C
    if (ctx->r1 == 0) {
        // 0x8006FF1C: nop
    
            goto L_8006FF2C;
    }
    // 0x8006FF1C: nop

    // 0x8006FF20: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8006FF24: jal         0x8006F260
    // 0x8006FF28: nop

    func_8006F260(rdram, ctx);
        goto after_1;
    // 0x8006FF28: nop

    after_1:
L_8006FF2C:
    // 0x8006FF2C: blez        $s0, L_8006FF40
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8006FF30: nop
    
            goto L_8006FF40;
    }
    // 0x8006FF30: nop

    // 0x8006FF34: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8006FF38: jal         0x8006F300
    // 0x8006FF3C: nop

    func_8006F300(rdram, ctx);
        goto after_2;
    // 0x8006FF3C: nop

    after_2:
L_8006FF40:
    // 0x8006FF40: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x8006FF44: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8006FF48: lbu         $t0, 0x1($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X1);
    // 0x8006FF4C: nop

    // 0x8006FF50: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x8006FF54: sb          $t1, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r9;
L_8006FF58:
    // 0x8006FF58: bne         $s0, $zero, L_8006FF74
    if (ctx->r16 != 0) {
        // 0x8006FF5C: nop
    
            goto L_8006FF74;
    }
    // 0x8006FF5C: nop

    // 0x8006FF60: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8006FF64: jal         0x8006F7F0
    // 0x8006FF68: addiu       $a0, $a0, 0xB0
    ctx->r4 = ADD32(ctx->r4, 0XB0);
    func_8006F7F0(rdram, ctx);
        goto after_3;
    // 0x8006FF68: addiu       $a0, $a0, 0xB0
    ctx->r4 = ADD32(ctx->r4, 0XB0);
    after_3:
    // 0x8006FF6C: b           L_8006FFA8
    // 0x8006FF70: nop

        goto L_8006FFA8;
    // 0x8006FF70: nop

L_8006FF74:
    // 0x8006FF74: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8006FF78: bne         $s0, $at, L_8006FF94
    if (ctx->r16 != ctx->r1) {
        // 0x8006FF7C: nop
    
            goto L_8006FF94;
    }
    // 0x8006FF7C: nop

    // 0x8006FF80: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8006FF84: jal         0x8006F7F0
    // 0x8006FF88: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    func_8006F7F0(rdram, ctx);
        goto after_4;
    // 0x8006FF88: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    after_4:
    // 0x8006FF8C: b           L_8006FFA8
    // 0x8006FF90: nop

        goto L_8006FFA8;
    // 0x8006FF90: nop

L_8006FF94:
    // 0x8006FF94: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x8006FF98: nop

    // 0x8006FF9C: addiu       $a0, $t2, 0xB0
    ctx->r4 = ADD32(ctx->r10, 0XB0);
    // 0x8006FFA0: jal         0x8006F994
    // 0x8006FFA4: addiu       $a1, $t2, 0xF0
    ctx->r5 = ADD32(ctx->r10, 0XF0);
    func_8006F994(rdram, ctx);
        goto after_5;
    // 0x8006FFA4: addiu       $a1, $t2, 0xF0
    ctx->r5 = ADD32(ctx->r10, 0XF0);
    after_5:
L_8006FFA8:
    // 0x8006FFA8: beq         $s0, $zero, L_8006FFB4
    if (ctx->r16 == 0) {
        // 0x8006FFAC: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_8006FFB4;
    }
    // 0x8006FFAC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8006FFB0: bne         $s0, $at, L_8006FFE8
    if (ctx->r16 != ctx->r1) {
        // 0x8006FFB4: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_8006FFE8;
    }
L_8006FFB4:
    // 0x8006FFB4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8006FFB8: bne         $s1, $at, L_8006FFD4
    if (ctx->r17 != ctx->r1) {
        // 0x8006FFBC: nop
    
            goto L_8006FFD4;
    }
    // 0x8006FFBC: nop

    // 0x8006FFC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006FFC4: jal         0x8006FC8C
    // 0x8006FFC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8006FC8C(rdram, ctx);
        goto after_6;
    // 0x8006FFC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8006FFCC: b           L_80070014
    // 0x8006FFD0: nop

        goto L_80070014;
    // 0x8006FFD0: nop

L_8006FFD4:
    // 0x8006FFD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006FFD8: jal         0x8006FC8C
    // 0x8006FFDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8006FC8C(rdram, ctx);
        goto after_7;
    // 0x8006FFDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x8006FFE0: b           L_80070014
    // 0x8006FFE4: nop

        goto L_80070014;
    // 0x8006FFE4: nop

L_8006FFE8:
    // 0x8006FFE8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8006FFEC: bne         $s1, $at, L_80070008
    if (ctx->r17 != ctx->r1) {
        // 0x8006FFF0: nop
    
            goto L_80070008;
    }
    // 0x8006FFF0: nop

    // 0x8006FFF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8006FFF8: jal         0x8006FC8C
    // 0x8006FFFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8006FC8C(rdram, ctx);
        goto after_8;
    // 0x8006FFFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80070000: b           L_80070014
    // 0x80070004: nop

        goto L_80070014;
    // 0x80070004: nop

L_80070008:
    // 0x80070008: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8007000C: jal         0x8006FC8C
    // 0x80070010: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8006FC8C(rdram, ctx);
        goto after_9;
    // 0x80070010: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
L_80070014:
    // 0x80070014: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x80070018: lw          $s5, 0x20C0($s5)
    ctx->r21 = MEM_W(ctx->r21, 0X20C0);
    // 0x8007001C: lui         $t3, 0xFA00
    ctx->r11 = S32(0XFA00 << 16);
    // 0x80070020: sw          $s5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r21;
    // 0x80070024: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x80070028: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x8007002C: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80070030: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x80070034: lui         $s6, 0x8012
    ctx->r22 = S32(0X8012 << 16);
    // 0x80070038: lh          $t5, 0x4($t9)
    ctx->r13 = MEM_H(ctx->r25, 0X4);
    // 0x8007003C: lh          $t1, 0x6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X6);
    // 0x80070040: sra         $t6, $t5, 4
    ctx->r14 = S32(SIGNED(ctx->r13) >> 4);
    // 0x80070044: lh          $t5, 0x8($t9)
    ctx->r13 = MEM_H(ctx->r25, 0X8);
    // 0x80070048: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8007004C: sra         $t8, $t1, 4
    ctx->r24 = S32(SIGNED(ctx->r9) >> 4);
    // 0x80070050: andi        $t2, $t8, 0xFF
    ctx->r10 = ctx->r24 & 0XFF;
    // 0x80070054: sll         $t0, $t7, 24
    ctx->r8 = S32(ctx->r15 << 24);
    // 0x80070058: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x8007005C: sra         $t6, $t5, 4
    ctx->r14 = S32(SIGNED(ctx->r13) >> 4);
    // 0x80070060: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80070064: or          $t4, $t0, $t3
    ctx->r12 = ctx->r8 | ctx->r11;
    // 0x80070068: sll         $t1, $t7, 8
    ctx->r9 = S32(ctx->r15 << 8);
    // 0x8007006C: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x80070070: or          $t8, $t4, $t1
    ctx->r24 = ctx->r12 | ctx->r9;
    // 0x80070074: andi        $t2, $s1, 0xFF
    ctx->r10 = ctx->r17 & 0XFF;
    // 0x80070078: or          $t0, $t8, $t2
    ctx->r8 = ctx->r24 | ctx->r10;
    // 0x8007007C: sw          $t0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r8;
    // 0x80070080: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x80070084: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x80070088: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x8007008C: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x80070090: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x80070094: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x80070098: lh          $t7, 0xA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA);
    // 0x8007009C: lh          $t2, 0xC($t6)
    ctx->r10 = MEM_H(ctx->r14, 0XC);
    // 0x800700A0: sra         $t4, $t7, 4
    ctx->r12 = S32(SIGNED(ctx->r15) >> 4);
    // 0x800700A4: lh          $t7, 0xE($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE);
    // 0x800700A8: andi        $t1, $t4, 0xFF
    ctx->r9 = ctx->r12 & 0XFF;
    // 0x800700AC: sra         $t0, $t2, 4
    ctx->r8 = S32(SIGNED(ctx->r10) >> 4);
    // 0x800700B0: andi        $t3, $t0, 0xFF
    ctx->r11 = ctx->r8 & 0XFF;
    // 0x800700B4: sll         $t8, $t1, 24
    ctx->r24 = S32(ctx->r9 << 24);
    // 0x800700B8: sll         $t9, $t3, 16
    ctx->r25 = S32(ctx->r11 << 16);
    // 0x800700BC: sra         $t4, $t7, 4
    ctx->r12 = S32(SIGNED(ctx->r15) >> 4);
    // 0x800700C0: andi        $t1, $t4, 0xFF
    ctx->r9 = ctx->r12 & 0XFF;
    // 0x800700C4: or          $t5, $t8, $t9
    ctx->r13 = ctx->r24 | ctx->r25;
    // 0x800700C8: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x800700CC: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x800700D0: or          $t0, $t5, $t2
    ctx->r8 = ctx->r13 | ctx->r10;
    // 0x800700D4: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x800700D8: or          $t8, $t0, $t3
    ctx->r24 = ctx->r8 | ctx->r11;
    // 0x800700DC: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x800700E0: sw          $s5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r21;
    // 0x800700E4: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x800700E8: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x800700EC: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x800700F0: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x800700F4: addiu       $s6, $s6, -0x3E8
    ctx->r22 = ADD32(ctx->r22, -0X3E8);
    // 0x800700F8: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x800700FC: lbu         $s7, 0x2C($s6)
    ctx->r23 = MEM_BU(ctx->r22, 0X2C);
    // 0x80070100: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80070104: beq         $s7, $at, L_80070120
    if (ctx->r23 == ctx->r1) {
        // 0x80070108: addiu       $s5, $s5, 0x8
        ctx->r21 = ADD32(ctx->r21, 0X8);
            goto L_80070120;
    }
    // 0x80070108: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x8007010C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80070110: beq         $s7, $at, L_800701D8
    if (ctx->r23 == ctx->r1) {
        // 0x80070114: nop
    
            goto L_800701D8;
    }
    // 0x80070114: nop

    // 0x80070118: b           L_800702BC
    // 0x8007011C: nop

        goto L_800702BC;
    // 0x8007011C: nop

L_80070120:
    // 0x80070120: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x80070124: lh          $t2, 0x24($s6)
    ctx->r10 = MEM_H(ctx->r22, 0X24);
    // 0x80070128: lh          $t1, 0x26($s6)
    ctx->r9 = MEM_H(ctx->r22, 0X26);
    // 0x8007012C: andi        $t0, $t2, 0xFFF
    ctx->r8 = ctx->r10 & 0XFFF;
    // 0x80070130: sll         $t3, $t0, 12
    ctx->r11 = S32(ctx->r8 << 12);
    // 0x80070134: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80070138: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x8007013C: or          $t8, $t3, $at
    ctx->r24 = ctx->r11 | ctx->r1;
    // 0x80070140: andi        $t5, $t1, 0xFFF
    ctx->r13 = ctx->r9 & 0XFFF;
    // 0x80070144: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x80070148: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x8007014C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80070150: lbu         $t7, -0x3AC($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3AC);
    // 0x80070154: lh          $t2, 0x6($s6)
    ctx->r10 = MEM_H(ctx->r22, 0X6);
    // 0x80070158: lh          $t8, 0x8($s6)
    ctx->r24 = MEM_H(ctx->r22, 0X8);
    // 0x8007015C: andi        $t4, $t7, 0x7
    ctx->r12 = ctx->r15 & 0X7;
    // 0x80070160: andi        $t0, $t2, 0xFFF
    ctx->r8 = ctx->r10 & 0XFFF;
    // 0x80070164: sll         $t3, $t0, 12
    ctx->r11 = S32(ctx->r8 << 12);
    // 0x80070168: sll         $t1, $t4, 24
    ctx->r9 = S32(ctx->r12 << 24);
    // 0x8007016C: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x80070170: or          $t5, $t1, $t3
    ctx->r13 = ctx->r9 | ctx->r11;
    // 0x80070174: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x80070178: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x8007017C: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x80070180: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80070184: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80070188: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x8007018C: lui         $t4, 0xE100
    ctx->r12 = S32(0XE100 << 16);
    // 0x80070190: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    // 0x80070194: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80070198: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x8007019C: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x800701A0: sw          $s5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r21;
    // 0x800701A4: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x800701A8: lui         $t1, 0xF100
    ctx->r9 = S32(0XF100 << 16);
    // 0x800701AC: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x800701B0: lh          $t8, 0x2E($s6)
    ctx->r24 = MEM_H(ctx->r22, 0X2E);
    // 0x800701B4: lh          $t6, 0x30($s6)
    ctx->r14 = MEM_H(ctx->r22, 0X30);
    // 0x800701B8: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x800701BC: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x800701C0: sll         $t5, $t9, 16
    ctx->r13 = S32(ctx->r25 << 16);
    // 0x800701C4: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x800701C8: or          $t4, $t5, $t7
    ctx->r12 = ctx->r13 | ctx->r15;
    // 0x800701CC: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x800701D0: b           L_800702BC
    // 0x800701D4: sw          $t4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r12;
        goto L_800702BC;
    // 0x800701D4: sw          $t4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r12;
L_800701D8:
    // 0x800701D8: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x800701DC: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800701E0: lui         $t0, 0x218
    ctx->r8 = S32(0X218 << 16);
    // 0x800701E4: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x800701E8: lh          $t8, 0x6($s6)
    ctx->r24 = MEM_H(ctx->r22, 0X6);
    // 0x800701EC: lh          $t3, 0x8($s6)
    ctx->r11 = MEM_H(ctx->r22, 0X8);
    // 0x800701F0: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800701F4: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x800701F8: or          $t6, $t3, $t9
    ctx->r14 = ctx->r11 | ctx->r25;
    // 0x800701FC: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x80070200: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x80070204: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x80070208: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8007020C: lui         $t7, 0x218
    ctx->r15 = S32(0X218 << 16);
    // 0x80070210: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x80070214: sw          $t7, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r15;
    // 0x80070218: lh          $t0, 0x10($s6)
    ctx->r8 = MEM_H(ctx->r22, 0X10);
    // 0x8007021C: lh          $t2, 0x12($s6)
    ctx->r10 = MEM_H(ctx->r22, 0X12);
    // 0x80070220: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80070224: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x80070228: or          $t8, $t2, $t1
    ctx->r24 = ctx->r10 | ctx->r9;
    // 0x8007022C: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x80070230: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
    // 0x80070234: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80070238: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8007023C: lui         $t9, 0x218
    ctx->r25 = S32(0X218 << 16);
    // 0x80070240: ori         $t9, $t9, 0x4
    ctx->r25 = ctx->r25 | 0X4;
    // 0x80070244: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x80070248: lh          $t7, 0x1A($s6)
    ctx->r15 = MEM_H(ctx->r22, 0X1A);
    // 0x8007024C: lh          $t5, 0x1C($s6)
    ctx->r13 = MEM_H(ctx->r22, 0X1C);
    // 0x80070250: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80070254: sll         $t4, $t7, 16
    ctx->r12 = S32(ctx->r15 << 16);
    // 0x80070258: or          $t0, $t5, $t4
    ctx->r8 = ctx->r13 | ctx->r12;
    // 0x8007025C: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x80070260: sw          $t0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r8;
    // 0x80070264: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x80070268: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8007026C: lui         $t1, 0x218
    ctx->r9 = S32(0X218 << 16);
    // 0x80070270: ori         $t1, $t1, 0x6
    ctx->r9 = ctx->r9 | 0X6;
    // 0x80070274: sw          $t1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r9;
    // 0x80070278: lh          $t9, 0x24($s6)
    ctx->r25 = MEM_H(ctx->r22, 0X24);
    // 0x8007027C: lh          $t3, 0x26($s6)
    ctx->r11 = MEM_H(ctx->r22, 0X26);
    // 0x80070280: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80070284: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x80070288: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x8007028C: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x80070290: sw          $t7, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r15;
    // 0x80070294: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80070298: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8007029C: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x800702A0: ori         $t4, $t4, 0x204
    ctx->r12 = ctx->r12 | 0X204;
    // 0x800702A4: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x800702A8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800702AC: lui         $t2, 0x2
    ctx->r10 = S32(0X2 << 16);
    // 0x800702B0: ori         $t2, $t2, 0x604
    ctx->r10 = ctx->r10 | 0X604;
    // 0x800702B4: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x800702B8: sw          $t2, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r10;
L_800702BC:
    // 0x800702BC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800702C0: sw          $s5, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r21;
L_800702C4:
    // 0x800702C4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800702C8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800702CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800702D0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800702D4: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x800702D8: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x800702DC: jr          $ra
    // 0x800702E0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x800702E0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_800702E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800702E4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800702E8: lw          $t6, -0x350($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X350);
    // 0x800702EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800702F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800702F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800702F8: addiu       $a1, $t6, 0x7FFF
    ctx->r5 = ADD32(ctx->r14, 0X7FFF);
    // 0x800702FC: lw          $a1, 0x5C01($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5C01);
    // 0x80070300: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80070304: jal         0x80070818
    // 0x80070308: nop

    func_80070818(rdram, ctx);
        goto after_0;
    // 0x80070308: nop

    after_0:
    // 0x8007030C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80070310: nop

    // 0x80070314: lw          $a1, 0x130($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X130);
    // 0x80070318: jal         0x800A2F30
    // 0x8007031C: addiu       $a0, $t7, 0x24
    ctx->r4 = ADD32(ctx->r15, 0X24);
    func_800A2F30(rdram, ctx);
        goto after_1;
    // 0x8007031C: addiu       $a0, $t7, 0x24
    ctx->r4 = ADD32(ctx->r15, 0X24);
    after_1:
    // 0x80070320: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80070324: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80070328: sb          $t8, 0x1C($t9)
    MEM_B(0X1C, ctx->r25) = ctx->r24;
    // 0x8007032C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80070330: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80070334: lbu         $t1, 0x1C($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1C);
    // 0x80070338: nop

    // 0x8007033C: sb          $t1, 0x1E($t0)
    MEM_B(0X1E, ctx->r8) = ctx->r9;
    // 0x80070340: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80070344: nop

    // 0x80070348: sb          $zero, 0x1D($t2)
    MEM_B(0X1D, ctx->r10) = 0;
    // 0x8007034C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80070350: nop

    // 0x80070354: sh          $zero, 0x20($t3)
    MEM_H(0X20, ctx->r11) = 0;
    // 0x80070358: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007035C: nop

    // 0x80070360: sh          $zero, 0x22($t4)
    MEM_H(0X22, ctx->r12) = 0;
    // 0x80070364: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80070368: nop

    // 0x8007036C: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x80070370: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80070374: nop

    // 0x80070378: lbu         $t8, 0x1($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1);
    // 0x8007037C: nop

    // 0x80070380: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x80070384: sb          $t9, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r25;
    // 0x80070388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007038C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80070390: jr          $ra
    // 0x80070394: nop

    return;
    // 0x80070394: nop

;}
RECOMP_FUNC void func_80070398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007039C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800703A0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800703A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800703A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800703AC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800703B0: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x800703B4: nop

    // 0x800703B8: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x800703BC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800703C0: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800703C4: lbu         $t0, 0x1($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1);
    // 0x800703C8: nop

    // 0x800703CC: sb          $t0, 0x1($t1)
    MEM_B(0X1, ctx->r9) = ctx->r8;
    // 0x800703D0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800703D4: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x800703D8: lh          $t3, 0x20($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X20);
    // 0x800703DC: nop

    // 0x800703E0: sh          $t3, 0x20($t4)
    MEM_H(0X20, ctx->r12) = ctx->r11;
    // 0x800703E4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800703E8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800703EC: lh          $t6, 0x22($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X22);
    // 0x800703F0: nop

    // 0x800703F4: sh          $t6, 0x22($t7)
    MEM_H(0X22, ctx->r15) = ctx->r14;
    // 0x800703F8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800703FC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80070400: lw          $t9, 0x130($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X130);
    // 0x80070404: nop

    // 0x80070408: sw          $t9, 0x130($t0)
    MEM_W(0X130, ctx->r8) = ctx->r25;
    // 0x8007040C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80070410: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80070414: lbu         $t2, 0x1C($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X1C);
    // 0x80070418: nop

    // 0x8007041C: sb          $t2, 0x1C($t3)
    MEM_B(0X1C, ctx->r11) = ctx->r10;
    // 0x80070420: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80070424: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80070428: lbu         $t5, 0x2($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X2);
    // 0x8007042C: nop

    // 0x80070430: sb          $t5, 0x2($t6)
    MEM_B(0X2, ctx->r14) = ctx->r13;
    // 0x80070434: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80070438: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8007043C: lwl         $at, 0x4($t8)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r24, 0X4);
    // 0x80070440: lwr         $at, 0x7($t8)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r24, 0X7);
    // 0x80070444: nop

    // 0x80070448: swl         $at, 0x4($t7)
    do_swl(rdram, 0X4, ctx->r15, ctx->r1);
    // 0x8007044C: swr         $at, 0x7($t7)
    do_swr(rdram, 0X7, ctx->r15, ctx->r1);
    // 0x80070450: lwl         $t0, 0x8($t8)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r24, 0X8);
    // 0x80070454: lwr         $t0, 0xB($t8)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r24, 0XB);
    // 0x80070458: nop

    // 0x8007045C: swl         $t0, 0x8($t7)
    do_swl(rdram, 0X8, ctx->r15, ctx->r8);
    // 0x80070460: swr         $t0, 0xB($t7)
    do_swr(rdram, 0XB, ctx->r15, ctx->r8);
    // 0x80070464: lwl         $at, 0xC($t8)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r24, 0XC);
    // 0x80070468: lwr         $at, 0xF($t8)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r24, 0XF);
    // 0x8007046C: nop

    // 0x80070470: swl         $at, 0xC($t7)
    do_swl(rdram, 0XC, ctx->r15, ctx->r1);
    // 0x80070474: swr         $at, 0xF($t7)
    do_swr(rdram, 0XF, ctx->r15, ctx->r1);
    // 0x80070478: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007047C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80070480: lwl         $at, 0x10($t2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r10, 0X10);
    // 0x80070484: lwr         $at, 0x13($t2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r10, 0X13);
    // 0x80070488: nop

    // 0x8007048C: swl         $at, 0x10($t1)
    do_swl(rdram, 0X10, ctx->r9, ctx->r1);
    // 0x80070490: swr         $at, 0x13($t1)
    do_swr(rdram, 0X13, ctx->r9, ctx->r1);
    // 0x80070494: lwl         $t4, 0x14($t2)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r10, 0X14);
    // 0x80070498: lwr         $t4, 0x17($t2)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r10, 0X17);
    // 0x8007049C: nop

    // 0x800704A0: swl         $t4, 0x14($t1)
    do_swl(rdram, 0X14, ctx->r9, ctx->r12);
    // 0x800704A4: swr         $t4, 0x17($t1)
    do_swr(rdram, 0X17, ctx->r9, ctx->r12);
    // 0x800704A8: lwl         $at, 0x18($t2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r10, 0X18);
    // 0x800704AC: lwr         $at, 0x1B($t2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r10, 0X1B);
    // 0x800704B0: nop

    // 0x800704B4: swl         $at, 0x18($t1)
    do_swl(rdram, 0X18, ctx->r9, ctx->r1);
    // 0x800704B8: swr         $at, 0x1B($t1)
    do_swr(rdram, 0X1B, ctx->r9, ctx->r1);
    // 0x800704BC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800704C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800704C4: addiu       $a1, $a1, 0x24
    ctx->r5 = ADD32(ctx->r5, 0X24);
    // 0x800704C8: jal         0x800A2F30
    // 0x800704CC: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    func_800A2F30(rdram, ctx);
        goto after_0;
    // 0x800704CC: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    after_0:
    // 0x800704D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800704D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800704D8: jr          $ra
    // 0x800704DC: nop

    return;
    // 0x800704DC: nop

;}
RECOMP_FUNC void func_800704E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800704E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800704E4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800704E8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800704EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800704F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800704F4: lw          $a0, 0x130($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X130);
    // 0x800704F8: jal         0x800A2F50
    // 0x800704FC: addiu       $a1, $t6, 0x24
    ctx->r5 = ADD32(ctx->r14, 0X24);
    func_800A2F50(rdram, ctx);
        goto after_0;
    // 0x800704FC: addiu       $a1, $t6, 0x24
    ctx->r5 = ADD32(ctx->r14, 0X24);
    after_0:
    // 0x80070500: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80070504: bne         $s0, $zero, L_80070518
    if (ctx->r16 != 0) {
        // 0x80070508: nop
    
            goto L_80070518;
    }
    // 0x80070508: nop

    // 0x8007050C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80070510: nop

    // 0x80070514: sw          $zero, 0x130($t7)
    MEM_W(0X130, ctx->r15) = 0;
L_80070518:
    // 0x80070518: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007051C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80070520: jr          $ra
    // 0x80070524: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80070524: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80070528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070528: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007052C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80070530: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80070534: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80070538: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8007053C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80070540: lw          $t7, 0x130($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X130);
    // 0x80070544: nop

    // 0x80070548: beq         $t7, $zero, L_800705E8
    if (ctx->r15 == 0) {
        // 0x8007054C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800705E8;
    }
    // 0x8007054C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80070550: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80070554: sltu        $at, $t7, $at
    ctx->r1 = ctx->r15 < ctx->r1 ? 1 : 0;
    // 0x80070558: bne         $at, $zero, L_80070590
    if (ctx->r1 != 0) {
        // 0x8007055C: lui         $at, 0x8040
        ctx->r1 = S32(0X8040 << 16);
            goto L_80070590;
    }
    // 0x8007055C: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x80070560: sltu        $at, $t7, $at
    ctx->r1 = ctx->r15 < ctx->r1 ? 1 : 0;
    // 0x80070564: beq         $at, $zero, L_80070590
    if (ctx->r1 == 0) {
        // 0x80070568: nop
    
            goto L_80070590;
    }
    // 0x80070568: nop

    // 0x8007056C: jal         0x800704E0
    // 0x80070570: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800704E0(rdram, ctx);
        goto after_0;
    // 0x80070570: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x80070574: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80070578: nop

    // 0x8007057C: lbu         $t9, 0x1($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1);
    // 0x80070580: nop

    // 0x80070584: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x80070588: b           L_800705E8
    // 0x8007058C: sb          $t0, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r8;
        goto L_800705E8;
    // 0x8007058C: sb          $t0, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r8;
L_80070590:
    // 0x80070590: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80070594: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80070598: lw          $a1, 0x130($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X130);
    // 0x8007059C: addiu       $a0, $a0, -0x26E0
    ctx->r4 = ADD32(ctx->r4, -0X26E0);
    // 0x800705A0: jal         0x800B3BFC
    // 0x800705A4: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_1;
    // 0x800705A4: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    after_1:
    // 0x800705A8: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800705AC: lw          $t2, -0x350($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X350);
    // 0x800705B0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800705B4: addiu       $a1, $t2, 0x7FFF
    ctx->r5 = ADD32(ctx->r10, 0X7FFF);
    // 0x800705B8: lw          $a1, 0x5C3D($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5C3D);
    // 0x800705BC: jal         0x80070818
    // 0x800705C0: nop

    func_80070818(rdram, ctx);
        goto after_2;
    // 0x800705C0: nop

    after_2:
    // 0x800705C4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800705C8: jal         0x800704E0
    // 0x800705CC: nop

    func_800704E0(rdram, ctx);
        goto after_3;
    // 0x800705CC: nop

    after_3:
    // 0x800705D0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800705D4: nop

    // 0x800705D8: lbu         $t4, 0x1($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1);
    // 0x800705DC: nop

    // 0x800705E0: ori         $t5, $t4, 0x1
    ctx->r13 = ctx->r12 | 0X1;
    // 0x800705E4: sb          $t5, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r13;
L_800705E8:
    // 0x800705E8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800705EC: nop

    // 0x800705F0: lbu         $t6, 0x2($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X2);
    // 0x800705F4: nop

    // 0x800705F8: beq         $t6, $zero, L_800706B8
    if (ctx->r14 == 0) {
        // 0x800705FC: nop
    
            goto L_800706B8;
    }
    // 0x800705FC: nop

    // 0x80070600: lh          $t9, 0x4($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X4);
    // 0x80070604: lh          $t0, 0x10($t7)
    ctx->r8 = MEM_H(ctx->r15, 0X10);
    // 0x80070608: nop

    // 0x8007060C: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x80070610: sh          $t8, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r24;
    // 0x80070614: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80070618: nop

    // 0x8007061C: lh          $t2, 0x6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X6);
    // 0x80070620: lh          $t4, 0x12($t1)
    ctx->r12 = MEM_H(ctx->r9, 0X12);
    // 0x80070624: nop

    // 0x80070628: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8007062C: sh          $t5, 0x6($t1)
    MEM_H(0X6, ctx->r9) = ctx->r13;
    // 0x80070630: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80070634: nop

    // 0x80070638: lh          $t6, 0x8($t3)
    ctx->r14 = MEM_H(ctx->r11, 0X8);
    // 0x8007063C: lh          $t9, 0x14($t3)
    ctx->r25 = MEM_H(ctx->r11, 0X14);
    // 0x80070640: nop

    // 0x80070644: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x80070648: sh          $t0, 0x8($t3)
    MEM_H(0X8, ctx->r11) = ctx->r8;
    // 0x8007064C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80070650: nop

    // 0x80070654: lh          $t7, 0xA($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XA);
    // 0x80070658: lh          $t2, 0x16($t8)
    ctx->r10 = MEM_H(ctx->r24, 0X16);
    // 0x8007065C: nop

    // 0x80070660: addu        $t4, $t7, $t2
    ctx->r12 = ADD32(ctx->r15, ctx->r10);
    // 0x80070664: sh          $t4, 0xA($t8)
    MEM_H(0XA, ctx->r24) = ctx->r12;
    // 0x80070668: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8007066C: nop

    // 0x80070670: lh          $t1, 0xC($t5)
    ctx->r9 = MEM_H(ctx->r13, 0XC);
    // 0x80070674: lh          $t6, 0x18($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X18);
    // 0x80070678: nop

    // 0x8007067C: addu        $t9, $t1, $t6
    ctx->r25 = ADD32(ctx->r9, ctx->r14);
    // 0x80070680: sh          $t9, 0xC($t5)
    MEM_H(0XC, ctx->r13) = ctx->r25;
    // 0x80070684: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80070688: nop

    // 0x8007068C: lh          $t3, 0xE($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XE);
    // 0x80070690: lh          $t7, 0x1A($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X1A);
    // 0x80070694: nop

    // 0x80070698: addu        $t2, $t3, $t7
    ctx->r10 = ADD32(ctx->r11, ctx->r15);
    // 0x8007069C: sh          $t2, 0xE($t0)
    MEM_H(0XE, ctx->r8) = ctx->r10;
    // 0x800706A0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800706A4: nop

    // 0x800706A8: lbu         $t8, 0x2($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X2);
    // 0x800706AC: nop

    // 0x800706B0: addiu       $t1, $t8, -0x1
    ctx->r9 = ADD32(ctx->r24, -0X1);
    // 0x800706B4: sb          $t1, 0x2($t4)
    MEM_B(0X2, ctx->r12) = ctx->r9;
L_800706B8:
    // 0x800706B8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800706BC: nop

    // 0x800706C0: lbu         $t9, 0x1C($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X1C);
    // 0x800706C4: lbu         $t5, 0x1E($t6)
    ctx->r13 = MEM_BU(ctx->r14, 0X1E);
    // 0x800706C8: nop

    // 0x800706CC: beq         $t9, $t5, L_80070784
    if (ctx->r25 == ctx->r13) {
        // 0x800706D0: nop
    
            goto L_80070784;
    }
    // 0x800706D0: nop

    // 0x800706D4: lb          $t3, 0x1D($t6)
    ctx->r11 = MEM_B(ctx->r14, 0X1D);
    // 0x800706D8: lbu         $s1, 0x1E($t6)
    ctx->r17 = MEM_BU(ctx->r14, 0X1E);
    // 0x800706DC: blez        $t3, L_80070728
    if (SIGNED(ctx->r11) <= 0) {
        // 0x800706E0: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_80070728;
    }
    // 0x800706E0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x800706E4: addu        $t7, $t3, $s0
    ctx->r15 = ADD32(ctx->r11, ctx->r16);
    // 0x800706E8: slt         $at, $t7, $s1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800706EC: bne         $at, $zero, L_8007070C
    if (ctx->r1 != 0) {
        // 0x800706F0: nop
    
            goto L_8007070C;
    }
    // 0x800706F0: nop

    // 0x800706F4: lbu         $t2, 0x1E($t6)
    ctx->r10 = MEM_BU(ctx->r14, 0X1E);
    // 0x800706F8: nop

    // 0x800706FC: sb          $t2, 0x1C($t6)
    MEM_B(0X1C, ctx->r14) = ctx->r10;
    // 0x80070700: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80070704: b           L_80070728
    // 0x80070708: sb          $zero, 0x1D($t0)
    MEM_B(0X1D, ctx->r8) = 0;
        goto L_80070728;
    // 0x80070708: sb          $zero, 0x1D($t0)
    MEM_B(0X1D, ctx->r8) = 0;
L_8007070C:
    // 0x8007070C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80070710: nop

    // 0x80070714: lbu         $t1, 0x1C($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X1C);
    // 0x80070718: lb          $t4, 0x1D($t8)
    ctx->r12 = MEM_B(ctx->r24, 0X1D);
    // 0x8007071C: nop

    // 0x80070720: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x80070724: sb          $t5, 0x1C($t8)
    MEM_B(0X1C, ctx->r24) = ctx->r13;
L_80070728:
    // 0x80070728: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8007072C: nop

    // 0x80070730: lb          $t3, 0x1D($t9)
    ctx->r11 = MEM_B(ctx->r25, 0X1D);
    // 0x80070734: nop

    // 0x80070738: bgez        $t3, L_80070784
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8007073C: nop
    
            goto L_80070784;
    }
    // 0x8007073C: nop

    // 0x80070740: addu        $t7, $t3, $s0
    ctx->r15 = ADD32(ctx->r11, ctx->r16);
    // 0x80070744: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80070748: bne         $at, $zero, L_80070768
    if (ctx->r1 != 0) {
        // 0x8007074C: nop
    
            goto L_80070768;
    }
    // 0x8007074C: nop

    // 0x80070750: lbu         $t2, 0x1E($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X1E);
    // 0x80070754: nop

    // 0x80070758: sb          $t2, 0x1C($t9)
    MEM_B(0X1C, ctx->r25) = ctx->r10;
    // 0x8007075C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80070760: b           L_80070784
    // 0x80070764: sb          $zero, 0x1D($t6)
    MEM_B(0X1D, ctx->r14) = 0;
        goto L_80070784;
    // 0x80070764: sb          $zero, 0x1D($t6)
    MEM_B(0X1D, ctx->r14) = 0;
L_80070768:
    // 0x80070768: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8007076C: nop

    // 0x80070770: lbu         $t1, 0x1C($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1C);
    // 0x80070774: lb          $t4, 0x1D($t0)
    ctx->r12 = MEM_B(ctx->r8, 0X1D);
    // 0x80070778: nop

    // 0x8007077C: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x80070780: sb          $t5, 0x1C($t0)
    MEM_B(0X1C, ctx->r8) = ctx->r13;
L_80070784:
    // 0x80070784: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80070788: nop

    // 0x8007078C: lh          $t3, 0x22($t8)
    ctx->r11 = MEM_H(ctx->r24, 0X22);
    // 0x80070790: nop

    // 0x80070794: beq         $t3, $zero, L_80070804
    if (ctx->r11 == 0) {
        // 0x80070798: nop
    
            goto L_80070804;
    }
    // 0x80070798: nop

    // 0x8007079C: lh          $t7, 0x20($t8)
    ctx->r15 = MEM_H(ctx->r24, 0X20);
    // 0x800707A0: nop

    // 0x800707A4: addu        $t2, $t7, $t3
    ctx->r10 = ADD32(ctx->r15, ctx->r11);
    // 0x800707A8: sh          $t2, 0x20($t8)
    MEM_H(0X20, ctx->r24) = ctx->r10;
    // 0x800707AC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800707B0: nop

    // 0x800707B4: lh          $t6, 0x20($t9)
    ctx->r14 = MEM_H(ctx->r25, 0X20);
    // 0x800707B8: nop

    // 0x800707BC: bgez        $t6, L_800707D4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800707C0: nop
    
            goto L_800707D4;
    }
    // 0x800707C0: nop

    // 0x800707C4: sh          $zero, 0x20($t9)
    MEM_H(0X20, ctx->r25) = 0;
    // 0x800707C8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800707CC: nop

    // 0x800707D0: sh          $zero, 0x22($t1)
    MEM_H(0X22, ctx->r9) = 0;
L_800707D4:
    // 0x800707D4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800707D8: nop

    // 0x800707DC: lh          $t5, 0x20($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X20);
    // 0x800707E0: nop

    // 0x800707E4: slti        $at, $t5, 0x100
    ctx->r1 = SIGNED(ctx->r13) < 0X100 ? 1 : 0;
    // 0x800707E8: bne         $at, $zero, L_80070804
    if (ctx->r1 != 0) {
        // 0x800707EC: nop
    
            goto L_80070804;
    }
    // 0x800707EC: nop

    // 0x800707F0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800707F4: sh          $t0, 0x20($t4)
    MEM_H(0X20, ctx->r12) = ctx->r8;
    // 0x800707F8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800707FC: nop

    // 0x80070800: sh          $zero, 0x22($t7)
    MEM_H(0X22, ctx->r15) = 0;
L_80070804:
    // 0x80070804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80070808: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8007080C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80070810: jr          $ra
    // 0x80070814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80070814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80070818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070818: jr          $ra
    // 0x8007081C: sw          $a1, 0x130($a0)
    MEM_W(0X130, ctx->r4) = ctx->r5;
    return;
    // 0x8007081C: sw          $a1, 0x130($a0)
    MEM_W(0X130, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80070820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070820: lwl         $at, 0x0($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X0);
    // 0x80070824: lwr         $at, 0x3($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0X3);
    // 0x80070828: nop

    // 0x8007082C: swl         $at, 0x4($a0)
    do_swl(rdram, 0X4, ctx->r4, ctx->r1);
    // 0x80070830: swr         $at, 0x7($a0)
    do_swr(rdram, 0X7, ctx->r4, ctx->r1);
    // 0x80070834: lwl         $t8, 0x4($a1)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r5, 0X4);
    // 0x80070838: lwr         $t8, 0x7($a1)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r5, 0X7);
    // 0x8007083C: nop

    // 0x80070840: swl         $t8, 0x8($a0)
    do_swl(rdram, 0X8, ctx->r4, ctx->r24);
    // 0x80070844: swr         $t8, 0xB($a0)
    do_swr(rdram, 0XB, ctx->r4, ctx->r24);
    // 0x80070848: lwl         $at, 0x8($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X8);
    // 0x8007084C: lwr         $at, 0xB($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0XB);
    // 0x80070850: sb          $zero, 0x2($a0)
    MEM_B(0X2, ctx->r4) = 0;
    // 0x80070854: swl         $at, 0xC($a0)
    do_swl(rdram, 0XC, ctx->r4, ctx->r1);
    // 0x80070858: jr          $ra
    // 0x8007085C: swr         $at, 0xF($a0)
    do_swr(rdram, 0XF, ctx->r4, ctx->r1);
    return;
    // 0x8007085C: swr         $at, 0xF($a0)
    do_swr(rdram, 0XF, ctx->r4, ctx->r1);
;}
RECOMP_FUNC void func_80070860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070860: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x80070864: lh          $t7, 0x4($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X4);
    // 0x80070868: lh          $t1, 0x6($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X6);
    // 0x8007086C: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x80070870: div         $zero, $t8, $a2
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r6)));
    // 0x80070874: lh          $t5, 0x8($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X8);
    // 0x80070878: bne         $a2, $zero, L_80070884
    if (ctx->r6 != 0) {
        // 0x8007087C: nop
    
            goto L_80070884;
    }
    // 0x8007087C: nop

    // 0x80070880: break       7
    do_break(2147944576);
L_80070884:
    // 0x80070884: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80070888: bne         $a2, $at, L_8007089C
    if (ctx->r6 != ctx->r1) {
        // 0x8007088C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8007089C;
    }
    // 0x8007088C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80070890: bne         $t8, $at, L_8007089C
    if (ctx->r24 != ctx->r1) {
        // 0x80070894: nop
    
            goto L_8007089C;
    }
    // 0x80070894: nop

    // 0x80070898: break       6
    do_break(2147944600);
L_8007089C:
    // 0x8007089C: mflo        $t9
    ctx->r25 = lo;
    // 0x800708A0: sh          $t9, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r25;
    // 0x800708A4: lh          $t0, 0x2($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X2);
    // 0x800708A8: lh          $t9, 0xA($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XA);
    // 0x800708AC: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x800708B0: div         $zero, $t2, $a2
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r6)));
    // 0x800708B4: bne         $a2, $zero, L_800708C0
    if (ctx->r6 != 0) {
        // 0x800708B8: nop
    
            goto L_800708C0;
    }
    // 0x800708B8: nop

    // 0x800708BC: break       7
    do_break(2147944636);
L_800708C0:
    // 0x800708C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800708C4: bne         $a2, $at, L_800708D8
    if (ctx->r6 != ctx->r1) {
        // 0x800708C8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800708D8;
    }
    // 0x800708C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800708CC: bne         $t2, $at, L_800708D8
    if (ctx->r10 != ctx->r1) {
        // 0x800708D0: nop
    
            goto L_800708D8;
    }
    // 0x800708D0: nop

    // 0x800708D4: break       6
    do_break(2147944660);
L_800708D8:
    // 0x800708D8: mflo        $t3
    ctx->r11 = lo;
    // 0x800708DC: sh          $t3, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r11;
    // 0x800708E0: lh          $t4, 0x4($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X4);
    // 0x800708E4: lh          $t3, 0xC($a0)
    ctx->r11 = MEM_H(ctx->r4, 0XC);
    // 0x800708E8: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x800708EC: div         $zero, $t6, $a2
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r6)));
    // 0x800708F0: bne         $a2, $zero, L_800708FC
    if (ctx->r6 != 0) {
        // 0x800708F4: nop
    
            goto L_800708FC;
    }
    // 0x800708F4: nop

    // 0x800708F8: break       7
    do_break(2147944696);
L_800708FC:
    // 0x800708FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80070900: bne         $a2, $at, L_80070914
    if (ctx->r6 != ctx->r1) {
        // 0x80070904: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80070914;
    }
    // 0x80070904: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80070908: bne         $t6, $at, L_80070914
    if (ctx->r14 != ctx->r1) {
        // 0x8007090C: nop
    
            goto L_80070914;
    }
    // 0x8007090C: nop

    // 0x80070910: break       6
    do_break(2147944720);
L_80070914:
    // 0x80070914: mflo        $t7
    ctx->r15 = lo;
    // 0x80070918: sh          $t7, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r15;
    // 0x8007091C: lh          $t8, 0x6($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X6);
    // 0x80070920: lh          $t7, 0xE($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE);
    // 0x80070924: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x80070928: div         $zero, $t0, $a2
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r6)));
    // 0x8007092C: bne         $a2, $zero, L_80070938
    if (ctx->r6 != 0) {
        // 0x80070930: nop
    
            goto L_80070938;
    }
    // 0x80070930: nop

    // 0x80070934: break       7
    do_break(2147944756);
L_80070938:
    // 0x80070938: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007093C: bne         $a2, $at, L_80070950
    if (ctx->r6 != ctx->r1) {
        // 0x80070940: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80070950;
    }
    // 0x80070940: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80070944: bne         $t0, $at, L_80070950
    if (ctx->r8 != ctx->r1) {
        // 0x80070948: nop
    
            goto L_80070950;
    }
    // 0x80070948: nop

    // 0x8007094C: break       6
    do_break(2147944780);
L_80070950:
    // 0x80070950: mflo        $t1
    ctx->r9 = lo;
    // 0x80070954: sh          $t1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r9;
    // 0x80070958: lh          $t2, 0x8($a1)
    ctx->r10 = MEM_H(ctx->r5, 0X8);
    // 0x8007095C: nop

    // 0x80070960: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x80070964: div         $zero, $t4, $a2
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r6)));
    // 0x80070968: bne         $a2, $zero, L_80070974
    if (ctx->r6 != 0) {
        // 0x8007096C: nop
    
            goto L_80070974;
    }
    // 0x8007096C: nop

    // 0x80070970: break       7
    do_break(2147944816);
L_80070974:
    // 0x80070974: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80070978: bne         $a2, $at, L_8007098C
    if (ctx->r6 != ctx->r1) {
        // 0x8007097C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8007098C;
    }
    // 0x8007097C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80070980: bne         $t4, $at, L_8007098C
    if (ctx->r12 != ctx->r1) {
        // 0x80070984: nop
    
            goto L_8007098C;
    }
    // 0x80070984: nop

    // 0x80070988: break       6
    do_break(2147944840);
L_8007098C:
    // 0x8007098C: mflo        $t5
    ctx->r13 = lo;
    // 0x80070990: sh          $t5, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r13;
    // 0x80070994: lh          $t6, 0xA($a1)
    ctx->r14 = MEM_H(ctx->r5, 0XA);
    // 0x80070998: sb          $a2, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r6;
    // 0x8007099C: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x800709A0: div         $zero, $t8, $a2
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r6)));
    // 0x800709A4: bne         $a2, $zero, L_800709B0
    if (ctx->r6 != 0) {
        // 0x800709A8: nop
    
            goto L_800709B0;
    }
    // 0x800709A8: nop

    // 0x800709AC: break       7
    do_break(2147944876);
L_800709B0:
    // 0x800709B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800709B4: bne         $a2, $at, L_800709C8
    if (ctx->r6 != ctx->r1) {
        // 0x800709B8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800709C8;
    }
    // 0x800709B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800709BC: bne         $t8, $at, L_800709C8
    if (ctx->r24 != ctx->r1) {
        // 0x800709C0: nop
    
            goto L_800709C8;
    }
    // 0x800709C0: nop

    // 0x800709C4: break       6
    do_break(2147944900);
L_800709C8:
    // 0x800709C8: mflo        $t9
    ctx->r25 = lo;
    // 0x800709CC: sh          $t9, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r25;
    // 0x800709D0: jr          $ra
    // 0x800709D4: nop

    return;
    // 0x800709D4: nop

;}
RECOMP_FUNC void func_800709D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800709D8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x800709DC: sb          $a1, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = ctx->r5;
    // 0x800709E0: sb          $a1, 0x1E($a0)
    MEM_B(0X1E, ctx->r4) = ctx->r5;
    // 0x800709E4: jr          $ra
    // 0x800709E8: sb          $zero, 0x1D($a0)
    MEM_B(0X1D, ctx->r4) = 0;
    return;
    // 0x800709E8: sb          $zero, 0x1D($a0)
    MEM_B(0X1D, ctx->r4) = 0;
;}
RECOMP_FUNC void func_800709EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800709EC: lbu         $t6, 0x1C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1C);
    // 0x800709F0: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x800709F4: subu        $t7, $a1, $t6
    ctx->r15 = SUB32(ctx->r5, ctx->r14);
    // 0x800709F8: div         $zero, $t7, $a2
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r6)));
    // 0x800709FC: sb          $a1, 0x1E($a0)
    MEM_B(0X1E, ctx->r4) = ctx->r5;
    // 0x80070A00: bne         $a2, $zero, L_80070A0C
    if (ctx->r6 != 0) {
        // 0x80070A04: nop
    
            goto L_80070A0C;
    }
    // 0x80070A04: nop

    // 0x80070A08: break       7
    do_break(2147944968);
L_80070A0C:
    // 0x80070A0C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80070A10: bne         $a2, $at, L_80070A24
    if (ctx->r6 != ctx->r1) {
        // 0x80070A14: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80070A24;
    }
    // 0x80070A14: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80070A18: bne         $t7, $at, L_80070A24
    if (ctx->r15 != ctx->r1) {
        // 0x80070A1C: nop
    
            goto L_80070A24;
    }
    // 0x80070A1C: nop

    // 0x80070A20: break       6
    do_break(2147944992);
L_80070A24:
    // 0x80070A24: mflo        $t8
    ctx->r24 = lo;
    // 0x80070A28: sb          $t8, 0x1D($a0)
    MEM_B(0X1D, ctx->r4) = ctx->r24;
    // 0x80070A2C: jr          $ra
    // 0x80070A30: nop

    return;
    // 0x80070A30: nop

;}
RECOMP_FUNC void func_80070A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070A34: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80070A38: lw          $a0, -0x3F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3F0);
    // 0x80070A3C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80070A40: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x80070A44: nop

    // 0x80070A48: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x80070A4C: beq         $t7, $zero, L_80070A68
    if (ctx->r15 == 0) {
        // 0x80070A50: nop
    
            goto L_80070A68;
    }
    // 0x80070A50: nop

    // 0x80070A54: lwl         $at, 0x16($a0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r4, 0X16);
    // 0x80070A58: lwr         $at, 0x19($a0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r4, 0X19);
    // 0x80070A5C: nop

    // 0x80070A60: swl         $at, 0xE($a0)
    do_swl(rdram, 0XE, ctx->r4, ctx->r1);
    // 0x80070A64: swr         $at, 0x11($a0)
    do_swr(rdram, 0X11, ctx->r4, ctx->r1);
L_80070A68:
    // 0x80070A68: lbu         $t0, 0x0($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X0);
    // 0x80070A6C: nop

    // 0x80070A70: andi        $t1, $t0, 0xD
    ctx->r9 = ctx->r8 & 0XD;
    // 0x80070A74: beq         $t1, $zero, L_80070AD8
    if (ctx->r9 == 0) {
        // 0x80070A78: nop
    
            goto L_80070AD8;
    }
    // 0x80070A78: nop

    // 0x80070A7C: lh          $t2, 0xE($a0)
    ctx->r10 = MEM_H(ctx->r4, 0XE);
    // 0x80070A80: lhu         $t3, 0x2($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X2);
    // 0x80070A84: lh          $t1, 0x10($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X10);
    // 0x80070A88: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80070A8C: lhu         $t2, 0x2($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X2);
    // 0x80070A90: lh          $t6, 0x1A($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X1A);
    // 0x80070A94: lhu         $t8, 0x2($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X2);
    // 0x80070A98: nop

    // 0x80070A9C: sra         $t9, $t8, 7
    ctx->r25 = S32(SIGNED(ctx->r24) >> 7);
    // 0x80070AA0: lhu         $t8, 0x2($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X2);
    // 0x80070AA4: mflo        $t4
    ctx->r12 = lo;
    // 0x80070AA8: sra         $t5, $t4, 14
    ctx->r13 = S32(SIGNED(ctx->r12) >> 14);
    // 0x80070AAC: addu        $t7, $t6, $t5
    ctx->r15 = ADD32(ctx->r14, ctx->r13);
    // 0x80070AB0: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80070AB4: lh          $t6, 0x1C($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X1C);
    // 0x80070AB8: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80070ABC: sra         $t7, $t8, 7
    ctx->r15 = S32(SIGNED(ctx->r24) >> 7);
    // 0x80070AC0: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
    // 0x80070AC4: mflo        $t3
    ctx->r11 = lo;
    // 0x80070AC8: sra         $t4, $t3, 14
    ctx->r12 = S32(SIGNED(ctx->r11) >> 14);
    // 0x80070ACC: addu        $t5, $t6, $t4
    ctx->r13 = ADD32(ctx->r14, ctx->r12);
    // 0x80070AD0: addu        $t9, $t5, $t7
    ctx->r25 = ADD32(ctx->r13, ctx->r15);
    // 0x80070AD4: sh          $t9, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r25;
L_80070AD8:
    // 0x80070AD8: lbu         $t0, 0x0($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X0);
    // 0x80070ADC: nop

    // 0x80070AE0: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80070AE4: beq         $t1, $zero, L_80070BB8
    if (ctx->r9 == 0) {
        // 0x80070AE8: nop
    
            goto L_80070BB8;
    }
    // 0x80070AE8: nop

    // 0x80070AEC: lhu         $t2, 0x2($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X2);
    // 0x80070AF0: lui         $at, 0x4B80
    ctx->r1 = S32(0X4B80 << 16);
    // 0x80070AF4: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80070AF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80070AFC: bgez        $t2, L_80070B14
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80070B00: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80070B14;
    }
    // 0x80070B00: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80070B04: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80070B08: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80070B0C: nop

    // 0x80070B10: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80070B14:
    // 0x80070B14: nop

    // 0x80070B18: div.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80070B1C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80070B20: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80070B24: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80070B28: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80070B2C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80070B30: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80070B34: nop

    // 0x80070B38: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80070B3C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80070B40: nop

    // 0x80070B44: andi        $at, $t6, 0x4
    ctx->r1 = ctx->r14 & 0X4;
    // 0x80070B48: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80070B4C: beq         $t6, $zero, L_80070B9C
    if (ctx->r14 == 0) {
        // 0x80070B50: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_80070B9C;
    }
    // 0x80070B50: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80070B54: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80070B58: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80070B5C: sub.s       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80070B60: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80070B64: nop

    // 0x80070B68: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80070B6C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80070B70: nop

    // 0x80070B74: andi        $at, $t6, 0x4
    ctx->r1 = ctx->r14 & 0X4;
    // 0x80070B78: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80070B7C: bne         $t6, $zero, L_80070B94
    if (ctx->r14 != 0) {
        // 0x80070B80: nop
    
            goto L_80070B94;
    }
    // 0x80070B80: nop

    // 0x80070B84: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x80070B88: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80070B8C: b           L_80070BAC
    // 0x80070B90: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_80070BAC;
    // 0x80070B90: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_80070B94:
    // 0x80070B94: b           L_80070BAC
    // 0x80070B98: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_80070BAC;
    // 0x80070B98: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
L_80070B9C:
    // 0x80070B9C: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x80070BA0: nop

    // 0x80070BA4: bltz        $t6, L_80070B94
    if (SIGNED(ctx->r14) < 0) {
        // 0x80070BA8: nop
    
            goto L_80070B94;
    }
    // 0x80070BA8: nop

L_80070BAC:
    // 0x80070BAC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80070BB0: sh          $t6, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r14;
    // 0x80070BB4: nop

L_80070BB8:
    // 0x80070BB8: lbu         $t4, 0x0($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X0);
    // 0x80070BBC: nop

    // 0x80070BC0: andi        $t8, $t4, 0x3
    ctx->r24 = ctx->r12 & 0X3;
    // 0x80070BC4: beq         $t8, $zero, L_80070C34
    if (ctx->r24 == 0) {
        // 0x80070BC8: nop
    
            goto L_80070C34;
    }
    // 0x80070BC8: nop

    // 0x80070BCC: lhu         $t5, 0x2($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X2);
    // 0x80070BD0: lhu         $t7, 0x6($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X6);
    // 0x80070BD4: lui         $t2, 0x20
    ctx->r10 = S32(0X20 << 16);
    // 0x80070BD8: multu       $t5, $t7
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80070BDC: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x80070BE0: lhu         $t0, 0x6($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X6);
    // 0x80070BE4: nop

    // 0x80070BE8: sra         $t1, $t0, 1
    ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
    // 0x80070BEC: sh          $t1, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r9;
    // 0x80070BF0: mflo        $a1
    ctx->r5 = lo;
    // 0x80070BF4: srl         $t9, $a1, 8
    ctx->r25 = S32(U32(ctx->r5) >> 8);
    // 0x80070BF8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80070BFC: divu        $zero, $t2, $a1
    lo = S32(U32(ctx->r10) / U32(ctx->r5)); hi = S32(U32(ctx->r10) % U32(ctx->r5));
    // 0x80070C00: bne         $a1, $zero, L_80070C0C
    if (ctx->r5 != 0) {
        // 0x80070C04: nop
    
            goto L_80070C0C;
    }
    // 0x80070C04: nop

    // 0x80070C08: break       7
    do_break(2147945480);
L_80070C0C:
    // 0x80070C0C: mflo        $t3
    ctx->r11 = lo;
    // 0x80070C10: sh          $t3, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r11;
    // 0x80070C14: nop

    // 0x80070C18: divu        $zero, $t6, $a1
    lo = S32(U32(ctx->r14) / U32(ctx->r5)); hi = S32(U32(ctx->r14) % U32(ctx->r5));
    // 0x80070C1C: bne         $a1, $zero, L_80070C28
    if (ctx->r5 != 0) {
        // 0x80070C20: nop
    
            goto L_80070C28;
    }
    // 0x80070C20: nop

    // 0x80070C24: break       7
    do_break(2147945508);
L_80070C28:
    // 0x80070C28: mflo        $t4
    ctx->r12 = lo;
    // 0x80070C2C: sh          $t4, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r12;
    // 0x80070C30: nop

L_80070C34:
    // 0x80070C34: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80070C38: jr          $ra
    // 0x80070C3C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80070C3C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
