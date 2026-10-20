#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80044628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004462C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80044630: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80044634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80044638: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8004463C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80044640: addiu       $at, $zero, 0x3EF
    ctx->r1 = ADD32(0, 0X3EF);
    // 0x80044644: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x80044648: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8004464C: nop

    // 0x80044650: lw          $t9, 0x2C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X2C);
    // 0x80044654: nop

    // 0x80044658: bne         $t9, $at, L_80044674
    if (ctx->r25 != ctx->r1) {
        // 0x8004465C: nop
    
            goto L_80044674;
    }
    // 0x8004465C: nop

    // 0x80044660: jal         0x800A6990
    // 0x80044664: addiu       $a0, $zero, 0x421
    ctx->r4 = ADD32(0, 0X421);
    func_800A6990(rdram, ctx);
        goto after_0;
    // 0x80044664: addiu       $a0, $zero, 0x421
    ctx->r4 = ADD32(0, 0X421);
    after_0:
    // 0x80044668: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8004466C: b           L_80044688
    // 0x80044670: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
        goto L_80044688;
    // 0x80044670: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
L_80044674:
    // 0x80044674: jal         0x800A6990
    // 0x80044678: addiu       $a0, $zero, 0x42A
    ctx->r4 = ADD32(0, 0X42A);
    func_800A6990(rdram, ctx);
        goto after_1;
    // 0x80044678: addiu       $a0, $zero, 0x42A
    ctx->r4 = ADD32(0, 0X42A);
    after_1:
    // 0x8004467C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80044680: nop

    // 0x80044684: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
L_80044688:
    // 0x80044688: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8004468C: nop

    // 0x80044690: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x80044694: jal         0x800445DC
    // 0x80044698: nop

    func_800445DC(rdram, ctx);
        goto after_2;
    // 0x80044698: nop

    after_2:
    // 0x8004469C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800446A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800446A4: jr          $ra
    // 0x800446A8: nop

    return;
    // 0x800446A8: nop

;}
RECOMP_FUNC void func_800446AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800446AC: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x800446B0: sll         $a1, $a0, 2
    ctx->r5 = S32(ctx->r4 << 2);
    // 0x800446B4: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x800446B8: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x800446BC: lbu         $t7, 0x1F6F($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1F6F);
    // 0x800446C0: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x800446C4: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x800446C8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800446CC: beq         $t7, $zero, L_8004470C
    if (ctx->r15 == 0) {
        // 0x800446D0: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_8004470C;
    }
    // 0x800446D0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800446D4: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x800446D8: lbu         $t8, 0x1F6E($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1F6E);
    // 0x800446DC: nop

    // 0x800446E0: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x800446E4: slti        $at, $t9, 0x100
    ctx->r1 = SIGNED(ctx->r25) < 0X100 ? 1 : 0;
    // 0x800446E8: beq         $at, $zero, L_80044700
    if (ctx->r1 == 0) {
        // 0x800446EC: nop
    
            goto L_80044700;
    }
    // 0x800446EC: nop

    // 0x800446F0: addu        $t0, $t8, $a1
    ctx->r8 = ADD32(ctx->r24, ctx->r5);
    // 0x800446F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800446F8: b           L_80044740
    // 0x800446FC: sb          $t0, 0x1F6E($at)
    MEM_B(0X1F6E, ctx->r1) = ctx->r8;
        goto L_80044740;
    // 0x800446FC: sb          $t0, 0x1F6E($at)
    MEM_B(0X1F6E, ctx->r1) = ctx->r8;
L_80044700:
    // 0x80044700: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80044704: b           L_80044740
    // 0x80044708: sb          $zero, 0x1F6F($at)
    MEM_B(0X1F6F, ctx->r1) = 0;
        goto L_80044740;
    // 0x80044708: sb          $zero, 0x1F6F($at)
    MEM_B(0X1F6F, ctx->r1) = 0;
L_8004470C:
    // 0x8004470C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80044710: lbu         $t1, 0x1F6E($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X1F6E);
    // 0x80044714: nop

    // 0x80044718: slt         $at, $t1, $a1
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8004471C: bne         $at, $zero, L_80044734
    if (ctx->r1 != 0) {
        // 0x80044720: nop
    
            goto L_80044734;
    }
    // 0x80044720: nop

    // 0x80044724: subu        $t2, $t1, $a1
    ctx->r10 = SUB32(ctx->r9, ctx->r5);
    // 0x80044728: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004472C: b           L_80044740
    // 0x80044730: sb          $t2, 0x1F6E($at)
    MEM_B(0X1F6E, ctx->r1) = ctx->r10;
        goto L_80044740;
    // 0x80044730: sb          $t2, 0x1F6E($at)
    MEM_B(0X1F6E, ctx->r1) = ctx->r10;
L_80044734:
    // 0x80044734: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80044738: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004473C: sb          $t3, 0x1F6F($at)
    MEM_B(0X1F6F, ctx->r1) = ctx->r11;
L_80044740:
    // 0x80044740: jr          $ra
    // 0x80044744: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80044744: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80044748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044748: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8004474C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80044750: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x80044754: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80044758: lw          $s0, 0x5E10($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5E10);
    // 0x8004475C: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x80044760: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x80044764: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x80044768: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x8004476C: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80044770: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80044774: jal         0x800A3AF0
    // 0x80044778: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    func_800A3AF0(rdram, ctx);
        goto after_0;
    // 0x80044778: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    after_0:
    // 0x8004477C: lhu         $t6, 0x2($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2);
    // 0x80044780: andi        $s4, $v0, 0xFF
    ctx->r20 = ctx->r2 & 0XFF;
    // 0x80044784: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80044788: addu        $t7, $t6, $s4
    ctx->r15 = ADD32(ctx->r14, ctx->r20);
    // 0x8004478C: slt         $at, $t7, $at
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80044790: beq         $at, $zero, L_800447AC
    if (ctx->r1 == 0) {
        // 0x80044794: nop
    
            goto L_800447AC;
    }
    // 0x80044794: nop

    // 0x80044798: lhu         $t8, 0x2($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2);
    // 0x8004479C: nop

    // 0x800447A0: addu        $t9, $t8, $s4
    ctx->r25 = ADD32(ctx->r24, ctx->r20);
    // 0x800447A4: b           L_800447B4
    // 0x800447A8: sh          $t9, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r25;
        goto L_800447B4;
    // 0x800447A8: sh          $t9, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r25;
L_800447AC:
    // 0x800447AC: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
    // 0x800447B0: sh          $t0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r8;
L_800447B4:
    // 0x800447B4: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x800447B8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800447BC: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x800447C0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800447C4: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x800447C8: nop

    // 0x800447CC: beq         $t4, $zero, L_80044C0C
    if (ctx->r12 == 0) {
        // 0x800447D0: nop
    
            goto L_80044C0C;
    }
    // 0x800447D0: nop

L_800447D4:
    // 0x800447D4: lbu         $t5, 0x0($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X0);
    // 0x800447D8: nop

    // 0x800447DC: beq         $t5, $zero, L_800447F4
    if (ctx->r13 == 0) {
        // 0x800447E0: nop
    
            goto L_800447F4;
    }
    // 0x800447E0: nop

    // 0x800447E4: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x800447E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800447EC: bne         $t6, $at, L_80044BCC
    if (ctx->r14 != ctx->r1) {
        // 0x800447F0: nop
    
            goto L_80044BCC;
    }
    // 0x800447F0: nop

L_800447F4:
    // 0x800447F4: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x800447F8: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x800447FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80044800: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80044804: nop

    // 0x80044808: lw          $t1, 0x2C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X2C);
    // 0x8004480C: nop

    // 0x80044810: beq         $t1, $zero, L_80044BCC
    if (ctx->r9 == 0) {
        // 0x80044814: nop
    
            goto L_80044BCC;
    }
    // 0x80044814: nop

    // 0x80044818: lb          $a0, 0x1($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X1);
    // 0x8004481C: jal         0x80046218
    // 0x80044820: nop

    func_80046218(rdram, ctx);
        goto after_1;
    // 0x80044820: nop

    after_1:
    // 0x80044824: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80044828: bne         $at, $zero, L_80044838
    if (ctx->r1 != 0) {
        // 0x8004482C: slti        $at, $s1, 0x4
        ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
            goto L_80044838;
    }
    // 0x8004482C: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80044830: beq         $at, $zero, L_80044858
    if (ctx->r1 == 0) {
        // 0x80044834: nop
    
            goto L_80044858;
    }
    // 0x80044834: nop

L_80044838:
    // 0x80044838: lb          $a0, 0x1($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X1);
    // 0x8004483C: jal         0x80046218
    // 0x80044840: nop

    func_80046218(rdram, ctx);
        goto after_2;
    // 0x80044840: nop

    after_2:
    // 0x80044844: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80044848: beq         $at, $zero, L_8004490C
    if (ctx->r1 == 0) {
        // 0x8004484C: slti        $at, $s1, 0x3
        ctx->r1 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
            goto L_8004490C;
    }
    // 0x8004484C: slti        $at, $s1, 0x3
    ctx->r1 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x80044850: bne         $at, $zero, L_8004490C
    if (ctx->r1 != 0) {
        // 0x80044854: nop
    
            goto L_8004490C;
    }
    // 0x80044854: nop

L_80044858:
    // 0x80044858: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x8004485C: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x80044860: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80044864: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80044868: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8004486C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80044870: ctc1        $s2, $FpcCsr
    set_cop1_cs(ctx->r18);
    // 0x80044874: lwc1        $f4, 0x24($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X24);
    // 0x80044878: nop

    // 0x8004487C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80044880: cfc1        $s2, $FpcCsr
    ctx->r18 = get_cop1_cs();
    // 0x80044884: nop

    // 0x80044888: andi        $at, $s2, 0x4
    ctx->r1 = ctx->r18 & 0X4;
    // 0x8004488C: andi        $s2, $s2, 0x78
    ctx->r18 = ctx->r18 & 0X78;
    // 0x80044890: beq         $s2, $zero, L_800448E0
    if (ctx->r18 == 0) {
        // 0x80044894: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_800448E0;
    }
    // 0x80044894: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80044898: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004489C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x800448A0: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800448A4: ctc1        $s2, $FpcCsr
    set_cop1_cs(ctx->r18);
    // 0x800448A8: nop

    // 0x800448AC: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800448B0: cfc1        $s2, $FpcCsr
    ctx->r18 = get_cop1_cs();
    // 0x800448B4: nop

    // 0x800448B8: andi        $at, $s2, 0x4
    ctx->r1 = ctx->r18 & 0X4;
    // 0x800448BC: andi        $s2, $s2, 0x78
    ctx->r18 = ctx->r18 & 0X78;
    // 0x800448C0: bne         $s2, $zero, L_800448D8
    if (ctx->r18 != 0) {
        // 0x800448C4: nop
    
            goto L_800448D8;
    }
    // 0x800448C4: nop

    // 0x800448C8: mfc1        $s2, $f6
    ctx->r18 = (int32_t)ctx->f6.u32l;
    // 0x800448CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800448D0: b           L_800448F0
    // 0x800448D4: or          $s2, $s2, $at
    ctx->r18 = ctx->r18 | ctx->r1;
        goto L_800448F0;
    // 0x800448D4: or          $s2, $s2, $at
    ctx->r18 = ctx->r18 | ctx->r1;
L_800448D8:
    // 0x800448D8: b           L_800448F0
    // 0x800448DC: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
        goto L_800448F0;
    // 0x800448DC: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_800448E0:
    // 0x800448E0: mfc1        $s2, $f6
    ctx->r18 = (int32_t)ctx->f6.u32l;
    // 0x800448E4: nop

    // 0x800448E8: bltz        $s2, L_800448D8
    if (SIGNED(ctx->r18) < 0) {
        // 0x800448EC: nop
    
            goto L_800448D8;
    }
    // 0x800448EC: nop

L_800448F0:
    // 0x800448F0: andi        $t7, $s2, 0xFFFF
    ctx->r15 = ctx->r18 & 0XFFFF;
    // 0x800448F4: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x800448F8: addiu       $s3, $s2, 0xBE
    ctx->r19 = ADD32(ctx->r18, 0XBE);
    // 0x800448FC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80044900: andi        $t8, $s3, 0xFFFF
    ctx->r24 = ctx->r19 & 0XFFFF;
    // 0x80044904: b           L_80044938
    // 0x80044908: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
        goto L_80044938;
    // 0x80044908: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
L_8004490C:
    // 0x8004490C: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x80044910: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x80044914: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x80044918: sll         $t4, $s1, 2
    ctx->r12 = S32(ctx->r17 << 2);
    // 0x8004491C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80044920: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80044924: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x80044928: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8004492C: lhu         $s2, 0x0($t2)
    ctx->r18 = MEM_HU(ctx->r10, 0X0);
    // 0x80044930: lhu         $s3, 0x2($t6)
    ctx->r19 = MEM_HU(ctx->r14, 0X2);
    // 0x80044934: nop

L_80044938:
    // 0x80044938: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x8004493C: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x80044940: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80044944: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80044948: nop

    // 0x8004494C: lbu         $t1, 0x20($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X20);
    // 0x80044950: nop

    // 0x80044954: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80044958: bne         $t2, $zero, L_80044A3C
    if (ctx->r10 != 0) {
        // 0x8004495C: ori         $at, $zero, 0xFFFF
        ctx->r1 = 0 | 0XFFFF;
            goto L_80044A3C;
    }
    // 0x8004495C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80044960: beq         $s2, $at, L_80044A3C
    if (ctx->r18 == ctx->r1) {
        // 0x80044964: nop
    
            goto L_80044A3C;
    }
    // 0x80044964: nop

    // 0x80044968: lhu         $t3, 0x2($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X2);
    // 0x8004496C: nop

    // 0x80044970: slt         $at, $t3, $s3
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80044974: beq         $at, $zero, L_80044A3C
    if (ctx->r1 == 0) {
        // 0x80044978: nop
    
            goto L_80044A3C;
    }
    // 0x80044978: nop

    // 0x8004497C: lhu         $t4, 0x2($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X2);
    // 0x80044980: nop

    // 0x80044984: slt         $at, $t4, $s2
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80044988: bne         $at, $zero, L_80044A3C
    if (ctx->r1 != 0) {
        // 0x8004498C: nop
    
            goto L_80044A3C;
    }
    // 0x8004498C: nop

    // 0x80044990: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x80044994: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x80044998: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8004499C: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x800449A0: jal         0x800773A4
    // 0x800449A4: nop

    func_800773A4(rdram, ctx);
        goto after_3;
    // 0x800449A4: nop

    after_3:
    // 0x800449A8: lhu         $t8, 0x2($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2);
    // 0x800449AC: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x800449B0: subu        $t9, $t8, $s4
    ctx->r25 = SUB32(ctx->r24, ctx->r20);
    // 0x800449B4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800449B8: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x800449BC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800449C0: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800449C4: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x800449C8: nop

    // 0x800449CC: swc1        $f10, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f10.u32l;
    // 0x800449D0: lb          $a0, 0x1($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X1);
    // 0x800449D4: jal         0x80046218
    // 0x800449D8: nop

    func_80046218(rdram, ctx);
        goto after_4;
    // 0x800449D8: nop

    after_4:
    // 0x800449DC: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x800449E0: bne         $at, $zero, L_80044A3C
    if (ctx->r1 != 0) {
        // 0x800449E4: nop
    
            goto L_80044A3C;
    }
    // 0x800449E4: nop

    // 0x800449E8: bne         $s1, $zero, L_80044A3C
    if (ctx->r17 != 0) {
        // 0x800449EC: nop
    
            goto L_80044A3C;
    }
    // 0x800449EC: nop

    // 0x800449F0: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x800449F4: nop

    // 0x800449F8: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x800449FC: nop

    // 0x80044A00: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x80044A04: jal         0x800A4620
    // 0x80044A08: nop

    func_800A4620(rdram, ctx);
        goto after_5;
    // 0x80044A08: nop

    after_5:
    // 0x80044A0C: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x80044A10: nop

    // 0x80044A14: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80044A18: nop

    // 0x80044A1C: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80044A20: jal         0x800A4630
    // 0x80044A24: nop

    func_800A4630(rdram, ctx);
        goto after_6;
    // 0x80044A24: nop

    after_6:
    // 0x80044A28: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x80044A2C: nop

    // 0x80044A30: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    // 0x80044A34: jal         0x800773B8
    // 0x80044A38: nop

    func_800773B8(rdram, ctx);
        goto after_7;
    // 0x80044A38: nop

    after_7:
L_80044A3C:
    // 0x80044A3C: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x80044A40: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x80044A44: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80044A48: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x80044A4C: nop

    // 0x80044A50: lbu         $t3, 0x20($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X20);
    // 0x80044A54: nop

    // 0x80044A58: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80044A5C: beq         $t4, $zero, L_80044BCC
    if (ctx->r12 == 0) {
        // 0x80044A60: ori         $at, $zero, 0xFFFF
        ctx->r1 = 0 | 0XFFFF;
            goto L_80044BCC;
    }
    // 0x80044A60: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80044A64: beq         $s3, $at, L_80044BCC
    if (ctx->r19 == ctx->r1) {
        // 0x80044A68: nop
    
            goto L_80044BCC;
    }
    // 0x80044A68: nop

    // 0x80044A6C: lhu         $t5, 0x2($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X2);
    // 0x80044A70: nop

    // 0x80044A74: slt         $at, $t5, $s3
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80044A78: bne         $at, $zero, L_80044BCC
    if (ctx->r1 != 0) {
        // 0x80044A7C: nop
    
            goto L_80044BCC;
    }
    // 0x80044A7C: nop

    // 0x80044A80: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x80044A84: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x80044A88: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80044A8C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80044A90: jal         0x800773B8
    // 0x80044A94: nop

    func_800773B8(rdram, ctx);
        goto after_8;
    // 0x80044A94: nop

    after_8:
    // 0x80044A98: lb          $a0, 0x1($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X1);
    // 0x80044A9C: jal         0x80046218
    // 0x80044AA0: nop

    func_80046218(rdram, ctx);
        goto after_9;
    // 0x80044AA0: nop

    after_9:
    // 0x80044AA4: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80044AA8: bne         $at, $zero, L_80044AB8
    if (ctx->r1 != 0) {
        // 0x80044AAC: slti        $at, $s1, 0x4
        ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
            goto L_80044AB8;
    }
    // 0x80044AAC: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80044AB0: beq         $at, $zero, L_80044AD8
    if (ctx->r1 == 0) {
        // 0x80044AB4: nop
    
            goto L_80044AD8;
    }
    // 0x80044AB4: nop

L_80044AB8:
    // 0x80044AB8: lb          $a0, 0x1($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X1);
    // 0x80044ABC: jal         0x80046218
    // 0x80044AC0: nop

    func_80046218(rdram, ctx);
        goto after_10;
    // 0x80044AC0: nop

    after_10:
    // 0x80044AC4: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80044AC8: beq         $at, $zero, L_80044B60
    if (ctx->r1 == 0) {
        // 0x80044ACC: slti        $at, $s1, 0x3
        ctx->r1 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
            goto L_80044B60;
    }
    // 0x80044ACC: slti        $at, $s1, 0x3
    ctx->r1 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x80044AD0: bne         $at, $zero, L_80044B60
    if (ctx->r1 != 0) {
        // 0x80044AD4: nop
    
            goto L_80044B60;
    }
    // 0x80044AD4: nop

L_80044AD8:
    // 0x80044AD8: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x80044ADC: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x80044AE0: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80044AE4: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x80044AE8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80044AEC: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x80044AF0: sll         $t5, $s1, 2
    ctx->r13 = S32(ctx->r17 << 2);
    // 0x80044AF4: sw          $t3, 0x1F64($at)
    MEM_W(0X1F64, ctx->r1) = ctx->r11;
    // 0x80044AF8: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x80044AFC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80044B00: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80044B04: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80044B08: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x80044B0C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80044B10: nop

    // 0x80044B14: sw          $t8, 0x1F60($at)
    MEM_W(0X1F60, ctx->r1) = ctx->r24;
    // 0x80044B18: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x80044B1C: nop

    // 0x80044B20: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80044B24: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x80044B28: jal         0x80044628
    // 0x80044B2C: nop

    func_80044628(rdram, ctx);
        goto after_11;
    // 0x80044B2C: nop

    after_11:
    // 0x80044B30: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80044B34: lw          $a0, 0x1F64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F64);
    // 0x80044B38: jal         0x800A6AA8
    // 0x80044B3C: nop

    func_800A6AA8(rdram, ctx);
        goto after_12;
    // 0x80044B3C: nop

    after_12:
    // 0x80044B40: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80044B44: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80044B48: lw          $a0, 0x1F60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F60);
    // 0x80044B4C: jal         0x800A6A2C
    // 0x80044B50: sw          $zero, 0x1F64($at)
    MEM_W(0X1F64, ctx->r1) = 0;
    func_800A6A2C(rdram, ctx);
        goto after_13;
    // 0x80044B50: sw          $zero, 0x1F64($at)
    MEM_W(0X1F64, ctx->r1) = 0;
    after_13:
    // 0x80044B54: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80044B58: jal         0x8004A34C
    // 0x80044B5C: sw          $zero, 0x1F60($at)
    MEM_W(0X1F60, ctx->r1) = 0;
    func_8004A34C(rdram, ctx);
        goto after_14;
    // 0x80044B5C: sw          $zero, 0x1F60($at)
    MEM_W(0X1F60, ctx->r1) = 0;
    after_14:
L_80044B60:
    // 0x80044B60: lb          $t2, 0x1($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X1);
    // 0x80044B64: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80044B68: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80044B6C: lbu         $t3, -0xA10($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0XA10);
    // 0x80044B70: nop

    // 0x80044B74: bne         $t3, $s1, L_80044BCC
    if (ctx->r11 != ctx->r17) {
        // 0x80044B78: nop
    
            goto L_80044BCC;
    }
    // 0x80044B78: nop

    // 0x80044B7C: lb          $a0, 0x1($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X1);
    // 0x80044B80: jal         0x8004619C
    // 0x80044B84: nop

    func_8004619C(rdram, ctx);
        goto after_15;
    // 0x80044B84: nop

    after_15:
    // 0x80044B88: beq         $v0, $zero, L_80044BCC
    if (ctx->r2 == 0) {
        // 0x80044B8C: nop
    
            goto L_80044BCC;
    }
    // 0x80044B8C: nop

    // 0x80044B90: lb          $a0, 0x1($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X1);
    // 0x80044B94: jal         0x80046218
    // 0x80044B98: nop

    func_80046218(rdram, ctx);
        goto after_16;
    // 0x80044B98: nop

    after_16:
    // 0x80044B9C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80044BA0: bne         $at, $zero, L_80044BB4
    if (ctx->r1 != 0) {
        // 0x80044BA4: nop
    
            goto L_80044BB4;
    }
    // 0x80044BA4: nop

    // 0x80044BA8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80044BAC: b           L_80044BCC
    // 0x80044BB0: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_80044BCC;
    // 0x80044BB0: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_80044BB4:
    // 0x80044BB4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80044BB8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80044BBC: jal         0x8007EFB0
    // 0x80044BC0: nop

    func_8007EFB0(rdram, ctx);
        goto after_17;
    // 0x80044BC0: nop

    after_17:
    // 0x80044BC4: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80044BC8: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_80044BCC:
    // 0x80044BCC: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x80044BD0: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x80044BD4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80044BD8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80044BDC: jal         0x80077098
    // 0x80044BE0: nop

    func_80077098(rdram, ctx);
        goto after_18;
    // 0x80044BE0: nop

    after_18:
    // 0x80044BE4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80044BE8: andi        $t9, $s1, 0xFFFF
    ctx->r25 = ctx->r17 & 0XFFFF;
    // 0x80044BEC: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x80044BF0: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x80044BF4: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x80044BF8: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80044BFC: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80044C00: nop

    // 0x80044C04: bne         $t3, $zero, L_800447D4
    if (ctx->r11 != 0) {
        // 0x80044C08: nop
    
            goto L_800447D4;
    }
    // 0x80044C08: nop

L_80044C0C:
    // 0x80044C0C: lb          $a0, 0x1($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X1);
    // 0x80044C10: jal         0x80046218
    // 0x80044C14: nop

    func_80046218(rdram, ctx);
        goto after_19;
    // 0x80044C14: nop

    after_19:
    // 0x80044C18: sb          $v0, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r2;
    // 0x80044C1C: lb          $a0, 0x57($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X57);
    // 0x80044C20: jal         0x80046388
    // 0x80044C24: nop

    func_80046388(rdram, ctx);
        goto after_20;
    // 0x80044C24: nop

    after_20:
    // 0x80044C28: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80044C2C: bne         $s5, $zero, L_80044C54
    if (ctx->r21 != 0) {
        // 0x80044C30: nop
    
            goto L_80044C54;
    }
    // 0x80044C30: nop

    // 0x80044C34: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80044C38: addiu       $a1, $a1, -0x4B60
    ctx->r5 = ADD32(ctx->r5, -0X4B60);
    // 0x80044C3C: jal         0x800B62D4
    // 0x80044C40: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    sprintf_recomp(rdram, ctx);
        goto after_21;
    // 0x80044C40: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_21:
    // 0x80044C44: jal         0x800446AC
    // 0x80044C48: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_800446AC(rdram, ctx);
        goto after_22;
    // 0x80044C48: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_22:
    // 0x80044C4C: b           L_80044C8C
    // 0x80044C50: nop

        goto L_80044C8C;
    // 0x80044C50: nop

L_80044C54:
    // 0x80044C54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80044C58: bne         $s5, $at, L_80044C78
    if (ctx->r21 != ctx->r1) {
        // 0x80044C5C: nop
    
            goto L_80044C78;
    }
    // 0x80044C5C: nop

    // 0x80044C60: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80044C64: addiu       $a1, $a1, -0x4B50
    ctx->r5 = ADD32(ctx->r5, -0X4B50);
    // 0x80044C68: jal         0x800B62D4
    // 0x80044C6C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    sprintf_recomp(rdram, ctx);
        goto after_23;
    // 0x80044C6C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_23:
    // 0x80044C70: b           L_80044C8C
    // 0x80044C74: nop

        goto L_80044C8C;
    // 0x80044C74: nop

L_80044C78:
    // 0x80044C78: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80044C7C: addiu       $a1, $a1, -0x4B40
    ctx->r5 = ADD32(ctx->r5, -0X4B40);
    // 0x80044C80: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x80044C84: jal         0x800B62D4
    // 0x80044C88: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    sprintf_recomp(rdram, ctx);
        goto after_24;
    // 0x80044C88: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_24:
L_80044C8C:
    // 0x80044C8C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80044C90: jal         0x8005BBFC
    // 0x80044C94: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_25;
    // 0x80044C94: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_25:
    // 0x80044C98: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x80044C9C: jal         0x80077D88
    // 0x80044CA0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_80077D88(rdram, ctx);
        goto after_26;
    // 0x80044CA0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_26:
    // 0x80044CA4: bgez        $v0, L_80044CB4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80044CA8: sra         $t4, $v0, 1
        ctx->r12 = S32(SIGNED(ctx->r2) >> 1);
            goto L_80044CB4;
    }
    // 0x80044CA8: sra         $t4, $v0, 1
    ctx->r12 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80044CAC: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x80044CB0: sra         $t4, $at, 1
    ctx->r12 = S32(SIGNED(ctx->r1) >> 1);
L_80044CB4:
    // 0x80044CB4: addiu       $t5, $zero, 0xC8
    ctx->r13 = ADD32(0, 0XC8);
    // 0x80044CB8: subu        $s1, $t5, $t4
    ctx->r17 = SUB32(ctx->r13, ctx->r12);
    // 0x80044CBC: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80044CC0: lbu         $t1, 0x1F6E($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X1F6E);
    // 0x80044CC4: andi        $t6, $s1, 0xFFFF
    ctx->r14 = ctx->r17 & 0XFFFF;
    // 0x80044CC8: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x80044CCC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80044CD0: addiu       $t7, $sp, 0x58
    ctx->r15 = ADD32(ctx->r29, 0X58);
    // 0x80044CD4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80044CD8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80044CDC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80044CE0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80044CE4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80044CE8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80044CEC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80044CF0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80044CF4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80044CF8: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x80044CFC: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    // 0x80044D00: jal         0x80077960
    // 0x80044D04: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_80077960(rdram, ctx);
        goto after_27;
    // 0x80044D04: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_27:
    // 0x80044D08: lbu         $t2, 0x0($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X0);
    // 0x80044D0C: nop

    // 0x80044D10: bne         $t2, $zero, L_80044E98
    if (ctx->r10 != 0) {
        // 0x80044D14: nop
    
            goto L_80044E98;
    }
    // 0x80044D14: nop

    // 0x80044D18: lh          $t3, 0xF8($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XF8);
    // 0x80044D1C: lhu         $s6, 0x80($s0)
    ctx->r22 = MEM_HU(ctx->r16, 0X80);
    // 0x80044D20: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80044D24: addu        $s7, $s6, $t5
    ctx->r23 = ADD32(ctx->r22, ctx->r13);
    // 0x80044D28: andi        $t4, $s7, 0xFFFF
    ctx->r12 = ctx->r23 & 0XFFFF;
    // 0x80044D2C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80044D30: or          $s7, $t4, $zero
    ctx->r23 = ctx->r12 | 0;
    // 0x80044D34: addiu       $s1, $zero, 0x82
    ctx->r17 = ADD32(0, 0X82);
    // 0x80044D38: addiu       $a1, $a1, -0x4B30
    ctx->r5 = ADD32(ctx->r5, -0X4B30);
    // 0x80044D3C: jal         0x800B62D4
    // 0x80044D40: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    sprintf_recomp(rdram, ctx);
        goto after_28;
    // 0x80044D40: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_28:
    // 0x80044D44: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80044D48: addiu       $t6, $sp, 0x58
    ctx->r14 = ADD32(ctx->r29, 0X58);
    // 0x80044D4C: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x80044D50: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x80044D54: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80044D58: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80044D5C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80044D60: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80044D64: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80044D68: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80044D6C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80044D70: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80044D74: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x80044D78: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80044D7C: jal         0x80077960
    // 0x80044D80: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    func_80077960(rdram, ctx);
        goto after_29;
    // 0x80044D80: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    after_29:
    // 0x80044D84: addu        $s1, $s1, $s6
    ctx->r17 = ADD32(ctx->r17, ctx->r22);
    // 0x80044D88: andi        $t1, $s1, 0xFFFF
    ctx->r9 = ctx->r17 & 0XFFFF;
    // 0x80044D8C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80044D90: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x80044D94: addiu       $a1, $a1, -0x4B2C
    ctx->r5 = ADD32(ctx->r5, -0X4B2C);
    // 0x80044D98: jal         0x800B62D4
    // 0x80044D9C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    sprintf_recomp(rdram, ctx);
        goto after_30;
    // 0x80044D9C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_30:
    // 0x80044DA0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80044DA4: addiu       $t2, $sp, 0x58
    ctx->r10 = ADD32(ctx->r29, 0X58);
    // 0x80044DA8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80044DAC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80044DB0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80044DB4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80044DB8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80044DBC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80044DC0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80044DC4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80044DC8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80044DCC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80044DD0: addiu       $a1, $s0, 0x84
    ctx->r5 = ADD32(ctx->r16, 0X84);
    // 0x80044DD4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80044DD8: jal         0x80077960
    // 0x80044DDC: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    func_80077960(rdram, ctx);
        goto after_31;
    // 0x80044DDC: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    after_31:
    // 0x80044DE0: addu        $s1, $s1, $s7
    ctx->r17 = ADD32(ctx->r17, ctx->r23);
    // 0x80044DE4: andi        $t7, $s1, 0xFFFF
    ctx->r15 = ctx->r17 & 0XFFFF;
    // 0x80044DE8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80044DEC: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x80044DF0: addiu       $a1, $a1, -0x4B24
    ctx->r5 = ADD32(ctx->r5, -0X4B24);
    // 0x80044DF4: jal         0x800B62D4
    // 0x80044DF8: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    sprintf_recomp(rdram, ctx);
        goto after_32;
    // 0x80044DF8: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_32:
    // 0x80044DFC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80044E00: addiu       $t8, $sp, 0x58
    ctx->r24 = ADD32(ctx->r29, 0X58);
    // 0x80044E04: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x80044E08: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80044E0C: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x80044E10: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80044E14: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80044E18: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80044E1C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80044E20: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80044E24: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80044E28: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80044E2C: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x80044E30: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80044E34: jal         0x80077960
    // 0x80044E38: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    func_80077960(rdram, ctx);
        goto after_33;
    // 0x80044E38: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    after_33:
    // 0x80044E3C: addu        $s1, $s1, $s6
    ctx->r17 = ADD32(ctx->r17, ctx->r22);
    // 0x80044E40: andi        $t3, $s1, 0xFFFF
    ctx->r11 = ctx->r17 & 0XFFFF;
    // 0x80044E44: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80044E48: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80044E4C: addiu       $a1, $a1, -0x4B20
    ctx->r5 = ADD32(ctx->r5, -0X4B20);
    // 0x80044E50: jal         0x800B62D4
    // 0x80044E54: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    sprintf_recomp(rdram, ctx);
        goto after_34;
    // 0x80044E54: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_34:
    // 0x80044E58: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80044E5C: addiu       $t5, $sp, 0x58
    ctx->r13 = ADD32(ctx->r29, 0X58);
    // 0x80044E60: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80044E64: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80044E68: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80044E6C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80044E70: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80044E74: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80044E78: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80044E7C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80044E80: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80044E84: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80044E88: addiu       $a1, $s0, 0x84
    ctx->r5 = ADD32(ctx->r16, 0X84);
    // 0x80044E8C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80044E90: jal         0x80077960
    // 0x80044E94: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    func_80077960(rdram, ctx);
        goto after_35;
    // 0x80044E94: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    after_35:
L_80044E98:
    // 0x80044E98: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80044E9C: jal         0x8005BE40
    // 0x80044EA0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_36;
    // 0x80044EA0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_36:
    // 0x80044EA4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80044EA8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80044EAC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80044EB0: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80044EB4: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80044EB8: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80044EBC: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80044EC0: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x80044EC4: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x80044EC8: jr          $ra
    // 0x80044ECC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80044ECC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80044ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044ED0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80044ED4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80044ED8: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x80044EDC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80044EE0: lw          $s0, 0x5E10($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5E10);
    // 0x80044EE4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80044EE8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80044EEC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80044EF0: jal         0x800A3AF0
    // 0x80044EF4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    func_800A3AF0(rdram, ctx);
        goto after_0;
    // 0x80044EF4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x80044EF8: lhu         $t6, 0x2($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2);
    // 0x80044EFC: andi        $s4, $v0, 0xFF
    ctx->r20 = ctx->r2 & 0XFF;
    // 0x80044F00: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80044F04: addu        $t7, $t6, $s4
    ctx->r15 = ADD32(ctx->r14, ctx->r20);
    // 0x80044F08: slt         $at, $t7, $at
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80044F0C: beq         $at, $zero, L_80044F28
    if (ctx->r1 == 0) {
        // 0x80044F10: nop
    
            goto L_80044F28;
    }
    // 0x80044F10: nop

    // 0x80044F14: lhu         $t8, 0x2($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2);
    // 0x80044F18: nop

    // 0x80044F1C: addu        $t9, $t8, $s4
    ctx->r25 = ADD32(ctx->r24, ctx->r20);
    // 0x80044F20: b           L_80044F30
    // 0x80044F24: sh          $t9, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r25;
        goto L_80044F30;
    // 0x80044F24: sh          $t9, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r25;
L_80044F28:
    // 0x80044F28: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
    // 0x80044F2C: sh          $t0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r8;
L_80044F30:
    // 0x80044F30: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x80044F34: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80044F38: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x80044F3C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80044F40: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80044F44: nop

    // 0x80044F48: beq         $t4, $zero, L_800450C8
    if (ctx->r12 == 0) {
        // 0x80044F4C: nop
    
            goto L_800450C8;
    }
    // 0x80044F4C: nop

L_80044F50:
    // 0x80044F50: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x80044F54: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x80044F58: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80044F5C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80044F60: nop

    // 0x80044F64: lw          $t9, 0x2C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X2C);
    // 0x80044F68: nop

    // 0x80044F6C: beq         $t9, $zero, L_80045088
    if (ctx->r25 == 0) {
        // 0x80044F70: nop
    
            goto L_80045088;
    }
    // 0x80044F70: nop

    // 0x80044F74: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x80044F78: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x80044F7C: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x80044F80: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80044F84: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x80044F88: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x80044F8C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80044F90: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80044F94: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80044F98: sll         $t5, $s1, 2
    ctx->r13 = S32(ctx->r17 << 2);
    // 0x80044F9C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80044FA0: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80044FA4: lbu         $t2, 0x20($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X20);
    // 0x80044FA8: lhu         $s2, 0x0($t3)
    ctx->r18 = MEM_HU(ctx->r11, 0X0);
    // 0x80044FAC: lhu         $s3, 0x2($t7)
    ctx->r19 = MEM_HU(ctx->r15, 0X2);
    // 0x80044FB0: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80044FB4: bne         $t3, $zero, L_8004502C
    if (ctx->r11 != 0) {
        // 0x80044FB8: ori         $at, $zero, 0xFFFF
        ctx->r1 = 0 | 0XFFFF;
            goto L_8004502C;
    }
    // 0x80044FB8: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80044FBC: beq         $s2, $at, L_8004502C
    if (ctx->r18 == ctx->r1) {
        // 0x80044FC0: nop
    
            goto L_8004502C;
    }
    // 0x80044FC0: nop

    // 0x80044FC4: lhu         $t4, 0x2($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X2);
    // 0x80044FC8: nop

    // 0x80044FCC: slt         $at, $t4, $s3
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80044FD0: beq         $at, $zero, L_8004502C
    if (ctx->r1 == 0) {
        // 0x80044FD4: nop
    
            goto L_8004502C;
    }
    // 0x80044FD4: nop

    // 0x80044FD8: lhu         $t5, 0x2($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X2);
    // 0x80044FDC: nop

    // 0x80044FE0: slt         $at, $t5, $s2
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80044FE4: bne         $at, $zero, L_8004502C
    if (ctx->r1 != 0) {
        // 0x80044FE8: nop
    
            goto L_8004502C;
    }
    // 0x80044FE8: nop

    // 0x80044FEC: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x80044FF0: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x80044FF4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80044FF8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80044FFC: jal         0x800773A4
    // 0x80045000: nop

    func_800773A4(rdram, ctx);
        goto after_1;
    // 0x80045000: nop

    after_1:
    // 0x80045004: lhu         $t9, 0x2($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X2);
    // 0x80045008: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x8004500C: subu        $t0, $t9, $s4
    ctx->r8 = SUB32(ctx->r25, ctx->r20);
    // 0x80045010: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80045014: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x80045018: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004501C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80045020: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80045024: nop

    // 0x80045028: swc1        $f6, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f6.u32l;
L_8004502C:
    // 0x8004502C: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x80045030: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x80045034: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80045038: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8004503C: nop

    // 0x80045040: lbu         $t9, 0x20($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X20);
    // 0x80045044: nop

    // 0x80045048: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8004504C: beq         $t0, $zero, L_80045088
    if (ctx->r8 == 0) {
        // 0x80045050: ori         $at, $zero, 0xFFFF
        ctx->r1 = 0 | 0XFFFF;
            goto L_80045088;
    }
    // 0x80045050: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80045054: beq         $s3, $at, L_80045088
    if (ctx->r19 == ctx->r1) {
        // 0x80045058: nop
    
            goto L_80045088;
    }
    // 0x80045058: nop

    // 0x8004505C: lhu         $t1, 0x2($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X2);
    // 0x80045060: nop

    // 0x80045064: slt         $at, $t1, $s3
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80045068: bne         $at, $zero, L_80045088
    if (ctx->r1 != 0) {
        // 0x8004506C: nop
    
            goto L_80045088;
    }
    // 0x8004506C: nop

    // 0x80045070: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x80045074: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x80045078: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8004507C: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x80045080: jal         0x800773B8
    // 0x80045084: nop

    func_800773B8(rdram, ctx);
        goto after_2;
    // 0x80045084: nop

    after_2:
L_80045088:
    // 0x80045088: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x8004508C: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x80045090: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80045094: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80045098: jal         0x80077098
    // 0x8004509C: nop

    func_80077098(rdram, ctx);
        goto after_3;
    // 0x8004509C: nop

    after_3:
    // 0x800450A0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800450A4: andi        $t8, $s1, 0xFFFF
    ctx->r24 = ctx->r17 & 0XFFFF;
    // 0x800450A8: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x800450AC: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x800450B0: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x800450B4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800450B8: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x800450BC: nop

    // 0x800450C0: bne         $t2, $zero, L_80044F50
    if (ctx->r10 != 0) {
        // 0x800450C4: nop
    
            goto L_80044F50;
    }
    // 0x800450C4: nop

L_800450C8:
    // 0x800450C8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800450CC: addiu       $a1, $a1, -0x4B18
    ctx->r5 = ADD32(ctx->r5, -0X4B18);
    // 0x800450D0: jal         0x800B62D4
    // 0x800450D4: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    sprintf_recomp(rdram, ctx);
        goto after_4;
    // 0x800450D4: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_4:
    // 0x800450D8: jal         0x800446AC
    // 0x800450DC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_800446AC(rdram, ctx);
        goto after_5;
    // 0x800450DC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_5:
    // 0x800450E0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800450E4: jal         0x8005BBFC
    // 0x800450E8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_6;
    // 0x800450E8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_6:
    // 0x800450EC: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x800450F0: jal         0x80077D88
    // 0x800450F4: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_80077D88(rdram, ctx);
        goto after_7;
    // 0x800450F4: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_7:
    // 0x800450F8: bgez        $v0, L_80045108
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800450FC: sra         $t3, $v0, 1
        ctx->r11 = S32(SIGNED(ctx->r2) >> 1);
            goto L_80045108;
    }
    // 0x800450FC: sra         $t3, $v0, 1
    ctx->r11 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80045100: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x80045104: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_80045108:
    // 0x80045108: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x8004510C: subu        $s1, $t4, $t3
    ctx->r17 = SUB32(ctx->r12, ctx->r11);
    // 0x80045110: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80045114: lbu         $t0, 0x1F6E($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X1F6E);
    // 0x80045118: andi        $t5, $s1, 0xFFFF
    ctx->r13 = ctx->r17 & 0XFFFF;
    // 0x8004511C: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x80045120: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80045124: addiu       $t6, $sp, 0x4C
    ctx->r14 = ADD32(ctx->r29, 0X4C);
    // 0x80045128: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004512C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80045130: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80045134: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80045138: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8004513C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80045140: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80045144: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80045148: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8004514C: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x80045150: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    // 0x80045154: jal         0x80077960
    // 0x80045158: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_80077960(rdram, ctx);
        goto after_8;
    // 0x80045158: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_8:
    // 0x8004515C: jal         0x80047C58
    // 0x80045160: addiu       $a0, $s0, 0x84
    ctx->r4 = ADD32(ctx->r16, 0X84);
    func_80047C58(rdram, ctx);
        goto after_9;
    // 0x80045160: addiu       $a0, $s0, 0x84
    ctx->r4 = ADD32(ctx->r16, 0X84);
    after_9:
    // 0x80045164: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80045168: jal         0x8005BE40
    // 0x8004516C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_10;
    // 0x8004516C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_10:
    // 0x80045170: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80045174: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80045178: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8004517C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80045180: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80045184: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80045188: jr          $ra
    // 0x8004518C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8004518C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80045190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045190: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80045194: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80045198: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x8004519C: lw          $s0, 0x5E10($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5E10);
    // 0x800451A0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800451A4: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x800451A8: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x800451AC: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x800451B0: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x800451B4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x800451B8: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x800451BC: nop

    // 0x800451C0: bne         $t6, $zero, L_80045200
    if (ctx->r14 != 0) {
        // 0x800451C4: nop
    
            goto L_80045200;
    }
    // 0x800451C4: nop

    // 0x800451C8: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x800451CC: nop

    // 0x800451D0: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x800451D4: nop

    // 0x800451D8: lbu         $t9, 0x20($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X20);
    // 0x800451DC: nop

    // 0x800451E0: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x800451E4: bne         $t0, $zero, L_80045200
    if (ctx->r8 != 0) {
        // 0x800451E8: nop
    
            goto L_80045200;
    }
    // 0x800451E8: nop

    // 0x800451EC: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x800451F0: nop

    // 0x800451F4: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x800451F8: jal         0x800773A4
    // 0x800451FC: nop

    func_800773A4(rdram, ctx);
        goto after_0;
    // 0x800451FC: nop

    after_0:
L_80045200:
    // 0x80045200: jal         0x800A3AF0
    // 0x80045204: nop

    func_800A3AF0(rdram, ctx);
        goto after_1;
    // 0x80045204: nop

    after_1:
    // 0x80045208: lhu         $t2, 0x2($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X2);
    // 0x8004520C: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x80045210: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80045214: addu        $t3, $t2, $s1
    ctx->r11 = ADD32(ctx->r10, ctx->r17);
    // 0x80045218: slt         $at, $t3, $at
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8004521C: beq         $at, $zero, L_80045238
    if (ctx->r1 == 0) {
        // 0x80045220: nop
    
            goto L_80045238;
    }
    // 0x80045220: nop

    // 0x80045224: lhu         $t4, 0x2($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X2);
    // 0x80045228: nop

    // 0x8004522C: addu        $t5, $t4, $s1
    ctx->r13 = ADD32(ctx->r12, ctx->r17);
    // 0x80045230: b           L_80045240
    // 0x80045234: sh          $t5, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r13;
        goto L_80045240;
    // 0x80045234: sh          $t5, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r13;
L_80045238:
    // 0x80045238: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x8004523C: sh          $t6, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r14;
L_80045240:
    // 0x80045240: lb          $a0, 0x1($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X1);
    // 0x80045244: jal         0x80046218
    // 0x80045248: nop

    func_80046218(rdram, ctx);
        goto after_2;
    // 0x80045248: nop

    after_2:
    // 0x8004524C: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x80045250: andi        $s2, $v0, 0xFFFF
    ctx->r18 = ctx->r2 & 0XFFFF;
    // 0x80045254: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80045258: nop

    // 0x8004525C: lbu         $t9, 0x20($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X20);
    // 0x80045260: nop

    // 0x80045264: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80045268: beq         $t0, $zero, L_80045344
    if (ctx->r8 == 0) {
        // 0x8004526C: nop
    
            goto L_80045344;
    }
    // 0x8004526C: nop

    // 0x80045270: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x80045274: lhu         $t1, 0x2($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X2);
    // 0x80045278: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8004527C: nop

    // 0x80045280: lhu         $t4, 0x2($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X2);
    // 0x80045284: nop

    // 0x80045288: slt         $at, $t1, $t4
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8004528C: bne         $at, $zero, L_80045344
    if (ctx->r1 != 0) {
        // 0x80045290: nop
    
            goto L_80045344;
    }
    // 0x80045290: nop

    // 0x80045294: beq         $s2, $zero, L_800452A4
    if (ctx->r18 == 0) {
        // 0x80045298: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_800452A4;
    }
    // 0x80045298: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8004529C: bne         $s2, $at, L_800452F4
    if (ctx->r18 != ctx->r1) {
        // 0x800452A0: nop
    
            goto L_800452F4;
    }
    // 0x800452A0: nop

L_800452A4:
    // 0x800452A4: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x800452A8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800452AC: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x800452B0: nop

    // 0x800452B4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800452B8: nop

    // 0x800452BC: lw          $s3, 0x1D0($t7)
    ctx->r19 = MEM_W(ctx->r15, 0X1D0);
    // 0x800452C0: nop

    // 0x800452C4: lwc1        $f4, 0x18($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X18);
    // 0x800452C8: nop

    // 0x800452CC: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800452D0: nop

    // 0x800452D4: bc1f        L_80045308
    if (!c1cs) {
        // 0x800452D8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80045308;
    }
    // 0x800452D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800452DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800452E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800452E4: lw          $t8, 0xC($s3)
    ctx->r24 = MEM_W(ctx->r19, 0XC);
    // 0x800452E8: swc1        $f8, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f8.u32l;
    // 0x800452EC: b           L_80045308
    // 0x800452F0: swc1        $f10, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f10.u32l;
        goto L_80045308;
    // 0x800452F0: swc1        $f10, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f10.u32l;
L_800452F4:
    // 0x800452F4: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x800452F8: nop

    // 0x800452FC: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80045300: jal         0x800773B8
    // 0x80045304: nop

    func_800773B8(rdram, ctx);
        goto after_3;
    // 0x80045304: nop

    after_3:
L_80045308:
    // 0x80045308: lbu         $t0, 0x0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X0);
    // 0x8004530C: nop

    // 0x80045310: bne         $t0, $zero, L_80045344
    if (ctx->r8 != 0) {
        // 0x80045314: nop
    
            goto L_80045344;
    }
    // 0x80045314: nop

    // 0x80045318: lb          $t2, 0x1($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X1);
    // 0x8004531C: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x80045320: bne         $t2, $at, L_80045344
    if (ctx->r10 != ctx->r1) {
        // 0x80045324: nop
    
            goto L_80045344;
    }
    // 0x80045324: nop

    // 0x80045328: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8004532C: lbu         $t3, -0x7C0($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X7C0);
    // 0x80045330: nop

    // 0x80045334: bne         $t3, $zero, L_80045344
    if (ctx->r11 != 0) {
        // 0x80045338: nop
    
            goto L_80045344;
    }
    // 0x80045338: nop

    // 0x8004533C: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x80045340: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_80045344:
    // 0x80045344: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x80045348: nop

    // 0x8004534C: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x80045350: jal         0x80077098
    // 0x80045354: nop

    func_80077098(rdram, ctx);
        goto after_4;
    // 0x80045354: nop

    after_4:
    // 0x80045358: lbu         $t5, 0x0($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X0);
    // 0x8004535C: nop

    // 0x80045360: beq         $t5, $zero, L_80045378
    if (ctx->r13 == 0) {
        // 0x80045364: nop
    
            goto L_80045378;
    }
    // 0x80045364: nop

    // 0x80045368: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x8004536C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80045370: bne         $t6, $at, L_80045598
    if (ctx->r14 != ctx->r1) {
        // 0x80045374: nop
    
            goto L_80045598;
    }
    // 0x80045374: nop

L_80045378:
    // 0x80045378: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004537C: jal         0x8005BBFC
    // 0x80045380: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_5;
    // 0x80045380: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_5:
    // 0x80045384: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x80045388: nop

    // 0x8004538C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80045390: nop

    // 0x80045394: lbu         $t9, 0x20($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X20);
    // 0x80045398: nop

    // 0x8004539C: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x800453A0: beq         $t0, $zero, L_800453E0
    if (ctx->r8 == 0) {
        // 0x800453A4: nop
    
            goto L_800453E0;
    }
    // 0x800453A4: nop

    // 0x800453A8: bne         $s2, $zero, L_800453C0
    if (ctx->r18 != 0) {
        // 0x800453AC: nop
    
            goto L_800453C0;
    }
    // 0x800453AC: nop

    // 0x800453B0: lhu         $t2, 0x2($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X2);
    // 0x800453B4: nop

    // 0x800453B8: slti        $at, $t2, 0xABD
    ctx->r1 = SIGNED(ctx->r10) < 0XABD ? 1 : 0;
    // 0x800453BC: beq         $at, $zero, L_800453E0
    if (ctx->r1 == 0) {
        // 0x800453C0: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_800453E0;
    }
L_800453C0:
    // 0x800453C0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800453C4: bne         $s2, $at, L_800453E8
    if (ctx->r18 != ctx->r1) {
        // 0x800453C8: nop
    
            goto L_800453E8;
    }
    // 0x800453C8: nop

    // 0x800453CC: lhu         $t3, 0x2($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X2);
    // 0x800453D0: nop

    // 0x800453D4: slti        $at, $t3, 0xF9F
    ctx->r1 = SIGNED(ctx->r11) < 0XF9F ? 1 : 0;
    // 0x800453D8: bne         $at, $zero, L_800453E8
    if (ctx->r1 != 0) {
        // 0x800453DC: nop
    
            goto L_800453E8;
    }
    // 0x800453DC: nop

L_800453E0:
    // 0x800453E0: jal         0x80047C58
    // 0x800453E4: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    func_80047C58(rdram, ctx);
        goto after_6;
    // 0x800453E4: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    after_6:
L_800453E8:
    // 0x800453E8: lh          $t1, 0xF8($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XF8);
    // 0x800453EC: lhu         $s4, 0x80($s0)
    ctx->r20 = MEM_HU(ctx->r16, 0X80);
    // 0x800453F0: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x800453F4: addu        $s5, $s4, $t4
    ctx->r21 = ADD32(ctx->r20, ctx->r12);
    // 0x800453F8: andi        $t5, $s5, 0xFFFF
    ctx->r13 = ctx->r21 & 0XFFFF;
    // 0x800453FC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80045400: or          $s5, $t5, $zero
    ctx->r21 = ctx->r13 | 0;
    // 0x80045404: addiu       $s2, $zero, 0x82
    ctx->r18 = ADD32(0, 0X82);
    // 0x80045408: addiu       $a1, $a1, -0x4B08
    ctx->r5 = ADD32(ctx->r5, -0X4B08);
    // 0x8004540C: jal         0x800B62D4
    // 0x80045410: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    sprintf_recomp(rdram, ctx);
        goto after_7;
    // 0x80045410: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_7:
    // 0x80045414: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80045418: addiu       $t6, $sp, 0x4C
    ctx->r14 = ADD32(ctx->r29, 0X4C);
    // 0x8004541C: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x80045420: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x80045424: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80045428: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004542C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80045430: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80045434: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80045438: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8004543C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80045440: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80045444: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x80045448: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8004544C: jal         0x80077960
    // 0x80045450: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    func_80077960(rdram, ctx);
        goto after_8;
    // 0x80045450: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    after_8:
    // 0x80045454: lbu         $t3, 0x0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X0);
    // 0x80045458: addu        $s2, $s2, $s4
    ctx->r18 = ADD32(ctx->r18, ctx->r20);
    // 0x8004545C: andi        $t2, $s2, 0xFFFF
    ctx->r10 = ctx->r18 & 0XFFFF;
    // 0x80045460: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80045464: bne         $t3, $at, L_80045484
    if (ctx->r11 != ctx->r1) {
        // 0x80045468: or          $s2, $t2, $zero
        ctx->r18 = ctx->r10 | 0;
            goto L_80045484;
    }
    // 0x80045468: or          $s2, $t2, $zero
    ctx->r18 = ctx->r10 | 0;
    // 0x8004546C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80045470: addiu       $a1, $a1, -0x4B04
    ctx->r5 = ADD32(ctx->r5, -0X4B04);
    // 0x80045474: jal         0x800B62D4
    // 0x80045478: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    sprintf_recomp(rdram, ctx);
        goto after_9;
    // 0x80045478: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_9:
    // 0x8004547C: b           L_80045494
    // 0x80045480: nop

        goto L_80045494;
    // 0x80045480: nop

L_80045484:
    // 0x80045484: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80045488: addiu       $a1, $a1, -0x4AFC
    ctx->r5 = ADD32(ctx->r5, -0X4AFC);
    // 0x8004548C: jal         0x800B62D4
    // 0x80045490: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    sprintf_recomp(rdram, ctx);
        goto after_10;
    // 0x80045490: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_10:
L_80045494:
    // 0x80045494: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80045498: addiu       $t1, $sp, 0x4C
    ctx->r9 = ADD32(ctx->r29, 0X4C);
    // 0x8004549C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800454A0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800454A4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800454A8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800454AC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x800454B0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800454B4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x800454B8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800454BC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800454C0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800454C4: addiu       $a1, $s0, 0x84
    ctx->r5 = ADD32(ctx->r16, 0X84);
    // 0x800454C8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800454CC: jal         0x80077960
    // 0x800454D0: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    func_80077960(rdram, ctx);
        goto after_11;
    // 0x800454D0: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    after_11:
    // 0x800454D4: addu        $s2, $s2, $s5
    ctx->r18 = ADD32(ctx->r18, ctx->r21);
    // 0x800454D8: andi        $t8, $s2, 0xFFFF
    ctx->r24 = ctx->r18 & 0XFFFF;
    // 0x800454DC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800454E0: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    // 0x800454E4: addiu       $a1, $a1, -0x4AF4
    ctx->r5 = ADD32(ctx->r5, -0X4AF4);
    // 0x800454E8: jal         0x800B62D4
    // 0x800454EC: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    sprintf_recomp(rdram, ctx);
        goto after_12;
    // 0x800454EC: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_12:
    // 0x800454F0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800454F4: addiu       $t9, $sp, 0x4C
    ctx->r25 = ADD32(ctx->r29, 0X4C);
    // 0x800454F8: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x800454FC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80045500: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x80045504: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80045508: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8004550C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80045510: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80045514: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80045518: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004551C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80045520: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x80045524: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80045528: jal         0x80077960
    // 0x8004552C: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    func_80077960(rdram, ctx);
        goto after_13;
    // 0x8004552C: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    after_13:
    // 0x80045530: addu        $s2, $s2, $s4
    ctx->r18 = ADD32(ctx->r18, ctx->r20);
    // 0x80045534: andi        $t4, $s2, 0xFFFF
    ctx->r12 = ctx->r18 & 0XFFFF;
    // 0x80045538: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004553C: or          $s2, $t4, $zero
    ctx->r18 = ctx->r12 | 0;
    // 0x80045540: addiu       $a1, $a1, -0x4AF0
    ctx->r5 = ADD32(ctx->r5, -0X4AF0);
    // 0x80045544: jal         0x800B62D4
    // 0x80045548: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    sprintf_recomp(rdram, ctx);
        goto after_14;
    // 0x80045548: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_14:
    // 0x8004554C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80045550: addiu       $t5, $sp, 0x4C
    ctx->r13 = ADD32(ctx->r29, 0X4C);
    // 0x80045554: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80045558: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004555C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80045560: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80045564: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80045568: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8004556C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80045570: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80045574: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80045578: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004557C: addiu       $a1, $s0, 0x84
    ctx->r5 = ADD32(ctx->r16, 0X84);
    // 0x80045580: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80045584: jal         0x80077960
    // 0x80045588: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    func_80077960(rdram, ctx);
        goto after_15;
    // 0x80045588: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    after_15:
    // 0x8004558C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80045590: jal         0x8005BE40
    // 0x80045594: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_16;
    // 0x80045594: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_16:
L_80045598:
    // 0x80045598: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8004559C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x800455A0: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x800455A4: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x800455A8: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x800455AC: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x800455B0: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x800455B4: jr          $ra
    // 0x800455B8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x800455B8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_800455BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800455BC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800455C0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800455C4: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x800455C8: lw          $s0, 0x5E10($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5E10);
    // 0x800455CC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800455D0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x800455D4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x800455D8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x800455DC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x800455E0: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x800455E4: nop

    // 0x800455E8: bne         $t6, $zero, L_80045628
    if (ctx->r14 != 0) {
        // 0x800455EC: nop
    
            goto L_80045628;
    }
    // 0x800455EC: nop

    // 0x800455F0: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x800455F4: nop

    // 0x800455F8: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x800455FC: nop

    // 0x80045600: lbu         $t9, 0x20($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X20);
    // 0x80045604: nop

    // 0x80045608: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8004560C: bne         $t0, $zero, L_80045628
    if (ctx->r8 != 0) {
        // 0x80045610: nop
    
            goto L_80045628;
    }
    // 0x80045610: nop

    // 0x80045614: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x80045618: nop

    // 0x8004561C: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x80045620: jal         0x800773A4
    // 0x80045624: nop

    func_800773A4(rdram, ctx);
        goto after_0;
    // 0x80045624: nop

    after_0:
L_80045628:
    // 0x80045628: jal         0x800A3AF0
    // 0x8004562C: nop

    func_800A3AF0(rdram, ctx);
        goto after_1;
    // 0x8004562C: nop

    after_1:
    // 0x80045630: lhu         $t2, 0x2($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X2);
    // 0x80045634: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x80045638: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8004563C: addu        $t3, $t2, $s1
    ctx->r11 = ADD32(ctx->r10, ctx->r17);
    // 0x80045640: slt         $at, $t3, $at
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80045644: beq         $at, $zero, L_80045660
    if (ctx->r1 == 0) {
        // 0x80045648: nop
    
            goto L_80045660;
    }
    // 0x80045648: nop

    // 0x8004564C: lhu         $t4, 0x2($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X2);
    // 0x80045650: nop

    // 0x80045654: addu        $t5, $t4, $s1
    ctx->r13 = ADD32(ctx->r12, ctx->r17);
    // 0x80045658: b           L_80045668
    // 0x8004565C: sh          $t5, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r13;
        goto L_80045668;
    // 0x8004565C: sh          $t5, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r13;
L_80045660:
    // 0x80045660: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x80045664: sh          $t6, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r14;
L_80045668:
    // 0x80045668: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x8004566C: nop

    // 0x80045670: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80045674: nop

    // 0x80045678: lbu         $t9, 0x20($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X20);
    // 0x8004567C: nop

    // 0x80045680: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80045684: beq         $t0, $zero, L_800456FC
    if (ctx->r8 == 0) {
        // 0x80045688: nop
    
            goto L_800456FC;
    }
    // 0x80045688: nop

    // 0x8004568C: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x80045690: lhu         $t1, 0x2($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X2);
    // 0x80045694: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80045698: nop

    // 0x8004569C: lhu         $t4, 0x2($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X2);
    // 0x800456A0: nop

    // 0x800456A4: slt         $at, $t1, $t4
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800456A8: bne         $at, $zero, L_800456FC
    if (ctx->r1 != 0) {
        // 0x800456AC: nop
    
            goto L_800456FC;
    }
    // 0x800456AC: nop

    // 0x800456B0: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x800456B4: nop

    // 0x800456B8: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x800456BC: jal         0x800773B8
    // 0x800456C0: nop

    func_800773B8(rdram, ctx);
        goto after_2;
    // 0x800456C0: nop

    after_2:
    // 0x800456C4: lb          $t6, 0x1($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X1);
    // 0x800456C8: nop

    // 0x800456CC: slti        $at, $t6, 0x37
    ctx->r1 = SIGNED(ctx->r14) < 0X37 ? 1 : 0;
    // 0x800456D0: beq         $at, $zero, L_800456EC
    if (ctx->r1 == 0) {
        // 0x800456D4: nop
    
            goto L_800456EC;
    }
    // 0x800456D4: nop

    // 0x800456D8: lb          $t7, 0x1($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X1);
    // 0x800456DC: nop

    // 0x800456E0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800456E4: b           L_800456F4
    // 0x800456E8: sb          $t8, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r24;
        goto L_800456F4;
    // 0x800456E8: sb          $t8, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r24;
L_800456EC:
    // 0x800456EC: addiu       $t9, $zero, 0x31
    ctx->r25 = ADD32(0, 0X31);
    // 0x800456F0: sb          $t9, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r25;
L_800456F4:
    // 0x800456F4: addiu       $t0, $zero, 0xD
    ctx->r8 = ADD32(0, 0XD);
    // 0x800456F8: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_800456FC:
    // 0x800456FC: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x80045700: nop

    // 0x80045704: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x80045708: jal         0x80077098
    // 0x8004570C: nop

    func_80077098(rdram, ctx);
        goto after_3;
    // 0x8004570C: nop

    after_3:
    // 0x80045710: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80045714: jal         0x8005BBFC
    // 0x80045718: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_4;
    // 0x80045718: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_4:
    // 0x8004571C: lbu         $t3, 0x0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X0);
    // 0x80045720: nop

    // 0x80045724: bne         $t3, $zero, L_800457BC
    if (ctx->r11 != 0) {
        // 0x80045728: nop
    
            goto L_800457BC;
    }
    // 0x80045728: nop

    // 0x8004572C: lb          $t1, 0x1($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X1);
    // 0x80045730: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x80045734: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80045738: addu        $a2, $a2, $t4
    ctx->r6 = ADD32(ctx->r6, ctx->r12);
    // 0x8004573C: lw          $a2, -0x880($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X880);
    // 0x80045740: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80045744: addiu       $a1, $a1, -0x4AE8
    ctx->r5 = ADD32(ctx->r5, -0X4AE8);
    // 0x80045748: jal         0x800B62D4
    // 0x8004574C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_5;
    // 0x8004574C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x80045750: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x80045754: jal         0x80077D88
    // 0x80045758: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_80077D88(rdram, ctx);
        goto after_6;
    // 0x80045758: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_6:
    // 0x8004575C: bgez        $v0, L_8004576C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80045760: sra         $t5, $v0, 1
        ctx->r13 = S32(SIGNED(ctx->r2) >> 1);
            goto L_8004576C;
    }
    // 0x80045760: sra         $t5, $v0, 1
    ctx->r13 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80045764: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x80045768: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_8004576C:
    // 0x8004576C: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x80045770: subu        $s4, $t6, $t5
    ctx->r20 = SUB32(ctx->r14, ctx->r13);
    // 0x80045774: andi        $t7, $s4, 0xFFFF
    ctx->r15 = ctx->r20 & 0XFFFF;
    // 0x80045778: or          $s4, $t7, $zero
    ctx->r20 = ctx->r15 | 0;
    // 0x8004577C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80045780: addiu       $t8, $sp, 0x48
    ctx->r24 = ADD32(ctx->r29, 0X48);
    // 0x80045784: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80045788: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004578C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80045790: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80045794: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80045798: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8004579C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800457A0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800457A4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800457A8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800457AC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x800457B0: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x800457B4: jal         0x80077960
    // 0x800457B8: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    func_80077960(rdram, ctx);
        goto after_7;
    // 0x800457B8: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    after_7:
L_800457BC:
    // 0x800457BC: lh          $t1, 0xF8($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XF8);
    // 0x800457C0: lhu         $s2, 0x80($s0)
    ctx->r18 = MEM_HU(ctx->r16, 0X80);
    // 0x800457C4: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x800457C8: addu        $s3, $s2, $t4
    ctx->r19 = ADD32(ctx->r18, ctx->r12);
    // 0x800457CC: andi        $t6, $s3, 0xFFFF
    ctx->r14 = ctx->r19 & 0XFFFF;
    // 0x800457D0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800457D4: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x800457D8: addiu       $s4, $zero, 0x82
    ctx->r20 = ADD32(0, 0X82);
    // 0x800457DC: addiu       $a1, $a1, -0x4AE4
    ctx->r5 = ADD32(ctx->r5, -0X4AE4);
    // 0x800457E0: jal         0x800B62D4
    // 0x800457E4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_8;
    // 0x800457E4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_8:
    // 0x800457E8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800457EC: addiu       $t5, $sp, 0x48
    ctx->r13 = ADD32(ctx->r29, 0X48);
    // 0x800457F0: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x800457F4: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x800457F8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800457FC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80045800: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80045804: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80045808: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8004580C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80045810: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80045814: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80045818: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x8004581C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80045820: jal         0x80077960
    // 0x80045824: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    func_80077960(rdram, ctx);
        goto after_9;
    // 0x80045824: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    after_9:
    // 0x80045828: addu        $s4, $s4, $s2
    ctx->r20 = ADD32(ctx->r20, ctx->r18);
    // 0x8004582C: andi        $t2, $s4, 0xFFFF
    ctx->r10 = ctx->r20 & 0XFFFF;
    // 0x80045830: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80045834: or          $s4, $t2, $zero
    ctx->r20 = ctx->r10 | 0;
    // 0x80045838: addiu       $a1, $a1, -0x4AE0
    ctx->r5 = ADD32(ctx->r5, -0X4AE0);
    // 0x8004583C: jal         0x800B62D4
    // 0x80045840: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_10;
    // 0x80045840: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_10:
    // 0x80045844: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80045848: addiu       $t3, $sp, 0x48
    ctx->r11 = ADD32(ctx->r29, 0X48);
    // 0x8004584C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80045850: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80045854: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80045858: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004585C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80045860: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80045864: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80045868: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8004586C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80045870: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80045874: addiu       $a1, $s0, 0x84
    ctx->r5 = ADD32(ctx->r16, 0X84);
    // 0x80045878: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8004587C: jal         0x80077960
    // 0x80045880: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    func_80077960(rdram, ctx);
        goto after_11;
    // 0x80045880: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    after_11:
    // 0x80045884: addu        $s4, $s4, $s3
    ctx->r20 = ADD32(ctx->r20, ctx->r19);
    // 0x80045888: andi        $t7, $s4, 0xFFFF
    ctx->r15 = ctx->r20 & 0XFFFF;
    // 0x8004588C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80045890: or          $s4, $t7, $zero
    ctx->r20 = ctx->r15 | 0;
    // 0x80045894: addiu       $a1, $a1, -0x4AD8
    ctx->r5 = ADD32(ctx->r5, -0X4AD8);
    // 0x80045898: jal         0x800B62D4
    // 0x8004589C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_12;
    // 0x8004589C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_12:
    // 0x800458A0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800458A4: addiu       $t8, $sp, 0x48
    ctx->r24 = ADD32(ctx->r29, 0X48);
    // 0x800458A8: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x800458AC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800458B0: addiu       $t2, $zero, 0x7F
    ctx->r10 = ADD32(0, 0X7F);
    // 0x800458B4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800458B8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x800458BC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x800458C0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800458C4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800458C8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800458CC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800458D0: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x800458D4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x800458D8: jal         0x80077960
    // 0x800458DC: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    func_80077960(rdram, ctx);
        goto after_13;
    // 0x800458DC: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    after_13:
    // 0x800458E0: addu        $s4, $s4, $s2
    ctx->r20 = ADD32(ctx->r20, ctx->r18);
    // 0x800458E4: andi        $t1, $s4, 0xFFFF
    ctx->r9 = ctx->r20 & 0XFFFF;
    // 0x800458E8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800458EC: or          $s4, $t1, $zero
    ctx->r20 = ctx->r9 | 0;
    // 0x800458F0: addiu       $a1, $a1, -0x4AD4
    ctx->r5 = ADD32(ctx->r5, -0X4AD4);
    // 0x800458F4: jal         0x800B62D4
    // 0x800458F8: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_14;
    // 0x800458F8: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_14:
    // 0x800458FC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80045900: addiu       $t4, $sp, 0x48
    ctx->r12 = ADD32(ctx->r29, 0X48);
    // 0x80045904: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80045908: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004590C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80045910: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80045914: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80045918: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8004591C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80045920: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80045924: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80045928: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004592C: addiu       $a1, $s0, 0x84
    ctx->r5 = ADD32(ctx->r16, 0X84);
    // 0x80045930: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80045934: jal         0x80077960
    // 0x80045938: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    func_80077960(rdram, ctx);
        goto after_15;
    // 0x80045938: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    after_15:
    // 0x8004593C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80045940: jal         0x8005BE40
    // 0x80045944: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_16;
    // 0x80045944: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_16:
    // 0x80045948: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8004594C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80045950: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80045954: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80045958: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8004595C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80045960: jr          $ra
    // 0x80045964: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80045964: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80045968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045968: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004596C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80045970: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x80045974: lw          $s0, 0x5E10($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5E10);
    // 0x80045978: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004597C: beq         $s0, $zero, L_80045BC8
    if (ctx->r16 == 0) {
        // 0x80045980: sw          $s1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r17;
            goto L_80045BC8;
    }
    // 0x80045980: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80045984: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x80045988: nop

    // 0x8004598C: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x80045990: sltiu       $at, $t7, 0xB
    ctx->r1 = ctx->r15 < 0XB ? 1 : 0;
    // 0x80045994: beq         $at, $zero, L_80045B5C
    if (ctx->r1 == 0) {
        // 0x80045998: nop
    
            goto L_80045B5C;
    }
    // 0x80045998: nop

    // 0x8004599C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800459A0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800459A4: addu        $at, $at, $t7
    gpr jr_addend_800459B0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800459A8: lw          $t7, -0x4A68($at)
    ctx->r15 = ADD32(ctx->r1, -0X4A68);
    // 0x800459AC: nop

    // 0x800459B0: jr          $t7
    // 0x800459B4: nop

    switch (jr_addend_800459B0 >> 2) {
        case 0: goto L_800459B8; break;
        case 1: goto L_800459EC; break;
        case 2: goto L_80045A1C; break;
        case 3: goto L_80045B5C; break;
        case 4: goto L_80045A80; break;
        case 5: goto L_80045ABC; break;
        case 6: goto L_80045AEC; break;
        case 7: goto L_80045B5C; break;
        case 8: goto L_80045B5C; break;
        case 9: goto L_80045B0C; break;
        case 10: goto L_80045B3C; break;
        default: switch_error(__func__, 0x800459B0, 0x800DB598);
    }
    // 0x800459B4: nop

L_800459B8:
    // 0x800459B8: jal         0x80044748
    // 0x800459BC: nop

    func_80044748(rdram, ctx);
        goto after_0;
    // 0x800459BC: nop

    after_0:
    // 0x800459C0: lhu         $t8, 0x2($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2);
    // 0x800459C4: nop

    // 0x800459C8: slti        $at, $t8, 0x5D2
    ctx->r1 = SIGNED(ctx->r24) < 0X5D2 ? 1 : 0;
    // 0x800459CC: bne         $at, $zero, L_80045BC8
    if (ctx->r1 != 0) {
        // 0x800459D0: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80045BC8;
    }
    // 0x800459D0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800459D4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800459D8: jal         0x8007EFB0
    // 0x800459DC: nop

    func_8007EFB0(rdram, ctx);
        goto after_1;
    // 0x800459DC: nop

    after_1:
    // 0x800459E0: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800459E4: b           L_80045BC8
    // 0x800459E8: sb          $t9, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r25;
        goto L_80045BC8;
    // 0x800459E8: sb          $t9, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r25;
L_800459EC:
    // 0x800459EC: jal         0x80044748
    // 0x800459F0: nop

    func_80044748(rdram, ctx);
        goto after_2;
    // 0x800459F0: nop

    after_2:
    // 0x800459F4: jal         0x8007ED00
    // 0x800459F8: nop

    func_8007ED00(rdram, ctx);
        goto after_3;
    // 0x800459F8: nop

    after_3:
    // 0x800459FC: beq         $v0, $zero, L_80045BC8
    if (ctx->r2 == 0) {
        // 0x80045A00: lui         $at, 0x4234
        ctx->r1 = S32(0X4234 << 16);
            goto L_80045BC8;
    }
    // 0x80045A00: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80045A04: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80045A08: jal         0x8007F288
    // 0x80045A0C: nop

    func_8007F288(rdram, ctx);
        goto after_4;
    // 0x80045A0C: nop

    after_4:
    // 0x80045A10: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x80045A14: b           L_80045BC8
    // 0x80045A18: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_80045BC8;
    // 0x80045A18: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_80045A1C:
    // 0x80045A1C: jal         0x80044ED0
    // 0x80045A20: nop

    func_80044ED0(rdram, ctx);
        goto after_5;
    // 0x80045A20: nop

    after_5:
    // 0x80045A24: jal         0x8007EFE4
    // 0x80045A28: nop

    func_8007EFE4(rdram, ctx);
        goto after_6;
    // 0x80045A28: nop

    after_6:
    // 0x80045A2C: beq         $v0, $zero, L_80045BC8
    if (ctx->r2 == 0) {
        // 0x80045A30: nop
    
            goto L_80045BC8;
    }
    // 0x80045A30: nop

    // 0x80045A34: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x80045A38: lb          $a0, 0x1($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X1);
    // 0x80045A3C: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x80045A40: jal         0x80046218
    // 0x80045A44: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
    func_80046218(rdram, ctx);
        goto after_7;
    // 0x80045A44: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
    after_7:
    // 0x80045A48: sll         $s1, $v0, 24
    ctx->r17 = S32(ctx->r2 << 24);
    // 0x80045A4C: sra         $t2, $s1, 24
    ctx->r10 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80045A50: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x80045A54: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80045A58: addu        $t3, $t3, $s1
    ctx->r11 = ADD32(ctx->r11, ctx->r17);
    // 0x80045A5C: lbu         $t3, -0x4A0($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X4A0);
    // 0x80045A60: lh          $t5, 0xFA($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XFA);
    // 0x80045A64: addiu       $t4, $t3, -0x2
    ctx->r12 = ADD32(ctx->r11, -0X2);
    // 0x80045A68: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80045A6C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80045A70: mflo        $t6
    ctx->r14 = lo;
    // 0x80045A74: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80045A78: b           L_80045BC8
    // 0x80045A7C: sh          $t7, 0x1F6C($at)
    MEM_H(0X1F6C, ctx->r1) = ctx->r15;
        goto L_80045BC8;
    // 0x80045A7C: sh          $t7, 0x1F6C($at)
    MEM_H(0X1F6C, ctx->r1) = ctx->r15;
L_80045A80:
    // 0x80045A80: jal         0x80044ED0
    // 0x80045A84: nop

    func_80044ED0(rdram, ctx);
        goto after_8;
    // 0x80045A84: nop

    after_8:
    // 0x80045A88: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80045A8C: lhu         $t9, 0x1F6C($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X1F6C);
    // 0x80045A90: lhu         $t8, 0x2($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2);
    // 0x80045A94: nop

    // 0x80045A98: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80045A9C: bne         $at, $zero, L_80045BC8
    if (ctx->r1 != 0) {
        // 0x80045AA0: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_80045BC8;
    }
    // 0x80045AA0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80045AA4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80045AA8: jal         0x8007E9F8
    // 0x80045AAC: nop

    func_8007E9F8(rdram, ctx);
        goto after_9;
    // 0x80045AAC: nop

    after_9:
    // 0x80045AB0: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80045AB4: b           L_80045BC8
    // 0x80045AB8: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_80045BC8;
    // 0x80045AB8: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_80045ABC:
    // 0x80045ABC: jal         0x80044ED0
    // 0x80045AC0: nop

    func_80044ED0(rdram, ctx);
        goto after_10;
    // 0x80045AC0: nop

    after_10:
    // 0x80045AC4: jal         0x8007E750
    // 0x80045AC8: nop

    func_8007E750(rdram, ctx);
        goto after_11;
    // 0x80045AC8: nop

    after_11:
    // 0x80045ACC: beq         $v0, $zero, L_80045BC8
    if (ctx->r2 == 0) {
        // 0x80045AD0: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_80045BC8;
    }
    // 0x80045AD0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80045AD4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80045AD8: jal         0x8007ECC8
    // 0x80045ADC: nop

    func_8007ECC8(rdram, ctx);
        goto after_12;
    // 0x80045ADC: nop

    after_12:
    // 0x80045AE0: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x80045AE4: b           L_80045BC8
    // 0x80045AE8: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
        goto L_80045BC8;
    // 0x80045AE8: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_80045AEC:
    // 0x80045AEC: jal         0x80045190
    // 0x80045AF0: nop

    func_80045190(rdram, ctx);
        goto after_13;
    // 0x80045AF0: nop

    after_13:
    // 0x80045AF4: jal         0x8007EA2C
    // 0x80045AF8: nop

    func_8007EA2C(rdram, ctx);
        goto after_14;
    // 0x80045AF8: nop

    after_14:
    // 0x80045AFC: beq         $v0, $zero, L_80045BC8
    if (ctx->r2 == 0) {
        // 0x80045B00: nop
    
            goto L_80045BC8;
    }
    // 0x80045B00: nop

    // 0x80045B04: b           L_80045BC8
    // 0x80045B08: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_80045BC8;
    // 0x80045B08: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80045B0C:
    // 0x80045B0C: jal         0x80045190
    // 0x80045B10: nop

    func_80045190(rdram, ctx);
        goto after_15;
    // 0x80045B10: nop

    after_15:
    // 0x80045B14: jal         0x8007E750
    // 0x80045B18: nop

    func_8007E750(rdram, ctx);
        goto after_16;
    // 0x80045B18: nop

    after_16:
    // 0x80045B1C: beq         $v0, $zero, L_80045BC8
    if (ctx->r2 == 0) {
        // 0x80045B20: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_80045BC8;
    }
    // 0x80045B20: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80045B24: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80045B28: jal         0x8007ECC8
    // 0x80045B2C: nop

    func_8007ECC8(rdram, ctx);
        goto after_17;
    // 0x80045B2C: nop

    after_17:
    // 0x80045B30: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x80045B34: b           L_80045BC8
    // 0x80045B38: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_80045BC8;
    // 0x80045B38: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_80045B3C:
    // 0x80045B3C: jal         0x800455BC
    // 0x80045B40: nop

    func_800455BC(rdram, ctx);
        goto after_18;
    // 0x80045B40: nop

    after_18:
    // 0x80045B44: jal         0x8007EA2C
    // 0x80045B48: nop

    func_8007EA2C(rdram, ctx);
        goto after_19;
    // 0x80045B48: nop

    after_19:
    // 0x80045B4C: beq         $v0, $zero, L_80045BC8
    if (ctx->r2 == 0) {
        // 0x80045B50: nop
    
            goto L_80045BC8;
    }
    // 0x80045B50: nop

    // 0x80045B54: b           L_80045BC8
    // 0x80045B58: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_80045BC8;
    // 0x80045B58: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80045B5C:
    // 0x80045B5C: lb          $t3, 0x1($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X1);
    // 0x80045B60: nop

    // 0x80045B64: slti        $at, $t3, 0x31
    ctx->r1 = SIGNED(ctx->r11) < 0X31 ? 1 : 0;
    // 0x80045B68: bne         $at, $zero, L_80045B80
    if (ctx->r1 != 0) {
        // 0x80045B6C: nop
    
            goto L_80045B80;
    }
    // 0x80045B6C: nop

    // 0x80045B70: jal         0x800455BC
    // 0x80045B74: nop

    func_800455BC(rdram, ctx);
        goto after_20;
    // 0x80045B74: nop

    after_20:
    // 0x80045B78: b           L_80045BC8
    // 0x80045B7C: nop

        goto L_80045BC8;
    // 0x80045B7C: nop

L_80045B80:
    // 0x80045B80: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x80045B84: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80045B88: lb          $t5, -0x7C8($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X7C8);
    // 0x80045B8C: lb          $t4, -0x7C4($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X7C4);
    // 0x80045B90: nop

    // 0x80045B94: bne         $t4, $t5, L_80045BC0
    if (ctx->r12 != ctx->r13) {
        // 0x80045B98: nop
    
            goto L_80045BC0;
    }
    // 0x80045B98: nop

    // 0x80045B9C: lb          $a0, 0x1($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X1);
    // 0x80045BA0: jal         0x8004619C
    // 0x80045BA4: nop

    func_8004619C(rdram, ctx);
        goto after_21;
    // 0x80045BA4: nop

    after_21:
    // 0x80045BA8: beq         $v0, $zero, L_80045BC0
    if (ctx->r2 == 0) {
        // 0x80045BAC: nop
    
            goto L_80045BC0;
    }
    // 0x80045BAC: nop

    // 0x80045BB0: jal         0x80045190
    // 0x80045BB4: nop

    func_80045190(rdram, ctx);
        goto after_22;
    // 0x80045BB4: nop

    after_22:
    // 0x80045BB8: b           L_80045BC8
    // 0x80045BBC: nop

        goto L_80045BC8;
    // 0x80045BBC: nop

L_80045BC0:
    // 0x80045BC0: jal         0x80044748
    // 0x80045BC4: nop

    func_80044748(rdram, ctx);
        goto after_23;
    // 0x80045BC4: nop

    after_23:
L_80045BC8:
    // 0x80045BC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80045BCC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80045BD0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80045BD4: jr          $ra
    // 0x80045BD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80045BD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80045BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045BDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80045BE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80045BE4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80045BE8: jal         0x8004A34C
    // 0x80045BEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x80045BEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80045BF0: jal         0x8007E03C
    // 0x80045BF4: addiu       $a0, $zero, 0xFC
    ctx->r4 = ADD32(0, 0XFC);
    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x80045BF4: addiu       $a0, $zero, 0xFC
    ctx->r4 = ADD32(0, 0XFC);
    after_1:
    // 0x80045BF8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80045BFC: sw          $v0, 0x5E10($at)
    MEM_W(0X5E10, ctx->r1) = ctx->r2;
    // 0x80045C00: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x80045C04: lw          $s0, 0x5E10($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5E10);
    // 0x80045C08: nop

    // 0x80045C0C: bne         $s0, $zero, L_80045C28
    if (ctx->r16 != 0) {
        // 0x80045C10: nop
    
            goto L_80045C28;
    }
    // 0x80045C10: nop

    // 0x80045C14: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80045C18: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80045C1C: addiu       $a1, $a1, -0x4AB8
    ctx->r5 = ADD32(ctx->r5, -0X4AB8);
    // 0x80045C20: jal         0x80083560
    // 0x80045C24: addiu       $a0, $a0, -0x4ACC
    ctx->r4 = ADD32(ctx->r4, -0X4ACC);
    Fault_Assert(rdram, ctx);
        goto after_2;
    // 0x80045C24: addiu       $a0, $a0, -0x4ACC
    ctx->r4 = ADD32(ctx->r4, -0X4ACC);
    after_2:
L_80045C28:
    // 0x80045C28: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80045C2C: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x80045C30: jal         0x80077408
    // 0x80045C34: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80077408(rdram, ctx);
        goto after_3;
    // 0x80045C34: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x80045C38: addiu       $a0, $s0, 0x84
    ctx->r4 = ADD32(ctx->r16, 0X84);
    // 0x80045C3C: jal         0x80077408
    // 0x80045C40: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80077408(rdram, ctx);
        goto after_4;
    // 0x80045C40: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_4:
    // 0x80045C44: lb          $t6, 0x2B($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X2B);
    // 0x80045C48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80045C4C: bne         $t6, $at, L_80045C64
    if (ctx->r14 != ctx->r1) {
        // 0x80045C50: nop
    
            goto L_80045C64;
    }
    // 0x80045C50: nop

    // 0x80045C54: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x80045C58: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
    // 0x80045C5C: b           L_80045C78
    // 0x80045C60: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
        goto L_80045C78;
    // 0x80045C60: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
L_80045C64:
    // 0x80045C64: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80045C68: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
    // 0x80045C6C: lb          $t9, 0x2B($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X2B);
    // 0x80045C70: nop

    // 0x80045C74: sb          $t9, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r25;
L_80045C78:
    // 0x80045C78: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80045C7C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80045C80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80045C84: sb          $t0, 0x1F6E($at)
    MEM_B(0X1F6E, ctx->r1) = ctx->r8;
    // 0x80045C88: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80045C8C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80045C90: sb          $zero, 0x1F6F($at)
    MEM_B(0X1F6F, ctx->r1) = 0;
    // 0x80045C94: jr          $ra
    // 0x80045C98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80045C98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80045C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045C9C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80045CA0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80045CA4: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x80045CA8: lw          $s0, 0x5E10($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5E10);
    // 0x80045CAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80045CB0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80045CB4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80045CB8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80045CBC: jal         0x800773D0
    // 0x80045CC0: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    func_800773D0(rdram, ctx);
        goto after_0;
    // 0x80045CC0: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    after_0:
    // 0x80045CC4: jal         0x800773D0
    // 0x80045CC8: addiu       $a0, $s0, 0x84
    ctx->r4 = ADD32(ctx->r16, 0X84);
    func_800773D0(rdram, ctx);
        goto after_1;
    // 0x80045CC8: addiu       $a0, $s0, 0x84
    ctx->r4 = ADD32(ctx->r16, 0X84);
    after_1:
    // 0x80045CCC: jal         0x80044218
    // 0x80045CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80044218(rdram, ctx);
        goto after_2;
    // 0x80045CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80045CD4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x80045CD8: lbu         $s1, 0x0($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X0);
    // 0x80045CDC: lbu         $s2, 0x1($s0)
    ctx->r18 = MEM_BU(ctx->r16, 0X1);
    // 0x80045CE0: lw          $a0, 0x5E10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5E10);
    // 0x80045CE4: jal         0x8007E328
    // 0x80045CE8: nop

    func_8007E328(rdram, ctx);
        goto after_3;
    // 0x80045CE8: nop

    after_3:
    // 0x80045CEC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80045CF0: jal         0x8004A34C
    // 0x80045CF4: sw          $zero, 0x5E10($at)
    MEM_W(0X5E10, ctx->r1) = 0;
    func_8004A34C(rdram, ctx);
        goto after_4;
    // 0x80045CF4: sw          $zero, 0x5E10($at)
    MEM_W(0X5E10, ctx->r1) = 0;
    after_4:
    // 0x80045CF8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80045CFC: sb          $zero, 0x3CF0($at)
    MEM_B(0X3CF0, ctx->r1) = 0;
    // 0x80045D00: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80045D04: bne         $s1, $at, L_80045D44
    if (ctx->r17 != ctx->r1) {
        // 0x80045D08: nop
    
            goto L_80045D44;
    }
    // 0x80045D08: nop

    // 0x80045D0C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80045D10: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80045D14: sb          $t6, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r14;
    // 0x80045D18: jal         0x80046218
    // 0x80045D1C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80046218(rdram, ctx);
        goto after_5;
    // 0x80045D1C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_5:
    // 0x80045D20: sll         $s3, $v0, 24
    ctx->r19 = S32(ctx->r2 << 24);
    // 0x80045D24: sra         $t7, $s3, 24
    ctx->r15 = S32(SIGNED(ctx->r19) >> 24);
    // 0x80045D28: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x80045D2C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80045D30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80045D34: jal         0x800472F0
    // 0x80045D38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800472F0(rdram, ctx);
        goto after_6;
    // 0x80045D38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80045D3C: b           L_80045E28
    // 0x80045D40: nop

        goto L_80045E28;
    // 0x80045D40: nop

L_80045D44:
    // 0x80045D44: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80045D48: lbu         $t8, 0x9F0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X9F0);
    // 0x80045D4C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80045D50: bne         $t8, $at, L_80045D88
    if (ctx->r24 != ctx->r1) {
        // 0x80045D54: nop
    
            goto L_80045D88;
    }
    // 0x80045D54: nop

    // 0x80045D58: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80045D5C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80045D60: addiu       $a1, $a1, 0x5808
    ctx->r5 = ADD32(ctx->r5, 0X5808);
    // 0x80045D64: jal         0x8009035C
    // 0x80045D68: addiu       $a0, $a0, 0x5850
    ctx->r4 = ADD32(ctx->r4, 0X5850);
    func_8009035C(rdram, ctx);
        goto after_7;
    // 0x80045D68: addiu       $a0, $a0, 0x5850
    ctx->r4 = ADD32(ctx->r4, 0X5850);
    after_7:
    // 0x80045D6C: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80045D70: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80045D74: sb          $t9, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r25;
    // 0x80045D78: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80045D7C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80045D80: b           L_80045E28
    // 0x80045D84: sb          $t0, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r8;
        goto L_80045E28;
    // 0x80045D84: sb          $t0, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r8;
L_80045D88:
    // 0x80045D88: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80045D8C: lbu         $t1, 0x9F0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X9F0);
    // 0x80045D90: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80045D94: bne         $t1, $at, L_80045DCC
    if (ctx->r9 != ctx->r1) {
        // 0x80045D98: nop
    
            goto L_80045DCC;
    }
    // 0x80045D98: nop

    // 0x80045D9C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80045DA0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80045DA4: addiu       $a1, $a1, 0x5CE8
    ctx->r5 = ADD32(ctx->r5, 0X5CE8);
    // 0x80045DA8: jal         0x8009035C
    // 0x80045DAC: addiu       $a0, $a0, 0x5D48
    ctx->r4 = ADD32(ctx->r4, 0X5D48);
    func_8009035C(rdram, ctx);
        goto after_8;
    // 0x80045DAC: addiu       $a0, $a0, 0x5D48
    ctx->r4 = ADD32(ctx->r4, 0X5D48);
    after_8:
    // 0x80045DB0: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80045DB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80045DB8: sb          $t2, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r10;
    // 0x80045DBC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80045DC0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80045DC4: b           L_80045E28
    // 0x80045DC8: sb          $t3, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r11;
        goto L_80045E28;
    // 0x80045DC8: sb          $t3, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r11;
L_80045DCC:
    // 0x80045DCC: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80045DD0: lbu         $t4, 0x9F0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X9F0);
    // 0x80045DD4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80045DD8: bne         $t4, $at, L_80045E04
    if (ctx->r12 != ctx->r1) {
        // 0x80045DDC: nop
    
            goto L_80045E04;
    }
    // 0x80045DDC: nop

    // 0x80045DE0: jal         0x800905E8
    // 0x80045DE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800905E8(rdram, ctx);
        goto after_9;
    // 0x80045DE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x80045DE8: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80045DEC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80045DF0: sb          $t5, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r13;
    // 0x80045DF4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80045DF8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80045DFC: b           L_80045E28
    // 0x80045E00: sb          $t6, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r14;
        goto L_80045E28;
    // 0x80045E00: sb          $t6, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r14;
L_80045E04:
    // 0x80045E04: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80045E08: jal         0x80051618
    // 0x80045E0C: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    func_80051618(rdram, ctx);
        goto after_10;
    // 0x80045E0C: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    after_10:
    // 0x80045E10: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x80045E14: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80045E18: sb          $t7, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r15;
    // 0x80045E1C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80045E20: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80045E24: sb          $t8, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r24;
L_80045E28:
    // 0x80045E28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80045E2C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80045E30: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80045E34: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80045E38: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80045E3C: jr          $ra
    // 0x80045E40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80045E40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80045E44: nop

    // 0x80045E48: nop

    // 0x80045E4C: nop

;}
RECOMP_FUNC void func_80045E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045E50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80045E54: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80045E58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80045E5C: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x80045E60: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80045E64: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80045E68: jal         0x8007BCB4
    // 0x80045E6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8007BCB4(rdram, ctx);
        goto after_0;
    // 0x80045E6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80045E70: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x80045E74: slti        $at, $s0, 0x30
    ctx->r1 = SIGNED(ctx->r16) < 0X30 ? 1 : 0;
    // 0x80045E78: beq         $at, $zero, L_80045EE0
    if (ctx->r1 == 0) {
        // 0x80045E7C: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_80045EE0;
    }
    // 0x80045E7C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80045E80: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x80045E84: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80045E88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80045E8C: lw          $t7, -0x798($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X798);
    // 0x80045E90: nop

    // 0x80045E94: sltu        $at, $s2, $t7
    ctx->r1 = ctx->r18 < ctx->r15 ? 1 : 0;
    // 0x80045E98: bne         $at, $zero, L_80045EE0
    if (ctx->r1 != 0) {
        // 0x80045E9C: nop
    
            goto L_80045EE0;
    }
    // 0x80045E9C: nop

L_80045EA0:
    // 0x80045EA0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80045EA4: sll         $t8, $s0, 24
    ctx->r24 = S32(ctx->r16 << 24);
    // 0x80045EA8: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80045EAC: sra         $t9, $s0, 24
    ctx->r25 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80045EB0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x80045EB4: slti        $at, $s0, 0x30
    ctx->r1 = SIGNED(ctx->r16) < 0X30 ? 1 : 0;
    // 0x80045EB8: beq         $at, $zero, L_80045EE0
    if (ctx->r1 == 0) {
        // 0x80045EBC: nop
    
            goto L_80045EE0;
    }
    // 0x80045EBC: nop

    // 0x80045EC0: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x80045EC4: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80045EC8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80045ECC: lw          $t1, -0x798($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X798);
    // 0x80045ED0: nop

    // 0x80045ED4: sltu        $at, $s2, $t1
    ctx->r1 = ctx->r18 < ctx->r9 ? 1 : 0;
    // 0x80045ED8: beq         $at, $zero, L_80045EA0
    if (ctx->r1 == 0) {
        // 0x80045EDC: nop
    
            goto L_80045EA0;
    }
    // 0x80045EDC: nop

L_80045EE0:
    // 0x80045EE0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80045EE4: sb          $s0, -0x7D0($at)
    MEM_B(-0X7D0, ctx->r1) = ctx->r16;
    // 0x80045EE8: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80045EEC: lb          $t2, -0x7D0($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X7D0);
    // 0x80045EF0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80045EF4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80045EF8: sb          $t2, -0x7CC($at)
    MEM_B(-0X7CC, ctx->r1) = ctx->r10;
    // 0x80045EFC: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x80045F00: beq         $at, $zero, L_80045F60
    if (ctx->r1 == 0) {
        // 0x80045F04: nop
    
            goto L_80045F60;
    }
    // 0x80045F04: nop

    // 0x80045F08: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x80045F0C: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x80045F10: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80045F14: lw          $t4, -0x6D8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X6D8);
    // 0x80045F18: nop

    // 0x80045F1C: sltu        $at, $s2, $t4
    ctx->r1 = ctx->r18 < ctx->r12 ? 1 : 0;
    // 0x80045F20: bne         $at, $zero, L_80045F60
    if (ctx->r1 != 0) {
        // 0x80045F24: nop
    
            goto L_80045F60;
    }
    // 0x80045F24: nop

L_80045F28:
    // 0x80045F28: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80045F2C: andi        $t5, $s1, 0xFF
    ctx->r13 = ctx->r17 & 0XFF;
    // 0x80045F30: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x80045F34: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x80045F38: beq         $at, $zero, L_80045F60
    if (ctx->r1 == 0) {
        // 0x80045F3C: nop
    
            goto L_80045F60;
    }
    // 0x80045F3C: nop

    // 0x80045F40: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x80045F44: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80045F48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80045F4C: lw          $t7, -0x6D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X6D8);
    // 0x80045F50: nop

    // 0x80045F54: sltu        $at, $s2, $t7
    ctx->r1 = ctx->r18 < ctx->r15 ? 1 : 0;
    // 0x80045F58: beq         $at, $zero, L_80045F28
    if (ctx->r1 == 0) {
        // 0x80045F5C: nop
    
            goto L_80045F28;
    }
    // 0x80045F5C: nop

L_80045F60:
    // 0x80045F60: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80045F64: bne         $s1, $at, L_80045F9C
    if (ctx->r17 != ctx->r1) {
        // 0x80045F68: nop
    
            goto L_80045F9C;
    }
    // 0x80045F68: nop

    // 0x80045F6C: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x80045F70: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80045F74: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80045F78: lw          $t9, -0x6D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6D8);
    // 0x80045F7C: nop

    // 0x80045F80: sltu        $at, $s2, $t9
    ctx->r1 = ctx->r18 < ctx->r25 ? 1 : 0;
    // 0x80045F84: bne         $at, $zero, L_80045F9C
    if (ctx->r1 != 0) {
        // 0x80045F88: nop
    
            goto L_80045F9C;
    }
    // 0x80045F88: nop

    // 0x80045F8C: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80045F90: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80045F94: b           L_80045FA4
    // 0x80045F98: sb          $t0, -0x7C8($at)
    MEM_B(-0X7C8, ctx->r1) = ctx->r8;
        goto L_80045FA4;
    // 0x80045F98: sb          $t0, -0x7C8($at)
    MEM_B(-0X7C8, ctx->r1) = ctx->r8;
L_80045F9C:
    // 0x80045F9C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80045FA0: sb          $s1, -0x7C8($at)
    MEM_B(-0X7C8, ctx->r1) = ctx->r17;
L_80045FA4:
    // 0x80045FA4: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80045FA8: lb          $t1, -0x7C8($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X7C8);
    // 0x80045FAC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80045FB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80045FB4: sb          $t1, -0x7C4($at)
    MEM_B(-0X7C4, ctx->r1) = ctx->r9;
    // 0x80045FB8: xori        $t2, $t1, 0x7
    ctx->r10 = ctx->r9 ^ 0X7;
    // 0x80045FBC: sltiu       $t2, $t2, 0x1
    ctx->r10 = ctx->r10 < 0X1 ? 1 : 0;
    // 0x80045FC0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80045FC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80045FC8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80045FCC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80045FD0: sb          $t2, -0x7C0($at)
    MEM_B(-0X7C0, ctx->r1) = ctx->r10;
    // 0x80045FD4: jr          $ra
    // 0x80045FD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80045FD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80045FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045FDC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80045FE0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80045FE4: lb          $t6, -0x7D0($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X7D0);
    // 0x80045FE8: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x80045FEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80045FF0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80045FF4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80045FF8: bne         $t6, $at, L_80046008
    if (ctx->r14 != ctx->r1) {
        // 0x80045FFC: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80046008;
    }
    // 0x80045FFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80046000: b           L_80046184
    // 0x80046004: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80046184;
    // 0x80046004: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80046008:
    // 0x80046008: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004600C: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x80046010: jal         0x8007BCB4
    // 0x80046014: nop

    func_8007BCB4(rdram, ctx);
        goto after_0;
    // 0x80046014: nop

    after_0:
    // 0x80046018: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8004601C: lb          $t7, -0x7D0($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X7D0);
    // 0x80046020: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80046024: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x80046028: sb          $t7, -0x7CC($at)
    MEM_B(-0X7CC, ctx->r1) = ctx->r15;
    // 0x8004602C: slti        $at, $s0, 0x30
    ctx->r1 = SIGNED(ctx->r16) < 0X30 ? 1 : 0;
    // 0x80046030: beq         $at, $zero, L_80046098
    if (ctx->r1 == 0) {
        // 0x80046034: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_80046098;
    }
    // 0x80046034: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80046038: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x8004603C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80046040: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80046044: lw          $t9, -0x798($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X798);
    // 0x80046048: nop

    // 0x8004604C: sltu        $at, $s2, $t9
    ctx->r1 = ctx->r18 < ctx->r25 ? 1 : 0;
    // 0x80046050: bne         $at, $zero, L_80046098
    if (ctx->r1 != 0) {
        // 0x80046054: nop
    
            goto L_80046098;
    }
    // 0x80046054: nop

L_80046058:
    // 0x80046058: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004605C: sll         $t0, $s0, 24
    ctx->r8 = S32(ctx->r16 << 24);
    // 0x80046060: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x80046064: sra         $t1, $s0, 24
    ctx->r9 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80046068: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x8004606C: slti        $at, $s0, 0x30
    ctx->r1 = SIGNED(ctx->r16) < 0X30 ? 1 : 0;
    // 0x80046070: beq         $at, $zero, L_80046098
    if (ctx->r1 == 0) {
        // 0x80046074: nop
    
            goto L_80046098;
    }
    // 0x80046074: nop

    // 0x80046078: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x8004607C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80046080: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80046084: lw          $t3, -0x798($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X798);
    // 0x80046088: nop

    // 0x8004608C: sltu        $at, $s2, $t3
    ctx->r1 = ctx->r18 < ctx->r11 ? 1 : 0;
    // 0x80046090: beq         $at, $zero, L_80046058
    if (ctx->r1 == 0) {
        // 0x80046094: nop
    
            goto L_80046058;
    }
    // 0x80046094: nop

L_80046098:
    // 0x80046098: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004609C: sb          $s0, -0x7D0($at)
    MEM_B(-0X7D0, ctx->r1) = ctx->r16;
    // 0x800460A0: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x800460A4: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x800460A8: lb          $t5, -0x7D0($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X7D0);
    // 0x800460AC: lb          $t4, -0x7CC($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X7CC);
    // 0x800460B0: nop

    // 0x800460B4: beq         $t4, $t5, L_80046180
    if (ctx->r12 == ctx->r13) {
        // 0x800460B8: nop
    
            goto L_80046180;
    }
    // 0x800460B8: nop

    // 0x800460BC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800460C0: lb          $t6, -0x7C8($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X7C8);
    // 0x800460C4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800460C8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800460CC: sb          $t6, -0x7C4($at)
    MEM_B(-0X7C4, ctx->r1) = ctx->r14;
    // 0x800460D0: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x800460D4: beq         $at, $zero, L_80046134
    if (ctx->r1 == 0) {
        // 0x800460D8: nop
    
            goto L_80046134;
    }
    // 0x800460D8: nop

    // 0x800460DC: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x800460E0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800460E4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800460E8: lw          $t8, -0x6D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6D8);
    // 0x800460EC: nop

    // 0x800460F0: sltu        $at, $s2, $t8
    ctx->r1 = ctx->r18 < ctx->r24 ? 1 : 0;
    // 0x800460F4: bne         $at, $zero, L_80046134
    if (ctx->r1 != 0) {
        // 0x800460F8: nop
    
            goto L_80046134;
    }
    // 0x800460F8: nop

L_800460FC:
    // 0x800460FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80046100: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x80046104: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x80046108: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x8004610C: beq         $at, $zero, L_80046134
    if (ctx->r1 == 0) {
        // 0x80046110: nop
    
            goto L_80046134;
    }
    // 0x80046110: nop

    // 0x80046114: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x80046118: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8004611C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80046120: lw          $t1, -0x6D8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X6D8);
    // 0x80046124: nop

    // 0x80046128: sltu        $at, $s2, $t1
    ctx->r1 = ctx->r18 < ctx->r9 ? 1 : 0;
    // 0x8004612C: beq         $at, $zero, L_800460FC
    if (ctx->r1 == 0) {
        // 0x80046130: nop
    
            goto L_800460FC;
    }
    // 0x80046130: nop

L_80046134:
    // 0x80046134: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80046138: bne         $s1, $at, L_80046170
    if (ctx->r17 != ctx->r1) {
        // 0x8004613C: nop
    
            goto L_80046170;
    }
    // 0x8004613C: nop

    // 0x80046140: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x80046144: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80046148: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8004614C: lw          $t3, -0x6D8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X6D8);
    // 0x80046150: nop

    // 0x80046154: sltu        $at, $s2, $t3
    ctx->r1 = ctx->r18 < ctx->r11 ? 1 : 0;
    // 0x80046158: bne         $at, $zero, L_80046170
    if (ctx->r1 != 0) {
        // 0x8004615C: nop
    
            goto L_80046170;
    }
    // 0x8004615C: nop

    // 0x80046160: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x80046164: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80046168: b           L_80046178
    // 0x8004616C: sb          $t4, -0x7C8($at)
    MEM_B(-0X7C8, ctx->r1) = ctx->r12;
        goto L_80046178;
    // 0x8004616C: sb          $t4, -0x7C8($at)
    MEM_B(-0X7C8, ctx->r1) = ctx->r12;
L_80046170:
    // 0x80046170: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80046174: sb          $s1, -0x7C8($at)
    MEM_B(-0X7C8, ctx->r1) = ctx->r17;
L_80046178:
    // 0x80046178: b           L_80046184
    // 0x8004617C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80046184;
    // 0x8004617C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80046180:
    // 0x80046180: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80046184:
    // 0x80046184: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80046188: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004618C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80046190: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80046194: jr          $ra
    // 0x80046198: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80046198: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8004619C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004619C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x800461A0: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800461A4: xori        $a1, $a0, 0x6
    ctx->r5 = ctx->r4 ^ 0X6;
    // 0x800461A8: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x800461AC: bne         $a1, $zero, L_8004620C
    if (ctx->r5 != 0) {
        // 0x800461B0: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8004620C;
    }
    // 0x800461B0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800461B4: xori        $a1, $a0, 0xD
    ctx->r5 = ctx->r4 ^ 0XD;
    // 0x800461B8: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x800461BC: bne         $a1, $zero, L_8004620C
    if (ctx->r5 != 0) {
        // 0x800461C0: nop
    
            goto L_8004620C;
    }
    // 0x800461C0: nop

    // 0x800461C4: xori        $a1, $a0, 0x14
    ctx->r5 = ctx->r4 ^ 0X14;
    // 0x800461C8: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x800461CC: bne         $a1, $zero, L_8004620C
    if (ctx->r5 != 0) {
        // 0x800461D0: nop
    
            goto L_8004620C;
    }
    // 0x800461D0: nop

    // 0x800461D4: xori        $a1, $a0, 0x1B
    ctx->r5 = ctx->r4 ^ 0X1B;
    // 0x800461D8: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x800461DC: bne         $a1, $zero, L_8004620C
    if (ctx->r5 != 0) {
        // 0x800461E0: nop
    
            goto L_8004620C;
    }
    // 0x800461E0: nop

    // 0x800461E4: xori        $a1, $a0, 0x22
    ctx->r5 = ctx->r4 ^ 0X22;
    // 0x800461E8: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x800461EC: bne         $a1, $zero, L_8004620C
    if (ctx->r5 != 0) {
        // 0x800461F0: nop
    
            goto L_8004620C;
    }
    // 0x800461F0: nop

    // 0x800461F4: xori        $a1, $a0, 0x29
    ctx->r5 = ctx->r4 ^ 0X29;
    // 0x800461F8: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x800461FC: bne         $a1, $zero, L_8004620C
    if (ctx->r5 != 0) {
        // 0x80046200: nop
    
            goto L_8004620C;
    }
    // 0x80046200: nop

    // 0x80046204: xori        $a1, $a0, 0x30
    ctx->r5 = ctx->r4 ^ 0X30;
    // 0x80046208: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
L_8004620C:
    // 0x8004620C: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x80046210: jr          $ra
    // 0x80046214: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80046214: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80046218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046218: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8004621C: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80046220: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80046224: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x80046228: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8004622C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80046230: mflo        $a1
    ctx->r5 = lo;
    // 0x80046234: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x80046238: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8004623C: sra         $t7, $a1, 24
    ctx->r15 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80046240: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80046244: jr          $ra
    // 0x80046248: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x80046248: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void func_8004624C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004624C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80046250: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80046254: sll         $a1, $a0, 3
    ctx->r5 = S32(ctx->r4 << 3);
    // 0x80046258: subu        $a1, $a1, $a0
    ctx->r5 = SUB32(ctx->r5, ctx->r4);
    // 0x8004625C: addiu       $a1, $a1, 0x6
    ctx->r5 = ADD32(ctx->r5, 0X6);
    // 0x80046260: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x80046264: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80046268: sra         $t7, $a1, 24
    ctx->r15 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8004626C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80046270: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80046274: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80046278: jr          $ra
    // 0x8004627C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8004627C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80046280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046280: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80046284: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80046288: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004628C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80046290: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x80046294: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80046298: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8004629C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800462A0: jal         0x8007BCB4
    // 0x800462A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8007BCB4(rdram, ctx);
        goto after_0;
    // 0x800462A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x800462A8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800462AC: lb          $t7, -0x7C8($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X7C8);
    // 0x800462B0: lb          $t6, 0x3B($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X3B);
    // 0x800462B4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800462B8: slt         $at, $t7, $t6
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800462BC: beq         $at, $zero, L_800462CC
    if (ctx->r1 == 0) {
        // 0x800462C0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_800462CC;
    }
    // 0x800462C0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800462C4: b           L_80046368
    // 0x800462C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80046368;
    // 0x800462C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800462CC:
    // 0x800462CC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800462D0: lb          $t9, -0x7C8($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X7C8);
    // 0x800462D4: lb          $t8, 0x3B($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X3B);
    // 0x800462D8: nop

    // 0x800462DC: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800462E0: beq         $at, $zero, L_800462F0
    if (ctx->r1 == 0) {
        // 0x800462E4: nop
    
            goto L_800462F0;
    }
    // 0x800462E4: nop

    // 0x800462E8: b           L_80046368
    // 0x800462EC: addiu       $s0, $zero, 0x64
    ctx->r16 = ADD32(0, 0X64);
        goto L_80046368;
    // 0x800462EC: addiu       $s0, $zero, 0x64
    ctx->r16 = ADD32(0, 0X64);
L_800462F0:
    // 0x800462F0: lb          $t0, 0x3B($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X3B);
    // 0x800462F4: nop

    // 0x800462F8: beq         $t0, $zero, L_80046318
    if (ctx->r8 == 0) {
        // 0x800462FC: nop
    
            goto L_80046318;
    }
    // 0x800462FC: nop

    // 0x80046300: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80046304: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x80046308: addu        $s1, $s1, $t1
    ctx->r17 = ADD32(ctx->r17, ctx->r9);
    // 0x8004630C: lw          $s1, -0x6DC($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X6DC);
    // 0x80046310: b           L_8004631C
    // 0x80046314: nop

        goto L_8004631C;
    // 0x80046314: nop

L_80046318:
    // 0x80046318: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8004631C:
    // 0x8004631C: lb          $t2, 0x3B($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X3B);
    // 0x80046320: subu        $t5, $s3, $s1
    ctx->r13 = SUB32(ctx->r19, ctx->r17);
    // 0x80046324: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x80046328: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8004632C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80046330: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80046334: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80046338: lw          $t4, -0x6D8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X6D8);
    // 0x8004633C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80046340: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80046344: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80046348: subu        $s2, $t4, $s1
    ctx->r18 = SUB32(ctx->r12, ctx->r17);
    // 0x8004634C: divu        $zero, $t6, $s2
    lo = S32(U32(ctx->r14) / U32(ctx->r18)); hi = S32(U32(ctx->r14) % U32(ctx->r18));
    // 0x80046350: bne         $s2, $zero, L_8004635C
    if (ctx->r18 != 0) {
        // 0x80046354: nop
    
            goto L_8004635C;
    }
    // 0x80046354: nop

    // 0x80046358: break       7
    do_break(2147771224);
L_8004635C:
    // 0x8004635C: mflo        $s0
    ctx->r16 = lo;
    // 0x80046360: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x80046364: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
L_80046368:
    // 0x80046368: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8004636C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80046370: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80046374: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80046378: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8004637C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80046380: jr          $ra
    // 0x80046384: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80046384: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80046388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046388: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004638C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80046390: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80046394: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80046398: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x8004639C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800463A0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800463A4: jal         0x8007BCB4
    // 0x800463A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8007BCB4(rdram, ctx);
        goto after_0;
    // 0x800463A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x800463AC: lb          $t6, 0x3B($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X3B);
    // 0x800463B0: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x800463B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800463B8: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800463BC: lw          $s0, -0x6D8($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6D8);
    // 0x800463C0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800463C4: sltu        $at, $s2, $s0
    ctx->r1 = ctx->r18 < ctx->r16 ? 1 : 0;
    // 0x800463C8: bne         $at, $zero, L_800463D8
    if (ctx->r1 != 0) {
        // 0x800463CC: nop
    
            goto L_800463D8;
    }
    // 0x800463CC: nop

    // 0x800463D0: b           L_800463DC
    // 0x800463D4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_800463DC;
    // 0x800463D4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_800463D8:
    // 0x800463D8: subu        $s1, $s0, $s2
    ctx->r17 = SUB32(ctx->r16, ctx->r18);
L_800463DC:
    // 0x800463DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800463E0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x800463E4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800463E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800463EC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800463F0: jr          $ra
    // 0x800463F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800463F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800463F8: nop

    // 0x800463FC: nop

;}
RECOMP_FUNC void func_80046400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046400: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80046404: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80046408: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8004640C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80046410: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80046414: lbu         $t7, 0x1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1);
    // 0x80046418: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8004641C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80046420: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80046424: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80046428: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8004642C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80046430: lbu         $t9, 0x2($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X2);
    // 0x80046434: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
    // 0x80046438: lw          $s0, -0x10AC($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X10AC);
    // 0x8004643C: beq         $t9, $zero, L_800464C8
    if (ctx->r25 == 0) {
        // 0x80046440: nop
    
            goto L_800464C8;
    }
    // 0x80046440: nop

    // 0x80046444: andi        $t0, $s0, 0x8000
    ctx->r8 = ctx->r16 & 0X8000;
    // 0x80046448: beq         $t0, $zero, L_800464C8
    if (ctx->r8 == 0) {
        // 0x8004644C: nop
    
            goto L_800464C8;
    }
    // 0x8004644C: nop

    // 0x80046450: lb          $t1, 0x3($t6)
    ctx->r9 = MEM_B(ctx->r14, 0X3);
    // 0x80046454: nop

    // 0x80046458: slti        $at, $t1, 0x7
    ctx->r1 = SIGNED(ctx->r9) < 0X7 ? 1 : 0;
    // 0x8004645C: beq         $at, $zero, L_800464B8
    if (ctx->r1 == 0) {
        // 0x80046460: nop
    
            goto L_800464B8;
    }
    // 0x80046460: nop

    // 0x80046464: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80046468: lb          $t2, -0x7C8($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X7C8);
    // 0x8004646C: nop

    // 0x80046470: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80046474: bne         $at, $zero, L_800464B8
    if (ctx->r1 != 0) {
        // 0x80046478: nop
    
            goto L_800464B8;
    }
    // 0x80046478: nop

    // 0x8004647C: bne         $t1, $t2, L_800464C8
    if (ctx->r9 != ctx->r10) {
        // 0x80046480: nop
    
            goto L_800464C8;
    }
    // 0x80046480: nop

    // 0x80046484: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80046488: lb          $t3, -0x7D0($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X7D0);
    // 0x8004648C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80046490: beq         $t3, $at, L_800464C8
    if (ctx->r11 == ctx->r1) {
        // 0x80046494: nop
    
            goto L_800464C8;
    }
    // 0x80046494: nop

    // 0x80046498: jal         0x80046218
    // 0x8004649C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_80046218(rdram, ctx);
        goto after_0;
    // 0x8004649C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_0:
    // 0x800464A0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800464A4: nop

    // 0x800464A8: lb          $t5, 0x3($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X3);
    // 0x800464AC: nop

    // 0x800464B0: bne         $v0, $t5, L_800464C8
    if (ctx->r2 != ctx->r13) {
        // 0x800464B4: nop
    
            goto L_800464C8;
    }
    // 0x800464B4: nop

L_800464B8:
    // 0x800464B8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800464BC: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x800464C0: b           L_80046600
    // 0x800464C4: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
        goto L_80046600;
    // 0x800464C4: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
L_800464C8:
    // 0x800464C8: andi        $t9, $s0, 0x4000
    ctx->r25 = ctx->r16 & 0X4000;
    // 0x800464CC: beq         $t9, $zero, L_800464E4
    if (ctx->r25 == 0) {
        // 0x800464D0: nop
    
            goto L_800464E4;
    }
    // 0x800464D0: nop

    // 0x800464D4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800464D8: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x800464DC: b           L_80046600
    // 0x800464E0: sb          $t0, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r8;
        goto L_80046600;
    // 0x800464E0: sb          $t0, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r8;
L_800464E4:
    // 0x800464E4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800464E8: nop

    // 0x800464EC: lbu         $t2, 0x2($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X2);
    // 0x800464F0: nop

    // 0x800464F4: beq         $t2, $zero, L_80046564
    if (ctx->r10 == 0) {
        // 0x800464F8: nop
    
            goto L_80046564;
    }
    // 0x800464F8: nop

    // 0x800464FC: andi        $t3, $s0, 0x200
    ctx->r11 = ctx->r16 & 0X200;
    // 0x80046500: beq         $t3, $zero, L_80046564
    if (ctx->r11 == 0) {
        // 0x80046504: nop
    
            goto L_80046564;
    }
    // 0x80046504: nop

    // 0x80046508: lb          $t4, 0x3($t1)
    ctx->r12 = MEM_B(ctx->r9, 0X3);
    // 0x8004650C: nop

    // 0x80046510: beq         $t4, $zero, L_80046524
    if (ctx->r12 == 0) {
        // 0x80046514: nop
    
            goto L_80046524;
    }
    // 0x80046514: nop

    // 0x80046518: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x8004651C: b           L_80046554
    // 0x80046520: sb          $t5, 0x4($t1)
    MEM_B(0X4, ctx->r9) = ctx->r13;
        goto L_80046554;
    // 0x80046520: sb          $t5, 0x4($t1)
    MEM_B(0X4, ctx->r9) = ctx->r13;
L_80046524:
    // 0x80046524: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80046528: lbu         $t7, -0x7C0($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7C0);
    // 0x8004652C: nop

    // 0x80046530: beq         $t7, $zero, L_80046548
    if (ctx->r15 == 0) {
        // 0x80046534: nop
    
            goto L_80046548;
    }
    // 0x80046534: nop

    // 0x80046538: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8004653C: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x80046540: b           L_80046554
    // 0x80046544: sb          $t8, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r24;
        goto L_80046554;
    // 0x80046544: sb          $t8, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r24;
L_80046548:
    // 0x80046548: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8004654C: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80046550: sb          $t0, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r8;
L_80046554:
    // 0x80046554: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80046558: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x8004655C: b           L_80046600
    // 0x80046560: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
        goto L_80046600;
    // 0x80046560: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
L_80046564:
    // 0x80046564: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80046568: nop

    // 0x8004656C: lbu         $t5, 0x2($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X2);
    // 0x80046570: nop

    // 0x80046574: beq         $t5, $zero, L_80046600
    if (ctx->r13 == 0) {
        // 0x80046578: nop
    
            goto L_80046600;
    }
    // 0x80046578: nop

    // 0x8004657C: andi        $t1, $s0, 0x100
    ctx->r9 = ctx->r16 & 0X100;
    // 0x80046580: beq         $t1, $zero, L_80046600
    if (ctx->r9 == 0) {
        // 0x80046584: nop
    
            goto L_80046600;
    }
    // 0x80046584: nop

    // 0x80046588: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8004658C: lbu         $t7, -0x7C0($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7C0);
    // 0x80046590: nop

    // 0x80046594: beq         $t7, $zero, L_800465B0
    if (ctx->r15 == 0) {
        // 0x80046598: nop
    
            goto L_800465B0;
    }
    // 0x80046598: nop

    // 0x8004659C: lb          $t8, 0x3($t4)
    ctx->r24 = MEM_B(ctx->r12, 0X3);
    // 0x800465A0: nop

    // 0x800465A4: slti        $at, $t8, 0x7
    ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
    // 0x800465A8: bne         $at, $zero, L_800465CC
    if (ctx->r1 != 0) {
        // 0x800465AC: nop
    
            goto L_800465CC;
    }
    // 0x800465AC: nop

L_800465B0:
    // 0x800465B0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800465B4: nop

    // 0x800465B8: lb          $t0, 0x3($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X3);
    // 0x800465BC: nop

    // 0x800465C0: slti        $at, $t0, 0x6
    ctx->r1 = SIGNED(ctx->r8) < 0X6 ? 1 : 0;
    // 0x800465C4: beq         $at, $zero, L_800465E8
    if (ctx->r1 == 0) {
        // 0x800465C8: nop
    
            goto L_800465E8;
    }
    // 0x800465C8: nop

L_800465CC:
    // 0x800465CC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800465D0: nop

    // 0x800465D4: lb          $t2, 0x3($t6)
    ctx->r10 = MEM_B(ctx->r14, 0X3);
    // 0x800465D8: nop

    // 0x800465DC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800465E0: b           L_800465F4
    // 0x800465E4: sb          $t3, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r11;
        goto L_800465F4;
    // 0x800465E4: sb          $t3, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r11;
L_800465E8:
    // 0x800465E8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800465EC: nop

    // 0x800465F0: sb          $zero, 0x4($t5)
    MEM_B(0X4, ctx->r13) = 0;
L_800465F4:
    // 0x800465F4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800465F8: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x800465FC: sb          $t1, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r9;
L_80046600:
    // 0x80046600: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80046604: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80046608: jr          $ra
    // 0x8004660C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8004660C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80046610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046610: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80046614: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80046618: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8004661C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80046620: beq         $t6, $zero, L_80046788
    if (ctx->r14 == 0) {
        // 0x80046624: nop
    
            goto L_80046788;
    }
    // 0x80046624: nop

    // 0x80046628: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8004662C: nop

    // 0x80046630: lb          $t8, 0x3($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X3);
    // 0x80046634: nop

    // 0x80046638: slti        $at, $t8, 0x7
    ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
    // 0x8004663C: bne         $at, $zero, L_80046658
    if (ctx->r1 != 0) {
        // 0x80046640: nop
    
            goto L_80046658;
    }
    // 0x80046640: nop

    // 0x80046644: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80046648: addiu       $t9, $t9, -0x4D0
    ctx->r25 = ADD32(ctx->r25, -0X4D0);
    // 0x8004664C: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x80046650: b           L_80046714
    // 0x80046654: sw          $t0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r8;
        goto L_80046714;
    // 0x80046654: sw          $t0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r8;
L_80046658:
    // 0x80046658: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8004665C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80046660: lb          $t3, -0x7C8($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X7C8);
    // 0x80046664: lb          $t2, 0x3($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X3);
    // 0x80046668: nop

    // 0x8004666C: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80046670: beq         $at, $zero, L_80046690
    if (ctx->r1 == 0) {
        // 0x80046674: nop
    
            goto L_80046690;
    }
    // 0x80046674: nop

    // 0x80046678: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8004667C: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80046680: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80046684: lw          $t5, -0x4D0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X4D0);
    // 0x80046688: b           L_80046714
    // 0x8004668C: sw          $t5, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r13;
        goto L_80046714;
    // 0x8004668C: sw          $t5, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r13;
L_80046690:
    // 0x80046690: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80046694: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80046698: lb          $t9, -0x7C8($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X7C8);
    // 0x8004669C: lb          $t8, 0x3($t6)
    ctx->r24 = MEM_B(ctx->r14, 0X3);
    // 0x800466A0: nop

    // 0x800466A4: slt         $at, $t9, $t8
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800466A8: beq         $at, $zero, L_800466C4
    if (ctx->r1 == 0) {
        // 0x800466AC: nop
    
            goto L_800466C4;
    }
    // 0x800466AC: nop

    // 0x800466B0: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800466B4: addiu       $t0, $t0, -0x4D0
    ctx->r8 = ADD32(ctx->r8, -0X4D0);
    // 0x800466B8: lw          $t7, 0x1C($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X1C);
    // 0x800466BC: b           L_80046714
    // 0x800466C0: sw          $t7, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r15;
        goto L_80046714;
    // 0x800466C0: sw          $t7, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r15;
L_800466C4:
    // 0x800466C4: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800466C8: lb          $t3, -0x7D0($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X7D0);
    // 0x800466CC: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x800466D0: bne         $t3, $at, L_800466FC
    if (ctx->r11 != ctx->r1) {
        // 0x800466D4: nop
    
            goto L_800466FC;
    }
    // 0x800466D4: nop

    // 0x800466D8: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x800466DC: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x800466E0: lb          $t4, 0x3($t2)
    ctx->r12 = MEM_B(ctx->r10, 0X3);
    // 0x800466E4: nop

    // 0x800466E8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800466EC: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x800466F0: lw          $t1, -0x4D0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4D0);
    // 0x800466F4: b           L_80046714
    // 0x800466F8: sw          $t1, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r9;
        goto L_80046714;
    // 0x800466F8: sw          $t1, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r9;
L_800466FC:
    // 0x800466FC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80046700: addiu       $t8, $t8, -0x4D0
    ctx->r24 = ADD32(ctx->r24, -0X4D0);
    // 0x80046704: lw          $t9, 0x20($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X20);
    // 0x80046708: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8004670C: nop

    // 0x80046710: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
L_80046714:
    // 0x80046714: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80046718: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8004671C: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    // 0x80046720: jal         0x80076EC0
    // 0x80046724: nop

    func_80076EC0(rdram, ctx);
        goto after_0;
    // 0x80046724: nop

    after_0:
    // 0x80046728: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8004672C: nop

    // 0x80046730: lw          $t3, 0x8($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X8);
    // 0x80046734: nop

    // 0x80046738: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x8004673C: jal         0x800A4654
    // 0x80046740: nop

    func_800A4654(rdram, ctx);
        goto after_1;
    // 0x80046740: nop

    after_1:
    // 0x80046744: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80046748: nop

    // 0x8004674C: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x80046750: nop

    // 0x80046754: lw          $t1, 0x0($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X0);
    // 0x80046758: nop

    // 0x8004675C: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x80046760: nop

    // 0x80046764: sw          $zero, 0x30($t2)
    MEM_W(0X30, ctx->r10) = 0;
    // 0x80046768: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8004676C: nop

    // 0x80046770: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    // 0x80046774: jal         0x800773A4
    // 0x80046778: nop

    func_800773A4(rdram, ctx);
        goto after_2;
    // 0x80046778: nop

    after_2:
    // 0x8004677C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80046780: nop

    // 0x80046784: sb          $zero, 0x0($t9)
    MEM_B(0X0, ctx->r25) = 0;
L_80046788:
    // 0x80046788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004678C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80046790: jr          $ra
    // 0x80046794: nop

    return;
    // 0x80046794: nop

;}
RECOMP_FUNC void func_80046798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004679C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800467A0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800467A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800467A8: beq         $t6, $zero, L_800467E8
    if (ctx->r14 == 0) {
        // 0x800467AC: nop
    
            goto L_800467E8;
    }
    // 0x800467AC: nop

    // 0x800467B0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800467B4: nop

    // 0x800467B8: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x800467BC: nop

    // 0x800467C0: beq         $t8, $zero, L_800467E8
    if (ctx->r24 == 0) {
        // 0x800467C4: nop
    
            goto L_800467E8;
    }
    // 0x800467C4: nop

    // 0x800467C8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800467CC: nop

    // 0x800467D0: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    // 0x800467D4: jal         0x80077028
    // 0x800467D8: nop

    func_80077028(rdram, ctx);
        goto after_0;
    // 0x800467D8: nop

    after_0:
    // 0x800467DC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800467E0: nop

    // 0x800467E4: sw          $zero, 0x8($t0)
    MEM_W(0X8, ctx->r8) = 0;
L_800467E8:
    // 0x800467E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800467EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800467F0: jr          $ra
    // 0x800467F4: nop

    return;
    // 0x800467F4: nop

;}
RECOMP_FUNC void func_800467F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800467F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800467FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80046800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80046804: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80046808: jal         0x80046798
    // 0x8004680C: nop

    func_80046798(rdram, ctx);
        goto after_0;
    // 0x8004680C: nop

    after_0:
    // 0x80046810: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80046814: nop

    // 0x80046818: lb          $t7, 0x4($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X4);
    // 0x8004681C: nop

    // 0x80046820: sb          $t7, 0x3($t6)
    MEM_B(0X3, ctx->r14) = ctx->r15;
    // 0x80046824: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80046828: jal         0x80046610
    // 0x8004682C: nop

    func_80046610(rdram, ctx);
        goto after_1;
    // 0x8004682C: nop

    after_1:
    // 0x80046830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80046834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80046838: jr          $ra
    // 0x8004683C: nop

    return;
    // 0x8004683C: nop

;}
RECOMP_FUNC void func_80046840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046840: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80046844: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80046848: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8004684C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80046850: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80046854: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80046858: jal         0x80077408
    // 0x8004685C: addiu       $a0, $a0, 0xE8
    ctx->r4 = ADD32(ctx->r4, 0XE8);
    func_80077408(rdram, ctx);
        goto after_0;
    // 0x8004685C: addiu       $a0, $a0, 0xE8
    ctx->r4 = ADD32(ctx->r4, 0XE8);
    after_0:
    // 0x80046860: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80046864: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80046868: jal         0x80077408
    // 0x8004686C: addiu       $a0, $a0, 0x160
    ctx->r4 = ADD32(ctx->r4, 0X160);
    func_80077408(rdram, ctx);
        goto after_1;
    // 0x8004686C: addiu       $a0, $a0, 0x160
    ctx->r4 = ADD32(ctx->r4, 0X160);
    after_1:
    // 0x80046870: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80046874: addiu       $a1, $zero, 0x9A
    ctx->r5 = ADD32(0, 0X9A);
    // 0x80046878: addiu       $a2, $zero, 0x9B
    ctx->r6 = ADD32(0, 0X9B);
    // 0x8004687C: jal         0x800571D4
    // 0x80046880: addiu       $a0, $a0, 0xD4
    ctx->r4 = ADD32(ctx->r4, 0XD4);
    func_800571D4(rdram, ctx);
        goto after_2;
    // 0x80046880: addiu       $a0, $a0, 0xD4
    ctx->r4 = ADD32(ctx->r4, 0XD4);
    after_2:
    // 0x80046884: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80046888: nop

    // 0x8004688C: lbu         $t7, 0x2($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2);
    // 0x80046890: nop

    // 0x80046894: beq         $t7, $zero, L_800468C0
    if (ctx->r15 == 0) {
        // 0x80046898: nop
    
            goto L_800468C0;
    }
    // 0x80046898: nop

    // 0x8004689C: addiu       $a0, $t6, 0xC
    ctx->r4 = ADD32(ctx->r14, 0XC);
    // 0x800468A0: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x800468A4: jal         0x800571D4
    // 0x800468A8: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    func_800571D4(rdram, ctx);
        goto after_3;
    // 0x800468A8: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    after_3:
    // 0x800468AC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800468B0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x800468B4: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    // 0x800468B8: jal         0x800571D4
    // 0x800468BC: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_800571D4(rdram, ctx);
        goto after_4;
    // 0x800468BC: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_4:
L_800468C0:
    // 0x800468C0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800468C4: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    // 0x800468C8: addiu       $a2, $zero, 0x85
    ctx->r6 = ADD32(0, 0X85);
    // 0x800468CC: jal         0x800571D4
    // 0x800468D0: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    func_800571D4(rdram, ctx);
        goto after_5;
    // 0x800468D0: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    after_5:
    // 0x800468D4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800468D8: addiu       $a1, $zero, 0x86
    ctx->r5 = ADD32(0, 0X86);
    // 0x800468DC: addiu       $a2, $zero, 0x87
    ctx->r6 = ADD32(0, 0X87);
    // 0x800468E0: jal         0x800571D4
    // 0x800468E4: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    func_800571D4(rdram, ctx);
        goto after_6;
    // 0x800468E4: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_6:
    // 0x800468E8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800468EC: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
    // 0x800468F0: addiu       $a2, $zero, 0x89
    ctx->r6 = ADD32(0, 0X89);
    // 0x800468F4: jal         0x800571D4
    // 0x800468F8: addiu       $a0, $a0, 0x5C
    ctx->r4 = ADD32(ctx->r4, 0X5C);
    func_800571D4(rdram, ctx);
        goto after_7;
    // 0x800468F8: addiu       $a0, $a0, 0x5C
    ctx->r4 = ADD32(ctx->r4, 0X5C);
    after_7:
    // 0x800468FC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80046900: addiu       $a1, $zero, 0x8A
    ctx->r5 = ADD32(0, 0X8A);
    // 0x80046904: addiu       $a2, $zero, 0x8B
    ctx->r6 = ADD32(0, 0X8B);
    // 0x80046908: jal         0x800571D4
    // 0x8004690C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    func_800571D4(rdram, ctx);
        goto after_8;
    // 0x8004690C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_8:
    // 0x80046910: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80046914: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    // 0x80046918: addiu       $a2, $zero, 0x8D
    ctx->r6 = ADD32(0, 0X8D);
    // 0x8004691C: jal         0x800571D4
    // 0x80046920: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    func_800571D4(rdram, ctx);
        goto after_9;
    // 0x80046920: addiu       $a0, $a0, 0x84
    ctx->r4 = ADD32(ctx->r4, 0X84);
    after_9:
    // 0x80046924: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80046928: addiu       $a1, $zero, 0x8E
    ctx->r5 = ADD32(0, 0X8E);
    // 0x8004692C: addiu       $a2, $zero, 0x8F
    ctx->r6 = ADD32(0, 0X8F);
    // 0x80046930: jal         0x800571D4
    // 0x80046934: addiu       $a0, $a0, 0x98
    ctx->r4 = ADD32(ctx->r4, 0X98);
    func_800571D4(rdram, ctx);
        goto after_10;
    // 0x80046934: addiu       $a0, $a0, 0x98
    ctx->r4 = ADD32(ctx->r4, 0X98);
    after_10:
    // 0x80046938: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8004693C: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x80046940: addiu       $a2, $zero, 0x91
    ctx->r6 = ADD32(0, 0X91);
    // 0x80046944: jal         0x800571D4
    // 0x80046948: addiu       $a0, $a0, 0xAC
    ctx->r4 = ADD32(ctx->r4, 0XAC);
    func_800571D4(rdram, ctx);
        goto after_11;
    // 0x80046948: addiu       $a0, $a0, 0xAC
    ctx->r4 = ADD32(ctx->r4, 0XAC);
    after_11:
    // 0x8004694C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80046950: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
    // 0x80046954: addiu       $a2, $zero, 0x93
    ctx->r6 = ADD32(0, 0X93);
    // 0x80046958: jal         0x800571D4
    // 0x8004695C: addiu       $a0, $a0, 0xC0
    ctx->r4 = ADD32(ctx->r4, 0XC0);
    func_800571D4(rdram, ctx);
        goto after_12;
    // 0x8004695C: addiu       $a0, $a0, 0xC0
    ctx->r4 = ADD32(ctx->r4, 0XC0);
    after_12:
    // 0x80046960: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80046964: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80046968: sh          $t8, 0xDC($t9)
    MEM_H(0XDC, ctx->r25) = ctx->r24;
    // 0x8004696C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80046970: addiu       $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
    // 0x80046974: sh          $t0, 0xDE($t1)
    MEM_H(0XDE, ctx->r9) = ctx->r8;
    // 0x80046978: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8004697C: nop

    // 0x80046980: lbu         $t3, 0x2($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X2);
    // 0x80046984: nop

    // 0x80046988: beq         $t3, $zero, L_800469BC
    if (ctx->r11 == 0) {
        // 0x8004698C: nop
    
            goto L_800469BC;
    }
    // 0x8004698C: nop

    // 0x80046990: addiu       $t4, $zero, 0x37
    ctx->r12 = ADD32(0, 0X37);
    // 0x80046994: sh          $t4, 0x14($t2)
    MEM_H(0X14, ctx->r10) = ctx->r12;
    // 0x80046998: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8004699C: addiu       $t5, $zero, 0x41
    ctx->r13 = ADD32(0, 0X41);
    // 0x800469A0: sh          $t5, 0x16($t7)
    MEM_H(0X16, ctx->r15) = ctx->r13;
    // 0x800469A4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800469A8: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x800469AC: sh          $t6, 0x28($t8)
    MEM_H(0X28, ctx->r24) = ctx->r14;
    // 0x800469B0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800469B4: addiu       $t9, $zero, 0x41
    ctx->r25 = ADD32(0, 0X41);
    // 0x800469B8: sh          $t9, 0x2A($t0)
    MEM_H(0X2A, ctx->r8) = ctx->r25;
L_800469BC:
    // 0x800469BC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800469C0: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x800469C4: beq         $at, $zero, L_80046A18
    if (ctx->r1 == 0) {
        // 0x800469C8: nop
    
            goto L_80046A18;
    }
    // 0x800469C8: nop

L_800469CC:
    // 0x800469CC: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x800469D0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800469D4: addu        $t4, $t4, $s0
    ctx->r12 = ADD32(ctx->r12, ctx->r16);
    // 0x800469D8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800469DC: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x800469E0: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x800469E4: addiu       $t1, $zero, 0x23
    ctx->r9 = ADD32(0, 0X23);
    // 0x800469E8: addu        $t2, $t3, $t4
    ctx->r10 = ADD32(ctx->r11, ctx->r12);
    // 0x800469EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800469F0: sh          $t1, 0x3C($t2)
    MEM_H(0X3C, ctx->r10) = ctx->r9;
    // 0x800469F4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800469F8: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x800469FC: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x80046A00: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80046A04: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x80046A08: addiu       $t5, $zero, 0x96
    ctx->r13 = ADD32(0, 0X96);
    // 0x80046A0C: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x80046A10: bne         $at, $zero, L_800469CC
    if (ctx->r1 != 0) {
        // 0x80046A14: sh          $t5, 0x3E($t8)
        MEM_H(0X3E, ctx->r24) = ctx->r13;
            goto L_800469CC;
    }
    // 0x80046A14: sh          $t5, 0x3E($t8)
    MEM_H(0X3E, ctx->r24) = ctx->r13;
L_80046A18:
    // 0x80046A18: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80046A1C: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80046A20: sb          $t0, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r8;
    // 0x80046A24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80046A28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80046A2C: jr          $ra
    // 0x80046A30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80046A30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80046A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046A34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80046A38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80046A3C: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80046A40: lw          $s0, -0x4A4($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X4A4);
    // 0x80046A44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80046A48: beq         $s0, $zero, L_80046B18
    if (ctx->r16 == 0) {
        // 0x80046A4C: nop
    
            goto L_80046B18;
    }
    // 0x80046A4C: nop

    // 0x80046A50: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x80046A54: nop

    // 0x80046A58: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x80046A5C: beq         $at, $zero, L_80046B18
    if (ctx->r1 == 0) {
        // 0x80046A60: nop
    
            goto L_80046B18;
    }
    // 0x80046A60: nop

    // 0x80046A64: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80046A68: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80046A6C: addu        $at, $at, $t6
    gpr jr_addend_80046A78 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80046A70: lw          $t6, -0x4990($at)
    ctx->r14 = ADD32(ctx->r1, -0X4990);
    // 0x80046A74: nop

    // 0x80046A78: jr          $t6
    // 0x80046A7C: nop

    switch (jr_addend_80046A78 >> 2) {
        case 0: goto L_80046A80; break;
        case 1: goto L_80046A90; break;
        case 2: goto L_80046AD4; break;
        case 3: goto L_80046AE0; break;
        case 4: goto L_80046AF0; break;
        case 5: goto L_80046B00; break;
        case 6: goto L_80046B10; break;
        case 7: goto L_80046B10; break;
        default: switch_error(__func__, 0x80046A78, 0x800DB670);
    }
    // 0x80046A7C: nop

L_80046A80:
    // 0x80046A80: jal         0x80046400
    // 0x80046A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80046400(rdram, ctx);
        goto after_0;
    // 0x80046A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80046A88: b           L_80046B18
    // 0x80046A8C: nop

        goto L_80046B18;
    // 0x80046A8C: nop

L_80046A90:
    // 0x80046A90: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80046A94: lw          $t7, -0x6E1C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X6E1C);
    // 0x80046A98: nop

    // 0x80046A9C: beq         $t7, $zero, L_80046B18
    if (ctx->r15 == 0) {
        // 0x80046AA0: nop
    
            goto L_80046B18;
    }
    // 0x80046AA0: nop

    // 0x80046AA4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80046AA8: lw          $a0, -0x6E24($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6E24);
    // 0x80046AAC: jal         0x8007E328
    // 0x80046AB0: nop

    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x80046AB0: nop

    after_1:
    // 0x80046AB4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80046AB8: jal         0x8009F338
    // 0x80046ABC: addiu       $a0, $a0, -0x6F30
    ctx->r4 = ADD32(ctx->r4, -0X6F30);
    func_8009F338(rdram, ctx);
        goto after_2;
    // 0x80046ABC: addiu       $a0, $a0, -0x6F30
    ctx->r4 = ADD32(ctx->r4, -0X6F30);
    after_2:
    // 0x80046AC0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80046AC4: jal         0x8004A34C
    // 0x80046AC8: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
    func_8004A34C(rdram, ctx);
        goto after_3;
    // 0x80046AC8: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
    after_3:
    // 0x80046ACC: b           L_80046B18
    // 0x80046AD0: nop

        goto L_80046B18;
    // 0x80046AD0: nop

L_80046AD4:
    // 0x80046AD4: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80046AD8: b           L_80046B18
    // 0x80046ADC: sb          $t9, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r25;
        goto L_80046B18;
    // 0x80046ADC: sb          $t9, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r25;
L_80046AE0:
    // 0x80046AE0: jal         0x80046840
    // 0x80046AE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80046840(rdram, ctx);
        goto after_4;
    // 0x80046AE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80046AE8: b           L_80046B18
    // 0x80046AEC: nop

        goto L_80046B18;
    // 0x80046AEC: nop

L_80046AF0:
    // 0x80046AF0: jal         0x80046610
    // 0x80046AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80046610(rdram, ctx);
        goto after_5;
    // 0x80046AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80046AF8: b           L_80046B18
    // 0x80046AFC: nop

        goto L_80046B18;
    // 0x80046AFC: nop

L_80046B00:
    // 0x80046B00: jal         0x800467F8
    // 0x80046B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800467F8(rdram, ctx);
        goto after_6;
    // 0x80046B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80046B08: b           L_80046B18
    // 0x80046B0C: nop

        goto L_80046B18;
    // 0x80046B0C: nop

L_80046B10:
    // 0x80046B10: jal         0x8004745C
    // 0x80046B14: nop

    func_8004745C(rdram, ctx);
        goto after_7;
    // 0x80046B14: nop

    after_7:
L_80046B18:
    // 0x80046B18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80046B1C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80046B20: jr          $ra
    // 0x80046B24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80046B24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80046B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046B28: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80046B2C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80046B30: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80046B34: lw          $s0, -0x4A4($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X4A4);
    // 0x80046B38: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80046B3C: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x80046B40: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x80046B44: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x80046B48: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x80046B4C: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80046B50: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80046B54: beq         $s0, $zero, L_80046FE8
    if (ctx->r16 == 0) {
        // 0x80046B58: sw          $s1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r17;
            goto L_80046FE8;
    }
    // 0x80046B58: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80046B5C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80046B60: jal         0x8005BBFC
    // 0x80046B64: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_0;
    // 0x80046B64: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_0:
    // 0x80046B68: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80046B6C: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x80046B70: lw          $a2, 0x1F84($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1F84);
    // 0x80046B74: lw          $a1, 0x1F80($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1F80);
    // 0x80046B78: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80046B7C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80046B80: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80046B84: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80046B88: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80046B8C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80046B90: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80046B94: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80046B98: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80046B9C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80046BA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80046BA4: jal         0x80057460
    // 0x80046BA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80057460(rdram, ctx);
        goto after_1;
    // 0x80046BA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80046BAC: jal         0x80057338
    // 0x80046BB0: addiu       $a0, $s0, 0xD4
    ctx->r4 = ADD32(ctx->r16, 0XD4);
    func_80057338(rdram, ctx);
        goto after_2;
    // 0x80046BB0: addiu       $a0, $s0, 0xD4
    ctx->r4 = ADD32(ctx->r16, 0XD4);
    after_2:
    // 0x80046BB4: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80046BB8: lb          $t1, -0x7C8($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X7C8);
    // 0x80046BBC: lb          $t0, 0x3($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X3);
    // 0x80046BC0: nop

    // 0x80046BC4: bne         $t0, $t1, L_80046BEC
    if (ctx->r8 != ctx->r9) {
        // 0x80046BC8: nop
    
            goto L_80046BEC;
    }
    // 0x80046BC8: nop

    // 0x80046BCC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80046BD0: lb          $a0, -0x7D0($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X7D0);
    // 0x80046BD4: jal         0x80046218
    // 0x80046BD8: nop

    func_80046218(rdram, ctx);
        goto after_3;
    // 0x80046BD8: nop

    after_3:
    // 0x80046BDC: lb          $t2, 0x3($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X3);
    // 0x80046BE0: nop

    // 0x80046BE4: beq         $v0, $t2, L_80046C08
    if (ctx->r2 == ctx->r10) {
        // 0x80046BE8: nop
    
            goto L_80046C08;
    }
    // 0x80046BE8: nop

L_80046BEC:
    // 0x80046BEC: lb          $a0, 0x3($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3);
    // 0x80046BF0: jal         0x8004624C
    // 0x80046BF4: nop

    func_8004624C(rdram, ctx);
        goto after_4;
    // 0x80046BF4: nop

    after_4:
    // 0x80046BF8: sll         $s1, $v0, 24
    ctx->r17 = S32(ctx->r2 << 24);
    // 0x80046BFC: sra         $t3, $s1, 24
    ctx->r11 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80046C00: b           L_80046C14
    // 0x80046C04: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
        goto L_80046C14;
    // 0x80046C04: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
L_80046C08:
    // 0x80046C08: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x80046C0C: lb          $s1, -0x7D0($s1)
    ctx->r17 = MEM_B(ctx->r17, -0X7D0);
    // 0x80046C10: nop

L_80046C14:
    // 0x80046C14: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x80046C18: lb          $t4, -0x7D0($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X7D0);
    // 0x80046C1C: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x80046C20: beq         $t4, $at, L_80046C98
    if (ctx->r12 == ctx->r1) {
        // 0x80046C24: slti        $at, $s1, 0x31
        ctx->r1 = SIGNED(ctx->r17) < 0X31 ? 1 : 0;
            goto L_80046C98;
    }
    // 0x80046C24: slti        $at, $s1, 0x31
    ctx->r1 = SIGNED(ctx->r17) < 0X31 ? 1 : 0;
    // 0x80046C28: beq         $at, $zero, L_80046C98
    if (ctx->r1 == 0) {
        // 0x80046C2C: nop
    
            goto L_80046C98;
    }
    // 0x80046C2C: nop

    // 0x80046C30: jal         0x80046218
    // 0x80046C34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80046218(rdram, ctx);
        goto after_5;
    // 0x80046C34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80046C38: sll         $s7, $v0, 24
    ctx->r23 = S32(ctx->r2 << 24);
    // 0x80046C3C: sra         $t5, $s7, 24
    ctx->r13 = S32(SIGNED(ctx->r23) >> 24);
    // 0x80046C40: or          $s7, $t5, $zero
    ctx->r23 = ctx->r13 | 0;
    // 0x80046C44: jal         0x80046388
    // 0x80046C48: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_80046388(rdram, ctx);
        goto after_6;
    // 0x80046C48: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_6:
    // 0x80046C4C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80046C50: lb          $t6, -0x7D0($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X7D0);
    // 0x80046C54: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80046C58: slt         $at, $t6, $s1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80046C5C: bne         $at, $zero, L_80046C90
    if (ctx->r1 != 0) {
        // 0x80046C60: nop
    
            goto L_80046C90;
    }
    // 0x80046C60: nop

    // 0x80046C64: jal         0x80046218
    // 0x80046C68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80046218(rdram, ctx);
        goto after_7;
    // 0x80046C68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x80046C6C: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x80046C70: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x80046C74: subu        $s2, $s1, $t7
    ctx->r18 = SUB32(ctx->r17, ctx->r15);
    // 0x80046C78: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80046C7C: sll         $t8, $s2, 24
    ctx->r24 = S32(ctx->r18 << 24);
    // 0x80046C80: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    // 0x80046C84: sra         $t9, $s2, 24
    ctx->r25 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80046C88: b           L_80046CA0
    // 0x80046C8C: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
        goto L_80046CA0;
    // 0x80046C8C: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
L_80046C90:
    // 0x80046C90: b           L_80046CA0
    // 0x80046C94: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80046CA0;
    // 0x80046C94: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80046C98:
    // 0x80046C98: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80046C9C: addiu       $s2, $zero, 0x7
    ctx->r18 = ADD32(0, 0X7);
L_80046CA0:
    // 0x80046CA0: sll         $t0, $s2, 2
    ctx->r8 = S32(ctx->r18 << 2);
    // 0x80046CA4: addu        $t0, $t0, $s2
    ctx->r8 = ADD32(ctx->r8, ctx->r18);
    // 0x80046CA8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80046CAC: addu        $a0, $s0, $t0
    ctx->r4 = ADD32(ctx->r16, ctx->r8);
    // 0x80046CB0: jal         0x80057338
    // 0x80046CB4: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    func_80057338(rdram, ctx);
        goto after_8;
    // 0x80046CB4: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    after_8:
    // 0x80046CB8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80046CBC: addiu       $a1, $a1, -0x49E0
    ctx->r5 = ADD32(ctx->r5, -0X49E0);
    // 0x80046CC0: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x80046CC4: jal         0x800B62D4
    // 0x80046CC8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    sprintf_recomp(rdram, ctx);
        goto after_9;
    // 0x80046CC8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_9:
    // 0x80046CCC: addiu       $a0, $s0, 0xE8
    ctx->r4 = ADD32(ctx->r16, 0XE8);
    // 0x80046CD0: jal         0x80077D88
    // 0x80046CD4: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_80077D88(rdram, ctx);
        goto after_10;
    // 0x80046CD4: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_10:
    // 0x80046CD8: bgez        $v0, L_80046CE8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80046CDC: sra         $t1, $v0, 1
        ctx->r9 = S32(SIGNED(ctx->r2) >> 1);
            goto L_80046CE8;
    }
    // 0x80046CDC: sra         $t1, $v0, 1
    ctx->r9 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80046CE0: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x80046CE4: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_80046CE8:
    // 0x80046CE8: addiu       $t2, $zero, 0x46
    ctx->r10 = ADD32(0, 0X46);
    // 0x80046CEC: subu        $s4, $t2, $t1
    ctx->r20 = SUB32(ctx->r10, ctx->r9);
    // 0x80046CF0: andi        $t3, $s4, 0xFFFF
    ctx->r11 = ctx->r20 & 0XFFFF;
    // 0x80046CF4: or          $s4, $t3, $zero
    ctx->r20 = ctx->r11 | 0;
    // 0x80046CF8: addiu       $s5, $zero, 0xB4
    ctx->r21 = ADD32(0, 0XB4);
    // 0x80046CFC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80046D00: addiu       $t4, $sp, 0x58
    ctx->r12 = ADD32(ctx->r29, 0X58);
    // 0x80046D04: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80046D08: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80046D0C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80046D10: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80046D14: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80046D18: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80046D1C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80046D20: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80046D24: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80046D28: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80046D2C: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x80046D30: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80046D34: jal         0x80077960
    // 0x80046D38: addiu       $a1, $s0, 0xE8
    ctx->r5 = ADD32(ctx->r16, 0XE8);
    func_80077960(rdram, ctx);
        goto after_11;
    // 0x80046D38: addiu       $a1, $s0, 0xE8
    ctx->r5 = ADD32(ctx->r16, 0XE8);
    after_11:
    // 0x80046D3C: lbu         $t9, 0x2($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2);
    // 0x80046D40: nop

    // 0x80046D44: beq         $t9, $zero, L_80046D5C
    if (ctx->r25 == 0) {
        // 0x80046D48: nop
    
            goto L_80046D5C;
    }
    // 0x80046D48: nop

    // 0x80046D4C: jal         0x80057338
    // 0x80046D50: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    func_80057338(rdram, ctx);
        goto after_12;
    // 0x80046D50: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    after_12:
    // 0x80046D54: jal         0x80057338
    // 0x80046D58: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    func_80057338(rdram, ctx);
        goto after_13;
    // 0x80046D58: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    after_13:
L_80046D5C:
    // 0x80046D5C: lb          $t0, 0x3($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X3);
    // 0x80046D60: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x80046D64: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80046D68: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x80046D6C: lw          $a2, -0x7BC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X7BC);
    // 0x80046D70: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80046D74: addiu       $a1, $a1, -0x49DC
    ctx->r5 = ADD32(ctx->r5, -0X49DC);
    // 0x80046D78: jal         0x800B62D4
    // 0x80046D7C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    sprintf_recomp(rdram, ctx);
        goto after_14;
    // 0x80046D7C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_14:
    // 0x80046D80: addiu       $a0, $s0, 0xE8
    ctx->r4 = ADD32(ctx->r16, 0XE8);
    // 0x80046D84: jal         0x80077D88
    // 0x80046D88: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_80077D88(rdram, ctx);
        goto after_15;
    // 0x80046D88: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_15:
    // 0x80046D8C: bgez        $v0, L_80046D9C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80046D90: sra         $t1, $v0, 1
        ctx->r9 = S32(SIGNED(ctx->r2) >> 1);
            goto L_80046D9C;
    }
    // 0x80046D90: sra         $t1, $v0, 1
    ctx->r9 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80046D94: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x80046D98: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_80046D9C:
    // 0x80046D9C: addiu       $t3, $zero, 0xC8
    ctx->r11 = ADD32(0, 0XC8);
    // 0x80046DA0: subu        $s4, $t3, $t1
    ctx->r20 = SUB32(ctx->r11, ctx->r9);
    // 0x80046DA4: andi        $t4, $s4, 0xFFFF
    ctx->r12 = ctx->r20 & 0XFFFF;
    // 0x80046DA8: or          $s4, $t4, $zero
    ctx->r20 = ctx->r12 | 0;
    // 0x80046DAC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80046DB0: addiu       $t5, $sp, 0x58
    ctx->r13 = ADD32(ctx->r29, 0X58);
    // 0x80046DB4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80046DB8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80046DBC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80046DC0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80046DC4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80046DC8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80046DCC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80046DD0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80046DD4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80046DD8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80046DDC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80046DE0: addiu       $a1, $s0, 0xE8
    ctx->r5 = ADD32(ctx->r16, 0XE8);
    // 0x80046DE4: jal         0x80077960
    // 0x80046DE8: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    func_80077960(rdram, ctx);
        goto after_16;
    // 0x80046DE8: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    after_16:
    // 0x80046DEC: lbu         $t0, 0x2($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2);
    // 0x80046DF0: lhu         $s6, 0x15C($s0)
    ctx->r22 = MEM_HU(ctx->r16, 0X15C);
    // 0x80046DF4: addiu       $s4, $zero, 0x82
    ctx->r20 = ADD32(0, 0X82);
    // 0x80046DF8: beq         $t0, $zero, L_80046EEC
    if (ctx->r8 == 0) {
        // 0x80046DFC: addiu       $s5, $zero, 0x10E
        ctx->r21 = ADD32(0, 0X10E);
            goto L_80046EEC;
    }
    // 0x80046DFC: addiu       $s5, $zero, 0x10E
    ctx->r21 = ADD32(0, 0X10E);
    // 0x80046E00: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80046E04: addiu       $a1, $a1, -0x49D8
    ctx->r5 = ADD32(ctx->r5, -0X49D8);
    // 0x80046E08: jal         0x800B62D4
    // 0x80046E0C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    sprintf_recomp(rdram, ctx);
        goto after_17;
    // 0x80046E0C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_17:
    // 0x80046E10: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80046E14: addiu       $t2, $sp, 0x58
    ctx->r10 = ADD32(ctx->r29, 0X58);
    // 0x80046E18: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x80046E1C: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x80046E20: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80046E24: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80046E28: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80046E2C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80046E30: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80046E34: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80046E38: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80046E3C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80046E40: addiu       $a1, $s0, 0xE8
    ctx->r5 = ADD32(ctx->r16, 0XE8);
    // 0x80046E44: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80046E48: jal         0x80077960
    // 0x80046E4C: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    func_80077960(rdram, ctx);
        goto after_18;
    // 0x80046E4C: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_18:
    // 0x80046E50: addu        $s4, $s4, $s6
    ctx->r20 = ADD32(ctx->r20, ctx->r22);
    // 0x80046E54: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80046E58: andi        $t6, $s4, 0xFFFF
    ctx->r14 = ctx->r20 & 0XFFFF;
    // 0x80046E5C: andi        $t7, $s5, 0xFFFF
    ctx->r15 = ctx->r21 & 0XFFFF;
    // 0x80046E60: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80046E64: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x80046E68: or          $s5, $t7, $zero
    ctx->r21 = ctx->r15 | 0;
    // 0x80046E6C: addiu       $a1, $a1, -0x49D4
    ctx->r5 = ADD32(ctx->r5, -0X49D4);
    // 0x80046E70: jal         0x800B62D4
    // 0x80046E74: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    sprintf_recomp(rdram, ctx);
        goto after_19;
    // 0x80046E74: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_19:
    // 0x80046E78: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80046E7C: addiu       $t8, $sp, 0x58
    ctx->r24 = ADD32(ctx->r29, 0X58);
    // 0x80046E80: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80046E84: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80046E88: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80046E8C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80046E90: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80046E94: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80046E98: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80046E9C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80046EA0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80046EA4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80046EA8: addiu       $a1, $s0, 0x160
    ctx->r5 = ADD32(ctx->r16, 0X160);
    // 0x80046EAC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80046EB0: jal         0x80077960
    // 0x80046EB4: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    func_80077960(rdram, ctx);
        goto after_20;
    // 0x80046EB4: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_20:
    // 0x80046EB8: addiu       $a0, $s0, 0x160
    ctx->r4 = ADD32(ctx->r16, 0X160);
    // 0x80046EBC: jal         0x80077D88
    // 0x80046EC0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_80077D88(rdram, ctx);
        goto after_21;
    // 0x80046EC0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_21:
    // 0x80046EC4: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x80046EC8: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80046ECC: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x80046ED0: addu        $t4, $s6, $t1
    ctx->r12 = ADD32(ctx->r22, ctx->r9);
    // 0x80046ED4: addu        $s4, $s4, $t4
    ctx->r20 = ADD32(ctx->r20, ctx->r12);
    // 0x80046ED8: andi        $t5, $s4, 0xFFFF
    ctx->r13 = ctx->r20 & 0XFFFF;
    // 0x80046EDC: andi        $t6, $s5, 0xFFFF
    ctx->r14 = ctx->r21 & 0XFFFF;
    // 0x80046EE0: or          $s4, $t5, $zero
    ctx->r20 = ctx->r13 | 0;
    // 0x80046EE4: b           L_80046F24
    // 0x80046EE8: or          $s5, $t6, $zero
    ctx->r21 = ctx->r14 | 0;
        goto L_80046F24;
    // 0x80046EE8: or          $s5, $t6, $zero
    ctx->r21 = ctx->r14 | 0;
L_80046EEC:
    // 0x80046EEC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80046EF0: addiu       $a1, $a1, -0x49CC
    ctx->r5 = ADD32(ctx->r5, -0X49CC);
    // 0x80046EF4: jal         0x800B62D4
    // 0x80046EF8: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    sprintf_recomp(rdram, ctx);
        goto after_22;
    // 0x80046EF8: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_22:
    // 0x80046EFC: addiu       $a0, $s0, 0x160
    ctx->r4 = ADD32(ctx->r16, 0X160);
    // 0x80046F00: jal         0x80077D88
    // 0x80046F04: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_80077D88(rdram, ctx);
        goto after_23;
    // 0x80046F04: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_23:
    // 0x80046F08: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x80046F0C: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80046F10: sll         $t7, $s6, 1
    ctx->r15 = S32(ctx->r22 << 1);
    // 0x80046F14: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80046F18: addu        $s4, $s4, $t9
    ctx->r20 = ADD32(ctx->r20, ctx->r25);
    // 0x80046F1C: andi        $t0, $s4, 0xFFFF
    ctx->r8 = ctx->r20 & 0XFFFF;
    // 0x80046F20: or          $s4, $t0, $zero
    ctx->r20 = ctx->r8 | 0;
L_80046F24:
    // 0x80046F24: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80046F28: addiu       $a1, $a1, -0x49C4
    ctx->r5 = ADD32(ctx->r5, -0X49C4);
    // 0x80046F2C: jal         0x800B62D4
    // 0x80046F30: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    sprintf_recomp(rdram, ctx);
        goto after_24;
    // 0x80046F30: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_24:
    // 0x80046F34: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80046F38: addiu       $t2, $sp, 0x58
    ctx->r10 = ADD32(ctx->r29, 0X58);
    // 0x80046F3C: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x80046F40: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80046F44: addiu       $t4, $zero, 0x7F
    ctx->r12 = ADD32(0, 0X7F);
    // 0x80046F48: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80046F4C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80046F50: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80046F54: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80046F58: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80046F5C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80046F60: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80046F64: addiu       $a1, $s0, 0xE8
    ctx->r5 = ADD32(ctx->r16, 0XE8);
    // 0x80046F68: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80046F6C: jal         0x80077960
    // 0x80046F70: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    func_80077960(rdram, ctx);
        goto after_25;
    // 0x80046F70: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_25:
    // 0x80046F74: addu        $s4, $s4, $s6
    ctx->r20 = ADD32(ctx->r20, ctx->r22);
    // 0x80046F78: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80046F7C: andi        $t6, $s4, 0xFFFF
    ctx->r14 = ctx->r20 & 0XFFFF;
    // 0x80046F80: andi        $t7, $s5, 0xFFFF
    ctx->r15 = ctx->r21 & 0XFFFF;
    // 0x80046F84: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80046F88: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x80046F8C: or          $s5, $t7, $zero
    ctx->r21 = ctx->r15 | 0;
    // 0x80046F90: addiu       $a1, $a1, -0x49C0
    ctx->r5 = ADD32(ctx->r5, -0X49C0);
    // 0x80046F94: jal         0x800B62D4
    // 0x80046F98: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    sprintf_recomp(rdram, ctx);
        goto after_26;
    // 0x80046F98: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_26:
    // 0x80046F9C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80046FA0: addiu       $t8, $sp, 0x58
    ctx->r24 = ADD32(ctx->r29, 0X58);
    // 0x80046FA4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80046FA8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80046FAC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80046FB0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80046FB4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80046FB8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80046FBC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80046FC0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80046FC4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80046FC8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80046FCC: addiu       $a1, $s0, 0x160
    ctx->r5 = ADD32(ctx->r16, 0X160);
    // 0x80046FD0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80046FD4: jal         0x80077960
    // 0x80046FD8: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    func_80077960(rdram, ctx);
        goto after_27;
    // 0x80046FD8: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_27:
    // 0x80046FDC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80046FE0: jal         0x8005BE40
    // 0x80046FE4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_28;
    // 0x80046FE4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_28:
L_80046FE8:
    // 0x80046FE8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80046FEC: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80046FF0: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80046FF4: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80046FF8: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80046FFC: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80047000: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80047004: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x80047008: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x8004700C: jr          $ra
    // 0x80047010: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x80047010: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_80047014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047014: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80047018: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004701C: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80047020: lw          $s0, -0x4A4($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X4A4);
    // 0x80047024: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80047028: beq         $s0, $zero, L_80047054
    if (ctx->r16 == 0) {
        // 0x8004702C: nop
    
            goto L_80047054;
    }
    // 0x8004702C: nop

    // 0x80047030: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x80047034: nop

    // 0x80047038: beq         $t6, $zero, L_80047054
    if (ctx->r14 == 0) {
        // 0x8004703C: nop
    
            goto L_80047054;
    }
    // 0x8004703C: nop

    // 0x80047040: jal         0x80046B28
    // 0x80047044: nop

    func_80046B28(rdram, ctx);
        goto after_0;
    // 0x80047044: nop

    after_0:
    // 0x80047048: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x8004704C: jal         0x80077098
    // 0x80047050: nop

    func_80077098(rdram, ctx);
        goto after_1;
    // 0x80047050: nop

    after_1:
L_80047054:
    // 0x80047054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80047058: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004705C: jr          $ra
    // 0x80047060: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80047060: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80047064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047064: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80047068: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8004706C: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80047070: lw          $s0, -0x4A4($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X4A4);
    // 0x80047074: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80047078: beq         $s0, $zero, L_800471E8
    if (ctx->r16 == 0) {
        // 0x8004707C: nop
    
            goto L_800471E8;
    }
    // 0x8004707C: nop

    // 0x80047080: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80047084: jal         0x800A0228
    // 0x80047088: addiu       $a0, $a0, -0x6F30
    ctx->r4 = ADD32(ctx->r4, -0X6F30);
    func_800A0228(rdram, ctx);
        goto after_0;
    // 0x80047088: addiu       $a0, $a0, -0x6F30
    ctx->r4 = ADD32(ctx->r4, -0X6F30);
    after_0:
    // 0x8004708C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80047090: jal         0x8005BBFC
    // 0x80047094: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_1;
    // 0x80047094: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_1:
    // 0x80047098: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8004709C: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x800470A0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800470A4: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x800470A8: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800470AC: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x800470B0: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x800470B4: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x800470B8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800470BC: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x800470C0: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x800470C4: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x800470C8: lw          $t1, 0x20C0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X20C0);
    // 0x800470CC: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800470D0: lw          $t3, -0x2B0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X2B0);
    // 0x800470D4: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x800470D8: sw          $t2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r10;
    // 0x800470DC: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x800470E0: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800470E4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800470E8: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x800470EC: lui         $at, 0xFF10
    ctx->r1 = S32(0XFF10 << 16);
    // 0x800470F0: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x800470F4: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800470F8: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x800470FC: lw          $t8, -0x6E24($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6E24);
    // 0x80047100: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80047104: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80047108: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8004710C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80047110: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047114: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x80047118: lw          $a2, 0x1F84($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1F84);
    // 0x8004711C: lw          $a1, 0x1F80($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1F80);
    // 0x80047120: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80047124: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80047128: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004712C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80047130: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80047134: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80047138: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8004713C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80047140: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80047144: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80047148: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8004714C: jal         0x80057460
    // 0x80047150: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80057460(rdram, ctx);
        goto after_2;
    // 0x80047150: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x80047154: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80047158: lw          $t5, 0x20C0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X20C0);
    // 0x8004715C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80047160: lw          $t7, -0x2B0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2B0);
    // 0x80047164: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047168: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8004716C: sw          $t6, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r14;
    // 0x80047170: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x80047174: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80047178: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8004717C: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x80047180: lui         $at, 0xFF10
    ctx->r1 = S32(0XFF10 << 16);
    // 0x80047184: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x80047188: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8004718C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80047190: lhu         $t2, 0x20B0($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X20B0);
    // 0x80047194: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80047198: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8004719C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800471A0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800471A4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800471A8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800471AC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800471B0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800471B4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800471B8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800471BC: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800471C0: sll         $t3, $t3, 7
    ctx->r11 = S32(ctx->r11 << 7);
    // 0x800471C4: lui         $t5, 0x8039
    ctx->r13 = S32(0X8039 << 16);
    // 0x800471C8: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800471CC: addiu       $t5, $t5, -0x5300
    ctx->r13 = ADD32(ctx->r13, -0X5300);
    // 0x800471D0: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x800471D4: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800471D8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800471DC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800471E0: jal         0x8005BE40
    // 0x800471E4: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    func_8005BE40(rdram, ctx);
        goto after_3;
    // 0x800471E4: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    after_3:
L_800471E8:
    // 0x800471E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800471EC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800471F0: jr          $ra
    // 0x800471F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800471F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800471F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800471F8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800471FC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80047200: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80047204: lw          $s0, -0x4A4($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X4A4);
    // 0x80047208: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8004720C: beq         $s0, $zero, L_800472E0
    if (ctx->r16 == 0) {
        // 0x80047210: nop
    
            goto L_800472E0;
    }
    // 0x80047210: nop

    // 0x80047214: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x80047218: nop

    // 0x8004721C: bne         $t6, $zero, L_80047234
    if (ctx->r14 != 0) {
        // 0x80047220: nop
    
            goto L_80047234;
    }
    // 0x80047220: nop

    // 0x80047224: jal         0x80047014
    // 0x80047228: nop

    func_80047014(rdram, ctx);
        goto after_0;
    // 0x80047228: nop

    after_0:
    // 0x8004722C: b           L_800472E0
    // 0x80047230: nop

        goto L_800472E0;
    // 0x80047230: nop

L_80047234:
    // 0x80047234: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
    // 0x80047238: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8004723C: bne         $t7, $at, L_80047254
    if (ctx->r15 != ctx->r1) {
        // 0x80047240: nop
    
            goto L_80047254;
    }
    // 0x80047240: nop

    // 0x80047244: jal         0x80047064
    // 0x80047248: nop

    func_80047064(rdram, ctx);
        goto after_1;
    // 0x80047248: nop

    after_1:
    // 0x8004724C: b           L_800472E0
    // 0x80047250: nop

        goto L_800472E0;
    // 0x80047250: nop

L_80047254:
    // 0x80047254: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x80047258: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8004725C: beq         $t8, $at, L_80047274
    if (ctx->r24 == ctx->r1) {
        // 0x80047260: nop
    
            goto L_80047274;
    }
    // 0x80047260: nop

    // 0x80047264: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x80047268: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8004726C: bne         $t9, $at, L_800472D8
    if (ctx->r25 != ctx->r1) {
        // 0x80047270: nop
    
            goto L_800472D8;
    }
    // 0x80047270: nop

L_80047274:
    // 0x80047274: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80047278: jal         0x8005BBFC
    // 0x8004727C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_2;
    // 0x8004727C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_2:
    // 0x80047280: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047284: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x80047288: lw          $a2, 0x1F84($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1F84);
    // 0x8004728C: lw          $a1, 0x1F80($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1F80);
    // 0x80047290: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80047294: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80047298: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004729C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x800472A0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800472A4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x800472A8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x800472AC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x800472B0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800472B4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800472B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800472BC: jal         0x80057460
    // 0x800472C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80057460(rdram, ctx);
        goto after_3;
    // 0x800472C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x800472C4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800472C8: jal         0x8005BE40
    // 0x800472CC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_4;
    // 0x800472CC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_4:
    // 0x800472D0: b           L_800472E0
    // 0x800472D4: nop

        goto L_800472E0;
    // 0x800472D4: nop

L_800472D8:
    // 0x800472D8: jal         0x80046B28
    // 0x800472DC: nop

    func_80046B28(rdram, ctx);
        goto after_5;
    // 0x800472DC: nop

    after_5:
L_800472E0:
    // 0x800472E0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800472E4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800472E8: jr          $ra
    // 0x800472EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800472EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800472F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800472F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800472F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800472F8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800472FC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80047300: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80047304: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80047308: jal         0x8004A34C
    // 0x8004730C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x8004730C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80047310: jal         0x8007E03C
    // 0x80047314: addiu       $a0, $zero, 0x1D8
    ctx->r4 = ADD32(0, 0X1D8);
    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x80047314: addiu       $a0, $zero, 0x1D8
    ctx->r4 = ADD32(0, 0X1D8);
    after_1:
    // 0x80047318: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004731C: sw          $v0, -0x4A4($at)
    MEM_W(-0X4A4, ctx->r1) = ctx->r2;
    // 0x80047320: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80047324: lw          $s0, -0x4A4($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X4A4);
    // 0x80047328: nop

    // 0x8004732C: bne         $s0, $zero, L_80047348
    if (ctx->r16 != 0) {
        // 0x80047330: nop
    
            goto L_80047348;
    }
    // 0x80047330: nop

    // 0x80047334: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80047338: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004733C: addiu       $a1, $a1, -0x49A4
    ctx->r5 = ADD32(ctx->r5, -0X49A4);
    // 0x80047340: jal         0x80083560
    // 0x80047344: addiu       $a0, $a0, -0x49B8
    ctx->r4 = ADD32(ctx->r4, -0X49B8);
    Fault_Assert(rdram, ctx);
        goto after_2;
    // 0x80047344: addiu       $a0, $a0, -0x49B8
    ctx->r4 = ADD32(ctx->r4, -0X49B8);
    after_2:
L_80047348:
    // 0x80047348: lbu         $t6, 0x3B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3B);
    // 0x8004734C: lui         $a0, 0x3
    ctx->r4 = S32(0X3 << 16);
    // 0x80047350: sb          $t6, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r14;
    // 0x80047354: lb          $t7, 0x33($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X33);
    // 0x80047358: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8004735C: ori         $a0, $a0, 0xA988
    ctx->r4 = ctx->r4 | 0XA988;
    // 0x80047360: jal         0x8007E03C
    // 0x80047364: sb          $t7, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r15;
    func_8007E03C(rdram, ctx);
        goto after_3;
    // 0x80047364: sb          $t7, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r15;
    after_3:
    // 0x80047368: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8004736C: sw          $v0, -0x6E24($at)
    MEM_W(-0X6E24, ctx->r1) = ctx->r2;
    // 0x80047370: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80047374: lw          $a0, -0x6E24($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6E24);
    // 0x80047378: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x8004737C: ori         $a1, $a1, 0xD4C0
    ctx->r5 = ctx->r5 | 0XD4C0;
    // 0x80047380: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80047384: jal         0x800A8FC8
    // 0x80047388: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800A8FC8(rdram, ctx);
        goto after_4;
    // 0x80047388: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_4:
    // 0x8004738C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80047390: lw          $t8, -0x6E24($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6E24);
    // 0x80047394: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80047398: addiu       $a0, $a0, -0x6F30
    ctx->r4 = ADD32(ctx->r4, -0X6F30);
    // 0x8004739C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800473A0: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    // 0x800473A4: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x800473A8: jal         0x8008F280
    // 0x800473AC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8008F280(rdram, ctx);
        goto after_5;
    // 0x800473AC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_5:
    // 0x800473B0: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x800473B4: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x800473B8: jal         0x80074888
    // 0x800473BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80074888(rdram, ctx);
        goto after_6;
    // 0x800473BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x800473C0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800473C4: jal         0x8007E03C
    // 0x800473C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8007E03C(rdram, ctx);
        goto after_7;
    // 0x800473C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x800473CC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800473D0: sw          $v0, 0x1F80($at)
    MEM_W(0X1F80, ctx->r1) = ctx->r2;
    // 0x800473D4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800473D8: lw          $a1, 0x1F80($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1F80);
    // 0x800473DC: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x800473E0: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x800473E4: jal         0x800746C0
    // 0x800473E8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800746C0(rdram, ctx);
        goto after_8;
    // 0x800473E8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_8:
    // 0x800473EC: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x800473F0: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x800473F4: jal         0x80074888
    // 0x800473F8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80074888(rdram, ctx);
        goto after_9;
    // 0x800473F8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_9:
    // 0x800473FC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80047400: jal         0x8007E03C
    // 0x80047404: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8007E03C(rdram, ctx);
        goto after_10;
    // 0x80047404: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x80047408: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004740C: sw          $v0, 0x1F84($at)
    MEM_W(0X1F84, ctx->r1) = ctx->r2;
    // 0x80047410: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047414: lw          $a1, 0x1F84($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1F84);
    // 0x80047418: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8004741C: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x80047420: jal         0x800746C0
    // 0x80047424: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800746C0(rdram, ctx);
        goto after_11;
    // 0x80047424: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_11:
    // 0x80047428: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8004742C: jal         0x8009FA2C
    // 0x80047430: addiu       $a0, $a0, -0x6F30
    ctx->r4 = ADD32(ctx->r4, -0X6F30);
    func_8009FA2C(rdram, ctx);
        goto after_12;
    // 0x80047430: addiu       $a0, $a0, -0x6F30
    ctx->r4 = ADD32(ctx->r4, -0X6F30);
    after_12:
    // 0x80047434: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80047438: sb          $t9, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r25;
    // 0x8004743C: lbu         $t0, 0x37($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X37);
    // 0x80047440: nop

    // 0x80047444: sb          $t0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r8;
    // 0x80047448: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8004744C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80047450: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80047454: jr          $ra
    // 0x80047458: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80047458: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8004745C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004745C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80047460: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80047464: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80047468: lw          $s0, -0x4A4($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X4A4);
    // 0x8004746C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80047470: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80047474: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80047478: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8004747C: jal         0x80046798
    // 0x80047480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80046798(rdram, ctx);
        goto after_0;
    // 0x80047480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80047484: jal         0x800773D0
    // 0x80047488: addiu       $a0, $s0, 0xE8
    ctx->r4 = ADD32(ctx->r16, 0XE8);
    func_800773D0(rdram, ctx);
        goto after_1;
    // 0x80047488: addiu       $a0, $s0, 0xE8
    ctx->r4 = ADD32(ctx->r16, 0XE8);
    after_1:
    // 0x8004748C: jal         0x800773D0
    // 0x80047490: addiu       $a0, $s0, 0x160
    ctx->r4 = ADD32(ctx->r16, 0X160);
    func_800773D0(rdram, ctx);
        goto after_2;
    // 0x80047490: addiu       $a0, $s0, 0x160
    ctx->r4 = ADD32(ctx->r16, 0X160);
    after_2:
    // 0x80047494: jal         0x800572F8
    // 0x80047498: addiu       $a0, $s0, 0xD4
    ctx->r4 = ADD32(ctx->r16, 0XD4);
    func_800572F8(rdram, ctx);
        goto after_3;
    // 0x80047498: addiu       $a0, $s0, 0xD4
    ctx->r4 = ADD32(ctx->r16, 0XD4);
    after_3:
    // 0x8004749C: lbu         $t6, 0x2($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2);
    // 0x800474A0: nop

    // 0x800474A4: beq         $t6, $zero, L_800474BC
    if (ctx->r14 == 0) {
        // 0x800474A8: nop
    
            goto L_800474BC;
    }
    // 0x800474A8: nop

    // 0x800474AC: jal         0x800572F8
    // 0x800474B0: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    func_800572F8(rdram, ctx);
        goto after_4;
    // 0x800474B0: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    after_4:
    // 0x800474B4: jal         0x800572F8
    // 0x800474B8: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    func_800572F8(rdram, ctx);
        goto after_5;
    // 0x800474B8: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    after_5:
L_800474BC:
    // 0x800474BC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800474C0: slti        $at, $s1, 0x8
    ctx->r1 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x800474C4: beq         $at, $zero, L_800474FC
    if (ctx->r1 == 0) {
        // 0x800474C8: nop
    
            goto L_800474FC;
    }
    // 0x800474C8: nop

L_800474CC:
    // 0x800474CC: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x800474D0: addu        $t7, $t7, $s1
    ctx->r15 = ADD32(ctx->r15, ctx->r17);
    // 0x800474D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800474D8: addu        $a0, $s0, $t7
    ctx->r4 = ADD32(ctx->r16, ctx->r15);
    // 0x800474DC: jal         0x800572F8
    // 0x800474E0: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    func_800572F8(rdram, ctx);
        goto after_6;
    // 0x800474E0: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    after_6:
    // 0x800474E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800474E8: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x800474EC: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x800474F0: slti        $at, $s1, 0x8
    ctx->r1 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x800474F4: bne         $at, $zero, L_800474CC
    if (ctx->r1 != 0) {
        // 0x800474F8: nop
    
            goto L_800474CC;
    }
    // 0x800474F8: nop

L_800474FC:
    // 0x800474FC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80047500: lw          $a0, 0x1F80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F80);
    // 0x80047504: jal         0x8007E328
    // 0x80047508: nop

    func_8007E328(rdram, ctx);
        goto after_7;
    // 0x80047508: nop

    after_7:
    // 0x8004750C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80047510: lw          $a0, 0x1F84($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1F84);
    // 0x80047514: jal         0x8007E328
    // 0x80047518: nop

    func_8007E328(rdram, ctx);
        goto after_8;
    // 0x80047518: nop

    after_8:
    // 0x8004751C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80047520: lbu         $s1, 0x3($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X3);
    // 0x80047524: lbu         $s2, 0x0($s0)
    ctx->r18 = MEM_BU(ctx->r16, 0X0);
    // 0x80047528: lw          $a0, -0x4A4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4A4);
    // 0x8004752C: jal         0x8007E328
    // 0x80047530: nop

    func_8007E328(rdram, ctx);
        goto after_9;
    // 0x80047530: nop

    after_9:
    // 0x80047534: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80047538: jal         0x8004A34C
    // 0x8004753C: sw          $zero, -0x4A4($at)
    MEM_W(-0X4A4, ctx->r1) = 0;
    func_8004A34C(rdram, ctx);
        goto after_10;
    // 0x8004753C: sw          $zero, -0x4A4($at)
    MEM_W(-0X4A4, ctx->r1) = 0;
    after_10:
    // 0x80047540: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80047544: sb          $zero, 0x3CF0($at)
    MEM_B(0X3CF0, ctx->r1) = 0;
    // 0x80047548: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8004754C: bne         $s2, $at, L_800475DC
    if (ctx->r18 != ctx->r1) {
        // 0x80047550: nop
    
            goto L_800475DC;
    }
    // 0x80047550: nop

    // 0x80047554: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80047558: lb          $t9, -0x7C8($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X7C8);
    // 0x8004755C: nop

    // 0x80047560: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80047564: beq         $at, $zero, L_80047590
    if (ctx->r1 == 0) {
        // 0x80047568: nop
    
            goto L_80047590;
    }
    // 0x80047568: nop

    // 0x8004756C: jal         0x8004624C
    // 0x80047570: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8004624C(rdram, ctx);
        goto after_11;
    // 0x80047570: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x80047574: sll         $s3, $v0, 24
    ctx->r19 = S32(ctx->r2 << 24);
    // 0x80047578: sra         $t0, $s3, 24
    ctx->r8 = S32(SIGNED(ctx->r19) >> 24);
    // 0x8004757C: or          $s3, $t0, $zero
    ctx->r19 = ctx->r8 | 0;
    // 0x80047580: jal         0x80045BDC
    // 0x80047584: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80045BDC(rdram, ctx);
        goto after_12;
    // 0x80047584: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_12:
    // 0x80047588: b           L_800475CC
    // 0x8004758C: nop

        goto L_800475CC;
    // 0x8004758C: nop

L_80047590:
    // 0x80047590: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80047594: lb          $t1, -0x7C8($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X7C8);
    // 0x80047598: nop

    // 0x8004759C: bne         $s1, $t1, L_800475CC
    if (ctx->r17 != ctx->r9) {
        // 0x800475A0: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_800475CC;
    }
    // 0x800475A0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800475A4: bne         $s1, $at, L_800475BC
    if (ctx->r17 != ctx->r1) {
        // 0x800475A8: nop
    
            goto L_800475BC;
    }
    // 0x800475A8: nop

    // 0x800475AC: jal         0x80045BDC
    // 0x800475B0: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    func_80045BDC(rdram, ctx);
        goto after_13;
    // 0x800475B0: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_13:
    // 0x800475B4: b           L_800475CC
    // 0x800475B8: nop

        goto L_800475CC;
    // 0x800475B8: nop

L_800475BC:
    // 0x800475BC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800475C0: lb          $a0, -0x7D0($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X7D0);
    // 0x800475C4: jal         0x80045BDC
    // 0x800475C8: nop

    func_80045BDC(rdram, ctx);
        goto after_14;
    // 0x800475C8: nop

    after_14:
L_800475CC:
    // 0x800475CC: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x800475D0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800475D4: b           L_800476D4
    // 0x800475D8: sb          $t2, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r10;
        goto L_800476D4;
    // 0x800475D8: sb          $t2, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r10;
L_800475DC:
    // 0x800475DC: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x800475E0: lbu         $t3, 0x9F0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X9F0);
    // 0x800475E4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800475E8: bne         $t3, $at, L_80047620
    if (ctx->r11 != ctx->r1) {
        // 0x800475EC: nop
    
            goto L_80047620;
    }
    // 0x800475EC: nop

    // 0x800475F0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800475F4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800475F8: addiu       $a1, $a1, 0x5808
    ctx->r5 = ADD32(ctx->r5, 0X5808);
    // 0x800475FC: jal         0x8009035C
    // 0x80047600: addiu       $a0, $a0, 0x5850
    ctx->r4 = ADD32(ctx->r4, 0X5850);
    func_8009035C(rdram, ctx);
        goto after_15;
    // 0x80047600: addiu       $a0, $a0, 0x5850
    ctx->r4 = ADD32(ctx->r4, 0X5850);
    after_15:
    // 0x80047604: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80047608: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004760C: sb          $t4, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r12;
    // 0x80047610: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80047614: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80047618: b           L_800476D4
    // 0x8004761C: sb          $t5, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r13;
        goto L_800476D4;
    // 0x8004761C: sb          $t5, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r13;
L_80047620:
    // 0x80047620: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80047624: lbu         $t6, 0x9F0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X9F0);
    // 0x80047628: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8004762C: bne         $t6, $at, L_80047664
    if (ctx->r14 != ctx->r1) {
        // 0x80047630: nop
    
            goto L_80047664;
    }
    // 0x80047630: nop

    // 0x80047634: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80047638: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8004763C: addiu       $a1, $a1, 0x5CE8
    ctx->r5 = ADD32(ctx->r5, 0X5CE8);
    // 0x80047640: jal         0x8009035C
    // 0x80047644: addiu       $a0, $a0, 0x5D48
    ctx->r4 = ADD32(ctx->r4, 0X5D48);
    func_8009035C(rdram, ctx);
        goto after_16;
    // 0x80047644: addiu       $a0, $a0, 0x5D48
    ctx->r4 = ADD32(ctx->r4, 0X5D48);
    after_16:
    // 0x80047648: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8004764C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80047650: sb          $t7, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r15;
    // 0x80047654: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80047658: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8004765C: b           L_800476D4
    // 0x80047660: sb          $t8, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r24;
        goto L_800476D4;
    // 0x80047660: sb          $t8, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r24;
L_80047664:
    // 0x80047664: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80047668: lbu         $t9, 0x9F0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X9F0);
    // 0x8004766C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80047670: bne         $t9, $at, L_8004769C
    if (ctx->r25 != ctx->r1) {
        // 0x80047674: nop
    
            goto L_8004769C;
    }
    // 0x80047674: nop

    // 0x80047678: jal         0x800905E8
    // 0x8004767C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800905E8(rdram, ctx);
        goto after_17;
    // 0x8004767C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_17:
    // 0x80047680: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80047684: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80047688: sb          $t0, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r8;
    // 0x8004768C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80047690: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80047694: b           L_800476D4
    // 0x80047698: sb          $t1, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r9;
        goto L_800476D4;
    // 0x80047698: sb          $t1, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r9;
L_8004769C:
    // 0x8004769C: jal         0x80084F80
    // 0x800476A0: nop

    func_80084F80(rdram, ctx);
        goto after_18;
    // 0x800476A0: nop

    after_18:
    // 0x800476A4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800476A8: jal         0x80051618
    // 0x800476AC: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    func_80051618(rdram, ctx);
        goto after_19;
    // 0x800476AC: addiu       $a0, $a0, 0xA00
    ctx->r4 = ADD32(ctx->r4, 0XA00);
    after_19:
    // 0x800476B0: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x800476B4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800476B8: sb          $t2, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r10;
    // 0x800476BC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800476C0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800476C4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800476C8: sb          $t3, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r11;
    // 0x800476CC: jal         0x80085030
    // 0x800476D0: addiu       $a0, $a0, 0x3A90
    ctx->r4 = ADD32(ctx->r4, 0X3A90);
    func_80085030(rdram, ctx);
        goto after_20;
    // 0x800476D0: addiu       $a0, $a0, 0x3A90
    ctx->r4 = ADD32(ctx->r4, 0X3A90);
    after_20:
L_800476D4:
    // 0x800476D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800476D8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800476DC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800476E0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800476E4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800476E8: jr          $ra
    // 0x800476EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800476EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800476F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800476F0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800476F4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800476F8: lbu         $t6, 0x3B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3B);
    // 0x800476FC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80047700: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047704: lbu         $t7, 0x3F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3F);
    // 0x80047708: sb          $t6, 0x1F96($at)
    MEM_B(0X1F96, ctx->r1) = ctx->r14;
    // 0x8004770C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047710: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80047714: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80047718: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8004771C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80047720: bne         $t7, $zero, L_80047778
    if (ctx->r15 != 0) {
        // 0x80047724: sb          $t7, 0x1F90($at)
        MEM_B(0X1F90, ctx->r1) = ctx->r15;
            goto L_80047778;
    }
    // 0x80047724: sb          $t7, 0x1F90($at)
    MEM_B(0X1F90, ctx->r1) = ctx->r15;
    // 0x80047728: addiu       $t8, $zero, 0x73
    ctx->r24 = ADD32(0, 0X73);
    // 0x8004772C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047730: sb          $t8, 0x1F94($at)
    MEM_B(0X1F94, ctx->r1) = ctx->r24;
    // 0x80047734: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80047738: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004773C: addiu       $t9, $zero, 0xC3
    ctx->r25 = ADD32(0, 0XC3);
    // 0x80047740: addiu       $t0, $t0, -0x4A0
    ctx->r8 = ADD32(ctx->r8, -0X4A0);
    // 0x80047744: sb          $t9, 0x1F95($at)
    MEM_B(0X1F95, ctx->r1) = ctx->r25;
    // 0x80047748: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x8004774C: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80047750: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047754: addiu       $t3, $t2, -0x4
    ctx->r11 = ADD32(ctx->r10, -0X4);
    // 0x80047758: sb          $t3, 0x1F91($at)
    MEM_B(0X1F91, ctx->r1) = ctx->r11;
    // 0x8004775C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047760: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80047764: sb          $t4, 0x1F97($at)
    MEM_B(0X1F97, ctx->r1) = ctx->r12;
    // 0x80047768: lbu         $t5, 0x0($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X0);
    // 0x8004776C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047770: b           L_80047898
    // 0x80047774: sb          $t5, 0x1F98($at)
    MEM_B(0X1F98, ctx->r1) = ctx->r13;
        goto L_80047898;
    // 0x80047774: sb          $t5, 0x1F98($at)
    MEM_B(0X1F98, ctx->r1) = ctx->r13;
L_80047778:
    // 0x80047778: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004777C: lbu         $t7, 0x1F90($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1F90);
    // 0x80047780: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80047784: bne         $t7, $at, L_80047844
    if (ctx->r15 != ctx->r1) {
        // 0x80047788: nop
    
            goto L_80047844;
    }
    // 0x80047788: nop

    // 0x8004778C: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x80047790: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047794: sb          $t8, 0x1F95($at)
    MEM_B(0X1F95, ctx->r1) = ctx->r24;
    // 0x80047798: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004779C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800477A0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800477A4: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x800477A8: lbu         $a1, 0x1F96($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1F96);
    // 0x800477AC: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x800477B0: jal         0x80079F74
    // 0x800477B4: sb          $t9, 0x1F97($at)
    MEM_B(0X1F97, ctx->r1) = ctx->r25;
    func_80079F74(rdram, ctx);
        goto after_0;
    // 0x800477B4: sb          $t9, 0x1F97($at)
    MEM_B(0X1F97, ctx->r1) = ctx->r25;
    after_0:
    // 0x800477B8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800477BC: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x800477C0: beq         $at, $zero, L_80047820
    if (ctx->r1 == 0) {
        // 0x800477C4: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_80047820;
    }
    // 0x800477C4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_800477C8:
    // 0x800477C8: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x800477CC: subu        $t6, $t6, $s1
    ctx->r14 = SUB32(ctx->r14, ctx->r17);
    // 0x800477D0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800477D4: addu        $s0, $s2, $t6
    ctx->r16 = ADD32(ctx->r18, ctx->r14);
    // 0x800477D8: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x800477DC: nop

    // 0x800477E0: beq         $t0, $zero, L_80047820
    if (ctx->r8 == 0) {
        // 0x800477E4: nop
    
            goto L_80047820;
    }
    // 0x800477E4: nop

    // 0x800477E8: lbu         $t2, 0xA($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XA);
    // 0x800477EC: nop

    // 0x800477F0: beq         $t2, $zero, L_80047820
    if (ctx->r10 == 0) {
        // 0x800477F4: nop
    
            goto L_80047820;
    }
    // 0x800477F4: nop

    // 0x800477F8: lbu         $t3, 0xA($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XA);
    // 0x800477FC: nop

    // 0x80047800: beq         $t3, $zero, L_80047820
    if (ctx->r11 == 0) {
        // 0x80047804: nop
    
            goto L_80047820;
    }
    // 0x80047804: nop

    // 0x80047808: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004780C: andi        $t4, $s1, 0xFF
    ctx->r12 = ctx->r17 & 0XFF;
    // 0x80047810: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x80047814: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x80047818: bne         $at, $zero, L_800477C8
    if (ctx->r1 != 0) {
        // 0x8004781C: nop
    
            goto L_800477C8;
    }
    // 0x8004781C: nop

L_80047820:
    // 0x80047820: sll         $t1, $s1, 1
    ctx->r9 = S32(ctx->r17 << 1);
    // 0x80047824: addiu       $t5, $t1, 0x13
    ctx->r13 = ADD32(ctx->r9, 0X13);
    // 0x80047828: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004782C: sb          $t5, 0x1F98($at)
    MEM_B(0X1F98, ctx->r1) = ctx->r13;
    // 0x80047830: andi        $t7, $t5, 0xFF
    ctx->r15 = ctx->r13 & 0XFF;
    // 0x80047834: addiu       $t8, $t7, -0xF
    ctx->r24 = ADD32(ctx->r15, -0XF);
    // 0x80047838: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004783C: b           L_80047898
    // 0x80047840: sb          $t8, 0x1F91($at)
    MEM_B(0X1F91, ctx->r1) = ctx->r24;
        goto L_80047898;
    // 0x80047840: sb          $t8, 0x1F91($at)
    MEM_B(0X1F91, ctx->r1) = ctx->r24;
L_80047844:
    // 0x80047844: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x80047848: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004784C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80047850: lbu         $t0, 0x1F96($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X1F96);
    // 0x80047854: sb          $t9, 0x1F94($at)
    MEM_B(0X1F94, ctx->r1) = ctx->r25;
    // 0x80047858: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8004785C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047860: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x80047864: addiu       $t2, $t2, -0x4A0
    ctx->r10 = ADD32(ctx->r10, -0X4A0);
    // 0x80047868: sb          $t6, 0x1F95($at)
    MEM_B(0X1F95, ctx->r1) = ctx->r14;
    // 0x8004786C: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80047870: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x80047874: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047878: addiu       $t1, $t4, -0x4
    ctx->r9 = ADD32(ctx->r12, -0X4);
    // 0x8004787C: sb          $t1, 0x1F91($at)
    MEM_B(0X1F91, ctx->r1) = ctx->r9;
    // 0x80047880: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047884: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80047888: sb          $t5, 0x1F97($at)
    MEM_B(0X1F97, ctx->r1) = ctx->r13;
    // 0x8004788C: lbu         $t7, 0x0($t3)
    ctx->r15 = MEM_BU(ctx->r11, 0X0);
    // 0x80047890: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047894: sb          $t7, 0x1F98($at)
    MEM_B(0X1F98, ctx->r1) = ctx->r15;
L_80047898:
    // 0x80047898: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004789C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800478A0: sb          $zero, 0x1F92($at)
    MEM_B(0X1F92, ctx->r1) = 0;
    // 0x800478A4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800478A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800478AC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800478B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800478B4: sb          $zero, 0x1F93($at)
    MEM_B(0X1F93, ctx->r1) = 0;
    // 0x800478B8: jr          $ra
    // 0x800478BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800478BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800478C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800478C0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x800478C4: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x800478C8: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x800478CC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800478D0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800478D4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800478D8: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x800478DC: lbu         $a1, 0x1F96($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1F96);
    // 0x800478E0: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x800478E4: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x800478E8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x800478EC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x800478F0: jal         0x80079F74
    // 0x800478F4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_80079F74(rdram, ctx);
        goto after_0;
    // 0x800478F4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x800478F8: lbu         $t6, 0x87($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X87);
    // 0x800478FC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80047900: bne         $t6, $zero, L_80047940
    if (ctx->r14 != 0) {
        // 0x80047904: nop
    
            goto L_80047940;
    }
    // 0x80047904: nop

    // 0x80047908: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004790C: addiu       $a1, $a1, -0x4970
    ctx->r5 = ADD32(ctx->r5, -0X4970);
    // 0x80047910: jal         0x800B62D4
    // 0x80047914: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    sprintf_recomp(rdram, ctx);
        goto after_1;
    // 0x80047914: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_1:
    // 0x80047918: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004791C: addiu       $a1, $a1, -0x496C
    ctx->r5 = ADD32(ctx->r5, -0X496C);
    // 0x80047920: jal         0x800B62D4
    // 0x80047924: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    sprintf_recomp(rdram, ctx);
        goto after_2;
    // 0x80047924: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    after_2:
    // 0x80047928: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004792C: addiu       $a1, $a1, -0x4958
    ctx->r5 = ADD32(ctx->r5, -0X4958);
    // 0x80047930: jal         0x800B62D4
    // 0x80047934: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_3;
    // 0x80047934: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x80047938: b           L_80047B34
    // 0x8004793C: nop

        goto L_80047B34;
    // 0x8004793C: nop

L_80047940:
    // 0x80047940: lbu         $t7, 0x87($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X87);
    // 0x80047944: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80047948: bne         $t7, $at, L_80047988
    if (ctx->r15 != ctx->r1) {
        // 0x8004794C: nop
    
            goto L_80047988;
    }
    // 0x8004794C: nop

    // 0x80047950: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047954: addiu       $a1, $a1, -0x4954
    ctx->r5 = ADD32(ctx->r5, -0X4954);
    // 0x80047958: jal         0x800B62D4
    // 0x8004795C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    sprintf_recomp(rdram, ctx);
        goto after_4;
    // 0x8004795C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_4:
    // 0x80047960: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047964: addiu       $a1, $a1, -0x4950
    ctx->r5 = ADD32(ctx->r5, -0X4950);
    // 0x80047968: jal         0x800B62D4
    // 0x8004796C: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    sprintf_recomp(rdram, ctx);
        goto after_5;
    // 0x8004796C: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    after_5:
    // 0x80047970: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047974: addiu       $a1, $a1, -0x4948
    ctx->r5 = ADD32(ctx->r5, -0X4948);
    // 0x80047978: jal         0x800B62D4
    // 0x8004797C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_6;
    // 0x8004797C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_6:
    // 0x80047980: b           L_80047B34
    // 0x80047984: nop

        goto L_80047B34;
    // 0x80047984: nop

L_80047988:
    // 0x80047988: lbu         $t8, 0x87($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X87);
    // 0x8004798C: nop

    // 0x80047990: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x80047994: bne         $at, $zero, L_80047B04
    if (ctx->r1 != 0) {
        // 0x80047998: nop
    
            goto L_80047B04;
    }
    // 0x80047998: nop

    // 0x8004799C: addiu       $t9, $t8, -0x4
    ctx->r25 = ADD32(ctx->r24, -0X4);
    // 0x800479A0: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x800479A4: sb          $t9, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r25;
    // 0x800479A8: bgez        $t0, L_800479BC
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800479AC: andi        $t1, $t0, 0x1
        ctx->r9 = ctx->r8 & 0X1;
            goto L_800479BC;
    }
    // 0x800479AC: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x800479B0: beq         $t1, $zero, L_800479BC
    if (ctx->r9 == 0) {
        // 0x800479B4: nop
    
            goto L_800479BC;
    }
    // 0x800479B4: nop

    // 0x800479B8: addiu       $t1, $t1, -0x2
    ctx->r9 = ADD32(ctx->r9, -0X2);
L_800479BC:
    // 0x800479BC: bne         $t1, $zero, L_80047ACC
    if (ctx->r9 != 0) {
        // 0x800479C0: nop
    
            goto L_80047ACC;
    }
    // 0x800479C0: nop

    // 0x800479C4: andi        $t2, $t9, 0xFF
    ctx->r10 = ctx->r25 & 0XFF;
    // 0x800479C8: bgez        $t2, L_800479D8
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800479CC: sra         $t3, $t2, 1
        ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
            goto L_800479D8;
    }
    // 0x800479CC: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x800479D0: addiu       $at, $t2, 0x1
    ctx->r1 = ADD32(ctx->r10, 0X1);
    // 0x800479D4: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_800479D8:
    // 0x800479D8: slti        $at, $t3, 0xA
    ctx->r1 = SIGNED(ctx->r11) < 0XA ? 1 : 0;
    // 0x800479DC: beq         $at, $zero, L_80047ACC
    if (ctx->r1 == 0) {
        // 0x800479E0: nop
    
            goto L_80047ACC;
    }
    // 0x800479E0: nop

    // 0x800479E4: andi        $t4, $t9, 0xFF
    ctx->r12 = ctx->r25 & 0XFF;
    // 0x800479E8: bgez        $t4, L_800479F8
    if (SIGNED(ctx->r12) >= 0) {
        // 0x800479EC: sra         $t5, $t4, 1
        ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
            goto L_800479F8;
    }
    // 0x800479EC: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x800479F0: addiu       $at, $t4, 0x1
    ctx->r1 = ADD32(ctx->r12, 0X1);
    // 0x800479F4: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_800479F8:
    // 0x800479F8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800479FC: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80047A00: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80047A04: addu        $s0, $s2, $t6
    ctx->r16 = ADD32(ctx->r18, ctx->r14);
    // 0x80047A08: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x80047A0C: nop

    // 0x80047A10: beq         $t7, $zero, L_80047A38
    if (ctx->r15 == 0) {
        // 0x80047A14: nop
    
            goto L_80047A38;
    }
    // 0x80047A14: nop

    // 0x80047A18: lbu         $t8, 0xA($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XA);
    // 0x80047A1C: nop

    // 0x80047A20: beq         $t8, $zero, L_80047A38
    if (ctx->r24 == 0) {
        // 0x80047A24: nop
    
            goto L_80047A38;
    }
    // 0x80047A24: nop

    // 0x80047A28: lbu         $t0, 0xA($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XA);
    // 0x80047A2C: nop

    // 0x80047A30: bne         $t0, $zero, L_80047A70
    if (ctx->r8 != 0) {
        // 0x80047A34: nop
    
            goto L_80047A70;
    }
    // 0x80047A34: nop

L_80047A38:
    // 0x80047A38: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047A3C: addiu       $a1, $a1, -0x4940
    ctx->r5 = ADD32(ctx->r5, -0X4940);
    // 0x80047A40: jal         0x800B62D4
    // 0x80047A44: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    sprintf_recomp(rdram, ctx);
        goto after_7;
    // 0x80047A44: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_7:
    // 0x80047A48: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047A4C: addiu       $a1, $a1, -0x493C
    ctx->r5 = ADD32(ctx->r5, -0X493C);
    // 0x80047A50: jal         0x800B62D4
    // 0x80047A54: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    sprintf_recomp(rdram, ctx);
        goto after_8;
    // 0x80047A54: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    after_8:
    // 0x80047A58: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047A5C: addiu       $a1, $a1, -0x4938
    ctx->r5 = ADD32(ctx->r5, -0X4938);
    // 0x80047A60: jal         0x800B62D4
    // 0x80047A64: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_9;
    // 0x80047A64: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_9:
    // 0x80047A68: b           L_80047B34
    // 0x80047A6C: nop

        goto L_80047B34;
    // 0x80047A6C: nop

L_80047A70:
    // 0x80047A70: lbu         $a2, 0x87($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X87);
    // 0x80047A74: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047A78: addiu       $a1, $a1, -0x4934
    ctx->r5 = ADD32(ctx->r5, -0X4934);
    // 0x80047A7C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x80047A80: bgez        $a2, L_80047A90
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80047A84: sra         $t1, $a2, 1
        ctx->r9 = S32(SIGNED(ctx->r6) >> 1);
            goto L_80047A90;
    }
    // 0x80047A84: sra         $t1, $a2, 1
    ctx->r9 = S32(SIGNED(ctx->r6) >> 1);
    // 0x80047A88: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x80047A8C: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_80047A90:
    // 0x80047A90: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x80047A94: jal         0x800B62D4
    // 0x80047A98: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    sprintf_recomp(rdram, ctx);
        goto after_10;
    // 0x80047A98: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_10:
    // 0x80047A9C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047AA0: addiu       $a1, $a1, -0x4930
    ctx->r5 = ADD32(ctx->r5, -0X4930);
    // 0x80047AA4: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x80047AA8: jal         0x800B62D4
    // 0x80047AAC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    sprintf_recomp(rdram, ctx);
        goto after_11;
    // 0x80047AAC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_11:
    // 0x80047AB0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047AB4: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x80047AB8: addiu       $a1, $a1, -0x4928
    ctx->r5 = ADD32(ctx->r5, -0X4928);
    // 0x80047ABC: jal         0x800B62D4
    // 0x80047AC0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_12;
    // 0x80047AC0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_12:
    // 0x80047AC4: b           L_80047B34
    // 0x80047AC8: nop

        goto L_80047B34;
    // 0x80047AC8: nop

L_80047ACC:
    // 0x80047ACC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047AD0: addiu       $a1, $a1, -0x4920
    ctx->r5 = ADD32(ctx->r5, -0X4920);
    // 0x80047AD4: jal         0x800B62D4
    // 0x80047AD8: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    sprintf_recomp(rdram, ctx);
        goto after_13;
    // 0x80047AD8: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_13:
    // 0x80047ADC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047AE0: addiu       $a1, $a1, -0x491C
    ctx->r5 = ADD32(ctx->r5, -0X491C);
    // 0x80047AE4: jal         0x800B62D4
    // 0x80047AE8: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    sprintf_recomp(rdram, ctx);
        goto after_14;
    // 0x80047AE8: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    after_14:
    // 0x80047AEC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047AF0: addiu       $a1, $a1, -0x4918
    ctx->r5 = ADD32(ctx->r5, -0X4918);
    // 0x80047AF4: jal         0x800B62D4
    // 0x80047AF8: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_15;
    // 0x80047AF8: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_15:
    // 0x80047AFC: b           L_80047B34
    // 0x80047B00: nop

        goto L_80047B34;
    // 0x80047B00: nop

L_80047B04:
    // 0x80047B04: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047B08: addiu       $a1, $a1, -0x4914
    ctx->r5 = ADD32(ctx->r5, -0X4914);
    // 0x80047B0C: jal         0x800B62D4
    // 0x80047B10: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    sprintf_recomp(rdram, ctx);
        goto after_16;
    // 0x80047B10: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_16:
    // 0x80047B14: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047B18: addiu       $a1, $a1, -0x4910
    ctx->r5 = ADD32(ctx->r5, -0X4910);
    // 0x80047B1C: jal         0x800B62D4
    // 0x80047B20: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    sprintf_recomp(rdram, ctx);
        goto after_17;
    // 0x80047B20: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    after_17:
    // 0x80047B24: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047B28: addiu       $a1, $a1, -0x490C
    ctx->r5 = ADD32(ctx->r5, -0X490C);
    // 0x80047B2C: jal         0x800B62D4
    // 0x80047B30: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_18;
    // 0x80047B30: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_18:
L_80047B34:
    // 0x80047B34: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80047B38: jal         0x80077D88
    // 0x80047B3C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_80077D88(rdram, ctx);
        goto after_19;
    // 0x80047B3C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_19:
    // 0x80047B40: addiu       $t2, $zero, 0x14A
    ctx->r10 = ADD32(0, 0X14A);
    // 0x80047B44: lhu         $t8, 0x8E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X8E);
    // 0x80047B48: lhu         $t0, 0x92($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X92);
    // 0x80047B4C: subu        $s1, $t2, $v0
    ctx->r17 = SUB32(ctx->r10, ctx->r2);
    // 0x80047B50: andi        $t3, $s1, 0xFFFF
    ctx->r11 = ctx->r17 & 0XFFFF;
    // 0x80047B54: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80047B58: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x80047B5C: lhu         $a3, 0x8A($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X8A);
    // 0x80047B60: addiu       $t9, $sp, 0x70
    ctx->r25 = ADD32(ctx->r29, 0X70);
    // 0x80047B64: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80047B68: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80047B6C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80047B70: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80047B74: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80047B78: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80047B7C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80047B80: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80047B84: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80047B88: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80047B8C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80047B90: addiu       $a2, $zero, 0x39
    ctx->r6 = ADD32(0, 0X39);
    // 0x80047B94: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80047B98: jal         0x80077EE0
    // 0x80047B9C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_80077EE0(rdram, ctx);
        goto after_20;
    // 0x80047B9C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_20:
    // 0x80047BA0: lhu         $t5, 0x8E($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X8E);
    // 0x80047BA4: lhu         $t6, 0x92($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X92);
    // 0x80047BA8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80047BAC: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x80047BB0: lhu         $a3, 0x8A($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X8A);
    // 0x80047BB4: addiu       $t1, $sp, 0x5C
    ctx->r9 = ADD32(ctx->r29, 0X5C);
    // 0x80047BB8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80047BBC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80047BC0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80047BC4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80047BC8: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80047BCC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80047BD0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80047BD4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80047BD8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80047BDC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80047BE0: addiu       $a2, $zero, 0x55
    ctx->r6 = ADD32(0, 0X55);
    // 0x80047BE4: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80047BE8: jal         0x80077EE0
    // 0x80047BEC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_80077EE0(rdram, ctx);
        goto after_21;
    // 0x80047BEC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_21:
    // 0x80047BF0: lhu         $t3, 0x8E($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X8E);
    // 0x80047BF4: lhu         $t9, 0x92($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X92);
    // 0x80047BF8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80047BFC: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x80047C00: lhu         $a3, 0x8A($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X8A);
    // 0x80047C04: addiu       $t7, $sp, 0x48
    ctx->r15 = ADD32(ctx->r29, 0X48);
    // 0x80047C08: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80047C0C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80047C10: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80047C14: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80047C18: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80047C1C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80047C20: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80047C24: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80047C28: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80047C2C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80047C30: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80047C34: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80047C38: jal         0x80077EE0
    // 0x80047C3C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    func_80077EE0(rdram, ctx);
        goto after_22;
    // 0x80047C3C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    after_22:
    // 0x80047C40: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80047C44: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80047C48: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80047C4C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80047C50: jr          $ra
    // 0x80047C54: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80047C54: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80047C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047C58: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80047C5C: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x80047C60: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x80047C64: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80047C68: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80047C6C: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80047C70: lbu         $t7, 0x1F90($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1F90);
    // 0x80047C74: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80047C78: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80047C7C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80047C80: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80047C84: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x80047C88: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x80047C8C: lbu         $s1, 0x1F95($s1)
    ctx->r17 = MEM_BU(ctx->r17, 0X1F95);
    // 0x80047C90: lbu         $s3, 0x1F91($s3)
    ctx->r19 = MEM_BU(ctx->r19, 0X1F91);
    // 0x80047C94: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80047C98: lbu         $s2, 0x77($t6)
    ctx->r18 = MEM_BU(ctx->r14, 0X77);
    // 0x80047C9C: bne         $t7, $at, L_80047CCC
    if (ctx->r15 != ctx->r1) {
        // 0x80047CA0: nop
    
            goto L_80047CCC;
    }
    // 0x80047CA0: nop

    // 0x80047CA4: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x80047CA8: lbu         $a3, 0x1F92($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X1F92);
    // 0x80047CAC: addiu       $t8, $s2, -0x1
    ctx->r24 = ADD32(ctx->r18, -0X1);
    // 0x80047CB0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80047CB4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80047CB8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80047CBC: jal         0x800478C0
    // 0x80047CC0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800478C0(rdram, ctx);
        goto after_0;
    // 0x80047CC0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
    // 0x80047CC4: b           L_80047D58
    // 0x80047CC8: nop

        goto L_80047D58;
    // 0x80047CC8: nop

L_80047CCC:
    // 0x80047CCC: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80047CD0: lbu         $t9, 0x1F96($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X1F96);
    // 0x80047CD4: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80047CD8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80047CDC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80047CE0: lw          $t1, -0x2E8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2E8);
    // 0x80047CE4: sll         $t2, $s3, 2
    ctx->r10 = S32(ctx->r19 << 2);
    // 0x80047CE8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80047CEC: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x80047CF0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047CF4: addiu       $a1, $a1, -0x4908
    ctx->r5 = ADD32(ctx->r5, -0X4908);
    // 0x80047CF8: jal         0x800B62D4
    // 0x80047CFC: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    sprintf_recomp(rdram, ctx);
        goto after_1;
    // 0x80047CFC: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    after_1:
    // 0x80047D00: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80047D04: lbu         $t9, 0x1F92($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X1F92);
    // 0x80047D08: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x80047D0C: lbu         $a2, 0x1F94($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X1F94);
    // 0x80047D10: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80047D14: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x80047D18: addiu       $t4, $sp, 0x54
    ctx->r12 = ADD32(ctx->r29, 0X54);
    // 0x80047D1C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80047D20: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80047D24: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80047D28: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80047D2C: addiu       $t0, $s2, -0x1
    ctx->r8 = ADD32(ctx->r18, -0X1);
    // 0x80047D30: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80047D34: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80047D38: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80047D3C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80047D40: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80047D44: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80047D48: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80047D4C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x80047D50: jal         0x80077EE0
    // 0x80047D54: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_80077EE0(rdram, ctx);
        goto after_2;
    // 0x80047D54: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_2:
L_80047D58:
    // 0x80047D58: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80047D5C: lbu         $t1, 0x1F92($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X1F92);
    // 0x80047D60: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80047D64: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80047D68: subu        $t2, $s2, $t1
    ctx->r10 = SUB32(ctx->r18, ctx->r9);
    // 0x80047D6C: lbu         $t5, 0x1F98($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X1F98);
    // 0x80047D70: addu        $s1, $s1, $t2
    ctx->r17 = ADD32(ctx->r17, ctx->r10);
    // 0x80047D74: andi        $t4, $s3, 0xFF
    ctx->r12 = ctx->r19 & 0XFF;
    // 0x80047D78: andi        $t3, $s1, 0xFF
    ctx->r11 = ctx->r17 & 0XFF;
    // 0x80047D7C: or          $s3, $t4, $zero
    ctx->r19 = ctx->r12 | 0;
    // 0x80047D80: bne         $s3, $t5, L_80047D8C
    if (ctx->r19 != ctx->r13) {
        // 0x80047D84: or          $s1, $t3, $zero
        ctx->r17 = ctx->r11 | 0;
            goto L_80047D8C;
    }
    // 0x80047D84: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80047D88: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80047D8C:
    // 0x80047D8C: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80047D90: lbu         $t7, 0x1F97($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1F97);
    // 0x80047D94: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80047D98: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80047D9C: beq         $at, $zero, L_80047E9C
    if (ctx->r1 == 0) {
        // 0x80047DA0: nop
    
            goto L_80047E9C;
    }
    // 0x80047DA0: nop

L_80047DA4:
    // 0x80047DA4: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80047DA8: lbu         $t6, 0x1F90($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1F90);
    // 0x80047DAC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80047DB0: bne         $t6, $at, L_80047DDC
    if (ctx->r14 != ctx->r1) {
        // 0x80047DB4: nop
    
            goto L_80047DDC;
    }
    // 0x80047DB4: nop

    // 0x80047DB8: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x80047DBC: addiu       $t8, $s2, -0x1
    ctx->r24 = ADD32(ctx->r18, -0X1);
    // 0x80047DC0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80047DC4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80047DC8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80047DCC: jal         0x800478C0
    // 0x80047DD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800478C0(rdram, ctx);
        goto after_3;
    // 0x80047DD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x80047DD4: b           L_80047E54
    // 0x80047DD8: nop

        goto L_80047E54;
    // 0x80047DD8: nop

L_80047DDC:
    // 0x80047DDC: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80047DE0: lbu         $t9, 0x1F96($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X1F96);
    // 0x80047DE4: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80047DE8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80047DEC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80047DF0: lw          $t1, -0x2E8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2E8);
    // 0x80047DF4: sll         $t2, $s3, 2
    ctx->r10 = S32(ctx->r19 << 2);
    // 0x80047DF8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80047DFC: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x80047E00: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047E04: addiu       $a1, $a1, -0x4904
    ctx->r5 = ADD32(ctx->r5, -0X4904);
    // 0x80047E08: jal         0x800B62D4
    // 0x80047E0C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    sprintf_recomp(rdram, ctx);
        goto after_4;
    // 0x80047E0C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    after_4:
    // 0x80047E10: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x80047E14: lbu         $a2, 0x1F94($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X1F94);
    // 0x80047E18: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80047E1C: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x80047E20: addiu       $t4, $sp, 0x54
    ctx->r12 = ADD32(ctx->r29, 0X54);
    // 0x80047E24: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80047E28: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80047E2C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80047E30: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80047E34: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80047E38: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80047E3C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80047E40: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80047E44: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80047E48: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80047E4C: jal         0x80077960
    // 0x80047E50: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80077960(rdram, ctx);
        goto after_5;
    // 0x80047E50: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_5:
L_80047E54:
    // 0x80047E54: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80047E58: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80047E5C: lbu         $t1, 0x1F98($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X1F98);
    // 0x80047E60: addu        $s1, $s1, $s2
    ctx->r17 = ADD32(ctx->r17, ctx->r18);
    // 0x80047E64: andi        $t0, $s3, 0xFF
    ctx->r8 = ctx->r19 & 0XFF;
    // 0x80047E68: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x80047E6C: or          $s3, $t0, $zero
    ctx->r19 = ctx->r8 | 0;
    // 0x80047E70: bne         $s3, $t1, L_80047E7C
    if (ctx->r19 != ctx->r9) {
        // 0x80047E74: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_80047E7C;
    }
    // 0x80047E74: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x80047E78: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80047E7C:
    // 0x80047E7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80047E80: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80047E84: lbu         $t3, 0x1F97($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X1F97);
    // 0x80047E88: andi        $t2, $s0, 0xFF
    ctx->r10 = ctx->r16 & 0XFF;
    // 0x80047E8C: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80047E90: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80047E94: bne         $at, $zero, L_80047DA4
    if (ctx->r1 != 0) {
        // 0x80047E98: nop
    
            goto L_80047DA4;
    }
    // 0x80047E98: nop

L_80047E9C:
    // 0x80047E9C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80047EA0: lbu         $t4, 0x1F90($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X1F90);
    // 0x80047EA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80047EA8: bne         $t4, $at, L_80047ED8
    if (ctx->r12 != ctx->r1) {
        // 0x80047EAC: nop
    
            goto L_80047ED8;
    }
    // 0x80047EAC: nop

    // 0x80047EB0: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80047EB4: lbu         $t5, 0x1F92($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X1F92);
    // 0x80047EB8: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x80047EBC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80047EC0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80047EC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80047EC8: jal         0x800478C0
    // 0x80047ECC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_800478C0(rdram, ctx);
        goto after_6;
    // 0x80047ECC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_6:
    // 0x80047ED0: b           L_80047F60
    // 0x80047ED4: nop

        goto L_80047F60;
    // 0x80047ED4: nop

L_80047ED8:
    // 0x80047ED8: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80047EDC: lbu         $t7, 0x1F96($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1F96);
    // 0x80047EE0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80047EE4: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80047EE8: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80047EEC: lw          $t8, -0x2E8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2E8);
    // 0x80047EF0: sll         $t9, $s3, 2
    ctx->r25 = S32(ctx->r19 << 2);
    // 0x80047EF4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80047EF8: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80047EFC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80047F00: addiu       $a1, $a1, -0x4900
    ctx->r5 = ADD32(ctx->r5, -0X4900);
    // 0x80047F04: jal         0x800B62D4
    // 0x80047F08: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    sprintf_recomp(rdram, ctx);
        goto after_7;
    // 0x80047F08: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    after_7:
    // 0x80047F0C: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80047F10: lbu         $t7, 0x1F92($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1F92);
    // 0x80047F14: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x80047F18: lbu         $a2, 0x1F94($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X1F94);
    // 0x80047F1C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80047F20: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x80047F24: addiu       $t1, $sp, 0x54
    ctx->r9 = ADD32(ctx->r29, 0X54);
    // 0x80047F28: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80047F2C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80047F30: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80047F34: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80047F38: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80047F3C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80047F40: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80047F44: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80047F48: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80047F4C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80047F50: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x80047F54: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80047F58: jal         0x80077EE0
    // 0x80047F5C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    func_80077EE0(rdram, ctx);
        goto after_8;
    // 0x80047F5C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_8:
L_80047F60:
    // 0x80047F60: jal         0x800A3AF0
    // 0x80047F64: nop

    func_800A3AF0(rdram, ctx);
        goto after_9;
    // 0x80047F64: nop

    after_9:
    // 0x80047F68: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80047F6C: lbu         $t6, 0x1F93($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1F93);
    // 0x80047F70: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80047F74: addu        $t8, $t6, $s4
    ctx->r24 = ADD32(ctx->r14, ctx->r20);
    // 0x80047F78: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047F7C: sb          $t8, 0x1F93($at)
    MEM_B(0X1F93, ctx->r1) = ctx->r24;
    // 0x80047F80: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x80047F84: slti        $at, $t9, 0x8
    ctx->r1 = SIGNED(ctx->r25) < 0X8 ? 1 : 0;
    // 0x80047F88: bne         $at, $zero, L_80047FF8
    if (ctx->r1 != 0) {
        // 0x80047F8C: nop
    
            goto L_80047FF8;
    }
    // 0x80047F8C: nop

    // 0x80047F90: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80047F94: lbu         $t0, 0x1F92($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X1F92);
    // 0x80047F98: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047F9C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80047FA0: sb          $t1, 0x1F92($at)
    MEM_B(0X1F92, ctx->r1) = ctx->r9;
    // 0x80047FA4: andi        $t2, $t8, 0xFF
    ctx->r10 = ctx->r24 & 0XFF;
    // 0x80047FA8: addiu       $t3, $t2, -0x8
    ctx->r11 = ADD32(ctx->r10, -0X8);
    // 0x80047FAC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047FB0: sb          $t3, 0x1F93($at)
    MEM_B(0X1F93, ctx->r1) = ctx->r11;
    // 0x80047FB4: andi        $t4, $t1, 0xFF
    ctx->r12 = ctx->r9 & 0XFF;
    // 0x80047FB8: slt         $at, $t4, $s2
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80047FBC: bne         $at, $zero, L_80047FF8
    if (ctx->r1 != 0) {
        // 0x80047FC0: nop
    
            goto L_80047FF8;
    }
    // 0x80047FC0: nop

    // 0x80047FC4: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80047FC8: lbu         $t5, 0x1F91($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X1F91);
    // 0x80047FCC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047FD0: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80047FD4: lbu         $t9, 0x1F98($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X1F98);
    // 0x80047FD8: sb          $zero, 0x1F92($at)
    MEM_B(0X1F92, ctx->r1) = 0;
    // 0x80047FDC: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x80047FE0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047FE4: andi        $t6, $t7, 0xFF
    ctx->r14 = ctx->r15 & 0XFF;
    // 0x80047FE8: bne         $t6, $t9, L_80047FF8
    if (ctx->r14 != ctx->r25) {
        // 0x80047FEC: sb          $t7, 0x1F91($at)
        MEM_B(0X1F91, ctx->r1) = ctx->r15;
            goto L_80047FF8;
    }
    // 0x80047FEC: sb          $t7, 0x1F91($at)
    MEM_B(0X1F91, ctx->r1) = ctx->r15;
    // 0x80047FF0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80047FF4: sb          $zero, 0x1F91($at)
    MEM_B(0X1F91, ctx->r1) = 0;
L_80047FF8:
    // 0x80047FF8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80047FFC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80048000: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80048004: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80048008: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8004800C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80048010: jr          $ra
    // 0x80048014: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x80048014: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x80048018: nop

    // 0x8004801C: nop

;}
RECOMP_FUNC void func_80048020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048020: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80048024: lw          $t6, 0x20C4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C4);
    // 0x80048028: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8004802C: beq         $t6, $zero, L_80048078
    if (ctx->r14 == 0) {
        // 0x80048030: nop
    
            goto L_80048078;
    }
    // 0x80048030: nop

    // 0x80048034: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80048038: lhu         $t8, 0x20B0($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X20B0);
    // 0x8004803C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80048040: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80048044: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80048048: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004804C: lw          $t7, 0x20C0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X20C0);
    // 0x80048050: lw          $t0, 0x20B8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X20B8);
    // 0x80048054: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80048058: subu        $a0, $t7, $t0
    ctx->r4 = SUB32(ctx->r15, ctx->r8);
    // 0x8004805C: lw          $t2, -0x2C0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X2C0);
    // 0x80048060: sra         $t1, $a0, 3
    ctx->r9 = S32(SIGNED(ctx->r4) >> 3);
    // 0x80048064: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80048068: sltu        $at, $t2, $a0
    ctx->r1 = ctx->r10 < ctx->r4 ? 1 : 0;
    // 0x8004806C: beq         $at, $zero, L_80048078
    if (ctx->r1 == 0) {
        // 0x80048070: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_80048078;
    }
    // 0x80048070: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80048074: sw          $a0, -0x2C0($at)
    MEM_W(-0X2C0, ctx->r1) = ctx->r4;
L_80048078:
    // 0x80048078: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8004807C: lw          $t3, 0x20D4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X20D4);
    // 0x80048080: nop

    // 0x80048084: beq         $t3, $zero, L_800480D0
    if (ctx->r11 == 0) {
        // 0x80048088: nop
    
            goto L_800480D0;
    }
    // 0x80048088: nop

    // 0x8004808C: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80048090: lhu         $t5, 0x20B0($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X20B0);
    // 0x80048094: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80048098: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8004809C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x800480A0: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x800480A4: lw          $t4, 0x20D0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X20D0);
    // 0x800480A8: lw          $t8, 0x20C8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X20C8);
    // 0x800480AC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800480B0: subu        $a0, $t4, $t8
    ctx->r4 = SUB32(ctx->r12, ctx->r24);
    // 0x800480B4: lw          $t7, -0x2BC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2BC);
    // 0x800480B8: sra         $t9, $a0, 4
    ctx->r25 = S32(SIGNED(ctx->r4) >> 4);
    // 0x800480BC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x800480C0: sltu        $at, $t7, $a0
    ctx->r1 = ctx->r15 < ctx->r4 ? 1 : 0;
    // 0x800480C4: beq         $at, $zero, L_800480D0
    if (ctx->r1 == 0) {
        // 0x800480C8: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_800480D0;
    }
    // 0x800480C8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800480CC: sw          $a0, -0x2BC($at)
    MEM_W(-0X2BC, ctx->r1) = ctx->r4;
L_800480D0:
    // 0x800480D0: jr          $ra
    // 0x800480D4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800480D4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800480D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800480D8: jr          $ra
    // 0x800480DC: nop

    return;
    // 0x800480DC: nop

;}
RECOMP_FUNC void func_800480E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800480E0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x800480E4: lhu         $t7, 0x20B0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X20B0);
    // 0x800480E8: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x800480EC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800480F0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800480F4: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x800480F8: lw          $t0, 0x20C4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X20C4);
    // 0x800480FC: lw          $t9, 0x20B8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X20B8);
    // 0x80048100: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80048104: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x80048108: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8004810C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80048110: sltu        $at, $t1, $t6
    ctx->r1 = ctx->r9 < ctx->r14 ? 1 : 0;
    // 0x80048114: beq         $at, $zero, L_80048140
    if (ctx->r1 == 0) {
        // 0x80048118: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80048140;
    }
    // 0x80048118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004811C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80048120: addiu       $a1, $a1, -0x3FE0
    ctx->r5 = ADD32(ctx->r5, -0X3FE0);
    // 0x80048124: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80048128: jal         0x800B62D4
    // 0x8004812C: srl         $a2, $t0, 3
    ctx->r6 = S32(U32(ctx->r8) >> 3);
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x8004812C: srl         $a2, $t0, 3
    ctx->r6 = S32(U32(ctx->r8) >> 3);
    after_0:
    // 0x80048130: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80048134: addiu       $a0, $a0, -0x3FD0
    ctx->r4 = ADD32(ctx->r4, -0X3FD0);
    // 0x80048138: jal         0x80083560
    // 0x8004813C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    Fault_Assert(rdram, ctx);
        goto after_1;
    // 0x8004813C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
L_80048140:
    // 0x80048140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048144: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80048148: jr          $ra
    // 0x8004814C: nop

    return;
    // 0x8004814C: nop

;}
RECOMP_FUNC void func_80048150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048150: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80048154: lhu         $t7, 0x20B0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X20B0);
    // 0x80048158: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004815C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80048160: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80048164: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80048168: lw          $t0, 0x20D4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X20D4);
    // 0x8004816C: lw          $t9, 0x20C8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X20C8);
    // 0x80048170: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80048174: lw          $t6, 0x20D0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20D0);
    // 0x80048178: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8004817C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80048180: sltu        $at, $t1, $t6
    ctx->r1 = ctx->r9 < ctx->r14 ? 1 : 0;
    // 0x80048184: beq         $at, $zero, L_800481B0
    if (ctx->r1 == 0) {
        // 0x80048188: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800481B0;
    }
    // 0x80048188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004818C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80048190: addiu       $a1, $a1, -0x3FC0
    ctx->r5 = ADD32(ctx->r5, -0X3FC0);
    // 0x80048194: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80048198: jal         0x800B62D4
    // 0x8004819C: srl         $a2, $t0, 4
    ctx->r6 = S32(U32(ctx->r8) >> 4);
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x8004819C: srl         $a2, $t0, 4
    ctx->r6 = S32(U32(ctx->r8) >> 4);
    after_0:
    // 0x800481A0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800481A4: addiu       $a0, $a0, -0x3FB0
    ctx->r4 = ADD32(ctx->r4, -0X3FB0);
    // 0x800481A8: jal         0x80083560
    // 0x800481AC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    Fault_Assert(rdram, ctx);
        goto after_1;
    // 0x800481AC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
L_800481B0:
    // 0x800481B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800481B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800481B8: jr          $ra
    // 0x800481BC: nop

    return;
    // 0x800481BC: nop

;}
RECOMP_FUNC void func_800481C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800481C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800481C4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800481C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800481CC: sw          $zero, -0x2C0($at)
    MEM_W(-0X2C0, ctx->r1) = 0;
    // 0x800481D0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800481D4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800481D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800481DC: sw          $zero, -0x2BC($at)
    MEM_W(-0X2BC, ctx->r1) = 0;
    // 0x800481E0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800481E4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800481E8: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x800481EC: sw          $t7, 0x20C4($at)
    MEM_W(0X20C4, ctx->r1) = ctx->r15;
    // 0x800481F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800481F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800481F8: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x800481FC: jal         0x8004A34C
    // 0x80048200: sw          $t9, 0x20D4($at)
    MEM_W(0X20D4, ctx->r1) = ctx->r25;
    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x80048200: sw          $t9, 0x20D4($at)
    MEM_W(0X20D4, ctx->r1) = ctx->r25;
    after_0:
    // 0x80048204: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80048208: addiu       $t0, $t0, 0x20B8
    ctx->r8 = ADD32(ctx->r8, 0X20B8);
    // 0x8004820C: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x80048210: jal         0x8007E328
    // 0x80048214: nop

    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x80048214: nop

    after_1:
    // 0x80048218: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8004821C: addiu       $t1, $t1, 0x20B8
    ctx->r9 = ADD32(ctx->r9, 0X20B8);
    // 0x80048220: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    // 0x80048224: jal         0x8007E328
    // 0x80048228: nop

    func_8007E328(rdram, ctx);
        goto after_2;
    // 0x80048228: nop

    after_2:
    // 0x8004822C: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80048230: addiu       $t2, $t2, 0x20C8
    ctx->r10 = ADD32(ctx->r10, 0X20C8);
    // 0x80048234: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x80048238: jal         0x8007E328
    // 0x8004823C: nop

    func_8007E328(rdram, ctx);
        goto after_3;
    // 0x8004823C: nop

    after_3:
    // 0x80048240: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80048244: addiu       $t3, $t3, 0x20C8
    ctx->r11 = ADD32(ctx->r11, 0X20C8);
    // 0x80048248: lw          $a0, 0x4($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X4);
    // 0x8004824C: jal         0x8007E328
    // 0x80048250: nop

    func_8007E328(rdram, ctx);
        goto after_4;
    // 0x80048250: nop

    after_4:
    // 0x80048254: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80048258: lw          $t4, 0x20C4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X20C4);
    // 0x8004825C: nop

    // 0x80048260: beq         $t4, $zero, L_80048298
    if (ctx->r12 == 0) {
        // 0x80048264: nop
    
            goto L_80048298;
    }
    // 0x80048264: nop

    // 0x80048268: jal         0x8007E03C
    // 0x8004826C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_8007E03C(rdram, ctx);
        goto after_5;
    // 0x8004826C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_5:
    // 0x80048270: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80048274: addiu       $t5, $t5, 0x20B8
    ctx->r13 = ADD32(ctx->r13, 0X20B8);
    // 0x80048278: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
    // 0x8004827C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80048280: lw          $a0, 0x20C4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20C4);
    // 0x80048284: jal         0x8007E03C
    // 0x80048288: nop

    func_8007E03C(rdram, ctx);
        goto after_6;
    // 0x80048288: nop

    after_6:
    // 0x8004828C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80048290: addiu       $t6, $t6, 0x20B8
    ctx->r14 = ADD32(ctx->r14, 0X20B8);
    // 0x80048294: sw          $v0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r2;
L_80048298:
    // 0x80048298: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004829C: lw          $t7, 0x20D4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X20D4);
    // 0x800482A0: nop

    // 0x800482A4: beq         $t7, $zero, L_800482DC
    if (ctx->r15 == 0) {
        // 0x800482A8: nop
    
            goto L_800482DC;
    }
    // 0x800482A8: nop

    // 0x800482AC: jal         0x8007E03C
    // 0x800482B0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8007E03C(rdram, ctx);
        goto after_7;
    // 0x800482B0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_7:
    // 0x800482B4: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x800482B8: addiu       $t8, $t8, 0x20C8
    ctx->r24 = ADD32(ctx->r24, 0X20C8);
    // 0x800482BC: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    // 0x800482C0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800482C4: lw          $a0, 0x20D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20D4);
    // 0x800482C8: jal         0x8007E03C
    // 0x800482CC: nop

    func_8007E03C(rdram, ctx);
        goto after_8;
    // 0x800482CC: nop

    after_8:
    // 0x800482D0: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x800482D4: addiu       $t9, $t9, 0x20C8
    ctx->r25 = ADD32(ctx->r25, 0X20C8);
    // 0x800482D8: sw          $v0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r2;
L_800482DC:
    // 0x800482DC: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x800482E0: lhu         $t0, 0x20B0($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X20B0);
    // 0x800482E4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x800482E8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800482EC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800482F0: lw          $t2, 0x20B8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X20B8);
    // 0x800482F4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x800482F8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800482FC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80048300: lw          $t3, 0x20C8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X20C8);
    // 0x80048304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048308: sw          $t2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r10;
    // 0x8004830C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80048310: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80048314: jr          $ra
    // 0x80048318: sw          $t3, 0x20D0($at)
    MEM_W(0X20D0, ctx->r1) = ctx->r11;
    return;
    // 0x80048318: sw          $t3, 0x20D0($at)
    MEM_W(0X20D0, ctx->r1) = ctx->r11;
;}
RECOMP_FUNC void func_8004831C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004831C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80048320: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80048324: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80048328: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004832C: sw          $zero, -0x2C0($at)
    MEM_W(-0X2C0, ctx->r1) = 0;
    // 0x80048330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048334: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80048338: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8004833C: jal         0x8004A34C
    // 0x80048340: sw          $t7, 0x20C4($at)
    MEM_W(0X20C4, ctx->r1) = ctx->r15;
    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x80048340: sw          $t7, 0x20C4($at)
    MEM_W(0X20C4, ctx->r1) = ctx->r15;
    after_0:
    // 0x80048344: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80048348: addiu       $t8, $t8, 0x20B8
    ctx->r24 = ADD32(ctx->r24, 0X20B8);
    // 0x8004834C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80048350: jal         0x8007E328
    // 0x80048354: nop

    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x80048354: nop

    after_1:
    // 0x80048358: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004835C: addiu       $t9, $t9, 0x20B8
    ctx->r25 = ADD32(ctx->r25, 0X20B8);
    // 0x80048360: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x80048364: jal         0x8007E328
    // 0x80048368: nop

    func_8007E328(rdram, ctx);
        goto after_2;
    // 0x80048368: nop

    after_2:
    // 0x8004836C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80048370: lw          $t0, 0x20C4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X20C4);
    // 0x80048374: nop

    // 0x80048378: beq         $t0, $zero, L_800483D8
    if (ctx->r8 == 0) {
        // 0x8004837C: nop
    
            goto L_800483D8;
    }
    // 0x8004837C: nop

    // 0x80048380: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80048384: lw          $a0, 0x20C4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20C4);
    // 0x80048388: jal         0x8007E03C
    // 0x8004838C: nop

    func_8007E03C(rdram, ctx);
        goto after_3;
    // 0x8004838C: nop

    after_3:
    // 0x80048390: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80048394: addiu       $t1, $t1, 0x20B8
    ctx->r9 = ADD32(ctx->r9, 0X20B8);
    // 0x80048398: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x8004839C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800483A0: lw          $a0, 0x20C4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20C4);
    // 0x800483A4: jal         0x8007E03C
    // 0x800483A8: nop

    func_8007E03C(rdram, ctx);
        goto after_4;
    // 0x800483A8: nop

    after_4:
    // 0x800483AC: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x800483B0: addiu       $t2, $t2, 0x20B8
    ctx->r10 = ADD32(ctx->r10, 0X20B8);
    // 0x800483B4: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x800483B8: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x800483BC: lhu         $t3, 0x20B0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X20B0);
    // 0x800483C0: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x800483C4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800483C8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800483CC: lw          $t5, 0x20B8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X20B8);
    // 0x800483D0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800483D4: sw          $t5, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r13;
L_800483D8:
    // 0x800483D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800483DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800483E0: jr          $ra
    // 0x800483E4: nop

    return;
    // 0x800483E4: nop

;}
RECOMP_FUNC void func_800483E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800483E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800483EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800483F0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800483F4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800483F8: sw          $zero, -0x2BC($at)
    MEM_W(-0X2BC, ctx->r1) = 0;
    // 0x800483FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048400: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80048404: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80048408: jal         0x8004A34C
    // 0x8004840C: sw          $t7, 0x20D4($at)
    MEM_W(0X20D4, ctx->r1) = ctx->r15;
    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x8004840C: sw          $t7, 0x20D4($at)
    MEM_W(0X20D4, ctx->r1) = ctx->r15;
    after_0:
    // 0x80048410: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80048414: addiu       $t8, $t8, 0x20C8
    ctx->r24 = ADD32(ctx->r24, 0X20C8);
    // 0x80048418: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8004841C: jal         0x8007E328
    // 0x80048420: nop

    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x80048420: nop

    after_1:
    // 0x80048424: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80048428: addiu       $t9, $t9, 0x20C8
    ctx->r25 = ADD32(ctx->r25, 0X20C8);
    // 0x8004842C: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x80048430: jal         0x8007E328
    // 0x80048434: nop

    func_8007E328(rdram, ctx);
        goto after_2;
    // 0x80048434: nop

    after_2:
    // 0x80048438: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8004843C: lw          $t0, 0x20D4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X20D4);
    // 0x80048440: nop

    // 0x80048444: beq         $t0, $zero, L_800484A4
    if (ctx->r8 == 0) {
        // 0x80048448: nop
    
            goto L_800484A4;
    }
    // 0x80048448: nop

    // 0x8004844C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80048450: lw          $a0, 0x20D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20D4);
    // 0x80048454: jal         0x8007E03C
    // 0x80048458: nop

    func_8007E03C(rdram, ctx);
        goto after_3;
    // 0x80048458: nop

    after_3:
    // 0x8004845C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80048460: addiu       $t1, $t1, 0x20C8
    ctx->r9 = ADD32(ctx->r9, 0X20C8);
    // 0x80048464: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x80048468: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004846C: lw          $a0, 0x20D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20D4);
    // 0x80048470: jal         0x8007E03C
    // 0x80048474: nop

    func_8007E03C(rdram, ctx);
        goto after_4;
    // 0x80048474: nop

    after_4:
    // 0x80048478: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8004847C: addiu       $t2, $t2, 0x20C8
    ctx->r10 = ADD32(ctx->r10, 0X20C8);
    // 0x80048480: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x80048484: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80048488: lhu         $t3, 0x20B0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X20B0);
    // 0x8004848C: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80048490: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80048494: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80048498: lw          $t5, 0x20C8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X20C8);
    // 0x8004849C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800484A0: sw          $t5, 0x20D0($at)
    MEM_W(0X20D0, ctx->r1) = ctx->r13;
L_800484A4:
    // 0x800484A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800484A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800484AC: jr          $ra
    // 0x800484B0: nop

    return;
    // 0x800484B0: nop

;}
RECOMP_FUNC void func_800484B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800484B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800484B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800484BC: jal         0x8007E03C
    // 0x800484C0: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x800484C0: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    after_0:
    // 0x800484C4: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x800484C8: addiu       $t6, $t6, 0x20B8
    ctx->r14 = ADD32(ctx->r14, 0X20B8);
    // 0x800484CC: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x800484D0: jal         0x8007E03C
    // 0x800484D4: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x800484D4: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    after_1:
    // 0x800484D8: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x800484DC: addiu       $t7, $t7, 0x20B8
    ctx->r15 = ADD32(ctx->r15, 0X20B8);
    // 0x800484E0: sw          $v0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r2;
    // 0x800484E4: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800484E8: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x800484EC: lw          $t1, -0x2B0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2B0);
    // 0x800484F0: lw          $t0, -0x2AC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2AC);
    // 0x800484F4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800484F8: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800484FC: sw          $zero, -0x2C0($at)
    MEM_W(-0X2C0, ctx->r1) = 0;
    // 0x80048500: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80048504: lui         $t8, 0x2
    ctx->r24 = S32(0X2 << 16);
    // 0x80048508: sw          $t8, 0x20C4($at)
    MEM_W(0X20C4, ctx->r1) = ctx->r24;
    // 0x8004850C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80048510: sw          $zero, -0x2BC($at)
    MEM_W(-0X2BC, ctx->r1) = 0;
    // 0x80048514: lui         $t9, 0x8039
    ctx->r25 = S32(0X8039 << 16);
    // 0x80048518: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004851C: addiu       $t9, $t9, -0x5300
    ctx->r25 = ADD32(ctx->r25, -0X5300);
    // 0x80048520: sw          $zero, 0x20D4($at)
    MEM_W(0X20D4, ctx->r1) = 0;
    // 0x80048524: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80048528: mflo        $t2
    ctx->r10 = lo;
    // 0x8004852C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80048530: beq         $t2, $zero, L_80048560
    if (ctx->r10 == 0) {
        // 0x80048534: nop
    
            goto L_80048560;
    }
    // 0x80048534: nop

L_80048538:
    // 0x80048538: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8004853C: nop

    // 0x80048540: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
    // 0x80048544: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80048548: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8004854C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80048550: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x80048554: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80048558: bne         $t7, $zero, L_80048538
    if (ctx->r15 != 0) {
        // 0x8004855C: sw          $t5, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r13;
            goto L_80048538;
    }
    // 0x8004855C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
L_80048560:
    // 0x80048560: jal         0x800B6330
    // 0x80048564: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_2;
    // 0x80048564: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    after_2:
    // 0x80048568: lui         $a0, 0x8039
    ctx->r4 = S32(0X8039 << 16);
    // 0x8004856C: jal         0x800B64F0
    // 0x80048570: addiu       $a0, $a0, -0x5300
    ctx->r4 = ADD32(ctx->r4, -0X5300);
    osViSwapBuffer_recomp(rdram, ctx);
        goto after_3;
    // 0x80048570: addiu       $a0, $a0, -0x5300
    ctx->r4 = ADD32(ctx->r4, -0X5300);
    after_3:
    // 0x80048574: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80048578: addiu       $t9, $t9, 0x2070
    ctx->r25 = ADD32(ctx->r25, 0X2070);
    // 0x8004857C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80048580: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x80048584: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80048588: addiu       $t0, $t0, 0x2070
    ctx->r8 = ADD32(ctx->r8, 0X2070);
    // 0x8004858C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80048590: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80048594: sh          $zero, 0x2($t0)
    MEM_H(0X2, ctx->r8) = 0;
    // 0x80048598: addiu       $t2, $t2, 0x2070
    ctx->r10 = ADD32(ctx->r10, 0X2070);
    // 0x8004859C: addiu       $t1, $t1, 0x1FA0
    ctx->r9 = ADD32(ctx->r9, 0X1FA0);
    // 0x800485A0: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x800485A4: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x800485A8: addiu       $t4, $t4, 0x2070
    ctx->r12 = ADD32(ctx->r12, 0X2070);
    // 0x800485AC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800485B0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x800485B4: sh          $t3, 0x20($t4)
    MEM_H(0X20, ctx->r12) = ctx->r11;
    // 0x800485B8: addiu       $t6, $t6, 0x2070
    ctx->r14 = ADD32(ctx->r14, 0X2070);
    // 0x800485BC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800485C0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x800485C4: sh          $t5, 0x22($t6)
    MEM_H(0X22, ctx->r14) = ctx->r13;
    // 0x800485C8: addiu       $t7, $t7, 0x1FA0
    ctx->r15 = ADD32(ctx->r15, 0X1FA0);
    // 0x800485CC: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x800485D0: addiu       $t9, $t9, 0x2070
    ctx->r25 = ADD32(ctx->r25, 0X2070);
    // 0x800485D4: addiu       $t8, $t7, 0x68
    ctx->r24 = ADD32(ctx->r15, 0X68);
    // 0x800485D8: sw          $t8, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r24;
    // 0x800485DC: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x800485E0: addiu       $t0, $t0, 0x1FA0
    ctx->r8 = ADD32(ctx->r8, 0X1FA0);
    // 0x800485E4: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x800485E8: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x800485EC: addiu       $t1, $t1, 0x1FA0
    ctx->r9 = ADD32(ctx->r9, 0X1FA0);
    // 0x800485F0: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x800485F4: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x800485F8: addiu       $t3, $t3, 0x1FA0
    ctx->r11 = ADD32(ctx->r11, 0X1FA0);
    // 0x800485FC: addiu       $t2, $zero, 0x63
    ctx->r10 = ADD32(0, 0X63);
    // 0x80048600: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80048604: lui         $t4, 0x8039
    ctx->r12 = S32(0X8039 << 16);
    // 0x80048608: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
    // 0x8004860C: addiu       $t4, $t4, -0x5300
    ctx->r12 = ADD32(ctx->r12, -0X5300);
    // 0x80048610: addiu       $t5, $t5, 0x1FA0
    ctx->r13 = ADD32(ctx->r13, 0X1FA0);
    // 0x80048614: sw          $t4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r12;
    // 0x80048618: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004861C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80048620: addiu       $t6, $t6, -0x44F8
    ctx->r14 = ADD32(ctx->r14, -0X44F8);
    // 0x80048624: addiu       $t7, $t7, 0x1FA0
    ctx->r15 = ADD32(ctx->r15, 0X1FA0);
    // 0x80048628: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8004862C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80048630: sw          $t6, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->r14;
    // 0x80048634: addiu       $t9, $t9, 0x1FA0
    ctx->r25 = ADD32(ctx->r25, 0X1FA0);
    // 0x80048638: addiu       $t8, $t8, 0x2070
    ctx->r24 = ADD32(ctx->r24, 0X2070);
    // 0x8004863C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80048640: sw          $t8, 0x54($t9)
    MEM_W(0X54, ctx->r25) = ctx->r24;
    // 0x80048644: addiu       $t1, $t1, 0x1FA0
    ctx->r9 = ADD32(ctx->r9, 0X1FA0);
    // 0x80048648: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8004864C: sw          $t0, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r8;
    // 0x80048650: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80048654: addiu       $t2, $t2, 0x1FA0
    ctx->r10 = ADD32(ctx->r10, 0X1FA0);
    // 0x80048658: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8004865C: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x80048660: sw          $zero, 0x14($t2)
    MEM_W(0X14, ctx->r10) = 0;
    // 0x80048664: addiu       $t3, $t3, 0x3310
    ctx->r11 = ADD32(ctx->r11, 0X3310);
    // 0x80048668: addiu       $t4, $t4, 0x1FA0
    ctx->r12 = ADD32(ctx->r12, 0X1FA0);
    // 0x8004866C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x80048670: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x80048674: sw          $t3, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->r11;
    // 0x80048678: addiu       $t5, $t5, 0x33E0
    ctx->r13 = ADD32(ctx->r13, 0X33E0);
    // 0x8004867C: addiu       $t6, $t6, 0x3310
    ctx->r14 = ADD32(ctx->r14, 0X3310);
    // 0x80048680: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80048684: addiu       $t8, $t8, 0x1FA0
    ctx->r24 = ADD32(ctx->r24, 0X1FA0);
    // 0x80048688: subu        $t7, $t5, $t6
    ctx->r15 = SUB32(ctx->r13, ctx->r14);
    // 0x8004868C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80048690: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80048694: sw          $t7, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->r15;
    // 0x80048698: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x8004869C: addiu       $t0, $t0, 0x1FA0
    ctx->r8 = ADD32(ctx->r8, 0X1FA0);
    // 0x800486A0: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x800486A4: sw          $t9, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r25;
    // 0x800486A8: addiu       $t2, $t2, 0x1FA0
    ctx->r10 = ADD32(ctx->r10, 0X1FA0);
    // 0x800486AC: addiu       $t1, $zero, 0x1000
    ctx->r9 = ADD32(0, 0X1000);
    // 0x800486B0: sw          $t1, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->r9;
    // 0x800486B4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x800486B8: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x800486BC: addiu       $t4, $t4, 0x1FA0
    ctx->r12 = ADD32(ctx->r12, 0X1FA0);
    // 0x800486C0: addiu       $t3, $t3, 0x1830
    ctx->r11 = ADD32(ctx->r11, 0X1830);
    // 0x800486C4: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x800486C8: sw          $t3, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->r11;
    // 0x800486CC: addiu       $t6, $t6, 0x1FA0
    ctx->r14 = ADD32(ctx->r14, 0X1FA0);
    // 0x800486D0: addiu       $t5, $zero, 0x800
    ctx->r13 = ADD32(0, 0X800);
    // 0x800486D4: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x800486D8: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x800486DC: sw          $t5, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->r13;
    // 0x800486E0: addiu       $t8, $t8, 0x1FA0
    ctx->r24 = ADD32(ctx->r24, 0X1FA0);
    // 0x800486E4: addiu       $t7, $t7, 0x21C0
    ctx->r15 = ADD32(ctx->r15, 0X21C0);
    // 0x800486E8: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x800486EC: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x800486F0: addiu       $t0, $t0, 0x1FA0
    ctx->r8 = ADD32(ctx->r8, 0X1FA0);
    // 0x800486F4: addiu       $t9, $zero, 0x400
    ctx->r25 = ADD32(0, 0X400);
    // 0x800486F8: sw          $t9, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->r25;
    // 0x800486FC: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80048700: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80048704: addiu       $t2, $t2, 0x1FA0
    ctx->r10 = ADD32(ctx->r10, 0X1FA0);
    // 0x80048708: addiu       $t1, $t1, 0x31C0
    ctx->r9 = ADD32(ctx->r9, 0X31C0);
    // 0x8004870C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80048710: sw          $t1, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r9;
    // 0x80048714: addiu       $t3, $t3, 0x31C0
    ctx->r11 = ADD32(ctx->r11, 0X31C0);
    // 0x80048718: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8004871C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80048720: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80048724: addiu       $t5, $t5, 0x1FA0
    ctx->r13 = ADD32(ctx->r13, 0X1FA0);
    // 0x80048728: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004872C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80048730: sw          $t4, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->r12;
    // 0x80048734: addiu       $t6, $t6, 0x25C0
    ctx->r14 = ADD32(ctx->r14, 0X25C0);
    // 0x80048738: addiu       $t7, $t7, 0x1FA0
    ctx->r15 = ADD32(ctx->r15, 0X1FA0);
    // 0x8004873C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80048740: sw          $t6, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->r14;
    // 0x80048744: addiu       $t9, $t9, 0x1FA0
    ctx->r25 = ADD32(ctx->r25, 0X1FA0);
    // 0x80048748: addiu       $t8, $zero, 0xC00
    ctx->r24 = ADD32(0, 0XC00);
    // 0x8004874C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80048750: sw          $t8, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->r24;
    // 0x80048754: addiu       $t0, $t0, 0x20B8
    ctx->r8 = ADD32(ctx->r8, 0X20B8);
    // 0x80048758: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x8004875C: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80048760: addiu       $t2, $t2, 0x1FA0
    ctx->r10 = ADD32(ctx->r10, 0X1FA0);
    // 0x80048764: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80048768: sw          $t1, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->r9;
    // 0x8004876C: addiu       $t3, $t3, 0x1FA0
    ctx->r11 = ADD32(ctx->r11, 0X1FA0);
    // 0x80048770: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80048774: sw          $zero, 0x44($t3)
    MEM_W(0X44, ctx->r11) = 0;
    // 0x80048778: addiu       $t4, $t4, 0x1FA0
    ctx->r12 = ADD32(ctx->r12, 0X1FA0);
    // 0x8004877C: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80048780: sw          $zero, 0x68($t4)
    MEM_W(0X68, ctx->r12) = 0;
    // 0x80048784: addiu       $t5, $t5, 0x1FA0
    ctx->r13 = ADD32(ctx->r13, 0X1FA0);
    // 0x80048788: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004878C: sw          $zero, 0x6C($t5)
    MEM_W(0X6C, ctx->r13) = 0;
    // 0x80048790: addiu       $t7, $t7, 0x1FA0
    ctx->r15 = ADD32(ctx->r15, 0X1FA0);
    // 0x80048794: addiu       $t6, $zero, 0x63
    ctx->r14 = ADD32(0, 0X63);
    // 0x80048798: lui         $t8, 0x8039
    ctx->r24 = S32(0X8039 << 16);
    // 0x8004879C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x800487A0: sw          $t6, 0x70($t7)
    MEM_W(0X70, ctx->r15) = ctx->r14;
    // 0x800487A4: ori         $at, $at, 0xA980
    ctx->r1 = ctx->r1 | 0XA980;
    // 0x800487A8: addiu       $t8, $t8, -0x5300
    ctx->r24 = ADD32(ctx->r24, -0X5300);
    // 0x800487AC: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x800487B0: addiu       $t0, $t0, 0x1FA0
    ctx->r8 = ADD32(ctx->r8, 0X1FA0);
    // 0x800487B4: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x800487B8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800487BC: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x800487C0: sw          $t9, 0x74($t0)
    MEM_W(0X74, ctx->r8) = ctx->r25;
    // 0x800487C4: addiu       $t2, $t2, 0x1FA0
    ctx->r10 = ADD32(ctx->r10, 0X1FA0);
    // 0x800487C8: addiu       $t1, $t1, -0x44F8
    ctx->r9 = ADD32(ctx->r9, -0X44F8);
    // 0x800487CC: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x800487D0: sw          $t1, 0xB8($t2)
    MEM_W(0XB8, ctx->r10) = ctx->r9;
    // 0x800487D4: addiu       $t3, $t3, 0x2070
    ctx->r11 = ADD32(ctx->r11, 0X2070);
    // 0x800487D8: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x800487DC: addiu       $t5, $t5, 0x1FA0
    ctx->r13 = ADD32(ctx->r13, 0X1FA0);
    // 0x800487E0: addiu       $t4, $t3, 0x20
    ctx->r12 = ADD32(ctx->r11, 0X20);
    // 0x800487E4: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x800487E8: sw          $t4, 0xBC($t5)
    MEM_W(0XBC, ctx->r13) = ctx->r12;
    // 0x800487EC: addiu       $t7, $t7, 0x1FA0
    ctx->r15 = ADD32(ctx->r15, 0X1FA0);
    // 0x800487F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800487F4: sw          $t6, 0x78($t7)
    MEM_W(0X78, ctx->r15) = ctx->r14;
    // 0x800487F8: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x800487FC: addiu       $t8, $t8, 0x1FA0
    ctx->r24 = ADD32(ctx->r24, 0X1FA0);
    // 0x80048800: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80048804: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80048808: sw          $zero, 0x7C($t8)
    MEM_W(0X7C, ctx->r24) = 0;
    // 0x8004880C: addiu       $t0, $t0, 0x1FA0
    ctx->r8 = ADD32(ctx->r8, 0X1FA0);
    // 0x80048810: addiu       $t9, $t9, 0x3310
    ctx->r25 = ADD32(ctx->r25, 0X3310);
    // 0x80048814: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x80048818: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x8004881C: sw          $t9, 0x80($t0)
    MEM_W(0X80, ctx->r8) = ctx->r25;
    // 0x80048820: addiu       $t2, $t2, 0x3310
    ctx->r10 = ADD32(ctx->r10, 0X3310);
    // 0x80048824: addiu       $t1, $t1, 0x33E0
    ctx->r9 = ADD32(ctx->r9, 0X33E0);
    // 0x80048828: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8004882C: addiu       $t4, $t4, 0x1FA0
    ctx->r12 = ADD32(ctx->r12, 0X1FA0);
    // 0x80048830: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x80048834: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80048838: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x8004883C: sw          $t3, 0x84($t4)
    MEM_W(0X84, ctx->r12) = ctx->r11;
    // 0x80048840: addiu       $t5, $t5, 0x33E0
    ctx->r13 = ADD32(ctx->r13, 0X33E0);
    // 0x80048844: addiu       $t6, $t6, 0x1FA0
    ctx->r14 = ADD32(ctx->r14, 0X1FA0);
    // 0x80048848: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8004884C: sw          $t5, 0x88($t6)
    MEM_W(0X88, ctx->r14) = ctx->r13;
    // 0x80048850: addiu       $t8, $t8, 0x1FA0
    ctx->r24 = ADD32(ctx->r24, 0X1FA0);
    // 0x80048854: addiu       $t7, $zero, 0x1000
    ctx->r15 = ADD32(0, 0X1000);
    // 0x80048858: sw          $t7, 0x8C($t8)
    MEM_W(0X8C, ctx->r24) = ctx->r15;
    // 0x8004885C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80048860: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80048864: addiu       $t0, $t0, 0x1FA0
    ctx->r8 = ADD32(ctx->r8, 0X1FA0);
    // 0x80048868: addiu       $t9, $t9, 0x1830
    ctx->r25 = ADD32(ctx->r25, 0X1830);
    // 0x8004886C: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80048870: sw          $t9, 0x90($t0)
    MEM_W(0X90, ctx->r8) = ctx->r25;
    // 0x80048874: addiu       $t2, $t2, 0x1FA0
    ctx->r10 = ADD32(ctx->r10, 0X1FA0);
    // 0x80048878: addiu       $t1, $zero, 0x800
    ctx->r9 = ADD32(0, 0X800);
    // 0x8004887C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80048880: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80048884: sw          $t1, 0x94($t2)
    MEM_W(0X94, ctx->r10) = ctx->r9;
    // 0x80048888: addiu       $t4, $t4, 0x1FA0
    ctx->r12 = ADD32(ctx->r12, 0X1FA0);
    // 0x8004888C: addiu       $t3, $t3, 0x21C0
    ctx->r11 = ADD32(ctx->r11, 0X21C0);
    // 0x80048890: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80048894: sw          $t3, 0x98($t4)
    MEM_W(0X98, ctx->r12) = ctx->r11;
    // 0x80048898: addiu       $t6, $t6, 0x1FA0
    ctx->r14 = ADD32(ctx->r14, 0X1FA0);
    // 0x8004889C: addiu       $t5, $zero, 0x400
    ctx->r13 = ADD32(0, 0X400);
    // 0x800488A0: sw          $t5, 0x9C($t6)
    MEM_W(0X9C, ctx->r14) = ctx->r13;
    // 0x800488A4: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x800488A8: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x800488AC: addiu       $t8, $t8, 0x1FA0
    ctx->r24 = ADD32(ctx->r24, 0X1FA0);
    // 0x800488B0: addiu       $t7, $t7, 0x31C0
    ctx->r15 = ADD32(ctx->r15, 0X31C0);
    // 0x800488B4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x800488B8: sw          $t7, 0xA0($t8)
    MEM_W(0XA0, ctx->r24) = ctx->r15;
    // 0x800488BC: addiu       $t9, $t9, 0x31C0
    ctx->r25 = ADD32(ctx->r25, 0X31C0);
    // 0x800488C0: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x800488C4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800488C8: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x800488CC: addiu       $t1, $t1, 0x1FA0
    ctx->r9 = ADD32(ctx->r9, 0X1FA0);
    // 0x800488D0: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x800488D4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x800488D8: sw          $t0, 0xA4($t1)
    MEM_W(0XA4, ctx->r9) = ctx->r8;
    // 0x800488DC: addiu       $t2, $t2, 0x25C0
    ctx->r10 = ADD32(ctx->r10, 0X25C0);
    // 0x800488E0: addiu       $t3, $t3, 0x1FA0
    ctx->r11 = ADD32(ctx->r11, 0X1FA0);
    // 0x800488E4: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x800488E8: sw          $t2, 0xB0($t3)
    MEM_W(0XB0, ctx->r11) = ctx->r10;
    // 0x800488EC: addiu       $t5, $t5, 0x1FA0
    ctx->r13 = ADD32(ctx->r13, 0X1FA0);
    // 0x800488F0: addiu       $t4, $zero, 0xC00
    ctx->r12 = ADD32(0, 0XC00);
    // 0x800488F4: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x800488F8: sw          $t4, 0xB4($t5)
    MEM_W(0XB4, ctx->r13) = ctx->r12;
    // 0x800488FC: addiu       $t6, $t6, 0x20B8
    ctx->r14 = ADD32(ctx->r14, 0X20B8);
    // 0x80048900: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80048904: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80048908: addiu       $t8, $t8, 0x1FA0
    ctx->r24 = ADD32(ctx->r24, 0X1FA0);
    // 0x8004890C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80048910: addiu       $t9, $t9, 0x1FA0
    ctx->r25 = ADD32(ctx->r25, 0X1FA0);
    // 0x80048914: sw          $t7, 0xA8($t8)
    MEM_W(0XA8, ctx->r24) = ctx->r15;
    // 0x80048918: sw          $zero, 0xAC($t9)
    MEM_W(0XAC, ctx->r25) = 0;
    // 0x8004891C: jal         0x80076EA0
    // 0x80048920: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80076EA0(rdram, ctx);
        goto after_4;
    // 0x80048920: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80048924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048928: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004892C: jr          $ra
    // 0x80048930: nop

    return;
    // 0x80048930: nop

;}
RECOMP_FUNC void func_80048934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048934: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80048938: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x8004893C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80048940: lui         $t6, 0xE300
    ctx->r14 = S32(0XE300 << 16);
    // 0x80048944: ori         $t6, $t6, 0xA01
    ctx->r14 = ctx->r14 | 0XA01;
    // 0x80048948: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8004894C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80048950: lui         $t8, 0x30
    ctx->r24 = S32(0X30 << 16);
    // 0x80048954: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80048958: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8004895C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80048960: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80048964: lui         $t0, 0xE200
    ctx->r8 = S32(0XE200 << 16);
    // 0x80048968: ori         $t0, $t0, 0x1C
    ctx->r8 = ctx->r8 | 0X1C;
    // 0x8004896C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80048970: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80048974: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80048978: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8004897C: sw          $a0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r4;
    // 0x80048980: lw          $t4, 0x14($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14);
    // 0x80048984: lui         $t3, 0xED00
    ctx->r11 = S32(0XED00 << 16);
    // 0x80048988: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8004898C: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x80048990: lui         $t5, 0x63
    ctx->r13 = S32(0X63 << 16);
    // 0x80048994: ori         $t5, $t5, 0xC4AC
    ctx->r13 = ctx->r13 | 0XC4AC;
    // 0x80048998: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8004899C: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x800489A0: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x800489A4: sll         $t3, $a1, 3
    ctx->r11 = S32(ctx->r5 << 3);
    // 0x800489A8: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x800489AC: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x800489B0: lui         $t7, 0xF700
    ctx->r15 = S32(0XF700 << 16);
    // 0x800489B4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800489B8: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x800489BC: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x800489C0: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x800489C4: lui         $t9, 0x1
    ctx->r25 = S32(0X1 << 16);
    // 0x800489C8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800489CC: ori         $t9, $t9, 0x1
    ctx->r25 = ctx->r25 | 0X1;
    // 0x800489D0: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x800489D4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800489D8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800489DC: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x800489E0: sw          $a0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r4;
    // 0x800489E4: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x800489E8: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x800489EC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800489F0: lui         $t1, 0xFF10
    ctx->r9 = S32(0XFF10 << 16);
    // 0x800489F4: ori         $t1, $t1, 0x18F
    ctx->r9 = ctx->r9 | 0X18F;
    // 0x800489F8: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x800489FC: sll         $t3, $t3, 7
    ctx->r11 = S32(ctx->r11 << 7);
    // 0x80048A00: lui         $t5, 0x8039
    ctx->r13 = S32(0X8039 << 16);
    // 0x80048A04: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80048A08: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80048A0C: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x80048A10: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x80048A14: addiu       $t5, $t5, -0x5300
    ctx->r13 = ADD32(ctx->r13, -0X5300);
    // 0x80048A18: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80048A1C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80048A20: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80048A24: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x80048A28: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x80048A2C: lui         $t8, 0xF663
    ctx->r24 = S32(0XF663 << 16);
    // 0x80048A30: ori         $t8, $t8, 0xC4AC
    ctx->r24 = ctx->r24 | 0XC4AC;
    // 0x80048A34: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80048A38: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x80048A3C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80048A40: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80048A44: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x80048A48: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80048A4C: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x80048A50: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80048A54: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80048A58: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80048A5C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80048A60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80048A64: jr          $ra
    // 0x80048A68: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    return;
    // 0x80048A68: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
;}
RECOMP_FUNC void func_80048A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048A6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80048A70: sw          $a0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r4;
    // 0x80048A74: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x80048A78: lui         $t6, 0xE300
    ctx->r14 = S32(0XE300 << 16);
    // 0x80048A7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80048A80: ori         $t6, $t6, 0xA01
    ctx->r14 = ctx->r14 | 0XA01;
    // 0x80048A84: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80048A88: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80048A8C: lui         $t8, 0x30
    ctx->r24 = S32(0X30 << 16);
    // 0x80048A90: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80048A94: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x80048A98: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x80048A9C: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x80048AA0: lui         $t0, 0xE200
    ctx->r8 = S32(0XE200 << 16);
    // 0x80048AA4: ori         $t0, $t0, 0x1C
    ctx->r8 = ctx->r8 | 0X1C;
    // 0x80048AA8: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80048AAC: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x80048AB0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80048AB4: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x80048AB8: sw          $a0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r4;
    // 0x80048ABC: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x80048AC0: lui         $t3, 0xF700
    ctx->r11 = S32(0XF700 << 16);
    // 0x80048AC4: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80048AC8: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x80048ACC: lui         $t5, 0xFFFC
    ctx->r13 = S32(0XFFFC << 16);
    // 0x80048AD0: ori         $t5, $t5, 0xFFFC
    ctx->r13 = ctx->r13 | 0XFFFC;
    // 0x80048AD4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80048AD8: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x80048ADC: lw          $t7, -0x2B0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2B0);
    // 0x80048AE0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80048AE4: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x80048AE8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80048AEC: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x80048AF0: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x80048AF4: lui         $at, 0xFF10
    ctx->r1 = S32(0XFF10 << 16);
    // 0x80048AF8: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x80048AFC: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x80048B00: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80048B04: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x80048B08: addiu       $t2, $t2, 0x400
    ctx->r10 = ADD32(ctx->r10, 0X400);
    // 0x80048B0C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80048B10: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x80048B14: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80048B18: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x80048B1C: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x80048B20: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80048B24: lui         $t5, 0xF663
    ctx->r13 = S32(0XF663 << 16);
    // 0x80048B28: ori         $t5, $t5, 0xC4AC
    ctx->r13 = ctx->r13 | 0XC4AC;
    // 0x80048B2C: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80048B30: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80048B34: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80048B38: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x80048B3C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80048B40: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x80048B44: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80048B48: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80048B4C: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x80048B50: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80048B54: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80048B58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80048B5C: jr          $ra
    // 0x80048B60: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    return;
    // 0x80048B60: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
;}
RECOMP_FUNC void func_80048B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048B64: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80048B68: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80048B6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80048B70: lw          $a0, -0x41E4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X41E4);
    // 0x80048B74: jal         0x800A3A8C
    // 0x80048B78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_800A3A8C(rdram, ctx);
        goto after_0;
    // 0x80048B78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80048B7C: jal         0x800B6540
    // 0x80048B80: nop

    osGetCount_recomp(rdram, ctx);
        goto after_1;
    // 0x80048B80: nop

    after_1:
    // 0x80048B84: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80048B88: lhu         $t6, 0x20B0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X20B0);
    // 0x80048B8C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80048B90: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80048B94: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80048B98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80048B9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80048BA0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80048BA4: addiu       $t8, $t8, 0x1FA0
    ctx->r24 = ADD32(ctx->r24, 0X1FA0);
    // 0x80048BA8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80048BAC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80048BB0: sw          $v0, -0x6A18($at)
    MEM_W(-0X6A18, ctx->r1) = ctx->r2;
    // 0x80048BB4: jal         0x800B6550
    // 0x80048BB8: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    osGetTime_recomp(rdram, ctx);
        goto after_2;
    // 0x80048BB8: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    after_2:
    // 0x80048BBC: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80048BC0: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80048BC4: lw          $t1, 0x54($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X54);
    // 0x80048BC8: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80048BCC: sw          $v0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r2;
    // 0x80048BD0: sw          $v1, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r3;
    // 0x80048BD4: lhu         $t2, 0x20B0($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X20B0);
    // 0x80048BD8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80048BDC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80048BE0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80048BE4: lw          $t4, 0x20B8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X20B8);
    // 0x80048BE8: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80048BEC: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80048BF0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80048BF4: sw          $t4, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r12;
    // 0x80048BF8: lw          $t5, 0x20C8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X20C8);
    // 0x80048BFC: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x80048C00: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80048C04: sw          $t5, 0x20D0($at)
    MEM_W(0X20D0, ctx->r1) = ctx->r13;
    // 0x80048C08: sw          $t6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r14;
    // 0x80048C0C: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x80048C10: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80048C14: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80048C18: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x80048C1C: lui         $t8, 0xDB06
    ctx->r24 = S32(0XDB06 << 16);
    // 0x80048C20: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80048C24: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x80048C28: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80048C2C: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80048C30: lw          $t1, 0x20C0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X20C0);
    // 0x80048C34: lui         $t4, 0xDB06
    ctx->r12 = S32(0XDB06 << 16);
    // 0x80048C38: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x80048C3C: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x80048C40: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80048C44: sw          $t2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r10;
    // 0x80048C48: ori         $t4, $t4, 0x8
    ctx->r12 = ctx->r12 | 0X8;
    // 0x80048C4C: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80048C50: sw          $t4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r12;
    // 0x80048C54: lhu         $t5, 0x20B0($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X20B0);
    // 0x80048C58: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80048C5C: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80048C60: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80048C64: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80048C68: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80048C6C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80048C70: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80048C74: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80048C78: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80048C7C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80048C80: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80048C84: sll         $t6, $t6, 7
    ctx->r14 = S32(ctx->r14 << 7);
    // 0x80048C88: lui         $t8, 0x8039
    ctx->r24 = S32(0X8039 << 16);
    // 0x80048C8C: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x80048C90: addiu       $t8, $t8, -0x5300
    ctx->r24 = ADD32(ctx->r24, -0X5300);
    // 0x80048C94: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x80048C98: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80048C9C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80048CA0: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80048CA4: lw          $t1, 0x20C0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X20C0);
    // 0x80048CA8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80048CAC: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x80048CB0: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x80048CB4: lui         $t4, 0xDB06
    ctx->r12 = S32(0XDB06 << 16);
    // 0x80048CB8: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80048CBC: sw          $t2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r10;
    // 0x80048CC0: ori         $t4, $t4, 0xC
    ctx->r12 = ctx->r12 | 0XC;
    // 0x80048CC4: lui         $t5, 0x8000
    ctx->r13 = S32(0X8000 << 16);
    // 0x80048CC8: sw          $t4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r12;
    // 0x80048CCC: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x80048CD0: addiu       $t5, $t5, 0x400
    ctx->r13 = ADD32(ctx->r13, 0X400);
    // 0x80048CD4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80048CD8: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x80048CDC: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80048CE0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80048CE4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80048CE8: lhu         $a1, 0x20B0($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X20B0);
    // 0x80048CEC: lw          $a0, 0x20C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20C0);
    // 0x80048CF0: jal         0x80048A6C
    // 0x80048CF4: nop

    func_80048A6C(rdram, ctx);
        goto after_3;
    // 0x80048CF4: nop

    after_3:
    // 0x80048CF8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80048CFC: sw          $v0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r2;
    // 0x80048D00: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80048D04: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80048D08: lhu         $a1, 0x20B0($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X20B0);
    // 0x80048D0C: lw          $a0, 0x20C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20C0);
    // 0x80048D10: jal         0x80048934
    // 0x80048D14: nop

    func_80048934(rdram, ctx);
        goto after_4;
    // 0x80048D14: nop

    after_4:
    // 0x80048D18: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80048D1C: sw          $v0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r2;
    // 0x80048D20: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80048D24: lw          $t8, 0x20C0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X20C0);
    // 0x80048D28: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x80048D2C: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x80048D30: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80048D34: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80048D38: sw          $t9, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r25;
    // 0x80048D3C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80048D40: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x80048D44: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80048D48: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x80048D4C: lw          $t4, 0x20C0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X20C0);
    // 0x80048D50: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80048D54: lw          $t5, -0x2B0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X2B0);
    // 0x80048D58: addiu       $t3, $t4, 0x8
    ctx->r11 = ADD32(ctx->r12, 0X8);
    // 0x80048D5C: sw          $t3, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r11;
    // 0x80048D60: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
    // 0x80048D64: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80048D68: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80048D6C: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x80048D70: lui         $at, 0xFF10
    ctx->r1 = S32(0XFF10 << 16);
    // 0x80048D74: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80048D78: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80048D7C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80048D80: lhu         $t0, 0x20B0($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X20B0);
    // 0x80048D84: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80048D88: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x80048D8C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80048D90: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80048D94: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80048D98: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80048D9C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80048DA0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80048DA4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80048DA8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80048DAC: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80048DB0: sll         $t1, $t1, 7
    ctx->r9 = S32(ctx->r9 << 7);
    // 0x80048DB4: lui         $t4, 0x8039
    ctx->r12 = S32(0X8039 << 16);
    // 0x80048DB8: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x80048DBC: addiu       $t4, $t4, -0x5300
    ctx->r12 = ADD32(ctx->r12, -0X5300);
    // 0x80048DC0: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x80048DC4: addu        $t3, $t2, $t4
    ctx->r11 = ADD32(ctx->r10, ctx->r12);
    // 0x80048DC8: sw          $t3, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r11;
    // 0x80048DCC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80048DD0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80048DD4: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x80048DD8: lw          $t8, -0x2A0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2A0);
    // 0x80048DDC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80048DE0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80048DE4: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80048DE8: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x80048DEC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80048DF0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80048DF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80048DF8: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80048DFC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80048E00: lw          $t3, -0x29C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X29C);
    // 0x80048E04: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x80048E08: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x80048E0C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80048E10: nop

    // 0x80048E14: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80048E18: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80048E1C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80048E20: lui         $at, 0xED00
    ctx->r1 = S32(0XED00 << 16);
    // 0x80048E24: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80048E28: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x80048E2C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80048E30: andi        $t1, $t0, 0xFFF
    ctx->r9 = ctx->r8 & 0XFFF;
    // 0x80048E34: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x80048E38: or          $t4, $t2, $at
    ctx->r12 = ctx->r10 | ctx->r1;
    // 0x80048E3C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80048E40: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80048E44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80048E48: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80048E4C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80048E50: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80048E54: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80048E58: nop

    // 0x80048E5C: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80048E60: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80048E64: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80048E68: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80048E6C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80048E70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80048E74: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x80048E78: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80048E7C: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x80048E80: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x80048E84: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80048E88: lw          $t0, -0x298($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X298);
    // 0x80048E8C: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x80048E90: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80048E94: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x80048E98: lw          $t4, -0x294($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X294);
    // 0x80048E9C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80048EA0: addiu       $t7, $t4, -0x1
    ctx->r15 = ADD32(ctx->r12, -0X1);
    // 0x80048EA4: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80048EA8: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80048EAC: lui         $t4, 0xFE00
    ctx->r12 = S32(0XFE00 << 16);
    // 0x80048EB0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80048EB4: nop

    // 0x80048EB8: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80048EBC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80048EC0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80048EC4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80048EC8: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80048ECC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80048ED0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80048ED4: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x80048ED8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80048EDC: andi        $t5, $t3, 0xFFF
    ctx->r13 = ctx->r11 & 0XFFF;
    // 0x80048EE0: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80048EE4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80048EE8: sll         $t6, $t5, 12
    ctx->r14 = S32(ctx->r13 << 12);
    // 0x80048EEC: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80048EF0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80048EF4: nop

    // 0x80048EF8: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80048EFC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80048F00: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80048F04: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80048F08: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80048F0C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80048F10: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80048F14: andi        $t0, $t9, 0xFFF
    ctx->r8 = ctx->r25 & 0XFFF;
    // 0x80048F18: or          $t1, $t6, $t0
    ctx->r9 = ctx->r14 | ctx->r8;
    // 0x80048F1C: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x80048F20: lw          $t3, 0x20C0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X20C0);
    // 0x80048F24: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x80048F28: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x80048F2C: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80048F30: addiu       $t5, $t3, 0x8
    ctx->r13 = ADD32(ctx->r11, 0X8);
    // 0x80048F34: sw          $t5, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r13;
    // 0x80048F38: sw          $t4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r12;
    // 0x80048F3C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80048F40: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80048F44: addiu       $t8, $t8, 0x400
    ctx->r24 = ADD32(ctx->r24, 0X400);
    // 0x80048F48: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80048F4C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80048F50: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x80048F54: lw          $t0, 0x20C0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X20C0);
    // 0x80048F58: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80048F5C: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x80048F60: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80048F64: lui         $t2, 0xDB04
    ctx->r10 = S32(0XDB04 << 16);
    // 0x80048F68: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80048F6C: sw          $t1, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r9;
    // 0x80048F70: ori         $t2, $t2, 0x4
    ctx->r10 = ctx->r10 | 0X4;
    // 0x80048F74: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80048F78: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x80048F7C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80048F80: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80048F84: sw          $t5, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r13;
    // 0x80048F88: lw          $t7, 0x20C0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X20C0);
    // 0x80048F8C: lui         $t9, 0xDB04
    ctx->r25 = S32(0XDB04 << 16);
    // 0x80048F90: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x80048F94: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80048F98: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80048F9C: sw          $t8, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r24;
    // 0x80048FA0: ori         $t9, $t9, 0xC
    ctx->r25 = ctx->r25 | 0XC;
    // 0x80048FA4: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x80048FA8: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x80048FAC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80048FB0: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80048FB4: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80048FB8: lw          $t2, 0x20C0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X20C0);
    // 0x80048FBC: lui         $t5, 0xDB04
    ctx->r13 = S32(0XDB04 << 16);
    // 0x80048FC0: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x80048FC4: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80048FC8: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80048FCC: sw          $t3, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r11;
    // 0x80048FD0: ori         $t5, $t5, 0x14
    ctx->r13 = ctx->r13 | 0X14;
    // 0x80048FD4: sw          $t5, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r13;
    // 0x80048FD8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80048FDC: ori         $t7, $zero, 0xFFFD
    ctx->r15 = 0 | 0XFFFD;
    // 0x80048FE0: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80048FE4: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x80048FE8: lw          $t9, 0x20C0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X20C0);
    // 0x80048FEC: lui         $t0, 0xDB04
    ctx->r8 = S32(0XDB04 << 16);
    // 0x80048FF0: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x80048FF4: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80048FF8: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x80048FFC: sw          $t6, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r14;
    // 0x80049000: ori         $t0, $t0, 0x1C
    ctx->r8 = ctx->r8 | 0X1C;
    // 0x80049004: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80049008: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x8004900C: ori         $t2, $zero, 0xFFFD
    ctx->r10 = 0 | 0XFFFD;
    // 0x80049010: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80049014: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x80049018: lw          $t5, 0x20C0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X20C0);
    // 0x8004901C: lui         $t7, 0xD9D0
    ctx->r15 = S32(0XD9D0 << 16);
    // 0x80049020: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x80049024: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80049028: addiu       $t4, $t5, 0x8
    ctx->r12 = ADD32(ctx->r13, 0X8);
    // 0x8004902C: sw          $t4, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r12;
    // 0x80049030: ori         $t7, $t7, 0xF9FA
    ctx->r15 = ctx->r15 | 0XF9FA;
    // 0x80049034: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x80049038: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8004903C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80049040: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x80049044: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x80049048: lui         $t1, 0xD9FF
    ctx->r9 = S32(0XD9FF << 16);
    // 0x8004904C: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80049050: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80049054: addiu       $t0, $t6, 0x8
    ctx->r8 = ADD32(ctx->r14, 0X8);
    // 0x80049058: sw          $t0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r8;
    // 0x8004905C: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x80049060: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80049064: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80049068: lui         $t3, 0x22
    ctx->r11 = S32(0X22 << 16);
    // 0x8004906C: ori         $t3, $t3, 0x5
    ctx->r11 = ctx->r11 | 0X5;
    // 0x80049070: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80049074: sw          $t3, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r11;
    // 0x80049078: lw          $t4, 0x20C0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X20C0);
    // 0x8004907C: lui         $t8, 0xDE00
    ctx->r24 = S32(0XDE00 << 16);
    // 0x80049080: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x80049084: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80049088: addiu       $t7, $t4, 0x8
    ctx->r15 = ADD32(ctx->r12, 0X8);
    // 0x8004908C: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x80049090: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80049094: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80049098: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004909C: addiu       $t6, $t6, -0x290
    ctx->r14 = ADD32(ctx->r14, -0X290);
    // 0x800490A0: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x800490A4: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x800490A8: lbu         $t1, -0x1A4($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1A4);
    // 0x800490AC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x800490B0: beq         $t1, $zero, L_80049110
    if (ctx->r9 == 0) {
        // 0x800490B4: nop
    
            goto L_80049110;
    }
    // 0x800490B4: nop

    // 0x800490B8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_800490BC:
    // 0x800490BC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800490C0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800490C4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800490C8: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800490CC: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x800490D0: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800490D4: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x800490D8: addiu       $t5, $t5, -0x10D0
    ctx->r13 = ADD32(ctx->r13, -0X10D0);
    // 0x800490DC: addu        $t4, $t3, $t5
    ctx->r12 = ADD32(ctx->r11, ctx->r13);
    // 0x800490E0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800490E4: jal         0x8004A5F0
    // 0x800490E8: sw          $t4, -0xDF0($at)
    MEM_W(-0XDF0, ctx->r1) = ctx->r12;
    func_8004A5F0(rdram, ctx);
        goto after_5;
    // 0x800490E8: sw          $t4, -0xDF0($at)
    MEM_W(-0XDF0, ctx->r1) = ctx->r12;
    after_5:
    // 0x800490EC: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800490F0: nop

    // 0x800490F4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800490F8: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x800490FC: bne         $at, $zero, L_800490BC
    if (ctx->r1 != 0) {
        // 0x80049100: sw          $t8, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r24;
            goto L_800490BC;
    }
    // 0x80049100: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80049104: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80049108: b           L_80049170
    // 0x8004910C: sb          $zero, -0x1DC($at)
    MEM_B(-0X1DC, ctx->r1) = 0;
        goto L_80049170;
    // 0x8004910C: sb          $zero, -0x1DC($at)
    MEM_B(-0X1DC, ctx->r1) = 0;
L_80049110:
    // 0x80049110: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80049114: lh          $t9, -0x12C($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X12C);
    // 0x80049118: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8004911C: blez        $t9, L_80049170
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80049120: nop
    
            goto L_80049170;
    }
    // 0x80049120: nop

L_80049124:
    // 0x80049124: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80049128: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8004912C: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80049130: subu        $t0, $t0, $t6
    ctx->r8 = SUB32(ctx->r8, ctx->r14);
    // 0x80049134: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80049138: subu        $t0, $t0, $t6
    ctx->r8 = SUB32(ctx->r8, ctx->r14);
    // 0x8004913C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80049140: addiu       $t1, $t1, -0x10D0
    ctx->r9 = ADD32(ctx->r9, -0X10D0);
    // 0x80049144: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80049148: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8004914C: jal         0x8004A5F0
    // 0x80049150: sw          $t2, -0xDF0($at)
    MEM_W(-0XDF0, ctx->r1) = ctx->r10;
    func_8004A5F0(rdram, ctx);
        goto after_6;
    // 0x80049150: sw          $t2, -0xDF0($at)
    MEM_W(-0XDF0, ctx->r1) = ctx->r10;
    after_6:
    // 0x80049154: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80049158: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8004915C: lh          $t4, -0x12C($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X12C);
    // 0x80049160: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x80049164: slt         $at, $t5, $t4
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80049168: bne         $at, $zero, L_80049124
    if (ctx->r1 != 0) {
        // 0x8004916C: sw          $t5, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r13;
            goto L_80049124;
    }
    // 0x8004916C: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
L_80049170:
    // 0x80049170: jal         0x8006CF14
    // 0x80049174: nop

    func_8006CF14(rdram, ctx);
        goto after_7;
    // 0x80049174: nop

    after_7:
    // 0x80049178: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x8004917C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80049180: lw          $t8, 0x60($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X60);
    // 0x80049184: lw          $t9, 0x64($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X64);
    // 0x80049188: sw          $t8, -0x6A10($at)
    MEM_W(-0X6A10, ctx->r1) = ctx->r24;
    // 0x8004918C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80049190: jal         0x800B6540
    // 0x80049194: sw          $t9, -0x6A0C($at)
    MEM_W(-0X6A0C, ctx->r1) = ctx->r25;
    osGetCount_recomp(rdram, ctx);
        goto after_8;
    // 0x80049194: sw          $t9, -0x6A0C($at)
    MEM_W(-0X6A0C, ctx->r1) = ctx->r25;
    after_8:
    // 0x80049198: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8004919C: sw          $v0, -0x6A1C($at)
    MEM_W(-0X6A1C, ctx->r1) = ctx->r2;
    // 0x800491A0: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800491A4: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800491A8: lw          $t6, -0x6A1C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6A1C);
    // 0x800491AC: lbu         $t0, -0x120($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X120);
    // 0x800491B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800491B4: beq         $t0, $zero, L_800491C8
    if (ctx->r8 == 0) {
        // 0x800491B8: sw          $t6, -0x6A14($at)
        MEM_W(-0X6A14, ctx->r1) = ctx->r14;
            goto L_800491C8;
    }
    // 0x800491B8: sw          $t6, -0x6A14($at)
    MEM_W(-0X6A14, ctx->r1) = ctx->r14;
    // 0x800491BC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800491C0: jal         0x800A9010
    // 0x800491C4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_800A9010(rdram, ctx);
        goto after_9;
    // 0x800491C4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_9:
L_800491C8:
    // 0x800491C8: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800491CC: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x800491D0: lw          $t1, -0x6A1C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X6A1C);
    // 0x800491D4: lw          $t2, 0x20C0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X20C0);
    // 0x800491D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800491DC: sw          $t1, -0x6A20($at)
    MEM_W(-0X6A20, ctx->r1) = ctx->r9;
    // 0x800491E0: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x800491E4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800491E8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800491EC: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x800491F0: sw          $t3, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r11;
    // 0x800491F4: lui         $t5, 0xE900
    ctx->r13 = S32(0XE900 << 16);
    // 0x800491F8: sw          $t5, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r13;
    // 0x800491FC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80049200: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80049204: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x80049208: lw          $t8, 0x20C0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X20C0);
    // 0x8004920C: lui         $t6, 0xDF00
    ctx->r14 = S32(0XDF00 << 16);
    // 0x80049210: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80049214: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80049218: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8004921C: sw          $t9, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r25;
    // 0x80049220: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80049224: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80049228: jal         0x80048020
    // 0x8004922C: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    func_80048020(rdram, ctx);
        goto after_10;
    // 0x8004922C: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    after_10:
    // 0x80049230: jal         0x800480E0
    // 0x80049234: nop

    func_800480E0(rdram, ctx);
        goto after_11;
    // 0x80049234: nop

    after_11:
    // 0x80049238: jal         0x80048150
    // 0x8004923C: nop

    func_80048150(rdram, ctx);
        goto after_12;
    // 0x8004923C: nop

    after_12:
    // 0x80049240: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80049244: lhu         $t3, 0x20B0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X20B0);
    // 0x80049248: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8004924C: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80049250: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x80049254: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80049258: lw          $t2, 0x20C0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X20C0);
    // 0x8004925C: lw          $t4, 0x20B8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X20B8);
    // 0x80049260: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x80049264: subu        $t7, $t2, $t4
    ctx->r15 = SUB32(ctx->r10, ctx->r12);
    // 0x80049268: sw          $t7, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->r15;
    // 0x8004926C: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x80049270: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x80049274: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x80049278: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x8004927C: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x80049280: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x80049284: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x80049288: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004928C: addiu       $a0, $a0, -0x4460
    ctx->r4 = ADD32(ctx->r4, -0X4460);
    // 0x80049290: sw          $t0, 0x60($t3)
    MEM_W(0X60, ctx->r11) = ctx->r8;
    // 0x80049294: jal         0x8005EE84
    // 0x80049298: sw          $t1, 0x64($t3)
    MEM_W(0X64, ctx->r11) = ctx->r9;
    func_8005EE84(rdram, ctx);
        goto after_13;
    // 0x80049298: sw          $t1, 0x64($t3)
    MEM_W(0X64, ctx->r11) = ctx->r9;
    after_13:
    // 0x8004929C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800492A0: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x800492A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800492A8: jal         0x800B34D0
    // 0x800492AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_14;
    // 0x800492AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x800492B0: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x800492B4: lw          $t5, -0x110($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X110);
    // 0x800492B8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800492BC: addiu       $t2, $t5, 0x1
    ctx->r10 = ADD32(ctx->r13, 0X1);
    // 0x800492C0: jal         0x800B6550
    // 0x800492C4: sw          $t2, -0x110($at)
    MEM_W(-0X110, ctx->r1) = ctx->r10;
    osGetTime_recomp(rdram, ctx);
        goto after_15;
    // 0x800492C4: sw          $t2, -0x110($at)
    MEM_W(-0X110, ctx->r1) = ctx->r10;
    after_15:
    // 0x800492C8: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x800492CC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800492D0: lw          $t7, 0x54($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X54);
    // 0x800492D4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800492D8: sw          $v0, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r2;
    // 0x800492DC: sw          $v1, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r3;
    // 0x800492E0: lw          $t8, -0x128($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X128);
    // 0x800492E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800492E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800492EC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800492F0: sw          $t9, -0x128($at)
    MEM_W(-0X128, ctx->r1) = ctx->r25;
    // 0x800492F4: jr          $ra
    // 0x800492F8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x800492F8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_800492FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800492FC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80049300: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049304: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80049308: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004930C: addiu       $a1, $a1, 0x2120
    ctx->r5 = ADD32(ctx->r5, 0X2120);
    // 0x80049310: addiu       $a0, $a0, 0x20D8
    ctx->r4 = ADD32(ctx->r4, 0X20D8);
    // 0x80049314: jal         0x800B3080
    // 0x80049318: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80049318: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8004931C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80049320: addiu       $a1, $a1, 0x20D8
    ctx->r5 = ADD32(ctx->r5, 0X20D8);
    // 0x80049324: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80049328: jal         0x800B30B0
    // 0x8004932C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSetEventMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8004932C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80049330: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80049334: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80049338: addiu       $a1, $a1, 0x2124
    ctx->r5 = ADD32(ctx->r5, 0X2124);
    // 0x8004933C: addiu       $a0, $a0, 0x20F0
    ctx->r4 = ADD32(ctx->r4, 0X20F0);
    // 0x80049340: jal         0x800B3080
    // 0x80049344: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_2;
    // 0x80049344: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80049348: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004934C: addiu       $a1, $a1, 0x20F0
    ctx->r5 = ADD32(ctx->r5, 0X20F0);
    // 0x80049350: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x80049354: jal         0x800B30B0
    // 0x80049358: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSetEventMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x80049358: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8004935C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80049360: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80049364: addiu       $a1, $a1, 0x2128
    ctx->r5 = ADD32(ctx->r5, 0X2128);
    // 0x80049368: addiu       $a0, $a0, 0x2108
    ctx->r4 = ADD32(ctx->r4, 0X2108);
    // 0x8004936C: jal         0x800B3080
    // 0x80049370: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_4;
    // 0x80049370: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80049374: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80049378: addiu       $a0, $a0, 0x2108
    ctx->r4 = ADD32(ctx->r4, 0X2108);
    // 0x8004937C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80049380: jal         0x800B65E0
    // 0x80049384: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osViSetEvent_recomp(rdram, ctx);
        goto after_5;
    // 0x80049384: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
L_80049388:
    // 0x80049388: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8004938C: lhu         $t6, 0x20B0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X20B0);
    // 0x80049390: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80049394: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80049398: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8004939C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800493A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800493A4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800493A8: addiu       $t8, $t8, 0x1FA0
    ctx->r24 = ADD32(ctx->r24, 0X1FA0);
    // 0x800493AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800493B0: jal         0x800B6550
    // 0x800493B4: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    osGetTime_recomp(rdram, ctx);
        goto after_6;
    // 0x800493B4: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    after_6:
    // 0x800493B8: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x800493BC: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x800493C0: lw          $t1, 0x54($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X54);
    // 0x800493C4: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x800493C8: sw          $v0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r2;
    // 0x800493CC: sw          $v1, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r3;
    // 0x800493D0: lhu         $t2, 0x20B0($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X20B0);
    // 0x800493D4: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x800493D8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800493DC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800493E0: lw          $t4, 0x20B8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X20B8);
    // 0x800493E4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800493E8: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800493EC: lw          $t5, 0x20C8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X20C8);
    // 0x800493F0: sw          $t4, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r12;
    // 0x800493F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800493F8: sw          $t5, 0x20D0($at)
    MEM_W(0X20D0, ctx->r1) = ctx->r13;
    // 0x800493FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80049400: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x80049404: sw          $t6, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r14;
    // 0x80049408: lui         $t7, 0xDB06
    ctx->r15 = S32(0XDB06 << 16);
    // 0x8004940C: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
    // 0x80049410: sw          $t7, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r15;
    // 0x80049414: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80049418: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004941C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x80049420: lw          $t9, 0x20C0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X20C0);
    // 0x80049424: lui         $t1, 0xDB06
    ctx->r9 = S32(0XDB06 << 16);
    // 0x80049428: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x8004942C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80049430: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x80049434: sw          $t0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r8;
    // 0x80049438: ori         $t1, $t1, 0x8
    ctx->r9 = ctx->r9 | 0X8;
    // 0x8004943C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80049440: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80049444: lhu         $t3, 0x20B0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X20B0);
    // 0x80049448: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004944C: sll         $t5, $t3, 3
    ctx->r13 = S32(ctx->r11 << 3);
    // 0x80049450: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x80049454: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80049458: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8004945C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80049460: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80049464: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80049468: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8004946C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80049470: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x80049474: sll         $t5, $t5, 7
    ctx->r13 = S32(ctx->r13 << 7);
    // 0x80049478: lui         $t7, 0x8039
    ctx->r15 = S32(0X8039 << 16);
    // 0x8004947C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80049480: addiu       $t7, $t7, -0x5300
    ctx->r15 = ADD32(ctx->r15, -0X5300);
    // 0x80049484: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x80049488: addu        $t4, $t6, $t7
    ctx->r12 = ADD32(ctx->r14, ctx->r15);
    // 0x8004948C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80049490: sw          $t4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r12;
    // 0x80049494: lw          $t9, 0x20C0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X20C0);
    // 0x80049498: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004949C: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    // 0x800494A0: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x800494A4: lui         $t1, 0xDB06
    ctx->r9 = S32(0XDB06 << 16);
    // 0x800494A8: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x800494AC: sw          $t0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r8;
    // 0x800494B0: ori         $t1, $t1, 0xC
    ctx->r9 = ctx->r9 | 0XC;
    // 0x800494B4: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x800494B8: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x800494BC: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800494C0: addiu       $t3, $t3, 0x400
    ctx->r11 = ADD32(ctx->r11, 0X400);
    // 0x800494C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800494C8: addu        $t5, $t3, $at
    ctx->r13 = ADD32(ctx->r11, ctx->r1);
    // 0x800494CC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800494D0: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x800494D4: lbu         $t7, -0x2B4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X2B4);
    // 0x800494D8: nop

    // 0x800494DC: beq         $t7, $zero, L_80049504
    if (ctx->r15 == 0) {
        // 0x800494E0: nop
    
            goto L_80049504;
    }
    // 0x800494E0: nop

    // 0x800494E4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800494E8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800494EC: lhu         $a1, 0x20B0($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X20B0);
    // 0x800494F0: lw          $a0, 0x20C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20C0);
    // 0x800494F4: jal         0x80048A6C
    // 0x800494F8: nop

    func_80048A6C(rdram, ctx);
        goto after_7;
    // 0x800494F8: nop

    after_7:
    // 0x800494FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80049500: sw          $v0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r2;
L_80049504:
    // 0x80049504: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x80049508: lbu         $t4, -0x2B8($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X2B8);
    // 0x8004950C: nop

    // 0x80049510: beq         $t4, $zero, L_80049538
    if (ctx->r12 == 0) {
        // 0x80049514: nop
    
            goto L_80049538;
    }
    // 0x80049514: nop

    // 0x80049518: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004951C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80049520: lhu         $a1, 0x20B0($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X20B0);
    // 0x80049524: lw          $a0, 0x20C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20C0);
    // 0x80049528: jal         0x80048934
    // 0x8004952C: nop

    func_80048934(rdram, ctx);
        goto after_8;
    // 0x8004952C: nop

    after_8:
    // 0x80049530: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80049534: sw          $v0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r2;
L_80049538:
    // 0x80049538: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8004953C: lw          $t8, 0x20C0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X20C0);
    // 0x80049540: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80049544: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x80049548: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8004954C: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80049550: sw          $t9, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r25;
    // 0x80049554: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x80049558: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8004955C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80049560: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80049564: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x80049568: lw          $t3, 0x20C0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X20C0);
    // 0x8004956C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80049570: lw          $t6, -0x2B0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2B0);
    // 0x80049574: addiu       $t5, $t3, 0x8
    ctx->r13 = ADD32(ctx->r11, 0X8);
    // 0x80049578: sw          $t5, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r13;
    // 0x8004957C: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x80049580: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80049584: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80049588: andi        $t4, $t7, 0xFFF
    ctx->r12 = ctx->r15 & 0XFFF;
    // 0x8004958C: lui         $at, 0xFF10
    ctx->r1 = S32(0XFF10 << 16);
    // 0x80049590: or          $t8, $t4, $at
    ctx->r24 = ctx->r12 | ctx->r1;
    // 0x80049594: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80049598: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8004959C: lhu         $t0, 0x20B0($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X20B0);
    // 0x800495A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800495A4: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x800495A8: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x800495AC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800495B0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800495B4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800495B8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800495BC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800495C0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800495C4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800495C8: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x800495CC: sll         $t1, $t1, 7
    ctx->r9 = S32(ctx->r9 << 7);
    // 0x800495D0: lui         $t3, 0x8039
    ctx->r11 = S32(0X8039 << 16);
    // 0x800495D4: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x800495D8: addiu       $t3, $t3, -0x5300
    ctx->r11 = ADD32(ctx->r11, -0X5300);
    // 0x800495DC: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x800495E0: addu        $t5, $t2, $t3
    ctx->r13 = ADD32(ctx->r10, ctx->r11);
    // 0x800495E4: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x800495E8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800495EC: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x800495F0: lw          $t7, 0x20C0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X20C0);
    // 0x800495F4: lw          $t8, -0x2A0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2A0);
    // 0x800495F8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800495FC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80049600: addiu       $t4, $t7, 0x8
    ctx->r12 = ADD32(ctx->r15, 0X8);
    // 0x80049604: sw          $t4, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r12;
    // 0x80049608: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004960C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80049610: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80049614: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80049618: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8004961C: lw          $t5, -0x29C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X29C);
    // 0x80049620: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x80049624: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x80049628: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8004962C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80049630: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80049634: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80049638: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004963C: lui         $at, 0xED00
    ctx->r1 = S32(0XED00 << 16);
    // 0x80049640: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80049644: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x80049648: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8004964C: andi        $t1, $t0, 0xFFF
    ctx->r9 = ctx->r8 & 0XFFF;
    // 0x80049650: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x80049654: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x80049658: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8004965C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80049660: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80049664: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80049668: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8004966C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80049670: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80049674: nop

    // 0x80049678: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8004967C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80049680: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80049684: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80049688: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8004968C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80049690: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80049694: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80049698: andi        $t4, $t7, 0xFFF
    ctx->r12 = ctx->r15 & 0XFFF;
    // 0x8004969C: or          $t8, $t3, $t4
    ctx->r24 = ctx->r11 | ctx->r12;
    // 0x800496A0: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800496A4: lw          $t0, -0x298($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X298);
    // 0x800496A8: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800496AC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800496B0: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x800496B4: lw          $t3, -0x294($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X294);
    // 0x800496B8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800496BC: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800496C0: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x800496C4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800496C8: lui         $t3, 0xFE00
    ctx->r11 = S32(0XFE00 << 16);
    // 0x800496CC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800496D0: nop

    // 0x800496D4: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800496D8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800496DC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800496E0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800496E4: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800496E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800496EC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800496F0: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x800496F4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800496F8: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x800496FC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80049700: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80049704: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x80049708: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8004970C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80049710: nop

    // 0x80049714: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80049718: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004971C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80049720: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80049724: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80049728: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x8004972C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80049730: andi        $t0, $t9, 0xFFF
    ctx->r8 = ctx->r25 & 0XFFF;
    // 0x80049734: or          $t1, $t7, $t0
    ctx->r9 = ctx->r15 | ctx->r8;
    // 0x80049738: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8004973C: lw          $t5, 0x20C0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X20C0);
    // 0x80049740: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x80049744: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    // 0x80049748: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8004974C: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x80049750: sw          $t6, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r14;
    // 0x80049754: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80049758: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8004975C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80049760: addiu       $t8, $t8, 0x400
    ctx->r24 = ADD32(ctx->r24, 0X400);
    // 0x80049764: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80049768: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8004976C: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x80049770: lw          $t0, 0x20C0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X20C0);
    // 0x80049774: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80049778: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x8004977C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80049780: lui         $t2, 0xDB04
    ctx->r10 = S32(0XDB04 << 16);
    // 0x80049784: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80049788: sw          $t1, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r9;
    // 0x8004978C: ori         $t2, $t2, 0x4
    ctx->r10 = ctx->r10 | 0X4;
    // 0x80049790: sw          $t2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r10;
    // 0x80049794: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80049798: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8004979C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x800497A0: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
    // 0x800497A4: lw          $t4, 0x20C0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X20C0);
    // 0x800497A8: lui         $t9, 0xDB04
    ctx->r25 = S32(0XDB04 << 16);
    // 0x800497AC: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x800497B0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800497B4: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x800497B8: sw          $t8, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r24;
    // 0x800497BC: ori         $t9, $t9, 0xC
    ctx->r25 = ctx->r25 | 0XC;
    // 0x800497C0: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x800497C4: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800497C8: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800497CC: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x800497D0: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x800497D4: lw          $t2, 0x20C0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X20C0);
    // 0x800497D8: lui         $t6, 0xDB04
    ctx->r14 = S32(0XDB04 << 16);
    // 0x800497DC: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x800497E0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800497E4: addiu       $t5, $t2, 0x8
    ctx->r13 = ADD32(ctx->r10, 0X8);
    // 0x800497E8: sw          $t5, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r13;
    // 0x800497EC: ori         $t6, $t6, 0x14
    ctx->r14 = ctx->r14 | 0X14;
    // 0x800497F0: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x800497F4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800497F8: ori         $t4, $zero, 0xFFFD
    ctx->r12 = 0 | 0XFFFD;
    // 0x800497FC: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80049800: sw          $t4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r12;
    // 0x80049804: lw          $t9, 0x20C0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X20C0);
    // 0x80049808: lui         $t0, 0xDB04
    ctx->r8 = S32(0XDB04 << 16);
    // 0x8004980C: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x80049810: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80049814: addiu       $t7, $t9, 0x8
    ctx->r15 = ADD32(ctx->r25, 0X8);
    // 0x80049818: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x8004981C: ori         $t0, $t0, 0x1C
    ctx->r8 = ctx->r8 | 0X1C;
    // 0x80049820: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80049824: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80049828: ori         $t2, $zero, 0xFFFD
    ctx->r10 = 0 | 0XFFFD;
    // 0x8004982C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80049830: sw          $t2, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r10;
    // 0x80049834: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x80049838: lui         $t4, 0xD9D0
    ctx->r12 = S32(0XD9D0 << 16);
    // 0x8004983C: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80049840: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80049844: addiu       $t3, $t6, 0x8
    ctx->r11 = ADD32(ctx->r14, 0X8);
    // 0x80049848: sw          $t3, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r11;
    // 0x8004984C: ori         $t4, $t4, 0xF9FA
    ctx->r12 = ctx->r12 | 0XF9FA;
    // 0x80049850: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x80049854: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80049858: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004985C: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x80049860: lw          $t7, 0x20C0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X20C0);
    // 0x80049864: lui         $t1, 0xD9FF
    ctx->r9 = S32(0XD9FF << 16);
    // 0x80049868: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x8004986C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80049870: addiu       $t0, $t7, 0x8
    ctx->r8 = ADD32(ctx->r15, 0X8);
    // 0x80049874: sw          $t0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r8;
    // 0x80049878: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x8004987C: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80049880: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80049884: lui         $t5, 0x22
    ctx->r13 = S32(0X22 << 16);
    // 0x80049888: ori         $t5, $t5, 0x5
    ctx->r13 = ctx->r13 | 0X5;
    // 0x8004988C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80049890: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x80049894: lw          $t3, 0x20C0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X20C0);
    // 0x80049898: lui         $t8, 0xDE00
    ctx->r24 = S32(0XDE00 << 16);
    // 0x8004989C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x800498A0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800498A4: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x800498A8: sw          $t4, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r12;
    // 0x800498AC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800498B0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800498B4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800498B8: addiu       $t7, $t7, -0x290
    ctx->r15 = ADD32(ctx->r15, -0X290);
    // 0x800498BC: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x800498C0: lw          $a0, 0x20C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20C0);
    // 0x800498C4: jal         0x8007DA00
    // 0x800498C8: nop

    func_8007DA00(rdram, ctx);
        goto after_9;
    // 0x800498C8: nop

    after_9:
    // 0x800498CC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800498D0: sw          $v0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r2;
    // 0x800498D4: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x800498D8: lw          $t1, 0x20C0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X20C0);
    // 0x800498DC: lui         $t5, 0xE900
    ctx->r13 = S32(0XE900 << 16);
    // 0x800498E0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800498E4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800498E8: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x800498EC: sw          $t2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r10;
    // 0x800498F0: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x800498F4: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800498F8: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x800498FC: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x80049900: lw          $t4, 0x20C0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X20C0);
    // 0x80049904: lui         $t9, 0xDF00
    ctx->r25 = S32(0XDF00 << 16);
    // 0x80049908: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8004990C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80049910: addiu       $t8, $t4, 0x8
    ctx->r24 = ADD32(ctx->r12, 0X8);
    // 0x80049914: sw          $t8, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r24;
    // 0x80049918: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x8004991C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80049920: jal         0x80048020
    // 0x80049924: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    func_80048020(rdram, ctx);
        goto after_10;
    // 0x80049924: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    after_10:
    // 0x80049928: jal         0x800480E0
    // 0x8004992C: nop

    func_800480E0(rdram, ctx);
        goto after_11;
    // 0x8004992C: nop

    after_11:
    // 0x80049930: jal         0x80048150
    // 0x80049934: nop

    func_80048150(rdram, ctx);
        goto after_12;
    // 0x80049934: nop

    after_12:
    // 0x80049938: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8004993C: lhu         $t2, 0x20B0($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X20B0);
    // 0x80049940: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x80049944: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80049948: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8004994C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80049950: lw          $t1, 0x20C0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X20C0);
    // 0x80049954: lw          $t6, 0x20B8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20B8);
    // 0x80049958: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x8004995C: subu        $t3, $t1, $t6
    ctx->r11 = SUB32(ctx->r9, ctx->r14);
    // 0x80049960: sw          $t3, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->r11;
    // 0x80049964: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80049968: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x8004996C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x80049970: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80049974: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x80049978: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x8004997C: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80049980: nop

    // 0x80049984: sw          $t0, 0x60($t7)
    MEM_W(0X60, ctx->r15) = ctx->r8;
    // 0x80049988: jal         0x800B6650
    // 0x8004998C: sw          $t1, 0x64($t7)
    MEM_W(0X64, ctx->r15) = ctx->r9;
    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_13;
    // 0x8004998C: sw          $t1, 0x64($t7)
    MEM_W(0X64, ctx->r15) = ctx->r9;
    after_13:
    // 0x80049990: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80049994: jal         0x800B679C
    // 0x80049998: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_14;
    // 0x80049998: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_14:
    // 0x8004999C: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x800499A0: jal         0x800B692C
    // 0x800499A4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_15;
    // 0x800499A4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_15:
    // 0x800499A8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800499AC: addiu       $a0, $a0, 0x20D8
    ctx->r4 = ADD32(ctx->r4, 0X20D8);
    // 0x800499B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800499B4: jal         0x800B3C20
    // 0x800499B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_16;
    // 0x800499B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_16:
    // 0x800499BC: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x800499C0: addiu       $t2, $t2, 0x31C0
    ctx->r10 = ADD32(ctx->r10, 0X31C0);
    // 0x800499C4: lw          $a2, 0x8($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X8);
    // 0x800499C8: lw          $a3, 0xC($t2)
    ctx->r7 = MEM_W(ctx->r10, 0XC);
    // 0x800499CC: jal         0x800B6970
    // 0x800499D0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    osDpSetNextBuffer_recomp(rdram, ctx);
        goto after_17;
    // 0x800499D0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_17:
    // 0x800499D4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800499D8: addiu       $a0, $a0, 0x20F0
    ctx->r4 = ADD32(ctx->r4, 0X20F0);
    // 0x800499DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800499E0: jal         0x800B3C20
    // 0x800499E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_18;
    // 0x800499E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_18:
    // 0x800499E8: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x800499EC: lhu         $t5, 0x20B0($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X20B0);
    // 0x800499F0: lui         $t3, 0x8039
    ctx->r11 = S32(0X8039 << 16);
    // 0x800499F4: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x800499F8: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x800499FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80049A00: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80049A04: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80049A08: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80049A0C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80049A10: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80049A14: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80049A18: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80049A1C: sll         $t6, $t6, 7
    ctx->r14 = S32(ctx->r14 << 7);
    // 0x80049A20: addiu       $t3, $t3, -0x5300
    ctx->r11 = ADD32(ctx->r11, -0X5300);
    // 0x80049A24: jal         0x800B64F0
    // 0x80049A28: addu        $a0, $t6, $t3
    ctx->r4 = ADD32(ctx->r14, ctx->r11);
    osViSwapBuffer_recomp(rdram, ctx);
        goto after_19;
    // 0x80049A28: addu        $a0, $t6, $t3
    ctx->r4 = ADD32(ctx->r14, ctx->r11);
    after_19:
    // 0x80049A2C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80049A30: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80049A34: lw          $t8, 0x2118($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2118);
    // 0x80049A38: lw          $t4, 0x2110($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2110);
    // 0x80049A3C: nop

    // 0x80049A40: slt         $at, $t4, $t8
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80049A44: bne         $at, $zero, L_80049A60
    if (ctx->r1 != 0) {
        // 0x80049A48: nop
    
            goto L_80049A60;
    }
    // 0x80049A48: nop

    // 0x80049A4C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80049A50: addiu       $a0, $a0, 0x2108
    ctx->r4 = ADD32(ctx->r4, 0X2108);
    // 0x80049A54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80049A58: jal         0x800B3C20
    // 0x80049A5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_20;
    // 0x80049A5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
L_80049A60:
    // 0x80049A60: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80049A64: addiu       $a0, $a0, 0x2108
    ctx->r4 = ADD32(ctx->r4, 0X2108);
    // 0x80049A68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80049A6C: jal         0x800B3C20
    // 0x80049A70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_21;
    // 0x80049A70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_21:
    // 0x80049A74: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80049A78: lhu         $t9, 0x20B0($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X20B0);
    // 0x80049A7C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80049A80: xori        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 ^ 0X1;
    // 0x80049A84: jal         0x800B6550
    // 0x80049A88: sh          $t0, 0x20B0($at)
    MEM_H(0X20B0, ctx->r1) = ctx->r8;
    osGetTime_recomp(rdram, ctx);
        goto after_22;
    // 0x80049A88: sh          $t0, 0x20B0($at)
    MEM_H(0X20B0, ctx->r1) = ctx->r8;
    after_22:
    // 0x80049A8C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80049A90: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80049A94: lw          $t7, 0x54($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X54);
    // 0x80049A98: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80049A9C: sw          $v0, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r2;
    // 0x80049AA0: sw          $v1, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r3;
    // 0x80049AA4: lw          $t2, -0x128($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X128);
    // 0x80049AA8: nop

    // 0x80049AAC: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x80049AB0: b           L_80049388
    // 0x80049AB4: sw          $t5, -0x128($at)
    MEM_W(-0X128, ctx->r1) = ctx->r13;
        goto L_80049388;
    // 0x80049AB4: sw          $t5, -0x128($at)
    MEM_W(-0X128, ctx->r1) = ctx->r13;
    // 0x80049AB8: nop

    // 0x80049ABC: nop

    // 0x80049AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049AC4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80049AC8: jr          $ra
    // 0x80049ACC: nop

    return;
    // 0x80049ACC: nop

;}
RECOMP_FUNC void func_80049AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049AD0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80049AD4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80049AD8: jal         0x800614A8
    // 0x80049ADC: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    func_800614A8(rdram, ctx);
        goto after_0;
    // 0x80049ADC: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    after_0:
    // 0x80049AE0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80049AE4: jal         0x800B3BFC
    // 0x80049AE8: addiu       $a0, $a0, -0x3FA0
    ctx->r4 = ADD32(ctx->r4, -0X3FA0);
    osSyncPrintf(rdram, ctx);
        goto after_1;
    // 0x80049AE8: addiu       $a0, $a0, -0x3FA0
    ctx->r4 = ADD32(ctx->r4, -0X3FA0);
    after_1:
    // 0x80049AEC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80049AF0: addiu       $a0, $a0, -0x6A90
    ctx->r4 = ADD32(ctx->r4, -0X6A90);
    // 0x80049AF4: jal         0x800B6A20
    // 0x80049AF8: addiu       $a0, $a0, 0xA0
    ctx->r4 = ADD32(ctx->r4, 0XA0);
    osViSetMode_recomp(rdram, ctx);
        goto after_2;
    // 0x80049AF8: addiu       $a0, $a0, 0xA0
    ctx->r4 = ADD32(ctx->r4, 0XA0);
    after_2:
    // 0x80049AFC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80049B00: jal         0x800B3BFC
    // 0x80049B04: addiu       $a0, $a0, -0x3F98
    ctx->r4 = ADD32(ctx->r4, -0X3F98);
    osSyncPrintf(rdram, ctx);
        goto after_3;
    // 0x80049B04: addiu       $a0, $a0, -0x3F98
    ctx->r4 = ADD32(ctx->r4, -0X3F98);
    after_3:
    // 0x80049B08: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80049B0C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80049B10: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80049B14: sb          $t6, -0x1E0($at)
    MEM_B(-0X1E0, ctx->r1) = ctx->r14;
    // 0x80049B18: jal         0x800B3BFC
    // 0x80049B1C: addiu       $a0, $a0, -0x3F90
    ctx->r4 = ADD32(ctx->r4, -0X3F90);
    osSyncPrintf(rdram, ctx);
        goto after_4;
    // 0x80049B1C: addiu       $a0, $a0, -0x3F90
    ctx->r4 = ADD32(ctx->r4, -0X3F90);
    after_4:
    // 0x80049B20: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80049B24: lw          $t8, 0xEB4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XEB4);
    // 0x80049B28: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80049B2C: addiu       $t7, $t7, -0x830
    ctx->r15 = ADD32(ctx->r15, -0X830);
    // 0x80049B30: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80049B34: jal         0x8007DFC0
    // 0x80049B38: subu        $a1, $t8, $t7
    ctx->r5 = SUB32(ctx->r24, ctx->r15);
    func_8007DFC0(rdram, ctx);
        goto after_5;
    // 0x80049B38: subu        $a1, $t8, $t7
    ctx->r5 = SUB32(ctx->r24, ctx->r15);
    after_5:
    // 0x80049B3C: lui         $a0, 0xB
    ctx->r4 = S32(0XB << 16);
    // 0x80049B40: lui         $a1, 0xB
    ctx->r5 = S32(0XB << 16);
    // 0x80049B44: addiu       $a1, $a1, -0x2520
    ctx->r5 = ADD32(ctx->r5, -0X2520);
    // 0x80049B48: jal         0x800A9E44
    // 0x80049B4C: addiu       $a0, $a0, -0x7E70
    ctx->r4 = ADD32(ctx->r4, -0X7E70);
    func_800A9E44(rdram, ctx);
        goto after_6;
    // 0x80049B4C: addiu       $a0, $a0, -0x7E70
    ctx->r4 = ADD32(ctx->r4, -0X7E70);
    after_6:
    // 0x80049B50: jal         0x8007CF40
    // 0x80049B54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8007CF40(rdram, ctx);
        goto after_7;
    // 0x80049B54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x80049B58: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80049B5C: jal         0x800B3BFC
    // 0x80049B60: addiu       $a0, $a0, -0x3F88
    ctx->r4 = ADD32(ctx->r4, -0X3F88);
    osSyncPrintf(rdram, ctx);
        goto after_8;
    // 0x80049B60: addiu       $a0, $a0, -0x3F88
    ctx->r4 = ADD32(ctx->r4, -0X3F88);
    after_8:
    // 0x80049B64: jal         0x80061124
    // 0x80049B68: nop

    func_80061124(rdram, ctx);
        goto after_9;
    // 0x80049B68: nop

    after_9:
    // 0x80049B6C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80049B70: addiu       $t9, $t9, -0x5910
    ctx->r25 = ADD32(ctx->r25, -0X5910);
    // 0x80049B74: addiu       $t1, $t9, 0x48
    ctx->r9 = ADD32(ctx->r25, 0X48);
    // 0x80049B78: or          $t2, $sp, $zero
    ctx->r10 = ctx->r29 | 0;
L_80049B7C:
    // 0x80049B7C: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80049B80: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80049B84: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x80049B88: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x80049B8C: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x80049B90: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x80049B94: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x80049B98: bne         $t9, $t1, L_80049B7C
    if (ctx->r25 != ctx->r9) {
        // 0x80049B9C: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_80049B7C;
    }
    // 0x80049B9C: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x80049BA0: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80049BA4: nop

    // 0x80049BA8: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x80049BAC: lw          $t1, 0x4($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X4);
    // 0x80049BB0: nop

    // 0x80049BB4: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x80049BB8: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80049BBC: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80049BC0: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80049BC4: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x80049BC8: jal         0x80060D10
    // 0x80049BCC: nop

    func_80060D10(rdram, ctx);
        goto after_10;
    // 0x80049BCC: nop

    after_10:
    // 0x80049BD0: addiu       $t3, $zero, 0x190
    ctx->r11 = ADD32(0, 0X190);
    // 0x80049BD4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80049BD8: sw          $t3, -0x2B0($at)
    MEM_W(-0X2B0, ctx->r1) = ctx->r11;
    // 0x80049BDC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80049BE0: addiu       $t4, $zero, 0x12C
    ctx->r12 = ADD32(0, 0X12C);
    // 0x80049BE4: sw          $t4, -0x2AC($at)
    MEM_W(-0X2AC, ctx->r1) = ctx->r12;
    // 0x80049BE8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80049BEC: sw          $zero, -0x2A0($at)
    MEM_W(-0X2A0, ctx->r1) = 0;
    // 0x80049BF0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80049BF4: sw          $zero, -0x29C($at)
    MEM_W(-0X29C, ctx->r1) = 0;
    // 0x80049BF8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80049BFC: addiu       $t5, $zero, 0x190
    ctx->r13 = ADD32(0, 0X190);
    // 0x80049C00: sw          $t5, -0x298($at)
    MEM_W(-0X298, ctx->r1) = ctx->r13;
    // 0x80049C04: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80049C08: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x80049C0C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80049C10: sw          $t6, -0x294($at)
    MEM_W(-0X294, ctx->r1) = ctx->r14;
    // 0x80049C14: jal         0x800B3BFC
    // 0x80049C18: addiu       $a0, $a0, -0x3F80
    ctx->r4 = ADD32(ctx->r4, -0X3F80);
    osSyncPrintf(rdram, ctx);
        goto after_11;
    // 0x80049C18: addiu       $a0, $a0, -0x3F80
    ctx->r4 = ADD32(ctx->r4, -0X3F80);
    after_11:
    // 0x80049C1C: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    // 0x80049C20: jal         0x8006110C
    // 0x80049C24: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    func_8006110C(rdram, ctx);
        goto after_12;
    // 0x80049C24: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    after_12:
    // 0x80049C28: jal         0x80060E30
    // 0x80049C2C: nop

    func_80060E30(rdram, ctx);
        goto after_13;
    // 0x80049C2C: nop

    after_13:
L_80049C30:
    // 0x80049C30: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80049C34: addiu       $a0, $a0, -0x44F8
    ctx->r4 = ADD32(ctx->r4, -0X44F8);
    // 0x80049C38: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80049C3C: jal         0x800B3C20
    // 0x80049C40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_14;
    // 0x80049C40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x80049C44: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80049C48: jal         0x800B3BFC
    // 0x80049C4C: addiu       $a0, $a0, -0x3F78
    ctx->r4 = ADD32(ctx->r4, -0X3F78);
    osSyncPrintf(rdram, ctx);
        goto after_15;
    // 0x80049C4C: addiu       $a0, $a0, -0x3F78
    ctx->r4 = ADD32(ctx->r4, -0X3F78);
    after_15:
    // 0x80049C50: b           L_80049C30
    // 0x80049C54: nop

        goto L_80049C30;
    // 0x80049C54: nop

    // 0x80049C58: nop

    // 0x80049C5C: nop

    // 0x80049C60: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80049C64: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80049C68: jr          $ra
    // 0x80049C6C: nop

    return;
    // 0x80049C6C: nop

;}
RECOMP_FUNC void func_80049C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049C70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80049C74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049C78: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80049C7C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80049C80: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80049C84: sb          $zero, -0x1CC($at)
    MEM_B(-0X1CC, ctx->r1) = 0;
    // 0x80049C88: addiu       $a0, $a0, 0x558
    ctx->r4 = ADD32(ctx->r4, 0X558);
    // 0x80049C8C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80049C90: jal         0x800B3C20
    // 0x80049C94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80049C94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80049C98: lui         $a0, 0x8
    ctx->r4 = S32(0X8 << 16);
    // 0x80049C9C: jal         0x800B6A90
    // 0x80049CA0: ori         $a0, $a0, 0x401
    ctx->r4 = ctx->r4 | 0X401;
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80049CA0: ori         $a0, $a0, 0x401
    ctx->r4 = ctx->r4 | 0X401;
    after_1:
    // 0x80049CA4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80049CA8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80049CAC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80049CB0: jal         0x80061198
    // 0x80049CB4: sb          $t6, -0x1CC($at)
    MEM_B(-0X1CC, ctx->r1) = ctx->r14;
    func_80061198(rdram, ctx);
        goto after_2;
    // 0x80049CB4: sb          $t6, -0x1CC($at)
    MEM_B(-0X1CC, ctx->r1) = ctx->r14;
    after_2:
    // 0x80049CB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80049CBC: jal         0x800B6A90
    // 0x80049CC0: nop

    osSetIntMask_recomp(rdram, ctx);
        goto after_3;
    // 0x80049CC0: nop

    after_3:
L_80049CC4:
    // 0x80049CC4: b           L_80049CC4
    pause_self(rdram);
    // 0x80049CC8: nop

    // 0x80049CCC: nop

    // 0x80049CD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80049CD8: jr          $ra
    // 0x80049CDC: nop

    return;
    // 0x80049CDC: nop

;}
RECOMP_FUNC void bootproc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049CE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80049CE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80049CE8: jal         0x800B6B30
    // 0x80049CEC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    osInitialize_recomp(rdram, ctx);
        goto after_0;
    // 0x80049CEC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80049CF0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80049CF4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80049CF8: addiu       $a1, $a1, 0x458
    ctx->r5 = ADD32(ctx->r5, 0X458);
    // 0x80049CFC: addiu       $a0, $a0, 0x558
    ctx->r4 = ADD32(ctx->r4, 0X558);
    // 0x80049D00: jal         0x800B3080
    // 0x80049D04: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x80049D04: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x80049D08: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80049D0C: addiu       $a1, $a1, 0x558
    ctx->r5 = ADD32(ctx->r5, 0X558);
    // 0x80049D10: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80049D14: jal         0x800B30B0
    // 0x80049D18: addiu       $a2, $zero, 0x309
    ctx->r6 = ADD32(0, 0X309);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80049D18: addiu       $a2, $zero, 0x309
    ctx->r6 = ADD32(0, 0X309);
    after_2:
    // 0x80049D1C: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    // 0x80049D20: jal         0x80061134
    // 0x80049D24: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    func_80061134(rdram, ctx);
        goto after_3;
    // 0x80049D24: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    after_3:
    // 0x80049D28: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80049D2C: addiu       $t6, $t6, 0x76D0
    ctx->r14 = ADD32(ctx->r14, 0X76D0);
    // 0x80049D30: addiu       $t7, $t6, 0x2000
    ctx->r15 = ADD32(ctx->r14, 0X2000);
    // 0x80049D34: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80049D38: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x80049D3C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80049D40: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x80049D44: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80049D48: addiu       $a2, $a2, -0x6288
    ctx->r6 = ADD32(ctx->r6, -0X6288);
    // 0x80049D4C: addiu       $a0, $a0, 0x3370
    ctx->r4 = ADD32(ctx->r4, 0X3370);
    // 0x80049D50: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80049D54: jal         0x800B6010
    // 0x80049D58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    osCreateThread_recomp(rdram, ctx);
        goto after_4;
    // 0x80049D58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80049D5C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80049D60: jal         0x800B6160
    // 0x80049D64: addiu       $a0, $a0, 0x3370
    ctx->r4 = ADD32(ctx->r4, 0X3370);
    osStartThread_recomp(rdram, ctx);
        goto after_5;
    // 0x80049D64: addiu       $a0, $a0, 0x3370
    ctx->r4 = ADD32(ctx->r4, 0X3370);
    after_5:
    // 0x80049D68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80049D6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80049D70: jr          $ra
    // 0x80049D74: nop

    return;
    // 0x80049D74: nop

;}
RECOMP_FUNC void func_80049D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049D78: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80049D7C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80049D80: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80049D84: addiu       $t6, $t6, -0x6930
    ctx->r14 = ADD32(ctx->r14, -0X6930);
    // 0x80049D88: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80049D8C: addiu       $t7, $t6, 0x2000
    ctx->r15 = ADD32(ctx->r14, 0X2000);
    // 0x80049D90: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80049D94: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x80049D98: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x80049D9C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80049DA0: addiu       $a2, $a2, -0x6390
    ctx->r6 = ADD32(ctx->r6, -0X6390);
    // 0x80049DA4: addiu       $a0, $a0, 0x3520
    ctx->r4 = ADD32(ctx->r4, 0X3520);
    // 0x80049DA8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80049DAC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80049DB0: jal         0x800B6010
    // 0x80049DB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    osCreateThread_recomp(rdram, ctx);
        goto after_0;
    // 0x80049DB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80049DB8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80049DBC: jal         0x800B6160
    // 0x80049DC0: addiu       $a0, $a0, 0x3520
    ctx->r4 = ADD32(ctx->r4, 0X3520);
    osStartThread_recomp(rdram, ctx);
        goto after_1;
    // 0x80049DC0: addiu       $a0, $a0, 0x3520
    ctx->r4 = ADD32(ctx->r4, 0X3520);
    after_1:
    // 0x80049DC4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80049DC8: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x80049DCC: addiu       $a2, $a2, -0x4930
    ctx->r6 = ADD32(ctx->r6, -0X4930);
    // 0x80049DD0: addiu       $a1, $a1, -0x4530
    ctx->r5 = ADD32(ctx->r5, -0X4530);
    // 0x80049DD4: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    // 0x80049DD8: jal         0x800B6E90
    // 0x80049DDC: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    osCreatePiManager_recomp(rdram, ctx);
        goto after_2;
    // 0x80049DDC: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_2:
    // 0x80049DE0: jal         0x800611E0
    // 0x80049DE4: nop

    func_800611E0(rdram, ctx);
        goto after_3;
    // 0x80049DE4: nop

    after_3:
    // 0x80049DE8: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x80049DEC: lw          $t9, 0x300($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X300);
    // 0x80049DF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80049DF4: bne         $t9, $at, L_80049E60
    if (ctx->r25 != ctx->r1) {
        // 0x80049DF8: nop
    
            goto L_80049E60;
    }
    // 0x80049DF8: nop

    // 0x80049DFC: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80049E00: addiu       $t0, $t0, -0x5910
    ctx->r8 = ADD32(ctx->r8, -0X5910);
    // 0x80049E04: addiu       $t2, $t0, 0x48
    ctx->r10 = ADD32(ctx->r8, 0X48);
    // 0x80049E08: or          $t3, $sp, $zero
    ctx->r11 = ctx->r29 | 0;
L_80049E0C:
    // 0x80049E0C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80049E10: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x80049E14: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x80049E18: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x80049E1C: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x80049E20: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x80049E24: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x80049E28: bne         $t0, $t2, L_80049E0C
    if (ctx->r8 != ctx->r10) {
        // 0x80049E2C: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_80049E0C;
    }
    // 0x80049E2C: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
    // 0x80049E30: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80049E34: nop

    // 0x80049E38: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x80049E3C: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x80049E40: nop

    // 0x80049E44: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x80049E48: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80049E4C: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80049E50: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80049E54: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x80049E58: jal         0x80060D10
    // 0x80049E5C: nop

    func_80060D10(rdram, ctx);
        goto after_4;
    // 0x80049E5C: nop

    after_4:
L_80049E60:
    // 0x80049E60: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x80049E64: lw          $t4, 0x300($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X300);
    // 0x80049E68: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80049E6C: bne         $t4, $at, L_80049ED8
    if (ctx->r12 != ctx->r1) {
        // 0x80049E70: nop
    
            goto L_80049ED8;
    }
    // 0x80049E70: nop

    // 0x80049E74: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80049E78: addiu       $t5, $t5, -0x5870
    ctx->r13 = ADD32(ctx->r13, -0X5870);
    // 0x80049E7C: addiu       $t7, $t5, 0x48
    ctx->r15 = ADD32(ctx->r13, 0X48);
    // 0x80049E80: or          $t8, $sp, $zero
    ctx->r24 = ctx->r29 | 0;
L_80049E84:
    // 0x80049E84: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80049E88: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x80049E8C: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80049E90: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x80049E94: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80049E98: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x80049E9C: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x80049EA0: bne         $t5, $t7, L_80049E84
    if (ctx->r13 != ctx->r15) {
        // 0x80049EA4: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_80049E84;
    }
    // 0x80049EA4: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x80049EA8: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80049EAC: nop

    // 0x80049EB0: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80049EB4: lw          $t7, 0x4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4);
    // 0x80049EB8: nop

    // 0x80049EBC: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x80049EC0: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80049EC4: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80049EC8: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80049ECC: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x80049ED0: jal         0x80060D10
    // 0x80049ED4: nop

    func_80060D10(rdram, ctx);
        goto after_5;
    // 0x80049ED4: nop

    after_5:
L_80049ED8:
    // 0x80049ED8: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x80049EDC: lw          $t9, 0x300($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X300);
    // 0x80049EE0: nop

    // 0x80049EE4: bne         $t9, $zero, L_80049F50
    if (ctx->r25 != 0) {
        // 0x80049EE8: nop
    
            goto L_80049F50;
    }
    // 0x80049EE8: nop

    // 0x80049EEC: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80049EF0: addiu       $t1, $t1, -0x5820
    ctx->r9 = ADD32(ctx->r9, -0X5820);
    // 0x80049EF4: addiu       $t0, $t1, 0x48
    ctx->r8 = ADD32(ctx->r9, 0X48);
    // 0x80049EF8: or          $t3, $sp, $zero
    ctx->r11 = ctx->r29 | 0;
L_80049EFC:
    // 0x80049EFC: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x80049F00: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80049F04: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x80049F08: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x80049F0C: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x80049F10: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x80049F14: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x80049F18: bne         $t1, $t0, L_80049EFC
    if (ctx->r9 != ctx->r8) {
        // 0x80049F1C: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_80049EFC;
    }
    // 0x80049F1C: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
    // 0x80049F20: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x80049F24: nop

    // 0x80049F28: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x80049F2C: lw          $t0, 0x4($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X4);
    // 0x80049F30: nop

    // 0x80049F34: sw          $t0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r8;
    // 0x80049F38: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80049F3C: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80049F40: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80049F44: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x80049F48: jal         0x80060D10
    // 0x80049F4C: nop

    func_80060D10(rdram, ctx);
        goto after_6;
    // 0x80049F4C: nop

    after_6:
L_80049F50:
    // 0x80049F50: jal         0x800B7060
    // 0x80049F54: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    osCreateViManager_recomp(rdram, ctx);
        goto after_7;
    // 0x80049F54: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_7:
    // 0x80049F58: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    // 0x80049F5C: jal         0x80061134
    // 0x80049F60: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    func_80061134(rdram, ctx);
        goto after_8;
    // 0x80049F60: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    after_8:
    // 0x80049F64: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x80049F68: lw          $t4, 0x300($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X300);
    // 0x80049F6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80049F70: bne         $t4, $at, L_80049FA0
    if (ctx->r12 != ctx->r1) {
        // 0x80049F74: nop
    
            goto L_80049FA0;
    }
    // 0x80049F74: nop

    // 0x80049F78: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80049F7C: addiu       $a1, $a1, -0x41D8
    ctx->r5 = ADD32(ctx->r5, -0X41D8);
    // 0x80049F80: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80049F84: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80049F88: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80049F8C: addiu       $a0, $a0, -0x4460
    ctx->r4 = ADD32(ctx->r4, -0X4460);
    // 0x80049F90: addiu       $a1, $a1, 0x2000
    ctx->r5 = ADD32(ctx->r5, 0X2000);
    // 0x80049F94: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80049F98: jal         0x8005EC10
    // 0x80049F9C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8005EC10(rdram, ctx);
        goto after_9;
    // 0x80049F9C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_9:
L_80049FA0:
    // 0x80049FA0: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80049FA4: lw          $t7, 0x300($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X300);
    // 0x80049FA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80049FAC: bne         $t7, $at, L_80049FDC
    if (ctx->r15 != ctx->r1) {
        // 0x80049FB0: nop
    
            goto L_80049FDC;
    }
    // 0x80049FB0: nop

    // 0x80049FB4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80049FB8: addiu       $a1, $a1, -0x41D8
    ctx->r5 = ADD32(ctx->r5, -0X41D8);
    // 0x80049FBC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80049FC0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80049FC4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80049FC8: addiu       $a0, $a0, -0x4460
    ctx->r4 = ADD32(ctx->r4, -0X4460);
    // 0x80049FCC: addiu       $a1, $a1, 0x2000
    ctx->r5 = ADD32(ctx->r5, 0X2000);
    // 0x80049FD0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80049FD4: jal         0x8005EC10
    // 0x80049FD8: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    func_8005EC10(rdram, ctx);
        goto after_10;
    // 0x80049FD8: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_10:
L_80049FDC:
    // 0x80049FDC: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x80049FE0: lw          $t8, 0x300($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X300);
    // 0x80049FE4: nop

    // 0x80049FE8: bne         $t8, $zero, L_8004A018
    if (ctx->r24 != 0) {
        // 0x80049FEC: nop
    
            goto L_8004A018;
    }
    // 0x80049FEC: nop

    // 0x80049FF0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80049FF4: addiu       $a1, $a1, -0x41D8
    ctx->r5 = ADD32(ctx->r5, -0X41D8);
    // 0x80049FF8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80049FFC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8004A000: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004A004: addiu       $a0, $a0, -0x4460
    ctx->r4 = ADD32(ctx->r4, -0X4460);
    // 0x8004A008: addiu       $a1, $a1, 0x2000
    ctx->r5 = ADD32(ctx->r5, 0X2000);
    // 0x8004A00C: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x8004A010: jal         0x8005EC10
    // 0x8004A014: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8005EC10(rdram, ctx);
        goto after_11;
    // 0x8004A014: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_11:
L_8004A018:
    // 0x8004A018: lui         $a1, 0x8039
    ctx->r5 = S32(0X8039 << 16);
    // 0x8004A01C: addiu       $a1, $a1, -0x5300
    ctx->r5 = ADD32(ctx->r5, -0X5300);
    // 0x8004A020: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8004A024: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8004A028: jal         0x80084630
    // 0x8004A02C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80084630(rdram, ctx);
        goto after_12;
    // 0x8004A02C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x8004A030: lui         $t2, 0x8010
    ctx->r10 = S32(0X8010 << 16);
    // 0x8004A034: addiu       $t2, $t2, 0x56D0
    ctx->r10 = ADD32(ctx->r10, 0X56D0);
    // 0x8004A038: addiu       $t0, $t2, 0x2000
    ctx->r8 = ADD32(ctx->r10, 0X2000);
    // 0x8004A03C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8004A040: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8004A044: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x8004A048: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x8004A04C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8004A050: addiu       $a2, $a2, -0x5F60
    ctx->r6 = ADD32(ctx->r6, -0X5F60);
    // 0x8004A054: addiu       $a0, $a0, 0x31C0
    ctx->r4 = ADD32(ctx->r4, 0X31C0);
    // 0x8004A058: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8004A05C: jal         0x800B6010
    // 0x8004A060: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    osCreateThread_recomp(rdram, ctx);
        goto after_13;
    // 0x8004A060: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_13:
    // 0x8004A064: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8004A068: jal         0x800B6160
    // 0x8004A06C: addiu       $a0, $a0, 0x31C0
    ctx->r4 = ADD32(ctx->r4, 0X31C0);
    osStartThread_recomp(rdram, ctx);
        goto after_14;
    // 0x8004A06C: addiu       $a0, $a0, 0x31C0
    ctx->r4 = ADD32(ctx->r4, 0X31C0);
    after_14:
    // 0x8004A070: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8004A074: jal         0x800B7370
    // 0x8004A078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    osSetThreadPri_recomp(rdram, ctx);
        goto after_15;
    // 0x8004A078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
L_8004A07C:
    // 0x8004A07C: b           L_8004A07C
    pause_self(rdram);
    // 0x8004A080: nop

    // 0x8004A084: nop

    // 0x8004A088: nop

    // 0x8004A08C: nop

    // 0x8004A090: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8004A094: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8004A098: jr          $ra
    // 0x8004A09C: nop

    return;
    // 0x8004A09C: nop

;}
RECOMP_FUNC void func_8004A0A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A0A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004A0A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004A0A8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8004A0AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004A0B0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8004A0B4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x8004A0B8: jal         0x800AC06C
    // 0x8004A0BC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800AC06C(rdram, ctx);
        goto after_0;
    // 0x8004A0BC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x8004A0C0: jal         0x8004A3A4
    // 0x8004A0C4: nop

    func_8004A3A4(rdram, ctx);
        goto after_1;
    // 0x8004A0C4: nop

    after_1:
    // 0x8004A0C8: jal         0x800AC0F8
    // 0x8004A0CC: nop

    func_800AC0F8(rdram, ctx);
        goto after_2;
    // 0x8004A0CC: nop

    after_2:
    // 0x8004A0D0: jal         0x8007C0EC
    // 0x8004A0D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8007C0EC(rdram, ctx);
        goto after_3;
    // 0x8004A0D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8004A0D8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x8004A0DC: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x8004A0E0: addiu       $t7, $t7, -0x5230
    ctx->r15 = ADD32(ctx->r15, -0X5230);
    // 0x8004A0E4: addiu       $t6, $t6, 0x5590
    ctx->r14 = ADD32(ctx->r14, 0X5590);
    // 0x8004A0E8: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x8004A0EC: beq         $t8, $zero, L_8004A140
    if (ctx->r24 == 0) {
        // 0x8004A0F0: sw          $zero, 0x28($sp)
        MEM_W(0X28, ctx->r29) = 0;
            goto L_8004A140;
    }
    // 0x8004A0F0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_8004A0F4:
    // 0x8004A0F4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8004A0F8: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x8004A0FC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8004A100: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8004A104: lbu         $t1, -0x5230($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X5230);
    // 0x8004A108: lw          $t9, -0x1C4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1C4);
    // 0x8004A10C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8004A110: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x8004A114: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x8004A118: addiu       $t6, $t6, -0x5230
    ctx->r14 = ADD32(ctx->r14, -0X5230);
    // 0x8004A11C: addiu       $t5, $t5, 0x5590
    ctx->r13 = ADD32(ctx->r13, 0X5590);
    // 0x8004A120: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A124: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8004A128: subu        $t7, $t5, $t6
    ctx->r15 = SUB32(ctx->r13, ctx->r14);
    // 0x8004A12C: sw          $t2, -0x1C4($at)
    MEM_W(-0X1C4, ctx->r1) = ctx->r10;
    // 0x8004A130: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8004A134: sltu        $at, $t4, $t7
    ctx->r1 = ctx->r12 < ctx->r15 ? 1 : 0;
    // 0x8004A138: bne         $at, $zero, L_8004A0F4
    if (ctx->r1 != 0) {
        // 0x8004A13C: sw          $t4, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r12;
            goto L_8004A0F4;
    }
    // 0x8004A13C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
L_8004A140:
    // 0x8004A140: jal         0x80060E30
    // 0x8004A144: nop

    func_80060E30(rdram, ctx);
        goto after_4;
    // 0x8004A144: nop

    after_4:
L_8004A148:
    // 0x8004A148: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A14C: addiu       $a0, $a0, -0x44F8
    ctx->r4 = ADD32(ctx->r4, -0X44F8);
    // 0x8004A150: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8004A154: jal         0x800B3C20
    // 0x8004A158: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x8004A158: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8004A15C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8004A160: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8004A164: lh          $s0, 0x0($t8)
    ctx->r16 = MEM_H(ctx->r24, 0X0);
    // 0x8004A168: nop

    // 0x8004A16C: beq         $s0, $at, L_8004A18C
    if (ctx->r16 == ctx->r1) {
        // 0x8004A170: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8004A18C;
    }
    // 0x8004A170: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8004A174: beq         $s0, $at, L_8004A1E0
    if (ctx->r16 == ctx->r1) {
        // 0x8004A178: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8004A1E0;
    }
    // 0x8004A178: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8004A17C: beq         $s0, $at, L_8004A20C
    if (ctx->r16 == ctx->r1) {
        // 0x8004A180: nop
    
            goto L_8004A20C;
    }
    // 0x8004A180: nop

    // 0x8004A184: b           L_8004A148
    // 0x8004A188: nop

        goto L_8004A148;
    // 0x8004A188: nop

L_8004A18C:
    // 0x8004A18C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8004A190: lw          $t0, -0x1C8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1C8);
    // 0x8004A194: nop

    // 0x8004A198: sltiu       $at, $t0, 0x2
    ctx->r1 = ctx->r8 < 0X2 ? 1 : 0;
    // 0x8004A19C: beq         $at, $zero, L_8004A148
    if (ctx->r1 == 0) {
        // 0x8004A1A0: nop
    
            goto L_8004A148;
    }
    // 0x8004A1A0: nop

    // 0x8004A1A4: jal         0x80048B64
    // 0x8004A1A8: nop

    func_80048B64(rdram, ctx);
        goto after_6;
    // 0x8004A1A8: nop

    after_6:
    // 0x8004A1AC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8004A1B0: lw          $t9, -0x1C8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1C8);
    // 0x8004A1B4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8004A1B8: lhu         $t2, 0x20B0($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X20B0);
    // 0x8004A1BC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A1C0: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8004A1C4: sw          $t1, -0x1C8($at)
    MEM_W(-0X1C8, ctx->r1) = ctx->r9;
    // 0x8004A1C8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004A1CC: xori        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 ^ 0X1;
    // 0x8004A1D0: sh          $t3, 0x20B0($at)
    MEM_H(0X20B0, ctx->r1) = ctx->r11;
    // 0x8004A1D4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A1D8: b           L_8004A148
    // 0x8004A1DC: sw          $zero, -0x1C0($at)
    MEM_W(-0X1C0, ctx->r1) = 0;
        goto L_8004A148;
    // 0x8004A1DC: sw          $zero, -0x1C0($at)
    MEM_W(-0X1C0, ctx->r1) = 0;
L_8004A1E0:
    // 0x8004A1E0: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8004A1E4: lw          $t5, -0x114($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X114);
    // 0x8004A1E8: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8004A1EC: lw          $t4, -0x1C8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1C8);
    // 0x8004A1F0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A1F4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8004A1F8: sw          $t6, -0x114($at)
    MEM_W(-0X114, ctx->r1) = ctx->r14;
    // 0x8004A1FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A200: addiu       $t7, $t4, -0x1
    ctx->r15 = ADD32(ctx->r12, -0X1);
    // 0x8004A204: b           L_8004A148
    // 0x8004A208: sw          $t7, -0x1C8($at)
    MEM_W(-0X1C8, ctx->r1) = ctx->r15;
        goto L_8004A148;
    // 0x8004A208: sw          $t7, -0x1C8($at)
    MEM_W(-0X1C8, ctx->r1) = ctx->r15;
L_8004A20C:
    // 0x8004A20C: jal         0x80061198
    // 0x8004A210: nop

    func_80061198(rdram, ctx);
        goto after_7;
    // 0x8004A210: nop

    after_7:
    // 0x8004A214: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004A218: jal         0x80088C14
    // 0x8004A21C: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    func_80088C14(rdram, ctx);
        goto after_8;
    // 0x8004A21C: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    after_8:
    // 0x8004A220: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004A224: jal         0x8008780C
    // 0x8004A228: addiu       $a0, $a0, 0x2010
    ctx->r4 = ADD32(ctx->r4, 0X2010);
    func_8008780C(rdram, ctx);
        goto after_9;
    // 0x8004A228: addiu       $a0, $a0, 0x2010
    ctx->r4 = ADD32(ctx->r4, 0X2010);
    after_9:
    // 0x8004A22C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004A230: jal         0x8008780C
    // 0x8004A234: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_8008780C(rdram, ctx);
        goto after_10;
    // 0x8004A234: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_10:
    // 0x8004A238: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8004A23C: lw          $t8, -0x1C8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1C8);
    // 0x8004A240: lui         $at, 0xF
    ctx->r1 = S32(0XF << 16);
    // 0x8004A244: ori         $at, $at, 0x423F
    ctx->r1 = ctx->r1 | 0X423F;
    // 0x8004A248: addu        $t0, $t8, $at
    ctx->r8 = ADD32(ctx->r24, ctx->r1);
    // 0x8004A24C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A250: b           L_8004A148
    // 0x8004A254: sw          $t0, -0x1C8($at)
    MEM_W(-0X1C8, ctx->r1) = ctx->r8;
        goto L_8004A148;
    // 0x8004A254: sw          $t0, -0x1C8($at)
    MEM_W(-0X1C8, ctx->r1) = ctx->r8;
    // 0x8004A258: nop

    // 0x8004A25C: nop

    // 0x8004A260: nop

    // 0x8004A264: nop

    // 0x8004A268: nop

    // 0x8004A26C: nop

    // 0x8004A270: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004A274: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004A278: jr          $ra
    // 0x8004A27C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8004A27C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8004A280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A280: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004A284: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004A288: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A28C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004A290: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8004A294: addiu       $a0, $a0, -0x44F8
    ctx->r4 = ADD32(ctx->r4, -0X44F8);
    // 0x8004A298: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8004A29C: jal         0x800B3C20
    // 0x8004A2A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8004A2A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8004A2A4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8004A2A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8004A2AC: lh          $s0, 0x0($t6)
    ctx->r16 = MEM_H(ctx->r14, 0X0);
    // 0x8004A2B0: nop

    // 0x8004A2B4: beq         $s0, $at, L_8004A2CC
    if (ctx->r16 == ctx->r1) {
        // 0x8004A2B8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8004A2CC;
    }
    // 0x8004A2B8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8004A2BC: beq         $s0, $at, L_8004A2F8
    if (ctx->r16 == ctx->r1) {
        // 0x8004A2C0: nop
    
            goto L_8004A2F8;
    }
    // 0x8004A2C0: nop

    // 0x8004A2C4: b           L_8004A33C
    // 0x8004A2C8: nop

        goto L_8004A33C;
    // 0x8004A2C8: nop

L_8004A2CC:
    // 0x8004A2CC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8004A2D0: lw          $t7, -0x114($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X114);
    // 0x8004A2D4: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8004A2D8: lw          $t9, -0x1C8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1C8);
    // 0x8004A2DC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A2E0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8004A2E4: sw          $t8, -0x114($at)
    MEM_W(-0X114, ctx->r1) = ctx->r24;
    // 0x8004A2E8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A2EC: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8004A2F0: b           L_8004A33C
    // 0x8004A2F4: sw          $t0, -0x1C8($at)
    MEM_W(-0X1C8, ctx->r1) = ctx->r8;
        goto L_8004A33C;
    // 0x8004A2F4: sw          $t0, -0x1C8($at)
    MEM_W(-0X1C8, ctx->r1) = ctx->r8;
L_8004A2F8:
    // 0x8004A2F8: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8004A2FC: lw          $t1, -0x1C8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1C8);
    // 0x8004A300: lui         $at, 0xF
    ctx->r1 = S32(0XF << 16);
    // 0x8004A304: ori         $at, $at, 0x423F
    ctx->r1 = ctx->r1 | 0X423F;
    // 0x8004A308: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x8004A30C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A310: jal         0x80061198
    // 0x8004A314: sw          $t2, -0x1C8($at)
    MEM_W(-0X1C8, ctx->r1) = ctx->r10;
    func_80061198(rdram, ctx);
        goto after_1;
    // 0x8004A314: sw          $t2, -0x1C8($at)
    MEM_W(-0X1C8, ctx->r1) = ctx->r10;
    after_1:
    // 0x8004A318: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004A31C: jal         0x80088C14
    // 0x8004A320: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    func_80088C14(rdram, ctx);
        goto after_2;
    // 0x8004A320: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    after_2:
    // 0x8004A324: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004A328: jal         0x8008780C
    // 0x8004A32C: addiu       $a0, $a0, 0x2010
    ctx->r4 = ADD32(ctx->r4, 0X2010);
    func_8008780C(rdram, ctx);
        goto after_3;
    // 0x8004A32C: addiu       $a0, $a0, 0x2010
    ctx->r4 = ADD32(ctx->r4, 0X2010);
    after_3:
    // 0x8004A330: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004A334: jal         0x8008780C
    // 0x8004A338: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_8008780C(rdram, ctx);
        goto after_4;
    // 0x8004A338: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_4:
L_8004A33C:
    // 0x8004A33C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004A340: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004A344: jr          $ra
    // 0x8004A348: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8004A348: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8004A34C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A34C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004A350: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8004A354: lw          $t7, -0x114($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X114);
    // 0x8004A358: lw          $t6, -0x110($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X110);
    // 0x8004A35C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004A360: sltu        $at, $t7, $t6
    ctx->r1 = ctx->r15 < ctx->r14 ? 1 : 0;
    // 0x8004A364: beq         $at, $zero, L_8004A394
    if (ctx->r1 == 0) {
        // 0x8004A368: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8004A394;
    }
    // 0x8004A368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_8004A36C:
    // 0x8004A36C: jal         0x8004A280
    // 0x8004A370: nop

    func_8004A280(rdram, ctx);
        goto after_0;
    // 0x8004A370: nop

    after_0:
    // 0x8004A374: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8004A378: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8004A37C: lw          $t9, -0x114($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X114);
    // 0x8004A380: lw          $t8, -0x110($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X110);
    // 0x8004A384: nop

    // 0x8004A388: sltu        $at, $t9, $t8
    ctx->r1 = ctx->r25 < ctx->r24 ? 1 : 0;
    // 0x8004A38C: bne         $at, $zero, L_8004A36C
    if (ctx->r1 != 0) {
        // 0x8004A390: nop
    
            goto L_8004A36C;
    }
    // 0x8004A390: nop

L_8004A394:
    // 0x8004A394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004A398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004A39C: jr          $ra
    // 0x8004A3A0: nop

    return;
    // 0x8004A3A0: nop

;}
