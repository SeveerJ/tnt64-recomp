#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8003F7AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F7AC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8003F7B0: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8003F7B4: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8003F7B8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8003F7BC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8003F7C0: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8003F7C4: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8003F7C8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8003F7CC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8003F7D0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003F7D4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003F7D8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003F7DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003F7E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003F7E4: lb          $t7, 0x0($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X0);
    // 0x8003F7E8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8003F7EC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8003F7F0: addu        $s5, $t6, $t8
    ctx->r21 = ADD32(ctx->r14, ctx->r24);
    // 0x8003F7F4: lbu         $t9, 0x1($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X1);
    // 0x8003F7F8: lw          $t0, -0x490($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X490);
    // 0x8003F7FC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8003F800: sb          $t9, 0x11($t0)
    MEM_B(0X11, ctx->r8) = ctx->r25;
    // 0x8003F804: lw          $t2, -0x490($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X490);
    // 0x8003F808: lb          $t1, 0x2($s5)
    ctx->r9 = MEM_B(ctx->r21, 0X2);
    // 0x8003F80C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8003F810: sb          $t1, 0x12($t2)
    MEM_B(0X12, ctx->r10) = ctx->r9;
    // 0x8003F814: lw          $t4, -0x490($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X490);
    // 0x8003F818: lbu         $t3, 0x3($s5)
    ctx->r11 = MEM_BU(ctx->r21, 0X3);
    // 0x8003F81C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8003F820: sb          $t3, 0xA($t4)
    MEM_B(0XA, ctx->r12) = ctx->r11;
    // 0x8003F824: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x8003F828: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8003F82C: lb          $t7, 0x0($t5)
    ctx->r15 = MEM_B(ctx->r13, 0X0);
    // 0x8003F830: addiu       $s5, $t5, 0x1
    ctx->r21 = ADD32(ctx->r13, 0X1);
    // 0x8003F834: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8003F838: beq         $at, $zero, L_8003F8AC
    if (ctx->r1 == 0) {
        // 0x8003F83C: nop
    
            goto L_8003F8AC;
    }
    // 0x8003F83C: nop

L_8003F840:
    // 0x8003F840: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003F844: lw          $t6, -0x490($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X490);
    // 0x8003F848: lbu         $t9, 0x0($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X0);
    // 0x8003F84C: lb          $t8, 0x11($t6)
    ctx->r24 = MEM_B(ctx->r14, 0X11);
    // 0x8003F850: nop

    // 0x8003F854: bne         $t8, $t9, L_8003F88C
    if (ctx->r24 != ctx->r25) {
        // 0x8003F858: nop
    
            goto L_8003F88C;
    }
    // 0x8003F858: nop

    // 0x8003F85C: lb          $t0, 0x12($t6)
    ctx->r8 = MEM_B(ctx->r14, 0X12);
    // 0x8003F860: lb          $t1, 0x1($s5)
    ctx->r9 = MEM_B(ctx->r21, 0X1);
    // 0x8003F864: nop

    // 0x8003F868: bne         $t0, $t1, L_8003F88C
    if (ctx->r8 != ctx->r9) {
        // 0x8003F86C: nop
    
            goto L_8003F88C;
    }
    // 0x8003F86C: nop

    // 0x8003F870: lbu         $t2, 0xA($t6)
    ctx->r10 = MEM_BU(ctx->r14, 0XA);
    // 0x8003F874: lbu         $t3, 0x2($s5)
    ctx->r11 = MEM_BU(ctx->r21, 0X2);
    // 0x8003F878: nop

    // 0x8003F87C: bne         $t2, $t3, L_8003F88C
    if (ctx->r10 != ctx->r11) {
        // 0x8003F880: nop
    
            goto L_8003F88C;
    }
    // 0x8003F880: nop

    // 0x8003F884: b           L_800400D4
    // 0x8003F888: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800400D4;
    // 0x8003F888: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003F88C:
    // 0x8003F88C: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x8003F890: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003F894: lb          $t7, 0x0($t5)
    ctx->r15 = MEM_B(ctx->r13, 0X0);
    // 0x8003F898: andi        $t4, $s1, 0xFF
    ctx->r12 = ctx->r17 & 0XFF;
    // 0x8003F89C: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x8003F8A0: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8003F8A4: bne         $at, $zero, L_8003F840
    if (ctx->r1 != 0) {
        // 0x8003F8A8: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_8003F840;
    }
    // 0x8003F8A8: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
L_8003F8AC:
    // 0x8003F8AC: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8003F8B0: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8003F8B4: lw          $t1, -0x490($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X490);
    // 0x8003F8B8: lb          $t9, 0x0($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X0);
    // 0x8003F8BC: lb          $a0, 0x12($t1)
    ctx->r4 = MEM_B(ctx->r9, 0X12);
    // 0x8003F8C0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8003F8C4: addu        $s5, $t8, $t0
    ctx->r21 = ADD32(ctx->r24, ctx->r8);
    // 0x8003F8C8: lbu         $a1, 0xA($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0XA);
    // 0x8003F8CC: lbu         $a2, 0x13($t1)
    ctx->r6 = MEM_BU(ctx->r9, 0X13);
    // 0x8003F8D0: jal         0x800408B0
    // 0x8003F8D4: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    func_800408B0(rdram, ctx);
        goto after_0;
    // 0x8003F8D4: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    after_0:
    // 0x8003F8D8: lbu         $t6, 0x57($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X57);
    // 0x8003F8DC: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x8003F8E0: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x8003F8E4: beq         $at, $zero, L_8003FA9C
    if (ctx->r1 == 0) {
        // 0x8003F8E8: nop
    
            goto L_8003FA9C;
    }
    // 0x8003F8E8: nop

    // 0x8003F8EC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003F8F0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8003F8F4: addu        $at, $at, $t6
    gpr jr_addend_8003F900 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8003F8F8: lw          $t6, -0x4BC0($at)
    ctx->r14 = ADD32(ctx->r1, -0X4BC0);
    // 0x8003F8FC: nop

    // 0x8003F900: jr          $t6
    // 0x8003F904: nop

    switch (jr_addend_8003F900 >> 2) {
        case 0: goto L_8003F908; break;
        case 1: goto L_8003F92C; break;
        case 2: goto L_8003F97C; break;
        case 3: goto L_8003F9CC; break;
        case 4: goto L_8003FA38; break;
        default: switch_error(__func__, 0x8003F900, 0x800DB440);
    }
    // 0x8003F904: nop

L_8003F908:
    // 0x8003F908: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003F90C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8003F910: jal         0x8004172C
    // 0x8003F914: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004172C(rdram, ctx);
        goto after_1;
    // 0x8003F914: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8003F918: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x8003F91C: bne         $s1, $zero, L_8003F908
    if (ctx->r17 != 0) {
        // 0x8003F920: nop
    
            goto L_8003F908;
    }
    // 0x8003F920: nop

    // 0x8003F924: b           L_8003FA9C
    // 0x8003F928: nop

        goto L_8003FA9C;
    // 0x8003F928: nop

L_8003F92C:
    // 0x8003F92C: beq         $s0, $zero, L_8003F958
    if (ctx->r16 == 0) {
        // 0x8003F930: nop
    
            goto L_8003F958;
    }
    // 0x8003F930: nop

    // 0x8003F934: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8003F938: lw          $t2, -0x490($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X490);
    // 0x8003F93C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8003F940: lb          $t3, 0x11($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X11);
    // 0x8003F944: nop

    // 0x8003F948: bne         $t3, $at, L_8003F958
    if (ctx->r11 != ctx->r1) {
        // 0x8003F94C: nop
    
            goto L_8003F958;
    }
    // 0x8003F94C: nop

    // 0x8003F950: b           L_8003F96C
    // 0x8003F954: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_8003F96C;
    // 0x8003F954: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8003F958:
    // 0x8003F958: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003F95C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003F960: jal         0x8004172C
    // 0x8003F964: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004172C(rdram, ctx);
        goto after_2;
    // 0x8003F964: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8003F968: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
L_8003F96C:
    // 0x8003F96C: bne         $s1, $zero, L_8003F92C
    if (ctx->r17 != 0) {
        // 0x8003F970: nop
    
            goto L_8003F92C;
    }
    // 0x8003F970: nop

    // 0x8003F974: b           L_8003FA9C
    // 0x8003F978: nop

        goto L_8003FA9C;
    // 0x8003F978: nop

L_8003F97C:
    // 0x8003F97C: beq         $s0, $zero, L_8003F9A8
    if (ctx->r16 == 0) {
        // 0x8003F980: nop
    
            goto L_8003F9A8;
    }
    // 0x8003F980: nop

    // 0x8003F984: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8003F988: lw          $t4, -0x490($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X490);
    // 0x8003F98C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8003F990: lb          $t5, 0x11($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X11);
    // 0x8003F994: nop

    // 0x8003F998: bne         $t5, $at, L_8003F9A8
    if (ctx->r13 != ctx->r1) {
        // 0x8003F99C: nop
    
            goto L_8003F9A8;
    }
    // 0x8003F99C: nop

    // 0x8003F9A0: b           L_8003F9BC
    // 0x8003F9A4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_8003F9BC;
    // 0x8003F9A4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8003F9A8:
    // 0x8003F9A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8003F9AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003F9B0: jal         0x8004172C
    // 0x8003F9B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004172C(rdram, ctx);
        goto after_3;
    // 0x8003F9B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8003F9B8: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
L_8003F9BC:
    // 0x8003F9BC: bne         $s1, $zero, L_8003F97C
    if (ctx->r17 != 0) {
        // 0x8003F9C0: nop
    
            goto L_8003F97C;
    }
    // 0x8003F9C0: nop

    // 0x8003F9C4: b           L_8003FA9C
    // 0x8003F9C8: nop

        goto L_8003FA9C;
    // 0x8003F9C8: nop

L_8003F9CC:
    // 0x8003F9CC: beq         $s0, $zero, L_8003F9F8
    if (ctx->r16 == 0) {
        // 0x8003F9D0: nop
    
            goto L_8003F9F8;
    }
    // 0x8003F9D0: nop

    // 0x8003F9D4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8003F9D8: lw          $t7, -0x490($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X490);
    // 0x8003F9DC: lbu         $t8, 0x5B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003F9E0: lbu         $t9, 0xA($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0XA);
    // 0x8003F9E4: nop

    // 0x8003F9E8: bne         $t9, $t8, L_8003F9F8
    if (ctx->r25 != ctx->r24) {
        // 0x8003F9EC: nop
    
            goto L_8003F9F8;
    }
    // 0x8003F9EC: nop

    // 0x8003F9F0: b           L_8003FA28
    // 0x8003F9F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_8003FA28;
    // 0x8003F9F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8003F9F8:
    // 0x8003F9F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003F9FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003FA00: jal         0x8004172C
    // 0x8003FA04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004172C(rdram, ctx);
        goto after_4;
    // 0x8003FA04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8003FA08: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8003FA0C: lw          $t0, -0x490($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X490);
    // 0x8003FA10: lbu         $t6, 0x2($s5)
    ctx->r14 = MEM_BU(ctx->r21, 0X2);
    // 0x8003FA14: lbu         $t1, 0xA($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XA);
    // 0x8003FA18: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x8003FA1C: bne         $t1, $t6, L_8003FA28
    if (ctx->r9 != ctx->r14) {
        // 0x8003FA20: nop
    
            goto L_8003FA28;
    }
    // 0x8003FA20: nop

    // 0x8003FA24: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8003FA28:
    // 0x8003FA28: bne         $s1, $zero, L_8003F9CC
    if (ctx->r17 != 0) {
        // 0x8003FA2C: nop
    
            goto L_8003F9CC;
    }
    // 0x8003FA2C: nop

    // 0x8003FA30: b           L_8003FA9C
    // 0x8003FA34: nop

        goto L_8003FA9C;
    // 0x8003FA34: nop

L_8003FA38:
    // 0x8003FA38: beq         $s0, $zero, L_8003FA64
    if (ctx->r16 == 0) {
        // 0x8003FA3C: nop
    
            goto L_8003FA64;
    }
    // 0x8003FA3C: nop

    // 0x8003FA40: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8003FA44: lw          $t2, -0x490($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X490);
    // 0x8003FA48: lbu         $t4, 0x5B($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FA4C: lbu         $t3, 0xA($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XA);
    // 0x8003FA50: nop

    // 0x8003FA54: bne         $t3, $t4, L_8003FA64
    if (ctx->r11 != ctx->r12) {
        // 0x8003FA58: nop
    
            goto L_8003FA64;
    }
    // 0x8003FA58: nop

    // 0x8003FA5C: b           L_8003FA94
    // 0x8003FA60: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_8003FA94;
    // 0x8003FA60: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8003FA64:
    // 0x8003FA64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003FA68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003FA6C: jal         0x8004172C
    // 0x8003FA70: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_8004172C(rdram, ctx);
        goto after_5;
    // 0x8003FA70: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_5:
    // 0x8003FA74: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8003FA78: lw          $t5, -0x490($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X490);
    // 0x8003FA7C: lbu         $t9, 0x2($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X2);
    // 0x8003FA80: lbu         $t7, 0xA($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0XA);
    // 0x8003FA84: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x8003FA88: bne         $t7, $t9, L_8003FA94
    if (ctx->r15 != ctx->r25) {
        // 0x8003FA8C: nop
    
            goto L_8003FA94;
    }
    // 0x8003FA8C: nop

    // 0x8003FA90: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8003FA94:
    // 0x8003FA94: bne         $s1, $zero, L_8003FA38
    if (ctx->r17 != 0) {
        // 0x8003FA98: nop
    
            goto L_8003FA38;
    }
    // 0x8003FA98: nop

L_8003FA9C:
    // 0x8003FA9C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8003FAA0: lw          $t8, -0x490($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X490);
    // 0x8003FAA4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8003FAA8: lb          $t0, 0x11($t8)
    ctx->r8 = MEM_B(ctx->r24, 0X11);
    // 0x8003FAAC: nop

    // 0x8003FAB0: bne         $t0, $at, L_8003FAE4
    if (ctx->r8 != ctx->r1) {
        // 0x8003FAB4: nop
    
            goto L_8003FAE4;
    }
    // 0x8003FAB4: nop

    // 0x8003FAB8: lb          $t1, 0x12($t8)
    ctx->r9 = MEM_B(ctx->r24, 0X12);
    // 0x8003FABC: nop

    // 0x8003FAC0: bne         $t1, $zero, L_8003FAE4
    if (ctx->r9 != 0) {
        // 0x8003FAC4: nop
    
            goto L_8003FAE4;
    }
    // 0x8003FAC4: nop

    // 0x8003FAC8: lbu         $t6, 0xA($t8)
    ctx->r14 = MEM_BU(ctx->r24, 0XA);
    // 0x8003FACC: lbu         $t2, 0x5B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FAD0: nop

    // 0x8003FAD4: bne         $t6, $t2, L_8003FAE4
    if (ctx->r14 != ctx->r10) {
        // 0x8003FAD8: nop
    
            goto L_8003FAE4;
    }
    // 0x8003FAD8: nop

    // 0x8003FADC: b           L_800400D4
    // 0x8003FAE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800400D4;
    // 0x8003FAE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003FAE4:
    // 0x8003FAE4: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8003FAE8: lw          $t3, -0x490($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X490);
    // 0x8003FAEC: lbu         $t5, 0x0($s5)
    ctx->r13 = MEM_BU(ctx->r21, 0X0);
    // 0x8003FAF0: lb          $t4, 0x11($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X11);
    // 0x8003FAF4: nop

    // 0x8003FAF8: bne         $t4, $t5, L_8003FBA0
    if (ctx->r12 != ctx->r13) {
        // 0x8003FAFC: nop
    
            goto L_8003FBA0;
    }
    // 0x8003FAFC: nop

    // 0x8003FB00: lb          $t7, 0x12($t3)
    ctx->r15 = MEM_B(ctx->r11, 0X12);
    // 0x8003FB04: lb          $t9, 0x1($s5)
    ctx->r25 = MEM_B(ctx->r21, 0X1);
    // 0x8003FB08: nop

    // 0x8003FB0C: bne         $t7, $t9, L_8003FBA0
    if (ctx->r15 != ctx->r25) {
        // 0x8003FB10: nop
    
            goto L_8003FBA0;
    }
    // 0x8003FB10: nop

    // 0x8003FB14: lbu         $t0, 0xA($t3)
    ctx->r8 = MEM_BU(ctx->r11, 0XA);
    // 0x8003FB18: lbu         $t1, 0x2($s5)
    ctx->r9 = MEM_BU(ctx->r21, 0X2);
    // 0x8003FB1C: nop

    // 0x8003FB20: bne         $t0, $t1, L_8003FBA0
    if (ctx->r8 != ctx->r9) {
        // 0x8003FB24: nop
    
            goto L_8003FBA0;
    }
    // 0x8003FB24: nop

    // 0x8003FB28: lbu         $s6, 0x57($sp)
    ctx->r22 = MEM_BU(ctx->r29, 0X57);
    // 0x8003FB2C: nop

    // 0x8003FB30: beq         $s6, $zero, L_8003FB50
    if (ctx->r22 == 0) {
        // 0x8003FB34: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8003FB50;
    }
    // 0x8003FB34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003FB38: beq         $s6, $at, L_8003FB74
    if (ctx->r22 == ctx->r1) {
        // 0x8003FB3C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8003FB74;
    }
    // 0x8003FB3C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003FB40: beq         $s6, $at, L_8003FB98
    if (ctx->r22 == ctx->r1) {
        // 0x8003FB44: nop
    
            goto L_8003FB98;
    }
    // 0x8003FB44: nop

    // 0x8003FB48: b           L_800400D0
    // 0x8003FB4C: nop

        goto L_800400D0;
    // 0x8003FB4C: nop

L_8003FB50:
    // 0x8003FB50: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8003FB54: sb          $t8, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r24;
    // 0x8003FB58: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x8003FB5C: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FB60: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8003FB64: jal         0x8003F7AC
    // 0x8003FB68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8003F7AC(rdram, ctx);
        goto after_6;
    // 0x8003FB68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x8003FB6C: b           L_800400D4
    // 0x8003FB70: nop

        goto L_800400D4;
    // 0x8003FB70: nop

L_8003FB74:
    // 0x8003FB74: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8003FB78: sb          $t6, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r14;
    // 0x8003FB7C: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x8003FB80: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FB84: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8003FB88: jal         0x8003F7AC
    // 0x8003FB8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8003F7AC(rdram, ctx);
        goto after_7;
    // 0x8003FB8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x8003FB90: b           L_800400D4
    // 0x8003FB94: nop

        goto L_800400D4;
    // 0x8003FB94: nop

L_8003FB98:
    // 0x8003FB98: b           L_800400D4
    // 0x8003FB9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800400D4;
    // 0x8003FB9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003FBA0:
    // 0x8003FBA0: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8003FBA4: nop

    // 0x8003FBA8: lb          $t4, 0x0($t2)
    ctx->r12 = MEM_B(ctx->r10, 0X0);
    // 0x8003FBAC: nop

    // 0x8003FBB0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8003FBB4: sb          $t5, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r13;
    // 0x8003FBB8: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8003FBBC: nop

    // 0x8003FBC0: lb          $t9, 0x0($t7)
    ctx->r25 = MEM_B(ctx->r15, 0X0);
    // 0x8003FBC4: nop

    // 0x8003FBC8: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x8003FBCC: bne         $at, $zero, L_8003FBDC
    if (ctx->r1 != 0) {
        // 0x8003FBD0: nop
    
            goto L_8003FBDC;
    }
    // 0x8003FBD0: nop

    // 0x8003FBD4: b           L_800400D4
    // 0x8003FBD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800400D4;
    // 0x8003FBD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003FBDC:
    // 0x8003FBDC: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8003FBE0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8003FBE4: lw          $t8, -0x490($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X490);
    // 0x8003FBE8: lb          $t0, 0x0($t3)
    ctx->r8 = MEM_B(ctx->r11, 0X0);
    // 0x8003FBEC: lb          $t6, 0x11($t8)
    ctx->r14 = MEM_B(ctx->r24, 0X11);
    // 0x8003FBF0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8003FBF4: addu        $s5, $t3, $t1
    ctx->r21 = ADD32(ctx->r11, ctx->r9);
    // 0x8003FBF8: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8003FBFC: sb          $t6, 0x1($s5)
    MEM_B(0X1, ctx->r21) = ctx->r14;
    // 0x8003FC00: lw          $t4, -0x490($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X490);
    // 0x8003FC04: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8003FC08: lb          $t5, 0x12($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X12);
    // 0x8003FC0C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8003FC10: sb          $t5, 0x2($s5)
    MEM_B(0X2, ctx->r21) = ctx->r13;
    // 0x8003FC14: lw          $t2, -0x490($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X490);
    // 0x8003FC18: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8003FC1C: lbu         $t7, 0xA($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0XA);
    // 0x8003FC20: nop

    // 0x8003FC24: sb          $t7, 0x2($s5)
    MEM_B(0X2, ctx->r21) = ctx->r15;
    // 0x8003FC28: lw          $t9, -0x490($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X490);
    // 0x8003FC2C: nop

    // 0x8003FC30: lb          $a0, 0x12($t9)
    ctx->r4 = MEM_B(ctx->r25, 0X12);
    // 0x8003FC34: lbu         $a1, 0xA($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0XA);
    // 0x8003FC38: lbu         $a2, 0x13($t9)
    ctx->r6 = MEM_BU(ctx->r25, 0X13);
    // 0x8003FC3C: jal         0x800408B0
    // 0x8003FC40: nop

    func_800408B0(rdram, ctx);
        goto after_8;
    // 0x8003FC40: nop

    after_8:
    // 0x8003FC44: beq         $v0, $zero, L_8003FEBC
    if (ctx->r2 == 0) {
        // 0x8003FC48: nop
    
            goto L_8003FEBC;
    }
    // 0x8003FC48: nop

    // 0x8003FC4C: lbu         $a0, 0x5B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FC50: addiu       $a1, $sp, 0x43
    ctx->r5 = ADD32(ctx->r29, 0X43);
    // 0x8003FC54: jal         0x800406B0
    // 0x8003FC58: addiu       $a2, $sp, 0x42
    ctx->r6 = ADD32(ctx->r29, 0X42);
    func_800406B0(rdram, ctx);
        goto after_9;
    // 0x8003FC58: addiu       $a2, $sp, 0x42
    ctx->r6 = ADD32(ctx->r29, 0X42);
    after_9:
    // 0x8003FC5C: lbu         $t0, 0x5F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X5F);
    // 0x8003FC60: nop

    // 0x8003FC64: bne         $t0, $zero, L_8003FD94
    if (ctx->r8 != 0) {
        // 0x8003FC68: nop
    
            goto L_8003FD94;
    }
    // 0x8003FC68: nop

    // 0x8003FC6C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8003FC70: lw          $t3, -0x490($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X490);
    // 0x8003FC74: nop

    // 0x8003FC78: lb          $t1, 0x11($t3)
    ctx->r9 = MEM_B(ctx->r11, 0X11);
    // 0x8003FC7C: nop

    // 0x8003FC80: slti        $at, $t1, 0x5
    ctx->r1 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
    // 0x8003FC84: beq         $at, $zero, L_8003FCB0
    if (ctx->r1 == 0) {
        // 0x8003FC88: nop
    
            goto L_8003FCB0;
    }
    // 0x8003FC88: nop

    // 0x8003FC8C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8003FC90: sb          $t8, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r24;
    // 0x8003FC94: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x8003FC98: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FC9C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8003FCA0: jal         0x8003F7AC
    // 0x8003FCA4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8003F7AC(rdram, ctx);
        goto after_10;
    // 0x8003FCA4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x8003FCA8: b           L_800400D4
    // 0x8003FCAC: nop

        goto L_800400D4;
    // 0x8003FCAC: nop

L_8003FCB0:
    // 0x8003FCB0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003FCB4: lw          $t6, -0x490($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X490);
    // 0x8003FCB8: nop

    // 0x8003FCBC: lb          $t4, 0x11($t6)
    ctx->r12 = MEM_B(ctx->r14, 0X11);
    // 0x8003FCC0: nop

    // 0x8003FCC4: slti        $at, $t4, 0x6
    ctx->r1 = SIGNED(ctx->r12) < 0X6 ? 1 : 0;
    // 0x8003FCC8: bne         $at, $zero, L_8003FCF4
    if (ctx->r1 != 0) {
        // 0x8003FCCC: nop
    
            goto L_8003FCF4;
    }
    // 0x8003FCCC: nop

    // 0x8003FCD0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8003FCD4: sb          $t5, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r13;
    // 0x8003FCD8: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x8003FCDC: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FCE0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8003FCE4: jal         0x8003F7AC
    // 0x8003FCE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8003F7AC(rdram, ctx);
        goto after_11;
    // 0x8003FCE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x8003FCEC: b           L_800400D4
    // 0x8003FCF0: nop

        goto L_800400D4;
    // 0x8003FCF0: nop

L_8003FCF4:
    // 0x8003FCF4: lbu         $t2, 0x43($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X43);
    // 0x8003FCF8: nop

    // 0x8003FCFC: bne         $t2, $zero, L_8003FD14
    if (ctx->r10 != 0) {
        // 0x8003FD00: nop
    
            goto L_8003FD14;
    }
    // 0x8003FD00: nop

    // 0x8003FD04: lbu         $t7, 0x42($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X42);
    // 0x8003FD08: nop

    // 0x8003FD0C: beq         $t7, $zero, L_8003FD74
    if (ctx->r15 == 0) {
        // 0x8003FD10: nop
    
            goto L_8003FD74;
    }
    // 0x8003FD10: nop

L_8003FD14:
    // 0x8003FD14: lbu         $t9, 0x43($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X43);
    // 0x8003FD18: lbu         $t0, 0x42($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X42);
    // 0x8003FD1C: nop

    // 0x8003FD20: slt         $at, $t0, $t9
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8003FD24: bne         $at, $zero, L_8003FD50
    if (ctx->r1 != 0) {
        // 0x8003FD28: nop
    
            goto L_8003FD50;
    }
    // 0x8003FD28: nop

    // 0x8003FD2C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x8003FD30: sb          $t3, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r11;
    // 0x8003FD34: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x8003FD38: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FD3C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8003FD40: jal         0x8003F7AC
    // 0x8003FD44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8003F7AC(rdram, ctx);
        goto after_12;
    // 0x8003FD44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_12:
    // 0x8003FD48: b           L_800400D4
    // 0x8003FD4C: nop

        goto L_800400D4;
    // 0x8003FD4C: nop

L_8003FD50:
    // 0x8003FD50: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x8003FD54: sb          $t1, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r9;
    // 0x8003FD58: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x8003FD5C: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FD60: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8003FD64: jal         0x8003F7AC
    // 0x8003FD68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8003F7AC(rdram, ctx);
        goto after_13;
    // 0x8003FD68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_13:
    // 0x8003FD6C: b           L_800400D4
    // 0x8003FD70: nop

        goto L_800400D4;
    // 0x8003FD70: nop

L_8003FD74:
    // 0x8003FD74: sb          $zero, 0x3($s5)
    MEM_B(0X3, ctx->r21) = 0;
    // 0x8003FD78: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x8003FD7C: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FD80: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8003FD84: jal         0x8003F7AC
    // 0x8003FD88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003F7AC(rdram, ctx);
        goto after_14;
    // 0x8003FD88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x8003FD8C: b           L_800400D4
    // 0x8003FD90: nop

        goto L_800400D4;
    // 0x8003FD90: nop

L_8003FD94:
    // 0x8003FD94: lbu         $t8, 0x43($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X43);
    // 0x8003FD98: nop

    // 0x8003FD9C: bne         $t8, $zero, L_8003FDB4
    if (ctx->r24 != 0) {
        // 0x8003FDA0: nop
    
            goto L_8003FDB4;
    }
    // 0x8003FDA0: nop

    // 0x8003FDA4: lbu         $t6, 0x42($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X42);
    // 0x8003FDA8: nop

    // 0x8003FDAC: beq         $t6, $zero, L_8003FE14
    if (ctx->r14 == 0) {
        // 0x8003FDB0: nop
    
            goto L_8003FE14;
    }
    // 0x8003FDB0: nop

L_8003FDB4:
    // 0x8003FDB4: lbu         $t4, 0x43($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X43);
    // 0x8003FDB8: lbu         $t5, 0x42($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X42);
    // 0x8003FDBC: nop

    // 0x8003FDC0: slt         $at, $t5, $t4
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8003FDC4: bne         $at, $zero, L_8003FDF0
    if (ctx->r1 != 0) {
        // 0x8003FDC8: nop
    
            goto L_8003FDF0;
    }
    // 0x8003FDC8: nop

    // 0x8003FDCC: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8003FDD0: sb          $t2, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r10;
    // 0x8003FDD4: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x8003FDD8: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FDDC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8003FDE0: jal         0x8003F7AC
    // 0x8003FDE4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8003F7AC(rdram, ctx);
        goto after_15;
    // 0x8003FDE4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_15:
    // 0x8003FDE8: b           L_800400D4
    // 0x8003FDEC: nop

        goto L_800400D4;
    // 0x8003FDEC: nop

L_8003FDF0:
    // 0x8003FDF0: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8003FDF4: sb          $t7, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r15;
    // 0x8003FDF8: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x8003FDFC: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FE00: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8003FE04: jal         0x8003F7AC
    // 0x8003FE08: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8003F7AC(rdram, ctx);
        goto after_16;
    // 0x8003FE08: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_16:
    // 0x8003FE0C: b           L_800400D4
    // 0x8003FE10: nop

        goto L_800400D4;
    // 0x8003FE10: nop

L_8003FE14:
    // 0x8003FE14: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8003FE18: lw          $t9, -0x490($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X490);
    // 0x8003FE1C: nop

    // 0x8003FE20: lb          $t0, 0x11($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X11);
    // 0x8003FE24: nop

    // 0x8003FE28: slti        $at, $t0, 0x5
    ctx->r1 = SIGNED(ctx->r8) < 0X5 ? 1 : 0;
    // 0x8003FE2C: beq         $at, $zero, L_8003FE58
    if (ctx->r1 == 0) {
        // 0x8003FE30: nop
    
            goto L_8003FE58;
    }
    // 0x8003FE30: nop

    // 0x8003FE34: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8003FE38: sb          $t3, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r11;
    // 0x8003FE3C: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x8003FE40: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FE44: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8003FE48: jal         0x8003F7AC
    // 0x8003FE4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8003F7AC(rdram, ctx);
        goto after_17;
    // 0x8003FE4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_17:
    // 0x8003FE50: b           L_800400D4
    // 0x8003FE54: nop

        goto L_800400D4;
    // 0x8003FE54: nop

L_8003FE58:
    // 0x8003FE58: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8003FE5C: lw          $t1, -0x490($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X490);
    // 0x8003FE60: nop

    // 0x8003FE64: lb          $t8, 0x11($t1)
    ctx->r24 = MEM_B(ctx->r9, 0X11);
    // 0x8003FE68: nop

    // 0x8003FE6C: slti        $at, $t8, 0x6
    ctx->r1 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x8003FE70: bne         $at, $zero, L_8003FE9C
    if (ctx->r1 != 0) {
        // 0x8003FE74: nop
    
            goto L_8003FE9C;
    }
    // 0x8003FE74: nop

    // 0x8003FE78: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003FE7C: sb          $t6, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r14;
    // 0x8003FE80: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x8003FE84: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FE88: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8003FE8C: jal         0x8003F7AC
    // 0x8003FE90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8003F7AC(rdram, ctx);
        goto after_18;
    // 0x8003FE90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x8003FE94: b           L_800400D4
    // 0x8003FE98: nop

        goto L_800400D4;
    // 0x8003FE98: nop

L_8003FE9C:
    // 0x8003FE9C: sb          $zero, 0x3($s5)
    MEM_B(0X3, ctx->r21) = 0;
    // 0x8003FEA0: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x8003FEA4: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FEA8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8003FEAC: jal         0x8003F7AC
    // 0x8003FEB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003F7AC(rdram, ctx);
        goto after_19;
    // 0x8003FEB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x8003FEB4: b           L_800400D4
    // 0x8003FEB8: nop

        goto L_800400D4;
    // 0x8003FEB8: nop

L_8003FEBC:
    // 0x8003FEBC: lbu         $t4, 0x57($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X57);
    // 0x8003FEC0: nop

    // 0x8003FEC4: beq         $t4, $zero, L_8003FF30
    if (ctx->r12 == 0) {
        // 0x8003FEC8: nop
    
            goto L_8003FF30;
    }
    // 0x8003FEC8: nop

    // 0x8003FECC: sb          $zero, 0x3($s5)
    MEM_B(0X3, ctx->r21) = 0;
    // 0x8003FED0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8003FED4: lw          $t5, -0x490($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X490);
    // 0x8003FED8: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x8003FEDC: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FEE0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8003FEE4: lb          $s2, 0x11($t5)
    ctx->r18 = MEM_B(ctx->r13, 0X11);
    // 0x8003FEE8: lb          $s3, 0x12($t5)
    ctx->r19 = MEM_B(ctx->r13, 0X12);
    // 0x8003FEEC: lb          $s4, 0xA($t5)
    ctx->r20 = MEM_B(ctx->r13, 0XA);
    // 0x8003FEF0: jal         0x8003F7AC
    // 0x8003FEF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003F7AC(rdram, ctx);
        goto after_20;
    // 0x8003FEF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_20:
    // 0x8003FEF8: beq         $v0, $zero, L_8003FF08
    if (ctx->r2 == 0) {
        // 0x8003FEFC: nop
    
            goto L_8003FF08;
    }
    // 0x8003FEFC: nop

    // 0x8003FF00: b           L_800400D4
    // 0x8003FF04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800400D4;
    // 0x8003FF04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003FF08:
    // 0x8003FF08: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8003FF0C: lw          $t2, -0x490($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X490);
    // 0x8003FF10: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8003FF14: sb          $s2, 0x11($t2)
    MEM_B(0X11, ctx->r10) = ctx->r18;
    // 0x8003FF18: lw          $t7, -0x490($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X490);
    // 0x8003FF1C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8003FF20: sb          $s3, 0x12($t7)
    MEM_B(0X12, ctx->r15) = ctx->r19;
    // 0x8003FF24: lw          $t9, -0x490($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X490);
    // 0x8003FF28: nop

    // 0x8003FF2C: sb          $s4, 0xA($t9)
    MEM_B(0XA, ctx->r25) = ctx->r20;
L_8003FF30:
    // 0x8003FF30: lbu         $t0, 0x57($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X57);
    // 0x8003FF34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003FF38: beq         $t0, $at, L_80040000
    if (ctx->r8 == ctx->r1) {
        // 0x8003FF3C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80040000;
    }
    // 0x8003FF3C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003FF40: beq         $t0, $at, L_80040000
    if (ctx->r8 == ctx->r1) {
        // 0x8003FF44: nop
    
            goto L_80040000;
    }
    // 0x8003FF44: nop

    // 0x8003FF48: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8003FF4C: sb          $t3, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r11;
    // 0x8003FF50: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8003FF54: lw          $t1, -0x490($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X490);
    // 0x8003FF58: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x8003FF5C: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FF60: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8003FF64: lb          $s2, 0x11($t1)
    ctx->r18 = MEM_B(ctx->r9, 0X11);
    // 0x8003FF68: lb          $s3, 0x12($t1)
    ctx->r19 = MEM_B(ctx->r9, 0X12);
    // 0x8003FF6C: lb          $s4, 0xA($t1)
    ctx->r20 = MEM_B(ctx->r9, 0XA);
    // 0x8003FF70: jal         0x8003F7AC
    // 0x8003FF74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8003F7AC(rdram, ctx);
        goto after_21;
    // 0x8003FF74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x8003FF78: beq         $v0, $zero, L_8003FF88
    if (ctx->r2 == 0) {
        // 0x8003FF7C: nop
    
            goto L_8003FF88;
    }
    // 0x8003FF7C: nop

    // 0x8003FF80: b           L_800400D4
    // 0x8003FF84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800400D4;
    // 0x8003FF84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003FF88:
    // 0x8003FF88: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8003FF8C: lw          $t8, -0x490($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X490);
    // 0x8003FF90: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003FF94: sb          $s2, 0x11($t8)
    MEM_B(0X11, ctx->r24) = ctx->r18;
    // 0x8003FF98: lw          $t6, -0x490($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X490);
    // 0x8003FF9C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8003FFA0: sb          $s3, 0x12($t6)
    MEM_B(0X12, ctx->r14) = ctx->r19;
    // 0x8003FFA4: lw          $t4, -0x490($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X490);
    // 0x8003FFA8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8003FFAC: sb          $s4, 0xA($t4)
    MEM_B(0XA, ctx->r12) = ctx->r20;
    // 0x8003FFB0: sb          $t5, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r13;
    // 0x8003FFB4: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x8003FFB8: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x8003FFBC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8003FFC0: jal         0x8003F7AC
    // 0x8003FFC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8003F7AC(rdram, ctx);
        goto after_22;
    // 0x8003FFC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_22:
    // 0x8003FFC8: beq         $v0, $zero, L_8003FFD8
    if (ctx->r2 == 0) {
        // 0x8003FFCC: nop
    
            goto L_8003FFD8;
    }
    // 0x8003FFCC: nop

    // 0x8003FFD0: b           L_800400D4
    // 0x8003FFD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800400D4;
    // 0x8003FFD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003FFD8:
    // 0x8003FFD8: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8003FFDC: lw          $t2, -0x490($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X490);
    // 0x8003FFE0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8003FFE4: sb          $s2, 0x11($t2)
    MEM_B(0X11, ctx->r10) = ctx->r18;
    // 0x8003FFE8: lw          $t7, -0x490($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X490);
    // 0x8003FFEC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8003FFF0: sb          $s3, 0x12($t7)
    MEM_B(0X12, ctx->r15) = ctx->r19;
    // 0x8003FFF4: lw          $t9, -0x490($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X490);
    // 0x8003FFF8: nop

    // 0x8003FFFC: sb          $s4, 0xA($t9)
    MEM_B(0XA, ctx->r25) = ctx->r20;
L_80040000:
    // 0x80040000: lbu         $t0, 0x57($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X57);
    // 0x80040004: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80040008: beq         $t0, $at, L_800400D0
    if (ctx->r8 == ctx->r1) {
        // 0x8004000C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_800400D0;
    }
    // 0x8004000C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80040010: beq         $t0, $at, L_800400D0
    if (ctx->r8 == ctx->r1) {
        // 0x80040014: nop
    
            goto L_800400D0;
    }
    // 0x80040014: nop

    // 0x80040018: lbu         $a0, 0x5B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X5B);
    // 0x8004001C: addiu       $a1, $sp, 0x43
    ctx->r5 = ADD32(ctx->r29, 0X43);
    // 0x80040020: jal         0x800406B0
    // 0x80040024: addiu       $a2, $sp, 0x42
    ctx->r6 = ADD32(ctx->r29, 0X42);
    func_800406B0(rdram, ctx);
        goto after_23;
    // 0x80040024: addiu       $a2, $sp, 0x42
    ctx->r6 = ADD32(ctx->r29, 0X42);
    after_23:
    // 0x80040028: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8004002C: lw          $t3, -0x490($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X490);
    // 0x80040030: lbu         $t1, 0x43($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X43);
    // 0x80040034: lbu         $t8, 0x42($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X42);
    // 0x80040038: lb          $s2, 0x11($t3)
    ctx->r18 = MEM_B(ctx->r11, 0X11);
    // 0x8004003C: lb          $s3, 0x12($t3)
    ctx->r19 = MEM_B(ctx->r11, 0X12);
    // 0x80040040: lb          $s4, 0xA($t3)
    ctx->r20 = MEM_B(ctx->r11, 0XA);
    // 0x80040044: slt         $at, $t8, $t1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80040048: bne         $at, $zero, L_8004007C
    if (ctx->r1 != 0) {
        // 0x8004004C: nop
    
            goto L_8004007C;
    }
    // 0x8004004C: nop

    // 0x80040050: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80040054: sb          $t6, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r14;
    // 0x80040058: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x8004005C: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x80040060: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80040064: jal         0x8003F7AC
    // 0x80040068: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8003F7AC(rdram, ctx);
        goto after_24;
    // 0x80040068: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_24:
    // 0x8004006C: beq         $v0, $zero, L_800400A8
    if (ctx->r2 == 0) {
        // 0x80040070: nop
    
            goto L_800400A8;
    }
    // 0x80040070: nop

    // 0x80040074: b           L_800400D4
    // 0x80040078: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800400D4;
    // 0x80040078: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004007C:
    // 0x8004007C: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80040080: sb          $t4, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r12;
    // 0x80040084: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x80040088: lbu         $a2, 0x5B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5B);
    // 0x8004008C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80040090: jal         0x8003F7AC
    // 0x80040094: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8003F7AC(rdram, ctx);
        goto after_25;
    // 0x80040094: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_25:
    // 0x80040098: beq         $v0, $zero, L_800400A8
    if (ctx->r2 == 0) {
        // 0x8004009C: nop
    
            goto L_800400A8;
    }
    // 0x8004009C: nop

    // 0x800400A0: b           L_800400D4
    // 0x800400A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800400D4;
    // 0x800400A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800400A8:
    // 0x800400A8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800400AC: lw          $t5, -0x490($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X490);
    // 0x800400B0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800400B4: sb          $s2, 0x11($t5)
    MEM_B(0X11, ctx->r13) = ctx->r18;
    // 0x800400B8: lw          $t2, -0x490($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X490);
    // 0x800400BC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800400C0: sb          $s3, 0x12($t2)
    MEM_B(0X12, ctx->r10) = ctx->r19;
    // 0x800400C4: lw          $t7, -0x490($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X490);
    // 0x800400C8: nop

    // 0x800400CC: sb          $s4, 0xA($t7)
    MEM_B(0XA, ctx->r15) = ctx->r20;
L_800400D0:
    // 0x800400D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800400D4:
    // 0x800400D4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800400D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800400DC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800400E0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800400E4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800400E8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800400EC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800400F0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800400F4: jr          $ra
    // 0x800400F8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800400F8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800400FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800400FC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80040100: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80040104: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80040108: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004010C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80040110: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80040114: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80040118: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8004011C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80040120: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80040124: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80040128: lb          $t7, 0x0($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X0);
    // 0x8004012C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80040130: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80040134: addu        $s5, $t6, $t8
    ctx->r21 = ADD32(ctx->r14, ctx->r24);
    // 0x80040138: lbu         $s1, 0x1($s5)
    ctx->r17 = MEM_BU(ctx->r21, 0X1);
    // 0x8004013C: lw          $t9, -0x490($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X490);
    // 0x80040140: lbu         $s2, 0x2($s5)
    ctx->r18 = MEM_BU(ctx->r21, 0X2);
    // 0x80040144: lbu         $s3, 0x3($s5)
    ctx->r19 = MEM_BU(ctx->r21, 0X3);
    // 0x80040148: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8004014C: sb          $s1, 0x11($t9)
    MEM_B(0X11, ctx->r25) = ctx->r17;
    // 0x80040150: lw          $t0, -0x490($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X490);
    // 0x80040154: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80040158: sb          $s2, 0x12($t0)
    MEM_B(0X12, ctx->r8) = ctx->r18;
    // 0x8004015C: lw          $t1, -0x490($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X490);
    // 0x80040160: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80040164: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80040168: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8004016C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80040170: jal         0x80041810
    // 0x80040174: sb          $s3, 0xA($t1)
    MEM_B(0XA, ctx->r9) = ctx->r19;
    func_80041810(rdram, ctx);
        goto after_0;
    // 0x80040174: sb          $s3, 0xA($t1)
    MEM_B(0XA, ctx->r9) = ctx->r19;
    after_0:
    // 0x80040178: bne         $v0, $zero, L_80040188
    if (ctx->r2 != 0) {
        // 0x8004017C: nop
    
            goto L_80040188;
    }
    // 0x8004017C: nop

    // 0x80040180: b           L_800404D8
    // 0x80040184: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800404D8;
    // 0x80040184: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80040188:
    // 0x80040188: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8004018C: lw          $t2, -0x490($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X490);
    // 0x80040190: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80040194: lbu         $t3, 0x13($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X13);
    // 0x80040198: nop

    // 0x8004019C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800401A0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800401A4: lw          $t5, 0x110($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X110);
    // 0x800401A8: nop

    // 0x800401AC: lbu         $s4, 0x1E($t5)
    ctx->r20 = MEM_BU(ctx->r13, 0X1E);
    // 0x800401B0: nop

L_800401B4:
    // 0x800401B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800401B8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800401BC: jal         0x8004172C
    // 0x800401C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004172C(rdram, ctx);
        goto after_1;
    // 0x800401C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800401C4: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x800401C8: bne         $s0, $zero, L_800401B4
    if (ctx->r16 != 0) {
        // 0x800401CC: nop
    
            goto L_800401B4;
    }
    // 0x800401CC: nop

    // 0x800401D0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800401D4: lw          $t7, -0x490($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X490);
    // 0x800401D8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x800401DC: lb          $a0, 0x12($t7)
    ctx->r4 = MEM_B(ctx->r15, 0X12);
    // 0x800401E0: lbu         $a2, 0x13($t7)
    ctx->r6 = MEM_BU(ctx->r15, 0X13);
    // 0x800401E4: jal         0x800408B0
    // 0x800401E8: nop

    func_800408B0(rdram, ctx);
        goto after_2;
    // 0x800401E8: nop

    after_2:
    // 0x800401EC: bne         $v0, $zero, L_80040220
    if (ctx->r2 != 0) {
        // 0x800401F0: nop
    
            goto L_80040220;
    }
    // 0x800401F0: nop

    // 0x800401F4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800401F8: lbu         $a3, 0x47($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X47);
    // 0x800401FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80040200: jal         0x8003F7AC
    // 0x80040204: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8003F7AC(rdram, ctx);
        goto after_3;
    // 0x80040204: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_3:
    // 0x80040208: beq         $v0, $zero, L_80040218
    if (ctx->r2 == 0) {
        // 0x8004020C: nop
    
            goto L_80040218;
    }
    // 0x8004020C: nop

    // 0x80040210: b           L_800404D8
    // 0x80040214: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800404D8;
    // 0x80040214: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80040218:
    // 0x80040218: b           L_800404D8
    // 0x8004021C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800404D8;
    // 0x8004021C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80040220:
    // 0x80040220: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80040224: sb          $t6, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r14;
    // 0x80040228: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8004022C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80040230: lb          $t9, 0x0($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X0);
    // 0x80040234: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80040238: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8004023C: sb          $t0, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r8;
    // 0x80040240: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80040244: nop

    // 0x80040248: lb          $t2, 0x0($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X0);
    // 0x8004024C: nop

    // 0x80040250: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80040254: addu        $s5, $t1, $t3
    ctx->r21 = ADD32(ctx->r9, ctx->r11);
    // 0x80040258: sb          $s1, 0x1($s5)
    MEM_B(0X1, ctx->r21) = ctx->r17;
    // 0x8004025C: lw          $t4, -0x490($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X490);
    // 0x80040260: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80040264: lb          $t5, 0x12($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X12);
    // 0x80040268: sb          $s3, 0x2($s5)
    MEM_B(0X2, ctx->r21) = ctx->r19;
    // 0x8004026C: sb          $t5, 0x1($s5)
    MEM_B(0X1, ctx->r21) = ctx->r13;
    // 0x80040270: lw          $t7, -0x490($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X490);
    // 0x80040274: nop

    // 0x80040278: lb          $t6, 0x11($t7)
    ctx->r14 = MEM_B(ctx->r15, 0X11);
    // 0x8004027C: nop

    // 0x80040280: slti        $at, $t6, 0x5
    ctx->r1 = SIGNED(ctx->r14) < 0X5 ? 1 : 0;
    // 0x80040284: beq         $at, $zero, L_800402F4
    if (ctx->r1 == 0) {
        // 0x80040288: nop
    
            goto L_800402F4;
    }
    // 0x80040288: nop

    // 0x8004028C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80040290: sb          $t9, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r25;
L_80040294:
    // 0x80040294: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80040298: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004029C: jal         0x8004172C
    // 0x800402A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004172C(rdram, ctx);
        goto after_4;
    // 0x800402A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x800402A4: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x800402A8: beq         $s0, $zero, L_800402D0
    if (ctx->r16 == 0) {
        // 0x800402AC: nop
    
            goto L_800402D0;
    }
    // 0x800402AC: nop

    // 0x800402B0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800402B4: lw          $t0, -0x490($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X490);
    // 0x800402B8: nop

    // 0x800402BC: lb          $t8, 0x11($t0)
    ctx->r24 = MEM_B(ctx->r8, 0X11);
    // 0x800402C0: nop

    // 0x800402C4: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x800402C8: bne         $at, $zero, L_80040294
    if (ctx->r1 != 0) {
        // 0x800402CC: nop
    
            goto L_80040294;
    }
    // 0x800402CC: nop

L_800402D0:
    // 0x800402D0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800402D4: lw          $t2, -0x490($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X490);
    // 0x800402D8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800402DC: lb          $t1, 0x11($t2)
    ctx->r9 = MEM_B(ctx->r10, 0X11);
    // 0x800402E0: nop

    // 0x800402E4: beq         $t1, $at, L_8004037C
    if (ctx->r9 == ctx->r1) {
        // 0x800402E8: nop
    
            goto L_8004037C;
    }
    // 0x800402E8: nop

    // 0x800402EC: b           L_800404D8
    // 0x800402F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800404D8;
    // 0x800402F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800402F4:
    // 0x800402F4: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800402F8: lw          $t3, -0x490($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X490);
    // 0x800402FC: nop

    // 0x80040300: lb          $t4, 0x11($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X11);
    // 0x80040304: nop

    // 0x80040308: slti        $at, $t4, 0x6
    ctx->r1 = SIGNED(ctx->r12) < 0X6 ? 1 : 0;
    // 0x8004030C: bne         $at, $zero, L_8004037C
    if (ctx->r1 != 0) {
        // 0x80040310: nop
    
            goto L_8004037C;
    }
    // 0x80040310: nop

    // 0x80040314: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80040318: sb          $t5, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r13;
L_8004031C:
    // 0x8004031C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80040320: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80040324: jal         0x8004172C
    // 0x80040328: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004172C(rdram, ctx);
        goto after_5;
    // 0x80040328: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8004032C: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x80040330: beq         $s0, $zero, L_80040358
    if (ctx->r16 == 0) {
        // 0x80040334: nop
    
            goto L_80040358;
    }
    // 0x80040334: nop

    // 0x80040338: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8004033C: lw          $t7, -0x490($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X490);
    // 0x80040340: nop

    // 0x80040344: lb          $t6, 0x11($t7)
    ctx->r14 = MEM_B(ctx->r15, 0X11);
    // 0x80040348: nop

    // 0x8004034C: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x80040350: beq         $at, $zero, L_8004031C
    if (ctx->r1 == 0) {
        // 0x80040354: nop
    
            goto L_8004031C;
    }
    // 0x80040354: nop

L_80040358:
    // 0x80040358: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8004035C: lw          $t9, -0x490($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X490);
    // 0x80040360: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80040364: lb          $t0, 0x11($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X11);
    // 0x80040368: nop

    // 0x8004036C: beq         $t0, $at, L_8004037C
    if (ctx->r8 == ctx->r1) {
        // 0x80040370: nop
    
            goto L_8004037C;
    }
    // 0x80040370: nop

    // 0x80040374: b           L_800404D8
    // 0x80040378: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800404D8;
    // 0x80040378: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004037C:
    // 0x8004037C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80040380: addiu       $a1, $sp, 0x33
    ctx->r5 = ADD32(ctx->r29, 0X33);
    // 0x80040384: jal         0x800406B0
    // 0x80040388: addiu       $a2, $sp, 0x32
    ctx->r6 = ADD32(ctx->r29, 0X32);
    func_800406B0(rdram, ctx);
        goto after_6;
    // 0x80040388: addiu       $a2, $sp, 0x32
    ctx->r6 = ADD32(ctx->r29, 0X32);
    after_6:
    // 0x8004038C: lbu         $t8, 0x33($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X33);
    // 0x80040390: nop

    // 0x80040394: bne         $t8, $zero, L_800403AC
    if (ctx->r24 != 0) {
        // 0x80040398: nop
    
            goto L_800403AC;
    }
    // 0x80040398: nop

    // 0x8004039C: lbu         $t2, 0x32($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X32);
    // 0x800403A0: nop

    // 0x800403A4: beq         $t2, $zero, L_800404D4
    if (ctx->r10 == 0) {
        // 0x800403A8: nop
    
            goto L_800404D4;
    }
    // 0x800403A8: nop

L_800403AC:
    // 0x800403AC: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x800403B0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800403B4: lb          $t3, 0x0($t1)
    ctx->r11 = MEM_B(ctx->r9, 0X0);
    // 0x800403B8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800403BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800403C0: sb          $t4, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r12;
    // 0x800403C4: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x800403C8: lw          $t9, -0x490($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X490);
    // 0x800403CC: lb          $t7, 0x0($t5)
    ctx->r15 = MEM_B(ctx->r13, 0X0);
    // 0x800403D0: lb          $t0, 0x11($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X11);
    // 0x800403D4: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x800403D8: addu        $s5, $t5, $t6
    ctx->r21 = ADD32(ctx->r13, ctx->r14);
    // 0x800403DC: sb          $t0, 0x1($s5)
    MEM_B(0X1, ctx->r21) = ctx->r8;
    // 0x800403E0: lw          $t8, -0x490($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X490);
    // 0x800403E4: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x800403E8: lb          $t2, 0x12($t8)
    ctx->r10 = MEM_B(ctx->r24, 0X12);
    // 0x800403EC: sb          $s3, 0x2($s5)
    MEM_B(0X2, ctx->r21) = ctx->r19;
    // 0x800403F0: sb          $t2, 0x1($s5)
    MEM_B(0X1, ctx->r21) = ctx->r10;
    // 0x800403F4: lbu         $t4, 0x32($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X32);
    // 0x800403F8: lbu         $t3, 0x33($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X33);
    // 0x800403FC: nop

    // 0x80040400: slt         $at, $t4, $t3
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80040404: bne         $at, $zero, L_80040470
    if (ctx->r1 != 0) {
        // 0x80040408: nop
    
            goto L_80040470;
    }
    // 0x80040408: nop

    // 0x8004040C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80040410: sb          $t1, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r9;
L_80040414:
    // 0x80040414: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80040418: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004041C: jal         0x8004172C
    // 0x80040420: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004172C(rdram, ctx);
        goto after_7;
    // 0x80040420: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80040424: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x80040428: beq         $s0, $zero, L_8004044C
    if (ctx->r16 == 0) {
        // 0x8004042C: nop
    
            goto L_8004044C;
    }
    // 0x8004042C: nop

    // 0x80040430: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80040434: lw          $t7, -0x490($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X490);
    // 0x80040438: nop

    // 0x8004043C: lbu         $t5, 0xA($t7)
    ctx->r13 = MEM_BU(ctx->r15, 0XA);
    // 0x80040440: nop

    // 0x80040444: bne         $t5, $s4, L_80040414
    if (ctx->r13 != ctx->r20) {
        // 0x80040448: nop
    
            goto L_80040414;
    }
    // 0x80040448: nop

L_8004044C:
    // 0x8004044C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80040450: lw          $t6, -0x490($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X490);
    // 0x80040454: nop

    // 0x80040458: lbu         $t9, 0xA($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0XA);
    // 0x8004045C: nop

    // 0x80040460: beq         $t9, $s4, L_800404D4
    if (ctx->r25 == ctx->r20) {
        // 0x80040464: nop
    
            goto L_800404D4;
    }
    // 0x80040464: nop

    // 0x80040468: b           L_800404D8
    // 0x8004046C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800404D8;
    // 0x8004046C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80040470:
    // 0x80040470: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80040474: sb          $t0, 0x3($s5)
    MEM_B(0X3, ctx->r21) = ctx->r8;
L_80040478:
    // 0x80040478: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8004047C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80040480: jal         0x8004172C
    // 0x80040484: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_8004172C(rdram, ctx);
        goto after_8;
    // 0x80040484: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_8:
    // 0x80040488: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x8004048C: beq         $s0, $zero, L_800404B0
    if (ctx->r16 == 0) {
        // 0x80040490: nop
    
            goto L_800404B0;
    }
    // 0x80040490: nop

    // 0x80040494: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80040498: lw          $t8, -0x490($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X490);
    // 0x8004049C: nop

    // 0x800404A0: lbu         $t2, 0xA($t8)
    ctx->r10 = MEM_BU(ctx->r24, 0XA);
    // 0x800404A4: nop

    // 0x800404A8: bne         $t2, $s4, L_80040478
    if (ctx->r10 != ctx->r20) {
        // 0x800404AC: nop
    
            goto L_80040478;
    }
    // 0x800404AC: nop

L_800404B0:
    // 0x800404B0: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800404B4: lw          $t3, -0x490($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X490);
    // 0x800404B8: nop

    // 0x800404BC: lbu         $t4, 0xA($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XA);
    // 0x800404C0: nop

    // 0x800404C4: beq         $t4, $s4, L_800404D4
    if (ctx->r12 == ctx->r20) {
        // 0x800404C8: nop
    
            goto L_800404D4;
    }
    // 0x800404C8: nop

    // 0x800404CC: b           L_800404D8
    // 0x800404D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800404D8;
    // 0x800404D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800404D4:
    // 0x800404D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800404D8:
    // 0x800404D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800404DC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800404E0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800404E4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800404E8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800404EC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800404F0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800404F4: jr          $ra
    // 0x800404F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800404F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800404FC: nop

;}
RECOMP_FUNC void func_80040500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040500: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80040504: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80040508: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8004050C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80040510: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80040514: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80040518: jal         0x80041E88
    // 0x8004051C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    func_80041E88(rdram, ctx);
        goto after_0;
    // 0x8004051C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x80040520: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x80040524: lw          $s1, 0x5E04($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X5E04);
    // 0x80040528: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004052C: lbu         $t6, 0x2E($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X2E);
    // 0x80040530: addiu       $s1, $s1, 0x2E
    ctx->r17 = ADD32(ctx->r17, 0X2E);
    // 0x80040534: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80040538: beq         $at, $zero, L_800405A4
    if (ctx->r1 == 0) {
        // 0x8004053C: nop
    
            goto L_800405A4;
    }
    // 0x8004053C: nop

L_80040540:
    // 0x80040540: addu        $t7, $s1, $s0
    ctx->r15 = ADD32(ctx->r17, ctx->r16);
    // 0x80040544: lb          $t8, 0x1($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X1);
    // 0x80040548: addiu       $t0, $sp, 0x31
    ctx->r8 = ADD32(ctx->r29, 0X31);
    // 0x8004054C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80040550: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80040554: addu        $s2, $s1, $t9
    ctx->r18 = ADD32(ctx->r17, ctx->r25);
    // 0x80040558: lbu         $a1, 0x8($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X8);
    // 0x8004055C: lbu         $a0, 0x7($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X7);
    // 0x80040560: addiu       $s2, $s2, 0x7
    ctx->r18 = ADD32(ctx->r18, 0X7);
    // 0x80040564: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80040568: addiu       $a2, $sp, 0x33
    ctx->r6 = ADD32(ctx->r29, 0X33);
    // 0x8004056C: jal         0x80041B48
    // 0x80040570: addiu       $a3, $sp, 0x32
    ctx->r7 = ADD32(ctx->r29, 0X32);
    func_80041B48(rdram, ctx);
        goto after_1;
    // 0x80040570: addiu       $a3, $sp, 0x32
    ctx->r7 = ADD32(ctx->r29, 0X32);
    after_1:
    // 0x80040574: bne         $v0, $zero, L_80040588
    if (ctx->r2 != 0) {
        // 0x80040578: nop
    
            goto L_80040588;
    }
    // 0x80040578: nop

    // 0x8004057C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80040580: jal         0x8003E2C8
    // 0x80040584: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8003E2C8(rdram, ctx);
        goto after_2;
    // 0x80040584: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
L_80040588:
    // 0x80040588: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004058C: lbu         $t2, 0x0($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X0);
    // 0x80040590: andi        $t1, $s0, 0xFF
    ctx->r9 = ctx->r16 & 0XFF;
    // 0x80040594: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x80040598: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8004059C: bne         $at, $zero, L_80040540
    if (ctx->r1 != 0) {
        // 0x800405A0: nop
    
            goto L_80040540;
    }
    // 0x800405A0: nop

L_800405A4:
    // 0x800405A4: sb          $zero, 0x31($sp)
    MEM_B(0X31, ctx->r29) = 0;
    // 0x800405A8: lbu         $t3, 0x0($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X0);
    // 0x800405AC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800405B0: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800405B4: beq         $at, $zero, L_80040610
    if (ctx->r1 == 0) {
        // 0x800405B8: nop
    
            goto L_80040610;
    }
    // 0x800405B8: nop

L_800405BC:
    // 0x800405BC: lbu         $t4, 0x47($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X47);
    // 0x800405C0: lbu         $a3, 0x43($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X43);
    // 0x800405C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800405C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800405CC: addiu       $a2, $sp, 0x31
    ctx->r6 = ADD32(ctx->r29, 0X31);
    // 0x800405D0: jal         0x8003ED40
    // 0x800405D4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_8003ED40(rdram, ctx);
        goto after_3;
    // 0x800405D4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_3:
    // 0x800405D8: beq         $v0, $zero, L_800405F4
    if (ctx->r2 == 0) {
        // 0x800405DC: nop
    
            goto L_800405F4;
    }
    // 0x800405DC: nop

    // 0x800405E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800405E4: jal         0x8003E2C8
    // 0x800405E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8003E2C8(rdram, ctx);
        goto after_4;
    // 0x800405E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x800405EC: b           L_80040610
    // 0x800405F0: nop

        goto L_80040610;
    // 0x800405F0: nop

L_800405F4:
    // 0x800405F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800405F8: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
    // 0x800405FC: andi        $t5, $s0, 0xFF
    ctx->r13 = ctx->r16 & 0XFF;
    // 0x80040600: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80040604: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80040608: bne         $at, $zero, L_800405BC
    if (ctx->r1 != 0) {
        // 0x8004060C: nop
    
            goto L_800405BC;
    }
    // 0x8004060C: nop

L_80040610:
    // 0x80040610: lbu         $t7, 0x31($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X31);
    // 0x80040614: nop

    // 0x80040618: bne         $t7, $zero, L_80040684
    if (ctx->r15 != 0) {
        // 0x8004061C: nop
    
            goto L_80040684;
    }
    // 0x8004061C: nop

    // 0x80040620: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80040624: addiu       $a1, $sp, 0x33
    ctx->r5 = ADD32(ctx->r29, 0X33);
    // 0x80040628: jal         0x8003E458
    // 0x8004062C: addiu       $a2, $sp, 0x32
    ctx->r6 = ADD32(ctx->r29, 0X32);
    func_8003E458(rdram, ctx);
        goto after_5;
    // 0x8004062C: addiu       $a2, $sp, 0x32
    ctx->r6 = ADD32(ctx->r29, 0X32);
    after_5:
    // 0x80040630: beq         $v0, $zero, L_8004067C
    if (ctx->r2 == 0) {
        // 0x80040634: nop
    
            goto L_8004067C;
    }
    // 0x80040634: nop

    // 0x80040638: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x8004063C: lbu         $a2, 0x32($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X32);
    // 0x80040640: jal         0x8003E22C
    // 0x80040644: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8003E22C(rdram, ctx);
        goto after_6;
    // 0x80040644: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x80040648: lbu         $t8, 0x47($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X47);
    // 0x8004064C: lbu         $a3, 0x43($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X43);
    // 0x80040650: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80040654: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80040658: addiu       $a2, $sp, 0x31
    ctx->r6 = ADD32(ctx->r29, 0X31);
    // 0x8004065C: jal         0x8003ED40
    // 0x80040660: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8003ED40(rdram, ctx);
        goto after_7;
    // 0x80040660: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_7:
    // 0x80040664: lbu         $t9, 0x31($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X31);
    // 0x80040668: nop

    // 0x8004066C: bne         $t9, $zero, L_80040684
    if (ctx->r25 != 0) {
        // 0x80040670: nop
    
            goto L_80040684;
    }
    // 0x80040670: nop

    // 0x80040674: b           L_80040694
    // 0x80040678: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80040694;
    // 0x80040678: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004067C:
    // 0x8004067C: b           L_80040694
    // 0x80040680: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80040694;
    // 0x80040680: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80040684:
    // 0x80040684: lbu         $a0, 0x31($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X31);
    // 0x80040688: jal         0x800423F0
    // 0x8004068C: nop

    func_800423F0(rdram, ctx);
        goto after_8;
    // 0x8004068C: nop

    after_8:
    // 0x80040690: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80040694:
    // 0x80040694: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80040698: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8004069C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800406A0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800406A4: jr          $ra
    // 0x800406A8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800406A8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800406AC: nop

;}
RECOMP_FUNC void func_800406B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800406B0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800406B4: lw          $t7, -0x490($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X490);
    // 0x800406B8: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x800406BC: sll         $a3, $a0, 24
    ctx->r7 = S32(ctx->r4 << 24);
    // 0x800406C0: lbu         $t8, 0xA($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XA);
    // 0x800406C4: sra         $t6, $a3, 24
    ctx->r14 = S32(SIGNED(ctx->r7) >> 24);
    // 0x800406C8: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x800406CC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800406D0: beq         $a3, $t8, L_80040718
    if (ctx->r7 == ctx->r24) {
        // 0x800406D4: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_80040718;
    }
    // 0x800406D4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_800406D8:
    // 0x800406D8: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800406DC: sll         $t9, $a3, 24
    ctx->r25 = S32(ctx->r7 << 24);
    // 0x800406E0: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x800406E4: sra         $t2, $a3, 24
    ctx->r10 = S32(SIGNED(ctx->r7) >> 24);
    // 0x800406E8: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x800406EC: slti        $at, $a3, 0x4
    ctx->r1 = SIGNED(ctx->r7) < 0X4 ? 1 : 0;
    // 0x800406F0: bne         $at, $zero, L_800406FC
    if (ctx->r1 != 0) {
        // 0x800406F4: nop
    
            goto L_800406FC;
    }
    // 0x800406F4: nop

    // 0x800406F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_800406FC:
    // 0x800406FC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80040700: lw          $t4, -0x490($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X490);
    // 0x80040704: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80040708: lbu         $t5, 0xA($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0XA);
    // 0x8004070C: andi        $t3, $t0, 0xFF
    ctx->r11 = ctx->r8 & 0XFF;
    // 0x80040710: bne         $a3, $t5, L_800406D8
    if (ctx->r7 != ctx->r13) {
        // 0x80040714: or          $t0, $t3, $zero
        ctx->r8 = ctx->r11 | 0;
            goto L_800406D8;
    }
    // 0x80040714: or          $t0, $t3, $zero
    ctx->r8 = ctx->r11 | 0;
L_80040718:
    // 0x80040718: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8004071C: lw          $t7, -0x490($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X490);
    // 0x80040720: sll         $a3, $a0, 24
    ctx->r7 = S32(ctx->r4 << 24);
    // 0x80040724: lbu         $t8, 0xA($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XA);
    // 0x80040728: sra         $t6, $a3, 24
    ctx->r14 = S32(SIGNED(ctx->r7) >> 24);
    // 0x8004072C: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x80040730: beq         $a3, $t8, L_80040774
    if (ctx->r7 == ctx->r24) {
        // 0x80040734: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_80040774;
    }
    // 0x80040734: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_80040738:
    // 0x80040738: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x8004073C: sll         $t9, $a3, 24
    ctx->r25 = S32(ctx->r7 << 24);
    // 0x80040740: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x80040744: sra         $t2, $a3, 24
    ctx->r10 = S32(SIGNED(ctx->r7) >> 24);
    // 0x80040748: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x8004074C: bgez        $a3, L_80040758
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80040750: nop
    
            goto L_80040758;
    }
    // 0x80040750: nop

    // 0x80040754: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
L_80040758:
    // 0x80040758: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8004075C: lw          $t4, -0x490($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X490);
    // 0x80040760: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80040764: lbu         $t5, 0xA($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0XA);
    // 0x80040768: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x8004076C: bne         $a3, $t5, L_80040738
    if (ctx->r7 != ctx->r13) {
        // 0x80040770: or          $t1, $t3, $zero
        ctx->r9 = ctx->r11 | 0;
            goto L_80040738;
    }
    // 0x80040770: or          $t1, $t3, $zero
    ctx->r9 = ctx->r11 | 0;
L_80040774:
    // 0x80040774: sb          $t0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r8;
    // 0x80040778: sb          $t1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r9;
    // 0x8004077C: jr          $ra
    // 0x80040780: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80040780: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80040784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040784: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80040788: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8004078C: beq         $a1, $zero, L_80040798
    if (ctx->r5 == 0) {
        // 0x80040790: sb          $t6, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r14;
            goto L_80040798;
    }
    // 0x80040790: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x80040794: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_80040798:
    // 0x80040798: beq         $a2, $zero, L_800407A8
    if (ctx->r6 == 0) {
        // 0x8004079C: nop
    
            goto L_800407A8;
    }
    // 0x8004079C: nop

    // 0x800407A0: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x800407A4: sb          $t7, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r15;
L_800407A8:
    // 0x800407A8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x800407AC: slti        $at, $t0, 0xA
    ctx->r1 = SIGNED(ctx->r8) < 0XA ? 1 : 0;
    // 0x800407B0: beq         $at, $zero, L_8004089C
    if (ctx->r1 == 0) {
        // 0x800407B4: sb          $zero, 0x0($a3)
        MEM_B(0X0, ctx->r7) = 0;
            goto L_8004089C;
    }
    // 0x800407B4: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
L_800407B8:
    // 0x800407B8: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x800407BC: slti        $at, $t1, 0x14
    ctx->r1 = SIGNED(ctx->r9) < 0X14 ? 1 : 0;
    // 0x800407C0: beq         $at, $zero, L_80040884
    if (ctx->r1 == 0) {
        // 0x800407C4: nop
    
            goto L_80040884;
    }
    // 0x800407C4: nop

L_800407C8:
    // 0x800407C8: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x800407CC: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x800407D0: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x800407D4: addu        $t2, $t0, $t9
    ctx->r10 = ADD32(ctx->r8, ctx->r25);
    // 0x800407D8: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x800407DC: lw          $t8, 0x1F30($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F30);
    // 0x800407E0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800407E4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800407E8: addu        $t4, $t8, $t3
    ctx->r12 = ADD32(ctx->r24, ctx->r11);
    // 0x800407EC: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x800407F0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x800407F4: bne         $t5, $at, L_8004086C
    if (ctx->r13 != ctx->r1) {
        // 0x800407F8: nop
    
            goto L_8004086C;
    }
    // 0x800407F8: nop

    // 0x800407FC: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x80040800: nop

    // 0x80040804: slt         $at, $t0, $t6
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80040808: beq         $at, $zero, L_80040814
    if (ctx->r1 == 0) {
        // 0x8004080C: nop
    
            goto L_80040814;
    }
    // 0x8004080C: nop

    // 0x80040810: sb          $t0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r8;
L_80040814:
    // 0x80040814: beq         $a1, $zero, L_80040834
    if (ctx->r5 == 0) {
        // 0x80040818: nop
    
            goto L_80040834;
    }
    // 0x80040818: nop

    // 0x8004081C: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x80040820: nop

    // 0x80040824: slt         $at, $t7, $t0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80040828: beq         $at, $zero, L_80040834
    if (ctx->r1 == 0) {
        // 0x8004082C: nop
    
            goto L_80040834;
    }
    // 0x8004082C: nop

    // 0x80040830: sb          $t0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r8;
L_80040834:
    // 0x80040834: beq         $a2, $zero, L_80040854
    if (ctx->r6 == 0) {
        // 0x80040838: nop
    
            goto L_80040854;
    }
    // 0x80040838: nop

    // 0x8004083C: lbu         $t9, 0x0($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X0);
    // 0x80040840: nop

    // 0x80040844: slt         $at, $t1, $t9
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80040848: beq         $at, $zero, L_80040854
    if (ctx->r1 == 0) {
        // 0x8004084C: nop
    
            goto L_80040854;
    }
    // 0x8004084C: nop

    // 0x80040850: sb          $t1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r9;
L_80040854:
    // 0x80040854: lbu         $t2, 0x0($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X0);
    // 0x80040858: nop

    // 0x8004085C: slt         $at, $t2, $t1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80040860: beq         $at, $zero, L_8004086C
    if (ctx->r1 == 0) {
        // 0x80040864: nop
    
            goto L_8004086C;
    }
    // 0x80040864: nop

    // 0x80040868: sb          $t1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r9;
L_8004086C:
    // 0x8004086C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80040870: andi        $t8, $t1, 0xFF
    ctx->r24 = ctx->r9 & 0XFF;
    // 0x80040874: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x80040878: slti        $at, $t1, 0x14
    ctx->r1 = SIGNED(ctx->r9) < 0X14 ? 1 : 0;
    // 0x8004087C: bne         $at, $zero, L_800407C8
    if (ctx->r1 != 0) {
        // 0x80040880: nop
    
            goto L_800407C8;
    }
    // 0x80040880: nop

L_80040884:
    // 0x80040884: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80040888: andi        $t3, $t0, 0xFF
    ctx->r11 = ctx->r8 & 0XFF;
    // 0x8004088C: or          $t0, $t3, $zero
    ctx->r8 = ctx->r11 | 0;
    // 0x80040890: slti        $at, $t0, 0xA
    ctx->r1 = SIGNED(ctx->r8) < 0XA ? 1 : 0;
    // 0x80040894: bne         $at, $zero, L_800407B8
    if (ctx->r1 != 0) {
        // 0x80040898: nop
    
            goto L_800407B8;
    }
    // 0x80040898: nop

L_8004089C:
    // 0x8004089C: jr          $ra
    // 0x800408A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800408A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x800408A4: nop

    // 0x800408A8: nop

    // 0x800408AC: nop

;}
RECOMP_FUNC void func_800408B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800408B0: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x800408B4: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x800408B8: sll         $t6, $a2, 5
    ctx->r14 = S32(ctx->r6 << 5);
    // 0x800408BC: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x800408C0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x800408C4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x800408C8: addiu       $t9, $t9, 0x5CF0
    ctx->r25 = ADD32(ctx->r25, 0X5CF0);
    // 0x800408CC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800408D0: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x800408D4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800408D8: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x800408DC: beq         $at, $zero, L_8004091C
    if (ctx->r1 == 0) {
        // 0x800408E0: addu        $a3, $t8, $t9
        ctx->r7 = ADD32(ctx->r24, ctx->r25);
            goto L_8004091C;
    }
    // 0x800408E0: addu        $a3, $t8, $t9
    ctx->r7 = ADD32(ctx->r24, ctx->r25);
L_800408E4:
    // 0x800408E4: addu        $t1, $a3, $t0
    ctx->r9 = ADD32(ctx->r7, ctx->r8);
    // 0x800408E8: lb          $t2, 0x4($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X4);
    // 0x800408EC: nop

    // 0x800408F0: addu        $t3, $t2, $a0
    ctx->r11 = ADD32(ctx->r10, ctx->r4);
    // 0x800408F4: bne         $t3, $zero, L_80040904
    if (ctx->r11 != 0) {
        // 0x800408F8: nop
    
            goto L_80040904;
    }
    // 0x800408F8: nop

    // 0x800408FC: b           L_80040920
    // 0x80040900: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80040920;
    // 0x80040900: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80040904:
    // 0x80040904: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80040908: andi        $t4, $t0, 0xFF
    ctx->r12 = ctx->r8 & 0XFF;
    // 0x8004090C: or          $t0, $t4, $zero
    ctx->r8 = ctx->r12 | 0;
    // 0x80040910: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x80040914: bne         $at, $zero, L_800408E4
    if (ctx->r1 != 0) {
        // 0x80040918: nop
    
            goto L_800408E4;
    }
    // 0x80040918: nop

L_8004091C:
    // 0x8004091C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80040920:
    // 0x80040920: jr          $ra
    // 0x80040924: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80040924: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80040928: nop

    // 0x8004092C: nop

;}
RECOMP_FUNC void func_80040930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040930: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80040934: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80040938: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8004093C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80040940: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80040944: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80040948: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8004094C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80040950: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80040954: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80040958: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8004095C: addiu       $a1, $sp, 0x36
    ctx->r5 = ADD32(ctx->r29, 0X36);
    // 0x80040960: addiu       $a0, $sp, 0x37
    ctx->r4 = ADD32(ctx->r29, 0X37);
    // 0x80040964: addiu       $a2, $sp, 0x35
    ctx->r6 = ADD32(ctx->r29, 0X35);
    // 0x80040968: jal         0x80040784
    // 0x8004096C: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_80040784(rdram, ctx);
        goto after_0;
    // 0x8004096C: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x80040970: lbu         $t6, 0x34($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X34);
    // 0x80040974: nop

    // 0x80040978: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x8004097C: bne         $at, $zero, L_80040990
    if (ctx->r1 != 0) {
        // 0x80040980: nop
    
            goto L_80040990;
    }
    // 0x80040980: nop

    // 0x80040984: addiu       $t7, $t6, -0x3
    ctx->r15 = ADD32(ctx->r14, -0X3);
    // 0x80040988: b           L_80040994
    // 0x8004098C: sb          $t7, 0x35($sp)
    MEM_B(0X35, ctx->r29) = ctx->r15;
        goto L_80040994;
    // 0x8004098C: sb          $t7, 0x35($sp)
    MEM_B(0X35, ctx->r29) = ctx->r15;
L_80040990:
    // 0x80040990: sb          $zero, 0x35($sp)
    MEM_B(0X35, ctx->r29) = 0;
L_80040994:
    // 0x80040994: lbu         $t8, 0x35($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X35);
    // 0x80040998: nop

    // 0x8004099C: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x800409A0: bne         $at, $zero, L_800409B8
    if (ctx->r1 != 0) {
        // 0x800409A4: nop
    
            goto L_800409B8;
    }
    // 0x800409A4: nop

    // 0x800409A8: addiu       $s2, $t8, -0x3
    ctx->r18 = ADD32(ctx->r24, -0X3);
    // 0x800409AC: andi        $t9, $s2, 0xFF
    ctx->r25 = ctx->r18 & 0XFF;
    // 0x800409B0: b           L_800409BC
    // 0x800409B4: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
        goto L_800409BC;
    // 0x800409B4: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
L_800409B8:
    // 0x800409B8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_800409BC:
    // 0x800409BC: lbu         $t1, 0x35($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X35);
    // 0x800409C0: addiu       $t0, $s2, 0x3
    ctx->r8 = ADD32(ctx->r18, 0X3);
    // 0x800409C4: bne         $t0, $t1, L_80040A54
    if (ctx->r8 != ctx->r9) {
        // 0x800409C8: nop
    
            goto L_80040A54;
    }
    // 0x800409C8: nop

    // 0x800409CC: lbu         $s1, 0x37($sp)
    ctx->r17 = MEM_BU(ctx->r29, 0X37);
    // 0x800409D0: lbu         $t2, 0x36($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X36);
    // 0x800409D4: nop

    // 0x800409D8: slt         $at, $t2, $s1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800409DC: bne         $at, $zero, L_80040A48
    if (ctx->r1 != 0) {
        // 0x800409E0: nop
    
            goto L_80040A48;
    }
    // 0x800409E0: nop

L_800409E4:
    // 0x800409E4: sll         $t4, $s2, 2
    ctx->r12 = S32(ctx->r18 << 2);
    // 0x800409E8: addu        $t4, $t4, $s2
    ctx->r12 = ADD32(ctx->r12, ctx->r18);
    // 0x800409EC: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x800409F0: addu        $t5, $s1, $t4
    ctx->r13 = ADD32(ctx->r17, ctx->r12);
    // 0x800409F4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x800409F8: lw          $t3, 0x1F30($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1F30);
    // 0x800409FC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80040A00: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80040A04: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x80040A08: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x80040A0C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80040A10: bne         $t8, $at, L_80040A2C
    if (ctx->r24 != ctx->r1) {
        // 0x80040A14: nop
    
            goto L_80040A2C;
    }
    // 0x80040A14: nop

    // 0x80040A18: addiu       $s5, $s5, -0x4
    ctx->r21 = ADD32(ctx->r21, -0X4);
    // 0x80040A1C: sll         $t9, $s5, 16
    ctx->r25 = S32(ctx->r21 << 16);
    // 0x80040A20: or          $s5, $t9, $zero
    ctx->r21 = ctx->r25 | 0;
    // 0x80040A24: sra         $t0, $s5, 16
    ctx->r8 = S32(SIGNED(ctx->r21) >> 16);
    // 0x80040A28: or          $s5, $t0, $zero
    ctx->r21 = ctx->r8 | 0;
L_80040A2C:
    // 0x80040A2C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80040A30: lbu         $t2, 0x36($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X36);
    // 0x80040A34: andi        $t1, $s1, 0xFF
    ctx->r9 = ctx->r17 & 0XFF;
    // 0x80040A38: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x80040A3C: slt         $at, $t2, $s1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80040A40: beq         $at, $zero, L_800409E4
    if (ctx->r1 == 0) {
        // 0x80040A44: nop
    
            goto L_800409E4;
    }
    // 0x80040A44: nop

L_80040A48:
    // 0x80040A48: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80040A4C: andi        $t4, $s2, 0xFF
    ctx->r12 = ctx->r18 & 0XFF;
    // 0x80040A50: or          $s2, $t4, $zero
    ctx->r18 = ctx->r12 | 0;
L_80040A54:
    // 0x80040A54: sll         $s0, $s2, 24
    ctx->r16 = S32(ctx->r18 << 24);
    // 0x80040A58: lbu         $t3, 0x35($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X35);
    // 0x80040A5C: sra         $t5, $s0, 24
    ctx->r13 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80040A60: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80040A64: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80040A68: beq         $at, $zero, L_80040B10
    if (ctx->r1 == 0) {
        // 0x80040A6C: nop
    
            goto L_80040B10;
    }
    // 0x80040A6C: nop

L_80040A70:
    // 0x80040A70: lbu         $s1, 0x37($sp)
    ctx->r17 = MEM_BU(ctx->r29, 0X37);
    // 0x80040A74: lbu         $t6, 0x36($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X36);
    // 0x80040A78: nop

    // 0x80040A7C: slt         $at, $t6, $s1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80040A80: bne         $at, $zero, L_80040AEC
    if (ctx->r1 != 0) {
        // 0x80040A84: nop
    
            goto L_80040AEC;
    }
    // 0x80040A84: nop

L_80040A88:
    // 0x80040A88: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80040A8C: addu        $t8, $t8, $s0
    ctx->r24 = ADD32(ctx->r24, ctx->r16);
    // 0x80040A90: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x80040A94: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x80040A98: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80040A9C: lw          $t7, 0x1F30($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1F30);
    // 0x80040AA0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80040AA4: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80040AA8: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x80040AAC: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80040AB0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80040AB4: bne         $t2, $at, L_80040AD0
    if (ctx->r10 != ctx->r1) {
        // 0x80040AB8: nop
    
            goto L_80040AD0;
    }
    // 0x80040AB8: nop

    // 0x80040ABC: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x80040AC0: sll         $t4, $s5, 16
    ctx->r12 = S32(ctx->r21 << 16);
    // 0x80040AC4: or          $s5, $t4, $zero
    ctx->r21 = ctx->r12 | 0;
    // 0x80040AC8: sra         $t5, $s5, 16
    ctx->r13 = S32(SIGNED(ctx->r21) >> 16);
    // 0x80040ACC: or          $s5, $t5, $zero
    ctx->r21 = ctx->r13 | 0;
L_80040AD0:
    // 0x80040AD0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80040AD4: lbu         $t6, 0x36($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X36);
    // 0x80040AD8: andi        $t3, $s1, 0xFF
    ctx->r11 = ctx->r17 & 0XFF;
    // 0x80040ADC: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80040AE0: slt         $at, $t6, $s1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80040AE4: beq         $at, $zero, L_80040A88
    if (ctx->r1 == 0) {
        // 0x80040AE8: nop
    
            goto L_80040A88;
    }
    // 0x80040AE8: nop

L_80040AEC:
    // 0x80040AEC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80040AF0: sll         $t8, $s0, 24
    ctx->r24 = S32(ctx->r16 << 24);
    // 0x80040AF4: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80040AF8: lbu         $t7, 0x35($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X35);
    // 0x80040AFC: sra         $t9, $s0, 24
    ctx->r25 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80040B00: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x80040B04: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80040B08: bne         $at, $zero, L_80040A70
    if (ctx->r1 != 0) {
        // 0x80040B0C: nop
    
            goto L_80040A70;
    }
    // 0x80040B0C: nop

L_80040B10:
    // 0x80040B10: lb          $s0, 0x35($sp)
    ctx->r16 = MEM_B(ctx->r29, 0X35);
    // 0x80040B14: lbu         $t0, 0x34($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X34);
    // 0x80040B18: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80040B1C: slt         $at, $t0, $s0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80040B20: bne         $at, $zero, L_80040DB0
    if (ctx->r1 != 0) {
        // 0x80040B24: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_80040DB0;
    }
    // 0x80040B24: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80040B28:
    // 0x80040B28: lbu         $t2, 0x35($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X35);
    // 0x80040B2C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80040B30: subu        $t4, $s0, $t2
    ctx->r12 = SUB32(ctx->r16, ctx->r10);
    // 0x80040B34: addu        $t5, $sp, $t4
    ctx->r13 = ADD32(ctx->r29, ctx->r12);
    // 0x80040B38: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80040B3C: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x80040B40: beq         $at, $zero, L_80040BAC
    if (ctx->r1 == 0) {
        // 0x80040B44: sb          $t1, 0x30($t5)
        MEM_B(0X30, ctx->r13) = ctx->r9;
            goto L_80040BAC;
    }
    // 0x80040B44: sb          $t1, 0x30($t5)
    MEM_B(0X30, ctx->r13) = ctx->r9;
L_80040B48:
    // 0x80040B48: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x80040B4C: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x80040B50: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x80040B54: addu        $t8, $s1, $t6
    ctx->r24 = ADD32(ctx->r17, ctx->r14);
    // 0x80040B58: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80040B5C: lw          $t3, 0x1F30($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1F30);
    // 0x80040B60: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80040B64: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80040B68: addu        $t7, $t3, $t9
    ctx->r15 = ADD32(ctx->r11, ctx->r25);
    // 0x80040B6C: lbu         $t0, 0x0($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X0);
    // 0x80040B70: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80040B74: bne         $t0, $at, L_80040B94
    if (ctx->r8 != ctx->r1) {
        // 0x80040B78: nop
    
            goto L_80040B94;
    }
    // 0x80040B78: nop

    // 0x80040B7C: lbu         $t2, 0x35($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X35);
    // 0x80040B80: nop

    // 0x80040B84: subu        $t1, $s0, $t2
    ctx->r9 = SUB32(ctx->r16, ctx->r10);
    // 0x80040B88: addu        $t4, $sp, $t1
    ctx->r12 = ADD32(ctx->r29, ctx->r9);
    // 0x80040B8C: b           L_80040BAC
    // 0x80040B90: sb          $zero, 0x30($t4)
    MEM_B(0X30, ctx->r12) = 0;
        goto L_80040BAC;
    // 0x80040B90: sb          $zero, 0x30($t4)
    MEM_B(0X30, ctx->r12) = 0;
L_80040B94:
    // 0x80040B94: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80040B98: andi        $t5, $s1, 0xFF
    ctx->r13 = ctx->r17 & 0XFF;
    // 0x80040B9C: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x80040BA0: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x80040BA4: bne         $at, $zero, L_80040B48
    if (ctx->r1 != 0) {
        // 0x80040BA8: nop
    
            goto L_80040B48;
    }
    // 0x80040BA8: nop

L_80040BAC:
    // 0x80040BAC: lbu         $t6, 0x35($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X35);
    // 0x80040BB0: nop

    // 0x80040BB4: subu        $t8, $s0, $t6
    ctx->r24 = SUB32(ctx->r16, ctx->r14);
    // 0x80040BB8: addu        $t3, $sp, $t8
    ctx->r11 = ADD32(ctx->r29, ctx->r24);
    // 0x80040BBC: lbu         $t3, 0x30($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X30);
    // 0x80040BC0: nop

    // 0x80040BC4: beq         $t3, $zero, L_80040BD8
    if (ctx->r11 == 0) {
        // 0x80040BC8: nop
    
            goto L_80040BD8;
    }
    // 0x80040BC8: nop

    // 0x80040BCC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80040BD0: andi        $t9, $s4, 0xFF
    ctx->r25 = ctx->r20 & 0XFF;
    // 0x80040BD4: or          $s4, $t9, $zero
    ctx->r20 = ctx->r25 | 0;
L_80040BD8:
    // 0x80040BD8: lbu         $s1, 0x37($sp)
    ctx->r17 = MEM_BU(ctx->r29, 0X37);
    // 0x80040BDC: lbu         $t7, 0x36($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X36);
    // 0x80040BE0: nop

    // 0x80040BE4: slt         $at, $t7, $s1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80040BE8: bne         $at, $zero, L_80040D8C
    if (ctx->r1 != 0) {
        // 0x80040BEC: nop
    
            goto L_80040D8C;
    }
    // 0x80040BEC: nop

L_80040BF0:
    // 0x80040BF0: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x80040BF4: addu        $t2, $t2, $s0
    ctx->r10 = ADD32(ctx->r10, ctx->r16);
    // 0x80040BF8: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x80040BFC: addu        $t1, $s1, $t2
    ctx->r9 = ADD32(ctx->r17, ctx->r10);
    // 0x80040C00: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80040C04: lw          $t0, 0x1F30($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1F30);
    // 0x80040C08: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80040C0C: subu        $t4, $t4, $t1
    ctx->r12 = SUB32(ctx->r12, ctx->r9);
    // 0x80040C10: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x80040C14: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x80040C18: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80040C1C: bne         $t6, $at, L_80040D70
    if (ctx->r14 != ctx->r1) {
        // 0x80040C20: nop
    
            goto L_80040D70;
    }
    // 0x80040C20: nop

    // 0x80040C24: lbu         $t8, 0x35($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X35);
    // 0x80040C28: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80040C2C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x80040C30: subu        $t3, $s0, $t8
    ctx->r11 = SUB32(ctx->r16, ctx->r24);
    // 0x80040C34: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80040C38: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x80040C3C: lb          $t7, 0x5DDC($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X5DDC);
    // 0x80040C40: lbu         $t9, 0x5DD0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X5DD0);
    // 0x80040C44: lbu         $t4, 0x43($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X43);
    // 0x80040C48: addu        $t2, $t9, $t7
    ctx->r10 = ADD32(ctx->r25, ctx->r15);
    // 0x80040C4C: addu        $s5, $s5, $t2
    ctx->r21 = ADD32(ctx->r21, ctx->r10);
    // 0x80040C50: sll         $t1, $s5, 16
    ctx->r9 = S32(ctx->r21 << 16);
    // 0x80040C54: or          $s5, $t1, $zero
    ctx->r21 = ctx->r9 | 0;
    // 0x80040C58: sra         $t0, $s5, 16
    ctx->r8 = S32(SIGNED(ctx->r21) >> 16);
    // 0x80040C5C: beq         $t4, $zero, L_80040C88
    if (ctx->r12 == 0) {
        // 0x80040C60: or          $s5, $t0, $zero
        ctx->r21 = ctx->r8 | 0;
            goto L_80040C88;
    }
    // 0x80040C60: or          $s5, $t0, $zero
    ctx->r21 = ctx->r8 | 0;
    // 0x80040C64: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x80040C68: addu        $t5, $t5, $s0
    ctx->r13 = ADD32(ctx->r13, ctx->r16);
    // 0x80040C6C: lb          $t5, 0x5DDC($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X5DDC);
    // 0x80040C70: nop

    // 0x80040C74: addu        $s5, $s5, $t5
    ctx->r21 = ADD32(ctx->r21, ctx->r13);
    // 0x80040C78: sll         $t6, $s5, 16
    ctx->r14 = S32(ctx->r21 << 16);
    // 0x80040C7C: or          $s5, $t6, $zero
    ctx->r21 = ctx->r14 | 0;
    // 0x80040C80: sra         $t8, $s5, 16
    ctx->r24 = S32(SIGNED(ctx->r21) >> 16);
    // 0x80040C84: or          $s5, $t8, $zero
    ctx->r21 = ctx->r24 | 0;
L_80040C88:
    // 0x80040C88: lbu         $t3, 0x35($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X35);
    // 0x80040C8C: nop

    // 0x80040C90: subu        $t9, $s0, $t3
    ctx->r25 = SUB32(ctx->r16, ctx->r11);
    // 0x80040C94: addu        $t7, $sp, $t9
    ctx->r15 = ADD32(ctx->r29, ctx->r25);
    // 0x80040C98: lbu         $t7, 0x30($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X30);
    // 0x80040C9C: nop

    // 0x80040CA0: bne         $t7, $zero, L_80040D70
    if (ctx->r15 != 0) {
        // 0x80040CA4: nop
    
            goto L_80040D70;
    }
    // 0x80040CA4: nop

    // 0x80040CA8: addiu       $s2, $s0, 0x1
    ctx->r18 = ADD32(ctx->r16, 0X1);
    // 0x80040CAC: lbu         $t1, 0x34($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X34);
    // 0x80040CB0: andi        $t2, $s2, 0xFF
    ctx->r10 = ctx->r18 & 0XFF;
    // 0x80040CB4: or          $s2, $t2, $zero
    ctx->r18 = ctx->r10 | 0;
    // 0x80040CB8: slt         $at, $t1, $s2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80040CBC: bne         $at, $zero, L_80040D70
    if (ctx->r1 != 0) {
        // 0x80040CC0: nop
    
            goto L_80040D70;
    }
    // 0x80040CC0: nop

L_80040CC4:
    // 0x80040CC4: sll         $t4, $s2, 2
    ctx->r12 = S32(ctx->r18 << 2);
    // 0x80040CC8: addu        $t4, $t4, $s2
    ctx->r12 = ADD32(ctx->r12, ctx->r18);
    // 0x80040CCC: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x80040CD0: addu        $t5, $s1, $t4
    ctx->r13 = ADD32(ctx->r17, ctx->r12);
    // 0x80040CD4: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80040CD8: lw          $t0, 0x1F30($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1F30);
    // 0x80040CDC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80040CE0: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80040CE4: addu        $t8, $t0, $t6
    ctx->r24 = ADD32(ctx->r8, ctx->r14);
    // 0x80040CE8: lbu         $t3, 0x0($t8)
    ctx->r11 = MEM_BU(ctx->r24, 0X0);
    // 0x80040CEC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80040CF0: bne         $t3, $at, L_80040D54
    if (ctx->r11 != ctx->r1) {
        // 0x80040CF4: nop
    
            goto L_80040D54;
    }
    // 0x80040CF4: nop

    // 0x80040CF8: lbu         $t9, 0x35($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X35);
    // 0x80040CFC: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x80040D00: addiu       $t2, $t2, 0x5DD0
    ctx->r10 = ADD32(ctx->r10, 0X5DD0);
    // 0x80040D04: subu        $t7, $s2, $t9
    ctx->r15 = SUB32(ctx->r18, ctx->r25);
    // 0x80040D08: addu        $t1, $t7, $t2
    ctx->r9 = ADD32(ctx->r15, ctx->r10);
    // 0x80040D0C: lbu         $t4, 0x0($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X0);
    // 0x80040D10: lb          $t6, 0x47($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X47);
    // 0x80040D14: subu        $s5, $s5, $t4
    ctx->r21 = SUB32(ctx->r21, ctx->r12);
    // 0x80040D18: sll         $t5, $s5, 16
    ctx->r13 = S32(ctx->r21 << 16);
    // 0x80040D1C: or          $s5, $t5, $zero
    ctx->r21 = ctx->r13 | 0;
    // 0x80040D20: sra         $t0, $s5, 16
    ctx->r8 = S32(SIGNED(ctx->r21) >> 16);
    // 0x80040D24: bne         $s1, $t6, L_80040D50
    if (ctx->r17 != ctx->r14) {
        // 0x80040D28: or          $s5, $t0, $zero
        ctx->r21 = ctx->r8 | 0;
            goto L_80040D50;
    }
    // 0x80040D28: or          $s5, $t0, $zero
    ctx->r21 = ctx->r8 | 0;
    // 0x80040D2C: subu        $t8, $s2, $t9
    ctx->r24 = SUB32(ctx->r18, ctx->r25);
    // 0x80040D30: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x80040D34: lbu         $t7, 0x0($t3)
    ctx->r15 = MEM_BU(ctx->r11, 0X0);
    // 0x80040D38: nop

    // 0x80040D3C: subu        $s5, $s5, $t7
    ctx->r21 = SUB32(ctx->r21, ctx->r15);
    // 0x80040D40: sll         $t1, $s5, 16
    ctx->r9 = S32(ctx->r21 << 16);
    // 0x80040D44: or          $s5, $t1, $zero
    ctx->r21 = ctx->r9 | 0;
    // 0x80040D48: sra         $t4, $s5, 16
    ctx->r12 = S32(SIGNED(ctx->r21) >> 16);
    // 0x80040D4C: or          $s5, $t4, $zero
    ctx->r21 = ctx->r12 | 0;
L_80040D50:
    // 0x80040D50: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80040D54:
    // 0x80040D54: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80040D58: lbu         $t0, 0x34($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X34);
    // 0x80040D5C: andi        $t5, $s2, 0xFF
    ctx->r13 = ctx->r18 & 0XFF;
    // 0x80040D60: or          $s2, $t5, $zero
    ctx->r18 = ctx->r13 | 0;
    // 0x80040D64: slt         $at, $t0, $s2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80040D68: beq         $at, $zero, L_80040CC4
    if (ctx->r1 == 0) {
        // 0x80040D6C: nop
    
            goto L_80040CC4;
    }
    // 0x80040D6C: nop

L_80040D70:
    // 0x80040D70: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80040D74: lbu         $t9, 0x36($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X36);
    // 0x80040D78: andi        $t6, $s1, 0xFF
    ctx->r14 = ctx->r17 & 0XFF;
    // 0x80040D7C: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x80040D80: slt         $at, $t9, $s1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80040D84: beq         $at, $zero, L_80040BF0
    if (ctx->r1 == 0) {
        // 0x80040D88: nop
    
            goto L_80040BF0;
    }
    // 0x80040D88: nop

L_80040D8C:
    // 0x80040D8C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80040D90: sll         $t8, $s0, 24
    ctx->r24 = S32(ctx->r16 << 24);
    // 0x80040D94: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80040D98: lbu         $t3, 0x34($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X34);
    // 0x80040D9C: sra         $t2, $s0, 24
    ctx->r10 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80040DA0: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80040DA4: slt         $at, $t3, $s0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80040DA8: beq         $at, $zero, L_80040B28
    if (ctx->r1 == 0) {
        // 0x80040DAC: nop
    
            goto L_80040B28;
    }
    // 0x80040DAC: nop

L_80040DB0:
    // 0x80040DB0: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x80040DB4: addu        $t7, $t7, $s4
    ctx->r15 = ADD32(ctx->r15, ctx->r20);
    // 0x80040DB8: lb          $t7, 0x5DD4($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X5DD4);
    // 0x80040DBC: lbu         $t5, 0x43($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X43);
    // 0x80040DC0: addu        $s5, $s5, $t7
    ctx->r21 = ADD32(ctx->r21, ctx->r15);
    // 0x80040DC4: sll         $t1, $s5, 16
    ctx->r9 = S32(ctx->r21 << 16);
    // 0x80040DC8: or          $s5, $t1, $zero
    ctx->r21 = ctx->r9 | 0;
    // 0x80040DCC: sra         $t4, $s5, 16
    ctx->r12 = S32(SIGNED(ctx->r21) >> 16);
    // 0x80040DD0: beq         $t5, $zero, L_80040DF0
    if (ctx->r13 == 0) {
        // 0x80040DD4: or          $s5, $t4, $zero
        ctx->r21 = ctx->r12 | 0;
            goto L_80040DF0;
    }
    // 0x80040DD4: or          $s5, $t4, $zero
    ctx->r21 = ctx->r12 | 0;
    // 0x80040DD8: sll         $t0, $s4, 4
    ctx->r8 = S32(ctx->r20 << 4);
    // 0x80040DDC: addu        $s5, $s5, $t0
    ctx->r21 = ADD32(ctx->r21, ctx->r8);
    // 0x80040DE0: sll         $t6, $s5, 16
    ctx->r14 = S32(ctx->r21 << 16);
    // 0x80040DE4: or          $s5, $t6, $zero
    ctx->r21 = ctx->r14 | 0;
    // 0x80040DE8: sra         $t9, $s5, 16
    ctx->r25 = S32(SIGNED(ctx->r21) >> 16);
    // 0x80040DEC: or          $s5, $t9, $zero
    ctx->r21 = ctx->r25 | 0;
L_80040DF0:
    // 0x80040DF0: lbu         $s1, 0x37($sp)
    ctx->r17 = MEM_BU(ctx->r29, 0X37);
    // 0x80040DF4: lbu         $t8, 0x36($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X36);
    // 0x80040DF8: nop

    // 0x80040DFC: slt         $at, $t8, $s1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80040E00: bne         $at, $zero, L_80040F58
    if (ctx->r1 != 0) {
        // 0x80040E04: nop
    
            goto L_80040F58;
    }
    // 0x80040E04: nop

L_80040E08:
    // 0x80040E08: lb          $s0, 0x35($sp)
    ctx->r16 = MEM_B(ctx->r29, 0X35);
    // 0x80040E0C: lbu         $t2, 0x34($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X34);
    // 0x80040E10: nop

    // 0x80040E14: slt         $at, $t2, $s0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80040E18: bne         $at, $zero, L_80040F3C
    if (ctx->r1 != 0) {
        // 0x80040E1C: nop
    
            goto L_80040F3C;
    }
    // 0x80040E1C: nop

L_80040E20:
    // 0x80040E20: lbu         $t3, 0x35($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X35);
    // 0x80040E24: nop

    // 0x80040E28: subu        $t7, $s0, $t3
    ctx->r15 = SUB32(ctx->r16, ctx->r11);
    // 0x80040E2C: addu        $t1, $sp, $t7
    ctx->r9 = ADD32(ctx->r29, ctx->r15);
    // 0x80040E30: lbu         $t1, 0x30($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X30);
    // 0x80040E34: nop

    // 0x80040E38: bne         $t1, $zero, L_80040F18
    if (ctx->r9 != 0) {
        // 0x80040E3C: nop
    
            goto L_80040F18;
    }
    // 0x80040E3C: nop

    // 0x80040E40: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x80040E44: addu        $t5, $t5, $s0
    ctx->r13 = ADD32(ctx->r13, ctx->r16);
    // 0x80040E48: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x80040E4C: addu        $t0, $s1, $t5
    ctx->r8 = ADD32(ctx->r17, ctx->r13);
    // 0x80040E50: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80040E54: lw          $t4, 0x1F30($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1F30);
    // 0x80040E58: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x80040E5C: subu        $t6, $t6, $t0
    ctx->r14 = SUB32(ctx->r14, ctx->r8);
    // 0x80040E60: addu        $t9, $t4, $t6
    ctx->r25 = ADD32(ctx->r12, ctx->r14);
    // 0x80040E64: lbu         $t8, 0x0($t9)
    ctx->r24 = MEM_BU(ctx->r25, 0X0);
    // 0x80040E68: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80040E6C: bne         $t8, $at, L_80040F18
    if (ctx->r24 != ctx->r1) {
        // 0x80040E70: nop
    
            goto L_80040F18;
    }
    // 0x80040E70: nop

    // 0x80040E74: lbu         $s2, 0x34($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X34);
    // 0x80040E78: nop

    // 0x80040E7C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80040E80: andi        $t2, $s2, 0xFF
    ctx->r10 = ctx->r18 & 0XFF;
    // 0x80040E84: or          $s2, $t2, $zero
    ctx->r18 = ctx->r10 | 0;
    // 0x80040E88: slti        $at, $s2, 0x14
    ctx->r1 = SIGNED(ctx->r18) < 0X14 ? 1 : 0;
    // 0x80040E8C: beq         $at, $zero, L_80040F3C
    if (ctx->r1 == 0) {
        // 0x80040E90: nop
    
            goto L_80040F3C;
    }
    // 0x80040E90: nop

L_80040E94:
    // 0x80040E94: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    // 0x80040E98: addu        $t7, $t7, $s2
    ctx->r15 = ADD32(ctx->r15, ctx->r18);
    // 0x80040E9C: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80040EA0: addu        $t1, $s1, $t7
    ctx->r9 = ADD32(ctx->r17, ctx->r15);
    // 0x80040EA4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80040EA8: lw          $t3, 0x1F30($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1F30);
    // 0x80040EAC: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x80040EB0: subu        $t5, $t5, $t1
    ctx->r13 = SUB32(ctx->r13, ctx->r9);
    // 0x80040EB4: addu        $t0, $t3, $t5
    ctx->r8 = ADD32(ctx->r11, ctx->r13);
    // 0x80040EB8: lbu         $t4, 0x0($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X0);
    // 0x80040EBC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80040EC0: bne         $t4, $at, L_80040F3C
    if (ctx->r12 != ctx->r1) {
        // 0x80040EC4: nop
    
            goto L_80040F3C;
    }
    // 0x80040EC4: nop

    // 0x80040EC8: addiu       $s5, $s5, -0xC
    ctx->r21 = ADD32(ctx->r21, -0XC);
    // 0x80040ECC: sll         $t6, $s5, 16
    ctx->r14 = S32(ctx->r21 << 16);
    // 0x80040ED0: lb          $t8, 0x47($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X47);
    // 0x80040ED4: or          $s5, $t6, $zero
    ctx->r21 = ctx->r14 | 0;
    // 0x80040ED8: sra         $t9, $s5, 16
    ctx->r25 = S32(SIGNED(ctx->r21) >> 16);
    // 0x80040EDC: bne         $s1, $t8, L_80040EF8
    if (ctx->r17 != ctx->r24) {
        // 0x80040EE0: or          $s5, $t9, $zero
        ctx->r21 = ctx->r25 | 0;
            goto L_80040EF8;
    }
    // 0x80040EE0: or          $s5, $t9, $zero
    ctx->r21 = ctx->r25 | 0;
    // 0x80040EE4: addiu       $s5, $s5, -0xC
    ctx->r21 = ADD32(ctx->r21, -0XC);
    // 0x80040EE8: sll         $t2, $s5, 16
    ctx->r10 = S32(ctx->r21 << 16);
    // 0x80040EEC: or          $s5, $t2, $zero
    ctx->r21 = ctx->r10 | 0;
    // 0x80040EF0: sra         $t7, $s5, 16
    ctx->r15 = S32(SIGNED(ctx->r21) >> 16);
    // 0x80040EF4: or          $s5, $t7, $zero
    ctx->r21 = ctx->r15 | 0;
L_80040EF8:
    // 0x80040EF8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80040EFC: andi        $t1, $s2, 0xFF
    ctx->r9 = ctx->r18 & 0XFF;
    // 0x80040F00: or          $s2, $t1, $zero
    ctx->r18 = ctx->r9 | 0;
    // 0x80040F04: slti        $at, $s2, 0x14
    ctx->r1 = SIGNED(ctx->r18) < 0X14 ? 1 : 0;
    // 0x80040F08: bne         $at, $zero, L_80040E94
    if (ctx->r1 != 0) {
        // 0x80040F0C: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80040E94;
    }
    // 0x80040F0C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80040F10: b           L_80040F3C
    // 0x80040F14: nop

        goto L_80040F3C;
    // 0x80040F14: nop

L_80040F18:
    // 0x80040F18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80040F1C: sll         $t3, $s0, 24
    ctx->r11 = S32(ctx->r16 << 24);
    // 0x80040F20: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80040F24: lbu         $t0, 0x34($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X34);
    // 0x80040F28: sra         $t5, $s0, 24
    ctx->r13 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80040F2C: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80040F30: slt         $at, $t0, $s0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80040F34: beq         $at, $zero, L_80040E20
    if (ctx->r1 == 0) {
        // 0x80040F38: nop
    
            goto L_80040E20;
    }
    // 0x80040F38: nop

L_80040F3C:
    // 0x80040F3C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80040F40: lbu         $t6, 0x36($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X36);
    // 0x80040F44: andi        $t4, $s1, 0xFF
    ctx->r12 = ctx->r17 & 0XFF;
    // 0x80040F48: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x80040F4C: slt         $at, $t6, $s1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80040F50: beq         $at, $zero, L_80040E08
    if (ctx->r1 == 0) {
        // 0x80040F54: nop
    
            goto L_80040E08;
    }
    // 0x80040F54: nop

L_80040F58:
    // 0x80040F58: beq         $s3, $zero, L_80040F74
    if (ctx->r19 == 0) {
        // 0x80040F5C: nop
    
            goto L_80040F74;
    }
    // 0x80040F5C: nop

    // 0x80040F60: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
    // 0x80040F64: sll         $t9, $s5, 16
    ctx->r25 = S32(ctx->r21 << 16);
    // 0x80040F68: or          $s5, $t9, $zero
    ctx->r21 = ctx->r25 | 0;
    // 0x80040F6C: sra         $t8, $s5, 16
    ctx->r24 = S32(SIGNED(ctx->r21) >> 16);
    // 0x80040F70: or          $s5, $t8, $zero
    ctx->r21 = ctx->r24 | 0;
L_80040F74:
    // 0x80040F74: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80040F78: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x80040F7C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80040F80: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80040F84: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80040F88: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80040F8C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80040F90: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80040F94: jr          $ra
    // 0x80040F98: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80040F98: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80040F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040F9C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80040FA0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80040FA4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80040FA8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80040FAC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80040FB0: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80040FB4: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80040FB8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80040FBC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80040FC0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80040FC4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80040FC8: jal         0x80041E88
    // 0x80040FCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80041E88(rdram, ctx);
        goto after_0;
    // 0x80040FCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80040FD0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80040FD4: lw          $t6, 0x1F20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F20);
    // 0x80040FD8: lbu         $t7, 0x4F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4F);
    // 0x80040FDC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80040FE0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80040FE4: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x80040FE8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80040FEC: slt         $at, $s3, $t9
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80040FF0: beq         $at, $zero, L_80041134
    if (ctx->r1 == 0) {
        // 0x80040FF4: slti        $at, $s4, 0xC8
        ctx->r1 = SIGNED(ctx->r20) < 0XC8 ? 1 : 0;
            goto L_80041134;
    }
L_80040FF4:
    // 0x80040FF4: slti        $at, $s4, 0xC8
    ctx->r1 = SIGNED(ctx->r20) < 0XC8 ? 1 : 0;
    // 0x80040FF8: bne         $at, $zero, L_80041008
    if (ctx->r1 != 0) {
        // 0x80040FFC: nop
    
            goto L_80041008;
    }
    // 0x80040FFC: nop

    // 0x80041000: b           L_80041134
    // 0x80041004: addiu       $s4, $zero, 0xC8
    ctx->r20 = ADD32(0, 0XC8);
        goto L_80041134;
    // 0x80041004: addiu       $s4, $zero, 0xC8
    ctx->r20 = ADD32(0, 0XC8);
L_80041008:
    // 0x80041008: lbu         $t1, 0x4F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4F);
    // 0x8004100C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80041010: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80041014: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80041018: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8004101C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80041020: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80041024: lw          $t0, 0x1F20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1F20);
    // 0x80041028: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8004102C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80041030: sll         $t4, $s3, 2
    ctx->r12 = S32(ctx->r19 << 2);
    // 0x80041034: subu        $t4, $t4, $s3
    ctx->r12 = SUB32(ctx->r12, ctx->r19);
    // 0x80041038: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8004103C: addu        $s7, $t3, $t4
    ctx->r23 = ADD32(ctx->r11, ctx->r12);
    // 0x80041040: lbu         $s0, 0x2($s7)
    ctx->r16 = MEM_BU(ctx->r23, 0X2);
    // 0x80041044: lbu         $s1, 0x3($s7)
    ctx->r17 = MEM_BU(ctx->r23, 0X3);
    // 0x80041048: lbu         $s2, 0x4($s7)
    ctx->r18 = MEM_BU(ctx->r23, 0X4);
    // 0x8004104C: addiu       $s7, $s7, 0x2
    ctx->r23 = ADD32(ctx->r23, 0X2);
    // 0x80041050: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x80041054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80041058: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8004105C: jal         0x800413C0
    // 0x80041060: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800413C0(rdram, ctx);
        goto after_1;
    // 0x80041060: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_1:
    // 0x80041064: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80041068: lw          $t5, 0x1F40($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1F40);
    // 0x8004106C: sll         $t7, $s4, 3
    ctx->r15 = S32(ctx->r20 << 3);
    // 0x80041070: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80041074: nop

    // 0x80041078: addu        $s6, $t6, $t7
    ctx->r22 = ADD32(ctx->r14, ctx->r15);
    // 0x8004107C: sb          $s0, 0x2($s6)
    MEM_B(0X2, ctx->r22) = ctx->r16;
    // 0x80041080: sb          $s1, 0x3($s6)
    MEM_B(0X3, ctx->r22) = ctx->r17;
    // 0x80041084: sb          $s2, 0x4($s6)
    MEM_B(0X4, ctx->r22) = ctx->r18;
    // 0x80041088: lb          $a1, 0x53($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X53);
    // 0x8004108C: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    // 0x80041090: jal         0x80040930
    // 0x80041094: nop

    func_80040930(rdram, ctx);
        goto after_2;
    // 0x80041094: nop

    after_2:
    // 0x80041098: sh          $v0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r2;
    // 0x8004109C: lbu         $t8, 0x4B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4B);
    // 0x800410A0: nop

    // 0x800410A4: bne         $t8, $zero, L_800410D4
    if (ctx->r24 != 0) {
        // 0x800410A8: nop
    
            goto L_800410D4;
    }
    // 0x800410A8: nop

    // 0x800410AC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x800410B0: lw          $a0, 0x5E04($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5E04);
    // 0x800410B4: jal         0x8003E55C
    // 0x800410B8: addiu       $a0, $a0, 0x2E
    ctx->r4 = ADD32(ctx->r4, 0X2E);
    func_8003E55C(rdram, ctx);
        goto after_3;
    // 0x800410B8: addiu       $a0, $a0, 0x2E
    ctx->r4 = ADD32(ctx->r4, 0X2E);
    after_3:
    // 0x800410BC: bne         $v0, $zero, L_800410D4
    if (ctx->r2 != 0) {
        // 0x800410C0: nop
    
            goto L_800410D4;
    }
    // 0x800410C0: nop

    // 0x800410C4: lh          $t9, 0x0($s6)
    ctx->r25 = MEM_H(ctx->r22, 0X0);
    // 0x800410C8: nop

    // 0x800410CC: addiu       $t1, $t9, -0x32
    ctx->r9 = ADD32(ctx->r25, -0X32);
    // 0x800410D0: sh          $t1, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r9;
L_800410D4:
    // 0x800410D4: addiu       $a0, $s6, 0x5
    ctx->r4 = ADD32(ctx->r22, 0X5);
    // 0x800410D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800410DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800410E0: jal         0x80040784
    // 0x800410E4: addiu       $a3, $s6, 0x6
    ctx->r7 = ADD32(ctx->r22, 0X6);
    func_80040784(rdram, ctx);
        goto after_4;
    // 0x800410E4: addiu       $a3, $s6, 0x6
    ctx->r7 = ADD32(ctx->r22, 0X6);
    after_4:
    // 0x800410E8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x800410EC: andi        $t0, $s4, 0xFF
    ctx->r8 = ctx->r20 & 0XFF;
    // 0x800410F0: or          $s4, $t0, $zero
    ctx->r20 = ctx->r8 | 0;
    // 0x800410F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800410F8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800410FC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80041100: jal         0x800413C0
    // 0x80041104: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_800413C0(rdram, ctx);
        goto after_5;
    // 0x80041104: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_5:
    // 0x80041108: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8004110C: lw          $t3, 0x1F20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1F20);
    // 0x80041110: lbu         $t4, 0x4F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X4F);
    // 0x80041114: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80041118: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8004111C: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x80041120: andi        $t2, $s3, 0xFF
    ctx->r10 = ctx->r19 & 0XFF;
    // 0x80041124: or          $s3, $t2, $zero
    ctx->r19 = ctx->r10 | 0;
    // 0x80041128: slt         $at, $s3, $t6
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8004112C: bne         $at, $zero, L_80040FF4
    if (ctx->r1 != 0) {
        // 0x80041130: nop
    
            goto L_80040FF4;
    }
    // 0x80041130: nop

L_80041134:
    // 0x80041134: jal         0x800423F0
    // 0x80041138: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_800423F0(rdram, ctx);
        goto after_6;
    // 0x80041138: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_6:
    // 0x8004113C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80041140: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80041144: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80041148: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8004114C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80041150: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80041154: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80041158: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8004115C: jr          $ra
    // 0x80041160: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80041160: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80041164: nop

    // 0x80041168: nop

    // 0x8004116C: nop

;}
RECOMP_FUNC void func_80041170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041170: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80041174: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80041178: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8004117C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80041180: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80041184: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80041188: beq         $t6, $zero, L_800411A4
    if (ctx->r14 == 0) {
        // 0x8004118C: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_800411A4;
    }
    // 0x8004118C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80041190: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80041194: lw          $t7, -0x430($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X430);
    // 0x80041198: nop

    // 0x8004119C: bne         $t7, $zero, L_800411AC
    if (ctx->r15 != 0) {
        // 0x800411A0: nop
    
            goto L_800411AC;
    }
    // 0x800411A0: nop

L_800411A4:
    // 0x800411A4: b           L_80041248
    // 0x800411A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80041248;
    // 0x800411A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800411AC:
    // 0x800411AC: lbu         $t9, 0x2F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2F);
    // 0x800411B0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800411B4: lw          $t8, -0x430($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X430);
    // 0x800411B8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800411BC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x800411C0: lw          $s1, 0x4($t1)
    ctx->r17 = MEM_W(ctx->r9, 0X4);
    // 0x800411C4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800411C8: lbu         $t2, 0x1($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X1);
    // 0x800411CC: nop

    // 0x800411D0: bne         $t2, $at, L_800411F8
    if (ctx->r10 != ctx->r1) {
        // 0x800411D4: nop
    
            goto L_800411F8;
    }
    // 0x800411D4: nop

    // 0x800411D8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800411DC: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x800411E0: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    // 0x800411E4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800411E8: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x800411EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800411F0: b           L_80041238
    // 0x800411F4: sb          $t5, 0x1($t6)
    MEM_B(0X1, ctx->r14) = ctx->r13;
        goto L_80041238;
    // 0x800411F4: sb          $t5, 0x1($t6)
    MEM_B(0X1, ctx->r14) = ctx->r13;
L_800411F8:
    // 0x800411F8: lbu         $a0, 0x3($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X3);
    // 0x800411FC: jal         0x8006AB84
    // 0x80041200: nop

    func_8006AB84(rdram, ctx);
        goto after_0;
    // 0x80041200: nop

    after_0:
    // 0x80041204: beq         $v0, $zero, L_8004121C
    if (ctx->r2 == 0) {
        // 0x80041208: nop
    
            goto L_8004121C;
    }
    // 0x80041208: nop

    // 0x8004120C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80041210: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x80041214: b           L_80041228
    // 0x80041218: sb          $t7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r15;
        goto L_80041228;
    // 0x80041218: sb          $t7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r15;
L_8004121C:
    // 0x8004121C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80041220: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x80041224: sb          $t8, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r24;
L_80041228:
    // 0x80041228: lbu         $t1, 0x1($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X1);
    // 0x8004122C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80041230: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80041234: sb          $t1, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r9;
L_80041238:
    // 0x80041238: lbu         $t3, 0x2($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X2);
    // 0x8004123C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80041240: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80041244: sb          $t3, 0x2($t4)
    MEM_B(0X2, ctx->r12) = ctx->r11;
L_80041248:
    // 0x80041248: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004124C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80041250: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80041254: jr          $ra
    // 0x80041258: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80041258: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8004125C: nop

;}
RECOMP_FUNC void func_80041260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041260: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80041264: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80041268: jal         0x8007E03C
    // 0x8004126C: addiu       $a0, $zero, 0x264
    ctx->r4 = ADD32(0, 0X264);
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x8004126C: addiu       $a0, $zero, 0x264
    ctx->r4 = ADD32(0, 0X264);
    after_0:
    // 0x80041270: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80041274: sw          $v0, 0x1F30($at)
    MEM_W(0X1F30, ctx->r1) = ctx->r2;
    // 0x80041278: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004127C: lw          $a0, 0x1F30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F30);
    // 0x80041280: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80041284: jal         0x80050650
    // 0x80041288: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    func_80050650(rdram, ctx);
        goto after_1;
    // 0x80041288: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    after_1:
    // 0x8004128C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80041290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80041294: jr          $ra
    // 0x80041298: nop

    return;
    // 0x80041298: nop

;}
RECOMP_FUNC void func_8004129C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004129C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x800412A0: lw          $t6, 0x1F30($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F30);
    // 0x800412A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800412A8: beq         $t6, $zero, L_800412D0
    if (ctx->r14 == 0) {
        // 0x800412AC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800412D0;
    }
    // 0x800412AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800412B0: jal         0x800506D0
    // 0x800412B4: addiu       $a0, $t6, 0x258
    ctx->r4 = ADD32(ctx->r14, 0X258);
    func_800506D0(rdram, ctx);
        goto after_0;
    // 0x800412B4: addiu       $a0, $t6, 0x258
    ctx->r4 = ADD32(ctx->r14, 0X258);
    after_0:
    // 0x800412B8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800412BC: lw          $a0, 0x1F30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F30);
    // 0x800412C0: jal         0x8007E328
    // 0x800412C4: nop

    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x800412C4: nop

    after_1:
    // 0x800412C8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800412CC: sw          $zero, 0x1F30($at)
    MEM_W(0X1F30, ctx->r1) = 0;
L_800412D0:
    // 0x800412D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800412D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800412D8: jr          $ra
    // 0x800412DC: nop

    return;
    // 0x800412DC: nop

;}
RECOMP_FUNC void func_800412E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800412E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800412E4: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x800412E8: lw          $t6, 0x1F30($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F30);
    // 0x800412EC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800412F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800412F4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800412F8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800412FC: beq         $t6, $zero, L_800413A8
    if (ctx->r14 == 0) {
        // 0x80041300: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_800413A8;
    }
    // 0x80041300: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80041304: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80041308: slti        $at, $s1, 0xC8
    ctx->r1 = SIGNED(ctx->r17) < 0XC8 ? 1 : 0;
    // 0x8004130C: beq         $at, $zero, L_80041378
    if (ctx->r1 == 0) {
        // 0x80041310: nop
    
            goto L_80041378;
    }
    // 0x80041310: nop

L_80041314:
    // 0x80041314: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80041318: lw          $t7, 0x1F30($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1F30);
    // 0x8004131C: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x80041320: subu        $t8, $t8, $s1
    ctx->r24 = SUB32(ctx->r24, ctx->r17);
    // 0x80041324: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80041328: jal         0x80041170
    // 0x8004132C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    func_80041170(rdram, ctx);
        goto after_0;
    // 0x8004132C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x80041330: beq         $v0, $zero, L_80041360
    if (ctx->r2 == 0) {
        // 0x80041334: nop
    
            goto L_80041360;
    }
    // 0x80041334: nop

    // 0x80041338: bne         $s0, $zero, L_80041354
    if (ctx->r16 != 0) {
        // 0x8004133C: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_80041354;
    }
    // 0x8004133C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80041340: div         $zero, $s1, $at
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r1)));
    // 0x80041344: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80041348: mflo        $t9
    ctx->r25 = lo;
    // 0x8004134C: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
    // 0x80041350: nop

L_80041354:
    // 0x80041354: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80041358: andi        $t1, $s0, 0xFF
    ctx->r9 = ctx->r16 & 0XFF;
    // 0x8004135C: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
L_80041360:
    // 0x80041360: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80041364: andi        $t2, $s1, 0xFF
    ctx->r10 = ctx->r17 & 0XFF;
    // 0x80041368: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x8004136C: slti        $at, $s1, 0xC8
    ctx->r1 = SIGNED(ctx->r17) < 0XC8 ? 1 : 0;
    // 0x80041370: bne         $at, $zero, L_80041314
    if (ctx->r1 != 0) {
        // 0x80041374: nop
    
            goto L_80041314;
    }
    // 0x80041374: nop

L_80041378:
    // 0x80041378: bne         $s0, $zero, L_8004138C
    if (ctx->r16 != 0) {
        // 0x8004137C: nop
    
            goto L_8004138C;
    }
    // 0x8004137C: nop

    // 0x80041380: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80041384: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x80041388: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
L_8004138C:
    // 0x8004138C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80041390: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80041394: lw          $a1, -0x430($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X430);
    // 0x80041398: lw          $a0, 0x1F30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F30);
    // 0x8004139C: addiu       $a1, $a1, 0x1608
    ctx->r5 = ADD32(ctx->r5, 0X1608);
    // 0x800413A0: jal         0x800508EC
    // 0x800413A4: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    func_800508EC(rdram, ctx);
        goto after_1;
    // 0x800413A4: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    after_1:
L_800413A8:
    // 0x800413A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800413AC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800413B0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800413B4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800413B8: jr          $ra
    // 0x800413BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800413BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800413C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800413C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800413C4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800413C8: lw          $t6, -0x490($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X490);
    // 0x800413CC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800413D0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800413D4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800413D8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800413DC: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x800413E0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800413E4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800413E8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800413EC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800413F0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800413F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800413F8: lbu         $t7, 0x13($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X13);
    // 0x800413FC: nop

    // 0x80041400: slti        $at, $t7, 0x7
    ctx->r1 = SIGNED(ctx->r15) < 0X7 ? 1 : 0;
    // 0x80041404: bne         $at, $zero, L_80041414
    if (ctx->r1 != 0) {
        // 0x80041408: nop
    
            goto L_80041414;
    }
    // 0x80041408: nop

    // 0x8004140C: b           L_800416A8
    // 0x80041410: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800416A8;
    // 0x80041410: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041414:
    // 0x80041414: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80041418: lw          $t8, -0x490($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X490);
    // 0x8004141C: lbu         $t1, 0x4B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4B);
    // 0x80041420: lbu         $t9, 0x13($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X13);
    // 0x80041424: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x80041428: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004142C: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x80041430: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x80041434: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80041438: addiu       $t4, $t4, 0x5CF0
    ctx->r12 = ADD32(ctx->r12, 0X5CF0);
    // 0x8004143C: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80041440: beq         $at, $zero, L_8004151C
    if (ctx->r1 == 0) {
        // 0x80041444: addu        $s0, $t3, $t4
        ctx->r16 = ADD32(ctx->r11, ctx->r12);
            goto L_8004151C;
    }
    // 0x80041444: addu        $s0, $t3, $t4
    ctx->r16 = ADD32(ctx->r11, ctx->r12);
L_80041448:
    // 0x80041448: addu        $t5, $s0, $s1
    ctx->r13 = ADD32(ctx->r16, ctx->r17);
    // 0x8004144C: lb          $t6, 0x0($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X0);
    // 0x80041450: lbu         $t7, 0x43($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X43);
    // 0x80041454: addu        $t1, $s0, $s1
    ctx->r9 = ADD32(ctx->r16, ctx->r17);
    // 0x80041458: lb          $t0, 0x4($t1)
    ctx->r8 = MEM_B(ctx->r9, 0X4);
    // 0x8004145C: lbu         $t2, 0x47($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X47);
    // 0x80041460: addu        $s2, $t6, $t7
    ctx->r18 = ADD32(ctx->r14, ctx->r15);
    // 0x80041464: sll         $t8, $s2, 24
    ctx->r24 = S32(ctx->r18 << 24);
    // 0x80041468: addu        $s3, $t0, $t2
    ctx->r19 = ADD32(ctx->r8, ctx->r10);
    // 0x8004146C: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    // 0x80041470: sll         $t3, $s3, 24
    ctx->r11 = S32(ctx->r19 << 24);
    // 0x80041474: sra         $t9, $s2, 24
    ctx->r25 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80041478: or          $s3, $t3, $zero
    ctx->r19 = ctx->r11 | 0;
    // 0x8004147C: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
    // 0x80041480: sra         $t4, $s3, 24
    ctx->r12 = S32(SIGNED(ctx->r19) >> 24);
    // 0x80041484: bltz        $s2, L_800414A8
    if (SIGNED(ctx->r18) < 0) {
        // 0x80041488: or          $s3, $t4, $zero
        ctx->r19 = ctx->r12 | 0;
            goto L_800414A8;
    }
    // 0x80041488: or          $s3, $t4, $zero
    ctx->r19 = ctx->r12 | 0;
    // 0x8004148C: slti        $at, $s2, 0xA
    ctx->r1 = SIGNED(ctx->r18) < 0XA ? 1 : 0;
    // 0x80041490: beq         $at, $zero, L_800414A8
    if (ctx->r1 == 0) {
        // 0x80041494: nop
    
            goto L_800414A8;
    }
    // 0x80041494: nop

    // 0x80041498: bltz        $s3, L_800414A8
    if (SIGNED(ctx->r19) < 0) {
        // 0x8004149C: slti        $at, $s3, 0x14
        ctx->r1 = SIGNED(ctx->r19) < 0X14 ? 1 : 0;
            goto L_800414A8;
    }
    // 0x8004149C: slti        $at, $s3, 0x14
    ctx->r1 = SIGNED(ctx->r19) < 0X14 ? 1 : 0;
    // 0x800414A0: bne         $at, $zero, L_800414B0
    if (ctx->r1 != 0) {
        // 0x800414A4: nop
    
            goto L_800414B0;
    }
    // 0x800414A4: nop

L_800414A8:
    // 0x800414A8: b           L_800416A8
    // 0x800414AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800416A8;
    // 0x800414AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800414B0:
    // 0x800414B0: lbu         $t5, 0x4F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X4F);
    // 0x800414B4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x800414B8: bne         $t5, $at, L_800414FC
    if (ctx->r13 != ctx->r1) {
        // 0x800414BC: nop
    
            goto L_800414FC;
    }
    // 0x800414BC: nop

    // 0x800414C0: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x800414C4: addu        $t7, $t7, $s3
    ctx->r15 = ADD32(ctx->r15, ctx->r19);
    // 0x800414C8: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x800414CC: addu        $t8, $s2, $t7
    ctx->r24 = ADD32(ctx->r18, ctx->r15);
    // 0x800414D0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x800414D4: lw          $t6, 0x1F30($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F30);
    // 0x800414D8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800414DC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800414E0: addu        $t1, $t6, $t9
    ctx->r9 = ADD32(ctx->r14, ctx->r25);
    // 0x800414E4: lbu         $t0, 0x0($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X0);
    // 0x800414E8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800414EC: beq         $t0, $at, L_800414FC
    if (ctx->r8 == ctx->r1) {
        // 0x800414F0: nop
    
            goto L_800414FC;
    }
    // 0x800414F0: nop

    // 0x800414F4: b           L_800416A8
    // 0x800414F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800416A8;
    // 0x800414F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800414FC:
    // 0x800414FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80041500: sll         $t2, $s1, 24
    ctx->r10 = S32(ctx->r17 << 24);
    // 0x80041504: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x80041508: sra         $t3, $s1, 24
    ctx->r11 = S32(SIGNED(ctx->r17) >> 24);
    // 0x8004150C: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80041510: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80041514: bne         $at, $zero, L_80041448
    if (ctx->r1 != 0) {
        // 0x80041518: nop
    
            goto L_80041448;
    }
    // 0x80041518: nop

L_8004151C:
    // 0x8004151C: lbu         $t4, 0x4F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X4F);
    // 0x80041520: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80041524: bne         $t4, $at, L_8004155C
    if (ctx->r12 != ctx->r1) {
        // 0x80041528: nop
    
            goto L_8004155C;
    }
    // 0x80041528: nop

    // 0x8004152C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80041530: lw          $a0, 0x1F30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F30);
    // 0x80041534: jal         0x80050714
    // 0x80041538: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    func_80050714(rdram, ctx);
        goto after_0;
    // 0x80041538: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    after_0:
    // 0x8004153C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80041540: lw          $a0, 0x1F30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F30);
    // 0x80041544: andi        $s5, $v0, 0xFF
    ctx->r21 = ctx->r2 & 0XFF;
    // 0x80041548: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8004154C: jal         0x80050800
    // 0x80041550: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    func_80050800(rdram, ctx);
        goto after_1;
    // 0x80041550: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    after_1:
    // 0x80041554: b           L_800415D8
    // 0x80041558: nop

        goto L_800415D8;
    // 0x80041558: nop

L_8004155C:
    // 0x8004155C: lbu         $t5, 0x4F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X4F);
    // 0x80041560: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80041564: bne         $t5, $at, L_800415D8
    if (ctx->r13 != ctx->r1) {
        // 0x80041568: nop
    
            goto L_800415D8;
    }
    // 0x80041568: nop

    // 0x8004156C: lb          $t1, 0x4($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X4);
    // 0x80041570: lbu         $t0, 0x47($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X47);
    // 0x80041574: lb          $t7, 0x0($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X0);
    // 0x80041578: addu        $s3, $t1, $t0
    ctx->r19 = ADD32(ctx->r9, ctx->r8);
    // 0x8004157C: lbu         $t8, 0x43($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X43);
    // 0x80041580: sll         $t2, $s3, 24
    ctx->r10 = S32(ctx->r19 << 24);
    // 0x80041584: or          $s3, $t2, $zero
    ctx->r19 = ctx->r10 | 0;
    // 0x80041588: sra         $t3, $s3, 24
    ctx->r11 = S32(SIGNED(ctx->r19) >> 24);
    // 0x8004158C: addu        $s2, $t7, $t8
    ctx->r18 = ADD32(ctx->r15, ctx->r24);
    // 0x80041590: sll         $t6, $s2, 24
    ctx->r14 = S32(ctx->r18 << 24);
    // 0x80041594: or          $s3, $t3, $zero
    ctx->r19 = ctx->r11 | 0;
    // 0x80041598: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x8004159C: sll         $t5, $s3, 2
    ctx->r13 = S32(ctx->r19 << 2);
    // 0x800415A0: sra         $t9, $s2, 24
    ctx->r25 = S32(SIGNED(ctx->r18) >> 24);
    // 0x800415A4: addu        $t5, $t5, $s3
    ctx->r13 = ADD32(ctx->r13, ctx->r19);
    // 0x800415A8: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
    // 0x800415AC: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x800415B0: addu        $t7, $s2, $t5
    ctx->r15 = ADD32(ctx->r18, ctx->r13);
    // 0x800415B4: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x800415B8: lw          $t4, 0x1F30($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1F30);
    // 0x800415BC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800415C0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800415C4: addu        $s4, $t4, $t8
    ctx->r20 = ADD32(ctx->r12, ctx->r24);
    // 0x800415C8: lbu         $a1, 0x2($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0X2);
    // 0x800415CC: jal         0x80050840
    // 0x800415D0: addiu       $a0, $t4, 0x258
    ctx->r4 = ADD32(ctx->r12, 0X258);
    func_80050840(rdram, ctx);
        goto after_2;
    // 0x800415D0: addiu       $a0, $t4, 0x258
    ctx->r4 = ADD32(ctx->r12, 0X258);
    after_2:
    // 0x800415D4: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_800415D8:
    // 0x800415D8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800415DC: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x800415E0: beq         $at, $zero, L_800416A4
    if (ctx->r1 == 0) {
        // 0x800415E4: nop
    
            goto L_800416A4;
    }
    // 0x800415E4: nop

L_800415E8:
    // 0x800415E8: addu        $t3, $s0, $s1
    ctx->r11 = ADD32(ctx->r16, ctx->r17);
    // 0x800415EC: lb          $t5, 0x4($t3)
    ctx->r13 = MEM_B(ctx->r11, 0X4);
    // 0x800415F0: lbu         $t7, 0x47($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X47);
    // 0x800415F4: addu        $t6, $s0, $s1
    ctx->r14 = ADD32(ctx->r16, ctx->r17);
    // 0x800415F8: lb          $t9, 0x0($t6)
    ctx->r25 = MEM_B(ctx->r14, 0X0);
    // 0x800415FC: lbu         $t1, 0x43($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X43);
    // 0x80041600: addu        $s3, $t5, $t7
    ctx->r19 = ADD32(ctx->r13, ctx->r15);
    // 0x80041604: sll         $t8, $s3, 24
    ctx->r24 = S32(ctx->r19 << 24);
    // 0x80041608: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
    // 0x8004160C: addu        $s2, $t9, $t1
    ctx->r18 = ADD32(ctx->r25, ctx->r9);
    // 0x80041610: sra         $t4, $s3, 24
    ctx->r12 = S32(SIGNED(ctx->r19) >> 24);
    // 0x80041614: sll         $t0, $s2, 24
    ctx->r8 = S32(ctx->r18 << 24);
    // 0x80041618: or          $s3, $t4, $zero
    ctx->r19 = ctx->r12 | 0;
    // 0x8004161C: or          $s2, $t0, $zero
    ctx->r18 = ctx->r8 | 0;
    // 0x80041620: sll         $t9, $s3, 2
    ctx->r25 = S32(ctx->r19 << 2);
    // 0x80041624: sra         $t2, $s2, 24
    ctx->r10 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80041628: addu        $t9, $t9, $s3
    ctx->r25 = ADD32(ctx->r25, ctx->r19);
    // 0x8004162C: or          $s2, $t2, $zero
    ctx->r18 = ctx->r10 | 0;
    // 0x80041630: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x80041634: addu        $t1, $s2, $t9
    ctx->r9 = ADD32(ctx->r18, ctx->r25);
    // 0x80041638: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8004163C: lw          $t6, 0x1F30($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F30);
    // 0x80041640: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80041644: lbu         $t2, 0x4F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4F);
    // 0x80041648: subu        $t0, $t0, $t1
    ctx->r8 = SUB32(ctx->r8, ctx->r9);
    // 0x8004164C: addu        $s4, $t6, $t0
    ctx->r20 = ADD32(ctx->r14, ctx->r8);
    // 0x80041650: sb          $t2, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r10;
    // 0x80041654: lbu         $t3, 0x4F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4F);
    // 0x80041658: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8004165C: bne         $t3, $at, L_8004167C
    if (ctx->r11 != ctx->r1) {
        // 0x80041660: nop
    
            goto L_8004167C;
    }
    // 0x80041660: nop

    // 0x80041664: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80041668: lw          $t5, -0x490($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X490);
    // 0x8004166C: nop

    // 0x80041670: lbu         $t7, 0x13($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X13);
    // 0x80041674: b           L_80041684
    // 0x80041678: sb          $t7, 0x1($s4)
    MEM_B(0X1, ctx->r20) = ctx->r15;
        goto L_80041684;
    // 0x80041678: sb          $t7, 0x1($s4)
    MEM_B(0X1, ctx->r20) = ctx->r15;
L_8004167C:
    // 0x8004167C: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x80041680: sb          $t8, 0x1($s4)
    MEM_B(0X1, ctx->r20) = ctx->r24;
L_80041684:
    // 0x80041684: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80041688: sll         $t4, $s1, 24
    ctx->r12 = S32(ctx->r17 << 24);
    // 0x8004168C: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x80041690: sra         $t9, $s1, 24
    ctx->r25 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80041694: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x80041698: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x8004169C: bne         $at, $zero, L_800415E8
    if (ctx->r1 != 0) {
        // 0x800416A0: sb          $s5, 0x2($s4)
        MEM_B(0X2, ctx->r20) = ctx->r21;
            goto L_800415E8;
    }
    // 0x800416A0: sb          $s5, 0x2($s4)
    MEM_B(0X2, ctx->r20) = ctx->r21;
L_800416A4:
    // 0x800416A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800416A8:
    // 0x800416A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800416AC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800416B0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800416B4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800416B8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800416BC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800416C0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800416C4: jr          $ra
    // 0x800416C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800416C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800416CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800416CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800416D0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800416D4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800416D8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800416DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800416E0: lbu         $a2, 0x33($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X33);
    // 0x800416E4: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x800416E8: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x800416EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800416F0: jal         0x800413C0
    // 0x800416F4: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_800413C0(rdram, ctx);
        goto after_0;
    // 0x800416F4: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_0:
    // 0x800416F8: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x800416FC: beq         $s0, $zero, L_80041718
    if (ctx->r16 == 0) {
        // 0x80041700: nop
    
            goto L_80041718;
    }
    // 0x80041700: nop

    // 0x80041704: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x80041708: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x8004170C: lbu         $a2, 0x33($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X33);
    // 0x80041710: jal         0x800413C0
    // 0x80041714: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_800413C0(rdram, ctx);
        goto after_1;
    // 0x80041714: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_1:
L_80041718:
    // 0x80041718: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004171C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80041720: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80041724: jr          $ra
    // 0x80041728: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80041728: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8004172C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004172C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80041730: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80041734: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80041738: lw          $s0, -0x490($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X490);
    // 0x8004173C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80041740: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80041744: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80041748: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8004174C: lb          $t7, 0x2B($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X2B);
    // 0x80041750: lb          $t6, 0x11($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X11);
    // 0x80041754: lb          $t9, 0x12($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X12);
    // 0x80041758: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8004175C: sb          $t8, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r24;
    // 0x80041760: lb          $t0, 0x2F($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X2F);
    // 0x80041764: lbu         $t2, 0xA($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XA);
    // 0x80041768: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8004176C: sb          $t1, 0x12($s0)
    MEM_B(0X12, ctx->r16) = ctx->r9;
    // 0x80041770: lb          $t3, 0x33($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X33);
    // 0x80041774: lb          $a0, 0x12($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X12);
    // 0x80041778: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8004177C: andi        $t5, $t4, 0x3
    ctx->r13 = ctx->r12 & 0X3;
    // 0x80041780: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
    // 0x80041784: lbu         $a1, 0xA($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XA);
    // 0x80041788: lbu         $a2, 0x13($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X13);
    // 0x8004178C: jal         0x800408B0
    // 0x80041790: nop

    func_800408B0(rdram, ctx);
        goto after_0;
    // 0x80041790: nop

    after_0:
    // 0x80041794: beq         $v0, $zero, L_800417A4
    if (ctx->r2 == 0) {
        // 0x80041798: nop
    
            goto L_800417A4;
    }
    // 0x80041798: nop

    // 0x8004179C: b           L_80041800
    // 0x800417A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80041800;
    // 0x800417A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800417A4:
    // 0x800417A4: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x800417A8: lb          $a1, 0x12($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X12);
    // 0x800417AC: lbu         $a2, 0xA($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XA);
    // 0x800417B0: jal         0x800416CC
    // 0x800417B4: nop

    func_800416CC(rdram, ctx);
        goto after_1;
    // 0x800417B4: nop

    after_1:
    // 0x800417B8: bne         $v0, $zero, L_800417FC
    if (ctx->r2 != 0) {
        // 0x800417BC: nop
    
            goto L_800417FC;
    }
    // 0x800417BC: nop

    // 0x800417C0: lb          $t6, 0x11($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X11);
    // 0x800417C4: lb          $t7, 0x2B($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X2B);
    // 0x800417C8: lb          $t9, 0x12($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X12);
    // 0x800417CC: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x800417D0: sb          $t8, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r24;
    // 0x800417D4: lb          $t0, 0x2F($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X2F);
    // 0x800417D8: lbu         $t2, 0xA($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XA);
    // 0x800417DC: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x800417E0: sb          $t1, 0x12($s0)
    MEM_B(0X12, ctx->r16) = ctx->r9;
    // 0x800417E4: lb          $t3, 0x33($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X33);
    // 0x800417E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800417EC: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x800417F0: andi        $t5, $t4, 0x3
    ctx->r13 = ctx->r12 & 0X3;
    // 0x800417F4: b           L_80041800
    // 0x800417F8: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
        goto L_80041800;
    // 0x800417F8: sb          $t5, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r13;
L_800417FC:
    // 0x800417FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80041800:
    // 0x80041800: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80041804: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80041808: jr          $ra
    // 0x8004180C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8004180C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80041810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041810: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80041814: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80041818: lw          $t6, -0x490($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X490);
    // 0x8004181C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80041820: lbu         $t7, 0x33($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X33);
    // 0x80041824: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80041828: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8004182C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80041830: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80041834: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80041838: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8004183C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80041840: lb          $s0, 0x11($t6)
    ctx->r16 = MEM_B(ctx->r14, 0X11);
    // 0x80041844: sb          $t7, 0x11($t6)
    MEM_B(0X11, ctx->r14) = ctx->r15;
    // 0x80041848: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8004184C: lw          $t9, -0x490($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X490);
    // 0x80041850: lbu         $t8, 0x37($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X37);
    // 0x80041854: lb          $s1, 0x12($t6)
    ctx->r17 = MEM_B(ctx->r14, 0X12);
    // 0x80041858: lb          $s2, 0xA($t6)
    ctx->r18 = MEM_B(ctx->r14, 0XA);
    // 0x8004185C: sb          $t8, 0x12($t9)
    MEM_B(0X12, ctx->r25) = ctx->r24;
    // 0x80041860: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80041864: lw          $t1, -0x490($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X490);
    // 0x80041868: lbu         $t0, 0x3B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X3B);
    // 0x8004186C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80041870: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80041874: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80041878: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8004187C: jal         0x8004172C
    // 0x80041880: sb          $t0, 0xA($t1)
    MEM_B(0XA, ctx->r9) = ctx->r8;
    func_8004172C(rdram, ctx);
        goto after_0;
    // 0x80041880: sb          $t0, 0xA($t1)
    MEM_B(0XA, ctx->r9) = ctx->r8;
    after_0:
    // 0x80041884: bne         $v0, $zero, L_800418D4
    if (ctx->r2 != 0) {
        // 0x80041888: nop
    
            goto L_800418D4;
    }
    // 0x80041888: nop

    // 0x8004188C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80041890: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80041894: jal         0x8004172C
    // 0x80041898: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004172C(rdram, ctx);
        goto after_1;
    // 0x80041898: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8004189C: bne         $v0, $zero, L_800418D4
    if (ctx->r2 != 0) {
        // 0x800418A0: nop
    
            goto L_800418D4;
    }
    // 0x800418A0: nop

    // 0x800418A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800418A8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800418AC: jal         0x8004172C
    // 0x800418B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004172C(rdram, ctx);
        goto after_2;
    // 0x800418B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800418B4: bne         $v0, $zero, L_800418D4
    if (ctx->r2 != 0) {
        // 0x800418B8: nop
    
            goto L_800418D4;
    }
    // 0x800418B8: nop

    // 0x800418BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800418C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800418C4: jal         0x8004172C
    // 0x800418C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004172C(rdram, ctx);
        goto after_3;
    // 0x800418C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800418CC: beq         $v0, $zero, L_800418D8
    if (ctx->r2 == 0) {
        // 0x800418D0: nop
    
            goto L_800418D8;
    }
    // 0x800418D0: nop

L_800418D4:
    // 0x800418D4: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_800418D8:
    // 0x800418D8: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800418DC: lw          $t2, -0x490($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X490);
    // 0x800418E0: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800418E4: sb          $s0, 0x11($t2)
    MEM_B(0X11, ctx->r10) = ctx->r16;
    // 0x800418E8: lw          $t3, -0x490($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X490);
    // 0x800418EC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800418F0: sb          $s1, 0x12($t3)
    MEM_B(0X12, ctx->r11) = ctx->r17;
    // 0x800418F4: lw          $t4, -0x490($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X490);
    // 0x800418F8: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x800418FC: sb          $s2, 0xA($t4)
    MEM_B(0XA, ctx->r12) = ctx->r18;
    // 0x80041900: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80041904: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80041908: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8004190C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80041910: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80041914: jr          $ra
    // 0x80041918: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80041918: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8004191C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004191C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80041920: sll         $a2, $a1, 24
    ctx->r6 = S32(ctx->r5 << 24);
    // 0x80041924: sra         $t6, $a2, 24
    ctx->r14 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80041928: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8004192C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80041930: bltz        $a2, L_80041990
    if (SIGNED(ctx->r6) < 0) {
        // 0x80041934: andi        $a0, $a0, 0xFF
        ctx->r4 = ctx->r4 & 0XFF;
            goto L_80041990;
    }
    // 0x80041934: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
L_80041938:
    // 0x80041938: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x8004193C: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x80041940: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x80041944: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x80041948: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004194C: lw          $t7, 0x1F30($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1F30);
    // 0x80041950: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80041954: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80041958: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x8004195C: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80041960: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80041964: beq         $t2, $at, L_80041974
    if (ctx->r10 == ctx->r1) {
        // 0x80041968: nop
    
            goto L_80041974;
    }
    // 0x80041968: nop

    // 0x8004196C: b           L_80041994
    // 0x80041970: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80041994;
    // 0x80041970: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041974:
    // 0x80041974: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80041978: sll         $t3, $a2, 24
    ctx->r11 = S32(ctx->r6 << 24);
    // 0x8004197C: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80041980: sra         $t4, $a2, 24
    ctx->r12 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80041984: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x80041988: bgez        $a2, L_80041938
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8004198C: nop
    
            goto L_80041938;
    }
    // 0x8004198C: nop

L_80041990:
    // 0x80041990: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80041994:
    // 0x80041994: jr          $ra
    // 0x80041998: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80041998: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8004199C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004199C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800419A0: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x800419A4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800419A8: lw          $t6, -0x490($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X490);
    // 0x800419AC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800419B0: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x800419B4: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x800419B8: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x800419BC: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x800419C0: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x800419C4: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x800419C8: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800419CC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800419D0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800419D4: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x800419D8: lb          $s2, 0x11($t6)
    ctx->r18 = MEM_B(ctx->r14, 0X11);
    // 0x800419DC: lb          $s1, 0x0($t7)
    ctx->r17 = MEM_B(ctx->r15, 0X0);
    // 0x800419E0: lb          $s3, 0x12($t6)
    ctx->r19 = MEM_B(ctx->r14, 0X12);
    // 0x800419E4: lb          $s4, 0xA($t6)
    ctx->r20 = MEM_B(ctx->r14, 0XA);
    // 0x800419E8: bltz        $s1, L_80041A68
    if (SIGNED(ctx->r17) < 0) {
        // 0x800419EC: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80041A68;
    }
    // 0x800419EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800419F0:
    // 0x800419F0: lbu         $a1, 0x73($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X73);
    // 0x800419F4: lbu         $a3, 0x7B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X7B);
    // 0x800419F8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x800419FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80041A00: jal         0x8003F760
    // 0x80041A04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8003F760(rdram, ctx);
        goto after_0;
    // 0x80041A04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80041A08: lbu         $a0, 0x73($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X73);
    // 0x80041A0C: lbu         $a2, 0x7B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X7B);
    // 0x80041A10: jal         0x800416CC
    // 0x80041A14: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800416CC(rdram, ctx);
        goto after_1;
    // 0x80041A14: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x80041A18: sltu        $s5, $zero, $v0
    ctx->r21 = 0 < ctx->r2 ? 1 : 0;
    // 0x80041A1C: beq         $s5, $zero, L_80041A34
    if (ctx->r21 == 0) {
        // 0x80041A20: nop
    
            goto L_80041A34;
    }
    // 0x80041A20: nop

    // 0x80041A24: lbu         $a1, 0x7F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X7F);
    // 0x80041A28: jal         0x800400FC
    // 0x80041A2C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_800400FC(rdram, ctx);
        goto after_2;
    // 0x80041A2C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_2:
    // 0x80041A30: sltu        $s5, $zero, $v0
    ctx->r21 = 0 < ctx->r2 ? 1 : 0;
L_80041A34:
    // 0x80041A34: andi        $s0, $s5, 0xFF
    ctx->r16 = ctx->r21 & 0XFF;
    // 0x80041A38: beq         $s0, $zero, L_80041A4C
    if (ctx->r16 == 0) {
        // 0x80041A3C: nop
    
            goto L_80041A4C;
    }
    // 0x80041A3C: nop

    // 0x80041A40: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x80041A44: b           L_80041A68
    // 0x80041A48: sb          $s1, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r17;
        goto L_80041A68;
    // 0x80041A48: sb          $s1, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r17;
L_80041A4C:
    // 0x80041A4C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x80041A50: sll         $t9, $s1, 24
    ctx->r25 = S32(ctx->r17 << 24);
    // 0x80041A54: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x80041A58: sra         $t0, $s1, 24
    ctx->r8 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80041A5C: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x80041A60: bgez        $s1, L_800419F0
    if (SIGNED(ctx->r17) >= 0) {
        // 0x80041A64: nop
    
            goto L_800419F0;
    }
    // 0x80041A64: nop

L_80041A68:
    // 0x80041A68: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80041A6C: lw          $t1, -0x490($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X490);
    // 0x80041A70: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80041A74: sb          $s2, 0x11($t1)
    MEM_B(0X11, ctx->r9) = ctx->r18;
    // 0x80041A78: lw          $t2, -0x490($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X490);
    // 0x80041A7C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80041A80: sb          $s3, 0x12($t2)
    MEM_B(0X12, ctx->r10) = ctx->r19;
    // 0x80041A84: lw          $t3, -0x490($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X490);
    // 0x80041A88: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80041A8C: sb          $s4, 0xA($t3)
    MEM_B(0XA, ctx->r11) = ctx->r20;
    // 0x80041A90: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80041A94: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80041A98: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80041A9C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80041AA0: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80041AA4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80041AA8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80041AAC: jr          $ra
    // 0x80041AB0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80041AB0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80041AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041AB4: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80041AB8: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80041ABC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80041AC0: bne         $a1, $at, L_80041AD0
    if (ctx->r5 != ctx->r1) {
        // 0x80041AC4: andi        $a0, $a0, 0xFF
        ctx->r4 = ctx->r4 & 0XFF;
            goto L_80041AD0;
    }
    // 0x80041AC4: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80041AC8: b           L_80041B40
    // 0x80041ACC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80041B40;
    // 0x80041ACC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80041AD0:
    // 0x80041AD0: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x80041AD4: addiu       $t6, $a0, 0x4
    ctx->r14 = ADD32(ctx->r4, 0X4);
    // 0x80041AD8: slt         $at, $a2, $t6
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80041ADC: beq         $at, $zero, L_80041B3C
    if (ctx->r1 == 0) {
        // 0x80041AE0: nop
    
            goto L_80041B3C;
    }
    // 0x80041AE0: nop

L_80041AE4:
    // 0x80041AE4: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80041AE8: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x80041AEC: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x80041AF0: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x80041AF4: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80041AF8: lw          $t7, 0x1F30($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1F30);
    // 0x80041AFC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80041B00: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80041B04: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x80041B08: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80041B0C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80041B10: bne         $t2, $at, L_80041B20
    if (ctx->r10 != ctx->r1) {
        // 0x80041B14: nop
    
            goto L_80041B20;
    }
    // 0x80041B14: nop

    // 0x80041B18: b           L_80041B40
    // 0x80041B1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80041B40;
    // 0x80041B1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041B20:
    // 0x80041B20: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80041B24: andi        $t3, $a2, 0xFF
    ctx->r11 = ctx->r6 & 0XFF;
    // 0x80041B28: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80041B2C: addiu       $t4, $a0, 0x4
    ctx->r12 = ADD32(ctx->r4, 0X4);
    // 0x80041B30: slt         $at, $a2, $t4
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80041B34: bne         $at, $zero, L_80041AE4
    if (ctx->r1 != 0) {
        // 0x80041B38: nop
    
            goto L_80041AE4;
    }
    // 0x80041B38: nop

L_80041B3C:
    // 0x80041B3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80041B40:
    // 0x80041B40: jr          $ra
    // 0x80041B44: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80041B44: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80041B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041B48: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80041B4C: slti        $at, $a0, 0x7
    ctx->r1 = SIGNED(ctx->r4) < 0X7 ? 1 : 0;
    // 0x80041B50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80041B54: beq         $at, $zero, L_80041B68
    if (ctx->r1 == 0) {
        // 0x80041B58: andi        $a1, $a1, 0xFF
        ctx->r5 = ctx->r5 & 0XFF;
            goto L_80041B68;
    }
    // 0x80041B58: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80041B5C: slti        $at, $a1, 0x11
    ctx->r1 = SIGNED(ctx->r5) < 0X11 ? 1 : 0;
    // 0x80041B60: bne         $at, $zero, L_80041B70
    if (ctx->r1 != 0) {
        // 0x80041B64: nop
    
            goto L_80041B70;
    }
    // 0x80041B64: nop

L_80041B68:
    // 0x80041B68: b           L_80041D98
    // 0x80041B6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80041D98;
    // 0x80041B6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041B70:
    // 0x80041B70: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80041B74: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80041B78: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x80041B7C: sb          $t6, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r14;
    // 0x80041B80: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x80041B84: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x80041B88: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x80041B8C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80041B90: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80041B94: lw          $t7, 0x1F30($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1F30);
    // 0x80041B98: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x80041B9C: addiu       $t9, $a1, 0x4
    ctx->r25 = ADD32(ctx->r5, 0X4);
    // 0x80041BA0: andi        $t1, $a1, 0xFF
    ctx->r9 = ctx->r5 & 0XFF;
    // 0x80041BA4: slt         $at, $t1, $t9
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80041BA8: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x80041BAC: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x80041BB0: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x80041BB4: beq         $at, $zero, L_80041D40
    if (ctx->r1 == 0) {
        // 0x80041BB8: sw          $t8, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r24;
            goto L_80041D40;
    }
    // 0x80041BB8: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
L_80041BBC:
    // 0x80041BBC: andi        $t0, $a0, 0xFF
    ctx->r8 = ctx->r4 & 0XFF;
    // 0x80041BC0: addiu       $t7, $a0, 0x4
    ctx->r15 = ADD32(ctx->r4, 0X4);
    // 0x80041BC4: slt         $at, $t0, $t7
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80041BC8: beq         $at, $zero, L_80041D1C
    if (ctx->r1 == 0) {
        // 0x80041BCC: nop
    
            goto L_80041D1C;
    }
    // 0x80041BCC: nop

L_80041BD0:
    // 0x80041BD0: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x80041BD4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80041BD8: lbu         $t8, 0x0($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X0);
    // 0x80041BDC: nop

    // 0x80041BE0: bne         $t8, $at, L_80041BF0
    if (ctx->r24 != ctx->r1) {
        // 0x80041BE4: nop
    
            goto L_80041BF0;
    }
    // 0x80041BE4: nop

    // 0x80041BE8: b           L_80041D98
    // 0x80041BEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80041D98;
    // 0x80041BEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041BF0:
    // 0x80041BF0: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x80041BF4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80041BF8: lbu         $t7, 0x0($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X0);
    // 0x80041BFC: nop

    // 0x80041C00: beq         $t7, $at, L_80041CF8
    if (ctx->r15 == ctx->r1) {
        // 0x80041C04: nop
    
            goto L_80041CF8;
    }
    // 0x80041C04: nop

    // 0x80041C08: lbu         $t6, 0x3($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3);
    // 0x80041C0C: nop

    // 0x80041C10: bne         $t6, $zero, L_80041C30
    if (ctx->r14 != 0) {
        // 0x80041C14: nop
    
            goto L_80041C30;
    }
    // 0x80041C14: nop

    // 0x80041C18: lbu         $t8, 0x1($t9)
    ctx->r24 = MEM_BU(ctx->r25, 0X1);
    // 0x80041C1C: nop

    // 0x80041C20: beq         $t4, $t8, L_80041C30
    if (ctx->r12 == ctx->r24) {
        // 0x80041C24: nop
    
            goto L_80041C30;
    }
    // 0x80041C24: nop

    // 0x80041C28: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80041C2C: sb          $t7, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r15;
L_80041C30:
    // 0x80041C30: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x80041C34: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80041C38: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80041C3C: beq         $at, $zero, L_80041C94
    if (ctx->r1 == 0) {
        // 0x80041C40: sb          $t6, 0x2($sp)
        MEM_B(0X2, ctx->r29) = ctx->r14;
            goto L_80041C94;
    }
    // 0x80041C40: sb          $t6, 0x2($sp)
    MEM_B(0X2, ctx->r29) = ctx->r14;
L_80041C44:
    // 0x80041C44: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x80041C48: addu        $t9, $sp, $t2
    ctx->r25 = ADD32(ctx->r29, ctx->r10);
    // 0x80041C4C: lbu         $t9, 0x8($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X8);
    // 0x80041C50: lbu         $t7, 0x2($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X2);
    // 0x80041C54: nop

    // 0x80041C58: bne         $t9, $t7, L_80041C7C
    if (ctx->r25 != ctx->r15) {
        // 0x80041C5C: nop
    
            goto L_80041C7C;
    }
    // 0x80041C5C: nop

    // 0x80041C60: addiu       $t6, $sp, 0x4
    ctx->r14 = ADD32(ctx->r29, 0X4);
    // 0x80041C64: addu        $t8, $t2, $t6
    ctx->r24 = ADD32(ctx->r10, ctx->r14);
    // 0x80041C68: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x80041C6C: addu        $t8, $t2, $t6
    ctx->r24 = ADD32(ctx->r10, ctx->r14);
    // 0x80041C70: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x80041C74: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x80041C78: sb          $zero, 0x2($sp)
    MEM_B(0X2, ctx->r29) = 0;
L_80041C7C:
    // 0x80041C7C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x80041C80: andi        $t9, $t2, 0xFF
    ctx->r25 = ctx->r10 & 0XFF;
    // 0x80041C84: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
    // 0x80041C88: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80041C8C: bne         $at, $zero, L_80041C44
    if (ctx->r1 != 0) {
        // 0x80041C90: nop
    
            goto L_80041C44;
    }
    // 0x80041C90: nop

L_80041C94:
    // 0x80041C94: lbu         $t6, 0x2($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2);
    // 0x80041C98: nop

    // 0x80041C9C: beq         $t6, $zero, L_80041CF8
    if (ctx->r14 == 0) {
        // 0x80041CA0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80041CF8;
    }
    // 0x80041CA0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80041CA4: bne         $t3, $at, L_80041CB4
    if (ctx->r11 != ctx->r1) {
        // 0x80041CA8: nop
    
            goto L_80041CB4;
    }
    // 0x80041CA8: nop

    // 0x80041CAC: b           L_80041D98
    // 0x80041CB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80041D98;
    // 0x80041CB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041CB4:
    // 0x80041CB4: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x80041CB8: addu        $t9, $sp, $t3
    ctx->r25 = ADD32(ctx->r29, ctx->r11);
    // 0x80041CBC: lbu         $t8, 0x2($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2);
    // 0x80041CC0: addu        $t7, $sp, $t3
    ctx->r15 = ADD32(ctx->r29, ctx->r11);
    // 0x80041CC4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80041CC8: sb          $t8, 0x8($t9)
    MEM_B(0X8, ctx->r25) = ctx->r24;
    // 0x80041CCC: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
    // 0x80041CD0: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x80041CD4: sb          $zero, 0x3($sp)
    MEM_B(0X3, ctx->r29) = 0;
    // 0x80041CD8: lbu         $t4, 0x1($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0X1);
    // 0x80041CDC: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80041CE0: andi        $t8, $t3, 0xFF
    ctx->r24 = ctx->r11 & 0XFF;
    // 0x80041CE4: sllv        $t7, $t6, $t4
    ctx->r15 = S32(ctx->r14 << (ctx->r12 & 31));
    // 0x80041CE8: or          $t3, $t8, $zero
    ctx->r11 = ctx->r24 | 0;
    // 0x80041CEC: or          $t5, $t5, $t7
    ctx->r13 = ctx->r13 | ctx->r15;
    // 0x80041CF0: andi        $t8, $t5, 0xFF
    ctx->r24 = ctx->r13 & 0XFF;
    // 0x80041CF4: or          $t5, $t8, $zero
    ctx->r13 = ctx->r24 | 0;
L_80041CF8:
    // 0x80041CF8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80041CFC: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x80041D00: andi        $t9, $t0, 0xFF
    ctx->r25 = ctx->r8 & 0XFF;
    // 0x80041D04: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x80041D08: addiu       $t8, $a0, 0x4
    ctx->r24 = ADD32(ctx->r4, 0X4);
    // 0x80041D0C: slt         $at, $t0, $t8
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80041D10: addiu       $t7, $t6, 0x3
    ctx->r15 = ADD32(ctx->r14, 0X3);
    // 0x80041D14: bne         $at, $zero, L_80041BD0
    if (ctx->r1 != 0) {
        // 0x80041D18: sw          $t7, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r15;
            goto L_80041BD0;
    }
    // 0x80041D18: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
L_80041D1C:
    // 0x80041D1C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80041D20: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x80041D24: andi        $t7, $t1, 0xFF
    ctx->r15 = ctx->r9 & 0XFF;
    // 0x80041D28: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x80041D2C: addiu       $t8, $a1, 0x4
    ctx->r24 = ADD32(ctx->r5, 0X4);
    // 0x80041D30: slt         $at, $t1, $t8
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80041D34: addiu       $t6, $t9, 0x12
    ctx->r14 = ADD32(ctx->r25, 0X12);
    // 0x80041D38: bne         $at, $zero, L_80041BBC
    if (ctx->r1 != 0) {
        // 0x80041D3C: sw          $t6, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r14;
            goto L_80041BBC;
    }
    // 0x80041D3C: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
L_80041D40:
    // 0x80041D40: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x80041D44: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80041D48: beq         $at, $zero, L_80041D88
    if (ctx->r1 == 0) {
        // 0x80041D4C: nop
    
            goto L_80041D88;
    }
    // 0x80041D4C: nop

L_80041D50:
    // 0x80041D50: addu        $t9, $sp, $t2
    ctx->r25 = ADD32(ctx->r29, ctx->r10);
    // 0x80041D54: lbu         $t9, 0x4($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X4);
    // 0x80041D58: nop

    // 0x80041D5C: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x80041D60: beq         $at, $zero, L_80041D70
    if (ctx->r1 == 0) {
        // 0x80041D64: nop
    
            goto L_80041D70;
    }
    // 0x80041D64: nop

    // 0x80041D68: b           L_80041D98
    // 0x80041D6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80041D98;
    // 0x80041D6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041D70:
    // 0x80041D70: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x80041D74: andi        $t6, $t2, 0xFF
    ctx->r14 = ctx->r10 & 0XFF;
    // 0x80041D78: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x80041D7C: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80041D80: bne         $at, $zero, L_80041D50
    if (ctx->r1 != 0) {
        // 0x80041D84: nop
    
            goto L_80041D50;
    }
    // 0x80041D84: nop

L_80041D88:
    // 0x80041D88: sb          $t3, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r11;
    // 0x80041D8C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80041D90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80041D94: sb          $t5, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r13;
L_80041D98:
    // 0x80041D98: jr          $ra
    // 0x80041D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80041D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80041DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041DA0: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x80041DA4: nop

    // 0x80041DA8: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x80041DAC: lb          $t7, 0x1($a1)
    ctx->r15 = MEM_B(ctx->r5, 0X1);
    // 0x80041DB0: nop

    // 0x80041DB4: sb          $t7, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r15;
    // 0x80041DB8: lbu         $t8, 0x2($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X2);
    // 0x80041DBC: jr          $ra
    // 0x80041DC0: sb          $t8, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r24;
    return;
    // 0x80041DC0: sb          $t8, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r24;
    // 0x80041DC4: nop

    // 0x80041DC8: nop

    // 0x80041DCC: nop

;}
RECOMP_FUNC void func_80041DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041DD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80041DD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80041DD8: jal         0x8007E03C
    // 0x80041DDC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x80041DDC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x80041DE0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80041DE4: sw          $v0, 0x1F40($at)
    MEM_W(0X1F40, ctx->r1) = ctx->r2;
    // 0x80041DE8: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80041DEC: lw          $t6, 0x1F40($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F40);
    // 0x80041DF0: nop

    // 0x80041DF4: beq         $t6, $zero, L_80041E14
    if (ctx->r14 == 0) {
        // 0x80041DF8: nop
    
            goto L_80041E14;
    }
    // 0x80041DF8: nop

    // 0x80041DFC: jal         0x8007E03C
    // 0x80041E00: addiu       $a0, $zero, 0x640
    ctx->r4 = ADD32(0, 0X640);
    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x80041E00: addiu       $a0, $zero, 0x640
    ctx->r4 = ADD32(0, 0X640);
    after_1:
    // 0x80041E04: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80041E08: lw          $t7, 0x1F40($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1F40);
    // 0x80041E0C: nop

    // 0x80041E10: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
L_80041E14:
    // 0x80041E14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80041E18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80041E1C: jr          $ra
    // 0x80041E20: nop

    return;
    // 0x80041E20: nop

;}
RECOMP_FUNC void func_80041E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041E24: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80041E28: lw          $t6, 0x1F40($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F40);
    // 0x80041E2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80041E30: beq         $t6, $zero, L_80041E78
    if (ctx->r14 == 0) {
        // 0x80041E34: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80041E78;
    }
    // 0x80041E34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80041E38: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80041E3C: nop

    // 0x80041E40: beq         $t7, $zero, L_80041E60
    if (ctx->r15 == 0) {
        // 0x80041E44: nop
    
            goto L_80041E60;
    }
    // 0x80041E44: nop

    // 0x80041E48: jal         0x8007E328
    // 0x80041E4C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x80041E4C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x80041E50: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80041E54: lw          $t8, 0x1F40($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F40);
    // 0x80041E58: nop

    // 0x80041E5C: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
L_80041E60:
    // 0x80041E60: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80041E64: lw          $a0, 0x1F40($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F40);
    // 0x80041E68: jal         0x8007E328
    // 0x80041E6C: nop

    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x80041E6C: nop

    after_1:
    // 0x80041E70: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80041E74: sw          $zero, 0x1F40($at)
    MEM_W(0X1F40, ctx->r1) = 0;
L_80041E78:
    // 0x80041E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80041E7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80041E80: jr          $ra
    // 0x80041E84: nop

    return;
    // 0x80041E84: nop

;}
RECOMP_FUNC void func_80041E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041E88: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80041E8C: lw          $t6, 0x1F40($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F40);
    // 0x80041E90: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80041E94: beq         $t6, $zero, L_80041EE8
    if (ctx->r14 == 0) {
        // 0x80041E98: nop
    
            goto L_80041EE8;
    }
    // 0x80041E98: nop

    // 0x80041E9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80041EA0: slti        $at, $a0, 0xC8
    ctx->r1 = SIGNED(ctx->r4) < 0XC8 ? 1 : 0;
    // 0x80041EA4: beq         $at, $zero, L_80041EE8
    if (ctx->r1 == 0) {
        // 0x80041EA8: nop
    
            goto L_80041EE8;
    }
    // 0x80041EA8: nop

L_80041EAC:
    // 0x80041EAC: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80041EB0: lw          $t7, 0x1F40($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1F40);
    // 0x80041EB4: sll         $t9, $a0, 3
    ctx->r25 = S32(ctx->r4 << 3);
    // 0x80041EB8: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80041EBC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80041EC0: andi        $t1, $a0, 0xFF
    ctx->r9 = ctx->r4 & 0XFF;
    // 0x80041EC4: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x80041EC8: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80041ECC: slti        $at, $a0, 0xC8
    ctx->r1 = SIGNED(ctx->r4) < 0XC8 ? 1 : 0;
    // 0x80041ED0: addiu       $t0, $zero, -0x8000
    ctx->r8 = ADD32(0, -0X8000);
    // 0x80041ED4: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
    // 0x80041ED8: sb          $zero, 0x2($a1)
    MEM_B(0X2, ctx->r5) = 0;
    // 0x80041EDC: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x80041EE0: bne         $at, $zero, L_80041EAC
    if (ctx->r1 != 0) {
        // 0x80041EE4: sb          $zero, 0x4($a1)
        MEM_B(0X4, ctx->r5) = 0;
            goto L_80041EAC;
    }
    // 0x80041EE4: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
L_80041EE8:
    // 0x80041EE8: jr          $ra
    // 0x80041EEC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80041EEC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80041EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041EF0: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80041EF4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80041EF8: sh          $t6, 0x0($sp)
    MEM_H(0X0, ctx->r29) = ctx->r14;
    // 0x80041EFC: lbu         $t7, 0x2($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X2);
    // 0x80041F00: nop

    // 0x80041F04: sb          $t7, 0x2($sp)
    MEM_B(0X2, ctx->r29) = ctx->r15;
    // 0x80041F08: lb          $t8, 0x3($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X3);
    // 0x80041F0C: nop

    // 0x80041F10: sb          $t8, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r24;
    // 0x80041F14: lbu         $t9, 0x4($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X4);
    // 0x80041F18: nop

    // 0x80041F1C: sb          $t9, 0x4($sp)
    MEM_B(0X4, ctx->r29) = ctx->r25;
    // 0x80041F20: lbu         $t0, 0x5($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X5);
    // 0x80041F24: nop

    // 0x80041F28: sb          $t0, 0x5($sp)
    MEM_B(0X5, ctx->r29) = ctx->r8;
    // 0x80041F2C: lbu         $t1, 0x6($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X6);
    // 0x80041F30: nop

    // 0x80041F34: sb          $t1, 0x6($sp)
    MEM_B(0X6, ctx->r29) = ctx->r9;
    // 0x80041F38: lh          $t2, 0x0($a1)
    ctx->r10 = MEM_H(ctx->r5, 0X0);
    // 0x80041F3C: nop

    // 0x80041F40: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    // 0x80041F44: lbu         $t3, 0x2($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X2);
    // 0x80041F48: nop

    // 0x80041F4C: sb          $t3, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r11;
    // 0x80041F50: lb          $t4, 0x3($a1)
    ctx->r12 = MEM_B(ctx->r5, 0X3);
    // 0x80041F54: nop

    // 0x80041F58: sb          $t4, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r12;
    // 0x80041F5C: lbu         $t5, 0x4($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X4);
    // 0x80041F60: nop

    // 0x80041F64: sb          $t5, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r13;
    // 0x80041F68: lbu         $t6, 0x5($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X5);
    // 0x80041F6C: nop

    // 0x80041F70: sb          $t6, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r14;
    // 0x80041F74: lbu         $t7, 0x6($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X6);
    // 0x80041F78: nop

    // 0x80041F7C: sb          $t7, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r15;
    // 0x80041F80: lh          $t8, 0x0($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X0);
    // 0x80041F84: nop

    // 0x80041F88: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80041F8C: lbu         $t9, 0x2($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2);
    // 0x80041F90: nop

    // 0x80041F94: sb          $t9, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r25;
    // 0x80041F98: lb          $t0, 0x3($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X3);
    // 0x80041F9C: nop

    // 0x80041FA0: sb          $t0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r8;
    // 0x80041FA4: lbu         $t1, 0x4($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4);
    // 0x80041FA8: nop

    // 0x80041FAC: sb          $t1, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r9;
    // 0x80041FB0: lbu         $t2, 0x5($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X5);
    // 0x80041FB4: nop

    // 0x80041FB8: sb          $t2, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r10;
    // 0x80041FBC: lbu         $t3, 0x6($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X6);
    // 0x80041FC0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80041FC4: jr          $ra
    // 0x80041FC8: sb          $t3, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r11;
    return;
    // 0x80041FC8: sb          $t3, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r11;
;}
RECOMP_FUNC void func_80041FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041FCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80041FD0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80041FD4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80041FD8: lbu         $s1, 0x2F($sp)
    ctx->r17 = MEM_BU(ctx->r29, 0X2F);
    // 0x80041FDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80041FE0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80041FE4: beq         $s1, $zero, L_80042010
    if (ctx->r17 == 0) {
        // 0x80041FE8: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80042010;
    }
    // 0x80041FE8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80041FEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80041FF0: beq         $s1, $at, L_80042024
    if (ctx->r17 == ctx->r1) {
        // 0x80041FF4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80042024;
    }
    // 0x80041FF4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80041FF8: beq         $s1, $at, L_80042038
    if (ctx->r17 == ctx->r1) {
        // 0x80041FFC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80042038;
    }
    // 0x80041FFC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80042000: beq         $s1, $at, L_80042084
    if (ctx->r17 == ctx->r1) {
        // 0x80042004: nop
    
            goto L_80042084;
    }
    // 0x80042004: nop

    // 0x80042008: b           L_800420C0
    // 0x8004200C: nop

        goto L_800420C0;
    // 0x8004200C: nop

L_80042010:
    // 0x80042010: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80042014: nop

    // 0x80042018: lh          $s0, 0x0($t6)
    ctx->r16 = MEM_H(ctx->r14, 0X0);
    // 0x8004201C: b           L_800420C0
    // 0x80042020: nop

        goto L_800420C0;
    // 0x80042020: nop

L_80042024:
    // 0x80042024: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80042028: nop

    // 0x8004202C: lbu         $s0, 0x6($t7)
    ctx->r16 = MEM_BU(ctx->r15, 0X6);
    // 0x80042030: b           L_800420C0
    // 0x80042034: nop

        goto L_800420C0;
    // 0x80042034: nop

L_80042038:
    // 0x80042038: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8004203C: nop

    // 0x80042040: lbu         $t9, 0x5($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X5);
    // 0x80042044: nop

    // 0x80042048: slti        $at, $t9, 0x5
    ctx->r1 = SIGNED(ctx->r25) < 0X5 ? 1 : 0;
    // 0x8004204C: beq         $at, $zero, L_8004205C
    if (ctx->r1 == 0) {
        // 0x80042050: nop
    
            goto L_8004205C;
    }
    // 0x80042050: nop

    // 0x80042054: b           L_800420C0
    // 0x80042058: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
        goto L_800420C0;
    // 0x80042058: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
L_8004205C:
    // 0x8004205C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80042060: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x80042064: lbu         $t1, 0x5($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X5);
    // 0x80042068: nop

    // 0x8004206C: subu        $s0, $t2, $t1
    ctx->r16 = SUB32(ctx->r10, ctx->r9);
    // 0x80042070: sll         $t3, $s0, 16
    ctx->r11 = S32(ctx->r16 << 16);
    // 0x80042074: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80042078: sra         $t4, $s0, 16
    ctx->r12 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8004207C: b           L_800420C0
    // 0x80042080: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
        goto L_800420C0;
    // 0x80042080: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
L_80042084:
    // 0x80042084: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80042088: addiu       $a1, $sp, 0x25
    ctx->r5 = ADD32(ctx->r29, 0X25);
    // 0x8004208C: lbu         $a0, 0x4($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X4);
    // 0x80042090: jal         0x800406B0
    // 0x80042094: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    func_800406B0(rdram, ctx);
        goto after_0;
    // 0x80042094: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x80042098: lbu         $t6, 0x25($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X25);
    // 0x8004209C: lbu         $t7, 0x24($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X24);
    // 0x800420A0: nop

    // 0x800420A4: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800420A8: beq         $at, $zero, L_800420B8
    if (ctx->r1 == 0) {
        // 0x800420AC: nop
    
            goto L_800420B8;
    }
    // 0x800420AC: nop

    // 0x800420B0: b           L_800420C0
    // 0x800420B4: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
        goto L_800420C0;
    // 0x800420B4: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
L_800420B8:
    // 0x800420B8: lbu         $s0, 0x24($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X24);
    // 0x800420BC: nop

L_800420C0:
    // 0x800420C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800420C4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800420C8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800420CC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800420D0: jr          $ra
    // 0x800420D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800420D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800420D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800420D8: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x800420DC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x800420E0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x800420E4: or          $t1, $a2, $zero
    ctx->r9 = ctx->r6 | 0;
    // 0x800420E8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x800420EC: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800420F0: beq         $t1, $zero, L_8004211C
    if (ctx->r9 == 0) {
        // 0x800420F4: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8004211C;
    }
    // 0x800420F4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800420F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800420FC: beq         $t1, $at, L_8004211C
    if (ctx->r9 == ctx->r1) {
        // 0x80042100: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8004211C;
    }
    // 0x80042100: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80042104: beq         $t1, $at, L_8004211C
    if (ctx->r9 == ctx->r1) {
        // 0x80042108: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8004211C;
    }
    // 0x80042108: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8004210C: beq         $t1, $at, L_8004214C
    if (ctx->r9 == ctx->r1) {
        // 0x80042110: nop
    
            goto L_8004214C;
    }
    // 0x80042110: nop

    // 0x80042114: b           L_80042178
    // 0x80042118: nop

        goto L_80042178;
    // 0x80042118: nop

L_8004211C:
    // 0x8004211C: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80042120: beq         $at, $zero, L_80042130
    if (ctx->r1 == 0) {
        // 0x80042124: nop
    
            goto L_80042130;
    }
    // 0x80042124: nop

    // 0x80042128: b           L_80042178
    // 0x8004212C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_80042178;
    // 0x8004212C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_80042130:
    // 0x80042130: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80042134: beq         $at, $zero, L_80042144
    if (ctx->r1 == 0) {
        // 0x80042138: nop
    
            goto L_80042144;
    }
    // 0x80042138: nop

    // 0x8004213C: b           L_80042178
    // 0x80042140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_80042178;
    // 0x80042140: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80042144:
    // 0x80042144: b           L_80042178
    // 0x80042148: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_80042178;
    // 0x80042148: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8004214C:
    // 0x8004214C: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80042150: beq         $at, $zero, L_80042160
    if (ctx->r1 == 0) {
        // 0x80042154: nop
    
            goto L_80042160;
    }
    // 0x80042154: nop

    // 0x80042158: b           L_80042178
    // 0x8004215C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_80042178;
    // 0x8004215C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_80042160:
    // 0x80042160: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80042164: beq         $at, $zero, L_80042174
    if (ctx->r1 == 0) {
        // 0x80042168: nop
    
            goto L_80042174;
    }
    // 0x80042168: nop

    // 0x8004216C: b           L_80042178
    // 0x80042170: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_80042178;
    // 0x80042170: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80042174:
    // 0x80042174: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_80042178:
    // 0x80042178: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x8004217C: jr          $ra
    // 0x80042180: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80042180: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80042184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042184: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80042188: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8004218C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80042190: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80042194: lbu         $t8, 0x37($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X37);
    // 0x80042198: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8004219C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800421A0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x800421A4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800421A8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800421AC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800421B0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800421B4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800421B8: lbu         $a1, 0x3F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3F);
    // 0x800421BC: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x800421C0: jal         0x80041FCC
    // 0x800421C4: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    func_80041FCC(rdram, ctx);
        goto after_0;
    // 0x800421C4: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    after_0:
    // 0x800421C8: lbu         $s1, 0x37($sp)
    ctx->r17 = MEM_BU(ctx->r29, 0X37);
    // 0x800421CC: lbu         $s2, 0x3B($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X3B);
    // 0x800421D0: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x800421D4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800421D8: sll         $t1, $s1, 16
    ctx->r9 = S32(ctx->r17 << 16);
    // 0x800421DC: sll         $t3, $s2, 16
    ctx->r11 = S32(ctx->r18 << 16);
    // 0x800421E0: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x800421E4: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x800421E8: or          $s2, $t3, $zero
    ctx->r18 = ctx->r11 | 0;
    // 0x800421EC: sra         $t0, $s0, 16
    ctx->r8 = S32(SIGNED(ctx->r16) >> 16);
    // 0x800421F0: sra         $t2, $s1, 16
    ctx->r10 = S32(SIGNED(ctx->r17) >> 16);
    // 0x800421F4: sra         $t4, $s2, 16
    ctx->r12 = S32(SIGNED(ctx->r18) >> 16);
    // 0x800421F8: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x800421FC: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x80042200: or          $s2, $t4, $zero
    ctx->r18 = ctx->r12 | 0;
L_80042204:
    // 0x80042204: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80042208: sll         $t5, $s2, 16
    ctx->r13 = S32(ctx->r18 << 16);
    // 0x8004220C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80042210: or          $s2, $t5, $zero
    ctx->r18 = ctx->r13 | 0;
    // 0x80042214: sra         $t6, $s2, 16
    ctx->r14 = S32(SIGNED(ctx->r18) >> 16);
    // 0x80042218: lw          $t7, 0x0($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X0);
    // 0x8004221C: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x80042220: sll         $t9, $s2, 3
    ctx->r25 = S32(ctx->r18 << 3);
    // 0x80042224: lbu         $a1, 0x3F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3F);
    // 0x80042228: jal         0x80041FCC
    // 0x8004222C: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    func_80041FCC(rdram, ctx);
        goto after_1;
    // 0x8004222C: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    after_1:
    // 0x80042230: sll         $s3, $v0, 16
    ctx->r19 = S32(ctx->r2 << 16);
    // 0x80042234: sra         $t0, $s3, 16
    ctx->r8 = S32(SIGNED(ctx->r19) >> 16);
    // 0x80042238: or          $s3, $t0, $zero
    ctx->r19 = ctx->r8 | 0;
    // 0x8004223C: lbu         $a2, 0x3F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3F);
    // 0x80042240: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80042244: jal         0x800420D8
    // 0x80042248: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800420D8(rdram, ctx);
        goto after_2;
    // 0x80042248: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x8004224C: bltz        $v0, L_80042204
    if (SIGNED(ctx->r2) < 0) {
        // 0x80042250: nop
    
            goto L_80042204;
    }
    // 0x80042250: nop

L_80042254:
    // 0x80042254: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80042258: sll         $t1, $s1, 16
    ctx->r9 = S32(ctx->r17 << 16);
    // 0x8004225C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80042260: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x80042264: sra         $t2, $s1, 16
    ctx->r10 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80042268: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8004226C: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x80042270: sll         $t5, $s1, 3
    ctx->r13 = S32(ctx->r17 << 3);
    // 0x80042274: lbu         $a1, 0x3F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3F);
    // 0x80042278: jal         0x80041FCC
    // 0x8004227C: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    func_80041FCC(rdram, ctx);
        goto after_3;
    // 0x8004227C: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    after_3:
    // 0x80042280: sll         $s3, $v0, 16
    ctx->r19 = S32(ctx->r2 << 16);
    // 0x80042284: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x80042288: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8004228C: lbu         $a2, 0x3F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3F);
    // 0x80042290: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80042294: jal         0x800420D8
    // 0x80042298: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800420D8(rdram, ctx);
        goto after_4;
    // 0x80042298: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x8004229C: bgtz        $v0, L_80042254
    if (SIGNED(ctx->r2) > 0) {
        // 0x800422A0: nop
    
            goto L_80042254;
    }
    // 0x800422A0: nop

    // 0x800422A4: slt         $at, $s1, $s2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x800422A8: beq         $at, $zero, L_800422D4
    if (ctx->r1 == 0) {
        // 0x800422AC: nop
    
            goto L_800422D4;
    }
    // 0x800422AC: nop

    // 0x800422B0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800422B4: sll         $t9, $s1, 3
    ctx->r25 = S32(ctx->r17 << 3);
    // 0x800422B8: lw          $t7, 0x0($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X0);
    // 0x800422BC: sll         $t0, $s2, 3
    ctx->r8 = S32(ctx->r18 << 3);
    // 0x800422C0: addu        $a1, $t7, $t0
    ctx->r5 = ADD32(ctx->r15, ctx->r8);
    // 0x800422C4: jal         0x80041EF0
    // 0x800422C8: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    func_80041EF0(rdram, ctx);
        goto after_5;
    // 0x800422C8: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    after_5:
    // 0x800422CC: b           L_80042204
    // 0x800422D0: nop

        goto L_80042204;
    // 0x800422D0: nop

L_800422D4:
    // 0x800422D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800422D8: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x800422DC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800422E0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800422E4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800422E8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800422EC: jr          $ra
    // 0x800422F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800422F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800422F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800422F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800422F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800422FC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80042300: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80042304: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80042308: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x8004230C: lbu         $a0, 0x2F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2F);
    // 0x80042310: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80042314: jal         0x800A35EC
    // 0x80042318: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_800A35EC(rdram, ctx);
        goto after_0;
    // 0x80042318: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8004231C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80042320: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x80042324: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80042328: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x8004232C: sll         $t0, $s0, 3
    ctx->r8 = S32(ctx->r16 << 3);
    // 0x80042330: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80042334: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    // 0x80042338: jal         0x80041EF0
    // 0x8004233C: addu        $a1, $t7, $t0
    ctx->r5 = ADD32(ctx->r15, ctx->r8);
    func_80041EF0(rdram, ctx);
        goto after_1;
    // 0x8004233C: addu        $a1, $t7, $t0
    ctx->r5 = ADD32(ctx->r15, ctx->r8);
    after_1:
    // 0x80042340: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80042344: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x80042348: lbu         $a2, 0x33($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X33);
    // 0x8004234C: lbu         $a3, 0x37($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X37);
    // 0x80042350: jal         0x80042184
    // 0x80042354: nop

    func_80042184(rdram, ctx);
        goto after_2;
    // 0x80042354: nop

    after_2:
    // 0x80042358: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004235C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80042360: jr          $ra
    // 0x80042364: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80042364: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80042368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042368: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004236C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80042370: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80042374: lbu         $t7, 0x33($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X33);
    // 0x80042378: lbu         $t6, 0x2F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2F);
    // 0x8004237C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80042380: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80042384: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80042388: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8004238C: beq         $at, $zero, L_800423E0
    if (ctx->r1 == 0) {
        // 0x80042390: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800423E0;
    }
    // 0x80042390: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80042394: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80042398: lbu         $a3, 0x37($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X37);
    // 0x8004239C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800423A0: jal         0x800422F4
    // 0x800423A4: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_800422F4(rdram, ctx);
        goto after_0;
    // 0x800423A4: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_0:
    // 0x800423A8: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x800423AC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800423B0: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x800423B4: lbu         $a3, 0x37($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X37);
    // 0x800423B8: jal         0x80042368
    // 0x800423BC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_80042368(rdram, ctx);
        goto after_1;
    // 0x800423BC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
    // 0x800423C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800423C4: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x800423C8: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x800423CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800423D0: lbu         $a2, 0x33($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X33);
    // 0x800423D4: lbu         $a3, 0x37($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X37);
    // 0x800423D8: jal         0x80042368
    // 0x800423DC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80042368(rdram, ctx);
        goto after_2;
    // 0x800423DC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
L_800423E0:
    // 0x800423E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800423E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800423E8: jr          $ra
    // 0x800423EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800423EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800423F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800423F0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800423F4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800423F8: lbu         $t6, 0x3B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3B);
    // 0x800423FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80042400: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80042404: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80042408: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8004240C: beq         $t6, $zero, L_8004271C
    if (ctx->r14 == 0) {
        // 0x80042410: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_8004271C;
    }
    // 0x80042410: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80042414: slti        $at, $t6, 0xC9
    ctx->r1 = SIGNED(ctx->r14) < 0XC9 ? 1 : 0;
    // 0x80042418: beq         $at, $zero, L_8004271C
    if (ctx->r1 == 0) {
        // 0x8004241C: nop
    
            goto L_8004271C;
    }
    // 0x8004241C: nop

    // 0x80042420: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80042424: lw          $t7, 0x1F40($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1F40);
    // 0x80042428: nop

    // 0x8004242C: beq         $t7, $zero, L_8004271C
    if (ctx->r15 == 0) {
        // 0x80042430: nop
    
            goto L_8004271C;
    }
    // 0x80042430: nop

    // 0x80042434: lbu         $a2, 0x3B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3B);
    // 0x80042438: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8004243C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80042440: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80042444: jal         0x80042368
    // 0x80042448: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    func_80042368(rdram, ctx);
        goto after_0;
    // 0x80042448: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    after_0:
    // 0x8004244C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80042450:
    // 0x80042450: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80042454: lw          $t8, 0x1F40($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F40);
    // 0x80042458: lbu         $t3, 0x3B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X3B);
    // 0x8004245C: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x80042460: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80042464: lw          $t1, 0x0($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X0);
    // 0x80042468: sll         $t0, $s0, 3
    ctx->r8 = S32(ctx->r16 << 3);
    // 0x8004246C: sll         $t2, $s1, 3
    ctx->r10 = S32(ctx->r17 << 3);
    // 0x80042470: slt         $at, $s1, $t3
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80042474: addu        $s2, $t9, $t0
    ctx->r18 = ADD32(ctx->r25, ctx->r8);
    // 0x80042478: beq         $at, $zero, L_800424D4
    if (ctx->r1 == 0) {
        // 0x8004247C: addu        $s3, $t1, $t2
        ctx->r19 = ADD32(ctx->r9, ctx->r10);
            goto L_800424D4;
    }
    // 0x8004247C: addu        $s3, $t1, $t2
    ctx->r19 = ADD32(ctx->r9, ctx->r10);
    // 0x80042480: lh          $t4, 0x0($s2)
    ctx->r12 = MEM_H(ctx->r18, 0X0);
    // 0x80042484: lh          $t5, 0x0($s3)
    ctx->r13 = MEM_H(ctx->r19, 0X0);
    // 0x80042488: nop

    // 0x8004248C: bne         $t4, $t5, L_800424D4
    if (ctx->r12 != ctx->r13) {
        // 0x80042490: nop
    
            goto L_800424D4;
    }
    // 0x80042490: nop

L_80042494:
    // 0x80042494: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80042498: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004249C: lw          $t7, 0x1F40($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1F40);
    // 0x800424A0: andi        $t6, $s1, 0xFF
    ctx->r14 = ctx->r17 & 0XFF;
    // 0x800424A4: lbu         $t8, 0x3B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3B);
    // 0x800424A8: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x800424AC: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x800424B0: sll         $t0, $s1, 3
    ctx->r8 = S32(ctx->r17 << 3);
    // 0x800424B4: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800424B8: beq         $at, $zero, L_800424D4
    if (ctx->r1 == 0) {
        // 0x800424BC: addu        $s3, $t9, $t0
        ctx->r19 = ADD32(ctx->r25, ctx->r8);
            goto L_800424D4;
    }
    // 0x800424BC: addu        $s3, $t9, $t0
    ctx->r19 = ADD32(ctx->r25, ctx->r8);
    // 0x800424C0: lh          $t1, 0x0($s2)
    ctx->r9 = MEM_H(ctx->r18, 0X0);
    // 0x800424C4: lh          $t2, 0x0($s3)
    ctx->r10 = MEM_H(ctx->r19, 0X0);
    // 0x800424C8: nop

    // 0x800424CC: beq         $t1, $t2, L_80042494
    if (ctx->r9 == ctx->r10) {
        // 0x800424D0: nop
    
            goto L_80042494;
    }
    // 0x800424D0: nop

L_800424D4:
    // 0x800424D4: beq         $s0, $s1, L_800424FC
    if (ctx->r16 == ctx->r17) {
        // 0x800424D8: nop
    
            goto L_800424FC;
    }
    // 0x800424D8: nop

    // 0x800424DC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800424E0: lw          $a0, 0x1F40($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F40);
    // 0x800424E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800424E8: addiu       $a2, $s1, -0x1
    ctx->r6 = ADD32(ctx->r17, -0X1);
    // 0x800424EC: jal         0x80042368
    // 0x800424F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80042368(rdram, ctx);
        goto after_1;
    // 0x800424F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x800424F4: b           L_80042508
    // 0x800424F8: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
        goto L_80042508;
    // 0x800424F8: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
L_800424FC:
    // 0x800424FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80042500: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x80042504: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
L_80042508:
    // 0x80042508: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x8004250C: bne         $at, $zero, L_80042450
    if (ctx->r1 != 0) {
        // 0x80042510: nop
    
            goto L_80042450;
    }
    // 0x80042510: nop

    // 0x80042514: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80042518:
    // 0x80042518: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8004251C: lw          $t4, 0x1F40($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1F40);
    // 0x80042520: lbu         $t0, 0x3B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X3B);
    // 0x80042524: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x80042528: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8004252C: lw          $t7, 0x0($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X0);
    // 0x80042530: sll         $t6, $s0, 3
    ctx->r14 = S32(ctx->r16 << 3);
    // 0x80042534: sll         $t9, $s1, 3
    ctx->r25 = S32(ctx->r17 << 3);
    // 0x80042538: slt         $at, $s1, $t0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8004253C: addu        $s2, $t5, $t6
    ctx->r18 = ADD32(ctx->r13, ctx->r14);
    // 0x80042540: beq         $at, $zero, L_800425C4
    if (ctx->r1 == 0) {
        // 0x80042544: addu        $s3, $t7, $t9
        ctx->r19 = ADD32(ctx->r15, ctx->r25);
            goto L_800425C4;
    }
    // 0x80042544: addu        $s3, $t7, $t9
    ctx->r19 = ADD32(ctx->r15, ctx->r25);
    // 0x80042548: lh          $t8, 0x0($s2)
    ctx->r24 = MEM_H(ctx->r18, 0X0);
    // 0x8004254C: lh          $t1, 0x0($s3)
    ctx->r9 = MEM_H(ctx->r19, 0X0);
    // 0x80042550: nop

    // 0x80042554: bne         $t8, $t1, L_800425C4
    if (ctx->r24 != ctx->r9) {
        // 0x80042558: nop
    
            goto L_800425C4;
    }
    // 0x80042558: nop

    // 0x8004255C: lbu         $t2, 0x6($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X6);
    // 0x80042560: lbu         $t3, 0x6($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X6);
    // 0x80042564: nop

    // 0x80042568: bne         $t2, $t3, L_800425C4
    if (ctx->r10 != ctx->r11) {
        // 0x8004256C: nop
    
            goto L_800425C4;
    }
    // 0x8004256C: nop

L_80042570:
    // 0x80042570: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80042574: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80042578: lw          $t6, 0x1F40($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F40);
    // 0x8004257C: andi        $t5, $s1, 0xFF
    ctx->r13 = ctx->r17 & 0XFF;
    // 0x80042580: lbu         $t9, 0x3B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3B);
    // 0x80042584: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x80042588: lw          $t4, 0x0($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X0);
    // 0x8004258C: sll         $t7, $s1, 3
    ctx->r15 = S32(ctx->r17 << 3);
    // 0x80042590: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80042594: beq         $at, $zero, L_800425C4
    if (ctx->r1 == 0) {
        // 0x80042598: addu        $s3, $t4, $t7
        ctx->r19 = ADD32(ctx->r12, ctx->r15);
            goto L_800425C4;
    }
    // 0x80042598: addu        $s3, $t4, $t7
    ctx->r19 = ADD32(ctx->r12, ctx->r15);
    // 0x8004259C: lh          $t0, 0x0($s2)
    ctx->r8 = MEM_H(ctx->r18, 0X0);
    // 0x800425A0: lh          $t8, 0x0($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X0);
    // 0x800425A4: nop

    // 0x800425A8: bne         $t0, $t8, L_800425C4
    if (ctx->r8 != ctx->r24) {
        // 0x800425AC: nop
    
            goto L_800425C4;
    }
    // 0x800425AC: nop

    // 0x800425B0: lbu         $t1, 0x6($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6);
    // 0x800425B4: lbu         $t2, 0x6($s3)
    ctx->r10 = MEM_BU(ctx->r19, 0X6);
    // 0x800425B8: nop

    // 0x800425BC: beq         $t1, $t2, L_80042570
    if (ctx->r9 == ctx->r10) {
        // 0x800425C0: nop
    
            goto L_80042570;
    }
    // 0x800425C0: nop

L_800425C4:
    // 0x800425C4: beq         $s0, $s1, L_800425EC
    if (ctx->r16 == ctx->r17) {
        // 0x800425C8: nop
    
            goto L_800425EC;
    }
    // 0x800425C8: nop

    // 0x800425CC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800425D0: lw          $a0, 0x1F40($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F40);
    // 0x800425D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800425D8: addiu       $a2, $s1, -0x1
    ctx->r6 = ADD32(ctx->r17, -0X1);
    // 0x800425DC: jal         0x80042368
    // 0x800425E0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80042368(rdram, ctx);
        goto after_2;
    // 0x800425E0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_2:
    // 0x800425E4: b           L_800425F8
    // 0x800425E8: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
        goto L_800425F8;
    // 0x800425E8: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
L_800425EC:
    // 0x800425EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800425F0: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x800425F4: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
L_800425F8:
    // 0x800425F8: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x800425FC: bne         $at, $zero, L_80042518
    if (ctx->r1 != 0) {
        // 0x80042600: nop
    
            goto L_80042518;
    }
    // 0x80042600: nop

    // 0x80042604: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80042608:
    // 0x80042608: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8004260C: lw          $t5, 0x1F40($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1F40);
    // 0x80042610: lbu         $t0, 0x3B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X3B);
    // 0x80042614: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x80042618: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8004261C: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x80042620: sll         $t4, $s0, 3
    ctx->r12 = S32(ctx->r16 << 3);
    // 0x80042624: sll         $t9, $s1, 3
    ctx->r25 = S32(ctx->r17 << 3);
    // 0x80042628: slt         $at, $s1, $t0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8004262C: addu        $s2, $t6, $t4
    ctx->r18 = ADD32(ctx->r14, ctx->r12);
    // 0x80042630: beq         $at, $zero, L_800426DC
    if (ctx->r1 == 0) {
        // 0x80042634: addu        $s3, $t7, $t9
        ctx->r19 = ADD32(ctx->r15, ctx->r25);
            goto L_800426DC;
    }
    // 0x80042634: addu        $s3, $t7, $t9
    ctx->r19 = ADD32(ctx->r15, ctx->r25);
    // 0x80042638: lh          $t8, 0x0($s2)
    ctx->r24 = MEM_H(ctx->r18, 0X0);
    // 0x8004263C: lh          $t1, 0x0($s3)
    ctx->r9 = MEM_H(ctx->r19, 0X0);
    // 0x80042640: nop

    // 0x80042644: bne         $t8, $t1, L_800426DC
    if (ctx->r24 != ctx->r9) {
        // 0x80042648: nop
    
            goto L_800426DC;
    }
    // 0x80042648: nop

    // 0x8004264C: lbu         $t2, 0x6($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X6);
    // 0x80042650: lbu         $t3, 0x6($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X6);
    // 0x80042654: nop

    // 0x80042658: bne         $t2, $t3, L_800426DC
    if (ctx->r10 != ctx->r11) {
        // 0x8004265C: nop
    
            goto L_800426DC;
    }
    // 0x8004265C: nop

    // 0x80042660: lbu         $t6, 0x5($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X5);
    // 0x80042664: lbu         $t4, 0x5($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X5);
    // 0x80042668: nop

    // 0x8004266C: bne         $t6, $t4, L_800426DC
    if (ctx->r14 != ctx->r12) {
        // 0x80042670: nop
    
            goto L_800426DC;
    }
    // 0x80042670: nop

L_80042674:
    // 0x80042674: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80042678: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004267C: lw          $t7, 0x1F40($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1F40);
    // 0x80042680: andi        $t5, $s1, 0xFF
    ctx->r13 = ctx->r17 & 0XFF;
    // 0x80042684: lbu         $t8, 0x3B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3B);
    // 0x80042688: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x8004268C: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x80042690: sll         $t0, $s1, 3
    ctx->r8 = S32(ctx->r17 << 3);
    // 0x80042694: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80042698: beq         $at, $zero, L_800426DC
    if (ctx->r1 == 0) {
        // 0x8004269C: addu        $s3, $t9, $t0
        ctx->r19 = ADD32(ctx->r25, ctx->r8);
            goto L_800426DC;
    }
    // 0x8004269C: addu        $s3, $t9, $t0
    ctx->r19 = ADD32(ctx->r25, ctx->r8);
    // 0x800426A0: lh          $t1, 0x0($s2)
    ctx->r9 = MEM_H(ctx->r18, 0X0);
    // 0x800426A4: lh          $t2, 0x0($s3)
    ctx->r10 = MEM_H(ctx->r19, 0X0);
    // 0x800426A8: nop

    // 0x800426AC: bne         $t1, $t2, L_800426DC
    if (ctx->r9 != ctx->r10) {
        // 0x800426B0: nop
    
            goto L_800426DC;
    }
    // 0x800426B0: nop

    // 0x800426B4: lbu         $t3, 0x6($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X6);
    // 0x800426B8: lbu         $t6, 0x6($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X6);
    // 0x800426BC: nop

    // 0x800426C0: bne         $t3, $t6, L_800426DC
    if (ctx->r11 != ctx->r14) {
        // 0x800426C4: nop
    
            goto L_800426DC;
    }
    // 0x800426C4: nop

    // 0x800426C8: lbu         $t4, 0x5($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X5);
    // 0x800426CC: lbu         $t5, 0x5($s3)
    ctx->r13 = MEM_BU(ctx->r19, 0X5);
    // 0x800426D0: nop

    // 0x800426D4: beq         $t4, $t5, L_80042674
    if (ctx->r12 == ctx->r13) {
        // 0x800426D8: nop
    
            goto L_80042674;
    }
    // 0x800426D8: nop

L_800426DC:
    // 0x800426DC: beq         $s0, $s1, L_80042704
    if (ctx->r16 == ctx->r17) {
        // 0x800426E0: nop
    
            goto L_80042704;
    }
    // 0x800426E0: nop

    // 0x800426E4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800426E8: lw          $a0, 0x1F40($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F40);
    // 0x800426EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800426F0: addiu       $a2, $s1, -0x1
    ctx->r6 = ADD32(ctx->r17, -0X1);
    // 0x800426F4: jal         0x80042368
    // 0x800426F8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_80042368(rdram, ctx);
        goto after_3;
    // 0x800426F8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_3:
    // 0x800426FC: b           L_80042710
    // 0x80042700: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
        goto L_80042710;
    // 0x80042700: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
L_80042704:
    // 0x80042704: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80042708: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x8004270C: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
L_80042710:
    // 0x80042710: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x80042714: bne         $at, $zero, L_80042608
    if (ctx->r1 != 0) {
        // 0x80042718: nop
    
            goto L_80042608;
    }
    // 0x80042718: nop

L_8004271C:
    // 0x8004271C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80042720: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80042724: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80042728: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8004272C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80042730: jr          $ra
    // 0x80042734: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80042734: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80042738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042738: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8004273C: lw          $t6, 0x1F40($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F40);
    // 0x80042740: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80042744: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80042748: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8004274C: beq         $t6, $zero, L_800427A8
    if (ctx->r14 == 0) {
        // 0x80042750: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800427A8;
    }
    // 0x80042750: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80042754: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80042758: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x8004275C: beq         $at, $zero, L_800427A8
    if (ctx->r1 == 0) {
        // 0x80042760: nop
    
            goto L_800427A8;
    }
    // 0x80042760: nop

L_80042764:
    // 0x80042764: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80042768: lw          $t9, 0x1F40($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1F40);
    // 0x8004276C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80042770: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80042774: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80042778: sll         $t1, $s0, 3
    ctx->r9 = S32(ctx->r16 << 3);
    // 0x8004277C: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x80042780: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    // 0x80042784: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80042788: jal         0x80041DA0
    // 0x8004278C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    func_80041DA0(rdram, ctx);
        goto after_0;
    // 0x8004278C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x80042790: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80042794: andi        $t2, $s0, 0xFF
    ctx->r10 = ctx->r16 & 0XFF;
    // 0x80042798: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x8004279C: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x800427A0: bne         $at, $zero, L_80042764
    if (ctx->r1 != 0) {
        // 0x800427A4: nop
    
            goto L_80042764;
    }
    // 0x800427A4: nop

L_800427A8:
    // 0x800427A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800427AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800427B0: jr          $ra
    // 0x800427B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800427B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800427B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800427B8: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x800427BC: lw          $t6, 0x1F40($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F40);
    // 0x800427C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800427C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800427C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800427CC: beq         $t6, $zero, L_800427F0
    if (ctx->r14 == 0) {
        // 0x800427D0: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_800427F0;
    }
    // 0x800427D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800427D4: lbu         $t8, 0x23($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X23);
    // 0x800427D8: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800427DC: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x800427E0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800427E4: addu        $a1, $t7, $t9
    ctx->r5 = ADD32(ctx->r15, ctx->r25);
    // 0x800427E8: jal         0x80041DA0
    // 0x800427EC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    func_80041DA0(rdram, ctx);
        goto after_0;
    // 0x800427EC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    after_0:
L_800427F0:
    // 0x800427F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800427F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800427F8: jr          $ra
    // 0x800427FC: nop

    return;
    // 0x800427FC: nop

;}
RECOMP_FUNC void func_80042800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042800: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80042804: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80042808: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8004280C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80042810: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80042814: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80042818: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8004281C: jal         0x8007E03C
    // 0x80042820: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x80042820: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    after_0:
    // 0x80042824: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80042828: sw          $v0, 0x5E04($at)
    MEM_W(0X5E04, ctx->r1) = ctx->r2;
    // 0x8004282C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x80042830: lw          $t6, 0x5E04($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5E04);
    // 0x80042834: nop

    // 0x80042838: beq         $t6, $zero, L_80042B28
    if (ctx->r14 == 0) {
        // 0x8004283C: nop
    
            goto L_80042B28;
    }
    // 0x8004283C: nop

    // 0x80042840: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80042844: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80042848: beq         $at, $zero, L_8004289C
    if (ctx->r1 == 0) {
        // 0x8004284C: nop
    
            goto L_8004289C;
    }
    // 0x8004284C: nop

L_80042850:
    // 0x80042850: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x80042854: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80042858: sllv        $t9, $t8, $s0
    ctx->r25 = S32(ctx->r24 << (ctx->r16 & 31));
    // 0x8004285C: and         $t0, $t7, $t9
    ctx->r8 = ctx->r15 & ctx->r25;
    // 0x80042860: beq         $t0, $zero, L_80042878
    if (ctx->r8 == 0) {
        // 0x80042864: nop
    
            goto L_80042878;
    }
    // 0x80042864: nop

    // 0x80042868: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8004286C: addu        $t2, $sp, $s0
    ctx->r10 = ADD32(ctx->r29, ctx->r16);
    // 0x80042870: b           L_80042880
    // 0x80042874: sb          $t1, 0x30($t2)
    MEM_B(0X30, ctx->r10) = ctx->r9;
        goto L_80042880;
    // 0x80042874: sb          $t1, 0x30($t2)
    MEM_B(0X30, ctx->r10) = ctx->r9;
L_80042878:
    // 0x80042878: addu        $t3, $sp, $s0
    ctx->r11 = ADD32(ctx->r29, ctx->r16);
    // 0x8004287C: sb          $zero, 0x30($t3)
    MEM_B(0X30, ctx->r11) = 0;
L_80042880:
    // 0x80042880: addu        $t4, $sp, $s0
    ctx->r12 = ADD32(ctx->r29, ctx->r16);
    // 0x80042884: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80042888: andi        $t5, $s0, 0xFF
    ctx->r13 = ctx->r16 & 0XFF;
    // 0x8004288C: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80042890: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80042894: bne         $at, $zero, L_80042850
    if (ctx->r1 != 0) {
        // 0x80042898: sb          $zero, 0x2C($t4)
        MEM_B(0X2C, ctx->r12) = 0;
            goto L_80042850;
    }
    // 0x80042898: sb          $zero, 0x2C($t4)
    MEM_B(0X2C, ctx->r12) = 0;
L_8004289C:
    // 0x8004289C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800428A0: addu        $t6, $sp, $s1
    ctx->r14 = ADD32(ctx->r29, ctx->r17);
    // 0x800428A4: lbu         $t6, 0x30($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X30);
    // 0x800428A8: nop

    // 0x800428AC: beq         $t6, $zero, L_800428C8
    if (ctx->r14 == 0) {
        // 0x800428B0: nop
    
            goto L_800428C8;
    }
    // 0x800428B0: nop

    // 0x800428B4: addu        $t8, $sp, $s1
    ctx->r24 = ADD32(ctx->r29, ctx->r17);
    // 0x800428B8: lbu         $t8, 0x2C($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X2C);
    // 0x800428BC: nop

    // 0x800428C0: beq         $t8, $zero, L_800428FC
    if (ctx->r24 == 0) {
        // 0x800428C4: nop
    
            goto L_800428FC;
    }
    // 0x800428C4: nop

L_800428C8:
    // 0x800428C8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800428CC: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x800428D0: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x800428D4: addu        $t9, $sp, $s1
    ctx->r25 = ADD32(ctx->r29, ctx->r17);
    // 0x800428D8: lbu         $t9, 0x30($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X30);
    // 0x800428DC: nop

    // 0x800428E0: beq         $t9, $zero, L_800428C8
    if (ctx->r25 == 0) {
        // 0x800428E4: nop
    
            goto L_800428C8;
    }
    // 0x800428E4: nop

    // 0x800428E8: addu        $t0, $sp, $s1
    ctx->r8 = ADD32(ctx->r29, ctx->r17);
    // 0x800428EC: lbu         $t0, 0x2C($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X2C);
    // 0x800428F0: nop

    // 0x800428F4: bne         $t0, $zero, L_800428C8
    if (ctx->r8 != 0) {
        // 0x800428F8: nop
    
            goto L_800428C8;
    }
    // 0x800428F8: nop

L_800428FC:
    // 0x800428FC: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x80042900: lw          $t1, 0x5E04($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5E04);
    // 0x80042904: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80042908: sb          $s1, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r17;
    // 0x8004290C: lbu         $t2, 0x43($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X43);
    // 0x80042910: nop

    // 0x80042914: bne         $t2, $at, L_8004292C
    if (ctx->r10 != ctx->r1) {
        // 0x80042918: nop
    
            goto L_8004292C;
    }
    // 0x80042918: nop

    // 0x8004291C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80042920: jal         0x800A35EC
    // 0x80042924: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800A35EC(rdram, ctx);
        goto after_1;
    // 0x80042924: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x80042928: sb          $v0, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r2;
L_8004292C:
    // 0x8004292C: lbu         $t3, 0x43($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X43);
    // 0x80042930: nop

    // 0x80042934: slti        $at, $t3, 0x5
    ctx->r1 = SIGNED(ctx->r11) < 0X5 ? 1 : 0;
    // 0x80042938: bne         $at, $zero, L_80042954
    if (ctx->r1 != 0) {
        // 0x8004293C: nop
    
            goto L_80042954;
    }
    // 0x8004293C: nop

    // 0x80042940: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80042944: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80042948: addiu       $a1, $a1, -0x4B90
    ctx->r5 = ADD32(ctx->r5, -0X4B90);
    // 0x8004294C: jal         0x80083560
    // 0x80042950: addiu       $a0, $a0, -0x4BA0
    ctx->r4 = ADD32(ctx->r4, -0X4BA0);
    Fault_Assert(rdram, ctx);
        goto after_2;
    // 0x80042950: addiu       $a0, $a0, -0x4BA0
    ctx->r4 = ADD32(ctx->r4, -0X4BA0);
    after_2:
L_80042954:
    // 0x80042954: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80042958: lbu         $t4, 0x1F50($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X1F50);
    // 0x8004295C: nop

    // 0x80042960: beq         $t4, $zero, L_80042984
    if (ctx->r12 == 0) {
        // 0x80042964: nop
    
            goto L_80042984;
    }
    // 0x80042964: nop

    // 0x80042968: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x8004296C: addiu       $t5, $t5, 0x5E00
    ctx->r13 = ADD32(ctx->r13, 0X5E00);
    // 0x80042970: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x80042974: lw          $t8, 0x5E04($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5E04);
    // 0x80042978: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x8004297C: b           L_800429AC
    // 0x80042980: sb          $t6, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r14;
        goto L_800429AC;
    // 0x80042980: sb          $t6, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r14;
L_80042984:
    // 0x80042984: lbu         $t7, 0x43($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X43);
    // 0x80042988: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x8004298C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80042990: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x80042994: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80042998: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8004299C: lw          $t1, 0x5E04($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5E04);
    // 0x800429A0: lbu         $t0, 0x5DF0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X5DF0);
    // 0x800429A4: nop

    // 0x800429A8: sb          $t0, 0x1($t1)
    MEM_B(0X1, ctx->r9) = ctx->r8;
L_800429AC:
    // 0x800429AC: lbu         $t2, 0x3F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3F);
    // 0x800429B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800429B4: bne         $t2, $at, L_800429D8
    if (ctx->r10 != ctx->r1) {
        // 0x800429B8: nop
    
            goto L_800429D8;
    }
    // 0x800429B8: nop

    // 0x800429BC: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x800429C0: lw          $t3, 0x5E04($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5E04);
    // 0x800429C4: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x800429C8: lbu         $t4, 0x1($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1);
    // 0x800429CC: nop

    // 0x800429D0: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x800429D4: sb          $t5, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r13;
L_800429D8:
    // 0x800429D8: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x800429DC: lbu         $t6, 0x1F50($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1F50);
    // 0x800429E0: nop

    // 0x800429E4: beq         $t6, $zero, L_80042A20
    if (ctx->r14 == 0) {
        // 0x800429E8: nop
    
            goto L_80042A20;
    }
    // 0x800429E8: nop

    // 0x800429EC: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x800429F0: addiu       $t8, $t8, 0x5E00
    ctx->r24 = ADD32(ctx->r24, 0X5E00);
    // 0x800429F4: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x800429F8: lw          $t9, 0x5E04($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5E04);
    // 0x800429FC: lbu         $t7, 0x1($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X1);
    // 0x80042A00: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x80042A04: sb          $t7, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r15;
    // 0x80042A08: addiu       $t0, $t0, 0x5E00
    ctx->r8 = ADD32(ctx->r8, 0X5E00);
    // 0x80042A0C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x80042A10: lw          $t2, 0x5E04($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5E04);
    // 0x80042A14: lbu         $t1, 0x2($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X2);
    // 0x80042A18: b           L_80042A6C
    // 0x80042A1C: sb          $t1, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r9;
        goto L_80042A6C;
    // 0x80042A1C: sb          $t1, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r9;
L_80042A20:
    // 0x80042A20: lbu         $t4, 0x43($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X43);
    // 0x80042A24: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x80042A28: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80042A2C: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80042A30: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x80042A34: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x80042A38: lw          $t6, 0x5E04($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5E04);
    // 0x80042A3C: lbu         $t3, 0x5DF1($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X5DF1);
    // 0x80042A40: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80042A44: sb          $t3, 0x2($t6)
    MEM_B(0X2, ctx->r14) = ctx->r11;
    // 0x80042A48: lbu         $t8, 0x43($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X43);
    // 0x80042A4C: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x80042A50: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80042A54: subu        $t7, $t7, $t8
    ctx->r15 = SUB32(ctx->r15, ctx->r24);
    // 0x80042A58: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80042A5C: lbu         $t9, 0x5DF2($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X5DF2);
    // 0x80042A60: lw          $t0, 0x5E04($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5E04);
    // 0x80042A64: nop

    // 0x80042A68: sb          $t9, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r25;
L_80042A6C:
    // 0x80042A6C: lbu         $t1, 0x3B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3B);
    // 0x80042A70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80042A74: bne         $t1, $at, L_80042AA4
    if (ctx->r9 != ctx->r1) {
        // 0x80042A78: nop
    
            goto L_80042AA4;
    }
    // 0x80042A78: nop

    // 0x80042A7C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x80042A80: lw          $t2, 0x5E04($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5E04);
    // 0x80042A84: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x80042A88: lbu         $t4, 0x1($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X1);
    // 0x80042A8C: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x80042A90: ori         $t5, $t4, 0x18
    ctx->r13 = ctx->r12 | 0X18;
    // 0x80042A94: sb          $t5, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r13;
    // 0x80042A98: lw          $t6, 0x5E04($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5E04);
    // 0x80042A9C: nop

    // 0x80042AA0: sb          $t3, 0x3($t6)
    MEM_B(0X3, ctx->r14) = ctx->r11;
L_80042AA4:
    // 0x80042AA4: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x80042AA8: lw          $t8, 0x5E04($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5E04);
    // 0x80042AAC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x80042AB0: sb          $zero, 0x4($t8)
    MEM_B(0X4, ctx->r24) = 0;
    // 0x80042AB4: lw          $a0, 0x5E04($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5E04);
    // 0x80042AB8: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80042ABC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80042AC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80042AC4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80042AC8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x80042ACC: jal         0x8003F760
    // 0x80042AD0: addiu       $a0, $a0, 0x5
    ctx->r4 = ADD32(ctx->r4, 0X5);
    func_8003F760(rdram, ctx);
        goto after_3;
    // 0x80042AD0: addiu       $a0, $a0, 0x5
    ctx->r4 = ADD32(ctx->r4, 0X5);
    after_3:
    // 0x80042AD4: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80042AD8: lw          $t9, 0x5E04($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5E04);
    // 0x80042ADC: nop

    // 0x80042AE0: lbu         $t0, 0x1($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1);
    // 0x80042AE4: nop

    // 0x80042AE8: andi        $t1, $t0, 0x8
    ctx->r9 = ctx->r8 & 0X8;
    // 0x80042AEC: beq         $t1, $zero, L_80042AFC
    if (ctx->r9 == 0) {
        // 0x80042AF0: nop
    
            goto L_80042AFC;
    }
    // 0x80042AF0: nop

    // 0x80042AF4: jal         0x8003E1E0
    // 0x80042AF8: addiu       $a0, $t9, 0x2E
    ctx->r4 = ADD32(ctx->r25, 0X2E);
    func_8003E1E0(rdram, ctx);
        goto after_4;
    // 0x80042AF8: addiu       $a0, $t9, 0x2E
    ctx->r4 = ADD32(ctx->r25, 0X2E);
    after_4:
L_80042AFC:
    // 0x80042AFC: jal         0x80041DD0
    // 0x80042B00: nop

    func_80041DD0(rdram, ctx);
        goto after_5;
    // 0x80042B00: nop

    after_5:
    // 0x80042B04: jal         0x8003DFA0
    // 0x80042B08: nop

    func_8003DFA0(rdram, ctx);
        goto after_6;
    // 0x80042B08: nop

    after_6:
    // 0x80042B0C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80042B10: sb          $zero, 0x1F52($at)
    MEM_B(0X1F52, ctx->r1) = 0;
    // 0x80042B14: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80042B18: sb          $zero, 0x1F51($at)
    MEM_B(0X1F51, ctx->r1) = 0;
    // 0x80042B1C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80042B20: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80042B24: sb          $t4, 0x1F55($at)
    MEM_B(0X1F55, ctx->r1) = ctx->r12;
L_80042B28:
    // 0x80042B28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80042B2C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80042B30: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80042B34: jr          $ra
    // 0x80042B38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80042B38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80042B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042B3C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x80042B40: lw          $t6, 0x5E04($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5E04);
    // 0x80042B44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80042B48: beq         $t6, $zero, L_80042B78
    if (ctx->r14 == 0) {
        // 0x80042B4C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80042B78;
    }
    // 0x80042B4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80042B50: jal         0x8003E004
    // 0x80042B54: nop

    func_8003E004(rdram, ctx);
        goto after_0;
    // 0x80042B54: nop

    after_0:
    // 0x80042B58: jal         0x80041E24
    // 0x80042B5C: nop

    func_80041E24(rdram, ctx);
        goto after_1;
    // 0x80042B5C: nop

    after_1:
    // 0x80042B60: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x80042B64: lw          $a0, 0x5E04($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5E04);
    // 0x80042B68: jal         0x8007E328
    // 0x80042B6C: nop

    func_8007E328(rdram, ctx);
        goto after_2;
    // 0x80042B6C: nop

    after_2:
    // 0x80042B70: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80042B74: sw          $zero, 0x5E04($at)
    MEM_W(0X5E04, ctx->r1) = 0;
L_80042B78:
    // 0x80042B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80042B7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80042B80: jr          $ra
    // 0x80042B84: nop

    return;
    // 0x80042B84: nop

;}
RECOMP_FUNC void func_80042B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042B88: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80042B8C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80042B90: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x80042B94: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x80042B98: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80042B9C: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80042BA0: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80042BA4: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80042BA8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80042BAC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80042BB0: jal         0x800412E0
    // 0x80042BB4: addiu       $a0, $sp, 0x4F
    ctx->r4 = ADD32(ctx->r29, 0X4F);
    func_800412E0(rdram, ctx);
        goto after_0;
    // 0x80042BB4: addiu       $a0, $sp, 0x4F
    ctx->r4 = ADD32(ctx->r29, 0X4F);
    after_0:
    // 0x80042BB8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x80042BBC: lw          $t7, 0x5E04($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5E04);
    // 0x80042BC0: sb          $v0, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = ctx->r2;
    // 0x80042BC4: lbu         $t6, 0x4E($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X4E);
    // 0x80042BC8: lbu         $t8, 0x2($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2);
    // 0x80042BCC: nop

    // 0x80042BD0: slt         $s0, $t8, $t6
    ctx->r16 = SIGNED(ctx->r24) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80042BD4: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x80042BD8: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x80042BDC: bne         $s0, $zero, L_80042C10
    if (ctx->r16 != 0) {
        // 0x80042BE0: nop
    
            goto L_80042C10;
    }
    // 0x80042BE0: nop

    // 0x80042BE4: lbu         $t0, 0x4F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4F);
    // 0x80042BE8: nop

    // 0x80042BEC: slti        $at, $t0, 0x7
    ctx->r1 = SIGNED(ctx->r8) < 0X7 ? 1 : 0;
    // 0x80042BF0: bne         $at, $zero, L_80042C0C
    if (ctx->r1 != 0) {
        // 0x80042BF4: nop
    
            goto L_80042C0C;
    }
    // 0x80042BF4: nop

    // 0x80042BF8: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80042BFC: lb          $t1, 0x1F55($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X1F55);
    // 0x80042C00: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042C04: beq         $t1, $at, L_80042C10
    if (ctx->r9 == ctx->r1) {
        // 0x80042C08: nop
    
            goto L_80042C10;
    }
    // 0x80042C08: nop

L_80042C0C:
    // 0x80042C0C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80042C10:
    // 0x80042C10: lbu         $t2, 0x4F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4F);
    // 0x80042C14: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80042C18: slti        $t3, $t2, 0x4
    ctx->r11 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x80042C1C: lbu         $t4, 0x4E($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X4E);
    // 0x80042C20: sb          $t3, 0x1F53($at)
    MEM_B(0X1F53, ctx->r1) = ctx->r11;
    // 0x80042C24: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x80042C28: slt         $t5, $at, $t4
    ctx->r13 = SIGNED(ctx->r1) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80042C2C: bne         $t5, $zero, L_80042C40
    if (ctx->r13 != 0) {
        // 0x80042C30: sw          $t5, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r13;
            goto L_80042C40;
    }
    // 0x80042C30: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    // 0x80042C34: andi        $t7, $t3, 0xFF
    ctx->r15 = ctx->r11 & 0XFF;
    // 0x80042C38: sltu        $t6, $zero, $t7
    ctx->r14 = 0 < ctx->r15 ? 1 : 0;
    // 0x80042C3C: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
L_80042C40:
    // 0x80042C40: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80042C44: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80042C48: lw          $t9, 0x5E04($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5E04);
    // 0x80042C4C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80042C50: sb          $t8, 0x1F54($at)
    MEM_B(0X1F54, ctx->r1) = ctx->r24;
    // 0x80042C54: lbu         $t0, 0x1($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1);
    // 0x80042C58: nop

    // 0x80042C5C: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80042C60: beq         $t1, $zero, L_80042C70
    if (ctx->r9 == 0) {
        // 0x80042C64: nop
    
            goto L_80042C70;
    }
    // 0x80042C64: nop

    // 0x80042C68: b           L_80042C9C
    // 0x80042C6C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_80042C9C;
    // 0x80042C6C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80042C70:
    // 0x80042C70: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x80042C74: lw          $t2, 0x5E04($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5E04);
    // 0x80042C78: nop

    // 0x80042C7C: lbu         $t4, 0x1($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X1);
    // 0x80042C80: nop

    // 0x80042C84: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x80042C88: beq         $t5, $zero, L_80042C98
    if (ctx->r13 == 0) {
        // 0x80042C8C: nop
    
            goto L_80042C98;
    }
    // 0x80042C8C: nop

    // 0x80042C90: b           L_80042C9C
    // 0x80042C94: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_80042C9C;
    // 0x80042C94: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80042C98:
    // 0x80042C98: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
L_80042C9C:
    // 0x80042C9C: beq         $s0, $zero, L_80042CA8
    if (ctx->r16 == 0) {
        // 0x80042CA0: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_80042CA8;
    }
    // 0x80042CA0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80042CA4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80042CA8:
    // 0x80042CA8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80042CAC: lw          $t3, -0x490($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X490);
    // 0x80042CB0: sb          $zero, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = 0;
    // 0x80042CB4: lbu         $t7, 0x13($t3)
    ctx->r15 = MEM_BU(ctx->r11, 0X13);
    // 0x80042CB8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80042CBC: lw          $t6, -0xDD0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XDD0);
    // 0x80042CC0: sb          $t7, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = ctx->r15;
    // 0x80042CC4: lbu         $t8, 0x6684($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X6684);
    // 0x80042CC8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80042CCC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80042CD0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80042CD4: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80042CD8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80042CDC: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80042CE0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80042CE4: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80042CE8: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x80042CEC: lbu         $s2, 0x51F1($t0)
    ctx->r18 = MEM_BU(ctx->r8, 0X51F1);
    // 0x80042CF0: lbu         $a1, 0x1F53($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1F53);
    // 0x80042CF4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80042CF8: jal         0x8003E038
    // 0x80042CFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003E038(rdram, ctx);
        goto after_1;
    // 0x80042CFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80042D00: jal         0x80067DD8
    // 0x80042D04: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80067DD8(rdram, ctx);
        goto after_2;
    // 0x80042D04: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x80042D08: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80042D0C: lbu         $a1, 0x1F53($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1F53);
    // 0x80042D10: jal         0x8003E038
    // 0x80042D14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003E038(rdram, ctx);
        goto after_3;
    // 0x80042D14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x80042D18: lbu         $a0, 0x4E($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4E);
    // 0x80042D1C: jal         0x80067DD8
    // 0x80042D20: nop

    func_80067DD8(rdram, ctx);
        goto after_4;
    // 0x80042D20: nop

    after_4:
    // 0x80042D24: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x80042D28: lw          $t1, 0x5E04($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5E04);
    // 0x80042D2C: nop

    // 0x80042D30: lbu         $t2, 0x1($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X1);
    // 0x80042D34: nop

    // 0x80042D38: andi        $t4, $t2, 0x8
    ctx->r12 = ctx->r10 & 0X8;
    // 0x80042D3C: beq         $t4, $zero, L_80042E38
    if (ctx->r12 == 0) {
        // 0x80042D40: nop
    
            goto L_80042E38;
    }
    // 0x80042D40: nop

    // 0x80042D44: bne         $s0, $zero, L_80042E38
    if (ctx->r16 != 0) {
        // 0x80042D48: nop
    
            goto L_80042E38;
    }
    // 0x80042D48: nop

    // 0x80042D4C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80042D50: lbu         $a1, 0x1F53($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1F53);
    // 0x80042D54: jal         0x80040500
    // 0x80042D58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80040500(rdram, ctx);
        goto after_5;
    // 0x80042D58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x80042D5C: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x80042D60: beq         $s1, $zero, L_80042D94
    if (ctx->r17 == 0) {
        // 0x80042D64: or          $s5, $zero, $zero
        ctx->r21 = 0 | 0;
            goto L_80042D94;
    }
    // 0x80042D64: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80042D68: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80042D6C: jal         0x800427B8
    // 0x80042D70: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_800427B8(rdram, ctx);
        goto after_6;
    // 0x80042D70: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_6:
    // 0x80042D74: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80042D78: lw          $t5, 0x1F40($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1F40);
    // 0x80042D7C: sll         $t7, $s4, 3
    ctx->r15 = S32(ctx->r20 << 3);
    // 0x80042D80: lw          $t3, 0x0($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X0);
    // 0x80042D84: nop

    // 0x80042D88: addu        $t8, $t3, $t7
    ctx->r24 = ADD32(ctx->r11, ctx->r15);
    // 0x80042D8C: lh          $s5, 0x0($t8)
    ctx->r21 = MEM_H(ctx->r24, 0X0);
    // 0x80042D90: nop

L_80042D94:
    // 0x80042D94: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80042D98: beq         $s5, $at, L_80042E38
    if (ctx->r21 == ctx->r1) {
        // 0x80042D9C: nop
    
            goto L_80042E38;
    }
    // 0x80042D9C: nop

    // 0x80042DA0: lbu         $t6, 0x4E($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X4E);
    // 0x80042DA4: nop

    // 0x80042DA8: beq         $t6, $s2, L_80042E38
    if (ctx->r14 == ctx->r18) {
        // 0x80042DAC: nop
    
            goto L_80042E38;
    }
    // 0x80042DAC: nop

    // 0x80042DB0: jal         0x80067DD8
    // 0x80042DB4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80067DD8(rdram, ctx);
        goto after_7;
    // 0x80042DB4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_7:
    // 0x80042DB8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80042DBC: lbu         $a1, 0x1F53($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1F53);
    // 0x80042DC0: jal         0x80040500
    // 0x80042DC4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80040500(rdram, ctx);
        goto after_8;
    // 0x80042DC4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x80042DC8: beq         $v0, $zero, L_80042E2C
    if (ctx->r2 == 0) {
        // 0x80042DCC: nop
    
            goto L_80042E2C;
    }
    // 0x80042DCC: nop

    // 0x80042DD0: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80042DD4: lw          $t9, 0x1F40($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1F40);
    // 0x80042DD8: sll         $t1, $s4, 3
    ctx->r9 = S32(ctx->r20 << 3);
    // 0x80042DDC: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80042DE0: nop

    // 0x80042DE4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80042DE8: lh          $t4, 0x0($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X0);
    // 0x80042DEC: nop

    // 0x80042DF0: slt         $at, $s5, $t4
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80042DF4: beq         $at, $zero, L_80042E18
    if (ctx->r1 == 0) {
        // 0x80042DF8: nop
    
            goto L_80042E18;
    }
    // 0x80042DF8: nop

    // 0x80042DFC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80042E00: jal         0x800427B8
    // 0x80042E04: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_800427B8(rdram, ctx);
        goto after_9;
    // 0x80042E04: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_9:
    // 0x80042E08: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80042E0C: sb          $t5, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r13;
    // 0x80042E10: b           L_80042E38
    // 0x80042E14: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_80042E38;
    // 0x80042E14: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80042E18:
    // 0x80042E18: lbu         $a0, 0x4E($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4E);
    // 0x80042E1C: jal         0x80067DD8
    // 0x80042E20: nop

    func_80067DD8(rdram, ctx);
        goto after_10;
    // 0x80042E20: nop

    after_10:
    // 0x80042E24: b           L_80042E38
    // 0x80042E28: nop

        goto L_80042E38;
    // 0x80042E28: nop

L_80042E2C:
    // 0x80042E2C: lbu         $a0, 0x4E($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4E);
    // 0x80042E30: jal         0x80067DD8
    // 0x80042E34: nop

    func_80067DD8(rdram, ctx);
        goto after_11;
    // 0x80042E34: nop

    after_11:
L_80042E38:
    // 0x80042E38: bne         $s0, $zero, L_80042E48
    if (ctx->r16 != 0) {
        // 0x80042E3C: nop
    
            goto L_80042E48;
    }
    // 0x80042E3C: nop

    // 0x80042E40: bne         $s1, $zero, L_80042EF8
    if (ctx->r17 != 0) {
        // 0x80042E44: nop
    
            goto L_80042EF8;
    }
    // 0x80042E44: nop

L_80042E48:
    // 0x80042E48: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x80042E4C: lb          $a2, 0x1F55($a2)
    ctx->r6 = MEM_B(ctx->r6, 0X1F55);
    // 0x80042E50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80042E54: jal         0x80040F9C
    // 0x80042E58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80040F9C(rdram, ctx);
        goto after_12;
    // 0x80042E58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x80042E5C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80042E60: jal         0x800427B8
    // 0x80042E64: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_800427B8(rdram, ctx);
        goto after_13;
    // 0x80042E64: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_13:
    // 0x80042E68: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80042E6C: lw          $t3, 0x1F40($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1F40);
    // 0x80042E70: sll         $t8, $s3, 3
    ctx->r24 = S32(ctx->r19 << 3);
    // 0x80042E74: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
    // 0x80042E78: lbu         $t9, 0x4E($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X4E);
    // 0x80042E7C: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x80042E80: lh          $s5, 0x0($t6)
    ctx->r21 = MEM_H(ctx->r14, 0X0);
    // 0x80042E84: beq         $t9, $s2, L_80042EF8
    if (ctx->r25 == ctx->r18) {
        // 0x80042E88: nop
    
            goto L_80042EF8;
    }
    // 0x80042E88: nop

    // 0x80042E8C: jal         0x80067DD8
    // 0x80042E90: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80067DD8(rdram, ctx);
        goto after_14;
    // 0x80042E90: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_14:
    // 0x80042E94: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x80042E98: lb          $a2, 0x1F55($a2)
    ctx->r6 = MEM_B(ctx->r6, 0X1F55);
    // 0x80042E9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80042EA0: jal         0x80040F9C
    // 0x80042EA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80040F9C(rdram, ctx);
        goto after_15;
    // 0x80042EA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x80042EA8: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80042EAC: lw          $t0, 0x1F40($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1F40);
    // 0x80042EB0: sll         $t2, $s3, 3
    ctx->r10 = S32(ctx->r19 << 3);
    // 0x80042EB4: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80042EB8: nop

    // 0x80042EBC: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x80042EC0: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x80042EC4: nop

    // 0x80042EC8: slt         $at, $s5, $t5
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80042ECC: beq         $at, $zero, L_80042EEC
    if (ctx->r1 == 0) {
        // 0x80042ED0: nop
    
            goto L_80042EEC;
    }
    // 0x80042ED0: nop

    // 0x80042ED4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80042ED8: jal         0x800427B8
    // 0x80042EDC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_800427B8(rdram, ctx);
        goto after_16;
    // 0x80042EDC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_16:
    // 0x80042EE0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80042EE4: b           L_80042EF8
    // 0x80042EE8: sb          $t3, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r11;
        goto L_80042EF8;
    // 0x80042EE8: sb          $t3, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r11;
L_80042EEC:
    // 0x80042EEC: lbu         $a0, 0x4E($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4E);
    // 0x80042EF0: jal         0x80067DD8
    // 0x80042EF4: nop

    func_80067DD8(rdram, ctx);
        goto after_17;
    // 0x80042EF4: nop

    after_17:
L_80042EF8:
    // 0x80042EF8: lui         $s6, 0x800C
    ctx->r22 = S32(0X800C << 16);
    // 0x80042EFC: lw          $s6, 0x5E04($s6)
    ctx->r22 = MEM_W(ctx->r22, 0X5E04);
    // 0x80042F00: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80042F04: addiu       $s6, $s6, 0x5
    ctx->r22 = ADD32(ctx->r22, 0X5);
    // 0x80042F08: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80042F0C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80042F10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80042F14: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80042F18: jal         0x8003F760
    // 0x80042F1C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8003F760(rdram, ctx);
        goto after_18;
    // 0x80042F1C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_18:
    // 0x80042F20: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80042F24: sb          $t8, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r24;
    // 0x80042F28: sb          $zero, 0x8($s6)
    MEM_B(0X8, ctx->r22) = 0;
    // 0x80042F2C: beq         $s1, $zero, L_80042F48
    if (ctx->r17 == 0) {
        // 0x80042F30: addiu       $s7, $s6, 0x5
        ctx->r23 = ADD32(ctx->r22, 0X5);
            goto L_80042F48;
    }
    // 0x80042F30: addiu       $s7, $s6, 0x5
    ctx->r23 = ADD32(ctx->r22, 0X5);
    // 0x80042F34: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80042F38: jal         0x80041DA0
    // 0x80042F3C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80041DA0(rdram, ctx);
        goto after_19;
    // 0x80042F3C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_19:
    // 0x80042F40: b           L_80042F54
    // 0x80042F44: nop

        goto L_80042F54;
    // 0x80042F44: nop

L_80042F48:
    // 0x80042F48: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80042F4C: jal         0x80041DA0
    // 0x80042F50: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_80041DA0(rdram, ctx);
        goto after_20;
    // 0x80042F50: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_20:
L_80042F54:
    // 0x80042F54: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x80042F58: lw          $t6, 0x5E04($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5E04);
    // 0x80042F5C: nop

    // 0x80042F60: lbu         $t9, 0x1($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X1);
    // 0x80042F64: nop

    // 0x80042F68: andi        $t0, $t9, 0x8
    ctx->r8 = ctx->r25 & 0X8;
    // 0x80042F6C: beq         $t0, $zero, L_80043050
    if (ctx->r8 == 0) {
        // 0x80042F70: nop
    
            goto L_80043050;
    }
    // 0x80042F70: nop

    // 0x80042F74: lbu         $a0, 0x0($s7)
    ctx->r4 = MEM_BU(ctx->r23, 0X0);
    // 0x80042F78: lb          $a1, 0x1($s7)
    ctx->r5 = MEM_B(ctx->r23, 0X1);
    // 0x80042F7C: lbu         $a2, 0x2($s7)
    ctx->r6 = MEM_BU(ctx->r23, 0X2);
    // 0x80042F80: jal         0x800413C0
    // 0x80042F84: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_800413C0(rdram, ctx);
        goto after_21;
    // 0x80042F84: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_21:
    // 0x80042F88: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80042F8C: slti        $at, $s4, 0x14
    ctx->r1 = SIGNED(ctx->r20) < 0X14 ? 1 : 0;
    // 0x80042F90: beq         $at, $zero, L_8004303C
    if (ctx->r1 == 0) {
        // 0x80042F94: nop
    
            goto L_8004303C;
    }
    // 0x80042F94: nop

L_80042F98:
    // 0x80042F98: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80042F9C: slti        $at, $s3, 0xA
    ctx->r1 = SIGNED(ctx->r19) < 0XA ? 1 : 0;
    // 0x80042FA0: beq         $at, $zero, L_80042FFC
    if (ctx->r1 == 0) {
        // 0x80042FA4: nop
    
            goto L_80042FFC;
    }
    // 0x80042FA4: nop

L_80042FA8:
    // 0x80042FA8: sll         $t2, $s4, 2
    ctx->r10 = S32(ctx->r20 << 2);
    // 0x80042FAC: addu        $t2, $t2, $s4
    ctx->r10 = ADD32(ctx->r10, ctx->r20);
    // 0x80042FB0: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x80042FB4: addu        $t4, $s3, $t2
    ctx->r12 = ADD32(ctx->r19, ctx->r10);
    // 0x80042FB8: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80042FBC: lw          $t1, 0x1F30($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1F30);
    // 0x80042FC0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80042FC4: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80042FC8: addu        $t3, $t1, $t5
    ctx->r11 = ADD32(ctx->r9, ctx->r13);
    // 0x80042FCC: lbu         $t7, 0x0($t3)
    ctx->r15 = MEM_BU(ctx->r11, 0X0);
    // 0x80042FD0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80042FD4: beq         $t7, $at, L_80042FFC
    if (ctx->r15 == ctx->r1) {
        // 0x80042FD8: nop
    
            goto L_80042FFC;
    }
    // 0x80042FD8: nop

    // 0x80042FDC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80042FE0: sll         $t8, $s3, 24
    ctx->r24 = S32(ctx->r19 << 24);
    // 0x80042FE4: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
    // 0x80042FE8: sra         $t6, $s3, 24
    ctx->r14 = S32(SIGNED(ctx->r19) >> 24);
    // 0x80042FEC: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x80042FF0: slti        $at, $s3, 0xA
    ctx->r1 = SIGNED(ctx->r19) < 0XA ? 1 : 0;
    // 0x80042FF4: bne         $at, $zero, L_80042FA8
    if (ctx->r1 != 0) {
        // 0x80042FF8: nop
    
            goto L_80042FA8;
    }
    // 0x80042FF8: nop

L_80042FFC:
    // 0x80042FFC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80043000: bne         $s3, $at, L_8004301C
    if (ctx->r19 != ctx->r1) {
        // 0x80043004: nop
    
            goto L_8004301C;
    }
    // 0x80043004: nop

    // 0x80043008: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x8004300C: lw          $a0, 0x5E04($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5E04);
    // 0x80043010: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80043014: jal         0x8003E608
    // 0x80043018: addiu       $a0, $a0, 0x2E
    ctx->r4 = ADD32(ctx->r4, 0X2E);
    func_8003E608(rdram, ctx);
        goto after_22;
    // 0x80043018: addiu       $a0, $a0, 0x2E
    ctx->r4 = ADD32(ctx->r4, 0X2E);
    after_22:
L_8004301C:
    // 0x8004301C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80043020: sll         $t9, $s4, 24
    ctx->r25 = S32(ctx->r20 << 24);
    // 0x80043024: or          $s4, $t9, $zero
    ctx->r20 = ctx->r25 | 0;
    // 0x80043028: sra         $t0, $s4, 24
    ctx->r8 = S32(SIGNED(ctx->r20) >> 24);
    // 0x8004302C: or          $s4, $t0, $zero
    ctx->r20 = ctx->r8 | 0;
    // 0x80043030: slti        $at, $s4, 0x14
    ctx->r1 = SIGNED(ctx->r20) < 0X14 ? 1 : 0;
    // 0x80043034: bne         $at, $zero, L_80042F98
    if (ctx->r1 != 0) {
        // 0x80043038: nop
    
            goto L_80042F98;
    }
    // 0x80043038: nop

L_8004303C:
    // 0x8004303C: lbu         $a0, 0x0($s7)
    ctx->r4 = MEM_BU(ctx->r23, 0X0);
    // 0x80043040: lb          $a1, 0x1($s7)
    ctx->r5 = MEM_B(ctx->r23, 0X1);
    // 0x80043044: lbu         $a2, 0x2($s7)
    ctx->r6 = MEM_BU(ctx->r23, 0X2);
    // 0x80043048: jal         0x800413C0
    // 0x8004304C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_800413C0(rdram, ctx);
        goto after_23;
    // 0x8004304C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_23:
L_80043050:
    // 0x80043050: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80043054: lw          $t2, -0x490($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X490);
    // 0x80043058: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004305C: lbu         $a1, 0x1F53($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1F53);
    // 0x80043060: lb          $s3, 0x11($t2)
    ctx->r19 = MEM_B(ctx->r10, 0X11);
    // 0x80043064: lb          $s4, 0x12($t2)
    ctx->r20 = MEM_B(ctx->r10, 0X12);
    // 0x80043068: lbu         $s5, 0xA($t2)
    ctx->r21 = MEM_BU(ctx->r10, 0XA);
    // 0x8004306C: jal         0x800400FC
    // 0x80043070: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_800400FC(rdram, ctx);
        goto after_24;
    // 0x80043070: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_24:
    // 0x80043074: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80043078: lw          $t4, -0x490($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X490);
    // 0x8004307C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80043080: sb          $s3, 0x11($t4)
    MEM_B(0X11, ctx->r12) = ctx->r19;
    // 0x80043084: lw          $t1, -0x490($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X490);
    // 0x80043088: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8004308C: sb          $s4, 0x12($t1)
    MEM_B(0X12, ctx->r9) = ctx->r20;
    // 0x80043090: lw          $t5, -0x490($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X490);
    // 0x80043094: nop

    // 0x80043098: sb          $s5, 0xA($t5)
    MEM_B(0XA, ctx->r13) = ctx->r21;
    // 0x8004309C: lbu         $t3, 0x4F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4F);
    // 0x800430A0: nop

    // 0x800430A4: beq         $t3, $zero, L_800430F0
    if (ctx->r11 == 0) {
        // 0x800430A8: nop
    
            goto L_800430F0;
    }
    // 0x800430A8: nop

    // 0x800430AC: lbu         $a0, 0x4E($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4E);
    // 0x800430B0: jal         0x80067DD8
    // 0x800430B4: nop

    func_80067DD8(rdram, ctx);
        goto after_25;
    // 0x800430B4: nop

    after_25:
    // 0x800430B8: lb          $t7, 0x0($s6)
    ctx->r15 = MEM_B(ctx->r22, 0X0);
    // 0x800430BC: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x800430C0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800430C4: sb          $t8, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r24;
    // 0x800430C8: lb          $t9, 0x0($s6)
    ctx->r25 = MEM_B(ctx->r22, 0X0);
    // 0x800430CC: nop

    // 0x800430D0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800430D4: addu        $t2, $s6, $t0
    ctx->r10 = ADD32(ctx->r22, ctx->r8);
    // 0x800430D8: sb          $t6, 0x4($t2)
    MEM_B(0X4, ctx->r10) = ctx->r14;
    // 0x800430DC: lb          $t1, 0x0($s6)
    ctx->r9 = MEM_B(ctx->r22, 0X0);
    // 0x800430E0: lbu         $t4, 0x4E($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X4E);
    // 0x800430E4: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x800430E8: addu        $t3, $s6, $t5
    ctx->r11 = ADD32(ctx->r22, ctx->r13);
    // 0x800430EC: sb          $t4, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r12;
L_800430F0:
    // 0x800430F0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800430F4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800430F8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800430FC: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80043100: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80043104: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80043108: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x8004310C: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x80043110: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x80043114: jr          $ra
    // 0x80043118: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80043118: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8004311C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004311C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80043120: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80043124: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x80043128: lw          $t6, -0xDF0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XDF0);
    // 0x8004312C: lw          $t7, 0x5E04($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5E04);
    // 0x80043130: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80043134: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80043138: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8004313C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80043140: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80043144: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80043148: beq         $t7, $zero, L_800436EC
    if (ctx->r15 == 0) {
        // 0x8004314C: addiu       $s3, $t6, 0x28
        ctx->r19 = ADD32(ctx->r14, 0X28);
            goto L_800436EC;
    }
    // 0x8004314C: addiu       $s3, $t6, 0x28
    ctx->r19 = ADD32(ctx->r14, 0X28);
    // 0x80043150: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x80043154: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80043158: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8004315C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80043160: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80043164: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80043168: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8004316C: addiu       $t0, $t0, -0x10D0
    ctx->r8 = ADD32(ctx->r8, -0X10D0);
    // 0x80043170: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80043174: bne         $t1, $t6, L_800436EC
    if (ctx->r9 != ctx->r14) {
        // 0x80043178: nop
    
            goto L_800436EC;
    }
    // 0x80043178: nop

    // 0x8004317C: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80043180: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80043184: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80043188: lw          $t3, -0x14D4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X14D4);
    // 0x8004318C: nop

    // 0x80043190: lbu         $t4, 0x2($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X2);
    // 0x80043194: nop

    // 0x80043198: beq         $t4, $zero, L_800436EC
    if (ctx->r12 == 0) {
        // 0x8004319C: nop
    
            goto L_800436EC;
    }
    // 0x8004319C: nop

    // 0x800431A0: lbu         $t5, 0x4($t7)
    ctx->r13 = MEM_BU(ctx->r15, 0X4);
    // 0x800431A4: nop

    // 0x800431A8: beq         $t5, $zero, L_800436EC
    if (ctx->r13 == 0) {
        // 0x800431AC: nop
    
            goto L_800436EC;
    }
    // 0x800431AC: nop

    // 0x800431B0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x800431B4: lw          $t9, 0x5E04($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5E04);
    // 0x800431B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800431BC: lbu         $t0, 0x4($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X4);
    // 0x800431C0: nop

    // 0x800431C4: bne         $t0, $at, L_800431E4
    if (ctx->r8 != ctx->r1) {
        // 0x800431C8: nop
    
            goto L_800431E4;
    }
    // 0x800431C8: nop

    // 0x800431CC: jal         0x80042B88
    // 0x800431D0: nop

    func_80042B88(rdram, ctx);
        goto after_0;
    // 0x800431D0: nop

    after_0:
    // 0x800431D4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x800431D8: lw          $t6, 0x5E04($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5E04);
    // 0x800431DC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800431E0: sb          $t1, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r9;
L_800431E4:
    // 0x800431E4: lw          $t8, 0x88($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X88);
    // 0x800431E8: addiu       $at, $zero, 0x1000
    ctx->r1 = ADD32(0, 0X1000);
    // 0x800431EC: beq         $t8, $at, L_8004320C
    if (ctx->r24 == ctx->r1) {
        // 0x800431F0: nop
    
            goto L_8004320C;
    }
    // 0x800431F0: nop

    // 0x800431F4: lw          $t2, 0x8C($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X8C);
    // 0x800431F8: addiu       $at, $zero, 0x1000
    ctx->r1 = ADD32(0, 0X1000);
    // 0x800431FC: beq         $t2, $at, L_8004320C
    if (ctx->r10 == ctx->r1) {
        // 0x80043200: nop
    
            goto L_8004320C;
    }
    // 0x80043200: nop

    // 0x80043204: jal         0x80060CA0
    // 0x80043208: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80060CA0(rdram, ctx);
        goto after_1;
    // 0x80043208: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
L_8004320C:
    // 0x8004320C: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x80043210: lw          $t3, 0x5E04($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5E04);
    // 0x80043214: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80043218: lb          $t4, 0x5($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X5);
    // 0x8004321C: lbu         $t5, 0x1F51($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X1F51);
    // 0x80043220: lbu         $t9, 0x3($t3)
    ctx->r25 = MEM_BU(ctx->r11, 0X3);
    // 0x80043224: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80043228: addu        $s1, $t3, $t7
    ctx->r17 = ADD32(ctx->r11, ctx->r15);
    // 0x8004322C: slt         $at, $t5, $t9
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80043230: beq         $at, $zero, L_8004325C
    if (ctx->r1 == 0) {
        // 0x80043234: addiu       $s1, $s1, 0x6
        ctx->r17 = ADD32(ctx->r17, 0X6);
            goto L_8004325C;
    }
    // 0x80043234: addiu       $s1, $s1, 0x6
    ctx->r17 = ADD32(ctx->r17, 0X6);
    // 0x80043238: jal         0x800A3AF0
    // 0x8004323C: nop

    func_800A3AF0(rdram, ctx);
        goto after_2;
    // 0x8004323C: nop

    after_2:
    // 0x80043240: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80043244: lbu         $t0, 0x1F51($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X1F51);
    // 0x80043248: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x8004324C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80043250: addu        $t1, $t0, $s4
    ctx->r9 = ADD32(ctx->r8, ctx->r20);
    // 0x80043254: b           L_800436EC
    // 0x80043258: sb          $t1, 0x1F51($at)
    MEM_B(0X1F51, ctx->r1) = ctx->r9;
        goto L_800436EC;
    // 0x80043258: sb          $t1, 0x1F51($at)
    MEM_B(0X1F51, ctx->r1) = ctx->r9;
L_8004325C:
    // 0x8004325C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80043260: sb          $zero, 0x1F51($at)
    MEM_B(0X1F51, ctx->r1) = 0;
    // 0x80043264: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80043268: lw          $t6, -0x490($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X490);
    // 0x8004326C: lbu         $t8, 0x3($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X3);
    // 0x80043270: lh          $s2, 0x8($t6)
    ctx->r18 = MEM_H(ctx->r14, 0X8);
    // 0x80043274: sltiu       $at, $t8, 0x7
    ctx->r1 = ctx->r24 < 0X7 ? 1 : 0;
    // 0x80043278: beq         $at, $zero, L_800436EC
    if (ctx->r1 == 0) {
        // 0x8004327C: nop
    
            goto L_800436EC;
    }
    // 0x8004327C: nop

    // 0x80043280: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80043284: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80043288: addu        $at, $at, $t8
    gpr jr_addend_80043294 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8004328C: lw          $t8, -0x4B84($at)
    ctx->r24 = ADD32(ctx->r1, -0X4B84);
    // 0x80043290: nop

    // 0x80043294: jr          $t8
    // 0x80043298: nop

    switch (jr_addend_80043294 >> 2) {
        case 0: goto L_80043410; break;
        case 1: goto L_800434D0; break;
        case 2: goto L_80043590; break;
        case 3: goto L_80043650; break;
        case 4: goto L_800436A0; break;
        case 5: goto L_8004329C; break;
        case 6: goto L_80043324; break;
        default: switch_error(__func__, 0x80043294, 0x800DB47C);
    }
    // 0x80043298: nop

L_8004329C:
    // 0x8004329C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800432A0: lw          $t2, -0x490($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X490);
    // 0x800432A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800432A8: lbu         $t4, 0x0($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X0);
    // 0x800432AC: nop

    // 0x800432B0: bne         $t4, $at, L_800432E8
    if (ctx->r12 != ctx->r1) {
        // 0x800432B4: nop
    
            goto L_800432E8;
    }
    // 0x800432B4: nop

    // 0x800432B8: lbu         $t7, 0x13($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X13);
    // 0x800432BC: lbu         $t3, 0x0($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X0);
    // 0x800432C0: nop

    // 0x800432C4: bne         $t7, $t3, L_800432E8
    if (ctx->r15 != ctx->r11) {
        // 0x800432C8: nop
    
            goto L_800432E8;
    }
    // 0x800432C8: nop

    // 0x800432CC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800432D0: lw          $a0, -0xDD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XDD0);
    // 0x800432D4: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x800432D8: jal         0x800661D4
    // 0x800432DC: addiu       $a0, $a0, 0x51F0
    ctx->r4 = ADD32(ctx->r4, 0X51F0);
    func_800661D4(rdram, ctx);
        goto after_3;
    // 0x800432DC: addiu       $a0, $a0, 0x51F0
    ctx->r4 = ADD32(ctx->r4, 0X51F0);
    after_3:
    // 0x800432E0: b           L_800436EC
    // 0x800432E4: nop

        goto L_800436EC;
    // 0x800432E4: nop

L_800432E8:
    // 0x800432E8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800432EC: lw          $t5, -0x490($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X490);
    // 0x800432F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800432F4: lbu         $t9, 0x0($t5)
    ctx->r25 = MEM_BU(ctx->r13, 0X0);
    // 0x800432F8: nop

    // 0x800432FC: bne         $t9, $at, L_800436EC
    if (ctx->r25 != ctx->r1) {
        // 0x80043300: nop
    
            goto L_800436EC;
    }
    // 0x80043300: nop

    // 0x80043304: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x80043308: lw          $t0, 0x5E04($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5E04);
    // 0x8004330C: nop

    // 0x80043310: lb          $t1, 0x5($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X5);
    // 0x80043314: nop

    // 0x80043318: addiu       $t6, $t1, -0x1
    ctx->r14 = ADD32(ctx->r9, -0X1);
    // 0x8004331C: b           L_800436EC
    // 0x80043320: sb          $t6, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r14;
        goto L_800436EC;
    // 0x80043320: sb          $t6, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r14;
L_80043324:
    // 0x80043324: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80043328: lbu         $t8, 0x1F54($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1F54);
    // 0x8004332C: nop

    // 0x80043330: bne         $t8, $zero, L_80043358
    if (ctx->r24 != 0) {
        // 0x80043334: nop
    
            goto L_80043358;
    }
    // 0x80043334: nop

    // 0x80043338: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x8004333C: lw          $t4, 0x5E04($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5E04);
    // 0x80043340: nop

    // 0x80043344: lbu         $t7, 0x1($t4)
    ctx->r15 = MEM_BU(ctx->r12, 0X1);
    // 0x80043348: nop

    // 0x8004334C: andi        $t3, $t7, 0x10
    ctx->r11 = ctx->r15 & 0X10;
    // 0x80043350: beq         $t3, $zero, L_80043370
    if (ctx->r11 == 0) {
        // 0x80043354: nop
    
            goto L_80043370;
    }
    // 0x80043354: nop

L_80043358:
    // 0x80043358: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004335C: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x80043360: jal         0x800676AC
    // 0x80043364: nop

    func_800676AC(rdram, ctx);
        goto after_4;
    // 0x80043364: nop

    after_4:
    // 0x80043368: b           L_800436EC
    // 0x8004336C: nop

        goto L_800436EC;
    // 0x8004336C: nop

L_80043370:
    // 0x80043370: slti        $at, $s2, 0x3C
    ctx->r1 = SIGNED(ctx->r18) < 0X3C ? 1 : 0;
    // 0x80043374: beq         $at, $zero, L_800436EC
    if (ctx->r1 == 0) {
        // 0x80043378: nop
    
            goto L_800436EC;
    }
    // 0x80043378: nop

    // 0x8004337C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80043380: lw          $t2, -0x490($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X490);
    // 0x80043384: lb          $t9, 0x1($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X1);
    // 0x80043388: lb          $t5, 0x12($t2)
    ctx->r13 = MEM_B(ctx->r10, 0X12);
    // 0x8004338C: nop

    // 0x80043390: slt         $at, $t5, $t9
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80043394: beq         $at, $zero, L_800436EC
    if (ctx->r1 == 0) {
        // 0x80043398: nop
    
            goto L_800436EC;
    }
    // 0x80043398: nop

    // 0x8004339C: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x800433A0: lw          $t1, 0x5E04($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5E04);
    // 0x800433A4: nop

    // 0x800433A8: lbu         $t6, 0x1($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X1);
    // 0x800433AC: nop

    // 0x800433B0: andi        $t0, $t6, 0x20
    ctx->r8 = ctx->r14 & 0X20;
    // 0x800433B4: beq         $t0, $zero, L_800433C8
    if (ctx->r8 == 0) {
        // 0x800433B8: nop
    
            goto L_800433C8;
    }
    // 0x800433B8: nop

    // 0x800433BC: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x800433C0: b           L_800436EC
    // 0x800433C4: sh          $t8, 0x6($t2)
    MEM_H(0X6, ctx->r10) = ctx->r24;
        goto L_800436EC;
    // 0x800433C4: sh          $t8, 0x6($t2)
    MEM_H(0X6, ctx->r10) = ctx->r24;
L_800433C8:
    // 0x800433C8: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x800433CC: lw          $t4, 0x5E04($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5E04);
    // 0x800433D0: nop

    // 0x800433D4: lbu         $t7, 0x1($t4)
    ctx->r15 = MEM_BU(ctx->r12, 0X1);
    // 0x800433D8: nop

    // 0x800433DC: andi        $t3, $t7, 0x40
    ctx->r11 = ctx->r15 & 0X40;
    // 0x800433E0: beq         $t3, $zero, L_800436EC
    if (ctx->r11 == 0) {
        // 0x800433E4: nop
    
            goto L_800436EC;
    }
    // 0x800433E4: nop

    // 0x800433E8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800433EC: lw          $t9, -0x490($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X490);
    // 0x800433F0: addiu       $t5, $zero, 0x40
    ctx->r13 = ADD32(0, 0X40);
    // 0x800433F4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800433F8: sh          $t5, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r13;
    // 0x800433FC: lw          $t1, -0x490($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X490);
    // 0x80043400: nop

    // 0x80043404: lh          $t6, 0x8($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X8);
    // 0x80043408: b           L_800436EC
    // 0x8004340C: sh          $t6, 0x6($t1)
    MEM_H(0X6, ctx->r9) = ctx->r14;
        goto L_800436EC;
    // 0x8004340C: sh          $t6, 0x6($t1)
    MEM_H(0X6, ctx->r9) = ctx->r14;
L_80043410:
    // 0x80043410: slti        $at, $s2, 0x3C
    ctx->r1 = SIGNED(ctx->r18) < 0X3C ? 1 : 0;
    // 0x80043414: beq         $at, $zero, L_80043490
    if (ctx->r1 == 0) {
        // 0x80043418: nop
    
            goto L_80043490;
    }
    // 0x80043418: nop

    // 0x8004341C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80043420: lbu         $t0, 0x1F54($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X1F54);
    // 0x80043424: nop

    // 0x80043428: bne         $t0, $zero, L_80043450
    if (ctx->r8 != 0) {
        // 0x8004342C: nop
    
            goto L_80043450;
    }
    // 0x8004342C: nop

    // 0x80043430: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x80043434: lw          $t8, 0x5E04($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5E04);
    // 0x80043438: nop

    // 0x8004343C: lbu         $t2, 0x1($t8)
    ctx->r10 = MEM_BU(ctx->r24, 0X1);
    // 0x80043440: nop

    // 0x80043444: andi        $t4, $t2, 0x40
    ctx->r12 = ctx->r10 & 0X40;
    // 0x80043448: beq         $t4, $zero, L_80043490
    if (ctx->r12 == 0) {
        // 0x8004344C: nop
    
            goto L_80043490;
    }
    // 0x8004344C: nop

L_80043450:
    // 0x80043450: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80043454: lw          $t7, -0x490($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X490);
    // 0x80043458: lb          $t5, 0x1($s1)
    ctx->r13 = MEM_B(ctx->r17, 0X1);
    // 0x8004345C: lb          $t3, 0x12($t7)
    ctx->r11 = MEM_B(ctx->r15, 0X12);
    // 0x80043460: nop

    // 0x80043464: slt         $at, $t3, $t5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80043468: beq         $at, $zero, L_80043490
    if (ctx->r1 == 0) {
        // 0x8004346C: nop
    
            goto L_80043490;
    }
    // 0x8004346C: nop

    // 0x80043470: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x80043474: sh          $t9, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r25;
    // 0x80043478: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8004347C: lw          $t6, -0x490($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X490);
    // 0x80043480: nop

    // 0x80043484: lh          $t1, 0x8($t6)
    ctx->r9 = MEM_H(ctx->r14, 0X8);
    // 0x80043488: b           L_800436EC
    // 0x8004348C: sh          $t1, 0x6($t6)
    MEM_H(0X6, ctx->r14) = ctx->r9;
        goto L_800436EC;
    // 0x8004348C: sh          $t1, 0x6($t6)
    MEM_H(0X6, ctx->r14) = ctx->r9;
L_80043490:
    // 0x80043490: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80043494: lw          $t0, -0x490($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X490);
    // 0x80043498: lb          $t2, 0x1($s1)
    ctx->r10 = MEM_B(ctx->r17, 0X1);
    // 0x8004349C: lb          $t8, 0x12($t0)
    ctx->r24 = MEM_B(ctx->r8, 0X12);
    // 0x800434A0: nop

    // 0x800434A4: slt         $at, $t8, $t2
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800434A8: bne         $at, $zero, L_800436EC
    if (ctx->r1 != 0) {
        // 0x800434AC: nop
    
            goto L_800436EC;
    }
    // 0x800434AC: nop

    // 0x800434B0: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x800434B4: lw          $t4, 0x5E04($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5E04);
    // 0x800434B8: nop

    // 0x800434BC: lb          $t3, 0x5($t4)
    ctx->r11 = MEM_B(ctx->r12, 0X5);
    // 0x800434C0: nop

    // 0x800434C4: addiu       $t5, $t3, -0x1
    ctx->r13 = ADD32(ctx->r11, -0X1);
    // 0x800434C8: b           L_800436EC
    // 0x800434CC: sb          $t5, 0x5($t4)
    MEM_B(0X5, ctx->r12) = ctx->r13;
        goto L_800436EC;
    // 0x800434CC: sb          $t5, 0x5($t4)
    MEM_B(0X5, ctx->r12) = ctx->r13;
L_800434D0:
    // 0x800434D0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800434D4: lw          $t7, -0x490($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X490);
    // 0x800434D8: lbu         $t9, 0x0($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X0);
    // 0x800434DC: lb          $t1, 0x11($t7)
    ctx->r9 = MEM_B(ctx->r15, 0X11);
    // 0x800434E0: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x800434E4: subu        $s0, $t9, $t1
    ctx->r16 = SUB32(ctx->r25, ctx->r9);
    // 0x800434E8: sll         $t6, $s0, 24
    ctx->r14 = S32(ctx->r16 << 24);
    // 0x800434EC: lbu         $t8, 0x1F54($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1F54);
    // 0x800434F0: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x800434F4: sra         $t0, $s0, 24
    ctx->r8 = S32(SIGNED(ctx->r16) >> 24);
    // 0x800434F8: bne         $t8, $zero, L_8004351C
    if (ctx->r24 != 0) {
        // 0x800434FC: or          $s0, $t0, $zero
        ctx->r16 = ctx->r8 | 0;
            goto L_8004351C;
    }
    // 0x800434FC: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x80043500: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x80043504: lw          $t2, 0x5E04($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5E04);
    // 0x80043508: nop

    // 0x8004350C: lbu         $t3, 0x1($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X1);
    // 0x80043510: nop

    // 0x80043514: andi        $t5, $t3, 0x80
    ctx->r13 = ctx->r11 & 0X80;
    // 0x80043518: beq         $t5, $zero, L_80043550
    if (ctx->r13 == 0) {
        // 0x8004351C: slti        $at, $s0, 0x2
        ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_80043550;
    }
L_8004351C:
    // 0x8004351C: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80043520: bne         $at, $zero, L_80043550
    if (ctx->r1 != 0) {
        // 0x80043524: nop
    
            goto L_80043550;
    }
    // 0x80043524: nop

    // 0x80043528: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004352C: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x80043530: jal         0x80067254
    // 0x80043534: nop

    func_80067254(rdram, ctx);
        goto after_5;
    // 0x80043534: nop

    after_5:
    // 0x80043538: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004353C: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x80043540: jal         0x80067254
    // 0x80043544: nop

    func_80067254(rdram, ctx);
        goto after_6;
    // 0x80043544: nop

    after_6:
    // 0x80043548: b           L_800436EC
    // 0x8004354C: nop

        goto L_800436EC;
    // 0x8004354C: nop

L_80043550:
    // 0x80043550: blez        $s0, L_80043570
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80043554: nop
    
            goto L_80043570;
    }
    // 0x80043554: nop

    // 0x80043558: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004355C: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x80043560: jal         0x80067254
    // 0x80043564: nop

    func_80067254(rdram, ctx);
        goto after_7;
    // 0x80043564: nop

    after_7:
    // 0x80043568: b           L_800436EC
    // 0x8004356C: nop

        goto L_800436EC;
    // 0x8004356C: nop

L_80043570:
    // 0x80043570: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x80043574: lw          $t4, 0x5E04($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5E04);
    // 0x80043578: nop

    // 0x8004357C: lb          $t7, 0x5($t4)
    ctx->r15 = MEM_B(ctx->r12, 0X5);
    // 0x80043580: nop

    // 0x80043584: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x80043588: b           L_800436EC
    // 0x8004358C: sb          $t9, 0x5($t4)
    MEM_B(0X5, ctx->r12) = ctx->r25;
        goto L_800436EC;
    // 0x8004358C: sb          $t9, 0x5($t4)
    MEM_B(0X5, ctx->r12) = ctx->r25;
L_80043590:
    // 0x80043590: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80043594: lw          $t1, -0x490($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X490);
    // 0x80043598: lbu         $t0, 0x0($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X0);
    // 0x8004359C: lb          $t6, 0x11($t1)
    ctx->r14 = MEM_B(ctx->r9, 0X11);
    // 0x800435A0: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x800435A4: subu        $s0, $t6, $t0
    ctx->r16 = SUB32(ctx->r14, ctx->r8);
    // 0x800435A8: sll         $t8, $s0, 24
    ctx->r24 = S32(ctx->r16 << 24);
    // 0x800435AC: lbu         $t3, 0x1F54($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X1F54);
    // 0x800435B0: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x800435B4: sra         $t2, $s0, 24
    ctx->r10 = S32(SIGNED(ctx->r16) >> 24);
    // 0x800435B8: bne         $t3, $zero, L_800435DC
    if (ctx->r11 != 0) {
        // 0x800435BC: or          $s0, $t2, $zero
        ctx->r16 = ctx->r10 | 0;
            goto L_800435DC;
    }
    // 0x800435BC: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x800435C0: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x800435C4: lw          $t5, 0x5E04($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5E04);
    // 0x800435C8: nop

    // 0x800435CC: lbu         $t7, 0x1($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X1);
    // 0x800435D0: nop

    // 0x800435D4: andi        $t9, $t7, 0x80
    ctx->r25 = ctx->r15 & 0X80;
    // 0x800435D8: beq         $t9, $zero, L_80043610
    if (ctx->r25 == 0) {
        // 0x800435DC: slti        $at, $s0, 0x2
        ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_80043610;
    }
L_800435DC:
    // 0x800435DC: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x800435E0: bne         $at, $zero, L_80043610
    if (ctx->r1 != 0) {
        // 0x800435E4: nop
    
            goto L_80043610;
    }
    // 0x800435E4: nop

    // 0x800435E8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800435EC: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x800435F0: jal         0x8006715C
    // 0x800435F4: nop

    func_8006715C(rdram, ctx);
        goto after_8;
    // 0x800435F4: nop

    after_8:
    // 0x800435F8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800435FC: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x80043600: jal         0x8006715C
    // 0x80043604: nop

    func_8006715C(rdram, ctx);
        goto after_9;
    // 0x80043604: nop

    after_9:
    // 0x80043608: b           L_800436EC
    // 0x8004360C: nop

        goto L_800436EC;
    // 0x8004360C: nop

L_80043610:
    // 0x80043610: blez        $s0, L_80043630
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80043614: nop
    
            goto L_80043630;
    }
    // 0x80043614: nop

    // 0x80043618: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004361C: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x80043620: jal         0x8006715C
    // 0x80043624: nop

    func_8006715C(rdram, ctx);
        goto after_10;
    // 0x80043624: nop

    after_10:
    // 0x80043628: b           L_800436EC
    // 0x8004362C: nop

        goto L_800436EC;
    // 0x8004362C: nop

L_80043630:
    // 0x80043630: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x80043634: lw          $t4, 0x5E04($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5E04);
    // 0x80043638: nop

    // 0x8004363C: lb          $t1, 0x5($t4)
    ctx->r9 = MEM_B(ctx->r12, 0X5);
    // 0x80043640: nop

    // 0x80043644: addiu       $t6, $t1, -0x1
    ctx->r14 = ADD32(ctx->r9, -0X1);
    // 0x80043648: b           L_800436EC
    // 0x8004364C: sb          $t6, 0x5($t4)
    MEM_B(0X5, ctx->r12) = ctx->r14;
        goto L_800436EC;
    // 0x8004364C: sb          $t6, 0x5($t4)
    MEM_B(0X5, ctx->r12) = ctx->r14;
L_80043650:
    // 0x80043650: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80043654: lw          $t0, -0x490($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X490);
    // 0x80043658: lbu         $t2, 0x2($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X2);
    // 0x8004365C: lbu         $t8, 0xA($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0XA);
    // 0x80043660: nop

    // 0x80043664: beq         $t8, $t2, L_80043680
    if (ctx->r24 == ctx->r10) {
        // 0x80043668: nop
    
            goto L_80043680;
    }
    // 0x80043668: nop

    // 0x8004366C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80043670: jal         0x8006734C
    // 0x80043674: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8006734C(rdram, ctx);
        goto after_11;
    // 0x80043674: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x80043678: b           L_800436EC
    // 0x8004367C: nop

        goto L_800436EC;
    // 0x8004367C: nop

L_80043680:
    // 0x80043680: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x80043684: lw          $t3, 0x5E04($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5E04);
    // 0x80043688: nop

    // 0x8004368C: lb          $t5, 0x5($t3)
    ctx->r13 = MEM_B(ctx->r11, 0X5);
    // 0x80043690: nop

    // 0x80043694: addiu       $t7, $t5, -0x1
    ctx->r15 = ADD32(ctx->r13, -0X1);
    // 0x80043698: b           L_800436EC
    // 0x8004369C: sb          $t7, 0x5($t3)
    MEM_B(0X5, ctx->r11) = ctx->r15;
        goto L_800436EC;
    // 0x8004369C: sb          $t7, 0x5($t3)
    MEM_B(0X5, ctx->r11) = ctx->r15;
L_800436A0:
    // 0x800436A0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800436A4: lw          $t9, -0x490($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X490);
    // 0x800436A8: lbu         $t6, 0x2($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X2);
    // 0x800436AC: lbu         $t1, 0xA($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0XA);
    // 0x800436B0: nop

    // 0x800436B4: beq         $t1, $t6, L_800436D0
    if (ctx->r9 == ctx->r14) {
        // 0x800436B8: nop
    
            goto L_800436D0;
    }
    // 0x800436B8: nop

    // 0x800436BC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x800436C0: jal         0x8006734C
    // 0x800436C4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_8006734C(rdram, ctx);
        goto after_12;
    // 0x800436C4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_12:
    // 0x800436C8: b           L_800436EC
    // 0x800436CC: nop

        goto L_800436EC;
    // 0x800436CC: nop

L_800436D0:
    // 0x800436D0: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x800436D4: lw          $t4, 0x5E04($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5E04);
    // 0x800436D8: nop

    // 0x800436DC: lb          $t8, 0x5($t4)
    ctx->r24 = MEM_B(ctx->r12, 0X5);
    // 0x800436E0: nop

    // 0x800436E4: addiu       $t2, $t8, -0x1
    ctx->r10 = ADD32(ctx->r24, -0X1);
    // 0x800436E8: sb          $t2, 0x5($t4)
    MEM_B(0X5, ctx->r12) = ctx->r10;
L_800436EC:
    // 0x800436EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800436F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800436F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800436F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800436FC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80043700: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80043704: jr          $ra
    // 0x80043708: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80043708: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8004370C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004370C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x80043710: lw          $t6, 0x5E04($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5E04);
    // 0x80043714: nop

    // 0x80043718: beq         $t6, $zero, L_80043764
    if (ctx->r14 == 0) {
        // 0x8004371C: nop
    
            goto L_80043764;
    }
    // 0x8004371C: nop

    // 0x80043720: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80043724: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80043728: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8004372C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80043730: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80043734: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80043738: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8004373C: lw          $t1, -0xDF0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0XDF0);
    // 0x80043740: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80043744: addiu       $t9, $t9, -0x10D0
    ctx->r25 = ADD32(ctx->r25, -0X10D0);
    // 0x80043748: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8004374C: bne         $t0, $t1, L_80043764
    if (ctx->r8 != ctx->r9) {
        // 0x80043750: nop
    
            goto L_80043764;
    }
    // 0x80043750: nop

    // 0x80043754: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x80043758: lw          $t3, 0x5E04($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5E04);
    // 0x8004375C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80043760: sb          $t2, 0x4($t3)
    MEM_B(0X4, ctx->r11) = ctx->r10;
L_80043764:
    // 0x80043764: jr          $ra
    // 0x80043768: nop

    return;
    // 0x80043768: nop

;}
RECOMP_FUNC void func_8004376C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004376C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x80043770: lw          $t6, 0x5E04($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5E04);
    // 0x80043774: nop

    // 0x80043778: beq         $t6, $zero, L_800437FC
    if (ctx->r14 == 0) {
        // 0x8004377C: nop
    
            goto L_800437FC;
    }
    // 0x8004377C: nop

    // 0x80043780: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80043784: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80043788: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8004378C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80043790: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80043794: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80043798: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8004379C: lw          $t1, -0xDF0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0XDF0);
    // 0x800437A0: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800437A4: addiu       $t9, $t9, -0x10D0
    ctx->r25 = ADD32(ctx->r25, -0X10D0);
    // 0x800437A8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800437AC: beq         $t0, $t1, L_800437C4
    if (ctx->r8 == ctx->r9) {
        // 0x800437B0: nop
    
            goto L_800437C4;
    }
    // 0x800437B0: nop

    // 0x800437B4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x800437B8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800437BC: jr          $ra
    // 0x800437C0: sb          $t2, 0x1F55($at)
    MEM_B(0X1F55, ctx->r1) = ctx->r10;
    return;
    // 0x800437C0: sb          $t2, 0x1F55($at)
    MEM_B(0X1F55, ctx->r1) = ctx->r10;
L_800437C4:
    // 0x800437C4: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x800437C8: lw          $t3, 0x5E04($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5E04);
    // 0x800437CC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800437D0: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x800437D4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800437D8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800437DC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800437E0: lw          $t6, -0x14D4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X14D4);
    // 0x800437E4: nop

    // 0x800437E8: lw          $t7, 0x674C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X674C);
    // 0x800437EC: nop

    // 0x800437F0: lbu         $t8, 0x15($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X15);
    // 0x800437F4: nop

    // 0x800437F8: sb          $t8, 0x1F55($at)
    MEM_B(0X1F55, ctx->r1) = ctx->r24;
L_800437FC:
    // 0x800437FC: jr          $ra
    // 0x80043800: nop

    return;
    // 0x80043800: nop

    // 0x80043804: nop

    // 0x80043808: nop

    // 0x8004380C: nop

;}
RECOMP_FUNC void func_80043810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043810: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80043814: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80043818: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004381C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80043820: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80043824: addiu       $t6, $t6, -0x10D0
    ctx->r14 = ADD32(ctx->r14, -0X10D0);
    // 0x80043828: lw          $s0, 0x24($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X24);
    // 0x8004382C: nop

    // 0x80043830: andi        $t7, $s0, 0x8000
    ctx->r15 = ctx->r16 & 0X8000;
    // 0x80043834: beq         $t7, $zero, L_80043880
    if (ctx->r15 == 0) {
        // 0x80043838: nop
    
            goto L_80043880;
    }
    // 0x80043838: nop

    // 0x8004383C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80043840: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80043844: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x80043848: nop

    // 0x8004384C: bne         $t9, $at, L_80043870
    if (ctx->r25 != ctx->r1) {
        // 0x80043850: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_80043870;
    }
    // 0x80043850: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80043854: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80043858: jal         0x8007E9F8
    // 0x8004385C: nop

    func_8007E9F8(rdram, ctx);
        goto after_0;
    // 0x8004385C: nop

    after_0:
    // 0x80043860: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80043864: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x80043868: b           L_80043898
    // 0x8004386C: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
        goto L_80043898;
    // 0x8004386C: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
L_80043870:
    // 0x80043870: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80043874: addiu       $t2, $zero, 0xE
    ctx->r10 = ADD32(0, 0XE);
    // 0x80043878: b           L_80043898
    // 0x8004387C: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
        goto L_80043898;
    // 0x8004387C: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
L_80043880:
    // 0x80043880: andi        $t4, $s0, 0x4000
    ctx->r12 = ctx->r16 & 0X4000;
    // 0x80043884: beq         $t4, $zero, L_80043898
    if (ctx->r12 == 0) {
        // 0x80043888: nop
    
            goto L_80043898;
    }
    // 0x80043888: nop

    // 0x8004388C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80043890: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x80043894: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
L_80043898:
    // 0x80043898: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004389C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800438A0: jr          $ra
    // 0x800438A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800438A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800438A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800438A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800438AC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800438B0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800438B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800438B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800438BC: lb          $t7, 0x1($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X1);
    // 0x800438C0: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800438C4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800438C8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800438CC: lw          $t9, -0xB28($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XB28);
    // 0x800438D0: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800438D4: sw          $t9, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r25;
    // 0x800438D8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800438DC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800438E0: lb          $t1, 0x1($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X1);
    // 0x800438E4: nop

    // 0x800438E8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800438EC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800438F0: lw          $t3, -0x8F4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X8F4);
    // 0x800438F4: nop

    // 0x800438F8: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x800438FC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80043900: sb          $zero, 0x1F70($at)
    MEM_B(0X1F70, ctx->r1) = 0;
    // 0x80043904: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x80043908: nop

    // 0x8004390C: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x80043910: nop

    // 0x80043914: beq         $t7, $zero, L_80043C6C
    if (ctx->r15 == 0) {
        // 0x80043918: nop
    
            goto L_80043C6C;
    }
    // 0x80043918: nop

L_8004391C:
    // 0x8004391C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80043920: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80043924: lbu         $t6, 0x1F70($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1F70);
    // 0x80043928: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x8004392C: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80043930: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80043934: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x80043938: jal         0x80076EC0
    // 0x8004393C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80076EC0(rdram, ctx);
        goto after_0;
    // 0x8004393C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80043940: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80043944: nop

    // 0x80043948: lb          $a0, 0x1($t3)
    ctx->r4 = MEM_B(ctx->r11, 0X1);
    // 0x8004394C: jal         0x80046218
    // 0x80043950: nop

    func_80046218(rdram, ctx);
        goto after_1;
    // 0x80043950: nop

    after_1:
    // 0x80043954: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80043958: bne         $at, $zero, L_80043A50
    if (ctx->r1 != 0) {
        // 0x8004395C: nop
    
            goto L_80043A50;
    }
    // 0x8004395C: nop

    // 0x80043960: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80043964: lbu         $t0, 0x1F70($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X1F70);
    // 0x80043968: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8004396C: beq         $t0, $at, L_8004399C
    if (ctx->r8 == ctx->r1) {
        // 0x80043970: nop
    
            goto L_8004399C;
    }
    // 0x80043970: nop

    // 0x80043974: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80043978: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x8004397C: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x80043980: nop

    // 0x80043984: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80043988: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x8004398C: nop

    // 0x80043990: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x80043994: jal         0x800A4620
    // 0x80043998: nop

    func_800A4620(rdram, ctx);
        goto after_2;
    // 0x80043998: nop

    after_2:
L_8004399C:
    // 0x8004399C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x800439A0: lbu         $t9, 0x1F70($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X1F70);
    // 0x800439A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800439A8: bne         $t9, $at, L_800439E0
    if (ctx->r25 != ctx->r1) {
        // 0x800439AC: nop
    
            goto L_800439E0;
    }
    // 0x800439AC: nop

    // 0x800439B0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800439B4: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x800439B8: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x800439BC: nop

    // 0x800439C0: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800439C4: lw          $t0, 0x0($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X0);
    // 0x800439C8: nop

    // 0x800439CC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x800439D0: jal         0x800A4654
    // 0x800439D4: nop

    func_800A4654(rdram, ctx);
        goto after_3;
    // 0x800439D4: nop

    after_3:
    // 0x800439D8: b           L_80043A0C
    // 0x800439DC: nop

        goto L_80043A0C;
    // 0x800439DC: nop

L_800439E0:
    // 0x800439E0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800439E4: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x800439E8: lbu         $t8, 0x1F70($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1F70);
    // 0x800439EC: lw          $t7, 0x8($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X8);
    // 0x800439F0: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x800439F4: addu        $t1, $t7, $t6
    ctx->r9 = ADD32(ctx->r15, ctx->r14);
    // 0x800439F8: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x800439FC: nop

    // 0x80043A00: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80043A04: jal         0x800A4644
    // 0x80043A08: nop

    func_800A4644(rdram, ctx);
        goto after_4;
    // 0x80043A08: nop

    after_4:
L_80043A0C:
    // 0x80043A0C: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80043A10: lbu         $t2, 0x1F70($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X1F70);
    // 0x80043A14: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80043A18: bne         $t2, $at, L_80043B3C
    if (ctx->r10 != ctx->r1) {
        // 0x80043A1C: nop
    
            goto L_80043B3C;
    }
    // 0x80043A1C: nop

    // 0x80043A20: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80043A24: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x80043A28: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x80043A2C: nop

    // 0x80043A30: addu        $t5, $t4, $t0
    ctx->r13 = ADD32(ctx->r12, ctx->r8);
    // 0x80043A34: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x80043A38: nop

    // 0x80043A3C: lbu         $t7, 0x20($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X20);
    // 0x80043A40: nop

    // 0x80043A44: ori         $t6, $t7, 0x4
    ctx->r14 = ctx->r15 | 0X4;
    // 0x80043A48: b           L_80043B3C
    // 0x80043A4C: sb          $t6, 0x20($t8)
    MEM_B(0X20, ctx->r24) = ctx->r14;
        goto L_80043B3C;
    // 0x80043A4C: sb          $t6, 0x20($t8)
    MEM_B(0X20, ctx->r24) = ctx->r14;
L_80043A50:
    // 0x80043A50: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80043A54: lbu         $t1, 0x1F70($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X1F70);
    // 0x80043A58: nop

    // 0x80043A5C: beq         $t1, $zero, L_80043A8C
    if (ctx->r9 == 0) {
        // 0x80043A60: nop
    
            goto L_80043A8C;
    }
    // 0x80043A60: nop

    // 0x80043A64: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80043A68: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80043A6C: lw          $t3, 0x8($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X8);
    // 0x80043A70: nop

    // 0x80043A74: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x80043A78: lw          $t0, 0x0($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X0);
    // 0x80043A7C: nop

    // 0x80043A80: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x80043A84: jal         0x800A4620
    // 0x80043A88: nop

    func_800A4620(rdram, ctx);
        goto after_5;
    // 0x80043A88: nop

    after_5:
L_80043A8C:
    // 0x80043A8C: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80043A90: lbu         $t5, 0x1F70($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X1F70);
    // 0x80043A94: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80043A98: bne         $t5, $at, L_80043ACC
    if (ctx->r13 != ctx->r1) {
        // 0x80043A9C: nop
    
            goto L_80043ACC;
    }
    // 0x80043A9C: nop

    // 0x80043AA0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80043AA4: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80043AA8: lw          $t6, 0x8($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X8);
    // 0x80043AAC: nop

    // 0x80043AB0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80043AB4: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x80043AB8: nop

    // 0x80043ABC: lbu         $t3, 0x20($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X20);
    // 0x80043AC0: nop

    // 0x80043AC4: ori         $t2, $t3, 0x4
    ctx->r10 = ctx->r11 | 0X4;
    // 0x80043AC8: sb          $t2, 0x20($t1)
    MEM_B(0X20, ctx->r9) = ctx->r10;
L_80043ACC:
    // 0x80043ACC: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80043AD0: lbu         $t4, 0x1F70($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X1F70);
    // 0x80043AD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80043AD8: bne         $t4, $at, L_80043B10
    if (ctx->r12 != ctx->r1) {
        // 0x80043ADC: nop
    
            goto L_80043B10;
    }
    // 0x80043ADC: nop

    // 0x80043AE0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80043AE4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80043AE8: lw          $t7, 0x8($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X8);
    // 0x80043AEC: nop

    // 0x80043AF0: addu        $t6, $t7, $t5
    ctx->r14 = ADD32(ctx->r15, ctx->r13);
    // 0x80043AF4: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x80043AF8: nop

    // 0x80043AFC: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80043B00: jal         0x800A4654
    // 0x80043B04: nop

    func_800A4654(rdram, ctx);
        goto after_6;
    // 0x80043B04: nop

    after_6:
    // 0x80043B08: b           L_80043B3C
    // 0x80043B0C: nop

        goto L_80043B3C;
    // 0x80043B0C: nop

L_80043B10:
    // 0x80043B10: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80043B14: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80043B18: lbu         $t2, 0x1F70($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X1F70);
    // 0x80043B1C: lw          $t3, 0x8($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X8);
    // 0x80043B20: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80043B24: addu        $t0, $t3, $t1
    ctx->r8 = ADD32(ctx->r11, ctx->r9);
    // 0x80043B28: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x80043B2C: nop

    // 0x80043B30: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x80043B34: jal         0x800A4644
    // 0x80043B38: nop

    func_800A4644(rdram, ctx);
        goto after_7;
    // 0x80043B38: nop

    after_7:
L_80043B3C:
    // 0x80043B3C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80043B40: nop

    // 0x80043B44: lb          $a0, 0x1($t7)
    ctx->r4 = MEM_B(ctx->r15, 0X1);
    // 0x80043B48: jal         0x80046218
    // 0x80043B4C: nop

    func_80046218(rdram, ctx);
        goto after_8;
    // 0x80043B4C: nop

    after_8:
    // 0x80043B50: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80043B54: bne         $at, $zero, L_80043B74
    if (ctx->r1 != 0) {
        // 0x80043B58: nop
    
            goto L_80043B74;
    }
    // 0x80043B58: nop

    // 0x80043B5C: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80043B60: lbu         $t5, 0x1F70($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X1F70);
    // 0x80043B64: nop

    // 0x80043B68: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x80043B6C: beq         $at, $zero, L_80043BAC
    if (ctx->r1 == 0) {
        // 0x80043B70: nop
    
            goto L_80043BAC;
    }
    // 0x80043B70: nop

L_80043B74:
    // 0x80043B74: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80043B78: nop

    // 0x80043B7C: lb          $a0, 0x1($t6)
    ctx->r4 = MEM_B(ctx->r14, 0X1);
    // 0x80043B80: jal         0x80046218
    // 0x80043B84: nop

    func_80046218(rdram, ctx);
        goto after_9;
    // 0x80043B84: nop

    after_9:
    // 0x80043B88: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80043B8C: beq         $at, $zero, L_80043C0C
    if (ctx->r1 == 0) {
        // 0x80043B90: nop
    
            goto L_80043C0C;
    }
    // 0x80043B90: nop

    // 0x80043B94: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80043B98: lbu         $t8, 0x1F70($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1F70);
    // 0x80043B9C: nop

    // 0x80043BA0: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x80043BA4: bne         $at, $zero, L_80043C0C
    if (ctx->r1 != 0) {
        // 0x80043BA8: nop
    
            goto L_80043C0C;
    }
    // 0x80043BA8: nop

L_80043BAC:
    // 0x80043BAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80043BB0: jal         0x800A35EC
    // 0x80043BB4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800A35EC(rdram, ctx);
        goto after_10;
    // 0x80043BB4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x80043BB8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80043BBC: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80043BC0: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x80043BC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80043BC8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80043BCC: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x80043BD0: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80043BD4: lbu         $t3, 0x1F70($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X1F70);
    // 0x80043BD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80043BDC: lw          $t2, 0x8($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X8);
    // 0x80043BE0: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x80043BE4: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80043BE8: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x80043BEC: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80043BF0: addu        $t0, $t2, $t1
    ctx->r8 = ADD32(ctx->r10, ctx->r9);
    // 0x80043BF4: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x80043BF8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80043BFC: lwc1        $f4, 0x14($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X14);
    // 0x80043C00: nop

    // 0x80043C04: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80043C08: swc1        $f10, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->f10.u32l;
L_80043C0C:
    // 0x80043C0C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80043C10: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80043C14: lbu         $t8, 0x1F70($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1F70);
    // 0x80043C18: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x80043C1C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80043C20: addu        $t3, $t6, $t9
    ctx->r11 = ADD32(ctx->r14, ctx->r25);
    // 0x80043C24: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x80043C28: jal         0x800773B8
    // 0x80043C2C: nop

    func_800773B8(rdram, ctx);
        goto after_11;
    // 0x80043C2C: nop

    after_11:
    // 0x80043C30: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80043C34: lbu         $t2, 0x1F70($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X1F70);
    // 0x80043C38: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80043C3C: addiu       $t1, $t2, 0x1
    ctx->r9 = ADD32(ctx->r10, 0X1);
    // 0x80043C40: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80043C44: sb          $t1, 0x1F70($at)
    MEM_B(0X1F70, ctx->r1) = ctx->r9;
    // 0x80043C48: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80043C4C: lbu         $t4, 0x1F70($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X1F70);
    // 0x80043C50: lw          $t7, 0x8($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X8);
    // 0x80043C54: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80043C58: addu        $t8, $t7, $t5
    ctx->r24 = ADD32(ctx->r15, ctx->r13);
    // 0x80043C5C: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x80043C60: nop

    // 0x80043C64: bne         $t6, $zero, L_8004391C
    if (ctx->r14 != 0) {
        // 0x80043C68: nop
    
            goto L_8004391C;
    }
    // 0x80043C68: nop

L_80043C6C:
    // 0x80043C6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80043C70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80043C74: jr          $ra
    // 0x80043C78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80043C78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80043C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043C7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80043C80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80043C84: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80043C88: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80043C8C: jal         0x8004A34C
    // 0x80043C90: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x80043C90: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80043C94: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80043C98: nop

    // 0x80043C9C: lb          $a0, 0x1($t6)
    ctx->r4 = MEM_B(ctx->r14, 0X1);
    // 0x80043CA0: jal         0x80046218
    // 0x80043CA4: nop

    func_80046218(rdram, ctx);
        goto after_1;
    // 0x80043CA4: nop

    after_1:
    // 0x80043CA8: sll         $s1, $v0, 24
    ctx->r17 = S32(ctx->r2 << 24);
    // 0x80043CAC: sra         $t7, $s1, 24
    ctx->r15 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80043CB0: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x80043CB4: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x80043CB8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80043CBC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80043CC0: lw          $t9, -0xA64($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XA64);
    // 0x80043CC4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80043CC8: nop

    // 0x80043CCC: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
    // 0x80043CD0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80043CD4: nop

    // 0x80043CD8: lb          $a0, 0x1($t1)
    ctx->r4 = MEM_B(ctx->r9, 0X1);
    // 0x80043CDC: jal         0x80046218
    // 0x80043CE0: nop

    func_80046218(rdram, ctx);
        goto after_2;
    // 0x80043CE0: nop

    after_2:
    // 0x80043CE4: sll         $s1, $v0, 24
    ctx->r17 = S32(ctx->r2 << 24);
    // 0x80043CE8: sra         $t2, $s1, 24
    ctx->r10 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80043CEC: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x80043CF0: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x80043CF4: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x80043CF8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80043CFC: lw          $t4, -0x830($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X830);
    // 0x80043D00: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80043D04: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80043D08: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80043D0C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80043D10: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80043D14: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x80043D18: nop

    // 0x80043D1C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80043D20: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80043D24: nop

    // 0x80043D28: beq         $t0, $zero, L_80043E98
    if (ctx->r8 == 0) {
        // 0x80043D2C: nop
    
            goto L_80043E98;
    }
    // 0x80043D2C: nop

L_80043D30:
    // 0x80043D30: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80043D34: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x80043D38: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x80043D3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80043D40: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80043D44: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x80043D48: jal         0x80076EC0
    // 0x80043D4C: nop

    func_80076EC0(rdram, ctx);
        goto after_3;
    // 0x80043D4C: nop

    after_3:
    // 0x80043D50: beq         $s0, $zero, L_80043D80
    if (ctx->r16 == 0) {
        // 0x80043D54: nop
    
            goto L_80043D80;
    }
    // 0x80043D54: nop

    // 0x80043D58: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80043D5C: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80043D60: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x80043D64: nop

    // 0x80043D68: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80043D6C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80043D70: nop

    // 0x80043D74: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80043D78: jal         0x800A4620
    // 0x80043D7C: nop

    func_800A4620(rdram, ctx);
        goto after_4;
    // 0x80043D7C: nop

    after_4:
L_80043D80:
    // 0x80043D80: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80043D84: bne         $s0, $at, L_80043DBC
    if (ctx->r16 != ctx->r1) {
        // 0x80043D88: nop
    
            goto L_80043DBC;
    }
    // 0x80043D88: nop

    // 0x80043D8C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80043D90: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x80043D94: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x80043D98: nop

    // 0x80043D9C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80043DA0: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80043DA4: nop

    // 0x80043DA8: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x80043DAC: jal         0x800A4654
    // 0x80043DB0: nop

    func_800A4654(rdram, ctx);
        goto after_5;
    // 0x80043DB0: nop

    after_5:
    // 0x80043DB4: b           L_80043DE4
    // 0x80043DB8: nop

        goto L_80043DE4;
    // 0x80043DB8: nop

L_80043DBC:
    // 0x80043DBC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80043DC0: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80043DC4: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x80043DC8: nop

    // 0x80043DCC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80043DD0: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80043DD4: nop

    // 0x80043DD8: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80043DDC: jal         0x800A4644
    // 0x80043DE0: nop

    func_800A4644(rdram, ctx);
        goto after_6;
    // 0x80043DE0: nop

    after_6:
L_80043DE4:
    // 0x80043DE4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80043DE8: bne         $s0, $at, L_80043E4C
    if (ctx->r16 != ctx->r1) {
        // 0x80043DEC: nop
    
            goto L_80043E4C;
    }
    // 0x80043DEC: nop

    // 0x80043DF0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80043DF4: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x80043DF8: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x80043DFC: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80043E00: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80043E04: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80043E08: addu        $t8, $t1, $t7
    ctx->r24 = ADD32(ctx->r9, ctx->r15);
    // 0x80043E0C: lbu         $t5, 0x20($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X20);
    // 0x80043E10: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80043E14: ori         $t6, $t5, 0x4
    ctx->r14 = ctx->r13 | 0X4;
    // 0x80043E18: sb          $t6, 0x20($t9)
    MEM_B(0X20, ctx->r25) = ctx->r14;
    // 0x80043E1C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80043E20: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x80043E24: lw          $t2, 0x8($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X8);
    // 0x80043E28: nop

    // 0x80043E2C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80043E30: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80043E34: nop

    // 0x80043E38: lw          $t1, 0x0($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X0);
    // 0x80043E3C: nop

    // 0x80043E40: lw          $t7, 0x8($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X8);
    // 0x80043E44: nop

    // 0x80043E48: sw          $zero, 0x30($t7)
    MEM_W(0X30, ctx->r15) = 0;
L_80043E4C:
    // 0x80043E4C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80043E50: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x80043E54: lw          $t6, 0x8($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X8);
    // 0x80043E58: nop

    // 0x80043E5C: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x80043E60: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x80043E64: jal         0x800773B8
    // 0x80043E68: nop

    func_800773B8(rdram, ctx);
        goto after_7;
    // 0x80043E68: nop

    after_7:
    // 0x80043E6C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80043E70: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80043E74: andi        $t2, $s0, 0xFF
    ctx->r10 = ctx->r16 & 0XFF;
    // 0x80043E78: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x80043E7C: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80043E80: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x80043E84: addu        $t1, $t4, $t5
    ctx->r9 = ADD32(ctx->r12, ctx->r13);
    // 0x80043E88: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x80043E8C: nop

    // 0x80043E90: bne         $t7, $zero, L_80043D30
    if (ctx->r15 != 0) {
        // 0x80043E94: nop
    
            goto L_80043D30;
    }
    // 0x80043E94: nop

L_80043E98:
    // 0x80043E98: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80043E9C: nop

    // 0x80043EA0: lb          $a0, 0x1($t8)
    ctx->r4 = MEM_B(ctx->r24, 0X1);
    // 0x80043EA4: jal         0x80046218
    // 0x80043EA8: nop

    func_80046218(rdram, ctx);
        goto after_8;
    // 0x80043EA8: nop

    after_8:
    // 0x80043EAC: sll         $s1, $v0, 24
    ctx->r17 = S32(ctx->r2 << 24);
    // 0x80043EB0: sra         $t6, $s1, 24
    ctx->r14 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80043EB4: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x80043EB8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80043EBC: jal         0x800476F0
    // 0x80043EC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800476F0(rdram, ctx);
        goto after_9;
    // 0x80043EC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80043EC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80043EC8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80043ECC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80043ED0: jr          $ra
    // 0x80043ED4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80043ED4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80043ED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043ED8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80043EDC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80043EE0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80043EE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80043EE8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80043EEC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80043EF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80043EF4: lb          $a0, 0x1($t6)
    ctx->r4 = MEM_B(ctx->r14, 0X1);
    // 0x80043EF8: jal         0x80046218
    // 0x80043EFC: nop

    func_80046218(rdram, ctx);
        goto after_0;
    // 0x80043EFC: nop

    after_0:
    // 0x80043F00: sll         $s1, $v0, 24
    ctx->r17 = S32(ctx->r2 << 24);
    // 0x80043F04: sra         $t7, $s1, 24
    ctx->r15 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80043F08: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x80043F0C: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x80043F10: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80043F14: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80043F18: lw          $t9, -0xA48($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XA48);
    // 0x80043F1C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80043F20: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x80043F24: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80043F28: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
    // 0x80043F2C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80043F30: lw          $t2, -0x814($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X814);
    // 0x80043F34: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80043F38: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80043F3C: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x80043F40: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80043F44: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x80043F48: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x80043F4C: nop

    // 0x80043F50: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80043F54: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80043F58: nop

    // 0x80043F5C: beq         $t8, $zero, L_800440D8
    if (ctx->r24 == 0) {
        // 0x80043F60: nop
    
            goto L_800440D8;
    }
    // 0x80043F60: nop

L_80043F64:
    // 0x80043F64: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80043F68: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x80043F6C: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x80043F70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80043F74: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80043F78: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x80043F7C: jal         0x80076EC0
    // 0x80043F80: nop

    func_80076EC0(rdram, ctx);
        goto after_1;
    // 0x80043F80: nop

    after_1:
    // 0x80043F84: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80043F88: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x80043F8C: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x80043F90: nop

    // 0x80043F94: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80043F98: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80043F9C: nop

    // 0x80043FA0: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80043FA4: jal         0x800A4654
    // 0x80043FA8: nop

    func_800A4654(rdram, ctx);
        goto after_2;
    // 0x80043FA8: nop

    after_2:
    // 0x80043FAC: bne         $s1, $zero, L_80043FF0
    if (ctx->r17 != 0) {
        // 0x80043FB0: nop
    
            goto L_80043FF0;
    }
    // 0x80043FB0: nop

    // 0x80043FB4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80043FB8: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x80043FBC: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x80043FC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80043FC4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80043FC8: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x80043FCC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80043FD0: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80043FD4: addiu       $a0, $zero, 0x574
    ctx->r4 = ADD32(0, 0X574);
    // 0x80043FD8: lw          $t4, 0x1D0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1D0);
    // 0x80043FDC: jal         0x800A6A74
    // 0x80043FE0: swc1        $f4, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f4.u32l;
    func_800A6A74(rdram, ctx);
        goto after_3;
    // 0x80043FE0: swc1        $f4, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f4.u32l;
    after_3:
    // 0x80043FE4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80043FE8: b           L_80044040
    // 0x80043FEC: sw          $v0, 0x1F68($at)
    MEM_W(0X1F68, ctx->r1) = ctx->r2;
        goto L_80044040;
    // 0x80043FEC: sw          $v0, 0x1F68($at)
    MEM_W(0X1F68, ctx->r1) = ctx->r2;
L_80043FF0:
    // 0x80043FF0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80043FF4: bne         $s1, $at, L_80044038
    if (ctx->r17 != ctx->r1) {
        // 0x80043FF8: nop
    
            goto L_80044038;
    }
    // 0x80043FF8: nop

    // 0x80043FFC: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80044000: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80044004: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x80044008: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8004400C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80044010: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80044014: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80044018: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8004401C: addiu       $a0, $zero, 0x578
    ctx->r4 = ADD32(0, 0X578);
    // 0x80044020: lw          $t1, 0x1D0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1D0);
    // 0x80044024: jal         0x800A6A74
    // 0x80044028: swc1        $f6, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f6.u32l;
    func_800A6A74(rdram, ctx);
        goto after_4;
    // 0x80044028: swc1        $f6, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f6.u32l;
    after_4:
    // 0x8004402C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80044030: b           L_80044040
    // 0x80044034: sw          $v0, 0x1F68($at)
    MEM_W(0X1F68, ctx->r1) = ctx->r2;
        goto L_80044040;
    // 0x80044034: sw          $v0, 0x1F68($at)
    MEM_W(0X1F68, ctx->r1) = ctx->r2;
L_80044038:
    // 0x80044038: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004403C: sw          $zero, 0x1F68($at)
    MEM_W(0X1F68, ctx->r1) = 0;
L_80044040:
    // 0x80044040: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80044044: lw          $t2, 0x1F68($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1F68);
    // 0x80044048: nop

    // 0x8004404C: beq         $t2, $zero, L_800440AC
    if (ctx->r10 == 0) {
        // 0x80044050: nop
    
            goto L_800440AC;
    }
    // 0x80044050: nop

    // 0x80044054: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80044058: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x8004405C: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x80044060: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x80044064: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80044068: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8004406C: nop

    // 0x80044070: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80044074: jal         0x800A678C
    // 0x80044078: nop

    func_800A678C(rdram, ctx);
        goto after_5;
    // 0x80044078: nop

    after_5:
    // 0x8004407C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80044080: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x80044084: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x80044088: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8004408C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80044090: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x80044094: nop

    // 0x80044098: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8004409C: nop

    // 0x800440A0: lw          $t5, 0x1D0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X1D0);
    // 0x800440A4: nop

    // 0x800440A8: swc1        $f8, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f8.u32l;
L_800440AC:
    // 0x800440AC: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800440B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800440B4: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x800440B8: lw          $t2, 0x8($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X8);
    // 0x800440BC: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x800440C0: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x800440C4: addu        $t9, $t2, $t8
    ctx->r25 = ADD32(ctx->r10, ctx->r24);
    // 0x800440C8: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x800440CC: nop

    // 0x800440D0: bne         $t0, $zero, L_80043F64
    if (ctx->r8 != 0) {
        // 0x800440D4: nop
    
            goto L_80043F64;
    }
    // 0x800440D4: nop

L_800440D8:
    // 0x800440D8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800440DC: nop

    // 0x800440E0: lb          $a0, 0x1($t1)
    ctx->r4 = MEM_B(ctx->r9, 0X1);
    // 0x800440E4: jal         0x80046218
    // 0x800440E8: nop

    func_80046218(rdram, ctx);
        goto after_6;
    // 0x800440E8: nop

    after_6:
    // 0x800440EC: sll         $s2, $v0, 24
    ctx->r18 = S32(ctx->r2 << 24);
    // 0x800440F0: sra         $t3, $s2, 24
    ctx->r11 = S32(SIGNED(ctx->r18) >> 24);
    // 0x800440F4: or          $s2, $t3, $zero
    ctx->r18 = ctx->r11 | 0;
    // 0x800440F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800440FC: jal         0x800476F0
    // 0x80044100: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800476F0(rdram, ctx);
        goto after_7;
    // 0x80044100: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x80044104: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80044108: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004410C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80044110: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80044114: jr          $ra
    // 0x80044118: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80044118: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8004411C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004411C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80044120: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80044124: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80044128: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004412C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80044130: lb          $t7, 0x1($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X1);
    // 0x80044134: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80044138: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8004413C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80044140: lw          $t9, -0xAF0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XAF0);
    // 0x80044144: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80044148: sw          $t9, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r25;
    // 0x8004414C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80044150: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80044154: lb          $t1, 0x1($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X1);
    // 0x80044158: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x8004415C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80044160: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80044164: lw          $t3, -0x8BC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X8BC);
    // 0x80044168: nop

    // 0x8004416C: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x80044170: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80044174: nop

    // 0x80044178: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x8004417C: nop

    // 0x80044180: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80044184: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80044188: nop

    // 0x8004418C: beq         $t9, $zero, L_80044208
    if (ctx->r25 == 0) {
        // 0x80044190: nop
    
            goto L_80044208;
    }
    // 0x80044190: nop

L_80044194:
    // 0x80044194: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80044198: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x8004419C: lw          $t1, 0x8($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X8);
    // 0x800441A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800441A4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800441A8: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x800441AC: jal         0x80076EC0
    // 0x800441B0: nop

    func_80076EC0(rdram, ctx);
        goto after_0;
    // 0x800441B0: nop

    after_0:
    // 0x800441B4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800441B8: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x800441BC: lw          $t4, 0x8($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X8);
    // 0x800441C0: nop

    // 0x800441C4: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x800441C8: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x800441CC: nop

    // 0x800441D0: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x800441D4: jal         0x800A4654
    // 0x800441D8: nop

    func_800A4654(rdram, ctx);
        goto after_1;
    // 0x800441D8: nop

    after_1:
    // 0x800441DC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800441E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800441E4: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x800441E8: lw          $t1, 0x8($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X8);
    // 0x800441EC: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x800441F0: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x800441F4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800441F8: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x800441FC: nop

    // 0x80044200: bne         $t0, $zero, L_80044194
    if (ctx->r8 != 0) {
        // 0x80044204: nop
    
            goto L_80044194;
    }
    // 0x80044204: nop

L_80044208:
    // 0x80044208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004420C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80044210: jr          $ra
    // 0x80044214: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80044214: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80044218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044218: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004421C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80044220: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80044224: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80044228: beq         $t6, $zero, L_800442E8
    if (ctx->r14 == 0) {
        // 0x8004422C: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800442E8;
    }
    // 0x8004422C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80044230: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80044234: nop

    // 0x80044238: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8004423C: nop

    // 0x80044240: beq         $t8, $zero, L_800442E8
    if (ctx->r24 == 0) {
        // 0x80044244: nop
    
            goto L_800442E8;
    }
    // 0x80044244: nop

    // 0x80044248: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004424C: lw          $t9, 0x1F68($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1F68);
    // 0x80044250: nop

    // 0x80044254: beq         $t9, $zero, L_8004426C
    if (ctx->r25 == 0) {
        // 0x80044258: nop
    
            goto L_8004426C;
    }
    // 0x80044258: nop

    // 0x8004425C: jal         0x800A6AA8
    // 0x80044260: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_800A6AA8(rdram, ctx);
        goto after_0;
    // 0x80044260: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_0:
    // 0x80044264: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80044268: sw          $zero, 0x1F68($at)
    MEM_W(0X1F68, ctx->r1) = 0;
L_8004426C:
    // 0x8004426C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80044270: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80044274: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x80044278: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x8004427C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80044280: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80044284: nop

    // 0x80044288: beq         $t4, $zero, L_800442DC
    if (ctx->r12 == 0) {
        // 0x8004428C: nop
    
            goto L_800442DC;
    }
    // 0x8004428C: nop

L_80044290:
    // 0x80044290: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80044294: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80044298: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x8004429C: nop

    // 0x800442A0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800442A4: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x800442A8: jal         0x80077028
    // 0x800442AC: nop

    func_80077028(rdram, ctx);
        goto after_1;
    // 0x800442AC: nop

    after_1:
    // 0x800442B0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800442B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800442B8: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x800442BC: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x800442C0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x800442C4: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x800442C8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800442CC: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x800442D0: nop

    // 0x800442D4: bne         $t4, $zero, L_80044290
    if (ctx->r12 != 0) {
        // 0x800442D8: nop
    
            goto L_80044290;
    }
    // 0x800442D8: nop

L_800442DC:
    // 0x800442DC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800442E0: jal         0x8004A34C
    // 0x800442E4: sw          $zero, 0x8($t5)
    MEM_W(0X8, ctx->r13) = 0;
    func_8004A34C(rdram, ctx);
        goto after_2;
    // 0x800442E4: sw          $zero, 0x8($t5)
    MEM_W(0X8, ctx->r13) = 0;
    after_2:
L_800442E8:
    // 0x800442E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800442EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800442F0: jr          $ra
    // 0x800442F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800442F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800442F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800442F8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800442FC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80044300: lb          $t7, -0x7D0($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X7D0);
    // 0x80044304: lb          $t6, -0x7CC($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X7CC);
    // 0x80044308: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004430C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80044310: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80044314: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80044318: beq         $t6, $t7, L_8004434C
    if (ctx->r14 == ctx->r15) {
        // 0x8004431C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8004434C;
    }
    // 0x8004431C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80044320: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80044324: nop

    // 0x80044328: sb          $t7, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r15;
    // 0x8004432C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80044330: jal         0x800438A8
    // 0x80044334: nop

    func_800438A8(rdram, ctx);
        goto after_0;
    // 0x80044334: nop

    after_0:
    // 0x80044338: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8004433C: lb          $t9, -0x7D0($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X7D0);
    // 0x80044340: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044344: b           L_800443EC
    // 0x80044348: sb          $t9, -0x7CC($at)
    MEM_B(-0X7CC, ctx->r1) = ctx->r25;
        goto L_800443EC;
    // 0x80044348: sb          $t9, -0x7CC($at)
    MEM_B(-0X7CC, ctx->r1) = ctx->r25;
L_8004434C:
    // 0x8004434C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80044350: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80044354: lb          $t1, -0x7C8($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X7C8);
    // 0x80044358: lb          $t0, -0x7C4($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X7C4);
    // 0x8004435C: nop

    // 0x80044360: beq         $t0, $t1, L_800443B0
    if (ctx->r8 == ctx->r9) {
        // 0x80044364: nop
    
            goto L_800443B0;
    }
    // 0x80044364: nop

    // 0x80044368: jal         0x8004624C
    // 0x8004436C: addiu       $a0, $t1, -0x1
    ctx->r4 = ADD32(ctx->r9, -0X1);
    func_8004624C(rdram, ctx);
        goto after_1;
    // 0x8004436C: addiu       $a0, $t1, -0x1
    ctx->r4 = ADD32(ctx->r9, -0X1);
    after_1:
    // 0x80044370: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80044374: nop

    // 0x80044378: sb          $v0, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r2;
    // 0x8004437C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80044380: jal         0x80043ED8
    // 0x80044384: nop

    func_80043ED8(rdram, ctx);
        goto after_2;
    // 0x80044384: nop

    after_2:
    // 0x80044388: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8004438C: lb          $t3, -0x7C8($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X7C8);
    // 0x80044390: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044394: sb          $t3, -0x7C4($at)
    MEM_B(-0X7C4, ctx->r1) = ctx->r11;
    // 0x80044398: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8004439C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800443A0: jal         0x8007ECC8
    // 0x800443A4: nop

    func_8007ECC8(rdram, ctx);
        goto after_3;
    // 0x800443A4: nop

    after_3:
    // 0x800443A8: b           L_800443EC
    // 0x800443AC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_800443EC;
    // 0x800443AC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_800443B0:
    // 0x800443B0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800443B4: nop

    // 0x800443B8: lb          $a0, 0x1($t4)
    ctx->r4 = MEM_B(ctx->r12, 0X1);
    // 0x800443BC: jal         0x8004619C
    // 0x800443C0: nop

    func_8004619C(rdram, ctx);
        goto after_4;
    // 0x800443C0: nop

    after_4:
    // 0x800443C4: beq         $v0, $zero, L_800443E0
    if (ctx->r2 == 0) {
        // 0x800443C8: nop
    
            goto L_800443E0;
    }
    // 0x800443C8: nop

    // 0x800443CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800443D0: jal         0x80043ED8
    // 0x800443D4: nop

    func_80043ED8(rdram, ctx);
        goto after_5;
    // 0x800443D4: nop

    after_5:
    // 0x800443D8: b           L_800443EC
    // 0x800443DC: nop

        goto L_800443EC;
    // 0x800443DC: nop

L_800443E0:
    // 0x800443E0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800443E4: jal         0x800438A8
    // 0x800443E8: nop

    func_800438A8(rdram, ctx);
        goto after_6;
    // 0x800443E8: nop

    after_6:
L_800443EC:
    // 0x800443EC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800443F0: beq         $s0, $zero, L_80044408
    if (ctx->r16 == 0) {
        // 0x800443F4: sh          $zero, 0x2($t5)
        MEM_H(0X2, ctx->r13) = 0;
            goto L_80044408;
    }
    // 0x800443F4: sh          $zero, 0x2($t5)
    MEM_H(0X2, ctx->r13) = 0;
    // 0x800443F8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800443FC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80044400: b           L_80044414
    // 0x80044404: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
        goto L_80044414;
    // 0x80044404: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
L_80044408:
    // 0x80044408: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8004440C: nop

    // 0x80044410: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
L_80044414:
    // 0x80044414: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80044418: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004441C: jr          $ra
    // 0x80044420: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80044420: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80044424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80044428: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004442C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80044430: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80044434: jal         0x80043C7C
    // 0x80044438: nop

    func_80043C7C(rdram, ctx);
        goto after_0;
    // 0x80044438: nop

    after_0:
    // 0x8004443C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80044440: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80044444: sh          $zero, 0x2($t6)
    MEM_H(0X2, ctx->r14) = 0;
    // 0x80044448: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8004444C: nop

    // 0x80044450: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x80044454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80044458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004445C: jr          $ra
    // 0x80044460: nop

    return;
    // 0x80044460: nop

;}
RECOMP_FUNC void func_80044464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044464: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80044468: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004446C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80044470: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80044474: jal         0x8004411C
    // 0x80044478: nop

    func_8004411C(rdram, ctx);
        goto after_0;
    // 0x80044478: nop

    after_0:
    // 0x8004447C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80044480: nop

    // 0x80044484: sh          $zero, 0x2($t6)
    MEM_H(0X2, ctx->r14) = 0;
    // 0x80044488: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8004448C: nop

    // 0x80044490: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x80044494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80044498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004449C: jr          $ra
    // 0x800444A0: nop

    return;
    // 0x800444A0: nop

;}
RECOMP_FUNC void func_800444A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800444A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800444A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800444AC: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x800444B0: lw          $s0, 0x5E10($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5E10);
    // 0x800444B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800444B8: beq         $s0, $zero, L_800445CC
    if (ctx->r16 == 0) {
        // 0x800444BC: nop
    
            goto L_800445CC;
    }
    // 0x800444BC: nop

    // 0x800444C0: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x800444C4: nop

    // 0x800444C8: sltiu       $at, $t6, 0x10
    ctx->r1 = ctx->r14 < 0X10 ? 1 : 0;
    // 0x800444CC: beq         $at, $zero, L_800445CC
    if (ctx->r1 == 0) {
        // 0x800444D0: nop
    
            goto L_800445CC;
    }
    // 0x800444D0: nop

    // 0x800444D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800444D8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800444DC: addu        $at, $at, $t6
    gpr jr_addend_800444E8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800444E0: lw          $t6, -0x4AA8($at)
    ctx->r14 = ADD32(ctx->r1, -0X4AA8);
    // 0x800444E4: nop

    // 0x800444E8: jr          $t6
    // 0x800444EC: nop

    switch (jr_addend_800444E8 >> 2) {
        case 0: goto L_800444F0; break;
        case 1: goto L_80044500; break;
        case 2: goto L_800445CC; break;
        case 3: goto L_800445CC; break;
        case 4: goto L_800445CC; break;
        case 5: goto L_8004454C; break;
        case 6: goto L_800445CC; break;
        case 7: goto L_800445CC; break;
        case 8: goto L_800445CC; break;
        case 9: goto L_80044534; break;
        case 10: goto L_800444F0; break;
        case 11: goto L_800445CC; break;
        case 12: goto L_800445CC; break;
        case 13: goto L_80044564; break;
        case 14: goto L_800445C4; break;
        case 15: goto L_800445C4; break;
        default: switch_error(__func__, 0x800444E8, 0x800DB558);
    }
    // 0x800444EC: nop

L_800444F0:
    // 0x800444F0: jal         0x80043810
    // 0x800444F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80043810(rdram, ctx);
        goto after_0;
    // 0x800444F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800444F8: b           L_800445CC
    // 0x800444FC: nop

        goto L_800445CC;
    // 0x800444FC: nop

L_80044500:
    // 0x80044500: lb          $t7, 0x1($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X1);
    // 0x80044504: nop

    // 0x80044508: slti        $at, $t7, 0x31
    ctx->r1 = SIGNED(ctx->r15) < 0X31 ? 1 : 0;
    // 0x8004450C: beq         $at, $zero, L_80044524
    if (ctx->r1 == 0) {
        // 0x80044510: nop
    
            goto L_80044524;
    }
    // 0x80044510: nop

    // 0x80044514: jal         0x800442F8
    // 0x80044518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800442F8(rdram, ctx);
        goto after_1;
    // 0x80044518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8004451C: b           L_800445CC
    // 0x80044520: nop

        goto L_800445CC;
    // 0x80044520: nop

L_80044524:
    // 0x80044524: jal         0x80044464
    // 0x80044528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80044464(rdram, ctx);
        goto after_2;
    // 0x80044528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8004452C: b           L_800445CC
    // 0x80044530: nop

        goto L_800445CC;
    // 0x80044530: nop

L_80044534:
    // 0x80044534: jal         0x80044218
    // 0x80044538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80044218(rdram, ctx);
        goto after_3;
    // 0x80044538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8004453C: jal         0x800442F8
    // 0x80044540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800442F8(rdram, ctx);
        goto after_4;
    // 0x80044540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80044544: b           L_800445CC
    // 0x80044548: nop

        goto L_800445CC;
    // 0x80044548: nop

L_8004454C:
    // 0x8004454C: jal         0x80044218
    // 0x80044550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80044218(rdram, ctx);
        goto after_5;
    // 0x80044550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80044554: jal         0x80044424
    // 0x80044558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80044424(rdram, ctx);
        goto after_6;
    // 0x80044558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8004455C: b           L_800445CC
    // 0x80044560: nop

        goto L_800445CC;
    // 0x80044560: nop

L_80044564:
    // 0x80044564: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80044568: lbu         $t8, -0x7C0($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X7C0);
    // 0x8004456C: nop

    // 0x80044570: bne         $t8, $zero, L_800445AC
    if (ctx->r24 != 0) {
        // 0x80044574: nop
    
            goto L_800445AC;
    }
    // 0x80044574: nop

    // 0x80044578: lb          $t9, 0x1($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X1);
    // 0x8004457C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80044580: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80044584: sb          $t0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r8;
    // 0x80044588: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004458C: sb          $t1, -0x7C0($at)
    MEM_B(-0X7C0, ctx->r1) = ctx->r9;
    // 0x80044590: jal         0x80044218
    // 0x80044594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80044218(rdram, ctx);
        goto after_7;
    // 0x80044594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80044598: jal         0x80044464
    // 0x8004459C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80044464(rdram, ctx);
        goto after_8;
    // 0x8004459C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x800445A0: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x800445A4: b           L_800445CC
    // 0x800445A8: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_800445CC;
    // 0x800445A8: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_800445AC:
    // 0x800445AC: jal         0x80044218
    // 0x800445B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80044218(rdram, ctx);
        goto after_9;
    // 0x800445B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x800445B4: jal         0x80044464
    // 0x800445B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80044464(rdram, ctx);
        goto after_10;
    // 0x800445B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x800445BC: b           L_800445CC
    // 0x800445C0: nop

        goto L_800445CC;
    // 0x800445C0: nop

L_800445C4:
    // 0x800445C4: jal         0x80045C9C
    // 0x800445C8: nop

    func_80045C9C(rdram, ctx);
        goto after_11;
    // 0x800445C8: nop

    after_11:
L_800445CC:
    // 0x800445CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800445D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800445D4: jr          $ra
    // 0x800445D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800445D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800445DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800445DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800445E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800445E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800445E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800445EC: jal         0x800A4590
    // 0x800445F0: nop

    func_800A4590(rdram, ctx);
        goto after_0;
    // 0x800445F0: nop

    after_0:
    // 0x800445F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800445F8: jal         0x800A45D8
    // 0x800445FC: nop

    func_800A45D8(rdram, ctx);
        goto after_1;
    // 0x800445FC: nop

    after_1:
    // 0x80044600: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80044604: jal         0x800A4620
    // 0x80044608: nop

    func_800A4620(rdram, ctx);
        goto after_2;
    // 0x80044608: nop

    after_2:
    // 0x8004460C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80044610: jal         0x800A4644
    // 0x80044614: nop

    func_800A4644(rdram, ctx);
        goto after_3;
    // 0x80044614: nop

    after_3:
    // 0x80044618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004461C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80044620: jr          $ra
    // 0x80044624: nop

    return;
    // 0x80044624: nop

;}
