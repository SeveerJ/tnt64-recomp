#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800A45C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A45C4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A45C8: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x800A45CC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x800A45D0: jr          $ra
    // 0x800A45D4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x800A45D4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800A45D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A45D8: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A45DC: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x800A45E0: jr          $ra
    // 0x800A45E4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x800A45E4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800A45E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A45E8: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A45EC: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x800A45F0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x800A45F4: jr          $ra
    // 0x800A45F8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x800A45F8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800A45FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A45FC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A4600: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x800A4604: jr          $ra
    // 0x800A4608: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x800A4608: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800A460C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A460C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A4610: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x800A4614: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x800A4618: jr          $ra
    // 0x800A461C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x800A461C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800A4620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4620: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A4624: ori         $t7, $t6, 0x40
    ctx->r15 = ctx->r14 | 0X40;
    // 0x800A4628: jr          $ra
    // 0x800A462C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x800A462C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800A4630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4630: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A4634: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x800A4638: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x800A463C: jr          $ra
    // 0x800A4640: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x800A4640: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800A4644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4644: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A4648: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x800A464C: jr          $ra
    // 0x800A4650: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x800A4650: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800A4654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4654: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A4658: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x800A465C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x800A4660: jr          $ra
    // 0x800A4664: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x800A4664: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800A4668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4668: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A466C: ori         $t7, $t6, 0x200
    ctx->r15 = ctx->r14 | 0X200;
    // 0x800A4670: jr          $ra
    // 0x800A4674: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x800A4674: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800A4678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4678: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A467C: addiu       $at, $zero, -0x201
    ctx->r1 = ADD32(0, -0X201);
    // 0x800A4680: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x800A4684: jr          $ra
    // 0x800A4688: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x800A4688: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800A468C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A468C: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x800A4690: jr          $ra
    // 0x800A4694: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    return;
    // 0x800A4694: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_800A4698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4698: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A469C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A46A0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A46A4: sh          $t6, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r14;
    // 0x800A46A8: jal         0x800A6DD8
    // 0x800A46AC: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
    func_800A6DD8(rdram, ctx);
        goto after_0;
    // 0x800A46AC: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
    after_0:
    // 0x800A46B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A46B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A46B8: jr          $ra
    // 0x800A46BC: nop

    return;
    // 0x800A46BC: nop

;}
RECOMP_FUNC void func_800A46C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A46C0: jr          $ra
    // 0x800A46C4: sb          $a1, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r5;
    return;
    // 0x800A46C4: sb          $a1, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800A46C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A46C8: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x800A46CC: sll         $t8, $a1, 6
    ctx->r24 = S32(ctx->r5 << 6);
    // 0x800A46D0: lw          $t7, 0x28($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X28);
    // 0x800A46D4: jr          $ra
    // 0x800A46D8: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    return;
    // 0x800A46D8: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
;}
RECOMP_FUNC void func_800A46DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A46DC: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x800A46E0: sll         $t8, $a2, 6
    ctx->r24 = S32(ctx->r6 << 6);
    // 0x800A46E4: lw          $t7, 0x28($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X28);
    // 0x800A46E8: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800A46EC: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x800A46F0: lwc1        $f4, 0xF0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0XF0);
    // 0x800A46F4: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x800A46F8: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x800A46FC: lwc1        $f6, 0xF4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0XF4);
    // 0x800A4700: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x800A4704: lw          $t1, 0xC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC);
    // 0x800A4708: lwc1        $f8, 0xF8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0XF8);
    // 0x800A470C: jr          $ra
    // 0x800A4710: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    return;
    // 0x800A4710: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_800A4714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4714: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x800A4718: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800A471C: sll         $t8, $a2, 6
    ctx->r24 = S32(ctx->r6 << 6);
    // 0x800A4720: lw          $t7, 0x28($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X28);
    // 0x800A4724: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800A4728: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x800A472C: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800A4730: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    // 0x800A4734: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800A4738: jr          $ra
    // 0x800A473C: swc1        $f8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f8.u32l;
    return;
    // 0x800A473C: swc1        $f8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_800A4740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4740: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800A4744: nop

    // 0x800A4748: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x800A474C: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    // 0x800A4750: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x800A4754: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x800A4758: swc1        $f0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f0.u32l;
    // 0x800A475C: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    // 0x800A4760: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    // 0x800A4764: swc1        $f0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f0.u32l;
    // 0x800A4768: swc1        $f0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f0.u32l;
    // 0x800A476C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x800A4770: beq         $v0, $zero, L_800A4844
    if (ctx->r2 == 0) {
        // 0x800A4774: nop
    
            goto L_800A4844;
    }
    // 0x800A4774: nop

    // 0x800A4778: beq         $v0, $zero, L_800A4844
    if (ctx->r2 == 0) {
        // 0x800A477C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800A4844;
    }
    // 0x800A477C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800A4780: lw          $t6, 0x20($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X20);
L_800A4784:
    // 0x800A4784: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800A4788: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800A478C: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
    // 0x800A4790: lw          $t1, 0x1C($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X1C);
    // 0x800A4794: lh          $t2, 0x16($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X16);
    // 0x800A4798: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x800A479C: lwc1        $f0, 0x18($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X18);
L_800A47A0:
    // 0x800A47A0: andi        $t7, $t2, 0x1
    ctx->r15 = ctx->r10 & 0X1;
    // 0x800A47A4: beq         $t7, $zero, L_800A47B0
    if (ctx->r15 == 0) {
        // 0x800A47A8: sra         $t8, $t2, 1
        ctx->r24 = S32(SIGNED(ctx->r10) >> 1);
            goto L_800A47B0;
    }
    // 0x800A47A8: sra         $t8, $t2, 1
    ctx->r24 = S32(SIGNED(ctx->r10) >> 1);
    // 0x800A47AC: addiu       $t1, $t1, 0x14
    ctx->r9 = ADD32(ctx->r9, 0X14);
L_800A47B0:
    // 0x800A47B0: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
    // 0x800A47B4: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x800A47B8: bne         $t3, $zero, L_800A47A0
    if (ctx->r11 != 0) {
        // 0x800A47BC: sra         $t2, $t9, 16
        ctx->r10 = S32(SIGNED(ctx->r25) >> 16);
            goto L_800A47A0;
    }
    // 0x800A47BC: sra         $t2, $t9, 16
    ctx->r10 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800A47C0: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
L_800A47C4:
    // 0x800A47C4: andi        $t5, $t2, 0x1
    ctx->r13 = ctx->r10 & 0X1;
    // 0x800A47C8: beq         $t5, $zero, L_800A481C
    if (ctx->r13 == 0) {
        // 0x800A47CC: sra         $t9, $t2, 1
        ctx->r25 = S32(SIGNED(ctx->r10) >> 1);
            goto L_800A481C;
    }
    // 0x800A47CC: sra         $t9, $t2, 1
    ctx->r25 = S32(SIGNED(ctx->r10) >> 1);
    // 0x800A47D0: lw          $t6, 0x10($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X10);
    // 0x800A47D4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800A47D8: addiu       $t1, $t1, 0x14
    ctx->r9 = ADD32(ctx->r9, 0X14);
    // 0x800A47DC: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800A47E0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800A47E4: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800A47E8: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x800A47EC: lw          $t7, -0x4($t1)
    ctx->r15 = MEM_W(ctx->r9, -0X4);
    // 0x800A47F0: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800A47F4: lwc1        $f18, 0x4($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800A47F8: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x800A47FC: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x800A4800: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x800A4804: lw          $t8, -0x4($t1)
    ctx->r24 = MEM_W(ctx->r9, -0X4);
    // 0x800A4808: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800A480C: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800A4810: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800A4814: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x800A4818: swc1        $f16, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f16.u32l;
L_800A481C:
    // 0x800A481C: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
    // 0x800A4820: sll         $t4, $t9, 16
    ctx->r12 = S32(ctx->r25 << 16);
    // 0x800A4824: sra         $t2, $t4, 16
    ctx->r10 = S32(SIGNED(ctx->r12) >> 16);
    // 0x800A4828: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800A482C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800A4830: bne         $t3, $zero, L_800A47C4
    if (ctx->r11 != 0) {
        // 0x800A4834: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_800A47C4;
    }
    // 0x800A4834: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x800A4838: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x800A483C: bnel        $v1, $zero, L_800A4784
    if (ctx->r3 != 0) {
        // 0x800A4840: lw          $t6, 0x20($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X20);
            goto L_800A4784;
    }
    goto skip_0;
    // 0x800A4840: lw          $t6, 0x20($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X20);
    skip_0:
L_800A4844:
    // 0x800A4844: jr          $ra
    // 0x800A4848: nop

    return;
    // 0x800A4848: nop

;}
RECOMP_FUNC void func_800A484C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A484C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x800A4850: sll         $t8, $a2, 6
    ctx->r24 = S32(ctx->r6 << 6);
    // 0x800A4854: lw          $t7, 0x28($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X28);
    // 0x800A4858: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800A485C: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x800A4860: bnel        $v1, $zero, L_800A4874
    if (ctx->r3 != 0) {
        // 0x800A4864: lw          $v0, 0x14($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X14);
            goto L_800A4874;
    }
    goto skip_0;
    // 0x800A4864: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    skip_0:
    // 0x800A4868: jr          $ra
    // 0x800A486C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    return;
    // 0x800A486C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x800A4870: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
L_800A4874:
    // 0x800A4874: and         $t9, $v0, $a3
    ctx->r25 = ctx->r2 & ctx->r7;
    // 0x800A4878: bne         $t9, $zero, L_800A4888
    if (ctx->r25 != 0) {
        // 0x800A487C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800A4888;
    }
    // 0x800A487C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A4880: jr          $ra
    // 0x800A4884: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    return;
    // 0x800A4884: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
L_800A4888:
    // 0x800A4888: beq         $a3, $zero, L_800A48C4
    if (ctx->r7 == 0) {
        // 0x800A488C: lw          $a2, 0x1C($v1)
        ctx->r6 = MEM_W(ctx->r3, 0X1C);
            goto L_800A48C4;
    }
    // 0x800A488C: lw          $a2, 0x1C($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X1C);
L_800A4890:
    // 0x800A4890: andi        $t0, $a3, 0x1
    ctx->r8 = ctx->r7 & 0X1;
    // 0x800A4894: beq         $t0, $zero, L_800A48A8
    if (ctx->r8 == 0) {
        // 0x800A4898: sra         $t2, $a3, 1
        ctx->r10 = S32(SIGNED(ctx->r7) >> 1);
            goto L_800A48A8;
    }
    // 0x800A4898: sra         $t2, $a3, 1
    ctx->r10 = S32(SIGNED(ctx->r7) >> 1);
    // 0x800A489C: lh          $t1, 0x6($a2)
    ctx->r9 = MEM_H(ctx->r6, 0X6);
    // 0x800A48A0: jr          $ra
    // 0x800A48A4: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    return;
    // 0x800A48A4: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
L_800A48A8:
    // 0x800A48A8: andi        $t3, $a0, 0x1
    ctx->r11 = ctx->r4 & 0X1;
    // 0x800A48AC: beq         $t3, $zero, L_800A48B8
    if (ctx->r11 == 0) {
        // 0x800A48B0: or          $a3, $t2, $zero
        ctx->r7 = ctx->r10 | 0;
            goto L_800A48B8;
    }
    // 0x800A48B0: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x800A48B4: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
L_800A48B8:
    // 0x800A48B8: sra         $t4, $a0, 1
    ctx->r12 = S32(SIGNED(ctx->r4) >> 1);
    // 0x800A48BC: bne         $a3, $zero, L_800A4890
    if (ctx->r7 != 0) {
        // 0x800A48C0: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_800A4890;
    }
    // 0x800A48C0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
L_800A48C4:
    // 0x800A48C4: jr          $ra
    // 0x800A48C8: nop

    return;
    // 0x800A48C8: nop

;}
RECOMP_FUNC void func_800A48CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A48CC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800A48D0: bltz        $a1, L_800A4900
    if (SIGNED(ctx->r5) < 0) {
        // 0x800A48D4: nop
    
            goto L_800A4900;
    }
    // 0x800A48D4: nop

    // 0x800A48D8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x800A48DC: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x800A48E0: slt         $at, $a1, $t6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800A48E4: beq         $at, $zero, L_800A4900
    if (ctx->r1 == 0) {
        // 0x800A48E8: nop
    
            goto L_800A4900;
    }
    // 0x800A48E8: nop

    // 0x800A48EC: lw          $t7, 0x3C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X3C);
    // 0x800A48F0: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x800A48F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A48F8: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x800A48FC: swc1        $f12, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f12.u32l;
L_800A4900:
    // 0x800A4900: jr          $ra
    // 0x800A4904: nop

    return;
    // 0x800A4904: nop

;}
RECOMP_FUNC void func_800A4908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4908: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A490C: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x800A4910: jr          $ra
    // 0x800A4914: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x800A4914: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800A4918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4918: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A491C: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x800A4920: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x800A4924: jr          $ra
    // 0x800A4928: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x800A4928: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800A492C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A492C: bgez        $a1, L_800A4938
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800A4930: lw          $v0, 0x10($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X10);
            goto L_800A4938;
    }
    // 0x800A4930: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x800A4934: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800A4938:
    // 0x800A4938: slti        $at, $a1, 0x100
    ctx->r1 = SIGNED(ctx->r5) < 0X100 ? 1 : 0;
    // 0x800A493C: bne         $at, $zero, L_800A4948
    if (ctx->r1 != 0) {
        // 0x800A4940: nop
    
            goto L_800A4948;
    }
    // 0x800A4940: nop

    // 0x800A4944: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
L_800A4948:
    // 0x800A4948: bgezl       $a2, L_800A4958
    if (SIGNED(ctx->r6) >= 0) {
        // 0x800A494C: slti        $at, $a2, 0x100
        ctx->r1 = SIGNED(ctx->r6) < 0X100 ? 1 : 0;
            goto L_800A4958;
    }
    goto skip_0;
    // 0x800A494C: slti        $at, $a2, 0x100
    ctx->r1 = SIGNED(ctx->r6) < 0X100 ? 1 : 0;
    skip_0:
    // 0x800A4950: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A4954: slti        $at, $a2, 0x100
    ctx->r1 = SIGNED(ctx->r6) < 0X100 ? 1 : 0;
L_800A4958:
    // 0x800A4958: bne         $at, $zero, L_800A4964
    if (ctx->r1 != 0) {
        // 0x800A495C: nop
    
            goto L_800A4964;
    }
    // 0x800A495C: nop

    // 0x800A4960: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_800A4964:
    // 0x800A4964: bgezl       $a3, L_800A4974
    if (SIGNED(ctx->r7) >= 0) {
        // 0x800A4968: slti        $at, $a3, 0x100
        ctx->r1 = SIGNED(ctx->r7) < 0X100 ? 1 : 0;
            goto L_800A4974;
    }
    goto skip_1;
    // 0x800A4968: slti        $at, $a3, 0x100
    ctx->r1 = SIGNED(ctx->r7) < 0X100 ? 1 : 0;
    skip_1:
    // 0x800A496C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800A4970: slti        $at, $a3, 0x100
    ctx->r1 = SIGNED(ctx->r7) < 0X100 ? 1 : 0;
L_800A4974:
    // 0x800A4974: bne         $at, $zero, L_800A4980
    if (ctx->r1 != 0) {
        // 0x800A4978: nop
    
            goto L_800A4980;
    }
    // 0x800A4978: nop

    // 0x800A497C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
L_800A4980:
    // 0x800A4980: bgezl       $v0, L_800A4990
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800A4984: slti        $at, $v0, 0x100
        ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
            goto L_800A4990;
    }
    goto skip_2;
    // 0x800A4984: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    skip_2:
    // 0x800A4988: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A498C: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
L_800A4990:
    // 0x800A4990: bnel        $at, $zero, L_800A49A0
    if (ctx->r1 != 0) {
        // 0x800A4994: sb          $a1, 0x1D4($a0)
        MEM_B(0X1D4, ctx->r4) = ctx->r5;
            goto L_800A49A0;
    }
    goto skip_3;
    // 0x800A4994: sb          $a1, 0x1D4($a0)
    MEM_B(0X1D4, ctx->r4) = ctx->r5;
    skip_3:
    // 0x800A4998: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x800A499C: sb          $a1, 0x1D4($a0)
    MEM_B(0X1D4, ctx->r4) = ctx->r5;
L_800A49A0:
    // 0x800A49A0: sb          $a2, 0x1D5($a0)
    MEM_B(0X1D5, ctx->r4) = ctx->r6;
    // 0x800A49A4: sb          $a3, 0x1D6($a0)
    MEM_B(0X1D6, ctx->r4) = ctx->r7;
    // 0x800A49A8: jr          $ra
    // 0x800A49AC: sb          $v0, 0x1D7($a0)
    MEM_B(0X1D7, ctx->r4) = ctx->r2;
    return;
    // 0x800A49AC: sb          $v0, 0x1D7($a0)
    MEM_B(0X1D7, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_800A49B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A49B0: bgez        $a1, L_800A49BC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800A49B4: lui         $t6, 0x1
        ctx->r14 = S32(0X1 << 16);
            goto L_800A49BC;
    }
    // 0x800A49B4: lui         $t6, 0x1
    ctx->r14 = S32(0X1 << 16);
    // 0x800A49B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800A49BC:
    // 0x800A49BC: slti        $at, $a1, 0x3E9
    ctx->r1 = SIGNED(ctx->r5) < 0X3E9 ? 1 : 0;
    // 0x800A49C0: bne         $at, $zero, L_800A49CC
    if (ctx->r1 != 0) {
        // 0x800A49C4: ori         $t6, $t6, 0xF400
        ctx->r14 = ctx->r14 | 0XF400;
            goto L_800A49CC;
    }
    // 0x800A49C4: ori         $t6, $t6, 0xF400
    ctx->r14 = ctx->r14 | 0XF400;
    // 0x800A49C8: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
L_800A49CC:
    // 0x800A49CC: bgezl       $a2, L_800A49DC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x800A49D0: slti        $at, $a2, 0x3E9
        ctx->r1 = SIGNED(ctx->r6) < 0X3E9 ? 1 : 0;
            goto L_800A49DC;
    }
    goto skip_0;
    // 0x800A49D0: slti        $at, $a2, 0x3E9
    ctx->r1 = SIGNED(ctx->r6) < 0X3E9 ? 1 : 0;
    skip_0:
    // 0x800A49D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A49D8: slti        $at, $a2, 0x3E9
    ctx->r1 = SIGNED(ctx->r6) < 0X3E9 ? 1 : 0;
L_800A49DC:
    // 0x800A49DC: bne         $at, $zero, L_800A49E8
    if (ctx->r1 != 0) {
        // 0x800A49E0: nop
    
            goto L_800A49E8;
    }
    // 0x800A49E0: nop

    // 0x800A49E4: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
L_800A49E8:
    // 0x800A49E8: bnel        $a1, $a2, L_800A4A08
    if (ctx->r5 != ctx->r6) {
        // 0x800A49EC: subu        $v0, $a2, $a1
        ctx->r2 = SUB32(ctx->r6, ctx->r5);
            goto L_800A4A08;
    }
    goto skip_1;
    // 0x800A49EC: subu        $v0, $a2, $a1
    ctx->r2 = SUB32(ctx->r6, ctx->r5);
    skip_1:
    // 0x800A49F0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x800A49F4: bgezl       $a1, L_800A4A08
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800A49F8: subu        $v0, $a2, $a1
        ctx->r2 = SUB32(ctx->r6, ctx->r5);
            goto L_800A4A08;
    }
    goto skip_2;
    // 0x800A49F8: subu        $v0, $a2, $a1
    ctx->r2 = SUB32(ctx->r6, ctx->r5);
    skip_2:
    // 0x800A49FC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800A4A00: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800A4A04: subu        $v0, $a2, $a1
    ctx->r2 = SUB32(ctx->r6, ctx->r5);
L_800A4A08:
    // 0x800A4A08: div         $zero, $t6, $v0
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r2)));
    // 0x800A4A0C: negu        $t8, $a1
    ctx->r24 = SUB32(0, ctx->r5);
    // 0x800A4A10: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x800A4A14: addu        $t0, $t9, $t6
    ctx->r8 = ADD32(ctx->r25, ctx->r14);
    // 0x800A4A18: mflo        $t7
    ctx->r15 = lo;
    // 0x800A4A1C: sw          $a1, 0x1D8($a0)
    MEM_W(0X1D8, ctx->r4) = ctx->r5;
    // 0x800A4A20: sw          $a2, 0x1DC($a0)
    MEM_W(0X1DC, ctx->r4) = ctx->r6;
    // 0x800A4A24: div         $zero, $t0, $v0
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r2)));
    // 0x800A4A28: bne         $v0, $zero, L_800A4A34
    if (ctx->r2 != 0) {
        // 0x800A4A2C: nop
    
            goto L_800A4A34;
    }
    // 0x800A4A2C: nop

    // 0x800A4A30: break       7
    do_break(2148158000);
L_800A4A34:
    // 0x800A4A34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A4A38: bne         $v0, $at, L_800A4A4C
    if (ctx->r2 != ctx->r1) {
        // 0x800A4A3C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800A4A4C;
    }
    // 0x800A4A3C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800A4A40: bne         $t6, $at, L_800A4A4C
    if (ctx->r14 != ctx->r1) {
        // 0x800A4A44: nop
    
            goto L_800A4A4C;
    }
    // 0x800A4A44: nop

    // 0x800A4A48: break       6
    do_break(2148158024);
L_800A4A4C:
    // 0x800A4A4C: addu        $at, $t6, $zero
    ctx->r1 = ADD32(ctx->r14, 0);
    // 0x800A4A50: mflo        $t1
    ctx->r9 = lo;
    // 0x800A4A54: sw          $t7, 0x1E0($a0)
    MEM_W(0X1E0, ctx->r4) = ctx->r15;
    // 0x800A4A58: bne         $v0, $zero, L_800A4A64
    if (ctx->r2 != 0) {
        // 0x800A4A5C: nop
    
            goto L_800A4A64;
    }
    // 0x800A4A5C: nop

    // 0x800A4A60: break       7
    do_break(2148158048);
L_800A4A64:
    // 0x800A4A64: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A4A68: bne         $v0, $at, L_800A4A7C
    if (ctx->r2 != ctx->r1) {
        // 0x800A4A6C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800A4A7C;
    }
    // 0x800A4A6C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800A4A70: bne         $t0, $at, L_800A4A7C
    if (ctx->r8 != ctx->r1) {
        // 0x800A4A74: nop
    
            goto L_800A4A7C;
    }
    // 0x800A4A74: nop

    // 0x800A4A78: break       6
    do_break(2148158072);
L_800A4A7C:
    // 0x800A4A7C: sw          $t1, 0x1E4($a0)
    MEM_W(0X1E4, ctx->r4) = ctx->r9;
    // 0x800A4A80: jr          $ra
    // 0x800A4A84: nop

    return;
    // 0x800A4A84: nop

;}
RECOMP_FUNC void func_800A4A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4A88: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x800A4A8C: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x800A4A90: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x800A4A94: lw          $t7, 0x3C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X3C);
    // 0x800A4A98: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x800A4A9C: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x800A4AA0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A4AA4: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x800A4AA8: addu        $t2, $t2, $a2
    ctx->r10 = ADD32(ctx->r10, ctx->r6);
    // 0x800A4AAC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800A4AB0: lw          $t1, 0x2C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X2C);
    // 0x800A4AB4: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x800A4AB8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A4ABC: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x800A4AC0: swl         $t3, 0x4($v0)
    do_swl(rdram, 0X4, ctx->r2, ctx->r11);
    // 0x800A4AC4: swr         $t3, 0x7($v0)
    do_swr(rdram, 0X7, ctx->r2, ctx->r11);
    // 0x800A4AC8: lwc1        $f6, 0x4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X4);
    // 0x800A4ACC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800A4AD0: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x800A4AD4: nop

    // 0x800A4AD8: swl         $t4, 0x8($v0)
    do_swl(rdram, 0X8, ctx->r2, ctx->r12);
    // 0x800A4ADC: swr         $t4, 0xB($v0)
    do_swr(rdram, 0XB, ctx->r2, ctx->r12);
    // 0x800A4AE0: lwc1        $f8, 0x8($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X8);
    // 0x800A4AE4: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x800A4AE8: nop

    // 0x800A4AEC: swl         $t5, 0xC($v0)
    do_swl(rdram, 0XC, ctx->r2, ctx->r13);
    // 0x800A4AF0: swr         $t5, 0xF($v0)
    do_swr(rdram, 0XF, ctx->r2, ctx->r13);
    // 0x800A4AF4: lwc1        $f10, 0xC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC);
    // 0x800A4AF8: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x800A4AFC: c.eq.d      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.d == ctx->f0.d;
    // 0x800A4B00: nop

    // 0x800A4B04: bc1fl       L_800A4B30
    if (!c1cs) {
        // 0x800A4B08: mtc1        $at, $f5
        ctx->f_odd[(5 - 1) * 2] = ctx->r1;
            goto L_800A4B30;
    }
    goto skip_0;
    // 0x800A4B08: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    skip_0:
    // 0x800A4B0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A4B10: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800A4B14: nop

    // 0x800A4B18: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x800A4B1C: nop

    // 0x800A4B20: swl         $t6, 0x10($v0)
    do_swl(rdram, 0X10, ctx->r2, ctx->r14);
    // 0x800A4B24: jr          $ra
    // 0x800A4B28: swr         $t6, 0x13($v0)
    do_swr(rdram, 0X13, ctx->r2, ctx->r14);
    return;
    // 0x800A4B28: swr         $t6, 0x13($v0)
    do_swr(rdram, 0X13, ctx->r2, ctx->r14);
    // 0x800A4B2C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
L_800A4B30:
    // 0x800A4B30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A4B34: nop

    // 0x800A4B38: sub.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f4.d - ctx->f0.d;
    // 0x800A4B3C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800A4B40: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x800A4B44: nop

    // 0x800A4B48: swl         $t7, 0x10($v0)
    do_swl(rdram, 0X10, ctx->r2, ctx->r15);
    // 0x800A4B4C: swr         $t7, 0x13($v0)
    do_swr(rdram, 0X13, ctx->r2, ctx->r15);
    // 0x800A4B50: jr          $ra
    // 0x800A4B54: nop

    return;
    // 0x800A4B54: nop

;}
RECOMP_FUNC void func_800A4B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4B58: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A4B5C: ori         $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 | 0X4000;
    // 0x800A4B60: jr          $ra
    // 0x800A4B64: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x800A4B64: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800A4B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4B68: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A4B6C: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x800A4B70: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x800A4B74: jr          $ra
    // 0x800A4B78: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x800A4B78: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800A4B7C: nop

;}
RECOMP_FUNC void func_800A4B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4B80: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A4B84: jr          $ra
    // 0x800A4B88: sw          $zero, 0x6204($at)
    MEM_W(0X6204, ctx->r1) = 0;
    return;
    // 0x800A4B88: sw          $zero, 0x6204($at)
    MEM_W(0X6204, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800A4B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4B8C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A4B90: jr          $ra
    // 0x800A4B94: sw          $a0, 0x6200($at)
    MEM_W(0X6200, ctx->r1) = ctx->r4;
    return;
    // 0x800A4B94: sw          $a0, 0x6200($at)
    MEM_W(0X6200, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800A4B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4B98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A4B9C: lui         $t6, 0xDB06
    ctx->r14 = S32(0XDB06 << 16);
    // 0x800A4BA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4BA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800A4BA8: ori         $t6, $t6, 0x2C
    ctx->r14 = ctx->r14 | 0X2C;
    // 0x800A4BAC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800A4BB0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800A4BB4: addiu       $a2, $a0, 0x8
    ctx->r6 = ADD32(ctx->r4, 0X8);
    // 0x800A4BB8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800A4BBC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800A4BC0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x800A4BC4: jal         0x800B87A0
    // 0x800A4BC8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x800A4BC8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x800A4BCC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4BD0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800A4BD4: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x800A4BD8: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x800A4BDC: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x800A4BE0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A4BE4: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x800A4BE8: lw          $a0, 0x10($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X10);
    // 0x800A4BEC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800A4BF0: jal         0x800B87A0
    // 0x800A4BF4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x800A4BF4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x800A4BF8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800A4BFC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800A4C00: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A4C04: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x800A4C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4C0C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A4C10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A4C14: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x800A4C18: jr          $ra
    // 0x800A4C1C: sw          $t9, 0x6204($at)
    MEM_W(0X6204, ctx->r1) = ctx->r25;
    return;
    // 0x800A4C1C: sw          $t9, 0x6204($at)
    MEM_W(0X6204, ctx->r1) = ctx->r25;
;}
RECOMP_FUNC void func_800A4C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4C20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A4C24: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800A4C28: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800A4C2C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800A4C30: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800A4C34: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800A4C38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A4C3C: lw          $t6, 0x28($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X28);
    // 0x800A4C40: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800A4C44: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x800A4C48: beq         $t6, $zero, L_800A4C7C
    if (ctx->r14 == 0) {
        // 0x800A4C4C: or          $s0, $s3, $zero
        ctx->r16 = ctx->r19 | 0;
            goto L_800A4C7C;
    }
    // 0x800A4C4C: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x800A4C50: lui         $t7, 0xDB06
    ctx->r15 = S32(0XDB06 << 16);
    // 0x800A4C54: ori         $t7, $t7, 0x28
    ctx->r15 = ctx->r15 | 0X28;
    // 0x800A4C58: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x800A4C5C: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x800A4C60: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800A4C64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A4C68: addiu       $s3, $a0, 0x8
    ctx->r19 = ADD32(ctx->r4, 0X8);
    // 0x800A4C6C: jal         0x800B87A0
    // 0x800A4C70: lw          $a0, 0x20($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X20);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x800A4C70: lw          $a0, 0x20($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X20);
    after_0:
    // 0x800A4C74: b           L_800A4C98
    // 0x800A4C78: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
        goto L_800A4C98;
    // 0x800A4C78: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_800A4C7C:
    // 0x800A4C7C: lui         $t0, 0xDB06
    ctx->r8 = S32(0XDB06 << 16);
    // 0x800A4C80: ori         $t0, $t0, 0x28
    ctx->r8 = ctx->r8 | 0X28;
    // 0x800A4C84: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x800A4C88: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x800A4C8C: jal         0x800B87A0
    // 0x800A4C90: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x800A4C90: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    after_1:
    // 0x800A4C94: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_800A4C98:
    // 0x800A4C98: lw          $s0, 0x14($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X14);
    // 0x800A4C9C: lw          $s1, 0x1C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X1C);
    // 0x800A4CA0: lui         $s4, 0xDE00
    ctx->r20 = S32(0XDE00 << 16);
    // 0x800A4CA4: beq         $s0, $zero, L_800A4CCC
    if (ctx->r16 == 0) {
        // 0x800A4CA8: or          $s2, $s3, $zero
        ctx->r18 = ctx->r19 | 0;
            goto L_800A4CCC;
    }
L_800A4CA8:
    // 0x800A4CA8: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
    // 0x800A4CAC: sw          $s4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r20;
    // 0x800A4CB0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800A4CB4: jal         0x800B87A0
    // 0x800A4CB8: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x800A4CB8: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    after_2:
    // 0x800A4CBC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800A4CC0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800A4CC4: bne         $s0, $zero, L_800A4CA8
    if (ctx->r16 != 0) {
        // 0x800A4CC8: sw          $v0, 0x4($s2)
        MEM_W(0X4, ctx->r18) = ctx->r2;
            goto L_800A4CA8;
    }
    // 0x800A4CC8: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_800A4CCC:
    // 0x800A4CCC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800A4CD0: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x800A4CD4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800A4CD8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A4CDC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4CE0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800A4CE4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800A4CE8: jr          $ra
    // 0x800A4CEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800A4CEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800A4CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4CF0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800A4CF4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800A4CF8: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x800A4CFC: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x800A4D00: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x800A4D04: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x800A4D08: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800A4D0C: lwc1        $f20, 0x10($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X10);
    // 0x800A4D10: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A4D14: ldc1        $f0, 0x9C8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X9C8);
    // 0x800A4D18: cvt.d.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.d = CVT_D_S(ctx->f20.fl);
    // 0x800A4D1C: lwc1        $f12, 0x14($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X14);
    // 0x800A4D20: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x800A4D24: lwc1        $f22, 0x18($a0)
    ctx->f22.u32l = MEM_W(ctx->r4, 0X18);
    // 0x800A4D28: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x800A4D2C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800A4D30: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x800A4D34: cvt.d.s     $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f4.d = CVT_D_S(ctx->f22.fl);
    // 0x800A4D38: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800A4D3C: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
    // 0x800A4D40: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x800A4D44: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x800A4D48: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    // 0x800A4D4C: jal         0x800B7B40
    // 0x800A4D50: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x800A4D50: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    after_0:
    // 0x800A4D54: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x800A4D58: jal         0x800B81D0
    // 0x800A4D5C: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x800A4D5C: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x800A4D60: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x800A4D64: jal         0x800B7B40
    // 0x800A4D68: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x800A4D68: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x800A4D6C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x800A4D70: jal         0x800B81D0
    // 0x800A4D74: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x800A4D74: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x800A4D78: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800A4D7C: jal         0x800B7B40
    // 0x800A4D80: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x800A4D80: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_4:
    // 0x800A4D84: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x800A4D88: jal         0x800B81D0
    // 0x800A4D8C: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x800A4D8C: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x800A4D90: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800A4D94: lwc1        $f22, 0x4C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800A4D98: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800A4D9C: lwc1        $f8, 0x30($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X30);
    // 0x800A4DA0: mul.s       $f12, $f14, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f22.fl);
    // 0x800A4DA4: lwc1        $f16, 0x28($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X28);
    // 0x800A4DA8: lwc1        $f18, 0x2C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x800A4DAC: mul.s       $f10, $f20, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x800A4DB0: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x800A4DB4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A4DB8: mul.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x800A4DBC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800A4DC0: neg.s       $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = -ctx->f20.fl;
    // 0x800A4DC4: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x800A4DC8: nop

    // 0x800A4DCC: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800A4DD0: nop

    // 0x800A4DD4: mul.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x800A4DD8: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x800A4DDC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800A4DE0: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x800A4DE4: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
    // 0x800A4DE8: mul.s       $f4, $f14, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f24.fl);
    // 0x800A4DEC: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800A4DF0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A4DF4: nop

    // 0x800A4DF8: mul.s       $f10, $f24, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f24.fl, ctx->f2.fl);
    // 0x800A4DFC: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x800A4E00: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800A4E04: neg.s       $f10, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = -ctx->f22.fl;
    // 0x800A4E08: mul.s       $f6, $f24, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x800A4E0C: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x800A4E10: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x800A4E14: swc1        $f8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f8.u32l;
    // 0x800A4E18: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800A4E1C: neg.s       $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = -ctx->f14.fl;
    // 0x800A4E20: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800A4E24: nop

    // 0x800A4E28: mul.s       $f12, $f20, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x800A4E2C: nop

    // 0x800A4E30: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800A4E34: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x800A4E38: mul.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x800A4E3C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800A4E40: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x800A4E44: nop

    // 0x800A4E48: mul.s       $f10, $f14, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x800A4E4C: nop

    // 0x800A4E50: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x800A4E54: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x800A4E58: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800A4E5C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800A4E60: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x800A4E64: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
    // 0x800A4E68: mul.s       $f10, $f20, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x800A4E6C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800A4E70: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800A4E74: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x800A4E78: lwc1        $f8, 0x1C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x800A4E7C: swc1        $f8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f8.u32l;
    // 0x800A4E80: lwc1        $f10, 0x20($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X20);
    // 0x800A4E84: swc1        $f10, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f10.u32l;
    // 0x800A4E88: lwc1        $f4, 0x24($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
    // 0x800A4E8C: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x800A4E90: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x800A4E94: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x800A4E98: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
    // 0x800A4E9C: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    // 0x800A4EA0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800A4EA4: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x800A4EA8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x800A4EAC: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x800A4EB0: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x800A4EB4: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800A4EB8: jr          $ra
    // 0x800A4EBC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x800A4EBC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_800A4EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4EC0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800A4EC4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800A4EC8: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x800A4ECC: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x800A4ED0: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x800A4ED4: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x800A4ED8: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x800A4EDC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800A4EE0: lwc1        $f20, 0x10($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X10);
    // 0x800A4EE4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A4EE8: ldc1        $f0, 0x9D0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X9D0);
    // 0x800A4EEC: cvt.d.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.d = CVT_D_S(ctx->f20.fl);
    // 0x800A4EF0: lwc1        $f12, 0x14($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X14);
    // 0x800A4EF4: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x800A4EF8: lwc1        $f26, 0x18($a0)
    ctx->f26.u32l = MEM_W(ctx->r4, 0X18);
    // 0x800A4EFC: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x800A4F00: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800A4F04: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x800A4F08: cvt.d.s     $f4, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f4.d = CVT_D_S(ctx->f26.fl);
    // 0x800A4F0C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800A4F10: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
    // 0x800A4F14: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x800A4F18: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x800A4F1C: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    // 0x800A4F20: jal         0x800B7B40
    // 0x800A4F24: cvt.s.d     $f26, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f26.fl = CVT_S_D(ctx->f6.d);
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x800A4F24: cvt.s.d     $f26, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f26.fl = CVT_S_D(ctx->f6.d);
    after_0:
    // 0x800A4F28: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x800A4F2C: jal         0x800B81D0
    // 0x800A4F30: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x800A4F30: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_1:
    // 0x800A4F34: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x800A4F38: jal         0x800B7B40
    // 0x800A4F3C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x800A4F3C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x800A4F40: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x800A4F44: jal         0x800B81D0
    // 0x800A4F48: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x800A4F48: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x800A4F4C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800A4F50: jal         0x800B7B40
    // 0x800A4F54: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x800A4F54: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    after_4:
    // 0x800A4F58: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    // 0x800A4F5C: jal         0x800B81D0
    // 0x800A4F60: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x800A4F60: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x800A4F64: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800A4F68: lwc1        $f12, 0x28($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X28);
    // 0x800A4F6C: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800A4F70: lwc1        $f16, 0x2C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x800A4F74: lwc1        $f18, 0x30($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X30);
    // 0x800A4F78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A4F7C: neg.s       $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = -ctx->f14.fl;
    // 0x800A4F80: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x800A4F84: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x800A4F88: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800A4F8C: mul.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800A4F90: nop

    // 0x800A4F94: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x800A4F98: nop

    // 0x800A4F9C: mul.s       $f10, $f2, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x800A4FA0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800A4FA4: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x800A4FA8: nop

    // 0x800A4FAC: mul.s       $f8, $f14, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f22.fl);
    // 0x800A4FB0: nop

    // 0x800A4FB4: mul.s       $f10, $f2, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x800A4FB8: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x800A4FBC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800A4FC0: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x800A4FC4: nop

    // 0x800A4FC8: mul.s       $f8, $f14, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x800A4FCC: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x800A4FD0: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x800A4FD4: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x800A4FD8: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800A4FDC: mul.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x800A4FE0: nop

    // 0x800A4FE4: mul.s       $f6, $f0, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x800A4FE8: nop

    // 0x800A4FEC: mul.s       $f8, $f2, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x800A4FF0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800A4FF4: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x800A4FF8: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800A4FFC: nop

    // 0x800A5000: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x800A5004: nop

    // 0x800A5008: mul.s       $f10, $f2, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x800A500C: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
    // 0x800A5010: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800A5014: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x800A5018: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x800A501C: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800A5020: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x800A5024: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800A5028: nop

    // 0x800A502C: mul.s       $f6, $f20, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x800A5030: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x800A5034: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800A5038: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x800A503C: nop

    // 0x800A5040: mul.s       $f10, $f20, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x800A5044: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
    // 0x800A5048: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800A504C: mul.s       $f14, $f10, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x800A5050: swc1        $f14, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f14.u32l;
    // 0x800A5054: lwc1        $f0, 0x34($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X34);
    // 0x800A5058: lwc1        $f2, 0x38($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X38);
    // 0x800A505C: lwc1        $f12, 0x3C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x800A5060: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800A5064: nop

    // 0x800A5068: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x800A506C: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x800A5070: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800A5074: mul.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x800A5078: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800A507C: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800A5080: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800A5084: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x800A5088: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800A508C: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x800A5090: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x800A5094: mul.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x800A5098: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800A509C: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800A50A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800A50A4: add.s       $f22, $f10, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800A50A8: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x800A50AC: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800A50B0: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800A50B4: mul.s       $f10, $f14, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x800A50B8: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x800A50BC: sub.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x800A50C0: add.s       $f26, $f6, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f26.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800A50C4: swc1        $f8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f8.u32l;
    // 0x800A50C8: lwc1        $f6, 0x20($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X20);
    // 0x800A50CC: sub.s       $f10, $f6, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f22.fl;
    // 0x800A50D0: swc1        $f10, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f10.u32l;
    // 0x800A50D4: lwc1        $f4, 0x24($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
    // 0x800A50D8: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x800A50DC: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x800A50E0: sub.s       $f8, $f4, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f26.fl;
    // 0x800A50E4: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x800A50E8: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
    // 0x800A50EC: swc1        $f8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f8.u32l;
    // 0x800A50F0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800A50F4: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x800A50F8: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x800A50FC: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x800A5100: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x800A5104: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x800A5108: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800A510C: jr          $ra
    // 0x800A5110: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x800A5110: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_800A5114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5114: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800A5118: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800A511C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800A5120: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800A5124: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x800A5128: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800A512C: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x800A5130: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A5134: ldc1        $f20, 0x9D8($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, 0X9D8);
    // 0x800A5138: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x800A513C: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x800A5140: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800A5144: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800A5148: mul.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x800A514C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800A5150: jal         0x800B7B40
    // 0x800A5154: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x800A5154: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x800A5158: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800A515C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x800A5160: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800A5164: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x800A5168: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800A516C: mul.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x800A5170: jal         0x800B81D0
    // 0x800A5174: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x800A5174: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x800A5178: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800A517C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x800A5180: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800A5184: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800A5188: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x800A518C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800A5190: mul.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x800A5194: jal         0x800B7B40
    // 0x800A5198: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x800A5198: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_2:
    // 0x800A519C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800A51A0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x800A51A4: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x800A51A8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800A51AC: mul.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x800A51B0: jal         0x800B81D0
    // 0x800A51B4: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x800A51B4: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_3:
    // 0x800A51B8: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800A51BC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800A51C0: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x800A51C4: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x800A51C8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800A51CC: mul.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x800A51D0: jal         0x800B7B40
    // 0x800A51D4: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x800A51D4: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_4:
    // 0x800A51D8: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800A51DC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x800A51E0: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x800A51E4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800A51E8: mul.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x800A51EC: jal         0x800B81D0
    // 0x800A51F0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x800A51F0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_5:
    // 0x800A51F4: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x800A51F8: lwc1        $f20, 0x38($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800A51FC: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800A5200: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800A5204: mul.s       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800A5208: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800A520C: swc1        $f20, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f20.u32l;
    // 0x800A5210: mul.s       $f6, $f16, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x800A5214: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    // 0x800A5218: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A521C: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x800A5220: mul.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x800A5224: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800A5228: mul.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x800A522C: nop

    // 0x800A5230: mul.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x800A5234: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
    // 0x800A5238: neg.s       $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = -ctx->f16.fl;
    // 0x800A523C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800A5240: mul.s       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x800A5244: nop

    // 0x800A5248: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x800A524C: swc1        $f8, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f8.u32l;
    // 0x800A5250: mul.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x800A5254: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    // 0x800A5258: mul.s       $f8, $f18, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x800A525C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800A5260: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x800A5264: nop

    // 0x800A5268: mul.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x800A526C: swc1        $f10, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f10.u32l;
    // 0x800A5270: neg.s       $f10, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = -ctx->f22.fl;
    // 0x800A5274: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800A5278: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800A527C: nop

    // 0x800A5280: mul.s       $f6, $f22, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f14.fl);
    // 0x800A5284: swc1        $f8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f8.u32l;
    // 0x800A5288: swc1        $f4, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f4.u32l;
    // 0x800A528C: swc1        $f6, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f6.u32l;
    // 0x800A5290: lwc1        $f8, -0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, -0X14);
    // 0x800A5294: swc1        $f8, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f8.u32l;
    // 0x800A5298: lwc1        $f10, -0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, -0X10);
    // 0x800A529C: swc1        $f10, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f10.u32l;
    // 0x800A52A0: lwc1        $f4, -0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, -0XC);
    // 0x800A52A4: swc1        $f4, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f4.u32l;
    // 0x800A52A8: lwc1        $f6, -0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, -0X8);
    // 0x800A52AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A52B0: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
    // 0x800A52B4: lwc1        $f8, -0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, -0X4);
    // 0x800A52B8: swc1        $f8, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f8.u32l;
    // 0x800A52BC: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800A52C0: swc1        $f4, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f4.u32l;
    // 0x800A52C4: swc1        $f10, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f10.u32l;
    // 0x800A52C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800A52CC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800A52D0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800A52D4: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x800A52D8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x800A52DC: jr          $ra
    // 0x800A52E0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800A52E0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800A52E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A52E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A52E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A52EC: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x800A52F0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x800A52F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800A52F8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x800A52FC: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800A5300: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x800A5304: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800A5308: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800A530C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x800A5310: c.eq.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d == ctx->f16.d;
    // 0x800A5314: lwc1        $f8, 0x18($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X18);
    // 0x800A5318: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x800A531C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800A5320: bc1f        L_800A5368
    if (!c1cs) {
        // 0x800A5324: swc1        $f8, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
            goto L_800A5368;
    }
    // 0x800A5324: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x800A5328: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800A532C: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800A5330: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800A5334: c.eq.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d == ctx->f4.d;
    // 0x800A5338: nop

    // 0x800A533C: bc1fl       L_800A536C
    if (!c1cs) {
        // 0x800A5340: addiu       $a2, $sp, 0x1C
        ctx->r6 = ADD32(ctx->r29, 0X1C);
            goto L_800A536C;
    }
    goto skip_0;
    // 0x800A5340: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    skip_0:
    // 0x800A5344: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800A5348: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A534C: c.eq.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d == ctx->f8.d;
    // 0x800A5350: nop

    // 0x800A5354: bc1fl       L_800A536C
    if (!c1cs) {
        // 0x800A5358: addiu       $a2, $sp, 0x1C
        ctx->r6 = ADD32(ctx->r29, 0X1C);
            goto L_800A536C;
    }
    goto skip_1;
    // 0x800A5358: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    skip_1:
    // 0x800A535C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800A5360: nop

    // 0x800A5364: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
L_800A5368:
    // 0x800A5368: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
L_800A536C:
    // 0x800A536C: jal         0x800BA660
    // 0x800A5370: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    guNormalize(rdram, ctx);
        goto after_0;
    // 0x800A5370: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800A5374: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5378: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800A537C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A5380: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800A5384: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    // 0x800A5388: swc1        $f0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f0.u32l;
    // 0x800A538C: swc1        $f0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f0.u32l;
    // 0x800A5390: swc1        $f0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f0.u32l;
    // 0x800A5394: swc1        $f0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f0.u32l;
    // 0x800A5398: swc1        $f0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f0.u32l;
    // 0x800A539C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800A53A0: swc1        $f10, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f10.u32l;
    // 0x800A53A4: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800A53A8: swc1        $f16, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f16.u32l;
    // 0x800A53AC: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800A53B0: swc1        $f0, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->f0.u32l;
    // 0x800A53B4: swc1        $f0, 0x34($a3)
    MEM_W(0X34, ctx->r7) = ctx->f0.u32l;
    // 0x800A53B8: swc1        $f0, 0x38($a3)
    MEM_W(0X38, ctx->r7) = ctx->f0.u32l;
    // 0x800A53BC: swc1        $f2, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f2.u32l;
    // 0x800A53C0: swc1        $f2, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f2.u32l;
    // 0x800A53C4: swc1        $f2, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f2.u32l;
    // 0x800A53C8: swc1        $f2, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->f2.u32l;
    // 0x800A53CC: swc1        $f18, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f18.u32l;
    // 0x800A53D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A53D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A53D8: jr          $ra
    // 0x800A53DC: nop

    return;
    // 0x800A53DC: nop

;}
RECOMP_FUNC void func_800A53E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A53E0: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x800A53E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A53E8: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x800A53EC: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x800A53F0: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    // 0x800A53F4: lwc1        $f2, 0x14($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X14);
    // 0x800A53F8: lwc1        $f12, 0x18($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X18);
    // 0x800A53FC: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x800A5400: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x800A5404: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x800A5408: mtc1        $zero, $f15
    ctx->f_odd[(15 - 1) * 2] = 0;
    // 0x800A540C: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x800A5410: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x800A5414: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x800A5418: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800A541C: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x800A5420: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x800A5424: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800A5428: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x800A542C: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x800A5430: sub.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x800A5434: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x800A5438: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x800A543C: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x800A5440: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x800A5444: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800A5448: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x800A544C: lwc1        $f2, 0x8C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800A5450: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x800A5454: c.eq.d      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.d == ctx->f6.d;
    // 0x800A5458: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x800A545C: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x800A5460: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x800A5464: bc1f        L_800A54A8
    if (!c1cs) {
        // 0x800A5468: swc1        $f12, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
            goto L_800A54A8;
    }
    // 0x800A5468: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    // 0x800A546C: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x800A5470: lwc1        $f16, 0x90($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X90);
    // 0x800A5474: c.eq.d      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.d == ctx->f8.d;
    // 0x800A5478: nop

    // 0x800A547C: bc1f        L_800A54A8
    if (!c1cs) {
        // 0x800A5480: nop
    
            goto L_800A54A8;
    }
    // 0x800A5480: nop

    // 0x800A5484: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x800A5488: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800A548C: c.eq.d      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.d == ctx->f10.d;
    // 0x800A5490: nop

    // 0x800A5494: bc1f        L_800A54A8
    if (!c1cs) {
        // 0x800A5498: nop
    
            goto L_800A54A8;
    }
    // 0x800A5498: nop

    // 0x800A549C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A54A0: nop

    // 0x800A54A4: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
L_800A54A8:
    // 0x800A54A8: jal         0x800BA660
    // 0x800A54AC: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    guNormalize(rdram, ctx);
        goto after_0;
    // 0x800A54AC: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    after_0:
    // 0x800A54B0: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x800A54B4: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
    // 0x800A54B8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800A54BC: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x800A54C0: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x800A54C4: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x800A54C8: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x800A54CC: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    // 0x800A54D0: swc1        $f14, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f14.u32l;
    // 0x800A54D4: jal         0x800BA660
    // 0x800A54D8: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    guNormalize(rdram, ctx);
        goto after_1;
    // 0x800A54D8: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x800A54DC: lwc1        $f2, 0x8C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800A54E0: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x800A54E4: lwc1        $f16, 0x90($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X90);
    // 0x800A54E8: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x800A54EC: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x800A54F0: lwc1        $f14, 0x7C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x800A54F4: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x800A54F8: mul.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x800A54FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A5500: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    // 0x800A5504: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x800A5508: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x800A550C: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800A5510: mul.s       $f8, $f16, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x800A5514: nop

    // 0x800A5518: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800A551C: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x800A5520: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800A5524: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800A5528: mul.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x800A552C: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x800A5530: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x800A5534: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800A5538: ldc1        $f8, 0x9E0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X9E0);
    // 0x800A553C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800A5540: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x800A5544: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x800A5548: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x800A554C: jal         0x800B81D0
    // 0x800A5550: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x800A5550: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x800A5554: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800A5558: jal         0x800B7B40
    // 0x800A555C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x800A555C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x800A5560: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800A5564: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x800A5568: lwc1        $f14, 0x70($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X70);
    // 0x800A556C: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x800A5570: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800A5574: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800A5578: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x800A557C: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x800A5580: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A5584: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800A5588: addiu       $t2, $sp, 0x2C
    ctx->r10 = ADD32(ctx->r29, 0X2C);
    // 0x800A558C: addiu       $t5, $t2, 0x3C
    ctx->r13 = ADD32(ctx->r10, 0X3C);
    // 0x800A5590: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x800A5594: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x800A5598: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800A559C: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x800A55A0: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x800A55A4: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    // 0x800A55A8: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x800A55AC: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x800A55B0: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
    // 0x800A55B4: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800A55B8: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800A55BC: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x800A55C0: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x800A55C4: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800A55C8: nop

    // 0x800A55CC: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x800A55D0: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x800A55D4: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800A55D8: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x800A55DC: neg.s       $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = -ctx->f4.fl;
    // 0x800A55E0: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800A55E4: nop

    // 0x800A55E8: mul.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x800A55EC: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800A55F0: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x800A55F4: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x800A55F8: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800A55FC: nop

    // 0x800A5600: mul.s       $f6, $f16, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x800A5604: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800A5608: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x800A560C: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x800A5610: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800A5614: nop

    // 0x800A5618: mul.s       $f8, $f18, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x800A561C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800A5620: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
L_800A5624:
    // 0x800A5624: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x800A5628: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x800A562C: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x800A5630: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x800A5634: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x800A5638: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x800A563C: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x800A5640: bne         $t2, $t5, L_800A5624
    if (ctx->r10 != ctx->r13) {
        // 0x800A5644: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_800A5624;
    }
    // 0x800A5644: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x800A5648: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x800A564C: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x800A5650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5654: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x800A5658: jr          $ra
    // 0x800A565C: nop

    return;
    // 0x800A565C: nop

;}
RECOMP_FUNC void func_800A5660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5660: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5668: lbu         $t6, 0x2($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X2);
    // 0x800A566C: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x800A5670: beq         $at, $zero, L_800A56D4
    if (ctx->r1 == 0) {
        // 0x800A5674: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_800A56D4;
    }
    // 0x800A5674: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A5678: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A567C: addu        $at, $at, $t6
    gpr jr_addend_800A5684 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800A5680: lw          $t6, 0x9E8($at)
    ctx->r14 = ADD32(ctx->r1, 0X9E8);
    // 0x800A5684: jr          $t6
    // 0x800A5688: nop

    switch (jr_addend_800A5684 >> 2) {
        case 0: goto L_800A568C; break;
        case 1: goto L_800A569C; break;
        case 2: goto L_800A56AC; break;
        case 3: goto L_800A56BC; break;
        case 4: goto L_800A56CC; break;
        default: switch_error(__func__, 0x800A5684, 0x800E09E8);
    }
    // 0x800A5688: nop

L_800A568C:
    // 0x800A568C: jal         0x800A4CF0
    // 0x800A5690: nop

    func_800A4CF0(rdram, ctx);
        goto after_0;
    // 0x800A5690: nop

    after_0:
    // 0x800A5694: b           L_800A56D8
    // 0x800A5698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A56D8;
    // 0x800A5698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A569C:
    // 0x800A569C: jal         0x800A4EC0
    // 0x800A56A0: nop

    func_800A4EC0(rdram, ctx);
        goto after_1;
    // 0x800A56A0: nop

    after_1:
    // 0x800A56A4: b           L_800A56D8
    // 0x800A56A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A56D8;
    // 0x800A56A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A56AC:
    // 0x800A56AC: jal         0x800A5114
    // 0x800A56B0: nop

    func_800A5114(rdram, ctx);
        goto after_2;
    // 0x800A56B0: nop

    after_2:
    // 0x800A56B4: b           L_800A56D8
    // 0x800A56B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A56D8;
    // 0x800A56B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A56BC:
    // 0x800A56BC: jal         0x800A52E4
    // 0x800A56C0: nop

    func_800A52E4(rdram, ctx);
        goto after_3;
    // 0x800A56C0: nop

    after_3:
    // 0x800A56C4: b           L_800A56D8
    // 0x800A56C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800A56D8;
    // 0x800A56C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A56CC:
    // 0x800A56CC: jal         0x800A53E0
    // 0x800A56D0: nop

    func_800A53E0(rdram, ctx);
        goto after_4;
    // 0x800A56D0: nop

    after_4:
L_800A56D4:
    // 0x800A56D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800A56D8:
    // 0x800A56D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A56DC: jr          $ra
    // 0x800A56E0: nop

    return;
    // 0x800A56E0: nop

;}
RECOMP_FUNC void func_800A56E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A56E4: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x800A56E8: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800A56EC: lwc1        $f12, 0x4($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800A56F0: lwc1        $f14, 0x8($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800A56F4: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x800A56F8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A56FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A5700: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x800A5704: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A5708: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x800A570C: swc1        $f2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f2.u32l;
    // 0x800A5710: swc1        $f12, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f12.u32l;
    // 0x800A5714: swc1        $f14, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f14.u32l;
    // 0x800A5718: lwc1        $f0, 0x1C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x800A571C: lwc1        $f2, 0x10($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X10);
    // 0x800A5720: lwc1        $f12, 0x14($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X14);
    // 0x800A5724: lwc1        $f14, 0x18($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X18);
    // 0x800A5728: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x800A572C: nop

    // 0x800A5730: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x800A5734: nop

    // 0x800A5738: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x800A573C: swc1        $f2, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f2.u32l;
    // 0x800A5740: swc1        $f12, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f12.u32l;
    // 0x800A5744: swc1        $f14, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f14.u32l;
    // 0x800A5748: lwc1        $f0, 0x2C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x800A574C: lwc1        $f2, 0x20($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X20);
    // 0x800A5750: lwc1        $f12, 0x24($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X24);
    // 0x800A5754: lwc1        $f14, 0x28($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X28);
    // 0x800A5758: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x800A575C: nop

    // 0x800A5760: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x800A5764: nop

    // 0x800A5768: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x800A576C: swc1        $f2, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f2.u32l;
    // 0x800A5770: swc1        $f12, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f12.u32l;
    // 0x800A5774: swc1        $f14, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f14.u32l;
    // 0x800A5778: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x800A577C: swc1        $f4, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->f4.u32l;
    // 0x800A5780: lwc1        $f6, 0x34($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34);
    // 0x800A5784: swc1        $f6, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->f6.u32l;
    // 0x800A5788: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x800A578C: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x800A5790: swc1        $f16, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f16.u32l;
    // 0x800A5794: swc1        $f16, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f16.u32l;
    // 0x800A5798: swc1        $f10, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->f10.u32l;
    // 0x800A579C: jr          $ra
    // 0x800A57A0: swc1        $f8, 0x38($a1)
    MEM_W(0X38, ctx->r5) = ctx->f8.u32l;
    return;
    // 0x800A57A0: swc1        $f8, 0x38($a1)
    MEM_W(0X38, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_800A57A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A57A4: beq         $a1, $a0, L_800A57E0
    if (ctx->r5 == ctx->r4) {
        // 0x800A57A8: or          $t8, $a0, $zero
        ctx->r24 = ctx->r4 | 0;
            goto L_800A57E0;
    }
    // 0x800A57A8: or          $t8, $a0, $zero
    ctx->r24 = ctx->r4 | 0;
    // 0x800A57AC: or          $t9, $a1, $zero
    ctx->r25 = ctx->r5 | 0;
    // 0x800A57B0: addiu       $t7, $a0, 0x3C
    ctx->r15 = ADD32(ctx->r4, 0X3C);
L_800A57B4:
    // 0x800A57B4: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x800A57B8: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x800A57BC: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x800A57C0: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x800A57C4: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x800A57C8: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x800A57CC: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x800A57D0: bne         $t8, $t7, L_800A57B4
    if (ctx->r24 != ctx->r15) {
        // 0x800A57D4: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_800A57B4;
    }
    // 0x800A57D4: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x800A57D8: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x800A57DC: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
L_800A57E0:
    // 0x800A57E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A57E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800A57E8: nop

    // 0x800A57EC: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x800A57F0: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x800A57F4: jr          $ra
    // 0x800A57F8: swc1        $f0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f0.u32l;
    return;
    // 0x800A57F8: swc1        $f0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_800A57FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A57FC: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x800A5800: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A5804: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800A5808: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A580C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800A5810: addiu       $s1, $s1, -0x6B80
    ctx->r17 = ADD32(ctx->r17, -0X6B80);
    // 0x800A5814: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A5818: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800A581C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800A5820: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800A5824: jal         0x800A5660
    // 0x800A5828: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800A5660(rdram, ctx);
        goto after_0;
    // 0x800A5828: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x800A582C: addiu       $s3, $sp, 0x28
    ctx->r19 = ADD32(ctx->r29, 0X28);
    // 0x800A5830: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800A5834: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800A5838: jal         0x800AF0C4
    // 0x800A583C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800AF0C4(rdram, ctx);
        goto after_1;
    // 0x800A583C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x800A5840: lw          $a1, 0xC($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XC);
    // 0x800A5844: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800A5848: jal         0x800A56E4
    // 0x800A584C: addiu       $a1, $a1, 0xC0
    ctx->r5 = ADD32(ctx->r5, 0XC0);
    func_800A56E4(rdram, ctx);
        goto after_2;
    // 0x800A584C: addiu       $a1, $a1, 0xC0
    ctx->r5 = ADD32(ctx->r5, 0XC0);
    after_2:
    // 0x800A5850: lhu         $t6, 0x0($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X0);
    // 0x800A5854: lbu         $s0, 0x3($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X3);
    // 0x800A5858: lw          $s1, 0x4($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X4);
    // 0x800A585C: andi        $t8, $t6, 0xFFFD
    ctx->r24 = ctx->r14 & 0XFFFD;
    // 0x800A5860: sh          $t8, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r24;
    // 0x800A5864: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x800A5868: beq         $s0, $zero, L_800A5888
    if (ctx->r16 == 0) {
        // 0x800A586C: sh          $t9, 0x0($s2)
        MEM_H(0X0, ctx->r18) = ctx->r25;
            goto L_800A5888;
    }
    // 0x800A586C: sh          $t9, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r25;
L_800A5870:
    // 0x800A5870: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800A5874: jal         0x800A57FC
    // 0x800A5878: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800A57FC(rdram, ctx);
        goto after_3;
    // 0x800A5878: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_3:
    // 0x800A587C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800A5880: bne         $s0, $zero, L_800A5870
    if (ctx->r16 != 0) {
        // 0x800A5884: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800A5870;
    }
    // 0x800A5884: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_800A5888:
    // 0x800A5888: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A588C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A5890: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A5894: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800A5898: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800A589C: jr          $ra
    // 0x800A58A0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x800A58A0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_800A58A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A58A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A58A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A58AC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A58B0: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800A58B4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800A58B8: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x800A58BC: beq         $t7, $zero, L_800A58FC
    if (ctx->r15 == 0) {
        // 0x800A58C0: addiu       $t8, $t8, -0x6B00
        ctx->r24 = ADD32(ctx->r24, -0X6B00);
            goto L_800A58FC;
    }
    // 0x800A58C0: addiu       $t8, $t8, -0x6B00
    ctx->r24 = ADD32(ctx->r24, -0X6B00);
    // 0x800A58C4: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x800A58C8: addiu       $t1, $a0, 0x3C
    ctx->r9 = ADD32(ctx->r4, 0X3C);
L_800A58CC:
    // 0x800A58CC: lw          $at, 0xC($t2)
    ctx->r1 = MEM_W(ctx->r10, 0XC);
    // 0x800A58D0: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x800A58D4: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x800A58D8: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x800A58DC: lw          $at, 0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X4);
    // 0x800A58E0: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x800A58E4: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x800A58E8: bne         $t2, $t1, L_800A58CC
    if (ctx->r10 != ctx->r9) {
        // 0x800A58EC: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_800A58CC;
    }
    // 0x800A58EC: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x800A58F0: lw          $at, 0xC($t2)
    ctx->r1 = MEM_W(ctx->r10, 0XC);
    // 0x800A58F4: b           L_800A5910
    // 0x800A58F8: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
        goto L_800A5910;
    // 0x800A58F8: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
L_800A58FC:
    // 0x800A58FC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800A5900: addiu       $a0, $a0, -0x6B00
    ctx->r4 = ADD32(ctx->r4, -0X6B00);
    // 0x800A5904: jal         0x800B79D0
    // 0x800A5908: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x800A5908: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x800A590C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_800A5910:
    // 0x800A5910: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A5914: addiu       $a1, $a1, -0x6B00
    ctx->r5 = ADD32(ctx->r5, -0X6B00);
    // 0x800A5918: jal         0x800A59C0
    // 0x800A591C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800A59C0(rdram, ctx);
        goto after_1;
    // 0x800A591C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x800A5920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A5924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A5928: jr          $ra
    // 0x800A592C: nop

    return;
    // 0x800A592C: nop

;}
RECOMP_FUNC void func_800A5930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5930: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A5934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A5938: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800A593C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800A5940: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800A5944: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x800A5948: beq         $t7, $zero, L_800A596C
    if (ctx->r15 == 0) {
        // 0x800A594C: addiu       $t8, $t8, -0x6AC0
        ctx->r24 = ADD32(ctx->r24, -0X6AC0);
            goto L_800A596C;
    }
    // 0x800A594C: addiu       $t8, $t8, -0x6AC0
    ctx->r24 = ADD32(ctx->r24, -0X6AC0);
    // 0x800A5950: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800A5954: addiu       $a0, $a0, -0x6AC0
    ctx->r4 = ADD32(ctx->r4, -0X6AC0);
    // 0x800A5958: addiu       $a2, $a3, 0xC
    ctx->r6 = ADD32(ctx->r7, 0XC);
    // 0x800A595C: jal         0x800AEE4C
    // 0x800A5960: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_800AEE4C(rdram, ctx);
        goto after_0;
    // 0x800A5960: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x800A5964: b           L_800A59A0
    // 0x800A5968: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
        goto L_800A59A0;
    // 0x800A5968: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
L_800A596C:
    // 0x800A596C: or          $t2, $a1, $zero
    ctx->r10 = ctx->r5 | 0;
    // 0x800A5970: addiu       $t1, $a1, 0x3C
    ctx->r9 = ADD32(ctx->r5, 0X3C);
L_800A5974:
    // 0x800A5974: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x800A5978: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x800A597C: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x800A5980: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x800A5984: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x800A5988: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x800A598C: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x800A5990: bne         $t2, $t1, L_800A5974
    if (ctx->r10 != ctx->r9) {
        // 0x800A5994: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_800A5974;
    }
    // 0x800A5994: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x800A5998: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x800A599C: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
L_800A59A0:
    // 0x800A59A0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A59A4: addiu       $a1, $a1, -0x6AC0
    ctx->r5 = ADD32(ctx->r5, -0X6AC0);
    // 0x800A59A8: jal         0x800A59C0
    // 0x800A59AC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_800A59C0(rdram, ctx);
        goto after_1;
    // 0x800A59AC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_1:
    // 0x800A59B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A59B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A59B8: jr          $ra
    // 0x800A59BC: nop

    return;
    // 0x800A59BC: nop

;}
RECOMP_FUNC void func_800A59C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A59C0: addiu       $sp, $sp, -0x238
    ctx->r29 = ADD32(ctx->r29, -0X238);
    // 0x800A59C4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800A59C8: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x800A59CC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x800A59D0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x800A59D4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x800A59D8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800A59DC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800A59E0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800A59E4: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x800A59E8: addiu       $s6, $sp, 0x1E0
    ctx->r22 = ADD32(ctx->r29, 0X1E0);
    // 0x800A59EC: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x800A59F0: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x800A59F4: sw          $t7, 0x220($sp)
    MEM_W(0X220, ctx->r29) = ctx->r15;
    // 0x800A59F8: or          $t2, $s6, $zero
    ctx->r10 = ctx->r22 | 0;
    // 0x800A59FC: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x800A5A00: addiu       $t0, $a1, 0x3C
    ctx->r8 = ADD32(ctx->r5, 0X3C);
L_800A5A04:
    // 0x800A5A04: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x800A5A08: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x800A5A0C: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x800A5A10: sw          $at, -0xC($t2)
    MEM_W(-0XC, ctx->r10) = ctx->r1;
    // 0x800A5A14: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x800A5A18: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x800A5A1C: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x800A5A20: bne         $t1, $t0, L_800A5A04
    if (ctx->r9 != ctx->r8) {
        // 0x800A5A24: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_800A5A04;
    }
    // 0x800A5A24: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x800A5A28: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x800A5A2C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x800A5A30: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x800A5A34: jal         0x800A57A4
    // 0x800A5A38: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    func_800A57A4(rdram, ctx);
        goto after_0;
    // 0x800A5A38: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    after_0:
    // 0x800A5A3C: lw          $v1, 0x220($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X220);
    // 0x800A5A40: lw          $t3, 0x24($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X24);
    // 0x800A5A44: lw          $s1, 0x18($v1)
    ctx->r17 = MEM_W(ctx->r3, 0X18);
    // 0x800A5A48: lw          $s3, 0x0($v1)
    ctx->r19 = MEM_W(ctx->r3, 0X0);
    // 0x800A5A4C: beql        $t3, $zero, L_800A5D6C
    if (ctx->r11 == 0) {
        // 0x800A5A50: lw          $v0, 0x4($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X4);
            goto L_800A5D6C;
    }
    goto skip_0;
    // 0x800A5A50: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    skip_0:
    // 0x800A5A54: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x800A5A58: andi        $t4, $v0, 0x40
    ctx->r12 = ctx->r2 & 0X40;
    // 0x800A5A5C: bne         $t4, $zero, L_800A5D60
    if (ctx->r12 != 0) {
        // 0x800A5A60: andi        $t5, $v0, 0x8
        ctx->r13 = ctx->r2 & 0X8;
            goto L_800A5D60;
    }
    // 0x800A5A60: andi        $t5, $v0, 0x8
    ctx->r13 = ctx->r2 & 0X8;
    // 0x800A5A64: beq         $t5, $zero, L_800A5AC4
    if (ctx->r13 == 0) {
        // 0x800A5A68: andi        $t6, $v0, 0x10
        ctx->r14 = ctx->r2 & 0X10;
            goto L_800A5AC4;
    }
    // 0x800A5A68: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x800A5A6C: beq         $t6, $zero, L_800A5A8C
    if (ctx->r14 == 0) {
        // 0x800A5A70: addiu       $s4, $sp, 0x160
        ctx->r20 = ADD32(ctx->r29, 0X160);
            goto L_800A5A8C;
    }
    // 0x800A5A70: addiu       $s4, $sp, 0x160
    ctx->r20 = ADD32(ctx->r29, 0X160);
    // 0x800A5A74: addiu       $s0, $s5, 0x4C
    ctx->r16 = ADD32(ctx->r21, 0X4C);
    // 0x800A5A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A5A7C: jal         0x800A57A4
    // 0x800A5A80: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    func_800A57A4(rdram, ctx);
        goto after_1;
    // 0x800A5A80: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    after_1:
    // 0x800A5A84: b           L_800A5B08
    // 0x800A5A88: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
        goto L_800A5B08;
    // 0x800A5A88: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
L_800A5A8C:
    // 0x800A5A8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800A5A90: jal         0x800A5660
    // 0x800A5A94: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800A5660(rdram, ctx);
        goto after_2;
    // 0x800A5A94: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_2:
    // 0x800A5A98: addiu       $s2, $sp, 0x1A0
    ctx->r18 = ADD32(ctx->r29, 0X1A0);
    // 0x800A5A9C: addiu       $s0, $s5, 0x4C
    ctx->r16 = ADD32(ctx->r21, 0X4C);
    // 0x800A5AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800A5AA4: jal         0x800A57A4
    // 0x800A5AA8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800A57A4(rdram, ctx);
        goto after_3;
    // 0x800A5AA8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x800A5AAC: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x800A5AB0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x800A5AB4: jal         0x800AF0C4
    // 0x800A5AB8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800AF0C4(rdram, ctx);
        goto after_4;
    // 0x800A5AB8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_4:
    // 0x800A5ABC: b           L_800A5B08
    // 0x800A5AC0: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
        goto L_800A5B08;
    // 0x800A5AC0: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
L_800A5AC4:
    // 0x800A5AC4: andi        $t7, $v0, 0x10
    ctx->r15 = ctx->r2 & 0X10;
    // 0x800A5AC8: beq         $t7, $zero, L_800A5AE4
    if (ctx->r15 == 0) {
        // 0x800A5ACC: addiu       $s4, $sp, 0x160
        ctx->r20 = ADD32(ctx->r29, 0X160);
            goto L_800A5AE4;
    }
    // 0x800A5ACC: addiu       $s4, $sp, 0x160
    ctx->r20 = ADD32(ctx->r29, 0X160);
    // 0x800A5AD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800A5AD4: jal         0x800A5660
    // 0x800A5AD8: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    func_800A5660(rdram, ctx);
        goto after_5;
    // 0x800A5AD8: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    after_5:
    // 0x800A5ADC: b           L_800A5B04
    // 0x800A5AE0: addiu       $s0, $s5, 0x4C
    ctx->r16 = ADD32(ctx->r21, 0X4C);
        goto L_800A5B04;
    // 0x800A5AE0: addiu       $s0, $s5, 0x4C
    ctx->r16 = ADD32(ctx->r21, 0X4C);
L_800A5AE4:
    // 0x800A5AE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800A5AE8: jal         0x800A5660
    // 0x800A5AEC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800A5660(rdram, ctx);
        goto after_6;
    // 0x800A5AEC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_6:
    // 0x800A5AF0: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x800A5AF4: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x800A5AF8: jal         0x800AF0C4
    // 0x800A5AFC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_800AF0C4(rdram, ctx);
        goto after_7;
    // 0x800A5AFC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_7:
    // 0x800A5B00: addiu       $s0, $s5, 0x4C
    ctx->r16 = ADD32(ctx->r21, 0X4C);
L_800A5B04:
    // 0x800A5B04: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
L_800A5B08:
    // 0x800A5B08: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x800A5B0C: jal         0x800A56E4
    // 0x800A5B10: addiu       $a1, $a1, 0xC0
    ctx->r5 = ADD32(ctx->r5, 0XC0);
    func_800A56E4(rdram, ctx);
        goto after_8;
    // 0x800A5B10: addiu       $a1, $a1, 0xC0
    ctx->r5 = ADD32(ctx->r5, 0XC0);
    after_8:
    // 0x800A5B14: lw          $t9, 0xC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XC);
    // 0x800A5B18: addiu       $v0, $sp, 0x54
    ctx->r2 = ADD32(ctx->r29, 0X54);
    // 0x800A5B1C: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x800A5B20: addiu       $t0, $t9, 0x3C
    ctx->r8 = ADD32(ctx->r25, 0X3C);
L_800A5B24:
    // 0x800A5B24: lw          $at, 0xC0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0XC0);
    // 0x800A5B28: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x800A5B2C: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x800A5B30: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x800A5B34: lw          $at, 0xB8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0XB8);
    // 0x800A5B38: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x800A5B3C: lw          $at, 0xBC($t9)
    ctx->r1 = MEM_W(ctx->r25, 0XBC);
    // 0x800A5B40: bne         $t9, $t0, L_800A5B24
    if (ctx->r25 != ctx->r8) {
        // 0x800A5B44: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_800A5B24;
    }
    // 0x800A5B44: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x800A5B48: lw          $at, 0xC0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0XC0);
    // 0x800A5B4C: or          $t5, $v0, $zero
    ctx->r13 = ctx->r2 | 0;
    // 0x800A5B50: addiu       $t4, $v0, 0x3C
    ctx->r12 = ADD32(ctx->r2, 0X3C);
    // 0x800A5B54: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x800A5B58: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
L_800A5B5C:
    // 0x800A5B5C: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x800A5B60: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x800A5B64: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x800A5B68: sw          $at, 0x74($t2)
    MEM_W(0X74, ctx->r10) = ctx->r1;
    // 0x800A5B6C: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x800A5B70: sw          $at, 0x78($t2)
    MEM_W(0X78, ctx->r10) = ctx->r1;
    // 0x800A5B74: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x800A5B78: bne         $t5, $t4, L_800A5B5C
    if (ctx->r13 != ctx->r12) {
        // 0x800A5B7C: sw          $at, 0x7C($t2)
        MEM_W(0X7C, ctx->r10) = ctx->r1;
            goto L_800A5B5C;
    }
    // 0x800A5B7C: sw          $at, 0x7C($t2)
    MEM_W(0X7C, ctx->r10) = ctx->r1;
    // 0x800A5B80: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x800A5B84: or          $t8, $v0, $zero
    ctx->r24 = ctx->r2 | 0;
    // 0x800A5B88: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x800A5B8C: addiu       $t7, $v0, 0x3C
    ctx->r15 = ADD32(ctx->r2, 0X3C);
    // 0x800A5B90: sw          $at, 0x80($t2)
    MEM_W(0X80, ctx->r10) = ctx->r1;
L_800A5B94:
    // 0x800A5B94: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x800A5B98: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x800A5B9C: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x800A5BA0: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x800A5BA4: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x800A5BA8: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x800A5BAC: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x800A5BB0: bne         $t8, $t7, L_800A5B94
    if (ctx->r24 != ctx->r15) {
        // 0x800A5BB4: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_800A5B94;
    }
    // 0x800A5BB4: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x800A5BB8: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x800A5BBC: addiu       $a1, $s5, 0x8C
    ctx->r5 = ADD32(ctx->r21, 0X8C);
    // 0x800A5BC0: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x800A5BC4: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x800A5BC8: jal         0x800AE880
    // 0x800A5BCC: addiu       $a0, $a0, 0xC0
    ctx->r4 = ADD32(ctx->r4, 0XC0);
    func_800AE880(rdram, ctx);
        goto after_9;
    // 0x800A5BCC: addiu       $a0, $a0, 0xC0
    ctx->r4 = ADD32(ctx->r4, 0XC0);
    after_9:
    // 0x800A5BD0: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x800A5BD4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x800A5BD8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800A5BDC: lwc1        $f4, 0xB0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XB0);
    // 0x800A5BE0: addiu       $a1, $s5, 0xCC
    ctx->r5 = ADD32(ctx->r21, 0XCC);
    // 0x800A5BE4: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x800A5BE8: swc1        $f6, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->f6.u32l;
    // 0x800A5BEC: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x800A5BF0: lwc1        $f8, 0xB4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XB4);
    // 0x800A5BF4: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x800A5BF8: swc1        $f10, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->f10.u32l;
    // 0x800A5BFC: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x800A5C00: lwc1        $f18, 0xB8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XB8);
    // 0x800A5C04: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x800A5C08: swc1        $f4, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = ctx->f4.u32l;
    // 0x800A5C0C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x800A5C10: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    // 0x800A5C14: jal         0x800AE880
    // 0x800A5C18: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_800AE880(rdram, ctx);
        goto after_10;
    // 0x800A5C18: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_10:
    // 0x800A5C1C: lhu         $t9, 0x0($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X0);
    // 0x800A5C20: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x800A5C24: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800A5C28: ori         $t1, $t9, 0x2
    ctx->r9 = ctx->r25 | 0X2;
    // 0x800A5C2C: sh          $t1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r9;
    // 0x800A5C30: lw          $t3, 0x220($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X220);
    // 0x800A5C34: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800A5C38: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A5C3C: lw          $s0, 0x24($t3)
    ctx->r16 = MEM_W(ctx->r11, 0X24);
    // 0x800A5C40: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800A5C44: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800A5C48: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x800A5C4C: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x800A5C50: mul.s       $f0, $f6, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x800A5C54: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x800A5C58: nop

    // 0x800A5C5C: bc1fl       L_800A5C6C
    if (!c1cs) {
        // 0x800A5C60: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_800A5C6C;
    }
    goto skip_1;
    // 0x800A5C60: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_1:
    // 0x800A5C64: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x800A5C68: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_800A5C6C:
    // 0x800A5C6C: nop

    // 0x800A5C70: bc1fl       L_800A5C80
    if (!c1cs) {
        // 0x800A5C74: lwc1        $f8, 0x1C($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
            goto L_800A5C80;
    }
    goto skip_2;
    // 0x800A5C74: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    skip_2:
    // 0x800A5C78: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x800A5C7C: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
L_800A5C80:
    // 0x800A5C80: lui         $at, 0x46FA
    ctx->r1 = S32(0X46FA << 16);
    // 0x800A5C84: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A5C88: mul.s       $f2, $f8, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x800A5C8C: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x800A5C90: nop

    // 0x800A5C94: bc1fl       L_800A5CA4
    if (!c1cs) {
        // 0x800A5C98: lbu         $t4, 0x4($s5)
        ctx->r12 = MEM_BU(ctx->r21, 0X4);
            goto L_800A5CA4;
    }
    goto skip_3;
    // 0x800A5C98: lbu         $t4, 0x4($s5)
    ctx->r12 = MEM_BU(ctx->r21, 0X4);
    skip_3:
    // 0x800A5C9C: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x800A5CA0: lbu         $t4, 0x4($s5)
    ctx->r12 = MEM_BU(ctx->r21, 0X4);
L_800A5CA4:
    // 0x800A5CA4: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x800A5CA8: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x800A5CAC: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x800A5CB0: addu        $a1, $s0, $t5
    ctx->r5 = ADD32(ctx->r16, ctx->r13);
    // 0x800A5CB4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x800A5CB8: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x800A5CBC: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x800A5CC0: jal         0x800BA310
    // 0x800A5CC4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    guPerspectiveF(rdram, ctx);
        goto after_11;
    // 0x800A5CC4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x800A5CC8: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    // 0x800A5CCC: addiu       $s2, $sp, 0x120
    ctx->r18 = ADD32(ctx->r29, 0X120);
    // 0x800A5CD0: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x800A5CD4: addiu       $t6, $a1, 0x3C
    ctx->r14 = ADD32(ctx->r5, 0X3C);
    // 0x800A5CD8: or          $t8, $s5, $zero
    ctx->r24 = ctx->r21 | 0;
L_800A5CDC:
    // 0x800A5CDC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x800A5CE0: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x800A5CE4: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x800A5CE8: sw          $at, 0x100($t8)
    MEM_W(0X100, ctx->r24) = ctx->r1;
    // 0x800A5CEC: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x800A5CF0: sw          $at, 0x104($t8)
    MEM_W(0X104, ctx->r24) = ctx->r1;
    // 0x800A5CF4: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x800A5CF8: bne         $t7, $t6, L_800A5CDC
    if (ctx->r15 != ctx->r14) {
        // 0x800A5CFC: sw          $at, 0x108($t8)
        MEM_W(0X108, ctx->r24) = ctx->r1;
            goto L_800A5CDC;
    }
    // 0x800A5CFC: sw          $at, 0x108($t8)
    MEM_W(0X108, ctx->r24) = ctx->r1;
    // 0x800A5D00: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x800A5D04: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800A5D08: sw          $at, 0x10C($t8)
    MEM_W(0X10C, ctx->r24) = ctx->r1;
    // 0x800A5D0C: jal         0x800AF558
    // 0x800A5D10: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    func_800AF558(rdram, ctx);
        goto after_12;
    // 0x800A5D10: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    after_12:
    // 0x800A5D14: lw          $t0, 0x0($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X0);
    // 0x800A5D18: andi        $t9, $t0, 0x4000
    ctx->r25 = ctx->r8 & 0X4000;
    // 0x800A5D1C: beql        $t9, $zero, L_800A5D48
    if (ctx->r25 == 0) {
        // 0x800A5D20: lbu         $t2, 0x4($s5)
        ctx->r10 = MEM_BU(ctx->r21, 0X4);
            goto L_800A5D48;
    }
    goto skip_4;
    // 0x800A5D20: lbu         $t2, 0x4($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X4);
    skip_4:
    // 0x800A5D24: lbu         $t3, 0x4($s5)
    ctx->r11 = MEM_BU(ctx->r21, 0X4);
    // 0x800A5D28: lw          $t1, 0x2C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X2C);
    // 0x800A5D2C: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x800A5D30: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x800A5D34: jal         0x800B78D0
    // 0x800A5D38: addu        $a1, $t1, $t4
    ctx->r5 = ADD32(ctx->r9, ctx->r12);
    guMtxF2L(rdram, ctx);
        goto after_13;
    // 0x800A5D38: addu        $a1, $t1, $t4
    ctx->r5 = ADD32(ctx->r9, ctx->r12);
    after_13:
    // 0x800A5D3C: b           L_800A5D60
    // 0x800A5D40: lw          $v1, 0x220($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X220);
        goto L_800A5D60;
    // 0x800A5D40: lw          $v1, 0x220($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X220);
    // 0x800A5D44: lbu         $t2, 0x4($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X4);
L_800A5D48:
    // 0x800A5D48: lw          $t5, 0x2C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X2C);
    // 0x800A5D4C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800A5D50: sll         $t6, $t2, 6
    ctx->r14 = S32(ctx->r10 << 6);
    // 0x800A5D54: jal         0x800B78D0
    // 0x800A5D58: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    guMtxF2L(rdram, ctx);
        goto after_14;
    // 0x800A5D58: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    after_14:
    // 0x800A5D5C: lw          $v1, 0x220($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X220);
L_800A5D60:
    // 0x800A5D60: addiu       $s1, $s1, 0x40
    ctx->r17 = ADD32(ctx->r17, 0X40);
    // 0x800A5D64: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x800A5D68: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
L_800A5D6C:
    // 0x800A5D6C: addiu       $s2, $sp, 0x120
    ctx->r18 = ADD32(ctx->r29, 0X120);
    // 0x800A5D70: addiu       $s4, $sp, 0x160
    ctx->r20 = ADD32(ctx->r29, 0X160);
    // 0x800A5D74: beq         $v0, $zero, L_800A5E28
    if (ctx->r2 == 0) {
        // 0x800A5D78: addiu       $s0, $v0, -0x1
        ctx->r16 = ADD32(ctx->r2, -0X1);
            goto L_800A5E28;
    }
    // 0x800A5D78: addiu       $s0, $v0, -0x1
    ctx->r16 = ADD32(ctx->r2, -0X1);
    // 0x800A5D7C: beq         $s0, $zero, L_800A5E28
    if (ctx->r16 == 0) {
        // 0x800A5D80: nop
    
            goto L_800A5E28;
    }
    // 0x800A5D80: nop

L_800A5D84:
    // 0x800A5D84: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x800A5D88: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800A5D8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800A5D90: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x800A5D94: beq         $t8, $zero, L_800A5DAC
    if (ctx->r24 == 0) {
        // 0x800A5D98: nop
    
            goto L_800A5DAC;
    }
    // 0x800A5D98: nop

    // 0x800A5D9C: jal         0x800A5660
    // 0x800A5DA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A5660(rdram, ctx);
        goto after_15;
    // 0x800A5DA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x800A5DA4: b           L_800A5DC8
    // 0x800A5DA8: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
        goto L_800A5DC8;
    // 0x800A5DA8: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
L_800A5DAC:
    // 0x800A5DAC: jal         0x800A5660
    // 0x800A5DB0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800A5660(rdram, ctx);
        goto after_16;
    // 0x800A5DB0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_16:
    // 0x800A5DB4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800A5DB8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x800A5DBC: jal         0x800AF0C4
    // 0x800A5DC0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_800AF0C4(rdram, ctx);
        goto after_17;
    // 0x800A5DC0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_17:
    // 0x800A5DC4: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
L_800A5DC8:
    // 0x800A5DC8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800A5DCC: jal         0x800A56E4
    // 0x800A5DD0: addiu       $a1, $a1, 0x80
    ctx->r5 = ADD32(ctx->r5, 0X80);
    func_800A56E4(rdram, ctx);
        goto after_18;
    // 0x800A5DD0: addiu       $a1, $a1, 0x80
    ctx->r5 = ADD32(ctx->r5, 0X80);
    after_18:
    // 0x800A5DD4: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
    // 0x800A5DD8: or          $t3, $t1, $zero
    ctx->r11 = ctx->r9 | 0;
    // 0x800A5DDC: addiu       $t9, $t1, 0x3C
    ctx->r25 = ADD32(ctx->r9, 0X3C);
L_800A5DE0:
    // 0x800A5DE0: lw          $at, 0x80($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X80);
    // 0x800A5DE4: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x800A5DE8: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x800A5DEC: sw          $at, 0xB4($t1)
    MEM_W(0XB4, ctx->r9) = ctx->r1;
    // 0x800A5DF0: lw          $at, 0x78($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X78);
    // 0x800A5DF4: sw          $at, 0xB8($t1)
    MEM_W(0XB8, ctx->r9) = ctx->r1;
    // 0x800A5DF8: lw          $at, 0x7C($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X7C);
    // 0x800A5DFC: bne         $t3, $t9, L_800A5DE0
    if (ctx->r11 != ctx->r25) {
        // 0x800A5E00: sw          $at, 0xBC($t1)
        MEM_W(0XBC, ctx->r9) = ctx->r1;
            goto L_800A5DE0;
    }
    // 0x800A5E00: sw          $at, 0xBC($t1)
    MEM_W(0XBC, ctx->r9) = ctx->r1;
    // 0x800A5E04: lw          $at, 0x80($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X80);
    // 0x800A5E08: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800A5E0C: addiu       $s1, $s1, 0x40
    ctx->r17 = ADD32(ctx->r17, 0X40);
    // 0x800A5E10: sw          $at, 0xC0($t1)
    MEM_W(0XC0, ctx->r9) = ctx->r1;
    // 0x800A5E14: lhu         $t4, -0x40($s1)
    ctx->r12 = MEM_HU(ctx->r17, -0X40);
    // 0x800A5E18: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x800A5E1C: ori         $t2, $t4, 0x2
    ctx->r10 = ctx->r12 | 0X2;
    // 0x800A5E20: bne         $s0, $zero, L_800A5D84
    if (ctx->r16 != 0) {
        // 0x800A5E24: sh          $t2, -0x40($s1)
        MEM_H(-0X40, ctx->r17) = ctx->r10;
            goto L_800A5D84;
    }
    // 0x800A5E24: sh          $t2, -0x40($s1)
    MEM_H(-0X40, ctx->r17) = ctx->r10;
L_800A5E28:
    // 0x800A5E28: beq         $s3, $zero, L_800A5E58
    if (ctx->r19 == 0) {
        // 0x800A5E2C: or          $s0, $s3, $zero
        ctx->r16 = ctx->r19 | 0;
            goto L_800A5E58;
    }
    // 0x800A5E2C: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
L_800A5E30:
    // 0x800A5E30: lhu         $t5, 0x0($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X0);
    // 0x800A5E34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800A5E38: andi        $t6, $t5, 0x100
    ctx->r14 = ctx->r13 & 0X100;
    // 0x800A5E3C: beql        $t6, $zero, L_800A5E50
    if (ctx->r14 == 0) {
        // 0x800A5E40: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_800A5E50;
    }
    goto skip_5;
    // 0x800A5E40: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_5:
    // 0x800A5E44: jal         0x800A57FC
    // 0x800A5E48: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_800A57FC(rdram, ctx);
        goto after_19;
    // 0x800A5E48: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_19:
    // 0x800A5E4C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_800A5E50:
    // 0x800A5E50: bne         $s0, $zero, L_800A5E30
    if (ctx->r16 != 0) {
        // 0x800A5E54: addiu       $s1, $s1, 0x40
        ctx->r17 = ADD32(ctx->r17, 0X40);
            goto L_800A5E30;
    }
    // 0x800A5E54: addiu       $s1, $s1, 0x40
    ctx->r17 = ADD32(ctx->r17, 0X40);
L_800A5E58:
    // 0x800A5E58: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800A5E5C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800A5E60: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5E64: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x800A5E68: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x800A5E6C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x800A5E70: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x800A5E74: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x800A5E78: jr          $ra
    // 0x800A5E7C: addiu       $sp, $sp, 0x238
    ctx->r29 = ADD32(ctx->r29, 0X238);
    return;
    // 0x800A5E7C: addiu       $sp, $sp, 0x238
    ctx->r29 = ADD32(ctx->r29, 0X238);
;}
RECOMP_FUNC void func_800A5E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5E80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A5E84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A5E88: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800A5E8C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800A5E90: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A5E94: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A5E98: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x800A5E9C: lbu         $s3, 0x4($a0)
    ctx->r19 = MEM_BU(ctx->r4, 0X4);
    // 0x800A5EA0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800A5EA4: lw          $s2, 0x10($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X10);
    // 0x800A5EA8: lw          $s0, 0x28($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X28);
    // 0x800A5EAC: blezl       $s2, L_800A5EE8
    if (SIGNED(ctx->r18) <= 0) {
        // 0x800A5EB0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800A5EE8;
    }
    goto skip_0;
    // 0x800A5EB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_800A5EB4:
    // 0x800A5EB4: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x800A5EB8: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x800A5EBC: beql        $t7, $zero, L_800A5EDC
    if (ctx->r15 == 0) {
        // 0x800A5EC0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800A5EDC;
    }
    goto skip_1;
    // 0x800A5EC0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x800A5EC4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x800A5EC8: sll         $t8, $s3, 6
    ctx->r24 = S32(ctx->r19 << 6);
    // 0x800A5ECC: addu        $a1, $v0, $t8
    ctx->r5 = ADD32(ctx->r2, ctx->r24);
    // 0x800A5ED0: jal         0x800B78D0
    // 0x800A5ED4: addiu       $a0, $v0, 0x80
    ctx->r4 = ADD32(ctx->r2, 0X80);
    guMtxF2L(rdram, ctx);
        goto after_0;
    // 0x800A5ED4: addiu       $a0, $v0, 0x80
    ctx->r4 = ADD32(ctx->r2, 0X80);
    after_0:
    // 0x800A5ED8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800A5EDC:
    // 0x800A5EDC: bne         $s1, $s2, L_800A5EB4
    if (ctx->r17 != ctx->r18) {
        // 0x800A5EE0: addiu       $s0, $s0, 0x40
        ctx->r16 = ADD32(ctx->r16, 0X40);
            goto L_800A5EB4;
    }
    // 0x800A5EE0: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
    // 0x800A5EE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800A5EE8:
    // 0x800A5EE8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A5EEC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A5EF0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800A5EF4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800A5EF8: jr          $ra
    // 0x800A5EFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A5EFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A5F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5F00: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x800A5F04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800A5F08: lw          $a2, 0x10($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X10);
    // 0x800A5F0C: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    // 0x800A5F10: blez        $a2, L_800A60F4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800A5F14: andi        $v1, $a2, 0x1
        ctx->r3 = ctx->r6 & 0X1;
            goto L_800A60F4;
    }
    // 0x800A5F14: andi        $v1, $a2, 0x1
    ctx->r3 = ctx->r6 & 0X1;
    // 0x800A5F18: beql        $v1, $zero, L_800A5FC4
    if (ctx->r3 == 0) {
        // 0x800A5F1C: lui         $at, 0x4180
        ctx->r1 = S32(0X4180 << 16);
            goto L_800A5FC4;
    }
    goto skip_0;
    // 0x800A5F1C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    skip_0:
    // 0x800A5F20: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x800A5F24: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x800A5F28: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x800A5F2C: beq         $t7, $zero, L_800A5FB8
    if (ctx->r15 == 0) {
        // 0x800A5F30: nop
    
            goto L_800A5FB8;
    }
    // 0x800A5F30: nop

    // 0x800A5F34: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x800A5F38: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800A5F3C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x800A5F40: lwc1        $f4, 0xF0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A5F44: lwc1        $f10, 0xF4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A5F48: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800A5F4C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800A5F50: lwc1        $f4, 0xF8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A5F54: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    // 0x800A5F58: swc1        $f8, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f8.u32l;
    // 0x800A5F5C: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800A5F60: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800A5F64: swc1        $f18, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f18.u32l;
    // 0x800A5F68: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800A5F6C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800A5F70: swc1        $f8, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f8.u32l;
    // 0x800A5F74: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800A5F78: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x800A5F7C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800A5F80: lwc1        $f10, 0xB0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XB0);
    // 0x800A5F84: lwc1        $f6, 0xB4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XB4);
    // 0x800A5F88: addiu       $v1, $v1, 0x80
    ctx->r3 = ADD32(ctx->r3, 0X80);
    // 0x800A5F8C: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x800A5F90: lwc1        $f18, 0x38($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X38);
    // 0x800A5F94: swc1        $f4, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f4.u32l;
    // 0x800A5F98: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800A5F9C: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800A5FA0: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x800A5FA4: swc1        $f10, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f10.u32l;
    // 0x800A5FA8: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800A5FAC: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800A5FB0: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x800A5FB4: swc1        $f6, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f6.u32l;
L_800A5FB8:
    // 0x800A5FB8: beq         $a3, $a2, L_800A60F4
    if (ctx->r7 == ctx->r6) {
        // 0x800A5FBC: addiu       $v0, $v0, 0x40
        ctx->r2 = ADD32(ctx->r2, 0X40);
            goto L_800A60F4;
    }
    // 0x800A5FBC: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x800A5FC0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
L_800A5FC4:
    // 0x800A5FC4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800A5FC8: nop

L_800A5FCC:
    // 0x800A5FCC: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x800A5FD0: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x800A5FD4: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x800A5FD8: beql        $t9, $zero, L_800A6060
    if (ctx->r25 == 0) {
        // 0x800A5FDC: lhu         $t0, 0x40($v0)
        ctx->r8 = MEM_HU(ctx->r2, 0X40);
            goto L_800A6060;
    }
    goto skip_1;
    // 0x800A5FDC: lhu         $t0, 0x40($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X40);
    skip_1:
    // 0x800A5FE0: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x800A5FE4: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800A5FE8: lwc1        $f16, 0xF0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A5FEC: lwc1        $f18, 0xF4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A5FF0: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    // 0x800A5FF4: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x800A5FF8: lwc1        $f16, 0x38($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X38);
    // 0x800A5FFC: swc1        $f4, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f4.u32l;
    // 0x800A6000: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800A6004: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x800A6008: swc1        $f6, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f6.u32l;
    // 0x800A600C: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800A6010: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x800A6014: swc1        $f4, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f4.u32l;
    // 0x800A6018: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800A601C: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x800A6020: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800A6024: lwc1        $f18, 0xB0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XB0);
    // 0x800A6028: lwc1        $f10, 0xB4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XB4);
    // 0x800A602C: addiu       $v1, $v1, 0x80
    ctx->r3 = ADD32(ctx->r3, 0X80);
    // 0x800A6030: add.s       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x800A6034: lwc1        $f6, 0x38($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X38);
    // 0x800A6038: swc1        $f16, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f16.u32l;
    // 0x800A603C: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800A6040: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800A6044: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800A6048: swc1        $f18, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f18.u32l;
    // 0x800A604C: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800A6050: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800A6054: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x800A6058: swc1        $f10, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f10.u32l;
    // 0x800A605C: lhu         $t0, 0x40($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X40);
L_800A6060:
    // 0x800A6060: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x800A6064: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x800A6068: beq         $t1, $zero, L_800A60EC
    if (ctx->r9 == 0) {
        // 0x800A606C: nop
    
            goto L_800A60EC;
    }
    // 0x800A606C: nop

    // 0x800A6070: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x800A6074: lwc1        $f18, 0x0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800A6078: lwc1        $f8, 0xF0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A607C: lwc1        $f6, 0xF4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A6080: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    // 0x800A6084: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x800A6088: lwc1        $f8, 0x38($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X38);
    // 0x800A608C: swc1        $f16, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f16.u32l;
    // 0x800A6090: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800A6094: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x800A6098: swc1        $f10, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f10.u32l;
    // 0x800A609C: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800A60A0: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x800A60A4: swc1        $f16, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f16.u32l;
    // 0x800A60A8: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800A60AC: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x800A60B0: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800A60B4: lwc1        $f6, 0xB0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XB0);
    // 0x800A60B8: lwc1        $f18, 0xB4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XB4);
    // 0x800A60BC: addiu       $v1, $v1, 0x80
    ctx->r3 = ADD32(ctx->r3, 0X80);
    // 0x800A60C0: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800A60C4: lwc1        $f10, 0x38($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X38);
    // 0x800A60C8: swc1        $f8, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f8.u32l;
    // 0x800A60CC: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800A60D0: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800A60D4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800A60D8: swc1        $f6, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f6.u32l;
    // 0x800A60DC: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800A60E0: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800A60E4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800A60E8: swc1        $f18, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f18.u32l;
L_800A60EC:
    // 0x800A60EC: bne         $a3, $a2, L_800A5FCC
    if (ctx->r7 != ctx->r6) {
        // 0x800A60F0: addiu       $v0, $v0, 0x40
        ctx->r2 = ADD32(ctx->r2, 0X40);
            goto L_800A5FCC;
    }
    // 0x800A60F0: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
L_800A60F4:
    // 0x800A60F4: jr          $ra
    // 0x800A60F8: nop

    return;
    // 0x800A60F8: nop

;}
RECOMP_FUNC void func_800A60FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A60FC: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x800A6100: lw          $a1, 0x10($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X10);
    // 0x800A6104: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    // 0x800A6108: beq         $a1, $zero, L_800A6358
    if (ctx->r5 == 0) {
        // 0x800A610C: andi        $v1, $a1, 0x3
        ctx->r3 = ctx->r5 & 0X3;
            goto L_800A6358;
    }
    // 0x800A610C: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x800A6110: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x800A6114: beq         $v1, $zero, L_800A61A0
    if (ctx->r3 == 0) {
        // 0x800A6118: addu        $a0, $v1, $a1
        ctx->r4 = ADD32(ctx->r3, ctx->r5);
            goto L_800A61A0;
    }
    // 0x800A6118: addu        $a0, $v1, $a1
    ctx->r4 = ADD32(ctx->r3, ctx->r5);
    // 0x800A611C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x800A6120: beq         $a0, $a1, L_800A6168
    if (ctx->r4 == ctx->r5) {
        // 0x800A6124: lw          $v1, 0xC($v0)
        ctx->r3 = MEM_W(ctx->r2, 0XC);
            goto L_800A6168;
    }
    // 0x800A6124: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
L_800A6128:
    // 0x800A6128: lwc1        $f18, 0xF0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A612C: lwc1        $f16, 0x170($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X170);
    // 0x800A6130: lwc1        $f14, 0xF4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A6134: lwc1        $f12, 0x174($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X174);
    // 0x800A6138: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x800A613C: lwc1        $f18, 0xF8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A6140: lwc1        $f10, 0x178($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X178);
    // 0x800A6144: sub.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x800A6148: swc1        $f16, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f16.u32l;
    // 0x800A614C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x800A6150: sub.s       $f10, $f18, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x800A6154: swc1        $f12, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f12.u32l;
    // 0x800A6158: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x800A615C: swc1        $f10, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f10.u32l;
    // 0x800A6160: bne         $a0, $a1, L_800A6128
    if (ctx->r4 != ctx->r5) {
        // 0x800A6164: lw          $v1, 0xC($v0)
        ctx->r3 = MEM_W(ctx->r2, 0XC);
            goto L_800A6128;
    }
    // 0x800A6164: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
L_800A6168:
    // 0x800A6168: lwc1        $f18, 0xF0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A616C: lwc1        $f16, 0x170($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X170);
    // 0x800A6170: lwc1        $f14, 0xF4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A6174: lwc1        $f12, 0x174($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X174);
    // 0x800A6178: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x800A617C: lwc1        $f18, 0xF8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A6180: lwc1        $f10, 0x178($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X178);
    // 0x800A6184: sub.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x800A6188: swc1        $f16, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f16.u32l;
    // 0x800A618C: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x800A6190: sub.s       $f10, $f18, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x800A6194: swc1        $f12, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f12.u32l;
    // 0x800A6198: swc1        $f10, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f10.u32l;
    // 0x800A619C: beq         $a1, $zero, L_800A6358
    if (ctx->r5 == 0) {
        // 0x800A61A0: addiu       $a1, $a1, -0x4
        ctx->r5 = ADD32(ctx->r5, -0X4);
            goto L_800A6358;
    }
L_800A61A0:
    // 0x800A61A0: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x800A61A4: beq         $a1, $zero, L_800A6288
    if (ctx->r5 == 0) {
        // 0x800A61A8: lw          $v1, 0xC($v0)
        ctx->r3 = MEM_W(ctx->r2, 0XC);
            goto L_800A6288;
    }
    // 0x800A61A8: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
L_800A61AC:
    // 0x800A61AC: lwc1        $f18, 0xF0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A61B0: lwc1        $f16, 0x170($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X170);
    // 0x800A61B4: lwc1        $f14, 0xF4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A61B8: lwc1        $f12, 0x174($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X174);
    // 0x800A61BC: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x800A61C0: lwc1        $f18, 0xF8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A61C4: lwc1        $f10, 0x178($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X178);
    // 0x800A61C8: sub.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x800A61CC: swc1        $f16, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f16.u32l;
    // 0x800A61D0: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x800A61D4: sub.s       $f10, $f18, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x800A61D8: swc1        $f12, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f12.u32l;
    // 0x800A61DC: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x800A61E0: swc1        $f10, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f10.u32l;
    // 0x800A61E4: lw          $v1, -0xB4($v0)
    ctx->r3 = MEM_W(ctx->r2, -0XB4);
    // 0x800A61E8: lwc1        $f10, 0xF0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A61EC: lwc1        $f12, 0x170($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X170);
    // 0x800A61F0: lwc1        $f18, 0xF4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A61F4: lwc1        $f16, 0x174($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X174);
    // 0x800A61F8: sub.s       $f12, $f10, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x800A61FC: lwc1        $f10, 0xF8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A6200: lwc1        $f14, 0x178($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X178);
    // 0x800A6204: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x800A6208: swc1        $f12, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f12.u32l;
    // 0x800A620C: sub.s       $f14, $f10, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x800A6210: swc1        $f16, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f16.u32l;
    // 0x800A6214: swc1        $f14, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f14.u32l;
    // 0x800A6218: lw          $v1, -0x74($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X74);
    // 0x800A621C: lwc1        $f14, 0xF0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A6220: lwc1        $f16, 0x170($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X170);
    // 0x800A6224: lwc1        $f10, 0xF4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A6228: lwc1        $f12, 0x174($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X174);
    // 0x800A622C: sub.s       $f16, $f14, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x800A6230: lwc1        $f14, 0xF8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A6234: lwc1        $f18, 0x178($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X178);
    // 0x800A6238: sub.s       $f12, $f10, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x800A623C: swc1        $f16, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f16.u32l;
    // 0x800A6240: sub.s       $f18, $f14, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x800A6244: swc1        $f12, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f12.u32l;
    // 0x800A6248: swc1        $f18, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f18.u32l;
    // 0x800A624C: lw          $v1, -0x34($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X34);
    // 0x800A6250: lwc1        $f18, 0xF0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A6254: lwc1        $f12, 0x170($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X170);
    // 0x800A6258: lwc1        $f14, 0xF4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A625C: lwc1        $f16, 0x174($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X174);
    // 0x800A6260: sub.s       $f12, $f18, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x800A6264: lwc1        $f18, 0xF8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A6268: lwc1        $f10, 0x178($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X178);
    // 0x800A626C: sub.s       $f16, $f14, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x800A6270: swc1        $f12, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f12.u32l;
    // 0x800A6274: sub.s       $f10, $f18, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x800A6278: swc1        $f16, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f16.u32l;
    // 0x800A627C: swc1        $f10, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f10.u32l;
    // 0x800A6280: bne         $a1, $zero, L_800A61AC
    if (ctx->r5 != 0) {
        // 0x800A6284: lw          $v1, 0xC($v0)
        ctx->r3 = MEM_W(ctx->r2, 0XC);
            goto L_800A61AC;
    }
    // 0x800A6284: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
L_800A6288:
    // 0x800A6288: lwc1        $f18, 0xF0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A628C: lwc1        $f16, 0x170($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X170);
    // 0x800A6290: lwc1        $f14, 0xF4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A6294: lwc1        $f12, 0x174($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X174);
    // 0x800A6298: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x800A629C: lwc1        $f18, 0xF8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A62A0: lwc1        $f10, 0x178($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X178);
    // 0x800A62A4: sub.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x800A62A8: swc1        $f16, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f16.u32l;
    // 0x800A62AC: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x800A62B0: sub.s       $f10, $f18, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x800A62B4: swc1        $f12, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f12.u32l;
    // 0x800A62B8: swc1        $f10, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f10.u32l;
    // 0x800A62BC: lw          $v1, -0xB4($v0)
    ctx->r3 = MEM_W(ctx->r2, -0XB4);
    // 0x800A62C0: lwc1        $f10, 0xF0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A62C4: lwc1        $f12, 0x170($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X170);
    // 0x800A62C8: lwc1        $f18, 0xF4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A62CC: lwc1        $f16, 0x174($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X174);
    // 0x800A62D0: sub.s       $f12, $f10, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x800A62D4: lwc1        $f10, 0xF8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A62D8: lwc1        $f14, 0x178($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X178);
    // 0x800A62DC: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x800A62E0: swc1        $f12, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f12.u32l;
    // 0x800A62E4: sub.s       $f14, $f10, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x800A62E8: swc1        $f16, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f16.u32l;
    // 0x800A62EC: swc1        $f14, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f14.u32l;
    // 0x800A62F0: lw          $v1, -0x74($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X74);
    // 0x800A62F4: lwc1        $f14, 0xF0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A62F8: lwc1        $f16, 0x170($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X170);
    // 0x800A62FC: lwc1        $f10, 0xF4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A6300: lwc1        $f12, 0x174($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X174);
    // 0x800A6304: sub.s       $f16, $f14, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x800A6308: lwc1        $f14, 0xF8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A630C: lwc1        $f18, 0x178($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X178);
    // 0x800A6310: sub.s       $f12, $f10, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x800A6314: swc1        $f16, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f16.u32l;
    // 0x800A6318: sub.s       $f18, $f14, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x800A631C: swc1        $f12, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f12.u32l;
    // 0x800A6320: swc1        $f18, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f18.u32l;
    // 0x800A6324: lw          $v1, -0x34($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X34);
    // 0x800A6328: lwc1        $f18, 0xF0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A632C: lwc1        $f12, 0x170($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X170);
    // 0x800A6330: lwc1        $f14, 0xF4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A6334: lwc1        $f16, 0x174($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X174);
    // 0x800A6338: sub.s       $f12, $f18, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x800A633C: lwc1        $f18, 0xF8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A6340: lwc1        $f10, 0x178($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X178);
    // 0x800A6344: sub.s       $f16, $f14, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x800A6348: swc1        $f12, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f12.u32l;
    // 0x800A634C: sub.s       $f10, $f18, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x800A6350: swc1        $f16, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f16.u32l;
    // 0x800A6354: swc1        $f10, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f10.u32l;
L_800A6358:
    // 0x800A6358: jr          $ra
    // 0x800A635C: nop

    return;
    // 0x800A635C: nop

;}
RECOMP_FUNC void func_800A6360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6360: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x800A6364: lw          $a1, 0x10($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X10);
    // 0x800A6368: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    // 0x800A636C: beq         $a1, $zero, L_800A6524
    if (ctx->r5 == 0) {
        // 0x800A6370: andi        $v1, $a1, 0x3
        ctx->r3 = ctx->r5 & 0X3;
            goto L_800A6524;
    }
    // 0x800A6370: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x800A6374: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x800A6378: beql        $v1, $zero, L_800A63C8
    if (ctx->r3 == 0) {
        // 0x800A637C: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_800A63C8;
    }
    goto skip_0;
    // 0x800A637C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x800A6380: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800A6384: addu        $a0, $v1, $a1
    ctx->r4 = ADD32(ctx->r3, ctx->r5);
L_800A6388:
    // 0x800A6388: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x800A638C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x800A6390: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x800A6394: lwc1        $f4, 0xF0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A6398: lwc1        $f6, 0xF4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A639C: lwc1        $f8, 0xF8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A63A0: swc1        $f0, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f0.u32l;
    // 0x800A63A4: swc1        $f0, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f0.u32l;
    // 0x800A63A8: swc1        $f0, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f0.u32l;
    // 0x800A63AC: swc1        $f4, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f4.u32l;
    // 0x800A63B0: swc1        $f6, 0x174($v1)
    MEM_W(0X174, ctx->r3) = ctx->f6.u32l;
    // 0x800A63B4: bne         $a0, $a1, L_800A6388
    if (ctx->r4 != ctx->r5) {
        // 0x800A63B8: swc1        $f8, 0x178($v1)
        MEM_W(0X178, ctx->r3) = ctx->f8.u32l;
            goto L_800A6388;
    }
    // 0x800A63B8: swc1        $f8, 0x178($v1)
    MEM_W(0X178, ctx->r3) = ctx->f8.u32l;
    // 0x800A63BC: beq         $a1, $zero, L_800A6524
    if (ctx->r5 == 0) {
        // 0x800A63C0: nop
    
            goto L_800A6524;
    }
    // 0x800A63C0: nop

    // 0x800A63C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_800A63C8:
    // 0x800A63C8: nop

    // 0x800A63CC: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x800A63D0: beq         $a1, $zero, L_800A6484
    if (ctx->r5 == 0) {
        // 0x800A63D4: lw          $v1, 0xC($v0)
        ctx->r3 = MEM_W(ctx->r2, 0XC);
            goto L_800A6484;
    }
    // 0x800A63D4: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
L_800A63D8:
    // 0x800A63D8: lwc1        $f18, 0xF0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A63DC: lwc1        $f16, 0xF4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A63E0: lwc1        $f14, 0xF8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A63E4: swc1        $f0, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f0.u32l;
    // 0x800A63E8: swc1        $f18, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f18.u32l;
    // 0x800A63EC: swc1        $f0, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f0.u32l;
    // 0x800A63F0: swc1        $f0, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f0.u32l;
    // 0x800A63F4: swc1        $f16, 0x174($v1)
    MEM_W(0X174, ctx->r3) = ctx->f16.u32l;
    // 0x800A63F8: swc1        $f14, 0x178($v1)
    MEM_W(0X178, ctx->r3) = ctx->f14.u32l;
    // 0x800A63FC: lw          $v1, 0x4C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4C);
    // 0x800A6400: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x800A6404: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x800A6408: lwc1        $f14, 0xF0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A640C: lwc1        $f16, 0xF4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A6410: lwc1        $f18, 0xF8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A6414: swc1        $f0, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f0.u32l;
    // 0x800A6418: swc1        $f14, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f14.u32l;
    // 0x800A641C: swc1        $f0, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f0.u32l;
    // 0x800A6420: swc1        $f0, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f0.u32l;
    // 0x800A6424: swc1        $f16, 0x174($v1)
    MEM_W(0X174, ctx->r3) = ctx->f16.u32l;
    // 0x800A6428: swc1        $f18, 0x178($v1)
    MEM_W(0X178, ctx->r3) = ctx->f18.u32l;
    // 0x800A642C: lw          $v1, -0x74($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X74);
    // 0x800A6430: lwc1        $f18, 0xF0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A6434: lwc1        $f16, 0xF4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A6438: lwc1        $f14, 0xF8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A643C: swc1        $f0, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f0.u32l;
    // 0x800A6440: swc1        $f18, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f18.u32l;
    // 0x800A6444: swc1        $f0, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f0.u32l;
    // 0x800A6448: swc1        $f0, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f0.u32l;
    // 0x800A644C: swc1        $f16, 0x174($v1)
    MEM_W(0X174, ctx->r3) = ctx->f16.u32l;
    // 0x800A6450: swc1        $f14, 0x178($v1)
    MEM_W(0X178, ctx->r3) = ctx->f14.u32l;
    // 0x800A6454: lw          $v1, -0x34($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X34);
    // 0x800A6458: lwc1        $f14, 0xF0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A645C: lwc1        $f16, 0xF4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A6460: lwc1        $f18, 0xF8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A6464: swc1        $f0, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f0.u32l;
    // 0x800A6468: swc1        $f14, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f14.u32l;
    // 0x800A646C: swc1        $f0, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f0.u32l;
    // 0x800A6470: swc1        $f0, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f0.u32l;
    // 0x800A6474: swc1        $f16, 0x174($v1)
    MEM_W(0X174, ctx->r3) = ctx->f16.u32l;
    // 0x800A6478: swc1        $f18, 0x178($v1)
    MEM_W(0X178, ctx->r3) = ctx->f18.u32l;
    // 0x800A647C: bne         $a1, $zero, L_800A63D8
    if (ctx->r5 != 0) {
        // 0x800A6480: lw          $v1, 0xC($v0)
        ctx->r3 = MEM_W(ctx->r2, 0XC);
            goto L_800A63D8;
    }
    // 0x800A6480: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
L_800A6484:
    // 0x800A6484: lwc1        $f18, 0xF0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A6488: lwc1        $f16, 0xF4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A648C: lwc1        $f14, 0xF8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A6490: swc1        $f0, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f0.u32l;
    // 0x800A6494: swc1        $f0, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f0.u32l;
    // 0x800A6498: swc1        $f0, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f0.u32l;
    // 0x800A649C: swc1        $f18, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f18.u32l;
    // 0x800A64A0: swc1        $f16, 0x174($v1)
    MEM_W(0X174, ctx->r3) = ctx->f16.u32l;
    // 0x800A64A4: swc1        $f14, 0x178($v1)
    MEM_W(0X178, ctx->r3) = ctx->f14.u32l;
    // 0x800A64A8: lw          $v1, 0x4C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4C);
    // 0x800A64AC: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x800A64B0: lwc1        $f14, 0xF0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A64B4: lwc1        $f16, 0xF4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A64B8: lwc1        $f18, 0xF8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A64BC: swc1        $f0, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f0.u32l;
    // 0x800A64C0: swc1        $f0, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f0.u32l;
    // 0x800A64C4: swc1        $f0, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f0.u32l;
    // 0x800A64C8: swc1        $f14, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f14.u32l;
    // 0x800A64CC: swc1        $f16, 0x174($v1)
    MEM_W(0X174, ctx->r3) = ctx->f16.u32l;
    // 0x800A64D0: swc1        $f18, 0x178($v1)
    MEM_W(0X178, ctx->r3) = ctx->f18.u32l;
    // 0x800A64D4: lw          $v1, -0x74($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X74);
    // 0x800A64D8: lwc1        $f18, 0xF0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A64DC: lwc1        $f16, 0xF4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A64E0: lwc1        $f14, 0xF8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A64E4: swc1        $f0, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f0.u32l;
    // 0x800A64E8: swc1        $f0, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f0.u32l;
    // 0x800A64EC: swc1        $f0, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f0.u32l;
    // 0x800A64F0: swc1        $f18, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f18.u32l;
    // 0x800A64F4: swc1        $f16, 0x174($v1)
    MEM_W(0X174, ctx->r3) = ctx->f16.u32l;
    // 0x800A64F8: swc1        $f14, 0x178($v1)
    MEM_W(0X178, ctx->r3) = ctx->f14.u32l;
    // 0x800A64FC: lw          $v1, -0x34($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X34);
    // 0x800A6500: lwc1        $f14, 0xF0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XF0);
    // 0x800A6504: lwc1        $f16, 0xF4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XF4);
    // 0x800A6508: lwc1        $f18, 0xF8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XF8);
    // 0x800A650C: swc1        $f0, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f0.u32l;
    // 0x800A6510: swc1        $f0, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f0.u32l;
    // 0x800A6514: swc1        $f0, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f0.u32l;
    // 0x800A6518: swc1        $f14, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f14.u32l;
    // 0x800A651C: swc1        $f16, 0x174($v1)
    MEM_W(0X174, ctx->r3) = ctx->f16.u32l;
    // 0x800A6520: swc1        $f18, 0x178($v1)
    MEM_W(0X178, ctx->r3) = ctx->f18.u32l;
L_800A6524:
    // 0x800A6524: jr          $ra
    // 0x800A6528: nop

    return;
    // 0x800A6528: nop

;}
RECOMP_FUNC void func_800A652C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A652C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800A6530: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800A6534: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x800A6538: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800A653C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800A6540: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800A6544: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800A6548: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800A654C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800A6550: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800A6554: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800A6558: beq         $a1, $zero, L_800A6704
    if (ctx->r5 == 0) {
        // 0x800A655C: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800A6704;
    }
    // 0x800A655C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A6560: lw          $t6, 0x14($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X14);
    // 0x800A6564: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800A6568: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800A656C: bnel        $t7, $zero, L_800A6708
    if (ctx->r15 != 0) {
        // 0x800A6570: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800A6708;
    }
    goto skip_0;
    // 0x800A6570: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x800A6574: lw          $s4, 0x24($a1)
    ctx->r20 = MEM_W(ctx->r5, 0X24);
    // 0x800A6578: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x800A657C: sw          $a0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r4;
    // 0x800A6580: lw          $s0, 0x28($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X28);
    // 0x800A6584: blez        $s4, L_800A66F8
    if (SIGNED(ctx->r20) <= 0) {
        // 0x800A6588: sw          $t8, 0x20($a1)
        MEM_W(0X20, ctx->r5) = ctx->r24;
            goto L_800A66F8;
    }
    // 0x800A6588: sw          $t8, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r24;
    // 0x800A658C: addiu       $fp, $zero, 0x14
    ctx->r30 = ADD32(0, 0X14);
    // 0x800A6590: addiu       $s7, $zero, 0x3
    ctx->r23 = ADD32(0, 0X3);
    // 0x800A6594: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x800A6598: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_800A659C:
    // 0x800A659C: jal         0x800AA134
    // 0x800A65A0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800AA134(rdram, ctx);
        goto after_0;
    // 0x800A65A0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_0:
    // 0x800A65A4: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x800A65A8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800A65AC: beq         $v1, $zero, L_800A65D4
    if (ctx->r3 == 0) {
        // 0x800A65B0: nop
    
            goto L_800A65D4;
    }
    // 0x800A65B0: nop

    // 0x800A65B4: beql        $v1, $s5, L_800A6690
    if (ctx->r3 == ctx->r21) {
        // 0x800A65B8: lw          $t1, 0x20($s3)
        ctx->r9 = MEM_W(ctx->r19, 0X20);
            goto L_800A6690;
    }
    goto skip_1;
    // 0x800A65B8: lw          $t1, 0x20($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X20);
    skip_1:
    // 0x800A65BC: beql        $v1, $s6, L_800A66B0
    if (ctx->r3 == ctx->r22) {
        // 0x800A65C0: lw          $t6, 0x10($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X10);
            goto L_800A66B0;
    }
    goto skip_2;
    // 0x800A65C0: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    skip_2:
    // 0x800A65C4: beql        $v1, $s7, L_800A66D4
    if (ctx->r3 == ctx->r23) {
        // 0x800A65C8: lw          $t0, 0x20($s3)
        ctx->r8 = MEM_W(ctx->r19, 0X20);
            goto L_800A66D4;
    }
    goto skip_3;
    // 0x800A65C8: lw          $t0, 0x20($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X20);
    skip_3:
    // 0x800A65CC: b           L_800A66F0
    // 0x800A65D0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_800A66F0;
    // 0x800A65D0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800A65D4:
    // 0x800A65D4: jal         0x800AA038
    // 0x800A65D8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800AA038(rdram, ctx);
        goto after_1;
    // 0x800A65D8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x800A65DC: sltiu       $at, $v0, 0x7
    ctx->r1 = ctx->r2 < 0X7 ? 1 : 0;
    // 0x800A65E0: beq         $at, $zero, L_800A6684
    if (ctx->r1 == 0) {
        // 0x800A65E4: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_800A6684;
    }
    // 0x800A65E4: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x800A65E8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A65EC: addu        $at, $at, $t9
    gpr jr_addend_800A65F4 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800A65F0: lw          $t9, 0x9FC($at)
    ctx->r25 = ADD32(ctx->r1, 0X9FC);
    // 0x800A65F4: jr          $t9
    // 0x800A65F8: nop

    switch (jr_addend_800A65F4 >> 2) {
        case 0: goto L_800A65FC; break;
        case 1: goto L_800A6610; break;
        case 2: goto L_800A6624; break;
        case 3: goto L_800A6638; break;
        case 4: goto L_800A664C; break;
        case 5: goto L_800A6660; break;
        case 6: goto L_800A6674; break;
        default: switch_error(__func__, 0x800A65F4, 0x800E09FC);
    }
    // 0x800A65F8: nop

L_800A65FC:
    // 0x800A65FC: lw          $t0, 0x10($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X10);
    // 0x800A6600: addu        $t1, $t0, $s1
    ctx->r9 = ADD32(ctx->r8, ctx->r17);
    // 0x800A6604: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x800A6608: b           L_800A6684
    // 0x800A660C: sw          $t2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r10;
        goto L_800A6684;
    // 0x800A660C: sw          $t2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r10;
L_800A6610:
    // 0x800A6610: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
    // 0x800A6614: addu        $t4, $t3, $s1
    ctx->r12 = ADD32(ctx->r11, ctx->r17);
    // 0x800A6618: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x800A661C: b           L_800A6684
    // 0x800A6620: sw          $t5, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r13;
        goto L_800A6684;
    // 0x800A6620: sw          $t5, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r13;
L_800A6624:
    // 0x800A6624: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x800A6628: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x800A662C: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x800A6630: b           L_800A6684
    // 0x800A6634: sw          $t8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r24;
        goto L_800A6684;
    // 0x800A6634: sw          $t8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r24;
L_800A6638:
    // 0x800A6638: lw          $t9, 0x10($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10);
    // 0x800A663C: addu        $t0, $t9, $s1
    ctx->r8 = ADD32(ctx->r25, ctx->r17);
    // 0x800A6640: addiu       $t1, $t0, 0x10
    ctx->r9 = ADD32(ctx->r8, 0X10);
    // 0x800A6644: b           L_800A6684
    // 0x800A6648: sw          $t1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r9;
        goto L_800A6684;
    // 0x800A6648: sw          $t1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r9;
L_800A664C:
    // 0x800A664C: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
    // 0x800A6650: addu        $t3, $t2, $s1
    ctx->r11 = ADD32(ctx->r10, ctx->r17);
    // 0x800A6654: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x800A6658: b           L_800A6684
    // 0x800A665C: sw          $t4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r12;
        goto L_800A6684;
    // 0x800A665C: sw          $t4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r12;
L_800A6660:
    // 0x800A6660: lw          $t5, 0x10($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X10);
    // 0x800A6664: addu        $t6, $t5, $s1
    ctx->r14 = ADD32(ctx->r13, ctx->r17);
    // 0x800A6668: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x800A666C: b           L_800A6684
    // 0x800A6670: sw          $t7, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r15;
        goto L_800A6684;
    // 0x800A6670: sw          $t7, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r15;
L_800A6674:
    // 0x800A6674: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x800A6678: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x800A667C: addiu       $t0, $t9, 0x20
    ctx->r8 = ADD32(ctx->r25, 0X20);
    // 0x800A6680: sw          $t0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r8;
L_800A6684:
    // 0x800A6684: b           L_800A66EC
    // 0x800A6688: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
        goto L_800A66EC;
    // 0x800A6688: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x800A668C: lw          $t1, 0x20($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X20);
L_800A6690:
    // 0x800A6690: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
    // 0x800A6694: lw          $t2, 0x28($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X28);
    // 0x800A6698: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x800A669C: addu        $v0, $t2, $t4
    ctx->r2 = ADD32(ctx->r10, ctx->r12);
    // 0x800A66A0: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x800A66A4: b           L_800A66EC
    // 0x800A66A8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
        goto L_800A66EC;
    // 0x800A66A8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800A66AC: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
L_800A66B0:
    // 0x800A66B0: lw          $t5, 0x2C($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X2C);
    // 0x800A66B4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800A66B8: multu       $t6, $fp
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A66BC: mflo        $t7
    ctx->r15 = lo;
    // 0x800A66C0: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x800A66C4: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x800A66C8: b           L_800A66EC
    // 0x800A66CC: sw          $t9, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r25;
        goto L_800A66EC;
    // 0x800A66CC: sw          $t9, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r25;
    // 0x800A66D0: lw          $t0, 0x20($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X20);
L_800A66D4:
    // 0x800A66D4: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
    // 0x800A66D8: lw          $t1, 0x44($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X44);
    // 0x800A66DC: sll         $t2, $t3, 3
    ctx->r10 = S32(ctx->r11 << 3);
    // 0x800A66E0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800A66E4: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x800A66E8: sw          $t4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r12;
L_800A66EC:
    // 0x800A66EC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800A66F0:
    // 0x800A66F0: bne         $s2, $s4, L_800A659C
    if (ctx->r18 != ctx->r20) {
        // 0x800A66F4: addiu       $s0, $s0, 0x24
        ctx->r16 = ADD32(ctx->r16, 0X24);
            goto L_800A659C;
    }
    // 0x800A66F4: addiu       $s0, $s0, 0x24
    ctx->r16 = ADD32(ctx->r16, 0X24);
L_800A66F8:
    // 0x800A66F8: lw          $t6, 0x14($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X14);
    // 0x800A66FC: ori         $t5, $t6, 0x1
    ctx->r13 = ctx->r14 | 0X1;
    // 0x800A6700: sw          $t5, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r13;
L_800A6704:
    // 0x800A6704: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800A6708:
    // 0x800A6708: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A670C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800A6710: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800A6714: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800A6718: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800A671C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800A6720: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800A6724: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800A6728: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800A672C: jr          $ra
    // 0x800A6730: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800A6730: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800A6734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6734: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A6738: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A673C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800A6740: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800A6744: lw          $s0, 0x1D0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X1D0);
    // 0x800A6748: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A674C: jal         0x800B3BFC
    // 0x800A6750: addiu       $a0, $a0, 0x930
    ctx->r4 = ADD32(ctx->r4, 0X930);
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x800A6750: addiu       $a0, $a0, 0x930
    ctx->r4 = ADD32(ctx->r4, 0X930);
    after_0:
    // 0x800A6754: beq         $s0, $zero, L_800A6778
    if (ctx->r16 == 0) {
        // 0x800A6758: lui         $s1, 0x800E
        ctx->r17 = S32(0X800E << 16);
            goto L_800A6778;
    }
    // 0x800A6758: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x800A675C: addiu       $s1, $s1, 0x940
    ctx->r17 = ADD32(ctx->r17, 0X940);
    // 0x800A6760: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_800A6764:
    // 0x800A6764: jal         0x800B3BFC
    // 0x800A6768: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_1;
    // 0x800A6768: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x800A676C: lw          $s0, 0xC($s0)
    ctx->r16 = MEM_W(ctx->r16, 0XC);
    // 0x800A6770: bnel        $s0, $zero, L_800A6764
    if (ctx->r16 != 0) {
        // 0x800A6774: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800A6764;
    }
    goto skip_0;
    // 0x800A6774: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
L_800A6778:
    // 0x800A6778: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A677C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800A6780: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800A6784: jr          $ra
    // 0x800A6788: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800A6788: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800A678C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A678C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A6790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A6794: lw          $t6, 0x14($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X14);
    // 0x800A6798: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800A679C: bnel        $t7, $zero, L_800A67BC
    if (ctx->r15 != 0) {
        // 0x800A67A0: lw          $v0, 0x1D0($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X1D0);
            goto L_800A67BC;
    }
    goto skip_0;
    // 0x800A67A0: lw          $v0, 0x1D0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1D0);
    skip_0:
    // 0x800A67A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A67A8: jal         0x800A652C
    // 0x800A67AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800A652C(rdram, ctx);
        goto after_0;
    // 0x800A67AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800A67B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A67B4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800A67B8: lw          $v0, 0x1D0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1D0);
L_800A67BC:
    // 0x800A67BC: bnel        $v0, $zero, L_800A67D0
    if (ctx->r2 != 0) {
        // 0x800A67C0: sw          $v0, 0xC($a1)
        MEM_W(0XC, ctx->r5) = ctx->r2;
            goto L_800A67D0;
    }
    goto skip_1;
    // 0x800A67C0: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    skip_1:
    // 0x800A67C4: b           L_800A67DC
    // 0x800A67C8: sw          $a1, 0x1D0($a0)
    MEM_W(0X1D0, ctx->r4) = ctx->r5;
        goto L_800A67DC;
    // 0x800A67C8: sw          $a1, 0x1D0($a0)
    MEM_W(0X1D0, ctx->r4) = ctx->r5;
    // 0x800A67CC: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
L_800A67D0:
    // 0x800A67D0: lw          $t8, 0x1D0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1D0);
    // 0x800A67D4: sw          $a1, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r5;
    // 0x800A67D8: sw          $a1, 0x1D0($a0)
    MEM_W(0X1D0, ctx->r4) = ctx->r5;
L_800A67DC:
    // 0x800A67DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A67E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A67E4: jr          $ra
    // 0x800A67E8: nop

    return;
    // 0x800A67E8: nop

;}
