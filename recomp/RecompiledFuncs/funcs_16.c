#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8007C5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C5CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007C5D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C5D4: jal         0x800B6550
    // 0x8007C5D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    osGetTime_recomp(rdram, ctx);
        goto after_0;
    // 0x8007C5D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8007C5DC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8007C5E0: or          $t6, $v1, $zero
    ctx->r14 = ctx->r3 | 0;
    // 0x8007C5E4: sw          $t6, 0x18F4($t7)
    MEM_W(0X18F4, ctx->r15) = ctx->r14;
    // 0x8007C5E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007C5EC: jal         0x8007BCC4
    // 0x8007C5F0: addiu       $a1, $zero, 0x18FC
    ctx->r5 = ADD32(0, 0X18FC);
    func_8007BCC4(rdram, ctx);
        goto after_1;
    // 0x8007C5F0: addiu       $a1, $zero, 0x18FC
    ctx->r5 = ADD32(0, 0X18FC);
    after_1:
    // 0x8007C5F4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8007C5F8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8007C5FC: sw          $v0, 0x18FC($t8)
    MEM_W(0X18FC, ctx->r24) = ctx->r2;
    // 0x8007C600: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007C604: jal         0x800AC22C
    // 0x8007C608: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    func_800AC22C(rdram, ctx);
        goto after_2;
    // 0x8007C608: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    after_2:
    // 0x8007C60C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007C610: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8007C614: ori         $a1, $a1, 0x1900
    ctx->r5 = ctx->r5 | 0X1900;
    // 0x8007C618: jal         0x800AC22C
    // 0x8007C61C: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    func_800AC22C(rdram, ctx);
        goto after_3;
    // 0x8007C61C: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    after_3:
    // 0x8007C620: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007C624: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8007C628: ori         $a1, $a1, 0x3200
    ctx->r5 = ctx->r5 | 0X3200;
    // 0x8007C62C: jal         0x800AC22C
    // 0x8007C630: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    func_800AC22C(rdram, ctx);
        goto after_4;
    // 0x8007C630: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    after_4:
    // 0x8007C634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007C638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007C63C: jr          $ra
    // 0x8007C640: nop

    return;
    // 0x8007C640: nop

    // 0x8007C644: nop

    // 0x8007C648: nop

    // 0x8007C64C: nop

;}
RECOMP_FUNC void func_8007C650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C650: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007C654: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8007C658: addiu       $t6, $t6, -0x2F0
    ctx->r14 = ADD32(ctx->r14, -0X2F0);
    // 0x8007C65C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C660: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8007C664: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_8007C668:
    // 0x8007C668: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8007C66C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8007C670: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8007C674: addiu       $t9, $t8, -0x10
    ctx->r25 = ADD32(ctx->r24, -0X10);
    // 0x8007C678: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8007C67C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007C680: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007C684: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8007C688: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8007C68C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
L_8007C690:
    // 0x8007C690: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007C694: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8007C698: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8007C69C: addiu       $t2, $t1, -0x10
    ctx->r10 = ADD32(ctx->r9, -0X10);
    // 0x8007C6A0: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8007C6A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007C6A8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8007C6AC: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8007C6B0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007C6B4: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8007C6B8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8007C6BC: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x8007C6C0: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x8007C6C4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007C6C8: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x8007C6CC: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8007C6D0: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x8007C6D4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8007C6D8: sub.d       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f6.d - ctx->f4.d;
    // 0x8007C6DC: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x8007C6E0: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x8007C6E4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8007C6E8: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x8007C6EC: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x8007C6F0: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8007C6F4: bc1f        L_8007C708
    if (!c1cs) {
        // 0x8007C6F8: nop
    
            goto L_8007C708;
    }
    // 0x8007C6F8: nop

    // 0x8007C6FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007C700: nop

    // 0x8007C704: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
L_8007C708:
    // 0x8007C708: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8007C70C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007C710: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8007C714: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007C718: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8007C71C: lwc1        $f16, 0x30A8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X30A8);
    // 0x8007C720: jal         0x800B81D0
    // 0x8007C724: sub.s       $f12, $f8, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f16.fl;
    cosf_recomp(rdram, ctx);
        goto after_0;
    // 0x8007C724: sub.s       $f12, $f8, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f16.fl;
    after_0:
    // 0x8007C728: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007C72C: lwc1        $f7, -0x2110($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2110);
    // 0x8007C730: lwc1        $f6, -0x210C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X210C);
    // 0x8007C734: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x8007C738: mul.d       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f6.d);
    // 0x8007C73C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007C740: lwc1        $f11, -0x2108($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2108);
    // 0x8007C744: lwc1        $f10, -0x2104($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2104);
    // 0x8007C748: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8007C74C: add.d       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f4.d + ctx->f10.d;
    // 0x8007C750: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007C754: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8007C758: mul.d       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f18.d);
    // 0x8007C75C: lwc1        $f16, -0x20FC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X20FC);
    // 0x8007C760: lwc1        $f17, -0x2100($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2100);
    // 0x8007C764: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8007C768: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x8007C76C: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x8007C770: mul.d       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8007C774: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8007C778: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8007C77C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8007C780: nop

    // 0x8007C784: cvt.w.d     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = CVT_W_D(ctx->f8.d);
    // 0x8007C788: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8007C78C: nop

    // 0x8007C790: andi        $at, $t4, 0x4
    ctx->r1 = ctx->r12 & 0X4;
    // 0x8007C794: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8007C798: beq         $t4, $zero, L_8007C7EC
    if (ctx->r12 == 0) {
        // 0x8007C79C: lui         $at, 0x41E0
        ctx->r1 = S32(0X41E0 << 16);
            goto L_8007C7EC;
    }
    // 0x8007C79C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8007C7A0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8007C7A4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8007C7A8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8007C7AC: sub.d       $f18, $f8, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = ctx->f8.d - ctx->f18.d;
    // 0x8007C7B0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8007C7B4: nop

    // 0x8007C7B8: cvt.w.d     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_D(ctx->f18.d);
    // 0x8007C7BC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8007C7C0: nop

    // 0x8007C7C4: andi        $at, $t4, 0x4
    ctx->r1 = ctx->r12 & 0X4;
    // 0x8007C7C8: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8007C7CC: bne         $t4, $zero, L_8007C7E4
    if (ctx->r12 != 0) {
        // 0x8007C7D0: nop
    
            goto L_8007C7E4;
    }
    // 0x8007C7D0: nop

    // 0x8007C7D4: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8007C7D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007C7DC: b           L_8007C7FC
    // 0x8007C7E0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8007C7FC;
    // 0x8007C7E0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8007C7E4:
    // 0x8007C7E4: b           L_8007C7FC
    // 0x8007C7E8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8007C7FC;
    // 0x8007C7E8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
L_8007C7EC:
    // 0x8007C7EC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8007C7F0: nop

    // 0x8007C7F4: bltz        $t4, L_8007C7E4
    if (SIGNED(ctx->r12) < 0) {
        // 0x8007C7F8: nop
    
            goto L_8007C7E4;
    }
    // 0x8007C7F8: nop

L_8007C7FC:
    // 0x8007C7FC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C800: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8007C804: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
    // 0x8007C808: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8007C80C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C810: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8007C814: slti        $at, $t7, 0x10
    ctx->r1 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x8007C818: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8007C81C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007C820: bne         $at, $zero, L_8007C690
    if (ctx->r1 != 0) {
        // 0x8007C824: sw          $t7, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r15;
            goto L_8007C690;
    }
    // 0x8007C824: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8007C828: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8007C82C: nop

    // 0x8007C830: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8007C834: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x8007C838: bne         $at, $zero, L_8007C668
    if (ctx->r1 != 0) {
        // 0x8007C83C: sw          $t1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r9;
            goto L_8007C668;
    }
    // 0x8007C83C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x8007C840: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007C844: lwc1        $f6, 0x30A8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X30A8);
    // 0x8007C848: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007C84C: lwc1        $f11, -0x20F8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X20F8);
    // 0x8007C850: lwc1        $f10, -0x20F4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X20F4);
    // 0x8007C854: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x8007C858: add.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f4.d + ctx->f10.d;
    // 0x8007C85C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007C860: cvt.s.d     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f8.fl = CVT_S_D(ctx->f16.d);
    // 0x8007C864: swc1        $f8, 0x30A8($at)
    MEM_W(0X30A8, ctx->r1) = ctx->f8.u32l;
    // 0x8007C868: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007C86C: lwc1        $f7, -0x20F0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X20F0);
    // 0x8007C870: lwc1        $f6, -0x20EC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X20EC);
    // 0x8007C874: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x8007C878: c.lt.d      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.d < ctx->f18.d;
    // 0x8007C87C: nop

    // 0x8007C880: bc1f        L_8007C8A0
    if (!c1cs) {
        // 0x8007C884: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_8007C8A0;
    }
    // 0x8007C884: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007C888: lwc1        $f5, -0x20E8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X20E8);
    // 0x8007C88C: lwc1        $f4, -0x20E4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X20E4);
    // 0x8007C890: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007C894: sub.d       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f18.d - ctx->f4.d;
    // 0x8007C898: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8007C89C: swc1        $f16, 0x30A8($at)
    MEM_W(0X30A8, ctx->r1) = ctx->f16.u32l;
L_8007C8A0:
    // 0x8007C8A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007C8A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8007C8A8: jr          $ra
    // 0x8007C8AC: nop

    return;
    // 0x8007C8AC: nop

;}
RECOMP_FUNC void func_8007C8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C8B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007C8B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007C8B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007C8BC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007C8C0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8007C8C4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8007C8C8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
L_8007C8CC:
    // 0x8007C8CC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007C8D0: lwc1        $f14, -0x20E0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X20E0);
    // 0x8007C8D4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8007C8D8: jal         0x800A36F0
    // 0x8007C8DC: nop

    func_800A36F0(rdram, ctx);
        goto after_0;
    // 0x8007C8DC: nop

    after_0:
    // 0x8007C8E0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8007C8E4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007C8E8: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8007C8EC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8007C8F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007C8F4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8007C8F8: swc1        $f0, -0x1EC($at)
    MEM_W(-0X1EC, ctx->r1) = ctx->f0.u32l;
    // 0x8007C8FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007C900: lwc1        $f12, -0x20DC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X20DC);
    // 0x8007C904: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007C908: lwc1        $f14, -0x20D8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X20D8);
    // 0x8007C90C: jal         0x800A36F0
    // 0x8007C910: nop

    func_800A36F0(rdram, ctx);
        goto after_1;
    // 0x8007C910: nop

    after_1:
    // 0x8007C914: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8007C918: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8007C91C: jal         0x800A35EC
    // 0x8007C920: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800A35EC(rdram, ctx);
        goto after_2;
    // 0x8007C920: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x8007C924: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x8007C928: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8007C92C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8007C930: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8007C934: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8007C938: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8007C93C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8007C940: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x8007C944: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8007C948: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007C94C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8007C950: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8007C954: swc1        $f10, -0x1E8($at)
    MEM_W(-0X1E8, ctx->r1) = ctx->f10.u32l;
    // 0x8007C958: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007C95C: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8007C960: lwc1        $f16, -0x20D4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X20D4);
    // 0x8007C964: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8007C968: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8007C96C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8007C970: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007C974: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8007C978: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x8007C97C: swc1        $f16, -0x1F0($at)
    MEM_W(-0X1F0, ctx->r1) = ctx->f16.u32l;
    // 0x8007C980: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8007C984: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8007C988: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007C98C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8007C990: lwc1        $f12, -0x1EC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EC);
    // 0x8007C994: jal         0x800B81D0
    // 0x8007C998: nop

    cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x8007C998: nop

    after_3:
    // 0x8007C99C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8007C9A0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8007C9A4: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8007C9A8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8007C9AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007C9B0: addiu       $t8, $t8, -0x1F0
    ctx->r24 = ADD32(ctx->r24, -0X1F0);
    // 0x8007C9B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007C9B8: lwc1        $f18, 0x0($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8007C9BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007C9C0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8007C9C4: swc1        $f4, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f4.u32l;
    // 0x8007C9C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8007C9CC: nop

    // 0x8007C9D0: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8007C9D4: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8007C9D8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8007C9DC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8007C9E0: lwc1        $f12, -0x1EC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EC);
    // 0x8007C9E4: jal         0x800B7B40
    // 0x8007C9E8: nop

    sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x8007C9E8: nop

    after_4:
    // 0x8007C9EC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8007C9F0: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8007C9F4: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8007C9F8: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8007C9FC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8007CA00: addiu       $t4, $t4, -0x1F0
    ctx->r12 = ADD32(ctx->r12, -0X1F0);
    // 0x8007CA04: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8007CA08: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8007CA0C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CA10: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8007CA14: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8007CA18: swc1        $f8, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f8.u32l;
    // 0x8007CA1C: lwc1        $f14, -0x20D0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X20D0);
    // 0x8007CA20: jal         0x800A36F0
    // 0x8007CA24: nop

    func_800A36F0(rdram, ctx);
        goto after_5;
    // 0x8007CA24: nop

    after_5:
    // 0x8007CA28: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8007CA2C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007CA30: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8007CA34: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8007CA38: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007CA3C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8007CA40: swc1        $f0, -0x1DC($at)
    MEM_W(-0X1DC, ctx->r1) = ctx->f0.u32l;
    // 0x8007CA44: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CA48: lwc1        $f12, -0x20CC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X20CC);
    // 0x8007CA4C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CA50: lwc1        $f14, -0x20C8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X20C8);
    // 0x8007CA54: jal         0x800A36F0
    // 0x8007CA58: nop

    func_800A36F0(rdram, ctx);
        goto after_6;
    // 0x8007CA58: nop

    after_6:
    // 0x8007CA5C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8007CA60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8007CA64: jal         0x800A35EC
    // 0x8007CA68: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800A35EC(rdram, ctx);
        goto after_7;
    // 0x8007CA68: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x8007CA6C: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x8007CA70: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8007CA74: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8007CA78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8007CA7C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8007CA80: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8007CA84: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8007CA88: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x8007CA8C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8007CA90: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8007CA94: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007CA98: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8007CA9C: swc1        $f18, -0x1D8($at)
    MEM_W(-0X1D8, ctx->r1) = ctx->f18.u32l;
    // 0x8007CAA0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8007CAA4: slti        $at, $t3, 0x5
    ctx->r1 = SIGNED(ctx->r11) < 0X5 ? 1 : 0;
    // 0x8007CAA8: bne         $at, $zero, L_8007C8CC
    if (ctx->r1 != 0) {
        // 0x8007CAAC: sw          $t3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r11;
            goto L_8007C8CC;
    }
    // 0x8007CAAC: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8007CAB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CAB4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8007CAB8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8007CABC: jr          $ra
    // 0x8007CAC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8007CAC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8007CAC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CAC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007CAC8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8007CACC: addiu       $t6, $t6, -0x1F0
    ctx->r14 = ADD32(ctx->r14, -0X1F0);
    // 0x8007CAD0: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x8007CAD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007CAD8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8007CADC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_8007CAE0:
    // 0x8007CAE0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8007CAE4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CAE8: lwc1        $f4, 0x14($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X14);
    // 0x8007CAEC: lwc1        $f6, 0x18($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X18);
    // 0x8007CAF0: nop

    // 0x8007CAF4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8007CAF8: swc1        $f8, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f8.u32l;
    // 0x8007CAFC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8007CB00: lwc1        $f18, -0x20BC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X20BC);
    // 0x8007CB04: lwc1        $f10, 0x14($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X14);
    // 0x8007CB08: lwc1        $f19, -0x20C0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X20C0);
    // 0x8007CB0C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8007CB10: c.lt.d      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.d < ctx->f16.d;
    // 0x8007CB14: nop

    // 0x8007CB18: bc1f        L_8007CB38
    if (!c1cs) {
        // 0x8007CB1C: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_8007CB38;
    }
    // 0x8007CB1C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CB20: lwc1        $f5, -0x20B8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X20B8);
    // 0x8007CB24: lwc1        $f4, -0x20B4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X20B4);
    // 0x8007CB28: nop

    // 0x8007CB2C: sub.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f16.d - ctx->f4.d;
    // 0x8007CB30: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8007CB34: swc1        $f8, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f8.u32l;
L_8007CB38:
    // 0x8007CB38: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8007CB3C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CB40: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8007CB44: lwc1        $f18, 0x8($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8007CB48: nop

    // 0x8007CB4C: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8007CB50: swc1        $f16, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f16.u32l;
    // 0x8007CB54: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8007CB58: lwc1        $f8, -0x20AC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X20AC);
    // 0x8007CB5C: lwc1        $f4, 0x4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8007CB60: lwc1        $f9, -0x20B0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X20B0);
    // 0x8007CB64: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8007CB68: c.lt.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d < ctx->f6.d;
    // 0x8007CB6C: nop

    // 0x8007CB70: bc1f        L_8007CB90
    if (!c1cs) {
        // 0x8007CB74: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_8007CB90;
    }
    // 0x8007CB74: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CB78: lwc1        $f11, -0x20A8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X20A8);
    // 0x8007CB7C: lwc1        $f10, -0x20A4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X20A4);
    // 0x8007CB80: nop

    // 0x8007CB84: sub.d       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f6.d - ctx->f10.d;
    // 0x8007CB88: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
    // 0x8007CB8C: swc1        $f16, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f16.u32l;
L_8007CB90:
    // 0x8007CB90: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8007CB94: nop

    // 0x8007CB98: lwc1        $f12, 0x4($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8007CB9C: jal         0x800B81D0
    // 0x8007CBA0: nop

    cosf_recomp(rdram, ctx);
        goto after_0;
    // 0x8007CBA0: nop

    after_0:
    // 0x8007CBA4: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8007CBA8: nop

    // 0x8007CBAC: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8007CBB0: nop

    // 0x8007CBB4: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8007CBB8: swc1        $f8, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f8.u32l;
    // 0x8007CBBC: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007CBC0: nop

    // 0x8007CBC4: lwc1        $f12, 0x4($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X4);
    // 0x8007CBC8: jal         0x800B7B40
    // 0x8007CBCC: nop

    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x8007CBCC: nop

    after_1:
    // 0x8007CBD0: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8007CBD4: nop

    // 0x8007CBD8: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8007CBDC: nop

    // 0x8007CBE0: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8007CBE4: swc1        $f10, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f10.u32l;
    // 0x8007CBE8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8007CBEC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CBF0: addiu       $t9, $t8, 0x1C
    ctx->r25 = ADD32(ctx->r24, 0X1C);
    // 0x8007CBF4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8007CBF8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8007CBFC: bne         $t7, $zero, L_8007CAE0
    if (ctx->r15 != 0) {
        // 0x8007CC00: sw          $t9, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r25;
            goto L_8007CAE0;
    }
    // 0x8007CC00: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8007CC04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007CC08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007CC0C: jr          $ra
    // 0x8007CC10: nop

    return;
    // 0x8007CC10: nop

;}
RECOMP_FUNC void func_8007CC14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CC14: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8007CC18: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8007CC1C: addiu       $t6, $t6, -0x2F0
    ctx->r14 = ADD32(ctx->r14, -0X2F0);
    // 0x8007CC20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007CC24: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007CC28: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8007CC2C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8007CC30: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_8007CC34:
    // 0x8007CC34: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8007CC38: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8007CC3C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8007CC40: addiu       $t9, $t8, -0x10
    ctx->r25 = ADD32(ctx->r24, -0X10);
    // 0x8007CC44: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8007CC48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007CC4C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007CC50: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x8007CC54: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8007CC58: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
L_8007CC5C:
    // 0x8007CC5C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8007CC60: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8007CC64: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8007CC68: addiu       $t2, $t1, -0x10
    ctx->r10 = ADD32(ctx->r9, -0X10);
    // 0x8007CC6C: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8007CC70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007CC74: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8007CC78: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8007CC7C: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8007CC80: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x8007CC84: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8007CC88: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x8007CC8C: jal         0x800B8340
    // 0x8007CC90: add.s       $f12, $f8, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f16.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x8007CC90: add.s       $f12, $f8, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f16.fl;
    after_0:
    // 0x8007CC94: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8007CC98: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CC9C: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8007CCA0: lwc1        $f7, -0x20A0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X20A0);
    // 0x8007CCA4: lwc1        $f6, -0x209C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X209C);
    // 0x8007CCA8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8007CCAC: c.lt.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d < ctx->f4.d;
    // 0x8007CCB0: nop

    // 0x8007CCB4: bc1f        L_8007CD1C
    if (!c1cs) {
        // 0x8007CCB8: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_8007CD1C;
    }
    // 0x8007CCB8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CCBC: lwc1        $f11, -0x2098($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2098);
    // 0x8007CCC0: lwc1        $f10, -0x2094($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2094);
    // 0x8007CCC4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CCC8: sub.d       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f4.d - ctx->f10.d;
    // 0x8007CCCC: lwc1        $f7, -0x2090($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2090);
    // 0x8007CCD0: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x8007CCD4: lwc1        $f6, -0x208C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X208C);
    // 0x8007CCD8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8007CCDC: mul.d       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f6.d);
    // 0x8007CCE0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CCE4: lwc1        $f11, -0x2088($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2088);
    // 0x8007CCE8: lwc1        $f10, -0x2084($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2084);
    // 0x8007CCEC: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x8007CCF0: add.d       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f4.d + ctx->f10.d;
    // 0x8007CCF4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CCF8: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x8007CCFC: lwc1        $f7, -0x2080($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2080);
    // 0x8007CD00: lwc1        $f6, -0x207C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X207C);
    // 0x8007CD04: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8007CD08: mul.d       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f6.d);
    // 0x8007CD0C: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x8007CD10: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x8007CD14: b           L_8007CD58
    // 0x8007CD18: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
        goto L_8007CD58;
    // 0x8007CD18: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
L_8007CD1C:
    // 0x8007CD1C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CD20: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8007CD24: lwc1        $f19, -0x2078($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X2078);
    // 0x8007CD28: lwc1        $f18, -0x2074($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2074);
    // 0x8007CD2C: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x8007CD30: mul.d       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8007CD34: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CD38: lwc1        $f9, -0x2070($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2070);
    // 0x8007CD3C: lwc1        $f8, -0x206C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X206C);
    // 0x8007CD40: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x8007CD44: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x8007CD48: add.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d + ctx->f8.d;
    // 0x8007CD4C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x8007CD50: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8007CD54: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
L_8007CD58:
    // 0x8007CD58: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8007CD5C: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x8007CD60: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007CD64: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x8007CD68: c.lt.d      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.d < ctx->f10.d;
    // 0x8007CD6C: nop

    // 0x8007CD70: bc1f        L_8007CD84
    if (!c1cs) {
        // 0x8007CD74: nop
    
            goto L_8007CD84;
    }
    // 0x8007CD74: nop

    // 0x8007CD78: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007CD7C: nop

    // 0x8007CD80: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
L_8007CD84:
    // 0x8007CD84: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007CD88: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8007CD8C: addiu       $t3, $t3, -0x1F0
    ctx->r11 = ADD32(ctx->r11, -0X1F0);
    // 0x8007CD90: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x8007CD94: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8007CD98: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
L_8007CD9C:
    // 0x8007CD9C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8007CDA0: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8007CDA4: lwc1        $f18, 0xC($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0XC);
    // 0x8007CDA8: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8007CDAC: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8007CDB0: lwc1        $f8, 0x10($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X10);
    // 0x8007CDB4: lwc1        $f6, 0x14($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X14);
    // 0x8007CDB8: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8007CDBC: add.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8007CDC0: jal         0x800B7B40
    // 0x8007CDC4: add.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f6.fl;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x8007CDC4: add.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f6.fl;
    after_1:
    // 0x8007CDC8: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8007CDCC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8007CDD0: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8007CDD4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8007CDD8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8007CDDC: add.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x8007CDE0: slti        $at, $t6, 0x5
    ctx->r1 = SIGNED(ctx->r14) < 0X5 ? 1 : 0;
    // 0x8007CDE4: addiu       $t8, $t7, 0x1C
    ctx->r24 = ADD32(ctx->r15, 0X1C);
    // 0x8007CDE8: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x8007CDEC: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x8007CDF0: bne         $at, $zero, L_8007CD9C
    if (ctx->r1 != 0) {
        // 0x8007CDF4: swc1        $f8, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
            goto L_8007CD9C;
    }
    // 0x8007CDF4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x8007CDF8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8007CDFC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007CE00: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8007CE04: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8007CE08: div.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8007CE0C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8007CE10: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007CE14: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8007CE18: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CE1C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007CE20: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x8007CE24: mul.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x8007CE28: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x8007CE2C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8007CE30: cvt.s.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f4.fl = CVT_S_D(ctx->f8.d);
    // 0x8007CE34: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8007CE38: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x8007CE3C: add.d       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f16.d + ctx->f18.d;
    // 0x8007CE40: lwc1        $f16, -0x2064($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2064);
    // 0x8007CE44: lwc1        $f17, -0x2068($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2068);
    // 0x8007CE48: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x8007CE4C: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x8007CE50: mul.d       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x8007CE54: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x8007CE58: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x8007CE5C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8007CE60: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8007CE64: nop

    // 0x8007CE68: cvt.w.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_D(ctx->f18.d);
    // 0x8007CE6C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8007CE70: nop

    // 0x8007CE74: andi        $at, $t0, 0x4
    ctx->r1 = ctx->r8 & 0X4;
    // 0x8007CE78: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x8007CE7C: beq         $t0, $zero, L_8007CED0
    if (ctx->r8 == 0) {
        // 0x8007CE80: lui         $at, 0x41E0
        ctx->r1 = S32(0X41E0 << 16);
            goto L_8007CED0;
    }
    // 0x8007CE80: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8007CE84: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8007CE88: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007CE8C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007CE90: sub.d       $f6, $f18, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f6.d = ctx->f18.d - ctx->f6.d;
    // 0x8007CE94: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8007CE98: nop

    // 0x8007CE9C: cvt.w.d     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_D(ctx->f6.d);
    // 0x8007CEA0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8007CEA4: nop

    // 0x8007CEA8: andi        $at, $t0, 0x4
    ctx->r1 = ctx->r8 & 0X4;
    // 0x8007CEAC: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x8007CEB0: bne         $t0, $zero, L_8007CEC8
    if (ctx->r8 != 0) {
        // 0x8007CEB4: nop
    
            goto L_8007CEC8;
    }
    // 0x8007CEB4: nop

    // 0x8007CEB8: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x8007CEBC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007CEC0: b           L_8007CEE0
    // 0x8007CEC4: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_8007CEE0;
    // 0x8007CEC4: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_8007CEC8:
    // 0x8007CEC8: b           L_8007CEE0
    // 0x8007CECC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_8007CEE0;
    // 0x8007CECC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_8007CED0:
    // 0x8007CED0: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x8007CED4: nop

    // 0x8007CED8: bltz        $t0, L_8007CEC8
    if (SIGNED(ctx->r8) < 0) {
        // 0x8007CEDC: nop
    
            goto L_8007CEC8;
    }
    // 0x8007CEDC: nop

L_8007CEE0:
    // 0x8007CEE0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8007CEE4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8007CEE8: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
    // 0x8007CEEC: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x8007CEF0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8007CEF4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8007CEF8: slti        $at, $t3, 0x10
    ctx->r1 = SIGNED(ctx->r11) < 0X10 ? 1 : 0;
    // 0x8007CEFC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8007CF00: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8007CF04: bne         $at, $zero, L_8007CC5C
    if (ctx->r1 != 0) {
        // 0x8007CF08: sw          $t3, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r11;
            goto L_8007CC5C;
    }
    // 0x8007CF08: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x8007CF0C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8007CF10: nop

    // 0x8007CF14: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8007CF18: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x8007CF1C: bne         $at, $zero, L_8007CC34
    if (ctx->r1 != 0) {
        // 0x8007CF20: sw          $t8, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r24;
            goto L_8007CC34;
    }
    // 0x8007CF20: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x8007CF24: jal         0x8007CAC4
    // 0x8007CF28: nop

    func_8007CAC4(rdram, ctx);
        goto after_2;
    // 0x8007CF28: nop

    after_2:
    // 0x8007CF2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CF30: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8007CF34: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8007CF38: jr          $ra
    // 0x8007CF3C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8007CF3C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8007CF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CF40: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007CF44: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8007CF48: lbu         $t6, 0x3B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3B);
    // 0x8007CF4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007CF50: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007CF54: jal         0x800AC9C0
    // 0x8007CF58: sw          $t6, 0x3040($at)
    MEM_W(0X3040, ctx->r1) = ctx->r14;
    func_800AC9C0(rdram, ctx);
        goto after_0;
    // 0x8007CF58: sw          $t6, 0x3040($at)
    MEM_W(0X3040, ctx->r1) = ctx->r14;
    after_0:
    // 0x8007CF5C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007CF60: sw          $v0, -0x164($at)
    MEM_W(-0X164, ctx->r1) = ctx->r2;
    // 0x8007CF64: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007CF68: lw          $a0, -0x164($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X164);
    // 0x8007CF6C: jal         0x800A4364
    // 0x8007CF70: lui         $a1, 0x42DC
    ctx->r5 = S32(0X42DC << 16);
    func_800A4364(rdram, ctx);
        goto after_1;
    // 0x8007CF70: lui         $a1, 0x42DC
    ctx->r5 = S32(0X42DC << 16);
    after_1:
    // 0x8007CF74: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007CF78: lw          $a0, -0x164($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X164);
    // 0x8007CF7C: lui         $a1, 0x3C23
    ctx->r5 = S32(0X3C23 << 16);
    // 0x8007CF80: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x8007CF84: jal         0x800A43B0
    // 0x8007CF88: lui         $a2, 0x4280
    ctx->r6 = S32(0X4280 << 16);
    func_800A43B0(rdram, ctx);
        goto after_2;
    // 0x8007CF88: lui         $a2, 0x4280
    ctx->r6 = S32(0X4280 << 16);
    after_2:
    // 0x8007CF8C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007CF90: addiu       $a1, $a1, 0x3044
    ctx->r5 = ADD32(ctx->r5, 0X3044);
    // 0x8007CF94: jal         0x800ACEA0
    // 0x8007CF98: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    func_800ACEA0(rdram, ctx);
        goto after_3;
    // 0x8007CF98: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    after_3:
    // 0x8007CF9C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007CFA0: sw          $v0, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r2;
    // 0x8007CFA4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007CFA8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8007CFAC: lw          $t7, -0x158($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X158);
    // 0x8007CFB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007CFB4: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8007CFB8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8007CFBC: swc1        $f4, 0x10C($t7)
    MEM_W(0X10C, ctx->r15) = ctx->f4.u32l;
    // 0x8007CFC0: lw          $t8, -0x158($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X158);
    // 0x8007CFC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007CFC8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CFCC: swc1        $f6, 0x110($t8)
    MEM_W(0X110, ctx->r24) = ctx->f6.u32l;
    // 0x8007CFD0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8007CFD4: lw          $t9, -0x158($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X158);
    // 0x8007CFD8: lwc1        $f8, -0x2060($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2060);
    // 0x8007CFDC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CFE0: swc1        $f8, 0x104($t9)
    MEM_W(0X104, ctx->r25) = ctx->f8.u32l;
    // 0x8007CFE4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8007CFE8: lw          $t0, -0x158($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X158);
    // 0x8007CFEC: lwc1        $f10, -0x205C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X205C);
    // 0x8007CFF0: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8007CFF4: swc1        $f10, 0x108($t0)
    MEM_W(0X108, ctx->r8) = ctx->f10.u32l;
    // 0x8007CFF8: lw          $t1, -0x158($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X158);
    // 0x8007CFFC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007D000: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8007D004: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8007D008: swc1        $f16, 0xD8($t1)
    MEM_W(0XD8, ctx->r9) = ctx->f16.u32l;
    // 0x8007D00C: lw          $t2, -0x158($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X158);
    // 0x8007D010: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007D014: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007D018: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8007D01C: swc1        $f18, 0xDC($t2)
    MEM_W(0XDC, ctx->r10) = ctx->f18.u32l;
    // 0x8007D020: lw          $t3, -0x158($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X158);
    // 0x8007D024: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007D028: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007D02C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8007D030: swc1        $f4, 0xE0($t3)
    MEM_W(0XE0, ctx->r11) = ctx->f4.u32l;
    // 0x8007D034: lw          $t4, -0x158($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X158);
    // 0x8007D038: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007D03C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8007D040: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8007D044: swc1        $f6, 0xE8($t4)
    MEM_W(0XE8, ctx->r12) = ctx->f6.u32l;
    // 0x8007D048: lw          $t5, -0x158($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X158);
    // 0x8007D04C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007D050: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007D054: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8007D058: swc1        $f8, 0xEC($t5)
    MEM_W(0XEC, ctx->r13) = ctx->f8.u32l;
    // 0x8007D05C: lw          $t6, -0x158($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X158);
    // 0x8007D060: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007D064: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8007D068: swc1        $f10, 0xF0($t6)
    MEM_W(0XF0, ctx->r14) = ctx->f10.u32l;
    // 0x8007D06C: lw          $t8, -0x158($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X158);
    // 0x8007D070: addiu       $t7, $zero, 0x15E
    ctx->r15 = ADD32(0, 0X15E);
    // 0x8007D074: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8007D078: sw          $t7, 0xD4($t8)
    MEM_W(0XD4, ctx->r24) = ctx->r15;
    // 0x8007D07C: lw          $t9, -0x158($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X158);
    // 0x8007D080: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007D084: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8007D088: addiu       $t1, $t1, 0x3060
    ctx->r9 = ADD32(ctx->r9, 0X3060);
    // 0x8007D08C: swc1        $f16, 0x114($t9)
    MEM_W(0X114, ctx->r25) = ctx->f16.u32l;
    // 0x8007D090: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007D094: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8007D098: addiu       $t0, $t0, -0x2F0
    ctx->r8 = ADD32(ctx->r8, -0X2F0);
    // 0x8007D09C: sw          $t0, 0x3058($at)
    MEM_W(0X3058, ctx->r1) = ctx->r8;
    // 0x8007D0A0: sw          $t1, 0x3054($at)
    MEM_W(0X3054, ctx->r1) = ctx->r9;
    // 0x8007D0A4: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x8007D0A8: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8007D0AC: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x8007D0B0: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x8007D0B4: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8007D0B8: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8007D0BC: lui         $t3, 0xFD90
    ctx->r11 = S32(0XFD90 << 16);
    // 0x8007D0C0: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
    // 0x8007D0C4: addiu       $t4, $t4, -0x2F0
    ctx->r12 = ADD32(ctx->r12, -0X2F0);
    // 0x8007D0C8: addiu       $t5, $t5, 0x3044
    ctx->r13 = ADD32(ctx->r13, 0X3044);
    // 0x8007D0CC: lui         $at, 0xAFF
    ctx->r1 = S32(0XAFF << 16);
    // 0x8007D0D0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8007D0D4: ori         $at, $at, 0xFFF8
    ctx->r1 = ctx->r1 | 0XFFF8;
    // 0x8007D0D8: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x8007D0DC: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x8007D0E0: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8007D0E4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8007D0E8: lui         $t2, 0xF590
    ctx->r10 = S32(0XF590 << 16);
    // 0x8007D0EC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8007D0F0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8007D0F4: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8007D0F8: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x8007D0FC: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8007D100: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8007D104: lui         $t1, 0x701
    ctx->r9 = S32(0X701 << 16);
    // 0x8007D108: ori         $t1, $t1, 0x40
    ctx->r9 = ctx->r9 | 0X40;
    // 0x8007D10C: sw          $t1, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r9;
    // 0x8007D110: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8007D114: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x8007D118: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x8007D11C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8007D120: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8007D124: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8007D128: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8007D12C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8007D130: lui         $t3, 0xF300
    ctx->r11 = S32(0XF300 << 16);
    // 0x8007D134: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8007D138: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007D13C: lui         $t4, 0x707
    ctx->r12 = S32(0X707 << 16);
    // 0x8007D140: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8007D144: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8007D148: addiu       $t2, $t0, 0x8
    ctx->r10 = ADD32(ctx->r8, 0X8);
    // 0x8007D14C: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x8007D150: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
    // 0x8007D154: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8007D158: ori         $t4, $t4, 0xF400
    ctx->r12 = ctx->r12 | 0XF400;
    // 0x8007D15C: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8007D160: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8007D164: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8007D168: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8007D16C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8007D170: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8007D174: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8007D178: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8007D17C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8007D180: lui         $t1, 0xF588
    ctx->r9 = S32(0XF588 << 16);
    // 0x8007D184: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8007D188: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8007D18C: ori         $t1, $t1, 0x400
    ctx->r9 = ctx->r9 | 0X400;
    // 0x8007D190: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8007D194: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D198: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8007D19C: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x8007D1A0: sw          $t1, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r9;
    // 0x8007D1A4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D1A8: lui         $t5, 0x1
    ctx->r13 = S32(0X1 << 16);
    // 0x8007D1AC: ori         $t5, $t5, 0x40
    ctx->r13 = ctx->r13 | 0X40;
    // 0x8007D1B0: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8007D1B4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8007D1B8: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x8007D1BC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8007D1C0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8007D1C4: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8007D1C8: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x8007D1CC: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8007D1D0: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8007D1D4: lui         $t2, 0x3
    ctx->r10 = S32(0X3 << 16);
    // 0x8007D1D8: ori         $t2, $t2, 0xC03C
    ctx->r10 = ctx->r10 | 0XC03C;
    // 0x8007D1DC: jal         0x8007C8B0
    // 0x8007D1E0: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    func_8007C8B0(rdram, ctx);
        goto after_4;
    // 0x8007D1E0: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    after_4:
    // 0x8007D1E4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007D1E8: lw          $a0, -0x158($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X158);
    // 0x8007D1EC: jal         0x8007D458
    // 0x8007D1F0: nop

    func_8007D458(rdram, ctx);
        goto after_5;
    // 0x8007D1F0: nop

    after_5:
    // 0x8007D1F4: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    // 0x8007D1F8: jal         0x800ADE5C
    // 0x8007D1FC: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    func_800ADE5C(rdram, ctx);
        goto after_6;
    // 0x8007D1FC: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    after_6:
    // 0x8007D200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007D204: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007D208: sw          $v0, -0x154($at)
    MEM_W(-0X154, ctx->r1) = ctx->r2;
    // 0x8007D20C: jr          $ra
    // 0x8007D210: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8007D210: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8007D214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D214: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007D218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007D21C: jal         0x8004A34C
    // 0x8007D220: nop

    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x8007D220: nop

    after_0:
    // 0x8007D224: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007D228: lw          $a0, -0x158($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X158);
    // 0x8007D22C: jal         0x800AD120
    // 0x8007D230: nop

    func_800AD120(rdram, ctx);
        goto after_1;
    // 0x8007D230: nop

    after_1:
    // 0x8007D234: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007D238: sb          $zero, 0x3CF0($at)
    MEM_B(0X3CF0, ctx->r1) = 0;
    // 0x8007D23C: jal         0x800905E8
    // 0x8007D240: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800905E8(rdram, ctx);
        goto after_2;
    // 0x8007D240: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8007D244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007D248: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8007D24C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007D250: sb          $t6, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r14;
    // 0x8007D254: jr          $ra
    // 0x8007D258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8007D258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007D25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D25C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8007D260: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007D264: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8007D268: lwc1        $f9, -0x2058($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2058);
    // 0x8007D26C: lwc1        $f8, -0x2054($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2054);
    // 0x8007D270: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8007D274: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8007D278: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8007D27C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8007D280: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007D284: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8007D288: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8007D28C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8007D290: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8007D294: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x8007D298: lw          $t7, 0xC0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC0);
    // 0x8007D29C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007D2A0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8007D2A4: lwc1        $f19, -0x2050($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X2050);
    // 0x8007D2A8: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8007D2AC: lwc1        $f18, -0x204C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X204C);
    // 0x8007D2B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007D2B4: div.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f6.d);
    // 0x8007D2B8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007D2BC: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8007D2C0: nop

    // 0x8007D2C4: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x8007D2C8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8007D2CC: lwc1        $f8, -0x2044($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2044);
    // 0x8007D2D0: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x8007D2D4: lw          $t8, 0xC4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0XC4);
    // 0x8007D2D8: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x8007D2DC: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x8007D2E0: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x8007D2E4: lwc1        $f9, -0x2048($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2048);
    // 0x8007D2E8: lw          $t9, 0xC0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC0);
    // 0x8007D2EC: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8007D2F0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8007D2F4: nop

    // 0x8007D2F8: cvt.d.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.d = CVT_D_W(ctx->f4.u32l);
    // 0x8007D2FC: nop

    // 0x8007D300: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x8007D304: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x8007D308: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x8007D30C: lw          $t0, 0xC0($t6)
    ctx->r8 = MEM_W(ctx->r14, 0XC0);
    // 0x8007D310: nop

    // 0x8007D314: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x8007D318: beq         $t1, $zero, L_8007D448
    if (ctx->r9 == 0) {
        // 0x8007D31C: sh          $t0, 0x4A($sp)
        MEM_H(0X4A, ctx->r29) = ctx->r8;
            goto L_8007D448;
    }
    // 0x8007D31C: sh          $t0, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r8;
L_8007D320:
    // 0x8007D320: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8007D324: jal         0x800B81D0
    // 0x8007D328: nop

    cosf_recomp(rdram, ctx);
        goto after_0;
    // 0x8007D328: nop

    after_0:
    // 0x8007D32C: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8007D330: jal         0x800B7B40
    // 0x8007D334: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x8007D334: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8007D338: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8007D33C: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8007D340: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8007D344: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8007D348: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007D34C: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8007D350: mul.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8007D354: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x8007D358: jal         0x800B7B40
    // 0x8007D35C: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x8007D35C: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x8007D360: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8007D364: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007D368: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8007D36C: lwc1        $f17, -0x2040($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X2040);
    // 0x8007D370: lwc1        $f16, -0x203C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X203C);
    // 0x8007D374: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8007D378: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8007D37C: mul.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8007D380: cvt.s.d     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f18.fl = CVT_S_D(ctx->f4.d);
    // 0x8007D384: jal         0x800B81D0
    // 0x8007D388: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x8007D388: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x8007D38C: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8007D390: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8007D394: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8007D398: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007D39C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x8007D3A0: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x8007D3A4: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8007D3A8: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8007D3AC: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8007D3B0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x8007D3B4: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8007D3B8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8007D3BC: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8007D3C0: nop

    // 0x8007D3C4: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8007D3C8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x8007D3CC: swc1        $f4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f4.u32l;
    // 0x8007D3D0: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8007D3D4: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8007D3D8: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x8007D3DC: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8007D3E0: swc1        $f6, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f6.u32l;
    // 0x8007D3E4: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8007D3E8: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8007D3EC: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x8007D3F0: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8007D3F4: swc1        $f4, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f4.u32l;
    // 0x8007D3F8: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8007D3FC: lhu         $t5, 0x4A($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X4A);
    // 0x8007D400: nop

    // 0x8007D404: sw          $t5, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->r13;
    // 0x8007D408: lhu         $t8, 0x4A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X4A);
    // 0x8007D40C: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8007D410: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8007D414: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8007D418: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8007D41C: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x8007D420: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8007D424: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8007D428: andi        $t1, $t9, 0xFFFF
    ctx->r9 = ctx->r25 & 0XFFFF;
    // 0x8007D42C: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8007D430: addiu       $t0, $t6, 0x28
    ctx->r8 = ADD32(ctx->r14, 0X28);
    // 0x8007D434: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x8007D438: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x8007D43C: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x8007D440: bne         $t1, $zero, L_8007D320
    if (ctx->r9 != 0) {
        // 0x8007D444: sh          $t9, 0x4A($sp)
        MEM_H(0X4A, ctx->r29) = ctx->r25;
            goto L_8007D320;
    }
    // 0x8007D444: sh          $t9, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r25;
L_8007D448:
    // 0x8007D448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007D44C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8007D450: jr          $ra
    // 0x8007D454: nop

    return;
    // 0x8007D454: nop

;}
RECOMP_FUNC void func_8007D458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D458: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8007D45C: sw          $t6, 0x118($a0)
    MEM_W(0X118, ctx->r4) = ctx->r14;
    // 0x8007D460: lw          $t7, 0xC4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC4);
    // 0x8007D464: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8007D468: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007D46C: lwc1        $f4, -0x2038($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2038);
    // 0x8007D470: sw          $zero, 0xC($sp)
    MEM_W(0XC, ctx->r29) = 0;
    // 0x8007D474: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x8007D478: swc1        $f4, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f4.u32l;
    // 0x8007D47C: lw          $t8, 0xC0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC0);
    // 0x8007D480: nop

    // 0x8007D484: blez        $t8, L_8007D508
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8007D488: nop
    
            goto L_8007D508;
    }
    // 0x8007D488: nop

L_8007D48C:
    // 0x8007D48C: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x8007D490: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8007D494: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007D498: sw          $t9, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r25;
    // 0x8007D49C: lwc1        $f6, 0x8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8007D4A0: lwc1        $f10, -0x202C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X202C);
    // 0x8007D4A4: lwc1        $f11, -0x2030($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X2030);
    // 0x8007D4A8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8007D4AC: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8007D4B0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8007D4B4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8007D4B8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007D4BC: swc1        $f18, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f18.u32l;
    // 0x8007D4C0: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8007D4C4: lwc1        $f8, -0x2024($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2024);
    // 0x8007D4C8: lwc1        $f9, -0x2028($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2028);
    // 0x8007D4CC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8007D4D0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8007D4D4: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8007D4D8: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8007D4DC: addiu       $t5, $t4, 0x28
    ctx->r13 = ADD32(ctx->r12, 0X28);
    // 0x8007D4E0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8007D4E4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8007D4E8: sw          $t3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r11;
    // 0x8007D4EC: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x8007D4F0: swc1        $f16, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f16.u32l;
    // 0x8007D4F4: lw          $t6, 0xC0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC0);
    // 0x8007D4F8: nop

    // 0x8007D4FC: slt         $at, $t3, $t6
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8007D500: bne         $at, $zero, L_8007D48C
    if (ctx->r1 != 0) {
        // 0x8007D504: nop
    
            goto L_8007D48C;
    }
    // 0x8007D504: nop

L_8007D508:
    // 0x8007D508: jr          $ra
    // 0x8007D50C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8007D50C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8007D510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D510: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007D514: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8007D518: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8007D51C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007D520: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8007D524: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8007D528: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8007D52C: lw          $t7, 0xC4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC4);
    // 0x8007D530: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007D534: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8007D538: lw          $t8, 0xC0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0XC0);
    // 0x8007D53C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8007D540: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8007D544: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007D548: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x8007D54C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007D550: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8007D554: div.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x8007D558: lwc1        $f8, -0x201C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X201C);
    // 0x8007D55C: lwc1        $f9, -0x2020($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2020);
    // 0x8007D560: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x8007D564: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8007D568: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007D56C: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x8007D570: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8007D574: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8007D578: mul.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x8007D57C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8007D580: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007D584: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x8007D588: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x8007D58C: mul.d       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x8007D590: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x8007D594: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8007D598: lw          $t9, 0xC0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC0);
    // 0x8007D59C: nop

    // 0x8007D5A0: blez        $t9, L_8007D698
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8007D5A4: nop
    
            goto L_8007D698;
    }
    // 0x8007D5A4: nop

L_8007D5A8:
    // 0x8007D5A8: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8007D5AC: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8007D5B0: nop

    // 0x8007D5B4: mul.s       $f12, $f16, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8007D5B8: jal         0x800B7B40
    // 0x8007D5BC: nop

    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x8007D5BC: nop

    after_0:
    // 0x8007D5C0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007D5C4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8007D5C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007D5CC: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8007D5D0: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x8007D5D4: add.d       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f18.d + ctx->f6.d;
    // 0x8007D5D8: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8007D5DC: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x8007D5E0: mul.d       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x8007D5E4: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8007D5E8: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x8007D5EC: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x8007D5F0: jal         0x800B81D0
    // 0x8007D5F4: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x8007D5F4: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_1:
    // 0x8007D5F8: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8007D5FC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8007D600: mul.s       $f16, $f0, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8007D604: swc1        $f16, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f16.u32l;
    // 0x8007D608: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8007D60C: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8007D610: nop

    // 0x8007D614: swc1        $f10, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f10.u32l;
    // 0x8007D618: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8007D61C: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8007D620: jal         0x800B7B40
    // 0x8007D624: add.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f6.fl;
    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x8007D624: add.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f6.fl;
    after_2:
    // 0x8007D628: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8007D62C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8007D630: mul.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8007D634: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007D638: swc1        $f4, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f4.u32l;
    // 0x8007D63C: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8007D640: lwc1        $f18, -0x2014($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2014);
    // 0x8007D644: lwc1        $f19, -0x2018($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X2018);
    // 0x8007D648: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x8007D64C: mul.d       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x8007D650: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8007D654: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8007D658: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8007D65C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8007D660: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8007D664: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8007D668: add.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8007D66C: addiu       $t7, $t5, 0x28
    ctx->r15 = ADD32(ctx->r13, 0X28);
    // 0x8007D670: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8007D674: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x8007D678: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8007D67C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x8007D680: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x8007D684: lw          $t6, 0xC0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0XC0);
    // 0x8007D688: nop

    // 0x8007D68C: slt         $at, $t4, $t6
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8007D690: bne         $at, $zero, L_8007D5A8
    if (ctx->r1 != 0) {
        // 0x8007D694: nop
    
            goto L_8007D5A8;
    }
    // 0x8007D694: nop

L_8007D698:
    // 0x8007D698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007D69C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8007D6A0: jr          $ra
    // 0x8007D6A4: nop

    return;
    // 0x8007D6A4: nop

;}
RECOMP_FUNC void func_8007D6A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D6A8: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x8007D6AC: sw          $a0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r4;
    // 0x8007D6B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007D6B4: lw          $a0, 0xE0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE0);
    // 0x8007D6B8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007D6BC: jal         0x800A4B98
    // 0x8007D6C0: addiu       $a1, $a1, 0x3044
    ctx->r5 = ADD32(ctx->r5, 0X3044);
    func_800A4B98(rdram, ctx);
        goto after_0;
    // 0x8007D6C0: addiu       $a1, $a1, 0x3044
    ctx->r5 = ADD32(ctx->r5, 0X3044);
    after_0:
    // 0x8007D6C4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8007D6C8: lw          $t6, 0x3128($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3128);
    // 0x8007D6CC: sw          $v0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r2;
    // 0x8007D6D0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8007D6D4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007D6D8: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8007D6DC: lw          $t9, 0xE0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE0);
    // 0x8007D6E0: sw          $t7, 0x3128($at)
    MEM_W(0X3128, ctx->r1) = ctx->r15;
    // 0x8007D6E4: sw          $t8, 0x3128($at)
    MEM_W(0X3128, ctx->r1) = ctx->r24;
    // 0x8007D6E8: andi        $t1, $t8, 0xFFF
    ctx->r9 = ctx->r24 & 0XFFF;
    // 0x8007D6EC: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x8007D6F0: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8007D6F4: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x8007D6F8: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8007D6FC: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x8007D700: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8007D704: sw          $t0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r8;
    // 0x8007D708: or          $t4, $t3, $t1
    ctx->r12 = ctx->r11 | ctx->r9;
    // 0x8007D70C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8007D710: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8007D714: lui         $t0, 0xE300
    ctx->r8 = S32(0XE300 << 16);
    // 0x8007D718: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8007D71C: lw          $t7, 0xE0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE0);
    // 0x8007D720: ori         $t0, $t0, 0xC00
    ctx->r8 = ctx->r8 | 0XC00;
    // 0x8007D724: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x8007D728: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8007D72C: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8007D730: sw          $t9, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r25;
    // 0x8007D734: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
    // 0x8007D738: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8007D73C: lui         $t2, 0x8
    ctx->r10 = S32(0X8 << 16);
    // 0x8007D740: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8007D744: lw          $t1, 0xE0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE0);
    // 0x8007D748: lui         $t5, 0xD9D8
    ctx->r13 = S32(0XD9D8 << 16);
    // 0x8007D74C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x8007D750: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8007D754: addiu       $t4, $t1, 0x8
    ctx->r12 = ADD32(ctx->r9, 0X8);
    // 0x8007D758: sw          $t4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r12;
    // 0x8007D75C: ori         $t5, $t5, 0xF9FA
    ctx->r13 = ctx->r13 | 0XF9FA;
    // 0x8007D760: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8007D764: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8007D768: lui         $t8, 0xD9FF
    ctx->r24 = S32(0XD9FF << 16);
    // 0x8007D76C: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8007D770: lw          $t9, 0xE0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE0);
    // 0x8007D774: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x8007D778: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8007D77C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8007D780: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8007D784: sw          $t0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r8;
    // 0x8007D788: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8007D78C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8007D790: lui         $t3, 0x20
    ctx->r11 = S32(0X20 << 16);
    // 0x8007D794: ori         $t3, $t3, 0x4
    ctx->r11 = ctx->r11 | 0X4;
    // 0x8007D798: sw          $t3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r11;
    // 0x8007D79C: lw          $t4, 0xE0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE0);
    // 0x8007D7A0: lui         $t6, 0xFC11
    ctx->r14 = S32(0XFC11 << 16);
    // 0x8007D7A4: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x8007D7A8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8007D7AC: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8007D7B0: sw          $t5, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r13;
    // 0x8007D7B4: ori         $t6, $t6, 0x9623
    ctx->r14 = ctx->r14 | 0X9623;
    // 0x8007D7B8: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8007D7BC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8007D7C0: lui         $t9, 0xFF2F
    ctx->r25 = S32(0XFF2F << 16);
    // 0x8007D7C4: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x8007D7C8: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8007D7CC: lw          $t8, 0xE0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE0);
    // 0x8007D7D0: lui         $t3, 0xE200
    ctx->r11 = S32(0XE200 << 16);
    // 0x8007D7D4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x8007D7D8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8007D7DC: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x8007D7E0: sw          $t2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r10;
    // 0x8007D7E4: ori         $t3, $t3, 0x1C
    ctx->r11 = ctx->r11 | 0X1C;
    // 0x8007D7E8: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
    // 0x8007D7EC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8007D7F0: lui         $t4, 0x50
    ctx->r12 = S32(0X50 << 16);
    // 0x8007D7F4: ori         $t4, $t4, 0x4240
    ctx->r12 = ctx->r12 | 0X4240;
    // 0x8007D7F8: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8007D7FC: lw          $t6, 0xE0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE0);
    // 0x8007D800: lui         $t9, 0xE300
    ctx->r25 = S32(0XE300 << 16);
    // 0x8007D804: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8007D808: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8007D80C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8007D810: sw          $t7, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r15;
    // 0x8007D814: ori         $t9, $t9, 0xA01
    ctx->r25 = ctx->r25 | 0XA01;
    // 0x8007D818: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8007D81C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8007D820: lui         $t8, 0x10
    ctx->r24 = S32(0X10 << 16);
    // 0x8007D824: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x8007D828: lw          $t3, 0xE0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE0);
    // 0x8007D82C: lui         $t4, 0xFA00
    ctx->r12 = S32(0XFA00 << 16);
    // 0x8007D830: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8007D834: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8007D838: addiu       $t1, $t3, 0x8
    ctx->r9 = ADD32(ctx->r11, 0X8);
    // 0x8007D83C: sw          $t1, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r9;
    // 0x8007D840: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8007D844: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8007D848: addiu       $t6, $zero, -0x80
    ctx->r14 = ADD32(0, -0X80);
    // 0x8007D84C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8007D850: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8007D854: lw          $t9, 0x312C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X312C);
    // 0x8007D858: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x8007D85C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8007D860: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8007D864: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007D868: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8007D86C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x8007D870: jal         0x800B04BC
    // 0x8007D874: nop

    func_800B04BC(rdram, ctx);
        goto after_1;
    // 0x8007D874: nop

    after_1:
    // 0x8007D878: addiu       $t8, $sp, 0xA0
    ctx->r24 = ADD32(ctx->r29, 0XA0);
    // 0x8007D87C: addiu       $t3, $t8, 0x3C
    ctx->r11 = ADD32(ctx->r24, 0X3C);
    // 0x8007D880: addiu       $t0, $sp, 0x60
    ctx->r8 = ADD32(ctx->r29, 0X60);
L_8007D884:
    // 0x8007D884: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8007D888: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8007D88C: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x8007D890: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x8007D894: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8007D898: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x8007D89C: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x8007D8A0: bne         $t8, $t3, L_8007D884
    if (ctx->r24 != ctx->r11) {
        // 0x8007D8A4: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_8007D884;
    }
    // 0x8007D8A4: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x8007D8A8: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8007D8AC: nop

    // 0x8007D8B0: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x8007D8B4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
L_8007D8B8:
    // 0x8007D8B8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8007D8BC: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x8007D8C0: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8007D8C4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8007D8C8: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x8007D8CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007D8D0: lui         $at, 0xC050
    ctx->r1 = S32(0XC050 << 16);
    // 0x8007D8D4: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8007D8D8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8007D8DC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8007D8E0: lui         $at, 0xC300
    ctx->r1 = S32(0XC300 << 16);
    // 0x8007D8E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007D8E8: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8007D8EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007D8F0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8007D8F4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x8007D8F8: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x8007D8FC: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    // 0x8007D900: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x8007D904: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x8007D908: jal         0x800AFBBC
    // 0x8007D90C: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    func_800AFBBC(rdram, ctx);
        goto after_2;
    // 0x8007D90C: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x8007D910: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8007D914: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8007D918: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8007D91C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8007D920: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8007D924: addiu       $t6, $t6, -0x150
    ctx->r14 = ADD32(ctx->r14, -0X150);
    // 0x8007D928: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x8007D92C: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    // 0x8007D930: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8007D934: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    // 0x8007D938: swc1        $f18, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f18.u32l;
    // 0x8007D93C: jal         0x800B78D0
    // 0x8007D940: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    guMtxF2L(rdram, ctx);
        goto after_3;
    // 0x8007D940: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x8007D944: lw          $t7, 0xE0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE0);
    // 0x8007D948: lui         $t2, 0xDA38
    ctx->r10 = S32(0XDA38 << 16);
    // 0x8007D94C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8007D950: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8007D954: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8007D958: sw          $t9, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r25;
    // 0x8007D95C: ori         $t2, $t2, 0x3
    ctx->r10 = ctx->r10 | 0X3;
    // 0x8007D960: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8007D964: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8007D968: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8007D96C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8007D970: addiu       $t1, $t1, -0x150
    ctx->r9 = ADD32(ctx->r9, -0X150);
    // 0x8007D974: sll         $t0, $t8, 6
    ctx->r8 = S32(ctx->r24 << 6);
    // 0x8007D978: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x8007D97C: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8007D980: lw          $t6, 0xE0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE0);
    // 0x8007D984: lui         $t9, 0xDE00
    ctx->r25 = S32(0XDE00 << 16);
    // 0x8007D988: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8007D98C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D990: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8007D994: sw          $t7, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r15;
    // 0x8007D998: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x8007D99C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D9A0: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8007D9A4: addiu       $t3, $t3, 0x3108
    ctx->r11 = ADD32(ctx->r11, 0X3108);
    // 0x8007D9A8: sw          $t3, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r11;
    // 0x8007D9AC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8007D9B0: nop

    // 0x8007D9B4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8007D9B8: slti        $at, $t1, 0x8
    ctx->r1 = SIGNED(ctx->r9) < 0X8 ? 1 : 0;
    // 0x8007D9BC: bne         $at, $zero, L_8007D8B8
    if (ctx->r1 != 0) {
        // 0x8007D9C0: sw          $t1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r9;
            goto L_8007D8B8;
    }
    // 0x8007D9C0: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x8007D9C4: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8007D9C8: lw          $t4, 0x312C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X312C);
    // 0x8007D9CC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007D9D0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8007D9D4: sw          $t5, 0x312C($at)
    MEM_W(0X312C, ctx->r1) = ctx->r13;
    // 0x8007D9D8: slti        $at, $t5, 0x169
    ctx->r1 = SIGNED(ctx->r13) < 0X169 ? 1 : 0;
    // 0x8007D9DC: bne         $at, $zero, L_8007D9F0
    if (ctx->r1 != 0) {
        // 0x8007D9E0: nop
    
            goto L_8007D9F0;
    }
    // 0x8007D9E0: nop

    // 0x8007D9E4: addiu       $t6, $t5, -0x168
    ctx->r14 = ADD32(ctx->r13, -0X168);
    // 0x8007D9E8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007D9EC: sw          $t6, 0x312C($at)
    MEM_W(0X312C, ctx->r1) = ctx->r14;
L_8007D9F0:
    // 0x8007D9F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007D9F4: lw          $v0, 0xE0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XE0);
    // 0x8007D9F8: jr          $ra
    // 0x8007D9FC: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x8007D9FC: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_8007DA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DA00: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8007DA04: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8007DA08: lw          $t6, 0x3040($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3040);
    // 0x8007DA0C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8007DA10: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8007DA14: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007DA18: beq         $t6, $zero, L_8007DAE0
    if (ctx->r14 == 0) {
        // 0x8007DA1C: swc1        $f20, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
            goto L_8007DAE0;
    }
    // 0x8007DA1C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8007DA20: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8007DA24: addiu       $t8, $t8, 0x3150
    ctx->r24 = ADD32(ctx->r24, 0X3150);
    // 0x8007DA28: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8007DA2C: addiu       $t7, $sp, 0x38
    ctx->r15 = ADD32(ctx->r29, 0X38);
    // 0x8007DA30: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x8007DA34: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x8007DA38: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x8007DA3C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007DA40: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x8007DA44: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x8007DA48: lw          $a0, -0x154($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X154);
    // 0x8007DA4C: jal         0x800AE6E4
    // 0x8007DA50: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_800AE6E4(rdram, ctx);
        goto after_0;
    // 0x8007DA50: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x8007DA54: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007DA58: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007DA5C: lw          $a1, 0x3180($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3180);
    // 0x8007DA60: lw          $a0, -0x154($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X154);
    // 0x8007DA64: jal         0x800AE700
    // 0x8007DA68: nop

    func_800AE700(rdram, ctx);
        goto after_1;
    // 0x8007DA68: nop

    after_1:
    // 0x8007DA6C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8007DA70: lhu         $t1, 0x20B0($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X20B0);
    // 0x8007DA74: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007DA78: xori        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 ^ 0X1;
    // 0x8007DA7C: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8007DA80: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8007DA84: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8007DA88: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8007DA8C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8007DA90: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8007DA94: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8007DA98: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8007DA9C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8007DAA0: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8007DAA4: lui         $t4, 0x8039
    ctx->r12 = S32(0X8039 << 16);
    // 0x8007DAA8: addiu       $t4, $t4, -0x5300
    ctx->r12 = ADD32(ctx->r12, -0X5300);
    // 0x8007DAAC: sll         $t3, $t3, 7
    ctx->r11 = S32(ctx->r11 << 7);
    // 0x8007DAB0: lw          $a0, -0x154($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X154);
    // 0x8007DAB4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x8007DAB8: addiu       $t5, $zero, 0xFA
    ctx->r13 = ADD32(0, 0XFA);
    // 0x8007DABC: addiu       $t6, $zero, 0xFA
    ctx->r14 = ADD32(0, 0XFA);
    // 0x8007DAC0: addiu       $t9, $zero, 0xC0
    ctx->r25 = ADD32(0, 0XC0);
    // 0x8007DAC4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8007DAC8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8007DACC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8007DAD0: addu        $a2, $t3, $t4
    ctx->r6 = ADD32(ctx->r11, ctx->r12);
    // 0x8007DAD4: jal         0x800AE220
    // 0x8007DAD8: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    func_800AE220(rdram, ctx);
        goto after_2;
    // 0x8007DAD8: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    after_2:
    // 0x8007DADC: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
L_8007DAE0:
    // 0x8007DAE0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8007DAE4: lbu         $t7, -0x118($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X118);
    // 0x8007DAE8: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8007DAEC: bne         $t7, $at, L_8007DB40
    if (ctx->r15 != ctx->r1) {
        // 0x8007DAF0: nop
    
            goto L_8007DB40;
    }
    // 0x8007DAF0: nop

    // 0x8007DAF4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8007DAF8: addiu       $t8, $t8, -0x10D0
    ctx->r24 = ADD32(ctx->r24, -0X10D0);
    // 0x8007DAFC: lw          $t0, 0x1C($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X1C);
    // 0x8007DB00: nop

    // 0x8007DB04: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x8007DB08: nop

    // 0x8007DB0C: andi        $t2, $t1, 0x1000
    ctx->r10 = ctx->r9 & 0X1000;
    // 0x8007DB10: beq         $t2, $zero, L_8007DB40
    if (ctx->r10 == 0) {
        // 0x8007DB14: nop
    
            goto L_8007DB40;
    }
    // 0x8007DB14: nop

    // 0x8007DB18: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x8007DB1C: nop

    // 0x8007DB20: andi        $t4, $t3, 0x1000
    ctx->r12 = ctx->r11 & 0X1000;
    // 0x8007DB24: bne         $t4, $zero, L_8007DB40
    if (ctx->r12 != 0) {
        // 0x8007DB28: nop
    
            goto L_8007DB40;
    }
    // 0x8007DB28: nop

    // 0x8007DB2C: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8007DB30: lw          $t5, 0x3040($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3040);
    // 0x8007DB34: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DB38: xori        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 ^ 0X1;
    // 0x8007DB3C: sw          $t6, 0x3040($at)
    MEM_W(0X3040, ctx->r1) = ctx->r14;
L_8007DB40:
    // 0x8007DB40: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007DB44: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007DB48: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007DB4C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007DB50: lw          $a0, -0x164($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X164);
    // 0x8007DB54: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8007DB58: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8007DB5C: lui         $a3, 0xC0A0
    ctx->r7 = S32(0XC0A0 << 16);
    // 0x8007DB60: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8007DB64: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8007DB68: jal         0x800A4304
    // 0x8007DB6C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_800A4304(rdram, ctx);
        goto after_3;
    // 0x8007DB6C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8007DB70: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8007DB74: lw          $a1, -0x164($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X164);
    // 0x8007DB78: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8007DB7C: jal         0x800A724C
    // 0x8007DB80: nop

    func_800A724C(rdram, ctx);
        goto after_4;
    // 0x8007DB80: nop

    after_4:
    // 0x8007DB84: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DB88: lwc1        $f12, 0x316C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X316C);
    // 0x8007DB8C: jal         0x800B7B40
    // 0x8007DB90: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    sinf_recomp(rdram, ctx);
        goto after_5;
    // 0x8007DB90: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_5:
    // 0x8007DB94: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DB98: lwc1        $f10, 0x315C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X315C);
    // 0x8007DB9C: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x8007DBA0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8007DBA4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8007DBA8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8007DBAC: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8007DBB0: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x8007DBB4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8007DBB8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007DBBC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007DBC0: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x8007DBC4: lwc1        $f4, -0x200C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X200C);
    // 0x8007DBC8: lwc1        $f5, -0x2010($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2010);
    // 0x8007DBCC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8007DBD0: cvt.d.s     $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f18.d = CVT_D_S(ctx->f20.fl);
    // 0x8007DBD4: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8007DBD8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8007DBDC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007DBE0: lwc1        $f9, -0x2008($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2008);
    // 0x8007DBE4: lwc1        $f8, -0x2004($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2004);
    // 0x8007DBE8: lui         $at, 0x405E
    ctx->r1 = S32(0X405E << 16);
    // 0x8007DBEC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8007DBF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007DBF4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8007DBF8: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8007DBFC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007DC00: mul.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x8007DC04: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x8007DC08: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007DC0C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007DC10: lw          $a0, -0x158($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X158);
    // 0x8007DC14: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8007DC18: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8007DC1C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8007DC20: lui         $a2, 0x40E0
    ctx->r6 = S32(0X40E0 << 16);
    // 0x8007DC24: jal         0x8007D510
    // 0x8007DC28: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_8007D510(rdram, ctx);
        goto after_6;
    // 0x8007DC28: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x8007DC2C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DC30: lwc1        $f12, 0x316C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X316C);
    // 0x8007DC34: jal         0x800B81D0
    // 0x8007DC38: nop

    cosf_recomp(rdram, ctx);
        goto after_7;
    // 0x8007DC38: nop

    after_7:
    // 0x8007DC3C: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x8007DC40: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8007DC44: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007DC48: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x8007DC4C: mul.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x8007DC50: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DC54: lwc1        $f12, 0x3174($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X3174);
    // 0x8007DC58: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8007DC5C: jal         0x800B81D0
    // 0x8007DC60: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    cosf_recomp(rdram, ctx);
        goto after_8;
    // 0x8007DC60: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x8007DC64: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x8007DC68: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8007DC6C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007DC70: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8007DC74: mul.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8007DC78: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DC7C: lwc1        $f12, 0x316C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X316C);
    // 0x8007DC80: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
    // 0x8007DC84: jal         0x800B7B40
    // 0x8007DC88: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    sinf_recomp(rdram, ctx);
        goto after_9;
    // 0x8007DC88: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x8007DC8C: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x8007DC90: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8007DC94: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007DC98: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8007DC9C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8007DCA0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8007DCA4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8007DCA8: addiu       $a1, $a1, 0xB0
    ctx->r5 = ADD32(ctx->r5, 0XB0);
    // 0x8007DCAC: addiu       $a0, $a0, 0x3130
    ctx->r4 = ADD32(ctx->r4, 0X3130);
    // 0x8007DCB0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8007DCB4: jal         0x800B11C4
    // 0x8007DCB8: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    func_800B11C4(rdram, ctx);
        goto after_10;
    // 0x8007DCB8: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    after_10:
    // 0x8007DCBC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DCC0: lwc1        $f18, 0x3130($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3130);
    // 0x8007DCC4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007DCC8: lwc1        $f5, -0x2000($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2000);
    // 0x8007DCCC: lwc1        $f4, -0x1FFC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1FFC);
    // 0x8007DCD0: cvt.d.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.d = CVT_D_S(ctx->f18.fl);
    // 0x8007DCD4: add.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f16.d + ctx->f4.d;
    // 0x8007DCD8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DCDC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8007DCE0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8007DCE4: swc1        $f8, 0x3130($at)
    MEM_W(0X3130, ctx->r1) = ctx->f8.u32l;
    // 0x8007DCE8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007DCEC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8007DCF0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8007DCF4: c.lt.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d < ctx->f10.d;
    // 0x8007DCF8: nop

    // 0x8007DCFC: bc1f        L_8007DD1C
    if (!c1cs) {
        // 0x8007DD00: lui         $at, 0x3FF0
        ctx->r1 = S32(0X3FF0 << 16);
            goto L_8007DD1C;
    }
    // 0x8007DD00: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007DD04: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8007DD08: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007DD0C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DD10: sub.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f10.d - ctx->f16.d;
    // 0x8007DD14: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8007DD18: swc1        $f6, 0x3130($at)
    MEM_W(0X3130, ctx->r1) = ctx->f6.u32l;
L_8007DD1C:
    // 0x8007DD1C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DD20: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8007DD24: lw          $t9, -0x158($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X158);
    // 0x8007DD28: lwc1        $f8, 0x3178($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3178);
    // 0x8007DD2C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007DD30: swc1        $f8, 0xD8($t9)
    MEM_W(0XD8, ctx->r25) = ctx->f8.u32l;
    // 0x8007DD34: lwc1        $f18, 0x3178($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3178);
    // 0x8007DD38: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x8007DD3C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8007DD40: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x8007DD44: add.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f10.d + ctx->f16.d;
    // 0x8007DD48: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8007DD4C: lw          $t7, -0x158($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X158);
    // 0x8007DD50: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8007DD54: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8007DD58: swc1        $f6, 0xE8($t7)
    MEM_W(0XE8, ctx->r15) = ctx->f6.u32l;
    // 0x8007DD5C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8007DD60: lw          $a2, -0x164($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X164);
    // 0x8007DD64: lw          $a1, -0x158($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X158);
    // 0x8007DD68: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8007DD6C: jal         0x800AD970
    // 0x8007DD70: nop

    func_800AD970(rdram, ctx);
        goto after_11;
    // 0x8007DD70: nop

    after_11:
    // 0x8007DD74: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DD78: lwc1        $f8, 0x315C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X315C);
    // 0x8007DD7C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DD80: lwc1        $f18, 0x3160($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3160);
    // 0x8007DD84: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DD88: add.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8007DD8C: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8007DD90: swc1        $f10, 0x315C($at)
    MEM_W(0X315C, ctx->r1) = ctx->f10.u32l;
    // 0x8007DD94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007DD98: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007DD9C: nop

    // 0x8007DDA0: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x8007DDA4: nop

    // 0x8007DDA8: bc1t        L_8007DDC4
    if (c1cs) {
        // 0x8007DDAC: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8007DDC4;
    }
    // 0x8007DDAC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8007DDB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007DDB4: nop

    // 0x8007DDB8: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8007DDBC: nop

    // 0x8007DDC0: bc1f        L_8007DE00
    if (!c1cs) {
        // 0x8007DDC4: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_8007DE00;
    }
L_8007DDC4:
    // 0x8007DDC4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DDC8: lwc1        $f6, 0x315C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X315C);
    // 0x8007DDCC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DDD0: lwc1        $f8, 0x3160($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3160);
    // 0x8007DDD4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DDD8: sub.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8007DDDC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007DDE0: swc1        $f18, 0x315C($at)
    MEM_W(0X315C, ctx->r1) = ctx->f18.u32l;
    // 0x8007DDE4: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x8007DDE8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8007DDEC: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x8007DDF0: mul.d       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f10.d);
    // 0x8007DDF4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DDF8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8007DDFC: swc1        $f6, 0x3160($at)
    MEM_W(0X3160, ctx->r1) = ctx->f6.u32l;
L_8007DE00:
    // 0x8007DE00: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DE04: lwc1        $f18, 0x3164($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3164);
    // 0x8007DE08: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DE0C: lwc1        $f8, 0x3168($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3168);
    // 0x8007DE10: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DE14: add.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x8007DE18: swc1        $f16, 0x3164($at)
    MEM_W(0X3164, ctx->r1) = ctx->f16.u32l;
    // 0x8007DE1C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007DE20: lwc1        $f5, -0x1FF8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1FF8);
    // 0x8007DE24: lwc1        $f4, -0x1FF4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1FF4);
    // 0x8007DE28: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x8007DE2C: c.lt.d      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.d < ctx->f10.d;
    // 0x8007DE30: nop

    // 0x8007DE34: bc1t        L_8007DE54
    if (c1cs) {
        // 0x8007DE38: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_8007DE54;
    }
    // 0x8007DE38: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007DE3C: lwc1        $f7, -0x1FF0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1FF0);
    // 0x8007DE40: lwc1        $f6, -0x1FEC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1FEC);
    // 0x8007DE44: nop

    // 0x8007DE48: c.lt.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d < ctx->f6.d;
    // 0x8007DE4C: nop

    // 0x8007DE50: bc1f        L_8007DE90
    if (!c1cs) {
        // 0x8007DE54: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_8007DE90;
    }
L_8007DE54:
    // 0x8007DE54: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DE58: lwc1        $f18, 0x3164($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3164);
    // 0x8007DE5C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DE60: lwc1        $f8, 0x3168($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3168);
    // 0x8007DE64: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DE68: sub.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x8007DE6C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007DE70: swc1        $f16, 0x3164($at)
    MEM_W(0X3164, ctx->r1) = ctx->f16.u32l;
    // 0x8007DE74: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x8007DE78: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8007DE7C: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x8007DE80: mul.d       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f10.d);
    // 0x8007DE84: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DE88: cvt.s.d     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f18.fl = CVT_S_D(ctx->f6.d);
    // 0x8007DE8C: swc1        $f18, 0x3168($at)
    MEM_W(0X3168, ctx->r1) = ctx->f18.u32l;
L_8007DE90:
    // 0x8007DE90: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DE94: lwc1        $f16, 0x316C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X316C);
    // 0x8007DE98: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DE9C: lwc1        $f8, 0x3170($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3170);
    // 0x8007DEA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DEA4: add.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8007DEA8: swc1        $f4, 0x316C($at)
    MEM_W(0X316C, ctx->r1) = ctx->f4.u32l;
    // 0x8007DEAC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007DEB0: lwc1        $f7, -0x1FE8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1FE8);
    // 0x8007DEB4: lwc1        $f6, -0x1FE4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1FE4);
    // 0x8007DEB8: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x8007DEBC: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x8007DEC0: nop

    // 0x8007DEC4: bc1f        L_8007DEE4
    if (!c1cs) {
        // 0x8007DEC8: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_8007DEE4;
    }
    // 0x8007DEC8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007DECC: lwc1        $f19, -0x1FE0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X1FE0);
    // 0x8007DED0: lwc1        $f18, -0x1FDC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1FDC);
    // 0x8007DED4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DED8: sub.d       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f10.d - ctx->f18.d;
    // 0x8007DEDC: cvt.s.d     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f8.fl = CVT_S_D(ctx->f16.d);
    // 0x8007DEE0: swc1        $f8, 0x316C($at)
    MEM_W(0X316C, ctx->r1) = ctx->f8.u32l;
L_8007DEE4:
    // 0x8007DEE4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DEE8: lwc1        $f4, 0x3174($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3174);
    // 0x8007DEEC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007DEF0: lwc1        $f11, -0x1FD8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X1FD8);
    // 0x8007DEF4: lwc1        $f10, -0x1FD4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1FD4);
    // 0x8007DEF8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8007DEFC: add.d       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f6.d + ctx->f10.d;
    // 0x8007DF00: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DF04: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
    // 0x8007DF08: swc1        $f16, 0x3174($at)
    MEM_W(0X3174, ctx->r1) = ctx->f16.u32l;
    // 0x8007DF0C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007DF10: lwc1        $f5, -0x1FD0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1FD0);
    // 0x8007DF14: lwc1        $f4, -0x1FCC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1FCC);
    // 0x8007DF18: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x8007DF1C: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x8007DF20: nop

    // 0x8007DF24: bc1f        L_8007DF44
    if (!c1cs) {
        // 0x8007DF28: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_8007DF44;
    }
    // 0x8007DF28: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007DF2C: lwc1        $f7, -0x1FC8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1FC8);
    // 0x8007DF30: lwc1        $f6, -0x1FC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1FC4);
    // 0x8007DF34: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DF38: sub.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d - ctx->f6.d;
    // 0x8007DF3C: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x8007DF40: swc1        $f18, 0x3174($at)
    MEM_W(0X3174, ctx->r1) = ctx->f18.u32l;
L_8007DF44:
    // 0x8007DF44: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DF48: lwc1        $f16, 0x3178($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3178);
    // 0x8007DF4C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DF50: lwc1        $f4, 0x317C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X317C);
    // 0x8007DF54: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DF58: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8007DF5C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007DF60: swc1        $f8, 0x3178($at)
    MEM_W(0X3178, ctx->r1) = ctx->f8.u32l;
    // 0x8007DF64: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007DF68: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8007DF6C: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x8007DF70: c.lt.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d < ctx->f6.d;
    // 0x8007DF74: nop

    // 0x8007DF78: bc1f        L_8007DF98
    if (!c1cs) {
        // 0x8007DF7C: lui         $at, 0x3FF0
        ctx->r1 = S32(0X3FF0 << 16);
            goto L_8007DF98;
    }
    // 0x8007DF7C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007DF80: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8007DF84: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8007DF88: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DF8C: sub.d       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f6.d - ctx->f18.d;
    // 0x8007DF90: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x8007DF94: swc1        $f4, 0x3178($at)
    MEM_W(0X3178, ctx->r1) = ctx->f4.u32l;
L_8007DF98:
    // 0x8007DF98: jal         0x8007CC14
    // 0x8007DF9C: nop

    func_8007CC14(rdram, ctx);
        goto after_12;
    // 0x8007DF9C: nop

    after_12:
    // 0x8007DFA0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8007DFA4: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x8007DFA8: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8007DFAC: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8007DFB0: jr          $ra
    // 0x8007DFB4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8007DFB4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8007DFB8: nop

    // 0x8007DFBC: nop

;}
RECOMP_FUNC void func_8007DFC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DFC0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8007DFC4: addiu       $a2, $a2, 0xF
    ctx->r6 = ADD32(ctx->r6, 0XF);
    // 0x8007DFC8: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x8007DFCC: and         $t6, $a2, $at
    ctx->r14 = ctx->r6 & ctx->r1;
    // 0x8007DFD0: addiu       $a1, $a1, 0xF
    ctx->r5 = ADD32(ctx->r5, 0XF);
    // 0x8007DFD4: and         $t7, $a1, $at
    ctx->r15 = ctx->r5 & ctx->r1;
    // 0x8007DFD8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8007DFDC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007DFE0: sw          $a2, 0x3190($at)
    MEM_W(0X3190, ctx->r1) = ctx->r6;
    // 0x8007DFE4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8007DFE8: lw          $t8, 0x3190($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3190);
    // 0x8007DFEC: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8007DFF0: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x8007DFF4: lw          $t0, 0x3190($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3190);
    // 0x8007DFF8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8007DFFC: addiu       $t9, $a1, -0x10
    ctx->r25 = ADD32(ctx->r5, -0X10);
    // 0x8007E000: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8007E004: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8007E008: lw          $t1, 0x3190($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3190);
    // 0x8007E00C: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8007E010: sw          $zero, 0x8($t1)
    MEM_W(0X8, ctx->r9) = 0;
    // 0x8007E014: lw          $t2, 0x3190($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3190);
    // 0x8007E018: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007E01C: sw          $zero, 0xC($t2)
    MEM_W(0XC, ctx->r10) = 0;
    // 0x8007E020: sw          $a0, 0x1D0($at)
    MEM_W(0X1D0, ctx->r1) = ctx->r4;
    // 0x8007E024: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007E028: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007E02C: addu        $t3, $a0, $a1
    ctx->r11 = ADD32(ctx->r4, ctx->r5);
    // 0x8007E030: sw          $t3, 0x1D4($at)
    MEM_W(0X1D4, ctx->r1) = ctx->r11;
    // 0x8007E034: jr          $ra
    // 0x8007E038: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007E038: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007E03C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E03C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007E040: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8007E044: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8007E048: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x8007E04C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8007E050: addiu       $t8, $t7, 0xF
    ctx->r24 = ADD32(ctx->r15, 0XF);
    // 0x8007E054: lw          $t0, 0x3198($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3198);
    // 0x8007E058: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8007E05C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x8007E060: lw          $t6, 0x3190($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3190);
    // 0x8007E064: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007E068: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x8007E06C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007E070: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8007E074: sw          $t1, 0x3198($at)
    MEM_W(0X3198, ctx->r1) = ctx->r9;
    // 0x8007E078: beq         $t6, $zero, L_8007E1A0
    if (ctx->r14 == 0) {
        // 0x8007E07C: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_8007E1A0;
    }
    // 0x8007E07C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_8007E080:
    // 0x8007E080: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E084: nop

    // 0x8007E088: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8007E08C: nop

    // 0x8007E090: bne         $t3, $zero, L_8007E17C
    if (ctx->r11 != 0) {
        // 0x8007E094: nop
    
            goto L_8007E17C;
    }
    // 0x8007E094: nop

    // 0x8007E098: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x8007E09C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8007E0A0: nop

    // 0x8007E0A4: sltu        $at, $t4, $t5
    ctx->r1 = ctx->r12 < ctx->r13 ? 1 : 0;
    // 0x8007E0A8: bne         $at, $zero, L_8007E17C
    if (ctx->r1 != 0) {
        // 0x8007E0AC: nop
    
            goto L_8007E17C;
    }
    // 0x8007E0AC: nop

    // 0x8007E0B0: addiu       $t7, $t2, 0x10
    ctx->r15 = ADD32(ctx->r10, 0X10);
    // 0x8007E0B4: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x8007E0B8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E0BC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8007E0C0: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x8007E0C4: nop

    // 0x8007E0C8: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x8007E0CC: sltiu       $at, $t1, 0x11
    ctx->r1 = ctx->r9 < 0X11 ? 1 : 0;
    // 0x8007E0D0: bne         $at, $zero, L_8007E168
    if (ctx->r1 != 0) {
        // 0x8007E0D4: sw          $t1, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r9;
            goto L_8007E168;
    }
    // 0x8007E0D4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8007E0D8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E0DC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8007E0E0: addiu       $t6, $t1, -0x10
    ctx->r14 = ADD32(ctx->r9, -0X10);
    // 0x8007E0E4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8007E0E8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8007E0EC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8007E0F0: addiu       $t7, $t5, 0x10
    ctx->r15 = ADD32(ctx->r13, 0X10);
    // 0x8007E0F4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8007E0F8: sw          $t2, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->r10;
    // 0x8007E0FC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8007E100: nop

    // 0x8007E104: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x8007E108: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8007E10C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E110: nop

    // 0x8007E114: sw          $t0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r8;
    // 0x8007E118: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E11C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8007E120: lw          $t6, 0x8($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X8);
    // 0x8007E124: nop

    // 0x8007E128: sw          $t6, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r14;
    // 0x8007E12C: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007E130: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E134: nop

    // 0x8007E138: sw          $t4, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r12;
    // 0x8007E13C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8007E140: nop

    // 0x8007E144: lw          $t5, 0x8($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X8);
    // 0x8007E148: nop

    // 0x8007E14C: beq         $t5, $zero, L_8007E158
    if (ctx->r13 == 0) {
        // 0x8007E150: nop
    
            goto L_8007E158;
    }
    // 0x8007E150: nop

    // 0x8007E154: sw          $t2, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r10;
L_8007E158:
    // 0x8007E158: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8007E15C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E160: nop

    // 0x8007E164: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
L_8007E168:
    // 0x8007E168: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E16C: nop

    // 0x8007E170: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x8007E174: b           L_8007E1CC
    // 0x8007E178: nop

        goto L_8007E1CC;
    // 0x8007E178: nop

L_8007E17C:
    // 0x8007E17C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E180: nop

    // 0x8007E184: lw          $t6, 0x8($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X8);
    // 0x8007E188: nop

    // 0x8007E18C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8007E190: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E194: nop

    // 0x8007E198: bne         $t3, $zero, L_8007E080
    if (ctx->r11 != 0) {
        // 0x8007E19C: nop
    
            goto L_8007E080;
    }
    // 0x8007E19C: nop

L_8007E1A0:
    // 0x8007E1A0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007E1A4: jal         0x800B3BFC
    // 0x8007E1A8: addiu       $a0, $a0, -0x1FC0
    ctx->r4 = ADD32(ctx->r4, -0X1FC0);
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x8007E1A8: addiu       $a0, $a0, -0x1FC0
    ctx->r4 = ADD32(ctx->r4, -0X1FC0);
    after_0:
    // 0x8007E1AC: jal         0x8007E5D4
    // 0x8007E1B0: nop

    func_8007E5D4(rdram, ctx);
        goto after_1;
    // 0x8007E1B0: nop

    after_1:
    // 0x8007E1B4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007E1B8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007E1BC: addiu       $a1, $a1, -0x1FA0
    ctx->r5 = ADD32(ctx->r5, -0X1FA0);
    // 0x8007E1C0: jal         0x80083560
    // 0x8007E1C4: addiu       $a0, $a0, -0x1FB0
    ctx->r4 = ADD32(ctx->r4, -0X1FB0);
    Fault_Assert(rdram, ctx);
        goto after_2;
    // 0x8007E1C4: addiu       $a0, $a0, -0x1FB0
    ctx->r4 = ADD32(ctx->r4, -0X1FB0);
    after_2:
    // 0x8007E1C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8007E1CC:
    // 0x8007E1CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007E1D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007E1D4: jr          $ra
    // 0x8007E1D8: nop

    return;
    // 0x8007E1D8: nop

;}
RECOMP_FUNC void func_8007E1DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E1DC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8007E1E0: addiu       $t7, $a0, 0xF
    ctx->r15 = ADD32(ctx->r4, 0XF);
    // 0x8007E1E4: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x8007E1E8: lw          $t6, 0x3190($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3190);
    // 0x8007E1EC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8007E1F0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8007E1F4: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x8007E1F8: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x8007E1FC: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x8007E200: beq         $t6, $zero, L_8007E230
    if (ctx->r14 == 0) {
        // 0x8007E204: sw          $t6, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r14;
            goto L_8007E230;
    }
    // 0x8007E204: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
L_8007E208:
    // 0x8007E208: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8007E20C: nop

    // 0x8007E210: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
    // 0x8007E214: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x8007E218: nop

    // 0x8007E21C: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x8007E220: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8007E224: nop

    // 0x8007E228: bne         $t2, $zero, L_8007E208
    if (ctx->r10 != 0) {
        // 0x8007E22C: nop
    
            goto L_8007E208;
    }
    // 0x8007E22C: nop

L_8007E230:
    // 0x8007E230: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x8007E234: nop

    // 0x8007E238: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8007E23C: nop

    // 0x8007E240: beq         $t4, $zero, L_8007E250
    if (ctx->r12 == 0) {
        // 0x8007E244: nop
    
            goto L_8007E250;
    }
    // 0x8007E244: nop

    // 0x8007E248: b           L_8007E320
    // 0x8007E24C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8007E320;
    // 0x8007E24C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8007E250:
    // 0x8007E250: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8007E254: lw          $t5, 0xC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC);
    // 0x8007E258: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x8007E25C: nop

    // 0x8007E260: sltu        $at, $t8, $t5
    ctx->r1 = ctx->r24 < ctx->r13 ? 1 : 0;
    // 0x8007E264: beq         $at, $zero, L_8007E274
    if (ctx->r1 == 0) {
        // 0x8007E268: nop
    
            goto L_8007E274;
    }
    // 0x8007E268: nop

    // 0x8007E26C: b           L_8007E320
    // 0x8007E270: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8007E320;
    // 0x8007E270: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8007E274:
    // 0x8007E274: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x8007E278: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8007E27C: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x8007E280: nop

    // 0x8007E284: bne         $t6, $t0, L_8007E2B4
    if (ctx->r14 != ctx->r8) {
        // 0x8007E288: nop
    
            goto L_8007E2B4;
    }
    // 0x8007E288: nop

    // 0x8007E28C: addiu       $t1, $t9, 0x10
    ctx->r9 = ADD32(ctx->r25, 0X10);
    // 0x8007E290: sw          $t1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r9;
    // 0x8007E294: lw          $t2, 0x0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X0);
    // 0x8007E298: nop

    // 0x8007E29C: sw          $zero, 0x8($t2)
    MEM_W(0X8, ctx->r10) = 0;
    // 0x8007E2A0: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x8007E2A4: nop

    // 0x8007E2A8: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x8007E2AC: b           L_8007E320
    // 0x8007E2B0: nop

        goto L_8007E320;
    // 0x8007E2B0: nop

L_8007E2B4:
    // 0x8007E2B4: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8007E2B8: lw          $t4, 0x1D4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1D4);
    // 0x8007E2BC: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x8007E2C0: nop

    // 0x8007E2C4: subu        $t5, $t4, $t7
    ctx->r13 = SUB32(ctx->r12, ctx->r15);
    // 0x8007E2C8: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x8007E2CC: addiu       $t8, $t5, 0x10
    ctx->r24 = ADD32(ctx->r13, 0X10);
    // 0x8007E2D0: sw          $t8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r24;
    // 0x8007E2D4: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8007E2D8: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x8007E2DC: nop

    // 0x8007E2E0: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x8007E2E4: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8007E2E8: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x8007E2EC: nop

    // 0x8007E2F0: sw          $t1, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r9;
    // 0x8007E2F4: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8007E2F8: nop

    // 0x8007E2FC: sw          $zero, 0x8($t2)
    MEM_W(0X8, ctx->r10) = 0;
    // 0x8007E300: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8007E304: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x8007E308: nop

    // 0x8007E30C: sw          $t3, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r11;
    // 0x8007E310: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8007E314: nop

    // 0x8007E318: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x8007E31C: nop

L_8007E320:
    // 0x8007E320: jr          $ra
    // 0x8007E324: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8007E324: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8007E328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E328: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007E32C: lw          $a1, 0x3190($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3190);
    // 0x8007E330: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007E334: beq         $a1, $zero, L_8007E454
    if (ctx->r5 == 0) {
        // 0x8007E338: nop
    
            goto L_8007E454;
    }
    // 0x8007E338: nop

L_8007E33C:
    // 0x8007E33C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8007E340: nop

    // 0x8007E344: bne         $t6, $a0, L_8007E444
    if (ctx->r14 != ctx->r4) {
        // 0x8007E348: nop
    
            goto L_8007E444;
    }
    // 0x8007E348: nop

    // 0x8007E34C: lw          $a2, 0xC($a1)
    ctx->r6 = MEM_W(ctx->r5, 0XC);
    // 0x8007E350: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x8007E354: beq         $a2, $zero, L_8007E3C4
    if (ctx->r6 == 0) {
        // 0x8007E358: nop
    
            goto L_8007E3C4;
    }
    // 0x8007E358: nop

L_8007E35C:
    // 0x8007E35C: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x8007E360: nop

    // 0x8007E364: bne         $t7, $zero, L_8007E3C4
    if (ctx->r15 != 0) {
        // 0x8007E368: nop
    
            goto L_8007E3C4;
    }
    // 0x8007E368: nop

    // 0x8007E36C: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x8007E370: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x8007E374: lw          $t8, 0x4($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X4);
    // 0x8007E378: nop

    // 0x8007E37C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8007E380: addiu       $t1, $t0, 0x10
    ctx->r9 = ADD32(ctx->r8, 0X10);
    // 0x8007E384: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x8007E388: lw          $t2, 0x8($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X8);
    // 0x8007E38C: nop

    // 0x8007E390: sw          $t2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r10;
    // 0x8007E394: lw          $t3, 0x8($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X8);
    // 0x8007E398: nop

    // 0x8007E39C: beq         $t3, $zero, L_8007E3B0
    if (ctx->r11 == 0) {
        // 0x8007E3A0: nop
    
            goto L_8007E3B0;
    }
    // 0x8007E3A0: nop

    // 0x8007E3A4: lw          $t4, 0x8($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X8);
    // 0x8007E3A8: nop

    // 0x8007E3AC: sw          $a2, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r6;
L_8007E3B0:
    // 0x8007E3B0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8007E3B4: lw          $a2, 0xC($a2)
    ctx->r6 = MEM_W(ctx->r6, 0XC);
    // 0x8007E3B8: nop

    // 0x8007E3BC: bne         $a2, $zero, L_8007E35C
    if (ctx->r6 != 0) {
        // 0x8007E3C0: nop
    
            goto L_8007E35C;
    }
    // 0x8007E3C0: nop

L_8007E3C4:
    // 0x8007E3C4: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x8007E3C8: nop

    // 0x8007E3CC: beq         $a2, $zero, L_8007E454
    if (ctx->r6 == 0) {
        // 0x8007E3D0: nop
    
            goto L_8007E454;
    }
    // 0x8007E3D0: nop

L_8007E3D4:
    // 0x8007E3D4: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x8007E3D8: nop

    // 0x8007E3DC: bne         $t5, $zero, L_8007E454
    if (ctx->r13 != 0) {
        // 0x8007E3E0: nop
    
            goto L_8007E454;
    }
    // 0x8007E3E0: nop

    // 0x8007E3E4: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x8007E3E8: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x8007E3EC: lw          $t7, 0x4($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X4);
    // 0x8007E3F0: nop

    // 0x8007E3F4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8007E3F8: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x8007E3FC: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x8007E400: lw          $t0, 0x8($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X8);
    // 0x8007E404: nop

    // 0x8007E408: sw          $t0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r8;
    // 0x8007E40C: lw          $t1, 0x8($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X8);
    // 0x8007E410: nop

    // 0x8007E414: beq         $t1, $zero, L_8007E428
    if (ctx->r9 == 0) {
        // 0x8007E418: nop
    
            goto L_8007E428;
    }
    // 0x8007E418: nop

    // 0x8007E41C: lw          $t2, 0x8($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X8);
    // 0x8007E420: nop

    // 0x8007E424: sw          $a1, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r5;
L_8007E428:
    // 0x8007E428: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8007E42C: lw          $a2, 0x8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X8);
    // 0x8007E430: nop

    // 0x8007E434: bne         $a2, $zero, L_8007E3D4
    if (ctx->r6 != 0) {
        // 0x8007E438: nop
    
            goto L_8007E3D4;
    }
    // 0x8007E438: nop

    // 0x8007E43C: b           L_8007E454
    // 0x8007E440: nop

        goto L_8007E454;
    // 0x8007E440: nop

L_8007E444:
    // 0x8007E444: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    // 0x8007E448: nop

    // 0x8007E44C: bne         $a1, $zero, L_8007E33C
    if (ctx->r5 != 0) {
        // 0x8007E450: nop
    
            goto L_8007E33C;
    }
    // 0x8007E450: nop

L_8007E454:
    // 0x8007E454: jr          $ra
    // 0x8007E458: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007E458: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007E45C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E45C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8007E460: lw          $a0, 0x3190($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3190);
    // 0x8007E464: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007E468: beq         $a0, $zero, L_8007E498
    if (ctx->r4 == 0) {
        // 0x8007E46C: sw          $zero, 0x0($sp)
        MEM_W(0X0, ctx->r29) = 0;
            goto L_8007E498;
    }
    // 0x8007E46C: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_8007E470:
    // 0x8007E470: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x8007E474: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8007E478: nop

    // 0x8007E47C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8007E480: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x8007E484: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    // 0x8007E488: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x8007E48C: nop

    // 0x8007E490: bne         $a0, $zero, L_8007E470
    if (ctx->r4 != 0) {
        // 0x8007E494: nop
    
            goto L_8007E470;
    }
    // 0x8007E494: nop

L_8007E498:
    // 0x8007E498: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x8007E49C: jr          $ra
    // 0x8007E4A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007E4A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007E4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E4A4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8007E4A8: lw          $a0, 0x3190($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3190);
    // 0x8007E4AC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007E4B0: beq         $a0, $zero, L_8007E4E8
    if (ctx->r4 == 0) {
        // 0x8007E4B4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_8007E4E8;
    }
    // 0x8007E4B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8007E4B8:
    // 0x8007E4B8: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8007E4BC: nop

    // 0x8007E4C0: bne         $t6, $zero, L_8007E4D8
    if (ctx->r14 != 0) {
        // 0x8007E4C4: nop
    
            goto L_8007E4D8;
    }
    // 0x8007E4C4: nop

    // 0x8007E4C8: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8007E4CC: nop

    // 0x8007E4D0: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x8007E4D4: addiu       $a1, $a1, -0x10
    ctx->r5 = ADD32(ctx->r5, -0X10);
L_8007E4D8:
    // 0x8007E4D8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x8007E4DC: nop

    // 0x8007E4E0: bne         $a0, $zero, L_8007E4B8
    if (ctx->r4 != 0) {
        // 0x8007E4E4: nop
    
            goto L_8007E4B8;
    }
    // 0x8007E4E4: nop

L_8007E4E8:
    // 0x8007E4E8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8007E4EC: jr          $ra
    // 0x8007E4F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007E4F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007E4F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E4F4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007E4F8: lw          $a1, 0x3190($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3190);
    // 0x8007E4FC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007E500: beq         $a1, $zero, L_8007E544
    if (ctx->r5 == 0) {
        // 0x8007E504: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8007E544;
    }
    // 0x8007E504: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8007E508:
    // 0x8007E508: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8007E50C: nop

    // 0x8007E510: bne         $t6, $zero, L_8007E534
    if (ctx->r14 != 0) {
        // 0x8007E514: nop
    
            goto L_8007E534;
    }
    // 0x8007E514: nop

    // 0x8007E518: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x8007E51C: nop

    // 0x8007E520: sltu        $at, $a0, $t7
    ctx->r1 = ctx->r4 < ctx->r15 ? 1 : 0;
    // 0x8007E524: beq         $at, $zero, L_8007E534
    if (ctx->r1 == 0) {
        // 0x8007E528: nop
    
            goto L_8007E534;
    }
    // 0x8007E528: nop

    // 0x8007E52C: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x8007E530: nop

L_8007E534:
    // 0x8007E534: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    // 0x8007E538: nop

    // 0x8007E53C: bne         $a1, $zero, L_8007E508
    if (ctx->r5 != 0) {
        // 0x8007E540: nop
    
            goto L_8007E508;
    }
    // 0x8007E540: nop

L_8007E544:
    // 0x8007E544: addiu       $v0, $a0, -0x10
    ctx->r2 = ADD32(ctx->r4, -0X10);
    // 0x8007E548: jr          $ra
    // 0x8007E54C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007E54C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007E550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E550: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007E554: lw          $a1, 0x3190($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3190);
    // 0x8007E558: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007E55C: beq         $a1, $zero, L_8007E598
    if (ctx->r5 == 0) {
        // 0x8007E560: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8007E598;
    }
    // 0x8007E560: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8007E564:
    // 0x8007E564: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8007E568: nop

    // 0x8007E56C: bne         $t6, $zero, L_8007E588
    if (ctx->r14 != 0) {
        // 0x8007E570: nop
    
            goto L_8007E588;
    }
    // 0x8007E570: nop

    // 0x8007E574: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x8007E578: nop

    // 0x8007E57C: beq         $t7, $zero, L_8007E588
    if (ctx->r15 == 0) {
        // 0x8007E580: nop
    
            goto L_8007E588;
    }
    // 0x8007E580: nop

    // 0x8007E584: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_8007E588:
    // 0x8007E588: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    // 0x8007E58C: nop

    // 0x8007E590: bne         $a1, $zero, L_8007E564
    if (ctx->r5 != 0) {
        // 0x8007E594: nop
    
            goto L_8007E564;
    }
    // 0x8007E594: nop

L_8007E598:
    // 0x8007E598: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8007E59C: jr          $ra
    // 0x8007E5A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007E5A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007E5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E5A4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007E5A8: lw          $a1, 0x3190($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3190);
    // 0x8007E5AC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007E5B0: beq         $a1, $zero, L_8007E5C8
    if (ctx->r5 == 0) {
        // 0x8007E5B4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8007E5C8;
    }
    // 0x8007E5B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8007E5B8:
    // 0x8007E5B8: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    // 0x8007E5BC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8007E5C0: bne         $a1, $zero, L_8007E5B8
    if (ctx->r5 != 0) {
        // 0x8007E5C4: nop
    
            goto L_8007E5B8;
    }
    // 0x8007E5C4: nop

L_8007E5C8:
    // 0x8007E5C8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8007E5CC: jr          $ra
    // 0x8007E5D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007E5D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007E5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E5D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007E5D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007E5DC: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x8007E5E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007E5E4: lw          $s0, 0x3190($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X3190);
    // 0x8007E5E8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007E5EC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8007E5F0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8007E5F4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8007E5F8: jal         0x800B3BFC
    // 0x8007E5FC: addiu       $a0, $a0, -0x1F90
    ctx->r4 = ADD32(ctx->r4, -0X1F90);
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x8007E5FC: addiu       $a0, $a0, -0x1F90
    ctx->r4 = ADD32(ctx->r4, -0X1F90);
    after_0:
    // 0x8007E600: beq         $s0, $zero, L_8007E680
    if (ctx->r16 == 0) {
        // 0x8007E604: nop
    
            goto L_8007E680;
    }
    // 0x8007E604: nop

L_8007E608:
    // 0x8007E608: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007E60C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x8007E610: jal         0x800B3BFC
    // 0x8007E614: addiu       $a0, $a0, -0x1F78
    ctx->r4 = ADD32(ctx->r4, -0X1F78);
    osSyncPrintf(rdram, ctx);
        goto after_1;
    // 0x8007E614: addiu       $a0, $a0, -0x1F78
    ctx->r4 = ADD32(ctx->r4, -0X1F78);
    after_1:
    // 0x8007E618: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007E61C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8007E620: jal         0x800B3BFC
    // 0x8007E624: addiu       $a0, $a0, -0x1F68
    ctx->r4 = ADD32(ctx->r4, -0X1F68);
    osSyncPrintf(rdram, ctx);
        goto after_2;
    // 0x8007E624: addiu       $a0, $a0, -0x1F68
    ctx->r4 = ADD32(ctx->r4, -0X1F68);
    after_2:
    // 0x8007E628: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007E62C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x8007E630: jal         0x800B3BFC
    // 0x8007E634: addiu       $a0, $a0, -0x1F54
    ctx->r4 = ADD32(ctx->r4, -0X1F54);
    osSyncPrintf(rdram, ctx);
        goto after_3;
    // 0x8007E634: addiu       $a0, $a0, -0x1F54
    ctx->r4 = ADD32(ctx->r4, -0X1F54);
    after_3:
    // 0x8007E638: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007E63C: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x8007E640: jal         0x800B3BFC
    // 0x8007E644: addiu       $a0, $a0, -0x1F40
    ctx->r4 = ADD32(ctx->r4, -0X1F40);
    osSyncPrintf(rdram, ctx);
        goto after_4;
    // 0x8007E644: addiu       $a0, $a0, -0x1F40
    ctx->r4 = ADD32(ctx->r4, -0X1F40);
    after_4:
    // 0x8007E648: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x8007E64C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8007E650: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8007E654: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8007E658: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8007E65C: addiu       $t0, $t9, 0x10
    ctx->r8 = ADD32(ctx->r25, 0X10);
    // 0x8007E660: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8007E664: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8007E668: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8007E66C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8007E670: lw          $s0, 0x8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X8);
    // 0x8007E674: nop

    // 0x8007E678: bne         $s0, $zero, L_8007E608
    if (ctx->r16 != 0) {
        // 0x8007E67C: nop
    
            goto L_8007E608;
    }
    // 0x8007E67C: nop

L_8007E680:
    // 0x8007E680: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007E684: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007E688: jal         0x800B3BFC
    // 0x8007E68C: addiu       $a0, $a0, -0x1F2C
    ctx->r4 = ADD32(ctx->r4, -0X1F2C);
    osSyncPrintf(rdram, ctx);
        goto after_5;
    // 0x8007E68C: addiu       $a0, $a0, -0x1F2C
    ctx->r4 = ADD32(ctx->r4, -0X1F2C);
    after_5:
    // 0x8007E690: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007E694: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8007E698: jal         0x800B3BFC
    // 0x8007E69C: addiu       $a0, $a0, -0x1F18
    ctx->r4 = ADD32(ctx->r4, -0X1F18);
    osSyncPrintf(rdram, ctx);
        goto after_6;
    // 0x8007E69C: addiu       $a0, $a0, -0x1F18
    ctx->r4 = ADD32(ctx->r4, -0X1F18);
    after_6:
    // 0x8007E6A0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007E6A4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8007E6A8: jal         0x800B3BFC
    // 0x8007E6AC: addiu       $a0, $a0, -0x1F04
    ctx->r4 = ADD32(ctx->r4, -0X1F04);
    osSyncPrintf(rdram, ctx);
        goto after_7;
    // 0x8007E6AC: addiu       $a0, $a0, -0x1F04
    ctx->r4 = ADD32(ctx->r4, -0X1F04);
    after_7:
    // 0x8007E6B0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8007E6B4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8007E6B8: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8007E6BC: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x8007E6C0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007E6C4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8007E6C8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007E6CC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8007E6D0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8007E6D4: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8007E6D8: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8007E6DC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007E6E0: addiu       $a0, $a0, -0x1EF0
    ctx->r4 = ADD32(ctx->r4, -0X1EF0);
    // 0x8007E6E4: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x8007E6E8: nop

    // 0x8007E6EC: div.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f16.d, ctx->f4.d);
    // 0x8007E6F0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8007E6F4: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x8007E6F8: jal         0x800B3BFC
    // 0x8007E6FC: nop

    osSyncPrintf(rdram, ctx);
        goto after_8;
    // 0x8007E6FC: nop

    after_8:
    // 0x8007E700: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8007E704: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8007E708: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007E70C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8007E710: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8007E714: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8007E718: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8007E71C: jal         0x800B3BFC
    // 0x8007E720: addiu       $a0, $a0, -0x1ED8
    ctx->r4 = ADD32(ctx->r4, -0X1ED8);
    osSyncPrintf(rdram, ctx);
        goto after_9;
    // 0x8007E720: addiu       $a0, $a0, -0x1ED8
    ctx->r4 = ADD32(ctx->r4, -0X1ED8);
    after_9:
    // 0x8007E724: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E728: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007E72C: jr          $ra
    // 0x8007E730: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8007E730: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8007E734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E734: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007E738: jr          $ra
    // 0x8007E73C: sw          $zero, 0x3198($at)
    MEM_W(0X3198, ctx->r1) = 0;
    return;
    // 0x8007E73C: sw          $zero, 0x3198($at)
    MEM_W(0X3198, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8007E740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E740: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8007E744: lw          $v0, 0x3198($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3198);
    // 0x8007E748: jr          $ra
    // 0x8007E74C: nop

    return;
    // 0x8007E74C: nop

;}
RECOMP_FUNC void func_8007E750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E750: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007E754: lwc1        $f4, 0x1E4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1E4);
    // 0x8007E758: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007E75C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8007E760: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007E764: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8007E768: c.le.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d <= ctx->f8.d;
    // 0x8007E76C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8007E770: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007E774: bc1f        L_8007E9E4
    if (!c1cs) {
        // 0x8007E778: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8007E9E4;
    }
    // 0x8007E778: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007E77C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8007E780: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x8007E784: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007E788: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x8007E78C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8007E790: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8007E794: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x8007E798: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8007E79C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8007E7A0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8007E7A4: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8007E7A8: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8007E7AC: lw          $t1, 0x20C0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X20C0);
    // 0x8007E7B0: lui         $t3, 0xE300
    ctx->r11 = S32(0XE300 << 16);
    // 0x8007E7B4: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x8007E7B8: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8007E7BC: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8007E7C0: sw          $t2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r10;
    // 0x8007E7C4: ori         $t3, $t3, 0xA01
    ctx->r11 = ctx->r11 | 0XA01;
    // 0x8007E7C8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8007E7CC: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8007E7D0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8007E7D4: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8007E7D8: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x8007E7DC: lui         $t8, 0xD9C0
    ctx->r24 = S32(0XD9C0 << 16);
    // 0x8007E7E0: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x8007E7E4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8007E7E8: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8007E7EC: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x8007E7F0: ori         $t8, $t8, 0xF9FA
    ctx->r24 = ctx->r24 | 0XF9FA;
    // 0x8007E7F4: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8007E7F8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8007E7FC: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8007E800: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8007E804: lw          $t1, 0x20C0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X20C0);
    // 0x8007E808: lui         $t3, 0xE200
    ctx->r11 = S32(0XE200 << 16);
    // 0x8007E80C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x8007E810: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8007E814: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8007E818: sw          $t2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r10;
    // 0x8007E81C: ori         $t3, $t3, 0x1C
    ctx->r11 = ctx->r11 | 0X1C;
    // 0x8007E820: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8007E824: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8007E828: lui         $t5, 0x50
    ctx->r13 = S32(0X50 << 16);
    // 0x8007E82C: ori         $t5, $t5, 0x4240
    ctx->r13 = ctx->r13 | 0X4240;
    // 0x8007E830: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8007E834: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8007E838: lw          $t7, 0x20C0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X20C0);
    // 0x8007E83C: lui         $t9, 0xFCFF
    ctx->r25 = S32(0XFCFF << 16);
    // 0x8007E840: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8007E844: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007E848: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8007E84C: sw          $t8, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r24;
    // 0x8007E850: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x8007E854: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8007E858: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8007E85C: lui         $t1, 0xFFFD
    ctx->r9 = S32(0XFFFD << 16);
    // 0x8007E860: ori         $t1, $t1, 0xF6FB
    ctx->r9 = ctx->r9 | 0XF6FB;
    // 0x8007E864: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8007E868: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8007E86C: lw          $t3, 0x20C0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X20C0);
    // 0x8007E870: lui         $t5, 0xFA00
    ctx->r13 = S32(0XFA00 << 16);
    // 0x8007E874: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8007E878: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8007E87C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007E880: sw          $t4, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r12;
    // 0x8007E884: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007E888: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8007E88C: lwc1        $f10, 0x1E4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1E4);
    // 0x8007E890: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8007E894: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007E898: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007E89C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8007E8A0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8007E8A4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8007E8A8: nop

    // 0x8007E8AC: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8007E8B0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8007E8B4: nop

    // 0x8007E8B8: andi        $at, $t8, 0x4
    ctx->r1 = ctx->r24 & 0X4;
    // 0x8007E8BC: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8007E8C0: beq         $t8, $zero, L_8007E910
    if (ctx->r24 == 0) {
        // 0x8007E8C4: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_8007E910;
    }
    // 0x8007E8C4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8007E8C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007E8CC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007E8D0: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8007E8D4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8007E8D8: nop

    // 0x8007E8DC: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8007E8E0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8007E8E4: nop

    // 0x8007E8E8: andi        $at, $t8, 0x4
    ctx->r1 = ctx->r24 & 0X4;
    // 0x8007E8EC: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8007E8F0: bne         $t8, $zero, L_8007E908
    if (ctx->r24 != 0) {
        // 0x8007E8F4: nop
    
            goto L_8007E908;
    }
    // 0x8007E8F4: nop

    // 0x8007E8F8: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8007E8FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007E900: b           L_8007E920
    // 0x8007E904: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8007E920;
    // 0x8007E904: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8007E908:
    // 0x8007E908: b           L_8007E920
    // 0x8007E90C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8007E920;
    // 0x8007E90C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_8007E910:
    // 0x8007E910: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8007E914: nop

    // 0x8007E918: bltz        $t8, L_8007E908
    if (SIGNED(ctx->r24) < 0) {
        // 0x8007E91C: nop
    
            goto L_8007E908;
    }
    // 0x8007E91C: nop

L_8007E920:
    // 0x8007E920: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8007E924: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8007E928: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8007E92C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8007E930: lw          $t1, 0x20C0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X20C0);
    // 0x8007E934: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007E938: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x8007E93C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8007E940: lui         $t3, 0xF664
    ctx->r11 = S32(0XF664 << 16);
    // 0x8007E944: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8007E948: sw          $t2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r10;
    // 0x8007E94C: ori         $t3, $t3, 0x4B0
    ctx->r11 = ctx->r11 | 0X4B0;
    // 0x8007E950: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8007E954: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8007E958: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8007E95C: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8007E960: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x8007E964: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8007E968: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8007E96C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8007E970: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8007E974: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x8007E978: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8007E97C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8007E980: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8007E984: jal         0x800A3AF0
    // 0x8007E988: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    func_800A3AF0(rdram, ctx);
        goto after_0;
    // 0x8007E988: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    after_0:
    // 0x8007E98C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007E990: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x8007E994: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007E998: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8007E99C: lwc1        $f6, 0x1E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1E0);
    // 0x8007E9A0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007E9A4: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8007E9A8: lwc1        $f18, 0x1E4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1E4);
    // 0x8007E9AC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007E9B0: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x8007E9B4: swc1        $f4, 0x1E4($at)
    MEM_W(0X1E4, ctx->r1) = ctx->f4.u32l;
    // 0x8007E9B8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007E9BC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8007E9C0: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x8007E9C4: c.le.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d <= ctx->f8.d;
    // 0x8007E9C8: nop

    // 0x8007E9CC: bc1f        L_8007E9DC
    if (!c1cs) {
        // 0x8007E9D0: nop
    
            goto L_8007E9DC;
    }
    // 0x8007E9D0: nop

    // 0x8007E9D4: b           L_8007E9E8
    // 0x8007E9D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8007E9E8;
    // 0x8007E9D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007E9DC:
    // 0x8007E9DC: b           L_8007E9E8
    // 0x8007E9E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8007E9E8;
    // 0x8007E9E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8007E9E4:
    // 0x8007E9E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007E9E8:
    // 0x8007E9E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E9EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007E9F0: jr          $ra
    // 0x8007E9F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8007E9F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8007E9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E9F8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007E9FC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8007EA00: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007EA04: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x8007EA08: nop

    // 0x8007EA0C: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x8007EA10: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007EA14: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007EA18: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8007EA1C: swc1        $f10, 0x1E0($at)
    MEM_W(0X1E0, ctx->r1) = ctx->f10.u32l;
    // 0x8007EA20: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007EA24: jr          $ra
    // 0x8007EA28: swc1        $f16, 0x1E4($at)
    MEM_W(0X1E4, ctx->r1) = ctx->f16.u32l;
    return;
    // 0x8007EA28: swc1        $f16, 0x1E4($at)
    MEM_W(0X1E4, ctx->r1) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_8007EA2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007EA2C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007EA30: lwc1        $f4, 0x1EC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1EC);
    // 0x8007EA34: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x8007EA38: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007EA3C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8007EA40: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x8007EA44: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8007EA48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007EA4C: bc1f        L_8007ECB4
    if (!c1cs) {
        // 0x8007EA50: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8007ECB4;
    }
    // 0x8007EA50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007EA54: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8007EA58: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x8007EA5C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007EA60: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x8007EA64: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8007EA68: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8007EA6C: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x8007EA70: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8007EA74: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8007EA78: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8007EA7C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8007EA80: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8007EA84: lw          $t1, 0x20C0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X20C0);
    // 0x8007EA88: lui         $t3, 0xE300
    ctx->r11 = S32(0XE300 << 16);
    // 0x8007EA8C: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x8007EA90: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8007EA94: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8007EA98: sw          $t2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r10;
    // 0x8007EA9C: ori         $t3, $t3, 0xA01
    ctx->r11 = ctx->r11 | 0XA01;
    // 0x8007EAA0: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8007EAA4: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8007EAA8: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8007EAAC: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8007EAB0: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x8007EAB4: lui         $t8, 0xD9C0
    ctx->r24 = S32(0XD9C0 << 16);
    // 0x8007EAB8: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x8007EABC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8007EAC0: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8007EAC4: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x8007EAC8: ori         $t8, $t8, 0xF9FA
    ctx->r24 = ctx->r24 | 0XF9FA;
    // 0x8007EACC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8007EAD0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8007EAD4: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8007EAD8: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8007EADC: lw          $t1, 0x20C0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X20C0);
    // 0x8007EAE0: lui         $t3, 0xE200
    ctx->r11 = S32(0XE200 << 16);
    // 0x8007EAE4: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x8007EAE8: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8007EAEC: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8007EAF0: sw          $t2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r10;
    // 0x8007EAF4: ori         $t3, $t3, 0x1C
    ctx->r11 = ctx->r11 | 0X1C;
    // 0x8007EAF8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8007EAFC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8007EB00: lui         $t5, 0x50
    ctx->r13 = S32(0X50 << 16);
    // 0x8007EB04: ori         $t5, $t5, 0x4240
    ctx->r13 = ctx->r13 | 0X4240;
    // 0x8007EB08: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8007EB0C: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8007EB10: lw          $t7, 0x20C0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X20C0);
    // 0x8007EB14: lui         $t9, 0xFCFF
    ctx->r25 = S32(0XFCFF << 16);
    // 0x8007EB18: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8007EB1C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007EB20: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8007EB24: sw          $t8, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r24;
    // 0x8007EB28: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x8007EB2C: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8007EB30: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8007EB34: lui         $t1, 0xFFFD
    ctx->r9 = S32(0XFFFD << 16);
    // 0x8007EB38: ori         $t1, $t1, 0xF6FB
    ctx->r9 = ctx->r9 | 0XF6FB;
    // 0x8007EB3C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8007EB40: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8007EB44: lw          $t3, 0x20C0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X20C0);
    // 0x8007EB48: lui         $t5, 0xFA00
    ctx->r13 = S32(0XFA00 << 16);
    // 0x8007EB4C: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8007EB50: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8007EB54: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007EB58: sw          $t4, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r12;
    // 0x8007EB5C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007EB60: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8007EB64: lwc1        $f10, 0x1EC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1EC);
    // 0x8007EB68: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8007EB6C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007EB70: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007EB74: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8007EB78: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8007EB7C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8007EB80: nop

    // 0x8007EB84: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8007EB88: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8007EB8C: nop

    // 0x8007EB90: andi        $at, $t8, 0x4
    ctx->r1 = ctx->r24 & 0X4;
    // 0x8007EB94: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8007EB98: beq         $t8, $zero, L_8007EBE8
    if (ctx->r24 == 0) {
        // 0x8007EB9C: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_8007EBE8;
    }
    // 0x8007EB9C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8007EBA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007EBA4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007EBA8: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8007EBAC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8007EBB0: nop

    // 0x8007EBB4: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8007EBB8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8007EBBC: nop

    // 0x8007EBC0: andi        $at, $t8, 0x4
    ctx->r1 = ctx->r24 & 0X4;
    // 0x8007EBC4: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8007EBC8: bne         $t8, $zero, L_8007EBE0
    if (ctx->r24 != 0) {
        // 0x8007EBCC: nop
    
            goto L_8007EBE0;
    }
    // 0x8007EBCC: nop

    // 0x8007EBD0: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8007EBD4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007EBD8: b           L_8007EBF8
    // 0x8007EBDC: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8007EBF8;
    // 0x8007EBDC: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8007EBE0:
    // 0x8007EBE0: b           L_8007EBF8
    // 0x8007EBE4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8007EBF8;
    // 0x8007EBE4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_8007EBE8:
    // 0x8007EBE8: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8007EBEC: nop

    // 0x8007EBF0: bltz        $t8, L_8007EBE0
    if (SIGNED(ctx->r24) < 0) {
        // 0x8007EBF4: nop
    
            goto L_8007EBE0;
    }
    // 0x8007EBF4: nop

L_8007EBF8:
    // 0x8007EBF8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8007EBFC: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8007EC00: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8007EC04: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8007EC08: lw          $t1, 0x20C0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X20C0);
    // 0x8007EC0C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007EC10: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x8007EC14: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8007EC18: lui         $t3, 0xF664
    ctx->r11 = S32(0XF664 << 16);
    // 0x8007EC1C: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8007EC20: sw          $t2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r10;
    // 0x8007EC24: ori         $t3, $t3, 0x4B0
    ctx->r11 = ctx->r11 | 0X4B0;
    // 0x8007EC28: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8007EC2C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8007EC30: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8007EC34: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8007EC38: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x8007EC3C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8007EC40: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8007EC44: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8007EC48: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8007EC4C: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x8007EC50: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8007EC54: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8007EC58: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8007EC5C: jal         0x800A3AF0
    // 0x8007EC60: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    func_800A3AF0(rdram, ctx);
        goto after_0;
    // 0x8007EC60: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    after_0:
    // 0x8007EC64: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007EC68: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x8007EC6C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007EC70: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8007EC74: lwc1        $f6, 0x1E8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1E8);
    // 0x8007EC78: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007EC7C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8007EC80: lwc1        $f18, 0x1EC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1EC);
    // 0x8007EC84: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007EC88: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x8007EC8C: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8007EC90: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x8007EC94: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x8007EC98: swc1        $f4, 0x1EC($at)
    MEM_W(0X1EC, ctx->r1) = ctx->f4.u32l;
    // 0x8007EC9C: bc1f        L_8007ECAC
    if (!c1cs) {
        // 0x8007ECA0: nop
    
            goto L_8007ECAC;
    }
    // 0x8007ECA0: nop

    // 0x8007ECA4: b           L_8007ECB8
    // 0x8007ECA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8007ECB8;
    // 0x8007ECA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007ECAC:
    // 0x8007ECAC: b           L_8007ECB8
    // 0x8007ECB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8007ECB8;
    // 0x8007ECB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8007ECB4:
    // 0x8007ECB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007ECB8:
    // 0x8007ECB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007ECBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007ECC0: jr          $ra
    // 0x8007ECC4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8007ECC4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8007ECC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007ECC8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007ECCC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8007ECD0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007ECD4: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x8007ECD8: nop

    // 0x8007ECDC: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x8007ECE0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007ECE4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8007ECE8: swc1        $f10, 0x1E8($at)
    MEM_W(0X1E8, ctx->r1) = ctx->f10.u32l;
    // 0x8007ECEC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007ECF0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007ECF4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007ECF8: jr          $ra
    // 0x8007ECFC: swc1        $f16, 0x1EC($at)
    MEM_W(0X1EC, ctx->r1) = ctx->f16.u32l;
    return;
    // 0x8007ECFC: swc1        $f16, 0x1EC($at)
    MEM_W(0X1EC, ctx->r1) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_8007ED00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007ED00: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007ED04: lwc1        $f4, 0x1F4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1F4);
    // 0x8007ED08: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007ED0C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8007ED10: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007ED14: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8007ED18: c.le.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d <= ctx->f8.d;
    // 0x8007ED1C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8007ED20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007ED24: bc1f        L_8007EF9C
    if (!c1cs) {
        // 0x8007ED28: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8007EF9C;
    }
    // 0x8007ED28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007ED2C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8007ED30: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x8007ED34: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007ED38: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x8007ED3C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8007ED40: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8007ED44: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x8007ED48: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8007ED4C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8007ED50: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8007ED54: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8007ED58: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8007ED5C: lw          $t1, 0x20C0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X20C0);
    // 0x8007ED60: lui         $t3, 0xE300
    ctx->r11 = S32(0XE300 << 16);
    // 0x8007ED64: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x8007ED68: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8007ED6C: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8007ED70: sw          $t2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r10;
    // 0x8007ED74: ori         $t3, $t3, 0xA01
    ctx->r11 = ctx->r11 | 0XA01;
    // 0x8007ED78: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8007ED7C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8007ED80: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8007ED84: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8007ED88: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x8007ED8C: lui         $t8, 0xD9C0
    ctx->r24 = S32(0XD9C0 << 16);
    // 0x8007ED90: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x8007ED94: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8007ED98: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8007ED9C: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x8007EDA0: ori         $t8, $t8, 0xF9FA
    ctx->r24 = ctx->r24 | 0XF9FA;
    // 0x8007EDA4: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8007EDA8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8007EDAC: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8007EDB0: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8007EDB4: lw          $t1, 0x20C0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X20C0);
    // 0x8007EDB8: lui         $t3, 0xE200
    ctx->r11 = S32(0XE200 << 16);
    // 0x8007EDBC: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x8007EDC0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8007EDC4: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8007EDC8: sw          $t2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r10;
    // 0x8007EDCC: ori         $t3, $t3, 0x1C
    ctx->r11 = ctx->r11 | 0X1C;
    // 0x8007EDD0: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8007EDD4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8007EDD8: lui         $t5, 0x50
    ctx->r13 = S32(0X50 << 16);
    // 0x8007EDDC: ori         $t5, $t5, 0x4240
    ctx->r13 = ctx->r13 | 0X4240;
    // 0x8007EDE0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8007EDE4: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8007EDE8: lw          $t7, 0x20C0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X20C0);
    // 0x8007EDEC: lui         $t9, 0xFCFF
    ctx->r25 = S32(0XFCFF << 16);
    // 0x8007EDF0: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8007EDF4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007EDF8: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8007EDFC: sw          $t8, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r24;
    // 0x8007EE00: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x8007EE04: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8007EE08: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8007EE0C: lui         $t1, 0xFFFD
    ctx->r9 = S32(0XFFFD << 16);
    // 0x8007EE10: ori         $t1, $t1, 0xF6FB
    ctx->r9 = ctx->r9 | 0XF6FB;
    // 0x8007EE14: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8007EE18: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8007EE1C: lw          $t3, 0x20C0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X20C0);
    // 0x8007EE20: lui         $t5, 0xFA00
    ctx->r13 = S32(0XFA00 << 16);
    // 0x8007EE24: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8007EE28: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8007EE2C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007EE30: sw          $t4, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r12;
    // 0x8007EE34: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007EE38: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8007EE3C: lwc1        $f10, 0x1F4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1F4);
    // 0x8007EE40: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8007EE44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007EE48: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007EE4C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8007EE50: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8007EE54: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8007EE58: nop

    // 0x8007EE5C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8007EE60: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8007EE64: nop

    // 0x8007EE68: andi        $at, $t8, 0x4
    ctx->r1 = ctx->r24 & 0X4;
    // 0x8007EE6C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8007EE70: beq         $t8, $zero, L_8007EEC0
    if (ctx->r24 == 0) {
        // 0x8007EE74: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_8007EEC0;
    }
    // 0x8007EE74: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8007EE78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007EE7C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007EE80: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8007EE84: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8007EE88: nop

    // 0x8007EE8C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8007EE90: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8007EE94: nop

    // 0x8007EE98: andi        $at, $t8, 0x4
    ctx->r1 = ctx->r24 & 0X4;
    // 0x8007EE9C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8007EEA0: bne         $t8, $zero, L_8007EEB8
    if (ctx->r24 != 0) {
        // 0x8007EEA4: nop
    
            goto L_8007EEB8;
    }
    // 0x8007EEA4: nop

    // 0x8007EEA8: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8007EEAC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007EEB0: b           L_8007EED0
    // 0x8007EEB4: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8007EED0;
    // 0x8007EEB4: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8007EEB8:
    // 0x8007EEB8: b           L_8007EED0
    // 0x8007EEBC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8007EED0;
    // 0x8007EEBC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_8007EEC0:
    // 0x8007EEC0: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8007EEC4: nop

    // 0x8007EEC8: bltz        $t8, L_8007EEB8
    if (SIGNED(ctx->r24) < 0) {
        // 0x8007EECC: nop
    
            goto L_8007EEB8;
    }
    // 0x8007EECC: nop

L_8007EED0:
    // 0x8007EED0: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8007EED4: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8007EED8: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x8007EEDC: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x8007EEE0: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8007EEE4: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8007EEE8: lw          $t2, 0x20C0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X20C0);
    // 0x8007EEEC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007EEF0: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x8007EEF4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8007EEF8: lui         $t4, 0xF664
    ctx->r12 = S32(0XF664 << 16);
    // 0x8007EEFC: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8007EF00: sw          $t3, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r11;
    // 0x8007EF04: ori         $t4, $t4, 0x4B0
    ctx->r12 = ctx->r12 | 0X4B0;
    // 0x8007EF08: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8007EF0C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8007EF10: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8007EF14: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8007EF18: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8007EF1C: lw          $t7, 0x20C0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X20C0);
    // 0x8007EF20: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8007EF24: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x8007EF28: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8007EF2C: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8007EF30: sw          $t8, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r24;
    // 0x8007EF34: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8007EF38: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8007EF3C: jal         0x800A3AF0
    // 0x8007EF40: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    func_800A3AF0(rdram, ctx);
        goto after_0;
    // 0x8007EF40: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    after_0:
    // 0x8007EF44: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007EF48: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x8007EF4C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007EF50: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8007EF54: lwc1        $f6, 0x1F0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1F0);
    // 0x8007EF58: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007EF5C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8007EF60: lwc1        $f18, 0x1F4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1F4);
    // 0x8007EF64: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007EF68: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x8007EF6C: swc1        $f4, 0x1F4($at)
    MEM_W(0X1F4, ctx->r1) = ctx->f4.u32l;
    // 0x8007EF70: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007EF74: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8007EF78: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x8007EF7C: c.le.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d <= ctx->f8.d;
    // 0x8007EF80: nop

    // 0x8007EF84: bc1f        L_8007EF94
    if (!c1cs) {
        // 0x8007EF88: nop
    
            goto L_8007EF94;
    }
    // 0x8007EF88: nop

    // 0x8007EF8C: b           L_8007EFA0
    // 0x8007EF90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8007EFA0;
    // 0x8007EF90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007EF94:
    // 0x8007EF94: b           L_8007EFA0
    // 0x8007EF98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8007EFA0;
    // 0x8007EF98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8007EF9C:
    // 0x8007EF9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007EFA0:
    // 0x8007EFA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007EFA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007EFA8: jr          $ra
    // 0x8007EFAC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8007EFAC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8007EFB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007EFB0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007EFB4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8007EFB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007EFBC: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x8007EFC0: nop

    // 0x8007EFC4: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x8007EFC8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007EFCC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007EFD0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8007EFD4: swc1        $f10, 0x1F0($at)
    MEM_W(0X1F0, ctx->r1) = ctx->f10.u32l;
    // 0x8007EFD8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007EFDC: jr          $ra
    // 0x8007EFE0: swc1        $f16, 0x1F4($at)
    MEM_W(0X1F4, ctx->r1) = ctx->f16.u32l;
    return;
    // 0x8007EFE0: swc1        $f16, 0x1F4($at)
    MEM_W(0X1F4, ctx->r1) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_8007EFE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007EFE4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007EFE8: lwc1        $f4, 0x1FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1FC);
    // 0x8007EFEC: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x8007EFF0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007EFF4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8007EFF8: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x8007EFFC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8007F000: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007F004: bc1f        L_8007F274
    if (!c1cs) {
        // 0x8007F008: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8007F274;
    }
    // 0x8007F008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007F00C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8007F010: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x8007F014: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007F018: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x8007F01C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8007F020: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8007F024: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x8007F028: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8007F02C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8007F030: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8007F034: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8007F038: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8007F03C: lw          $t1, 0x20C0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X20C0);
    // 0x8007F040: lui         $t3, 0xE300
    ctx->r11 = S32(0XE300 << 16);
    // 0x8007F044: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x8007F048: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8007F04C: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8007F050: sw          $t2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r10;
    // 0x8007F054: ori         $t3, $t3, 0xA01
    ctx->r11 = ctx->r11 | 0XA01;
    // 0x8007F058: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8007F05C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8007F060: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8007F064: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8007F068: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x8007F06C: lui         $t8, 0xD9C0
    ctx->r24 = S32(0XD9C0 << 16);
    // 0x8007F070: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x8007F074: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8007F078: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8007F07C: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x8007F080: ori         $t8, $t8, 0xF9FA
    ctx->r24 = ctx->r24 | 0XF9FA;
    // 0x8007F084: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8007F088: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8007F08C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8007F090: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8007F094: lw          $t1, 0x20C0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X20C0);
    // 0x8007F098: lui         $t3, 0xE200
    ctx->r11 = S32(0XE200 << 16);
    // 0x8007F09C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x8007F0A0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8007F0A4: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8007F0A8: sw          $t2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r10;
    // 0x8007F0AC: ori         $t3, $t3, 0x1C
    ctx->r11 = ctx->r11 | 0X1C;
    // 0x8007F0B0: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8007F0B4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8007F0B8: lui         $t5, 0x50
    ctx->r13 = S32(0X50 << 16);
    // 0x8007F0BC: ori         $t5, $t5, 0x4240
    ctx->r13 = ctx->r13 | 0X4240;
    // 0x8007F0C0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8007F0C4: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8007F0C8: lw          $t7, 0x20C0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X20C0);
    // 0x8007F0CC: lui         $t9, 0xFCFF
    ctx->r25 = S32(0XFCFF << 16);
    // 0x8007F0D0: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8007F0D4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007F0D8: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8007F0DC: sw          $t8, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r24;
    // 0x8007F0E0: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x8007F0E4: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8007F0E8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8007F0EC: lui         $t1, 0xFFFD
    ctx->r9 = S32(0XFFFD << 16);
    // 0x8007F0F0: ori         $t1, $t1, 0xF6FB
    ctx->r9 = ctx->r9 | 0XF6FB;
    // 0x8007F0F4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8007F0F8: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8007F0FC: lw          $t3, 0x20C0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X20C0);
    // 0x8007F100: lui         $t5, 0xFA00
    ctx->r13 = S32(0XFA00 << 16);
    // 0x8007F104: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8007F108: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8007F10C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007F110: sw          $t4, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r12;
    // 0x8007F114: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007F118: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8007F11C: lwc1        $f10, 0x1FC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1FC);
    // 0x8007F120: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8007F124: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007F128: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007F12C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8007F130: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8007F134: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8007F138: nop

    // 0x8007F13C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8007F140: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8007F144: nop

    // 0x8007F148: andi        $at, $t8, 0x4
    ctx->r1 = ctx->r24 & 0X4;
    // 0x8007F14C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8007F150: beq         $t8, $zero, L_8007F1A0
    if (ctx->r24 == 0) {
        // 0x8007F154: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_8007F1A0;
    }
    // 0x8007F154: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8007F158: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007F15C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007F160: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8007F164: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8007F168: nop

    // 0x8007F16C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8007F170: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8007F174: nop

    // 0x8007F178: andi        $at, $t8, 0x4
    ctx->r1 = ctx->r24 & 0X4;
    // 0x8007F17C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8007F180: bne         $t8, $zero, L_8007F198
    if (ctx->r24 != 0) {
        // 0x8007F184: nop
    
            goto L_8007F198;
    }
    // 0x8007F184: nop

    // 0x8007F188: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8007F18C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007F190: b           L_8007F1B0
    // 0x8007F194: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8007F1B0;
    // 0x8007F194: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8007F198:
    // 0x8007F198: b           L_8007F1B0
    // 0x8007F19C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8007F1B0;
    // 0x8007F19C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_8007F1A0:
    // 0x8007F1A0: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8007F1A4: nop

    // 0x8007F1A8: bltz        $t8, L_8007F198
    if (SIGNED(ctx->r24) < 0) {
        // 0x8007F1AC: nop
    
            goto L_8007F198;
    }
    // 0x8007F1AC: nop

L_8007F1B0:
    // 0x8007F1B0: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8007F1B4: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8007F1B8: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x8007F1BC: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x8007F1C0: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8007F1C4: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8007F1C8: lw          $t2, 0x20C0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X20C0);
    // 0x8007F1CC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007F1D0: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x8007F1D4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8007F1D8: lui         $t4, 0xF664
    ctx->r12 = S32(0XF664 << 16);
    // 0x8007F1DC: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8007F1E0: sw          $t3, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r11;
    // 0x8007F1E4: ori         $t4, $t4, 0x4B0
    ctx->r12 = ctx->r12 | 0X4B0;
    // 0x8007F1E8: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8007F1EC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8007F1F0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8007F1F4: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8007F1F8: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8007F1FC: lw          $t7, 0x20C0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X20C0);
    // 0x8007F200: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8007F204: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x8007F208: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8007F20C: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8007F210: sw          $t8, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r24;
    // 0x8007F214: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8007F218: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8007F21C: jal         0x800A3AF0
    // 0x8007F220: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    func_800A3AF0(rdram, ctx);
        goto after_0;
    // 0x8007F220: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    after_0:
    // 0x8007F224: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007F228: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x8007F22C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007F230: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8007F234: lwc1        $f6, 0x1F8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1F8);
    // 0x8007F238: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007F23C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8007F240: lwc1        $f18, 0x1FC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1FC);
    // 0x8007F244: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007F248: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x8007F24C: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8007F250: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x8007F254: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x8007F258: swc1        $f4, 0x1FC($at)
    MEM_W(0X1FC, ctx->r1) = ctx->f4.u32l;
    // 0x8007F25C: bc1f        L_8007F26C
    if (!c1cs) {
        // 0x8007F260: nop
    
            goto L_8007F26C;
    }
    // 0x8007F260: nop

    // 0x8007F264: b           L_8007F278
    // 0x8007F268: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8007F278;
    // 0x8007F268: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007F26C:
    // 0x8007F26C: b           L_8007F278
    // 0x8007F270: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8007F278;
    // 0x8007F270: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8007F274:
    // 0x8007F274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007F278:
    // 0x8007F278: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007F27C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007F280: jr          $ra
    // 0x8007F284: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8007F284: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8007F288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F288: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007F28C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8007F290: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007F294: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x8007F298: nop

    // 0x8007F29C: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x8007F2A0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007F2A4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8007F2A8: swc1        $f10, 0x1F8($at)
    MEM_W(0X1F8, ctx->r1) = ctx->f10.u32l;
    // 0x8007F2AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007F2B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007F2B4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007F2B8: jr          $ra
    // 0x8007F2BC: swc1        $f16, 0x1FC($at)
    MEM_W(0X1FC, ctx->r1) = ctx->f16.u32l;
    return;
    // 0x8007F2BC: swc1        $f16, 0x1FC($at)
    MEM_W(0X1FC, ctx->r1) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_8007F2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F2C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007F2C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007F2C8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8007F2CC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F2D0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8007F2D4: sb          $t6, -0x2B4($at)
    MEM_B(-0X2B4, ctx->r1) = ctx->r14;
    // 0x8007F2D8: addiu       $a0, $a0, 0x31A0
    ctx->r4 = ADD32(ctx->r4, 0X31A0);
    // 0x8007F2DC: jal         0x80076EC0
    // 0x8007F2E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80076EC0(rdram, ctx);
        goto after_0;
    // 0x8007F2E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8007F2E4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8007F2E8: lw          $a0, 0x31A0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X31A0);
    // 0x8007F2EC: jal         0x800A4654
    // 0x8007F2F0: nop

    func_800A4654(rdram, ctx);
        goto after_1;
    // 0x8007F2F0: nop

    after_1:
    // 0x8007F2F4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007F2F8: jal         0x80087784
    // 0x8007F2FC: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_2;
    // 0x8007F2FC: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_2:
    // 0x8007F300: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8007F304: jal         0x80085030
    // 0x8007F308: addiu       $a0, $a0, 0x3B28
    ctx->r4 = ADD32(ctx->r4, 0X3B28);
    func_80085030(rdram, ctx);
        goto after_3;
    // 0x8007F308: addiu       $a0, $a0, 0x3B28
    ctx->r4 = ADD32(ctx->r4, 0X3B28);
    after_3:
    // 0x8007F30C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007F310: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F314: sw          $zero, 0x31D8($at)
    MEM_W(0X31D8, ctx->r1) = 0;
    // 0x8007F318: jr          $ra
    // 0x8007F31C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8007F31C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007F320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F320: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007F324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007F328: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8007F32C: jal         0x80077028
    // 0x8007F330: addiu       $a0, $a0, 0x31A0
    ctx->r4 = ADD32(ctx->r4, 0X31A0);
    func_80077028(rdram, ctx);
        goto after_0;
    // 0x8007F330: addiu       $a0, $a0, 0x31A0
    ctx->r4 = ADD32(ctx->r4, 0X31A0);
    after_0:
    // 0x8007F334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007F338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007F33C: jr          $ra
    // 0x8007F340: nop

    return;
    // 0x8007F340: nop

;}
RECOMP_FUNC void func_8007F344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F344: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8007F348: lw          $t6, 0x31DC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X31DC);
    // 0x8007F34C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8007F350: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8007F354: sltiu       $at, $t7, 0xC
    ctx->r1 = ctx->r15 < 0XC ? 1 : 0;
    // 0x8007F358: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8007F35C: beq         $at, $zero, L_8007F6DC
    if (ctx->r1 == 0) {
        // 0x8007F360: sw          $s0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r16;
            goto L_8007F6DC;
    }
    // 0x8007F360: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8007F364: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007F368: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007F36C: addu        $at, $at, $t7
    gpr jr_addend_8007F378 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8007F370: lw          $t7, -0x1EB0($at)
    ctx->r15 = ADD32(ctx->r1, -0X1EB0);
    // 0x8007F374: nop

    // 0x8007F378: jr          $t7
    // 0x8007F37C: nop

    switch (jr_addend_8007F378 >> 2) {
        case 0: goto L_8007F380; break;
        case 1: goto L_8007F3C8; break;
        case 2: goto L_8007F410; break;
        case 3: goto L_8007F458; break;
        case 4: goto L_8007F4A0; break;
        case 5: goto L_8007F4E8; break;
        case 6: goto L_8007F530; break;
        case 7: goto L_8007F578; break;
        case 8: goto L_8007F5C0; break;
        case 9: goto L_8007F608; break;
        case 10: goto L_8007F650; break;
        case 11: goto L_8007F698; break;
        default: switch_error(__func__, 0x8007F378, 0x800DE150);
    }
    // 0x8007F37C: nop

L_8007F380:
    // 0x8007F380: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8007F384: lw          $t8, 0x31A0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X31A0);
    // 0x8007F388: nop

    // 0x8007F38C: lhu         $t9, 0x6($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X6);
    // 0x8007F390: nop

    // 0x8007F394: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x8007F398: bne         $at, $zero, L_8007F6DC
    if (ctx->r1 != 0) {
        // 0x8007F39C: nop
    
            goto L_8007F6DC;
    }
    // 0x8007F39C: nop

    // 0x8007F3A0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007F3A4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007F3A8: addiu       $a1, $a1, 0x3B28
    ctx->r5 = ADD32(ctx->r5, 0X3B28);
    // 0x8007F3AC: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8007F3B0: jal         0x8008A5C8
    // 0x8007F3B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8008A5C8(rdram, ctx);
        goto after_0;
    // 0x8007F3B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8007F3B8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8007F3BC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F3C0: b           L_8007F6DC
    // 0x8007F3C4: sw          $t0, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r8;
        goto L_8007F6DC;
    // 0x8007F3C4: sw          $t0, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r8;
L_8007F3C8:
    // 0x8007F3C8: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8007F3CC: lw          $t1, 0x31A0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X31A0);
    // 0x8007F3D0: nop

    // 0x8007F3D4: lhu         $t2, 0x6($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X6);
    // 0x8007F3D8: nop

    // 0x8007F3DC: slti        $at, $t2, 0x330
    ctx->r1 = SIGNED(ctx->r10) < 0X330 ? 1 : 0;
    // 0x8007F3E0: bne         $at, $zero, L_8007F6DC
    if (ctx->r1 != 0) {
        // 0x8007F3E4: nop
    
            goto L_8007F6DC;
    }
    // 0x8007F3E4: nop

    // 0x8007F3E8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007F3EC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007F3F0: addiu       $a1, $a1, 0x3B28
    ctx->r5 = ADD32(ctx->r5, 0X3B28);
    // 0x8007F3F4: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8007F3F8: jal         0x8008A5C8
    // 0x8007F3FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8008A5C8(rdram, ctx);
        goto after_1;
    // 0x8007F3FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8007F400: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x8007F404: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F408: b           L_8007F6DC
    // 0x8007F40C: sw          $t3, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r11;
        goto L_8007F6DC;
    // 0x8007F40C: sw          $t3, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r11;
L_8007F410:
    // 0x8007F410: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8007F414: lw          $t4, 0x31A0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X31A0);
    // 0x8007F418: nop

    // 0x8007F41C: lhu         $t5, 0x6($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X6);
    // 0x8007F420: nop

    // 0x8007F424: slti        $at, $t5, 0x42B
    ctx->r1 = SIGNED(ctx->r13) < 0X42B ? 1 : 0;
    // 0x8007F428: bne         $at, $zero, L_8007F6DC
    if (ctx->r1 != 0) {
        // 0x8007F42C: nop
    
            goto L_8007F6DC;
    }
    // 0x8007F42C: nop

    // 0x8007F430: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007F434: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007F438: addiu       $a1, $a1, 0x3B28
    ctx->r5 = ADD32(ctx->r5, 0X3B28);
    // 0x8007F43C: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8007F440: jal         0x8008A5C8
    // 0x8007F444: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8008A5C8(rdram, ctx);
        goto after_2;
    // 0x8007F444: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x8007F448: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8007F44C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F450: b           L_8007F6DC
    // 0x8007F454: sw          $t6, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r14;
        goto L_8007F6DC;
    // 0x8007F454: sw          $t6, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r14;
L_8007F458:
    // 0x8007F458: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8007F45C: lw          $t7, 0x31A0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X31A0);
    // 0x8007F460: nop

    // 0x8007F464: lhu         $t8, 0x6($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X6);
    // 0x8007F468: nop

    // 0x8007F46C: slti        $at, $t8, 0x4F8
    ctx->r1 = SIGNED(ctx->r24) < 0X4F8 ? 1 : 0;
    // 0x8007F470: bne         $at, $zero, L_8007F6DC
    if (ctx->r1 != 0) {
        // 0x8007F474: nop
    
            goto L_8007F6DC;
    }
    // 0x8007F474: nop

    // 0x8007F478: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007F47C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007F480: addiu       $a1, $a1, 0x3B28
    ctx->r5 = ADD32(ctx->r5, 0X3B28);
    // 0x8007F484: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8007F488: jal         0x8008A5C8
    // 0x8007F48C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8008A5C8(rdram, ctx);
        goto after_3;
    // 0x8007F48C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x8007F490: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8007F494: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F498: b           L_8007F6DC
    // 0x8007F49C: sw          $t9, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r25;
        goto L_8007F6DC;
    // 0x8007F49C: sw          $t9, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r25;
L_8007F4A0:
    // 0x8007F4A0: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8007F4A4: lw          $t0, 0x31A0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X31A0);
    // 0x8007F4A8: nop

    // 0x8007F4AC: lhu         $t1, 0x6($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X6);
    // 0x8007F4B0: nop

    // 0x8007F4B4: slti        $at, $t1, 0x645
    ctx->r1 = SIGNED(ctx->r9) < 0X645 ? 1 : 0;
    // 0x8007F4B8: bne         $at, $zero, L_8007F6DC
    if (ctx->r1 != 0) {
        // 0x8007F4BC: nop
    
            goto L_8007F6DC;
    }
    // 0x8007F4BC: nop

    // 0x8007F4C0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007F4C4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007F4C8: addiu       $a1, $a1, 0x3B28
    ctx->r5 = ADD32(ctx->r5, 0X3B28);
    // 0x8007F4CC: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8007F4D0: jal         0x8008A5C8
    // 0x8007F4D4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8008A5C8(rdram, ctx);
        goto after_4;
    // 0x8007F4D4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x8007F4D8: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x8007F4DC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F4E0: b           L_8007F6DC
    // 0x8007F4E4: sw          $t2, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r10;
        goto L_8007F6DC;
    // 0x8007F4E4: sw          $t2, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r10;
L_8007F4E8:
    // 0x8007F4E8: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8007F4EC: lw          $t3, 0x31A0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X31A0);
    // 0x8007F4F0: nop

    // 0x8007F4F4: lhu         $t4, 0x6($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X6);
    // 0x8007F4F8: nop

    // 0x8007F4FC: slti        $at, $t4, 0x75D
    ctx->r1 = SIGNED(ctx->r12) < 0X75D ? 1 : 0;
    // 0x8007F500: bne         $at, $zero, L_8007F6DC
    if (ctx->r1 != 0) {
        // 0x8007F504: nop
    
            goto L_8007F6DC;
    }
    // 0x8007F504: nop

    // 0x8007F508: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007F50C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007F510: addiu       $a1, $a1, 0x3B28
    ctx->r5 = ADD32(ctx->r5, 0X3B28);
    // 0x8007F514: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8007F518: jal         0x8008A5C8
    // 0x8007F51C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8008A5C8(rdram, ctx);
        goto after_5;
    // 0x8007F51C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_5:
    // 0x8007F520: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x8007F524: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F528: b           L_8007F6DC
    // 0x8007F52C: sw          $t5, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r13;
        goto L_8007F6DC;
    // 0x8007F52C: sw          $t5, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r13;
L_8007F530:
    // 0x8007F530: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8007F534: lw          $t6, 0x31A0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X31A0);
    // 0x8007F538: nop

    // 0x8007F53C: lhu         $t7, 0x6($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X6);
    // 0x8007F540: nop

    // 0x8007F544: slti        $at, $t7, 0x80C
    ctx->r1 = SIGNED(ctx->r15) < 0X80C ? 1 : 0;
    // 0x8007F548: bne         $at, $zero, L_8007F6DC
    if (ctx->r1 != 0) {
        // 0x8007F54C: nop
    
            goto L_8007F6DC;
    }
    // 0x8007F54C: nop

    // 0x8007F550: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007F554: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007F558: addiu       $a1, $a1, 0x3B28
    ctx->r5 = ADD32(ctx->r5, 0X3B28);
    // 0x8007F55C: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8007F560: jal         0x8008A5C8
    // 0x8007F564: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8008A5C8(rdram, ctx);
        goto after_6;
    // 0x8007F564: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_6:
    // 0x8007F568: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x8007F56C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F570: b           L_8007F6DC
    // 0x8007F574: sw          $t8, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r24;
        goto L_8007F6DC;
    // 0x8007F574: sw          $t8, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r24;
L_8007F578:
    // 0x8007F578: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8007F57C: lw          $t9, 0x31A0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X31A0);
    // 0x8007F580: nop

    // 0x8007F584: lhu         $t0, 0x6($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X6);
    // 0x8007F588: nop

    // 0x8007F58C: slti        $at, $t0, 0xAAD
    ctx->r1 = SIGNED(ctx->r8) < 0XAAD ? 1 : 0;
    // 0x8007F590: bne         $at, $zero, L_8007F6DC
    if (ctx->r1 != 0) {
        // 0x8007F594: nop
    
            goto L_8007F6DC;
    }
    // 0x8007F594: nop

    // 0x8007F598: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007F59C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007F5A0: addiu       $a1, $a1, 0x3B28
    ctx->r5 = ADD32(ctx->r5, 0X3B28);
    // 0x8007F5A4: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8007F5A8: jal         0x8008A5C8
    // 0x8007F5AC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8008A5C8(rdram, ctx);
        goto after_7;
    // 0x8007F5AC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_7:
    // 0x8007F5B0: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x8007F5B4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F5B8: b           L_8007F6DC
    // 0x8007F5BC: sw          $t1, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r9;
        goto L_8007F6DC;
    // 0x8007F5BC: sw          $t1, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r9;
L_8007F5C0:
    // 0x8007F5C0: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8007F5C4: lw          $t2, 0x31A0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X31A0);
    // 0x8007F5C8: nop

    // 0x8007F5CC: lhu         $t3, 0x6($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X6);
    // 0x8007F5D0: nop

    // 0x8007F5D4: slti        $at, $t3, 0xAE5
    ctx->r1 = SIGNED(ctx->r11) < 0XAE5 ? 1 : 0;
    // 0x8007F5D8: bne         $at, $zero, L_8007F6DC
    if (ctx->r1 != 0) {
        // 0x8007F5DC: nop
    
            goto L_8007F6DC;
    }
    // 0x8007F5DC: nop

    // 0x8007F5E0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007F5E4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007F5E8: addiu       $a1, $a1, 0x3B28
    ctx->r5 = ADD32(ctx->r5, 0X3B28);
    // 0x8007F5EC: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8007F5F0: jal         0x8008A5C8
    // 0x8007F5F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8008A5C8(rdram, ctx);
        goto after_8;
    // 0x8007F5F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8007F5F8: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x8007F5FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F600: b           L_8007F6DC
    // 0x8007F604: sw          $t4, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r12;
        goto L_8007F6DC;
    // 0x8007F604: sw          $t4, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r12;
L_8007F608:
    // 0x8007F608: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8007F60C: lw          $t5, 0x31A0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X31A0);
    // 0x8007F610: nop

    // 0x8007F614: lhu         $t6, 0x6($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X6);
    // 0x8007F618: nop

    // 0x8007F61C: slti        $at, $t6, 0xBAB
    ctx->r1 = SIGNED(ctx->r14) < 0XBAB ? 1 : 0;
    // 0x8007F620: bne         $at, $zero, L_8007F6DC
    if (ctx->r1 != 0) {
        // 0x8007F624: nop
    
            goto L_8007F6DC;
    }
    // 0x8007F624: nop

    // 0x8007F628: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007F62C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007F630: addiu       $a1, $a1, 0x3B28
    ctx->r5 = ADD32(ctx->r5, 0X3B28);
    // 0x8007F634: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8007F638: jal         0x8008A5C8
    // 0x8007F63C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8008A5C8(rdram, ctx);
        goto after_9;
    // 0x8007F63C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_9:
    // 0x8007F640: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x8007F644: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F648: b           L_8007F6DC
    // 0x8007F64C: sw          $t7, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r15;
        goto L_8007F6DC;
    // 0x8007F64C: sw          $t7, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r15;
L_8007F650:
    // 0x8007F650: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8007F654: lw          $t8, 0x31A0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X31A0);
    // 0x8007F658: nop

    // 0x8007F65C: lhu         $t9, 0x6($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X6);
    // 0x8007F660: nop

    // 0x8007F664: slti        $at, $t9, 0xD0C
    ctx->r1 = SIGNED(ctx->r25) < 0XD0C ? 1 : 0;
    // 0x8007F668: bne         $at, $zero, L_8007F6DC
    if (ctx->r1 != 0) {
        // 0x8007F66C: nop
    
            goto L_8007F6DC;
    }
    // 0x8007F66C: nop

    // 0x8007F670: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007F674: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007F678: addiu       $a1, $a1, 0x3B28
    ctx->r5 = ADD32(ctx->r5, 0X3B28);
    // 0x8007F67C: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8007F680: jal         0x8008A5C8
    // 0x8007F684: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8008A5C8(rdram, ctx);
        goto after_10;
    // 0x8007F684: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_10:
    // 0x8007F688: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x8007F68C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F690: b           L_8007F6DC
    // 0x8007F694: sw          $t0, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r8;
        goto L_8007F6DC;
    // 0x8007F694: sw          $t0, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r8;
L_8007F698:
    // 0x8007F698: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8007F69C: lw          $t1, 0x31A0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X31A0);
    // 0x8007F6A0: nop

    // 0x8007F6A4: lhu         $t2, 0x6($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X6);
    // 0x8007F6A8: nop

    // 0x8007F6AC: slti        $at, $t2, 0xEA6
    ctx->r1 = SIGNED(ctx->r10) < 0XEA6 ? 1 : 0;
    // 0x8007F6B0: bne         $at, $zero, L_8007F6DC
    if (ctx->r1 != 0) {
        // 0x8007F6B4: nop
    
            goto L_8007F6DC;
    }
    // 0x8007F6B4: nop

    // 0x8007F6B8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007F6BC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007F6C0: addiu       $a1, $a1, 0x3B28
    ctx->r5 = ADD32(ctx->r5, 0X3B28);
    // 0x8007F6C4: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8007F6C8: jal         0x8008A5C8
    // 0x8007F6CC: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8008A5C8(rdram, ctx);
        goto after_11;
    // 0x8007F6CC: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_11:
    // 0x8007F6D0: addiu       $t3, $zero, 0xD
    ctx->r11 = ADD32(0, 0XD);
    // 0x8007F6D4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F6D8: sw          $t3, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r11;
L_8007F6DC:
    // 0x8007F6DC: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8007F6E0: lw          $t4, 0x31D8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X31D8);
    // 0x8007F6E4: nop

    // 0x8007F6E8: bne         $t4, $zero, L_8007F7B4
    if (ctx->r12 != 0) {
        // 0x8007F6EC: nop
    
            goto L_8007F7B4;
    }
    // 0x8007F6EC: nop

    // 0x8007F6F0: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8007F6F4: lw          $t5, 0x31E0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X31E0);
    // 0x8007F6F8: nop

    // 0x8007F6FC: beq         $t5, $zero, L_8007F720
    if (ctx->r13 == 0) {
        // 0x8007F700: nop
    
            goto L_8007F720;
    }
    // 0x8007F700: nop

    // 0x8007F704: jal         0x8007F2C0
    // 0x8007F708: nop

    func_8007F2C0(rdram, ctx);
        goto after_12;
    // 0x8007F708: nop

    after_12:
    // 0x8007F70C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8007F710: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F714: sw          $t6, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r14;
    // 0x8007F718: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F71C: sw          $zero, 0x31E0($at)
    MEM_W(0X31E0, ctx->r1) = 0;
L_8007F720:
    // 0x8007F720: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8007F724: addiu       $t7, $t7, -0x10D0
    ctx->r15 = ADD32(ctx->r15, -0X10D0);
    // 0x8007F728: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x8007F72C: nop

    // 0x8007F730: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x8007F734: bne         $t9, $zero, L_8007F768
    if (ctx->r25 != 0) {
        // 0x8007F738: nop
    
            goto L_8007F768;
    }
    // 0x8007F738: nop

    // 0x8007F73C: andi        $t0, $t8, 0x1000
    ctx->r8 = ctx->r24 & 0X1000;
    // 0x8007F740: bne         $t0, $zero, L_8007F768
    if (ctx->r8 != 0) {
        // 0x8007F744: nop
    
            goto L_8007F768;
    }
    // 0x8007F744: nop

    // 0x8007F748: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8007F74C: lw          $t1, 0x31A0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X31A0);
    // 0x8007F750: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8007F754: lw          $t3, 0x31D0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X31D0);
    // 0x8007F758: lhu         $t2, 0x6($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X6);
    // 0x8007F75C: nop

    // 0x8007F760: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8007F764: bne         $at, $zero, L_8007F7A8
    if (ctx->r1 != 0) {
        // 0x8007F768: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_8007F7A8;
    }
L_8007F768:
    // 0x8007F768: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8007F76C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8007F770: jal         0x8007EFB0
    // 0x8007F774: nop

    func_8007EFB0(rdram, ctx);
        goto after_13;
    // 0x8007F774: nop

    after_13:
    // 0x8007F778: addiu       $t4, $zero, 0xD
    ctx->r12 = ADD32(0, 0XD);
    // 0x8007F77C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F780: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007F784: sw          $t4, 0x31DC($at)
    MEM_W(0X31DC, ctx->r1) = ctx->r12;
    // 0x8007F788: jal         0x80088C14
    // 0x8007F78C: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    func_80088C14(rdram, ctx);
        goto after_14;
    // 0x8007F78C: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    after_14:
    // 0x8007F790: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8007F794: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F798: sw          $t5, 0x31E0($at)
    MEM_W(0X31E0, ctx->r1) = ctx->r13;
    // 0x8007F79C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F7A0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8007F7A4: sw          $t6, 0x31D8($at)
    MEM_W(0X31D8, ctx->r1) = ctx->r14;
L_8007F7A8:
    // 0x8007F7A8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8007F7AC: jal         0x80077098
    // 0x8007F7B0: addiu       $a0, $a0, 0x31A0
    ctx->r4 = ADD32(ctx->r4, 0X31A0);
    func_80077098(rdram, ctx);
        goto after_15;
    // 0x8007F7B0: addiu       $a0, $a0, 0x31A0
    ctx->r4 = ADD32(ctx->r4, 0X31A0);
    after_15:
L_8007F7B4:
    // 0x8007F7B4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8007F7B8: lw          $t7, 0x31D8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X31D8);
    // 0x8007F7BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007F7C0: bne         $t7, $at, L_8007F830
    if (ctx->r15 != ctx->r1) {
        // 0x8007F7C4: nop
    
            goto L_8007F830;
    }
    // 0x8007F7C4: nop

    // 0x8007F7C8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8007F7CC: lw          $t9, 0x31E0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X31E0);
    // 0x8007F7D0: nop

    // 0x8007F7D4: beq         $t9, $zero, L_8007F7E4
    if (ctx->r25 == 0) {
        // 0x8007F7D8: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_8007F7E4;
    }
    // 0x8007F7D8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F7DC: b           L_8007F7F0
    // 0x8007F7E0: sw          $zero, 0x31E0($at)
    MEM_W(0X31E0, ctx->r1) = 0;
        goto L_8007F7F0;
    // 0x8007F7E0: sw          $zero, 0x31E0($at)
    MEM_W(0X31E0, ctx->r1) = 0;
L_8007F7E4:
    // 0x8007F7E4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8007F7E8: jal         0x80077098
    // 0x8007F7EC: addiu       $a0, $a0, 0x31A0
    ctx->r4 = ADD32(ctx->r4, 0X31A0);
    func_80077098(rdram, ctx);
        goto after_16;
    // 0x8007F7EC: addiu       $a0, $a0, 0x31A0
    ctx->r4 = ADD32(ctx->r4, 0X31A0);
    after_16:
L_8007F7F0:
    // 0x8007F7F0: jal         0x8007ED00
    // 0x8007F7F4: nop

    func_8007ED00(rdram, ctx);
        goto after_17;
    // 0x8007F7F4: nop

    after_17:
    // 0x8007F7F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007F7FC: bne         $v0, $at, L_8007F830
    if (ctx->r2 != ctx->r1) {
        // 0x8007F800: nop
    
            goto L_8007F830;
    }
    // 0x8007F800: nop

    // 0x8007F804: jal         0x8004A34C
    // 0x8007F808: nop

    func_8004A34C(rdram, ctx);
        goto after_18;
    // 0x8007F808: nop

    after_18:
    // 0x8007F80C: jal         0x8007F320
    // 0x8007F810: nop

    func_8007F320(rdram, ctx);
        goto after_19;
    // 0x8007F810: nop

    after_19:
    // 0x8007F814: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007F818: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F81C: sw          $t8, 0x31E0($at)
    MEM_W(0X31E0, ctx->r1) = ctx->r24;
    // 0x8007F820: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F824: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8007F828: b           L_8007FBA0
    // 0x8007F82C: sw          $t0, 0x31D8($at)
    MEM_W(0X31D8, ctx->r1) = ctx->r8;
        goto L_8007FBA0;
    // 0x8007F82C: sw          $t0, 0x31D8($at)
    MEM_W(0X31D8, ctx->r1) = ctx->r8;
L_8007F830:
    // 0x8007F830: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8007F834: lw          $t1, 0x31D8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X31D8);
    // 0x8007F838: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007F83C: bne         $t1, $at, L_8007F910
    if (ctx->r9 != ctx->r1) {
        // 0x8007F840: nop
    
            goto L_8007F910;
    }
    // 0x8007F840: nop

    // 0x8007F844: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8007F848: lw          $t2, 0x31E0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X31E0);
    // 0x8007F84C: nop

    // 0x8007F850: beq         $t2, $zero, L_8007F910
    if (ctx->r10 == 0) {
        // 0x8007F854: nop
    
            goto L_8007F910;
    }
    // 0x8007F854: nop

    // 0x8007F858: jal         0x8004A34C
    // 0x8007F85C: nop

    func_8004A34C(rdram, ctx);
        goto after_20;
    // 0x8007F85C: nop

    after_20:
    // 0x8007F860: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8007F864: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x8007F868: jal         0x80074888
    // 0x8007F86C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80074888(rdram, ctx);
        goto after_21;
    // 0x8007F86C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_21:
    // 0x8007F870: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007F874: jal         0x8007E03C
    // 0x8007F878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_22;
    // 0x8007F878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x8007F87C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007F880: sw          $v0, 0x200($at)
    MEM_W(0X200, ctx->r1) = ctx->r2;
    // 0x8007F884: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8007F888: lw          $a1, 0x200($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X200);
    // 0x8007F88C: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8007F890: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x8007F894: jal         0x800746C0
    // 0x8007F898: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800746C0(rdram, ctx);
        goto after_23;
    // 0x8007F898: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_23:
    // 0x8007F89C: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8007F8A0: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x8007F8A4: jal         0x80074888
    // 0x8007F8A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80074888(rdram, ctx);
        goto after_24;
    // 0x8007F8A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_24:
    // 0x8007F8AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007F8B0: jal         0x8007E03C
    // 0x8007F8B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_25;
    // 0x8007F8B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x8007F8B8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007F8BC: sw          $v0, 0x204($at)
    MEM_W(0X204, ctx->r1) = ctx->r2;
    // 0x8007F8C0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8007F8C4: lw          $a1, 0x204($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X204);
    // 0x8007F8C8: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8007F8CC: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x8007F8D0: jal         0x800746C0
    // 0x8007F8D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800746C0(rdram, ctx);
        goto after_26;
    // 0x8007F8D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_26:
    // 0x8007F8D8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8007F8DC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F8E0: sw          $t3, 0x31E0($at)
    MEM_W(0X31E0, ctx->r1) = ctx->r11;
    // 0x8007F8E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F8E8: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8007F8EC: sw          $t4, 0x31D8($at)
    MEM_W(0X31D8, ctx->r1) = ctx->r12;
    // 0x8007F8F0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8007F8F4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8007F8F8: jal         0x8007F288
    // 0x8007F8FC: nop

    func_8007F288(rdram, ctx);
        goto after_27;
    // 0x8007F8FC: nop

    after_27:
    // 0x8007F900: jal         0x8007EFE4
    // 0x8007F904: nop

    func_8007EFE4(rdram, ctx);
        goto after_28;
    // 0x8007F904: nop

    after_28:
    // 0x8007F908: b           L_8007FBA0
    // 0x8007F90C: nop

        goto L_8007FBA0;
    // 0x8007F90C: nop

L_8007F910:
    // 0x8007F910: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8007F914: lw          $t5, 0x31D8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X31D8);
    // 0x8007F918: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007F91C: bne         $t5, $at, L_8007F9A8
    if (ctx->r13 != ctx->r1) {
        // 0x8007F920: nop
    
            goto L_8007F9A8;
    }
    // 0x8007F920: nop

    // 0x8007F924: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007F928: jal         0x8005BBFC
    // 0x8007F92C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_29;
    // 0x8007F92C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_29:
    // 0x8007F930: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8007F934: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8007F938: lw          $a2, 0x204($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X204);
    // 0x8007F93C: lw          $a1, 0x200($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X200);
    // 0x8007F940: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007F944: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8007F948: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8007F94C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8007F950: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8007F954: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8007F958: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007F95C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8007F960: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8007F964: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8007F968: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8007F96C: jal         0x80057460
    // 0x8007F970: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80057460(rdram, ctx);
        goto after_30;
    // 0x8007F970: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_30:
    // 0x8007F974: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007F978: jal         0x8005BE40
    // 0x8007F97C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_31;
    // 0x8007F97C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_31:
    // 0x8007F980: jal         0x8007EFE4
    // 0x8007F984: nop

    func_8007EFE4(rdram, ctx);
        goto after_32;
    // 0x8007F984: nop

    after_32:
    // 0x8007F988: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007F98C: bne         $v0, $at, L_8007F9A8
    if (ctx->r2 != ctx->r1) {
        // 0x8007F990: nop
    
            goto L_8007F9A8;
    }
    // 0x8007F990: nop

    // 0x8007F994: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8007F998: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F99C: sw          $t0, 0x31D8($at)
    MEM_W(0X31D8, ctx->r1) = ctx->r8;
    // 0x8007F9A0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007F9A4: sw          $zero, 0x31E4($at)
    MEM_W(0X31E4, ctx->r1) = 0;
L_8007F9A8:
    // 0x8007F9A8: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8007F9AC: lw          $t1, 0x31D8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X31D8);
    // 0x8007F9B0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8007F9B4: bne         $t1, $at, L_8007FB20
    if (ctx->r9 != ctx->r1) {
        // 0x8007F9B8: nop
    
            goto L_8007FB20;
    }
    // 0x8007F9B8: nop

    // 0x8007F9BC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8007F9C0: addiu       $t2, $t2, -0x10D0
    ctx->r10 = ADD32(ctx->r10, -0X10D0);
    // 0x8007F9C4: lw          $t3, 0x24($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X24);
    // 0x8007F9C8: nop

    // 0x8007F9CC: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x8007F9D0: beq         $t4, $zero, L_8007F9F0
    if (ctx->r12 == 0) {
        // 0x8007F9D4: nop
    
            goto L_8007F9F0;
    }
    // 0x8007F9D4: nop

    // 0x8007F9D8: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8007F9DC: lw          $t5, 0x31E4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X31E4);
    // 0x8007F9E0: nop

    // 0x8007F9E4: slti        $at, $t5, 0x3C
    ctx->r1 = SIGNED(ctx->r13) < 0X3C ? 1 : 0;
    // 0x8007F9E8: beq         $at, $zero, L_8007FA3C
    if (ctx->r1 == 0) {
        // 0x8007F9EC: nop
    
            goto L_8007FA3C;
    }
    // 0x8007F9EC: nop

L_8007F9F0:
    // 0x8007F9F0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8007F9F4: addiu       $t6, $t6, -0x10D0
    ctx->r14 = ADD32(ctx->r14, -0X10D0);
    // 0x8007F9F8: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x8007F9FC: nop

    // 0x8007FA00: andi        $t9, $t7, 0x1000
    ctx->r25 = ctx->r15 & 0X1000;
    // 0x8007FA04: beq         $t9, $zero, L_8007FA24
    if (ctx->r25 == 0) {
        // 0x8007FA08: nop
    
            goto L_8007FA24;
    }
    // 0x8007FA08: nop

    // 0x8007FA0C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8007FA10: lw          $t8, 0x31E4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X31E4);
    // 0x8007FA14: nop

    // 0x8007FA18: slti        $at, $t8, 0x3C
    ctx->r1 = SIGNED(ctx->r24) < 0X3C ? 1 : 0;
    // 0x8007FA1C: beq         $at, $zero, L_8007FA3C
    if (ctx->r1 == 0) {
        // 0x8007FA20: nop
    
            goto L_8007FA3C;
    }
    // 0x8007FA20: nop

L_8007FA24:
    // 0x8007FA24: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8007FA28: lw          $t0, 0x31E4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X31E4);
    // 0x8007FA2C: nop

    // 0x8007FA30: slti        $at, $t0, 0x12C
    ctx->r1 = SIGNED(ctx->r8) < 0X12C ? 1 : 0;
    // 0x8007FA34: bne         $at, $zero, L_8007FAB0
    if (ctx->r1 != 0) {
        // 0x8007FA38: nop
    
            goto L_8007FAB0;
    }
    // 0x8007FA38: nop

L_8007FA3C:
    // 0x8007FA3C: jal         0x80060D58
    // 0x8007FA40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80060D58(rdram, ctx);
        goto after_33;
    // 0x8007FA40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_33:
    // 0x8007FA44: jal         0x8004A34C
    // 0x8007FA48: nop

    func_8004A34C(rdram, ctx);
        goto after_34;
    // 0x8007FA48: nop

    after_34:
    // 0x8007FA4C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007FA50: lw          $a0, 0x200($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X200);
    // 0x8007FA54: jal         0x8007E328
    // 0x8007FA58: nop

    func_8007E328(rdram, ctx);
        goto after_35;
    // 0x8007FA58: nop

    after_35:
    // 0x8007FA5C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007FA60: lw          $a0, 0x204($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X204);
    // 0x8007FA64: jal         0x8007E328
    // 0x8007FA68: nop

    func_8007E328(rdram, ctx);
        goto after_36;
    // 0x8007FA68: nop

    after_36:
    // 0x8007FA6C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8007FA70: jal         0x80085030
    // 0x8007FA74: addiu       $a0, $a0, 0x3988
    ctx->r4 = ADD32(ctx->r4, 0X3988);
    func_80085030(rdram, ctx);
        goto after_37;
    // 0x8007FA74: addiu       $a0, $a0, 0x3988
    ctx->r4 = ADD32(ctx->r4, 0X3988);
    after_37:
    // 0x8007FA78: jal         0x800905E8
    // 0x8007FA7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800905E8(rdram, ctx);
        goto after_38;
    // 0x8007FA7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_38:
    // 0x8007FA80: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8007FA84: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007FA88: sb          $t1, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r9;
    // 0x8007FA8C: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    // 0x8007FA90: jal         0x80061134
    // 0x8007FA94: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    func_80061134(rdram, ctx);
        goto after_39;
    // 0x8007FA94: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    after_39:
    // 0x8007FA98: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8007FA9C: lw          $t2, 0x31D8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X31D8);
    // 0x8007FAA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007FAA4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8007FAA8: b           L_8007FBA0
    // 0x8007FAAC: sw          $t3, 0x31D8($at)
    MEM_W(0X31D8, ctx->r1) = ctx->r11;
        goto L_8007FBA0;
    // 0x8007FAAC: sw          $t3, 0x31D8($at)
    MEM_W(0X31D8, ctx->r1) = ctx->r11;
L_8007FAB0:
    // 0x8007FAB0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007FAB4: jal         0x8005BBFC
    // 0x8007FAB8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_40;
    // 0x8007FAB8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_40:
    // 0x8007FABC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8007FAC0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8007FAC4: lw          $a2, 0x204($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X204);
    // 0x8007FAC8: lw          $a1, 0x200($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X200);
    // 0x8007FACC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007FAD0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8007FAD4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8007FAD8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8007FADC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8007FAE0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8007FAE4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8007FAE8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8007FAEC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8007FAF0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8007FAF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8007FAF8: jal         0x80057460
    // 0x8007FAFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80057460(rdram, ctx);
        goto after_41;
    // 0x8007FAFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_41:
    // 0x8007FB00: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007FB04: jal         0x8005BE40
    // 0x8007FB08: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_42;
    // 0x8007FB08: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_42:
    // 0x8007FB0C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8007FB10: lw          $t9, 0x31E4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X31E4);
    // 0x8007FB14: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007FB18: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x8007FB1C: sw          $t8, 0x31E4($at)
    MEM_W(0X31E4, ctx->r1) = ctx->r24;
L_8007FB20:
    // 0x8007FB20: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8007FB24: lw          $t0, 0x31D8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X31D8);
    // 0x8007FB28: nop

    // 0x8007FB2C: addiu       $t1, $t0, -0x5
    ctx->r9 = ADD32(ctx->r8, -0X5);
    // 0x8007FB30: sltiu       $at, $t1, 0x6
    ctx->r1 = ctx->r9 < 0X6 ? 1 : 0;
    // 0x8007FB34: beq         $at, $zero, L_8007FBA0
    if (ctx->r1 == 0) {
        // 0x8007FB38: nop
    
            goto L_8007FBA0;
    }
    // 0x8007FB38: nop

    // 0x8007FB3C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8007FB40: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007FB44: addu        $at, $at, $t1
    gpr jr_addend_8007FB50 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8007FB48: lw          $t1, -0x1E80($at)
    ctx->r9 = ADD32(ctx->r1, -0X1E80);
    // 0x8007FB4C: nop

    // 0x8007FB50: jr          $t1
    // 0x8007FB54: nop

    switch (jr_addend_8007FB50 >> 2) {
        case 0: goto L_8007FB58; break;
        case 1: goto L_8007FB58; break;
        case 2: goto L_8007FB58; break;
        case 3: goto L_8007FB58; break;
        case 4: goto L_8007FB58; break;
        case 5: goto L_8007FB70; break;
        default: switch_error(__func__, 0x8007FB50, 0x800DE180);
    }
    // 0x8007FB54: nop

L_8007FB58:
    // 0x8007FB58: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8007FB5C: lw          $t2, 0x31D8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X31D8);
    // 0x8007FB60: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007FB64: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8007FB68: b           L_8007FBA0
    // 0x8007FB6C: sw          $t3, 0x31D8($at)
    MEM_W(0X31D8, ctx->r1) = ctx->r11;
        goto L_8007FBA0;
    // 0x8007FB6C: sw          $t3, 0x31D8($at)
    MEM_W(0X31D8, ctx->r1) = ctx->r11;
L_8007FB70:
    // 0x8007FB70: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007FB74: sw          $zero, 0x31E4($at)
    MEM_W(0X31E4, ctx->r1) = 0;
    // 0x8007FB78: jal         0x80060D58
    // 0x8007FB7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80060D58(rdram, ctx);
        goto after_43;
    // 0x8007FB7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_43:
    // 0x8007FB80: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8007FB84: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007FB88: sb          $t4, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r12;
    // 0x8007FB8C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007FB90: sw          $zero, 0x31D8($at)
    MEM_W(0X31D8, ctx->r1) = 0;
    // 0x8007FB94: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007FB98: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8007FB9C: sw          $t5, 0x31D4($at)
    MEM_W(0X31D4, ctx->r1) = ctx->r13;
L_8007FBA0:
    // 0x8007FBA0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8007FBA4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8007FBA8: jr          $ra
    // 0x8007FBAC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8007FBAC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8007FBB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FBB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007FBB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007FBB8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8007FBBC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8007FBC0: jal         0x8004A34C
    // 0x8007FBC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x8007FBC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8007FBC8: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8007FBCC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8007FBD0: jal         0x80074888
    // 0x8007FBD4: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_80074888(rdram, ctx);
        goto after_1;
    // 0x8007FBD4: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_1:
    // 0x8007FBD8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007FBDC: jal         0x8007E03C
    // 0x8007FBE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_2;
    // 0x8007FBE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8007FBE4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8007FBE8: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8007FBEC: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x8007FBF0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8007FBF4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8007FBF8: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x8007FBFC: jal         0x800746C0
    // 0x8007FC00: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_800746C0(rdram, ctx);
        goto after_3;
    // 0x8007FC00: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_3:
    // 0x8007FC04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FC08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007FC0C: jr          $ra
    // 0x8007FC10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8007FC10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8007FC14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FC14: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8007FC18: nop

    // 0x8007FC1C: beq         $t6, $zero, L_8007FC6C
    if (ctx->r14 == 0) {
        // 0x8007FC20: nop
    
            goto L_8007FC6C;
    }
    // 0x8007FC20: nop

    // 0x8007FC24: lw          $t8, 0xC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC);
    // 0x8007FC28: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x8007FC2C: multu       $t8, $a1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007FC30: mflo        $t9
    ctx->r25 = lo;
    // 0x8007FC34: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8007FC38: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x8007FC3C: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
    // 0x8007FC40: nop

    // 0x8007FC44: bgez        $t1, L_8007FC50
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8007FC48: nop
    
            goto L_8007FC50;
    }
    // 0x8007FC48: nop

    // 0x8007FC4C: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
L_8007FC50:
    // 0x8007FC50: lw          $t2, 0x8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8);
    // 0x8007FC54: ori         $at, $zero, 0xFF01
    ctx->r1 = 0 | 0XFF01;
    // 0x8007FC58: slt         $at, $t2, $at
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8007FC5C: bne         $at, $zero, L_8007FC6C
    if (ctx->r1 != 0) {
        // 0x8007FC60: nop
    
            goto L_8007FC6C;
    }
    // 0x8007FC60: nop

    // 0x8007FC64: ori         $t3, $zero, 0xFF00
    ctx->r11 = 0 | 0XFF00;
    // 0x8007FC68: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
L_8007FC6C:
    // 0x8007FC6C: jr          $ra
    // 0x8007FC70: nop

    return;
    // 0x8007FC70: nop

;}
RECOMP_FUNC void func_8007FC74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FC74: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007FC78: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8007FC7C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007FC80: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8007FC84: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8007FC88: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8007FC8C: nop

    // 0x8007FC90: beq         $t7, $zero, L_8007FD04
    if (ctx->r15 == 0) {
        // 0x8007FC94: nop
    
            goto L_8007FD04;
    }
    // 0x8007FC94: nop

    // 0x8007FC98: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x8007FC9C: nop

    // 0x8007FCA0: beq         $t8, $zero, L_8007FD04
    if (ctx->r24 == 0) {
        // 0x8007FCA4: nop
    
            goto L_8007FD04;
    }
    // 0x8007FCA4: nop

    // 0x8007FCA8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007FCAC: jal         0x8005BBFC
    // 0x8007FCB0: nop

    func_8005BBFC(rdram, ctx);
        goto after_0;
    // 0x8007FCB0: nop

    after_0:
    // 0x8007FCB4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8007FCB8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8007FCBC: lh          $t0, 0x6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X6);
    // 0x8007FCC0: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x8007FCC4: lh          $a3, 0x4($t9)
    ctx->r7 = MEM_H(ctx->r25, 0X4);
    // 0x8007FCC8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8007FCCC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8007FCD0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8007FCD4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8007FCD8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8007FCDC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8007FCE0: lw          $t4, 0x8($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X8);
    // 0x8007FCE4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007FCE8: sra         $t5, $t4, 8
    ctx->r13 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8007FCEC: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8007FCF0: jal         0x80057460
    // 0x8007FCF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80057460(rdram, ctx);
        goto after_1;
    // 0x8007FCF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8007FCF8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007FCFC: jal         0x8005BE40
    // 0x8007FD00: nop

    func_8005BE40(rdram, ctx);
        goto after_2;
    // 0x8007FD00: nop

    after_2:
L_8007FD04:
    // 0x8007FD04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8007FD08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8007FD0C: jr          $ra
    // 0x8007FD10: nop

    return;
    // 0x8007FD10: nop

;}
RECOMP_FUNC void func_8007FD14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FD14: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8007FD18: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x8007FD1C: addiu       $t6, $sp, 0x8
    ctx->r14 = ADD32(ctx->r29, 0X8);
    // 0x8007FD20: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8007FD24: ori         $t9, $zero, 0xFF00
    ctx->r25 = 0 | 0XFF00;
    // 0x8007FD28: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    // 0x8007FD2C: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x8007FD30: swl         $at, 0x4($a0)
    do_swl(rdram, 0X4, ctx->r4, ctx->r1);
    // 0x8007FD34: negu        $t1, $t0
    ctx->r9 = SUB32(0, ctx->r8);
    // 0x8007FD38: div         $zero, $t1, $a3
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r7)));
    // 0x8007FD3C: swr         $at, 0x7($a0)
    do_swr(rdram, 0X7, ctx->r4, ctx->r1);
    // 0x8007FD40: bne         $a3, $zero, L_8007FD4C
    if (ctx->r7 != 0) {
        // 0x8007FD44: nop
    
            goto L_8007FD4C;
    }
    // 0x8007FD44: nop

    // 0x8007FD48: break       7
    do_break(2148007240);
L_8007FD4C:
    // 0x8007FD4C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007FD50: bne         $a3, $at, L_8007FD64
    if (ctx->r7 != ctx->r1) {
        // 0x8007FD54: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8007FD64;
    }
    // 0x8007FD54: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007FD58: bne         $t1, $at, L_8007FD64
    if (ctx->r9 != ctx->r1) {
        // 0x8007FD5C: nop
    
            goto L_8007FD64;
    }
    // 0x8007FD5C: nop

    // 0x8007FD60: break       6
    do_break(2148007264);
L_8007FD64:
    // 0x8007FD64: mflo        $t2
    ctx->r10 = lo;
    // 0x8007FD68: sw          $t2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r10;
    // 0x8007FD6C: jr          $ra
    // 0x8007FD70: nop

    return;
    // 0x8007FD70: nop

;}
RECOMP_FUNC void func_8007FD74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FD74: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x8007FD78: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x8007FD7C: jr          $ra
    // 0x8007FD80: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    return;
    // 0x8007FD80: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8007FD84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FD84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007FD88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007FD8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007FD90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007FD94: jal         0x8007FD74
    // 0x8007FD98: nop

    func_8007FD74(rdram, ctx);
        goto after_0;
    // 0x8007FD98: nop

    after_0:
    // 0x8007FD9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007FDA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007FDA4: jr          $ra
    // 0x8007FDA8: nop

    return;
    // 0x8007FDA8: nop

    // 0x8007FDAC: nop

;}
RECOMP_FUNC void func_8007FDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FDB0: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x8007FDB4: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x8007FDB8: nop

    // 0x8007FDBC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8007FDC0: bgez        $t8, L_8007FDD0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8007FDC4: nop
    
            goto L_8007FDD0;
    }
    // 0x8007FDC4: nop

    // 0x8007FDC8: jr          $ra
    // 0x8007FDCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8007FDCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8007FDD0:
    // 0x8007FDD0: lw          $t9, 0x18($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X18);
    // 0x8007FDD4: lw          $t0, 0x10($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X10);
    // 0x8007FDD8: nop

    // 0x8007FDDC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8007FDE0: slti        $at, $t1, 0x12C
    ctx->r1 = SIGNED(ctx->r9) < 0X12C ? 1 : 0;
    // 0x8007FDE4: bne         $at, $zero, L_8007FE1C
    if (ctx->r1 != 0) {
        // 0x8007FDE8: nop
    
            goto L_8007FE1C;
    }
    // 0x8007FDE8: nop

    // 0x8007FDEC: lw          $t2, 0x18($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X18);
    // 0x8007FDF0: lw          $t5, 0x10($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X10);
    // 0x8007FDF4: subu        $t3, $t2, $a1
    ctx->r11 = SUB32(ctx->r10, ctx->r5);
    // 0x8007FDF8: sw          $t3, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r11;
    // 0x8007FDFC: lw          $t4, 0x18($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X18);
    // 0x8007FE00: nop

    // 0x8007FE04: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8007FE08: slti        $at, $t6, 0x12C
    ctx->r1 = SIGNED(ctx->r14) < 0X12C ? 1 : 0;
    // 0x8007FE0C: beq         $at, $zero, L_8007FE48
    if (ctx->r1 == 0) {
        // 0x8007FE10: nop
    
            goto L_8007FE48;
    }
    // 0x8007FE10: nop

    // 0x8007FE14: jr          $ra
    // 0x8007FE18: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x8007FE18: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8007FE1C:
    // 0x8007FE1C: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x8007FE20: lw          $t0, 0x10($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X10);
    // 0x8007FE24: subu        $t8, $t7, $a1
    ctx->r24 = SUB32(ctx->r15, ctx->r5);
    // 0x8007FE28: sw          $t8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r24;
    // 0x8007FE2C: lw          $t9, 0x18($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X18);
    // 0x8007FE30: nop

    // 0x8007FE34: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8007FE38: bgez        $t1, L_8007FE48
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8007FE3C: nop
    
            goto L_8007FE48;
    }
    // 0x8007FE3C: nop

    // 0x8007FE40: jr          $ra
    // 0x8007FE44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8007FE44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007FE48:
    // 0x8007FE48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8007FE4C: jr          $ra
    // 0x8007FE50: nop

    return;
    // 0x8007FE50: nop

;}
RECOMP_FUNC void func_8007FE54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FE54: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007FE58: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8007FE5C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007FE60: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8007FE64: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x8007FE68: nop

    // 0x8007FE6C: slti        $at, $t7, 0x12C
    ctx->r1 = SIGNED(ctx->r15) < 0X12C ? 1 : 0;
    // 0x8007FE70: beq         $at, $zero, L_8007FEE4
    if (ctx->r1 == 0) {
        // 0x8007FE74: nop
    
            goto L_8007FEE4;
    }
    // 0x8007FE74: nop

    // 0x8007FE78: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8007FE7C: nop

    // 0x8007FE80: lw          $t9, 0x18($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X18);
    // 0x8007FE84: lw          $t0, 0x10($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X10);
    // 0x8007FE88: nop

    // 0x8007FE8C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8007FE90: bltz        $t1, L_8007FEE4
    if (SIGNED(ctx->r9) < 0) {
        // 0x8007FE94: nop
    
            goto L_8007FEE4;
    }
    // 0x8007FE94: nop

    // 0x8007FE98: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8007FE9C: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x8007FEA0: lw          $t3, 0x14($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X14);
    // 0x8007FEA4: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x8007FEA8: lw          $a1, 0x4($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X4);
    // 0x8007FEAC: lw          $a2, 0x8($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X8);
    // 0x8007FEB0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8007FEB4: lw          $t4, 0x18($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X18);
    // 0x8007FEB8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8007FEBC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8007FEC0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8007FEC4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8007FEC8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8007FECC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8007FED0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8007FED4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8007FED8: addiu       $a3, $a3, 0x20C0
    ctx->r7 = ADD32(ctx->r7, 0X20C0);
    // 0x8007FEDC: jal         0x80078244
    // 0x8007FEE0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_80078244(rdram, ctx);
        goto after_0;
    // 0x8007FEE0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_0:
L_8007FEE4:
    // 0x8007FEE4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8007FEE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8007FEEC: jr          $ra
    // 0x8007FEF0: nop

    return;
    // 0x8007FEF0: nop

;}
RECOMP_FUNC void func_8007FEF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FEF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007FEF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007FEFC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8007FF00: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007FF04: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8007FF08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007FF0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8007FF10: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8007FF14: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FF18: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8007FF1C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8007FF20: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8007FF24: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FF28: jal         0x80080AB8
    // 0x8007FF2C: nop

    func_80080AB8(rdram, ctx);
        goto after_0;
    // 0x8007FF2C: nop

    after_0:
    // 0x8007FF30: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8007FF34: nop

    // 0x8007FF38: sw          $v0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r2;
    // 0x8007FF3C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8007FF40: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FF44: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007FF48: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x8007FF4C: jal         0x800781A8
    // 0x8007FF50: nop

    func_800781A8(rdram, ctx);
        goto after_1;
    // 0x8007FF50: nop

    after_1:
    // 0x8007FF54: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8007FF58: addiu       $t9, $zero, 0x190
    ctx->r25 = ADD32(0, 0X190);
    // 0x8007FF5C: sw          $v0, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r2;
    // 0x8007FF60: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8007FF64: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8007FF68: lh          $t4, 0x76($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X76);
    // 0x8007FF6C: addiu       $t2, $zero, 0x12C
    ctx->r10 = ADD32(0, 0X12C);
    // 0x8007FF70: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x8007FF74: sw          $t5, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r13;
    // 0x8007FF78: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8007FF7C: nop

    // 0x8007FF80: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x8007FF84: nop

    // 0x8007FF88: subu        $t0, $t9, $t8
    ctx->r8 = SUB32(ctx->r25, ctx->r24);
    // 0x8007FF8C: sra         $t1, $t0, 1
    ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
    // 0x8007FF90: sw          $t1, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r9;
    // 0x8007FF94: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8007FF98: nop

    // 0x8007FF9C: sw          $t2, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->r10;
    // 0x8007FFA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007FFA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007FFA8: jr          $ra
    // 0x8007FFAC: nop

    return;
    // 0x8007FFAC: nop

;}
RECOMP_FUNC void func_8007FFB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FFB0: jr          $ra
    // 0x8007FFB4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8007FFB4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8007FFB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FFB8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8007FFBC: addiu       $t6, $t6, -0x10D0
    ctx->r14 = ADD32(ctx->r14, -0X10D0);
    // 0x8007FFC0: lw          $a1, 0x24($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X24);
    // 0x8007FFC4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007FFC8: andi        $t7, $a1, 0x8000
    ctx->r15 = ctx->r5 & 0X8000;
    // 0x8007FFCC: beq         $t7, $zero, L_8007FFDC
    if (ctx->r15 == 0) {
        // 0x8007FFD0: nop
    
            goto L_8007FFDC;
    }
    // 0x8007FFD0: nop

    // 0x8007FFD4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007FFD8: sb          $t8, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r24;
L_8007FFDC:
    // 0x8007FFDC: jr          $ra
    // 0x8007FFE0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007FFE0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007FFE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FFE4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007FFE8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8007FFEC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8007FFF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007FFF4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8007FFF8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8007FFFC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80080000: jal         0x800804F0
    // 0x80080004: addiu       $a0, $a0, 0x104
    ctx->r4 = ADD32(ctx->r4, 0X104);
    func_800804F0(rdram, ctx);
        goto after_0;
    // 0x80080004: addiu       $a0, $a0, 0x104
    ctx->r4 = ADD32(ctx->r4, 0X104);
    after_0:
    // 0x80080008: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8008000C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80080010: jal         0x80077408
    // 0x80080014: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_80077408(rdram, ctx);
        goto after_1;
    // 0x80080014: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x80080018: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8008001C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80080020: jal         0x80077408
    // 0x80080024: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    func_80077408(rdram, ctx);
        goto after_2;
    // 0x80080024: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    after_2:
    // 0x80080028: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8008002C: jal         0x80080B08
    // 0x80080030: nop

    func_80080B08(rdram, ctx);
        goto after_3;
    // 0x80080030: nop

    after_3:
    // 0x80080034: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80080038: nop

    // 0x8008003C: sw          $v0, 0xF4($t6)
    MEM_W(0XF4, ctx->r14) = ctx->r2;
    // 0x80080040: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80080044: nop

    // 0x80080048: lw          $a0, 0xF4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XF4);
    // 0x8008004C: nop

    // 0x80080050: sll         $t8, $a0, 3
    ctx->r24 = S32(ctx->r4 << 3);
    // 0x80080054: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x80080058: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008005C: jal         0x8007E03C
    // 0x80080060: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8007E03C(rdram, ctx);
        goto after_4;
    // 0x80080060: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_4:
    // 0x80080064: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80080068: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008006C: sw          $v0, 0xF8($t9)
    MEM_W(0XF8, ctx->r25) = ctx->r2;
    // 0x80080070: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80080074: addiu       $a0, $a0, -0x16F0
    ctx->r4 = ADD32(ctx->r4, -0X16F0);
    // 0x80080078: lw          $a1, 0xF4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0XF4);
    // 0x8008007C: jal         0x800B3BFC
    // 0x80080080: nop

    osSyncPrintf(rdram, ctx);
        goto after_5;
    // 0x80080080: nop

    after_5:
    // 0x80080084: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80080088: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008008C: lw          $a1, 0xF8($t1)
    ctx->r5 = MEM_W(ctx->r9, 0XF8);
    // 0x80080090: jal         0x800B3BFC
    // 0x80080094: addiu       $a0, $a0, -0x16CC
    ctx->r4 = ADD32(ctx->r4, -0X16CC);
    osSyncPrintf(rdram, ctx);
        goto after_6;
    // 0x80080094: addiu       $a0, $a0, -0x16CC
    ctx->r4 = ADD32(ctx->r4, -0X16CC);
    after_6:
    // 0x80080098: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8008009C: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x800800A0: lw          $s1, 0xF8($t2)
    ctx->r17 = MEM_W(ctx->r10, 0XF8);
    // 0x800800A4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x800800A8: lbu         $t3, 0x0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X0);
    // 0x800800AC: nop

    // 0x800800B0: beq         $t3, $zero, L_80080118
    if (ctx->r11 == 0) {
        // 0x800800B4: nop
    
            goto L_80080118;
    }
    // 0x800800B4: nop

L_800800B8:
    // 0x800800B8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800800BC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800800C0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800800C4: lbu         $t6, 0x3200($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3200);
    // 0x800800C8: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800800CC: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x800800D0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800800D4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800800D8: addu        $a2, $t4, $t7
    ctx->r6 = ADD32(ctx->r12, ctx->r15);
    // 0x800800DC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800800E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800800E4: jal         0x8007FEF4
    // 0x800800E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8007FEF4(rdram, ctx);
        goto after_7;
    // 0x800800E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
    // 0x800800EC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800800F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800800F4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800800F8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800800FC: jal         0x80080A70
    // 0x80080100: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_80080A70(rdram, ctx);
        goto after_8;
    // 0x80080100: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_8:
    // 0x80080104: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80080108: lbu         $t0, 0x1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1);
    // 0x8008010C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80080110: bne         $t0, $zero, L_800800B8
    if (ctx->r8 != 0) {
        // 0x80080114: addiu       $s1, $s1, 0x1C
        ctx->r17 = ADD32(ctx->r17, 0X1C);
            goto L_800800B8;
    }
    // 0x80080114: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
L_80080118:
    // 0x80080118: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8008011C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80080120: sw          $zero, 0xFC($t1)
    MEM_W(0XFC, ctx->r9) = 0;
    // 0x80080124: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80080128: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008012C: sw          $zero, 0x100($t2)
    MEM_W(0X100, ctx->r10) = 0;
    // 0x80080130: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80080134: addiu       $a0, $a0, -0x16B0
    ctx->r4 = ADD32(ctx->r4, -0X16B0);
    // 0x80080138: sb          $t3, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r11;
    // 0x8008013C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80080140: jal         0x800B3BFC
    // 0x80080144: sb          $zero, 0x1($t6)
    MEM_B(0X1, ctx->r14) = 0;
    osSyncPrintf(rdram, ctx);
        goto after_9;
    // 0x80080144: sb          $zero, 0x1($t6)
    MEM_B(0X1, ctx->r14) = 0;
    after_9:
    // 0x80080148: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008014C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80080150: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80080154: jr          $ra
    // 0x80080158: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80080158: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8008015C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008015C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80080160: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80080164: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80080168: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008016C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80080170: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80080174: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80080178: nop

    // 0x8008017C: bne         $t7, $zero, L_8008019C
    if (ctx->r15 != 0) {
        // 0x80080180: nop
    
            goto L_8008019C;
    }
    // 0x80080180: nop

    // 0x80080184: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80080188: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8008018C: addiu       $a1, $a1, -0x167C
    ctx->r5 = ADD32(ctx->r5, -0X167C);
    // 0x80080190: addiu       $a0, $a0, -0x1694
    ctx->r4 = ADD32(ctx->r4, -0X1694);
    // 0x80080194: jal         0x8004A5A0
    // 0x80080198: addiu       $a2, $zero, 0x1A0
    ctx->r6 = ADD32(0, 0X1A0);
    func_8004A5A0(rdram, ctx);
        goto after_0;
    // 0x80080198: addiu       $a2, $zero, 0x1A0
    ctx->r6 = ADD32(0, 0X1A0);
    after_0:
L_8008019C:
    // 0x8008019C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800801A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800801A4: lw          $t9, 0xF4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XF4);
    // 0x800801A8: lw          $s1, 0xF8($t8)
    ctx->r17 = MEM_W(ctx->r24, 0XF8);
    // 0x800801AC: sltu        $at, $s0, $t9
    ctx->r1 = ctx->r16 < ctx->r25 ? 1 : 0;
    // 0x800801B0: beq         $at, $zero, L_800801DC
    if (ctx->r1 == 0) {
        // 0x800801B4: nop
    
            goto L_800801DC;
    }
    // 0x800801B4: nop

L_800801B8:
    // 0x800801B8: jal         0x8007FFB0
    // 0x800801BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8007FFB0(rdram, ctx);
        goto after_1;
    // 0x800801BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x800801C0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800801C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800801C8: lw          $t1, 0xF4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XF4);
    // 0x800801CC: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
    // 0x800801D0: sltu        $at, $s0, $t1
    ctx->r1 = ctx->r16 < ctx->r9 ? 1 : 0;
    // 0x800801D4: bne         $at, $zero, L_800801B8
    if (ctx->r1 != 0) {
        // 0x800801D8: nop
    
            goto L_800801B8;
    }
    // 0x800801D8: nop

L_800801DC:
    // 0x800801DC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800801E0: nop

    // 0x800801E4: lw          $a0, 0xF8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XF8);
    // 0x800801E8: jal         0x8007E328
    // 0x800801EC: nop

    func_8007E328(rdram, ctx);
        goto after_2;
    // 0x800801EC: nop

    after_2:
    // 0x800801F0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800801F4: jal         0x800773D0
    // 0x800801F8: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    func_800773D0(rdram, ctx);
        goto after_3;
    // 0x800801F8: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    after_3:
    // 0x800801FC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80080200: jal         0x800773D0
    // 0x80080204: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800773D0(rdram, ctx);
        goto after_4;
    // 0x80080204: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_4:
    // 0x80080208: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008020C: jal         0x8008074C
    // 0x80080210: addiu       $a0, $a0, 0x104
    ctx->r4 = ADD32(ctx->r4, 0X104);
    func_8008074C(rdram, ctx);
        goto after_5;
    // 0x80080210: addiu       $a0, $a0, 0x104
    ctx->r4 = ADD32(ctx->r4, 0X104);
    after_5:
    // 0x80080214: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80080218: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008021C: addiu       $a0, $a0, -0x166C
    ctx->r4 = ADD32(ctx->r4, -0X166C);
    // 0x80080220: jal         0x800B3BFC
    // 0x80080224: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
    osSyncPrintf(rdram, ctx);
        goto after_6;
    // 0x80080224: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
    after_6:
    // 0x80080228: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008022C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80080230: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80080234: jr          $ra
    // 0x80080238: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80080238: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008023C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008023C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80080240: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80080244: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80080248: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8008024C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80080250: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80080254: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80080258: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8008025C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80080260: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x80080264: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80080268: nop

    // 0x8008026C: bne         $t7, $zero, L_8008028C
    if (ctx->r15 != 0) {
        // 0x80080270: nop
    
            goto L_8008028C;
    }
    // 0x80080270: nop

    // 0x80080274: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80080278: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8008027C: addiu       $a1, $a1, -0x1634
    ctx->r5 = ADD32(ctx->r5, -0X1634);
    // 0x80080280: addiu       $a0, $a0, -0x164C
    ctx->r4 = ADD32(ctx->r4, -0X164C);
    // 0x80080284: jal         0x8004A5A0
    // 0x80080288: addiu       $a2, $zero, 0x1C4
    ctx->r6 = ADD32(0, 0X1C4);
    func_8004A5A0(rdram, ctx);
        goto after_0;
    // 0x80080288: addiu       $a2, $zero, 0x1C4
    ctx->r6 = ADD32(0, 0X1C4);
    after_0:
L_8008028C:
    // 0x8008028C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80080290: jal         0x8007FFB8
    // 0x80080294: nop

    func_8007FFB8(rdram, ctx);
        goto after_1;
    // 0x80080294: nop

    after_1:
    // 0x80080298: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8008029C: nop

    // 0x800802A0: lbu         $t9, 0x1($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1);
    // 0x800802A4: nop

    // 0x800802A8: beq         $t9, $zero, L_800802B8
    if (ctx->r25 == 0) {
        // 0x800802AC: nop
    
            goto L_800802B8;
    }
    // 0x800802AC: nop

    // 0x800802B0: b           L_800803E4
    // 0x800802B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800803E4;
    // 0x800802B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800802B8:
    // 0x800802B8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800802BC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x800802C0: addiu       $a0, $a0, 0x104
    ctx->r4 = ADD32(ctx->r4, 0X104);
    // 0x800802C4: jal         0x8008080C
    // 0x800802C8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    func_8008080C(rdram, ctx);
        goto after_2;
    // 0x800802C8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_2:
    // 0x800802CC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800802D0: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800802D4: nop

    // 0x800802D8: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800802DC: beq         $at, $zero, L_800803E0
    if (ctx->r1 == 0) {
        // 0x800802E0: nop
    
            goto L_800803E0;
    }
    // 0x800802E0: nop

L_800802E4:
    // 0x800802E4: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x800802E8: nop

    // 0x800802EC: lw          $s0, 0xFC($t2)
    ctx->r16 = MEM_W(ctx->r10, 0XFC);
    // 0x800802F0: lw          $t5, 0x100($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X100);
    // 0x800802F4: sll         $t4, $s0, 3
    ctx->r12 = S32(ctx->r16 << 3);
    // 0x800802F8: lw          $t3, 0xF8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XF8);
    // 0x800802FC: subu        $t4, $t4, $s0
    ctx->r12 = SUB32(ctx->r12, ctx->r16);
    // 0x80080300: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80080304: sltu        $at, $t5, $s0
    ctx->r1 = ctx->r13 < ctx->r16 ? 1 : 0;
    // 0x80080308: bne         $at, $zero, L_800803A0
    if (ctx->r1 != 0) {
        // 0x8008030C: addu        $s1, $t3, $t4
        ctx->r17 = ADD32(ctx->r11, ctx->r12);
            goto L_800803A0;
    }
    // 0x8008030C: addu        $s1, $t3, $t4
    ctx->r17 = ADD32(ctx->r11, ctx->r12);
L_80080310:
    // 0x80080310: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80080314: jal         0x8007FDB0
    // 0x80080318: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8007FDB0(rdram, ctx);
        goto after_3;
    // 0x80080318: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8008031C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80080320: or          $s3, $s2, $zero
    ctx->r19 = ctx->r18 | 0;
    // 0x80080324: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80080328: beq         $s3, $at, L_80080340
    if (ctx->r19 == ctx->r1) {
        // 0x8008032C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80080340;
    }
    // 0x8008032C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80080330: beq         $s3, $at, L_8008035C
    if (ctx->r19 == ctx->r1) {
        // 0x80080334: nop
    
            goto L_8008035C;
    }
    // 0x80080334: nop

    // 0x80080338: b           L_80080384
    // 0x8008033C: nop

        goto L_80080384;
    // 0x8008033C: nop

L_80080340:
    // 0x80080340: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80080344: nop

    // 0x80080348: lw          $t7, 0xFC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XFC);
    // 0x8008034C: nop

    // 0x80080350: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80080354: b           L_80080384
    // 0x80080358: sw          $t8, 0xFC($t6)
    MEM_W(0XFC, ctx->r14) = ctx->r24;
        goto L_80080384;
    // 0x80080358: sw          $t8, 0xFC($t6)
    MEM_W(0XFC, ctx->r14) = ctx->r24;
L_8008035C:
    // 0x8008035C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80080360: nop

    // 0x80080364: lw          $t1, 0xF4($t9)
    ctx->r9 = MEM_W(ctx->r25, 0XF4);
    // 0x80080368: lw          $t0, 0x100($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X100);
    // 0x8008036C: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x80080370: sltu        $at, $t0, $t3
    ctx->r1 = ctx->r8 < ctx->r11 ? 1 : 0;
    // 0x80080374: beq         $at, $zero, L_80080384
    if (ctx->r1 == 0) {
        // 0x80080378: nop
    
            goto L_80080384;
    }
    // 0x80080378: nop

    // 0x8008037C: addiu       $t4, $t0, 0x1
    ctx->r12 = ADD32(ctx->r8, 0X1);
    // 0x80080380: sw          $t4, 0x100($t9)
    MEM_W(0X100, ctx->r25) = ctx->r12;
L_80080384:
    // 0x80080384: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80080388: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8008038C: lw          $t5, 0x100($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X100);
    // 0x80080390: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
    // 0x80080394: sltu        $at, $t5, $s0
    ctx->r1 = ctx->r13 < ctx->r16 ? 1 : 0;
    // 0x80080398: beq         $at, $zero, L_80080310
    if (ctx->r1 == 0) {
        // 0x8008039C: nop
    
            goto L_80080310;
    }
    // 0x8008039C: nop

L_800803A0:
    // 0x800803A0: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800803A4: nop

    // 0x800803A8: lw          $t8, 0xFC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XFC);
    // 0x800803AC: lw          $t6, 0x100($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X100);
    // 0x800803B0: nop

    // 0x800803B4: sltu        $at, $t6, $t8
    ctx->r1 = ctx->r14 < ctx->r24 ? 1 : 0;
    // 0x800803B8: beq         $at, $zero, L_800803C8
    if (ctx->r1 == 0) {
        // 0x800803BC: nop
    
            goto L_800803C8;
    }
    // 0x800803BC: nop

    // 0x800803C0: b           L_800803E4
    // 0x800803C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800803E4;
    // 0x800803C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800803C8:
    // 0x800803C8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800803CC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800803D0: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x800803D4: slt         $at, $t3, $t0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800803D8: bne         $at, $zero, L_800802E4
    if (ctx->r1 != 0) {
        // 0x800803DC: sw          $t3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r11;
            goto L_800802E4;
    }
    // 0x800803DC: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
L_800803E0:
    // 0x800803E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800803E4:
    // 0x800803E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800803E8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800803EC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800803F0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800803F4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800803F8: jr          $ra
    // 0x800803FC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800803FC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80080400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080400: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80080404: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80080408: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8008040C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80080410: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80080414: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80080418: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8008041C: nop

    // 0x80080420: bne         $t7, $zero, L_80080440
    if (ctx->r15 != 0) {
        // 0x80080424: nop
    
            goto L_80080440;
    }
    // 0x80080424: nop

    // 0x80080428: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008042C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80080430: addiu       $a1, $a1, -0x160C
    ctx->r5 = ADD32(ctx->r5, -0X160C);
    // 0x80080434: addiu       $a0, $a0, -0x1624
    ctx->r4 = ADD32(ctx->r4, -0X1624);
    // 0x80080438: jal         0x8004A5A0
    // 0x8008043C: addiu       $a2, $zero, 0x1F6
    ctx->r6 = ADD32(0, 0X1F6);
    func_8004A5A0(rdram, ctx);
        goto after_0;
    // 0x8008043C: addiu       $a2, $zero, 0x1F6
    ctx->r6 = ADD32(0, 0X1F6);
    after_0:
L_80080440:
    // 0x80080440: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80080444: nop

    // 0x80080448: lbu         $t9, 0x1($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1);
    // 0x8008044C: nop

    // 0x80080450: bne         $t9, $zero, L_800804D8
    if (ctx->r25 != 0) {
        // 0x80080454: nop
    
            goto L_800804D8;
    }
    // 0x80080454: nop

    // 0x80080458: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008045C: jal         0x8008085C
    // 0x80080460: addiu       $a0, $a0, 0x104
    ctx->r4 = ADD32(ctx->r4, 0X104);
    func_8008085C(rdram, ctx);
        goto after_1;
    // 0x80080460: addiu       $a0, $a0, 0x104
    ctx->r4 = ADD32(ctx->r4, 0X104);
    after_1:
    // 0x80080464: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80080468: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008046C: lw          $s0, 0xFC($t0)
    ctx->r16 = MEM_W(ctx->r8, 0XFC);
    // 0x80080470: lw          $t1, 0xF8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XF8);
    // 0x80080474: sll         $t2, $s0, 3
    ctx->r10 = S32(ctx->r16 << 3);
    // 0x80080478: subu        $t2, $t2, $s0
    ctx->r10 = SUB32(ctx->r10, ctx->r16);
    // 0x8008047C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80080480: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80080484: jal         0x8005BBFC
    // 0x80080488: addu        $s1, $t1, $t2
    ctx->r17 = ADD32(ctx->r9, ctx->r10);
    func_8005BBFC(rdram, ctx);
        goto after_2;
    // 0x80080488: addu        $s1, $t1, $t2
    ctx->r17 = ADD32(ctx->r9, ctx->r10);
    after_2:
    // 0x8008048C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80080490: nop

    // 0x80080494: lw          $t4, 0x100($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X100);
    // 0x80080498: nop

    // 0x8008049C: sltu        $at, $t4, $s0
    ctx->r1 = ctx->r12 < ctx->r16 ? 1 : 0;
    // 0x800804A0: bne         $at, $zero, L_800804CC
    if (ctx->r1 != 0) {
        // 0x800804A4: nop
    
            goto L_800804CC;
    }
    // 0x800804A4: nop

L_800804A8:
    // 0x800804A8: jal         0x8007FE54
    // 0x800804AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8007FE54(rdram, ctx);
        goto after_3;
    // 0x800804AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x800804B0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800804B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800804B8: lw          $t6, 0x100($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X100);
    // 0x800804BC: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
    // 0x800804C0: sltu        $at, $t6, $s0
    ctx->r1 = ctx->r14 < ctx->r16 ? 1 : 0;
    // 0x800804C4: beq         $at, $zero, L_800804A8
    if (ctx->r1 == 0) {
        // 0x800804C8: nop
    
            goto L_800804A8;
    }
    // 0x800804C8: nop

L_800804CC:
    // 0x800804CC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800804D0: jal         0x8005BE40
    // 0x800804D4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_4;
    // 0x800804D4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_4:
L_800804D8:
    // 0x800804D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800804DC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800804E0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800804E4: jr          $ra
    // 0x800804E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800804E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800804EC: nop

;}
