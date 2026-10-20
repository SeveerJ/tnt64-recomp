#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8005FAB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FAB8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005FABC: lw          $a0, -0xDA0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XDA0);
    // 0x8005FAC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005FAC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005FAC8: jal         0x800B7A58
    // 0x8005FACC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    guMtxIdent(rdram, ctx);
        goto after_0;
    // 0x8005FACC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x8005FAD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005FAD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005FAD8: jr          $ra
    // 0x8005FADC: nop

    return;
    // 0x8005FADC: nop

;}
RECOMP_FUNC void func_8005FAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FAE0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8005FAE4: lbu         $a1, -0x10E0($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X10E0);
    // 0x8005FAE8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005FAEC: lw          $a0, -0xDA0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XDA0);
    // 0x8005FAF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005FAF4: beq         $a1, $at, L_8005FB20
    if (ctx->r5 == ctx->r1) {
        // 0x8005FAF8: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8005FB20;
    }
    // 0x8005FAF8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8005FAFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005FB00: beq         $a1, $at, L_8005FB34
    if (ctx->r5 == ctx->r1) {
        // 0x8005FB04: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8005FB34;
    }
    // 0x8005FB04: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005FB08: beq         $a1, $at, L_8005FB80
    if (ctx->r5 == ctx->r1) {
        // 0x8005FB0C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8005FB80;
    }
    // 0x8005FB0C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8005FB10: beq         $a1, $at, L_8005FBE8
    if (ctx->r5 == ctx->r1) {
        // 0x8005FB14: nop
    
            goto L_8005FBE8;
    }
    // 0x8005FB14: nop

    // 0x8005FB18: b           L_8005FC68
    // 0x8005FB1C: nop

        goto L_8005FC68;
    // 0x8005FB1C: nop

L_8005FB20:
    // 0x8005FB20: addiu       $t6, $zero, 0x14C
    ctx->r14 = ADD32(0, 0X14C);
    // 0x8005FB24: addiu       $t7, $zero, 0x90
    ctx->r15 = ADD32(0, 0X90);
    // 0x8005FB28: sh          $t7, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = ctx->r15;
    // 0x8005FB2C: b           L_8005FC68
    // 0x8005FB30: sh          $t6, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r14;
        goto L_8005FC68;
    // 0x8005FB30: sh          $t6, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r14;
L_8005FB34:
    // 0x8005FB34: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8005FB38: lbu         $a1, -0x10DF($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X10DF);
    // 0x8005FB3C: nop

    // 0x8005FB40: beq         $a1, $zero, L_8005FB58
    if (ctx->r5 == 0) {
        // 0x8005FB44: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8005FB58;
    }
    // 0x8005FB44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005FB48: beq         $a1, $at, L_8005FB6C
    if (ctx->r5 == ctx->r1) {
        // 0x8005FB4C: nop
    
            goto L_8005FB6C;
    }
    // 0x8005FB4C: nop

    // 0x8005FB50: b           L_8005FC68
    // 0x8005FB54: nop

        goto L_8005FC68;
    // 0x8005FB54: nop

L_8005FB58:
    // 0x8005FB58: addiu       $t8, $zero, 0xE4
    ctx->r24 = ADD32(0, 0XE4);
    // 0x8005FB5C: addiu       $t9, $zero, 0xAC
    ctx->r25 = ADD32(0, 0XAC);
    // 0x8005FB60: sh          $t9, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = ctx->r25;
    // 0x8005FB64: b           L_8005FC68
    // 0x8005FB68: sh          $t8, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r24;
        goto L_8005FC68;
    // 0x8005FB68: sh          $t8, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r24;
L_8005FB6C:
    // 0x8005FB6C: addiu       $t0, $zero, 0x3DC
    ctx->r8 = ADD32(0, 0X3DC);
    // 0x8005FB70: addiu       $t1, $zero, 0xAC
    ctx->r9 = ADD32(0, 0XAC);
    // 0x8005FB74: sh          $t1, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = ctx->r9;
    // 0x8005FB78: b           L_8005FC68
    // 0x8005FB7C: sh          $t0, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r8;
        goto L_8005FC68;
    // 0x8005FB7C: sh          $t0, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r8;
L_8005FB80:
    // 0x8005FB80: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8005FB84: lbu         $a1, -0x10DF($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X10DF);
    // 0x8005FB88: nop

    // 0x8005FB8C: beq         $a1, $zero, L_8005FBAC
    if (ctx->r5 == 0) {
        // 0x8005FB90: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8005FBAC;
    }
    // 0x8005FB90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005FB94: beq         $a1, $at, L_8005FBC0
    if (ctx->r5 == ctx->r1) {
        // 0x8005FB98: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8005FBC0;
    }
    // 0x8005FB98: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005FB9C: beq         $a1, $at, L_8005FBD4
    if (ctx->r5 == ctx->r1) {
        // 0x8005FBA0: nop
    
            goto L_8005FBD4;
    }
    // 0x8005FBA0: nop

    // 0x8005FBA4: b           L_8005FC68
    // 0x8005FBA8: nop

        goto L_8005FC68;
    // 0x8005FBA8: nop

L_8005FBAC:
    // 0x8005FBAC: addiu       $t2, $zero, 0x88
    ctx->r10 = ADD32(0, 0X88);
    // 0x8005FBB0: addiu       $t3, $zero, 0x110
    ctx->r11 = ADD32(0, 0X110);
    // 0x8005FBB4: sh          $t3, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = ctx->r11;
    // 0x8005FBB8: b           L_8005FC68
    // 0x8005FBBC: sh          $t2, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r10;
        goto L_8005FC68;
    // 0x8005FBBC: sh          $t2, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r10;
L_8005FBC0:
    // 0x8005FBC0: addiu       $t4, $zero, 0x1D8
    ctx->r12 = ADD32(0, 0X1D8);
    // 0x8005FBC4: addiu       $t5, $zero, 0x110
    ctx->r13 = ADD32(0, 0X110);
    // 0x8005FBC8: sh          $t5, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = ctx->r13;
    // 0x8005FBCC: b           L_8005FC68
    // 0x8005FBD0: sh          $t4, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r12;
        goto L_8005FC68;
    // 0x8005FBD0: sh          $t4, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r12;
L_8005FBD4:
    // 0x8005FBD4: addiu       $t6, $zero, 0x328
    ctx->r14 = ADD32(0, 0X328);
    // 0x8005FBD8: addiu       $t7, $zero, 0x110
    ctx->r15 = ADD32(0, 0X110);
    // 0x8005FBDC: sh          $t7, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = ctx->r15;
    // 0x8005FBE0: b           L_8005FC68
    // 0x8005FBE4: sh          $t6, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r14;
        goto L_8005FC68;
    // 0x8005FBE4: sh          $t6, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r14;
L_8005FBE8:
    // 0x8005FBE8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8005FBEC: lbu         $a1, -0x10DF($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X10DF);
    // 0x8005FBF0: nop

    // 0x8005FBF4: beq         $a1, $zero, L_8005FC1C
    if (ctx->r5 == 0) {
        // 0x8005FBF8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8005FC1C;
    }
    // 0x8005FBF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005FBFC: beq         $a1, $at, L_8005FC30
    if (ctx->r5 == ctx->r1) {
        // 0x8005FC00: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8005FC30;
    }
    // 0x8005FC00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005FC04: beq         $a1, $at, L_8005FC44
    if (ctx->r5 == ctx->r1) {
        // 0x8005FC08: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8005FC44;
    }
    // 0x8005FC08: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005FC0C: beq         $a1, $at, L_8005FC58
    if (ctx->r5 == ctx->r1) {
        // 0x8005FC10: nop
    
            goto L_8005FC58;
    }
    // 0x8005FC10: nop

    // 0x8005FC14: b           L_8005FC68
    // 0x8005FC18: nop

        goto L_8005FC68;
    // 0x8005FC18: nop

L_8005FC1C:
    // 0x8005FC1C: addiu       $t8, $zero, 0x88
    ctx->r24 = ADD32(0, 0X88);
    // 0x8005FC20: addiu       $t9, $zero, 0x110
    ctx->r25 = ADD32(0, 0X110);
    // 0x8005FC24: sh          $t9, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = ctx->r25;
    // 0x8005FC28: b           L_8005FC68
    // 0x8005FC2C: sh          $t8, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r24;
        goto L_8005FC68;
    // 0x8005FC2C: sh          $t8, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r24;
L_8005FC30:
    // 0x8005FC30: addiu       $t0, $zero, 0x1D8
    ctx->r8 = ADD32(0, 0X1D8);
    // 0x8005FC34: addiu       $t1, $zero, 0x110
    ctx->r9 = ADD32(0, 0X110);
    // 0x8005FC38: sh          $t1, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = ctx->r9;
    // 0x8005FC3C: b           L_8005FC68
    // 0x8005FC40: sh          $t0, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r8;
        goto L_8005FC68;
    // 0x8005FC40: sh          $t0, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r8;
L_8005FC44:
    // 0x8005FC44: addiu       $t2, $zero, 0x328
    ctx->r10 = ADD32(0, 0X328);
    // 0x8005FC48: addiu       $t3, $zero, 0x110
    ctx->r11 = ADD32(0, 0X110);
    // 0x8005FC4C: sh          $t3, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = ctx->r11;
    // 0x8005FC50: b           L_8005FC68
    // 0x8005FC54: sh          $t2, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r10;
        goto L_8005FC68;
    // 0x8005FC54: sh          $t2, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r10;
L_8005FC58:
    // 0x8005FC58: addiu       $t4, $zero, 0x478
    ctx->r12 = ADD32(0, 0X478);
    // 0x8005FC5C: addiu       $t5, $zero, 0x110
    ctx->r13 = ADD32(0, 0X110);
    // 0x8005FC60: sh          $t5, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = ctx->r13;
    // 0x8005FC64: sh          $t4, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r12;
L_8005FC68:
    // 0x8005FC68: jr          $ra
    // 0x8005FC6C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8005FC6C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8005FC70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FC70: jr          $ra
    // 0x8005FC74: nop

    return;
    // 0x8005FC74: nop

;}
RECOMP_FUNC void func_8005FC78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FC78: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005FC7C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8005FC80: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8005FC84: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8005FC88: lw          $s0, -0xDA0($s0)
    ctx->r16 = MEM_W(ctx->r16, -0XDA0);
    // 0x8005FC8C: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x8005FC90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005FC94: lw          $s1, 0x20C0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X20C0);
    // 0x8005FC98: jal         0x800B7A58
    // 0x8005FC9C: addiu       $a0, $s0, 0x50
    ctx->r4 = ADD32(ctx->r16, 0X50);
    guMtxIdent(rdram, ctx);
        goto after_0;
    // 0x8005FC9C: addiu       $a0, $s0, 0x50
    ctx->r4 = ADD32(ctx->r16, 0X50);
    after_0:
    // 0x8005FCA0: jal         0x800B7A58
    // 0x8005FCA4: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    guMtxIdent(rdram, ctx);
        goto after_1;
    // 0x8005FCA4: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    after_1:
    // 0x8005FCA8: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x8005FCAC: sh          $t6, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r14;
    // 0x8005FCB0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8005FCB4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8005FCB8: lui         $t7, 0xDA38
    ctx->r15 = S32(0XDA38 << 16);
    // 0x8005FCBC: ori         $t7, $t7, 0x7
    ctx->r15 = ctx->r15 | 0X7;
    // 0x8005FCC0: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005FCC4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8005FCC8: addiu       $t9, $s0, 0x50
    ctx->r25 = ADD32(ctx->r16, 0X50);
    // 0x8005FCCC: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8005FCD0: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8005FCD4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8005FCD8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8005FCDC: lui         $t1, 0xDB0E
    ctx->r9 = S32(0XDB0E << 16);
    // 0x8005FCE0: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8005FCE4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8005FCE8: lhu         $t3, 0x90($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X90);
    // 0x8005FCEC: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8005FCF0: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8005FCF4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8005FCF8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8005FCFC: lui         $t5, 0xDA38
    ctx->r13 = S32(0XDA38 << 16);
    // 0x8005FD00: ori         $t5, $t5, 0x3
    ctx->r13 = ctx->r13 | 0X3;
    // 0x8005FD04: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8005FD08: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8005FD0C: addiu       $t7, $s0, 0x10
    ctx->r15 = ADD32(ctx->r16, 0X10);
    // 0x8005FD10: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8005FD14: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8005FD18: lw          $t9, -0x2A0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2A0);
    // 0x8005FD1C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8005FD20: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8005FD24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8005FD28: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005FD2C: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8005FD30: lw          $t5, -0x29C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X29C);
    // 0x8005FD34: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8005FD38: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8005FD3C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8005FD40: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8005FD44: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8005FD48: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8005FD4C: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8005FD50: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005FD54: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005FD58: lui         $at, 0xED00
    ctx->r1 = S32(0XED00 << 16);
    // 0x8005FD5C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8005FD60: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8005FD64: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8005FD68: andi        $t2, $t1, 0xFFF
    ctx->r10 = ctx->r9 & 0XFFF;
    // 0x8005FD6C: sll         $t3, $t2, 12
    ctx->r11 = S32(ctx->r10 << 12);
    // 0x8005FD70: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x8005FD74: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8005FD78: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8005FD7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8005FD80: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8005FD84: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8005FD88: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8005FD8C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8005FD90: nop

    // 0x8005FD94: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8005FD98: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005FD9C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005FDA0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8005FDA4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8005FDA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8005FDAC: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8005FDB0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8005FDB4: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8005FDB8: or          $t9, $t4, $t8
    ctx->r25 = ctx->r12 | ctx->r24;
    // 0x8005FDBC: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8005FDC0: lw          $t1, -0x298($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X298);
    // 0x8005FDC4: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8005FDC8: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8005FDCC: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8005FDD0: lw          $t4, -0x294($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X294);
    // 0x8005FDD4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8005FDD8: addiu       $t8, $t4, -0x1
    ctx->r24 = ADD32(ctx->r12, -0X1);
    // 0x8005FDDC: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8005FDE0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8005FDE4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8005FDE8: nop

    // 0x8005FDEC: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8005FDF0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005FDF4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005FDF8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8005FDFC: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8005FE00: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8005FE04: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8005FE08: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8005FE0C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8005FE10: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x8005FE14: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8005FE18: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8005FE1C: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8005FE20: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8005FE24: nop

    // 0x8005FE28: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8005FE2C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005FE30: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005FE34: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005FE38: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8005FE3C: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x8005FE40: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8005FE44: andi        $t1, $t0, 0xFFF
    ctx->r9 = ctx->r8 & 0XFFF;
    // 0x8005FE48: or          $t2, $t7, $t1
    ctx->r10 = ctx->r15 | ctx->r9;
    // 0x8005FE4C: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8005FE50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005FE54: sw          $s1, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r17;
    // 0x8005FE58: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8005FE5C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8005FE60: jr          $ra
    // 0x8005FE64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8005FE64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8005FE68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FE68: lh          $t6, 0xB0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0XB0);
    // 0x8005FE6C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8005FE70: sra         $t7, $t6, 2
    ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
    // 0x8005FE74: sh          $t7, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r15;
    // 0x8005FE78: lh          $t8, 0xB2($a1)
    ctx->r24 = MEM_H(ctx->r5, 0XB2);
    // 0x8005FE7C: addiu       $t0, $sp, 0x4
    ctx->r8 = ADD32(ctx->r29, 0X4);
    // 0x8005FE80: sra         $t9, $t8, 2
    ctx->r25 = S32(SIGNED(ctx->r24) >> 2);
    // 0x8005FE84: sh          $t9, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r25;
    // 0x8005FE88: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8005FE8C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8005FE90: swl         $at, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, ctx->r1);
    // 0x8005FE94: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8005FE98: jr          $ra
    // 0x8005FE9C: swr         $at, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r1);
    return;
    // 0x8005FE9C: swr         $at, 0x3($a0)
    do_swr(rdram, 0X3, ctx->r4, ctx->r1);
;}
RECOMP_FUNC void func_8005FEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FEA0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8005FEA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005FEA8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8005FEAC: jal         0x80070C40
    // 0x8005FEB0: addiu       $a0, $zero, 0xB00
    ctx->r4 = ADD32(0, 0XB00);
    func_80070C40(rdram, ctx);
        goto after_0;
    // 0x8005FEB0: addiu       $a0, $zero, 0xB00
    ctx->r4 = ADD32(0, 0XB00);
    after_0:
    // 0x8005FEB4: addiu       $a0, $zero, 0x500
    ctx->r4 = ADD32(0, 0X500);
    // 0x8005FEB8: jal         0x80070C70
    // 0x8005FEBC: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    func_80070C70(rdram, ctx);
        goto after_1;
    // 0x8005FEBC: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    after_1:
    // 0x8005FEC0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005FEC4: lw          $t6, -0xDA0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XDA0);
    // 0x8005FEC8: nop

    // 0x8005FECC: lh          $a0, 0xB0($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XB0);
    // 0x8005FED0: lh          $a1, 0xB2($t6)
    ctx->r5 = MEM_H(ctx->r14, 0XB2);
    // 0x8005FED4: jal         0x80070CB8
    // 0x8005FED8: nop

    func_80070CB8(rdram, ctx);
        goto after_2;
    // 0x8005FED8: nop

    after_2:
    // 0x8005FEDC: jal         0x80070A34
    // 0x8005FEE0: nop

    func_80070A34(rdram, ctx);
        goto after_3;
    // 0x8005FEE0: nop

    after_3:
    // 0x8005FEE4: lbu         $t8, 0x43($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X43);
    // 0x8005FEE8: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8005FEEC: addiu       $t0, $t0, 0x1A0
    ctx->r8 = ADD32(ctx->r8, 0X1A0);
    // 0x8005FEF0: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8005FEF4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8005FEF8: lwl         $at, 0x0($t1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r9, 0X0);
    // 0x8005FEFC: lwr         $at, 0x3($t1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r9, 0X3);
    // 0x8005FF00: addiu       $t7, $sp, 0x1C
    ctx->r15 = ADD32(ctx->r29, 0X1C);
    // 0x8005FF04: swl         $at, 0x0($t7)
    do_swl(rdram, 0X0, ctx->r15, ctx->r1);
    // 0x8005FF08: swr         $at, 0x3($t7)
    do_swr(rdram, 0X3, ctx->r15, ctx->r1);
    // 0x8005FF0C: lbu         $t5, 0x43($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X43);
    // 0x8005FF10: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8005FF14: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x8005FF18: addiu       $t8, $t6, 0x4
    ctx->r24 = ADD32(ctx->r14, 0X4);
    // 0x8005FF1C: addiu       $t9, $t9, 0x1A0
    ctx->r25 = ADD32(ctx->r25, 0X1A0);
    // 0x8005FF20: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8005FF24: lwl         $at, 0x0($t0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r8, 0X0);
    // 0x8005FF28: lwr         $at, 0x3($t0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r8, 0X3);
    // 0x8005FF2C: addiu       $t4, $sp, 0x1C
    ctx->r12 = ADD32(ctx->r29, 0X1C);
    // 0x8005FF30: swl         $at, 0x8($t4)
    do_swl(rdram, 0X8, ctx->r12, ctx->r1);
    // 0x8005FF34: addiu       $t1, $sp, 0x1C
    ctx->r9 = ADD32(ctx->r29, 0X1C);
    // 0x8005FF38: swr         $at, 0xB($t4)
    do_swr(rdram, 0XB, ctx->r12, ctx->r1);
    // 0x8005FF3C: lh          $t5, 0x0($t1)
    ctx->r13 = MEM_H(ctx->r9, 0X0);
    // 0x8005FF40: lh          $t3, 0x8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X8);
    // 0x8005FF44: addiu       $t9, $sp, 0x1C
    ctx->r25 = ADD32(ctx->r29, 0X1C);
    // 0x8005FF48: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8005FF4C: sra         $t8, $t6, 1
    ctx->r24 = S32(SIGNED(ctx->r14) >> 1);
    // 0x8005FF50: sh          $t8, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r24;
    // 0x8005FF54: lh          $t4, 0x2($t9)
    ctx->r12 = MEM_H(ctx->r25, 0X2);
    // 0x8005FF58: lh          $t2, 0xA($t9)
    ctx->r10 = MEM_H(ctx->r25, 0XA);
    // 0x8005FF5C: addiu       $t3, $sp, 0x1C
    ctx->r11 = ADD32(ctx->r29, 0X1C);
    // 0x8005FF60: addu        $t0, $t2, $t4
    ctx->r8 = ADD32(ctx->r10, ctx->r12);
    // 0x8005FF64: sra         $t7, $t0, 1
    ctx->r15 = S32(SIGNED(ctx->r8) >> 1);
    // 0x8005FF68: sh          $t7, 0x6($t9)
    MEM_H(0X6, ctx->r25) = ctx->r15;
    // 0x8005FF6C: lh          $a2, 0x2($t3)
    ctx->r6 = MEM_H(ctx->r11, 0X2);
    // 0x8005FF70: lh          $a1, 0x0($t3)
    ctx->r5 = MEM_H(ctx->r11, 0X0);
    // 0x8005FF74: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x8005FF78: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x8005FF7C: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x8005FF80: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8005FF84: jal         0x8007104C
    // 0x8005FF88: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_8007104C(rdram, ctx);
        goto after_4;
    // 0x8005FF88: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x8005FF8C: addiu       $t8, $sp, 0x1C
    ctx->r24 = ADD32(ctx->r29, 0X1C);
    // 0x8005FF90: lh          $a1, 0x4($t8)
    ctx->r5 = MEM_H(ctx->r24, 0X4);
    // 0x8005FF94: lh          $a2, 0x6($t8)
    ctx->r6 = MEM_H(ctx->r24, 0X6);
    // 0x8005FF98: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8005FF9C: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x8005FFA0: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x8005FFA4: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x8005FFA8: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8005FFAC: jal         0x8007104C
    // 0x8005FFB0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_8007104C(rdram, ctx);
        goto after_5;
    // 0x8005FFB0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_5:
    // 0x8005FFB4: addiu       $t4, $sp, 0x1C
    ctx->r12 = ADD32(ctx->r29, 0X1C);
    // 0x8005FFB8: lh          $a1, 0x8($t4)
    ctx->r5 = MEM_H(ctx->r12, 0X8);
    // 0x8005FFBC: lh          $a2, 0xA($t4)
    ctx->r6 = MEM_H(ctx->r12, 0XA);
    // 0x8005FFC0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8005FFC4: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x8005FFC8: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x8005FFCC: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8005FFD0: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8005FFD4: jal         0x8007104C
    // 0x8005FFD8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_8007104C(rdram, ctx);
        goto after_6;
    // 0x8005FFD8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_6:
    // 0x8005FFDC: addiu       $t9, $sp, 0x1C
    ctx->r25 = ADD32(ctx->r29, 0X1C);
    // 0x8005FFE0: lh          $a1, 0x8($t9)
    ctx->r5 = MEM_H(ctx->r25, 0X8);
    // 0x8005FFE4: lh          $a2, 0xA($t9)
    ctx->r6 = MEM_H(ctx->r25, 0XA);
    // 0x8005FFE8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8005FFEC: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x8005FFF0: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x8005FFF4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8005FFF8: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x8005FFFC: jal         0x8007104C
    // 0x80060000: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_8007104C(rdram, ctx);
        goto after_7;
    // 0x80060000: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_7:
    // 0x80060004: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80060008: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8006000C: addiu       $t8, $zero, 0xC0
    ctx->r24 = ADD32(0, 0XC0);
    // 0x80060010: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x80060014: sb          $t6, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r14;
    // 0x80060018: sb          $t1, 0x39($sp)
    MEM_B(0X39, ctx->r29) = ctx->r9;
    // 0x8006001C: sh          $t8, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r24;
    // 0x80060020: sh          $t2, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r10;
    // 0x80060024: jal         0x80068B7C
    // 0x80060028: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_80068B7C(rdram, ctx);
        goto after_8;
    // 0x80060028: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_8:
    // 0x8006002C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80060030: lw          $t4, -0x10F0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X10F0);
    // 0x80060034: addiu       $t0, $zero, 0x127
    ctx->r8 = ADD32(0, 0X127);
    // 0x80060038: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8006003C: sh          $t0, 0x14($t4)
    MEM_H(0X14, ctx->r12) = ctx->r8;
    // 0x80060040: lw          $t5, -0x10F0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X10F0);
    // 0x80060044: addiu       $t7, $zero, 0xB7
    ctx->r15 = ADD32(0, 0XB7);
    // 0x80060048: sh          $t7, 0x16($t5)
    MEM_H(0X16, ctx->r13) = ctx->r15;
    // 0x8006004C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80060050: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80060054: jr          $ra
    // 0x80060058: nop

    return;
    // 0x80060058: nop

;}
RECOMP_FUNC void func_8006005C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006005C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80060060: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80060064: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80060068: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006006C: jal         0x80070C40
    // 0x80060070: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    func_80070C40(rdram, ctx);
        goto after_0;
    // 0x80060070: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    after_0:
    // 0x80060074: addiu       $a0, $zero, 0x500
    ctx->r4 = ADD32(0, 0X500);
    // 0x80060078: jal         0x80070C70
    // 0x8006007C: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    func_80070C70(rdram, ctx);
        goto after_1;
    // 0x8006007C: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    after_1:
    // 0x80060080: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80060084: lw          $t6, -0xDA0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XDA0);
    // 0x80060088: nop

    // 0x8006008C: lh          $a0, 0xB0($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XB0);
    // 0x80060090: lh          $a1, 0xB2($t6)
    ctx->r5 = MEM_H(ctx->r14, 0XB2);
    // 0x80060094: jal         0x80070CB8
    // 0x80060098: nop

    func_80070CB8(rdram, ctx);
        goto after_2;
    // 0x80060098: nop

    after_2:
    // 0x8006009C: jal         0x80070A34
    // 0x800600A0: nop

    func_80070A34(rdram, ctx);
        goto after_3;
    // 0x800600A0: nop

    after_3:
    // 0x800600A4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800600A8: lbu         $t7, -0x10DF($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X10DF);
    // 0x800600AC: lbu         $t9, 0x53($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X53);
    // 0x800600B0: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800600B4: sll         $t1, $t7, 3
    ctx->r9 = S32(ctx->r15 << 3);
    // 0x800600B8: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x800600BC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800600C0: addiu       $t3, $t3, 0x1E0
    ctx->r11 = ADD32(ctx->r11, 0X1E0);
    // 0x800600C4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800600C8: sb          $t7, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r15;
    // 0x800600CC: lwl         $at, 0x0($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, 0X0);
    // 0x800600D0: lwr         $at, 0x3($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, 0X3);
    // 0x800600D4: addiu       $t8, $sp, 0x2C
    ctx->r24 = ADD32(ctx->r29, 0X2C);
    // 0x800600D8: swl         $at, 0x0($t8)
    do_swl(rdram, 0X0, ctx->r24, ctx->r1);
    // 0x800600DC: swr         $at, 0x3($t8)
    do_swr(rdram, 0X3, ctx->r24, ctx->r1);
    // 0x800600E0: lbu         $t2, 0x2B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X2B);
    // 0x800600E4: lbu         $t0, 0x53($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X53);
    // 0x800600E8: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x800600EC: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x800600F0: addu        $t6, $t1, $t3
    ctx->r14 = ADD32(ctx->r9, ctx->r11);
    // 0x800600F4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800600F8: addiu       $t8, $t8, 0x1E0
    ctx->r24 = ADD32(ctx->r24, 0X1E0);
    // 0x800600FC: addiu       $t5, $t6, 0x4
    ctx->r13 = ADD32(ctx->r14, 0X4);
    // 0x80060100: addu        $t4, $t5, $t8
    ctx->r12 = ADD32(ctx->r13, ctx->r24);
    // 0x80060104: lwl         $at, 0x0($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, 0X0);
    // 0x80060108: lwr         $at, 0x3($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, 0X3);
    // 0x8006010C: addiu       $t7, $sp, 0x2C
    ctx->r15 = ADD32(ctx->r29, 0X2C);
    // 0x80060110: swl         $at, 0x8($t7)
    do_swl(rdram, 0X8, ctx->r15, ctx->r1);
    // 0x80060114: addiu       $t1, $sp, 0x2C
    ctx->r9 = ADD32(ctx->r29, 0X2C);
    // 0x80060118: swr         $at, 0xB($t7)
    do_swr(rdram, 0XB, ctx->r15, ctx->r1);
    // 0x8006011C: lh          $t6, 0x0($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X0);
    // 0x80060120: lh          $t3, 0x8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X8);
    // 0x80060124: addiu       $t0, $sp, 0x2C
    ctx->r8 = ADD32(ctx->r29, 0X2C);
    // 0x80060128: addu        $t5, $t3, $t6
    ctx->r13 = ADD32(ctx->r11, ctx->r14);
    // 0x8006012C: sra         $t8, $t5, 1
    ctx->r24 = S32(SIGNED(ctx->r13) >> 1);
    // 0x80060130: sh          $t8, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r24;
    // 0x80060134: lh          $t7, 0x2($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X2);
    // 0x80060138: lh          $t9, 0xA($t0)
    ctx->r25 = MEM_H(ctx->r8, 0XA);
    // 0x8006013C: addiu       $t3, $sp, 0x2C
    ctx->r11 = ADD32(ctx->r29, 0X2C);
    // 0x80060140: addu        $t4, $t9, $t7
    ctx->r12 = ADD32(ctx->r25, ctx->r15);
    // 0x80060144: sra         $t2, $t4, 1
    ctx->r10 = S32(SIGNED(ctx->r12) >> 1);
    // 0x80060148: sh          $t2, 0x6($t0)
    MEM_H(0X6, ctx->r8) = ctx->r10;
    // 0x8006014C: lh          $a2, 0x2($t3)
    ctx->r6 = MEM_H(ctx->r11, 0X2);
    // 0x80060150: lh          $a1, 0x0($t3)
    ctx->r5 = MEM_H(ctx->r11, 0X0);
    // 0x80060154: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x80060158: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8006015C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80060160: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x80060164: jal         0x8007104C
    // 0x80060168: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_8007104C(rdram, ctx);
        goto after_4;
    // 0x80060168: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_4:
    // 0x8006016C: addiu       $t8, $sp, 0x2C
    ctx->r24 = ADD32(ctx->r29, 0X2C);
    // 0x80060170: lh          $a1, 0x4($t8)
    ctx->r5 = MEM_H(ctx->r24, 0X4);
    // 0x80060174: lh          $a2, 0x6($t8)
    ctx->r6 = MEM_H(ctx->r24, 0X6);
    // 0x80060178: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8006017C: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x80060180: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x80060184: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80060188: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8006018C: jal         0x8007104C
    // 0x80060190: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_8007104C(rdram, ctx);
        goto after_5;
    // 0x80060190: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_5:
    // 0x80060194: addiu       $t7, $sp, 0x2C
    ctx->r15 = ADD32(ctx->r29, 0X2C);
    // 0x80060198: lh          $a1, 0x8($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X8);
    // 0x8006019C: lh          $a2, 0xA($t7)
    ctx->r6 = MEM_H(ctx->r15, 0XA);
    // 0x800601A0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800601A4: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x800601A8: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x800601AC: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x800601B0: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x800601B4: jal         0x8007104C
    // 0x800601B8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_8007104C(rdram, ctx);
        goto after_6;
    // 0x800601B8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_6:
    // 0x800601BC: addiu       $t0, $sp, 0x2C
    ctx->r8 = ADD32(ctx->r29, 0X2C);
    // 0x800601C0: lh          $a1, 0x8($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X8);
    // 0x800601C4: lh          $a2, 0xA($t0)
    ctx->r6 = MEM_H(ctx->r8, 0XA);
    // 0x800601C8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800601CC: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x800601D0: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x800601D4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x800601D8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800601DC: jal         0x8007104C
    // 0x800601E0: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_8007104C(rdram, ctx);
        goto after_7;
    // 0x800601E0: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_7:
    // 0x800601E4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800601E8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800601EC: addiu       $t8, $zero, 0xC0
    ctx->r24 = ADD32(0, 0XC0);
    // 0x800601F0: addiu       $t9, $zero, 0xC0
    ctx->r25 = ADD32(0, 0XC0);
    // 0x800601F4: sb          $t5, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r13;
    // 0x800601F8: sb          $t1, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r9;
    // 0x800601FC: sh          $t8, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r24;
    // 0x80060200: sh          $t9, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r25;
    // 0x80060204: jal         0x80068B7C
    // 0x80060208: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_80068B7C(rdram, ctx);
        goto after_8;
    // 0x80060208: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_8:
    // 0x8006020C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80060210: lbu         $s0, -0x10DF($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X10DF);
    // 0x80060214: nop

    // 0x80060218: beq         $s0, $zero, L_80060230
    if (ctx->r16 == 0) {
        // 0x8006021C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80060230;
    }
    // 0x8006021C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80060220: beq         $s0, $at, L_80060254
    if (ctx->r16 == ctx->r1) {
        // 0x80060224: nop
    
            goto L_80060254;
    }
    // 0x80060224: nop

    // 0x80060228: b           L_80060274
    // 0x8006022C: nop

        goto L_80060274;
    // 0x8006022C: nop

L_80060230:
    // 0x80060230: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80060234: lw          $t7, -0x10F0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10F0);
    // 0x80060238: addiu       $t4, $zero, 0xA9
    ctx->r12 = ADD32(0, 0XA9);
    // 0x8006023C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80060240: sh          $t4, 0x14($t7)
    MEM_H(0X14, ctx->r15) = ctx->r12;
    // 0x80060244: lw          $t6, -0x10F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10F0);
    // 0x80060248: addiu       $t2, $zero, 0xBA
    ctx->r10 = ADD32(0, 0XBA);
    // 0x8006024C: b           L_80060274
    // 0x80060250: sh          $t2, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r10;
        goto L_80060274;
    // 0x80060250: sh          $t2, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r10;
L_80060254:
    // 0x80060254: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80060258: lw          $t3, -0x10F0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X10F0);
    // 0x8006025C: addiu       $t0, $zero, 0xA9
    ctx->r8 = ADD32(0, 0XA9);
    // 0x80060260: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80060264: sh          $t0, 0x14($t3)
    MEM_H(0X14, ctx->r11) = ctx->r8;
    // 0x80060268: lw          $t1, -0x10F0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X10F0);
    // 0x8006026C: addiu       $t5, $zero, 0xD9
    ctx->r13 = ADD32(0, 0XD9);
    // 0x80060270: sh          $t5, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r13;
L_80060274:
    // 0x80060274: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80060278: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006027C: jr          $ra
    // 0x80060280: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80060280: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80060284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060284: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80060288: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006028C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80060290: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80060294: jal         0x80070C40
    // 0x80060298: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    func_80070C40(rdram, ctx);
        goto after_0;
    // 0x80060298: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    after_0:
    // 0x8006029C: addiu       $a0, $zero, 0x500
    ctx->r4 = ADD32(0, 0X500);
    // 0x800602A0: jal         0x80070C70
    // 0x800602A4: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    func_80070C70(rdram, ctx);
        goto after_1;
    // 0x800602A4: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    after_1:
    // 0x800602A8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800602AC: lw          $t6, -0xDA0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XDA0);
    // 0x800602B0: nop

    // 0x800602B4: lh          $a0, 0xB0($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XB0);
    // 0x800602B8: lh          $a1, 0xB2($t6)
    ctx->r5 = MEM_H(ctx->r14, 0XB2);
    // 0x800602BC: jal         0x80070CB8
    // 0x800602C0: nop

    func_80070CB8(rdram, ctx);
        goto after_2;
    // 0x800602C0: nop

    after_2:
    // 0x800602C4: jal         0x80070A34
    // 0x800602C8: nop

    func_80070A34(rdram, ctx);
        goto after_3;
    // 0x800602C8: nop

    after_3:
    // 0x800602CC: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x800602D0: addiu       $t8, $sp, 0x28
    ctx->r24 = ADD32(ctx->r29, 0X28);
    // 0x800602D4: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x800602D8: addiu       $t9, $zero, -0x500
    ctx->r25 = ADD32(0, -0X500);
    // 0x800602DC: addiu       $t0, $sp, 0x28
    ctx->r8 = ADD32(ctx->r29, 0X28);
    // 0x800602E0: sh          $t9, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r25;
    // 0x800602E4: addiu       $t1, $zero, 0x480
    ctx->r9 = ADD32(0, 0X480);
    // 0x800602E8: addiu       $t2, $sp, 0x28
    ctx->r10 = ADD32(ctx->r29, 0X28);
    // 0x800602EC: sh          $t1, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r9;
    // 0x800602F0: addiu       $t3, $zero, -0x500
    ctx->r11 = ADD32(0, -0X500);
    // 0x800602F4: addiu       $t4, $sp, 0x28
    ctx->r12 = ADD32(ctx->r29, 0X28);
    // 0x800602F8: sh          $t3, 0x6($t4)
    MEM_H(0X6, ctx->r12) = ctx->r11;
    // 0x800602FC: addiu       $t5, $zero, 0x800
    ctx->r13 = ADD32(0, 0X800);
    // 0x80060300: addiu       $t6, $sp, 0x28
    ctx->r14 = ADD32(ctx->r29, 0X28);
    // 0x80060304: sh          $t5, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r13;
    // 0x80060308: addiu       $t7, $zero, -0x500
    ctx->r15 = ADD32(0, -0X500);
    // 0x8006030C: addiu       $t8, $sp, 0x28
    ctx->r24 = ADD32(ctx->r29, 0X28);
    // 0x80060310: sh          $t7, 0xA($t8)
    MEM_H(0XA, ctx->r24) = ctx->r15;
    // 0x80060314: addiu       $t9, $zero, 0x800
    ctx->r25 = ADD32(0, 0X800);
    // 0x80060318: addiu       $t0, $sp, 0x28
    ctx->r8 = ADD32(ctx->r29, 0X28);
    // 0x8006031C: sh          $t9, 0xC($t0)
    MEM_H(0XC, ctx->r8) = ctx->r25;
    // 0x80060320: addiu       $t1, $zero, -0x500
    ctx->r9 = ADD32(0, -0X500);
    // 0x80060324: addiu       $t2, $sp, 0x28
    ctx->r10 = ADD32(ctx->r29, 0X28);
    // 0x80060328: sh          $t1, 0xE($t2)
    MEM_H(0XE, ctx->r10) = ctx->r9;
    // 0x8006032C: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x80060330: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80060334: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x80060338: addiu       $t6, $zero, 0xD8
    ctx->r14 = ADD32(0, 0XD8);
    // 0x8006033C: sb          $t3, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r11;
    // 0x80060340: sb          $t4, 0x39($sp)
    MEM_B(0X39, ctx->r29) = ctx->r12;
    // 0x80060344: sh          $t5, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r13;
    // 0x80060348: sh          $t6, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r14;
    // 0x8006034C: jal         0x80068B7C
    // 0x80060350: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_80068B7C(rdram, ctx);
        goto after_4;
    // 0x80060350: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x80060354: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80060358: lbu         $s0, -0x10DF($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X10DF);
    // 0x8006035C: nop

    // 0x80060360: beq         $s0, $zero, L_80060380
    if (ctx->r16 == 0) {
        // 0x80060364: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80060380;
    }
    // 0x80060364: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80060368: beq         $s0, $at, L_800603A4
    if (ctx->r16 == ctx->r1) {
        // 0x8006036C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800603A4;
    }
    // 0x8006036C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80060370: beq         $s0, $at, L_800603C8
    if (ctx->r16 == ctx->r1) {
        // 0x80060374: nop
    
            goto L_800603C8;
    }
    // 0x80060374: nop

    // 0x80060378: b           L_800603E8
    // 0x8006037C: nop

        goto L_800603E8;
    // 0x8006037C: nop

L_80060380:
    // 0x80060380: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80060384: lw          $t8, -0x10F0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X10F0);
    // 0x80060388: addiu       $t7, $zero, 0x27
    ctx->r15 = ADD32(0, 0X27);
    // 0x8006038C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80060390: sh          $t7, 0x14($t8)
    MEM_H(0X14, ctx->r24) = ctx->r15;
    // 0x80060394: lw          $t0, -0x10F0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X10F0);
    // 0x80060398: addiu       $t9, $zero, 0xF8
    ctx->r25 = ADD32(0, 0XF8);
    // 0x8006039C: b           L_800603E8
    // 0x800603A0: sh          $t9, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r25;
        goto L_800603E8;
    // 0x800603A0: sh          $t9, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r25;
L_800603A4:
    // 0x800603A4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800603A8: lw          $t2, -0x10F0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X10F0);
    // 0x800603AC: addiu       $t1, $zero, 0x7B
    ctx->r9 = ADD32(0, 0X7B);
    // 0x800603B0: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800603B4: sh          $t1, 0x14($t2)
    MEM_H(0X14, ctx->r10) = ctx->r9;
    // 0x800603B8: lw          $t4, -0x10F0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X10F0);
    // 0x800603BC: addiu       $t3, $zero, 0xF8
    ctx->r11 = ADD32(0, 0XF8);
    // 0x800603C0: b           L_800603E8
    // 0x800603C4: sh          $t3, 0x16($t4)
    MEM_H(0X16, ctx->r12) = ctx->r11;
        goto L_800603E8;
    // 0x800603C4: sh          $t3, 0x16($t4)
    MEM_H(0X16, ctx->r12) = ctx->r11;
L_800603C8:
    // 0x800603C8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800603CC: lw          $t6, -0x10F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10F0);
    // 0x800603D0: addiu       $t5, $zero, 0xCF
    ctx->r13 = ADD32(0, 0XCF);
    // 0x800603D4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800603D8: sh          $t5, 0x14($t6)
    MEM_H(0X14, ctx->r14) = ctx->r13;
    // 0x800603DC: lw          $t8, -0x10F0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X10F0);
    // 0x800603E0: addiu       $t7, $zero, 0xF8
    ctx->r15 = ADD32(0, 0XF8);
    // 0x800603E4: sh          $t7, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r15;
L_800603E8:
    // 0x800603E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800603EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800603F0: jr          $ra
    // 0x800603F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800603F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800603F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800603F8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800603FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80060400: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80060404: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80060408: jal         0x80070C40
    // 0x8006040C: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    func_80070C40(rdram, ctx);
        goto after_0;
    // 0x8006040C: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    after_0:
    // 0x80060410: addiu       $a0, $zero, 0x500
    ctx->r4 = ADD32(0, 0X500);
    // 0x80060414: jal         0x80070C70
    // 0x80060418: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    func_80070C70(rdram, ctx);
        goto after_1;
    // 0x80060418: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    after_1:
    // 0x8006041C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80060420: lw          $t6, -0xDA0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XDA0);
    // 0x80060424: nop

    // 0x80060428: lh          $a0, 0xB0($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XB0);
    // 0x8006042C: lh          $a1, 0xB2($t6)
    ctx->r5 = MEM_H(ctx->r14, 0XB2);
    // 0x80060430: jal         0x80070CB8
    // 0x80060434: nop

    func_80070CB8(rdram, ctx);
        goto after_2;
    // 0x80060434: nop

    after_2:
    // 0x80060438: jal         0x80070A34
    // 0x8006043C: nop

    func_80070A34(rdram, ctx);
        goto after_3;
    // 0x8006043C: nop

    after_3:
    // 0x80060440: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x80060444: addiu       $t8, $sp, 0x28
    ctx->r24 = ADD32(ctx->r29, 0X28);
    // 0x80060448: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x8006044C: addiu       $t9, $zero, -0x500
    ctx->r25 = ADD32(0, -0X500);
    // 0x80060450: addiu       $t0, $sp, 0x28
    ctx->r8 = ADD32(ctx->r29, 0X28);
    // 0x80060454: sh          $t9, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r25;
    // 0x80060458: addiu       $t1, $zero, 0x480
    ctx->r9 = ADD32(0, 0X480);
    // 0x8006045C: addiu       $t2, $sp, 0x28
    ctx->r10 = ADD32(ctx->r29, 0X28);
    // 0x80060460: sh          $t1, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r9;
    // 0x80060464: addiu       $t3, $zero, -0x500
    ctx->r11 = ADD32(0, -0X500);
    // 0x80060468: addiu       $t4, $sp, 0x28
    ctx->r12 = ADD32(ctx->r29, 0X28);
    // 0x8006046C: sh          $t3, 0x6($t4)
    MEM_H(0X6, ctx->r12) = ctx->r11;
    // 0x80060470: addiu       $t5, $zero, 0x800
    ctx->r13 = ADD32(0, 0X800);
    // 0x80060474: addiu       $t6, $sp, 0x28
    ctx->r14 = ADD32(ctx->r29, 0X28);
    // 0x80060478: sh          $t5, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r13;
    // 0x8006047C: addiu       $t7, $zero, -0x500
    ctx->r15 = ADD32(0, -0X500);
    // 0x80060480: addiu       $t8, $sp, 0x28
    ctx->r24 = ADD32(ctx->r29, 0X28);
    // 0x80060484: sh          $t7, 0xA($t8)
    MEM_H(0XA, ctx->r24) = ctx->r15;
    // 0x80060488: addiu       $t9, $zero, 0x800
    ctx->r25 = ADD32(0, 0X800);
    // 0x8006048C: addiu       $t0, $sp, 0x28
    ctx->r8 = ADD32(ctx->r29, 0X28);
    // 0x80060490: sh          $t9, 0xC($t0)
    MEM_H(0XC, ctx->r8) = ctx->r25;
    // 0x80060494: addiu       $t1, $zero, -0x500
    ctx->r9 = ADD32(0, -0X500);
    // 0x80060498: addiu       $t2, $sp, 0x28
    ctx->r10 = ADD32(ctx->r29, 0X28);
    // 0x8006049C: sh          $t1, 0xE($t2)
    MEM_H(0XE, ctx->r10) = ctx->r9;
    // 0x800604A0: addiu       $t3, $zero, 0xC0
    ctx->r11 = ADD32(0, 0XC0);
    // 0x800604A4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800604A8: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x800604AC: addiu       $t6, $zero, 0xD8
    ctx->r14 = ADD32(0, 0XD8);
    // 0x800604B0: sb          $t3, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r11;
    // 0x800604B4: sb          $t4, 0x39($sp)
    MEM_B(0X39, ctx->r29) = ctx->r12;
    // 0x800604B8: sh          $t5, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r13;
    // 0x800604BC: sh          $t6, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r14;
    // 0x800604C0: jal         0x80068B7C
    // 0x800604C4: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_80068B7C(rdram, ctx);
        goto after_4;
    // 0x800604C4: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x800604C8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800604CC: lbu         $s0, -0x10DF($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X10DF);
    // 0x800604D0: nop

    // 0x800604D4: beq         $s0, $zero, L_800604FC
    if (ctx->r16 == 0) {
        // 0x800604D8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800604FC;
    }
    // 0x800604D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800604DC: beq         $s0, $at, L_80060520
    if (ctx->r16 == ctx->r1) {
        // 0x800604E0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80060520;
    }
    // 0x800604E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800604E4: beq         $s0, $at, L_80060544
    if (ctx->r16 == ctx->r1) {
        // 0x800604E8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80060544;
    }
    // 0x800604E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800604EC: beq         $s0, $at, L_80060568
    if (ctx->r16 == ctx->r1) {
        // 0x800604F0: nop
    
            goto L_80060568;
    }
    // 0x800604F0: nop

    // 0x800604F4: b           L_80060588
    // 0x800604F8: nop

        goto L_80060588;
    // 0x800604F8: nop

L_800604FC:
    // 0x800604FC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80060500: lw          $t8, -0x10F0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X10F0);
    // 0x80060504: addiu       $t7, $zero, 0x27
    ctx->r15 = ADD32(0, 0X27);
    // 0x80060508: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8006050C: sh          $t7, 0x14($t8)
    MEM_H(0X14, ctx->r24) = ctx->r15;
    // 0x80060510: lw          $t0, -0x10F0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X10F0);
    // 0x80060514: addiu       $t9, $zero, 0xF8
    ctx->r25 = ADD32(0, 0XF8);
    // 0x80060518: b           L_80060588
    // 0x8006051C: sh          $t9, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r25;
        goto L_80060588;
    // 0x8006051C: sh          $t9, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r25;
L_80060520:
    // 0x80060520: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80060524: lw          $t2, -0x10F0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X10F0);
    // 0x80060528: addiu       $t1, $zero, 0x7B
    ctx->r9 = ADD32(0, 0X7B);
    // 0x8006052C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80060530: sh          $t1, 0x14($t2)
    MEM_H(0X14, ctx->r10) = ctx->r9;
    // 0x80060534: lw          $t4, -0x10F0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X10F0);
    // 0x80060538: addiu       $t3, $zero, 0xF8
    ctx->r11 = ADD32(0, 0XF8);
    // 0x8006053C: b           L_80060588
    // 0x80060540: sh          $t3, 0x16($t4)
    MEM_H(0X16, ctx->r12) = ctx->r11;
        goto L_80060588;
    // 0x80060540: sh          $t3, 0x16($t4)
    MEM_H(0X16, ctx->r12) = ctx->r11;
L_80060544:
    // 0x80060544: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80060548: lw          $t6, -0x10F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10F0);
    // 0x8006054C: addiu       $t5, $zero, 0xCF
    ctx->r13 = ADD32(0, 0XCF);
    // 0x80060550: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80060554: sh          $t5, 0x14($t6)
    MEM_H(0X14, ctx->r14) = ctx->r13;
    // 0x80060558: lw          $t8, -0x10F0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X10F0);
    // 0x8006055C: addiu       $t7, $zero, 0xF8
    ctx->r15 = ADD32(0, 0XF8);
    // 0x80060560: b           L_80060588
    // 0x80060564: sh          $t7, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r15;
        goto L_80060588;
    // 0x80060564: sh          $t7, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r15;
L_80060568:
    // 0x80060568: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8006056C: lw          $t0, -0x10F0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X10F0);
    // 0x80060570: addiu       $t9, $zero, 0x124
    ctx->r25 = ADD32(0, 0X124);
    // 0x80060574: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80060578: sh          $t9, 0x14($t0)
    MEM_H(0X14, ctx->r8) = ctx->r25;
    // 0x8006057C: lw          $t2, -0x10F0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X10F0);
    // 0x80060580: addiu       $t1, $zero, 0xF8
    ctx->r9 = ADD32(0, 0XF8);
    // 0x80060584: sh          $t1, 0x16($t2)
    MEM_H(0X16, ctx->r10) = ctx->r9;
L_80060588:
    // 0x80060588: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006058C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80060590: jr          $ra
    // 0x80060594: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80060594: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80060598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060598: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006059C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800605A0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800605A4: jal         0x8005FAE0
    // 0x800605A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8005FAE0(rdram, ctx);
        goto after_0;
    // 0x800605A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x800605AC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800605B0: lbu         $s0, -0x10E0($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X10E0);
    // 0x800605B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800605B8: beq         $s0, $at, L_800605E0
    if (ctx->r16 == ctx->r1) {
        // 0x800605BC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800605E0;
    }
    // 0x800605BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800605C0: beq         $s0, $at, L_800605F4
    if (ctx->r16 == ctx->r1) {
        // 0x800605C4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800605F4;
    }
    // 0x800605C4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800605C8: beq         $s0, $at, L_80060608
    if (ctx->r16 == ctx->r1) {
        // 0x800605CC: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80060608;
    }
    // 0x800605CC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800605D0: beq         $s0, $at, L_8006061C
    if (ctx->r16 == ctx->r1) {
        // 0x800605D4: nop
    
            goto L_8006061C;
    }
    // 0x800605D4: nop

    // 0x800605D8: b           L_80060630
    // 0x800605DC: nop

        goto L_80060630;
    // 0x800605DC: nop

L_800605E0:
    // 0x800605E0: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x800605E4: jal         0x8005FEA0
    // 0x800605E8: nop

    func_8005FEA0(rdram, ctx);
        goto after_1;
    // 0x800605E8: nop

    after_1:
    // 0x800605EC: b           L_80060644
    // 0x800605F0: nop

        goto L_80060644;
    // 0x800605F0: nop

L_800605F4:
    // 0x800605F4: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x800605F8: jal         0x8006005C
    // 0x800605FC: nop

    func_8006005C(rdram, ctx);
        goto after_2;
    // 0x800605FC: nop

    after_2:
    // 0x80060600: b           L_80060644
    // 0x80060604: nop

        goto L_80060644;
    // 0x80060604: nop

L_80060608:
    // 0x80060608: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x8006060C: jal         0x80060284
    // 0x80060610: nop

    func_80060284(rdram, ctx);
        goto after_3;
    // 0x80060610: nop

    after_3:
    // 0x80060614: b           L_80060644
    // 0x80060618: nop

        goto L_80060644;
    // 0x80060618: nop

L_8006061C:
    // 0x8006061C: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x80060620: jal         0x800603F8
    // 0x80060624: nop

    func_800603F8(rdram, ctx);
        goto after_4;
    // 0x80060624: nop

    after_4:
    // 0x80060628: b           L_80060644
    // 0x8006062C: nop

        goto L_80060644;
    // 0x8006062C: nop

L_80060630:
    // 0x80060630: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80060634: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80060638: addiu       $a1, $a1, -0x2D4C
    ctx->r5 = ADD32(ctx->r5, -0X2D4C);
    // 0x8006063C: jal         0x80083560
    // 0x80060640: addiu       $a0, $a0, -0x2D70
    ctx->r4 = ADD32(ctx->r4, -0X2D70);
    Fault_Assert(rdram, ctx);
        goto after_5;
    // 0x80060640: addiu       $a0, $a0, -0x2D70
    ctx->r4 = ADD32(ctx->r4, -0X2D70);
    after_5:
L_80060644:
    // 0x80060644: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80060648: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006064C: jr          $ra
    // 0x80060650: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80060650: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80060654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80060658: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006065C: jal         0x8005FC70
    // 0x80060660: nop

    func_8005FC70(rdram, ctx);
        goto after_0;
    // 0x80060660: nop

    after_0:
    // 0x80060664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80060668: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006066C: jr          $ra
    // 0x80060670: nop

    return;
    // 0x80060670: nop

    // 0x80060674: nop

    // 0x80060678: nop

    // 0x8006067C: nop

;}
RECOMP_FUNC void func_80060680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060680: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80060684: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80060688: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8006068C: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80060690: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80060694: beq         $t0, $zero, L_800606C0
    if (ctx->r8 == 0) {
        // 0x80060698: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_800606C0;
    }
    // 0x80060698: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006069C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800606A0: beq         $t0, $at, L_800606CC
    if (ctx->r8 == ctx->r1) {
        // 0x800606A4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800606CC;
    }
    // 0x800606A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800606A8: beq         $t0, $at, L_800606DC
    if (ctx->r8 == ctx->r1) {
        // 0x800606AC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800606DC;
    }
    // 0x800606AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800606B0: beq         $t0, $at, L_800606F0
    if (ctx->r8 == ctx->r1) {
        // 0x800606B4: nop
    
            goto L_800606F0;
    }
    // 0x800606B4: nop

    // 0x800606B8: b           L_800606FC
    // 0x800606BC: nop

        goto L_800606FC;
    // 0x800606BC: nop

L_800606C0:
    // 0x800606C0: sh          $a2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r6;
    // 0x800606C4: b           L_800606FC
    // 0x800606C8: sh          $a3, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r7;
        goto L_800606FC;
    // 0x800606C8: sh          $a3, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r7;
L_800606CC:
    // 0x800606CC: negu        $t6, $a3
    ctx->r14 = SUB32(0, ctx->r7);
    // 0x800606D0: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    // 0x800606D4: b           L_800606FC
    // 0x800606D8: sh          $a2, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r6;
        goto L_800606FC;
    // 0x800606D8: sh          $a2, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r6;
L_800606DC:
    // 0x800606DC: negu        $t7, $a2
    ctx->r15 = SUB32(0, ctx->r6);
    // 0x800606E0: negu        $t8, $a3
    ctx->r24 = SUB32(0, ctx->r7);
    // 0x800606E4: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
    // 0x800606E8: b           L_800606FC
    // 0x800606EC: sh          $t8, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r24;
        goto L_800606FC;
    // 0x800606EC: sh          $t8, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r24;
L_800606F0:
    // 0x800606F0: negu        $t9, $a2
    ctx->r25 = SUB32(0, ctx->r6);
    // 0x800606F4: sh          $a3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r7;
    // 0x800606F8: sh          $t9, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r25;
L_800606FC:
    // 0x800606FC: jr          $ra
    // 0x80060700: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80060700: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80060704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060704: lh          $t6, 0x4($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X4);
    // 0x80060708: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x8006070C: lh          $t8, 0x6($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X6);
    // 0x80060710: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x80060714: subu        $a1, $t6, $t7
    ctx->r5 = SUB32(ctx->r14, ctx->r15);
    // 0x80060718: subu        $a2, $t8, $t9
    ctx->r6 = SUB32(ctx->r24, ctx->r25);
    // 0x8006071C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80060720: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80060724: multu       $a1, $a2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80060728: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006072C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80060730: mflo        $v0
    ctx->r2 = lo;
    // 0x80060734: jr          $ra
    // 0x80060738: nop

    return;
    // 0x80060738: nop

;}
RECOMP_FUNC void func_8006073C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006073C: sll         $a3, $a1, 16
    ctx->r7 = S32(ctx->r5 << 16);
    // 0x80060740: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80060744: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x80060748: sh          $a3, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r7;
    // 0x8006074C: sh          $a3, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r7;
    // 0x80060750: sll         $a3, $a2, 16
    ctx->r7 = S32(ctx->r6 << 16);
    // 0x80060754: sra         $t7, $a3, 16
    ctx->r15 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80060758: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006075C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x80060760: sh          $a3, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r7;
    // 0x80060764: sh          $a3, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r7;
    // 0x80060768: jr          $ra
    // 0x8006076C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006076C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80060770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060770: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80060774: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80060778: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8006077C: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80060780: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80060784: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80060788: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8006078C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80060790: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80060794: bc1f        L_800607B8
    if (!c1cs) {
        // 0x80060798: swc1        $f16, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f16.u32l;
            goto L_800607B8;
    }
    // 0x80060798: swc1        $f16, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f16.u32l;
    // 0x8006079C: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800607A0: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800607A4: nop

    // 0x800607A8: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x800607AC: nop

    // 0x800607B0: bc1t        L_800607F0
    if (c1cs) {
        // 0x800607B4: nop
    
            goto L_800607F0;
    }
    // 0x800607B4: nop

L_800607B8:
    // 0x800607B8: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800607BC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800607C0: nop

    // 0x800607C4: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x800607C8: nop

    // 0x800607CC: bc1f        L_80060808
    if (!c1cs) {
        // 0x800607D0: nop
    
            goto L_80060808;
    }
    // 0x800607D0: nop

    // 0x800607D4: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800607D8: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800607DC: nop

    // 0x800607E0: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x800607E4: nop

    // 0x800607E8: bc1f        L_80060808
    if (!c1cs) {
        // 0x800607EC: nop
    
            goto L_80060808;
    }
    // 0x800607EC: nop

L_800607F0:
    // 0x800607F0: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800607F4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800607F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800607FC: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x80060800: b           L_8006080C
    // 0x80060804: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
        goto L_8006080C;
    // 0x80060804: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
L_80060808:
    // 0x80060808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006080C:
    // 0x8006080C: jr          $ra
    // 0x80060810: nop

    return;
    // 0x80060810: nop

;}
RECOMP_FUNC void func_80060814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060814: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80060818: lw          $t6, -0x590($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X590);
    // 0x8006081C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80060820: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80060824: sw          $t7, -0x590($at)
    MEM_W(-0X590, ctx->r1) = ctx->r15;
    // 0x80060828: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006082C: slti        $at, $a1, 0x20
    ctx->r1 = SIGNED(ctx->r5) < 0X20 ? 1 : 0;
    // 0x80060830: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80060834: beq         $at, $zero, L_8006087C
    if (ctx->r1 == 0) {
        // 0x80060838: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8006087C;
    }
    // 0x80060838: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8006083C:
    // 0x8006083C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80060840: lw          $t8, -0x590($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X590);
    // 0x80060844: lui         $at, 0x8050
    ctx->r1 = S32(0X8050 << 16);
    // 0x80060848: srl         $t0, $t8, 29
    ctx->r8 = S32(U32(ctx->r24) >> 29);
    // 0x8006084C: andi        $t1, $t0, 0x7
    ctx->r9 = ctx->r8 & 0X7;
    // 0x80060850: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80060854: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x80060858: xor         $t3, $t2, $at
    ctx->r11 = ctx->r10 ^ ctx->r1;
    // 0x8006085C: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80060860: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80060864: sllv        $t5, $t4, $a1
    ctx->r13 = S32(ctx->r12 << (ctx->r5 & 31));
    // 0x80060868: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8006086C: sw          $t3, -0x590($at)
    MEM_W(-0X590, ctx->r1) = ctx->r11;
    // 0x80060870: slti        $at, $a1, 0x20
    ctx->r1 = SIGNED(ctx->r5) < 0X20 ? 1 : 0;
    // 0x80060874: bne         $at, $zero, L_8006083C
    if (ctx->r1 != 0) {
        // 0x80060878: or          $a0, $a0, $t5
        ctx->r4 = ctx->r4 | ctx->r13;
            goto L_8006083C;
    }
    // 0x80060878: or          $a0, $a0, $t5
    ctx->r4 = ctx->r4 | ctx->r13;
L_8006087C:
    // 0x8006087C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80060880: sw          $a0, -0x590($at)
    MEM_W(-0X590, ctx->r1) = ctx->r4;
    // 0x80060884: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80060888: jr          $ra
    // 0x8006088C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006088C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80060890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060890: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80060894: jr          $ra
    // 0x80060898: sw          $a0, -0x590($at)
    MEM_W(-0X590, ctx->r1) = ctx->r4;
    return;
    // 0x80060898: sw          $a0, -0x590($at)
    MEM_W(-0X590, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8006089C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006089C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800608A0: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x800608A4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800608A8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800608AC: beq         $at, $zero, L_800608E8
    if (ctx->r1 == 0) {
        // 0x800608B0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_800608E8;
    }
    // 0x800608B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800608B4:
    // 0x800608B4: srl         $t7, $a0, 29
    ctx->r15 = S32(U32(ctx->r4) >> 29);
    // 0x800608B8: andi        $t8, $t7, 0x7
    ctx->r24 = ctx->r15 & 0X7;
    // 0x800608BC: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800608C0: or          $a0, $t6, $t8
    ctx->r4 = ctx->r14 | ctx->r24;
    // 0x800608C4: lui         $at, 0x8050
    ctx->r1 = S32(0X8050 << 16);
    // 0x800608C8: xor         $t9, $a0, $at
    ctx->r25 = ctx->r4 ^ ctx->r1;
    // 0x800608CC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x800608D0: andi        $t0, $a0, 0x1
    ctx->r8 = ctx->r4 & 0X1;
    // 0x800608D4: sllv        $t1, $t0, $a2
    ctx->r9 = S32(ctx->r8 << (ctx->r6 & 31));
    // 0x800608D8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800608DC: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x800608E0: bne         $at, $zero, L_800608B4
    if (ctx->r1 != 0) {
        // 0x800608E4: or          $a1, $a1, $t1
        ctx->r5 = ctx->r5 | ctx->r9;
            goto L_800608B4;
    }
    // 0x800608E4: or          $a1, $a1, $t1
    ctx->r5 = ctx->r5 | ctx->r9;
L_800608E8:
    // 0x800608E8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800608EC: jr          $ra
    // 0x800608F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800608F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800608F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800608F4: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x800608F8: sra         $t6, $a0, 6
    ctx->r14 = S32(SIGNED(ctx->r4) >> 6);
    // 0x800608FC: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80060900: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80060904: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80060908: lh          $v0, -0xD90($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XD90);
    // 0x8006090C: jr          $ra
    // 0x80060910: nop

    return;
    // 0x80060910: nop

;}
RECOMP_FUNC void func_80060914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060914: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x80060918: addiu       $t6, $a0, 0x4000
    ctx->r14 = ADD32(ctx->r4, 0X4000);
    // 0x8006091C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80060920: sra         $t8, $t7, 6
    ctx->r24 = S32(SIGNED(ctx->r15) >> 6);
    // 0x80060924: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80060928: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8006092C: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x80060930: lh          $v0, -0xD90($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XD90);
    // 0x80060934: jr          $ra
    // 0x80060938: nop

    return;
    // 0x80060938: nop

;}
RECOMP_FUNC void func_8006093C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006093C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80060940: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80060944: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80060948: sltiu       $at, $s0, 0x400
    ctx->r1 = ctx->r16 < 0X400 ? 1 : 0;
    // 0x8006094C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80060950: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80060954: beq         $at, $zero, L_800609E8
    if (ctx->r1 == 0) {
        // 0x80060958: swc1        $f20, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
            goto L_800609E8;
    }
    // 0x80060958: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
L_8006095C:
    // 0x8006095C: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x80060960: bgez        $s0, L_80060978
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80060964: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80060978;
    }
    // 0x80060964: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80060968: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8006096C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80060970: nop

    // 0x80060974: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80060978:
    // 0x80060978: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006097C: lwc1        $f10, -0x2D40($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2D40);
    // 0x80060980: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x80060984: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80060988: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006098C: nop

    // 0x80060990: div.s       $f20, $f16, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80060994: jal         0x800B7B40
    // 0x80060998: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x80060998: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x8006099C: lui         $at, 0x4680
    ctx->r1 = S32(0X4680 << 16);
    // 0x800609A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800609A4: sll         $t8, $s0, 1
    ctx->r24 = S32(ctx->r16 << 1);
    // 0x800609A8: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800609AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800609B0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800609B4: nop

    // 0x800609B8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800609BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800609C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800609C4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800609C8: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800609CC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800609D0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800609D4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800609D8: sh          $t7, -0xD90($at)
    MEM_H(-0XD90, ctx->r1) = ctx->r15;
    // 0x800609DC: sltiu       $at, $s0, 0x400
    ctx->r1 = ctx->r16 < 0X400 ? 1 : 0;
    // 0x800609E0: bne         $at, $zero, L_8006095C
    if (ctx->r1 != 0) {
        // 0x800609E4: nop
    
            goto L_8006095C;
    }
    // 0x800609E4: nop

L_800609E8:
    // 0x800609E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800609EC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800609F0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800609F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800609F8: jr          $ra
    // 0x800609FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800609FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80060A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060A00: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80060A04: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x80060A08: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80060A0C: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    // 0x80060A10: sb          $a1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r5;
    // 0x80060A14: jr          $ra
    // 0x80060A18: sb          $a2, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r6;
    return;
    // 0x80060A18: sb          $a2, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r6;
;}
RECOMP_FUNC void func_80060A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060A1C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80060A20: jr          $ra
    // 0x80060A24: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    return;
    // 0x80060A24: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80060A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060A28: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x80060A2C: nop

    // 0x80060A30: bne         $t6, $zero, L_80060A44
    if (ctx->r14 != 0) {
        // 0x80060A34: nop
    
            goto L_80060A44;
    }
    // 0x80060A34: nop

    // 0x80060A38: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x80060A3C: jr          $ra
    // 0x80060A40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80060A40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80060A44:
    // 0x80060A44: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x80060A48: lbu         $t8, 0x2($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X2);
    // 0x80060A4C: nop

    // 0x80060A50: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80060A54: bne         $at, $zero, L_80060A88
    if (ctx->r1 != 0) {
        // 0x80060A58: nop
    
            goto L_80060A88;
    }
    // 0x80060A58: nop

    // 0x80060A5C: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x80060A60: lbu         $t2, 0x2($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X2);
    // 0x80060A64: addu        $t0, $t9, $a1
    ctx->r8 = ADD32(ctx->r25, ctx->r5);
    // 0x80060A68: sb          $t0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r8;
    // 0x80060A6C: lbu         $t1, 0x0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X0);
    // 0x80060A70: nop

    // 0x80060A74: slt         $at, $t2, $t1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80060A78: beq         $at, $zero, L_80060A98
    if (ctx->r1 == 0) {
        // 0x80060A7C: nop
    
            goto L_80060A98;
    }
    // 0x80060A7C: nop

    // 0x80060A80: jr          $ra
    // 0x80060A84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80060A84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80060A88:
    // 0x80060A88: lbu         $t3, 0x1($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X1);
    // 0x80060A8C: nop

    // 0x80060A90: addu        $t4, $t3, $a1
    ctx->r12 = ADD32(ctx->r11, ctx->r5);
    // 0x80060A94: sb          $t4, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r12;
L_80060A98:
    // 0x80060A98: lbu         $t5, 0x1($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X1);
    // 0x80060A9C: lbu         $t6, 0x3($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3);
    // 0x80060AA0: nop

    // 0x80060AA4: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80060AA8: bne         $at, $zero, L_80060AC8
    if (ctx->r1 != 0) {
        // 0x80060AAC: nop
    
            goto L_80060AC8;
    }
    // 0x80060AAC: nop

    // 0x80060AB0: lbu         $t7, 0x1($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1);
    // 0x80060AB4: lbu         $t8, 0x3($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X3);
    // 0x80060AB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80060ABC: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x80060AC0: jr          $ra
    // 0x80060AC4: sb          $t9, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r25;
    return;
    // 0x80060AC4: sb          $t9, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r25;
L_80060AC8:
    // 0x80060AC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80060ACC: jr          $ra
    // 0x80060AD0: nop

    return;
    // 0x80060AD0: nop

;}
RECOMP_FUNC void func_80060AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060AD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80060AD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80060ADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80060AE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80060AE4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80060AE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80060AEC: jal         0x80060B04
    // 0x80060AF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80060B04(rdram, ctx);
        goto after_0;
    // 0x80060AF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80060AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80060AF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80060AFC: jr          $ra
    // 0x80060B00: nop

    return;
    // 0x80060B00: nop

;}
RECOMP_FUNC void func_80060B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060B04: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80060B08: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80060B0C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80060B10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80060B14: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80060B18: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80060B1C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80060B20: sltiu       $at, $s2, 0x20
    ctx->r1 = ctx->r18 < 0X20 ? 1 : 0;
    // 0x80060B24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80060B28: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80060B2C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80060B30: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80060B34: beq         $at, $zero, L_80060B78
    if (ctx->r1 == 0) {
        // 0x80060B38: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_80060B78;
    }
    // 0x80060B38: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80060B3C:
    // 0x80060B3C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80060B40: nop

    // 0x80060B44: and         $t7, $t6, $s1
    ctx->r15 = ctx->r14 & ctx->r17;
    // 0x80060B48: beq         $t7, $zero, L_80060B60
    if (ctx->r15 == 0) {
        // 0x80060B4C: nop
    
            goto L_80060B60;
    }
    // 0x80060B4C: nop

    // 0x80060B50: lbu         $a1, 0x43($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X43);
    // 0x80060B54: lbu         $a2, 0x47($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X47);
    // 0x80060B58: jal         0x80060A00
    // 0x80060B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80060A00(rdram, ctx);
        goto after_0;
    // 0x80060B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
L_80060B60:
    // 0x80060B60: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80060B64: sltiu       $at, $s2, 0x20
    ctx->r1 = ctx->r18 < 0X20 ? 1 : 0;
    // 0x80060B68: sll         $t8, $s1, 1
    ctx->r24 = S32(ctx->r17 << 1);
    // 0x80060B6C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80060B70: bne         $at, $zero, L_80060B3C
    if (ctx->r1 != 0) {
        // 0x80060B74: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_80060B3C;
    }
    // 0x80060B74: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_80060B78:
    // 0x80060B78: lbu         $t9, 0x47($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X47);
    // 0x80060B7C: nop

    // 0x80060B80: beq         $t9, $zero, L_80060BA4
    if (ctx->r25 == 0) {
        // 0x80060B84: nop
    
            goto L_80060BA4;
    }
    // 0x80060B84: nop

    // 0x80060B88: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80060B8C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80060B90: lw          $t1, 0x80($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X80);
    // 0x80060B94: nop

    // 0x80060B98: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x80060B9C: b           L_80060BBC
    // 0x80060BA0: sw          $t3, 0x80($t0)
    MEM_W(0X80, ctx->r8) = ctx->r11;
        goto L_80060BBC;
    // 0x80060BA0: sw          $t3, 0x80($t0)
    MEM_W(0X80, ctx->r8) = ctx->r11;
L_80060BA4:
    // 0x80060BA4: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80060BA8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80060BAC: lw          $t5, 0x80($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X80);
    // 0x80060BB0: nor         $t7, $t6, $zero
    ctx->r15 = ~(ctx->r14 | 0);
    // 0x80060BB4: and         $t8, $t5, $t7
    ctx->r24 = ctx->r13 & ctx->r15;
    // 0x80060BB8: sw          $t8, 0x80($t4)
    MEM_W(0X80, ctx->r12) = ctx->r24;
L_80060BBC:
    // 0x80060BBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80060BC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80060BC4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80060BC8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80060BCC: jr          $ra
    // 0x80060BD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80060BD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80060BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060BD4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80060BD8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80060BDC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80060BE0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80060BE4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80060BE8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80060BEC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80060BF0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80060BF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80060BF8: sw          $zero, 0x84($t6)
    MEM_W(0X84, ctx->r14) = 0;
    // 0x80060BFC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80060C00: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80060C04: lw          $t9, 0x80($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X80);
    // 0x80060C08: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80060C0C: sltiu       $at, $s2, 0x20
    ctx->r1 = ctx->r18 < 0X20 ? 1 : 0;
    // 0x80060C10: and         $t0, $t7, $t9
    ctx->r8 = ctx->r15 & ctx->r25;
    // 0x80060C14: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80060C18: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x80060C1C: beq         $at, $zero, L_80060C88
    if (ctx->r1 == 0) {
        // 0x80060C20: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_80060C88;
    }
    // 0x80060C20: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
L_80060C24:
    // 0x80060C24: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80060C28: nop

    // 0x80060C2C: and         $t2, $t1, $s1
    ctx->r10 = ctx->r9 & ctx->r17;
    // 0x80060C30: beq         $t2, $zero, L_80060C68
    if (ctx->r10 == 0) {
        // 0x80060C34: nop
    
            goto L_80060C68;
    }
    // 0x80060C34: nop

    // 0x80060C38: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80060C3C: jal         0x80060A28
    // 0x80060C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80060A28(rdram, ctx);
        goto after_0;
    // 0x80060C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80060C44: beq         $v0, $zero, L_80060C70
    if (ctx->r2 == 0) {
        // 0x80060C48: nop
    
            goto L_80060C70;
    }
    // 0x80060C48: nop

    // 0x80060C4C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80060C50: nop

    // 0x80060C54: lw          $t4, 0x84($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X84);
    // 0x80060C58: nop

    // 0x80060C5C: or          $t5, $t4, $s1
    ctx->r13 = ctx->r12 | ctx->r17;
    // 0x80060C60: b           L_80060C70
    // 0x80060C64: sw          $t5, 0x84($t3)
    MEM_W(0X84, ctx->r11) = ctx->r13;
        goto L_80060C70;
    // 0x80060C64: sw          $t5, 0x84($t3)
    MEM_W(0X84, ctx->r11) = ctx->r13;
L_80060C68:
    // 0x80060C68: jal         0x80060A1C
    // 0x80060C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80060A1C(rdram, ctx);
        goto after_1;
    // 0x80060C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_80060C70:
    // 0x80060C70: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80060C74: sltiu       $at, $s2, 0x20
    ctx->r1 = ctx->r18 < 0X20 ? 1 : 0;
    // 0x80060C78: sll         $t6, $s1, 1
    ctx->r14 = S32(ctx->r17 << 1);
    // 0x80060C7C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80060C80: bne         $at, $zero, L_80060C24
    if (ctx->r1 != 0) {
        // 0x80060C84: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_80060C24;
    }
    // 0x80060C84: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
L_80060C88:
    // 0x80060C88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80060C8C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80060C90: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80060C94: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80060C98: jr          $ra
    // 0x80060C9C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80060C9C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80060CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060CA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80060CA4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80060CA8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80060CAC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80060CB0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80060CB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80060CB8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80060CBC: sltiu       $at, $s1, 0x20
    ctx->r1 = ctx->r17 < 0X20 ? 1 : 0;
    // 0x80060CC0: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80060CC4: beq         $at, $zero, L_80060CE4
    if (ctx->r1 == 0) {
        // 0x80060CC8: sw          $zero, 0x84($t6)
        MEM_W(0X84, ctx->r14) = 0;
            goto L_80060CE4;
    }
    // 0x80060CC8: sw          $zero, 0x84($t6)
    MEM_W(0X84, ctx->r14) = 0;
L_80060CCC:
    // 0x80060CCC: jal         0x80060A1C
    // 0x80060CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80060A1C(rdram, ctx);
        goto after_0;
    // 0x80060CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80060CD4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80060CD8: sltiu       $at, $s1, 0x20
    ctx->r1 = ctx->r17 < 0X20 ? 1 : 0;
    // 0x80060CDC: bne         $at, $zero, L_80060CCC
    if (ctx->r1 != 0) {
        // 0x80060CE0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80060CCC;
    }
    // 0x80060CE0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80060CE4:
    // 0x80060CE4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80060CE8: nop

    // 0x80060CEC: sw          $zero, 0x88($t7)
    MEM_W(0X88, ctx->r15) = 0;
    // 0x80060CF0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80060CF4: nop

    // 0x80060CF8: sw          $zero, 0x8C($t8)
    MEM_W(0X8C, ctx->r24) = 0;
    // 0x80060CFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80060D00: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80060D04: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80060D08: jr          $ra
    // 0x80060D0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80060D0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80060D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060D10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80060D14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80060D18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80060D1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80060D20: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80060D24: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80060D28: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80060D2C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80060D30: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80060D34: sw          $t6, 0x288($at)
    MEM_W(0X288, ctx->r1) = ctx->r14;
    // 0x80060D38: addiu       $a1, $a1, -0x580
    ctx->r5 = ADD32(ctx->r5, -0X580);
    // 0x80060D3C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x80060D40: jal         0x800B7D00
    // 0x80060D44: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    _bcopy(rdram, ctx);
        goto after_0;
    // 0x80060D44: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80060D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80060D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80060D50: jr          $ra
    // 0x80060D54: nop

    return;
    // 0x80060D54: nop

;}
RECOMP_FUNC void func_80060D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060D58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80060D5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80060D60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80060D64: lui         $a0, 0x8
    ctx->r4 = S32(0X8 << 16);
    // 0x80060D68: jal         0x800B6A90
    // 0x80060D6C: ori         $a0, $a0, 0x401
    ctx->r4 = ctx->r4 | 0X401;
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x80060D6C: ori         $a0, $a0, 0x401
    ctx->r4 = ctx->r4 | 0X401;
    after_0:
    // 0x80060D70: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x80060D74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80060D78: bne         $t6, $at, L_80060DC4
    if (ctx->r14 != ctx->r1) {
        // 0x80060D7C: sw          $v0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r2;
            goto L_80060DC4;
    }
    // 0x80060D7C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80060D80: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80060D84: lw          $t7, 0x300($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X300);
    // 0x80060D88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80060D8C: bne         $t7, $at, L_80060DA0
    if (ctx->r15 != ctx->r1) {
        // 0x80060D90: nop
    
            goto L_80060DA0;
    }
    // 0x80060D90: nop

    // 0x80060D94: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80060D98: addiu       $t8, $t8, -0x6A90
    ctx->r24 = ADD32(ctx->r24, -0X6A90);
    // 0x80060D9C: sw          $zero, 0xC0($t8)
    MEM_W(0XC0, ctx->r24) = 0;
L_80060DA0:
    // 0x80060DA0: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x80060DA4: lw          $t9, 0x300($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X300);
    // 0x80060DA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80060DAC: bne         $t9, $at, L_80060E14
    if (ctx->r25 != ctx->r1) {
        // 0x80060DB0: nop
    
            goto L_80060E14;
    }
    // 0x80060DB0: nop

    // 0x80060DB4: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80060DB8: addiu       $t0, $t0, -0x6A90
    ctx->r8 = ADD32(ctx->r8, -0X6A90);
    // 0x80060DBC: b           L_80060E14
    // 0x80060DC0: sw          $zero, 0x980($t0)
    MEM_W(0X980, ctx->r8) = 0;
        goto L_80060E14;
    // 0x80060DC0: sw          $zero, 0x980($t0)
    MEM_W(0X980, ctx->r8) = 0;
L_80060DC4:
    // 0x80060DC4: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x80060DC8: lw          $t1, 0x300($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X300);
    // 0x80060DCC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80060DD0: bne         $t1, $at, L_80060DEC
    if (ctx->r9 != ctx->r1) {
        // 0x80060DD4: nop
    
            goto L_80060DEC;
    }
    // 0x80060DD4: nop

    // 0x80060DD8: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80060DDC: lw          $t2, 0x284($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X284);
    // 0x80060DE0: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80060DE4: addiu       $t3, $t3, -0x6A90
    ctx->r11 = ADD32(ctx->r11, -0X6A90);
    // 0x80060DE8: sw          $t2, 0xC0($t3)
    MEM_W(0XC0, ctx->r11) = ctx->r10;
L_80060DEC:
    // 0x80060DEC: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x80060DF0: lw          $t4, 0x300($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X300);
    // 0x80060DF4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80060DF8: bne         $t4, $at, L_80060E14
    if (ctx->r12 != ctx->r1) {
        // 0x80060DFC: nop
    
            goto L_80060E14;
    }
    // 0x80060DFC: nop

    // 0x80060E00: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80060E04: lw          $t5, 0x284($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X284);
    // 0x80060E08: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80060E0C: addiu       $t6, $t6, -0x6A90
    ctx->r14 = ADD32(ctx->r14, -0X6A90);
    // 0x80060E10: sw          $t5, 0x980($t6)
    MEM_W(0X980, ctx->r14) = ctx->r13;
L_80060E14:
    // 0x80060E14: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80060E18: jal         0x800B6A90
    // 0x80060E1C: nop

    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80060E1C: nop

    after_1:
    // 0x80060E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80060E24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80060E28: jr          $ra
    // 0x80060E2C: nop

    return;
    // 0x80060E2C: nop

;}
RECOMP_FUNC void func_80060E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060E30: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80060E34: lw          $t6, 0x288($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X288);
    // 0x80060E38: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80060E3C: beq         $t6, $zero, L_800610FC
    if (ctx->r14 == 0) {
        // 0x80060E40: sw          $ra, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r31;
            goto L_800610FC;
    }
    // 0x80060E40: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80060E44: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80060E48: lw          $t7, 0x300($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X300);
    // 0x80060E4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80060E50: bne         $t7, $at, L_80060EBC
    if (ctx->r15 != ctx->r1) {
        // 0x80060E54: nop
    
            goto L_80060EBC;
    }
    // 0x80060E54: nop

    // 0x80060E58: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80060E5C: addiu       $t8, $t8, -0x5910
    ctx->r24 = ADD32(ctx->r24, -0X5910);
    // 0x80060E60: addiu       $t0, $t8, 0x48
    ctx->r8 = ADD32(ctx->r24, 0X48);
    // 0x80060E64: or          $t1, $sp, $zero
    ctx->r9 = ctx->r29 | 0;
L_80060E68:
    // 0x80060E68: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80060E6C: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80060E70: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x80060E74: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x80060E78: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80060E7C: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x80060E80: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x80060E84: bne         $t8, $t0, L_80060E68
    if (ctx->r24 != ctx->r8) {
        // 0x80060E88: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_80060E68;
    }
    // 0x80060E88: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x80060E8C: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80060E90: nop

    // 0x80060E94: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x80060E98: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x80060E9C: nop

    // 0x80060EA0: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80060EA4: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80060EA8: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80060EAC: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80060EB0: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x80060EB4: jal         0x80060D10
    // 0x80060EB8: nop

    func_80060D10(rdram, ctx);
        goto after_0;
    // 0x80060EB8: nop

    after_0:
L_80060EBC:
    // 0x80060EBC: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x80060EC0: lw          $t2, 0x300($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X300);
    // 0x80060EC4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80060EC8: bne         $t2, $at, L_80060F34
    if (ctx->r10 != ctx->r1) {
        // 0x80060ECC: nop
    
            goto L_80060F34;
    }
    // 0x80060ECC: nop

    // 0x80060ED0: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80060ED4: addiu       $t3, $t3, -0x5870
    ctx->r11 = ADD32(ctx->r11, -0X5870);
    // 0x80060ED8: addiu       $t5, $t3, 0x48
    ctx->r13 = ADD32(ctx->r11, 0X48);
    // 0x80060EDC: or          $t6, $sp, $zero
    ctx->r14 = ctx->r29 | 0;
L_80060EE0:
    // 0x80060EE0: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x80060EE4: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x80060EE8: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80060EEC: lw          $at, -0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X8);
    // 0x80060EF0: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80060EF4: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80060EF8: lw          $at, -0x4($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X4);
    // 0x80060EFC: bne         $t3, $t5, L_80060EE0
    if (ctx->r11 != ctx->r13) {
        // 0x80060F00: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_80060EE0;
    }
    // 0x80060F00: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80060F04: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x80060F08: nop

    // 0x80060F0C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80060F10: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x80060F14: nop

    // 0x80060F18: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x80060F1C: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80060F20: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80060F24: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80060F28: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x80060F2C: jal         0x80060D10
    // 0x80060F30: nop

    func_80060D10(rdram, ctx);
        goto after_1;
    // 0x80060F30: nop

    after_1:
L_80060F34:
    // 0x80060F34: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80060F38: lw          $t7, 0x300($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X300);
    // 0x80060F3C: nop

    // 0x80060F40: bne         $t7, $zero, L_80060FAC
    if (ctx->r15 != 0) {
        // 0x80060F44: nop
    
            goto L_80060FAC;
    }
    // 0x80060F44: nop

    // 0x80060F48: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80060F4C: addiu       $t9, $t9, -0x5820
    ctx->r25 = ADD32(ctx->r25, -0X5820);
    // 0x80060F50: addiu       $t8, $t9, 0x48
    ctx->r24 = ADD32(ctx->r25, 0X48);
    // 0x80060F54: or          $t1, $sp, $zero
    ctx->r9 = ctx->r29 | 0;
L_80060F58:
    // 0x80060F58: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80060F5C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80060F60: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x80060F64: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x80060F68: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80060F6C: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x80060F70: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x80060F74: bne         $t9, $t8, L_80060F58
    if (ctx->r25 != ctx->r24) {
        // 0x80060F78: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_80060F58;
    }
    // 0x80060F78: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x80060F7C: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80060F80: nop

    // 0x80060F84: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x80060F88: lw          $t8, 0x4($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X4);
    // 0x80060F8C: nop

    // 0x80060F90: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x80060F94: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80060F98: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80060F9C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80060FA0: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x80060FA4: jal         0x80060D10
    // 0x80060FA8: nop

    func_80060D10(rdram, ctx);
        goto after_2;
    // 0x80060FA8: nop

    after_2:
L_80060FAC:
    // 0x80060FAC: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x80060FB0: lw          $t2, 0x300($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X300);
    // 0x80060FB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80060FB8: bne         $t2, $at, L_80060FD0
    if (ctx->r10 != ctx->r1) {
        // 0x80060FBC: nop
    
            goto L_80060FD0;
    }
    // 0x80060FBC: nop

    // 0x80060FC0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80060FC4: addiu       $a0, $a0, -0x6A90
    ctx->r4 = ADD32(ctx->r4, -0X6A90);
    // 0x80060FC8: jal         0x800B6A20
    // 0x80060FCC: addiu       $a0, $a0, 0xA0
    ctx->r4 = ADD32(ctx->r4, 0XA0);
    osViSetMode_recomp(rdram, ctx);
        goto after_3;
    // 0x80060FCC: addiu       $a0, $a0, 0xA0
    ctx->r4 = ADD32(ctx->r4, 0XA0);
    after_3:
L_80060FD0:
    // 0x80060FD0: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x80060FD4: lw          $t4, 0x300($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X300);
    // 0x80060FD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80060FDC: bne         $t4, $at, L_80060FF4
    if (ctx->r12 != ctx->r1) {
        // 0x80060FE0: nop
    
            goto L_80060FF4;
    }
    // 0x80060FE0: nop

    // 0x80060FE4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80060FE8: addiu       $a0, $a0, -0x6A90
    ctx->r4 = ADD32(ctx->r4, -0X6A90);
    // 0x80060FEC: jal         0x800B6A20
    // 0x80060FF0: addiu       $a0, $a0, 0x960
    ctx->r4 = ADD32(ctx->r4, 0X960);
    osViSetMode_recomp(rdram, ctx);
        goto after_4;
    // 0x80060FF0: addiu       $a0, $a0, 0x960
    ctx->r4 = ADD32(ctx->r4, 0X960);
    after_4:
L_80060FF4:
    // 0x80060FF4: lui         $a0, 0x8
    ctx->r4 = S32(0X8 << 16);
    // 0x80060FF8: jal         0x800B6A90
    // 0x80060FFC: ori         $a0, $a0, 0x401
    ctx->r4 = ctx->r4 | 0X401;
    osSetIntMask_recomp(rdram, ctx);
        goto after_5;
    // 0x80060FFC: ori         $a0, $a0, 0x401
    ctx->r4 = ctx->r4 | 0X401;
    after_5:
    // 0x80061000: lui         $t5, 0x8000
    ctx->r13 = S32(0X8000 << 16);
    // 0x80061004: lw          $t5, 0x300($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X300);
    // 0x80061008: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006100C: bne         $t5, $at, L_80061064
    if (ctx->r13 != ctx->r1) {
        // 0x80061010: sw          $v0, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r2;
            goto L_80061064;
    }
    // 0x80061010: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x80061014: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80061018: lw          $t3, 0x28C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X28C);
    // 0x8006101C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80061020: addiu       $t6, $t6, -0x6A90
    ctx->r14 = ADD32(ctx->r14, -0X6A90);
    // 0x80061024: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80061028: sw          $t3, 0xA8($t6)
    MEM_W(0XA8, ctx->r14) = ctx->r11;
    // 0x8006102C: lw          $t7, 0x284($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X284);
    // 0x80061030: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80061034: addiu       $t0, $t0, -0x6A90
    ctx->r8 = ADD32(ctx->r8, -0X6A90);
    // 0x80061038: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8006103C: sw          $t7, 0xC0($t0)
    MEM_W(0XC0, ctx->r8) = ctx->r15;
    // 0x80061040: lw          $t8, 0x294($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X294);
    // 0x80061044: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80061048: addiu       $t9, $t9, -0x6A90
    ctx->r25 = ADD32(ctx->r25, -0X6A90);
    // 0x8006104C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80061050: sw          $t8, 0xC8($t9)
    MEM_W(0XC8, ctx->r25) = ctx->r24;
    // 0x80061054: lw          $t1, 0x280($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X280);
    // 0x80061058: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8006105C: addiu       $t2, $t2, -0x6A90
    ctx->r10 = ADD32(ctx->r10, -0X6A90);
    // 0x80061060: sw          $t1, 0xCC($t2)
    MEM_W(0XCC, ctx->r10) = ctx->r9;
L_80061064:
    // 0x80061064: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x80061068: lw          $t4, 0x300($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X300);
    // 0x8006106C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80061070: bne         $t4, $at, L_800610D8
    if (ctx->r12 != ctx->r1) {
        // 0x80061074: nop
    
            goto L_800610D8;
    }
    // 0x80061074: nop

    // 0x80061078: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8006107C: addiu       $t3, $t3, -0x6A90
    ctx->r11 = ADD32(ctx->r11, -0X6A90);
    // 0x80061080: addiu       $t5, $zero, 0x190
    ctx->r13 = ADD32(0, 0X190);
    // 0x80061084: sw          $t5, 0x968($t3)
    MEM_W(0X968, ctx->r11) = ctx->r13;
    // 0x80061088: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8006108C: addiu       $t7, $t7, -0x6A90
    ctx->r15 = ADD32(ctx->r15, -0X6A90);
    // 0x80061090: addiu       $t6, $zero, 0x280
    ctx->r14 = ADD32(0, 0X280);
    // 0x80061094: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80061098: sw          $t6, 0x980($t7)
    MEM_W(0X980, ctx->r15) = ctx->r14;
    // 0x8006109C: addiu       $t8, $t8, -0x6A90
    ctx->r24 = ADD32(ctx->r24, -0X6A90);
    // 0x800610A0: addiu       $t0, $zero, 0x320
    ctx->r8 = ADD32(0, 0X320);
    // 0x800610A4: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x800610A8: sw          $t0, 0x988($t8)
    MEM_W(0X988, ctx->r24) = ctx->r8;
    // 0x800610AC: addiu       $t1, $t1, -0x6A90
    ctx->r9 = ADD32(ctx->r9, -0X6A90);
    // 0x800610B0: addiu       $t9, $zero, 0x320
    ctx->r25 = ADD32(0, 0X320);
    // 0x800610B4: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x800610B8: sw          $t9, 0x99C($t1)
    MEM_W(0X99C, ctx->r9) = ctx->r25;
    // 0x800610BC: addiu       $t4, $t4, -0x6A90
    ctx->r12 = ADD32(ctx->r12, -0X6A90);
    // 0x800610C0: addiu       $t2, $zero, 0x50A
    ctx->r10 = ADD32(0, 0X50A);
    // 0x800610C4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x800610C8: sw          $t2, 0x98C($t4)
    MEM_W(0X98C, ctx->r12) = ctx->r10;
    // 0x800610CC: addiu       $t3, $t3, -0x6A90
    ctx->r11 = ADD32(ctx->r11, -0X6A90);
    // 0x800610D0: addiu       $t5, $zero, 0x50A
    ctx->r13 = ADD32(0, 0X50A);
    // 0x800610D4: sw          $t5, 0x9A0($t3)
    MEM_W(0X9A0, ctx->r11) = ctx->r13;
L_800610D8:
    // 0x800610D8: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x800610DC: jal         0x800B6A90
    // 0x800610E0: nop

    osSetIntMask_recomp(rdram, ctx);
        goto after_6;
    // 0x800610E0: nop

    after_6:
    // 0x800610E4: jal         0x800B6650
    // 0x800610E8: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_7;
    // 0x800610E8: nop

    after_7:
    // 0x800610EC: jal         0x800B6330
    // 0x800610F0: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_8;
    // 0x800610F0: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    after_8:
    // 0x800610F4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800610F8: sw          $zero, 0x288($at)
    MEM_W(0X288, ctx->r1) = 0;
L_800610FC:
    // 0x800610FC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80061100: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80061104: jr          $ra
    // 0x80061108: nop

    return;
    // 0x80061108: nop

;}
RECOMP_FUNC void func_8006110C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006110C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80061110: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80061114: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80061118: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8006111C: jr          $ra
    // 0x80061120: sw          $t6, 0x288($at)
    MEM_W(0X288, ctx->r1) = ctx->r14;
    return;
    // 0x80061120: sw          $t6, 0x288($at)
    MEM_W(0X288, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80061124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061124: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80061128: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006112C: jr          $ra
    // 0x80061130: sw          $t6, 0x288($at)
    MEM_W(0X288, ctx->r1) = ctx->r14;
    return;
    // 0x80061130: sw          $t6, 0x288($at)
    MEM_W(0X288, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80061134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061134: multu       $a0, $a1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80061138: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006113C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x80061140: mflo        $t6
    ctx->r14 = lo;
    // 0x80061144: blez        $t6, L_80061190
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80061148: nop
    
            goto L_80061190;
    }
    // 0x80061148: nop

L_8006114C:
    // 0x8006114C: multu       $a0, $a1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80061150: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80061154: lui         $at, 0x8039
    ctx->r1 = S32(0X8039 << 16);
    // 0x80061158: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8006115C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80061160: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80061164: sh          $zero, -0x5300($at)
    MEM_H(-0X5300, ctx->r1) = 0;
    // 0x80061168: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8006116C: lui         $at, 0x803C
    ctx->r1 = S32(0X803C << 16);
    // 0x80061170: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80061174: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80061178: sh          $zero, 0x5680($at)
    MEM_H(0X5680, ctx->r1) = 0;
    // 0x8006117C: mflo        $t3
    ctx->r11 = lo;
    // 0x80061180: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80061184: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80061188: bne         $at, $zero, L_8006114C
    if (ctx->r1 != 0) {
        // 0x8006118C: sw          $t2, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r10;
            goto L_8006114C;
    }
    // 0x8006118C: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
L_80061190:
    // 0x80061190: jr          $ra
    // 0x80061194: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80061194: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80061198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061198: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8006119C: lbu         $t6, -0x1CC($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1CC);
    // 0x800611A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800611A4: beq         $t6, $zero, L_800611C4
    if (ctx->r14 == 0) {
        // 0x800611A8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800611C4;
    }
    // 0x800611A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800611AC: jal         0x800614A8
    // 0x800611B0: nop

    func_800614A8(rdram, ctx);
        goto after_0;
    // 0x800611B0: nop

    after_0:
    // 0x800611B4: jal         0x80060D58
    // 0x800611B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80060D58(rdram, ctx);
        goto after_1;
    // 0x800611B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800611BC: b           L_800611D0
    // 0x800611C0: nop

        goto L_800611D0;
    // 0x800611C0: nop

L_800611C4:
    // 0x800611C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800611C8: jal         0x800611E0
    // 0x800611CC: sw          $zero, 0x30C($at)
    MEM_W(0X30C, ctx->r1) = 0;
    func_800611E0(rdram, ctx);
        goto after_2;
    // 0x800611CC: sw          $zero, 0x30C($at)
    MEM_W(0X30C, ctx->r1) = 0;
    after_2:
L_800611D0:
    // 0x800611D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800611D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800611D8: jr          $ra
    // 0x800611DC: nop

    return;
    // 0x800611DC: nop

;}
RECOMP_FUNC void func_800611E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800611E0: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x800611E4: lw          $t6, 0x30C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X30C);
    // 0x800611E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800611EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800611F0: bne         $t6, $at, L_8006121C
    if (ctx->r14 != ctx->r1) {
        // 0x800611F4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8006121C;
    }
    // 0x800611F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800611F8: jal         0x80061198
    // 0x800611FC: nop

    func_80061198(rdram, ctx);
        goto after_0;
    // 0x800611FC: nop

    after_0:
    // 0x80061200: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80061204: lw          $t7, 0x300($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X300);
    // 0x80061208: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006120C: bne         $t7, $at, L_80061498
    if (ctx->r15 != ctx->r1) {
        // 0x80061210: nop
    
            goto L_80061498;
    }
    // 0x80061210: nop

    // 0x80061214: b           L_80061498
    // 0x80061218: nop

        goto L_80061498;
    // 0x80061218: nop

L_8006121C:
    // 0x8006121C: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x80061220: lw          $t8, 0x300($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X300);
    // 0x80061224: nop

    // 0x80061228: bne         $t8, $zero, L_800612F0
    if (ctx->r24 != 0) {
        // 0x8006122C: nop
    
            goto L_800612F0;
    }
    // 0x8006122C: nop

    // 0x80061230: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80061234: addiu       $t9, $t9, -0x6A90
    ctx->r25 = ADD32(ctx->r25, -0X6A90);
    // 0x80061238: lw          $t0, 0x508($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X508);
    // 0x8006123C: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x80061240: addiu       $t1, $t1, 0x31C
    ctx->r9 = ADD32(ctx->r9, 0X31C);
    // 0x80061244: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80061248: addiu       $t2, $t2, -0x6A90
    ctx->r10 = ADD32(ctx->r10, -0X6A90);
    // 0x8006124C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80061250: lw          $t3, 0x520($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X520);
    // 0x80061254: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x80061258: addiu       $t4, $t4, 0x31C
    ctx->r12 = ADD32(ctx->r12, 0X31C);
    // 0x8006125C: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80061260: addiu       $t5, $t5, -0x6A90
    ctx->r13 = ADD32(ctx->r13, -0X6A90);
    // 0x80061264: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x80061268: lw          $t6, 0x530($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X530);
    // 0x8006126C: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80061270: addiu       $t7, $t7, 0x31C
    ctx->r15 = ADD32(ctx->r15, 0X31C);
    // 0x80061274: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80061278: addiu       $t8, $t8, -0x6A90
    ctx->r24 = ADD32(ctx->r24, -0X6A90);
    // 0x8006127C: sw          $t6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r14;
    // 0x80061280: lw          $t9, 0x544($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X544);
    // 0x80061284: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x80061288: addiu       $t0, $t0, 0x31C
    ctx->r8 = ADD32(ctx->r8, 0X31C);
    // 0x8006128C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80061290: addiu       $t1, $t1, -0x6A90
    ctx->r9 = ADD32(ctx->r9, -0X6A90);
    // 0x80061294: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    // 0x80061298: lw          $t2, 0x528($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X528);
    // 0x8006129C: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x800612A0: addiu       $t3, $t3, 0x31C
    ctx->r11 = ADD32(ctx->r11, 0X31C);
    // 0x800612A4: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x800612A8: addiu       $t4, $t4, -0x6A90
    ctx->r12 = ADD32(ctx->r12, -0X6A90);
    // 0x800612AC: sw          $t2, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r10;
    // 0x800612B0: lw          $t5, 0x53C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X53C);
    // 0x800612B4: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x800612B8: addiu       $t6, $t6, 0x31C
    ctx->r14 = ADD32(ctx->r14, 0X31C);
    // 0x800612BC: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x800612C0: addiu       $t7, $t7, -0x6A90
    ctx->r15 = ADD32(ctx->r15, -0X6A90);
    // 0x800612C4: sw          $t5, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r13;
    // 0x800612C8: lw          $t8, 0x52C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X52C);
    // 0x800612CC: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x800612D0: addiu       $t9, $t9, 0x31C
    ctx->r25 = ADD32(ctx->r25, 0X31C);
    // 0x800612D4: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x800612D8: addiu       $t0, $t0, -0x6A90
    ctx->r8 = ADD32(ctx->r8, -0X6A90);
    // 0x800612DC: sw          $t8, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->r24;
    // 0x800612E0: lw          $t1, 0x540($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X540);
    // 0x800612E4: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x800612E8: addiu       $t2, $t2, 0x31C
    ctx->r10 = ADD32(ctx->r10, 0X31C);
    // 0x800612EC: sw          $t1, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r9;
L_800612F0:
    // 0x800612F0: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x800612F4: lw          $t3, 0x300($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X300);
    // 0x800612F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800612FC: bne         $t3, $at, L_800613C4
    if (ctx->r11 != ctx->r1) {
        // 0x80061300: nop
    
            goto L_800613C4;
    }
    // 0x80061300: nop

    // 0x80061304: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80061308: addiu       $t4, $t4, -0x6A90
    ctx->r12 = ADD32(ctx->r12, -0X6A90);
    // 0x8006130C: lw          $t5, 0xA8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XA8);
    // 0x80061310: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x80061314: addiu       $t6, $t6, 0x31C
    ctx->r14 = ADD32(ctx->r14, 0X31C);
    // 0x80061318: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8006131C: addiu       $t7, $t7, -0x6A90
    ctx->r15 = ADD32(ctx->r15, -0X6A90);
    // 0x80061320: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80061324: lw          $t8, 0xC0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC0);
    // 0x80061328: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x8006132C: addiu       $t9, $t9, 0x31C
    ctx->r25 = ADD32(ctx->r25, 0X31C);
    // 0x80061330: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80061334: addiu       $t0, $t0, -0x6A90
    ctx->r8 = ADD32(ctx->r8, -0X6A90);
    // 0x80061338: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8006133C: lw          $t1, 0xD0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XD0);
    // 0x80061340: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x80061344: addiu       $t2, $t2, 0x31C
    ctx->r10 = ADD32(ctx->r10, 0X31C);
    // 0x80061348: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8006134C: addiu       $t3, $t3, -0x6A90
    ctx->r11 = ADD32(ctx->r11, -0X6A90);
    // 0x80061350: sw          $t1, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r9;
    // 0x80061354: lw          $t4, 0xE4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XE4);
    // 0x80061358: lui         $t5, 0x8000
    ctx->r13 = S32(0X8000 << 16);
    // 0x8006135C: addiu       $t5, $t5, 0x31C
    ctx->r13 = ADD32(ctx->r13, 0X31C);
    // 0x80061360: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80061364: addiu       $t6, $t6, -0x6A90
    ctx->r14 = ADD32(ctx->r14, -0X6A90);
    // 0x80061368: sw          $t4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r12;
    // 0x8006136C: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x80061370: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x80061374: addiu       $t8, $t8, 0x31C
    ctx->r24 = ADD32(ctx->r24, 0X31C);
    // 0x80061378: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8006137C: addiu       $t9, $t9, -0x6A90
    ctx->r25 = ADD32(ctx->r25, -0X6A90);
    // 0x80061380: sw          $t7, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r15;
    // 0x80061384: lw          $t0, 0xDC($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XDC);
    // 0x80061388: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x8006138C: addiu       $t1, $t1, 0x31C
    ctx->r9 = ADD32(ctx->r9, 0X31C);
    // 0x80061390: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80061394: addiu       $t2, $t2, -0x6A90
    ctx->r10 = ADD32(ctx->r10, -0X6A90);
    // 0x80061398: sw          $t0, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r8;
    // 0x8006139C: lw          $t3, 0xCC($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XCC);
    // 0x800613A0: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x800613A4: addiu       $t4, $t4, 0x31C
    ctx->r12 = ADD32(ctx->r12, 0X31C);
    // 0x800613A8: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x800613AC: addiu       $t5, $t5, -0x6A90
    ctx->r13 = ADD32(ctx->r13, -0X6A90);
    // 0x800613B0: sw          $t3, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->r11;
    // 0x800613B4: lw          $t6, 0xE0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XE0);
    // 0x800613B8: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x800613BC: addiu       $t7, $t7, 0x31C
    ctx->r15 = ADD32(ctx->r15, 0X31C);
    // 0x800613C0: sw          $t6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->r14;
L_800613C4:
    // 0x800613C4: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x800613C8: lw          $t8, 0x300($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X300);
    // 0x800613CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800613D0: bne         $t8, $at, L_80061498
    if (ctx->r24 != ctx->r1) {
        // 0x800613D4: nop
    
            goto L_80061498;
    }
    // 0x800613D4: nop

    // 0x800613D8: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x800613DC: addiu       $t9, $t9, -0x6A90
    ctx->r25 = ADD32(ctx->r25, -0X6A90);
    // 0x800613E0: lw          $t0, 0x968($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X968);
    // 0x800613E4: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x800613E8: addiu       $t1, $t1, 0x31C
    ctx->r9 = ADD32(ctx->r9, 0X31C);
    // 0x800613EC: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x800613F0: addiu       $t2, $t2, -0x6A90
    ctx->r10 = ADD32(ctx->r10, -0X6A90);
    // 0x800613F4: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x800613F8: lw          $t3, 0x980($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X980);
    // 0x800613FC: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x80061400: addiu       $t4, $t4, 0x31C
    ctx->r12 = ADD32(ctx->r12, 0X31C);
    // 0x80061404: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80061408: addiu       $t5, $t5, -0x6A90
    ctx->r13 = ADD32(ctx->r13, -0X6A90);
    // 0x8006140C: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x80061410: lw          $t6, 0x990($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X990);
    // 0x80061414: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80061418: addiu       $t7, $t7, 0x31C
    ctx->r15 = ADD32(ctx->r15, 0X31C);
    // 0x8006141C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80061420: addiu       $t8, $t8, -0x6A90
    ctx->r24 = ADD32(ctx->r24, -0X6A90);
    // 0x80061424: sw          $t6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r14;
    // 0x80061428: lw          $t9, 0x9A4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X9A4);
    // 0x8006142C: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x80061430: addiu       $t0, $t0, 0x31C
    ctx->r8 = ADD32(ctx->r8, 0X31C);
    // 0x80061434: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80061438: addiu       $t1, $t1, -0x6A90
    ctx->r9 = ADD32(ctx->r9, -0X6A90);
    // 0x8006143C: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    // 0x80061440: lw          $t2, 0x988($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X988);
    // 0x80061444: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x80061448: addiu       $t3, $t3, 0x31C
    ctx->r11 = ADD32(ctx->r11, 0X31C);
    // 0x8006144C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80061450: addiu       $t4, $t4, -0x6A90
    ctx->r12 = ADD32(ctx->r12, -0X6A90);
    // 0x80061454: sw          $t2, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r10;
    // 0x80061458: lw          $t5, 0x99C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X99C);
    // 0x8006145C: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x80061460: addiu       $t6, $t6, 0x31C
    ctx->r14 = ADD32(ctx->r14, 0X31C);
    // 0x80061464: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80061468: addiu       $t7, $t7, -0x6A90
    ctx->r15 = ADD32(ctx->r15, -0X6A90);
    // 0x8006146C: sw          $t5, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r13;
    // 0x80061470: lw          $t8, 0x98C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X98C);
    // 0x80061474: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x80061478: addiu       $t9, $t9, 0x31C
    ctx->r25 = ADD32(ctx->r25, 0X31C);
    // 0x8006147C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80061480: addiu       $t0, $t0, -0x6A90
    ctx->r8 = ADD32(ctx->r8, -0X6A90);
    // 0x80061484: sw          $t8, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->r24;
    // 0x80061488: lw          $t1, 0x9A0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X9A0);
    // 0x8006148C: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x80061490: addiu       $t2, $t2, 0x31C
    ctx->r10 = ADD32(ctx->r10, 0X31C);
    // 0x80061494: sw          $t1, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r9;
L_80061498:
    // 0x80061498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006149C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800614A0: jr          $ra
    // 0x800614A4: nop

    return;
    // 0x800614A4: nop

;}
RECOMP_FUNC void func_800614A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800614A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800614AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800614B0: lui         $a0, 0x8
    ctx->r4 = S32(0X8 << 16);
    // 0x800614B4: jal         0x800B6A90
    // 0x800614B8: ori         $a0, $a0, 0x401
    ctx->r4 = ctx->r4 | 0X401;
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x800614B8: ori         $a0, $a0, 0x401
    ctx->r4 = ctx->r4 | 0X401;
    after_0:
    // 0x800614BC: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x800614C0: lw          $t6, 0x300($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X300);
    // 0x800614C4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800614C8: bne         $t6, $zero, L_80061578
    if (ctx->r14 != 0) {
        // 0x800614CC: nop
    
            goto L_80061578;
    }
    // 0x800614CC: nop

    // 0x800614D0: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x800614D4: addiu       $t7, $t7, 0x31C
    ctx->r15 = ADD32(ctx->r15, 0X31C);
    // 0x800614D8: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x800614DC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800614E0: sw          $t8, -0x578($at)
    MEM_W(-0X578, ctx->r1) = ctx->r24;
    // 0x800614E4: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x800614E8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800614EC: sw          $t9, -0x560($at)
    MEM_W(-0X560, ctx->r1) = ctx->r25;
    // 0x800614F0: lw          $t0, 0x8($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X8);
    // 0x800614F4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800614F8: addiu       $t1, $t1, -0x580
    ctx->r9 = ADD32(ctx->r9, -0X580);
    // 0x800614FC: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x80061500: addiu       $t2, $t2, 0x31C
    ctx->r10 = ADD32(ctx->r10, 0X31C);
    // 0x80061504: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
    // 0x80061508: lw          $t3, 0xC($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XC);
    // 0x8006150C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80061510: addiu       $t4, $t4, -0x580
    ctx->r12 = ADD32(ctx->r12, -0X580);
    // 0x80061514: lui         $t5, 0x8000
    ctx->r13 = S32(0X8000 << 16);
    // 0x80061518: addiu       $t5, $t5, 0x31C
    ctx->r13 = ADD32(ctx->r13, 0X31C);
    // 0x8006151C: sw          $t3, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->r11;
    // 0x80061520: lw          $t6, 0x10($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X10);
    // 0x80061524: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80061528: addiu       $t8, $t8, -0x580
    ctx->r24 = ADD32(ctx->r24, -0X580);
    // 0x8006152C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x80061530: addiu       $t9, $t9, 0x31C
    ctx->r25 = ADD32(ctx->r25, 0X31C);
    // 0x80061534: sw          $t6, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->r14;
    // 0x80061538: lw          $t7, 0x14($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X14);
    // 0x8006153C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80061540: addiu       $t0, $t0, -0x580
    ctx->r8 = ADD32(ctx->r8, -0X580);
    // 0x80061544: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x80061548: addiu       $t1, $t1, 0x31C
    ctx->r9 = ADD32(ctx->r9, 0X31C);
    // 0x8006154C: sw          $t7, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->r15;
    // 0x80061550: lw          $t2, 0x18($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X18);
    // 0x80061554: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80061558: addiu       $t3, $t3, -0x580
    ctx->r11 = ADD32(ctx->r11, -0X580);
    // 0x8006155C: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x80061560: addiu       $t4, $t4, 0x31C
    ctx->r12 = ADD32(ctx->r12, 0X31C);
    // 0x80061564: sw          $t2, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r10;
    // 0x80061568: lw          $t5, 0x1C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X1C);
    // 0x8006156C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80061570: addiu       $t6, $t6, -0x580
    ctx->r14 = ADD32(ctx->r14, -0X580);
    // 0x80061574: sw          $t5, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->r13;
L_80061578:
    // 0x80061578: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x8006157C: lw          $t8, 0x300($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X300);
    // 0x80061580: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80061584: bne         $t8, $at, L_8006164C
    if (ctx->r24 != ctx->r1) {
        // 0x80061588: nop
    
            goto L_8006164C;
    }
    // 0x80061588: nop

    // 0x8006158C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x80061590: addiu       $t9, $t9, 0x31C
    ctx->r25 = ADD32(ctx->r25, 0X31C);
    // 0x80061594: lw          $t7, 0x0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X0);
    // 0x80061598: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8006159C: addiu       $t0, $t0, -0x6A90
    ctx->r8 = ADD32(ctx->r8, -0X6A90);
    // 0x800615A0: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x800615A4: addiu       $t1, $t1, 0x31C
    ctx->r9 = ADD32(ctx->r9, 0X31C);
    // 0x800615A8: sw          $t7, 0xA8($t0)
    MEM_W(0XA8, ctx->r8) = ctx->r15;
    // 0x800615AC: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x800615B0: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x800615B4: addiu       $t3, $t3, -0x6A90
    ctx->r11 = ADD32(ctx->r11, -0X6A90);
    // 0x800615B8: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x800615BC: addiu       $t4, $t4, 0x31C
    ctx->r12 = ADD32(ctx->r12, 0X31C);
    // 0x800615C0: sw          $t2, 0xC0($t3)
    MEM_W(0XC0, ctx->r11) = ctx->r10;
    // 0x800615C4: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x800615C8: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x800615CC: addiu       $t6, $t6, -0x6A90
    ctx->r14 = ADD32(ctx->r14, -0X6A90);
    // 0x800615D0: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x800615D4: addiu       $t8, $t8, 0x31C
    ctx->r24 = ADD32(ctx->r24, 0X31C);
    // 0x800615D8: sw          $t5, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r13;
    // 0x800615DC: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x800615E0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x800615E4: addiu       $t7, $t7, -0x6A90
    ctx->r15 = ADD32(ctx->r15, -0X6A90);
    // 0x800615E8: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x800615EC: addiu       $t0, $t0, 0x31C
    ctx->r8 = ADD32(ctx->r8, 0X31C);
    // 0x800615F0: sw          $t9, 0xE4($t7)
    MEM_W(0XE4, ctx->r15) = ctx->r25;
    // 0x800615F4: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x800615F8: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x800615FC: addiu       $t2, $t2, -0x6A90
    ctx->r10 = ADD32(ctx->r10, -0X6A90);
    // 0x80061600: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x80061604: addiu       $t3, $t3, 0x31C
    ctx->r11 = ADD32(ctx->r11, 0X31C);
    // 0x80061608: sw          $t1, 0xC8($t2)
    MEM_W(0XC8, ctx->r10) = ctx->r9;
    // 0x8006160C: lw          $t4, 0x14($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X14);
    // 0x80061610: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80061614: addiu       $t5, $t5, -0x6A90
    ctx->r13 = ADD32(ctx->r13, -0X6A90);
    // 0x80061618: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x8006161C: addiu       $t6, $t6, 0x31C
    ctx->r14 = ADD32(ctx->r14, 0X31C);
    // 0x80061620: sw          $t4, 0xDC($t5)
    MEM_W(0XDC, ctx->r13) = ctx->r12;
    // 0x80061624: lw          $t8, 0x18($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X18);
    // 0x80061628: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8006162C: addiu       $t9, $t9, -0x6A90
    ctx->r25 = ADD32(ctx->r25, -0X6A90);
    // 0x80061630: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80061634: addiu       $t7, $t7, 0x31C
    ctx->r15 = ADD32(ctx->r15, 0X31C);
    // 0x80061638: sw          $t8, 0xCC($t9)
    MEM_W(0XCC, ctx->r25) = ctx->r24;
    // 0x8006163C: lw          $t0, 0x1C($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X1C);
    // 0x80061640: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80061644: addiu       $t1, $t1, -0x6A90
    ctx->r9 = ADD32(ctx->r9, -0X6A90);
    // 0x80061648: sw          $t0, 0xE0($t1)
    MEM_W(0XE0, ctx->r9) = ctx->r8;
L_8006164C:
    // 0x8006164C: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x80061650: lw          $t2, 0x300($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X300);
    // 0x80061654: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80061658: bne         $t2, $at, L_80061720
    if (ctx->r10 != ctx->r1) {
        // 0x8006165C: nop
    
            goto L_80061720;
    }
    // 0x8006165C: nop

    // 0x80061660: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x80061664: addiu       $t3, $t3, 0x31C
    ctx->r11 = ADD32(ctx->r11, 0X31C);
    // 0x80061668: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8006166C: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80061670: addiu       $t5, $t5, -0x6A90
    ctx->r13 = ADD32(ctx->r13, -0X6A90);
    // 0x80061674: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x80061678: addiu       $t6, $t6, 0x31C
    ctx->r14 = ADD32(ctx->r14, 0X31C);
    // 0x8006167C: sw          $t4, 0x968($t5)
    MEM_W(0X968, ctx->r13) = ctx->r12;
    // 0x80061680: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x80061684: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80061688: addiu       $t9, $t9, -0x6A90
    ctx->r25 = ADD32(ctx->r25, -0X6A90);
    // 0x8006168C: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80061690: addiu       $t7, $t7, 0x31C
    ctx->r15 = ADD32(ctx->r15, 0X31C);
    // 0x80061694: sw          $t8, 0x980($t9)
    MEM_W(0X980, ctx->r25) = ctx->r24;
    // 0x80061698: lw          $t0, 0x8($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X8);
    // 0x8006169C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x800616A0: addiu       $t1, $t1, -0x6A90
    ctx->r9 = ADD32(ctx->r9, -0X6A90);
    // 0x800616A4: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x800616A8: addiu       $t2, $t2, 0x31C
    ctx->r10 = ADD32(ctx->r10, 0X31C);
    // 0x800616AC: sw          $t0, 0x990($t1)
    MEM_W(0X990, ctx->r9) = ctx->r8;
    // 0x800616B0: lw          $t3, 0xC($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XC);
    // 0x800616B4: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x800616B8: addiu       $t4, $t4, -0x6A90
    ctx->r12 = ADD32(ctx->r12, -0X6A90);
    // 0x800616BC: lui         $t5, 0x8000
    ctx->r13 = S32(0X8000 << 16);
    // 0x800616C0: addiu       $t5, $t5, 0x31C
    ctx->r13 = ADD32(ctx->r13, 0X31C);
    // 0x800616C4: sw          $t3, 0x9A4($t4)
    MEM_W(0X9A4, ctx->r12) = ctx->r11;
    // 0x800616C8: lw          $t6, 0x10($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X10);
    // 0x800616CC: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x800616D0: addiu       $t8, $t8, -0x6A90
    ctx->r24 = ADD32(ctx->r24, -0X6A90);
    // 0x800616D4: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x800616D8: addiu       $t9, $t9, 0x31C
    ctx->r25 = ADD32(ctx->r25, 0X31C);
    // 0x800616DC: sw          $t6, 0x988($t8)
    MEM_W(0X988, ctx->r24) = ctx->r14;
    // 0x800616E0: lw          $t7, 0x14($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X14);
    // 0x800616E4: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x800616E8: addiu       $t0, $t0, -0x6A90
    ctx->r8 = ADD32(ctx->r8, -0X6A90);
    // 0x800616EC: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x800616F0: addiu       $t1, $t1, 0x31C
    ctx->r9 = ADD32(ctx->r9, 0X31C);
    // 0x800616F4: sw          $t7, 0x99C($t0)
    MEM_W(0X99C, ctx->r8) = ctx->r15;
    // 0x800616F8: lw          $t2, 0x18($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X18);
    // 0x800616FC: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80061700: addiu       $t3, $t3, -0x6A90
    ctx->r11 = ADD32(ctx->r11, -0X6A90);
    // 0x80061704: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x80061708: addiu       $t4, $t4, 0x31C
    ctx->r12 = ADD32(ctx->r12, 0X31C);
    // 0x8006170C: sw          $t2, 0x98C($t3)
    MEM_W(0X98C, ctx->r11) = ctx->r10;
    // 0x80061710: lw          $t5, 0x1C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X1C);
    // 0x80061714: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80061718: addiu       $t6, $t6, -0x6A90
    ctx->r14 = ADD32(ctx->r14, -0X6A90);
    // 0x8006171C: sw          $t5, 0x9A0($t6)
    MEM_W(0X9A0, ctx->r14) = ctx->r13;
L_80061720:
    // 0x80061720: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80061724: jal         0x800B6A90
    // 0x80061728: nop

    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80061728: nop

    after_1:
    // 0x8006172C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80061730: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80061734: jr          $ra
    // 0x80061738: nop

    return;
    // 0x80061738: nop

    // 0x8006173C: nop

;}
RECOMP_FUNC void func_80061740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061740: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80061744: lw          $t6, 0x2A0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2A0);
    // 0x80061748: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8006174C: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x80061750: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80061754: beq         $at, $zero, L_8006195C
    if (ctx->r1 == 0) {
        // 0x80061758: sw          $s0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r16;
            goto L_8006195C;
    }
    // 0x80061758: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8006175C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80061760: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80061764: addu        $at, $at, $t6
    gpr jr_addend_80061770 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80061768: lw          $t6, -0x2D30($at)
    ctx->r14 = ADD32(ctx->r1, -0X2D30);
    // 0x8006176C: nop

    // 0x80061770: jr          $t6
    // 0x80061774: nop

    switch (jr_addend_80061770 >> 2) {
        case 0: goto L_80061778; break;
        case 1: goto L_8006183C; break;
        case 2: goto L_8006183C; break;
        case 3: goto L_8006183C; break;
        case 4: goto L_8006183C; break;
        case 5: goto L_8006183C; break;
        case 6: goto L_8006183C; break;
        case 7: goto L_80061854; break;
        case 8: goto L_80061874; break;
        default: switch_error(__func__, 0x80061770, 0x800DD2D0);
    }
    // 0x80061774: nop

L_80061778:
    // 0x80061778: jal         0x8004A34C
    // 0x8006177C: nop

    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x8006177C: nop

    after_0:
    // 0x80061780: jal         0x80060D58
    // 0x80061784: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80060D58(rdram, ctx);
        goto after_1;
    // 0x80061784: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80061788: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8006178C: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x80061790: jal         0x80074888
    // 0x80061794: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    func_80074888(rdram, ctx);
        goto after_2;
    // 0x80061794: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    after_2:
    // 0x80061798: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006179C: jal         0x8007E03C
    // 0x800617A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_3;
    // 0x800617A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800617A4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800617A8: sw          $v0, -0x530($at)
    MEM_W(-0X530, ctx->r1) = ctx->r2;
    // 0x800617AC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800617B0: lw          $a1, -0x530($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X530);
    // 0x800617B4: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x800617B8: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x800617BC: jal         0x800746C0
    // 0x800617C0: addiu       $a2, $zero, 0x4B
    ctx->r6 = ADD32(0, 0X4B);
    func_800746C0(rdram, ctx);
        goto after_4;
    // 0x800617C0: addiu       $a2, $zero, 0x4B
    ctx->r6 = ADD32(0, 0X4B);
    after_4:
    // 0x800617C4: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x800617C8: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x800617CC: jal         0x80074888
    // 0x800617D0: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    func_80074888(rdram, ctx);
        goto after_5;
    // 0x800617D0: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    after_5:
    // 0x800617D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800617D8: jal         0x8007E03C
    // 0x800617DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_6;
    // 0x800617DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x800617E0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800617E4: sw          $v0, -0x52C($at)
    MEM_W(-0X52C, ctx->r1) = ctx->r2;
    // 0x800617E8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800617EC: lw          $a1, -0x52C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X52C);
    // 0x800617F0: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x800617F4: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x800617F8: jal         0x800746C0
    // 0x800617FC: addiu       $a2, $zero, 0x4C
    ctx->r6 = ADD32(0, 0X4C);
    func_800746C0(rdram, ctx);
        goto after_7;
    // 0x800617FC: addiu       $a2, $zero, 0x4C
    ctx->r6 = ADD32(0, 0X4C);
    after_7:
    // 0x80061800: jal         0x8007CF40
    // 0x80061804: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8007CF40(rdram, ctx);
        goto after_8;
    // 0x80061804: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x80061808: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8006180C: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80061810: jal         0x800875EC
    // 0x80061814: addiu       $a0, $zero, 0x6000
    ctx->r4 = ADD32(0, 0X6000);
    func_800875EC(rdram, ctx);
        goto after_9;
    // 0x80061814: addiu       $a0, $zero, 0x6000
    ctx->r4 = ADD32(0, 0X6000);
    after_9:
    // 0x80061818: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    // 0x8006181C: jal         0x80061134
    // 0x80061820: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    func_80061134(rdram, ctx);
        goto after_10;
    // 0x80061820: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    after_10:
    // 0x80061824: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80061828: lw          $t7, 0x2A0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2A0);
    // 0x8006182C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80061830: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80061834: b           L_8006195C
    // 0x80061838: sw          $t8, 0x2A0($at)
    MEM_W(0X2A0, ctx->r1) = ctx->r24;
        goto L_8006195C;
    // 0x80061838: sw          $t8, 0x2A0($at)
    MEM_W(0X2A0, ctx->r1) = ctx->r24;
L_8006183C:
    // 0x8006183C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80061840: lw          $t9, 0x2A0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2A0);
    // 0x80061844: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80061848: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8006184C: b           L_8006195C
    // 0x80061850: sw          $t0, 0x2A0($at)
    MEM_W(0X2A0, ctx->r1) = ctx->r8;
        goto L_8006195C;
    // 0x80061850: sw          $t0, 0x2A0($at)
    MEM_W(0X2A0, ctx->r1) = ctx->r8;
L_80061854:
    // 0x80061854: jal         0x80060D58
    // 0x80061858: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80060D58(rdram, ctx);
        goto after_11;
    // 0x80061858: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x8006185C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80061860: lw          $t1, 0x2A0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2A0);
    // 0x80061864: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80061868: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8006186C: b           L_8006195C
    // 0x80061870: sw          $t2, 0x2A0($at)
    MEM_W(0X2A0, ctx->r1) = ctx->r10;
        goto L_8006195C;
    // 0x80061870: sw          $t2, 0x2A0($at)
    MEM_W(0X2A0, ctx->r1) = ctx->r10;
L_80061874:
    // 0x80061874: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80061878: lw          $a0, 0x20C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20C0);
    // 0x8006187C: jal         0x8007DA00
    // 0x80061880: nop

    func_8007DA00(rdram, ctx);
        goto after_12;
    // 0x80061880: nop

    after_12:
    // 0x80061884: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80061888: lw          $t3, -0x530($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X530);
    // 0x8006188C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80061890: sw          $v0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r2;
    // 0x80061894: lbu         $t5, 0x0($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X0);
    // 0x80061898: lbu         $t4, 0x1($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1);
    // 0x8006189C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800618A0: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x800618A4: lw          $t0, -0x2B0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2B0);
    // 0x800618A8: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x800618AC: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x800618B0: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x800618B4: sra         $t1, $t0, 1
    ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
    // 0x800618B8: subu        $t2, $t1, $t9
    ctx->r10 = SUB32(ctx->r9, ctx->r25);
    // 0x800618BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800618C0: sw          $t2, -0x528($at)
    MEM_W(-0X528, ctx->r1) = ctx->r10;
    // 0x800618C4: lbu         $t4, 0x2($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X2);
    // 0x800618C8: lbu         $t5, 0x3($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X3);
    // 0x800618CC: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x800618D0: sll         $t6, $t4, 8
    ctx->r14 = S32(ctx->r12 << 8);
    // 0x800618D4: lw          $t1, -0x2AC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2AC);
    // 0x800618D8: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x800618DC: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x800618E0: sra         $t0, $t8, 1
    ctx->r8 = S32(SIGNED(ctx->r24) >> 1);
    // 0x800618E4: sra         $t9, $t1, 1
    ctx->r25 = S32(SIGNED(ctx->r9) >> 1);
    // 0x800618E8: subu        $t2, $t9, $t0
    ctx->r10 = SUB32(ctx->r25, ctx->r8);
    // 0x800618EC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800618F0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800618F4: sw          $t2, -0x524($at)
    MEM_W(-0X524, ctx->r1) = ctx->r10;
    // 0x800618F8: jal         0x8005BBFC
    // 0x800618FC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_13;
    // 0x800618FC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_13:
    // 0x80061900: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80061904: lw          $t3, -0x524($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X524);
    // 0x80061908: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8006190C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80061910: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80061914: lw          $a3, -0x528($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X528);
    // 0x80061918: lw          $a2, -0x52C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X52C);
    // 0x8006191C: lw          $a1, -0x530($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X530);
    // 0x80061920: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80061924: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80061928: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8006192C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80061930: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80061934: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80061938: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8006193C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80061940: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80061944: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80061948: jal         0x80057460
    // 0x8006194C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_80057460(rdram, ctx);
        goto after_14;
    // 0x8006194C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_14:
    // 0x80061950: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80061954: jal         0x8005BE40
    // 0x80061958: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_15;
    // 0x80061958: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_15:
L_8006195C:
    // 0x8006195C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80061960: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80061964: jr          $ra
    // 0x80061968: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80061968: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8006196C: nop

;}
RECOMP_FUNC void func_80061970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80061974: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80061978: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006197C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80061980: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x80061984: beq         $at, $zero, L_800619A0
    if (ctx->r1 == 0) {
        // 0x80061988: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800619A0;
    }
    // 0x80061988: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006198C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80061990: jal         0x800AC308
    // 0x80061994: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    func_800AC308(rdram, ctx);
        goto after_0;
    // 0x80061994: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_0:
    // 0x80061998: b           L_80061A24
    // 0x8006199C: nop

        goto L_80061A24;
    // 0x8006199C: nop

L_800619A0:
    // 0x800619A0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800619A4: nop

    // 0x800619A8: sltiu       $at, $t7, 0x64
    ctx->r1 = ctx->r15 < 0X64 ? 1 : 0;
    // 0x800619AC: beq         $at, $zero, L_800619C8
    if (ctx->r1 == 0) {
        // 0x800619B0: nop
    
            goto L_800619C8;
    }
    // 0x800619B0: nop

    // 0x800619B4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800619B8: jal         0x800AC308
    // 0x800619BC: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    func_800AC308(rdram, ctx);
        goto after_1;
    // 0x800619BC: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_1:
    // 0x800619C0: b           L_80061A24
    // 0x800619C4: nop

        goto L_80061A24;
    // 0x800619C4: nop

L_800619C8:
    // 0x800619C8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800619CC: nop

    // 0x800619D0: sltiu       $at, $t8, 0x3E8
    ctx->r1 = ctx->r24 < 0X3E8 ? 1 : 0;
    // 0x800619D4: beq         $at, $zero, L_800619F0
    if (ctx->r1 == 0) {
        // 0x800619D8: nop
    
            goto L_800619F0;
    }
    // 0x800619D8: nop

    // 0x800619DC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800619E0: jal         0x800AC308
    // 0x800619E4: addiu       $a0, $zero, 0xF6
    ctx->r4 = ADD32(0, 0XF6);
    func_800AC308(rdram, ctx);
        goto after_2;
    // 0x800619E4: addiu       $a0, $zero, 0xF6
    ctx->r4 = ADD32(0, 0XF6);
    after_2:
    // 0x800619E8: b           L_80061A24
    // 0x800619EC: nop

        goto L_80061A24;
    // 0x800619EC: nop

L_800619F0:
    // 0x800619F0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800619F4: nop

    // 0x800619F8: sltiu       $at, $t9, 0x2710
    ctx->r1 = ctx->r25 < 0X2710 ? 1 : 0;
    // 0x800619FC: beq         $at, $zero, L_80061A18
    if (ctx->r1 == 0) {
        // 0x80061A00: nop
    
            goto L_80061A18;
    }
    // 0x80061A00: nop

    // 0x80061A04: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80061A08: jal         0x800AC308
    // 0x80061A0C: addiu       $a0, $zero, 0xEE
    ctx->r4 = ADD32(0, 0XEE);
    func_800AC308(rdram, ctx);
        goto after_3;
    // 0x80061A0C: addiu       $a0, $zero, 0xEE
    ctx->r4 = ADD32(0, 0XEE);
    after_3:
    // 0x80061A10: b           L_80061A24
    // 0x80061A14: nop

        goto L_80061A24;
    // 0x80061A14: nop

L_80061A18:
    // 0x80061A18: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80061A1C: jal         0x800AC308
    // 0x80061A20: addiu       $a0, $zero, 0xE6
    ctx->r4 = ADD32(0, 0XE6);
    func_800AC308(rdram, ctx);
        goto after_4;
    // 0x80061A20: addiu       $a0, $zero, 0xE6
    ctx->r4 = ADD32(0, 0XE6);
    after_4:
L_80061A24:
    // 0x80061A24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80061A28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80061A2C: jr          $ra
    // 0x80061A30: nop

    return;
    // 0x80061A30: nop

    // 0x80061A34: jr          $ra
    // 0x80061A38: nop

    return;
    // 0x80061A38: nop

;}
RECOMP_FUNC void func_80061A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061A3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80061A40: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80061A44: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80061A48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80061A4C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80061A50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80061A54: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80061A58: nop

    // 0x80061A5C: beq         $t7, $zero, L_80061B08
    if (ctx->r15 == 0) {
        // 0x80061A60: nop
    
            goto L_80061B08;
    }
    // 0x80061A60: nop

    // 0x80061A64: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80061A68: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x80061A6C: jal         0x80074888
    // 0x80061A70: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80074888(rdram, ctx);
        goto after_0;
    // 0x80061A70: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_0:
    // 0x80061A74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80061A78: jal         0x8007E03C
    // 0x80061A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x80061A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80061A80: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80061A84: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80061A88: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    // 0x80061A8C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80061A90: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80061A94: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80061A98: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x80061A9C: jal         0x800746C0
    // 0x80061AA0: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_800746C0(rdram, ctx);
        goto after_2;
    // 0x80061AA0: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_2:
    // 0x80061AA4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80061AA8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80061AAC: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x80061AB0: nop

    // 0x80061AB4: lbu         $t3, 0x5($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X5);
    // 0x80061AB8: nop

    // 0x80061ABC: bne         $t3, $at, L_80061B08
    if (ctx->r11 != ctx->r1) {
        // 0x80061AC0: nop
    
            goto L_80061B08;
    }
    // 0x80061AC0: nop

    // 0x80061AC4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80061AC8: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80061ACC: lw          $a1, 0x1C($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X1C);
    // 0x80061AD0: jal         0x80074888
    // 0x80061AD4: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_80074888(rdram, ctx);
        goto after_3;
    // 0x80061AD4: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_3:
    // 0x80061AD8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80061ADC: jal         0x8007E03C
    // 0x80061AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_4;
    // 0x80061AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80061AE4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80061AE8: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80061AEC: sw          $v0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->r2;
    // 0x80061AF0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80061AF4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80061AF8: lw          $a2, 0x1C($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X1C);
    // 0x80061AFC: lw          $a1, 0x1C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X1C);
    // 0x80061B00: jal         0x800746C0
    // 0x80061B04: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_800746C0(rdram, ctx);
        goto after_5;
    // 0x80061B04: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_5:
L_80061B08:
    // 0x80061B08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80061B0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80061B10: jr          $ra
    // 0x80061B14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80061B14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80061B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061B18: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80061B1C: lbu         $t6, -0x118($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X118);
    // 0x80061B20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80061B24: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80061B28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80061B2C: bne         $t6, $at, L_80061B40
    if (ctx->r14 != ctx->r1) {
        // 0x80061B30: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_80061B40;
    }
    // 0x80061B30: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80061B34: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80061B38: b           L_80061BE0
    // 0x80061B3C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
        goto L_80061BE0;
    // 0x80061B3C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_80061B40:
    // 0x80061B40: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80061B44: lw          $t8, -0x310($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X310);
    // 0x80061B48: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80061B4C: lw          $t9, 0x18F0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X18F0);
    // 0x80061B50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80061B54: bne         $t9, $at, L_80061B68
    if (ctx->r25 != ctx->r1) {
        // 0x80061B58: nop
    
            goto L_80061B68;
    }
    // 0x80061B58: nop

    // 0x80061B5C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80061B60: b           L_80061BE0
    // 0x80061B64: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
        goto L_80061BE0;
    // 0x80061B64: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_80061B68:
    // 0x80061B68: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80061B6C: lw          $t1, -0x310($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X310);
    // 0x80061B70: nop

    // 0x80061B74: lw          $t2, 0x18F0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X18F0);
    // 0x80061B78: nop

    // 0x80061B7C: bne         $t2, $zero, L_80061BCC
    if (ctx->r10 != 0) {
        // 0x80061B80: nop
    
            goto L_80061BCC;
    }
    // 0x80061B80: nop

    // 0x80061B84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80061B88: jal         0x800A35EC
    // 0x80061B8C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    func_800A35EC(rdram, ctx);
        goto after_0;
    // 0x80061B8C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_0:
    // 0x80061B90: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80061B94: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80061B98: nop

    // 0x80061B9C: slti        $at, $t3, 0x1E
    ctx->r1 = SIGNED(ctx->r11) < 0X1E ? 1 : 0;
    // 0x80061BA0: beq         $at, $zero, L_80061BB4
    if (ctx->r1 == 0) {
        // 0x80061BA4: nop
    
            goto L_80061BB4;
    }
    // 0x80061BA4: nop

    // 0x80061BA8: addiu       $t4, $zero, 0xFE
    ctx->r12 = ADD32(0, 0XFE);
    // 0x80061BAC: b           L_80061BE0
    // 0x80061BB0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
        goto L_80061BE0;
    // 0x80061BB0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
L_80061BB4:
    // 0x80061BB4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80061BB8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80061BBC: jal         0x800A35EC
    // 0x80061BC0: addiu       $a1, $a1, 0x9
    ctx->r5 = ADD32(ctx->r5, 0X9);
    func_800A35EC(rdram, ctx);
        goto after_1;
    // 0x80061BC0: addiu       $a1, $a1, 0x9
    ctx->r5 = ADD32(ctx->r5, 0X9);
    after_1:
    // 0x80061BC4: b           L_80061BE0
    // 0x80061BC8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
        goto L_80061BE0;
    // 0x80061BC8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_80061BCC:
    // 0x80061BCC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80061BD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80061BD4: jal         0x800A35EC
    // 0x80061BD8: addiu       $a1, $a1, 0x9
    ctx->r5 = ADD32(ctx->r5, 0X9);
    func_800A35EC(rdram, ctx);
        goto after_2;
    // 0x80061BD8: addiu       $a1, $a1, 0x9
    ctx->r5 = ADD32(ctx->r5, 0X9);
    after_2:
    // 0x80061BDC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_80061BE0:
    // 0x80061BE0: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80061BE4: lh          $t5, -0x12C($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X12C);
    // 0x80061BE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80061BEC: bne         $t5, $at, L_80061FBC
    if (ctx->r13 != ctx->r1) {
        // 0x80061BF0: nop
    
            goto L_80061FBC;
    }
    // 0x80061BF0: nop

    // 0x80061BF4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80061BF8: nop

    // 0x80061BFC: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x80061C00: beq         $at, $zero, L_80061FBC
    if (ctx->r1 == 0) {
        // 0x80061C04: nop
    
            goto L_80061FBC;
    }
    // 0x80061C04: nop

    // 0x80061C08: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80061C0C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80061C10: addu        $at, $at, $t6
    gpr jr_addend_80061C1C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80061C14: lw          $t6, -0x2CE4($at)
    ctx->r14 = ADD32(ctx->r1, -0X2CE4);
    // 0x80061C18: nop

    // 0x80061C1C: jr          $t6
    // 0x80061C20: nop

    switch (jr_addend_80061C1C >> 2) {
        case 0: goto L_80061C24; break;
        case 1: goto L_80061C98; break;
        case 2: goto L_80061D0C; break;
        case 3: goto L_80061D80; break;
        case 4: goto L_80061DF4; break;
        case 5: goto L_80061E68; break;
        case 6: goto L_80061EDC; break;
        case 7: goto L_80061F50; break;
        default: switch_error(__func__, 0x80061C1C, 0x800DD31C);
    }
    // 0x80061C20: nop

L_80061C24:
    // 0x80061C24: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80061C28: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80061C2C: bne         $t7, $at, L_80061C5C
    if (ctx->r15 != ctx->r1) {
        // 0x80061C30: nop
    
            goto L_80061C5C;
    }
    // 0x80061C30: nop

    // 0x80061C34: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80061C38: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80061C3C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x80061C40: jal         0x80084E20
    // 0x80061C44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_3;
    // 0x80061C44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80061C48: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80061C4C: jal         0x80087784
    // 0x80061C50: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_4;
    // 0x80061C50: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_4:
    // 0x80061C54: b           L_80061FBC
    // 0x80061C58: nop

        goto L_80061FBC;
    // 0x80061C58: nop

L_80061C5C:
    // 0x80061C5C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80061C60: nop

    // 0x80061C64: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x80061C68: beq         $at, $zero, L_80061FBC
    if (ctx->r1 == 0) {
        // 0x80061C6C: nop
    
            goto L_80061FBC;
    }
    // 0x80061C6C: nop

    // 0x80061C70: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80061C74: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80061C78: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80061C7C: jal         0x80084E20
    // 0x80061C80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_5;
    // 0x80061C80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80061C84: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80061C88: jal         0x80087784
    // 0x80061C8C: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_6;
    // 0x80061C8C: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_6:
    // 0x80061C90: b           L_80061FBC
    // 0x80061C94: nop

        goto L_80061FBC;
    // 0x80061C94: nop

L_80061C98:
    // 0x80061C98: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80061C9C: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80061CA0: bne         $t9, $at, L_80061CD0
    if (ctx->r25 != ctx->r1) {
        // 0x80061CA4: nop
    
            goto L_80061CD0;
    }
    // 0x80061CA4: nop

    // 0x80061CA8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80061CAC: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80061CB0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80061CB4: jal         0x80084E20
    // 0x80061CB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_7;
    // 0x80061CB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80061CBC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80061CC0: jal         0x80087784
    // 0x80061CC4: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_8;
    // 0x80061CC4: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_8:
    // 0x80061CC8: b           L_80061FBC
    // 0x80061CCC: nop

        goto L_80061FBC;
    // 0x80061CCC: nop

L_80061CD0:
    // 0x80061CD0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80061CD4: nop

    // 0x80061CD8: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x80061CDC: beq         $at, $zero, L_80061FBC
    if (ctx->r1 == 0) {
        // 0x80061CE0: nop
    
            goto L_80061FBC;
    }
    // 0x80061CE0: nop

    // 0x80061CE4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80061CE8: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80061CEC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80061CF0: jal         0x80084E20
    // 0x80061CF4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_9;
    // 0x80061CF4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x80061CF8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80061CFC: jal         0x80087784
    // 0x80061D00: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_10;
    // 0x80061D00: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_10:
    // 0x80061D04: b           L_80061FBC
    // 0x80061D08: nop

        goto L_80061FBC;
    // 0x80061D08: nop

L_80061D0C:
    // 0x80061D0C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80061D10: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80061D14: bne         $t1, $at, L_80061D44
    if (ctx->r9 != ctx->r1) {
        // 0x80061D18: nop
    
            goto L_80061D44;
    }
    // 0x80061D18: nop

    // 0x80061D1C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80061D20: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80061D24: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x80061D28: jal         0x80084E20
    // 0x80061D2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_11;
    // 0x80061D2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x80061D30: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80061D34: jal         0x80087784
    // 0x80061D38: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_12;
    // 0x80061D38: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_12:
    // 0x80061D3C: b           L_80061FBC
    // 0x80061D40: nop

        goto L_80061FBC;
    // 0x80061D40: nop

L_80061D44:
    // 0x80061D44: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80061D48: nop

    // 0x80061D4C: slti        $at, $t2, 0x10
    ctx->r1 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x80061D50: beq         $at, $zero, L_80061FBC
    if (ctx->r1 == 0) {
        // 0x80061D54: nop
    
            goto L_80061FBC;
    }
    // 0x80061D54: nop

    // 0x80061D58: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80061D5C: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80061D60: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80061D64: jal         0x80084E20
    // 0x80061D68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_13;
    // 0x80061D68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x80061D6C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80061D70: jal         0x80087784
    // 0x80061D74: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_14;
    // 0x80061D74: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_14:
    // 0x80061D78: b           L_80061FBC
    // 0x80061D7C: nop

        goto L_80061FBC;
    // 0x80061D7C: nop

L_80061D80:
    // 0x80061D80: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80061D84: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80061D88: bne         $t3, $at, L_80061DB8
    if (ctx->r11 != ctx->r1) {
        // 0x80061D8C: nop
    
            goto L_80061DB8;
    }
    // 0x80061D8C: nop

    // 0x80061D90: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80061D94: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80061D98: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x80061D9C: jal         0x80084E20
    // 0x80061DA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_15;
    // 0x80061DA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x80061DA4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80061DA8: jal         0x80087784
    // 0x80061DAC: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_16;
    // 0x80061DAC: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_16:
    // 0x80061DB0: b           L_80061FBC
    // 0x80061DB4: nop

        goto L_80061FBC;
    // 0x80061DB4: nop

L_80061DB8:
    // 0x80061DB8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80061DBC: nop

    // 0x80061DC0: slti        $at, $t4, 0x10
    ctx->r1 = SIGNED(ctx->r12) < 0X10 ? 1 : 0;
    // 0x80061DC4: beq         $at, $zero, L_80061FBC
    if (ctx->r1 == 0) {
        // 0x80061DC8: nop
    
            goto L_80061FBC;
    }
    // 0x80061DC8: nop

    // 0x80061DCC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80061DD0: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80061DD4: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80061DD8: jal         0x80084E20
    // 0x80061DDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_17;
    // 0x80061DDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_17:
    // 0x80061DE0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80061DE4: jal         0x80087784
    // 0x80061DE8: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_18;
    // 0x80061DE8: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_18:
    // 0x80061DEC: b           L_80061FBC
    // 0x80061DF0: nop

        goto L_80061FBC;
    // 0x80061DF0: nop

L_80061DF4:
    // 0x80061DF4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80061DF8: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80061DFC: bne         $t5, $at, L_80061E2C
    if (ctx->r13 != ctx->r1) {
        // 0x80061E00: nop
    
            goto L_80061E2C;
    }
    // 0x80061E00: nop

    // 0x80061E04: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80061E08: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80061E0C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x80061E10: jal         0x80084E20
    // 0x80061E14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_19;
    // 0x80061E14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_19:
    // 0x80061E18: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80061E1C: jal         0x80087784
    // 0x80061E20: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_20;
    // 0x80061E20: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_20:
    // 0x80061E24: b           L_80061FBC
    // 0x80061E28: nop

        goto L_80061FBC;
    // 0x80061E28: nop

L_80061E2C:
    // 0x80061E2C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80061E30: nop

    // 0x80061E34: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x80061E38: beq         $at, $zero, L_80061FBC
    if (ctx->r1 == 0) {
        // 0x80061E3C: nop
    
            goto L_80061FBC;
    }
    // 0x80061E3C: nop

    // 0x80061E40: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80061E44: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80061E48: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80061E4C: jal         0x80084E20
    // 0x80061E50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_21;
    // 0x80061E50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_21:
    // 0x80061E54: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80061E58: jal         0x80087784
    // 0x80061E5C: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_22;
    // 0x80061E5C: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_22:
    // 0x80061E60: b           L_80061FBC
    // 0x80061E64: nop

        goto L_80061FBC;
    // 0x80061E64: nop

L_80061E68:
    // 0x80061E68: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80061E6C: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80061E70: bne         $t7, $at, L_80061EA0
    if (ctx->r15 != ctx->r1) {
        // 0x80061E74: nop
    
            goto L_80061EA0;
    }
    // 0x80061E74: nop

    // 0x80061E78: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80061E7C: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80061E80: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80061E84: jal         0x80084E20
    // 0x80061E88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_23;
    // 0x80061E88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_23:
    // 0x80061E8C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80061E90: jal         0x80087784
    // 0x80061E94: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_24;
    // 0x80061E94: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_24:
    // 0x80061E98: b           L_80061FBC
    // 0x80061E9C: nop

        goto L_80061FBC;
    // 0x80061E9C: nop

L_80061EA0:
    // 0x80061EA0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80061EA4: nop

    // 0x80061EA8: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x80061EAC: beq         $at, $zero, L_80061FBC
    if (ctx->r1 == 0) {
        // 0x80061EB0: nop
    
            goto L_80061FBC;
    }
    // 0x80061EB0: nop

    // 0x80061EB4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80061EB8: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80061EBC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80061EC0: jal         0x80084E20
    // 0x80061EC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_25;
    // 0x80061EC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_25:
    // 0x80061EC8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80061ECC: jal         0x80087784
    // 0x80061ED0: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_26;
    // 0x80061ED0: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_26:
    // 0x80061ED4: b           L_80061FBC
    // 0x80061ED8: nop

        goto L_80061FBC;
    // 0x80061ED8: nop

L_80061EDC:
    // 0x80061EDC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80061EE0: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80061EE4: bne         $t9, $at, L_80061F14
    if (ctx->r25 != ctx->r1) {
        // 0x80061EE8: nop
    
            goto L_80061F14;
    }
    // 0x80061EE8: nop

    // 0x80061EEC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80061EF0: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80061EF4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x80061EF8: jal         0x80084E20
    // 0x80061EFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_27;
    // 0x80061EFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_27:
    // 0x80061F00: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80061F04: jal         0x80087784
    // 0x80061F08: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_28;
    // 0x80061F08: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_28:
    // 0x80061F0C: b           L_80061FBC
    // 0x80061F10: nop

        goto L_80061FBC;
    // 0x80061F10: nop

L_80061F14:
    // 0x80061F14: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80061F18: nop

    // 0x80061F1C: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x80061F20: beq         $at, $zero, L_80061FBC
    if (ctx->r1 == 0) {
        // 0x80061F24: nop
    
            goto L_80061FBC;
    }
    // 0x80061F24: nop

    // 0x80061F28: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80061F2C: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80061F30: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80061F34: jal         0x80084E20
    // 0x80061F38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_29;
    // 0x80061F38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_29:
    // 0x80061F3C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80061F40: jal         0x80087784
    // 0x80061F44: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_30;
    // 0x80061F44: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_30:
    // 0x80061F48: b           L_80061FBC
    // 0x80061F4C: nop

        goto L_80061FBC;
    // 0x80061F4C: nop

L_80061F50:
    // 0x80061F50: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80061F54: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80061F58: bne         $t1, $at, L_80061F88
    if (ctx->r9 != ctx->r1) {
        // 0x80061F5C: nop
    
            goto L_80061F88;
    }
    // 0x80061F5C: nop

    // 0x80061F60: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80061F64: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80061F68: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x80061F6C: jal         0x80084E20
    // 0x80061F70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_31;
    // 0x80061F70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_31:
    // 0x80061F74: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80061F78: jal         0x80087784
    // 0x80061F7C: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_32;
    // 0x80061F7C: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_32:
    // 0x80061F80: b           L_80061FBC
    // 0x80061F84: nop

        goto L_80061FBC;
    // 0x80061F84: nop

L_80061F88:
    // 0x80061F88: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80061F8C: nop

    // 0x80061F90: slti        $at, $t2, 0x10
    ctx->r1 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x80061F94: beq         $at, $zero, L_80061FBC
    if (ctx->r1 == 0) {
        // 0x80061F98: nop
    
            goto L_80061FBC;
    }
    // 0x80061F98: nop

    // 0x80061F9C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80061FA0: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80061FA4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80061FA8: jal         0x80084E20
    // 0x80061FAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_33;
    // 0x80061FAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_33:
    // 0x80061FB0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80061FB4: jal         0x80087784
    // 0x80061FB8: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_34;
    // 0x80061FB8: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_34:
L_80061FBC:
    // 0x80061FBC: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80061FC0: lh          $t3, -0x12C($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X12C);
    // 0x80061FC4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80061FC8: bne         $t3, $at, L_80062398
    if (ctx->r11 != ctx->r1) {
        // 0x80061FCC: nop
    
            goto L_80062398;
    }
    // 0x80061FCC: nop

    // 0x80061FD0: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80061FD4: nop

    // 0x80061FD8: sltiu       $at, $t4, 0x8
    ctx->r1 = ctx->r12 < 0X8 ? 1 : 0;
    // 0x80061FDC: beq         $at, $zero, L_80062398
    if (ctx->r1 == 0) {
        // 0x80061FE0: nop
    
            goto L_80062398;
    }
    // 0x80061FE0: nop

    // 0x80061FE4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80061FE8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80061FEC: addu        $at, $at, $t4
    gpr jr_addend_80061FF8 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80061FF0: lw          $t4, -0x2CC4($at)
    ctx->r12 = ADD32(ctx->r1, -0X2CC4);
    // 0x80061FF4: nop

    // 0x80061FF8: jr          $t4
    // 0x80061FFC: nop

    switch (jr_addend_80061FF8 >> 2) {
        case 0: goto L_80062000; break;
        case 1: goto L_80062074; break;
        case 2: goto L_800620E8; break;
        case 3: goto L_8006215C; break;
        case 4: goto L_800621D0; break;
        case 5: goto L_80062244; break;
        case 6: goto L_800622B8; break;
        case 7: goto L_8006232C; break;
        default: switch_error(__func__, 0x80061FF8, 0x800DD33C);
    }
    // 0x80061FFC: nop

L_80062000:
    // 0x80062000: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80062004: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80062008: bne         $t5, $at, L_80062038
    if (ctx->r13 != ctx->r1) {
        // 0x8006200C: nop
    
            goto L_80062038;
    }
    // 0x8006200C: nop

    // 0x80062010: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062014: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80062018: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8006201C: jal         0x80084E20
    // 0x80062020: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_35;
    // 0x80062020: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_35:
    // 0x80062024: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062028: jal         0x80087784
    // 0x8006202C: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_36;
    // 0x8006202C: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_36:
    // 0x80062030: b           L_80062398
    // 0x80062034: nop

        goto L_80062398;
    // 0x80062034: nop

L_80062038:
    // 0x80062038: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8006203C: nop

    // 0x80062040: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x80062044: beq         $at, $zero, L_80062398
    if (ctx->r1 == 0) {
        // 0x80062048: nop
    
            goto L_80062398;
    }
    // 0x80062048: nop

    // 0x8006204C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062050: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80062054: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80062058: jal         0x80084E20
    // 0x8006205C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_37;
    // 0x8006205C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_37:
    // 0x80062060: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062064: jal         0x80087784
    // 0x80062068: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_38;
    // 0x80062068: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_38:
    // 0x8006206C: b           L_80062398
    // 0x80062070: nop

        goto L_80062398;
    // 0x80062070: nop

L_80062074:
    // 0x80062074: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80062078: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x8006207C: bne         $t7, $at, L_800620AC
    if (ctx->r15 != ctx->r1) {
        // 0x80062080: nop
    
            goto L_800620AC;
    }
    // 0x80062080: nop

    // 0x80062084: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062088: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x8006208C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80062090: jal         0x80084E20
    // 0x80062094: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_39;
    // 0x80062094: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_39:
    // 0x80062098: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006209C: jal         0x80087784
    // 0x800620A0: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_40;
    // 0x800620A0: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_40:
    // 0x800620A4: b           L_80062398
    // 0x800620A8: nop

        goto L_80062398;
    // 0x800620A8: nop

L_800620AC:
    // 0x800620AC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800620B0: nop

    // 0x800620B4: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x800620B8: beq         $at, $zero, L_80062398
    if (ctx->r1 == 0) {
        // 0x800620BC: nop
    
            goto L_80062398;
    }
    // 0x800620BC: nop

    // 0x800620C0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800620C4: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x800620C8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800620CC: jal         0x80084E20
    // 0x800620D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_41;
    // 0x800620D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_41:
    // 0x800620D4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800620D8: jal         0x80087784
    // 0x800620DC: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_42;
    // 0x800620DC: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_42:
    // 0x800620E0: b           L_80062398
    // 0x800620E4: nop

        goto L_80062398;
    // 0x800620E4: nop

L_800620E8:
    // 0x800620E8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800620EC: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x800620F0: bne         $t9, $at, L_80062120
    if (ctx->r25 != ctx->r1) {
        // 0x800620F4: nop
    
            goto L_80062120;
    }
    // 0x800620F4: nop

    // 0x800620F8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800620FC: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80062100: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x80062104: jal         0x80084E20
    // 0x80062108: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_43;
    // 0x80062108: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_43:
    // 0x8006210C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062110: jal         0x80087784
    // 0x80062114: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_44;
    // 0x80062114: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_44:
    // 0x80062118: b           L_80062398
    // 0x8006211C: nop

        goto L_80062398;
    // 0x8006211C: nop

L_80062120:
    // 0x80062120: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80062124: nop

    // 0x80062128: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x8006212C: beq         $at, $zero, L_80062398
    if (ctx->r1 == 0) {
        // 0x80062130: nop
    
            goto L_80062398;
    }
    // 0x80062130: nop

    // 0x80062134: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062138: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x8006213C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80062140: jal         0x80084E20
    // 0x80062144: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_45;
    // 0x80062144: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_45:
    // 0x80062148: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006214C: jal         0x80087784
    // 0x80062150: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_46;
    // 0x80062150: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_46:
    // 0x80062154: b           L_80062398
    // 0x80062158: nop

        goto L_80062398;
    // 0x80062158: nop

L_8006215C:
    // 0x8006215C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80062160: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80062164: bne         $t1, $at, L_80062194
    if (ctx->r9 != ctx->r1) {
        // 0x80062168: nop
    
            goto L_80062194;
    }
    // 0x80062168: nop

    // 0x8006216C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062170: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80062174: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x80062178: jal         0x80084E20
    // 0x8006217C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_47;
    // 0x8006217C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_47:
    // 0x80062180: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062184: jal         0x80087784
    // 0x80062188: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_48;
    // 0x80062188: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_48:
    // 0x8006218C: b           L_80062398
    // 0x80062190: nop

        goto L_80062398;
    // 0x80062190: nop

L_80062194:
    // 0x80062194: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80062198: nop

    // 0x8006219C: slti        $at, $t2, 0x10
    ctx->r1 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x800621A0: beq         $at, $zero, L_80062398
    if (ctx->r1 == 0) {
        // 0x800621A4: nop
    
            goto L_80062398;
    }
    // 0x800621A4: nop

    // 0x800621A8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800621AC: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x800621B0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x800621B4: jal         0x80084E20
    // 0x800621B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_49;
    // 0x800621B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_49:
    // 0x800621BC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800621C0: jal         0x80087784
    // 0x800621C4: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_50;
    // 0x800621C4: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_50:
    // 0x800621C8: b           L_80062398
    // 0x800621CC: nop

        goto L_80062398;
    // 0x800621CC: nop

L_800621D0:
    // 0x800621D0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800621D4: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x800621D8: bne         $t3, $at, L_80062208
    if (ctx->r11 != ctx->r1) {
        // 0x800621DC: nop
    
            goto L_80062208;
    }
    // 0x800621DC: nop

    // 0x800621E0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800621E4: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x800621E8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x800621EC: jal         0x80084E20
    // 0x800621F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_51;
    // 0x800621F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_51:
    // 0x800621F4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800621F8: jal         0x80087784
    // 0x800621FC: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_52;
    // 0x800621FC: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_52:
    // 0x80062200: b           L_80062398
    // 0x80062204: nop

        goto L_80062398;
    // 0x80062204: nop

L_80062208:
    // 0x80062208: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8006220C: nop

    // 0x80062210: slti        $at, $t4, 0x10
    ctx->r1 = SIGNED(ctx->r12) < 0X10 ? 1 : 0;
    // 0x80062214: beq         $at, $zero, L_80062398
    if (ctx->r1 == 0) {
        // 0x80062218: nop
    
            goto L_80062398;
    }
    // 0x80062218: nop

    // 0x8006221C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062220: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80062224: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80062228: jal         0x80084E20
    // 0x8006222C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_53;
    // 0x8006222C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_53:
    // 0x80062230: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062234: jal         0x80087784
    // 0x80062238: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_54;
    // 0x80062238: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_54:
    // 0x8006223C: b           L_80062398
    // 0x80062240: nop

        goto L_80062398;
    // 0x80062240: nop

L_80062244:
    // 0x80062244: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80062248: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x8006224C: bne         $t5, $at, L_8006227C
    if (ctx->r13 != ctx->r1) {
        // 0x80062250: nop
    
            goto L_8006227C;
    }
    // 0x80062250: nop

    // 0x80062254: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062258: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x8006225C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80062260: jal         0x80084E20
    // 0x80062264: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_55;
    // 0x80062264: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_55:
    // 0x80062268: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006226C: jal         0x80087784
    // 0x80062270: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_56;
    // 0x80062270: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_56:
    // 0x80062274: b           L_80062398
    // 0x80062278: nop

        goto L_80062398;
    // 0x80062278: nop

L_8006227C:
    // 0x8006227C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80062280: nop

    // 0x80062284: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x80062288: beq         $at, $zero, L_80062398
    if (ctx->r1 == 0) {
        // 0x8006228C: nop
    
            goto L_80062398;
    }
    // 0x8006228C: nop

    // 0x80062290: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062294: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80062298: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8006229C: jal         0x80084E20
    // 0x800622A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_57;
    // 0x800622A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_57:
    // 0x800622A4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800622A8: jal         0x80087784
    // 0x800622AC: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_58;
    // 0x800622AC: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_58:
    // 0x800622B0: b           L_80062398
    // 0x800622B4: nop

        goto L_80062398;
    // 0x800622B4: nop

L_800622B8:
    // 0x800622B8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800622BC: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x800622C0: bne         $t7, $at, L_800622F0
    if (ctx->r15 != ctx->r1) {
        // 0x800622C4: nop
    
            goto L_800622F0;
    }
    // 0x800622C4: nop

    // 0x800622C8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800622CC: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x800622D0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x800622D4: jal         0x80084E20
    // 0x800622D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_59;
    // 0x800622D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_59:
    // 0x800622DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800622E0: jal         0x80087784
    // 0x800622E4: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_60;
    // 0x800622E4: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_60:
    // 0x800622E8: b           L_80062398
    // 0x800622EC: nop

        goto L_80062398;
    // 0x800622EC: nop

L_800622F0:
    // 0x800622F0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800622F4: nop

    // 0x800622F8: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x800622FC: beq         $at, $zero, L_80062398
    if (ctx->r1 == 0) {
        // 0x80062300: nop
    
            goto L_80062398;
    }
    // 0x80062300: nop

    // 0x80062304: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062308: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x8006230C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80062310: jal         0x80084E20
    // 0x80062314: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_61;
    // 0x80062314: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_61:
    // 0x80062318: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006231C: jal         0x80087784
    // 0x80062320: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_62;
    // 0x80062320: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_62:
    // 0x80062324: b           L_80062398
    // 0x80062328: nop

        goto L_80062398;
    // 0x80062328: nop

L_8006232C:
    // 0x8006232C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80062330: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80062334: bne         $t9, $at, L_80062364
    if (ctx->r25 != ctx->r1) {
        // 0x80062338: nop
    
            goto L_80062364;
    }
    // 0x80062338: nop

    // 0x8006233C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062340: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80062344: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x80062348: jal         0x80084E20
    // 0x8006234C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_63;
    // 0x8006234C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_63:
    // 0x80062350: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062354: jal         0x80087784
    // 0x80062358: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_64;
    // 0x80062358: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_64:
    // 0x8006235C: b           L_80062398
    // 0x80062360: nop

        goto L_80062398;
    // 0x80062360: nop

L_80062364:
    // 0x80062364: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80062368: nop

    // 0x8006236C: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x80062370: beq         $at, $zero, L_80062398
    if (ctx->r1 == 0) {
        // 0x80062374: nop
    
            goto L_80062398;
    }
    // 0x80062374: nop

    // 0x80062378: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8006237C: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80062380: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80062384: jal         0x80084E20
    // 0x80062388: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_65;
    // 0x80062388: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_65:
    // 0x8006238C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062390: jal         0x80087784
    // 0x80062394: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_66;
    // 0x80062394: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_66:
L_80062398:
    // 0x80062398: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8006239C: lh          $t1, -0x12C($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X12C);
    // 0x800623A0: nop

    // 0x800623A4: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x800623A8: bne         $at, $zero, L_80062778
    if (ctx->r1 != 0) {
        // 0x800623AC: nop
    
            goto L_80062778;
    }
    // 0x800623AC: nop

    // 0x800623B0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800623B4: nop

    // 0x800623B8: sltiu       $at, $t2, 0x8
    ctx->r1 = ctx->r10 < 0X8 ? 1 : 0;
    // 0x800623BC: beq         $at, $zero, L_80062778
    if (ctx->r1 == 0) {
        // 0x800623C0: nop
    
            goto L_80062778;
    }
    // 0x800623C0: nop

    // 0x800623C4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800623C8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800623CC: addu        $at, $at, $t2
    gpr jr_addend_800623D8 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800623D0: lw          $t2, -0x2CA4($at)
    ctx->r10 = ADD32(ctx->r1, -0X2CA4);
    // 0x800623D4: nop

    // 0x800623D8: jr          $t2
    // 0x800623DC: nop

    switch (jr_addend_800623D8 >> 2) {
        case 0: goto L_800623E0; break;
        case 1: goto L_80062454; break;
        case 2: goto L_800624C8; break;
        case 3: goto L_8006253C; break;
        case 4: goto L_800625B0; break;
        case 5: goto L_80062624; break;
        case 6: goto L_80062698; break;
        case 7: goto L_8006270C; break;
        default: switch_error(__func__, 0x800623D8, 0x800DD35C);
    }
    // 0x800623DC: nop

L_800623E0:
    // 0x800623E0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800623E4: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x800623E8: bne         $t3, $at, L_80062418
    if (ctx->r11 != ctx->r1) {
        // 0x800623EC: nop
    
            goto L_80062418;
    }
    // 0x800623EC: nop

    // 0x800623F0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800623F4: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x800623F8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x800623FC: jal         0x80084E20
    // 0x80062400: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_67;
    // 0x80062400: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_67:
    // 0x80062404: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062408: jal         0x80087784
    // 0x8006240C: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_68;
    // 0x8006240C: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_68:
    // 0x80062410: b           L_80062778
    // 0x80062414: nop

        goto L_80062778;
    // 0x80062414: nop

L_80062418:
    // 0x80062418: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8006241C: nop

    // 0x80062420: slti        $at, $t4, 0x10
    ctx->r1 = SIGNED(ctx->r12) < 0X10 ? 1 : 0;
    // 0x80062424: beq         $at, $zero, L_80062778
    if (ctx->r1 == 0) {
        // 0x80062428: nop
    
            goto L_80062778;
    }
    // 0x80062428: nop

    // 0x8006242C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062430: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80062434: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80062438: jal         0x80084E20
    // 0x8006243C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_69;
    // 0x8006243C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_69:
    // 0x80062440: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062444: jal         0x80087784
    // 0x80062448: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_70;
    // 0x80062448: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_70:
    // 0x8006244C: b           L_80062778
    // 0x80062450: nop

        goto L_80062778;
    // 0x80062450: nop

L_80062454:
    // 0x80062454: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80062458: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x8006245C: bne         $t5, $at, L_8006248C
    if (ctx->r13 != ctx->r1) {
        // 0x80062460: nop
    
            goto L_8006248C;
    }
    // 0x80062460: nop

    // 0x80062464: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062468: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x8006246C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80062470: jal         0x80084E20
    // 0x80062474: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_71;
    // 0x80062474: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_71:
    // 0x80062478: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006247C: jal         0x80087784
    // 0x80062480: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_72;
    // 0x80062480: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_72:
    // 0x80062484: b           L_80062778
    // 0x80062488: nop

        goto L_80062778;
    // 0x80062488: nop

L_8006248C:
    // 0x8006248C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80062490: nop

    // 0x80062494: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x80062498: beq         $at, $zero, L_80062778
    if (ctx->r1 == 0) {
        // 0x8006249C: nop
    
            goto L_80062778;
    }
    // 0x8006249C: nop

    // 0x800624A0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800624A4: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x800624A8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800624AC: jal         0x80084E20
    // 0x800624B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_73;
    // 0x800624B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_73:
    // 0x800624B4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800624B8: jal         0x80087784
    // 0x800624BC: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_74;
    // 0x800624BC: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_74:
    // 0x800624C0: b           L_80062778
    // 0x800624C4: nop

        goto L_80062778;
    // 0x800624C4: nop

L_800624C8:
    // 0x800624C8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800624CC: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x800624D0: bne         $t7, $at, L_80062500
    if (ctx->r15 != ctx->r1) {
        // 0x800624D4: nop
    
            goto L_80062500;
    }
    // 0x800624D4: nop

    // 0x800624D8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800624DC: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x800624E0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x800624E4: jal         0x80084E20
    // 0x800624E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_75;
    // 0x800624E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_75:
    // 0x800624EC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800624F0: jal         0x80087784
    // 0x800624F4: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_76;
    // 0x800624F4: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_76:
    // 0x800624F8: b           L_80062778
    // 0x800624FC: nop

        goto L_80062778;
    // 0x800624FC: nop

L_80062500:
    // 0x80062500: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80062504: nop

    // 0x80062508: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x8006250C: beq         $at, $zero, L_80062778
    if (ctx->r1 == 0) {
        // 0x80062510: nop
    
            goto L_80062778;
    }
    // 0x80062510: nop

    // 0x80062514: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062518: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x8006251C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80062520: jal         0x80084E20
    // 0x80062524: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_77;
    // 0x80062524: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_77:
    // 0x80062528: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006252C: jal         0x80087784
    // 0x80062530: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_78;
    // 0x80062530: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_78:
    // 0x80062534: b           L_80062778
    // 0x80062538: nop

        goto L_80062778;
    // 0x80062538: nop

L_8006253C:
    // 0x8006253C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80062540: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80062544: bne         $t9, $at, L_80062574
    if (ctx->r25 != ctx->r1) {
        // 0x80062548: nop
    
            goto L_80062574;
    }
    // 0x80062548: nop

    // 0x8006254C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062550: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80062554: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x80062558: jal         0x80084E20
    // 0x8006255C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_79;
    // 0x8006255C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_79:
    // 0x80062560: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062564: jal         0x80087784
    // 0x80062568: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_80;
    // 0x80062568: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_80:
    // 0x8006256C: b           L_80062778
    // 0x80062570: nop

        goto L_80062778;
    // 0x80062570: nop

L_80062574:
    // 0x80062574: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80062578: nop

    // 0x8006257C: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x80062580: beq         $at, $zero, L_80062778
    if (ctx->r1 == 0) {
        // 0x80062584: nop
    
            goto L_80062778;
    }
    // 0x80062584: nop

    // 0x80062588: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8006258C: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80062590: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80062594: jal         0x80084E20
    // 0x80062598: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_81;
    // 0x80062598: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_81:
    // 0x8006259C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800625A0: jal         0x80087784
    // 0x800625A4: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_82;
    // 0x800625A4: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_82:
    // 0x800625A8: b           L_80062778
    // 0x800625AC: nop

        goto L_80062778;
    // 0x800625AC: nop

L_800625B0:
    // 0x800625B0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800625B4: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x800625B8: bne         $t1, $at, L_800625E8
    if (ctx->r9 != ctx->r1) {
        // 0x800625BC: nop
    
            goto L_800625E8;
    }
    // 0x800625BC: nop

    // 0x800625C0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800625C4: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x800625C8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x800625CC: jal         0x80084E20
    // 0x800625D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_83;
    // 0x800625D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_83:
    // 0x800625D4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800625D8: jal         0x80087784
    // 0x800625DC: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_84;
    // 0x800625DC: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_84:
    // 0x800625E0: b           L_80062778
    // 0x800625E4: nop

        goto L_80062778;
    // 0x800625E4: nop

L_800625E8:
    // 0x800625E8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800625EC: nop

    // 0x800625F0: slti        $at, $t2, 0x10
    ctx->r1 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x800625F4: beq         $at, $zero, L_80062778
    if (ctx->r1 == 0) {
        // 0x800625F8: nop
    
            goto L_80062778;
    }
    // 0x800625F8: nop

    // 0x800625FC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062600: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80062604: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80062608: jal         0x80084E20
    // 0x8006260C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_85;
    // 0x8006260C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_85:
    // 0x80062610: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062614: jal         0x80087784
    // 0x80062618: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_86;
    // 0x80062618: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_86:
    // 0x8006261C: b           L_80062778
    // 0x80062620: nop

        goto L_80062778;
    // 0x80062620: nop

L_80062624:
    // 0x80062624: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80062628: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x8006262C: bne         $t3, $at, L_8006265C
    if (ctx->r11 != ctx->r1) {
        // 0x80062630: nop
    
            goto L_8006265C;
    }
    // 0x80062630: nop

    // 0x80062634: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062638: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x8006263C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80062640: jal         0x80084E20
    // 0x80062644: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_87;
    // 0x80062644: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_87:
    // 0x80062648: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006264C: jal         0x80087784
    // 0x80062650: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_88;
    // 0x80062650: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_88:
    // 0x80062654: b           L_80062778
    // 0x80062658: nop

        goto L_80062778;
    // 0x80062658: nop

L_8006265C:
    // 0x8006265C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80062660: nop

    // 0x80062664: slti        $at, $t4, 0x10
    ctx->r1 = SIGNED(ctx->r12) < 0X10 ? 1 : 0;
    // 0x80062668: beq         $at, $zero, L_80062778
    if (ctx->r1 == 0) {
        // 0x8006266C: nop
    
            goto L_80062778;
    }
    // 0x8006266C: nop

    // 0x80062670: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062674: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80062678: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x8006267C: jal         0x80084E20
    // 0x80062680: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_89;
    // 0x80062680: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_89:
    // 0x80062684: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062688: jal         0x80087784
    // 0x8006268C: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_90;
    // 0x8006268C: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_90:
    // 0x80062690: b           L_80062778
    // 0x80062694: nop

        goto L_80062778;
    // 0x80062694: nop

L_80062698:
    // 0x80062698: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8006269C: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x800626A0: bne         $t5, $at, L_800626D0
    if (ctx->r13 != ctx->r1) {
        // 0x800626A4: nop
    
            goto L_800626D0;
    }
    // 0x800626A4: nop

    // 0x800626A8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800626AC: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x800626B0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x800626B4: jal         0x80084E20
    // 0x800626B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_91;
    // 0x800626B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_91:
    // 0x800626BC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800626C0: jal         0x80087784
    // 0x800626C4: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_92;
    // 0x800626C4: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_92:
    // 0x800626C8: b           L_80062778
    // 0x800626CC: nop

        goto L_80062778;
    // 0x800626CC: nop

L_800626D0:
    // 0x800626D0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800626D4: nop

    // 0x800626D8: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x800626DC: beq         $at, $zero, L_80062778
    if (ctx->r1 == 0) {
        // 0x800626E0: nop
    
            goto L_80062778;
    }
    // 0x800626E0: nop

    // 0x800626E4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800626E8: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x800626EC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800626F0: jal         0x80084E20
    // 0x800626F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_93;
    // 0x800626F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_93:
    // 0x800626F8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800626FC: jal         0x80087784
    // 0x80062700: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_94;
    // 0x80062700: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_94:
    // 0x80062704: b           L_80062778
    // 0x80062708: nop

        goto L_80062778;
    // 0x80062708: nop

L_8006270C:
    // 0x8006270C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80062710: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80062714: bne         $t7, $at, L_80062744
    if (ctx->r15 != ctx->r1) {
        // 0x80062718: nop
    
            goto L_80062744;
    }
    // 0x80062718: nop

    // 0x8006271C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80062720: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80062724: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x80062728: jal         0x80084E20
    // 0x8006272C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_95;
    // 0x8006272C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_95:
    // 0x80062730: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062734: jal         0x80087784
    // 0x80062738: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_96;
    // 0x80062738: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_96:
    // 0x8006273C: b           L_80062778
    // 0x80062740: nop

        goto L_80062778;
    // 0x80062740: nop

L_80062744:
    // 0x80062744: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80062748: nop

    // 0x8006274C: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x80062750: beq         $at, $zero, L_80062778
    if (ctx->r1 == 0) {
        // 0x80062754: nop
    
            goto L_80062778;
    }
    // 0x80062754: nop

    // 0x80062758: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8006275C: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x80062760: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80062764: jal         0x80084E20
    // 0x80062768: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_97;
    // 0x80062768: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_97:
    // 0x8006276C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062770: jal         0x80087784
    // 0x80062774: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_98;
    // 0x80062774: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_98:
L_80062778:
    // 0x80062778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006277C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80062780: jr          $ra
    // 0x80062784: nop

    return;
    // 0x80062784: nop

;}
RECOMP_FUNC void func_80062788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80062788: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006278C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80062790: jal         0x8004A34C
    // 0x80062794: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x80062794: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x80062798: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8006279C: lh          $t6, -0x12C($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X12C);
    // 0x800627A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800627A4: bne         $t6, $at, L_80062E14
    if (ctx->r14 != ctx->r1) {
        // 0x800627A8: nop
    
            goto L_80062E14;
    }
    // 0x800627A8: nop

    // 0x800627AC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800627B0: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x800627B4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800627B8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800627BC: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x800627C0: addiu       $t1, $t1, 0x930
    ctx->r9 = ADD32(ctx->r9, 0X930);
    // 0x800627C4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800627C8: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x800627CC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800627D0: addiu       $t7, $t7, -0x520
    ctx->r15 = ADD32(ctx->r15, -0X520);
    // 0x800627D4: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x800627D8: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x800627DC: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x800627E0: sw          $t4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r12;
    // 0x800627E4: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x800627E8: addiu       $t1, $t1, 0x930
    ctx->r9 = ADD32(ctx->r9, 0X930);
    // 0x800627EC: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x800627F0: lw          $t4, 0xC($t2)
    ctx->r12 = MEM_W(ctx->r10, 0XC);
    // 0x800627F4: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800627F8: sw          $t4, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r12;
    // 0x800627FC: lw          $at, 0x10($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X10);
    // 0x80062800: addiu       $t5, $t5, -0x520
    ctx->r13 = ADD32(ctx->r13, -0X520);
    // 0x80062804: sw          $at, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r1;
    // 0x80062808: lw          $t4, 0x14($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X14);
    // 0x8006280C: nop

    // 0x80062810: sw          $t4, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r12;
    // 0x80062814: lw          $at, 0x18($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X18);
    // 0x80062818: nop

    // 0x8006281C: sw          $at, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->r1;
    // 0x80062820: lw          $t4, 0x1C($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X1C);
    // 0x80062824: nop

    // 0x80062828: sw          $t4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->r12;
    // 0x8006282C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80062830: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80062834: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80062838: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x8006283C: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x80062840: addiu       $t0, $t9, 0x20
    ctx->r8 = ADD32(ctx->r25, 0X20);
    // 0x80062844: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x80062848: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x8006284C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80062850: sw          $at, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->r1;
    // 0x80062854: lw          $t2, 0x4($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X4);
    // 0x80062858: addiu       $t1, $t1, 0x930
    ctx->r9 = ADD32(ctx->r9, 0X930);
    // 0x8006285C: sw          $t2, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->r10;
    // 0x80062860: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x80062864: addiu       $t4, $t4, -0x520
    ctx->r12 = ADD32(ctx->r12, -0X520);
    // 0x80062868: sw          $at, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->r1;
    // 0x8006286C: lw          $t2, 0xC($t3)
    ctx->r10 = MEM_W(ctx->r11, 0XC);
    // 0x80062870: nop

    // 0x80062874: sw          $t2, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->r10;
    // 0x80062878: lw          $at, 0x10($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X10);
    // 0x8006287C: nop

    // 0x80062880: sw          $at, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r1;
    // 0x80062884: lw          $t2, 0x14($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X14);
    // 0x80062888: nop

    // 0x8006288C: sw          $t2, 0x34($t5)
    MEM_W(0X34, ctx->r13) = ctx->r10;
    // 0x80062890: lw          $at, 0x18($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X18);
    // 0x80062894: nop

    // 0x80062898: sw          $at, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r1;
    // 0x8006289C: lw          $t2, 0x1C($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X1C);
    // 0x800628A0: nop

    // 0x800628A4: sw          $t2, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->r10;
    // 0x800628A8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800628AC: nop

    // 0x800628B0: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800628B4: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x800628B8: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x800628BC: addiu       $t0, $t9, 0x40
    ctx->r8 = ADD32(ctx->r25, 0X40);
    // 0x800628C0: addu        $t7, $t0, $t1
    ctx->r15 = ADD32(ctx->r8, ctx->r9);
    // 0x800628C4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x800628C8: nop

    // 0x800628CC: sw          $at, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->r1;
    // 0x800628D0: lw          $t3, 0x4($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X4);
    // 0x800628D4: nop

    // 0x800628D8: sw          $t3, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->r11;
    // 0x800628DC: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x800628E0: nop

    // 0x800628E4: sw          $at, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->r1;
    // 0x800628E8: lw          $t3, 0xC($t7)
    ctx->r11 = MEM_W(ctx->r15, 0XC);
    // 0x800628EC: nop

    // 0x800628F0: sw          $t3, 0x4C($t4)
    MEM_W(0X4C, ctx->r12) = ctx->r11;
    // 0x800628F4: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x800628F8: nop

    // 0x800628FC: sw          $at, 0x50($t4)
    MEM_W(0X50, ctx->r12) = ctx->r1;
    // 0x80062900: lw          $t3, 0x14($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X14);
    // 0x80062904: nop

    // 0x80062908: sw          $t3, 0x54($t4)
    MEM_W(0X54, ctx->r12) = ctx->r11;
    // 0x8006290C: lw          $at, 0x18($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X18);
    // 0x80062910: nop

    // 0x80062914: sw          $at, 0x58($t4)
    MEM_W(0X58, ctx->r12) = ctx->r1;
    // 0x80062918: lw          $t3, 0x1C($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X1C);
    // 0x8006291C: jal         0x8004A34C
    // 0x80062920: sw          $t3, 0x5C($t4)
    MEM_W(0X5C, ctx->r12) = ctx->r11;
    func_8004A34C(rdram, ctx);
        goto after_1;
    // 0x80062920: sw          $t3, 0x5C($t4)
    MEM_W(0X5C, ctx->r12) = ctx->r11;
    after_1:
    // 0x80062924: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80062928: nop

    // 0x8006292C: sltiu       $at, $t2, 0x8
    ctx->r1 = ctx->r10 < 0X8 ? 1 : 0;
    // 0x80062930: beq         $at, $zero, L_80062D8C
    if (ctx->r1 == 0) {
        // 0x80062934: nop
    
            goto L_80062D8C;
    }
    // 0x80062934: nop

    // 0x80062938: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8006293C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80062940: addu        $at, $at, $t2
    gpr jr_addend_8006294C = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80062944: lw          $t2, -0x2C84($at)
    ctx->r10 = ADD32(ctx->r1, -0X2C84);
    // 0x80062948: nop

    // 0x8006294C: jr          $t2
    // 0x80062950: nop

    switch (jr_addend_8006294C >> 2) {
        case 0: goto L_80062954; break;
        case 1: goto L_80062A48; break;
        case 2: goto L_80062A7C; break;
        case 3: goto L_80062AA8; break;
        case 4: goto L_80062ADC; break;
        case 5: goto L_80062B00; break;
        case 6: goto L_80062B90; break;
        case 7: goto L_80062CB4; break;
        default: switch_error(__func__, 0x8006294C, 0x800DD37C);
    }
    // 0x80062950: nop

L_80062954:
    // 0x80062954: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062958: jal         0x800764B8
    // 0x8006295C: addiu       $a0, $a0, 0x1030
    ctx->r4 = ADD32(ctx->r4, 0X1030);
    func_800764B8(rdram, ctx);
        goto after_2;
    // 0x8006295C: addiu       $a0, $a0, 0x1030
    ctx->r4 = ADD32(ctx->r4, 0X1030);
    after_2:
    // 0x80062960: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062964: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062968: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x8006296C: jal         0x800764A0
    // 0x80062970: addiu       $a0, $a0, 0x10CC
    ctx->r4 = ADD32(ctx->r4, 0X10CC);
    func_800764A0(rdram, ctx);
        goto after_3;
    // 0x80062970: addiu       $a0, $a0, 0x10CC
    ctx->r4 = ADD32(ctx->r4, 0X10CC);
    after_3:
    // 0x80062974: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062978: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8006297C: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x80062980: jal         0x800764A0
    // 0x80062984: addiu       $a0, $a0, 0x1168
    ctx->r4 = ADD32(ctx->r4, 0X1168);
    func_800764A0(rdram, ctx);
        goto after_4;
    // 0x80062984: addiu       $a0, $a0, 0x1168
    ctx->r4 = ADD32(ctx->r4, 0X1168);
    after_4:
    // 0x80062988: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8006298C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062990: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x80062994: jal         0x800764A0
    // 0x80062998: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, 0X1204);
    func_800764A0(rdram, ctx);
        goto after_5;
    // 0x80062998: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, 0X1204);
    after_5:
    // 0x8006299C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800629A0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800629A4: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x800629A8: jal         0x800764A0
    // 0x800629AC: addiu       $a0, $a0, 0x12A0
    ctx->r4 = ADD32(ctx->r4, 0X12A0);
    func_800764A0(rdram, ctx);
        goto after_6;
    // 0x800629AC: addiu       $a0, $a0, 0x12A0
    ctx->r4 = ADD32(ctx->r4, 0X12A0);
    after_6:
    // 0x800629B0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800629B4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800629B8: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x800629BC: jal         0x800764A0
    // 0x800629C0: addiu       $a0, $a0, 0x133C
    ctx->r4 = ADD32(ctx->r4, 0X133C);
    func_800764A0(rdram, ctx);
        goto after_7;
    // 0x800629C0: addiu       $a0, $a0, 0x133C
    ctx->r4 = ADD32(ctx->r4, 0X133C);
    after_7:
    // 0x800629C4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800629C8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800629CC: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x800629D0: jal         0x800764A0
    // 0x800629D4: addiu       $a0, $a0, 0x13D8
    ctx->r4 = ADD32(ctx->r4, 0X13D8);
    func_800764A0(rdram, ctx);
        goto after_8;
    // 0x800629D4: addiu       $a0, $a0, 0x13D8
    ctx->r4 = ADD32(ctx->r4, 0X13D8);
    after_8:
    // 0x800629D8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800629DC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800629E0: addiu       $a1, $a1, 0x1030
    ctx->r5 = ADD32(ctx->r5, 0X1030);
    // 0x800629E4: jal         0x800764A0
    // 0x800629E8: addiu       $a0, $a0, 0x1474
    ctx->r4 = ADD32(ctx->r4, 0X1474);
    func_800764A0(rdram, ctx);
        goto after_9;
    // 0x800629E8: addiu       $a0, $a0, 0x1474
    ctx->r4 = ADD32(ctx->r4, 0X1474);
    after_9:
    // 0x800629EC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800629F0: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    // 0x800629F4: jal         0x80076EC0
    // 0x800629F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80076EC0(rdram, ctx);
        goto after_10;
    // 0x800629F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x800629FC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80062A00: jal         0x800B7450
    // 0x80062A04: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    _bzero(rdram, ctx);
        goto after_11;
    // 0x80062A04: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_11:
    // 0x80062A08: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x80062A0C: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x80062A10: addiu       $t9, $zero, 0x4A
    ctx->r25 = ADD32(0, 0X4A);
    // 0x80062A14: addiu       $t0, $zero, 0xD0
    ctx->r8 = ADD32(0, 0XD0);
    // 0x80062A18: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x80062A1C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062A20: sb          $t8, 0x21($sp)
    MEM_B(0X21, ctx->r29) = ctx->r24;
    // 0x80062A24: sb          $t6, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r14;
    // 0x80062A28: sh          $t0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r8;
    // 0x80062A2C: sh          $t9, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r25;
    // 0x80062A30: sh          $t1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r9;
    // 0x80062A34: addiu       $a0, $a0, -0x4C0
    ctx->r4 = ADD32(ctx->r4, -0X4C0);
    // 0x80062A38: jal         0x8007523C
    // 0x80062A3C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_8007523C(rdram, ctx);
        goto after_12;
    // 0x80062A3C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_12:
    // 0x80062A40: b           L_80062D8C
    // 0x80062A44: nop

        goto L_80062D8C;
    // 0x80062A44: nop

L_80062A48:
    // 0x80062A48: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062A4C: jal         0x800764B8
    // 0x80062A50: addiu       $a0, $a0, 0x2890
    ctx->r4 = ADD32(ctx->r4, 0X2890);
    func_800764B8(rdram, ctx);
        goto after_13;
    // 0x80062A50: addiu       $a0, $a0, 0x2890
    ctx->r4 = ADD32(ctx->r4, 0X2890);
    after_13:
    // 0x80062A54: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062A58: addiu       $a0, $a0, 0x3A8
    ctx->r4 = ADD32(ctx->r4, 0X3A8);
    // 0x80062A5C: jal         0x80076EC0
    // 0x80062A60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80076EC0(rdram, ctx);
        goto after_14;
    // 0x80062A60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x80062A64: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062A68: addiu       $a0, $a0, 0x468
    ctx->r4 = ADD32(ctx->r4, 0X468);
    // 0x80062A6C: jal         0x80076EC0
    // 0x80062A70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80076EC0(rdram, ctx);
        goto after_15;
    // 0x80062A70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x80062A74: b           L_80062D8C
    // 0x80062A78: nop

        goto L_80062D8C;
    // 0x80062A78: nop

L_80062A7C:
    // 0x80062A7C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062A80: jal         0x800764B8
    // 0x80062A84: addiu       $a0, $a0, 0x292C
    ctx->r4 = ADD32(ctx->r4, 0X292C);
    func_800764B8(rdram, ctx);
        goto after_16;
    // 0x80062A84: addiu       $a0, $a0, 0x292C
    ctx->r4 = ADD32(ctx->r4, 0X292C);
    after_16:
    // 0x80062A88: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062A8C: jal         0x800764B8
    // 0x80062A90: addiu       $a0, $a0, 0x29C8
    ctx->r4 = ADD32(ctx->r4, 0X29C8);
    func_800764B8(rdram, ctx);
        goto after_17;
    // 0x80062A90: addiu       $a0, $a0, 0x29C8
    ctx->r4 = ADD32(ctx->r4, 0X29C8);
    after_17:
    // 0x80062A94: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062A98: jal         0x800764B8
    // 0x80062A9C: addiu       $a0, $a0, 0x2A64
    ctx->r4 = ADD32(ctx->r4, 0X2A64);
    func_800764B8(rdram, ctx);
        goto after_18;
    // 0x80062A9C: addiu       $a0, $a0, 0x2A64
    ctx->r4 = ADD32(ctx->r4, 0X2A64);
    after_18:
    // 0x80062AA0: b           L_80062D8C
    // 0x80062AA4: nop

        goto L_80062D8C;
    // 0x80062AA4: nop

L_80062AA8:
    // 0x80062AA8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062AAC: jal         0x800764B8
    // 0x80062AB0: addiu       $a0, $a0, 0x2008
    ctx->r4 = ADD32(ctx->r4, 0X2008);
    func_800764B8(rdram, ctx);
        goto after_19;
    // 0x80062AB0: addiu       $a0, $a0, 0x2008
    ctx->r4 = ADD32(ctx->r4, 0X2008);
    after_19:
    // 0x80062AB4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062AB8: addiu       $a0, $a0, 0x318
    ctx->r4 = ADD32(ctx->r4, 0X318);
    // 0x80062ABC: jal         0x80076EC0
    // 0x80062AC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80076EC0(rdram, ctx);
        goto after_20;
    // 0x80062AC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x80062AC4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062AC8: addiu       $a0, $a0, 0x408
    ctx->r4 = ADD32(ctx->r4, 0X408);
    // 0x80062ACC: jal         0x80076EC0
    // 0x80062AD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80076EC0(rdram, ctx);
        goto after_21;
    // 0x80062AD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x80062AD4: b           L_80062D8C
    // 0x80062AD8: nop

        goto L_80062D8C;
    // 0x80062AD8: nop

L_80062ADC:
    // 0x80062ADC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062AE0: jal         0x800764B8
    // 0x80062AE4: addiu       $a0, $a0, 0x2C38
    ctx->r4 = ADD32(ctx->r4, 0X2C38);
    func_800764B8(rdram, ctx);
        goto after_22;
    // 0x80062AE4: addiu       $a0, $a0, 0x2C38
    ctx->r4 = ADD32(ctx->r4, 0X2C38);
    after_22:
    // 0x80062AE8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062AEC: addiu       $a0, $a0, 0x378
    ctx->r4 = ADD32(ctx->r4, 0X378);
    // 0x80062AF0: jal         0x80076EC0
    // 0x80062AF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80076EC0(rdram, ctx);
        goto after_23;
    // 0x80062AF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x80062AF8: b           L_80062D8C
    // 0x80062AFC: nop

        goto L_80062D8C;
    // 0x80062AFC: nop

L_80062B00:
    // 0x80062B00: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062B04: jal         0x800764B8
    // 0x80062B08: addiu       $a0, $a0, 0x1510
    ctx->r4 = ADD32(ctx->r4, 0X1510);
    func_800764B8(rdram, ctx);
        goto after_24;
    // 0x80062B08: addiu       $a0, $a0, 0x1510
    ctx->r4 = ADD32(ctx->r4, 0X1510);
    after_24:
    // 0x80062B0C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062B10: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062B14: addiu       $a1, $a1, 0x1510
    ctx->r5 = ADD32(ctx->r5, 0X1510);
    // 0x80062B18: jal         0x800764A0
    // 0x80062B1C: addiu       $a0, $a0, 0x15AC
    ctx->r4 = ADD32(ctx->r4, 0X15AC);
    func_800764A0(rdram, ctx);
        goto after_25;
    // 0x80062B1C: addiu       $a0, $a0, 0x15AC
    ctx->r4 = ADD32(ctx->r4, 0X15AC);
    after_25:
    // 0x80062B20: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062B24: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062B28: addiu       $a1, $a1, 0x1510
    ctx->r5 = ADD32(ctx->r5, 0X1510);
    // 0x80062B2C: jal         0x800764A0
    // 0x80062B30: addiu       $a0, $a0, 0x1648
    ctx->r4 = ADD32(ctx->r4, 0X1648);
    func_800764A0(rdram, ctx);
        goto after_26;
    // 0x80062B30: addiu       $a0, $a0, 0x1648
    ctx->r4 = ADD32(ctx->r4, 0X1648);
    after_26:
    // 0x80062B34: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062B38: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062B3C: addiu       $a1, $a1, 0x1510
    ctx->r5 = ADD32(ctx->r5, 0X1510);
    // 0x80062B40: jal         0x800764A0
    // 0x80062B44: addiu       $a0, $a0, 0x16E4
    ctx->r4 = ADD32(ctx->r4, 0X16E4);
    func_800764A0(rdram, ctx);
        goto after_27;
    // 0x80062B44: addiu       $a0, $a0, 0x16E4
    ctx->r4 = ADD32(ctx->r4, 0X16E4);
    after_27:
    // 0x80062B48: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062B4C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062B50: addiu       $a1, $a1, 0x1510
    ctx->r5 = ADD32(ctx->r5, 0X1510);
    // 0x80062B54: jal         0x800764A0
    // 0x80062B58: addiu       $a0, $a0, 0x1780
    ctx->r4 = ADD32(ctx->r4, 0X1780);
    func_800764A0(rdram, ctx);
        goto after_28;
    // 0x80062B58: addiu       $a0, $a0, 0x1780
    ctx->r4 = ADD32(ctx->r4, 0X1780);
    after_28:
    // 0x80062B5C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062B60: jal         0x800764B8
    // 0x80062B64: addiu       $a0, $a0, 0x181C
    ctx->r4 = ADD32(ctx->r4, 0X181C);
    func_800764B8(rdram, ctx);
        goto after_29;
    // 0x80062B64: addiu       $a0, $a0, 0x181C
    ctx->r4 = ADD32(ctx->r4, 0X181C);
    after_29:
    // 0x80062B68: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062B6C: addiu       $a0, $a0, 0x2E8
    ctx->r4 = ADD32(ctx->r4, 0X2E8);
    // 0x80062B70: jal         0x80076EC0
    // 0x80062B74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80076EC0(rdram, ctx);
        goto after_30;
    // 0x80062B74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_30:
    // 0x80062B78: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062B7C: addiu       $a0, $a0, 0x3D8
    ctx->r4 = ADD32(ctx->r4, 0X3D8);
    // 0x80062B80: jal         0x80076EC0
    // 0x80062B84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80076EC0(rdram, ctx);
        goto after_31;
    // 0x80062B84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_31:
    // 0x80062B88: b           L_80062D8C
    // 0x80062B8C: nop

        goto L_80062D8C;
    // 0x80062B8C: nop

L_80062B90:
    // 0x80062B90: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062B94: jal         0x800764B8
    // 0x80062B98: addiu       $a0, $a0, 0x20A4
    ctx->r4 = ADD32(ctx->r4, 0X20A4);
    func_800764B8(rdram, ctx);
        goto after_32;
    // 0x80062B98: addiu       $a0, $a0, 0x20A4
    ctx->r4 = ADD32(ctx->r4, 0X20A4);
    after_32:
    // 0x80062B9C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062BA0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062BA4: addiu       $a1, $a1, 0x20A4
    ctx->r5 = ADD32(ctx->r5, 0X20A4);
    // 0x80062BA8: jal         0x800764A0
    // 0x80062BAC: addiu       $a0, $a0, 0x2140
    ctx->r4 = ADD32(ctx->r4, 0X2140);
    func_800764A0(rdram, ctx);
        goto after_33;
    // 0x80062BAC: addiu       $a0, $a0, 0x2140
    ctx->r4 = ADD32(ctx->r4, 0X2140);
    after_33:
    // 0x80062BB0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062BB4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062BB8: addiu       $a1, $a1, 0x20A4
    ctx->r5 = ADD32(ctx->r5, 0X20A4);
    // 0x80062BBC: jal         0x800764A0
    // 0x80062BC0: addiu       $a0, $a0, 0x21DC
    ctx->r4 = ADD32(ctx->r4, 0X21DC);
    func_800764A0(rdram, ctx);
        goto after_34;
    // 0x80062BC0: addiu       $a0, $a0, 0x21DC
    ctx->r4 = ADD32(ctx->r4, 0X21DC);
    after_34:
    // 0x80062BC4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062BC8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062BCC: addiu       $a1, $a1, 0x20A4
    ctx->r5 = ADD32(ctx->r5, 0X20A4);
    // 0x80062BD0: jal         0x800764A0
    // 0x80062BD4: addiu       $a0, $a0, 0x2278
    ctx->r4 = ADD32(ctx->r4, 0X2278);
    func_800764A0(rdram, ctx);
        goto after_35;
    // 0x80062BD4: addiu       $a0, $a0, 0x2278
    ctx->r4 = ADD32(ctx->r4, 0X2278);
    after_35:
    // 0x80062BD8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062BDC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062BE0: addiu       $a1, $a1, 0x20A4
    ctx->r5 = ADD32(ctx->r5, 0X20A4);
    // 0x80062BE4: jal         0x800764A0
    // 0x80062BE8: addiu       $a0, $a0, 0x2314
    ctx->r4 = ADD32(ctx->r4, 0X2314);
    func_800764A0(rdram, ctx);
        goto after_36;
    // 0x80062BE8: addiu       $a0, $a0, 0x2314
    ctx->r4 = ADD32(ctx->r4, 0X2314);
    after_36:
    // 0x80062BEC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062BF0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062BF4: addiu       $a1, $a1, 0x20A4
    ctx->r5 = ADD32(ctx->r5, 0X20A4);
    // 0x80062BF8: jal         0x800764A0
    // 0x80062BFC: addiu       $a0, $a0, 0x23B0
    ctx->r4 = ADD32(ctx->r4, 0X23B0);
    func_800764A0(rdram, ctx);
        goto after_37;
    // 0x80062BFC: addiu       $a0, $a0, 0x23B0
    ctx->r4 = ADD32(ctx->r4, 0X23B0);
    after_37:
    // 0x80062C00: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062C04: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062C08: addiu       $a1, $a1, 0x20A4
    ctx->r5 = ADD32(ctx->r5, 0X20A4);
    // 0x80062C0C: jal         0x800764A0
    // 0x80062C10: addiu       $a0, $a0, 0x244C
    ctx->r4 = ADD32(ctx->r4, 0X244C);
    func_800764A0(rdram, ctx);
        goto after_38;
    // 0x80062C10: addiu       $a0, $a0, 0x244C
    ctx->r4 = ADD32(ctx->r4, 0X244C);
    after_38:
    // 0x80062C14: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062C18: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062C1C: addiu       $a1, $a1, 0x20A4
    ctx->r5 = ADD32(ctx->r5, 0X20A4);
    // 0x80062C20: jal         0x800764A0
    // 0x80062C24: addiu       $a0, $a0, 0x24E8
    ctx->r4 = ADD32(ctx->r4, 0X24E8);
    func_800764A0(rdram, ctx);
        goto after_39;
    // 0x80062C24: addiu       $a0, $a0, 0x24E8
    ctx->r4 = ADD32(ctx->r4, 0X24E8);
    after_39:
    // 0x80062C28: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062C2C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062C30: addiu       $a1, $a1, 0x20A4
    ctx->r5 = ADD32(ctx->r5, 0X20A4);
    // 0x80062C34: jal         0x800764A0
    // 0x80062C38: addiu       $a0, $a0, 0x2584
    ctx->r4 = ADD32(ctx->r4, 0X2584);
    func_800764A0(rdram, ctx);
        goto after_40;
    // 0x80062C38: addiu       $a0, $a0, 0x2584
    ctx->r4 = ADD32(ctx->r4, 0X2584);
    after_40:
    // 0x80062C3C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062C40: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062C44: addiu       $a1, $a1, 0x20A4
    ctx->r5 = ADD32(ctx->r5, 0X20A4);
    // 0x80062C48: jal         0x800764A0
    // 0x80062C4C: addiu       $a0, $a0, 0x2620
    ctx->r4 = ADD32(ctx->r4, 0X2620);
    func_800764A0(rdram, ctx);
        goto after_41;
    // 0x80062C4C: addiu       $a0, $a0, 0x2620
    ctx->r4 = ADD32(ctx->r4, 0X2620);
    after_41:
    // 0x80062C50: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062C54: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062C58: addiu       $a1, $a1, 0x20A4
    ctx->r5 = ADD32(ctx->r5, 0X20A4);
    // 0x80062C5C: jal         0x800764A0
    // 0x80062C60: addiu       $a0, $a0, 0x26BC
    ctx->r4 = ADD32(ctx->r4, 0X26BC);
    func_800764A0(rdram, ctx);
        goto after_42;
    // 0x80062C60: addiu       $a0, $a0, 0x26BC
    ctx->r4 = ADD32(ctx->r4, 0X26BC);
    after_42:
    // 0x80062C64: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062C68: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062C6C: addiu       $a1, $a1, 0x20A4
    ctx->r5 = ADD32(ctx->r5, 0X20A4);
    // 0x80062C70: jal         0x800764A0
    // 0x80062C74: addiu       $a0, $a0, 0x2758
    ctx->r4 = ADD32(ctx->r4, 0X2758);
    func_800764A0(rdram, ctx);
        goto after_43;
    // 0x80062C74: addiu       $a0, $a0, 0x2758
    ctx->r4 = ADD32(ctx->r4, 0X2758);
    after_43:
    // 0x80062C78: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062C7C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062C80: addiu       $a1, $a1, 0x20A4
    ctx->r5 = ADD32(ctx->r5, 0X20A4);
    // 0x80062C84: jal         0x800764A0
    // 0x80062C88: addiu       $a0, $a0, 0x27F4
    ctx->r4 = ADD32(ctx->r4, 0X27F4);
    func_800764A0(rdram, ctx);
        goto after_44;
    // 0x80062C88: addiu       $a0, $a0, 0x27F4
    ctx->r4 = ADD32(ctx->r4, 0X27F4);
    after_44:
    // 0x80062C8C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062C90: addiu       $a0, $a0, 0x348
    ctx->r4 = ADD32(ctx->r4, 0X348);
    // 0x80062C94: jal         0x80076EC0
    // 0x80062C98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80076EC0(rdram, ctx);
        goto after_45;
    // 0x80062C98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_45:
    // 0x80062C9C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062CA0: addiu       $a0, $a0, 0x438
    ctx->r4 = ADD32(ctx->r4, 0X438);
    // 0x80062CA4: jal         0x80076EC0
    // 0x80062CA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80076EC0(rdram, ctx);
        goto after_46;
    // 0x80062CA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_46:
    // 0x80062CAC: b           L_80062D8C
    // 0x80062CB0: nop

        goto L_80062D8C;
    // 0x80062CB0: nop

L_80062CB4:
    // 0x80062CB4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062CB8: jal         0x800764B8
    // 0x80062CBC: addiu       $a0, $a0, 0x18B8
    ctx->r4 = ADD32(ctx->r4, 0X18B8);
    func_800764B8(rdram, ctx);
        goto after_47;
    // 0x80062CBC: addiu       $a0, $a0, 0x18B8
    ctx->r4 = ADD32(ctx->r4, 0X18B8);
    after_47:
    // 0x80062CC0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062CC4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062CC8: addiu       $a1, $a1, 0x18B8
    ctx->r5 = ADD32(ctx->r5, 0X18B8);
    // 0x80062CCC: jal         0x800764A0
    // 0x80062CD0: addiu       $a0, $a0, 0x1954
    ctx->r4 = ADD32(ctx->r4, 0X1954);
    func_800764A0(rdram, ctx);
        goto after_48;
    // 0x80062CD0: addiu       $a0, $a0, 0x1954
    ctx->r4 = ADD32(ctx->r4, 0X1954);
    after_48:
    // 0x80062CD4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062CD8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062CDC: addiu       $a1, $a1, 0x18B8
    ctx->r5 = ADD32(ctx->r5, 0X18B8);
    // 0x80062CE0: jal         0x800764A0
    // 0x80062CE4: addiu       $a0, $a0, 0x19F0
    ctx->r4 = ADD32(ctx->r4, 0X19F0);
    func_800764A0(rdram, ctx);
        goto after_49;
    // 0x80062CE4: addiu       $a0, $a0, 0x19F0
    ctx->r4 = ADD32(ctx->r4, 0X19F0);
    after_49:
    // 0x80062CE8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062CEC: jal         0x800764B8
    // 0x80062CF0: addiu       $a0, $a0, 0x1A8C
    ctx->r4 = ADD32(ctx->r4, 0X1A8C);
    func_800764B8(rdram, ctx);
        goto after_50;
    // 0x80062CF0: addiu       $a0, $a0, 0x1A8C
    ctx->r4 = ADD32(ctx->r4, 0X1A8C);
    after_50:
    // 0x80062CF4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062CF8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062CFC: addiu       $a1, $a1, 0x1A8C
    ctx->r5 = ADD32(ctx->r5, 0X1A8C);
    // 0x80062D00: jal         0x800764A0
    // 0x80062D04: addiu       $a0, $a0, 0x1B28
    ctx->r4 = ADD32(ctx->r4, 0X1B28);
    func_800764A0(rdram, ctx);
        goto after_51;
    // 0x80062D04: addiu       $a0, $a0, 0x1B28
    ctx->r4 = ADD32(ctx->r4, 0X1B28);
    after_51:
    // 0x80062D08: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062D0C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062D10: addiu       $a1, $a1, 0x1A8C
    ctx->r5 = ADD32(ctx->r5, 0X1A8C);
    // 0x80062D14: jal         0x800764A0
    // 0x80062D18: addiu       $a0, $a0, 0x1BC4
    ctx->r4 = ADD32(ctx->r4, 0X1BC4);
    func_800764A0(rdram, ctx);
        goto after_52;
    // 0x80062D18: addiu       $a0, $a0, 0x1BC4
    ctx->r4 = ADD32(ctx->r4, 0X1BC4);
    after_52:
    // 0x80062D1C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062D20: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062D24: addiu       $a1, $a1, 0x1A8C
    ctx->r5 = ADD32(ctx->r5, 0X1A8C);
    // 0x80062D28: jal         0x800764A0
    // 0x80062D2C: addiu       $a0, $a0, 0x1C60
    ctx->r4 = ADD32(ctx->r4, 0X1C60);
    func_800764A0(rdram, ctx);
        goto after_53;
    // 0x80062D2C: addiu       $a0, $a0, 0x1C60
    ctx->r4 = ADD32(ctx->r4, 0X1C60);
    after_53:
    // 0x80062D30: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062D34: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062D38: addiu       $a1, $a1, 0x1A8C
    ctx->r5 = ADD32(ctx->r5, 0X1A8C);
    // 0x80062D3C: jal         0x800764A0
    // 0x80062D40: addiu       $a0, $a0, 0x1CFC
    ctx->r4 = ADD32(ctx->r4, 0X1CFC);
    func_800764A0(rdram, ctx);
        goto after_54;
    // 0x80062D40: addiu       $a0, $a0, 0x1CFC
    ctx->r4 = ADD32(ctx->r4, 0X1CFC);
    after_54:
    // 0x80062D44: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062D48: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062D4C: addiu       $a1, $a1, 0x1A8C
    ctx->r5 = ADD32(ctx->r5, 0X1A8C);
    // 0x80062D50: jal         0x800764A0
    // 0x80062D54: addiu       $a0, $a0, 0x1D98
    ctx->r4 = ADD32(ctx->r4, 0X1D98);
    func_800764A0(rdram, ctx);
        goto after_55;
    // 0x80062D54: addiu       $a0, $a0, 0x1D98
    ctx->r4 = ADD32(ctx->r4, 0X1D98);
    after_55:
    // 0x80062D58: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062D5C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062D60: addiu       $a1, $a1, 0x1A8C
    ctx->r5 = ADD32(ctx->r5, 0X1A8C);
    // 0x80062D64: jal         0x800764A0
    // 0x80062D68: addiu       $a0, $a0, 0x1E34
    ctx->r4 = ADD32(ctx->r4, 0X1E34);
    func_800764A0(rdram, ctx);
        goto after_56;
    // 0x80062D68: addiu       $a0, $a0, 0x1E34
    ctx->r4 = ADD32(ctx->r4, 0X1E34);
    after_56:
    // 0x80062D6C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062D70: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80062D74: addiu       $a1, $a1, 0x1A8C
    ctx->r5 = ADD32(ctx->r5, 0X1A8C);
    // 0x80062D78: jal         0x800764A0
    // 0x80062D7C: addiu       $a0, $a0, 0x1ED0
    ctx->r4 = ADD32(ctx->r4, 0X1ED0);
    func_800764A0(rdram, ctx);
        goto after_57;
    // 0x80062D7C: addiu       $a0, $a0, 0x1ED0
    ctx->r4 = ADD32(ctx->r4, 0X1ED0);
    after_57:
    // 0x80062D80: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80062D84: jal         0x800764B8
    // 0x80062D88: addiu       $a0, $a0, 0x1F6C
    ctx->r4 = ADD32(ctx->r4, 0X1F6C);
    func_800764B8(rdram, ctx);
        goto after_58;
    // 0x80062D88: addiu       $a0, $a0, 0x1F6C
    ctx->r4 = ADD32(ctx->r4, 0X1F6C);
    after_58:
L_80062D8C:
    // 0x80062D8C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80062D90: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80062D94: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80062D98: subu        $t4, $t4, $t5
    ctx->r12 = SUB32(ctx->r12, ctx->r13);
    // 0x80062D9C: sll         $t7, $t4, 5
    ctx->r15 = S32(ctx->r12 << 5);
    // 0x80062DA0: addiu       $t3, $t3, 0x930
    ctx->r11 = ADD32(ctx->r11, 0X930);
    // 0x80062DA4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062DA8: addiu       $a0, $a0, -0x520
    ctx->r4 = ADD32(ctx->r4, -0X520);
    // 0x80062DAC: jal         0x80061A3C
    // 0x80062DB0: addu        $a1, $t7, $t3
    ctx->r5 = ADD32(ctx->r15, ctx->r11);
    func_80061A3C(rdram, ctx);
        goto after_59;
    // 0x80062DB0: addu        $a1, $t7, $t3
    ctx->r5 = ADD32(ctx->r15, ctx->r11);
    after_59:
    // 0x80062DB4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80062DB8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062DBC: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80062DC0: subu        $t6, $t6, $t2
    ctx->r14 = SUB32(ctx->r14, ctx->r10);
    // 0x80062DC4: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x80062DC8: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80062DCC: addiu       $t0, $t0, 0x930
    ctx->r8 = ADD32(ctx->r8, 0X930);
    // 0x80062DD0: addiu       $t9, $t8, 0x20
    ctx->r25 = ADD32(ctx->r24, 0X20);
    // 0x80062DD4: addiu       $a0, $a0, -0x520
    ctx->r4 = ADD32(ctx->r4, -0X520);
    // 0x80062DD8: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80062DDC: jal         0x80061A3C
    // 0x80062DE0: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    func_80061A3C(rdram, ctx);
        goto after_60;
    // 0x80062DE0: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    after_60:
    // 0x80062DE4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80062DE8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062DEC: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x80062DF0: subu        $t5, $t5, $t1
    ctx->r13 = SUB32(ctx->r13, ctx->r9);
    // 0x80062DF4: sll         $t4, $t5, 5
    ctx->r12 = S32(ctx->r13 << 5);
    // 0x80062DF8: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80062DFC: addiu       $t3, $t3, 0x930
    ctx->r11 = ADD32(ctx->r11, 0X930);
    // 0x80062E00: addiu       $t7, $t4, 0x40
    ctx->r15 = ADD32(ctx->r12, 0X40);
    // 0x80062E04: addiu       $a0, $a0, -0x520
    ctx->r4 = ADD32(ctx->r4, -0X520);
    // 0x80062E08: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    // 0x80062E0C: jal         0x80061A3C
    // 0x80062E10: addu        $a1, $t7, $t3
    ctx->r5 = ADD32(ctx->r15, ctx->r11);
    func_80061A3C(rdram, ctx);
        goto after_61;
    // 0x80062E10: addu        $a1, $t7, $t3
    ctx->r5 = ADD32(ctx->r15, ctx->r11);
    after_61:
L_80062E14:
    // 0x80062E14: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80062E18: lh          $t2, -0x12C($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X12C);
    // 0x80062E1C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80062E20: bne         $t2, $at, L_80062F88
    if (ctx->r10 != ctx->r1) {
        // 0x80062E24: nop
    
            goto L_80062F88;
    }
    // 0x80062E24: nop

    // 0x80062E28: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80062E2C: nop

    // 0x80062E30: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x80062E34: beq         $at, $zero, L_80062E58
    if (ctx->r1 == 0) {
        // 0x80062E38: nop
    
            goto L_80062E58;
    }
    // 0x80062E38: nop

    // 0x80062E3C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80062E40: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80062E44: addu        $at, $at, $t6
    gpr jr_addend_80062E50 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80062E48: lw          $t6, -0x2C64($at)
    ctx->r14 = ADD32(ctx->r1, -0X2C64);
    // 0x80062E4C: nop

    // 0x80062E50: jr          $t6
    // 0x80062E54: nop

    switch (jr_addend_80062E50 >> 2) {
        case 0: goto L_80062E58; break;
        case 1: goto L_80062E58; break;
        case 2: goto L_80062E58; break;
        case 3: goto L_80062E58; break;
        case 4: goto L_80062E58; break;
        case 5: goto L_80062E58; break;
        case 6: goto L_80062E58; break;
        case 7: goto L_80062E58; break;
        default: switch_error(__func__, 0x80062E50, 0x800DD39C);
    }
    // 0x80062E54: nop

L_80062E58:
    // 0x80062E58: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80062E5C: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80062E60: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80062E64: sll         $t1, $t0, 5
    ctx->r9 = S32(ctx->r8 << 5);
    // 0x80062E68: addiu       $t5, $t5, 0xC30
    ctx->r13 = ADD32(ctx->r13, 0XC30);
    // 0x80062E6C: addu        $t4, $t1, $t5
    ctx->r12 = ADD32(ctx->r9, ctx->r13);
    // 0x80062E70: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x80062E74: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80062E78: addiu       $t8, $t8, -0x520
    ctx->r24 = ADD32(ctx->r24, -0X520);
    // 0x80062E7C: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80062E80: lw          $t2, 0x4($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X4);
    // 0x80062E84: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80062E88: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
    // 0x80062E8C: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x80062E90: addiu       $t1, $t1, 0xC30
    ctx->r9 = ADD32(ctx->r9, 0XC30);
    // 0x80062E94: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x80062E98: lw          $t2, 0xC($t4)
    ctx->r10 = MEM_W(ctx->r12, 0XC);
    // 0x80062E9C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062EA0: sw          $t2, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r10;
    // 0x80062EA4: lw          $at, 0x10($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X10);
    // 0x80062EA8: addiu       $a0, $a0, -0x520
    ctx->r4 = ADD32(ctx->r4, -0X520);
    // 0x80062EAC: sw          $at, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r1;
    // 0x80062EB0: lw          $t2, 0x14($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X14);
    // 0x80062EB4: nop

    // 0x80062EB8: sw          $t2, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->r10;
    // 0x80062EBC: lw          $at, 0x18($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X18);
    // 0x80062EC0: nop

    // 0x80062EC4: sw          $at, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->r1;
    // 0x80062EC8: lw          $t2, 0x1C($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X1C);
    // 0x80062ECC: nop

    // 0x80062ED0: sw          $t2, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->r10;
    // 0x80062ED4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80062ED8: nop

    // 0x80062EDC: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x80062EE0: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x80062EE4: jal         0x80061A3C
    // 0x80062EE8: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    func_80061A3C(rdram, ctx);
        goto after_62;
    // 0x80062EE8: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    after_62:
    // 0x80062EEC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80062EF0: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80062EF4: sll         $t7, $t3, 1
    ctx->r15 = S32(ctx->r11 << 1);
    // 0x80062EF8: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x80062EFC: addiu       $t4, $t8, 0x20
    ctx->r12 = ADD32(ctx->r24, 0X20);
    // 0x80062F00: addiu       $t2, $t2, 0xC30
    ctx->r10 = ADD32(ctx->r10, 0XC30);
    // 0x80062F04: addu        $t6, $t4, $t2
    ctx->r14 = ADD32(ctx->r12, ctx->r10);
    // 0x80062F08: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80062F0C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80062F10: addiu       $t5, $t5, -0x520
    ctx->r13 = ADD32(ctx->r13, -0X520);
    // 0x80062F14: sw          $at, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->r1;
    // 0x80062F18: lw          $t1, 0x4($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X4);
    // 0x80062F1C: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80062F20: sw          $t1, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->r9;
    // 0x80062F24: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80062F28: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062F2C: sw          $at, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->r1;
    // 0x80062F30: lw          $t1, 0xC($t6)
    ctx->r9 = MEM_W(ctx->r14, 0XC);
    // 0x80062F34: addiu       $a0, $a0, -0x520
    ctx->r4 = ADD32(ctx->r4, -0X520);
    // 0x80062F38: sw          $t1, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->r9;
    // 0x80062F3C: lw          $at, 0x10($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X10);
    // 0x80062F40: addiu       $t2, $t2, 0xC30
    ctx->r10 = ADD32(ctx->r10, 0XC30);
    // 0x80062F44: sw          $at, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r1;
    // 0x80062F48: lw          $t1, 0x14($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X14);
    // 0x80062F4C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80062F50: sw          $t1, 0x34($t5)
    MEM_W(0X34, ctx->r13) = ctx->r9;
    // 0x80062F54: lw          $at, 0x18($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X18);
    // 0x80062F58: nop

    // 0x80062F5C: sw          $at, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r1;
    // 0x80062F60: lw          $t1, 0x1C($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X1C);
    // 0x80062F64: nop

    // 0x80062F68: sw          $t1, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->r9;
    // 0x80062F6C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80062F70: nop

    // 0x80062F74: sll         $t7, $t3, 1
    ctx->r15 = S32(ctx->r11 << 1);
    // 0x80062F78: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x80062F7C: addiu       $t4, $t8, 0x20
    ctx->r12 = ADD32(ctx->r24, 0X20);
    // 0x80062F80: jal         0x80061A3C
    // 0x80062F84: addu        $a1, $t4, $t2
    ctx->r5 = ADD32(ctx->r12, ctx->r10);
    func_80061A3C(rdram, ctx);
        goto after_63;
    // 0x80062F84: addu        $a1, $t4, $t2
    ctx->r5 = ADD32(ctx->r12, ctx->r10);
    after_63:
L_80062F88:
    // 0x80062F88: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80062F8C: lh          $t0, -0x12C($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X12C);
    // 0x80062F90: nop

    // 0x80062F94: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x80062F98: bne         $at, $zero, L_80063064
    if (ctx->r1 != 0) {
        // 0x80062F9C: nop
    
            goto L_80063064;
    }
    // 0x80062F9C: nop

    // 0x80062FA0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80062FA4: nop

    // 0x80062FA8: sltiu       $at, $t9, 0x8
    ctx->r1 = ctx->r25 < 0X8 ? 1 : 0;
    // 0x80062FAC: beq         $at, $zero, L_80062FD0
    if (ctx->r1 == 0) {
        // 0x80062FB0: nop
    
            goto L_80062FD0;
    }
    // 0x80062FB0: nop

    // 0x80062FB4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80062FB8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80062FBC: addu        $at, $at, $t9
    gpr jr_addend_80062FC8 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80062FC0: lw          $t9, -0x2C44($at)
    ctx->r25 = ADD32(ctx->r1, -0X2C44);
    // 0x80062FC4: nop

    // 0x80062FC8: jr          $t9
    // 0x80062FCC: nop

    switch (jr_addend_80062FC8 >> 2) {
        case 0: goto L_80062FD0; break;
        case 1: goto L_80062FD0; break;
        case 2: goto L_80062FD0; break;
        case 3: goto L_80062FD0; break;
        case 4: goto L_80062FD0; break;
        case 5: goto L_80062FD0; break;
        case 6: goto L_80062FD0; break;
        case 7: goto L_80062FD0; break;
        default: switch_error(__func__, 0x80062FC8, 0x800DD3BC);
    }
    // 0x80062FCC: nop

L_80062FD0:
    // 0x80062FD0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80062FD4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80062FD8: sll         $t1, $t6, 1
    ctx->r9 = S32(ctx->r14 << 1);
    // 0x80062FDC: sll         $t3, $t1, 5
    ctx->r11 = S32(ctx->r9 << 5);
    // 0x80062FE0: addiu       $t7, $t7, 0xE30
    ctx->r15 = ADD32(ctx->r15, 0XE30);
    // 0x80062FE4: addu        $t8, $t3, $t7
    ctx->r24 = ADD32(ctx->r11, ctx->r15);
    // 0x80062FE8: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80062FEC: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80062FF0: addiu       $t5, $t5, -0x520
    ctx->r13 = ADD32(ctx->r13, -0X520);
    // 0x80062FF4: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x80062FF8: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x80062FFC: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80063000: sw          $t0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r8;
    // 0x80063004: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x80063008: addiu       $t3, $t3, 0xE30
    ctx->r11 = ADD32(ctx->r11, 0XE30);
    // 0x8006300C: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x80063010: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x80063014: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80063018: sw          $t0, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r8;
    // 0x8006301C: lw          $at, 0x10($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X10);
    // 0x80063020: addiu       $a0, $a0, -0x520
    ctx->r4 = ADD32(ctx->r4, -0X520);
    // 0x80063024: sw          $at, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->r1;
    // 0x80063028: lw          $t0, 0x14($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X14);
    // 0x8006302C: nop

    // 0x80063030: sw          $t0, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->r8;
    // 0x80063034: lw          $at, 0x18($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X18);
    // 0x80063038: nop

    // 0x8006303C: sw          $at, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->r1;
    // 0x80063040: lw          $t0, 0x1C($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X1C);
    // 0x80063044: nop

    // 0x80063048: sw          $t0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->r8;
    // 0x8006304C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80063050: nop

    // 0x80063054: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x80063058: sll         $t1, $t6, 5
    ctx->r9 = S32(ctx->r14 << 5);
    // 0x8006305C: jal         0x80061A3C
    // 0x80063060: addu        $a1, $t1, $t3
    ctx->r5 = ADD32(ctx->r9, ctx->r11);
    func_80061A3C(rdram, ctx);
        goto after_64;
    // 0x80063060: addu        $a1, $t1, $t3
    ctx->r5 = ADD32(ctx->r9, ctx->r11);
    after_64:
L_80063064:
    // 0x80063064: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80063068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006306C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80063070: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80063074: jr          $ra
    // 0x80063078: sb          $t7, -0x4A4($at)
    MEM_B(-0X4A4, ctx->r1) = ctx->r15;
    return;
    // 0x80063078: sb          $t7, -0x4A4($at)
    MEM_B(-0X4A4, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_8006307C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006307C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80063080: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80063084: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80063088: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006308C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80063090: nop

    // 0x80063094: beq         $t7, $zero, L_800630B0
    if (ctx->r15 == 0) {
        // 0x80063098: nop
    
            goto L_800630B0;
    }
    // 0x80063098: nop

    // 0x8006309C: jal         0x8007E328
    // 0x800630A0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x800630A0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x800630A4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800630A8: nop

    // 0x800630AC: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
L_800630B0:
    // 0x800630B0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800630B4: nop

    // 0x800630B8: lw          $t0, 0x1C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X1C);
    // 0x800630BC: nop

    // 0x800630C0: beq         $t0, $zero, L_800630DC
    if (ctx->r8 == 0) {
        // 0x800630C4: nop
    
            goto L_800630DC;
    }
    // 0x800630C4: nop

    // 0x800630C8: jal         0x8007E328
    // 0x800630CC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x800630CC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x800630D0: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800630D4: nop

    // 0x800630D8: sw          $zero, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = 0;
L_800630DC:
    // 0x800630DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800630E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800630E4: jr          $ra
    // 0x800630E8: nop

    return;
    // 0x800630E8: nop

;}
RECOMP_FUNC void func_800630EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800630EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800630F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800630F4: jal         0x8004A34C
    // 0x800630F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x800630F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800630FC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80063100: lh          $t6, -0x12C($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X12C);
    // 0x80063104: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80063108: bne         $t6, $at, L_800632C8
    if (ctx->r14 != ctx->r1) {
        // 0x8006310C: nop
    
            goto L_800632C8;
    }
    // 0x8006310C: nop

    // 0x80063110: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80063114: lbu         $t7, -0x4A4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X4A4);
    // 0x80063118: nop

    // 0x8006311C: sltiu       $at, $t7, 0x8
    ctx->r1 = ctx->r15 < 0X8 ? 1 : 0;
    // 0x80063120: beq         $at, $zero, L_8006329C
    if (ctx->r1 == 0) {
        // 0x80063124: nop
    
            goto L_8006329C;
    }
    // 0x80063124: nop

    // 0x80063128: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006312C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80063130: addu        $at, $at, $t7
    gpr jr_addend_8006313C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80063134: lw          $t7, -0x2C24($at)
    ctx->r15 = ADD32(ctx->r1, -0X2C24);
    // 0x80063138: nop

    // 0x8006313C: jr          $t7
    // 0x80063140: nop

    switch (jr_addend_8006313C >> 2) {
        case 0: goto L_80063144; break;
        case 1: goto L_80063170; break;
        case 2: goto L_8006319C; break;
        case 3: goto L_800631C8; break;
        case 4: goto L_800631F4; break;
        case 5: goto L_80063214; break;
        case 6: goto L_8006324C; break;
        case 7: goto L_80063278; break;
        default: switch_error(__func__, 0x8006313C, 0x800DD3DC);
    }
    // 0x80063140: nop

L_80063144:
    // 0x80063144: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063148: jal         0x80077028
    // 0x8006314C: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    func_80077028(rdram, ctx);
        goto after_1;
    // 0x8006314C: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    after_1:
    // 0x80063150: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063154: jal         0x800766C8
    // 0x80063158: addiu       $a0, $a0, 0x1030
    ctx->r4 = ADD32(ctx->r4, 0X1030);
    func_800766C8(rdram, ctx);
        goto after_2;
    // 0x80063158: addiu       $a0, $a0, 0x1030
    ctx->r4 = ADD32(ctx->r4, 0X1030);
    after_2:
    // 0x8006315C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80063160: jal         0x80075400
    // 0x80063164: addiu       $a0, $a0, -0x4C0
    ctx->r4 = ADD32(ctx->r4, -0X4C0);
    func_80075400(rdram, ctx);
        goto after_3;
    // 0x80063164: addiu       $a0, $a0, -0x4C0
    ctx->r4 = ADD32(ctx->r4, -0X4C0);
    after_3:
    // 0x80063168: b           L_8006329C
    // 0x8006316C: nop

        goto L_8006329C;
    // 0x8006316C: nop

L_80063170:
    // 0x80063170: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063174: jal         0x80077028
    // 0x80063178: addiu       $a0, $a0, 0x468
    ctx->r4 = ADD32(ctx->r4, 0X468);
    func_80077028(rdram, ctx);
        goto after_4;
    // 0x80063178: addiu       $a0, $a0, 0x468
    ctx->r4 = ADD32(ctx->r4, 0X468);
    after_4:
    // 0x8006317C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063180: jal         0x80077028
    // 0x80063184: addiu       $a0, $a0, 0x3A8
    ctx->r4 = ADD32(ctx->r4, 0X3A8);
    func_80077028(rdram, ctx);
        goto after_5;
    // 0x80063184: addiu       $a0, $a0, 0x3A8
    ctx->r4 = ADD32(ctx->r4, 0X3A8);
    after_5:
    // 0x80063188: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8006318C: jal         0x800766C8
    // 0x80063190: addiu       $a0, $a0, 0x2890
    ctx->r4 = ADD32(ctx->r4, 0X2890);
    func_800766C8(rdram, ctx);
        goto after_6;
    // 0x80063190: addiu       $a0, $a0, 0x2890
    ctx->r4 = ADD32(ctx->r4, 0X2890);
    after_6:
    // 0x80063194: b           L_8006329C
    // 0x80063198: nop

        goto L_8006329C;
    // 0x80063198: nop

L_8006319C:
    // 0x8006319C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800631A0: jal         0x800766C8
    // 0x800631A4: addiu       $a0, $a0, 0x2A64
    ctx->r4 = ADD32(ctx->r4, 0X2A64);
    func_800766C8(rdram, ctx);
        goto after_7;
    // 0x800631A4: addiu       $a0, $a0, 0x2A64
    ctx->r4 = ADD32(ctx->r4, 0X2A64);
    after_7:
    // 0x800631A8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800631AC: jal         0x800766C8
    // 0x800631B0: addiu       $a0, $a0, 0x29C8
    ctx->r4 = ADD32(ctx->r4, 0X29C8);
    func_800766C8(rdram, ctx);
        goto after_8;
    // 0x800631B0: addiu       $a0, $a0, 0x29C8
    ctx->r4 = ADD32(ctx->r4, 0X29C8);
    after_8:
    // 0x800631B4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800631B8: jal         0x800766C8
    // 0x800631BC: addiu       $a0, $a0, 0x292C
    ctx->r4 = ADD32(ctx->r4, 0X292C);
    func_800766C8(rdram, ctx);
        goto after_9;
    // 0x800631BC: addiu       $a0, $a0, 0x292C
    ctx->r4 = ADD32(ctx->r4, 0X292C);
    after_9:
    // 0x800631C0: b           L_8006329C
    // 0x800631C4: nop

        goto L_8006329C;
    // 0x800631C4: nop

L_800631C8:
    // 0x800631C8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800631CC: jal         0x80077028
    // 0x800631D0: addiu       $a0, $a0, 0x408
    ctx->r4 = ADD32(ctx->r4, 0X408);
    func_80077028(rdram, ctx);
        goto after_10;
    // 0x800631D0: addiu       $a0, $a0, 0x408
    ctx->r4 = ADD32(ctx->r4, 0X408);
    after_10:
    // 0x800631D4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800631D8: jal         0x80077028
    // 0x800631DC: addiu       $a0, $a0, 0x318
    ctx->r4 = ADD32(ctx->r4, 0X318);
    func_80077028(rdram, ctx);
        goto after_11;
    // 0x800631DC: addiu       $a0, $a0, 0x318
    ctx->r4 = ADD32(ctx->r4, 0X318);
    after_11:
    // 0x800631E0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800631E4: jal         0x800766C8
    // 0x800631E8: addiu       $a0, $a0, 0x2008
    ctx->r4 = ADD32(ctx->r4, 0X2008);
    func_800766C8(rdram, ctx);
        goto after_12;
    // 0x800631E8: addiu       $a0, $a0, 0x2008
    ctx->r4 = ADD32(ctx->r4, 0X2008);
    after_12:
    // 0x800631EC: b           L_8006329C
    // 0x800631F0: nop

        goto L_8006329C;
    // 0x800631F0: nop

L_800631F4:
    // 0x800631F4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800631F8: jal         0x80077028
    // 0x800631FC: addiu       $a0, $a0, 0x378
    ctx->r4 = ADD32(ctx->r4, 0X378);
    func_80077028(rdram, ctx);
        goto after_13;
    // 0x800631FC: addiu       $a0, $a0, 0x378
    ctx->r4 = ADD32(ctx->r4, 0X378);
    after_13:
    // 0x80063200: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063204: jal         0x800766C8
    // 0x80063208: addiu       $a0, $a0, 0x2C38
    ctx->r4 = ADD32(ctx->r4, 0X2C38);
    func_800766C8(rdram, ctx);
        goto after_14;
    // 0x80063208: addiu       $a0, $a0, 0x2C38
    ctx->r4 = ADD32(ctx->r4, 0X2C38);
    after_14:
    // 0x8006320C: b           L_8006329C
    // 0x80063210: nop

        goto L_8006329C;
    // 0x80063210: nop

L_80063214:
    // 0x80063214: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063218: jal         0x80077028
    // 0x8006321C: addiu       $a0, $a0, 0x3D8
    ctx->r4 = ADD32(ctx->r4, 0X3D8);
    func_80077028(rdram, ctx);
        goto after_15;
    // 0x8006321C: addiu       $a0, $a0, 0x3D8
    ctx->r4 = ADD32(ctx->r4, 0X3D8);
    after_15:
    // 0x80063220: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063224: jal         0x80077028
    // 0x80063228: addiu       $a0, $a0, 0x2E8
    ctx->r4 = ADD32(ctx->r4, 0X2E8);
    func_80077028(rdram, ctx);
        goto after_16;
    // 0x80063228: addiu       $a0, $a0, 0x2E8
    ctx->r4 = ADD32(ctx->r4, 0X2E8);
    after_16:
    // 0x8006322C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063230: jal         0x800766C8
    // 0x80063234: addiu       $a0, $a0, 0x181C
    ctx->r4 = ADD32(ctx->r4, 0X181C);
    func_800766C8(rdram, ctx);
        goto after_17;
    // 0x80063234: addiu       $a0, $a0, 0x181C
    ctx->r4 = ADD32(ctx->r4, 0X181C);
    after_17:
    // 0x80063238: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8006323C: jal         0x800766C8
    // 0x80063240: addiu       $a0, $a0, 0x1510
    ctx->r4 = ADD32(ctx->r4, 0X1510);
    func_800766C8(rdram, ctx);
        goto after_18;
    // 0x80063240: addiu       $a0, $a0, 0x1510
    ctx->r4 = ADD32(ctx->r4, 0X1510);
    after_18:
    // 0x80063244: b           L_8006329C
    // 0x80063248: nop

        goto L_8006329C;
    // 0x80063248: nop

L_8006324C:
    // 0x8006324C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063250: jal         0x80077028
    // 0x80063254: addiu       $a0, $a0, 0x438
    ctx->r4 = ADD32(ctx->r4, 0X438);
    func_80077028(rdram, ctx);
        goto after_19;
    // 0x80063254: addiu       $a0, $a0, 0x438
    ctx->r4 = ADD32(ctx->r4, 0X438);
    after_19:
    // 0x80063258: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8006325C: jal         0x80077028
    // 0x80063260: addiu       $a0, $a0, 0x348
    ctx->r4 = ADD32(ctx->r4, 0X348);
    func_80077028(rdram, ctx);
        goto after_20;
    // 0x80063260: addiu       $a0, $a0, 0x348
    ctx->r4 = ADD32(ctx->r4, 0X348);
    after_20:
    // 0x80063264: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063268: jal         0x800766C8
    // 0x8006326C: addiu       $a0, $a0, 0x20A4
    ctx->r4 = ADD32(ctx->r4, 0X20A4);
    func_800766C8(rdram, ctx);
        goto after_21;
    // 0x8006326C: addiu       $a0, $a0, 0x20A4
    ctx->r4 = ADD32(ctx->r4, 0X20A4);
    after_21:
    // 0x80063270: b           L_8006329C
    // 0x80063274: nop

        goto L_8006329C;
    // 0x80063274: nop

L_80063278:
    // 0x80063278: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8006327C: jal         0x800766C8
    // 0x80063280: addiu       $a0, $a0, 0x1F6C
    ctx->r4 = ADD32(ctx->r4, 0X1F6C);
    func_800766C8(rdram, ctx);
        goto after_22;
    // 0x80063280: addiu       $a0, $a0, 0x1F6C
    ctx->r4 = ADD32(ctx->r4, 0X1F6C);
    after_22:
    // 0x80063284: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063288: jal         0x800766C8
    // 0x8006328C: addiu       $a0, $a0, 0x1A8C
    ctx->r4 = ADD32(ctx->r4, 0X1A8C);
    func_800766C8(rdram, ctx);
        goto after_23;
    // 0x8006328C: addiu       $a0, $a0, 0x1A8C
    ctx->r4 = ADD32(ctx->r4, 0X1A8C);
    after_23:
    // 0x80063290: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063294: jal         0x800766C8
    // 0x80063298: addiu       $a0, $a0, 0x18B8
    ctx->r4 = ADD32(ctx->r4, 0X18B8);
    func_800766C8(rdram, ctx);
        goto after_24;
    // 0x80063298: addiu       $a0, $a0, 0x18B8
    ctx->r4 = ADD32(ctx->r4, 0X18B8);
    after_24:
L_8006329C:
    // 0x8006329C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800632A0: jal         0x8006307C
    // 0x800632A4: addiu       $a0, $a0, -0x520
    ctx->r4 = ADD32(ctx->r4, -0X520);
    func_8006307C(rdram, ctx);
        goto after_25;
    // 0x800632A4: addiu       $a0, $a0, -0x520
    ctx->r4 = ADD32(ctx->r4, -0X520);
    after_25:
    // 0x800632A8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800632AC: addiu       $a0, $a0, -0x520
    ctx->r4 = ADD32(ctx->r4, -0X520);
    // 0x800632B0: jal         0x8006307C
    // 0x800632B4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_8006307C(rdram, ctx);
        goto after_26;
    // 0x800632B4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_26:
    // 0x800632B8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800632BC: addiu       $a0, $a0, -0x520
    ctx->r4 = ADD32(ctx->r4, -0X520);
    // 0x800632C0: jal         0x8006307C
    // 0x800632C4: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    func_8006307C(rdram, ctx);
        goto after_27;
    // 0x800632C4: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_27:
L_800632C8:
    // 0x800632C8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800632CC: lh          $t8, -0x12C($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X12C);
    // 0x800632D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800632D4: bne         $t8, $at, L_800632F8
    if (ctx->r24 != ctx->r1) {
        // 0x800632D8: nop
    
            goto L_800632F8;
    }
    // 0x800632D8: nop

    // 0x800632DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800632E0: jal         0x8006307C
    // 0x800632E4: addiu       $a0, $a0, -0x520
    ctx->r4 = ADD32(ctx->r4, -0X520);
    func_8006307C(rdram, ctx);
        goto after_28;
    // 0x800632E4: addiu       $a0, $a0, -0x520
    ctx->r4 = ADD32(ctx->r4, -0X520);
    after_28:
    // 0x800632E8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800632EC: addiu       $a0, $a0, -0x520
    ctx->r4 = ADD32(ctx->r4, -0X520);
    // 0x800632F0: jal         0x8006307C
    // 0x800632F4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_8006307C(rdram, ctx);
        goto after_29;
    // 0x800632F4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_29:
L_800632F8:
    // 0x800632F8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800632FC: lh          $t9, -0x12C($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X12C);
    // 0x80063300: nop

    // 0x80063304: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x80063308: bne         $at, $zero, L_8006331C
    if (ctx->r1 != 0) {
        // 0x8006330C: nop
    
            goto L_8006331C;
    }
    // 0x8006330C: nop

    // 0x80063310: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80063314: jal         0x8006307C
    // 0x80063318: addiu       $a0, $a0, -0x520
    ctx->r4 = ADD32(ctx->r4, -0X520);
    func_8006307C(rdram, ctx);
        goto after_30;
    // 0x80063318: addiu       $a0, $a0, -0x520
    ctx->r4 = ADD32(ctx->r4, -0X520);
    after_30:
L_8006331C:
    // 0x8006331C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80063320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80063324: jr          $ra
    // 0x80063328: nop

    return;
    // 0x80063328: nop

;}
RECOMP_FUNC void func_8006332C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006332C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80063330: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80063334: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80063338: jal         0x800A3AF0
    // 0x8006333C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_800A3AF0(rdram, ctx);
        goto after_0;
    // 0x8006333C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x80063340: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80063344: nop

    // 0x80063348: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8006334C: beq         $at, $zero, L_800633BC
    if (ctx->r1 == 0) {
        // 0x80063350: nop
    
            goto L_800633BC;
    }
    // 0x80063350: nop

L_80063354:
    // 0x80063354: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80063358: addiu       $t7, $t7, 0x4A0
    ctx->r15 = ADD32(ctx->r15, 0X4A0);
    // 0x8006335C: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x80063360: nop

    // 0x80063364: beq         $t8, $zero, L_80063374
    if (ctx->r24 == 0) {
        // 0x80063368: nop
    
            goto L_80063374;
    }
    // 0x80063368: nop

    // 0x8006336C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80063370: sh          $t9, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r25;
L_80063374:
    // 0x80063374: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80063378: addiu       $t0, $t0, 0x4A4
    ctx->r8 = ADD32(ctx->r8, 0X4A4);
    // 0x8006337C: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x80063380: nop

    // 0x80063384: beq         $t1, $zero, L_80063394
    if (ctx->r9 == 0) {
        // 0x80063388: nop
    
            goto L_80063394;
    }
    // 0x80063388: nop

    // 0x8006338C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80063390: sh          $t2, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r10;
L_80063394:
    // 0x80063394: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80063398: nop

    // 0x8006339C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800633A0: jal         0x800A3AF0
    // 0x800633A4: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    func_800A3AF0(rdram, ctx);
        goto after_1;
    // 0x800633A4: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    after_1:
    // 0x800633A8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800633AC: nop

    // 0x800633B0: slt         $at, $t5, $v0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800633B4: bne         $at, $zero, L_80063354
    if (ctx->r1 != 0) {
        // 0x800633B8: nop
    
            goto L_80063354;
    }
    // 0x800633B8: nop

L_800633BC:
    // 0x800633BC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800633C0: lw          $a0, -0x128($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X128);
    // 0x800633C4: nop

    // 0x800633C8: sll         $t6, $a0, 11
    ctx->r14 = S32(ctx->r4 << 11);
    // 0x800633CC: jal         0x800B8010
    // 0x800633D0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    sins(rdram, ctx);
        goto after_2;
    // 0x800633D0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_2:
    // 0x800633D4: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800633D8: addiu       $t9, $t9, 0x4A0
    ctx->r25 = ADD32(ctx->r25, 0X4A0);
    // 0x800633DC: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x800633E0: lh          $t7, 0x0($t9)
    ctx->r15 = MEM_H(ctx->r25, 0X0);
    // 0x800633E4: sra         $t8, $s0, 16
    ctx->r24 = S32(SIGNED(ctx->r16) >> 16);
    // 0x800633E8: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x800633EC: multu       $t7, $s0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800633F0: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800633F4: addiu       $t3, $t3, -0x4A0
    ctx->r11 = ADD32(ctx->r11, -0X4A0);
    // 0x800633F8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800633FC: mflo        $t1
    ctx->r9 = lo;
    // 0x80063400: sra         $t2, $t1, 13
    ctx->r10 = S32(SIGNED(ctx->r9) >> 13);
    // 0x80063404: addiu       $t0, $t2, 0x400
    ctx->r8 = ADD32(ctx->r10, 0X400);
    // 0x80063408: sh          $t0, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r8;
    // 0x8006340C: lw          $a0, -0x128($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X128);
    // 0x80063410: nop

    // 0x80063414: sll         $t4, $a0, 11
    ctx->r12 = S32(ctx->r4 << 11);
    // 0x80063418: jal         0x800B8080
    // 0x8006341C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    coss(rdram, ctx);
        goto after_3;
    // 0x8006341C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_3:
    // 0x80063420: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80063424: addiu       $t6, $t6, 0x4A4
    ctx->r14 = ADD32(ctx->r14, 0X4A4);
    // 0x80063428: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x8006342C: lh          $t8, 0x0($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X0);
    // 0x80063430: sra         $t5, $s0, 16
    ctx->r13 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80063434: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80063438: multu       $t8, $s0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006343C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80063440: addiu       $t2, $t2, -0x49C
    ctx->r10 = ADD32(ctx->r10, -0X49C);
    // 0x80063444: mflo        $t9
    ctx->r25 = lo;
    // 0x80063448: sra         $t7, $t9, 13
    ctx->r15 = S32(SIGNED(ctx->r25) >> 13);
    // 0x8006344C: addiu       $t1, $t7, 0x400
    ctx->r9 = ADD32(ctx->r15, 0X400);
    // 0x80063450: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x80063454: jal         0x800A3AF0
    // 0x80063458: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    func_800A3AF0(rdram, ctx);
        goto after_4;
    // 0x80063458: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    after_4:
    // 0x8006345C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80063460: nop

    // 0x80063464: slt         $at, $t0, $v0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80063468: beq         $at, $zero, L_80063608
    if (ctx->r1 == 0) {
        // 0x8006346C: nop
    
            goto L_80063608;
    }
    // 0x8006346C: nop

L_80063470:
    // 0x80063470: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80063474: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80063478: addiu       $t5, $t5, -0x4A0
    ctx->r13 = ADD32(ctx->r13, -0X4A0);
    // 0x8006347C: addiu       $t3, $t3, 0x498
    ctx->r11 = ADD32(ctx->r11, 0X498);
    // 0x80063480: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x80063484: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x80063488: nop

    // 0x8006348C: slt         $at, $t6, $t4
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80063490: beq         $at, $zero, L_800634CC
    if (ctx->r1 == 0) {
        // 0x80063494: nop
    
            goto L_800634CC;
    }
    // 0x80063494: nop

    // 0x80063498: addiu       $t8, $t4, -0x40
    ctx->r24 = ADD32(ctx->r12, -0X40);
    // 0x8006349C: sh          $t8, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r24;
    // 0x800634A0: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800634A4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800634A8: addiu       $t1, $t1, -0x4A0
    ctx->r9 = ADD32(ctx->r9, -0X4A0);
    // 0x800634AC: addiu       $t9, $t9, 0x498
    ctx->r25 = ADD32(ctx->r25, 0X498);
    // 0x800634B0: lh          $t7, 0x0($t9)
    ctx->r15 = MEM_H(ctx->r25, 0X0);
    // 0x800634B4: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x800634B8: nop

    // 0x800634BC: slt         $at, $t7, $t2
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800634C0: beq         $at, $zero, L_800634CC
    if (ctx->r1 == 0) {
        // 0x800634C4: nop
    
            goto L_800634CC;
    }
    // 0x800634C4: nop

    // 0x800634C8: sh          $t2, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r10;
L_800634CC:
    // 0x800634CC: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800634D0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800634D4: addiu       $t6, $t6, -0x4A0
    ctx->r14 = ADD32(ctx->r14, -0X4A0);
    // 0x800634D8: addiu       $t0, $t0, 0x498
    ctx->r8 = ADD32(ctx->r8, 0X498);
    // 0x800634DC: lh          $t5, 0x0($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X0);
    // 0x800634E0: lh          $t4, 0x0($t6)
    ctx->r12 = MEM_H(ctx->r14, 0X0);
    // 0x800634E4: nop

    // 0x800634E8: slt         $at, $t5, $t4
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800634EC: beq         $at, $zero, L_80063528
    if (ctx->r1 == 0) {
        // 0x800634F0: nop
    
            goto L_80063528;
    }
    // 0x800634F0: nop

    // 0x800634F4: addiu       $t8, $t5, 0x40
    ctx->r24 = ADD32(ctx->r13, 0X40);
    // 0x800634F8: sh          $t8, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r24;
    // 0x800634FC: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80063500: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80063504: addiu       $t7, $t7, -0x4A0
    ctx->r15 = ADD32(ctx->r15, -0X4A0);
    // 0x80063508: addiu       $t3, $t3, 0x498
    ctx->r11 = ADD32(ctx->r11, 0X498);
    // 0x8006350C: lh          $t1, 0x0($t3)
    ctx->r9 = MEM_H(ctx->r11, 0X0);
    // 0x80063510: lh          $t2, 0x0($t7)
    ctx->r10 = MEM_H(ctx->r15, 0X0);
    // 0x80063514: nop

    // 0x80063518: slt         $at, $t2, $t1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8006351C: beq         $at, $zero, L_80063528
    if (ctx->r1 == 0) {
        // 0x80063520: nop
    
            goto L_80063528;
    }
    // 0x80063520: nop

    // 0x80063524: sh          $t2, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r10;
L_80063528:
    // 0x80063528: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8006352C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80063530: addiu       $t4, $t4, -0x49C
    ctx->r12 = ADD32(ctx->r12, -0X49C);
    // 0x80063534: addiu       $t9, $t9, 0x49C
    ctx->r25 = ADD32(ctx->r25, 0X49C);
    // 0x80063538: lh          $t6, 0x0($t9)
    ctx->r14 = MEM_H(ctx->r25, 0X0);
    // 0x8006353C: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x80063540: nop

    // 0x80063544: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80063548: beq         $at, $zero, L_80063584
    if (ctx->r1 == 0) {
        // 0x8006354C: nop
    
            goto L_80063584;
    }
    // 0x8006354C: nop

    // 0x80063550: addiu       $t8, $t6, -0x40
    ctx->r24 = ADD32(ctx->r14, -0X40);
    // 0x80063554: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x80063558: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8006355C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80063560: addiu       $t1, $t1, -0x49C
    ctx->r9 = ADD32(ctx->r9, -0X49C);
    // 0x80063564: addiu       $t0, $t0, 0x49C
    ctx->r8 = ADD32(ctx->r8, 0X49C);
    // 0x80063568: lh          $t7, 0x0($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X0);
    // 0x8006356C: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x80063570: nop

    // 0x80063574: slt         $at, $t7, $t2
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80063578: beq         $at, $zero, L_80063584
    if (ctx->r1 == 0) {
        // 0x8006357C: nop
    
            goto L_80063584;
    }
    // 0x8006357C: nop

    // 0x80063580: sh          $t2, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r10;
L_80063584:
    // 0x80063584: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80063588: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8006358C: addiu       $t5, $t5, -0x49C
    ctx->r13 = ADD32(ctx->r13, -0X49C);
    // 0x80063590: addiu       $t3, $t3, 0x49C
    ctx->r11 = ADD32(ctx->r11, 0X49C);
    // 0x80063594: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x80063598: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x8006359C: nop

    // 0x800635A0: slt         $at, $t4, $t6
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800635A4: beq         $at, $zero, L_800635E0
    if (ctx->r1 == 0) {
        // 0x800635A8: nop
    
            goto L_800635E0;
    }
    // 0x800635A8: nop

    // 0x800635AC: addiu       $t8, $t4, 0x40
    ctx->r24 = ADD32(ctx->r12, 0X40);
    // 0x800635B0: sh          $t8, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r24;
    // 0x800635B4: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800635B8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800635BC: addiu       $t7, $t7, -0x49C
    ctx->r15 = ADD32(ctx->r15, -0X49C);
    // 0x800635C0: addiu       $t9, $t9, 0x49C
    ctx->r25 = ADD32(ctx->r25, 0X49C);
    // 0x800635C4: lh          $t1, 0x0($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X0);
    // 0x800635C8: lh          $t2, 0x0($t7)
    ctx->r10 = MEM_H(ctx->r15, 0X0);
    // 0x800635CC: nop

    // 0x800635D0: slt         $at, $t2, $t1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800635D4: beq         $at, $zero, L_800635E0
    if (ctx->r1 == 0) {
        // 0x800635D8: nop
    
            goto L_800635E0;
    }
    // 0x800635D8: nop

    // 0x800635DC: sh          $t2, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r10;
L_800635E0:
    // 0x800635E0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800635E4: nop

    // 0x800635E8: addiu       $t5, $t0, 0x1
    ctx->r13 = ADD32(ctx->r8, 0X1);
    // 0x800635EC: jal         0x800A3AF0
    // 0x800635F0: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    func_800A3AF0(rdram, ctx);
        goto after_5;
    // 0x800635F0: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    after_5:
    // 0x800635F4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800635F8: nop

    // 0x800635FC: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80063600: bne         $at, $zero, L_80063470
    if (ctx->r1 != 0) {
        // 0x80063604: nop
    
            goto L_80063470;
    }
    // 0x80063604: nop

L_80063608:
    // 0x80063608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006360C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80063610: jr          $ra
    // 0x80063614: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80063614: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80063618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063618: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8006361C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80063620: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x80063624: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80063628: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8006362C: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x80063630: sh          $t6, 0x4A0($at)
    MEM_H(0X4A0, ctx->r1) = ctx->r14;
    // 0x80063634: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80063638: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x8006363C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80063640: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x80063644: jr          $ra
    // 0x80063648: sh          $t8, 0x4A4($at)
    MEM_H(0X4A4, ctx->r1) = ctx->r24;
    return;
    // 0x80063648: sh          $t8, 0x4A4($at)
    MEM_H(0X4A4, ctx->r1) = ctx->r24;
;}
RECOMP_FUNC void func_8006364C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006364C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80063650: addiu       $t6, $t6, 0x4A0
    ctx->r14 = ADD32(ctx->r14, 0X4A0);
    // 0x80063654: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80063658: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    // 0x8006365C: addiu       $t7, $t7, 0x4A0
    ctx->r15 = ADD32(ctx->r15, 0X4A0);
    // 0x80063660: sh          $zero, 0x2($t7)
    MEM_H(0X2, ctx->r15) = 0;
    // 0x80063664: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80063668: addiu       $t8, $t8, 0x4A4
    ctx->r24 = ADD32(ctx->r24, 0X4A4);
    // 0x8006366C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80063670: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x80063674: addiu       $t9, $t9, 0x4A4
    ctx->r25 = ADD32(ctx->r25, 0X4A4);
    // 0x80063678: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8006367C: sh          $zero, 0x2($t9)
    MEM_H(0X2, ctx->r25) = 0;
    // 0x80063680: addiu       $t1, $t1, 0x498
    ctx->r9 = ADD32(ctx->r9, 0X498);
    // 0x80063684: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    // 0x80063688: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8006368C: sh          $t0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r8;
    // 0x80063690: addiu       $t3, $t3, 0x498
    ctx->r11 = ADD32(ctx->r11, 0X498);
    // 0x80063694: addiu       $t2, $zero, 0x400
    ctx->r10 = ADD32(0, 0X400);
    // 0x80063698: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8006369C: sh          $t2, 0x2($t3)
    MEM_H(0X2, ctx->r11) = ctx->r10;
    // 0x800636A0: addiu       $t5, $t5, 0x49C
    ctx->r13 = ADD32(ctx->r13, 0X49C);
    // 0x800636A4: addiu       $t4, $zero, 0x400
    ctx->r12 = ADD32(0, 0X400);
    // 0x800636A8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800636AC: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x800636B0: addiu       $t7, $t7, 0x49C
    ctx->r15 = ADD32(ctx->r15, 0X49C);
    // 0x800636B4: addiu       $t6, $zero, 0x400
    ctx->r14 = ADD32(0, 0X400);
    // 0x800636B8: jr          $ra
    // 0x800636BC: sh          $t6, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r14;
    return;
    // 0x800636BC: sh          $t6, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r14;
;}
RECOMP_FUNC void func_800636C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800636C0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800636C4: lbu         $t7, -0x118($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X118);
    // 0x800636C8: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x800636CC: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800636D0: addiu       $t6, $t6, 0xA00
    ctx->r14 = ADD32(ctx->r14, 0XA00);
    // 0x800636D4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800636D8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800636DC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800636E0: bne         $t7, $at, L_80063740
    if (ctx->r15 != ctx->r1) {
        // 0x800636E4: sw          $t6, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = ctx->r14;
            goto L_80063740;
    }
    // 0x800636E4: sw          $t6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r14;
    // 0x800636E8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800636EC: lbu         $t8, 0x2B0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X2B0);
    // 0x800636F0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800636F4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800636F8: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x800636FC: bne         $t0, $zero, L_80063740
    if (ctx->r8 != 0) {
        // 0x80063700: sb          $t9, 0x2B0($at)
        MEM_B(0X2B0, ctx->r1) = ctx->r25;
            goto L_80063740;
    }
    // 0x80063700: sb          $t9, 0x2B0($at)
    MEM_B(0X2B0, ctx->r1) = ctx->r25;
    // 0x80063704: jal         0x80050AC4
    // 0x80063708: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_80050AC4(rdram, ctx);
        goto after_0;
    // 0x80063708: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x8006370C: sb          $v0, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r2;
    // 0x80063710: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80063714: lbu         $t1, 0x2B4($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X2B4);
    // 0x80063718: lbu         $t2, 0xA3($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XA3);
    // 0x8006371C: nop

    // 0x80063720: beq         $t1, $t2, L_80063734
    if (ctx->r9 == ctx->r10) {
        // 0x80063724: nop
    
            goto L_80063734;
    }
    // 0x80063724: nop

    // 0x80063728: lbu         $t3, 0xA3($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XA3);
    // 0x8006372C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80063730: sb          $t3, 0x2B4($at)
    MEM_B(0X2B4, ctx->r1) = ctx->r11;
L_80063734:
    // 0x80063734: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x80063738: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006373C: sb          $t4, 0x2B0($at)
    MEM_B(0X2B0, ctx->r1) = ctx->r12;
L_80063740:
    // 0x80063740: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80063744: lh          $t5, -0x12C($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X12C);
    // 0x80063748: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006374C: bne         $t5, $at, L_80064378
    if (ctx->r13 != ctx->r1) {
        // 0x80063750: nop
    
            goto L_80064378;
    }
    // 0x80063750: nop

    // 0x80063754: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x80063758: nop

    // 0x8006375C: addiu       $t8, $t7, 0x7FFF
    ctx->r24 = ADD32(ctx->r15, 0X7FFF);
    // 0x80063760: lbu         $t8, 0x64F9($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X64F9);
    // 0x80063764: nop

    // 0x80063768: sltiu       $at, $t8, 0x8
    ctx->r1 = ctx->r24 < 0X8 ? 1 : 0;
    // 0x8006376C: beq         $at, $zero, L_80064210
    if (ctx->r1 == 0) {
        // 0x80063770: nop
    
            goto L_80064210;
    }
    // 0x80063770: nop

    // 0x80063774: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80063778: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006377C: addu        $at, $at, $t8
    gpr jr_addend_80063788 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80063780: lw          $t8, -0x2C04($at)
    ctx->r24 = ADD32(ctx->r1, -0X2C04);
    // 0x80063784: nop

    // 0x80063788: jr          $t8
    // 0x8006378C: nop

    switch (jr_addend_80063788 >> 2) {
        case 0: goto L_80063790; break;
        case 1: goto L_80063A40; break;
        case 2: goto L_80063B48; break;
        case 3: goto L_80063C34; break;
        case 4: goto L_80063D20; break;
        case 5: goto L_80063E00; break;
        case 6: goto L_80063F44; break;
        case 7: goto L_800640C0; break;
        default: switch_error(__func__, 0x80063788, 0x800DD3FC);
    }
    // 0x8006378C: nop

L_80063790:
    // 0x80063790: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80063794: lwc1        $f4, 0x2CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2CC);
    // 0x80063798: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006379C: lwc1        $f6, 0x4B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4B4);
    // 0x800637A0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800637A4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800637A8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800637AC: swc1        $f8, 0x2CC($at)
    MEM_W(0X2CC, ctx->r1) = ctx->f8.u32l;
    // 0x800637B0: jal         0x8005BBFC
    // 0x800637B4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_1;
    // 0x800637B4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_1:
    // 0x800637B8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800637BC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800637C0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800637C4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800637C8: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800637CC: lw          $t2, -0x508($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X508);
    // 0x800637D0: lw          $t1, -0x50C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X50C);
    // 0x800637D4: lw          $t6, -0x510($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X510);
    // 0x800637D8: lw          $t0, -0x514($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X514);
    // 0x800637DC: lw          $t9, -0x518($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X518);
    // 0x800637E0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800637E4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800637E8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800637EC: lw          $a3, -0x51C($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X51C);
    // 0x800637F0: lw          $a2, -0x504($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X504);
    // 0x800637F4: lw          $a1, -0x520($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X520);
    // 0x800637F8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800637FC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80063800: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80063804: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80063808: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8006380C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80063810: jal         0x80057460
    // 0x80063814: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80057460(rdram, ctx);
        goto after_2;
    // 0x80063814: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_2:
    // 0x80063818: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006381C: jal         0x8005BE40
    // 0x80063820: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_3;
    // 0x80063820: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_3:
    // 0x80063824: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063828: jal         0x80077098
    // 0x8006382C: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    func_80077098(rdram, ctx);
        goto after_4;
    // 0x8006382C: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    after_4:
    // 0x80063830: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063834: jal         0x8005BBFC
    // 0x80063838: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_5;
    // 0x80063838: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_5:
    // 0x8006383C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80063840: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80063844: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80063848: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8006384C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80063850: lw          $t8, -0x4E8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4E8);
    // 0x80063854: lw          $t7, -0x4EC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4EC);
    // 0x80063858: lw          $t5, -0x4F0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X4F0);
    // 0x8006385C: lw          $t4, -0x4F4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4F4);
    // 0x80063860: lw          $t3, -0x4F8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4F8);
    // 0x80063864: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80063868: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8006386C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80063870: lw          $a3, -0x4FC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4FC);
    // 0x80063874: lw          $a2, -0x4E4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4E4);
    // 0x80063878: lw          $a1, -0x500($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X500);
    // 0x8006387C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063880: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80063884: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80063888: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8006388C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80063890: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80063894: jal         0x80057460
    // 0x80063898: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_80057460(rdram, ctx);
        goto after_6;
    // 0x80063898: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_6:
    // 0x8006389C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800638A0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800638A4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800638A8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800638AC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800638B0: lw          $t2, -0x4C8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4C8);
    // 0x800638B4: lw          $t1, -0x4CC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4CC);
    // 0x800638B8: lw          $t6, -0x4D0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4D0);
    // 0x800638BC: lw          $t0, -0x4D4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4D4);
    // 0x800638C0: lw          $t9, -0x4D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4D8);
    // 0x800638C4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800638C8: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800638CC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800638D0: lw          $a3, -0x4DC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4DC);
    // 0x800638D4: lw          $a2, -0x4C4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4C4);
    // 0x800638D8: lw          $a1, -0x4E0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4E0);
    // 0x800638DC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800638E0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800638E4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x800638E8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x800638EC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800638F0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800638F4: jal         0x80057460
    // 0x800638F8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80057460(rdram, ctx);
        goto after_7;
    // 0x800638F8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_7:
    // 0x800638FC: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80063900: lw          $t3, 0x20C0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X20C0);
    // 0x80063904: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80063908: sw          $t3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r11;
    // 0x8006390C: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x80063910: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80063914: sw          $t4, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r12;
    // 0x80063918: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x8006391C: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x80063920: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x80063924: ori         $at, $zero, 0xE13C
    ctx->r1 = 0 | 0XE13C;
    // 0x80063928: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8006392C: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x80063930: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80063934: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063938: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8006393C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80063940: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80063944: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x80063948: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8006394C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80063950: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80063954: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80063958: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8006395C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80063960: addiu       $a2, $zero, 0x122
    ctx->r6 = ADD32(0, 0X122);
    // 0x80063964: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    // 0x80063968: jal         0x80077960
    // 0x8006396C: addiu       $a1, $t9, 0x8
    ctx->r5 = ADD32(ctx->r25, 0X8);
    func_80077960(rdram, ctx);
        goto after_8;
    // 0x8006396C: addiu       $a1, $t9, 0x8
    ctx->r5 = ADD32(ctx->r25, 0X8);
    after_8:
    // 0x80063970: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063974: jal         0x800767C0
    // 0x80063978: addiu       $a0, $a0, 0x1030
    ctx->r4 = ADD32(ctx->r4, 0X1030);
    func_800767C0(rdram, ctx);
        goto after_9;
    // 0x80063978: addiu       $a0, $a0, 0x1030
    ctx->r4 = ADD32(ctx->r4, 0X1030);
    after_9:
    // 0x8006397C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063980: jal         0x800767C0
    // 0x80063984: addiu       $a0, $a0, 0x10CC
    ctx->r4 = ADD32(ctx->r4, 0X10CC);
    func_800767C0(rdram, ctx);
        goto after_10;
    // 0x80063984: addiu       $a0, $a0, 0x10CC
    ctx->r4 = ADD32(ctx->r4, 0X10CC);
    after_10:
    // 0x80063988: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8006398C: jal         0x800767C0
    // 0x80063990: addiu       $a0, $a0, 0x1168
    ctx->r4 = ADD32(ctx->r4, 0X1168);
    func_800767C0(rdram, ctx);
        goto after_11;
    // 0x80063990: addiu       $a0, $a0, 0x1168
    ctx->r4 = ADD32(ctx->r4, 0X1168);
    after_11:
    // 0x80063994: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063998: jal         0x800767C0
    // 0x8006399C: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, 0X1204);
    func_800767C0(rdram, ctx);
        goto after_12;
    // 0x8006399C: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, 0X1204);
    after_12:
    // 0x800639A0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800639A4: jal         0x800767C0
    // 0x800639A8: addiu       $a0, $a0, 0x12A0
    ctx->r4 = ADD32(ctx->r4, 0X12A0);
    func_800767C0(rdram, ctx);
        goto after_13;
    // 0x800639A8: addiu       $a0, $a0, 0x12A0
    ctx->r4 = ADD32(ctx->r4, 0X12A0);
    after_13:
    // 0x800639AC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800639B0: jal         0x800767C0
    // 0x800639B4: addiu       $a0, $a0, 0x133C
    ctx->r4 = ADD32(ctx->r4, 0X133C);
    func_800767C0(rdram, ctx);
        goto after_14;
    // 0x800639B4: addiu       $a0, $a0, 0x133C
    ctx->r4 = ADD32(ctx->r4, 0X133C);
    after_14:
    // 0x800639B8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800639BC: jal         0x800767C0
    // 0x800639C0: addiu       $a0, $a0, 0x13D8
    ctx->r4 = ADD32(ctx->r4, 0X13D8);
    func_800767C0(rdram, ctx);
        goto after_15;
    // 0x800639C0: addiu       $a0, $a0, 0x13D8
    ctx->r4 = ADD32(ctx->r4, 0X13D8);
    after_15:
    // 0x800639C4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800639C8: jal         0x800767C0
    // 0x800639CC: addiu       $a0, $a0, 0x1474
    ctx->r4 = ADD32(ctx->r4, 0X1474);
    func_800767C0(rdram, ctx);
        goto after_16;
    // 0x800639CC: addiu       $a0, $a0, 0x1474
    ctx->r4 = ADD32(ctx->r4, 0X1474);
    after_16:
    // 0x800639D0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800639D4: jal         0x8005BE40
    // 0x800639D8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_17;
    // 0x800639D8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_17:
    // 0x800639DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800639E0: jal         0x80074EC4
    // 0x800639E4: addiu       $a0, $a0, -0x4C0
    ctx->r4 = ADD32(ctx->r4, -0X4C0);
    func_80074EC4(rdram, ctx);
        goto after_18;
    // 0x800639E4: addiu       $a0, $a0, -0x4C0
    ctx->r4 = ADD32(ctx->r4, -0X4C0);
    after_18:
    // 0x800639E8: jal         0x80075180
    // 0x800639EC: nop

    func_80075180(rdram, ctx);
        goto after_19;
    // 0x800639EC: nop

    after_19:
    // 0x800639F0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800639F4: addiu       $a0, $a0, -0x4C0
    ctx->r4 = ADD32(ctx->r4, -0X4C0);
    // 0x800639F8: addiu       $a1, $zero, 0x4A
    ctx->r5 = ADD32(0, 0X4A);
    // 0x800639FC: jal         0x80075218
    // 0x80063A00: addiu       $a2, $zero, 0xD0
    ctx->r6 = ADD32(0, 0XD0);
    func_80075218(rdram, ctx);
        goto after_20;
    // 0x80063A00: addiu       $a2, $zero, 0xD0
    ctx->r6 = ADD32(0, 0XD0);
    after_20:
    // 0x80063A04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80063A08: jal         0x80074F3C
    // 0x80063A0C: addiu       $a0, $a0, -0x4C0
    ctx->r4 = ADD32(ctx->r4, -0X4C0);
    func_80074F3C(rdram, ctx);
        goto after_21;
    // 0x80063A0C: addiu       $a0, $a0, -0x4C0
    ctx->r4 = ADD32(ctx->r4, -0X4C0);
    after_21:
    // 0x80063A10: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80063A14: addiu       $a0, $a0, -0x4C0
    ctx->r4 = ADD32(ctx->r4, -0X4C0);
    // 0x80063A18: addiu       $a1, $zero, 0xCD
    ctx->r5 = ADD32(0, 0XCD);
    // 0x80063A1C: jal         0x80075218
    // 0x80063A20: addiu       $a2, $zero, 0xD0
    ctx->r6 = ADD32(0, 0XD0);
    func_80075218(rdram, ctx);
        goto after_22;
    // 0x80063A20: addiu       $a2, $zero, 0xD0
    ctx->r6 = ADD32(0, 0XD0);
    after_22:
    // 0x80063A24: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80063A28: jal         0x80074F3C
    // 0x80063A2C: addiu       $a0, $a0, -0x4C0
    ctx->r4 = ADD32(ctx->r4, -0X4C0);
    func_80074F3C(rdram, ctx);
        goto after_23;
    // 0x80063A2C: addiu       $a0, $a0, -0x4C0
    ctx->r4 = ADD32(ctx->r4, -0X4C0);
    after_23:
    // 0x80063A30: jal         0x800751C0
    // 0x80063A34: nop

    func_800751C0(rdram, ctx);
        goto after_24;
    // 0x80063A34: nop

    after_24:
    // 0x80063A38: b           L_80064210
    // 0x80063A3C: nop

        goto L_80064210;
    // 0x80063A3C: nop

L_80063A40:
    // 0x80063A40: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80063A44: lwc1        $f10, 0x3BC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3BC);
    // 0x80063A48: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80063A4C: lwc1        $f16, 0x4B4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4B4);
    // 0x80063A50: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80063A54: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80063A58: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063A5C: swc1        $f18, 0x3BC($at)
    MEM_W(0X3BC, ctx->r1) = ctx->f18.u32l;
    // 0x80063A60: jal         0x80077098
    // 0x80063A64: addiu       $a0, $a0, 0x3A8
    ctx->r4 = ADD32(ctx->r4, 0X3A8);
    func_80077098(rdram, ctx);
        goto after_25;
    // 0x80063A64: addiu       $a0, $a0, 0x3A8
    ctx->r4 = ADD32(ctx->r4, 0X3A8);
    after_25:
    // 0x80063A68: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063A6C: jal         0x8005BBFC
    // 0x80063A70: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_26;
    // 0x80063A70: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_26:
    // 0x80063A74: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80063A78: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80063A7C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80063A80: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80063A84: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80063A88: lw          $t9, -0x4C8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4C8);
    // 0x80063A8C: lw          $t8, -0x4CC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4CC);
    // 0x80063A90: lw          $t7, -0x4D0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4D0);
    // 0x80063A94: lw          $t5, -0x4D4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X4D4);
    // 0x80063A98: lw          $t4, -0x4D8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4D8);
    // 0x80063A9C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80063AA0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80063AA4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80063AA8: lw          $a3, -0x4DC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4DC);
    // 0x80063AAC: lw          $a2, -0x4C4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4C4);
    // 0x80063AB0: lw          $a1, -0x4E0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4E0);
    // 0x80063AB4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063AB8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80063ABC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80063AC0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80063AC4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80063AC8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80063ACC: jal         0x80057460
    // 0x80063AD0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_80057460(rdram, ctx);
        goto after_27;
    // 0x80063AD0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_27:
    // 0x80063AD4: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x80063AD8: ori         $at, $zero, 0xE13C
    ctx->r1 = 0 | 0XE13C;
    // 0x80063ADC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063AE0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80063AE4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80063AE8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80063AEC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80063AF0: addu        $t6, $t0, $at
    ctx->r14 = ADD32(ctx->r8, ctx->r1);
    // 0x80063AF4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80063AF8: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80063AFC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80063B00: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80063B04: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80063B08: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80063B0C: addiu       $a2, $zero, 0x125
    ctx->r6 = ADD32(0, 0X125);
    // 0x80063B10: addiu       $a3, $zero, 0xC9
    ctx->r7 = ADD32(0, 0XC9);
    // 0x80063B14: jal         0x80077960
    // 0x80063B18: addiu       $a1, $t0, 0x8
    ctx->r5 = ADD32(ctx->r8, 0X8);
    func_80077960(rdram, ctx);
        goto after_28;
    // 0x80063B18: addiu       $a1, $t0, 0x8
    ctx->r5 = ADD32(ctx->r8, 0X8);
    after_28:
    // 0x80063B1C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063B20: jal         0x800767C0
    // 0x80063B24: addiu       $a0, $a0, 0x2890
    ctx->r4 = ADD32(ctx->r4, 0X2890);
    func_800767C0(rdram, ctx);
        goto after_29;
    // 0x80063B24: addiu       $a0, $a0, 0x2890
    ctx->r4 = ADD32(ctx->r4, 0X2890);
    after_29:
    // 0x80063B28: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063B2C: jal         0x8005BE40
    // 0x80063B30: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_30;
    // 0x80063B30: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_30:
    // 0x80063B34: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063B38: jal         0x80077098
    // 0x80063B3C: addiu       $a0, $a0, 0x468
    ctx->r4 = ADD32(ctx->r4, 0X468);
    func_80077098(rdram, ctx);
        goto after_31;
    // 0x80063B3C: addiu       $a0, $a0, 0x468
    ctx->r4 = ADD32(ctx->r4, 0X468);
    after_31:
    // 0x80063B40: b           L_80064210
    // 0x80063B44: nop

        goto L_80064210;
    // 0x80063B44: nop

L_80063B48:
    // 0x80063B48: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063B4C: jal         0x8005BBFC
    // 0x80063B50: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_32;
    // 0x80063B50: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_32:
    // 0x80063B54: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80063B58: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80063B5C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80063B60: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80063B64: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80063B68: lw          $t0, -0x4C8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4C8);
    // 0x80063B6C: lw          $t9, -0x4CC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4CC);
    // 0x80063B70: lw          $t8, -0x4D0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4D0);
    // 0x80063B74: lw          $t7, -0x4D4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4D4);
    // 0x80063B78: lw          $t5, -0x4D8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X4D8);
    // 0x80063B7C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80063B80: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80063B84: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80063B88: lw          $a3, -0x4DC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4DC);
    // 0x80063B8C: lw          $a2, -0x4C4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4C4);
    // 0x80063B90: lw          $a1, -0x4E0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4E0);
    // 0x80063B94: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063B98: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80063B9C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80063BA0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80063BA4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80063BA8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80063BAC: jal         0x80057460
    // 0x80063BB0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80057460(rdram, ctx);
        goto after_33;
    // 0x80063BB0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_33:
    // 0x80063BB4: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x80063BB8: ori         $at, $zero, 0xE13C
    ctx->r1 = 0 | 0XE13C;
    // 0x80063BBC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063BC0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80063BC4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80063BC8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80063BCC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80063BD0: addu        $t1, $t6, $at
    ctx->r9 = ADD32(ctx->r14, ctx->r1);
    // 0x80063BD4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80063BD8: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80063BDC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80063BE0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80063BE4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80063BE8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80063BEC: addiu       $a2, $zero, 0x125
    ctx->r6 = ADD32(0, 0X125);
    // 0x80063BF0: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    // 0x80063BF4: jal         0x80077960
    // 0x80063BF8: addiu       $a1, $t6, 0x8
    ctx->r5 = ADD32(ctx->r14, 0X8);
    func_80077960(rdram, ctx);
        goto after_34;
    // 0x80063BF8: addiu       $a1, $t6, 0x8
    ctx->r5 = ADD32(ctx->r14, 0X8);
    after_34:
    // 0x80063BFC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063C00: jal         0x800767C0
    // 0x80063C04: addiu       $a0, $a0, 0x292C
    ctx->r4 = ADD32(ctx->r4, 0X292C);
    func_800767C0(rdram, ctx);
        goto after_35;
    // 0x80063C04: addiu       $a0, $a0, 0x292C
    ctx->r4 = ADD32(ctx->r4, 0X292C);
    after_35:
    // 0x80063C08: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063C0C: jal         0x800767C0
    // 0x80063C10: addiu       $a0, $a0, 0x29C8
    ctx->r4 = ADD32(ctx->r4, 0X29C8);
    func_800767C0(rdram, ctx);
        goto after_36;
    // 0x80063C10: addiu       $a0, $a0, 0x29C8
    ctx->r4 = ADD32(ctx->r4, 0X29C8);
    after_36:
    // 0x80063C14: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063C18: jal         0x800767C0
    // 0x80063C1C: addiu       $a0, $a0, 0x2A64
    ctx->r4 = ADD32(ctx->r4, 0X2A64);
    func_800767C0(rdram, ctx);
        goto after_37;
    // 0x80063C1C: addiu       $a0, $a0, 0x2A64
    ctx->r4 = ADD32(ctx->r4, 0X2A64);
    after_37:
    // 0x80063C20: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063C24: jal         0x8005BE40
    // 0x80063C28: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_38;
    // 0x80063C28: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_38:
    // 0x80063C2C: b           L_80064210
    // 0x80063C30: nop

        goto L_80064210;
    // 0x80063C30: nop

L_80063C34:
    // 0x80063C34: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063C38: jal         0x80077098
    // 0x80063C3C: addiu       $a0, $a0, 0x318
    ctx->r4 = ADD32(ctx->r4, 0X318);
    func_80077098(rdram, ctx);
        goto after_39;
    // 0x80063C3C: addiu       $a0, $a0, 0x318
    ctx->r4 = ADD32(ctx->r4, 0X318);
    after_39:
    // 0x80063C40: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063C44: jal         0x8005BBFC
    // 0x80063C48: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_40;
    // 0x80063C48: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_40:
    // 0x80063C4C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80063C50: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80063C54: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80063C58: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80063C5C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80063C60: lw          $t6, -0x4C8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4C8);
    // 0x80063C64: lw          $t0, -0x4CC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4CC);
    // 0x80063C68: lw          $t9, -0x4D0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4D0);
    // 0x80063C6C: lw          $t8, -0x4D4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4D4);
    // 0x80063C70: lw          $t7, -0x4D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4D8);
    // 0x80063C74: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80063C78: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80063C7C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80063C80: lw          $a3, -0x4DC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4DC);
    // 0x80063C84: lw          $a2, -0x4C4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4C4);
    // 0x80063C88: lw          $a1, -0x4E0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4E0);
    // 0x80063C8C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063C90: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80063C94: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80063C98: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80063C9C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80063CA0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80063CA4: jal         0x80057460
    // 0x80063CA8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80057460(rdram, ctx);
        goto after_41;
    // 0x80063CA8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_41:
    // 0x80063CAC: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x80063CB0: ori         $at, $zero, 0xE13C
    ctx->r1 = 0 | 0XE13C;
    // 0x80063CB4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063CB8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80063CBC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80063CC0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80063CC4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80063CC8: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x80063CCC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80063CD0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80063CD4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80063CD8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80063CDC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80063CE0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80063CE4: addiu       $a2, $zero, 0x125
    ctx->r6 = ADD32(0, 0X125);
    // 0x80063CE8: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    // 0x80063CEC: jal         0x80077960
    // 0x80063CF0: addiu       $a1, $t1, 0x8
    ctx->r5 = ADD32(ctx->r9, 0X8);
    func_80077960(rdram, ctx);
        goto after_42;
    // 0x80063CF0: addiu       $a1, $t1, 0x8
    ctx->r5 = ADD32(ctx->r9, 0X8);
    after_42:
    // 0x80063CF4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063CF8: jal         0x800767C0
    // 0x80063CFC: addiu       $a0, $a0, 0x2008
    ctx->r4 = ADD32(ctx->r4, 0X2008);
    func_800767C0(rdram, ctx);
        goto after_43;
    // 0x80063CFC: addiu       $a0, $a0, 0x2008
    ctx->r4 = ADD32(ctx->r4, 0X2008);
    after_43:
    // 0x80063D00: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063D04: jal         0x8005BE40
    // 0x80063D08: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_44;
    // 0x80063D08: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_44:
    // 0x80063D0C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063D10: jal         0x80077098
    // 0x80063D14: addiu       $a0, $a0, 0x408
    ctx->r4 = ADD32(ctx->r4, 0X408);
    func_80077098(rdram, ctx);
        goto after_45;
    // 0x80063D14: addiu       $a0, $a0, 0x408
    ctx->r4 = ADD32(ctx->r4, 0X408);
    after_45:
    // 0x80063D18: b           L_80064210
    // 0x80063D1C: nop

        goto L_80064210;
    // 0x80063D1C: nop

L_80063D20:
    // 0x80063D20: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063D24: jal         0x80077098
    // 0x80063D28: addiu       $a0, $a0, 0x378
    ctx->r4 = ADD32(ctx->r4, 0X378);
    func_80077098(rdram, ctx);
        goto after_46;
    // 0x80063D28: addiu       $a0, $a0, 0x378
    ctx->r4 = ADD32(ctx->r4, 0X378);
    after_46:
    // 0x80063D2C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063D30: jal         0x8005BBFC
    // 0x80063D34: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_47;
    // 0x80063D34: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_47:
    // 0x80063D38: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80063D3C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80063D40: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80063D44: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80063D48: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80063D4C: lw          $t1, -0x4C8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4C8);
    // 0x80063D50: lw          $t6, -0x4CC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4CC);
    // 0x80063D54: lw          $t0, -0x4D0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4D0);
    // 0x80063D58: lw          $t9, -0x4D4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4D4);
    // 0x80063D5C: lw          $t8, -0x4D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4D8);
    // 0x80063D60: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80063D64: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80063D68: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80063D6C: lw          $a3, -0x4DC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4DC);
    // 0x80063D70: lw          $a2, -0x4C4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4C4);
    // 0x80063D74: lw          $a1, -0x4E0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4E0);
    // 0x80063D78: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063D7C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80063D80: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80063D84: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80063D88: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80063D8C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80063D90: jal         0x80057460
    // 0x80063D94: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80057460(rdram, ctx);
        goto after_48;
    // 0x80063D94: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_48:
    // 0x80063D98: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x80063D9C: ori         $at, $zero, 0xE13C
    ctx->r1 = 0 | 0XE13C;
    // 0x80063DA0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063DA4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80063DA8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80063DAC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80063DB0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80063DB4: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x80063DB8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80063DBC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80063DC0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80063DC4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80063DC8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80063DCC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80063DD0: addiu       $a2, $zero, 0x125
    ctx->r6 = ADD32(0, 0X125);
    // 0x80063DD4: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    // 0x80063DD8: jal         0x80077960
    // 0x80063DDC: addiu       $a1, $t2, 0x8
    ctx->r5 = ADD32(ctx->r10, 0X8);
    func_80077960(rdram, ctx);
        goto after_49;
    // 0x80063DDC: addiu       $a1, $t2, 0x8
    ctx->r5 = ADD32(ctx->r10, 0X8);
    after_49:
    // 0x80063DE0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063DE4: jal         0x800767C0
    // 0x80063DE8: addiu       $a0, $a0, 0x2C38
    ctx->r4 = ADD32(ctx->r4, 0X2C38);
    func_800767C0(rdram, ctx);
        goto after_50;
    // 0x80063DE8: addiu       $a0, $a0, 0x2C38
    ctx->r4 = ADD32(ctx->r4, 0X2C38);
    after_50:
    // 0x80063DEC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063DF0: jal         0x8005BE40
    // 0x80063DF4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_51;
    // 0x80063DF4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_51:
    // 0x80063DF8: b           L_80064210
    // 0x80063DFC: nop

        goto L_80064210;
    // 0x80063DFC: nop

L_80063E00:
    // 0x80063E00: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80063E04: lwc1        $f4, 0x2FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2FC);
    // 0x80063E08: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80063E0C: lwc1        $f6, 0x4B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4B4);
    // 0x80063E10: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80063E14: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80063E18: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063E1C: swc1        $f8, 0x2FC($at)
    MEM_W(0X2FC, ctx->r1) = ctx->f8.u32l;
    // 0x80063E20: jal         0x80077098
    // 0x80063E24: addiu       $a0, $a0, 0x2E8
    ctx->r4 = ADD32(ctx->r4, 0X2E8);
    func_80077098(rdram, ctx);
        goto after_52;
    // 0x80063E24: addiu       $a0, $a0, 0x2E8
    ctx->r4 = ADD32(ctx->r4, 0X2E8);
    after_52:
    // 0x80063E28: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063E2C: jal         0x8005BBFC
    // 0x80063E30: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_53;
    // 0x80063E30: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_53:
    // 0x80063E34: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80063E38: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80063E3C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80063E40: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80063E44: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80063E48: lw          $t2, -0x4C8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4C8);
    // 0x80063E4C: lw          $t1, -0x4CC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4CC);
    // 0x80063E50: lw          $t6, -0x4D0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4D0);
    // 0x80063E54: lw          $t0, -0x4D4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4D4);
    // 0x80063E58: lw          $t9, -0x4D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4D8);
    // 0x80063E5C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80063E60: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80063E64: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80063E68: lw          $a3, -0x4DC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4DC);
    // 0x80063E6C: lw          $a2, -0x4C4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4C4);
    // 0x80063E70: lw          $a1, -0x4E0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4E0);
    // 0x80063E74: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063E78: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80063E7C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80063E80: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80063E84: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80063E88: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80063E8C: jal         0x80057460
    // 0x80063E90: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80057460(rdram, ctx);
        goto after_54;
    // 0x80063E90: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_54:
    // 0x80063E94: lw          $t3, 0xA4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA4);
    // 0x80063E98: ori         $at, $zero, 0xE13C
    ctx->r1 = 0 | 0XE13C;
    // 0x80063E9C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063EA0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80063EA4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80063EA8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80063EAC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80063EB0: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80063EB4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80063EB8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80063EBC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80063EC0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80063EC4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80063EC8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80063ECC: addiu       $a2, $zero, 0x125
    ctx->r6 = ADD32(0, 0X125);
    // 0x80063ED0: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    // 0x80063ED4: jal         0x80077960
    // 0x80063ED8: addiu       $a1, $t3, 0x8
    ctx->r5 = ADD32(ctx->r11, 0X8);
    func_80077960(rdram, ctx);
        goto after_55;
    // 0x80063ED8: addiu       $a1, $t3, 0x8
    ctx->r5 = ADD32(ctx->r11, 0X8);
    after_55:
    // 0x80063EDC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063EE0: jal         0x800767C0
    // 0x80063EE4: addiu       $a0, $a0, 0x181C
    ctx->r4 = ADD32(ctx->r4, 0X181C);
    func_800767C0(rdram, ctx);
        goto after_56;
    // 0x80063EE4: addiu       $a0, $a0, 0x181C
    ctx->r4 = ADD32(ctx->r4, 0X181C);
    after_56:
    // 0x80063EE8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063EEC: jal         0x800767C0
    // 0x80063EF0: addiu       $a0, $a0, 0x1510
    ctx->r4 = ADD32(ctx->r4, 0X1510);
    func_800767C0(rdram, ctx);
        goto after_57;
    // 0x80063EF0: addiu       $a0, $a0, 0x1510
    ctx->r4 = ADD32(ctx->r4, 0X1510);
    after_57:
    // 0x80063EF4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063EF8: jal         0x800767C0
    // 0x80063EFC: addiu       $a0, $a0, 0x15AC
    ctx->r4 = ADD32(ctx->r4, 0X15AC);
    func_800767C0(rdram, ctx);
        goto after_58;
    // 0x80063EFC: addiu       $a0, $a0, 0x15AC
    ctx->r4 = ADD32(ctx->r4, 0X15AC);
    after_58:
    // 0x80063F00: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063F04: jal         0x800767C0
    // 0x80063F08: addiu       $a0, $a0, 0x1648
    ctx->r4 = ADD32(ctx->r4, 0X1648);
    func_800767C0(rdram, ctx);
        goto after_59;
    // 0x80063F08: addiu       $a0, $a0, 0x1648
    ctx->r4 = ADD32(ctx->r4, 0X1648);
    after_59:
    // 0x80063F0C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063F10: jal         0x800767C0
    // 0x80063F14: addiu       $a0, $a0, 0x16E4
    ctx->r4 = ADD32(ctx->r4, 0X16E4);
    func_800767C0(rdram, ctx);
        goto after_60;
    // 0x80063F14: addiu       $a0, $a0, 0x16E4
    ctx->r4 = ADD32(ctx->r4, 0X16E4);
    after_60:
    // 0x80063F18: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063F1C: jal         0x800767C0
    // 0x80063F20: addiu       $a0, $a0, 0x1780
    ctx->r4 = ADD32(ctx->r4, 0X1780);
    func_800767C0(rdram, ctx);
        goto after_61;
    // 0x80063F20: addiu       $a0, $a0, 0x1780
    ctx->r4 = ADD32(ctx->r4, 0X1780);
    after_61:
    // 0x80063F24: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063F28: jal         0x8005BE40
    // 0x80063F2C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_62;
    // 0x80063F2C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_62:
    // 0x80063F30: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063F34: jal         0x80077098
    // 0x80063F38: addiu       $a0, $a0, 0x3D8
    ctx->r4 = ADD32(ctx->r4, 0X3D8);
    func_80077098(rdram, ctx);
        goto after_63;
    // 0x80063F38: addiu       $a0, $a0, 0x3D8
    ctx->r4 = ADD32(ctx->r4, 0X3D8);
    after_63:
    // 0x80063F3C: b           L_80064210
    // 0x80063F40: nop

        goto L_80064210;
    // 0x80063F40: nop

L_80063F44:
    // 0x80063F44: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80063F48: jal         0x80077098
    // 0x80063F4C: addiu       $a0, $a0, 0x348
    ctx->r4 = ADD32(ctx->r4, 0X348);
    func_80077098(rdram, ctx);
        goto after_64;
    // 0x80063F4C: addiu       $a0, $a0, 0x348
    ctx->r4 = ADD32(ctx->r4, 0X348);
    after_64:
    // 0x80063F50: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063F54: jal         0x8005BBFC
    // 0x80063F58: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_65;
    // 0x80063F58: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_65:
    // 0x80063F5C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80063F60: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80063F64: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80063F68: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80063F6C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80063F70: lw          $t3, -0x4C8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4C8);
    // 0x80063F74: lw          $t2, -0x4CC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4CC);
    // 0x80063F78: lw          $t1, -0x4D0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4D0);
    // 0x80063F7C: lw          $t6, -0x4D4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4D4);
    // 0x80063F80: lw          $t0, -0x4D8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4D8);
    // 0x80063F84: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80063F88: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80063F8C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80063F90: lw          $a3, -0x4DC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4DC);
    // 0x80063F94: lw          $a2, -0x4C4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4C4);
    // 0x80063F98: lw          $a1, -0x4E0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4E0);
    // 0x80063F9C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063FA0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80063FA4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80063FA8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80063FAC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80063FB0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80063FB4: jal         0x80057460
    // 0x80063FB8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80057460(rdram, ctx);
        goto after_66;
    // 0x80063FB8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_66:
    // 0x80063FBC: lw          $t4, 0xA4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA4);
    // 0x80063FC0: ori         $at, $zero, 0xE13C
    ctx->r1 = 0 | 0XE13C;
    // 0x80063FC4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80063FC8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80063FCC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80063FD0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80063FD4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80063FD8: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x80063FDC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80063FE0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80063FE4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80063FE8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80063FEC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80063FF0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80063FF4: addiu       $a2, $zero, 0x125
    ctx->r6 = ADD32(0, 0X125);
    // 0x80063FF8: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    // 0x80063FFC: jal         0x80077960
    // 0x80064000: addiu       $a1, $t4, 0x8
    ctx->r5 = ADD32(ctx->r12, 0X8);
    func_80077960(rdram, ctx);
        goto after_67;
    // 0x80064000: addiu       $a1, $t4, 0x8
    ctx->r5 = ADD32(ctx->r12, 0X8);
    after_67:
    // 0x80064004: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80064008: jal         0x800767C0
    // 0x8006400C: addiu       $a0, $a0, 0x20A4
    ctx->r4 = ADD32(ctx->r4, 0X20A4);
    func_800767C0(rdram, ctx);
        goto after_68;
    // 0x8006400C: addiu       $a0, $a0, 0x20A4
    ctx->r4 = ADD32(ctx->r4, 0X20A4);
    after_68:
    // 0x80064010: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80064014: jal         0x800767C0
    // 0x80064018: addiu       $a0, $a0, 0x2140
    ctx->r4 = ADD32(ctx->r4, 0X2140);
    func_800767C0(rdram, ctx);
        goto after_69;
    // 0x80064018: addiu       $a0, $a0, 0x2140
    ctx->r4 = ADD32(ctx->r4, 0X2140);
    after_69:
    // 0x8006401C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80064020: jal         0x800767C0
    // 0x80064024: addiu       $a0, $a0, 0x21DC
    ctx->r4 = ADD32(ctx->r4, 0X21DC);
    func_800767C0(rdram, ctx);
        goto after_70;
    // 0x80064024: addiu       $a0, $a0, 0x21DC
    ctx->r4 = ADD32(ctx->r4, 0X21DC);
    after_70:
    // 0x80064028: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8006402C: jal         0x800767C0
    // 0x80064030: addiu       $a0, $a0, 0x2278
    ctx->r4 = ADD32(ctx->r4, 0X2278);
    func_800767C0(rdram, ctx);
        goto after_71;
    // 0x80064030: addiu       $a0, $a0, 0x2278
    ctx->r4 = ADD32(ctx->r4, 0X2278);
    after_71:
    // 0x80064034: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80064038: jal         0x800767C0
    // 0x8006403C: addiu       $a0, $a0, 0x2314
    ctx->r4 = ADD32(ctx->r4, 0X2314);
    func_800767C0(rdram, ctx);
        goto after_72;
    // 0x8006403C: addiu       $a0, $a0, 0x2314
    ctx->r4 = ADD32(ctx->r4, 0X2314);
    after_72:
    // 0x80064040: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80064044: jal         0x800767C0
    // 0x80064048: addiu       $a0, $a0, 0x23B0
    ctx->r4 = ADD32(ctx->r4, 0X23B0);
    func_800767C0(rdram, ctx);
        goto after_73;
    // 0x80064048: addiu       $a0, $a0, 0x23B0
    ctx->r4 = ADD32(ctx->r4, 0X23B0);
    after_73:
    // 0x8006404C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80064050: jal         0x800767C0
    // 0x80064054: addiu       $a0, $a0, 0x244C
    ctx->r4 = ADD32(ctx->r4, 0X244C);
    func_800767C0(rdram, ctx);
        goto after_74;
    // 0x80064054: addiu       $a0, $a0, 0x244C
    ctx->r4 = ADD32(ctx->r4, 0X244C);
    after_74:
    // 0x80064058: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8006405C: jal         0x800767C0
    // 0x80064060: addiu       $a0, $a0, 0x24E8
    ctx->r4 = ADD32(ctx->r4, 0X24E8);
    func_800767C0(rdram, ctx);
        goto after_75;
    // 0x80064060: addiu       $a0, $a0, 0x24E8
    ctx->r4 = ADD32(ctx->r4, 0X24E8);
    after_75:
    // 0x80064064: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80064068: jal         0x800767C0
    // 0x8006406C: addiu       $a0, $a0, 0x2584
    ctx->r4 = ADD32(ctx->r4, 0X2584);
    func_800767C0(rdram, ctx);
        goto after_76;
    // 0x8006406C: addiu       $a0, $a0, 0x2584
    ctx->r4 = ADD32(ctx->r4, 0X2584);
    after_76:
    // 0x80064070: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80064074: jal         0x800767C0
    // 0x80064078: addiu       $a0, $a0, 0x2620
    ctx->r4 = ADD32(ctx->r4, 0X2620);
    func_800767C0(rdram, ctx);
        goto after_77;
    // 0x80064078: addiu       $a0, $a0, 0x2620
    ctx->r4 = ADD32(ctx->r4, 0X2620);
    after_77:
    // 0x8006407C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80064080: jal         0x800767C0
    // 0x80064084: addiu       $a0, $a0, 0x26BC
    ctx->r4 = ADD32(ctx->r4, 0X26BC);
    func_800767C0(rdram, ctx);
        goto after_78;
    // 0x80064084: addiu       $a0, $a0, 0x26BC
    ctx->r4 = ADD32(ctx->r4, 0X26BC);
    after_78:
    // 0x80064088: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8006408C: jal         0x800767C0
    // 0x80064090: addiu       $a0, $a0, 0x2758
    ctx->r4 = ADD32(ctx->r4, 0X2758);
    func_800767C0(rdram, ctx);
        goto after_79;
    // 0x80064090: addiu       $a0, $a0, 0x2758
    ctx->r4 = ADD32(ctx->r4, 0X2758);
    after_79:
    // 0x80064094: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80064098: jal         0x800767C0
    // 0x8006409C: addiu       $a0, $a0, 0x27F4
    ctx->r4 = ADD32(ctx->r4, 0X27F4);
    func_800767C0(rdram, ctx);
        goto after_80;
    // 0x8006409C: addiu       $a0, $a0, 0x27F4
    ctx->r4 = ADD32(ctx->r4, 0X27F4);
    after_80:
    // 0x800640A0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800640A4: jal         0x8005BE40
    // 0x800640A8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_81;
    // 0x800640A8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_81:
    // 0x800640AC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800640B0: jal         0x80077098
    // 0x800640B4: addiu       $a0, $a0, 0x438
    ctx->r4 = ADD32(ctx->r4, 0X438);
    func_80077098(rdram, ctx);
        goto after_82;
    // 0x800640B4: addiu       $a0, $a0, 0x438
    ctx->r4 = ADD32(ctx->r4, 0X438);
    after_82:
    // 0x800640B8: b           L_80064210
    // 0x800640BC: nop

        goto L_80064210;
    // 0x800640BC: nop

L_800640C0:
    // 0x800640C0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800640C4: jal         0x8005BBFC
    // 0x800640C8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_83;
    // 0x800640C8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_83:
    // 0x800640CC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800640D0: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800640D4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800640D8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800640DC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800640E0: lw          $t4, -0x4C8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4C8);
    // 0x800640E4: lw          $t3, -0x4CC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4CC);
    // 0x800640E8: lw          $t2, -0x4D0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4D0);
    // 0x800640EC: lw          $t1, -0x4D4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4D4);
    // 0x800640F0: lw          $t6, -0x4D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4D8);
    // 0x800640F4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800640F8: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800640FC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80064100: lw          $a3, -0x4DC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4DC);
    // 0x80064104: lw          $a2, -0x4C4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4C4);
    // 0x80064108: lw          $a1, -0x4E0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4E0);
    // 0x8006410C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064110: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80064114: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80064118: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8006411C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80064120: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80064124: jal         0x80057460
    // 0x80064128: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80057460(rdram, ctx);
        goto after_84;
    // 0x80064128: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_84:
    // 0x8006412C: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x80064130: ori         $at, $zero, 0xE13C
    ctx->r1 = 0 | 0XE13C;
    // 0x80064134: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064138: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8006413C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80064140: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80064144: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80064148: addu        $t7, $t5, $at
    ctx->r15 = ADD32(ctx->r13, ctx->r1);
    // 0x8006414C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80064150: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80064154: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80064158: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8006415C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80064160: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80064164: addiu       $a2, $zero, 0x125
    ctx->r6 = ADD32(0, 0X125);
    // 0x80064168: addiu       $a3, $zero, 0xCA
    ctx->r7 = ADD32(0, 0XCA);
    // 0x8006416C: jal         0x80077960
    // 0x80064170: addiu       $a1, $t5, 0x8
    ctx->r5 = ADD32(ctx->r13, 0X8);
    func_80077960(rdram, ctx);
        goto after_85;
    // 0x80064170: addiu       $a1, $t5, 0x8
    ctx->r5 = ADD32(ctx->r13, 0X8);
    after_85:
    // 0x80064174: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80064178: jal         0x800767C0
    // 0x8006417C: addiu       $a0, $a0, 0x18B8
    ctx->r4 = ADD32(ctx->r4, 0X18B8);
    func_800767C0(rdram, ctx);
        goto after_86;
    // 0x8006417C: addiu       $a0, $a0, 0x18B8
    ctx->r4 = ADD32(ctx->r4, 0X18B8);
    after_86:
    // 0x80064180: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80064184: jal         0x800767C0
    // 0x80064188: addiu       $a0, $a0, 0x1954
    ctx->r4 = ADD32(ctx->r4, 0X1954);
    func_800767C0(rdram, ctx);
        goto after_87;
    // 0x80064188: addiu       $a0, $a0, 0x1954
    ctx->r4 = ADD32(ctx->r4, 0X1954);
    after_87:
    // 0x8006418C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80064190: jal         0x800767C0
    // 0x80064194: addiu       $a0, $a0, 0x19F0
    ctx->r4 = ADD32(ctx->r4, 0X19F0);
    func_800767C0(rdram, ctx);
        goto after_88;
    // 0x80064194: addiu       $a0, $a0, 0x19F0
    ctx->r4 = ADD32(ctx->r4, 0X19F0);
    after_88:
    // 0x80064198: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8006419C: jal         0x800767C0
    // 0x800641A0: addiu       $a0, $a0, 0x1A8C
    ctx->r4 = ADD32(ctx->r4, 0X1A8C);
    func_800767C0(rdram, ctx);
        goto after_89;
    // 0x800641A0: addiu       $a0, $a0, 0x1A8C
    ctx->r4 = ADD32(ctx->r4, 0X1A8C);
    after_89:
    // 0x800641A4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800641A8: jal         0x800767C0
    // 0x800641AC: addiu       $a0, $a0, 0x1B28
    ctx->r4 = ADD32(ctx->r4, 0X1B28);
    func_800767C0(rdram, ctx);
        goto after_90;
    // 0x800641AC: addiu       $a0, $a0, 0x1B28
    ctx->r4 = ADD32(ctx->r4, 0X1B28);
    after_90:
    // 0x800641B0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800641B4: jal         0x800767C0
    // 0x800641B8: addiu       $a0, $a0, 0x1BC4
    ctx->r4 = ADD32(ctx->r4, 0X1BC4);
    func_800767C0(rdram, ctx);
        goto after_91;
    // 0x800641B8: addiu       $a0, $a0, 0x1BC4
    ctx->r4 = ADD32(ctx->r4, 0X1BC4);
    after_91:
    // 0x800641BC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800641C0: jal         0x800767C0
    // 0x800641C4: addiu       $a0, $a0, 0x1C60
    ctx->r4 = ADD32(ctx->r4, 0X1C60);
    func_800767C0(rdram, ctx);
        goto after_92;
    // 0x800641C4: addiu       $a0, $a0, 0x1C60
    ctx->r4 = ADD32(ctx->r4, 0X1C60);
    after_92:
    // 0x800641C8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800641CC: jal         0x800767C0
    // 0x800641D0: addiu       $a0, $a0, 0x1CFC
    ctx->r4 = ADD32(ctx->r4, 0X1CFC);
    func_800767C0(rdram, ctx);
        goto after_93;
    // 0x800641D0: addiu       $a0, $a0, 0x1CFC
    ctx->r4 = ADD32(ctx->r4, 0X1CFC);
    after_93:
    // 0x800641D4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800641D8: jal         0x800767C0
    // 0x800641DC: addiu       $a0, $a0, 0x1D98
    ctx->r4 = ADD32(ctx->r4, 0X1D98);
    func_800767C0(rdram, ctx);
        goto after_94;
    // 0x800641DC: addiu       $a0, $a0, 0x1D98
    ctx->r4 = ADD32(ctx->r4, 0X1D98);
    after_94:
    // 0x800641E0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800641E4: jal         0x800767C0
    // 0x800641E8: addiu       $a0, $a0, 0x1E34
    ctx->r4 = ADD32(ctx->r4, 0X1E34);
    func_800767C0(rdram, ctx);
        goto after_95;
    // 0x800641E8: addiu       $a0, $a0, 0x1E34
    ctx->r4 = ADD32(ctx->r4, 0X1E34);
    after_95:
    // 0x800641EC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800641F0: jal         0x800767C0
    // 0x800641F4: addiu       $a0, $a0, 0x1ED0
    ctx->r4 = ADD32(ctx->r4, 0X1ED0);
    func_800767C0(rdram, ctx);
        goto after_96;
    // 0x800641F4: addiu       $a0, $a0, 0x1ED0
    ctx->r4 = ADD32(ctx->r4, 0X1ED0);
    after_96:
    // 0x800641F8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800641FC: jal         0x800767C0
    // 0x80064200: addiu       $a0, $a0, 0x1F6C
    ctx->r4 = ADD32(ctx->r4, 0X1F6C);
    func_800767C0(rdram, ctx);
        goto after_97;
    // 0x80064200: addiu       $a0, $a0, 0x1F6C
    ctx->r4 = ADD32(ctx->r4, 0X1F6C);
    after_97:
    // 0x80064204: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064208: jal         0x8005BE40
    // 0x8006420C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_98;
    // 0x8006420C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_98:
L_80064210:
    // 0x80064210: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x80064214: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80064218: addiu       $t2, $t1, 0x7FFF
    ctx->r10 = ADD32(ctx->r9, 0X7FFF);
    // 0x8006421C: lbu         $t2, 0x64ED($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X64ED);
    // 0x80064220: nop

    // 0x80064224: bne         $t2, $at, L_800642A8
    if (ctx->r10 != ctx->r1) {
        // 0x80064228: nop
    
            goto L_800642A8;
    }
    // 0x80064228: nop

    // 0x8006422C: addiu       $t3, $t1, 0x7FFF
    ctx->r11 = ADD32(ctx->r9, 0X7FFF);
    // 0x80064230: addiu       $t4, $t1, 0x7FFF
    ctx->r12 = ADD32(ctx->r9, 0X7FFF);
    // 0x80064234: lw          $t4, 0x64E9($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X64E9);
    // 0x80064238: lw          $t3, 0x64F1($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X64F1);
    // 0x8006423C: nop

    // 0x80064240: sltu        $at, $t4, $t3
    ctx->r1 = ctx->r12 < ctx->r11 ? 1 : 0;
    // 0x80064244: beq         $at, $zero, L_80064254
    if (ctx->r1 == 0) {
        // 0x80064248: nop
    
            goto L_80064254;
    }
    // 0x80064248: nop

    // 0x8006424C: b           L_80064258
    // 0x80064250: subu        $s0, $t3, $t4
    ctx->r16 = SUB32(ctx->r11, ctx->r12);
        goto L_80064258;
    // 0x80064250: subu        $s0, $t3, $t4
    ctx->r16 = SUB32(ctx->r11, ctx->r12);
L_80064254:
    // 0x80064254: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80064258:
    // 0x80064258: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006425C: jal         0x8005BBFC
    // 0x80064260: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_99;
    // 0x80064260: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_99:
    // 0x80064264: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x80064268: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8006426C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80064270: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80064274: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80064278: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8006427C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80064280: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80064284: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80064288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006428C: addiu       $a2, $zero, 0x157
    ctx->r6 = ADD32(0, 0X157);
    // 0x80064290: addiu       $a3, $zero, 0xE6
    ctx->r7 = ADD32(0, 0XE6);
    // 0x80064294: jal         0x80071480
    // 0x80064298: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_80071480(rdram, ctx);
        goto after_100;
    // 0x80064298: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_100:
    // 0x8006429C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800642A0: jal         0x8005BE40
    // 0x800642A4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_101;
    // 0x800642A4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_101:
L_800642A8:
    // 0x800642A8: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x800642AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800642B0: addiu       $t6, $t0, 0x7FFF
    ctx->r14 = ADD32(ctx->r8, 0X7FFF);
    // 0x800642B4: lbu         $t6, 0x64ED($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X64ED);
    // 0x800642B8: nop

    // 0x800642BC: bne         $t6, $at, L_80064378
    if (ctx->r14 != ctx->r1) {
        // 0x800642C0: nop
    
            goto L_80064378;
    }
    // 0x800642C0: nop

    // 0x800642C4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800642C8: jal         0x8005BBFC
    // 0x800642CC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_102;
    // 0x800642CC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_102:
    // 0x800642D0: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x800642D4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800642D8: addiu       $a0, $t2, 0x7FFF
    ctx->r4 = ADD32(ctx->r10, 0X7FFF);
    // 0x800642DC: lw          $a0, 0x64E9($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X64E9);
    // 0x800642E0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800642E4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800642E8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800642EC: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x800642F0: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800642F4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x800642F8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800642FC: addiu       $a2, $zero, 0x157
    ctx->r6 = ADD32(0, 0X157);
    // 0x80064300: addiu       $a3, $zero, 0xE6
    ctx->r7 = ADD32(0, 0XE6);
    // 0x80064304: jal         0x80071480
    // 0x80064308: addiu       $a1, $t2, 0x8
    ctx->r5 = ADD32(ctx->r10, 0X8);
    func_80071480(rdram, ctx);
        goto after_103;
    // 0x80064308: addiu       $a1, $t2, 0x8
    ctx->r5 = ADD32(ctx->r10, 0X8);
    after_103:
    // 0x8006430C: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x80064310: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80064314: addiu       $a2, $t7, 0x7FFF
    ctx->r6 = ADD32(ctx->r15, 0X7FFF);
    // 0x80064318: lw          $a2, 0x64F5($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X64F5);
    // 0x8006431C: addiu       $a1, $a1, -0x2D00
    ctx->r5 = ADD32(ctx->r5, -0X2D00);
    // 0x80064320: jal         0x800B62D4
    // 0x80064324: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    sprintf_recomp(rdram, ctx);
        goto after_104;
    // 0x80064324: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    after_104:
    // 0x80064328: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x8006432C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064330: addiu       $t8, $sp, 0x84
    ctx->r24 = ADD32(ctx->r29, 0X84);
    // 0x80064334: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80064338: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8006433C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80064340: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80064344: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80064348: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8006434C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80064350: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80064354: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80064358: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8006435C: addiu       $a2, $zero, 0x118
    ctx->r6 = ADD32(0, 0X118);
    // 0x80064360: addiu       $a3, $zero, 0x104
    ctx->r7 = ADD32(0, 0X104);
    // 0x80064364: jal         0x80077960
    // 0x80064368: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_80077960(rdram, ctx);
        goto after_105;
    // 0x80064368: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_105:
    // 0x8006436C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064370: jal         0x8005BE40
    // 0x80064374: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_106;
    // 0x80064374: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_106:
L_80064378:
    // 0x80064378: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8006437C: lh          $t1, -0x12C($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X12C);
    // 0x80064380: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80064384: bne         $t1, $at, L_800646AC
    if (ctx->r9 != ctx->r1) {
        // 0x80064388: nop
    
            goto L_800646AC;
    }
    // 0x80064388: nop

    // 0x8006438C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064390: jal         0x8005BBFC
    // 0x80064394: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_107;
    // 0x80064394: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_107:
    // 0x80064398: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8006439C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800643A0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800643A4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800643A8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800643AC: lw          $t8, -0x508($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X508);
    // 0x800643B0: lw          $t7, -0x50C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X50C);
    // 0x800643B4: lw          $t5, -0x510($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X510);
    // 0x800643B8: lw          $t4, -0x514($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X514);
    // 0x800643BC: lw          $t3, -0x518($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X518);
    // 0x800643C0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800643C4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800643C8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800643CC: lw          $a3, -0x51C($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X51C);
    // 0x800643D0: lw          $a2, -0x504($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X504);
    // 0x800643D4: lw          $a1, -0x520($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X520);
    // 0x800643D8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800643DC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800643E0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x800643E4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800643E8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x800643EC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800643F0: jal         0x80057460
    // 0x800643F4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_80057460(rdram, ctx);
        goto after_108;
    // 0x800643F4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_108:
    // 0x800643F8: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x800643FC: ori         $at, $zero, 0xE13C
    ctx->r1 = 0 | 0XE13C;
    // 0x80064400: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064404: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80064408: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8006440C: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x80064410: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80064414: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80064418: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8006441C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80064420: addiu       $a2, $zero, 0xA9
    ctx->r6 = ADD32(0, 0XA9);
    // 0x80064424: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    // 0x80064428: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8006442C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80064430: jal         0x80077960
    // 0x80064434: addiu       $a1, $t9, 0x8
    ctx->r5 = ADD32(ctx->r25, 0X8);
    func_80077960(rdram, ctx);
        goto after_109;
    // 0x80064434: addiu       $a1, $t9, 0x8
    ctx->r5 = ADD32(ctx->r25, 0X8);
    after_109:
    // 0x80064438: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x8006443C: ori         $at, $zero, 0xE214
    ctx->r1 = 0 | 0XE214;
    // 0x80064440: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064444: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80064448: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8006444C: addu        $t3, $t1, $at
    ctx->r11 = ADD32(ctx->r9, ctx->r1);
    // 0x80064450: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80064454: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80064458: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8006445C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80064460: addiu       $a2, $zero, 0xA9
    ctx->r6 = ADD32(0, 0XA9);
    // 0x80064464: addiu       $a3, $zero, 0xE7
    ctx->r7 = ADD32(0, 0XE7);
    // 0x80064468: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8006446C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80064470: jal         0x80077960
    // 0x80064474: addiu       $a1, $t1, 0x8
    ctx->r5 = ADD32(ctx->r9, 0X8);
    func_80077960(rdram, ctx);
        goto after_110;
    // 0x80064474: addiu       $a1, $t1, 0x8
    ctx->r5 = ADD32(ctx->r9, 0X8);
    after_110:
    // 0x80064478: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x8006447C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80064480: addiu       $t8, $t7, 0x7FFF
    ctx->r24 = ADD32(ctx->r15, 0X7FFF);
    // 0x80064484: lbu         $t8, 0x64ED($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X64ED);
    // 0x80064488: nop

    // 0x8006448C: bne         $t8, $at, L_8006454C
    if (ctx->r24 != ctx->r1) {
        // 0x80064490: nop
    
            goto L_8006454C;
    }
    // 0x80064490: nop

    // 0x80064494: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80064498: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8006449C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800644A0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800644A4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800644A8: lw          $t1, -0x4E8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4E8);
    // 0x800644AC: lw          $t2, -0x4EC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4EC);
    // 0x800644B0: lw          $t6, -0x4F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4F0);
    // 0x800644B4: lw          $t0, -0x4F4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4F4);
    // 0x800644B8: lw          $t9, -0x4F8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4F8);
    // 0x800644BC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800644C0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800644C4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800644C8: lw          $a3, -0x4FC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4FC);
    // 0x800644CC: lw          $a2, -0x4E4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4E4);
    // 0x800644D0: lw          $a1, -0x500($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X500);
    // 0x800644D4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800644D8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800644DC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800644E0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x800644E4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800644E8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800644EC: jal         0x80057460
    // 0x800644F0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80057460(rdram, ctx);
        goto after_111;
    // 0x800644F0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_111:
    // 0x800644F4: lw          $t3, 0xA4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA4);
    // 0x800644F8: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800644FC: addiu       $t4, $t3, 0x7FFF
    ctx->r12 = ADD32(ctx->r11, 0X7FFF);
    // 0x80064500: addiu       $t5, $t3, 0x7FFF
    ctx->r13 = ADD32(ctx->r11, 0X7FFF);
    // 0x80064504: lw          $t5, 0x64E9($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X64E9);
    // 0x80064508: lw          $t4, 0x64F1($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X64F1);
    // 0x8006450C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80064510: lw          $a3, -0x4F8($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4F8);
    // 0x80064514: lw          $a2, -0x4FC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4FC);
    // 0x80064518: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8006451C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80064520: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80064524: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80064528: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8006452C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80064530: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80064534: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80064538: addiu       $a1, $t3, 0x8
    ctx->r5 = ADD32(ctx->r11, 0X8);
    // 0x8006453C: subu        $a0, $t4, $t5
    ctx->r4 = SUB32(ctx->r12, ctx->r13);
    // 0x80064540: addiu       $a3, $a3, 0xF
    ctx->r7 = ADD32(ctx->r7, 0XF);
    // 0x80064544: jal         0x80071480
    // 0x80064548: addiu       $a2, $a2, 0x32
    ctx->r6 = ADD32(ctx->r6, 0X32);
    func_80071480(rdram, ctx);
        goto after_112;
    // 0x80064548: addiu       $a2, $a2, 0x32
    ctx->r6 = ADD32(ctx->r6, 0X32);
    after_112:
L_8006454C:
    // 0x8006454C: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x80064550: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80064554: addiu       $t2, $t6, 0x7FFF
    ctx->r10 = ADD32(ctx->r14, 0X7FFF);
    // 0x80064558: lbu         $t2, 0x64ED($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X64ED);
    // 0x8006455C: nop

    // 0x80064560: bne         $t2, $at, L_80064670
    if (ctx->r10 != ctx->r1) {
        // 0x80064564: nop
    
            goto L_80064670;
    }
    // 0x80064564: nop

    // 0x80064568: addiu       $a2, $t6, 0x7FFF
    ctx->r6 = ADD32(ctx->r14, 0X7FFF);
    // 0x8006456C: lw          $a2, 0x64F5($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X64F5);
    // 0x80064570: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80064574: addiu       $a1, $a1, -0x2CFC
    ctx->r5 = ADD32(ctx->r5, -0X2CFC);
    // 0x80064578: jal         0x800B62D4
    // 0x8006457C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    sprintf_recomp(rdram, ctx);
        goto after_113;
    // 0x8006457C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_113:
    // 0x80064580: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x80064584: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064588: addiu       $t1, $sp, 0x70
    ctx->r9 = ADD32(ctx->r29, 0X70);
    // 0x8006458C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80064590: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80064594: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80064598: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8006459C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x800645A0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800645A4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x800645A8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800645AC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800645B0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800645B4: addiu       $a2, $zero, 0xBE
    ctx->r6 = ADD32(0, 0XBE);
    // 0x800645B8: addiu       $a3, $zero, 0x117
    ctx->r7 = ADD32(0, 0X117);
    // 0x800645BC: jal         0x80077960
    // 0x800645C0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_80077960(rdram, ctx);
        goto after_114;
    // 0x800645C0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_114:
    // 0x800645C4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800645C8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800645CC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800645D0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800645D4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800645D8: lw          $t6, -0x4E8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4E8);
    // 0x800645DC: lw          $t2, -0x4EC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4EC);
    // 0x800645E0: lw          $t0, -0x4F0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4F0);
    // 0x800645E4: lw          $t9, -0x4F4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4F4);
    // 0x800645E8: lw          $t8, -0x4F8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4F8);
    // 0x800645EC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800645F0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800645F4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800645F8: lw          $a3, -0x4FC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4FC);
    // 0x800645FC: lw          $a2, -0x4E4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4E4);
    // 0x80064600: lw          $a1, -0x500($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X500);
    // 0x80064604: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064608: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8006460C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80064610: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80064614: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80064618: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8006461C: jal         0x80057460
    // 0x80064620: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80057460(rdram, ctx);
        goto after_115;
    // 0x80064620: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_115:
    // 0x80064624: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x80064628: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8006462C: addiu       $a0, $t1, 0x7FFF
    ctx->r4 = ADD32(ctx->r9, 0X7FFF);
    // 0x80064630: lw          $a0, 0x64E9($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X64E9);
    // 0x80064634: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80064638: lw          $a3, -0x4F8($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4F8);
    // 0x8006463C: lw          $a2, -0x4FC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4FC);
    // 0x80064640: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80064644: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80064648: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8006464C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80064650: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80064654: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80064658: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8006465C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80064660: addiu       $a1, $t1, 0x8
    ctx->r5 = ADD32(ctx->r9, 0X8);
    // 0x80064664: addiu       $a3, $a3, 0xF
    ctx->r7 = ADD32(ctx->r7, 0XF);
    // 0x80064668: jal         0x80071480
    // 0x8006466C: addiu       $a2, $a2, 0x32
    ctx->r6 = ADD32(ctx->r6, 0X32);
    func_80071480(rdram, ctx);
        goto after_116;
    // 0x8006466C: addiu       $a2, $a2, 0x32
    ctx->r6 = ADD32(ctx->r6, 0X32);
    after_116:
L_80064670:
    // 0x80064670: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064674: jal         0x8005BE40
    // 0x80064678: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_117;
    // 0x80064678: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_117:
    // 0x8006467C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80064680: lw          $t8, 0x20C0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X20C0);
    // 0x80064684: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80064688: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x8006468C: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x80064690: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80064694: sw          $t9, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r25;
    // 0x80064698: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x8006469C: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x800646A0: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x800646A4: nop

    // 0x800646A8: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
L_800646AC:
    // 0x800646AC: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x800646B0: lh          $t1, -0x12C($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X12C);
    // 0x800646B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800646B8: bne         $t1, $at, L_8006493C
    if (ctx->r9 != ctx->r1) {
        // 0x800646BC: nop
    
            goto L_8006493C;
    }
    // 0x800646BC: nop

    // 0x800646C0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800646C4: jal         0x8005BBFC
    // 0x800646C8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_118;
    // 0x800646C8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_118:
    // 0x800646CC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800646D0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800646D4: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800646D8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800646DC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800646E0: lw          $t8, -0x508($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X508);
    // 0x800646E4: lw          $t7, -0x50C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X50C);
    // 0x800646E8: lw          $t3, -0x510($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X510);
    // 0x800646EC: lw          $t5, -0x514($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X514);
    // 0x800646F0: lw          $t4, -0x518($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X518);
    // 0x800646F4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800646F8: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800646FC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80064700: lw          $a3, -0x51C($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X51C);
    // 0x80064704: lw          $a2, -0x504($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X504);
    // 0x80064708: lw          $a1, -0x520($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X520);
    // 0x8006470C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064710: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80064714: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80064718: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8006471C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80064720: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80064724: jal         0x80057460
    // 0x80064728: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_80057460(rdram, ctx);
        goto after_119;
    // 0x80064728: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_119:
    // 0x8006472C: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x80064730: ori         $at, $zero, 0xE13C
    ctx->r1 = 0 | 0XE13C;
    // 0x80064734: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064738: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8006473C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80064740: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x80064744: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80064748: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8006474C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80064750: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80064754: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x80064758: addiu       $a3, $zero, 0xEA
    ctx->r7 = ADD32(0, 0XEA);
    // 0x8006475C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80064760: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80064764: jal         0x80077960
    // 0x80064768: addiu       $a1, $t9, 0x8
    ctx->r5 = ADD32(ctx->r25, 0X8);
    func_80077960(rdram, ctx);
        goto after_120;
    // 0x80064768: addiu       $a1, $t9, 0x8
    ctx->r5 = ADD32(ctx->r25, 0X8);
    after_120:
    // 0x8006476C: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x80064770: ori         $at, $zero, 0xE214
    ctx->r1 = 0 | 0XE214;
    // 0x80064774: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064778: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8006477C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80064780: addu        $t4, $t1, $at
    ctx->r12 = ADD32(ctx->r9, ctx->r1);
    // 0x80064784: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80064788: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8006478C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80064790: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80064794: addiu       $a2, $zero, 0x7B
    ctx->r6 = ADD32(0, 0X7B);
    // 0x80064798: addiu       $a3, $zero, 0xEA
    ctx->r7 = ADD32(0, 0XEA);
    // 0x8006479C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800647A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800647A4: jal         0x80077960
    // 0x800647A8: addiu       $a1, $t1, 0x8
    ctx->r5 = ADD32(ctx->r9, 0X8);
    func_80077960(rdram, ctx);
        goto after_121;
    // 0x800647A8: addiu       $a1, $t1, 0x8
    ctx->r5 = ADD32(ctx->r9, 0X8);
    after_121:
    // 0x800647AC: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x800647B0: ori         $at, $zero, 0xE2EC
    ctx->r1 = 0 | 0XE2EC;
    // 0x800647B4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800647B8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800647BC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800647C0: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x800647C4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800647C8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x800647CC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800647D0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800647D4: addiu       $a2, $zero, 0xCF
    ctx->r6 = ADD32(0, 0XCF);
    // 0x800647D8: addiu       $a3, $zero, 0xEA
    ctx->r7 = ADD32(0, 0XEA);
    // 0x800647DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800647E0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x800647E4: jal         0x80077960
    // 0x800647E8: addiu       $a1, $t7, 0x8
    ctx->r5 = ADD32(ctx->r15, 0X8);
    func_80077960(rdram, ctx);
        goto after_122;
    // 0x800647E8: addiu       $a1, $t7, 0x8
    ctx->r5 = ADD32(ctx->r15, 0X8);
    after_122:
    // 0x800647EC: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x800647F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800647F4: addiu       $t6, $t2, 0x7FFF
    ctx->r14 = ADD32(ctx->r10, 0X7FFF);
    // 0x800647F8: lbu         $t6, 0x64ED($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X64ED);
    // 0x800647FC: nop

    // 0x80064800: bne         $t6, $at, L_8006484C
    if (ctx->r14 != ctx->r1) {
        // 0x80064804: nop
    
            goto L_8006484C;
    }
    // 0x80064804: nop

    // 0x80064808: addiu       $t1, $t2, 0x7FFF
    ctx->r9 = ADD32(ctx->r10, 0X7FFF);
    // 0x8006480C: addiu       $t4, $t2, 0x7FFF
    ctx->r12 = ADD32(ctx->r10, 0X7FFF);
    // 0x80064810: lw          $t4, 0x64E9($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X64E9);
    // 0x80064814: lw          $t1, 0x64F1($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X64F1);
    // 0x80064818: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8006481C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80064820: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80064824: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80064828: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8006482C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80064830: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80064834: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80064838: addiu       $a1, $t2, 0x8
    ctx->r5 = ADD32(ctx->r10, 0X8);
    // 0x8006483C: addiu       $a2, $zero, 0xD8
    ctx->r6 = ADD32(0, 0XD8);
    // 0x80064840: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    // 0x80064844: jal         0x80071480
    // 0x80064848: subu        $a0, $t1, $t4
    ctx->r4 = SUB32(ctx->r9, ctx->r12);
    func_80071480(rdram, ctx);
        goto after_123;
    // 0x80064848: subu        $a0, $t1, $t4
    ctx->r4 = SUB32(ctx->r9, ctx->r12);
    after_123:
L_8006484C:
    // 0x8006484C: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x80064850: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80064854: addiu       $t0, $t9, 0x7FFF
    ctx->r8 = ADD32(ctx->r25, 0X7FFF);
    // 0x80064858: lbu         $t0, 0x64ED($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X64ED);
    // 0x8006485C: nop

    // 0x80064860: bne         $t0, $at, L_80064900
    if (ctx->r8 != ctx->r1) {
        // 0x80064864: nop
    
            goto L_80064900;
    }
    // 0x80064864: nop

    // 0x80064868: addiu       $a2, $t9, 0x7FFF
    ctx->r6 = ADD32(ctx->r25, 0X7FFF);
    // 0x8006486C: lw          $a2, 0x64F5($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X64F5);
    // 0x80064870: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80064874: addiu       $a1, $a1, -0x2CF8
    ctx->r5 = ADD32(ctx->r5, -0X2CF8);
    // 0x80064878: jal         0x800B62D4
    // 0x8006487C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    sprintf_recomp(rdram, ctx);
        goto after_124;
    // 0x8006487C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_124:
    // 0x80064880: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x80064884: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064888: addiu       $t6, $sp, 0x58
    ctx->r14 = ADD32(ctx->r29, 0X58);
    // 0x8006488C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80064890: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80064894: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80064898: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8006489C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x800648A0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x800648A4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800648A8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800648AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800648B0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800648B4: addiu       $a2, $zero, 0xBC
    ctx->r6 = ADD32(0, 0XBC);
    // 0x800648B8: addiu       $a3, $zero, 0x109
    ctx->r7 = ADD32(0, 0X109);
    // 0x800648BC: jal         0x80077960
    // 0x800648C0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_80077960(rdram, ctx);
        goto after_125;
    // 0x800648C0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_125:
    // 0x800648C4: lw          $t3, 0xA4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA4);
    // 0x800648C8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800648CC: addiu       $a0, $t3, 0x7FFF
    ctx->r4 = ADD32(ctx->r11, 0X7FFF);
    // 0x800648D0: lw          $a0, 0x64E9($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X64E9);
    // 0x800648D4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800648D8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800648DC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800648E0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800648E4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800648E8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800648EC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800648F0: addiu       $a2, $zero, 0xD9
    ctx->r6 = ADD32(0, 0XD9);
    // 0x800648F4: addiu       $a3, $zero, 0x116
    ctx->r7 = ADD32(0, 0X116);
    // 0x800648F8: jal         0x80071480
    // 0x800648FC: addiu       $a1, $t3, 0x8
    ctx->r5 = ADD32(ctx->r11, 0X8);
    func_80071480(rdram, ctx);
        goto after_126;
    // 0x800648FC: addiu       $a1, $t3, 0x8
    ctx->r5 = ADD32(ctx->r11, 0X8);
    after_126:
L_80064900:
    // 0x80064900: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064904: jal         0x8005BE40
    // 0x80064908: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_127;
    // 0x80064908: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_127:
    // 0x8006490C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80064910: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x80064914: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80064918: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x8006491C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80064920: addiu       $t1, $t6, 0x8
    ctx->r9 = ADD32(ctx->r14, 0X8);
    // 0x80064924: sw          $t1, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r9;
    // 0x80064928: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x8006492C: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    // 0x80064930: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80064934: nop

    // 0x80064938: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
L_8006493C:
    // 0x8006493C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80064940: lh          $t3, -0x12C($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X12C);
    // 0x80064944: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80064948: bne         $t3, $at, L_80064C10
    if (ctx->r11 != ctx->r1) {
        // 0x8006494C: nop
    
            goto L_80064C10;
    }
    // 0x8006494C: nop

    // 0x80064950: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064954: jal         0x8005BBFC
    // 0x80064958: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_128;
    // 0x80064958: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_128:
    // 0x8006495C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80064960: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80064964: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80064968: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8006496C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80064970: lw          $t6, -0x508($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X508);
    // 0x80064974: lw          $t9, -0x50C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X50C);
    // 0x80064978: lw          $t0, -0x510($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X510);
    // 0x8006497C: lw          $t8, -0x514($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X514);
    // 0x80064980: lw          $t7, -0x518($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X518);
    // 0x80064984: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80064988: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8006498C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80064990: lw          $a3, -0x51C($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X51C);
    // 0x80064994: lw          $a2, -0x504($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X504);
    // 0x80064998: lw          $a1, -0x520($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X520);
    // 0x8006499C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800649A0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800649A4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800649A8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800649AC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800649B0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800649B4: jal         0x80057460
    // 0x800649B8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80057460(rdram, ctx);
        goto after_129;
    // 0x800649B8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_129:
    // 0x800649BC: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x800649C0: ori         $at, $zero, 0xE13C
    ctx->r1 = 0 | 0XE13C;
    // 0x800649C4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800649C8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x800649CC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800649D0: addu        $t4, $t1, $at
    ctx->r12 = ADD32(ctx->r9, ctx->r1);
    // 0x800649D4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800649D8: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x800649DC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x800649E0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800649E4: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x800649E8: addiu       $a3, $zero, 0xEA
    ctx->r7 = ADD32(0, 0XEA);
    // 0x800649EC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x800649F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800649F4: jal         0x80077960
    // 0x800649F8: addiu       $a1, $t1, 0x8
    ctx->r5 = ADD32(ctx->r9, 0X8);
    func_80077960(rdram, ctx);
        goto after_130;
    // 0x800649F8: addiu       $a1, $t1, 0x8
    ctx->r5 = ADD32(ctx->r9, 0X8);
    after_130:
    // 0x800649FC: lw          $t3, 0xA4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA4);
    // 0x80064A00: ori         $at, $zero, 0xE214
    ctx->r1 = 0 | 0XE214;
    // 0x80064A04: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064A08: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80064A0C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80064A10: addu        $t7, $t3, $at
    ctx->r15 = ADD32(ctx->r11, ctx->r1);
    // 0x80064A14: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80064A18: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80064A1C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80064A20: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80064A24: addiu       $a2, $zero, 0x7B
    ctx->r6 = ADD32(0, 0X7B);
    // 0x80064A28: addiu       $a3, $zero, 0xEA
    ctx->r7 = ADD32(0, 0XEA);
    // 0x80064A2C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80064A30: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80064A34: jal         0x80077960
    // 0x80064A38: addiu       $a1, $t3, 0x8
    ctx->r5 = ADD32(ctx->r11, 0X8);
    func_80077960(rdram, ctx);
        goto after_131;
    // 0x80064A38: addiu       $a1, $t3, 0x8
    ctx->r5 = ADD32(ctx->r11, 0X8);
    after_131:
    // 0x80064A3C: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x80064A40: ori         $at, $zero, 0xE2EC
    ctx->r1 = 0 | 0XE2EC;
    // 0x80064A44: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064A48: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80064A4C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80064A50: addu        $t6, $t9, $at
    ctx->r14 = ADD32(ctx->r25, ctx->r1);
    // 0x80064A54: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80064A58: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80064A5C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80064A60: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80064A64: addiu       $a2, $zero, 0xCF
    ctx->r6 = ADD32(0, 0XCF);
    // 0x80064A68: addiu       $a3, $zero, 0xEA
    ctx->r7 = ADD32(0, 0XEA);
    // 0x80064A6C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80064A70: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80064A74: jal         0x80077960
    // 0x80064A78: addiu       $a1, $t9, 0x8
    ctx->r5 = ADD32(ctx->r25, 0X8);
    func_80077960(rdram, ctx);
        goto after_132;
    // 0x80064A78: addiu       $a1, $t9, 0x8
    ctx->r5 = ADD32(ctx->r25, 0X8);
    after_132:
    // 0x80064A7C: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x80064A80: ori         $at, $zero, 0xE3C4
    ctx->r1 = 0 | 0XE3C4;
    // 0x80064A84: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064A88: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80064A8C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80064A90: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80064A94: addu        $t5, $t2, $at
    ctx->r13 = ADD32(ctx->r10, ctx->r1);
    // 0x80064A98: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80064A9C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80064AA0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80064AA4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80064AA8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80064AAC: addiu       $a2, $zero, 0x124
    ctx->r6 = ADD32(0, 0X124);
    // 0x80064AB0: addiu       $a3, $zero, 0xEA
    ctx->r7 = ADD32(0, 0XEA);
    // 0x80064AB4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80064AB8: jal         0x80077960
    // 0x80064ABC: addiu       $a1, $t2, 0x8
    ctx->r5 = ADD32(ctx->r10, 0X8);
    func_80077960(rdram, ctx);
        goto after_133;
    // 0x80064ABC: addiu       $a1, $t2, 0x8
    ctx->r5 = ADD32(ctx->r10, 0X8);
    after_133:
    // 0x80064AC0: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x80064AC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80064AC8: addiu       $t9, $t0, 0x7FFF
    ctx->r25 = ADD32(ctx->r8, 0X7FFF);
    // 0x80064ACC: lbu         $t9, 0x64ED($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X64ED);
    // 0x80064AD0: nop

    // 0x80064AD4: bne         $t9, $at, L_80064B20
    if (ctx->r25 != ctx->r1) {
        // 0x80064AD8: nop
    
            goto L_80064B20;
    }
    // 0x80064AD8: nop

    // 0x80064ADC: addiu       $t6, $t0, 0x7FFF
    ctx->r14 = ADD32(ctx->r8, 0X7FFF);
    // 0x80064AE0: addiu       $t1, $t0, 0x7FFF
    ctx->r9 = ADD32(ctx->r8, 0X7FFF);
    // 0x80064AE4: lw          $t1, 0x64E9($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X64E9);
    // 0x80064AE8: lw          $t6, 0x64F1($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X64F1);
    // 0x80064AEC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80064AF0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80064AF4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80064AF8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80064AFC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80064B00: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80064B04: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80064B08: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80064B0C: addiu       $a1, $t0, 0x8
    ctx->r5 = ADD32(ctx->r8, 0X8);
    // 0x80064B10: addiu       $a2, $zero, 0xD8
    ctx->r6 = ADD32(0, 0XD8);
    // 0x80064B14: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    // 0x80064B18: jal         0x80071480
    // 0x80064B1C: subu        $a0, $t6, $t1
    ctx->r4 = SUB32(ctx->r14, ctx->r9);
    func_80071480(rdram, ctx);
        goto after_134;
    // 0x80064B1C: subu        $a0, $t6, $t1
    ctx->r4 = SUB32(ctx->r14, ctx->r9);
    after_134:
L_80064B20:
    // 0x80064B20: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x80064B24: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80064B28: addiu       $t8, $t7, 0x7FFF
    ctx->r24 = ADD32(ctx->r15, 0X7FFF);
    // 0x80064B2C: lbu         $t8, 0x64ED($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X64ED);
    // 0x80064B30: nop

    // 0x80064B34: bne         $t8, $at, L_80064BD4
    if (ctx->r24 != ctx->r1) {
        // 0x80064B38: nop
    
            goto L_80064BD4;
    }
    // 0x80064B38: nop

    // 0x80064B3C: addiu       $a2, $t7, 0x7FFF
    ctx->r6 = ADD32(ctx->r15, 0X7FFF);
    // 0x80064B40: lw          $a2, 0x64F5($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X64F5);
    // 0x80064B44: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80064B48: addiu       $a1, $a1, -0x2CF4
    ctx->r5 = ADD32(ctx->r5, -0X2CF4);
    // 0x80064B4C: jal         0x800B62D4
    // 0x80064B50: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    sprintf_recomp(rdram, ctx);
        goto after_135;
    // 0x80064B50: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_135:
    // 0x80064B54: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x80064B58: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064B5C: addiu       $t9, $sp, 0x40
    ctx->r25 = ADD32(ctx->r29, 0X40);
    // 0x80064B60: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80064B64: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80064B68: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80064B6C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80064B70: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80064B74: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80064B78: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80064B7C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80064B80: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80064B84: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80064B88: addiu       $a2, $zero, 0xBC
    ctx->r6 = ADD32(0, 0XBC);
    // 0x80064B8C: addiu       $a3, $zero, 0x109
    ctx->r7 = ADD32(0, 0X109);
    // 0x80064B90: jal         0x80077960
    // 0x80064B94: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_80077960(rdram, ctx);
        goto after_136;
    // 0x80064B94: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_136:
    // 0x80064B98: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x80064B9C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80064BA0: addiu       $a0, $t2, 0x7FFF
    ctx->r4 = ADD32(ctx->r10, 0X7FFF);
    // 0x80064BA4: lw          $a0, 0x64E9($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X64E9);
    // 0x80064BA8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80064BAC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80064BB0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80064BB4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80064BB8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80064BBC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80064BC0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80064BC4: addiu       $a2, $zero, 0xD9
    ctx->r6 = ADD32(0, 0XD9);
    // 0x80064BC8: addiu       $a3, $zero, 0x116
    ctx->r7 = ADD32(0, 0X116);
    // 0x80064BCC: jal         0x80071480
    // 0x80064BD0: addiu       $a1, $t2, 0x8
    ctx->r5 = ADD32(ctx->r10, 0X8);
    func_80071480(rdram, ctx);
        goto after_137;
    // 0x80064BD0: addiu       $a1, $t2, 0x8
    ctx->r5 = ADD32(ctx->r10, 0X8);
    after_137:
L_80064BD4:
    // 0x80064BD4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064BD8: jal         0x8005BE40
    // 0x80064BDC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_138;
    // 0x80064BDC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_138:
    // 0x80064BE0: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80064BE4: lw          $t9, 0x20C0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X20C0);
    // 0x80064BE8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80064BEC: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80064BF0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80064BF4: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x80064BF8: sw          $t6, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r14;
    // 0x80064BFC: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x80064C00: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x80064C04: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80064C08: nop

    // 0x80064C0C: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
L_80064C10:
    // 0x80064C10: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80064C14: lbu         $t2, -0x118($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X118);
    // 0x80064C18: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80064C1C: bne         $t2, $at, L_80064CC8
    if (ctx->r10 != ctx->r1) {
        // 0x80064C20: nop
    
            goto L_80064CC8;
    }
    // 0x80064C20: nop

    // 0x80064C24: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80064C28: lw          $t5, 0x4B8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4B8);
    // 0x80064C2C: nop

    // 0x80064C30: slti        $at, $t5, 0x14
    ctx->r1 = SIGNED(ctx->r13) < 0X14 ? 1 : 0;
    // 0x80064C34: beq         $at, $zero, L_80064C9C
    if (ctx->r1 == 0) {
        // 0x80064C38: nop
    
            goto L_80064C9C;
    }
    // 0x80064C38: nop

    // 0x80064C3C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064C40: jal         0x8005BBFC
    // 0x80064C44: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_139;
    // 0x80064C44: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_139:
    // 0x80064C48: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x80064C4C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80064C50: addiu       $t3, $t3, -0x2CF0
    ctx->r11 = ADD32(ctx->r11, -0X2CF0);
    // 0x80064C54: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064C58: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80064C5C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80064C60: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80064C64: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80064C68: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80064C6C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80064C70: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80064C74: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80064C78: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80064C7C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80064C80: addiu       $a2, $zero, 0x109
    ctx->r6 = ADD32(0, 0X109);
    // 0x80064C84: addiu       $a3, $zero, 0x6E
    ctx->r7 = ADD32(0, 0X6E);
    // 0x80064C88: jal         0x80077960
    // 0x80064C8C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_80077960(rdram, ctx);
        goto after_140;
    // 0x80064C8C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_140:
    // 0x80064C90: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064C94: jal         0x8005BE40
    // 0x80064C98: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_141;
    // 0x80064C98: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_141:
L_80064C9C:
    // 0x80064C9C: jal         0x800A3AF0
    // 0x80064CA0: nop

    func_800A3AF0(rdram, ctx);
        goto after_142;
    // 0x80064CA0: nop

    after_142:
    // 0x80064CA4: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80064CA8: lw          $t1, 0x4B8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4B8);
    // 0x80064CAC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80064CB0: addu        $t0, $v0, $t1
    ctx->r8 = ADD32(ctx->r2, ctx->r9);
    // 0x80064CB4: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x80064CB8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80064CBC: mfhi        $t4
    ctx->r12 = hi;
    // 0x80064CC0: sw          $t4, 0x4B8($at)
    MEM_W(0X4B8, ctx->r1) = ctx->r12;
    // 0x80064CC4: nop

L_80064CC8:
    // 0x80064CC8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80064CCC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80064CD0: jr          $ra
    // 0x80064CD4: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x80064CD4: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x80064CD8: nop

    // 0x80064CDC: nop

;}
RECOMP_FUNC void func_80064CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064CE0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80064CE4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80064CE8: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80064CEC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80064CF0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80064CF4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80064CF8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80064CFC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80064D00: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80064D04: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80064D08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80064D0C: lhu         $a0, 0x8($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X8);
    // 0x80064D10: jal         0x800608F4
    // 0x80064D14: nop

    func_800608F4(rdram, ctx);
        goto after_0;
    // 0x80064D14: nop

    after_0:
    // 0x80064D18: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80064D1C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80064D20: lhu         $a0, 0x8($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X8);
    // 0x80064D24: jal         0x80060914
    // 0x80064D28: nop

    func_80060914(rdram, ctx);
        goto after_1;
    // 0x80064D28: nop

    after_1:
    // 0x80064D2C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80064D30: lbu         $t0, 0x4F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4F);
    // 0x80064D34: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80064D38: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80064D3C: addu        $s2, $t9, $t1
    ctx->r18 = ADD32(ctx->r25, ctx->r9);
    // 0x80064D40: lb          $t2, 0x1($s2)
    ctx->r10 = MEM_B(ctx->r18, 0X1);
    // 0x80064D44: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80064D48: lw          $t0, -0x3F0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3F0);
    // 0x80064D4C: lh          $t4, 0xA($t8)
    ctx->r12 = MEM_H(ctx->r24, 0XA);
    // 0x80064D50: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x80064D54: lhu         $t9, 0x6($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X6);
    // 0x80064D58: subu        $s0, $t3, $t4
    ctx->r16 = SUB32(ctx->r11, ctx->r12);
    // 0x80064D5C: addiu       $s0, $s0, 0x80
    ctx->r16 = ADD32(ctx->r16, 0X80);
    // 0x80064D60: multu       $t9, $s0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80064D64: lb          $t5, 0x2($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X2);
    // 0x80064D68: lh          $t7, 0xC($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XC);
    // 0x80064D6C: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x80064D70: lhu         $t2, 0x6($t0)
    ctx->r10 = MEM_HU(ctx->r8, 0X6);
    // 0x80064D74: subu        $s1, $t6, $t7
    ctx->r17 = SUB32(ctx->r14, ctx->r15);
    // 0x80064D78: addiu       $s1, $s1, 0x80
    ctx->r17 = ADD32(ctx->r17, 0X80);
    // 0x80064D7C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80064D80: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80064D84: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80064D88: mflo        $s0
    ctx->r16 = lo;
    // 0x80064D8C: sra         $t1, $s0, 8
    ctx->r9 = S32(SIGNED(ctx->r16) >> 8);
    // 0x80064D90: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x80064D94: multu       $t2, $s1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80064D98: mflo        $s1
    ctx->r17 = lo;
    // 0x80064D9C: sra         $t3, $s1, 8
    ctx->r11 = S32(SIGNED(ctx->r17) >> 8);
    // 0x80064DA0: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80064DA4: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80064DA8: mflo        $t4
    ctx->r12 = lo;
    // 0x80064DAC: nop

    // 0x80064DB0: nop

    // 0x80064DB4: multu       $s1, $s3
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80064DB8: mflo        $t5
    ctx->r13 = lo;
    // 0x80064DBC: subu        $t8, $t4, $t5
    ctx->r24 = SUB32(ctx->r12, ctx->r13);
    // 0x80064DC0: sra         $t6, $t8, 14
    ctx->r14 = S32(SIGNED(ctx->r24) >> 14);
    // 0x80064DC4: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80064DC8: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x80064DCC: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80064DD0: mflo        $t9
    ctx->r25 = lo;
    // 0x80064DD4: nop

    // 0x80064DD8: nop

    // 0x80064DDC: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80064DE0: mflo        $t1
    ctx->r9 = lo;
    // 0x80064DE4: addu        $t0, $t9, $t1
    ctx->r8 = ADD32(ctx->r25, ctx->r9);
    // 0x80064DE8: sra         $t2, $t0, 14
    ctx->r10 = S32(SIGNED(ctx->r8) >> 14);
    // 0x80064DEC: sh          $t2, 0x2($t3)
    MEM_H(0X2, ctx->r11) = ctx->r10;
    // 0x80064DF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80064DF4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80064DF8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80064DFC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80064E00: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80064E04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80064E08: jr          $ra
    // 0x80064E0C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80064E0C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80064E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064E10: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80064E14: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80064E18: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80064E1C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80064E20: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80064E24: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80064E28: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80064E2C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80064E30: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80064E34: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80064E38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80064E3C: lhu         $a0, 0x8($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X8);
    // 0x80064E40: jal         0x800608F4
    // 0x80064E44: nop

    func_800608F4(rdram, ctx);
        goto after_0;
    // 0x80064E44: nop

    after_0:
    // 0x80064E48: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80064E4C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80064E50: lhu         $a0, 0x8($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X8);
    // 0x80064E54: jal         0x80060914
    // 0x80064E58: nop

    func_80060914(rdram, ctx);
        goto after_1;
    // 0x80064E58: nop

    after_1:
    // 0x80064E5C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80064E60: lbu         $t0, 0x4F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4F);
    // 0x80064E64: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80064E68: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80064E6C: addu        $s2, $t9, $t1
    ctx->r18 = ADD32(ctx->r25, ctx->r9);
    // 0x80064E70: lb          $t2, 0x1($s2)
    ctx->r10 = MEM_B(ctx->r18, 0X1);
    // 0x80064E74: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80064E78: lw          $t0, -0x3F0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3F0);
    // 0x80064E7C: lh          $t4, 0xA($t8)
    ctx->r12 = MEM_H(ctx->r24, 0XA);
    // 0x80064E80: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x80064E84: lhu         $t9, 0x6($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X6);
    // 0x80064E88: subu        $s0, $t3, $t4
    ctx->r16 = SUB32(ctx->r11, ctx->r12);
    // 0x80064E8C: addiu       $s0, $s0, 0x80
    ctx->r16 = ADD32(ctx->r16, 0X80);
    // 0x80064E90: multu       $t9, $s0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80064E94: lb          $t5, 0x2($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X2);
    // 0x80064E98: lh          $t7, 0xC($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XC);
    // 0x80064E9C: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x80064EA0: lhu         $t2, 0x6($t0)
    ctx->r10 = MEM_HU(ctx->r8, 0X6);
    // 0x80064EA4: subu        $s1, $t6, $t7
    ctx->r17 = SUB32(ctx->r14, ctx->r15);
    // 0x80064EA8: addiu       $s1, $s1, 0x80
    ctx->r17 = ADD32(ctx->r17, 0X80);
    // 0x80064EAC: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80064EB0: lh          $t9, 0xE($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE);
    // 0x80064EB4: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80064EB8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80064EBC: mflo        $s0
    ctx->r16 = lo;
    // 0x80064EC0: sra         $t1, $s0, 8
    ctx->r9 = S32(SIGNED(ctx->r16) >> 8);
    // 0x80064EC4: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x80064EC8: multu       $t2, $s1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80064ECC: mflo        $s1
    ctx->r17 = lo;
    // 0x80064ED0: sra         $t3, $s1, 8
    ctx->r11 = S32(SIGNED(ctx->r17) >> 8);
    // 0x80064ED4: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80064ED8: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80064EDC: mflo        $t4
    ctx->r12 = lo;
    // 0x80064EE0: nop

    // 0x80064EE4: nop

    // 0x80064EE8: multu       $s1, $s3
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80064EEC: mflo        $t5
    ctx->r13 = lo;
    // 0x80064EF0: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x80064EF4: sra         $t7, $t6, 14
    ctx->r15 = S32(SIGNED(ctx->r14) >> 14);
    // 0x80064EF8: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80064EFC: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x80064F00: sh          $t1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r9;
    // 0x80064F04: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80064F08: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x80064F0C: lh          $t8, 0x10($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X10);
    // 0x80064F10: mflo        $t2
    ctx->r10 = lo;
    // 0x80064F14: nop

    // 0x80064F18: nop

    // 0x80064F1C: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80064F20: mflo        $t3
    ctx->r11 = lo;
    // 0x80064F24: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80064F28: sra         $t5, $t4, 14
    ctx->r13 = S32(SIGNED(ctx->r12) >> 14);
    // 0x80064F2C: addu        $t7, $t5, $t8
    ctx->r15 = ADD32(ctx->r13, ctx->r24);
    // 0x80064F30: sh          $t7, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r15;
    // 0x80064F34: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80064F38: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80064F3C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80064F40: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80064F44: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80064F48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80064F4C: jr          $ra
    // 0x80064F50: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80064F50: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
