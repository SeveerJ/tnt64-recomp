#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800696F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800696F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800696F8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800696FC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80069700: lbu         $t6, 0x33($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X33);
    // 0x80069704: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80069708: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006970C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80069710: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80069714: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80069718: sb          $t6, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r14;
    // 0x8006971C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80069720: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80069724: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80069728: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8006972C: lw          $t8, -0x430($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X430);
    // 0x80069730: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x80069734: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80069738: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006973C: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x80069740: addu        $s1, $t8, $t1
    ctx->r17 = ADD32(ctx->r24, ctx->r9);
    // 0x80069744: beq         $at, $zero, L_80069770
    if (ctx->r1 == 0) {
        // 0x80069748: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80069770;
    }
    // 0x80069748: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8006974C:
    // 0x8006974C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80069750: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x80069754: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80069758: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006975C: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x80069760: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80069764: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80069768: bne         $at, $zero, L_8006974C
    if (ctx->r1 != 0) {
        // 0x8006976C: sw          $t2, 0x8($t5)
        MEM_W(0X8, ctx->r13) = ctx->r10;
            goto L_8006974C;
    }
    // 0x8006976C: sw          $t2, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r10;
L_80069770:
    // 0x80069770: lbu         $t6, 0x33($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X33);
    // 0x80069774: nop

    // 0x80069778: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x8006977C: beq         $at, $zero, L_800697FC
    if (ctx->r1 == 0) {
        // 0x80069780: nop
    
            goto L_800697FC;
    }
    // 0x80069780: nop

    // 0x80069784: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80069788: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006978C: addu        $at, $at, $t6
    gpr jr_addend_80069798 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80069790: lw          $t6, -0x29DC($at)
    ctx->r14 = ADD32(ctx->r1, -0X29DC);
    // 0x80069794: nop

    // 0x80069798: jr          $t6
    // 0x8006979C: nop

    switch (jr_addend_80069798 >> 2) {
        case 0: goto L_800697A0; break;
        case 1: goto L_800697B4; break;
        case 2: goto L_800697E4; break;
        case 3: goto L_800697E4; break;
        case 4: goto L_800697CC; break;
        default: switch_error(__func__, 0x80069798, 0x800DD624);
    }
    // 0x8006979C: nop

L_800697A0:
    // 0x800697A0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800697A4: jal         0x80069684
    // 0x800697A8: nop

    func_80069684(rdram, ctx);
        goto after_0;
    // 0x800697A8: nop

    after_0:
    // 0x800697AC: b           L_80069810
    // 0x800697B0: nop

        goto L_80069810;
    // 0x800697B0: nop

L_800697B4:
    // 0x800697B4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800697B8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800697BC: jal         0x8006969C
    // 0x800697C0: nop

    func_8006969C(rdram, ctx);
        goto after_1;
    // 0x800697C0: nop

    after_1:
    // 0x800697C4: b           L_80069810
    // 0x800697C8: nop

        goto L_80069810;
    // 0x800697C8: nop

L_800697CC:
    // 0x800697CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800697D0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800697D4: jal         0x800696B8
    // 0x800697D8: nop

    func_800696B8(rdram, ctx);
        goto after_2;
    // 0x800697D8: nop

    after_2:
    // 0x800697DC: b           L_80069810
    // 0x800697E0: nop

        goto L_80069810;
    // 0x800697E0: nop

L_800697E4:
    // 0x800697E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800697E8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800697EC: jal         0x800696D8
    // 0x800697F0: nop

    func_800696D8(rdram, ctx);
        goto after_3;
    // 0x800697F0: nop

    after_3:
    // 0x800697F4: b           L_80069810
    // 0x800697F8: nop

        goto L_80069810;
    // 0x800697F8: nop

L_800697FC:
    // 0x800697FC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80069800: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80069804: addiu       $a1, $a1, -0x2A1C
    ctx->r5 = ADD32(ctx->r5, -0X2A1C);
    // 0x80069808: jal         0x80083560
    // 0x8006980C: addiu       $a0, $a0, -0x2A2C
    ctx->r4 = ADD32(ctx->r4, -0X2A2C);
    Fault_Assert(rdram, ctx);
        goto after_4;
    // 0x8006980C: addiu       $a0, $a0, -0x2A2C
    ctx->r4 = ADD32(ctx->r4, -0X2A2C);
    after_4:
L_80069810:
    // 0x80069810: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80069814: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80069818: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006981C: jr          $ra
    // 0x80069820: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80069820: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80069824: nop

    // 0x80069828: nop

    // 0x8006982C: nop

;}
RECOMP_FUNC void func_80069830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069830: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80069834: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80069838: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006983C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80069840: sltiu       $at, $s0, 0x14
    ctx->r1 = ctx->r16 < 0X14 ? 1 : 0;
    // 0x80069844: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80069848: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006984C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80069850: beq         $at, $zero, L_8006989C
    if (ctx->r1 == 0) {
        // 0x80069854: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_8006989C;
    }
    // 0x80069854: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80069858:
    // 0x80069858: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x8006985C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80069860: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x80069864: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80069868: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x8006986C: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    // 0x80069870: jal         0x8006952C
    // 0x80069874: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8006952C(rdram, ctx);
        goto after_0;
    // 0x80069874: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80069878: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8006987C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80069880: beq         $s2, $at, L_8006988C
    if (ctx->r18 == ctx->r1) {
        // 0x80069884: nop
    
            goto L_8006988C;
    }
    // 0x80069884: nop

    // 0x80069888: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8006988C:
    // 0x8006988C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80069890: sltiu       $at, $s0, 0x14
    ctx->r1 = ctx->r16 < 0X14 ? 1 : 0;
    // 0x80069894: bne         $at, $zero, L_80069858
    if (ctx->r1 != 0) {
        // 0x80069898: nop
    
            goto L_80069858;
    }
    // 0x80069898: nop

L_8006989C:
    // 0x8006989C: beq         $s1, $zero, L_800698C8
    if (ctx->r17 == 0) {
        // 0x800698A0: nop
    
            goto L_800698C8;
    }
    // 0x800698A0: nop

    // 0x800698A4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800698A8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800698AC: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x800698B0: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800698B4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800698B8: sb          $t9, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r25;
    // 0x800698BC: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800698C0: nop

    // 0x800698C4: sb          $t1, 0x2($t2)
    MEM_B(0X2, ctx->r10) = ctx->r9;
L_800698C8:
    // 0x800698C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800698CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800698D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800698D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800698D8: jr          $ra
    // 0x800698DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800698DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800698E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800698E0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800698E4: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x800698E8: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x800698EC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800698F0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800698F4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800698F8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800698FC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80069900: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80069904: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80069908: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006990C: lw          $t7, 0x3F0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X3F0);
    // 0x80069910: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80069914: bne         $t7, $at, L_80069958
    if (ctx->r15 != ctx->r1) {
        // 0x80069918: nop
    
            goto L_80069958;
    }
    // 0x80069918: nop

    // 0x8006991C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80069920: lw          $t8, -0x490($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X490);
    // 0x80069924: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80069928: lbu         $t9, 0x13($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X13);
    // 0x8006992C: nop

    // 0x80069930: bne         $t9, $at, L_80069958
    if (ctx->r25 != ctx->r1) {
        // 0x80069934: nop
    
            goto L_80069958;
    }
    // 0x80069934: nop

    // 0x80069938: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006993C: lw          $a0, -0x10F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X10F0);
    // 0x80069940: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80069944: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80069948: jal         0x800529A8
    // 0x8006994C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_800529A8(rdram, ctx);
        goto after_0;
    // 0x8006994C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_0:
    // 0x80069950: b           L_8006995C
    // 0x80069954: nop

        goto L_8006995C;
    // 0x80069954: nop

L_80069958:
    // 0x80069958: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_8006995C:
    // 0x8006995C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80069960: nop

    // 0x80069964: lw          $t1, 0x3F0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X3F0);
    // 0x80069968: nop

    // 0x8006996C: sltiu       $at, $t1, 0x4
    ctx->r1 = ctx->r9 < 0X4 ? 1 : 0;
    // 0x80069970: beq         $at, $zero, L_80069990
    if (ctx->r1 == 0) {
        // 0x80069974: sltiu       $at, $t1, 0x2
        ctx->r1 = ctx->r9 < 0X2 ? 1 : 0;
            goto L_80069990;
    }
    // 0x80069974: sltiu       $at, $t1, 0x2
    ctx->r1 = ctx->r9 < 0X2 ? 1 : 0;
    // 0x80069978: bne         $at, $zero, L_800699A4
    if (ctx->r1 != 0) {
        // 0x8006997C: nop
    
            goto L_800699A4;
    }
    // 0x8006997C: nop

    // 0x80069980: jal         0x80073030
    // 0x80069984: addiu       $a0, $t1, -0x1
    ctx->r4 = ADD32(ctx->r9, -0X1);
    func_80073030(rdram, ctx);
        goto after_1;
    // 0x80069984: addiu       $a0, $t1, -0x1
    ctx->r4 = ADD32(ctx->r9, -0X1);
    after_1:
    // 0x80069988: b           L_800699A4
    // 0x8006998C: nop

        goto L_800699A4;
    // 0x8006998C: nop

L_80069990:
    // 0x80069990: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x80069994: nop

    // 0x80069998: lw          $a0, 0x3F0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X3F0);
    // 0x8006999C: jal         0x80073030
    // 0x800699A0: nop

    func_80073030(rdram, ctx);
        goto after_2;
    // 0x800699A0: nop

    after_2:
L_800699A4:
    // 0x800699A4: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x800699A8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800699AC: sltiu       $at, $s1, 0x14
    ctx->r1 = ctx->r17 < 0X14 ? 1 : 0;
    // 0x800699B0: beq         $at, $zero, L_80069B4C
    if (ctx->r1 == 0) {
        // 0x800699B4: addiu       $s0, $s0, 0x3
        ctx->r16 = ADD32(ctx->r16, 0X3);
            goto L_80069B4C;
    }
    // 0x800699B4: addiu       $s0, $s0, 0x3
    ctx->r16 = ADD32(ctx->r16, 0X3);
L_800699B8:
    // 0x800699B8: sll         $t4, $s1, 2
    ctx->r12 = S32(ctx->r17 << 2);
    // 0x800699BC: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x800699C0: subu        $t4, $t4, $s1
    ctx->r12 = SUB32(ctx->r12, ctx->r17);
    // 0x800699C4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800699C8: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    // 0x800699CC: jal         0x80069668
    // 0x800699D0: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    func_80069668(rdram, ctx);
        goto after_3;
    // 0x800699D0: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    after_3:
    // 0x800699D4: lbu         $t5, 0x1($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1);
    // 0x800699D8: nop

    // 0x800699DC: beq         $t5, $zero, L_80069B3C
    if (ctx->r13 == 0) {
        // 0x800699E0: nop
    
            goto L_80069B3C;
    }
    // 0x800699E0: nop

    // 0x800699E4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800699E8: lw          $a0, -0x10F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X10F0);
    // 0x800699EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800699F0: jal         0x800529A8
    // 0x800699F4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_800529A8(rdram, ctx);
        goto after_4;
    // 0x800699F4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_4:
    // 0x800699F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800699FC: jal         0x8006AC2C
    // 0x80069A00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8006AC2C(rdram, ctx);
        goto after_5;
    // 0x80069A00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80069A04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80069A08: lw          $a0, -0x10F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X10F0);
    // 0x80069A0C: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80069A10: sll         $a1, $s5, 2
    ctx->r5 = S32(ctx->r21 << 2);
    // 0x80069A14: addu        $a1, $a1, $s5
    ctx->r5 = ADD32(ctx->r5, ctx->r21);
    // 0x80069A18: jal         0x800529A8
    // 0x80069A1C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_800529A8(rdram, ctx);
        goto after_6;
    // 0x80069A1C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_6:
    // 0x80069A20: slt         $s2, $zero, $s5
    ctx->r18 = SIGNED(0) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80069A24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80069A28: jal         0x8006AC2C
    // 0x80069A2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8006AC2C(rdram, ctx);
        goto after_7;
    // 0x80069A2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x80069A30: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80069A34: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80069A38: lw          $a0, -0x10F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X10F0);
    // 0x80069A3C: sll         $a1, $s5, 2
    ctx->r5 = S32(ctx->r21 << 2);
    // 0x80069A40: addu        $a1, $a1, $s5
    ctx->r5 = ADD32(ctx->r5, ctx->r21);
    // 0x80069A44: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x80069A48: jal         0x800529A8
    // 0x80069A4C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_800529A8(rdram, ctx);
        goto after_8;
    // 0x80069A4C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_8:
    // 0x80069A50: bne         $s2, $zero, L_80069A60
    if (ctx->r18 != 0) {
        // 0x80069A54: slt         $s3, $zero, $s5
        ctx->r19 = SIGNED(0) < SIGNED(ctx->r21) ? 1 : 0;
            goto L_80069A60;
    }
    // 0x80069A54: slt         $s3, $zero, $s5
    ctx->r19 = SIGNED(0) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80069A58: beq         $s3, $zero, L_80069A7C
    if (ctx->r19 == 0) {
        // 0x80069A5C: nop
    
            goto L_80069A7C;
    }
    // 0x80069A5C: nop

L_80069A60:
    // 0x80069A60: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80069A64: lbu         $t6, 0x540($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X540);
    // 0x80069A68: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80069A6C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80069A70: sb          $t7, 0x540($at)
    MEM_B(0X540, ctx->r1) = ctx->r15;
    // 0x80069A74: jal         0x80073030
    // 0x80069A78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80073030(rdram, ctx);
        goto after_9;
    // 0x80069A78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
L_80069A7C:
    // 0x80069A7C: beq         $s3, $zero, L_80069AB0
    if (ctx->r19 == 0) {
        // 0x80069A80: nop
    
            goto L_80069AB0;
    }
    // 0x80069A80: nop

    // 0x80069A84: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x80069A88: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80069A8C: subu        $t9, $t9, $s1
    ctx->r25 = SUB32(ctx->r25, ctx->r17);
    // 0x80069A90: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80069A94: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x80069A98: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    // 0x80069A9C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80069AA0: jal         0x800696F4
    // 0x80069AA4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800696F4(rdram, ctx);
        goto after_10;
    // 0x80069AA4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_10:
    // 0x80069AA8: b           L_80069B3C
    // 0x80069AAC: nop

        goto L_80069B3C;
    // 0x80069AAC: nop

L_80069AB0:
    // 0x80069AB0: beq         $s2, $zero, L_80069AE4
    if (ctx->r18 == 0) {
        // 0x80069AB4: nop
    
            goto L_80069AE4;
    }
    // 0x80069AB4: nop

    // 0x80069AB8: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x80069ABC: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80069AC0: subu        $t1, $t1, $s1
    ctx->r9 = SUB32(ctx->r9, ctx->r17);
    // 0x80069AC4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80069AC8: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x80069ACC: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    // 0x80069AD0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80069AD4: jal         0x800696F4
    // 0x80069AD8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_800696F4(rdram, ctx);
        goto after_11;
    // 0x80069AD8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_11:
    // 0x80069ADC: b           L_80069B3C
    // 0x80069AE0: nop

        goto L_80069B3C;
    // 0x80069AE0: nop

L_80069AE4:
    // 0x80069AE4: beq         $s4, $zero, L_80069B18
    if (ctx->r20 == 0) {
        // 0x80069AE8: nop
    
            goto L_80069B18;
    }
    // 0x80069AE8: nop

    // 0x80069AEC: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x80069AF0: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x80069AF4: subu        $t3, $t3, $s1
    ctx->r11 = SUB32(ctx->r11, ctx->r17);
    // 0x80069AF8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80069AFC: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    // 0x80069B00: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    // 0x80069B04: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80069B08: jal         0x800696F4
    // 0x80069B0C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800696F4(rdram, ctx);
        goto after_12;
    // 0x80069B0C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_12:
    // 0x80069B10: b           L_80069B3C
    // 0x80069B14: nop

        goto L_80069B3C;
    // 0x80069B14: nop

L_80069B18:
    // 0x80069B18: sll         $t5, $s1, 2
    ctx->r13 = S32(ctx->r17 << 2);
    // 0x80069B1C: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x80069B20: subu        $t5, $t5, $s1
    ctx->r13 = SUB32(ctx->r13, ctx->r17);
    // 0x80069B24: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80069B28: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x80069B2C: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    // 0x80069B30: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80069B34: jal         0x800696F4
    // 0x80069B38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800696F4(rdram, ctx);
        goto after_13;
    // 0x80069B38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
L_80069B3C:
    // 0x80069B3C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80069B40: sltiu       $at, $s1, 0x14
    ctx->r1 = ctx->r17 < 0X14 ? 1 : 0;
    // 0x80069B44: bne         $at, $zero, L_800699B8
    if (ctx->r1 != 0) {
        // 0x80069B48: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_800699B8;
    }
    // 0x80069B48: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_80069B4C:
    // 0x80069B4C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80069B50: lbu         $t6, 0x540($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X540);
    // 0x80069B54: nop

    // 0x80069B58: beq         $t6, $zero, L_80069CA0
    if (ctx->r14 == 0) {
        // 0x80069B5C: nop
    
            goto L_80069CA0;
    }
    // 0x80069B5C: nop

    // 0x80069B60: or          $s6, $t6, $zero
    ctx->r22 = ctx->r14 | 0;
    // 0x80069B64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80069B68: beq         $s6, $at, L_80069B90
    if (ctx->r22 == ctx->r1) {
        // 0x80069B6C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80069B90;
    }
    // 0x80069B6C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80069B70: beq         $s6, $at, L_80069BB0
    if (ctx->r22 == ctx->r1) {
        // 0x80069B74: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80069BB0;
    }
    // 0x80069B74: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80069B78: beq         $s6, $at, L_80069BE8
    if (ctx->r22 == ctx->r1) {
        // 0x80069B7C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80069BE8;
    }
    // 0x80069B7C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80069B80: beq         $s6, $at, L_80069C38
    if (ctx->r22 == ctx->r1) {
        // 0x80069B84: nop
    
            goto L_80069C38;
    }
    // 0x80069B84: nop

    // 0x80069B88: b           L_80069C98
    // 0x80069B8C: nop

        goto L_80069C98;
    // 0x80069B8C: nop

L_80069B90:
    // 0x80069B90: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80069B94: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80069B98: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x80069B9C: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x80069BA0: jal         0x8008A5C8
    // 0x80069BA4: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8008A5C8(rdram, ctx);
        goto after_14;
    // 0x80069BA4: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_14:
    // 0x80069BA8: b           L_80069C98
    // 0x80069BAC: nop

        goto L_80069C98;
    // 0x80069BAC: nop

L_80069BB0:
    // 0x80069BB0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80069BB4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80069BB8: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x80069BBC: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x80069BC0: jal         0x8008A5C8
    // 0x80069BC4: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8008A5C8(rdram, ctx);
        goto after_15;
    // 0x80069BC4: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_15:
    // 0x80069BC8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80069BCC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80069BD0: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x80069BD4: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x80069BD8: jal         0x8008A5C8
    // 0x80069BDC: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_8008A5C8(rdram, ctx);
        goto after_16;
    // 0x80069BDC: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_16:
    // 0x80069BE0: b           L_80069C98
    // 0x80069BE4: nop

        goto L_80069C98;
    // 0x80069BE4: nop

L_80069BE8:
    // 0x80069BE8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80069BEC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80069BF0: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x80069BF4: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x80069BF8: jal         0x8008A5C8
    // 0x80069BFC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8008A5C8(rdram, ctx);
        goto after_17;
    // 0x80069BFC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_17:
    // 0x80069C00: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80069C04: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80069C08: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x80069C0C: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x80069C10: jal         0x8008A5C8
    // 0x80069C14: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_8008A5C8(rdram, ctx);
        goto after_18;
    // 0x80069C14: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_18:
    // 0x80069C18: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80069C1C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80069C20: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x80069C24: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x80069C28: jal         0x8008A5C8
    // 0x80069C2C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_8008A5C8(rdram, ctx);
        goto after_19;
    // 0x80069C2C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_19:
    // 0x80069C30: b           L_80069C98
    // 0x80069C34: nop

        goto L_80069C98;
    // 0x80069C34: nop

L_80069C38:
    // 0x80069C38: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80069C3C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80069C40: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x80069C44: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x80069C48: jal         0x8008A5C8
    // 0x80069C4C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8008A5C8(rdram, ctx);
        goto after_20;
    // 0x80069C4C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_20:
    // 0x80069C50: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80069C54: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80069C58: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x80069C5C: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x80069C60: jal         0x8008A5C8
    // 0x80069C64: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_8008A5C8(rdram, ctx);
        goto after_21;
    // 0x80069C64: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_21:
    // 0x80069C68: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80069C6C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80069C70: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x80069C74: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x80069C78: jal         0x8008A5C8
    // 0x80069C7C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_8008A5C8(rdram, ctx);
        goto after_22;
    // 0x80069C7C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_22:
    // 0x80069C80: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80069C84: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80069C88: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x80069C8C: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x80069C90: jal         0x8008A5C8
    // 0x80069C94: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_8008A5C8(rdram, ctx);
        goto after_23;
    // 0x80069C94: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_23:
L_80069C98:
    // 0x80069C98: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80069C9C: sb          $zero, 0x540($at)
    MEM_B(0X540, ctx->r1) = 0;
L_80069CA0:
    // 0x80069CA0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80069CA4: lbu         $a0, -0x10DF($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X10DF);
    // 0x80069CA8: jal         0x80072300
    // 0x80069CAC: nop

    func_80072300(rdram, ctx);
        goto after_24;
    // 0x80069CAC: nop

    after_24:
    // 0x80069CB0: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80069CB4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80069CB8: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x80069CBC: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80069CC0: nop

    // 0x80069CC4: sb          $zero, 0x2($t9)
    MEM_B(0X2, ctx->r25) = 0;
    // 0x80069CC8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80069CCC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80069CD0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80069CD4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80069CD8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80069CDC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80069CE0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80069CE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80069CE8: jr          $ra
    // 0x80069CEC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80069CEC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80069CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069CF0: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80069CF4: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x80069CF8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80069CFC: lw          $t6, -0x430($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X430);
    // 0x80069D00: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80069D04: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80069D08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80069D0C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80069D10: slti        $at, $a2, 0xA
    ctx->r1 = SIGNED(ctx->r6) < 0XA ? 1 : 0;
    // 0x80069D14: addu        $a3, $t6, $t8
    ctx->r7 = ADD32(ctx->r14, ctx->r24);
    // 0x80069D18: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x80069D1C: beq         $at, $zero, L_80069D54
    if (ctx->r1 == 0) {
        // 0x80069D20: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_80069D54;
    }
    // 0x80069D20: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
L_80069D24:
    // 0x80069D24: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x80069D28: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80069D2C: lbu         $t0, 0x1($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1);
    // 0x80069D30: nop

    // 0x80069D34: bne         $t0, $at, L_80069D44
    if (ctx->r8 != ctx->r1) {
        // 0x80069D38: nop
    
            goto L_80069D44;
    }
    // 0x80069D38: nop

    // 0x80069D3C: b           L_80069D58
    // 0x80069D40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80069D58;
    // 0x80069D40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80069D44:
    // 0x80069D44: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80069D48: slti        $at, $a2, 0xA
    ctx->r1 = SIGNED(ctx->r6) < 0XA ? 1 : 0;
    // 0x80069D4C: bne         $at, $zero, L_80069D24
    if (ctx->r1 != 0) {
        // 0x80069D50: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_80069D24;
    }
    // 0x80069D50: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
L_80069D54:
    // 0x80069D54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80069D58:
    // 0x80069D58: jr          $ra
    // 0x80069D5C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80069D5C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80069D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069D60: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80069D64: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80069D68: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80069D6C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80069D70: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x80069D74: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80069D78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80069D7C: slti        $at, $s2, 0x14
    ctx->r1 = SIGNED(ctx->r18) < 0X14 ? 1 : 0;
    // 0x80069D80: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80069D84: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80069D88: beq         $at, $zero, L_80069DF0
    if (ctx->r1 == 0) {
        // 0x80069D8C: addiu       $s1, $s1, 0x3
        ctx->r17 = ADD32(ctx->r17, 0X3);
            goto L_80069DF0;
    }
    // 0x80069D8C: addiu       $s1, $s1, 0x3
    ctx->r17 = ADD32(ctx->r17, 0X3);
L_80069D90:
    // 0x80069D90: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
    // 0x80069D94: sb          $zero, 0x1($s1)
    MEM_B(0X1, ctx->r17) = 0;
    // 0x80069D98: beq         $t6, $zero, L_80069DE0
    if (ctx->r14 == 0) {
        // 0x80069D9C: nop
    
            goto L_80069DE0;
    }
    // 0x80069D9C: nop

    // 0x80069DA0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80069DA4: nop

    // 0x80069DA8: lbu         $t8, 0x3F4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X3F4);
    // 0x80069DAC: nop

    // 0x80069DB0: slt         $at, $t8, $s2
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80069DB4: bne         $at, $zero, L_80069DE0
    if (ctx->r1 != 0) {
        // 0x80069DB8: nop
    
            goto L_80069DE0;
    }
    // 0x80069DB8: nop

    // 0x80069DBC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80069DC0: jal         0x80069CF0
    // 0x80069DC4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80069CF0(rdram, ctx);
        goto after_0;
    // 0x80069DC4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x80069DC8: beq         $v0, $zero, L_80069DDC
    if (ctx->r2 == 0) {
        // 0x80069DCC: nop
    
            goto L_80069DDC;
    }
    // 0x80069DCC: nop

    // 0x80069DD0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80069DD4: sb          $t9, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r25;
    // 0x80069DD8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80069DDC:
    // 0x80069DDC: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_80069DE0:
    // 0x80069DE0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80069DE4: slti        $at, $s2, 0x14
    ctx->r1 = SIGNED(ctx->r18) < 0X14 ? 1 : 0;
    // 0x80069DE8: bne         $at, $zero, L_80069D90
    if (ctx->r1 != 0) {
        // 0x80069DEC: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80069D90;
    }
    // 0x80069DEC: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_80069DF0:
    // 0x80069DF0: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80069DF4: nop

    // 0x80069DF8: sw          $s0, 0x3F0($t0)
    MEM_W(0X3F0, ctx->r8) = ctx->r16;
    // 0x80069DFC: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80069E00: nop

    // 0x80069E04: lw          $t2, 0x3EC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X3EC);
    // 0x80069E08: nop

    // 0x80069E0C: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x80069E10: sw          $t3, 0x3EC($t1)
    MEM_W(0X3EC, ctx->r9) = ctx->r11;
    // 0x80069E14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80069E18: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80069E1C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80069E20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80069E24: jr          $ra
    // 0x80069E28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80069E28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80069E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069E2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80069E30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80069E34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80069E38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80069E3C: jal         0x80069D60
    // 0x80069E40: nop

    func_80069D60(rdram, ctx);
        goto after_0;
    // 0x80069E40: nop

    after_0:
    // 0x80069E44: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80069E48: nop

    // 0x80069E4C: lw          $t7, 0x3F0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X3F0);
    // 0x80069E50: nop

    // 0x80069E54: bne         $t7, $zero, L_80069E68
    if (ctx->r15 != 0) {
        // 0x80069E58: nop
    
            goto L_80069E68;
    }
    // 0x80069E58: nop

    // 0x80069E5C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80069E60: b           L_80069E74
    // 0x80069E64: sb          $t8, 0x1($t6)
    MEM_B(0X1, ctx->r14) = ctx->r24;
        goto L_80069E74;
    // 0x80069E64: sb          $t8, 0x1($t6)
    MEM_B(0X1, ctx->r14) = ctx->r24;
L_80069E68:
    // 0x80069E68: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80069E6C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80069E70: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
L_80069E74:
    // 0x80069E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80069E78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80069E7C: jr          $ra
    // 0x80069E80: nop

    return;
    // 0x80069E80: nop

;}
RECOMP_FUNC void func_80069E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069E84: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80069E88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80069E8C: lw          $a0, -0x470($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X470);
    // 0x80069E90: slti        $at, $a1, 0x14
    ctx->r1 = SIGNED(ctx->r5) < 0X14 ? 1 : 0;
    // 0x80069E94: beq         $at, $zero, L_80069EB8
    if (ctx->r1 == 0) {
        // 0x80069E98: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_80069EB8;
    }
    // 0x80069E98: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
L_80069E9C:
    // 0x80069E9C: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x80069EA0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80069EA4: slti        $at, $a1, 0x14
    ctx->r1 = SIGNED(ctx->r5) < 0X14 ? 1 : 0;
    // 0x80069EA8: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80069EAC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80069EB0: bne         $at, $zero, L_80069E9C
    if (ctx->r1 != 0) {
        // 0x80069EB4: sb          $t6, 0x3($t8)
        MEM_B(0X3, ctx->r24) = ctx->r14;
            goto L_80069E9C;
    }
    // 0x80069EB4: sb          $t6, 0x3($t8)
    MEM_B(0X3, ctx->r24) = ctx->r14;
L_80069EB8:
    // 0x80069EB8: jr          $ra
    // 0x80069EBC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80069EBC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80069EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069EC0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80069EC4: lw          $a1, -0x490($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X490);
    // 0x80069EC8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80069ECC: lw          $a0, -0x470($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X470);
    // 0x80069ED0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80069ED4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80069ED8: blez        $a2, L_80069F08
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80069EDC: addiu       $a1, $a1, 0x15
        ctx->r5 = ADD32(ctx->r5, 0X15);
            goto L_80069F08;
    }
    // 0x80069EDC: addiu       $a1, $a1, 0x15
    ctx->r5 = ADD32(ctx->r5, 0X15);
L_80069EE0:
    // 0x80069EE0: lb          $t8, 0x1($a1)
    ctx->r24 = MEM_B(ctx->r5, 0X1);
    // 0x80069EE4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80069EE8: lw          $t7, -0x470($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X470);
    // 0x80069EEC: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80069EF0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80069EF4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80069EF8: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80069EFC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80069F00: bgtz        $a2, L_80069EE0
    if (SIGNED(ctx->r6) > 0) {
        // 0x80069F04: sb          $t6, 0x3($t0)
        MEM_B(0X3, ctx->r8) = ctx->r14;
            goto L_80069EE0;
    }
    // 0x80069F04: sb          $t6, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r14;
L_80069F08:
    // 0x80069F08: jr          $ra
    // 0x80069F0C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80069F0C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80069F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069F10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80069F14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80069F18: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x80069F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80069F20: slti        $at, $t6, 0x14
    ctx->r1 = SIGNED(ctx->r14) < 0X14 ? 1 : 0;
    // 0x80069F24: bne         $at, $zero, L_80069F44
    if (ctx->r1 != 0) {
        // 0x80069F28: nop
    
            goto L_80069F44;
    }
    // 0x80069F28: nop

    // 0x80069F2C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80069F30: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80069F34: addiu       $a1, $a1, -0x29A4
    ctx->r5 = ADD32(ctx->r5, -0X29A4);
    // 0x80069F38: addiu       $a0, $a0, -0x29C0
    ctx->r4 = ADD32(ctx->r4, -0X29C0);
    // 0x80069F3C: jal         0x8004A5A0
    // 0x80069F40: addiu       $a2, $zero, 0x129
    ctx->r6 = ADD32(0, 0X129);
    func_8004A5A0(rdram, ctx);
        goto after_0;
    // 0x80069F40: addiu       $a2, $zero, 0x129
    ctx->r6 = ADD32(0, 0X129);
    after_0:
L_80069F44:
    // 0x80069F44: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80069F48: lw          $t8, -0x470($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X470);
    // 0x80069F4C: lbu         $t7, 0x1B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1B);
    // 0x80069F50: nop

    // 0x80069F54: sb          $t7, 0x3F4($t8)
    MEM_B(0X3F4, ctx->r24) = ctx->r15;
    // 0x80069F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80069F5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80069F60: jr          $ra
    // 0x80069F64: nop

    return;
    // 0x80069F64: nop

;}
RECOMP_FUNC void func_80069F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069F68: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80069F6C: lw          $a0, -0x470($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X470);
    // 0x80069F70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80069F74: addiu       $t6, $zero, 0x13
    ctx->r14 = ADD32(0, 0X13);
    // 0x80069F78: slti        $at, $a1, 0x14
    ctx->r1 = SIGNED(ctx->r5) < 0X14 ? 1 : 0;
    // 0x80069F7C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80069F80: sb          $t6, 0x3F4($a0)
    MEM_B(0X3F4, ctx->r4) = ctx->r14;
    // 0x80069F84: sw          $zero, 0x3EC($a0)
    MEM_W(0X3EC, ctx->r4) = 0;
    // 0x80069F88: sw          $zero, 0x3F0($a0)
    MEM_W(0X3F0, ctx->r4) = 0;
    // 0x80069F8C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80069F90: beq         $at, $zero, L_80069FB0
    if (ctx->r1 == 0) {
        // 0x80069F94: sb          $zero, 0x1($a0)
        MEM_B(0X1, ctx->r4) = 0;
            goto L_80069FB0;
    }
    // 0x80069F94: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
L_80069F98:
    // 0x80069F98: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x80069F9C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80069FA0: slti        $at, $a1, 0x14
    ctx->r1 = SIGNED(ctx->r5) < 0X14 ? 1 : 0;
    // 0x80069FA4: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80069FA8: bne         $at, $zero, L_80069F98
    if (ctx->r1 != 0) {
        // 0x80069FAC: sb          $zero, 0x3($t8)
        MEM_B(0X3, ctx->r24) = 0;
            goto L_80069F98;
    }
    // 0x80069FAC: sb          $zero, 0x3($t8)
    MEM_B(0X3, ctx->r24) = 0;
L_80069FB0:
    // 0x80069FB0: jr          $ra
    // 0x80069FB4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80069FB4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80069FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069FB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80069FBC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80069FC0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80069FC4: lw          $s0, -0x470($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X470);
    // 0x80069FC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80069FCC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80069FD0: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
L_80069FD4:
    // 0x80069FD4: lbu         $s1, 0x0($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X0);
    // 0x80069FD8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80069FDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80069FE0: beq         $s1, $at, L_8006A004
    if (ctx->r17 == ctx->r1) {
        // 0x80069FE4: sb          $t6, 0x2($s0)
        MEM_B(0X2, ctx->r16) = ctx->r14;
            goto L_8006A004;
    }
    // 0x80069FE4: sb          $t6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r14;
    // 0x80069FE8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80069FEC: beq         $s1, $at, L_8006A014
    if (ctx->r17 == ctx->r1) {
        // 0x80069FF0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8006A014;
    }
    // 0x80069FF0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80069FF4: beq         $s1, $at, L_8006A024
    if (ctx->r17 == ctx->r1) {
        // 0x80069FF8: nop
    
            goto L_8006A024;
    }
    // 0x80069FF8: nop

    // 0x80069FFC: b           L_8006A02C
    // 0x8006A000: nop

        goto L_8006A02C;
    // 0x8006A000: nop

L_8006A004:
    // 0x8006A004: jal         0x80069E2C
    // 0x8006A008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80069E2C(rdram, ctx);
        goto after_0;
    // 0x8006A008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8006A00C: b           L_8006A02C
    // 0x8006A010: nop

        goto L_8006A02C;
    // 0x8006A010: nop

L_8006A014:
    // 0x8006A014: jal         0x800698E0
    // 0x8006A018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800698E0(rdram, ctx);
        goto after_1;
    // 0x8006A018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8006A01C: b           L_8006A02C
    // 0x8006A020: nop

        goto L_8006A02C;
    // 0x8006A020: nop

L_8006A024:
    // 0x8006A024: jal         0x80069830
    // 0x8006A028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80069830(rdram, ctx);
        goto after_2;
    // 0x8006A028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_8006A02C:
    // 0x8006A02C: lbu         $t7, 0x2($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X2);
    // 0x8006A030: nop

    // 0x8006A034: beq         $t7, $zero, L_80069FD4
    if (ctx->r15 == 0) {
        // 0x8006A038: nop
    
            goto L_80069FD4;
    }
    // 0x8006A038: nop

    // 0x8006A03C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006A040: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006A044: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006A048: jr          $ra
    // 0x8006A04C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006A04C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006A050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A050: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8006A054: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006A058: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8006A05C: lw          $s0, -0x460($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X460);
    // 0x8006A060: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8006A064: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x8006A068: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x8006A06C: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x8006A070: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8006A074: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8006A078: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8006A07C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8006A080: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006A084: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006A088: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006A08C: lbu         $t6, 0x4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4);
    // 0x8006A090: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8006A094: beq         $t6, $zero, L_8006A0C4
    if (ctx->r14 == 0) {
        // 0x8006A098: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8006A0C4;
    }
    // 0x8006A098: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006A09C: slti        $at, $s1, 0x2C
    ctx->r1 = SIGNED(ctx->r17) < 0X2C ? 1 : 0;
    // 0x8006A0A0: beq         $at, $zero, L_8006A0C4
    if (ctx->r1 == 0) {
        // 0x8006A0A4: nop
    
            goto L_8006A0C4;
    }
    // 0x8006A0A4: nop

L_8006A0A8:
    // 0x8006A0A8: lbu         $t7, 0x12($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X12);
    // 0x8006A0AC: addiu       $s0, $s0, 0x12
    ctx->r16 = ADD32(ctx->r16, 0X12);
    // 0x8006A0B0: beq         $t7, $zero, L_8006A0C4
    if (ctx->r15 == 0) {
        // 0x8006A0B4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8006A0C4;
    }
    // 0x8006A0B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006A0B8: slti        $at, $s1, 0x2C
    ctx->r1 = SIGNED(ctx->r17) < 0X2C ? 1 : 0;
    // 0x8006A0BC: bne         $at, $zero, L_8006A0A8
    if (ctx->r1 != 0) {
        // 0x8006A0C0: nop
    
            goto L_8006A0A8;
    }
    // 0x8006A0C0: nop

L_8006A0C4:
    // 0x8006A0C4: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x8006A0C8: bne         $s1, $at, L_8006A0E4
    if (ctx->r17 != ctx->r1) {
        // 0x8006A0CC: nop
    
            goto L_8006A0E4;
    }
    // 0x8006A0CC: nop

    // 0x8006A0D0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006A0D4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8006A0D8: addiu       $a1, $a1, -0x2980
    ctx->r5 = ADD32(ctx->r5, -0X2980);
    // 0x8006A0DC: jal         0x80083560
    // 0x8006A0E0: addiu       $a0, $a0, -0x2990
    ctx->r4 = ADD32(ctx->r4, -0X2990);
    Fault_Assert(rdram, ctx);
        goto after_0;
    // 0x8006A0E0: addiu       $a0, $a0, -0x2990
    ctx->r4 = ADD32(ctx->r4, -0X2990);
    after_0:
L_8006A0E4:
    // 0x8006A0E4: lbu         $t8, 0x93($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X93);
    // 0x8006A0E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006A0EC: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
    // 0x8006A0F0: lbu         $t9, 0x93($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X93);
    // 0x8006A0F4: nop

    // 0x8006A0F8: beq         $t9, $at, L_8006A134
    if (ctx->r25 == ctx->r1) {
        // 0x8006A0FC: sw          $t9, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r25;
            goto L_8006A134;
    }
    // 0x8006A0FC: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8006A100: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006A104: bne         $t9, $at, L_8006A158
    if (ctx->r25 != ctx->r1) {
        // 0x8006A108: nop
    
            goto L_8006A158;
    }
    // 0x8006A108: nop

    // 0x8006A10C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8006A110: addiu       $t1, $t1, -0x10
    ctx->r9 = ADD32(ctx->r9, -0X10);
    // 0x8006A114: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x8006A118: addiu       $t0, $sp, 0x78
    ctx->r8 = ADD32(ctx->r29, 0X78);
    // 0x8006A11C: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x8006A120: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x8006A124: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x8006A128: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x8006A12C: b           L_8006A158
    // 0x8006A130: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
        goto L_8006A158;
    // 0x8006A130: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
L_8006A134:
    // 0x8006A134: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8006A138: addiu       $t5, $t5, -0x1C
    ctx->r13 = ADD32(ctx->r13, -0X1C);
    // 0x8006A13C: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x8006A140: addiu       $t4, $sp, 0x78
    ctx->r12 = ADD32(ctx->r29, 0X78);
    // 0x8006A144: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x8006A148: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x8006A14C: lw          $t7, 0x4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4);
    // 0x8006A150: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x8006A154: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
L_8006A158:
    // 0x8006A158: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x8006A15C: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x8006A160: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x8006A164: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x8006A168: addiu       $t3, $t1, -0x80
    ctx->r11 = ADD32(ctx->r9, -0X80);
    // 0x8006A16C: addiu       $t2, $t9, -0x80
    ctx->r10 = ADD32(ctx->r25, -0X80);
    // 0x8006A170: sh          $t2, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r10;
    // 0x8006A174: sh          $t3, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r11;
    // 0x8006A178: sh          $zero, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = 0;
    // 0x8006A17C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x8006A180: jal         0x80071100
    // 0x8006A184: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    func_80071100(rdram, ctx);
        goto after_1;
    // 0x8006A184: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_1:
    // 0x8006A188: lwl         $t6, 0x70($sp)
    ctx->r14 = do_lwl(rdram, ctx->r14, ctx->r29, 0X70);
    // 0x8006A18C: lwr         $t6, 0x73($sp)
    ctx->r14 = do_lwr(rdram, ctx->r14, ctx->r29, 0X73);
    // 0x8006A190: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8006A194: lw          $t4, -0x3F0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3F0);
    // 0x8006A198: swl         $t6, 0x4($sp)
    do_swl(rdram, 0X4, ctx->r29, ctx->r14);
    // 0x8006A19C: swr         $t6, 0x7($sp)
    do_swr(rdram, 0X7, ctx->r29, ctx->r14);
    // 0x8006A1A0: lhu         $a2, 0x2($t4)
    ctx->r6 = MEM_HU(ctx->r12, 0X2);
    // 0x8006A1A4: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8006A1A8: sra         $t5, $a2, 8
    ctx->r13 = S32(SIGNED(ctx->r6) >> 8);
    // 0x8006A1AC: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x8006A1B0: jal         0x8006B050
    // 0x8006A1B4: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    func_8006B050(rdram, ctx);
        goto after_2;
    // 0x8006A1B4: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    after_2:
    // 0x8006A1B8: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x8006A1BC: lbu         $s4, 0x2($s0)
    ctx->r20 = MEM_BU(ctx->r16, 0X2);
    // 0x8006A1C0: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x8006A1C4: addiu       $t8, $t7, 0x4
    ctx->r24 = ADD32(ctx->r15, 0X4);
    // 0x8006A1C8: slt         $at, $s3, $t8
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8006A1CC: beq         $at, $zero, L_8006A284
    if (ctx->r1 == 0) {
        // 0x8006A1D0: nop
    
            goto L_8006A284;
    }
    // 0x8006A1D0: nop

L_8006A1D4:
    // 0x8006A1D4: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x8006A1D8: nop

    // 0x8006A1DC: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
    // 0x8006A1E0: addiu       $t2, $t9, 0x4
    ctx->r10 = ADD32(ctx->r25, 0X4);
    // 0x8006A1E4: slt         $at, $s2, $t2
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8006A1E8: beq         $at, $zero, L_8006A26C
    if (ctx->r1 == 0) {
        // 0x8006A1EC: nop
    
            goto L_8006A26C;
    }
    // 0x8006A1EC: nop

L_8006A1F0:
    // 0x8006A1F0: sll         $t1, $s3, 2
    ctx->r9 = S32(ctx->r19 << 2);
    // 0x8006A1F4: addu        $t1, $t1, $s3
    ctx->r9 = ADD32(ctx->r9, ctx->r19);
    // 0x8006A1F8: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x8006A1FC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8006A200: lw          $t0, -0x430($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X430);
    // 0x8006A204: addu        $t3, $s2, $t1
    ctx->r11 = ADD32(ctx->r18, ctx->r9);
    // 0x8006A208: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x8006A20C: addu        $t4, $t0, $t6
    ctx->r12 = ADD32(ctx->r8, ctx->r14);
    // 0x8006A210: lw          $s5, 0x4($t4)
    ctx->r21 = MEM_W(ctx->r12, 0X4);
    // 0x8006A214: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8006A218: lw          $t5, 0xC($s5)
    ctx->r13 = MEM_W(ctx->r21, 0XC);
    // 0x8006A21C: sb          $s4, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r20;
    // 0x8006A220: lh          $t7, 0x48($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X48);
    // 0x8006A224: lw          $t1, 0xC($s5)
    ctx->r9 = MEM_W(ctx->r21, 0XC);
    // 0x8006A228: subu        $t9, $t8, $t7
    ctx->r25 = SUB32(ctx->r24, ctx->r15);
    // 0x8006A22C: bgez        $t9, L_8006A23C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8006A230: sra         $t2, $t9, 4
        ctx->r10 = S32(SIGNED(ctx->r25) >> 4);
            goto L_8006A23C;
    }
    // 0x8006A230: sra         $t2, $t9, 4
    ctx->r10 = S32(SIGNED(ctx->r25) >> 4);
    // 0x8006A234: addiu       $at, $t9, 0xF
    ctx->r1 = ADD32(ctx->r25, 0XF);
    // 0x8006A238: sra         $t2, $at, 4
    ctx->r10 = S32(SIGNED(ctx->r1) >> 4);
L_8006A23C:
    // 0x8006A23C: sh          $t2, 0x4A($t1)
    MEM_H(0X4A, ctx->r9) = ctx->r10;
    // 0x8006A240: lw          $a0, 0xC($s5)
    ctx->r4 = MEM_W(ctx->r21, 0XC);
    // 0x8006A244: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x8006A248: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8006A24C: jal         0x80070860
    // 0x8006A250: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_80070860(rdram, ctx);
        goto after_3;
    // 0x8006A250: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_3:
    // 0x8006A254: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x8006A258: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8006A25C: addiu       $t0, $t3, 0x4
    ctx->r8 = ADD32(ctx->r11, 0X4);
    // 0x8006A260: slt         $at, $s2, $t0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8006A264: bne         $at, $zero, L_8006A1F0
    if (ctx->r1 != 0) {
        // 0x8006A268: nop
    
            goto L_8006A1F0;
    }
    // 0x8006A268: nop

L_8006A26C:
    // 0x8006A26C: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x8006A270: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8006A274: addiu       $t4, $t6, 0x4
    ctx->r12 = ADD32(ctx->r14, 0X4);
    // 0x8006A278: slt         $at, $s3, $t4
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8006A27C: bne         $at, $zero, L_8006A1D4
    if (ctx->r1 != 0) {
        // 0x8006A280: nop
    
            goto L_8006A1D4;
    }
    // 0x8006A280: nop

L_8006A284:
    // 0x8006A284: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x8006A288: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x8006A28C: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8006A290: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8006A294: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x8006A298: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8006A29C: lw          $t1, -0x430($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X430);
    // 0x8006A2A0: addu        $t9, $t5, $t7
    ctx->r25 = ADD32(ctx->r13, ctx->r15);
    // 0x8006A2A4: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x8006A2A8: addu        $s7, $t1, $t2
    ctx->r23 = ADD32(ctx->r9, ctx->r10);
    // 0x8006A2AC: lw          $s6, 0x4($s7)
    ctx->r22 = MEM_W(ctx->r23, 0X4);
    // 0x8006A2B0: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8006A2B4: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x8006A2B8: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
L_8006A2BC:
    // 0x8006A2BC: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8006A2C0: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
L_8006A2C4:
    // 0x8006A2C4: lw          $a1, 0x0($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X0);
    // 0x8006A2C8: jal         0x8006D450
    // 0x8006A2CC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_8006D450(rdram, ctx);
        goto after_4;
    // 0x8006A2CC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_4:
    // 0x8006A2D0: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x8006A2D4: nop

    // 0x8006A2D8: lb          $t4, 0x9($t6)
    ctx->r12 = MEM_B(ctx->r14, 0X9);
    // 0x8006A2DC: nop

    // 0x8006A2E0: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x8006A2E4: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x8006A2E8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x8006A2EC: lb          $t5, 0xA($t8)
    ctx->r13 = MEM_B(ctx->r24, 0XA);
    // 0x8006A2F0: nop

    // 0x8006A2F4: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    // 0x8006A2F8: jal         0x8006E64C
    // 0x8006A2FC: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_8006E64C(rdram, ctx);
        goto after_5;
    // 0x8006A2FC: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_5:
    // 0x8006A300: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8006A304: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x8006A308: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8006A30C: bgtz        $t9, L_8006A2C4
    if (SIGNED(ctx->r25) > 0) {
        // 0x8006A310: sw          $t9, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r25;
            goto L_8006A2C4;
    }
    // 0x8006A310: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x8006A314: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x8006A318: addiu       $s7, $s7, 0x18
    ctx->r23 = ADD32(ctx->r23, 0X18);
    // 0x8006A31C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8006A320: bgtz        $t2, L_8006A2BC
    if (SIGNED(ctx->r10) > 0) {
        // 0x8006A324: sw          $t2, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r10;
            goto L_8006A2BC;
    }
    // 0x8006A324: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x8006A328: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x8006A32C: sb          $t3, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r11;
    // 0x8006A330: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8006A334: lw          $t0, -0x460($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X460);
    // 0x8006A338: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006A33C: lbu         $t6, 0x3($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X3);
    // 0x8006A340: nop

    // 0x8006A344: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x8006A348: sb          $t8, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r24;
    // 0x8006A34C: lbu         $t4, 0x93($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X93);
    // 0x8006A350: nop

    // 0x8006A354: bne         $t4, $at, L_8006A37C
    if (ctx->r12 != ctx->r1) {
        // 0x8006A358: nop
    
            goto L_8006A37C;
    }
    // 0x8006A358: nop

    // 0x8006A35C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006A360: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8006A364: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x8006A368: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8006A36C: jal         0x8008A5C8
    // 0x8006A370: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8008A5C8(rdram, ctx);
        goto after_6;
    // 0x8006A370: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_6:
    // 0x8006A374: b           L_8006A3BC
    // 0x8006A378: nop

        goto L_8006A3BC;
    // 0x8006A378: nop

L_8006A37C:
    // 0x8006A37C: lbu         $t5, 0x93($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X93);
    // 0x8006A380: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006A384: bne         $t5, $at, L_8006A3BC
    if (ctx->r13 != ctx->r1) {
        // 0x8006A388: nop
    
            goto L_8006A3BC;
    }
    // 0x8006A388: nop

    // 0x8006A38C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006A390: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8006A394: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x8006A398: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8006A39C: jal         0x8008A5C8
    // 0x8006A3A0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8008A5C8(rdram, ctx);
        goto after_7;
    // 0x8006A3A0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_7:
    // 0x8006A3A4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006A3A8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8006A3AC: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x8006A3B0: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8006A3B4: jal         0x8008A5C8
    // 0x8006A3B8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8008A5C8(rdram, ctx);
        goto after_8;
    // 0x8006A3B8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_8:
L_8006A3BC:
    // 0x8006A3BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8006A3C0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8006A3C4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006A3C8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006A3CC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006A3D0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006A3D4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8006A3D8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8006A3DC: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8006A3E0: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8006A3E4: jr          $ra
    // 0x8006A3E8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x8006A3E8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_8006A3EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A3EC: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8006A3F0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006A3F4: lw          $t6, -0x460($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X460);
    // 0x8006A3F8: nop

    // 0x8006A3FC: lbu         $t7, 0x3($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3);
    // 0x8006A400: nop

    // 0x8006A404: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8006A408: jr          $ra
    // 0x8006A40C: sb          $t8, 0x3($t6)
    MEM_B(0X3, ctx->r14) = ctx->r24;
    return;
    // 0x8006A40C: sb          $t8, 0x3($t6)
    MEM_B(0X3, ctx->r14) = ctx->r24;
;}
RECOMP_FUNC void func_8006A410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006A414: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006A418: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006A41C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006A420: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006A424: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8006A428: nop

    // 0x8006A42C: beq         $t7, $zero, L_8006A46C
    if (ctx->r15 == 0) {
        // 0x8006A430: nop
    
            goto L_8006A46C;
    }
    // 0x8006A430: nop

    // 0x8006A434: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8006A438: nop

    // 0x8006A43C: lbu         $t9, 0x1($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1);
    // 0x8006A440: nop

    // 0x8006A444: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8006A448: sb          $t0, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r8;
    // 0x8006A44C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8006A450: nop

    // 0x8006A454: lbu         $t2, 0x1($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X1);
    // 0x8006A458: nop

    // 0x8006A45C: bne         $t2, $zero, L_8006A46C
    if (ctx->r10 != 0) {
        // 0x8006A460: nop
    
            goto L_8006A46C;
    }
    // 0x8006A460: nop

    // 0x8006A464: jal         0x8006A3EC
    // 0x8006A468: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_8006A3EC(rdram, ctx);
        goto after_0;
    // 0x8006A468: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_0:
L_8006A46C:
    // 0x8006A46C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006A470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006A474: jr          $ra
    // 0x8006A478: nop

    return;
    // 0x8006A478: nop

;}
RECOMP_FUNC void func_8006A47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A47C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006A480: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006A484: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006A488: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006A48C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006A490: lbu         $s0, 0x0($t6)
    ctx->r16 = MEM_BU(ctx->r14, 0X0);
    // 0x8006A494: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006A498: beq         $s0, $at, L_8006A4B0
    if (ctx->r16 == ctx->r1) {
        // 0x8006A49C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8006A4B0;
    }
    // 0x8006A49C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006A4A0: beq         $s0, $at, L_8006A4BC
    if (ctx->r16 == ctx->r1) {
        // 0x8006A4A4: nop
    
            goto L_8006A4BC;
    }
    // 0x8006A4A4: nop

    // 0x8006A4A8: b           L_8006A4C8
    // 0x8006A4AC: nop

        goto L_8006A4C8;
    // 0x8006A4AC: nop

L_8006A4B0:
    // 0x8006A4B0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8006A4B4: b           L_8006A4DC
    // 0x8006A4B8: addiu       $v0, $v0, -0x1C
    ctx->r2 = ADD32(ctx->r2, -0X1C);
        goto L_8006A4DC;
    // 0x8006A4B8: addiu       $v0, $v0, -0x1C
    ctx->r2 = ADD32(ctx->r2, -0X1C);
L_8006A4BC:
    // 0x8006A4BC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8006A4C0: b           L_8006A4DC
    // 0x8006A4C4: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
        goto L_8006A4DC;
    // 0x8006A4C4: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
L_8006A4C8:
    // 0x8006A4C8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006A4CC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8006A4D0: addiu       $a1, $a1, -0x2954
    ctx->r5 = ADD32(ctx->r5, -0X2954);
    // 0x8006A4D4: jal         0x80083560
    // 0x8006A4D8: addiu       $a0, $a0, -0x296C
    ctx->r4 = ADD32(ctx->r4, -0X296C);
    Fault_Assert(rdram, ctx);
        goto after_0;
    // 0x8006A4D8: addiu       $a0, $a0, -0x296C
    ctx->r4 = ADD32(ctx->r4, -0X296C);
    after_0:
L_8006A4DC:
    // 0x8006A4DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006A4E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006A4E4: jr          $ra
    // 0x8006A4E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006A4E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006A4EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A4EC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8006A4F0: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8006A4F4: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8006A4F8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8006A4FC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8006A500: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8006A504: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8006A508: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8006A50C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006A510: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006A514: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006A518: bltz        $t6, L_8006A540
    if (SIGNED(ctx->r14) < 0) {
        // 0x8006A51C: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_8006A540;
    }
    // 0x8006A51C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006A520: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8006A524: nop

    // 0x8006A528: bltz        $t7, L_8006A540
    if (SIGNED(ctx->r15) < 0) {
        // 0x8006A52C: slti        $at, $t6, 0x7
        ctx->r1 = SIGNED(ctx->r14) < 0X7 ? 1 : 0;
            goto L_8006A540;
    }
    // 0x8006A52C: slti        $at, $t6, 0x7
    ctx->r1 = SIGNED(ctx->r14) < 0X7 ? 1 : 0;
    // 0x8006A530: beq         $at, $zero, L_8006A540
    if (ctx->r1 == 0) {
        // 0x8006A534: slti        $at, $t7, 0x11
        ctx->r1 = SIGNED(ctx->r15) < 0X11 ? 1 : 0;
            goto L_8006A540;
    }
    // 0x8006A534: slti        $at, $t7, 0x11
    ctx->r1 = SIGNED(ctx->r15) < 0X11 ? 1 : 0;
    // 0x8006A538: bne         $at, $zero, L_8006A554
    if (ctx->r1 != 0) {
        // 0x8006A53C: nop
    
            goto L_8006A554;
    }
    // 0x8006A53C: nop

L_8006A540:
    // 0x8006A540: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006A544: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8006A548: addiu       $a1, $a1, -0x2918
    ctx->r5 = ADD32(ctx->r5, -0X2918);
    // 0x8006A54C: jal         0x80083560
    // 0x8006A550: addiu       $a0, $a0, -0x2938
    ctx->r4 = ADD32(ctx->r4, -0X2938);
    Fault_Assert(rdram, ctx);
        goto after_0;
    // 0x8006A550: addiu       $a0, $a0, -0x2938
    ctx->r4 = ADD32(ctx->r4, -0X2938);
    after_0:
L_8006A554:
    // 0x8006A554: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x8006A558: blez        $s0, L_8006A570
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8006A55C: addiu       $s4, $sp, 0x3C
        ctx->r20 = ADD32(ctx->r29, 0X3C);
            goto L_8006A570;
    }
    // 0x8006A55C: addiu       $s4, $sp, 0x3C
    ctx->r20 = ADD32(ctx->r29, 0X3C);
L_8006A560:
    // 0x8006A560: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8006A564: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
    // 0x8006A568: bgtz        $s0, L_8006A560
    if (SIGNED(ctx->r16) > 0) {
        // 0x8006A56C: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8006A560;
    }
    // 0x8006A56C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8006A570:
    // 0x8006A570: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8006A574: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8006A578: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8006A57C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8006A580: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x8006A584: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8006A588: lw          $t3, -0x430($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X430);
    // 0x8006A58C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8006A590: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8006A594: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8006A598: addu        $s1, $t3, $t2
    ctx->r17 = ADD32(ctx->r11, ctx->r10);
    // 0x8006A59C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8006A5A0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8006A5A4: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
L_8006A5A8:
    // 0x8006A5A8: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x8006A5AC: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
L_8006A5B0:
    // 0x8006A5B0: lw          $s2, 0x0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X0);
    // 0x8006A5B4: nop

    // 0x8006A5B8: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x8006A5BC: nop

    // 0x8006A5C0: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x8006A5C4: beq         $t7, $zero, L_8006A5D4
    if (ctx->r15 == 0) {
        // 0x8006A5C8: nop
    
            goto L_8006A5D4;
    }
    // 0x8006A5C8: nop

    // 0x8006A5CC: b           L_8006A698
    // 0x8006A5D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006A698;
    // 0x8006A5D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006A5D4:
    // 0x8006A5D4: lbu         $t9, 0x3($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X3);
    // 0x8006A5D8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8006A5DC: beq         $t9, $at, L_8006A5EC
    if (ctx->r25 == ctx->r1) {
        // 0x8006A5E0: nop
    
            goto L_8006A5EC;
    }
    // 0x8006A5E0: nop

    // 0x8006A5E4: b           L_8006A698
    // 0x8006A5E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006A698;
    // 0x8006A5E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006A5EC:
    // 0x8006A5EC: lbu         $t8, 0x1($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X1);
    // 0x8006A5F0: lbu         $t0, 0x5B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X5B);
    // 0x8006A5F4: nop

    // 0x8006A5F8: beq         $t8, $t0, L_8006A604
    if (ctx->r24 == ctx->r8) {
        // 0x8006A5FC: nop
    
            goto L_8006A604;
    }
    // 0x8006A5FC: nop

    // 0x8006A600: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8006A604:
    // 0x8006A604: lbu         $s5, 0x2($s2)
    ctx->r21 = MEM_BU(ctx->r18, 0X2);
    // 0x8006A608: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8006A60C:
    // 0x8006A60C: addiu       $t1, $sp, 0x3C
    ctx->r9 = ADD32(ctx->r29, 0X3C);
    // 0x8006A610: addu        $t3, $s0, $t1
    ctx->r11 = ADD32(ctx->r16, ctx->r9);
    // 0x8006A614: lbu         $t2, 0x0($t3)
    ctx->r10 = MEM_BU(ctx->r11, 0X0);
    // 0x8006A618: nop

    // 0x8006A61C: bne         $t2, $zero, L_8006A630
    if (ctx->r10 != 0) {
        // 0x8006A620: nop
    
            goto L_8006A630;
    }
    // 0x8006A620: nop

    // 0x8006A624: addu        $t4, $s0, $t1
    ctx->r12 = ADD32(ctx->r16, ctx->r9);
    // 0x8006A628: b           L_8006A65C
    // 0x8006A62C: sb          $s5, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r21;
        goto L_8006A65C;
    // 0x8006A62C: sb          $s5, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r21;
L_8006A630:
    // 0x8006A630: addu        $t5, $sp, $s0
    ctx->r13 = ADD32(ctx->r29, ctx->r16);
    // 0x8006A634: lbu         $t5, 0x3C($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X3C);
    // 0x8006A638: nop

    // 0x8006A63C: beq         $t5, $s5, L_8006A65C
    if (ctx->r13 == ctx->r21) {
        // 0x8006A640: nop
    
            goto L_8006A65C;
    }
    // 0x8006A640: nop

    // 0x8006A644: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006A648: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8006A64C: bne         $s0, $at, L_8006A60C
    if (ctx->r16 != ctx->r1) {
        // 0x8006A650: nop
    
            goto L_8006A60C;
    }
    // 0x8006A650: nop

    // 0x8006A654: b           L_8006A698
    // 0x8006A658: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006A698;
    // 0x8006A658: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006A65C:
    // 0x8006A65C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8006A660: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8006A664: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8006A668: bgtz        $t7, L_8006A5B0
    if (SIGNED(ctx->r15) > 0) {
        // 0x8006A66C: sw          $t7, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r15;
            goto L_8006A5B0;
    }
    // 0x8006A66C: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x8006A670: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8006A674: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    // 0x8006A678: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x8006A67C: bgtz        $t8, L_8006A5A8
    if (SIGNED(ctx->r24) > 0) {
        // 0x8006A680: sw          $t8, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r24;
            goto L_8006A5A8;
    }
    // 0x8006A680: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x8006A684: beq         $s3, $zero, L_8006A694
    if (ctx->r19 == 0) {
        // 0x8006A688: nop
    
            goto L_8006A694;
    }
    // 0x8006A688: nop

    // 0x8006A68C: b           L_8006A698
    // 0x8006A690: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8006A698;
    // 0x8006A690: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8006A694:
    // 0x8006A694: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006A698:
    // 0x8006A698: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8006A69C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006A6A0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006A6A4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006A6A8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006A6AC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8006A6B0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8006A6B4: jr          $ra
    // 0x8006A6B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8006A6B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8006A6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A6BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006A6C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006A6C4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006A6C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006A6CC: lbu         $a2, 0x1($t6)
    ctx->r6 = MEM_BU(ctx->r14, 0X1);
    // 0x8006A6D0: lb          $a1, 0xA($t6)
    ctx->r5 = MEM_B(ctx->r14, 0XA);
    // 0x8006A6D4: lb          $a0, 0x9($t6)
    ctx->r4 = MEM_B(ctx->r14, 0X9);
    // 0x8006A6D8: jal         0x8006A4EC
    // 0x8006A6DC: nop

    func_8006A4EC(rdram, ctx);
        goto after_0;
    // 0x8006A6DC: nop

    after_0:
    // 0x8006A6E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006A6E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006A6E8: jr          $ra
    // 0x8006A6EC: nop

    return;
    // 0x8006A6EC: nop

;}
RECOMP_FUNC void func_8006A6F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A6F0: addiu       $t6, $zero, 0x2D
    ctx->r14 = ADD32(0, 0X2D);
    // 0x8006A6F4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8006A6F8: sb          $t6, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r14;
    // 0x8006A6FC: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x8006A700: jr          $ra
    // 0x8006A704: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    return;
    // 0x8006A704: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8006A708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A708: lbu         $t6, 0x2($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X2);
    // 0x8006A70C: nop

    // 0x8006A710: bne         $t6, $zero, L_8006A728
    if (ctx->r14 != 0) {
        // 0x8006A714: nop
    
            goto L_8006A728;
    }
    // 0x8006A714: nop

    // 0x8006A718: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8006A71C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8006A720: jr          $ra
    // 0x8006A724: sb          $t7, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r15;
    return;
    // 0x8006A724: sb          $t7, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r15;
L_8006A728:
    // 0x8006A728: lbu         $t8, 0x2($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X2);
    // 0x8006A72C: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    // 0x8006A730: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8006A734: sb          $t9, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r25;
    // 0x8006A738: jr          $ra
    // 0x8006A73C: nop

    return;
    // 0x8006A73C: nop

;}
RECOMP_FUNC void func_8006A740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A740: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8006A744: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8006A748: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006A74C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006A750: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x8006A754: jal         0x80067C1C
    // 0x8006A758: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_80067C1C(rdram, ctx);
        goto after_0;
    // 0x8006A758: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x8006A75C: lh          $t6, 0x34($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X34);
    // 0x8006A760: lh          $t8, 0x36($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X36);
    // 0x8006A764: addiu       $t7, $t6, -0x3
    ctx->r15 = ADD32(ctx->r14, -0X3);
    // 0x8006A768: lh          $t0, 0x30($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X30);
    // 0x8006A76C: lh          $t1, 0x32($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X32);
    // 0x8006A770: sll         $t2, $t7, 16
    ctx->r10 = S32(ctx->r15 << 16);
    // 0x8006A774: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8006A778: addiu       $t9, $t8, -0x3
    ctx->r25 = ADD32(ctx->r24, -0X3);
    // 0x8006A77C: sh          $t7, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r15;
    // 0x8006A780: sh          $t9, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r25;
    // 0x8006A784: sh          $t0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r8;
    // 0x8006A788: bgez        $t3, L_8006A794
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8006A78C: sh          $t1, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r9;
            goto L_8006A794;
    }
    // 0x8006A78C: sh          $t1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r9;
    // 0x8006A790: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
L_8006A794:
    // 0x8006A794: lh          $t4, 0x2C($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2C);
    // 0x8006A798: nop

    // 0x8006A79C: slti        $at, $t4, 0x7
    ctx->r1 = SIGNED(ctx->r12) < 0X7 ? 1 : 0;
    // 0x8006A7A0: bne         $at, $zero, L_8006A7B0
    if (ctx->r1 != 0) {
        // 0x8006A7A4: nop
    
            goto L_8006A7B0;
    }
    // 0x8006A7A4: nop

    // 0x8006A7A8: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x8006A7AC: sh          $t5, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r13;
L_8006A7B0:
    // 0x8006A7B0: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x8006A7B4: nop

    // 0x8006A7B8: bgez        $t6, L_8006A7C4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8006A7BC: nop
    
            goto L_8006A7C4;
    }
    // 0x8006A7BC: nop

    // 0x8006A7C0: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
L_8006A7C4:
    // 0x8006A7C4: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x8006A7C8: nop

    // 0x8006A7CC: slti        $at, $t8, 0x11
    ctx->r1 = SIGNED(ctx->r24) < 0X11 ? 1 : 0;
    // 0x8006A7D0: bne         $at, $zero, L_8006A7E0
    if (ctx->r1 != 0) {
        // 0x8006A7D4: nop
    
            goto L_8006A7E0;
    }
    // 0x8006A7D4: nop

    // 0x8006A7D8: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x8006A7DC: sh          $t9, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r25;
L_8006A7E0:
    // 0x8006A7E0: lh          $t0, 0x2A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2A);
    // 0x8006A7E4: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x8006A7E8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8006A7EC: slt         $at, $t1, $t0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8006A7F0: bne         $at, $zero, L_8006A880
    if (ctx->r1 != 0) {
        // 0x8006A7F4: nop
    
            goto L_8006A880;
    }
    // 0x8006A7F4: nop

L_8006A7F8:
    // 0x8006A7F8: lh          $t7, 0x28($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X28);
    // 0x8006A7FC: lh          $t2, 0x2C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2C);
    // 0x8006A800: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8006A804: slt         $at, $t2, $t7
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8006A808: bne         $at, $zero, L_8006A858
    if (ctx->r1 != 0) {
        // 0x8006A80C: nop
    
            goto L_8006A858;
    }
    // 0x8006A80C: nop

L_8006A810:
    // 0x8006A810: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8006A814: lw          $t3, -0x490($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X490);
    // 0x8006A818: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8006A81C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8006A820: lbu         $a2, 0x13($t3)
    ctx->r6 = MEM_BU(ctx->r11, 0X13);
    // 0x8006A824: jal         0x8006A4EC
    // 0x8006A828: nop

    func_8006A4EC(rdram, ctx);
        goto after_1;
    // 0x8006A828: nop

    after_1:
    // 0x8006A82C: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x8006A830: lbu         $t4, 0x1F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006A834: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006A838: beq         $t4, $at, L_8006A858
    if (ctx->r12 == ctx->r1) {
        // 0x8006A83C: nop
    
            goto L_8006A858;
    }
    // 0x8006A83C: nop

    // 0x8006A840: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8006A844: lh          $t8, 0x2C($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2C);
    // 0x8006A848: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8006A84C: slt         $at, $t8, $t6
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8006A850: beq         $at, $zero, L_8006A810
    if (ctx->r1 == 0) {
        // 0x8006A854: sw          $t6, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r14;
            goto L_8006A810;
    }
    // 0x8006A854: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_8006A858:
    // 0x8006A858: lbu         $t9, 0x1F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006A85C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006A860: beq         $t9, $at, L_8006A880
    if (ctx->r25 == ctx->r1) {
        // 0x8006A864: nop
    
            goto L_8006A880;
    }
    // 0x8006A864: nop

    // 0x8006A868: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8006A86C: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x8006A870: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8006A874: slt         $at, $t7, $t1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8006A878: beq         $at, $zero, L_8006A7F8
    if (ctx->r1 == 0) {
        // 0x8006A87C: sw          $t1, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r9;
            goto L_8006A7F8;
    }
    // 0x8006A87C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
L_8006A880:
    // 0x8006A880: lbu         $t2, 0x1F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006A884: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006A888: bne         $t2, $at, L_8006A8B4
    if (ctx->r10 != ctx->r1) {
        // 0x8006A88C: nop
    
            goto L_8006A8B4;
    }
    // 0x8006A88C: nop

    // 0x8006A890: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8006A894: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8006A898: jal         0x8006A050
    // 0x8006A89C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8006A050(rdram, ctx);
        goto after_2;
    // 0x8006A89C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x8006A8A0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8006A8A4: jal         0x8006A6F0
    // 0x8006A8A8: nop

    func_8006A6F0(rdram, ctx);
        goto after_3;
    // 0x8006A8A8: nop

    after_3:
    // 0x8006A8AC: b           L_8006A994
    // 0x8006A8B0: nop

        goto L_8006A994;
    // 0x8006A8B0: nop

L_8006A8B4:
    // 0x8006A8B4: lh          $t3, 0x2A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2A);
    // 0x8006A8B8: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x8006A8BC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8006A8C0: slt         $at, $t4, $t3
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8006A8C4: bne         $at, $zero, L_8006A954
    if (ctx->r1 != 0) {
        // 0x8006A8C8: nop
    
            goto L_8006A954;
    }
    // 0x8006A8C8: nop

L_8006A8CC:
    // 0x8006A8CC: lh          $t5, 0x28($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X28);
    // 0x8006A8D0: lh          $t6, 0x2C($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2C);
    // 0x8006A8D4: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8006A8D8: slt         $at, $t6, $t5
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8006A8DC: bne         $at, $zero, L_8006A92C
    if (ctx->r1 != 0) {
        // 0x8006A8E0: nop
    
            goto L_8006A92C;
    }
    // 0x8006A8E0: nop

L_8006A8E4:
    // 0x8006A8E4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8006A8E8: lw          $t8, -0x490($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X490);
    // 0x8006A8EC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8006A8F0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8006A8F4: lbu         $a2, 0x13($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X13);
    // 0x8006A8F8: jal         0x8006A4EC
    // 0x8006A8FC: nop

    func_8006A4EC(rdram, ctx);
        goto after_4;
    // 0x8006A8FC: nop

    after_4:
    // 0x8006A900: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x8006A904: lbu         $t9, 0x1F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006A908: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006A90C: beq         $t9, $at, L_8006A92C
    if (ctx->r25 == ctx->r1) {
        // 0x8006A910: nop
    
            goto L_8006A92C;
    }
    // 0x8006A910: nop

    // 0x8006A914: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8006A918: lh          $t7, 0x2C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2C);
    // 0x8006A91C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8006A920: slt         $at, $t7, $t1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8006A924: beq         $at, $zero, L_8006A8E4
    if (ctx->r1 == 0) {
        // 0x8006A928: sw          $t1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r9;
            goto L_8006A8E4;
    }
    // 0x8006A928: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_8006A92C:
    // 0x8006A92C: lbu         $t2, 0x1F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006A930: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006A934: beq         $t2, $at, L_8006A954
    if (ctx->r10 == ctx->r1) {
        // 0x8006A938: nop
    
            goto L_8006A954;
    }
    // 0x8006A938: nop

    // 0x8006A93C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8006A940: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x8006A944: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8006A948: slt         $at, $t5, $t4
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8006A94C: beq         $at, $zero, L_8006A8CC
    if (ctx->r1 == 0) {
        // 0x8006A950: sw          $t4, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r12;
            goto L_8006A8CC;
    }
    // 0x8006A950: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
L_8006A954:
    // 0x8006A954: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006A958: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006A95C: bne         $t6, $at, L_8006A988
    if (ctx->r14 != ctx->r1) {
        // 0x8006A960: nop
    
            goto L_8006A988;
    }
    // 0x8006A960: nop

    // 0x8006A964: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8006A968: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8006A96C: jal         0x8006A050
    // 0x8006A970: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8006A050(rdram, ctx);
        goto after_5;
    // 0x8006A970: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8006A974: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8006A978: jal         0x8006A6F0
    // 0x8006A97C: nop

    func_8006A6F0(rdram, ctx);
        goto after_6;
    // 0x8006A97C: nop

    after_6:
    // 0x8006A980: b           L_8006A994
    // 0x8006A984: nop

        goto L_8006A994;
    // 0x8006A984: nop

L_8006A988:
    // 0x8006A988: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8006A98C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8006A990: sb          $t8, 0x1($t9)
    MEM_B(0X1, ctx->r25) = ctx->r24;
L_8006A994:
    // 0x8006A994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006A998: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8006A99C: jr          $ra
    // 0x8006A9A0: nop

    return;
    // 0x8006A9A0: nop

;}
RECOMP_FUNC void func_8006A9A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A9A4: addiu       $t6, $zero, 0x2D
    ctx->r14 = ADD32(0, 0X2D);
    // 0x8006A9A8: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8006A9AC: sb          $t6, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r14;
    // 0x8006A9B0: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x8006A9B4: jr          $ra
    // 0x8006A9B8: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    return;
    // 0x8006A9B8: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8006A9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A9BC: lbu         $t6, 0x2($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X2);
    // 0x8006A9C0: nop

    // 0x8006A9C4: bne         $t6, $zero, L_8006A9DC
    if (ctx->r14 != 0) {
        // 0x8006A9C8: nop
    
            goto L_8006A9DC;
    }
    // 0x8006A9C8: nop

    // 0x8006A9CC: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8006A9D0: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8006A9D4: jr          $ra
    // 0x8006A9D8: sb          $t7, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r15;
    return;
    // 0x8006A9D8: sb          $t7, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r15;
L_8006A9DC:
    // 0x8006A9DC: lbu         $t8, 0x2($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X2);
    // 0x8006A9E0: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    // 0x8006A9E4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8006A9E8: sb          $t9, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r25;
    // 0x8006A9EC: jr          $ra
    // 0x8006A9F0: nop

    return;
    // 0x8006A9F0: nop

;}
RECOMP_FUNC void func_8006A9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A9F4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006A9F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006A9FC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8006AA00: slti        $at, $s2, 0x11
    ctx->r1 = SIGNED(ctx->r18) < 0X11 ? 1 : 0;
    // 0x8006AA04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006AA08: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006AA0C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006AA10: beq         $at, $zero, L_8006AAB4
    if (ctx->r1 == 0) {
        // 0x8006AA14: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8006AAB4;
    }
    // 0x8006AA14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
L_8006AA18:
    // 0x8006AA18: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8006AA1C: slti        $at, $s1, 0x7
    ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
    // 0x8006AA20: beq         $at, $zero, L_8006AAA4
    if (ctx->r1 == 0) {
        // 0x8006AA24: nop
    
            goto L_8006AAA4;
    }
    // 0x8006AA24: nop

L_8006AA28:
    // 0x8006AA28: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    // 0x8006AA2C: addu        $t7, $t7, $s2
    ctx->r15 = ADD32(ctx->r15, ctx->r18);
    // 0x8006AA30: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x8006AA34: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006AA38: lw          $t6, -0x430($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X430);
    // 0x8006AA3C: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x8006AA40: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006AA44: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x8006AA48: lw          $s0, 0x4($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X4);
    // 0x8006AA4C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006AA50: lbu         $t1, 0x1($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1);
    // 0x8006AA54: nop

    // 0x8006AA58: beq         $t1, $at, L_8006AA94
    if (ctx->r9 == ctx->r1) {
        // 0x8006AA5C: nop
    
            goto L_8006AA94;
    }
    // 0x8006AA5C: nop

    // 0x8006AA60: lbu         $t2, 0x3($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3);
    // 0x8006AA64: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8006AA68: bne         $t2, $at, L_8006AA94
    if (ctx->r10 != ctx->r1) {
        // 0x8006AA6C: nop
    
            goto L_8006AA94;
    }
    // 0x8006AA6C: nop

    // 0x8006AA70: jal         0x8006A6BC
    // 0x8006AA74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006A6BC(rdram, ctx);
        goto after_0;
    // 0x8006AA74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8006AA78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006AA7C: bne         $v0, $at, L_8006AA94
    if (ctx->r2 != ctx->r1) {
        // 0x8006AA80: nop
    
            goto L_8006AA94;
    }
    // 0x8006AA80: nop

    // 0x8006AA84: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006AA88: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8006AA8C: jal         0x8006A050
    // 0x8006AA90: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8006A050(rdram, ctx);
        goto after_1;
    // 0x8006AA90: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
L_8006AA94:
    // 0x8006AA94: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006AA98: slti        $at, $s1, 0x7
    ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
    // 0x8006AA9C: bne         $at, $zero, L_8006AA28
    if (ctx->r1 != 0) {
        // 0x8006AAA0: nop
    
            goto L_8006AA28;
    }
    // 0x8006AAA0: nop

L_8006AAA4:
    // 0x8006AAA4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8006AAA8: slti        $at, $s2, 0x11
    ctx->r1 = SIGNED(ctx->r18) < 0X11 ? 1 : 0;
    // 0x8006AAAC: bne         $at, $zero, L_8006AA18
    if (ctx->r1 != 0) {
        // 0x8006AAB0: nop
    
            goto L_8006AA18;
    }
    // 0x8006AAB0: nop

L_8006AAB4:
    // 0x8006AAB4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8006AAB8: slti        $at, $s2, 0x11
    ctx->r1 = SIGNED(ctx->r18) < 0X11 ? 1 : 0;
    // 0x8006AABC: beq         $at, $zero, L_8006AB60
    if (ctx->r1 == 0) {
        // 0x8006AAC0: nop
    
            goto L_8006AB60;
    }
    // 0x8006AAC0: nop

L_8006AAC4:
    // 0x8006AAC4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8006AAC8: slti        $at, $s1, 0x7
    ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
    // 0x8006AACC: beq         $at, $zero, L_8006AB50
    if (ctx->r1 == 0) {
        // 0x8006AAD0: nop
    
            goto L_8006AB50;
    }
    // 0x8006AAD0: nop

L_8006AAD4:
    // 0x8006AAD4: sll         $t4, $s2, 2
    ctx->r12 = S32(ctx->r18 << 2);
    // 0x8006AAD8: addu        $t4, $t4, $s2
    ctx->r12 = ADD32(ctx->r12, ctx->r18);
    // 0x8006AADC: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x8006AAE0: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8006AAE4: lw          $t3, -0x430($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X430);
    // 0x8006AAE8: addu        $t5, $s1, $t4
    ctx->r13 = ADD32(ctx->r17, ctx->r12);
    // 0x8006AAEC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8006AAF0: addu        $t8, $t3, $t7
    ctx->r24 = ADD32(ctx->r11, ctx->r15);
    // 0x8006AAF4: lw          $s0, 0x4($t8)
    ctx->r16 = MEM_W(ctx->r24, 0X4);
    // 0x8006AAF8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006AAFC: lbu         $t6, 0x1($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1);
    // 0x8006AB00: nop

    // 0x8006AB04: beq         $t6, $at, L_8006AB40
    if (ctx->r14 == ctx->r1) {
        // 0x8006AB08: nop
    
            goto L_8006AB40;
    }
    // 0x8006AB08: nop

    // 0x8006AB0C: lbu         $t9, 0x3($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3);
    // 0x8006AB10: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8006AB14: bne         $t9, $at, L_8006AB40
    if (ctx->r25 != ctx->r1) {
        // 0x8006AB18: nop
    
            goto L_8006AB40;
    }
    // 0x8006AB18: nop

    // 0x8006AB1C: jal         0x8006A6BC
    // 0x8006AB20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006A6BC(rdram, ctx);
        goto after_2;
    // 0x8006AB20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8006AB24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006AB28: bne         $v0, $at, L_8006AB40
    if (ctx->r2 != ctx->r1) {
        // 0x8006AB2C: nop
    
            goto L_8006AB40;
    }
    // 0x8006AB2C: nop

    // 0x8006AB30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006AB34: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8006AB38: jal         0x8006A050
    // 0x8006AB3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8006A050(rdram, ctx);
        goto after_3;
    // 0x8006AB3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_8006AB40:
    // 0x8006AB40: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006AB44: slti        $at, $s1, 0x7
    ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
    // 0x8006AB48: bne         $at, $zero, L_8006AAD4
    if (ctx->r1 != 0) {
        // 0x8006AB4C: nop
    
            goto L_8006AAD4;
    }
    // 0x8006AB4C: nop

L_8006AB50:
    // 0x8006AB50: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8006AB54: slti        $at, $s2, 0x11
    ctx->r1 = SIGNED(ctx->r18) < 0X11 ? 1 : 0;
    // 0x8006AB58: bne         $at, $zero, L_8006AAC4
    if (ctx->r1 != 0) {
        // 0x8006AB5C: nop
    
            goto L_8006AAC4;
    }
    // 0x8006AB5C: nop

L_8006AB60:
    // 0x8006AB60: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8006AB64: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8006AB68: sb          $t0, 0x1($t1)
    MEM_B(0X1, ctx->r9) = ctx->r8;
    // 0x8006AB6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006AB70: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006AB74: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006AB78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006AB7C: jr          $ra
    // 0x8006AB80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006AB80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006AB84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AB84: sltiu       $at, $a0, 0x2C
    ctx->r1 = ctx->r4 < 0X2C ? 1 : 0;
    // 0x8006AB88: beq         $at, $zero, L_8006AB98
    if (ctx->r1 == 0) {
        // 0x8006AB8C: nop
    
            goto L_8006AB98;
    }
    // 0x8006AB8C: nop

    // 0x8006AB90: jr          $ra
    // 0x8006AB94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8006AB94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006AB98:
    // 0x8006AB98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8006AB9C: jr          $ra
    // 0x8006ABA0: nop

    return;
    // 0x8006ABA0: nop

;}
RECOMP_FUNC void func_8006ABA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006ABA4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006ABA8: lw          $a0, -0x460($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X460);
    // 0x8006ABAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006ABB0: sltiu       $at, $a2, 0x2C
    ctx->r1 = ctx->r6 < 0X2C ? 1 : 0;
    // 0x8006ABB4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8006ABB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8006ABBC: beq         $at, $zero, L_8006ABE8
    if (ctx->r1 == 0) {
        // 0x8006ABC0: addiu       $a1, $a0, 0x4
        ctx->r5 = ADD32(ctx->r4, 0X4);
            goto L_8006ABE8;
    }
    // 0x8006ABC0: addiu       $a1, $a0, 0x4
    ctx->r5 = ADD32(ctx->r4, 0X4);
L_8006ABC4:
    // 0x8006ABC4: lbu         $t6, 0x3($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X3);
    // 0x8006ABC8: nop

    // 0x8006ABCC: beq         $t6, $zero, L_8006ABD8
    if (ctx->r14 == 0) {
        // 0x8006ABD0: nop
    
            goto L_8006ABD8;
    }
    // 0x8006ABD0: nop

    // 0x8006ABD4: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_8006ABD8:
    // 0x8006ABD8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8006ABDC: sltiu       $at, $a2, 0x2C
    ctx->r1 = ctx->r6 < 0X2C ? 1 : 0;
    // 0x8006ABE0: bne         $at, $zero, L_8006ABC4
    if (ctx->r1 != 0) {
        // 0x8006ABE4: addiu       $a1, $a1, 0x12
        ctx->r5 = ADD32(ctx->r5, 0X12);
            goto L_8006ABC4;
    }
    // 0x8006ABE4: addiu       $a1, $a1, 0x12
    ctx->r5 = ADD32(ctx->r5, 0X12);
L_8006ABE8:
    // 0x8006ABE8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x8006ABEC: jr          $ra
    // 0x8006ABF0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8006ABF0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8006ABF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006ABF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006ABF8: lw          $a0, -0x460($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X460);
    // 0x8006ABFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006AC00: sltiu       $at, $a2, 0x2C
    ctx->r1 = ctx->r6 < 0X2C ? 1 : 0;
    // 0x8006AC04: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8006AC08: beq         $at, $zero, L_8006AC24
    if (ctx->r1 == 0) {
        // 0x8006AC0C: addiu       $a1, $a0, 0x4
        ctx->r5 = ADD32(ctx->r4, 0X4);
            goto L_8006AC24;
    }
    // 0x8006AC0C: addiu       $a1, $a0, 0x4
    ctx->r5 = ADD32(ctx->r4, 0X4);
L_8006AC10:
    // 0x8006AC10: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8006AC14: sltiu       $at, $a2, 0x2C
    ctx->r1 = ctx->r6 < 0X2C ? 1 : 0;
    // 0x8006AC18: addiu       $a1, $a1, 0x12
    ctx->r5 = ADD32(ctx->r5, 0X12);
    // 0x8006AC1C: bne         $at, $zero, L_8006AC10
    if (ctx->r1 != 0) {
        // 0x8006AC20: sb          $zero, -0xF($a1)
        MEM_B(-0XF, ctx->r5) = 0;
            goto L_8006AC10;
    }
    // 0x8006AC20: sb          $zero, -0xF($a1)
    MEM_B(-0XF, ctx->r5) = 0;
L_8006AC24:
    // 0x8006AC24: jr          $ra
    // 0x8006AC28: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8006AC28: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8006AC2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AC2C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8006AC30: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8006AC34: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8006AC38: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8006AC3C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8006AC40: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8006AC44: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006AC48: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006AC4C: jal         0x8006ABF4
    // 0x8006AC50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8006ABF4(rdram, ctx);
        goto after_0;
    // 0x8006AC50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006AC54: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8006AC58: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006AC5C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8006AC60: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8006AC64: lw          $t6, -0x430($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X430);
    // 0x8006AC68: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x8006AC6C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006AC70: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8006AC74: slti        $at, $s3, 0xA
    ctx->r1 = SIGNED(ctx->r19) < 0XA ? 1 : 0;
    // 0x8006AC78: addu        $s0, $t6, $t9
    ctx->r16 = ADD32(ctx->r14, ctx->r25);
    // 0x8006AC7C: beq         $at, $zero, L_8006ACE4
    if (ctx->r1 == 0) {
        // 0x8006AC80: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8006ACE4;
    }
    // 0x8006AC80: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8006AC84:
    // 0x8006AC84: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8006AC88: nop

    // 0x8006AC8C: lbu         $s4, 0x3($s1)
    ctx->r20 = MEM_BU(ctx->r17, 0X3);
    // 0x8006AC90: jal         0x8006AB84
    // 0x8006AC94: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8006AB84(rdram, ctx);
        goto after_1;
    // 0x8006AC94: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_1:
    // 0x8006AC98: beq         $v0, $zero, L_8006ACD4
    if (ctx->r2 == 0) {
        // 0x8006AC9C: nop
    
            goto L_8006ACD4;
    }
    // 0x8006AC9C: nop

    // 0x8006ACA0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8006ACA4: sll         $t1, $s4, 3
    ctx->r9 = S32(ctx->r20 << 3);
    // 0x8006ACA8: lw          $t0, -0x460($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X460);
    // 0x8006ACAC: addu        $t1, $t1, $s4
    ctx->r9 = ADD32(ctx->r9, ctx->r20);
    // 0x8006ACB0: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x8006ACB4: addu        $s2, $t0, $t1
    ctx->r18 = ADD32(ctx->r8, ctx->r9);
    // 0x8006ACB8: lbu         $t2, 0x4($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X4);
    // 0x8006ACBC: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x8006ACC0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8006ACC4: bne         $t2, $t3, L_8006ACD4
    if (ctx->r10 != ctx->r11) {
        // 0x8006ACC8: nop
    
            goto L_8006ACD4;
    }
    // 0x8006ACC8: nop

    // 0x8006ACCC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8006ACD0: sb          $t4, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r12;
L_8006ACD4:
    // 0x8006ACD4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8006ACD8: slti        $at, $s3, 0xA
    ctx->r1 = SIGNED(ctx->r19) < 0XA ? 1 : 0;
    // 0x8006ACDC: bne         $at, $zero, L_8006AC84
    if (ctx->r1 != 0) {
        // 0x8006ACE0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8006AC84;
    }
    // 0x8006ACE0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8006ACE4:
    // 0x8006ACE4: jal         0x8006ABA4
    // 0x8006ACE8: nop

    func_8006ABA4(rdram, ctx);
        goto after_2;
    // 0x8006ACE8: nop

    after_2:
    // 0x8006ACEC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8006ACF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006ACF4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006ACF8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006ACFC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8006AD00: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8006AD04: jr          $ra
    // 0x8006AD08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8006AD08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8006AD0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AD0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006AD10: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006AD14: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8006AD18: lw          $s0, -0x460($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X460);
    // 0x8006AD1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006AD20: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006AD24: lbu         $s1, 0x0($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X0);
    // 0x8006AD28: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006AD2C: beq         $s1, $at, L_8006AD54
    if (ctx->r17 == ctx->r1) {
        // 0x8006AD30: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8006AD54;
    }
    // 0x8006AD30: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006AD34: beq         $s1, $at, L_8006AD64
    if (ctx->r17 == ctx->r1) {
        // 0x8006AD38: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8006AD64;
    }
    // 0x8006AD38: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8006AD3C: beq         $s1, $at, L_8006AD74
    if (ctx->r17 == ctx->r1) {
        // 0x8006AD40: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8006AD74;
    }
    // 0x8006AD40: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8006AD44: beq         $s1, $at, L_8006AD84
    if (ctx->r17 == ctx->r1) {
        // 0x8006AD48: nop
    
            goto L_8006AD84;
    }
    // 0x8006AD48: nop

    // 0x8006AD4C: b           L_8006AD8C
    // 0x8006AD50: nop

        goto L_8006AD8C;
    // 0x8006AD50: nop

L_8006AD54:
    // 0x8006AD54: jal         0x8006A740
    // 0x8006AD58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006A740(rdram, ctx);
        goto after_0;
    // 0x8006AD58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8006AD5C: b           L_8006AD8C
    // 0x8006AD60: nop

        goto L_8006AD8C;
    // 0x8006AD60: nop

L_8006AD64:
    // 0x8006AD64: jal         0x8006A708
    // 0x8006AD68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006A708(rdram, ctx);
        goto after_1;
    // 0x8006AD68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8006AD6C: b           L_8006AD8C
    // 0x8006AD70: nop

        goto L_8006AD8C;
    // 0x8006AD70: nop

L_8006AD74:
    // 0x8006AD74: jal         0x8006A9F4
    // 0x8006AD78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006A9F4(rdram, ctx);
        goto after_2;
    // 0x8006AD78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8006AD7C: b           L_8006AD8C
    // 0x8006AD80: nop

        goto L_8006AD8C;
    // 0x8006AD80: nop

L_8006AD84:
    // 0x8006AD84: jal         0x8006A9BC
    // 0x8006AD88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006A9BC(rdram, ctx);
        goto after_3;
    // 0x8006AD88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_8006AD8C:
    // 0x8006AD8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006AD90: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8006AD94: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006AD98: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006AD9C: jr          $ra
    // 0x8006ADA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006ADA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006ADA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006ADA4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006ADA8: lw          $a0, -0x460($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X460);
    // 0x8006ADAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006ADB0: sltiu       $at, $a2, 0x2C
    ctx->r1 = ctx->r6 < 0X2C ? 1 : 0;
    // 0x8006ADB4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8006ADB8: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x8006ADBC: beq         $at, $zero, L_8006ADDC
    if (ctx->r1 == 0) {
        // 0x8006ADC0: addiu       $a1, $a0, 0x4
        ctx->r5 = ADD32(ctx->r4, 0X4);
            goto L_8006ADDC;
    }
    // 0x8006ADC0: addiu       $a1, $a0, 0x4
    ctx->r5 = ADD32(ctx->r4, 0X4);
L_8006ADC4:
    // 0x8006ADC4: sb          $a2, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r6;
    // 0x8006ADC8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8006ADCC: sltiu       $at, $a2, 0x2C
    ctx->r1 = ctx->r6 < 0X2C ? 1 : 0;
    // 0x8006ADD0: addiu       $a1, $a1, 0x12
    ctx->r5 = ADD32(ctx->r5, 0X12);
    // 0x8006ADD4: bne         $at, $zero, L_8006ADC4
    if (ctx->r1 != 0) {
        // 0x8006ADD8: sb          $zero, -0x12($a1)
        MEM_B(-0X12, ctx->r5) = 0;
            goto L_8006ADC4;
    }
    // 0x8006ADD8: sb          $zero, -0x12($a1)
    MEM_B(-0X12, ctx->r5) = 0;
L_8006ADDC:
    // 0x8006ADDC: jr          $ra
    // 0x8006ADE0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8006ADE0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8006ADE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006ADE4: jr          $ra
    // 0x8006ADE8: nop

    return;
    // 0x8006ADE8: nop

;}
RECOMP_FUNC void func_8006ADEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006ADEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006ADF0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006ADF4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006ADF8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006ADFC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8006AE00: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8006AE04: sltiu       $at, $s1, 0x2C
    ctx->r1 = ctx->r17 < 0X2C ? 1 : 0;
    // 0x8006AE08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006AE0C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8006AE10: beq         $at, $zero, L_8006AE44
    if (ctx->r1 == 0) {
        // 0x8006AE14: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8006AE44;
    }
    // 0x8006AE14: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8006AE18:
    // 0x8006AE18: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x8006AE1C: nop

    // 0x8006AE20: beq         $t6, $zero, L_8006AE34
    if (ctx->r14 == 0) {
        // 0x8006AE24: nop
    
            goto L_8006AE34;
    }
    // 0x8006AE24: nop

    // 0x8006AE28: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8006AE2C: jal         0x8006AF00
    // 0x8006AE30: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    func_8006AF00(rdram, ctx);
        goto after_0;
    // 0x8006AE30: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    after_0:
L_8006AE34:
    // 0x8006AE34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006AE38: sltiu       $at, $s1, 0x2C
    ctx->r1 = ctx->r17 < 0X2C ? 1 : 0;
    // 0x8006AE3C: bne         $at, $zero, L_8006AE18
    if (ctx->r1 != 0) {
        // 0x8006AE40: addiu       $s0, $s0, 0x12
        ctx->r16 = ADD32(ctx->r16, 0X12);
            goto L_8006AE18;
    }
    // 0x8006AE40: addiu       $s0, $s0, 0x12
    ctx->r16 = ADD32(ctx->r16, 0X12);
L_8006AE44:
    // 0x8006AE44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006AE48: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006AE4C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006AE50: jr          $ra
    // 0x8006AE54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006AE54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006AE58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AE58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006AE5C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006AE60: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006AE64: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006AE68: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8006AE6C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8006AE70: sltiu       $at, $s1, 0x2C
    ctx->r1 = ctx->r17 < 0X2C ? 1 : 0;
    // 0x8006AE74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006AE78: beq         $at, $zero, L_8006AEA8
    if (ctx->r1 == 0) {
        // 0x8006AE7C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8006AEA8;
    }
    // 0x8006AE7C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8006AE80:
    // 0x8006AE80: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x8006AE84: nop

    // 0x8006AE88: beq         $t6, $zero, L_8006AE98
    if (ctx->r14 == 0) {
        // 0x8006AE8C: nop
    
            goto L_8006AE98;
    }
    // 0x8006AE8C: nop

    // 0x8006AE90: jal         0x8006AF70
    // 0x8006AE94: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    func_8006AF70(rdram, ctx);
        goto after_0;
    // 0x8006AE94: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    after_0:
L_8006AE98:
    // 0x8006AE98: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006AE9C: sltiu       $at, $s1, 0x2C
    ctx->r1 = ctx->r17 < 0X2C ? 1 : 0;
    // 0x8006AEA0: bne         $at, $zero, L_8006AE80
    if (ctx->r1 != 0) {
        // 0x8006AEA4: addiu       $s0, $s0, 0x12
        ctx->r16 = ADD32(ctx->r16, 0X12);
            goto L_8006AE80;
    }
    // 0x8006AEA4: addiu       $s0, $s0, 0x12
    ctx->r16 = ADD32(ctx->r16, 0X12);
L_8006AEA8:
    // 0x8006AEA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006AEAC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006AEB0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006AEB4: jr          $ra
    // 0x8006AEB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006AEB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006AEBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AEBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8006AEC0: sltiu       $at, $a3, 0x2C
    ctx->r1 = ctx->r7 < 0X2C ? 1 : 0;
    // 0x8006AEC4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006AEC8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8006AECC: beq         $at, $zero, L_8006AEF8
    if (ctx->r1 == 0) {
        // 0x8006AED0: addiu       $a2, $a0, 0x4
        ctx->r6 = ADD32(ctx->r4, 0X4);
            goto L_8006AEF8;
    }
    // 0x8006AED0: addiu       $a2, $a0, 0x4
    ctx->r6 = ADD32(ctx->r4, 0X4);
L_8006AED4:
    // 0x8006AED4: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x8006AED8: nop

    // 0x8006AEDC: beq         $t6, $zero, L_8006AEE8
    if (ctx->r14 == 0) {
        // 0x8006AEE0: nop
    
            goto L_8006AEE8;
    }
    // 0x8006AEE0: nop

    // 0x8006AEE4: sb          $a1, 0x10($a2)
    MEM_B(0X10, ctx->r6) = ctx->r5;
L_8006AEE8:
    // 0x8006AEE8: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8006AEEC: sltiu       $at, $a3, 0x2C
    ctx->r1 = ctx->r7 < 0X2C ? 1 : 0;
    // 0x8006AEF0: bne         $at, $zero, L_8006AED4
    if (ctx->r1 != 0) {
        // 0x8006AEF4: addiu       $a2, $a2, 0x12
        ctx->r6 = ADD32(ctx->r6, 0X12);
            goto L_8006AED4;
    }
    // 0x8006AEF4: addiu       $a2, $a2, 0x12
    ctx->r6 = ADD32(ctx->r6, 0X12);
L_8006AEF8:
    // 0x8006AEF8: jr          $ra
    // 0x8006AEFC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006AEFC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8006AF00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AF00: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x8006AF04: nop

    // 0x8006AF08: beq         $t6, $zero, L_8006AF68
    if (ctx->r14 == 0) {
        // 0x8006AF0C: nop
    
            goto L_8006AF68;
    }
    // 0x8006AF0C: nop

    // 0x8006AF10: lbu         $t7, 0x6($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X6);
    // 0x8006AF14: nop

    // 0x8006AF18: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8006AF1C: beq         $at, $zero, L_8006AF2C
    if (ctx->r1 == 0) {
        // 0x8006AF20: nop
    
            goto L_8006AF2C;
    }
    // 0x8006AF20: nop

    // 0x8006AF24: lbu         $a1, 0x6($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X6);
    // 0x8006AF28: nop

L_8006AF2C:
    // 0x8006AF2C: lbu         $t8, 0x6($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X6);
    // 0x8006AF30: nop

    // 0x8006AF34: subu        $t9, $t8, $a1
    ctx->r25 = SUB32(ctx->r24, ctx->r5);
    // 0x8006AF38: sb          $t9, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r25;
    // 0x8006AF3C: lbu         $t0, 0x6($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X6);
    // 0x8006AF40: nop

    // 0x8006AF44: bne         $t0, $zero, L_8006AF50
    if (ctx->r8 != 0) {
        // 0x8006AF48: nop
    
            goto L_8006AF50;
    }
    // 0x8006AF48: nop

    // 0x8006AF4C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
L_8006AF50:
    // 0x8006AF50: lhu         $t2, 0x4($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X4);
    // 0x8006AF54: lhu         $t1, 0x2($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X2);
    // 0x8006AF58: multu       $t2, $a1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006AF5C: mflo        $t3
    ctx->r11 = lo;
    // 0x8006AF60: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8006AF64: sh          $t4, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r12;
L_8006AF68:
    // 0x8006AF68: jr          $ra
    // 0x8006AF6C: nop

    return;
    // 0x8006AF6C: nop

;}
RECOMP_FUNC void func_8006AF70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AF70: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8006AF74: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8006AF78: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8006AF7C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8006AF80: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8006AF84: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8006AF88: nop

    // 0x8006AF8C: beq         $t7, $zero, L_8006B040
    if (ctx->r15 == 0) {
        // 0x8006AF90: nop
    
            goto L_8006B040;
    }
    // 0x8006AF90: nop

    // 0x8006AF94: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8006AF98: nop

    // 0x8006AF9C: lhu         $a0, 0x2($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X2);
    // 0x8006AFA0: jal         0x800B8010
    // 0x8006AFA4: nop

    sins(rdram, ctx);
        goto after_0;
    // 0x8006AFA4: nop

    after_0:
    // 0x8006AFA8: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x8006AFAC: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x8006AFB0: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8006AFB4: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x8006AFB8: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8006AFBC: lbu         $t1, 0xC($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XC);
    // 0x8006AFC0: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x8006AFC4: sra         $t9, $s0, 15
    ctx->r25 = S32(SIGNED(ctx->r16) >> 15);
    // 0x8006AFC8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8006AFCC: beq         $t1, $at, L_8006AFE4
    if (ctx->r9 == ctx->r1) {
        // 0x8006AFD0: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_8006AFE4;
    }
    // 0x8006AFD0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x8006AFD4: multu       $t1, $s0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006AFD8: mflo        $s0
    ctx->r16 = lo;
    // 0x8006AFDC: sra         $t2, $s0, 8
    ctx->r10 = S32(SIGNED(ctx->r16) >> 8);
    // 0x8006AFE0: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
L_8006AFE4:
    // 0x8006AFE4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006AFE8: jal         0x8005BBFC
    // 0x8006AFEC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_1;
    // 0x8006AFEC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_1:
    // 0x8006AFF0: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x8006AFF4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8006AFF8: lh          $t4, 0xA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA);
    // 0x8006AFFC: lh          $a3, 0x8($t3)
    ctx->r7 = MEM_H(ctx->r11, 0X8);
    // 0x8006B000: lw          $a1, -0x450($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X450);
    // 0x8006B004: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006B008: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8006B00C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8006B010: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8006B014: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8006B018: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8006B01C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8006B020: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8006B024: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8006B028: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006B02C: jal         0x80057460
    // 0x8006B030: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_80057460(rdram, ctx);
        goto after_2;
    // 0x8006B030: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_2:
    // 0x8006B034: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006B038: jal         0x8005BE40
    // 0x8006B03C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_3;
    // 0x8006B03C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_3:
L_8006B040:
    // 0x8006B040: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8006B044: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8006B048: jr          $ra
    // 0x8006B04C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8006B04C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8006B050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B050: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006B054: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006B058: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8006B05C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006B060: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8006B064: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8006B068: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006B06C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8006B070: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x8006B074: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8006B078: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x8006B07C: sb          $t8, 0x6($t9)
    MEM_B(0X6, ctx->r25) = ctx->r24;
    // 0x8006B080: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8006B084: ori         $t3, $zero, 0x8000
    ctx->r11 = 0 | 0X8000;
    // 0x8006B088: sh          $zero, 0x2($t0)
    MEM_H(0X2, ctx->r8) = 0;
    // 0x8006B08C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8006B090: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8006B094: lbu         $t2, 0x6($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X6);
    // 0x8006B098: nop

    // 0x8006B09C: div         $zero, $t3, $t2
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r10)));
    // 0x8006B0A0: bne         $t2, $zero, L_8006B0AC
    if (ctx->r10 != 0) {
        // 0x8006B0A4: nop
    
            goto L_8006B0AC;
    }
    // 0x8006B0A4: nop

    // 0x8006B0A8: break       7
    do_break(2147922088);
L_8006B0AC:
    // 0x8006B0AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006B0B0: bne         $t2, $at, L_8006B0C4
    if (ctx->r10 != ctx->r1) {
        // 0x8006B0B4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8006B0C4;
    }
    // 0x8006B0B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8006B0B8: bne         $t3, $at, L_8006B0C4
    if (ctx->r11 != ctx->r1) {
        // 0x8006B0BC: nop
    
            goto L_8006B0C4;
    }
    // 0x8006B0BC: nop

    // 0x8006B0C0: break       6
    do_break(2147922112);
L_8006B0C4:
    // 0x8006B0C4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8006B0C8: mflo        $t4
    ctx->r12 = lo;
    // 0x8006B0CC: sh          $t4, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r12;
    // 0x8006B0D0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006B0D4: nop

    // 0x8006B0D8: sb          $t5, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r13;
    // 0x8006B0DC: lbu         $s0, 0x33($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X33);
    // 0x8006B0E0: nop

    // 0x8006B0E4: beq         $s0, $at, L_8006B1C0
    if (ctx->r16 == ctx->r1) {
        // 0x8006B0E8: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_8006B1C0;
    }
    // 0x8006B0E8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8006B0EC: beq         $s0, $at, L_8006B15C
    if (ctx->r16 == ctx->r1) {
        // 0x8006B0F0: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_8006B15C;
    }
    // 0x8006B0F0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8006B0F4: bne         $s0, $at, L_8006B224
    if (ctx->r16 != ctx->r1) {
        // 0x8006B0F8: nop
    
            goto L_8006B224;
    }
    // 0x8006B0F8: nop

    // 0x8006B0FC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8006B100: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8006B104: sb          $zero, 0x1($t7)
    MEM_B(0X1, ctx->r15) = 0;
    // 0x8006B108: lw          $t8, -0x450($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X450);
    // 0x8006B10C: lh          $t3, 0x2C($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2C);
    // 0x8006B110: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8006B114: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006B118: sh          $t9, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r25;
    // 0x8006B11C: lhu         $t0, 0x2($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X2);
    // 0x8006B120: addiu       $t4, $t9, -0x2C
    ctx->r12 = ADD32(ctx->r25, -0X2C);
    // 0x8006B124: sra         $t1, $t4, 1
    ctx->r9 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8006B128: sra         $t2, $t3, 2
    ctx->r10 = S32(SIGNED(ctx->r11) >> 2);
    // 0x8006B12C: subu        $t5, $t2, $t1
    ctx->r13 = SUB32(ctx->r10, ctx->r9);
    // 0x8006B130: sh          $t0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r8;
    // 0x8006B134: sh          $t5, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r13;
    // 0x8006B138: lhu         $t0, 0x26($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X26);
    // 0x8006B13C: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x8006B140: addiu       $t3, $t0, -0x2C
    ctx->r11 = ADD32(ctx->r8, -0X2C);
    // 0x8006B144: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8006B148: sra         $t9, $t3, 1
    ctx->r25 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8006B14C: sra         $t8, $t7, 2
    ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
    // 0x8006B150: subu        $t4, $t8, $t9
    ctx->r12 = SUB32(ctx->r24, ctx->r25);
    // 0x8006B154: b           L_8006B238
    // 0x8006B158: sh          $t4, 0xA($t2)
    MEM_H(0XA, ctx->r10) = ctx->r12;
        goto L_8006B238;
    // 0x8006B158: sh          $t4, 0xA($t2)
    MEM_H(0XA, ctx->r10) = ctx->r12;
L_8006B15C:
    // 0x8006B15C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8006B160: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8006B164: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006B168: sb          $t1, 0x1($t5)
    MEM_B(0X1, ctx->r13) = ctx->r9;
    // 0x8006B16C: lw          $t6, -0x450($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X450);
    // 0x8006B170: lh          $t3, 0x2C($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2C);
    // 0x8006B174: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x8006B178: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8006B17C: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
    // 0x8006B180: lhu         $t0, 0x2($t6)
    ctx->r8 = MEM_HU(ctx->r14, 0X2);
    // 0x8006B184: addiu       $t9, $t7, -0x28
    ctx->r25 = ADD32(ctx->r15, -0X28);
    // 0x8006B188: sra         $t4, $t9, 1
    ctx->r12 = S32(SIGNED(ctx->r25) >> 1);
    // 0x8006B18C: sra         $t8, $t3, 2
    ctx->r24 = S32(SIGNED(ctx->r11) >> 2);
    // 0x8006B190: subu        $t2, $t8, $t4
    ctx->r10 = SUB32(ctx->r24, ctx->r12);
    // 0x8006B194: sh          $t0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r8;
    // 0x8006B198: sh          $t2, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r10;
    // 0x8006B19C: lhu         $t0, 0x26($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X26);
    // 0x8006B1A0: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x8006B1A4: addiu       $t3, $t0, -0x28
    ctx->r11 = ADD32(ctx->r8, -0X28);
    // 0x8006B1A8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8006B1AC: sra         $t7, $t3, 1
    ctx->r15 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8006B1B0: sra         $t6, $t5, 2
    ctx->r14 = S32(SIGNED(ctx->r13) >> 2);
    // 0x8006B1B4: subu        $t9, $t6, $t7
    ctx->r25 = SUB32(ctx->r14, ctx->r15);
    // 0x8006B1B8: b           L_8006B238
    // 0x8006B1BC: sh          $t9, 0xA($t8)
    MEM_H(0XA, ctx->r24) = ctx->r25;
        goto L_8006B238;
    // 0x8006B1BC: sh          $t9, 0xA($t8)
    MEM_H(0XA, ctx->r24) = ctx->r25;
L_8006B1C0:
    // 0x8006B1C0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8006B1C4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8006B1C8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8006B1CC: sb          $t4, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r12;
    // 0x8006B1D0: lw          $t1, -0x450($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X450);
    // 0x8006B1D4: lh          $t3, 0x2C($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2C);
    // 0x8006B1D8: lhu         $t5, 0x0($t1)
    ctx->r13 = MEM_HU(ctx->r9, 0X0);
    // 0x8006B1DC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8006B1E0: sh          $t5, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r13;
    // 0x8006B1E4: lhu         $t0, 0x2($t1)
    ctx->r8 = MEM_HU(ctx->r9, 0X2);
    // 0x8006B1E8: addiu       $t7, $t5, -0x20
    ctx->r15 = ADD32(ctx->r13, -0X20);
    // 0x8006B1EC: sra         $t9, $t7, 1
    ctx->r25 = S32(SIGNED(ctx->r15) >> 1);
    // 0x8006B1F0: sra         $t6, $t3, 2
    ctx->r14 = S32(SIGNED(ctx->r11) >> 2);
    // 0x8006B1F4: subu        $t8, $t6, $t9
    ctx->r24 = SUB32(ctx->r14, ctx->r25);
    // 0x8006B1F8: sh          $t0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r8;
    // 0x8006B1FC: sh          $t8, 0x8($t4)
    MEM_H(0X8, ctx->r12) = ctx->r24;
    // 0x8006B200: lhu         $t0, 0x26($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X26);
    // 0x8006B204: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x8006B208: addiu       $t3, $t0, -0x20
    ctx->r11 = ADD32(ctx->r8, -0X20);
    // 0x8006B20C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006B210: sra         $t5, $t3, 1
    ctx->r13 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8006B214: sra         $t1, $t2, 2
    ctx->r9 = S32(SIGNED(ctx->r10) >> 2);
    // 0x8006B218: subu        $t7, $t1, $t5
    ctx->r15 = SUB32(ctx->r9, ctx->r13);
    // 0x8006B21C: b           L_8006B238
    // 0x8006B220: sh          $t7, 0xA($t6)
    MEM_H(0XA, ctx->r14) = ctx->r15;
        goto L_8006B238;
    // 0x8006B220: sh          $t7, 0xA($t6)
    MEM_H(0XA, ctx->r14) = ctx->r15;
L_8006B224:
    // 0x8006B224: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006B228: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8006B22C: addiu       $a1, $a1, -0x28EC
    ctx->r5 = ADD32(ctx->r5, -0X28EC);
    // 0x8006B230: jal         0x80083560
    // 0x8006B234: addiu       $a0, $a0, -0x2910
    ctx->r4 = ADD32(ctx->r4, -0X2910);
    Fault_Assert(rdram, ctx);
        goto after_0;
    // 0x8006B234: addiu       $a0, $a0, -0x2910
    ctx->r4 = ADD32(ctx->r4, -0X2910);
    after_0:
L_8006B238:
    // 0x8006B238: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B23C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006B240: jr          $ra
    // 0x8006B244: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006B244: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006B248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B248: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006B24C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006B250: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006B254: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006B258: jal         0x8004A34C
    // 0x8006B25C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x8006B25C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006B260: lbu         $s0, 0x2B($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X2B);
    // 0x8006B264: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006B268: beq         $s0, $at, L_8006B290
    if (ctx->r16 == ctx->r1) {
        // 0x8006B26C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8006B290;
    }
    // 0x8006B26C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006B270: beq         $s0, $at, L_8006B2D4
    if (ctx->r16 == ctx->r1) {
        // 0x8006B274: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8006B2D4;
    }
    // 0x8006B274: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8006B278: beq         $s0, $at, L_8006B318
    if (ctx->r16 == ctx->r1) {
        // 0x8006B27C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8006B318;
    }
    // 0x8006B27C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8006B280: beq         $s0, $at, L_8006B318
    if (ctx->r16 == ctx->r1) {
        // 0x8006B284: nop
    
            goto L_8006B318;
    }
    // 0x8006B284: nop

    // 0x8006B288: b           L_8006B35C
    // 0x8006B28C: nop

        goto L_8006B35C;
    // 0x8006B28C: nop

L_8006B290:
    // 0x8006B290: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8006B294: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x8006B298: jal         0x80074888
    // 0x8006B29C: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    func_80074888(rdram, ctx);
        goto after_1;
    // 0x8006B29C: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    after_1:
    // 0x8006B2A0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8006B2A4: jal         0x8007E03C
    // 0x8006B2A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8007E03C(rdram, ctx);
        goto after_2;
    // 0x8006B2A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x8006B2AC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8006B2B0: sw          $v0, -0x450($at)
    MEM_W(-0X450, ctx->r1) = ctx->r2;
    // 0x8006B2B4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8006B2B8: lw          $a1, -0x450($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X450);
    // 0x8006B2BC: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8006B2C0: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x8006B2C4: jal         0x800746C0
    // 0x8006B2C8: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    func_800746C0(rdram, ctx);
        goto after_3;
    // 0x8006B2C8: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    after_3:
    // 0x8006B2CC: b           L_8006B370
    // 0x8006B2D0: nop

        goto L_8006B370;
    // 0x8006B2D0: nop

L_8006B2D4:
    // 0x8006B2D4: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8006B2D8: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x8006B2DC: jal         0x80074888
    // 0x8006B2E0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_80074888(rdram, ctx);
        goto after_4;
    // 0x8006B2E0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_4:
    // 0x8006B2E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006B2E8: jal         0x8007E03C
    // 0x8006B2EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_5;
    // 0x8006B2EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8006B2F0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8006B2F4: sw          $v0, -0x450($at)
    MEM_W(-0X450, ctx->r1) = ctx->r2;
    // 0x8006B2F8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8006B2FC: lw          $a1, -0x450($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X450);
    // 0x8006B300: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8006B304: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x8006B308: jal         0x800746C0
    // 0x8006B30C: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_800746C0(rdram, ctx);
        goto after_6;
    // 0x8006B30C: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_6:
    // 0x8006B310: b           L_8006B370
    // 0x8006B314: nop

        goto L_8006B370;
    // 0x8006B314: nop

L_8006B318:
    // 0x8006B318: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8006B31C: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x8006B320: jal         0x80074888
    // 0x8006B324: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    func_80074888(rdram, ctx);
        goto after_7;
    // 0x8006B324: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    after_7:
    // 0x8006B328: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006B32C: jal         0x8007E03C
    // 0x8006B330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_8;
    // 0x8006B330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8006B334: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8006B338: sw          $v0, -0x450($at)
    MEM_W(-0X450, ctx->r1) = ctx->r2;
    // 0x8006B33C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8006B340: lw          $a1, -0x450($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X450);
    // 0x8006B344: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8006B348: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x8006B34C: jal         0x800746C0
    // 0x8006B350: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    func_800746C0(rdram, ctx);
        goto after_9;
    // 0x8006B350: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    after_9:
    // 0x8006B354: b           L_8006B370
    // 0x8006B358: nop

        goto L_8006B370;
    // 0x8006B358: nop

L_8006B35C:
    // 0x8006B35C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006B360: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8006B364: addiu       $a1, $a1, -0x28AC
    ctx->r5 = ADD32(ctx->r5, -0X28AC);
    // 0x8006B368: jal         0x80083560
    // 0x8006B36C: addiu       $a0, $a0, -0x28D4
    ctx->r4 = ADD32(ctx->r4, -0X28D4);
    Fault_Assert(rdram, ctx);
        goto after_10;
    // 0x8006B36C: addiu       $a0, $a0, -0x28D4
    ctx->r4 = ADD32(ctx->r4, -0X28D4);
    after_10:
L_8006B370:
    // 0x8006B370: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B374: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006B378: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006B37C: jr          $ra
    // 0x8006B380: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006B380: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006B384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B384: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006B388: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006B38C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B390: lw          $a0, -0x450($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X450);
    // 0x8006B394: jal         0x8007E328
    // 0x8006B398: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x8006B398: nop

    after_0:
    // 0x8006B39C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006B3A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006B3A4: jr          $ra
    // 0x8006B3A8: nop

    return;
    // 0x8006B3A8: nop

    // 0x8006B3AC: nop

;}
RECOMP_FUNC void func_8006B3B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B3B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006B3B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006B3B8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8006B3BC: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x8006B3C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006B3C4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006B3C8: beq         $at, $zero, L_8006B440
    if (ctx->r1 == 0) {
        // 0x8006B3CC: sw          $s2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r18;
            goto L_8006B440;
    }
    // 0x8006B3CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
L_8006B3D0:
    // 0x8006B3D0: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8006B3D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006B3D8: lb          $s2, 0x1($t6)
    ctx->r18 = MEM_B(ctx->r14, 0X1);
    // 0x8006B3DC: jal         0x8006E498
    // 0x8006B3E0: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
    func_8006E498(rdram, ctx);
        goto after_0;
    // 0x8006B3E0: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
    after_0:
    // 0x8006B3E4: beq         $v0, $zero, L_8006B404
    if (ctx->r2 == 0) {
        // 0x8006B3E8: nop
    
            goto L_8006B404;
    }
    // 0x8006B3E8: nop

L_8006B3EC:
    // 0x8006B3EC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8006B3F0: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
    // 0x8006B3F4: jal         0x8006E498
    // 0x8006B3F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8006E498(rdram, ctx);
        goto after_1;
    // 0x8006B3F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8006B3FC: bne         $v0, $zero, L_8006B3EC
    if (ctx->r2 != 0) {
        // 0x8006B400: nop
    
            goto L_8006B3EC;
    }
    // 0x8006B400: nop

L_8006B404:
    // 0x8006B404: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8006B408: nop

    // 0x8006B40C: lb          $t8, 0x1($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X1);
    // 0x8006B410: nop

    // 0x8006B414: beq         $t8, $s2, L_8006B430
    if (ctx->r24 == ctx->r18) {
        // 0x8006B418: nop
    
            goto L_8006B430;
    }
    // 0x8006B418: nop

    // 0x8006B41C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006B420: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8006B424: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8006B428: jal         0x8006E0E8
    // 0x8006B42C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_8006E0E8(rdram, ctx);
        goto after_2;
    // 0x8006B42C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_2:
L_8006B430:
    // 0x8006B430: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006B434: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x8006B438: bne         $at, $zero, L_8006B3D0
    if (ctx->r1 != 0) {
        // 0x8006B43C: nop
    
            goto L_8006B3D0;
    }
    // 0x8006B43C: nop

L_8006B440:
    // 0x8006B440: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006B444: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B448: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006B44C: jr          $ra
    // 0x8006B450: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006B450: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006B454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B454: lb          $t7, 0x5($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X5);
    // 0x8006B458: lb          $t8, 0x5($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X5);
    // 0x8006B45C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8006B460: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8006B464: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x8006B468: sb          $t9, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r25;
    // 0x8006B46C: sb          $t7, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r15;
    // 0x8006B470: jr          $ra
    // 0x8006B474: sb          $t8, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r24;
    return;
    // 0x8006B474: sb          $t8, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_8006B478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B478: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006B47C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006B480: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006B484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B488: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006B48C: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8006B490: nop

    // 0x8006B494: beq         $t7, $zero, L_8006B52C
    if (ctx->r15 == 0) {
        // 0x8006B498: nop
    
            goto L_8006B52C;
    }
    // 0x8006B498: nop

    // 0x8006B49C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8006B4A0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B4A4: lbu         $t9, 0x3($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X3);
    // 0x8006B4A8: nop

    // 0x8006B4AC: slt         $at, $t0, $t9
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8006B4B0: beq         $at, $zero, L_8006B4C4
    if (ctx->r1 == 0) {
        // 0x8006B4B4: nop
    
            goto L_8006B4C4;
    }
    // 0x8006B4B4: nop

    // 0x8006B4B8: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x8006B4BC: b           L_8006B52C
    // 0x8006B4C0: sb          $t1, 0x3($t8)
    MEM_B(0X3, ctx->r24) = ctx->r9;
        goto L_8006B52C;
    // 0x8006B4C0: sb          $t1, 0x3($t8)
    MEM_B(0X3, ctx->r24) = ctx->r9;
L_8006B4C4:
    // 0x8006B4C4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8006B4C8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B4CC: lbu         $t3, 0x3($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X3);
    // 0x8006B4D0: nop

    // 0x8006B4D4: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x8006B4D8: addiu       $t6, $t5, 0x4
    ctx->r14 = ADD32(ctx->r13, 0X4);
    // 0x8006B4DC: sb          $t6, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r14;
    // 0x8006B4E0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8006B4E4: nop

    // 0x8006B4E8: lb          $t9, 0x1($t7)
    ctx->r25 = MEM_B(ctx->r15, 0X1);
    // 0x8006B4EC: nop

    // 0x8006B4F0: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8006B4F4: sb          $t0, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r8;
    // 0x8006B4F8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8006B4FC: nop

    // 0x8006B500: lb          $t8, 0x1($t1)
    ctx->r24 = MEM_B(ctx->r9, 0X1);
    // 0x8006B504: lb          $t3, 0x4($t1)
    ctx->r11 = MEM_B(ctx->r9, 0X4);
    // 0x8006B508: nop

    // 0x8006B50C: slt         $at, $t8, $t3
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8006B510: beq         $at, $zero, L_8006B520
    if (ctx->r1 == 0) {
        // 0x8006B514: nop
    
            goto L_8006B520;
    }
    // 0x8006B514: nop

    // 0x8006B518: b           L_8006B52C
    // 0x8006B51C: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
        goto L_8006B52C;
    // 0x8006B51C: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
L_8006B520:
    // 0x8006B520: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006B524: jal         0x8006B3B0
    // 0x8006B528: nop

    func_8006B3B0(rdram, ctx);
        goto after_0;
    // 0x8006B528: nop

    after_0:
L_8006B52C:
    // 0x8006B52C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006B530: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006B534: jr          $ra
    // 0x8006B538: nop

    return;
    // 0x8006B538: nop

;}
RECOMP_FUNC void func_8006B53C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B53C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006B540: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8006B544: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8006B548: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006B54C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8006B550: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8006B554: lw          $t6, -0x430($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X430);
    // 0x8006B558: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x8006B55C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006B560: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006B564: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006B568: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
    // 0x8006B56C: addu        $s0, $t6, $t9
    ctx->r16 = ADD32(ctx->r14, ctx->r25);
    // 0x8006B570: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006B574: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006B578: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006B57C: blez        $s2, L_8006B5F0
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8006B580: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8006B5F0;
    }
    // 0x8006B580: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8006B584:
    // 0x8006B584: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8006B588: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006B58C: lbu         $t0, 0x1($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X1);
    // 0x8006B590: nop

    // 0x8006B594: beq         $t0, $at, L_8006B5E4
    if (ctx->r8 == ctx->r1) {
        // 0x8006B598: nop
    
            goto L_8006B5E4;
    }
    // 0x8006B598: nop

    // 0x8006B59C: jal         0x8006D5BC
    // 0x8006B5A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8006D5BC(rdram, ctx);
        goto after_0;
    // 0x8006B5A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8006B5A4: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x8006B5A8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8006B5AC: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x8006B5B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8006B5B4: jal         0x80070860
    // 0x8006B5B8: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_80070860(rdram, ctx);
        goto after_1;
    // 0x8006B5B8: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_1:
    // 0x8006B5BC: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
    // 0x8006B5C0: lw          $t5, 0xC($s1)
    ctx->r13 = MEM_W(ctx->r17, 0XC);
    // 0x8006B5C4: lh          $t2, 0x48($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X48);
    // 0x8006B5C8: nop

    // 0x8006B5CC: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x8006B5D0: bgez        $t3, L_8006B5E0
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8006B5D4: sra         $t4, $t3, 3
        ctx->r12 = S32(SIGNED(ctx->r11) >> 3);
            goto L_8006B5E0;
    }
    // 0x8006B5D4: sra         $t4, $t3, 3
    ctx->r12 = S32(SIGNED(ctx->r11) >> 3);
    // 0x8006B5D8: addiu       $at, $t3, 0x7
    ctx->r1 = ADD32(ctx->r11, 0X7);
    // 0x8006B5DC: sra         $t4, $at, 3
    ctx->r12 = S32(SIGNED(ctx->r1) >> 3);
L_8006B5E0:
    // 0x8006B5E0: sh          $t4, 0x4A($t5)
    MEM_H(0X4A, ctx->r13) = ctx->r12;
L_8006B5E4:
    // 0x8006B5E4: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x8006B5E8: bgtz        $s2, L_8006B584
    if (SIGNED(ctx->r18) > 0) {
        // 0x8006B5EC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8006B584;
    }
    // 0x8006B5EC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8006B5F0:
    // 0x8006B5F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006B5F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006B5F8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B5FC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006B600: jr          $ra
    // 0x8006B604: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006B604: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006B608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B608: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006B60C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8006B610: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8006B614: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006B618: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8006B61C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8006B620: lw          $t6, -0x430($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X430);
    // 0x8006B624: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x8006B628: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006B62C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006B630: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006B634: addiu       $s3, $zero, 0xA
    ctx->r19 = ADD32(0, 0XA);
    // 0x8006B638: addu        $s0, $t6, $t9
    ctx->r16 = ADD32(ctx->r14, ctx->r25);
    // 0x8006B63C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006B640: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006B644: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006B648: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006B64C: blez        $s3, L_8006B698
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8006B650: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8006B698;
    }
    // 0x8006B650: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8006B654:
    // 0x8006B654: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8006B658: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006B65C: lbu         $t0, 0x1($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X1);
    // 0x8006B660: nop

    // 0x8006B664: beq         $t0, $at, L_8006B68C
    if (ctx->r8 == ctx->r1) {
        // 0x8006B668: nop
    
            goto L_8006B68C;
    }
    // 0x8006B668: nop

    // 0x8006B66C: jal         0x8006D3C0
    // 0x8006B670: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8006D3C0(rdram, ctx);
        goto after_0;
    // 0x8006B670: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8006B674: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x8006B678: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8006B67C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8006B680: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8006B684: jal         0x80070860
    // 0x8006B688: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_80070860(rdram, ctx);
        goto after_1;
    // 0x8006B688: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_1:
L_8006B68C:
    // 0x8006B68C: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8006B690: bgtz        $s3, L_8006B654
    if (SIGNED(ctx->r19) > 0) {
        // 0x8006B694: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8006B654;
    }
    // 0x8006B694: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8006B698:
    // 0x8006B698: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006B69C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006B6A0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006B6A4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B6A8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006B6AC: jr          $ra
    // 0x8006B6B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006B6B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006B6B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B6B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006B6B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006B6BC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006B6C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B6C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006B6C8: lbu         $t7, 0x3($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3);
    // 0x8006B6CC: nop

    // 0x8006B6D0: beq         $t7, $zero, L_8006B7A4
    if (ctx->r15 == 0) {
        // 0x8006B6D4: nop
    
            goto L_8006B7A4;
    }
    // 0x8006B6D4: nop

    // 0x8006B6D8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8006B6DC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B6E0: lbu         $t9, 0x5($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X5);
    // 0x8006B6E4: nop

    // 0x8006B6E8: slt         $at, $t0, $t9
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8006B6EC: beq         $at, $zero, L_8006B700
    if (ctx->r1 == 0) {
        // 0x8006B6F0: nop
    
            goto L_8006B700;
    }
    // 0x8006B6F0: nop

    // 0x8006B6F4: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x8006B6F8: b           L_8006B7A4
    // 0x8006B6FC: sb          $t1, 0x5($t8)
    MEM_B(0X5, ctx->r24) = ctx->r9;
        goto L_8006B7A4;
    // 0x8006B6FC: sb          $t1, 0x5($t8)
    MEM_B(0X5, ctx->r24) = ctx->r9;
L_8006B700:
    // 0x8006B700: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8006B704: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B708: lbu         $t3, 0x5($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X5);
    // 0x8006B70C: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8006B710: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x8006B714: addiu       $t6, $t5, 0x6
    ctx->r14 = ADD32(ctx->r13, 0X6);
    // 0x8006B718: sb          $t6, 0x5($t2)
    MEM_B(0X5, ctx->r10) = ctx->r14;
    // 0x8006B71C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8006B720: nop

    // 0x8006B724: lb          $t9, 0x1($t7)
    ctx->r25 = MEM_B(ctx->r15, 0X1);
    // 0x8006B728: nop

    // 0x8006B72C: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8006B730: sb          $t0, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r8;
    // 0x8006B734: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8006B738: nop

    // 0x8006B73C: lb          $t8, 0x1($t1)
    ctx->r24 = MEM_B(ctx->r9, 0X1);
    // 0x8006B740: nop

    // 0x8006B744: bne         $t8, $at, L_8006B754
    if (ctx->r24 != ctx->r1) {
        // 0x8006B748: nop
    
            goto L_8006B754;
    }
    // 0x8006B748: nop

    // 0x8006B74C: b           L_8006B7A4
    // 0x8006B750: sb          $zero, 0x3($t1)
    MEM_B(0X3, ctx->r9) = 0;
        goto L_8006B7A4;
    // 0x8006B750: sb          $zero, 0x3($t1)
    MEM_B(0X3, ctx->r9) = 0;
L_8006B754:
    // 0x8006B754: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8006B758: nop

    // 0x8006B75C: lb          $t4, 0x1($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X1);
    // 0x8006B760: nop

    // 0x8006B764: bltz        $t4, L_8006B778
    if (SIGNED(ctx->r12) < 0) {
        // 0x8006B768: nop
    
            goto L_8006B778;
    }
    // 0x8006B768: nop

    // 0x8006B76C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8006B770: jal         0x8006B53C
    // 0x8006B774: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_8006B53C(rdram, ctx);
        goto after_0;
    // 0x8006B774: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_0:
L_8006B778:
    // 0x8006B778: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8006B77C: nop

    // 0x8006B780: lb          $t2, 0x1($t5)
    ctx->r10 = MEM_B(ctx->r13, 0X1);
    // 0x8006B784: lbu         $t6, 0x7($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X7);
    // 0x8006B788: addiu       $t9, $t2, 0x2
    ctx->r25 = ADD32(ctx->r10, 0X2);
    // 0x8006B78C: slt         $at, $t6, $t9
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8006B790: bne         $at, $zero, L_8006B7A4
    if (ctx->r1 != 0) {
        // 0x8006B794: nop
    
            goto L_8006B7A4;
    }
    // 0x8006B794: nop

    // 0x8006B798: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8006B79C: jal         0x8006B608
    // 0x8006B7A0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8006B608(rdram, ctx);
        goto after_1;
    // 0x8006B7A0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_1:
L_8006B7A4:
    // 0x8006B7A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006B7A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006B7AC: jr          $ra
    // 0x8006B7B0: nop

    return;
    // 0x8006B7B0: nop

;}
RECOMP_FUNC void func_8006B7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B7B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006B7B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006B7BC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006B7C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B7C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006B7C8: lbu         $t7, 0x4($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4);
    // 0x8006B7CC: nop

    // 0x8006B7D0: beq         $t7, $zero, L_8006B8A8
    if (ctx->r15 == 0) {
        // 0x8006B7D4: nop
    
            goto L_8006B8A8;
    }
    // 0x8006B7D4: nop

    // 0x8006B7D8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8006B7DC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B7E0: lbu         $t9, 0x6($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X6);
    // 0x8006B7E4: nop

    // 0x8006B7E8: slt         $at, $t0, $t9
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8006B7EC: beq         $at, $zero, L_8006B800
    if (ctx->r1 == 0) {
        // 0x8006B7F0: nop
    
            goto L_8006B800;
    }
    // 0x8006B7F0: nop

    // 0x8006B7F4: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x8006B7F8: b           L_8006B8A8
    // 0x8006B7FC: sb          $t1, 0x6($t8)
    MEM_B(0X6, ctx->r24) = ctx->r9;
        goto L_8006B8A8;
    // 0x8006B7FC: sb          $t1, 0x6($t8)
    MEM_B(0X6, ctx->r24) = ctx->r9;
L_8006B800:
    // 0x8006B800: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8006B804: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B808: lbu         $t3, 0x6($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X6);
    // 0x8006B80C: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x8006B810: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x8006B814: addiu       $t6, $t5, 0x6
    ctx->r14 = ADD32(ctx->r13, 0X6);
    // 0x8006B818: sb          $t6, 0x6($t2)
    MEM_B(0X6, ctx->r10) = ctx->r14;
    // 0x8006B81C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8006B820: nop

    // 0x8006B824: lb          $t9, 0x2($t7)
    ctx->r25 = MEM_B(ctx->r15, 0X2);
    // 0x8006B828: nop

    // 0x8006B82C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8006B830: sb          $t0, 0x2($t7)
    MEM_B(0X2, ctx->r15) = ctx->r8;
    // 0x8006B834: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8006B838: nop

    // 0x8006B83C: lb          $t8, 0x2($t1)
    ctx->r24 = MEM_B(ctx->r9, 0X2);
    // 0x8006B840: nop

    // 0x8006B844: bne         $t8, $at, L_8006B854
    if (ctx->r24 != ctx->r1) {
        // 0x8006B848: nop
    
            goto L_8006B854;
    }
    // 0x8006B848: nop

    // 0x8006B84C: b           L_8006B8A8
    // 0x8006B850: sb          $zero, 0x4($t1)
    MEM_B(0X4, ctx->r9) = 0;
        goto L_8006B8A8;
    // 0x8006B850: sb          $zero, 0x4($t1)
    MEM_B(0X4, ctx->r9) = 0;
L_8006B854:
    // 0x8006B854: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8006B858: nop

    // 0x8006B85C: lb          $t4, 0x2($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X2);
    // 0x8006B860: nop

    // 0x8006B864: slti        $at, $t4, 0x14
    ctx->r1 = SIGNED(ctx->r12) < 0X14 ? 1 : 0;
    // 0x8006B868: beq         $at, $zero, L_8006B87C
    if (ctx->r1 == 0) {
        // 0x8006B86C: nop
    
            goto L_8006B87C;
    }
    // 0x8006B86C: nop

    // 0x8006B870: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8006B874: jal         0x8006B53C
    // 0x8006B878: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_8006B53C(rdram, ctx);
        goto after_0;
    // 0x8006B878: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_0:
L_8006B87C:
    // 0x8006B87C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8006B880: nop

    // 0x8006B884: lb          $t2, 0x2($t5)
    ctx->r10 = MEM_B(ctx->r13, 0X2);
    // 0x8006B888: lbu         $t6, 0x8($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X8);
    // 0x8006B88C: addiu       $t9, $t2, -0x2
    ctx->r25 = ADD32(ctx->r10, -0X2);
    // 0x8006B890: slt         $at, $t9, $t6
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8006B894: bne         $at, $zero, L_8006B8A8
    if (ctx->r1 != 0) {
        // 0x8006B898: nop
    
            goto L_8006B8A8;
    }
    // 0x8006B898: nop

    // 0x8006B89C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8006B8A0: jal         0x8006B608
    // 0x8006B8A4: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8006B608(rdram, ctx);
        goto after_1;
    // 0x8006B8A4: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_1:
L_8006B8A8:
    // 0x8006B8A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006B8AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006B8B0: jr          $ra
    // 0x8006B8B4: nop

    return;
    // 0x8006B8B4: nop

;}
RECOMP_FUNC void func_8006B8B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B8B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006B8BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006B8C0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006B8C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B8C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006B8CC: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8006B8D0: nop

    // 0x8006B8D4: beq         $t7, $zero, L_8006B928
    if (ctx->r15 == 0) {
        // 0x8006B8D8: nop
    
            goto L_8006B928;
    }
    // 0x8006B8D8: nop

    // 0x8006B8DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006B8E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B8E4: jal         0x8006B6B4
    // 0x8006B8E8: nop

    func_8006B6B4(rdram, ctx);
        goto after_0;
    // 0x8006B8E8: nop

    after_0:
    // 0x8006B8EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006B8F0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B8F4: jal         0x8006B7B4
    // 0x8006B8F8: nop

    func_8006B7B4(rdram, ctx);
        goto after_1;
    // 0x8006B8F8: nop

    after_1:
    // 0x8006B8FC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8006B900: nop

    // 0x8006B904: lbu         $t9, 0x3($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X3);
    // 0x8006B908: nop

    // 0x8006B90C: bne         $t9, $zero, L_8006B928
    if (ctx->r25 != 0) {
        // 0x8006B910: nop
    
            goto L_8006B928;
    }
    // 0x8006B910: nop

    // 0x8006B914: lbu         $t0, 0x4($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X4);
    // 0x8006B918: nop

    // 0x8006B91C: bne         $t0, $zero, L_8006B928
    if (ctx->r8 != 0) {
        // 0x8006B920: nop
    
            goto L_8006B928;
    }
    // 0x8006B920: nop

    // 0x8006B924: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
L_8006B928:
    // 0x8006B928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006B92C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006B930: jr          $ra
    // 0x8006B934: nop

    return;
    // 0x8006B934: nop

;}
RECOMP_FUNC void func_8006B938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006B93C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006B940: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8006B944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B948: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006B94C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8006B950: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8006B954: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8006B958: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x8006B95C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B960: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8006B964: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x8006B968: sb          $t8, 0x3($t9)
    MEM_B(0X3, ctx->r25) = ctx->r24;
    // 0x8006B96C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8006B970: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8006B974: nop

    // 0x8006B978: sb          $t0, 0x1($t1)
    MEM_B(0X1, ctx->r9) = ctx->r8;
    // 0x8006B97C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8006B980: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8006B984: nop

    // 0x8006B988: sb          $t2, 0x7($t3)
    MEM_B(0X7, ctx->r11) = ctx->r10;
    // 0x8006B98C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8006B990: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x8006B994: sb          $t4, 0x5($t5)
    MEM_B(0X5, ctx->r13) = ctx->r12;
    // 0x8006B998: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8006B99C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8006B9A0: nop

    // 0x8006B9A4: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
    // 0x8006B9A8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8006B9AC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8006B9B0: nop

    // 0x8006B9B4: sb          $t8, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r24;
    // 0x8006B9B8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8006B9BC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8006B9C0: nop

    // 0x8006B9C4: sb          $t0, 0x8($t1)
    MEM_B(0X8, ctx->r9) = ctx->r8;
    // 0x8006B9C8: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8006B9CC: nop

    // 0x8006B9D0: sb          $t2, 0x6($t3)
    MEM_B(0X6, ctx->r11) = ctx->r10;
    // 0x8006B9D4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B9D8: nop

    // 0x8006B9DC: beq         $t4, $zero, L_8006B9F4
    if (ctx->r12 == 0) {
        // 0x8006B9E0: nop
    
            goto L_8006B9F4;
    }
    // 0x8006B9E0: nop

    // 0x8006B9E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006B9E8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8006B9EC: jal         0x8006B53C
    // 0x8006B9F0: nop

    func_8006B53C(rdram, ctx);
        goto after_0;
    // 0x8006B9F0: nop

    after_0:
L_8006B9F4:
    // 0x8006B9F4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8006B9F8: nop

    // 0x8006B9FC: beq         $t5, $zero, L_8006BA14
    if (ctx->r13 == 0) {
        // 0x8006BA00: nop
    
            goto L_8006BA14;
    }
    // 0x8006BA00: nop

    // 0x8006BA04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006BA08: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8006BA0C: jal         0x8006B53C
    // 0x8006BA10: nop

    func_8006B53C(rdram, ctx);
        goto after_1;
    // 0x8006BA10: nop

    after_1:
L_8006BA14:
    // 0x8006BA14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006BA18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006BA1C: jr          $ra
    // 0x8006BA20: nop

    return;
    // 0x8006BA20: nop

;}
RECOMP_FUNC void func_8006BA24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006BA24: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006BA28: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006BA2C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8006BA30: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006BA34: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8006BA38: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8006BA3C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006BA40: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006BA44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006BA48: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8006BA4C: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x8006BA50: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8006BA54: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x8006BA58: sb          $zero, 0x1($t8)
    MEM_B(0X1, ctx->r24) = 0;
    // 0x8006BA5C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8006BA60: lh          $t9, 0x3E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X3E);
    // 0x8006BA64: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006BA68: sb          $t9, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r25;
    // 0x8006BA6C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8006BA70: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8006BA74: sb          $t1, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r9;
    // 0x8006BA78: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8006BA7C: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8006BA80: beq         $at, $zero, L_8006BB0C
    if (ctx->r1 == 0) {
        // 0x8006BA84: sb          $t3, 0x4($t4)
        MEM_B(0X4, ctx->r12) = ctx->r11;
            goto L_8006BB0C;
    }
    // 0x8006BA84: sb          $t3, 0x4($t4)
    MEM_B(0X4, ctx->r12) = ctx->r11;
L_8006BA88:
    // 0x8006BA88: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8006BA8C: sll         $t6, $s0, 1
    ctx->r14 = S32(ctx->r16 << 1);
    // 0x8006BA90: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8006BA94: lb          $t8, 0x16($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X16);
    // 0x8006BA98: lh          $t9, 0x3E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X3E);
    // 0x8006BA9C: nop

    // 0x8006BAA0: bne         $t8, $t9, L_8006BAFC
    if (ctx->r24 != ctx->r25) {
        // 0x8006BAA4: nop
    
            goto L_8006BAFC;
    }
    // 0x8006BAA4: nop

    // 0x8006BAA8: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8006BAAC: sll         $t2, $s0, 1
    ctx->r10 = S32(ctx->r16 << 1);
    // 0x8006BAB0: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    // 0x8006BAB4: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x8006BAB8: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8006BABC: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8006BAC0: lb          $s1, 0x15($t3)
    ctx->r17 = MEM_B(ctx->r11, 0X15);
    // 0x8006BAC4: lb          $t5, 0x3($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X3);
    // 0x8006BAC8: nop

    // 0x8006BACC: slt         $at, $s1, $t5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8006BAD0: beq         $at, $zero, L_8006BADC
    if (ctx->r1 == 0) {
        // 0x8006BAD4: nop
    
            goto L_8006BADC;
    }
    // 0x8006BAD4: nop

    // 0x8006BAD8: sb          $s1, 0x3($t4)
    MEM_B(0X3, ctx->r12) = ctx->r17;
L_8006BADC:
    // 0x8006BADC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8006BAE0: nop

    // 0x8006BAE4: lb          $t7, 0x4($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X4);
    // 0x8006BAE8: nop

    // 0x8006BAEC: slt         $at, $t7, $s1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8006BAF0: beq         $at, $zero, L_8006BAFC
    if (ctx->r1 == 0) {
        // 0x8006BAF4: nop
    
            goto L_8006BAFC;
    }
    // 0x8006BAF4: nop

    // 0x8006BAF8: sb          $s1, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r17;
L_8006BAFC:
    // 0x8006BAFC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006BB00: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8006BB04: bne         $at, $zero, L_8006BA88
    if (ctx->r1 != 0) {
        // 0x8006BB08: nop
    
            goto L_8006BA88;
    }
    // 0x8006BB08: nop

L_8006BB0C:
    // 0x8006BB0C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8006BB10: nop

    // 0x8006BB14: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x8006BB18: nop

    // 0x8006BB1C: bne         $t9, $zero, L_8006BC74
    if (ctx->r25 != 0) {
        // 0x8006BB20: nop
    
            goto L_8006BC74;
    }
    // 0x8006BB20: nop

    // 0x8006BB24: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8006BB28: addiu       $t6, $zero, -0x100
    ctx->r14 = ADD32(0, -0X100);
    // 0x8006BB2C: sb          $zero, 0x1($t0)
    MEM_B(0X1, ctx->r8) = 0;
    // 0x8006BB30: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8006BB34: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8006BB38: lb          $t2, 0x3($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X3);
    // 0x8006BB3C: nop

    // 0x8006BB40: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x8006BB44: addiu       $t5, $t3, 0x80
    ctx->r13 = ADD32(ctx->r11, 0X80);
    // 0x8006BB48: sh          $t5, 0x6($t1)
    MEM_H(0X6, ctx->r9) = ctx->r13;
    // 0x8006BB4C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8006BB50: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8006BB54: lh          $t7, 0x6($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X6);
    // 0x8006BB58: nop

    // 0x8006BB5C: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x8006BB60: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8006BB64: mflo        $t9
    ctx->r25 = lo;
    // 0x8006BB68: sh          $t9, 0xA($t4)
    MEM_H(0XA, ctx->r12) = ctx->r25;
    // 0x8006BB6C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8006BB70: nop

    // 0x8006BB74: lb          $t2, 0x3($t0)
    ctx->r10 = MEM_B(ctx->r8, 0X3);
    // 0x8006BB78: nop

    // 0x8006BB7C: sb          $t2, 0xE($t0)
    MEM_B(0XE, ctx->r8) = ctx->r10;
    // 0x8006BB80: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8006BB84: addiu       $t0, $zero, 0xA00
    ctx->r8 = ADD32(0, 0XA00);
    // 0x8006BB88: sb          $t3, 0x10($t5)
    MEM_B(0X10, ctx->r13) = ctx->r11;
    // 0x8006BB8C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8006BB90: nop

    // 0x8006BB94: sb          $zero, 0x12($t1)
    MEM_B(0X12, ctx->r9) = 0;
    // 0x8006BB98: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8006BB9C: nop

    // 0x8006BBA0: lb          $t7, 0x4($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X4);
    // 0x8006BBA4: nop

    // 0x8006BBA8: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8006BBAC: addiu       $t9, $t8, 0x80
    ctx->r25 = ADD32(ctx->r24, 0X80);
    // 0x8006BBB0: sh          $t9, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r25;
    // 0x8006BBB4: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8006BBB8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8006BBBC: lh          $t2, 0x8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X8);
    // 0x8006BBC0: nop

    // 0x8006BBC4: subu        $t3, $t0, $t2
    ctx->r11 = SUB32(ctx->r8, ctx->r10);
    // 0x8006BBC8: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x8006BBCC: mflo        $t5
    ctx->r13 = lo;
    // 0x8006BBD0: sh          $t5, 0xC($t4)
    MEM_H(0XC, ctx->r12) = ctx->r13;
    // 0x8006BBD4: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8006BBD8: nop

    // 0x8006BBDC: lb          $t7, 0x4($t1)
    ctx->r15 = MEM_B(ctx->r9, 0X4);
    // 0x8006BBE0: nop

    // 0x8006BBE4: sb          $t7, 0xF($t1)
    MEM_B(0XF, ctx->r9) = ctx->r15;
    // 0x8006BBE8: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8006BBEC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8006BBF0: sb          $t8, 0x11($t9)
    MEM_B(0X11, ctx->r25) = ctx->r24;
    // 0x8006BBF4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8006BBF8: nop

    // 0x8006BBFC: sb          $zero, 0x13($t6)
    MEM_B(0X13, ctx->r14) = 0;
    // 0x8006BC00: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8006BC04: lw          $t1, -0x430($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X430);
    // 0x8006BC08: lb          $t3, 0x2($t0)
    ctx->r11 = MEM_B(ctx->r8, 0X2);
    // 0x8006BC0C: lb          $t2, 0x3($t0)
    ctx->r10 = MEM_B(ctx->r8, 0X3);
    // 0x8006BC10: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8006BC14: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8006BC18: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x8006BC1C: lb          $s0, 0x3($t0)
    ctx->r16 = MEM_B(ctx->r8, 0X3);
    // 0x8006BC20: lb          $t8, 0x4($t0)
    ctx->r24 = MEM_B(ctx->r8, 0X4);
    // 0x8006BC24: addu        $t4, $t2, $t5
    ctx->r12 = ADD32(ctx->r10, ctx->r13);
    // 0x8006BC28: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x8006BC2C: addu        $s2, $t1, $t7
    ctx->r18 = ADD32(ctx->r9, ctx->r15);
    // 0x8006BC30: slt         $at, $t8, $s0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8006BC34: bne         $at, $zero, L_8006BC74
    if (ctx->r1 != 0) {
        // 0x8006BC38: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_8006BC74;
    }
    // 0x8006BC38: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_8006BC3C:
    // 0x8006BC3C: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8006BC40: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8006BC44: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x8006BC48: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x8006BC4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8006BC50: jal         0x80070860
    // 0x8006BC54: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_80070860(rdram, ctx);
        goto after_0;
    // 0x8006BC54: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_0:
    // 0x8006BC58: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8006BC5C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006BC60: lb          $t3, 0x4($t6)
    ctx->r11 = MEM_B(ctx->r14, 0X4);
    // 0x8006BC64: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8006BC68: slt         $at, $t3, $s0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8006BC6C: beq         $at, $zero, L_8006BC3C
    if (ctx->r1 == 0) {
        // 0x8006BC70: nop
    
            goto L_8006BC3C;
    }
    // 0x8006BC70: nop

L_8006BC74:
    // 0x8006BC74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006BC78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006BC7C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006BC80: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006BC84: jr          $ra
    // 0x8006BC88: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006BC88: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006BC8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006BC8C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006BC90: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006BC94: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8006BC98: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006BC9C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8006BCA0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006BCA4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8006BCA8: lbu         $t7, 0x10($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X10);
    // 0x8006BCAC: nop

    // 0x8006BCB0: beq         $t7, $zero, L_8006BD80
    if (ctx->r15 == 0) {
        // 0x8006BCB4: nop
    
            goto L_8006BD80;
    }
    // 0x8006BCB4: nop

    // 0x8006BCB8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8006BCBC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8006BCC0: lh          $t9, 0xA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA);
    // 0x8006BCC4: lh          $t2, 0x6($t8)
    ctx->r10 = MEM_H(ctx->r24, 0X6);
    // 0x8006BCC8: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006BCCC: mflo        $t1
    ctx->r9 = lo;
    // 0x8006BCD0: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8006BCD4: sh          $t3, 0x6($t8)
    MEM_H(0X6, ctx->r24) = ctx->r11;
    // 0x8006BCD8: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8006BCDC: nop

    // 0x8006BCE0: lh          $s2, 0x6($t4)
    ctx->r18 = MEM_H(ctx->r12, 0X6);
    // 0x8006BCE4: lb          $t6, 0xE($t4)
    ctx->r14 = MEM_B(ctx->r12, 0XE);
    // 0x8006BCE8: sra         $t5, $s2, 8
    ctx->r13 = S32(SIGNED(ctx->r18) >> 8);
    // 0x8006BCEC: or          $s2, $t5, $zero
    ctx->r18 = ctx->r13 | 0;
    // 0x8006BCF0: beq         $t6, $s2, L_8006BD80
    if (ctx->r14 == ctx->r18) {
        // 0x8006BCF4: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_8006BD80;
    }
    // 0x8006BCF4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006BCF8: bne         $s2, $at, L_8006BD18
    if (ctx->r18 != ctx->r1) {
        // 0x8006BCFC: sb          $s2, 0xE($t4)
        MEM_B(0XE, ctx->r12) = ctx->r18;
            goto L_8006BD18;
    }
    // 0x8006BCFC: sb          $s2, 0xE($t4)
    MEM_B(0XE, ctx->r12) = ctx->r18;
    // 0x8006BD00: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8006BD04: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006BD08: sb          $t7, 0x12($t9)
    MEM_B(0X12, ctx->r25) = ctx->r15;
    // 0x8006BD0C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8006BD10: b           L_8006BD80
    // 0x8006BD14: sb          $zero, 0x10($t0)
    MEM_B(0X10, ctx->r8) = 0;
        goto L_8006BD80;
    // 0x8006BD14: sb          $zero, 0x10($t0)
    MEM_B(0X10, ctx->r8) = 0;
L_8006BD18:
    // 0x8006BD18: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8006BD1C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8006BD20: lb          $t3, 0x2($t1)
    ctx->r11 = MEM_B(ctx->r9, 0X2);
    // 0x8006BD24: lw          $t2, -0x430($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X430);
    // 0x8006BD28: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x8006BD2C: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x8006BD30: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x8006BD34: addu        $t5, $s2, $t8
    ctx->r13 = ADD32(ctx->r18, ctx->r24);
    // 0x8006BD38: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8006BD3C: addu        $t4, $t2, $t6
    ctx->r12 = ADD32(ctx->r10, ctx->r14);
    // 0x8006BD40: lw          $s0, 0x4($t4)
    ctx->r16 = MEM_W(ctx->r12, 0X4);
    // 0x8006BD44: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006BD48: lbu         $t7, 0x1($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1);
    // 0x8006BD4C: nop

    // 0x8006BD50: bne         $t7, $at, L_8006BD68
    if (ctx->r15 != ctx->r1) {
        // 0x8006BD54: nop
    
            goto L_8006BD68;
    }
    // 0x8006BD54: nop

    // 0x8006BD58: sb          $zero, 0x12($t1)
    MEM_B(0X12, ctx->r9) = 0;
    // 0x8006BD5C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8006BD60: b           L_8006BD80
    // 0x8006BD64: sb          $zero, 0x10($t9)
    MEM_B(0X10, ctx->r25) = 0;
        goto L_8006BD80;
    // 0x8006BD64: sb          $zero, 0x10($t9)
    MEM_B(0X10, ctx->r25) = 0;
L_8006BD68:
    // 0x8006BD68: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x8006BD6C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8006BD70: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x8006BD74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8006BD78: jal         0x80070860
    // 0x8006BD7C: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_80070860(rdram, ctx);
        goto after_0;
    // 0x8006BD7C: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_0:
L_8006BD80:
    // 0x8006BD80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006BD84: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8006BD88: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006BD8C: jr          $ra
    // 0x8006BD90: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006BD90: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006BD94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006BD94: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006BD98: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006BD9C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8006BDA0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006BDA4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8006BDA8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006BDAC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8006BDB0: lbu         $t7, 0x11($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X11);
    // 0x8006BDB4: nop

    // 0x8006BDB8: beq         $t7, $zero, L_8006BE88
    if (ctx->r15 == 0) {
        // 0x8006BDBC: nop
    
            goto L_8006BE88;
    }
    // 0x8006BDBC: nop

    // 0x8006BDC0: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8006BDC4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8006BDC8: lh          $t9, 0xC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC);
    // 0x8006BDCC: lh          $t2, 0x8($t8)
    ctx->r10 = MEM_H(ctx->r24, 0X8);
    // 0x8006BDD0: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006BDD4: mflo        $t1
    ctx->r9 = lo;
    // 0x8006BDD8: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x8006BDDC: sh          $t3, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r11;
    // 0x8006BDE0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8006BDE4: nop

    // 0x8006BDE8: lh          $s2, 0x8($t4)
    ctx->r18 = MEM_H(ctx->r12, 0X8);
    // 0x8006BDEC: lb          $t6, 0xF($t4)
    ctx->r14 = MEM_B(ctx->r12, 0XF);
    // 0x8006BDF0: sra         $t5, $s2, 8
    ctx->r13 = S32(SIGNED(ctx->r18) >> 8);
    // 0x8006BDF4: or          $s2, $t5, $zero
    ctx->r18 = ctx->r13 | 0;
    // 0x8006BDF8: beq         $t6, $s2, L_8006BE88
    if (ctx->r14 == ctx->r18) {
        // 0x8006BDFC: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_8006BE88;
    }
    // 0x8006BDFC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8006BE00: bne         $s2, $at, L_8006BE20
    if (ctx->r18 != ctx->r1) {
        // 0x8006BE04: sb          $s2, 0xF($t4)
        MEM_B(0XF, ctx->r12) = ctx->r18;
            goto L_8006BE20;
    }
    // 0x8006BE04: sb          $s2, 0xF($t4)
    MEM_B(0XF, ctx->r12) = ctx->r18;
    // 0x8006BE08: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8006BE0C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006BE10: sb          $t7, 0x13($t9)
    MEM_B(0X13, ctx->r25) = ctx->r15;
    // 0x8006BE14: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8006BE18: b           L_8006BE88
    // 0x8006BE1C: sb          $zero, 0x11($t0)
    MEM_B(0X11, ctx->r8) = 0;
        goto L_8006BE88;
    // 0x8006BE1C: sb          $zero, 0x11($t0)
    MEM_B(0X11, ctx->r8) = 0;
L_8006BE20:
    // 0x8006BE20: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8006BE24: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8006BE28: lb          $t3, 0x2($t1)
    ctx->r11 = MEM_B(ctx->r9, 0X2);
    // 0x8006BE2C: lw          $t2, -0x430($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X430);
    // 0x8006BE30: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x8006BE34: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x8006BE38: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x8006BE3C: addu        $t5, $s2, $t8
    ctx->r13 = ADD32(ctx->r18, ctx->r24);
    // 0x8006BE40: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8006BE44: addu        $t4, $t2, $t6
    ctx->r12 = ADD32(ctx->r10, ctx->r14);
    // 0x8006BE48: lw          $s0, 0x4($t4)
    ctx->r16 = MEM_W(ctx->r12, 0X4);
    // 0x8006BE4C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8006BE50: lbu         $t7, 0x1($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1);
    // 0x8006BE54: nop

    // 0x8006BE58: bne         $t7, $at, L_8006BE70
    if (ctx->r15 != ctx->r1) {
        // 0x8006BE5C: nop
    
            goto L_8006BE70;
    }
    // 0x8006BE5C: nop

    // 0x8006BE60: sb          $zero, 0x13($t1)
    MEM_B(0X13, ctx->r9) = 0;
    // 0x8006BE64: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8006BE68: b           L_8006BE88
    // 0x8006BE6C: sb          $zero, 0x11($t9)
    MEM_B(0X11, ctx->r25) = 0;
        goto L_8006BE88;
    // 0x8006BE6C: sb          $zero, 0x11($t9)
    MEM_B(0X11, ctx->r25) = 0;
L_8006BE70:
    // 0x8006BE70: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x8006BE74: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8006BE78: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x8006BE7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8006BE80: jal         0x80070860
    // 0x8006BE84: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_80070860(rdram, ctx);
        goto after_0;
    // 0x8006BE84: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_0:
L_8006BE88:
    // 0x8006BE88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006BE8C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8006BE90: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006BE94: jr          $ra
    // 0x8006BE98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006BE98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
