#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80052860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052860: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80052864: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80052868: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8005286C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80052870: jal         0x8005282C
    // 0x80052874: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    func_8005282C(rdram, ctx);
        goto after_0;
    // 0x80052874: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x80052878: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8005287C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80052880: addiu       $a1, $a1, -0x3270
    ctx->r5 = ADD32(ctx->r5, -0X3270);
    // 0x80052884: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80052888: jal         0x800B62D4
    // 0x8005288C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    sprintf_recomp(rdram, ctx);
        goto after_1;
    // 0x8005288C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x80052890: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80052894: jal         0x8005BBFC
    // 0x80052898: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_2;
    // 0x80052898: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_2:
    // 0x8005289C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x800528A0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800528A4: lh          $a2, 0x0($t6)
    ctx->r6 = MEM_H(ctx->r14, 0X0);
    // 0x800528A8: lh          $a3, 0x2($t6)
    ctx->r7 = MEM_H(ctx->r14, 0X2);
    // 0x800528AC: addiu       $a1, $a1, 0xA00
    ctx->r5 = ADD32(ctx->r5, 0XA00);
    // 0x800528B0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800528B4: addiu       $t7, $sp, 0x40
    ctx->r15 = ADD32(ctx->r29, 0X40);
    // 0x800528B8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800528BC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800528C0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800528C4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800528C8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800528CC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x800528D0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800528D4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800528D8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800528DC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800528E0: jal         0x80077960
    // 0x800528E4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_80077960(rdram, ctx);
        goto after_3;
    // 0x800528E4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_3:
    // 0x800528E8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800528EC: jal         0x8005BE40
    // 0x800528F0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_4;
    // 0x800528F0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_4:
    // 0x800528F4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800528F8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800528FC: jr          $ra
    // 0x80052900: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80052900: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80052904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052904: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80052908: lw          $t6, -0x1118($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1118);
    // 0x8005290C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80052910: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80052914: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80052918: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8005291C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80052920: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80052924: bgez        $t6, L_8005293C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80052928: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8005293C;
    }
    // 0x80052928: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005292C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80052930: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80052934: nop

    // 0x80052938: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8005293C:
    // 0x8005293C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80052940: nop

    // 0x80052944: lwc1        $f10, 0x8($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80052948: lwc1        $f18, 0x0($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8005294C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80052950: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80052954: add.s       $f20, $f18, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x80052958: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x8005295C: nop

    // 0x80052960: bc1f        L_8005296C
    if (!c1cs) {
        // 0x80052964: nop
    
            goto L_8005296C;
    }
    // 0x80052964: nop

    // 0x80052968: mov.s       $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = ctx->f4.fl;
L_8005296C:
    // 0x8005296C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80052970: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80052974: nop

    // 0x80052978: mul.s       $f12, $f20, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x8005297C: jal         0x800A2EF0
    // 0x80052980: nop

    func_800A2EF0(rdram, ctx);
        goto after_0;
    // 0x80052980: nop

    after_0:
    // 0x80052984: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80052988: lw          $t8, -0x490($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X490);
    // 0x8005298C: nop

    // 0x80052990: sh          $v0, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r2;
    // 0x80052994: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80052998: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8005299C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800529A0: jr          $ra
    // 0x800529A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800529A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800529A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800529A8: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x800529AC: nop

    // 0x800529B0: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x800529B4: jr          $ra
    // 0x800529B8: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
    return;
    // 0x800529B8: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800529BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800529BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800529C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800529C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800529C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800529CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800529D0: jal         0x800527AC
    // 0x800529D4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_800527AC(rdram, ctx);
        goto after_0;
    // 0x800529D4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_0:
    // 0x800529D8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800529DC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800529E0: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x800529E4: nop

    // 0x800529E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800529EC: sw          $t9, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r25;
    // 0x800529F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800529F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800529F8: jr          $ra
    // 0x800529FC: nop

    return;
    // 0x800529FC: nop

;}
RECOMP_FUNC void func_80052A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052A00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80052A04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80052A08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80052A0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80052A10: jal         0x80052860
    // 0x80052A14: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_80052860(rdram, ctx);
        goto after_0;
    // 0x80052A14: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_0:
    // 0x80052A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80052A20: jr          $ra
    // 0x80052A24: nop

    return;
    // 0x80052A24: nop

;}
RECOMP_FUNC void func_80052A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052A28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80052A2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80052A30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80052A34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80052A38: jal         0x80052790
    // 0x80052A3C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_80052790(rdram, ctx);
        goto after_0;
    // 0x80052A3C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_0:
    // 0x80052A40: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80052A44: lwc1        $f4, -0x326C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X326C);
    // 0x80052A48: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80052A4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80052A50: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x80052A54: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80052A58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80052A5C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80052A60: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x80052A64: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80052A68: lwc1        $f8, -0xA0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0XA0);
    // 0x80052A6C: nop

    // 0x80052A70: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x80052A74: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80052A78: jal         0x80052904
    // 0x80052A7C: nop

    func_80052904(rdram, ctx);
        goto after_1;
    // 0x80052A7C: nop

    after_1:
    // 0x80052A80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052A84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80052A88: jr          $ra
    // 0x80052A8C: nop

    return;
    // 0x80052A8C: nop

;}
RECOMP_FUNC void func_80052A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052A90: jr          $ra
    // 0x80052A94: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80052A94: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80052A98: nop

    // 0x80052A9C: nop

;}
RECOMP_FUNC void func_80052AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052AA0: lh          $t7, 0x12($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X12);
    // 0x80052AA4: lh          $t6, 0x10($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X10);
    // 0x80052AA8: multu       $t7, $a1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052AAC: mflo        $t8
    ctx->r24 = lo;
    // 0x80052AB0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80052AB4: sh          $t9, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r25;
    // 0x80052AB8: lh          $t0, 0x10($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X10);
    // 0x80052ABC: nop

    // 0x80052AC0: slti        $at, $t0, 0x500
    ctx->r1 = SIGNED(ctx->r8) < 0X500 ? 1 : 0;
    // 0x80052AC4: beq         $at, $zero, L_80052AD8
    if (ctx->r1 == 0) {
        // 0x80052AC8: nop
    
            goto L_80052AD8;
    }
    // 0x80052AC8: nop

    // 0x80052ACC: addiu       $t1, $zero, 0x500
    ctx->r9 = ADD32(0, 0X500);
    // 0x80052AD0: sh          $t1, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r9;
    // 0x80052AD4: sh          $zero, 0x12($a0)
    MEM_H(0X12, ctx->r4) = 0;
L_80052AD8:
    // 0x80052AD8: lh          $t3, 0xE($a0)
    ctx->r11 = MEM_H(ctx->r4, 0XE);
    // 0x80052ADC: lh          $t6, 0x16($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X16);
    // 0x80052AE0: multu       $t3, $a1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052AE4: lh          $t7, 0x14($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X14);
    // 0x80052AE8: lhu         $t2, 0xC($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0XC);
    // 0x80052AEC: mflo        $t4
    ctx->r12 = lo;
    // 0x80052AF0: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80052AF4: sh          $t5, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r13;
    // 0x80052AF8: multu       $t6, $a1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052AFC: mflo        $t8
    ctx->r24 = lo;
    // 0x80052B00: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80052B04: sh          $t9, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r25;
    // 0x80052B08: lh          $t0, 0x14($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X14);
    // 0x80052B0C: nop

    // 0x80052B10: slti        $at, $t0, 0xFF0
    ctx->r1 = SIGNED(ctx->r8) < 0XFF0 ? 1 : 0;
    // 0x80052B14: bne         $at, $zero, L_80052B28
    if (ctx->r1 != 0) {
        // 0x80052B18: nop
    
            goto L_80052B28;
    }
    // 0x80052B18: nop

    // 0x80052B1C: addiu       $t1, $zero, 0xFF0
    ctx->r9 = ADD32(0, 0XFF0);
    // 0x80052B20: sh          $t1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r9;
    // 0x80052B24: sh          $zero, 0x16($a0)
    MEM_H(0X16, ctx->r4) = 0;
L_80052B28:
    // 0x80052B28: jr          $ra
    // 0x80052B2C: nop

    return;
    // 0x80052B2C: nop

;}
RECOMP_FUNC void func_80052B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052B30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80052B34: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80052B38: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80052B3C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80052B40: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80052B44: lh          $t7, 0x4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X4);
    // 0x80052B48: nop

    // 0x80052B4C: sh          $t7, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r15;
    // 0x80052B50: lhu         $a0, 0xC($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0XC);
    // 0x80052B54: jal         0x80060914
    // 0x80052B58: nop

    func_80060914(rdram, ctx);
        goto after_0;
    // 0x80052B58: nop

    after_0:
    // 0x80052B5C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80052B60: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80052B64: lh          $t0, 0x10($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X10);
    // 0x80052B68: lh          $t9, 0x6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X6);
    // 0x80052B6C: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052B70: mflo        $t1
    ctx->r9 = lo;
    // 0x80052B74: sra         $t2, $t1, 22
    ctx->r10 = S32(SIGNED(ctx->r9) >> 22);
    // 0x80052B78: subu        $t3, $t9, $t2
    ctx->r11 = SUB32(ctx->r25, ctx->r10);
    // 0x80052B7C: jal         0x8005BBFC
    // 0x80052B80: sh          $t3, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r11;
    func_8005BBFC(rdram, ctx);
        goto after_1;
    // 0x80052B80: sh          $t3, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r11;
    after_1:
    // 0x80052B84: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80052B88: lh          $t5, 0x36($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X36);
    // 0x80052B8C: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x80052B90: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80052B94: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80052B98: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80052B9C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80052BA0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80052BA4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80052BA8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80052BAC: lh          $t0, 0x14($t4)
    ctx->r8 = MEM_H(ctx->r12, 0X14);
    // 0x80052BB0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80052BB4: lh          $a3, 0x34($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X34);
    // 0x80052BB8: sra         $t1, $t0, 4
    ctx->r9 = S32(SIGNED(ctx->r8) >> 4);
    // 0x80052BBC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80052BC0: jal         0x80057460
    // 0x80052BC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80057460(rdram, ctx);
        goto after_2;
    // 0x80052BC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80052BC8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80052BCC: jal         0x8005BE40
    // 0x80052BD0: nop

    func_8005BE40(rdram, ctx);
        goto after_3;
    // 0x80052BD0: nop

    after_3:
    // 0x80052BD4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80052BD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80052BDC: jr          $ra
    // 0x80052BE0: nop

    return;
    // 0x80052BE0: nop

;}
RECOMP_FUNC void func_80052BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052BE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80052BE8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80052BEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80052BF0: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80052BF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80052BF8: beq         $s0, $zero, L_80052C1C
    if (ctx->r16 == 0) {
        // 0x80052BFC: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_80052C1C;
    }
    // 0x80052BFC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80052C00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80052C04: beq         $s0, $at, L_80052C30
    if (ctx->r16 == ctx->r1) {
        // 0x80052C08: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80052C30;
    }
    // 0x80052C08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80052C0C: beq         $s0, $at, L_80052C44
    if (ctx->r16 == ctx->r1) {
        // 0x80052C10: nop
    
            goto L_80052C44;
    }
    // 0x80052C10: nop

    // 0x80052C14: b           L_80052C58
    // 0x80052C18: nop

        goto L_80052C58;
    // 0x80052C18: nop

L_80052C1C:
    // 0x80052C1C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80052C20: lw          $t6, -0x80($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X80);
    // 0x80052C24: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80052C28: b           L_80052C70
    // 0x80052C2C: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
        goto L_80052C70;
    // 0x80052C2C: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
L_80052C30:
    // 0x80052C30: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80052C34: lw          $t8, -0x7C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X7C);
    // 0x80052C38: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80052C3C: b           L_80052C70
    // 0x80052C40: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
        goto L_80052C70;
    // 0x80052C40: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_80052C44:
    // 0x80052C44: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80052C48: lw          $t0, -0x78($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X78);
    // 0x80052C4C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80052C50: b           L_80052C70
    // 0x80052C54: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
        goto L_80052C70;
    // 0x80052C54: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
L_80052C58:
    // 0x80052C58: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80052C5C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80052C60: addiu       $a1, $a1, -0x3250
    ctx->r5 = ADD32(ctx->r5, -0X3250);
    // 0x80052C64: addiu       $a0, $a0, -0x3260
    ctx->r4 = ADD32(ctx->r4, -0X3260);
    // 0x80052C68: jal         0x8004A5A0
    // 0x80052C6C: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    func_8004A5A0(rdram, ctx);
        goto after_0;
    // 0x80052C6C: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    after_0:
L_80052C70:
    // 0x80052C70: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80052C74: addiu       $at, $zero, 0x96
    ctx->r1 = ADD32(0, 0X96);
    // 0x80052C78: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x80052C7C: lh          $t3, 0x8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8);
    // 0x80052C80: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x80052C84: nop

    // 0x80052C88: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x80052C8C: subu        $t7, $t3, $t6
    ctx->r15 = SUB32(ctx->r11, ctx->r14);
    // 0x80052C90: sh          $t7, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r15;
    // 0x80052C94: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80052C98: addiu       $t3, $zero, 0x3C00
    ctx->r11 = ADD32(0, 0X3C00);
    // 0x80052C9C: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x80052CA0: lh          $t9, 0xA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA);
    // 0x80052CA4: lhu         $t1, 0x2($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X2);
    // 0x80052CA8: nop

    // 0x80052CAC: sra         $t4, $t1, 1
    ctx->r12 = S32(SIGNED(ctx->r9) >> 1);
    // 0x80052CB0: subu        $t5, $t9, $t4
    ctx->r13 = SUB32(ctx->r25, ctx->r12);
    // 0x80052CB4: sh          $t5, 0x6($t8)
    MEM_H(0X6, ctx->r24) = ctx->r13;
    // 0x80052CB8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80052CBC: addiu       $t4, $zero, 0x333
    ctx->r12 = ADD32(0, 0X333);
    // 0x80052CC0: sh          $t3, 0x10($t6)
    MEM_H(0X10, ctx->r14) = ctx->r11;
    // 0x80052CC4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80052CC8: addiu       $t3, $zero, 0xCC
    ctx->r11 = ADD32(0, 0XCC);
    // 0x80052CCC: lh          $t2, 0x10($t7)
    ctx->r10 = MEM_H(ctx->r15, 0X10);
    // 0x80052CD0: nop

    // 0x80052CD4: negu        $t0, $t2
    ctx->r8 = SUB32(0, ctx->r10);
    // 0x80052CD8: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x80052CDC: mflo        $t1
    ctx->r9 = lo;
    // 0x80052CE0: sh          $t1, 0x12($t7)
    MEM_H(0X12, ctx->r15) = ctx->r9;
    // 0x80052CE4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80052CE8: nop

    // 0x80052CEC: sh          $zero, 0xC($t9)
    MEM_H(0XC, ctx->r25) = 0;
    // 0x80052CF0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80052CF4: nop

    // 0x80052CF8: sh          $t4, 0xE($t5)
    MEM_H(0XE, ctx->r13) = ctx->r12;
    // 0x80052CFC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80052D00: nop

    // 0x80052D04: sh          $zero, 0x14($t8)
    MEM_H(0X14, ctx->r24) = 0;
    // 0x80052D08: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80052D0C: nop

    // 0x80052D10: sh          $t3, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r11;
    // 0x80052D14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80052D18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80052D1C: jr          $ra
    // 0x80052D20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80052D20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80052D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052D24: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80052D28: addiu       $t6, $sp, 0x4
    ctx->r14 = ADD32(ctx->r29, 0X4);
    // 0x80052D2C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80052D30: nop

    // 0x80052D34: swl         $at, 0x8($a0)
    do_swl(rdram, 0X8, ctx->r4, ctx->r1);
    // 0x80052D38: jr          $ra
    // 0x80052D3C: swr         $at, 0xB($a0)
    do_swr(rdram, 0XB, ctx->r4, ctx->r1);
    return;
    // 0x80052D3C: swr         $at, 0xB($a0)
    do_swr(rdram, 0XB, ctx->r4, ctx->r1);
;}
RECOMP_FUNC void func_80052D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052D40: jr          $ra
    // 0x80052D44: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80052D44: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80052D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052D48: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80052D4C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80052D50: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x80052D54: jr          $ra
    // 0x80052D58: sb          $t7, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r15;
    return;
    // 0x80052D58: sb          $t7, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_80052D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052D5C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80052D60: addiu       $t7, $zero, 0xB4
    ctx->r15 = ADD32(0, 0XB4);
    // 0x80052D64: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x80052D68: jr          $ra
    // 0x80052D6C: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    return;
    // 0x80052D6C: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_80052D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052D70: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80052D74: addiu       $t7, $zero, 0x13
    ctx->r15 = ADD32(0, 0X13);
    // 0x80052D78: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80052D7C: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x80052D80: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x80052D84: jr          $ra
    // 0x80052D88: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
    return;
    // 0x80052D88: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_80052D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052D8C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80052D90: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x80052D94: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x80052D98: jr          $ra
    // 0x80052D9C: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    return;
    // 0x80052D9C: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_80052DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052DA0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80052DA4: jr          $ra
    // 0x80052DA8: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    return;
    // 0x80052DA8: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80052DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052DAC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80052DB0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80052DB4: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80052DB8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80052DBC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80052DC0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80052DC4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80052DC8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80052DCC: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80052DD0: nop

    // 0x80052DD4: bltz        $t7, L_80052E44
    if (SIGNED(ctx->r15) < 0) {
        // 0x80052DD8: sw          $t7, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r15;
            goto L_80052E44;
    }
    // 0x80052DD8: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x80052DDC: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80052DE0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80052DE4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80052DE8: lw          $t8, -0x430($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X430);
    // 0x80052DEC: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x80052DF0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80052DF4: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x80052DF8: addu        $s0, $t8, $t0
    ctx->r16 = ADD32(ctx->r24, ctx->r8);
    // 0x80052DFC: blez        $s1, L_80052E44
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80052E00: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80052E44;
    }
    // 0x80052E00: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80052E04:
    // 0x80052E04: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x80052E08: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80052E0C: lbu         $t2, 0x1($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X1);
    // 0x80052E10: nop

    // 0x80052E14: beq         $t2, $at, L_80052E38
    if (ctx->r10 == ctx->r1) {
        // 0x80052E18: nop
    
            goto L_80052E38;
    }
    // 0x80052E18: nop

    // 0x80052E1C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80052E20: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80052E24: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x80052E28: addiu       $a1, $a1, -0x90
    ctx->r5 = ADD32(ctx->r5, -0X90);
    // 0x80052E2C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80052E30: jal         0x80070860
    // 0x80052E34: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_80070860(rdram, ctx);
        goto after_0;
    // 0x80052E34: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_0:
L_80052E38:
    // 0x80052E38: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x80052E3C: bgtz        $s1, L_80052E04
    if (SIGNED(ctx->r17) > 0) {
        // 0x80052E40: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80052E04;
    }
    // 0x80052E40: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80052E44:
    // 0x80052E44: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80052E48: nop

    // 0x80052E4C: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x80052E50: nop

    // 0x80052E54: addiu       $t6, $t5, 0x5
    ctx->r14 = ADD32(ctx->r13, 0X5);
    // 0x80052E58: bltz        $t6, L_80052EDC
    if (SIGNED(ctx->r14) < 0) {
        // 0x80052E5C: sw          $t6, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r14;
            goto L_80052EDC;
    }
    // 0x80052E5C: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x80052E60: slti        $at, $t6, 0x14
    ctx->r1 = SIGNED(ctx->r14) < 0X14 ? 1 : 0;
    // 0x80052E64: beq         $at, $zero, L_80052EDC
    if (ctx->r1 == 0) {
        // 0x80052E68: nop
    
            goto L_80052EDC;
    }
    // 0x80052E68: nop

    // 0x80052E6C: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80052E70: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80052E74: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80052E78: lw          $t7, -0x430($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X430);
    // 0x80052E7C: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x80052E80: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80052E84: addiu       $s3, $zero, 0xA
    ctx->r19 = ADD32(0, 0XA);
    // 0x80052E88: addu        $s2, $t7, $t8
    ctx->r18 = ADD32(ctx->r15, ctx->r24);
    // 0x80052E8C: blez        $s3, L_80052EDC
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80052E90: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80052EDC;
    }
    // 0x80052E90: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_80052E94:
    // 0x80052E94: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x80052E98: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80052E9C: lbu         $t1, 0x1($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1);
    // 0x80052EA0: nop

    // 0x80052EA4: beq         $t1, $at, L_80052ED0
    if (ctx->r9 == ctx->r1) {
        // 0x80052EA8: nop
    
            goto L_80052ED0;
    }
    // 0x80052EA8: nop

    // 0x80052EAC: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x80052EB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80052EB4: lw          $a0, 0xC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XC);
    // 0x80052EB8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80052EBC: jal         0x800709EC
    // 0x80052EC0: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_800709EC(rdram, ctx);
        goto after_1;
    // 0x80052EC0: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_1:
    // 0x80052EC4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80052EC8: jal         0x8006D5BC
    // 0x80052ECC: nop

    func_8006D5BC(rdram, ctx);
        goto after_2;
    // 0x80052ECC: nop

    after_2:
L_80052ED0:
    // 0x80052ED0: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x80052ED4: bgtz        $s3, L_80052E94
    if (SIGNED(ctx->r19) > 0) {
        // 0x80052ED8: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80052E94;
    }
    // 0x80052ED8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_80052EDC:
    // 0x80052EDC: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80052EE0: nop

    // 0x80052EE4: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x80052EE8: nop

    // 0x80052EEC: slti        $at, $t4, -0x4
    ctx->r1 = SIGNED(ctx->r12) < -0X4 ? 1 : 0;
    // 0x80052EF0: beq         $at, $zero, L_80052F08
    if (ctx->r1 == 0) {
        // 0x80052EF4: nop
    
            goto L_80052F08;
    }
    // 0x80052EF4: nop

    // 0x80052EF8: jal         0x80052D5C
    // 0x80052EFC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_80052D5C(rdram, ctx);
        goto after_3;
    // 0x80052EFC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_3:
    // 0x80052F00: b           L_80052F20
    // 0x80052F04: nop

        goto L_80052F20;
    // 0x80052F04: nop

L_80052F08:
    // 0x80052F08: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80052F0C: nop

    // 0x80052F10: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x80052F14: nop

    // 0x80052F18: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x80052F1C: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
L_80052F20:
    // 0x80052F20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80052F24: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80052F28: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80052F2C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80052F30: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80052F34: jr          $ra
    // 0x80052F38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80052F38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80052F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052F3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80052F40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80052F44: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80052F48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80052F4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80052F50: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80052F54: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x80052F58: nop

    // 0x80052F5C: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x80052F60: sw          $t9, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r25;
    // 0x80052F64: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80052F68: nop

    // 0x80052F6C: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x80052F70: nop

    // 0x80052F74: bgtz        $t1, L_80052FB8
    if (SIGNED(ctx->r9) > 0) {
        // 0x80052F78: nop
    
            goto L_80052FB8;
    }
    // 0x80052F78: nop

L_80052F7C:
    // 0x80052F7C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80052F80: nop

    // 0x80052F84: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x80052F88: nop

    // 0x80052F8C: addiu       $t4, $t3, 0x3
    ctx->r12 = ADD32(ctx->r11, 0X3);
    // 0x80052F90: sw          $t4, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r12;
    // 0x80052F94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80052F98: jal         0x80052DAC
    // 0x80052F9C: nop

    func_80052DAC(rdram, ctx);
        goto after_0;
    // 0x80052F9C: nop

    after_0:
    // 0x80052FA0: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80052FA4: nop

    // 0x80052FA8: lw          $t7, 0x8($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X8);
    // 0x80052FAC: nop

    // 0x80052FB0: blez        $t7, L_80052F7C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80052FB4: nop
    
            goto L_80052F7C;
    }
    // 0x80052FB4: nop

L_80052FB8:
    // 0x80052FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80052FC0: jr          $ra
    // 0x80052FC4: nop

    return;
    // 0x80052FC4: nop

;}
RECOMP_FUNC void func_80052FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052FC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80052FCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80052FD0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80052FD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80052FD8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80052FDC: lbu         $t7, 0x38($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X38);
    // 0x80052FE0: nop

    // 0x80052FE4: bne         $t7, $zero, L_80053030
    if (ctx->r15 != 0) {
        // 0x80052FE8: nop
    
            goto L_80053030;
    }
    // 0x80052FE8: nop

    // 0x80052FEC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80052FF0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80052FF4: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x80052FF8: nop

    // 0x80052FFC: sltu        $at, $t9, $t0
    ctx->r1 = ctx->r25 < ctx->r8 ? 1 : 0;
    // 0x80053000: beq         $at, $zero, L_80053018
    if (ctx->r1 == 0) {
        // 0x80053004: nop
    
            goto L_80053018;
    }
    // 0x80053004: nop

    // 0x80053008: jal         0x80052D48
    // 0x8005300C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80052D48(rdram, ctx);
        goto after_0;
    // 0x8005300C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_0:
    // 0x80053010: b           L_80053030
    // 0x80053014: nop

        goto L_80053030;
    // 0x80053014: nop

L_80053018:
    // 0x80053018: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8005301C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80053020: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x80053024: nop

    // 0x80053028: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x8005302C: sw          $t4, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r12;
L_80053030:
    // 0x80053030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80053034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80053038: jr          $ra
    // 0x8005303C: nop

    return;
    // 0x8005303C: nop

;}
RECOMP_FUNC void func_80053040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053040: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80053044: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80053048: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8005304C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80053050: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80053054: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80053058: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8005305C: lbu         $t7, 0x18($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X18);
    // 0x80053060: nop

    // 0x80053064: bne         $t7, $zero, L_80053074
    if (ctx->r15 != 0) {
        // 0x80053068: nop
    
            goto L_80053074;
    }
    // 0x80053068: nop

    // 0x8005306C: b           L_8005326C
    // 0x80053070: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8005326C;
    // 0x80053070: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80053074:
    // 0x80053074: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80053078: nop

    // 0x8005307C: sb          $zero, 0x1($t8)
    MEM_B(0X1, ctx->r24) = 0;
    // 0x80053080: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80053084: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80053088: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8005308C: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x80053090: bgez        $t9, L_800530A8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80053094: cvt.s.w     $f4, $f4
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800530A8;
    }
    // 0x80053094: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80053098: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8005309C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800530A0: nop

    // 0x800530A4: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_800530A8:
    // 0x800530A8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800530AC: jal         0x80060770
    // 0x800530B0: nop

    func_80060770(rdram, ctx);
        goto after_0;
    // 0x800530B0: nop

    after_0:
    // 0x800530B4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800530B8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800530BC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x800530C0: ctc1        $s0, $FpcCsr
    set_cop1_cs(ctx->r16);
    // 0x800530C4: lwc1        $f8, 0xC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800530C8: nop

    // 0x800530CC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800530D0: cfc1        $s0, $FpcCsr
    ctx->r16 = get_cop1_cs();
    // 0x800530D4: nop

    // 0x800530D8: andi        $at, $s0, 0x4
    ctx->r1 = ctx->r16 & 0X4;
    // 0x800530DC: andi        $s0, $s0, 0x78
    ctx->r16 = ctx->r16 & 0X78;
    // 0x800530E0: beq         $s0, $zero, L_80053130
    if (ctx->r16 == 0) {
        // 0x800530E4: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_80053130;
    }
    // 0x800530E4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800530E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800530EC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x800530F0: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800530F4: ctc1        $s0, $FpcCsr
    set_cop1_cs(ctx->r16);
    // 0x800530F8: nop

    // 0x800530FC: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80053100: cfc1        $s0, $FpcCsr
    ctx->r16 = get_cop1_cs();
    // 0x80053104: nop

    // 0x80053108: andi        $at, $s0, 0x4
    ctx->r1 = ctx->r16 & 0X4;
    // 0x8005310C: andi        $s0, $s0, 0x78
    ctx->r16 = ctx->r16 & 0X78;
    // 0x80053110: bne         $s0, $zero, L_80053128
    if (ctx->r16 != 0) {
        // 0x80053114: nop
    
            goto L_80053128;
    }
    // 0x80053114: nop

    // 0x80053118: mfc1        $s0, $f10
    ctx->r16 = (int32_t)ctx->f10.u32l;
    // 0x8005311C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80053120: b           L_80053140
    // 0x80053124: or          $s0, $s0, $at
    ctx->r16 = ctx->r16 | ctx->r1;
        goto L_80053140;
    // 0x80053124: or          $s0, $s0, $at
    ctx->r16 = ctx->r16 | ctx->r1;
L_80053128:
    // 0x80053128: b           L_80053140
    // 0x8005312C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
        goto L_80053140;
    // 0x8005312C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_80053130:
    // 0x80053130: mfc1        $s0, $f10
    ctx->r16 = (int32_t)ctx->f10.u32l;
    // 0x80053134: nop

    // 0x80053138: bltz        $s0, L_80053128
    if (SIGNED(ctx->r16) < 0) {
        // 0x8005313C: nop
    
            goto L_80053128;
    }
    // 0x8005313C: nop

L_80053140:
    // 0x80053140: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80053144: lw          $t3, -0x490($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X490);
    // 0x80053148: andi        $t2, $s0, 0xFF
    ctx->r10 = ctx->r16 & 0XFF;
    // 0x8005314C: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80053150: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80053154: sb          $s0, 0x14($t3)
    MEM_B(0X14, ctx->r11) = ctx->r16;
    // 0x80053158: lw          $t4, -0x480($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X480);
    // 0x8005315C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80053160: sb          $s0, 0x291A($t4)
    MEM_B(0X291A, ctx->r12) = ctx->r16;
    // 0x80053164: lw          $t5, -0xDD0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0XDD0);
    // 0x80053168: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005316C: sb          $s0, 0x5210($t5)
    MEM_B(0X5210, ctx->r13) = ctx->r16;
    // 0x80053170: lw          $t6, -0xDD0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XDD0);
    // 0x80053174: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80053178: sb          $s0, 0x5729($t6)
    MEM_B(0X5729, ctx->r14) = ctx->r16;
    // 0x8005317C: lw          $t7, -0xDD0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0XDD0);
    // 0x80053180: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80053184: sb          $s0, 0x5C58($t7)
    MEM_B(0X5C58, ctx->r15) = ctx->r16;
    // 0x80053188: lw          $t8, -0xDD0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0XDD0);
    // 0x8005318C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80053190: sb          $s0, 0x6171($t8)
    MEM_B(0X6171, ctx->r24) = ctx->r16;
    // 0x80053194: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80053198: lw          $a0, -0x400($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X400);
    // 0x8005319C: jal         0x8006F064
    // 0x800531A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8006F064(rdram, ctx);
        goto after_1;
    // 0x800531A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x800531A4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800531A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800531AC: lbu         $s1, 0x0($t9)
    ctx->r17 = MEM_BU(ctx->r25, 0X0);
    // 0x800531B0: nop

    // 0x800531B4: beq         $s1, $at, L_800531DC
    if (ctx->r17 == ctx->r1) {
        // 0x800531B8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800531DC;
    }
    // 0x800531B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800531BC: beq         $s1, $at, L_800531F4
    if (ctx->r17 == ctx->r1) {
        // 0x800531C0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800531F4;
    }
    // 0x800531C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800531C4: beq         $s1, $at, L_8005320C
    if (ctx->r17 == ctx->r1) {
        // 0x800531C8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8005320C;
    }
    // 0x800531C8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800531CC: beq         $s1, $at, L_80053224
    if (ctx->r17 == ctx->r1) {
        // 0x800531D0: nop
    
            goto L_80053224;
    }
    // 0x800531D0: nop

    // 0x800531D4: b           L_80053234
    // 0x800531D8: nop

        goto L_80053234;
    // 0x800531D8: nop

L_800531DC:
    // 0x800531DC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800531E0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800531E4: jal         0x80052DA0
    // 0x800531E8: nop

    func_80052DA0(rdram, ctx);
        goto after_2;
    // 0x800531E8: nop

    after_2:
    // 0x800531EC: b           L_8005324C
    // 0x800531F0: nop

        goto L_8005324C;
    // 0x800531F0: nop

L_800531F4:
    // 0x800531F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800531F8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800531FC: jal         0x80052F3C
    // 0x80053200: nop

    func_80052F3C(rdram, ctx);
        goto after_3;
    // 0x80053200: nop

    after_3:
    // 0x80053204: b           L_8005324C
    // 0x80053208: nop

        goto L_8005324C;
    // 0x80053208: nop

L_8005320C:
    // 0x8005320C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80053210: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80053214: jal         0x80052FC8
    // 0x80053218: nop

    func_80052FC8(rdram, ctx);
        goto after_4;
    // 0x80053218: nop

    after_4:
    // 0x8005321C: b           L_8005324C
    // 0x80053220: nop

        goto L_8005324C;
    // 0x80053220: nop

L_80053224:
    // 0x80053224: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80053228: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8005322C: b           L_8005324C
    // 0x80053230: sb          $t0, 0x1($t1)
    MEM_B(0X1, ctx->r9) = ctx->r8;
        goto L_8005324C;
    // 0x80053230: sb          $t0, 0x1($t1)
    MEM_B(0X1, ctx->r9) = ctx->r8;
L_80053234:
    // 0x80053234: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80053238: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8005323C: addiu       $a1, $a1, -0x3230
    ctx->r5 = ADD32(ctx->r5, -0X3230);
    // 0x80053240: addiu       $a0, $a0, -0x3240
    ctx->r4 = ADD32(ctx->r4, -0X3240);
    // 0x80053244: jal         0x8004A5A0
    // 0x80053248: addiu       $a2, $zero, 0x17F
    ctx->r6 = ADD32(0, 0X17F);
    func_8004A5A0(rdram, ctx);
        goto after_5;
    // 0x80053248: addiu       $a2, $zero, 0x17F
    ctx->r6 = ADD32(0, 0X17F);
    after_5:
L_8005324C:
    // 0x8005324C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80053250: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80053254: jal         0x80052AA0
    // 0x80053258: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_80052AA0(rdram, ctx);
        goto after_6;
    // 0x80053258: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_6:
    // 0x8005325C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80053260: nop

    // 0x80053264: lbu         $v0, 0x1($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X1);
    // 0x80053268: nop

L_8005326C:
    // 0x8005326C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80053270: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80053274: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80053278: jr          $ra
    // 0x8005327C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8005327C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80053280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80053284: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80053288: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8005328C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80053290: lbu         $t7, 0x18($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X18);
    // 0x80053294: nop

    // 0x80053298: beq         $t7, $zero, L_800532CC
    if (ctx->r15 == 0) {
        // 0x8005329C: nop
    
            goto L_800532CC;
    }
    // 0x8005329C: nop

    // 0x800532A0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800532A4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800532A8: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x800532AC: nop

    // 0x800532B0: beq         $t9, $at, L_800532CC
    if (ctx->r25 == ctx->r1) {
        // 0x800532B4: nop
    
            goto L_800532CC;
    }
    // 0x800532B4: nop

    // 0x800532B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800532BC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800532C0: addiu       $a1, $a1, 0x20C0
    ctx->r5 = ADD32(ctx->r5, 0X20C0);
    // 0x800532C4: jal         0x80052B30
    // 0x800532C8: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_80052B30(rdram, ctx);
        goto after_0;
    // 0x800532C8: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_0:
L_800532CC:
    // 0x800532CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800532D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800532D4: jr          $ra
    // 0x800532D8: nop

    return;
    // 0x800532D8: nop

;}
RECOMP_FUNC void func_800532DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800532DC: jr          $ra
    // 0x800532E0: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    return;
    // 0x800532E0: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
;}
RECOMP_FUNC void func_800532E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800532E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800532E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800532EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800532F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800532F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800532F8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800532FC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80053300: jal         0x80052BE4
    // 0x80053304: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_80052BE4(rdram, ctx);
        goto after_0;
    // 0x80053304: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_0:
    // 0x80053308: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8005330C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80053310: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80053314: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80053318: swc1        $f4, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f4.u32l;
    // 0x8005331C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80053320: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80053324: swc1        $f6, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f6.u32l;
    // 0x80053328: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8005332C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80053330: lwc1        $f10, 0xC($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0XC);
    // 0x80053334: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80053338: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8005333C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80053340: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80053344: swc1        $f4, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f4.u32l;
    // 0x80053348: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8005334C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80053350: nop

    // 0x80053354: sw          $t9, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r25;
    // 0x80053358: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8005335C: nop

    // 0x80053360: sb          $t1, 0x18($t2)
    MEM_B(0X18, ctx->r10) = ctx->r9;
    // 0x80053364: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80053368: lbu         $t3, 0x23($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X23);
    // 0x8005336C: nop

    // 0x80053370: sb          $t3, 0x38($t4)
    MEM_B(0X38, ctx->r12) = ctx->r11;
    // 0x80053374: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80053378: jal         0x80052D70
    // 0x8005337C: nop

    func_80052D70(rdram, ctx);
        goto after_1;
    // 0x8005337C: nop

    after_1:
    // 0x80053380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80053384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80053388: jr          $ra
    // 0x8005338C: nop

    return;
    // 0x8005338C: nop

;}
RECOMP_FUNC void func_80053390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053390: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80053394: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80053398: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005339C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800533A0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800533A4: jal         0x8006D344
    // 0x800533A8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_8006D344(rdram, ctx);
        goto after_0;
    // 0x800533A8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800533AC: lwl         $t6, 0x1C($sp)
    ctx->r14 = do_lwl(rdram, ctx->r14, ctx->r29, 0X1C);
    // 0x800533B0: lwr         $t6, 0x1F($sp)
    ctx->r14 = do_lwr(rdram, ctx->r14, ctx->r29, 0X1F);
    // 0x800533B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800533B8: swl         $t6, 0x4($sp)
    do_swl(rdram, 0X4, ctx->r29, ctx->r14);
    // 0x800533BC: swr         $t6, 0x7($sp)
    do_swr(rdram, 0X7, ctx->r29, ctx->r14);
    // 0x800533C0: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x800533C4: jal         0x80052D24
    // 0x800533C8: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_80052D24(rdram, ctx);
        goto after_1;
    // 0x800533C8: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_1:
    // 0x800533CC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800533D0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x800533D4: sb          $zero, 0x18($t7)
    MEM_B(0X18, ctx->r15) = 0;
    // 0x800533D8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800533DC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800533E0: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
    // 0x800533E4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800533E8: nop

    // 0x800533EC: sw          $t0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->r8;
    // 0x800533F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800533F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800533F8: jr          $ra
    // 0x800533FC: nop

    return;
    // 0x800533FC: nop

;}
RECOMP_FUNC void func_80053400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80053404: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80053408: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8005340C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80053410: jal         0x80052D40
    // 0x80053414: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_80052D40(rdram, ctx);
        goto after_0;
    // 0x80053414: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_0:
    // 0x80053418: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8005341C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x80053420: sb          $zero, 0x18($t6)
    MEM_B(0X18, ctx->r14) = 0;
    // 0x80053424: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80053428: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x8005342C: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x80053430: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80053434: nop

    // 0x80053438: sw          $t9, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r25;
    // 0x8005343C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80053440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80053444: jr          $ra
    // 0x80053448: nop

    return;
    // 0x80053448: nop

;}
RECOMP_FUNC void func_8005344C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005344C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80053450: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80053454: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x80053458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005345C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80053460: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80053464: addiu       $a0, $a0, -0x78
    ctx->r4 = ADD32(ctx->r4, -0X78);
    // 0x80053468: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x8005346C: jal         0x8007FBB0
    // 0x80053470: sb          $t6, -0x84($at)
    MEM_B(-0X84, ctx->r1) = ctx->r14;
    func_8007FBB0(rdram, ctx);
        goto after_0;
    // 0x80053470: sb          $t6, -0x84($at)
    MEM_B(-0X84, ctx->r1) = ctx->r14;
    after_0:
    // 0x80053474: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80053478: addiu       $a0, $a0, -0x80
    ctx->r4 = ADD32(ctx->r4, -0X80);
    // 0x8005347C: jal         0x8007FBB0
    // 0x80053480: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    func_8007FBB0(rdram, ctx);
        goto after_1;
    // 0x80053480: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    after_1:
    // 0x80053484: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80053488: addiu       $a0, $a0, -0x7C
    ctx->r4 = ADD32(ctx->r4, -0X7C);
    // 0x8005348C: jal         0x8007FBB0
    // 0x80053490: addiu       $a1, $zero, 0x97
    ctx->r5 = ADD32(0, 0X97);
    func_8007FBB0(rdram, ctx);
        goto after_2;
    // 0x80053490: addiu       $a1, $zero, 0x97
    ctx->r5 = ADD32(0, 0X97);
    after_2:
    // 0x80053494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80053498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005349C: jr          $ra
    // 0x800534A0: nop

    return;
    // 0x800534A0: nop

;}
RECOMP_FUNC void func_800534A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800534A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800534A8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800534AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800534B0: lw          $a0, -0x78($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X78);
    // 0x800534B4: jal         0x8007E328
    // 0x800534B8: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x800534B8: nop

    after_0:
    // 0x800534BC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800534C0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800534C4: lw          $a0, -0x80($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X80);
    // 0x800534C8: jal         0x8007E328
    // 0x800534CC: sw          $zero, -0x78($at)
    MEM_W(-0X78, ctx->r1) = 0;
    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x800534CC: sw          $zero, -0x78($at)
    MEM_W(-0X78, ctx->r1) = 0;
    after_1:
    // 0x800534D0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800534D4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800534D8: lw          $a0, -0x7C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7C);
    // 0x800534DC: jal         0x8007E328
    // 0x800534E0: sw          $zero, -0x80($at)
    MEM_W(-0X80, ctx->r1) = 0;
    func_8007E328(rdram, ctx);
        goto after_2;
    // 0x800534E0: sw          $zero, -0x80($at)
    MEM_W(-0X80, ctx->r1) = 0;
    after_2:
    // 0x800534E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800534E8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800534EC: sw          $zero, -0x7C($at)
    MEM_W(-0X7C, ctx->r1) = 0;
    // 0x800534F0: jr          $ra
    // 0x800534F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800534F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800534F8: nop

    // 0x800534FC: nop

;}
RECOMP_FUNC void func_80053500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80053504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80053508: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8005350C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80053510: jal         0x8006093C
    // 0x80053514: sh          $t6, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r14;
    func_8006093C(rdram, ctx);
        goto after_0;
    // 0x80053514: sh          $t6, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r14;
    after_0:
    // 0x80053518: jal         0x80075DF4
    // 0x8005351C: nop

    func_80075DF4(rdram, ctx);
        goto after_1;
    // 0x8005351C: nop

    after_1:
    // 0x80053520: jal         0x80054F5C
    // 0x80053524: nop

    func_80054F5C(rdram, ctx);
        goto after_2;
    // 0x80053524: nop

    after_2:
    // 0x80053528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005352C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80053530: jr          $ra
    // 0x80053534: nop

    return;
    // 0x80053534: nop

;}
RECOMP_FUNC void func_80053538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053538: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005353C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80053540: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
L_80053544:
    // 0x80053544: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x80053548: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8005354C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80053550: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80053554: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80053558: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8005355C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80053560: addiu       $t8, $t8, -0x10D0
    ctx->r24 = ADD32(ctx->r24, -0X10D0);
    // 0x80053564: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80053568: jal         0x800B7450
    // 0x8005356C: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    _bzero(rdram, ctx);
        goto after_0;
    // 0x8005356C: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    after_0:
    // 0x80053570: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x80053574: nop

    // 0x80053578: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8005357C: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x80053580: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80053584: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x80053588: bne         $at, $zero, L_80053544
    if (ctx->r1 != 0) {
        // 0x8005358C: sh          $t0, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r8;
            goto L_80053544;
    }
    // 0x8005358C: sh          $t0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r8;
    // 0x80053590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80053594: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80053598: jr          $ra
    // 0x8005359C: nop

    return;
    // 0x8005359C: nop

;}
RECOMP_FUNC void func_800535A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800535A0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800535A4: lw          $t6, -0xDF0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XDF0);
    // 0x800535A8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x800535AC: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800535B0: jr          $ra
    // 0x800535B4: sh          $a0, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r4;
    return;
    // 0x800535B4: sh          $a0, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r4;
;}
RECOMP_FUNC void func_800535B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800535B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800535BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800535C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800535C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800535C8: jal         0x80060CA0
    // 0x800535CC: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_80060CA0(rdram, ctx);
        goto after_0;
    // 0x800535CC: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_0:
    // 0x800535D0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800535D4: nop

    // 0x800535D8: sw          $zero, 0x24($t6)
    MEM_W(0X24, ctx->r14) = 0;
    // 0x800535DC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800535E0: nop

    // 0x800535E4: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x800535E8: nop

    // 0x800535EC: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x800535F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800535F4: jal         0x800A3460
    // 0x800535F8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800A3460(rdram, ctx);
        goto after_1;
    // 0x800535F8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x800535FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80053600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80053604: jr          $ra
    // 0x80053608: nop

    return;
    // 0x80053608: nop

;}
RECOMP_FUNC void func_8005360C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005360C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80053610: lw          $t7, -0xDF0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0XDF0);
    // 0x80053614: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80053618: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005361C: addiu       $t6, $t6, -0x10D0
    ctx->r14 = ADD32(ctx->r14, -0X10D0);
    // 0x80053620: beq         $t6, $t7, L_80053660
    if (ctx->r14 == ctx->r15) {
        // 0x80053624: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80053660;
    }
    // 0x80053624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80053628: addiu       $t8, $t6, 0xB8
    ctx->r24 = ADD32(ctx->r14, 0XB8);
    // 0x8005362C: beq         $t8, $t7, L_80053660
    if (ctx->r24 == ctx->r15) {
        // 0x80053630: nop
    
            goto L_80053660;
    }
    // 0x80053630: nop

    // 0x80053634: addiu       $t9, $t6, 0x170
    ctx->r25 = ADD32(ctx->r14, 0X170);
    // 0x80053638: beq         $t9, $t7, L_80053660
    if (ctx->r25 == ctx->r15) {
        // 0x8005363C: nop
    
            goto L_80053660;
    }
    // 0x8005363C: nop

    // 0x80053640: addiu       $t0, $t6, 0x228
    ctx->r8 = ADD32(ctx->r14, 0X228);
    // 0x80053644: beq         $t0, $t7, L_80053660
    if (ctx->r8 == ctx->r15) {
        // 0x80053648: nop
    
            goto L_80053660;
    }
    // 0x80053648: nop

    // 0x8005364C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80053650: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80053654: addiu       $a1, $a1, -0x31F0
    ctx->r5 = ADD32(ctx->r5, -0X31F0);
    // 0x80053658: jal         0x80083560
    // 0x8005365C: addiu       $a0, $a0, -0x3220
    ctx->r4 = ADD32(ctx->r4, -0X3220);
    Fault_Assert(rdram, ctx);
        goto after_0;
    // 0x8005365C: addiu       $a0, $a0, -0x3220
    ctx->r4 = ADD32(ctx->r4, -0X3220);
    after_0:
L_80053660:
    // 0x80053660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80053664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80053668: jr          $ra
    // 0x8005366C: nop

    return;
    // 0x8005366C: nop

;}
RECOMP_FUNC void func_80053670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053670: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80053674: lw          $t6, -0xDE0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XDE0);
    // 0x80053678: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8005367C: jr          $ra
    // 0x80053680: sb          $a0, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r4;
    return;
    // 0x80053680: sb          $a0, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r4;
;}
RECOMP_FUNC void func_80053684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80053688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005368C: jal         0x800688E0
    // 0x80053690: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800688E0(rdram, ctx);
        goto after_0;
    // 0x80053690: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80053694: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80053698: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8005369C: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x800536A0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800536A4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800536A8: sb          $t8, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r24;
    // 0x800536AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800536B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800536B4: jr          $ra
    // 0x800536B8: nop

    return;
    // 0x800536B8: nop

;}
RECOMP_FUNC void func_800536BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800536BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800536C0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800536C4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800536C8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800536CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800536D0: lw          $a1, 0x9F4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9F4);
    // 0x800536D4: lw          $a0, -0x490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X490);
    // 0x800536D8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800536DC: jal         0x800677B8
    // 0x800536E0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_800677B8(rdram, ctx);
        goto after_0;
    // 0x800536E0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x800536E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800536E8: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x800536EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800536F0: beq         $s1, $at, L_80053708
    if (ctx->r17 == ctx->r1) {
        // 0x800536F4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80053708;
    }
    // 0x800536F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800536F8: beq         $s1, $at, L_80053740
    if (ctx->r17 == ctx->r1) {
        // 0x800536FC: nop
    
            goto L_80053740;
    }
    // 0x800536FC: nop

    // 0x80053700: b           L_8005374C
    // 0x80053704: nop

        goto L_8005374C;
    // 0x80053704: nop

L_80053708:
    // 0x80053708: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8005370C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80053710: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x80053714: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80053718: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8005371C: sb          $zero, 0x2($t8)
    MEM_B(0X2, ctx->r24) = 0;
    // 0x80053720: lw          $a0, -0x10F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X10F0);
    // 0x80053724: jal         0x80052904
    // 0x80053728: nop

    func_80052904(rdram, ctx);
        goto after_1;
    // 0x80053728: nop

    after_1:
    // 0x8005372C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80053730: lw          $t0, -0x460($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X460);
    // 0x80053734: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80053738: b           L_8005374C
    // 0x8005373C: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
        goto L_8005374C;
    // 0x8005373C: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
L_80053740:
    // 0x80053740: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80053744: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80053748: sb          $t1, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r9;
L_8005374C:
    // 0x8005374C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80053750: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80053754: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80053758: jr          $ra
    // 0x8005375C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8005375C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80053760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053760: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80053764: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80053768: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8005376C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80053770: jal         0x8006AD0C
    // 0x80053774: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8006AD0C(rdram, ctx);
        goto after_0;
    // 0x80053774: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80053778: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8005377C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x80053780: beq         $s1, $zero, L_800537A8
    if (ctx->r17 == 0) {
        // 0x80053784: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800537A8;
    }
    // 0x80053784: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80053788: beq         $s1, $at, L_800537B8
    if (ctx->r17 == ctx->r1) {
        // 0x8005378C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800537B8;
    }
    // 0x8005378C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80053790: beq         $s1, $at, L_800537F4
    if (ctx->r17 == ctx->r1) {
        // 0x80053794: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800537F4;
    }
    // 0x80053794: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80053798: beq         $s1, $at, L_80053820
    if (ctx->r17 == ctx->r1) {
        // 0x8005379C: nop
    
            goto L_80053820;
    }
    // 0x8005379C: nop

    // 0x800537A0: b           L_80053854
    // 0x800537A4: nop

        goto L_80053854;
    // 0x800537A4: nop

L_800537A8:
    // 0x800537A8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800537AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800537B0: b           L_80053854
    // 0x800537B4: sb          $t6, 0x2($t7)
    MEM_B(0X2, ctx->r15) = ctx->r14;
        goto L_80053854;
    // 0x800537B4: sb          $t6, 0x2($t7)
    MEM_B(0X2, ctx->r15) = ctx->r14;
L_800537B8:
    // 0x800537B8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800537BC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x800537C0: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
    // 0x800537C4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800537C8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800537CC: sb          $zero, 0x2($t0)
    MEM_B(0X2, ctx->r8) = 0;
    // 0x800537D0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800537D4: lw          $t2, -0x440($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X440);
    // 0x800537D8: lw          $t1, -0x490($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X490);
    // 0x800537DC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800537E0: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x800537E4: lw          $t4, -0x440($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X440);
    // 0x800537E8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800537EC: b           L_80053854
    // 0x800537F0: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
        goto L_80053854;
    // 0x800537F0: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
L_800537F4:
    // 0x800537F4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800537F8: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x800537FC: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x80053800: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80053804: jal         0x80069EC0
    // 0x80053808: sb          $zero, 0x2($t7)
    MEM_B(0X2, ctx->r15) = 0;
    func_80069EC0(rdram, ctx);
        goto after_1;
    // 0x80053808: sb          $zero, 0x2($t7)
    MEM_B(0X2, ctx->r15) = 0;
    after_1:
    // 0x8005380C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80053810: lw          $t9, -0x470($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X470);
    // 0x80053814: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80053818: b           L_80053854
    // 0x8005381C: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
        goto L_80053854;
    // 0x8005381C: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
L_80053820:
    // 0x80053820: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80053824: nop

    // 0x80053828: lbu         $t1, 0xC($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XC);
    // 0x8005382C: nop

    // 0x80053830: beq         $t1, $zero, L_80053844
    if (ctx->r9 == 0) {
        // 0x80053834: nop
    
            goto L_80053844;
    }
    // 0x80053834: nop

    // 0x80053838: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x8005383C: b           L_80053854
    // 0x80053840: sb          $t2, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r10;
        goto L_80053854;
    // 0x80053840: sb          $t2, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r10;
L_80053844:
    // 0x80053844: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80053848: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x8005384C: jal         0x80072FC4
    // 0x80053850: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    func_80072FC4(rdram, ctx);
        goto after_2;
    // 0x80053850: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    after_2:
L_80053854:
    // 0x80053854: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80053858: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8005385C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80053860: jr          $ra
    // 0x80053864: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80053864: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80053868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053868: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005386C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80053870: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80053874: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80053878: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005387C: lw          $a1, 0x9F4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9F4);
    // 0x80053880: lw          $a0, -0x440($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X440);
    // 0x80053884: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80053888: jal         0x8006CB10
    // 0x8005388C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8006CB10(rdram, ctx);
        goto after_0;
    // 0x8005388C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80053890: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80053894: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x80053898: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005389C: beq         $s1, $at, L_800538B4
    if (ctx->r17 == ctx->r1) {
        // 0x800538A0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800538B4;
    }
    // 0x800538A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800538A4: beq         $s1, $at, L_800538EC
    if (ctx->r17 == ctx->r1) {
        // 0x800538A8: nop
    
            goto L_800538EC;
    }
    // 0x800538A8: nop

    // 0x800538AC: b           L_80053920
    // 0x800538B0: nop

        goto L_80053920;
    // 0x800538B0: nop

L_800538B4:
    // 0x800538B4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800538B8: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x800538BC: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x800538C0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800538C4: jal         0x80069EC0
    // 0x800538C8: sb          $zero, 0x2($t8)
    MEM_B(0X2, ctx->r24) = 0;
    func_80069EC0(rdram, ctx);
        goto after_1;
    // 0x800538C8: sb          $zero, 0x2($t8)
    MEM_B(0X2, ctx->r24) = 0;
    after_1:
    // 0x800538CC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800538D0: lw          $t0, -0x470($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X470);
    // 0x800538D4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800538D8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800538DC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800538E0: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
    // 0x800538E4: b           L_80053920
    // 0x800538E8: sb          $t1, -0xB0($at)
    MEM_B(-0XB0, ctx->r1) = ctx->r9;
        goto L_80053920;
    // 0x800538E8: sb          $t1, -0xB0($at)
    MEM_B(-0XB0, ctx->r1) = ctx->r9;
L_800538EC:
    // 0x800538EC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800538F0: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800538F4: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
    // 0x800538F8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800538FC: jal         0x80069E84
    // 0x80053900: sb          $zero, 0x2($t4)
    MEM_B(0X2, ctx->r12) = 0;
    func_80069E84(rdram, ctx);
        goto after_2;
    // 0x80053900: sb          $zero, 0x2($t4)
    MEM_B(0X2, ctx->r12) = 0;
    after_2:
    // 0x80053904: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80053908: lw          $t6, -0x470($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X470);
    // 0x8005390C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80053910: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80053914: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80053918: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x8005391C: sb          $t7, -0xB0($at)
    MEM_B(-0XB0, ctx->r1) = ctx->r15;
L_80053920:
    // 0x80053920: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80053924: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80053928: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8005392C: jr          $ra
    // 0x80053930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80053930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80053934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053934: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80053938: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005393C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80053940: jal         0x80069FB8
    // 0x80053944: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80069FB8(rdram, ctx);
        goto after_0;
    // 0x80053944: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80053948: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8005394C: lw          $t6, -0x470($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X470);
    // 0x80053950: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80053954: lbu         $s0, 0x1($t6)
    ctx->r16 = MEM_BU(ctx->r14, 0X1);
    // 0x80053958: nop

    // 0x8005395C: beq         $s0, $at, L_80053974
    if (ctx->r16 == ctx->r1) {
        // 0x80053960: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80053974;
    }
    // 0x80053960: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80053964: beq         $s0, $at, L_800539B8
    if (ctx->r16 == ctx->r1) {
        // 0x80053968: nop
    
            goto L_800539B8;
    }
    // 0x80053968: nop

    // 0x8005396C: b           L_800539D4
    // 0x80053970: nop

        goto L_800539D4;
    // 0x80053970: nop

L_80053974:
    // 0x80053974: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80053978: nop

    // 0x8005397C: lbu         $t8, 0xC($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XC);
    // 0x80053980: nop

    // 0x80053984: beq         $t8, $zero, L_80053998
    if (ctx->r24 == 0) {
        // 0x80053988: nop
    
            goto L_80053998;
    }
    // 0x80053988: nop

    // 0x8005398C: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80053990: b           L_800539D4
    // 0x80053994: sb          $t9, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r25;
        goto L_800539D4;
    // 0x80053994: sb          $t9, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r25;
L_80053998:
    // 0x80053998: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8005399C: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x800539A0: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
    // 0x800539A4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800539A8: jal         0x80072FC4
    // 0x800539AC: sb          $zero, 0x2($t2)
    MEM_B(0X2, ctx->r10) = 0;
    func_80072FC4(rdram, ctx);
        goto after_1;
    // 0x800539AC: sb          $zero, 0x2($t2)
    MEM_B(0X2, ctx->r10) = 0;
    after_1:
    // 0x800539B0: b           L_800539D4
    // 0x800539B4: nop

        goto L_800539D4;
    // 0x800539B4: nop

L_800539B8:
    // 0x800539B8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800539BC: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x800539C0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800539C4: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    // 0x800539C8: lw          $t6, -0x460($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X460);
    // 0x800539CC: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800539D0: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
L_800539D4:
    // 0x800539D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800539D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800539DC: jr          $ra
    // 0x800539E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800539E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800539E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800539E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800539E8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800539EC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800539F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800539F4: lw          $a0, 0x9F4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X9F4);
    // 0x800539F8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800539FC: jal         0x80072F1C
    // 0x80053A00: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80072F1C(rdram, ctx);
        goto after_0;
    // 0x80053A00: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80053A04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80053A08: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x80053A0C: beq         $s1, $zero, L_80053A9C
    if (ctx->r17 == 0) {
        // 0x80053A10: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80053A9C;
    }
    // 0x80053A10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80053A14: beq         $s1, $at, L_80053A34
    if (ctx->r17 == ctx->r1) {
        // 0x80053A18: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80053A34;
    }
    // 0x80053A18: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80053A1C: beq         $s1, $at, L_80053A54
    if (ctx->r17 == ctx->r1) {
        // 0x80053A20: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80053A54;
    }
    // 0x80053A20: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80053A24: beq         $s1, $at, L_80053A74
    if (ctx->r17 == ctx->r1) {
        // 0x80053A28: nop
    
            goto L_80053A74;
    }
    // 0x80053A28: nop

    // 0x80053A2C: b           L_80053A84
    // 0x80053A30: nop

        goto L_80053A84;
    // 0x80053A30: nop

L_80053A34:
    // 0x80053A34: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80053A38: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x80053A3C: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x80053A40: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80053A44: jal         0x800688E0
    // 0x80053A48: sb          $zero, 0x2($t8)
    MEM_B(0X2, ctx->r24) = 0;
    func_800688E0(rdram, ctx);
        goto after_1;
    // 0x80053A48: sb          $zero, 0x2($t8)
    MEM_B(0X2, ctx->r24) = 0;
    after_1:
    // 0x80053A4C: b           L_80053A9C
    // 0x80053A50: nop

        goto L_80053A9C;
    // 0x80053A50: nop

L_80053A54:
    // 0x80053A54: jal         0x8004376C
    // 0x80053A58: nop

    func_8004376C(rdram, ctx);
        goto after_2;
    // 0x80053A58: nop

    after_2:
    // 0x80053A5C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80053A60: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x80053A64: jal         0x800688E0
    // 0x80053A68: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
    func_800688E0(rdram, ctx);
        goto after_3;
    // 0x80053A68: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
    after_3:
    // 0x80053A6C: b           L_80053A9C
    // 0x80053A70: nop

        goto L_80053A9C;
    // 0x80053A70: nop

L_80053A74:
    // 0x80053A74: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80053A78: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80053A7C: b           L_80053A9C
    // 0x80053A80: sb          $t1, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r9;
        goto L_80053A9C;
    // 0x80053A80: sb          $t1, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r9;
L_80053A84:
    // 0x80053A84: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80053A88: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80053A8C: addiu       $a1, $a1, -0x31D0
    ctx->r5 = ADD32(ctx->r5, -0X31D0);
    // 0x80053A90: addiu       $a0, $a0, -0x31E0
    ctx->r4 = ADD32(ctx->r4, -0X31E0);
    // 0x80053A94: jal         0x8004A5A0
    // 0x80053A98: addiu       $a2, $zero, 0xFD
    ctx->r6 = ADD32(0, 0XFD);
    func_8004A5A0(rdram, ctx);
        goto after_4;
    // 0x80053A98: addiu       $a2, $zero, 0xFD
    ctx->r6 = ADD32(0, 0XFD);
    after_4:
L_80053A9C:
    // 0x80053A9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80053AA0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80053AA4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80053AA8: jr          $ra
    // 0x80053AAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80053AAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80053AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053AB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80053AB4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80053AB8: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x80053ABC: lw          $s0, 0x9F4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X9F4);
    // 0x80053AC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80053AC4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80053AC8: blez        $s0, L_80053AE4
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80053ACC: sw          $s1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r17;
            goto L_80053AE4;
    }
    // 0x80053ACC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
L_80053AD0:
    // 0x80053AD0: jal         0x80068904
    // 0x80053AD4: nop

    func_80068904(rdram, ctx);
        goto after_0;
    // 0x80053AD4: nop

    after_0:
    // 0x80053AD8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80053ADC: bgtz        $s0, L_80053AD0
    if (SIGNED(ctx->r16) > 0) {
        // 0x80053AE0: nop
    
            goto L_80053AD0;
    }
    // 0x80053AE0: nop

L_80053AE4:
    // 0x80053AE4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80053AE8: lw          $t6, -0x480($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X480);
    // 0x80053AEC: nop

    // 0x80053AF0: lbu         $s1, 0x1($t6)
    ctx->r17 = MEM_BU(ctx->r14, 0X1);
    // 0x80053AF4: nop

    // 0x80053AF8: beq         $s1, $zero, L_80053B70
    if (ctx->r17 == 0) {
        // 0x80053AFC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80053B70;
    }
    // 0x80053AFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80053B00: bne         $s1, $at, L_80053B5C
    if (ctx->r17 != ctx->r1) {
        // 0x80053B04: nop
    
            goto L_80053B5C;
    }
    // 0x80053B04: nop

    // 0x80053B08: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80053B0C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80053B10: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x80053B14: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80053B18: nop

    // 0x80053B1C: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
    // 0x80053B20: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80053B24: jal         0x80068B18
    // 0x80053B28: sb          $zero, 0x2($t0)
    MEM_B(0X2, ctx->r8) = 0;
    func_80068B18(rdram, ctx);
        goto after_1;
    // 0x80053B28: sb          $zero, 0x2($t0)
    MEM_B(0X2, ctx->r8) = 0;
    after_1:
    // 0x80053B2C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80053B30: jal         0x80067DD8
    // 0x80053B34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80067DD8(rdram, ctx);
        goto after_2;
    // 0x80053B34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80053B38: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80053B3C: nop

    // 0x80053B40: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    // 0x80053B44: jal         0x80066464
    // 0x80053B48: nop

    func_80066464(rdram, ctx);
        goto after_3;
    // 0x80053B48: nop

    after_3:
    // 0x80053B4C: jal         0x8004370C
    // 0x80053B50: nop

    func_8004370C(rdram, ctx);
        goto after_4;
    // 0x80053B50: nop

    after_4:
    // 0x80053B54: b           L_80053B70
    // 0x80053B58: nop

        goto L_80053B70;
    // 0x80053B58: nop

L_80053B5C:
    // 0x80053B5C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80053B60: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80053B64: addiu       $a1, $a1, -0x31AC
    ctx->r5 = ADD32(ctx->r5, -0X31AC);
    // 0x80053B68: jal         0x80083560
    // 0x80053B6C: addiu       $a0, $a0, -0x31C4
    ctx->r4 = ADD32(ctx->r4, -0X31C4);
    Fault_Assert(rdram, ctx);
        goto after_5;
    // 0x80053B6C: addiu       $a0, $a0, -0x31C4
    ctx->r4 = ADD32(ctx->r4, -0X31C4);
    after_5:
L_80053B70:
    // 0x80053B70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80053B74: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80053B78: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80053B7C: jr          $ra
    // 0x80053B80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80053B80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80053B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053B84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80053B88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80053B8C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80053B90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80053B94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80053B98: lbu         $t7, 0xC($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XC);
    // 0x80053B9C: nop

    // 0x80053BA0: bne         $t7, $zero, L_80053C04
    if (ctx->r15 != 0) {
        // 0x80053BA4: nop
    
            goto L_80053C04;
    }
    // 0x80053BA4: nop

    // 0x80053BA8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80053BAC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80053BB0: sb          $t8, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r24;
    // 0x80053BB4: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80053BB8: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x80053BBC: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80053BC0: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
    // 0x80053BC4: lbu         $t2, -0x118($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X118);
    // 0x80053BC8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80053BCC: bne         $t2, $at, L_80053BF0
    if (ctx->r10 != ctx->r1) {
        // 0x80053BD0: nop
    
            goto L_80053BF0;
    }
    // 0x80053BD0: nop

    // 0x80053BD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80053BD8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80053BDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80053BE0: jal         0x800532E4
    // 0x80053BE4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800532E4(rdram, ctx);
        goto after_0;
    // 0x80053BE4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x80053BE8: b           L_80053C04
    // 0x80053BEC: nop

        goto L_80053C04;
    // 0x80053BEC: nop

L_80053BF0:
    // 0x80053BF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80053BF4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80053BF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80053BFC: jal         0x800532E4
    // 0x80053C00: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800532E4(rdram, ctx);
        goto after_1;
    // 0x80053C00: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_1:
L_80053C04:
    // 0x80053C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80053C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80053C0C: jr          $ra
    // 0x80053C10: nop

    return;
    // 0x80053C10: nop

;}
RECOMP_FUNC void func_80053C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053C14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80053C18: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80053C1C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80053C20: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80053C24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80053C28: lw          $a1, 0x9F4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9F4);
    // 0x80053C2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80053C30: jal         0x80053040
    // 0x80053C34: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_80053040(rdram, ctx);
        goto after_0;
    // 0x80053C34: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x80053C38: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80053C3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80053C40: bne         $s0, $at, L_80053C60
    if (ctx->r16 != ctx->r1) {
        // 0x80053C44: nop
    
            goto L_80053C60;
    }
    // 0x80053C44: nop

    // 0x80053C48: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80053C4C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80053C50: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x80053C54: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80053C58: nop

    // 0x80053C5C: sb          $t7, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r15;
L_80053C60:
    // 0x80053C60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80053C64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80053C68: jr          $ra
    // 0x80053C6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80053C6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80053C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053C70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80053C74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80053C78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80053C7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
L_80053C80:
    // 0x80053C80: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80053C84: lbu         $t6, -0x118($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X118);
    // 0x80053C88: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80053C8C: bne         $t6, $at, L_80053CAC
    if (ctx->r14 != ctx->r1) {
        // 0x80053C90: nop
    
            goto L_80053CAC;
    }
    // 0x80053C90: nop

    // 0x80053C94: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80053C98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80053C9C: lbu         $t8, 0x1($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1);
    // 0x80053CA0: nop

    // 0x80053CA4: beq         $t8, $at, L_80053CB8
    if (ctx->r24 == ctx->r1) {
        // 0x80053CA8: nop
    
            goto L_80053CB8;
    }
    // 0x80053CA8: nop

L_80053CAC:
    // 0x80053CAC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80053CB0: nop

    // 0x80053CB4: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
L_80053CB8:
    // 0x80053CB8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80053CBC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80053CC0: sb          $t0, 0x2($t1)
    MEM_B(0X2, ctx->r9) = ctx->r8;
    // 0x80053CC4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80053CC8: nop

    // 0x80053CCC: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x80053CD0: nop

    // 0x80053CD4: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80053CD8: sltiu       $at, $t4, 0x8
    ctx->r1 = ctx->r12 < 0X8 ? 1 : 0;
    // 0x80053CDC: beq         $at, $zero, L_80053D98
    if (ctx->r1 == 0) {
        // 0x80053CE0: nop
    
            goto L_80053D98;
    }
    // 0x80053CE0: nop

    // 0x80053CE4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80053CE8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053CEC: addu        $at, $at, $t4
    gpr jr_addend_80053CF8 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80053CF0: lw          $t4, -0x318C($at)
    ctx->r12 = ADD32(ctx->r1, -0X318C);
    // 0x80053CF4: nop

    // 0x80053CF8: jr          $t4
    // 0x80053CFC: nop

    switch (jr_addend_80053CF8 >> 2) {
        case 0: goto L_80053D00; break;
        case 1: goto L_80053D14; break;
        case 2: goto L_80053D28; break;
        case 3: goto L_80053D3C; break;
        case 4: goto L_80053D50; break;
        case 5: goto L_80053D64; break;
        case 6: goto L_80053D78; break;
        case 7: goto L_80053D8C; break;
        default: switch_error(__func__, 0x80053CF8, 0x800DCE74);
    }
    // 0x80053CFC: nop

L_80053D00:
    // 0x80053D00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80053D04: jal         0x80053684
    // 0x80053D08: nop

    func_80053684(rdram, ctx);
        goto after_0;
    // 0x80053D08: nop

    after_0:
    // 0x80053D0C: b           L_80053D98
    // 0x80053D10: nop

        goto L_80053D98;
    // 0x80053D10: nop

L_80053D14:
    // 0x80053D14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80053D18: jal         0x800536BC
    // 0x80053D1C: nop

    func_800536BC(rdram, ctx);
        goto after_1;
    // 0x80053D1C: nop

    after_1:
    // 0x80053D20: b           L_80053D98
    // 0x80053D24: nop

        goto L_80053D98;
    // 0x80053D24: nop

L_80053D28:
    // 0x80053D28: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80053D2C: jal         0x80053760
    // 0x80053D30: nop

    func_80053760(rdram, ctx);
        goto after_2;
    // 0x80053D30: nop

    after_2:
    // 0x80053D34: b           L_80053D98
    // 0x80053D38: nop

        goto L_80053D98;
    // 0x80053D38: nop

L_80053D3C:
    // 0x80053D3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80053D40: jal         0x80053868
    // 0x80053D44: nop

    func_80053868(rdram, ctx);
        goto after_3;
    // 0x80053D44: nop

    after_3:
    // 0x80053D48: b           L_80053D98
    // 0x80053D4C: nop

        goto L_80053D98;
    // 0x80053D4C: nop

L_80053D50:
    // 0x80053D50: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80053D54: jal         0x80053934
    // 0x80053D58: nop

    func_80053934(rdram, ctx);
        goto after_4;
    // 0x80053D58: nop

    after_4:
    // 0x80053D5C: b           L_80053D98
    // 0x80053D60: nop

        goto L_80053D98;
    // 0x80053D60: nop

L_80053D64:
    // 0x80053D64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80053D68: jal         0x800539E4
    // 0x80053D6C: nop

    func_800539E4(rdram, ctx);
        goto after_5;
    // 0x80053D6C: nop

    after_5:
    // 0x80053D70: b           L_80053D98
    // 0x80053D74: nop

        goto L_80053D98;
    // 0x80053D74: nop

L_80053D78:
    // 0x80053D78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80053D7C: jal         0x80053AB0
    // 0x80053D80: nop

    func_80053AB0(rdram, ctx);
        goto after_6;
    // 0x80053D80: nop

    after_6:
    // 0x80053D84: b           L_80053D98
    // 0x80053D88: nop

        goto L_80053D98;
    // 0x80053D88: nop

L_80053D8C:
    // 0x80053D8C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80053D90: jal         0x80053C14
    // 0x80053D94: nop

    func_80053C14(rdram, ctx);
        goto after_7;
    // 0x80053D94: nop

    after_7:
L_80053D98:
    // 0x80053D98: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80053D9C: nop

    // 0x80053DA0: lbu         $t6, 0x2($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X2);
    // 0x80053DA4: nop

    // 0x80053DA8: beq         $t6, $zero, L_80053C80
    if (ctx->r14 == 0) {
        // 0x80053DAC: nop
    
            goto L_80053C80;
    }
    // 0x80053DAC: nop

    // 0x80053DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80053DB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80053DB8: jr          $ra
    // 0x80053DBC: nop

    return;
    // 0x80053DBC: nop

;}
RECOMP_FUNC void func_80053DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053DC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80053DC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80053DC8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80053DCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80053DD0: lbu         $t7, 0xC($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XC);
    // 0x80053DD4: nop

    // 0x80053DD8: beq         $t7, $zero, L_80053DE8
    if (ctx->r15 == 0) {
        // 0x80053DDC: nop
    
            goto L_80053DE8;
    }
    // 0x80053DDC: nop

    // 0x80053DE0: jal         0x80053280
    // 0x80053DE4: addiu       $a0, $t6, 0x10
    ctx->r4 = ADD32(ctx->r14, 0X10);
    func_80053280(rdram, ctx);
        goto after_0;
    // 0x80053DE4: addiu       $a0, $t6, 0x10
    ctx->r4 = ADD32(ctx->r14, 0X10);
    after_0:
L_80053DE8:
    // 0x80053DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80053DEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80053DF0: jr          $ra
    // 0x80053DF4: nop

    return;
    // 0x80053DF4: nop

;}
RECOMP_FUNC void func_80053DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053DF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80053DFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80053E00: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80053E04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80053E08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80053E0C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80053E10: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80053E14: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x80053E18: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80053E1C: nop

    // 0x80053E20: sb          $zero, 0x3($t7)
    MEM_B(0X3, ctx->r15) = 0;
    // 0x80053E24: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80053E28: nop

    // 0x80053E2C: sb          $zero, 0xC($t8)
    MEM_B(0XC, ctx->r24) = 0;
    // 0x80053E30: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80053E34: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80053E38: nop

    // 0x80053E3C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80053E40: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80053E44: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80053E48: nop

    // 0x80053E4C: sw          $t1, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r9;
    // 0x80053E50: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80053E54: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80053E58: jal         0x80053390
    // 0x80053E5C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_80053390(rdram, ctx);
        goto after_0;
    // 0x80053E5C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x80053E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80053E64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80053E68: jr          $ra
    // 0x80053E6C: nop

    return;
    // 0x80053E6C: nop

;}
RECOMP_FUNC void func_80053E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053E70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80053E74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80053E78: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80053E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80053E80: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x80053E84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80053E88: jal         0x80053400
    // 0x80053E8C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_80053400(rdram, ctx);
        goto after_0;
    // 0x80053E8C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x80053E90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80053E94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80053E98: jr          $ra
    // 0x80053E9C: nop

    return;
    // 0x80053E9C: nop

;}
RECOMP_FUNC void func_80053EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053EA0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80053EA4: nop

    // 0x80053EA8: bne         $t6, $zero, L_80053EB8
    if (ctx->r14 != 0) {
        // 0x80053EAC: nop
    
            goto L_80053EB8;
    }
    // 0x80053EAC: nop

    // 0x80053EB0: jr          $ra
    // 0x80053EB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80053EB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80053EB8:
    // 0x80053EB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80053EBC: jr          $ra
    // 0x80053EC0: nop

    return;
    // 0x80053EC0: nop

;}
RECOMP_FUNC void func_80053EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053EC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80053EC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80053ECC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80053ED0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80053ED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80053ED8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80053EDC: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80053EE0: nop

    // 0x80053EE4: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80053EE8: beq         $at, $zero, L_80053EF8
    if (ctx->r1 == 0) {
        // 0x80053EEC: nop
    
            goto L_80053EF8;
    }
    // 0x80053EEC: nop

    // 0x80053EF0: b           L_80053F10
    // 0x80053EF4: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
        goto L_80053F10;
    // 0x80053EF4: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
L_80053EF8:
    // 0x80053EF8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80053EFC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80053F00: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80053F04: nop

    // 0x80053F08: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x80053F0C: sw          $t2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r10;
L_80053F10:
    // 0x80053F10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80053F14: jal         0x80053EA0
    // 0x80053F18: nop

    func_80053EA0(rdram, ctx);
        goto after_0;
    // 0x80053F18: nop

    after_0:
    // 0x80053F1C: beq         $v0, $zero, L_80053F2C
    if (ctx->r2 == 0) {
        // 0x80053F20: nop
    
            goto L_80053F2C;
    }
    // 0x80053F20: nop

    // 0x80053F24: b           L_80053F30
    // 0x80053F28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80053F30;
    // 0x80053F28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80053F2C:
    // 0x80053F2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80053F30:
    // 0x80053F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80053F34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80053F38: jr          $ra
    // 0x80053F3C: nop

    return;
    // 0x80053F3C: nop

;}
RECOMP_FUNC void func_80053F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053F40: jr          $ra
    // 0x80053F44: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    return;
    // 0x80053F44: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
;}
