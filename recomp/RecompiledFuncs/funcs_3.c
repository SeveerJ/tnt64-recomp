#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8004A3A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A3A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004A3A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004A3AC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A3B0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004A3B4: addiu       $a1, $a1, -0x4500
    ctx->r5 = ADD32(ctx->r5, -0X4500);
    // 0x8004A3B8: addiu       $a0, $a0, -0x4518
    ctx->r4 = ADD32(ctx->r4, -0X4518);
    // 0x8004A3BC: jal         0x800B3080
    // 0x8004A3C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x8004A3C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8004A3C4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A3C8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004A3CC: addiu       $a1, $a1, -0x44E0
    ctx->r5 = ADD32(ctx->r5, -0X44E0);
    // 0x8004A3D0: addiu       $a0, $a0, -0x44F8
    ctx->r4 = ADD32(ctx->r4, -0X44F8);
    // 0x8004A3D4: jal         0x800B3080
    // 0x8004A3D8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x8004A3D8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_1:
    // 0x8004A3DC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A3E0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004A3E4: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004A3E8: addiu       $a2, $a2, -0x44F8
    ctx->r6 = ADD32(ctx->r6, -0X44F8);
    // 0x8004A3EC: addiu       $a1, $a1, -0x21D8
    ctx->r5 = ADD32(ctx->r5, -0X21D8);
    // 0x8004A3F0: jal         0x8005ED58
    // 0x8004A3F4: addiu       $a0, $a0, -0x4460
    ctx->r4 = ADD32(ctx->r4, -0X4460);
    func_8005ED58(rdram, ctx);
        goto after_2;
    // 0x8004A3F4: addiu       $a0, $a0, -0x4460
    ctx->r4 = ADD32(ctx->r4, -0X4460);
    after_2:
    // 0x8004A3F8: addiu       $t6, $zero, 0x190
    ctx->r14 = ADD32(0, 0X190);
    // 0x8004A3FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A400: sw          $t6, -0x2B0($at)
    MEM_W(-0X2B0, ctx->r1) = ctx->r14;
    // 0x8004A404: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A408: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x8004A40C: sw          $t7, -0x2AC($at)
    MEM_W(-0X2AC, ctx->r1) = ctx->r15;
    // 0x8004A410: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A414: sw          $zero, -0x2A0($at)
    MEM_W(-0X2A0, ctx->r1) = 0;
    // 0x8004A418: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A41C: sw          $zero, -0x29C($at)
    MEM_W(-0X29C, ctx->r1) = 0;
    // 0x8004A420: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A424: addiu       $t8, $zero, 0x190
    ctx->r24 = ADD32(0, 0X190);
    // 0x8004A428: sw          $t8, -0x298($at)
    MEM_W(-0X298, ctx->r1) = ctx->r24;
    // 0x8004A42C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A430: addiu       $t9, $zero, 0x12C
    ctx->r25 = ADD32(0, 0X12C);
    // 0x8004A434: sw          $t9, -0x294($at)
    MEM_W(-0X294, ctx->r1) = ctx->r25;
    // 0x8004A438: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    // 0x8004A43C: jal         0x8006110C
    // 0x8004A440: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    func_8006110C(rdram, ctx);
        goto after_3;
    // 0x8004A440: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    after_3:
    // 0x8004A444: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8004A448: lui         $t1, 0x8035
    ctx->r9 = S32(0X8035 << 16);
    // 0x8004A44C: addiu       $t1, $t1, -0x5300
    ctx->r9 = ADD32(ctx->r9, -0X5300);
    // 0x8004A450: addiu       $t0, $t0, -0x830
    ctx->r8 = ADD32(ctx->r8, -0X830);
    // 0x8004A454: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8004A458: jal         0x8007DFC0
    // 0x8004A45C: subu        $a1, $t1, $t0
    ctx->r5 = SUB32(ctx->r9, ctx->r8);
    func_8007DFC0(rdram, ctx);
        goto after_4;
    // 0x8004A45C: subu        $a1, $t1, $t0
    ctx->r5 = SUB32(ctx->r9, ctx->r8);
    after_4:
    // 0x8004A460: lui         $a0, 0xB
    ctx->r4 = S32(0XB << 16);
    // 0x8004A464: lui         $a1, 0xB
    ctx->r5 = S32(0XB << 16);
    // 0x8004A468: addiu       $a1, $a1, -0x2520
    ctx->r5 = ADD32(ctx->r5, -0X2520);
    // 0x8004A46C: jal         0x800A9E44
    // 0x8004A470: addiu       $a0, $a0, -0x7E70
    ctx->r4 = ADD32(ctx->r4, -0X7E70);
    func_800A9E44(rdram, ctx);
        goto after_5;
    // 0x8004A470: addiu       $a0, $a0, -0x7E70
    ctx->r4 = ADD32(ctx->r4, -0X7E70);
    after_5:
    // 0x8004A474: jal         0x80053538
    // 0x8004A478: nop

    func_80053538(rdram, ctx);
        goto after_6;
    // 0x8004A478: nop

    after_6:
    // 0x8004A47C: jal         0x80053500
    // 0x8004A480: nop

    func_80053500(rdram, ctx);
        goto after_7;
    // 0x8004A480: nop

    after_7:
    // 0x8004A484: jal         0x800484B4
    // 0x8004A488: nop

    func_800484B4(rdram, ctx);
        goto after_8;
    // 0x8004A488: nop

    after_8:
    // 0x8004A48C: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
L_8004A490:
    // 0x8004A490: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x8004A494: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8004A498: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8004A49C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8004A4A0: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8004A4A4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8004A4A8: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8004A4AC: addiu       $t4, $t4, -0x10D0
    ctx->r12 = ADD32(ctx->r12, -0X10D0);
    // 0x8004A4B0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8004A4B4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8004A4B8: sw          $t5, -0xDF0($at)
    MEM_W(-0XDF0, ctx->r1) = ctx->r13;
    // 0x8004A4BC: jal         0x800A34A8
    // 0x8004A4C0: addiu       $a0, $t5, 0x4
    ctx->r4 = ADD32(ctx->r13, 0X4);
    func_800A34A8(rdram, ctx);
        goto after_9;
    // 0x8004A4C0: addiu       $a0, $t5, 0x4
    ctx->r4 = ADD32(ctx->r13, 0X4);
    after_9:
    // 0x8004A4C4: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x8004A4C8: jal         0x800535A0
    // 0x8004A4CC: nop

    func_800535A0(rdram, ctx);
        goto after_10;
    // 0x8004A4CC: nop

    after_10:
    // 0x8004A4D0: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x8004A4D4: nop

    // 0x8004A4D8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8004A4DC: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8004A4E0: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8004A4E4: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x8004A4E8: bne         $at, $zero, L_8004A490
    if (ctx->r1 != 0) {
        // 0x8004A4EC: sh          $t7, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r15;
            goto L_8004A490;
    }
    // 0x8004A4EC: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    // 0x8004A4F0: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
L_8004A4F4:
    // 0x8004A4F4: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
    // 0x8004A4F8: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x8004A4FC: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x8004A500: subu        $t0, $t0, $t1
    ctx->r8 = SUB32(ctx->r8, ctx->r9);
    // 0x8004A504: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8004A508: subu        $t0, $t0, $t1
    ctx->r8 = SUB32(ctx->r8, ctx->r9);
    // 0x8004A50C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8004A510: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8004A514: addiu       $t3, $t3, -0x10D0
    ctx->r11 = ADD32(ctx->r11, -0X10D0);
    // 0x8004A518: addiu       $t2, $t0, 0x4
    ctx->r10 = ADD32(ctx->r8, 0X4);
    // 0x8004A51C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004A520: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x8004A524: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8004A528: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8004A52C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8004A530: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8004A534: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8004A538: sw          $t4, -0x21D0($at)
    MEM_W(-0X21D0, ctx->r1) = ctx->r12;
    // 0x8004A53C: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x8004A540: bne         $at, $zero, L_8004A4F4
    if (ctx->r1 != 0) {
        // 0x8004A544: sh          $t7, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r15;
            goto L_8004A4F4;
    }
    // 0x8004A544: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    // 0x8004A548: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A54C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004A550: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004A554: addiu       $a2, $a2, -0x21D0
    ctx->r6 = ADD32(ctx->r6, -0X21D0);
    // 0x8004A558: addiu       $a1, $a1, -0x4460
    ctx->r5 = ADD32(ctx->r5, -0X4460);
    // 0x8004A55C: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x8004A560: jal         0x8003ADD0
    // 0x8004A564: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8003ADD0(rdram, ctx);
        goto after_11;
    // 0x8004A564: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_11:
    // 0x8004A568: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A56C: jal         0x8003B29C
    // 0x8004A570: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003B29C(rdram, ctx);
        goto after_12;
    // 0x8004A570: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_12:
    // 0x8004A574: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A578: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x8004A57C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8004A580: jal         0x8003DB60
    // 0x8004A584: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8003DB60(rdram, ctx);
        goto after_13;
    // 0x8004A584: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_13:
    // 0x8004A588: jal         0x80084700
    // 0x8004A58C: nop

    func_80084700(rdram, ctx);
        goto after_14;
    // 0x8004A58C: nop

    after_14:
    // 0x8004A590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004A594: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004A598: jr          $ra
    // 0x8004A59C: nop

    return;
    // 0x8004A59C: nop

;}
RECOMP_FUNC void func_8004A5A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A5A0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8004A5A4: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8004A5A8: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x8004A5AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004A5B0: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x8004A5B4: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x8004A5B8: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x8004A5BC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004A5C0: addiu       $a1, $a1, -0x3F70
    ctx->r5 = ADD32(ctx->r5, -0X3F70);
    // 0x8004A5C4: jal         0x800B62D4
    // 0x8004A5C8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x8004A5C8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x8004A5CC: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8004A5D0: jal         0x80083560
    // 0x8004A5D4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    Fault_Assert(rdram, ctx);
        goto after_1;
    // 0x8004A5D4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x8004A5D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004A5DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8004A5E0: jr          $ra
    // 0x8004A5E4: nop

    return;
    // 0x8004A5E4: nop

    // 0x8004A5E8: nop

    // 0x8004A5EC: nop

;}
RECOMP_FUNC void func_8004A5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A5F0: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x8004A5F4: lw          $t6, 0x300($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X300);
    // 0x8004A5F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004A5FC: bne         $t6, $zero, L_8004A624
    if (ctx->r14 != 0) {
        // 0x8004A600: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8004A624;
    }
    // 0x8004A600: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004A604: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x8004A608: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A60C: sb          $t7, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r15;
    // 0x8004A610: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A614: sh          $zero, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = 0;
    // 0x8004A618: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A61C: b           L_8004ABD8
    // 0x8004A620: sw          $zero, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = 0;
        goto L_8004ABD8;
    // 0x8004A620: sw          $zero, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = 0;
L_8004A624:
    // 0x8004A624: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004A628: lw          $a0, -0xDF0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XDF0);
    // 0x8004A62C: jal         0x800A3534
    // 0x8004A630: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800A3534(rdram, ctx);
        goto after_0;
    // 0x8004A630: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x8004A634: beq         $v0, $zero, L_8004A664
    if (ctx->r2 == 0) {
        // 0x8004A638: nop
    
            goto L_8004A664;
    }
    // 0x8004A638: nop

L_8004A63C:
    // 0x8004A63C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004A640: lw          $a0, -0xDF0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XDF0);
    // 0x8004A644: jal         0x800A33E4
    // 0x8004A648: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800A33E4(rdram, ctx);
        goto after_1;
    // 0x8004A648: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x8004A64C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004A650: lw          $a0, -0xDF0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XDF0);
    // 0x8004A654: jal         0x800A3534
    // 0x8004A658: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800A3534(rdram, ctx);
        goto after_2;
    // 0x8004A658: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_2:
    // 0x8004A65C: bne         $v0, $zero, L_8004A63C
    if (ctx->r2 != 0) {
        // 0x8004A660: nop
    
            goto L_8004A63C;
    }
    // 0x8004A660: nop

L_8004A664:
    // 0x8004A664: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8004A668: lw          $t8, -0xDF0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0XDF0);
    // 0x8004A66C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8004A670: lw          $t9, 0x18($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X18);
    // 0x8004A674: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004A678: sw          $t9, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->r25;
    // 0x8004A67C: lw          $t0, -0xDF0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0XDF0);
    // 0x8004A680: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8004A684: lw          $t3, 0x1C($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X1C);
    // 0x8004A688: lw          $t1, 0x20($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X20);
    // 0x8004A68C: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8004A690: xor         $t2, $t1, $at
    ctx->r10 = ctx->r9 ^ ctx->r1;
    // 0x8004A694: and         $t5, $t2, $t4
    ctx->r13 = ctx->r10 & ctx->r12;
    // 0x8004A698: sw          $t5, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r13;
    // 0x8004A69C: lw          $t6, -0xDF0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XDF0);
    // 0x8004A6A0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8004A6A4: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x8004A6A8: nop

    // 0x8004A6AC: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x8004A6B0: nop

    // 0x8004A6B4: sw          $t9, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->r25;
    // 0x8004A6B8: lw          $t8, -0x1AC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1AC);
    // 0x8004A6BC: nop

    // 0x8004A6C0: beq         $t8, $zero, L_8004ABD8
    if (ctx->r24 == 0) {
        // 0x8004A6C4: nop
    
            goto L_8004ABD8;
    }
    // 0x8004A6C4: nop

    // 0x8004A6C8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004A6CC: lbu         $t1, 0x1A0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X1A0);
    // 0x8004A6D0: nop

    // 0x8004A6D4: andi        $t3, $t1, 0x1
    ctx->r11 = ctx->r9 & 0X1;
    // 0x8004A6D8: bne         $t3, $zero, L_8004A73C
    if (ctx->r11 != 0) {
        // 0x8004A6DC: nop
    
            goto L_8004A73C;
    }
    // 0x8004A6DC: nop

    // 0x8004A6E0: jal         0x80061124
    // 0x8004A6E4: nop

    func_80061124(rdram, ctx);
        goto after_3;
    // 0x8004A6E4: nop

    after_3:
    // 0x8004A6E8: jal         0x80060D58
    // 0x8004A6EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80060D58(rdram, ctx);
        goto after_4;
    // 0x8004A6EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x8004A6F0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8004A6F4: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    // 0x8004A6F8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x8004A6FC: jal         0x80084E20
    // 0x8004A700: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80084E20(rdram, ctx);
        goto after_5;
    // 0x8004A700: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8004A704: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004A708: jal         0x80087784
    // 0x8004A70C: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80087784(rdram, ctx);
        goto after_6;
    // 0x8004A70C: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_6:
    // 0x8004A710: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A714: sb          $zero, -0x118($at)
    MEM_B(-0X118, ctx->r1) = 0;
    // 0x8004A718: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A71C: sw          $zero, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = 0;
    // 0x8004A720: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    // 0x8004A724: jal         0x80061134
    // 0x8004A728: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    func_80061134(rdram, ctx);
        goto after_7;
    // 0x8004A728: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    after_7:
    // 0x8004A72C: jal         0x80060D58
    // 0x8004A730: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80060D58(rdram, ctx);
        goto after_8;
    // 0x8004A730: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x8004A734: b           L_8004ABD8
    // 0x8004A738: nop

        goto L_8004ABD8;
    // 0x8004A738: nop

L_8004A73C:
    // 0x8004A73C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8004A740: lw          $t4, -0xDF0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0XDF0);
    // 0x8004A744: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8004A748: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x8004A74C: lbu         $t2, -0x1A4($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X1A4);
    // 0x8004A750: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8004A754: sllv        $t7, $t0, $t5
    ctx->r15 = S32(ctx->r8 << (ctx->r13 & 31));
    // 0x8004A758: and         $t9, $t2, $t7
    ctx->r25 = ctx->r10 & ctx->r15;
    // 0x8004A75C: beq         $t9, $zero, L_8004ABAC
    if (ctx->r25 == 0) {
        // 0x8004A760: lui         $at, 0x8011
        ctx->r1 = S32(0X8011 << 16);
            goto L_8004ABAC;
    }
    // 0x8004A760: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004A764: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A768: sw          $t5, 0x584($at)
    MEM_W(0X584, ctx->r1) = ctx->r13;
    // 0x8004A76C: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x8004A770: jal         0x8003B654
    // 0x8004A774: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_8003B654(rdram, ctx);
        goto after_9;
    // 0x8004A774: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_9:
    // 0x8004A778: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004A77C: lw          $t8, 0x584($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X584);
    // 0x8004A780: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004A784: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8004A788: lbu         $t6, -0x1A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1A4);
    // 0x8004A78C: sllv        $t3, $t1, $t8
    ctx->r11 = S32(ctx->r9 << (ctx->r24 & 31));
    // 0x8004A790: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004A794: nor         $t4, $t3, $zero
    ctx->r12 = ~(ctx->r11 | 0);
    // 0x8004A798: sw          $v0, 0x588($at)
    MEM_W(0X588, ctx->r1) = ctx->r2;
    // 0x8004A79C: and         $t0, $t6, $t4
    ctx->r8 = ctx->r14 & ctx->r12;
    // 0x8004A7A0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A7A4: andi        $t2, $t0, 0xFF
    ctx->r10 = ctx->r8 & 0XFF;
    // 0x8004A7A8: bne         $t2, $zero, L_8004A7BC
    if (ctx->r10 != 0) {
        // 0x8004A7AC: sb          $t0, -0x1A4($at)
        MEM_B(-0X1A4, ctx->r1) = ctx->r8;
            goto L_8004A7BC;
    }
    // 0x8004A7AC: sb          $t0, -0x1A4($at)
    MEM_B(-0X1A4, ctx->r1) = ctx->r8;
    // 0x8004A7B0: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x8004A7B4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A7B8: sw          $t7, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r15;
L_8004A7BC:
    // 0x8004A7BC: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004A7C0: lw          $t9, 0x588($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X588);
    // 0x8004A7C4: nop

    // 0x8004A7C8: andi        $t5, $t9, 0x2
    ctx->r13 = ctx->r25 & 0X2;
    // 0x8004A7CC: beq         $t5, $zero, L_8004A82C
    if (ctx->r13 == 0) {
        // 0x8004A7D0: nop
    
            goto L_8004A82C;
    }
    // 0x8004A7D0: nop

    // 0x8004A7D4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A7D8: jal         0x8003B5D0
    // 0x8004A7DC: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003B5D0(rdram, ctx);
        goto after_10;
    // 0x8004A7DC: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_10:
    // 0x8004A7E0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A7E4: jal         0x8003B5D0
    // 0x8004A7E8: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003B5D0(rdram, ctx);
        goto after_11;
    // 0x8004A7E8: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_11:
    // 0x8004A7EC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A7F0: jal         0x8003B5D0
    // 0x8004A7F4: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003B5D0(rdram, ctx);
        goto after_12;
    // 0x8004A7F4: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_12:
    // 0x8004A7F8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004A7FC: lw          $a1, 0x584($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X584);
    // 0x8004A800: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A804: jal         0x8003B654
    // 0x8004A808: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003B654(rdram, ctx);
        goto after_13;
    // 0x8004A808: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_13:
    // 0x8004A80C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004A810: sw          $v0, 0x588($at)
    MEM_W(0X588, ctx->r1) = ctx->r2;
    // 0x8004A814: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004A818: lw          $t1, 0x588($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X588);
    // 0x8004A81C: nop

    // 0x8004A820: andi        $t8, $t1, 0x2
    ctx->r24 = ctx->r9 & 0X2;
    // 0x8004A824: bne         $t8, $zero, L_8004ABD8
    if (ctx->r24 != 0) {
        // 0x8004A828: nop
    
            goto L_8004ABD8;
    }
    // 0x8004A828: nop

L_8004A82C:
    // 0x8004A82C: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004A830: lw          $t3, 0x588($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X588);
    // 0x8004A834: nop

    // 0x8004A838: andi        $t6, $t3, 0x1
    ctx->r14 = ctx->r11 & 0X1;
    // 0x8004A83C: beq         $t6, $zero, L_8004AA00
    if (ctx->r14 == 0) {
        // 0x8004A840: nop
    
            goto L_8004AA00;
    }
    // 0x8004A840: nop

    // 0x8004A844: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x8004A848: bne         $t4, $zero, L_8004AA00
    if (ctx->r12 != 0) {
        // 0x8004A84C: nop
    
            goto L_8004AA00;
    }
    // 0x8004A84C: nop

    // 0x8004A850: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004A854: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A858: lw          $a1, 0x584($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X584);
    // 0x8004A85C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A860: sb          $zero, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = 0;
    // 0x8004A864: jal         0x8003B684
    // 0x8004A868: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003B684(rdram, ctx);
        goto after_14;
    // 0x8004A868: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_14:
    // 0x8004A86C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A870: sb          $v0, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = ctx->r2;
    // 0x8004A874: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8004A878: lbu         $t0, -0x1B0($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1B0);
    // 0x8004A87C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8004A880: sra         $t2, $t0, 4
    ctx->r10 = S32(SIGNED(ctx->r8) >> 4);
    // 0x8004A884: andi        $t7, $t2, 0xF
    ctx->r15 = ctx->r10 & 0XF;
    // 0x8004A888: beq         $t7, $at, L_8004A8A0
    if (ctx->r15 == ctx->r1) {
        // 0x8004A88C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8004A8A0;
    }
    // 0x8004A88C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8004A890: beq         $t7, $at, L_8004A8A0
    if (ctx->r15 == ctx->r1) {
        // 0x8004A894: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8004A8A0;
    }
    // 0x8004A894: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8004A898: bne         $t7, $at, L_8004A93C
    if (ctx->r15 != ctx->r1) {
        // 0x8004A89C: nop
    
            goto L_8004A93C;
    }
    // 0x8004A89C: nop

L_8004A8A0:
    // 0x8004A8A0: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004A8A4: lw          $t5, 0x584($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X584);
    // 0x8004A8A8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004A8AC: lhu         $t9, 0x3EE($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X3EE);
    // 0x8004A8B0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8004A8B4: sllv        $t8, $t1, $t5
    ctx->r24 = S32(ctx->r9 << (ctx->r13 & 31));
    // 0x8004A8B8: and         $t6, $t9, $t8
    ctx->r14 = ctx->r25 & ctx->r24;
    // 0x8004A8BC: beq         $t6, $zero, L_8004A8CC
    if (ctx->r14 == 0) {
        // 0x8004A8C0: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_8004A8CC;
    }
    // 0x8004A8C0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A8C4: b           L_8004AA00
    // 0x8004A8C8: sb          $zero, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = 0;
        goto L_8004AA00;
    // 0x8004A8C8: sb          $zero, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = 0;
L_8004A8CC:
    // 0x8004A8CC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004A8D0: lw          $a1, 0x584($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X584);
    // 0x8004A8D4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A8D8: jal         0x8003BC3C
    // 0x8004A8DC: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003BC3C(rdram, ctx);
        goto after_15;
    // 0x8004A8DC: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_15:
    // 0x8004A8E0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8004A8E4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8004A8E8: nop

    // 0x8004A8EC: bne         $t3, $zero, L_8004A8FC
    if (ctx->r11 != 0) {
        // 0x8004A8F0: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_8004A8FC;
    }
    // 0x8004A8F0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A8F4: b           L_8004AA00
    // 0x8004A8F8: sb          $zero, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = 0;
        goto L_8004AA00;
    // 0x8004A8F8: sb          $zero, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = 0;
L_8004A8FC:
    // 0x8004A8FC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004A900: lw          $a1, 0x584($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X584);
    // 0x8004A904: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A908: jal         0x8003B684
    // 0x8004A90C: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003B684(rdram, ctx);
        goto after_16;
    // 0x8004A90C: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_16:
    // 0x8004A910: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A914: sb          $v0, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = ctx->r2;
    // 0x8004A918: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A91C: addiu       $t4, $zero, 0xE
    ctx->r12 = ADD32(0, 0XE);
    // 0x8004A920: sb          $t4, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r12;
    // 0x8004A924: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A928: sw          $zero, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = 0;
    // 0x8004A92C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A930: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8004A934: b           L_8004ABD8
    // 0x8004A938: sh          $t0, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r8;
        goto L_8004ABD8;
    // 0x8004A938: sh          $t0, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r8;
L_8004A93C:
    // 0x8004A93C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004A940: lw          $a1, 0x584($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X584);
    // 0x8004A944: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A948: jal         0x8003BA0C
    // 0x8004A94C: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003BA0C(rdram, ctx);
        goto after_17;
    // 0x8004A94C: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_17:
    // 0x8004A950: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8004A954: slti        $at, $t2, 0x10
    ctx->r1 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x8004A958: beq         $at, $zero, L_8004A984
    if (ctx->r1 == 0) {
        // 0x8004A95C: nop
    
            goto L_8004A984;
    }
    // 0x8004A95C: nop

    // 0x8004A960: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004A964: lw          $a2, 0x584($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X584);
    // 0x8004A968: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004A96C: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x8004A970: jal         0x8003BBB0
    // 0x8004A974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003BBB0(rdram, ctx);
        goto after_18;
    // 0x8004A974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x8004A978: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x8004A97C: beq         $at, $zero, L_8004A9F8
    if (ctx->r1 == 0) {
        // 0x8004A980: nop
    
            goto L_8004A9F8;
    }
    // 0x8004A980: nop

L_8004A984:
    // 0x8004A984: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004A988: lw          $t7, 0x584($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X584);
    // 0x8004A98C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8004A990: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x8004A994: subu        $t1, $t1, $t7
    ctx->r9 = SUB32(ctx->r9, ctx->r15);
    // 0x8004A998: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8004A99C: subu        $t1, $t1, $t7
    ctx->r9 = SUB32(ctx->r9, ctx->r15);
    // 0x8004A9A0: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8004A9A4: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x8004A9A8: lw          $t5, -0x10AC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X10AC);
    // 0x8004A9AC: nop

    // 0x8004A9B0: andi        $t9, $t5, 0x1000
    ctx->r25 = ctx->r13 & 0X1000;
    // 0x8004A9B4: beq         $t9, $zero, L_8004A9CC
    if (ctx->r25 == 0) {
        // 0x8004A9B8: nop
    
            goto L_8004A9CC;
    }
    // 0x8004A9B8: nop

    // 0x8004A9BC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8004A9C0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A9C4: b           L_8004A9D4
    // 0x8004A9C8: sb          $t8, -0x1A8($at)
    MEM_B(-0X1A8, ctx->r1) = ctx->r24;
        goto L_8004A9D4;
    // 0x8004A9C8: sb          $t8, -0x1A8($at)
    MEM_B(-0X1A8, ctx->r1) = ctx->r24;
L_8004A9CC:
    // 0x8004A9CC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A9D0: sb          $zero, -0x1A8($at)
    MEM_B(-0X1A8, ctx->r1) = 0;
L_8004A9D4:
    // 0x8004A9D4: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x8004A9D8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A9DC: sb          $t6, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r14;
    // 0x8004A9E0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A9E4: sw          $zero, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = 0;
    // 0x8004A9E8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A9EC: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8004A9F0: b           L_8004ABD8
    // 0x8004A9F4: sh          $t3, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r11;
        goto L_8004ABD8;
    // 0x8004A9F4: sh          $t3, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r11;
L_8004A9F8:
    // 0x8004A9F8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004A9FC: sb          $zero, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = 0;
L_8004AA00:
    // 0x8004AA00: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004AA04: lw          $t4, 0x584($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X584);
    // 0x8004AA08: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8004AA0C: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x8004AA10: subu        $t0, $t0, $t4
    ctx->r8 = SUB32(ctx->r8, ctx->r12);
    // 0x8004AA14: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8004AA18: subu        $t0, $t0, $t4
    ctx->r8 = SUB32(ctx->r8, ctx->r12);
    // 0x8004AA1C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8004AA20: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8004AA24: lw          $t2, -0x10AC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X10AC);
    // 0x8004AA28: nop

    // 0x8004AA2C: andi        $t7, $t2, 0x1000
    ctx->r15 = ctx->r10 & 0X1000;
    // 0x8004AA30: bne         $t7, $zero, L_8004AA4C
    if (ctx->r15 != 0) {
        // 0x8004AA34: nop
    
            goto L_8004AA4C;
    }
    // 0x8004AA34: nop

    // 0x8004AA38: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8004AA3C: lbu         $t1, -0x1B0($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1B0);
    // 0x8004AA40: nop

    // 0x8004AA44: beq         $t1, $zero, L_8004ABAC
    if (ctx->r9 == 0) {
        // 0x8004AA48: nop
    
            goto L_8004ABAC;
    }
    // 0x8004AA48: nop

L_8004AA4C:
    // 0x8004AA4C: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004AA50: lw          $t5, 0x584($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X584);
    // 0x8004AA54: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8004AA58: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x8004AA5C: subu        $t9, $t9, $t5
    ctx->r25 = SUB32(ctx->r25, ctx->r13);
    // 0x8004AA60: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8004AA64: subu        $t9, $t9, $t5
    ctx->r25 = SUB32(ctx->r25, ctx->r13);
    // 0x8004AA68: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8004AA6C: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x8004AA70: lw          $t8, -0x10AC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X10AC);
    // 0x8004AA74: nop

    // 0x8004AA78: andi        $t6, $t8, 0x4000
    ctx->r14 = ctx->r24 & 0X4000;
    // 0x8004AA7C: bne         $t6, $zero, L_8004ABD8
    if (ctx->r14 != 0) {
        // 0x8004AA80: nop
    
            goto L_8004ABD8;
    }
    // 0x8004AA80: nop

    // 0x8004AA84: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8004AA88: lw          $t4, -0xDF0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0XDF0);
    // 0x8004AA8C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8004AA90: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AA94: sb          $t3, -0x1A8($at)
    MEM_B(-0X1A8, ctx->r1) = ctx->r11;
    // 0x8004AA98: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x8004AA9C: lw          $t2, 0x300($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X300);
    // 0x8004AAA0: lh          $t0, 0x0($t4)
    ctx->r8 = MEM_H(ctx->r12, 0X0);
    // 0x8004AAA4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004AAA8: bne         $t2, $zero, L_8004AAC8
    if (ctx->r10 != 0) {
        // 0x8004AAAC: sw          $t0, 0x584($at)
        MEM_W(0X584, ctx->r1) = ctx->r8;
            goto L_8004AAC8;
    }
    // 0x8004AAAC: sw          $t0, 0x584($at)
    MEM_W(0X584, ctx->r1) = ctx->r8;
    // 0x8004AAB0: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x8004AAB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AAB8: sb          $t7, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r15;
    // 0x8004AABC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AAC0: b           L_8004ABD8
    // 0x8004AAC4: sh          $zero, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = 0;
        goto L_8004ABD8;
    // 0x8004AAC4: sh          $zero, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = 0;
L_8004AAC8:
    // 0x8004AAC8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004AACC: lw          $t1, 0x588($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X588);
    // 0x8004AAD0: nop

    // 0x8004AAD4: andi        $t5, $t1, 0x1
    ctx->r13 = ctx->r9 & 0X1;
    // 0x8004AAD8: beq         $t5, $zero, L_8004AB9C
    if (ctx->r13 == 0) {
        // 0x8004AADC: nop
    
            goto L_8004AB9C;
    }
    // 0x8004AADC: nop

    // 0x8004AAE0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004AAE4: lw          $a1, 0x584($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X584);
    // 0x8004AAE8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004AAEC: jal         0x8003B684
    // 0x8004AAF0: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003B684(rdram, ctx);
        goto after_19;
    // 0x8004AAF0: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_19:
    // 0x8004AAF4: sra         $t9, $v0, 4
    ctx->r25 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8004AAF8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004AAFC: sw          $t9, 0x588($at)
    MEM_W(0X588, ctx->r1) = ctx->r25;
    // 0x8004AB00: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004AB04: lw          $t8, 0x588($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X588);
    // 0x8004AB08: nop

    // 0x8004AB0C: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x8004AB10: beq         $t6, $zero, L_8004AB88
    if (ctx->r14 == 0) {
        // 0x8004AB14: nop
    
            goto L_8004AB88;
    }
    // 0x8004AB14: nop

    // 0x8004AB18: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004AB1C: lw          $a1, 0x584($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X584);
    // 0x8004AB20: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004AB24: jal         0x8003BC3C
    // 0x8004AB28: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003BC3C(rdram, ctx);
        goto after_20;
    // 0x8004AB28: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_20:
    // 0x8004AB2C: bne         $v0, $zero, L_8004AB4C
    if (ctx->r2 != 0) {
        // 0x8004AB30: nop
    
            goto L_8004AB4C;
    }
    // 0x8004AB30: nop

    // 0x8004AB34: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8004AB38: lw          $t3, -0x1AC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1AC);
    // 0x8004AB3C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AB40: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8004AB44: b           L_8004ABD8
    // 0x8004AB48: sw          $t4, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r12;
        goto L_8004ABD8;
    // 0x8004AB48: sw          $t4, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r12;
L_8004AB4C:
    // 0x8004AB4C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004AB50: lw          $t2, 0x584($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X584);
    // 0x8004AB54: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004AB58: lhu         $t0, 0x3EE($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X3EE);
    // 0x8004AB5C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8004AB60: sllv        $t1, $t7, $t2
    ctx->r9 = S32(ctx->r15 << (ctx->r10 & 31));
    // 0x8004AB64: and         $t5, $t0, $t1
    ctx->r13 = ctx->r8 & ctx->r9;
    // 0x8004AB68: beq         $t5, $zero, L_8004ABD8
    if (ctx->r13 == 0) {
        // 0x8004AB6C: nop
    
            goto L_8004ABD8;
    }
    // 0x8004AB6C: nop

    // 0x8004AB70: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8004AB74: lw          $t9, -0x1AC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1AC);
    // 0x8004AB78: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AB7C: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x8004AB80: b           L_8004ABD8
    // 0x8004AB84: sw          $t8, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r24;
        goto L_8004ABD8;
    // 0x8004AB84: sw          $t8, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r24;
L_8004AB88:
    // 0x8004AB88: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x8004AB8C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AB90: sb          $t6, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r14;
    // 0x8004AB94: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AB98: sw          $zero, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = 0;
L_8004AB9C:
    // 0x8004AB9C: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8004ABA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004ABA4: b           L_8004ABD8
    // 0x8004ABA8: sh          $t3, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r11;
        goto L_8004ABD8;
    // 0x8004ABA8: sh          $t3, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r11;
L_8004ABAC:
    // 0x8004ABAC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004ABB0: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8004ABB4: lw          $t4, -0x1AC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1AC);
    // 0x8004ABB8: sb          $zero, -0x1A8($at)
    MEM_B(-0X1A8, ctx->r1) = 0;
    // 0x8004ABBC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8004ABC0: bne         $t4, $at, L_8004ABD8
    if (ctx->r12 != ctx->r1) {
        // 0x8004ABC4: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_8004ABD8;
    }
    // 0x8004ABC4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004ABC8: sw          $zero, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = 0;
    // 0x8004ABCC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004ABD0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8004ABD4: sb          $t7, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r15;
L_8004ABD8:
    // 0x8004ABD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004ABDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004ABE0: jr          $ra
    // 0x8004ABE4: nop

    return;
    // 0x8004ABE4: nop

;}
RECOMP_FUNC void func_8004ABE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004ABE8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004ABEC: lw          $t6, -0x15C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X15C);
    // 0x8004ABF0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004ABF4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8004ABF8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8004ABFC: bgez        $t7, L_8004AC10
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8004AC00: sw          $t7, -0x15C($at)
        MEM_W(-0X15C, ctx->r1) = ctx->r15;
            goto L_8004AC10;
    }
    // 0x8004AC00: sw          $t7, -0x15C($at)
    MEM_W(-0X15C, ctx->r1) = ctx->r15;
    // 0x8004AC04: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x8004AC08: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AC0C: sw          $t8, -0x15C($at)
    MEM_W(-0X15C, ctx->r1) = ctx->r24;
L_8004AC10:
    // 0x8004AC10: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8004AC14: lw          $t9, -0x15C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X15C);
    // 0x8004AC18: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004AC1C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8004AC20: lbu         $t0, 0x9B0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X9B0);
    // 0x8004AC24: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8004AC28: bne         $t0, $at, L_8004ACA8
    if (ctx->r8 != ctx->r1) {
        // 0x8004AC2C: nop
    
            goto L_8004ACA8;
    }
    // 0x8004AC2C: nop

L_8004AC30:
    // 0x8004AC30: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8004AC34: nop

    // 0x8004AC38: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8004AC3C: slti        $at, $t2, 0x20
    ctx->r1 = SIGNED(ctx->r10) < 0X20 ? 1 : 0;
    // 0x8004AC40: bne         $at, $zero, L_8004AC64
    if (ctx->r1 != 0) {
        // 0x8004AC44: sw          $t2, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r10;
            goto L_8004AC64;
    }
    // 0x8004AC44: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x8004AC48: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004AC4C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AC50: sw          $t3, -0x15C($at)
    MEM_W(-0X15C, ctx->r1) = ctx->r11;
    // 0x8004AC54: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AC58: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8004AC5C: b           L_8004ACA8
    // 0x8004AC60: sw          $t4, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r12;
        goto L_8004ACA8;
    // 0x8004AC60: sw          $t4, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r12;
L_8004AC64:
    // 0x8004AC64: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8004AC68: lw          $t5, -0x15C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X15C);
    // 0x8004AC6C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AC70: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x8004AC74: bgez        $t6, L_8004AC88
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8004AC78: sw          $t6, -0x15C($at)
        MEM_W(-0X15C, ctx->r1) = ctx->r14;
            goto L_8004AC88;
    }
    // 0x8004AC78: sw          $t6, -0x15C($at)
    MEM_W(-0X15C, ctx->r1) = ctx->r14;
    // 0x8004AC7C: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x8004AC80: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AC84: sw          $t7, -0x15C($at)
    MEM_W(-0X15C, ctx->r1) = ctx->r15;
L_8004AC88:
    // 0x8004AC88: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8004AC8C: lw          $t8, -0x15C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X15C);
    // 0x8004AC90: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004AC94: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8004AC98: lbu         $t9, 0x9B0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X9B0);
    // 0x8004AC9C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8004ACA0: beq         $t9, $at, L_8004AC30
    if (ctx->r25 == ctx->r1) {
        // 0x8004ACA4: nop
    
            goto L_8004AC30;
    }
    // 0x8004ACA4: nop

L_8004ACA8:
    // 0x8004ACA8: jr          $ra
    // 0x8004ACAC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8004ACAC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8004ACB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004ACB0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004ACB4: lw          $t6, -0x15C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X15C);
    // 0x8004ACB8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004ACBC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8004ACC0: sw          $t7, -0x15C($at)
    MEM_W(-0X15C, ctx->r1) = ctx->r15;
    // 0x8004ACC4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8004ACC8: slti        $at, $t7, 0x10
    ctx->r1 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x8004ACCC: bne         $at, $zero, L_8004ACDC
    if (ctx->r1 != 0) {
        // 0x8004ACD0: sw          $zero, 0x4($sp)
        MEM_W(0X4, ctx->r29) = 0;
            goto L_8004ACDC;
    }
    // 0x8004ACD0: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x8004ACD4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004ACD8: sw          $zero, -0x15C($at)
    MEM_W(-0X15C, ctx->r1) = 0;
L_8004ACDC:
    // 0x8004ACDC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8004ACE0: lw          $t8, -0x15C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X15C);
    // 0x8004ACE4: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004ACE8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8004ACEC: lbu         $t9, 0x9B0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X9B0);
    // 0x8004ACF0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8004ACF4: bne         $t9, $at, L_8004AD74
    if (ctx->r25 != ctx->r1) {
        // 0x8004ACF8: nop
    
            goto L_8004AD74;
    }
    // 0x8004ACF8: nop

L_8004ACFC:
    // 0x8004ACFC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8004AD00: nop

    // 0x8004AD04: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8004AD08: slti        $at, $t1, 0x20
    ctx->r1 = SIGNED(ctx->r9) < 0X20 ? 1 : 0;
    // 0x8004AD0C: bne         $at, $zero, L_8004AD30
    if (ctx->r1 != 0) {
        // 0x8004AD10: sw          $t1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r9;
            goto L_8004AD30;
    }
    // 0x8004AD10: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x8004AD14: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004AD18: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AD1C: sw          $t2, -0x15C($at)
    MEM_W(-0X15C, ctx->r1) = ctx->r10;
    // 0x8004AD20: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AD24: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8004AD28: b           L_8004AD74
    // 0x8004AD2C: sw          $t3, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r11;
        goto L_8004AD74;
    // 0x8004AD2C: sw          $t3, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r11;
L_8004AD30:
    // 0x8004AD30: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8004AD34: lw          $t4, -0x15C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X15C);
    // 0x8004AD38: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AD3C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8004AD40: sw          $t5, -0x15C($at)
    MEM_W(-0X15C, ctx->r1) = ctx->r13;
    // 0x8004AD44: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x8004AD48: bne         $at, $zero, L_8004AD54
    if (ctx->r1 != 0) {
        // 0x8004AD4C: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_8004AD54;
    }
    // 0x8004AD4C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AD50: sw          $zero, -0x15C($at)
    MEM_W(-0X15C, ctx->r1) = 0;
L_8004AD54:
    // 0x8004AD54: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004AD58: lw          $t6, -0x15C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X15C);
    // 0x8004AD5C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004AD60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004AD64: lbu         $t7, 0x9B0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X9B0);
    // 0x8004AD68: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8004AD6C: beq         $t7, $at, L_8004ACFC
    if (ctx->r15 == ctx->r1) {
        // 0x8004AD70: nop
    
            goto L_8004ACFC;
    }
    // 0x8004AD70: nop

L_8004AD74:
    // 0x8004AD74: jr          $ra
    // 0x8004AD78: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8004AD78: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8004AD7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004AD7C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AD80: lwc1        $f4, -0x148($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X148);
    // 0x8004AD84: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AD88: lwc1        $f6, -0x144($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X144);
    // 0x8004AD8C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AD90: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004AD94: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8004AD98: swc1        $f8, -0x148($at)
    MEM_W(-0X148, ctx->r1) = ctx->f8.u32l;
    // 0x8004AD9C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004ADA0: lwc1        $f10, -0x140($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X140);
    // 0x8004ADA4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004ADA8: lwc1        $f16, -0x13C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X13C);
    // 0x8004ADAC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004ADB0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8004ADB4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8004ADB8: swc1        $f18, -0x140($at)
    MEM_W(-0X140, ctx->r1) = ctx->f18.u32l;
    // 0x8004ADBC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004ADC0: lwc1        $f4, -0x138($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X138);
    // 0x8004ADC4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004ADC8: lwc1        $f10, -0x134($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X134);
    // 0x8004ADCC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004ADD0: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8004ADD4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8004ADD8: swc1        $f16, -0x138($at)
    MEM_W(-0X138, ctx->r1) = ctx->f16.u32l;
    // 0x8004ADDC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8004ADE0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8004ADE4: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x8004ADE8: c.le.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d <= ctx->f18.d;
    // 0x8004ADEC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8004ADF0: bc1f        L_8004AE18
    if (!c1cs) {
        // 0x8004ADF4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8004AE18;
    }
    // 0x8004ADF4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8004ADF8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8004ADFC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AE00: swc1        $f10, -0x148($at)
    MEM_W(-0X148, ctx->r1) = ctx->f10.u32l;
    // 0x8004AE04: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8004AE08: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8004AE0C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AE10: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8004AE14: swc1        $f8, -0x144($at)
    MEM_W(-0X144, ctx->r1) = ctx->f8.u32l;
L_8004AE18:
    // 0x8004AE18: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AE1C: lwc1        $f18, -0x148($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X148);
    // 0x8004AE20: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004AE24: lwc1        $f11, -0x3648($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X3648);
    // 0x8004AE28: lwc1        $f10, -0x3644($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3644);
    // 0x8004AE2C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8004AE30: c.le.d      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.d <= ctx->f10.d;
    // 0x8004AE34: nop

    // 0x8004AE38: bc1f        L_8004AE68
    if (!c1cs) {
        // 0x8004AE3C: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_8004AE68;
    }
    // 0x8004AE3C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004AE40: lwc1        $f6, -0x3640($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3640);
    // 0x8004AE44: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AE48: swc1        $f6, -0x148($at)
    MEM_W(-0X148, ctx->r1) = ctx->f6.u32l;
    // 0x8004AE4C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AE50: lwc1        $f16, -0x144($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X144);
    // 0x8004AE54: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8004AE58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8004AE5C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AE60: mul.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x8004AE64: swc1        $f18, -0x144($at)
    MEM_W(-0X144, ctx->r1) = ctx->f18.u32l;
L_8004AE68:
    // 0x8004AE68: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AE6C: lwc1        $f4, -0x140($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X140);
    // 0x8004AE70: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8004AE74: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8004AE78: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8004AE7C: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x8004AE80: c.le.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d <= ctx->f10.d;
    // 0x8004AE84: nop

    // 0x8004AE88: bc1f        L_8004AEB8
    if (!c1cs) {
        // 0x8004AE8C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8004AEB8;
    }
    // 0x8004AE8C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8004AE90: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8004AE94: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AE98: swc1        $f16, -0x140($at)
    MEM_W(-0X140, ctx->r1) = ctx->f16.u32l;
    // 0x8004AE9C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AEA0: lwc1        $f8, -0x13C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X13C);
    // 0x8004AEA4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8004AEA8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8004AEAC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AEB0: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8004AEB4: swc1        $f4, -0x13C($at)
    MEM_W(-0X13C, ctx->r1) = ctx->f4.u32l;
L_8004AEB8:
    // 0x8004AEB8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AEBC: lwc1        $f10, -0x140($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X140);
    // 0x8004AEC0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004AEC4: lwc1        $f17, -0x3638($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X3638);
    // 0x8004AEC8: lwc1        $f16, -0x3634($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3634);
    // 0x8004AECC: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x8004AED0: c.le.d      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.d <= ctx->f16.d;
    // 0x8004AED4: nop

    // 0x8004AED8: bc1f        L_8004AF08
    if (!c1cs) {
        // 0x8004AEDC: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_8004AF08;
    }
    // 0x8004AEDC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004AEE0: lwc1        $f8, -0x3630($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3630);
    // 0x8004AEE4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AEE8: swc1        $f8, -0x140($at)
    MEM_W(-0X140, ctx->r1) = ctx->f8.u32l;
    // 0x8004AEEC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AEF0: lwc1        $f18, -0x13C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X13C);
    // 0x8004AEF4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8004AEF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004AEFC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AF00: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8004AF04: swc1        $f10, -0x13C($at)
    MEM_W(-0X13C, ctx->r1) = ctx->f10.u32l;
L_8004AF08:
    // 0x8004AF08: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AF0C: lwc1        $f6, -0x138($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X138);
    // 0x8004AF10: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8004AF14: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8004AF18: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8004AF1C: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x8004AF20: c.le.d      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.d <= ctx->f16.d;
    // 0x8004AF24: nop

    // 0x8004AF28: bc1f        L_8004AF58
    if (!c1cs) {
        // 0x8004AF2C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8004AF58;
    }
    // 0x8004AF2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8004AF30: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8004AF34: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AF38: swc1        $f18, -0x138($at)
    MEM_W(-0X138, ctx->r1) = ctx->f18.u32l;
    // 0x8004AF3C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AF40: lwc1        $f4, -0x134($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X134);
    // 0x8004AF44: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8004AF48: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8004AF4C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AF50: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8004AF54: swc1        $f6, -0x134($at)
    MEM_W(-0X134, ctx->r1) = ctx->f6.u32l;
L_8004AF58:
    // 0x8004AF58: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AF5C: lwc1        $f16, -0x138($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X138);
    // 0x8004AF60: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004AF64: lwc1        $f19, -0x3628($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X3628);
    // 0x8004AF68: lwc1        $f18, -0x3624($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3624);
    // 0x8004AF6C: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x8004AF70: c.le.d      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.d <= ctx->f18.d;
    // 0x8004AF74: nop

    // 0x8004AF78: bc1f        L_8004AFA8
    if (!c1cs) {
        // 0x8004AF7C: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_8004AFA8;
    }
    // 0x8004AF7C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004AF80: lwc1        $f4, -0x3620($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3620);
    // 0x8004AF84: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AF88: swc1        $f4, -0x138($at)
    MEM_W(-0X138, ctx->r1) = ctx->f4.u32l;
    // 0x8004AF8C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AF90: lwc1        $f10, -0x134($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X134);
    // 0x8004AF94: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8004AF98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004AF9C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AFA0: mul.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8004AFA4: swc1        $f16, -0x134($at)
    MEM_W(-0X134, ctx->r1) = ctx->f16.u32l;
L_8004AFA8:
    // 0x8004AFA8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004AFAC: lw          $t6, -0x14C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X14C);
    // 0x8004AFB0: nop

    // 0x8004AFB4: beq         $t6, $zero, L_8004B4E4
    if (ctx->r14 == 0) {
        // 0x8004AFB8: nop
    
            goto L_8004B4E4;
    }
    // 0x8004AFB8: nop

    // 0x8004AFBC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004AFC0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AFC4: sw          $t7, -0x15C($at)
    MEM_W(-0X15C, ctx->r1) = ctx->r15;
    // 0x8004AFC8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AFCC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004AFD0: sw          $zero, -0x14C($at)
    MEM_W(-0X14C, ctx->r1) = 0;
    // 0x8004AFD4: jal         0x8003B5D0
    // 0x8004AFD8: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003B5D0(rdram, ctx);
        goto after_0;
    // 0x8004AFD8: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_0:
    // 0x8004AFDC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8004AFE0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8004AFE4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AFE8: swc1        $f8, -0x148($at)
    MEM_W(-0X148, ctx->r1) = ctx->f8.u32l;
    // 0x8004AFEC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004AFF0: lwc1        $f18, -0x361C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X361C);
    // 0x8004AFF4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004AFF8: swc1        $f18, -0x144($at)
    MEM_W(-0X144, ctx->r1) = ctx->f18.u32l;
    // 0x8004AFFC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004B000: lwc1        $f4, -0x3618($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3618);
    // 0x8004B004: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004B008: swc1        $f4, -0x140($at)
    MEM_W(-0X140, ctx->r1) = ctx->f4.u32l;
    // 0x8004B00C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004B010: lwc1        $f10, -0x3614($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3614);
    // 0x8004B014: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004B018: swc1        $f10, -0x13C($at)
    MEM_W(-0X13C, ctx->r1) = ctx->f10.u32l;
    // 0x8004B01C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004B020: lwc1        $f6, -0x3610($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3610);
    // 0x8004B024: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004B028: swc1        $f6, -0x138($at)
    MEM_W(-0X138, ctx->r1) = ctx->f6.u32l;
    // 0x8004B02C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004B030: lwc1        $f16, -0x360C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X360C);
    // 0x8004B034: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004B038: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004B03C: lw          $a1, 0x584($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X584);
    // 0x8004B040: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B044: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x8004B048: jal         0x8003B654
    // 0x8004B04C: swc1        $f16, -0x134($at)
    MEM_W(-0X134, ctx->r1) = ctx->f16.u32l;
    func_8003B654(rdram, ctx);
        goto after_1;
    // 0x8004B04C: swc1        $f16, -0x134($at)
    MEM_W(-0X134, ctx->r1) = ctx->f16.u32l;
    after_1:
    // 0x8004B050: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B054: sw          $v0, 0x9C4($at)
    MEM_W(0X9C4, ctx->r1) = ctx->r2;
    // 0x8004B058: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004B05C: lw          $t8, 0x9C4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9C4);
    // 0x8004B060: nop

    // 0x8004B064: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8004B068: beq         $t9, $zero, L_8004B4D4
    if (ctx->r25 == 0) {
        // 0x8004B06C: nop
    
            goto L_8004B4D4;
    }
    // 0x8004B06C: nop

    // 0x8004B070: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8004B074: lbu         $t0, -0x1B0($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1B0);
    // 0x8004B078: nop

    // 0x8004B07C: beq         $t0, $zero, L_8004B110
    if (ctx->r8 == 0) {
        // 0x8004B080: nop
    
            goto L_8004B110;
    }
    // 0x8004B080: nop

    // 0x8004B084: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B088: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    // 0x8004B08C: jal         0x80077408
    // 0x8004B090: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80077408(rdram, ctx);
        goto after_2;
    // 0x8004B090: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
    // 0x8004B094: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B098: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    // 0x8004B09C: jal         0x80077408
    // 0x8004B0A0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_80077408(rdram, ctx);
        goto after_3;
    // 0x8004B0A0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_3:
    // 0x8004B0A4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B0A8: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    // 0x8004B0AC: jal         0x80077408
    // 0x8004B0B0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80077408(rdram, ctx);
        goto after_4;
    // 0x8004B0B0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_4:
    // 0x8004B0B4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B0B8: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    // 0x8004B0BC: jal         0x80077610
    // 0x8004B0C0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_80077610(rdram, ctx);
        goto after_5;
    // 0x8004B0C0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_5:
    // 0x8004B0C4: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8004B0C8: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x8004B0CC: jal         0x80074888
    // 0x8004B0D0: addiu       $a1, $zero, 0x9C
    ctx->r5 = ADD32(0, 0X9C);
    func_80074888(rdram, ctx);
        goto after_6;
    // 0x8004B0D0: addiu       $a1, $zero, 0x9C
    ctx->r5 = ADD32(0, 0X9C);
    after_6:
    // 0x8004B0D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004B0D8: jal         0x8007E03C
    // 0x8004B0DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_7;
    // 0x8004B0DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8004B0E0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B0E4: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x8004B0E8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004B0EC: lw          $a1, 0x9C0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9C0);
    // 0x8004B0F0: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8004B0F4: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x8004B0F8: jal         0x800746C0
    // 0x8004B0FC: addiu       $a2, $zero, 0x9C
    ctx->r6 = ADD32(0, 0X9C);
    func_800746C0(rdram, ctx);
        goto after_8;
    // 0x8004B0FC: addiu       $a2, $zero, 0x9C
    ctx->r6 = ADD32(0, 0X9C);
    after_8:
    // 0x8004B100: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x8004B104: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004B108: b           L_8004B4E4
    // 0x8004B10C: sw          $t1, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r9;
        goto L_8004B4E4;
    // 0x8004B10C: sw          $t1, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r9;
L_8004B110:
    // 0x8004B110: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B114: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    // 0x8004B118: jal         0x80077408
    // 0x8004B11C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80077408(rdram, ctx);
        goto after_9;
    // 0x8004B11C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_9:
    // 0x8004B120: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B124: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    // 0x8004B128: jal         0x80077408
    // 0x8004B12C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_80077408(rdram, ctx);
        goto after_10;
    // 0x8004B12C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_10:
    // 0x8004B130: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B134: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    // 0x8004B138: jal         0x80077408
    // 0x8004B13C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80077408(rdram, ctx);
        goto after_11;
    // 0x8004B13C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_11:
    // 0x8004B140: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B144: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    // 0x8004B148: jal         0x80077610
    // 0x8004B14C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_80077610(rdram, ctx);
        goto after_12;
    // 0x8004B14C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_12:
    // 0x8004B150: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8004B154: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x8004B158: jal         0x80074888
    // 0x8004B15C: addiu       $a1, $zero, 0x9C
    ctx->r5 = ADD32(0, 0X9C);
    func_80074888(rdram, ctx);
        goto after_13;
    // 0x8004B15C: addiu       $a1, $zero, 0x9C
    ctx->r5 = ADD32(0, 0X9C);
    after_13:
    // 0x8004B160: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004B164: jal         0x8007E03C
    // 0x8004B168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_14;
    // 0x8004B168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8004B16C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B170: sw          $v0, 0x9C0($at)
    MEM_W(0X9C0, ctx->r1) = ctx->r2;
    // 0x8004B174: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004B178: lw          $a1, 0x9C0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9C0);
    // 0x8004B17C: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x8004B180: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x8004B184: jal         0x800746C0
    // 0x8004B188: addiu       $a2, $zero, 0x9C
    ctx->r6 = ADD32(0, 0X9C);
    func_800746C0(rdram, ctx);
        goto after_15;
    // 0x8004B188: addiu       $a2, $zero, 0x9C
    ctx->r6 = ADD32(0, 0X9C);
    after_15:
    // 0x8004B18C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004B190: lw          $a1, 0x584($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X584);
    // 0x8004B194: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B198: jal         0x8003BA0C
    // 0x8004B19C: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003BA0C(rdram, ctx);
        goto after_16;
    // 0x8004B19C: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_16:
    // 0x8004B1A0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004B1A4: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8004B1A8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B1AC: lw          $a1, 0x584($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X584);
    // 0x8004B1B0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B1B4: sw          $t2, 0x580($at)
    MEM_W(0X580, ctx->r1) = ctx->r10;
    // 0x8004B1B8: jal         0x8003BA0C
    // 0x8004B1BC: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003BA0C(rdram, ctx);
        goto after_17;
    // 0x8004B1BC: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_17:
    // 0x8004B1C0: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x8004B1C4: slti        $at, $t3, 0x10
    ctx->r1 = SIGNED(ctx->r11) < 0X10 ? 1 : 0;
    // 0x8004B1C8: beq         $at, $zero, L_8004B1F4
    if (ctx->r1 == 0) {
        // 0x8004B1CC: nop
    
            goto L_8004B1F4;
    }
    // 0x8004B1CC: nop

    // 0x8004B1D0: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004B1D4: lw          $a2, 0x584($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X584);
    // 0x8004B1D8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B1DC: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x8004B1E0: jal         0x8003BBB0
    // 0x8004B1E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003BBB0(rdram, ctx);
        goto after_18;
    // 0x8004B1E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x8004B1E8: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x8004B1EC: beq         $at, $zero, L_8004B390
    if (ctx->r1 == 0) {
        // 0x8004B1F0: nop
    
            goto L_8004B390;
    }
    // 0x8004B1F0: nop

L_8004B1F4:
    // 0x8004B1F4: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004B1F8: lw          $t4, 0x580($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X580);
    // 0x8004B1FC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8004B200: beq         $t4, $at, L_8004B22C
    if (ctx->r12 == ctx->r1) {
        // 0x8004B204: nop
    
            goto L_8004B22C;
    }
    // 0x8004B204: nop

    // 0x8004B208: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004B20C: lw          $a2, 0x584($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X584);
    // 0x8004B210: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B214: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x8004B218: jal         0x8003BBB0
    // 0x8004B21C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003BBB0(rdram, ctx);
        goto after_19;
    // 0x8004B21C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x8004B220: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x8004B224: beq         $at, $zero, L_8004B380
    if (ctx->r1 == 0) {
        // 0x8004B228: nop
    
            goto L_8004B380;
    }
    // 0x8004B228: nop

L_8004B22C:
    // 0x8004B22C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004B230: lbu         $t6, -0x1A8($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1A8);
    // 0x8004B234: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8004B238: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004B23C: beq         $t6, $zero, L_8004B368
    if (ctx->r14 == 0) {
        // 0x8004B240: sb          $t5, -0x150($at)
        MEM_B(-0X150, ctx->r1) = ctx->r13;
            goto L_8004B368;
    }
    // 0x8004B240: sb          $t5, -0x150($at)
    MEM_B(-0X150, ctx->r1) = ctx->r13;
    // 0x8004B244: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B248: sw          $zero, 0x9CC($at)
    MEM_W(0X9CC, ctx->r1) = 0;
    // 0x8004B24C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B250: sw          $zero, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = 0;
L_8004B254:
    // 0x8004B254: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004B258: lw          $t7, 0x9CC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9CC);
    // 0x8004B25C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004B260: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004B264: lw          $a3, 0x584($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X584);
    // 0x8004B268: addiu       $t9, $t9, 0x770
    ctx->r25 = ADD32(ctx->r25, 0X770);
    // 0x8004B26C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B270: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8004B274: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x8004B278: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x8004B27C: jal         0x8003BA84
    // 0x8004B280: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_8003BA84(rdram, ctx);
        goto after_20;
    // 0x8004B280: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_20:
    // 0x8004B284: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004B288: lw          $t0, 0x9CC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X9CC);
    // 0x8004B28C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004B290: lw          $t2, 0x9CC($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9CC);
    // 0x8004B294: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B298: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8004B29C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8004B2A0: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004B2A4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8004B2A8: sw          $v0, 0x970($at)
    MEM_W(0X970, ctx->r1) = ctx->r2;
    // 0x8004B2AC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8004B2B0: lw          $t4, 0x970($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X970);
    // 0x8004B2B4: nop

    // 0x8004B2B8: slti        $at, $t4, 0x11
    ctx->r1 = SIGNED(ctx->r12) < 0X11 ? 1 : 0;
    // 0x8004B2BC: beq         $at, $zero, L_8004B310
    if (ctx->r1 == 0) {
        // 0x8004B2C0: nop
    
            goto L_8004B310;
    }
    // 0x8004B2C0: nop

    // 0x8004B2C4: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8004B2C8: lw          $t5, -0x15C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X15C);
    // 0x8004B2CC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8004B2D0: bne         $t5, $at, L_8004B2DC
    if (ctx->r13 != ctx->r1) {
        // 0x8004B2D4: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_8004B2DC;
    }
    // 0x8004B2D4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004B2D8: sw          $t2, -0x15C($at)
    MEM_W(-0X15C, ctx->r1) = ctx->r10;
L_8004B2DC:
    // 0x8004B2DC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004B2E0: lw          $t8, 0x9D0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9D0);
    // 0x8004B2E4: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004B2E8: lw          $t6, 0x9CC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9CC);
    // 0x8004B2EC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B2F0: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004B2F4: lw          $t9, 0x9D0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9D0);
    // 0x8004B2F8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8004B2FC: sb          $t6, 0x9B0($at)
    MEM_B(0X9B0, ctx->r1) = ctx->r14;
    // 0x8004B300: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B304: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x8004B308: b           L_8004B33C
    // 0x8004B30C: sw          $t7, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r15;
        goto L_8004B33C;
    // 0x8004B30C: sw          $t7, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r15;
L_8004B310:
    // 0x8004B310: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004B314: lw          $t1, 0x9D0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9D0);
    // 0x8004B318: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B31C: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004B320: lw          $t3, 0x9D0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9D0);
    // 0x8004B324: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004B328: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8004B32C: sb          $t0, 0x9B0($at)
    MEM_B(0X9B0, ctx->r1) = ctx->r8;
    // 0x8004B330: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B334: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8004B338: sw          $t4, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r12;
L_8004B33C:
    // 0x8004B33C: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004B340: lw          $t5, 0x9CC($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9CC);
    // 0x8004B344: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B348: addiu       $t2, $t5, 0x1
    ctx->r10 = ADD32(ctx->r13, 0X1);
    // 0x8004B34C: sw          $t2, 0x9CC($at)
    MEM_W(0X9CC, ctx->r1) = ctx->r10;
    // 0x8004B350: slti        $at, $t2, 0x10
    ctx->r1 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x8004B354: bne         $at, $zero, L_8004B254
    if (ctx->r1 != 0) {
        // 0x8004B358: nop
    
            goto L_8004B254;
    }
    // 0x8004B358: nop

    // 0x8004B35C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004B360: b           L_8004B374
    // 0x8004B364: sw          $zero, -0x158($at)
    MEM_W(-0X158, ctx->r1) = 0;
        goto L_8004B374;
    // 0x8004B364: sw          $zero, -0x158($at)
    MEM_W(-0X158, ctx->r1) = 0;
L_8004B368:
    // 0x8004B368: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x8004B36C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004B370: sw          $t6, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r14;
L_8004B374:
    // 0x8004B374: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004B378: b           L_8005050C
    // 0x8004B37C: sb          $zero, -0x1A8($at)
    MEM_B(-0X1A8, ctx->r1) = 0;
        goto L_8005050C;
    // 0x8004B37C: sb          $zero, -0x1A8($at)
    MEM_B(-0X1A8, ctx->r1) = 0;
L_8004B380:
    // 0x8004B380: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x8004B384: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004B388: b           L_8005050C
    // 0x8004B38C: sw          $t8, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r24;
        goto L_8005050C;
    // 0x8004B38C: sw          $t8, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r24;
L_8004B390:
    // 0x8004B390: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004B394: sw          $zero, -0x158($at)
    MEM_W(-0X158, ctx->r1) = 0;
    // 0x8004B398: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B39C: sw          $zero, 0x9CC($at)
    MEM_W(0X9CC, ctx->r1) = 0;
    // 0x8004B3A0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B3A4: sw          $zero, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = 0;
L_8004B3A8:
    // 0x8004B3A8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004B3AC: lw          $t9, 0x9CC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9CC);
    // 0x8004B3B0: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004B3B4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004B3B8: lw          $a3, 0x584($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X584);
    // 0x8004B3BC: addiu       $t0, $t0, 0x770
    ctx->r8 = ADD32(ctx->r8, 0X770);
    // 0x8004B3C0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B3C4: sll         $t7, $t9, 5
    ctx->r15 = S32(ctx->r25 << 5);
    // 0x8004B3C8: addu        $a1, $t7, $t0
    ctx->r5 = ADD32(ctx->r15, ctx->r8);
    // 0x8004B3CC: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x8004B3D0: jal         0x8003BA84
    // 0x8004B3D4: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    func_8003BA84(rdram, ctx);
        goto after_21;
    // 0x8004B3D4: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_21:
    // 0x8004B3D8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004B3DC: lw          $t1, 0x9CC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9CC);
    // 0x8004B3E0: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004B3E4: lw          $t4, 0x9CC($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X9CC);
    // 0x8004B3E8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B3EC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8004B3F0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8004B3F4: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004B3F8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8004B3FC: sw          $v0, 0x970($at)
    MEM_W(0X970, ctx->r1) = ctx->r2;
    // 0x8004B400: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x8004B404: lw          $t2, 0x970($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X970);
    // 0x8004B408: nop

    // 0x8004B40C: slti        $at, $t2, 0x11
    ctx->r1 = SIGNED(ctx->r10) < 0X11 ? 1 : 0;
    // 0x8004B410: beq         $at, $zero, L_8004B464
    if (ctx->r1 == 0) {
        // 0x8004B414: nop
    
            goto L_8004B464;
    }
    // 0x8004B414: nop

    // 0x8004B418: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004B41C: lw          $t6, -0x15C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X15C);
    // 0x8004B420: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8004B424: bne         $t6, $at, L_8004B430
    if (ctx->r14 != ctx->r1) {
        // 0x8004B428: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_8004B430;
    }
    // 0x8004B428: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004B42C: sw          $t4, -0x15C($at)
    MEM_W(-0X15C, ctx->r1) = ctx->r12;
L_8004B430:
    // 0x8004B430: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004B434: lw          $t7, 0x9D0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9D0);
    // 0x8004B438: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004B43C: lw          $t8, 0x9CC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9CC);
    // 0x8004B440: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B444: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004B448: lw          $t0, 0x9D0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X9D0);
    // 0x8004B44C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8004B450: sb          $t8, 0x9B0($at)
    MEM_B(0X9B0, ctx->r1) = ctx->r24;
    // 0x8004B454: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B458: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x8004B45C: b           L_8004B490
    // 0x8004B460: sw          $t9, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r25;
        goto L_8004B490;
    // 0x8004B460: sw          $t9, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r25;
L_8004B464:
    // 0x8004B464: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004B468: lw          $t3, 0x9D0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9D0);
    // 0x8004B46C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B470: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004B474: lw          $t5, 0x9D0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9D0);
    // 0x8004B478: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004B47C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8004B480: sb          $t1, 0x9B0($at)
    MEM_B(0X9B0, ctx->r1) = ctx->r9;
    // 0x8004B484: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B488: addiu       $t2, $t5, 0x1
    ctx->r10 = ADD32(ctx->r13, 0X1);
    // 0x8004B48C: sw          $t2, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r10;
L_8004B490:
    // 0x8004B490: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004B494: lw          $t6, 0x9CC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9CC);
    // 0x8004B498: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B49C: addiu       $t4, $t6, 0x1
    ctx->r12 = ADD32(ctx->r14, 0X1);
    // 0x8004B4A0: sw          $t4, 0x9CC($at)
    MEM_W(0X9CC, ctx->r1) = ctx->r12;
    // 0x8004B4A4: slti        $at, $t4, 0x10
    ctx->r1 = SIGNED(ctx->r12) < 0X10 ? 1 : 0;
    // 0x8004B4A8: bne         $at, $zero, L_8004B3A8
    if (ctx->r1 != 0) {
        // 0x8004B4AC: nop
    
            goto L_8004B3A8;
    }
    // 0x8004B4AC: nop

    // 0x8004B4B0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8004B4B4: lw          $t8, -0x15C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X15C);
    // 0x8004B4B8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8004B4BC: bne         $t8, $at, L_8004B4E4
    if (ctx->r24 != ctx->r1) {
        // 0x8004B4C0: nop
    
            goto L_8004B4E4;
    }
    // 0x8004B4C0: nop

    // 0x8004B4C4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8004B4C8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004B4CC: b           L_8004B4E4
    // 0x8004B4D0: sw          $t7, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r15;
        goto L_8004B4E4;
    // 0x8004B4D0: sw          $t7, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r15;
L_8004B4D4:
    // 0x8004B4D4: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8004B4D8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004B4DC: b           L_8005050C
    // 0x8004B4E0: sb          $t0, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r8;
        goto L_8005050C;
    // 0x8004B4E0: sb          $t0, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r8;
L_8004B4E4:
    // 0x8004B4E4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004B4E8: jal         0x8005BBFC
    // 0x8004B4EC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_22;
    // 0x8004B4EC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_22:
    // 0x8004B4F0: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8004B4F4: lw          $t9, -0x158($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X158);
    // 0x8004B4F8: nop

    // 0x8004B4FC: slti        $at, $t9, 0x5
    ctx->r1 = SIGNED(ctx->r25) < 0X5 ? 1 : 0;
    // 0x8004B500: beq         $at, $zero, L_8004C310
    if (ctx->r1 == 0) {
        // 0x8004B504: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8004C310;
    }
    // 0x8004B504: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8004B508: beq         $t9, $at, L_8004C310
    if (ctx->r25 == ctx->r1) {
        // 0x8004B50C: nop
    
            goto L_8004C310;
    }
    // 0x8004B50C: nop

    // 0x8004B510: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8004B514: addiu       $t1, $t1, -0x3F60
    ctx->r9 = ADD32(ctx->r9, -0X3F60);
    // 0x8004B518: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004B51C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004B520: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004B524: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004B528: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004B52C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8004B530: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8004B534: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8004B538: addiu       $a1, $a1, 0x608
    ctx->r5 = ADD32(ctx->r5, 0X608);
    // 0x8004B53C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004B540: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8004B544: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8004B548: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8004B54C: jal         0x80077960
    // 0x8004B550: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_23;
    // 0x8004B550: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_23:
    // 0x8004B554: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004B558: lw          $a2, 0x584($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X584);
    // 0x8004B55C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B560: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x8004B564: jal         0x8003BBB0
    // 0x8004B568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003BBB0(rdram, ctx);
        goto after_24;
    // 0x8004B568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_24:
    // 0x8004B56C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004B570: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004B574: addiu       $a1, $a1, -0x3F44
    ctx->r5 = ADD32(ctx->r5, -0X3F44);
    // 0x8004B578: sra         $a2, $s0, 8
    ctx->r6 = S32(SIGNED(ctx->r16) >> 8);
    // 0x8004B57C: jal         0x800B62D4
    // 0x8004B580: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    sprintf_recomp(rdram, ctx);
        goto after_25;
    // 0x8004B580: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_25:
    // 0x8004B584: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x8004B588: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B58C: sw          $t6, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r14;
    // 0x8004B590: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8004B594: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B598: addiu       $t4, $zero, 0xFE
    ctx->r12 = ADD32(0, 0XFE);
    // 0x8004B59C: addiu       $t8, $t8, -0x3F40
    ctx->r24 = ADD32(ctx->r24, -0X3F40);
    // 0x8004B5A0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004B5A4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004B5A8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004B5AC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004B5B0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004B5B4: sw          $t4, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r12;
    // 0x8004B5B8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8004B5BC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8004B5C0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8004B5C4: addiu       $a1, $a1, 0x590
    ctx->r5 = ADD32(ctx->r5, 0X590);
    // 0x8004B5C8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004B5CC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004B5D0: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8004B5D4: addiu       $a3, $zero, 0xFE
    ctx->r7 = ADD32(0, 0XFE);
    // 0x8004B5D8: jal         0x80077960
    // 0x8004B5DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_26;
    // 0x8004B5DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_26:
    // 0x8004B5E0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B5E4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004B5E8: addiu       $a1, $a1, -0x3F30
    ctx->r5 = ADD32(ctx->r5, -0X3F30);
    // 0x8004B5EC: jal         0x80077D88
    // 0x8004B5F0: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    func_80077D88(rdram, ctx);
        goto after_27;
    // 0x8004B5F0: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    after_27:
    // 0x8004B5F4: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004B5F8: lw          $t1, 0x9D8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9D8);
    // 0x8004B5FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004B600: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004B604: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B608: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004B60C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004B610: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004B614: addiu       $t5, $sp, 0x4C
    ctx->r13 = ADD32(ctx->r29, 0X4C);
    // 0x8004B618: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004B61C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004B620: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004B624: addu        $t3, $t1, $s0
    ctx->r11 = ADD32(ctx->r9, ctx->r16);
    // 0x8004B628: sw          $t3, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r11;
    // 0x8004B62C: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8004B630: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8004B634: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8004B638: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8004B63C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8004B640: addiu       $a1, $a1, 0x590
    ctx->r5 = ADD32(ctx->r5, 0X590);
    // 0x8004B644: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004B648: jal         0x80077960
    // 0x8004B64C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_28;
    // 0x8004B64C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_28:
    // 0x8004B650: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004B654: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004B658: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x8004B65C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B660: addiu       $t7, $t7, -0x3F20
    ctx->r15 = ADD32(ctx->r15, -0X3F20);
    // 0x8004B664: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004B668: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004B66C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004B670: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004B674: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004B678: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004B67C: sw          $t8, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r24;
    // 0x8004B680: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8004B684: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8004B688: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8004B68C: addiu       $a1, $a1, 0x590
    ctx->r5 = ADD32(ctx->r5, 0X590);
    // 0x8004B690: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004B694: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8004B698: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x8004B69C: jal         0x80077960
    // 0x8004B6A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_29;
    // 0x8004B6A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_29:
    // 0x8004B6A4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004B6A8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004B6AC: addiu       $a1, $a1, -0x3F10
    ctx->r5 = ADD32(ctx->r5, -0X3F10);
    // 0x8004B6B0: jal         0x80077D88
    // 0x8004B6B4: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    func_80077D88(rdram, ctx);
        goto after_30;
    // 0x8004B6B4: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    after_30:
    // 0x8004B6B8: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004B6BC: lw          $t3, 0x9D8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9D8);
    // 0x8004B6C0: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004B6C4: lw          $a2, 0x584($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X584);
    // 0x8004B6C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004B6CC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B6D0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004B6D4: addu        $t5, $t3, $s0
    ctx->r13 = ADD32(ctx->r11, ctx->r16);
    // 0x8004B6D8: sw          $t5, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r13;
    // 0x8004B6DC: addiu       $a1, $a1, -0x3F00
    ctx->r5 = ADD32(ctx->r5, -0X3F00);
    // 0x8004B6E0: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8004B6E4: jal         0x800B62D4
    // 0x8004B6E8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    sprintf_recomp(rdram, ctx);
        goto after_31;
    // 0x8004B6E8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_31:
    // 0x8004B6EC: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004B6F0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004B6F4: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004B6F8: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004B6FC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004B700: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004B704: addiu       $t2, $sp, 0x4C
    ctx->r10 = ADD32(ctx->r29, 0X4C);
    // 0x8004B708: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004B70C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004B710: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004B714: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8004B718: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8004B71C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8004B720: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8004B724: addiu       $a1, $a1, 0x590
    ctx->r5 = ADD32(ctx->r5, 0X590);
    // 0x8004B728: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004B72C: jal         0x80077960
    // 0x8004B730: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_32;
    // 0x8004B730: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_32:
    // 0x8004B734: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B738: sw          $zero, 0x9CC($at)
    MEM_W(0X9CC, ctx->r1) = 0;
    // 0x8004B73C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B740: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x8004B744: sw          $t7, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r15;
    // 0x8004B748: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B74C: addiu       $t0, $zero, 0x2A
    ctx->r8 = ADD32(0, 0X2A);
    // 0x8004B750: sw          $t0, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r8;
    // 0x8004B754: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B758: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8004B75C: sw          $t9, 0x9D4($at)
    MEM_W(0X9D4, ctx->r1) = ctx->r25;
L_8004B760:
    // 0x8004B760: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004B764: lw          $t1, 0x9CC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9CC);
    // 0x8004B768: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004B76C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8004B770: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8004B774: lw          $t5, 0x970($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X970);
    // 0x8004B778: nop

    // 0x8004B77C: slti        $at, $t5, 0x11
    ctx->r1 = SIGNED(ctx->r13) < 0X11 ? 1 : 0;
    // 0x8004B780: beq         $at, $zero, L_8004C2F0
    if (ctx->r1 == 0) {
        // 0x8004B784: nop
    
            goto L_8004C2F0;
    }
    // 0x8004B784: nop

    // 0x8004B788: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x8004B78C: jal         0x800B7450
    // 0x8004B790: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    _bzero(rdram, ctx);
        goto after_33;
    // 0x8004B790: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_33:
    // 0x8004B794: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B798: sw          $zero, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = 0;
L_8004B79C:
    // 0x8004B79C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004B7A0: lw          $t2, 0x9CC($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9CC);
    // 0x8004B7A4: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004B7A8: lw          $t4, 0x9D0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X9D0);
    // 0x8004B7AC: sll         $t6, $t2, 5
    ctx->r14 = S32(ctx->r10 << 5);
    // 0x8004B7B0: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004B7B4: addu        $t8, $t6, $t4
    ctx->r24 = ADD32(ctx->r14, ctx->r12);
    // 0x8004B7B8: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8004B7BC: lbu         $t7, 0x77E($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X77E);
    // 0x8004B7C0: nop

    // 0x8004B7C4: slti        $at, $t7, 0xF
    ctx->r1 = SIGNED(ctx->r15) < 0XF ? 1 : 0;
    // 0x8004B7C8: beq         $at, $zero, L_8004B7E0
    if (ctx->r1 == 0) {
        // 0x8004B7CC: nop
    
            goto L_8004B7E0;
    }
    // 0x8004B7CC: nop

    // 0x8004B7D0: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x8004B7D4: addu        $t9, $sp, $t4
    ctx->r25 = ADD32(ctx->r29, ctx->r12);
    // 0x8004B7D8: b           L_8004B85C
    // 0x8004B7DC: sb          $t0, 0x68($t9)
    MEM_B(0X68, ctx->r25) = ctx->r8;
        goto L_8004B85C;
    // 0x8004B7DC: sb          $t0, 0x68($t9)
    MEM_B(0X68, ctx->r25) = ctx->r8;
L_8004B7E0:
    // 0x8004B7E0: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004B7E4: lw          $t1, 0x9CC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9CC);
    // 0x8004B7E8: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004B7EC: lw          $t5, 0x9D0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9D0);
    // 0x8004B7F0: sll         $t3, $t1, 5
    ctx->r11 = S32(ctx->r9 << 5);
    // 0x8004B7F4: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004B7F8: addu        $t2, $t3, $t5
    ctx->r10 = ADD32(ctx->r11, ctx->r13);
    // 0x8004B7FC: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8004B800: lbu         $t6, 0x77E($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X77E);
    // 0x8004B804: nop

    // 0x8004B808: slti        $at, $t6, 0x42
    ctx->r1 = SIGNED(ctx->r14) < 0X42 ? 1 : 0;
    // 0x8004B80C: bne         $at, $zero, L_8004B824
    if (ctx->r1 != 0) {
        // 0x8004B810: nop
    
            goto L_8004B824;
    }
    // 0x8004B810: nop

    // 0x8004B814: addiu       $t8, $zero, 0x2A
    ctx->r24 = ADD32(0, 0X2A);
    // 0x8004B818: addu        $t7, $sp, $t5
    ctx->r15 = ADD32(ctx->r29, ctx->r13);
    // 0x8004B81C: b           L_8004B85C
    // 0x8004B820: sb          $t8, 0x68($t7)
    MEM_B(0X68, ctx->r15) = ctx->r24;
        goto L_8004B85C;
    // 0x8004B820: sb          $t8, 0x68($t7)
    MEM_B(0X68, ctx->r15) = ctx->r24;
L_8004B824:
    // 0x8004B824: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004B828: lw          $t0, 0x9CC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X9CC);
    // 0x8004B82C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004B830: lw          $t9, 0x9D0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9D0);
    // 0x8004B834: sll         $t4, $t0, 5
    ctx->r12 = S32(ctx->r8 << 5);
    // 0x8004B838: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004B83C: addu        $t1, $t4, $t9
    ctx->r9 = ADD32(ctx->r12, ctx->r25);
    // 0x8004B840: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8004B844: lbu         $t3, 0x77E($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X77E);
    // 0x8004B848: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8004B84C: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8004B850: lbu         $t2, -0x1A0($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X1A0);
    // 0x8004B854: addu        $t6, $sp, $t9
    ctx->r14 = ADD32(ctx->r29, ctx->r25);
    // 0x8004B858: sb          $t2, 0x68($t6)
    MEM_B(0X68, ctx->r14) = ctx->r10;
L_8004B85C:
    // 0x8004B85C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004B860: lw          $t8, 0x9D0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9D0);
    // 0x8004B864: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B868: addiu       $t5, $t8, 0x1
    ctx->r13 = ADD32(ctx->r24, 0X1);
    // 0x8004B86C: sw          $t5, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r13;
    // 0x8004B870: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x8004B874: bne         $at, $zero, L_8004B79C
    if (ctx->r1 != 0) {
        // 0x8004B878: nop
    
            goto L_8004B79C;
    }
    // 0x8004B878: nop

    // 0x8004B87C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8004B880: jal         0x800B7450
    // 0x8004B884: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    _bzero(rdram, ctx);
        goto after_34;
    // 0x8004B884: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_34:
    // 0x8004B888: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B88C: sw          $zero, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = 0;
    // 0x8004B890: addiu       $t7, $zero, 0x2E
    ctx->r15 = ADD32(0, 0X2E);
    // 0x8004B894: addiu       $t0, $sp, 0x60
    ctx->r8 = ADD32(ctx->r29, 0X60);
    // 0x8004B898: sb          $t7, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r15;
    // 0x8004B89C: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004B8A0: lw          $t3, 0x9CC($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9CC);
    // 0x8004B8A4: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004B8A8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004B8AC: sll         $t2, $t3, 5
    ctx->r10 = S32(ctx->r11 << 5);
    // 0x8004B8B0: lw          $t4, 0x9D0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X9D0);
    // 0x8004B8B4: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x8004B8B8: lbu         $t9, 0x77A($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X77A);
    // 0x8004B8BC: addiu       $t1, $t4, 0x1
    ctx->r9 = ADD32(ctx->r12, 0X1);
    // 0x8004B8C0: beq         $t9, $zero, L_8004B998
    if (ctx->r25 == 0) {
        // 0x8004B8C4: sw          $t1, 0x9D0($at)
        MEM_W(0X9D0, ctx->r1) = ctx->r9;
            goto L_8004B998;
    }
    // 0x8004B8C4: sw          $t1, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r9;
    // 0x8004B8C8: slti        $at, $t9, 0xF
    ctx->r1 = SIGNED(ctx->r25) < 0XF ? 1 : 0;
    // 0x8004B8CC: beq         $at, $zero, L_8004B8F8
    if (ctx->r1 == 0) {
        // 0x8004B8D0: nop
    
            goto L_8004B8F8;
    }
    // 0x8004B8D0: nop

    // 0x8004B8D4: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x8004B8D8: addu        $t8, $sp, $t1
    ctx->r24 = ADD32(ctx->r29, ctx->r9);
    // 0x8004B8DC: sb          $t6, 0x60($t8)
    MEM_B(0X60, ctx->r24) = ctx->r14;
    // 0x8004B8E0: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004B8E4: lw          $t5, 0x9D0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9D0);
    // 0x8004B8E8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B8EC: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x8004B8F0: b           L_8004B9C0
    // 0x8004B8F4: sw          $t7, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r15;
        goto L_8004B9C0;
    // 0x8004B8F4: sw          $t7, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r15;
L_8004B8F8:
    // 0x8004B8F8: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004B8FC: lw          $t0, 0x9CC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X9CC);
    // 0x8004B900: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004B904: sll         $t4, $t0, 5
    ctx->r12 = S32(ctx->r8 << 5);
    // 0x8004B908: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8004B90C: lbu         $t3, 0x77A($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X77A);
    // 0x8004B910: nop

    // 0x8004B914: slti        $at, $t3, 0x42
    ctx->r1 = SIGNED(ctx->r11) < 0X42 ? 1 : 0;
    // 0x8004B918: bne         $at, $zero, L_8004B94C
    if (ctx->r1 != 0) {
        // 0x8004B91C: nop
    
            goto L_8004B94C;
    }
    // 0x8004B91C: nop

    // 0x8004B920: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004B924: lw          $t9, 0x9D0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9D0);
    // 0x8004B928: addiu       $t2, $zero, 0x2A
    ctx->r10 = ADD32(0, 0X2A);
    // 0x8004B92C: addu        $t6, $sp, $t9
    ctx->r14 = ADD32(ctx->r29, ctx->r25);
    // 0x8004B930: sb          $t2, 0x60($t6)
    MEM_B(0X60, ctx->r14) = ctx->r10;
    // 0x8004B934: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004B938: lw          $t1, 0x9D0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9D0);
    // 0x8004B93C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B940: addiu       $t8, $t1, 0x1
    ctx->r24 = ADD32(ctx->r9, 0X1);
    // 0x8004B944: b           L_8004B9C0
    // 0x8004B948: sw          $t8, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r24;
        goto L_8004B9C0;
    // 0x8004B948: sw          $t8, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r24;
L_8004B94C:
    // 0x8004B94C: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004B950: lw          $t5, 0x9CC($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9CC);
    // 0x8004B954: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004B958: sll         $t7, $t5, 5
    ctx->r15 = S32(ctx->r13 << 5);
    // 0x8004B95C: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8004B960: lbu         $t0, 0x77A($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X77A);
    // 0x8004B964: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8004B968: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004B96C: lw          $t3, 0x9D0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9D0);
    // 0x8004B970: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x8004B974: lbu         $t4, -0x1A0($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1A0);
    // 0x8004B978: addu        $t2, $sp, $t3
    ctx->r10 = ADD32(ctx->r29, ctx->r11);
    // 0x8004B97C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004B980: sb          $t4, 0x60($t2)
    MEM_B(0X60, ctx->r10) = ctx->r12;
    // 0x8004B984: lw          $t9, 0x9D0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9D0);
    // 0x8004B988: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B98C: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x8004B990: b           L_8004B9C0
    // 0x8004B994: sw          $t6, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r14;
        goto L_8004B9C0;
    // 0x8004B994: sw          $t6, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r14;
L_8004B998:
    // 0x8004B998: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004B99C: lw          $t8, 0x9D0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9D0);
    // 0x8004B9A0: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x8004B9A4: addu        $t5, $sp, $t8
    ctx->r13 = ADD32(ctx->r29, ctx->r24);
    // 0x8004B9A8: sb          $t1, 0x60($t5)
    MEM_B(0X60, ctx->r13) = ctx->r9;
    // 0x8004B9AC: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004B9B0: lw          $t7, 0x9D0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9D0);
    // 0x8004B9B4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004B9B8: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x8004B9BC: sw          $t0, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r8;
L_8004B9C0:
    // 0x8004B9C0: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004B9C4: lw          $t4, 0x9CC($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X9CC);
    // 0x8004B9C8: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004B9CC: sll         $t3, $t4, 5
    ctx->r11 = S32(ctx->r12 << 5);
    // 0x8004B9D0: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8004B9D4: lbu         $t2, 0x77B($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X77B);
    // 0x8004B9D8: nop

    // 0x8004B9DC: beq         $t2, $zero, L_8004BAB8
    if (ctx->r10 == 0) {
        // 0x8004B9E0: slti        $at, $t2, 0xF
        ctx->r1 = SIGNED(ctx->r10) < 0XF ? 1 : 0;
            goto L_8004BAB8;
    }
    // 0x8004B9E0: slti        $at, $t2, 0xF
    ctx->r1 = SIGNED(ctx->r10) < 0XF ? 1 : 0;
    // 0x8004B9E4: beq         $at, $zero, L_8004BA18
    if (ctx->r1 == 0) {
        // 0x8004B9E8: nop
    
            goto L_8004BA18;
    }
    // 0x8004B9E8: nop

    // 0x8004B9EC: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004B9F0: lw          $t6, 0x9D0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9D0);
    // 0x8004B9F4: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x8004B9F8: addu        $t1, $sp, $t6
    ctx->r9 = ADD32(ctx->r29, ctx->r14);
    // 0x8004B9FC: sb          $t9, 0x60($t1)
    MEM_B(0X60, ctx->r9) = ctx->r25;
    // 0x8004BA00: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004BA04: lw          $t8, 0x9D0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9D0);
    // 0x8004BA08: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004BA0C: addiu       $t5, $t8, 0x1
    ctx->r13 = ADD32(ctx->r24, 0X1);
    // 0x8004BA10: b           L_8004BAE0
    // 0x8004BA14: sw          $t5, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r13;
        goto L_8004BAE0;
    // 0x8004BA14: sw          $t5, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r13;
L_8004BA18:
    // 0x8004BA18: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004BA1C: lw          $t7, 0x9CC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9CC);
    // 0x8004BA20: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004BA24: sll         $t0, $t7, 5
    ctx->r8 = S32(ctx->r15 << 5);
    // 0x8004BA28: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x8004BA2C: lbu         $t4, 0x77B($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X77B);
    // 0x8004BA30: nop

    // 0x8004BA34: slti        $at, $t4, 0x42
    ctx->r1 = SIGNED(ctx->r12) < 0X42 ? 1 : 0;
    // 0x8004BA38: bne         $at, $zero, L_8004BA6C
    if (ctx->r1 != 0) {
        // 0x8004BA3C: nop
    
            goto L_8004BA6C;
    }
    // 0x8004BA3C: nop

    // 0x8004BA40: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004BA44: lw          $t2, 0x9D0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9D0);
    // 0x8004BA48: addiu       $t3, $zero, 0x2A
    ctx->r11 = ADD32(0, 0X2A);
    // 0x8004BA4C: addu        $t9, $sp, $t2
    ctx->r25 = ADD32(ctx->r29, ctx->r10);
    // 0x8004BA50: sb          $t3, 0x60($t9)
    MEM_B(0X60, ctx->r25) = ctx->r11;
    // 0x8004BA54: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004BA58: lw          $t6, 0x9D0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9D0);
    // 0x8004BA5C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004BA60: addiu       $t1, $t6, 0x1
    ctx->r9 = ADD32(ctx->r14, 0X1);
    // 0x8004BA64: b           L_8004BAE0
    // 0x8004BA68: sw          $t1, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r9;
        goto L_8004BAE0;
    // 0x8004BA68: sw          $t1, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r9;
L_8004BA6C:
    // 0x8004BA6C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004BA70: lw          $t8, 0x9CC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9CC);
    // 0x8004BA74: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004BA78: sll         $t5, $t8, 5
    ctx->r13 = S32(ctx->r24 << 5);
    // 0x8004BA7C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8004BA80: lbu         $t7, 0x77B($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X77B);
    // 0x8004BA84: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8004BA88: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004BA8C: lw          $t4, 0x9D0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X9D0);
    // 0x8004BA90: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8004BA94: lbu         $t0, -0x1A0($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1A0);
    // 0x8004BA98: addu        $t3, $sp, $t4
    ctx->r11 = ADD32(ctx->r29, ctx->r12);
    // 0x8004BA9C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004BAA0: sb          $t0, 0x60($t3)
    MEM_B(0X60, ctx->r11) = ctx->r8;
    // 0x8004BAA4: lw          $t2, 0x9D0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9D0);
    // 0x8004BAA8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004BAAC: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x8004BAB0: b           L_8004BAE0
    // 0x8004BAB4: sw          $t9, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r25;
        goto L_8004BAE0;
    // 0x8004BAB4: sw          $t9, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r25;
L_8004BAB8:
    // 0x8004BAB8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004BABC: lw          $t1, 0x9D0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9D0);
    // 0x8004BAC0: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x8004BAC4: addu        $t8, $sp, $t1
    ctx->r24 = ADD32(ctx->r29, ctx->r9);
    // 0x8004BAC8: sb          $t6, 0x60($t8)
    MEM_B(0X60, ctx->r24) = ctx->r14;
    // 0x8004BACC: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004BAD0: lw          $t5, 0x9D0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9D0);
    // 0x8004BAD4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004BAD8: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x8004BADC: sw          $t7, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r15;
L_8004BAE0:
    // 0x8004BAE0: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004BAE4: lw          $t0, 0x9CC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X9CC);
    // 0x8004BAE8: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004BAEC: sll         $t4, $t0, 5
    ctx->r12 = S32(ctx->r8 << 5);
    // 0x8004BAF0: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8004BAF4: lbu         $t3, 0x77C($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X77C);
    // 0x8004BAF8: nop

    // 0x8004BAFC: beq         $t3, $zero, L_8004BBD8
    if (ctx->r11 == 0) {
        // 0x8004BB00: slti        $at, $t3, 0xF
        ctx->r1 = SIGNED(ctx->r11) < 0XF ? 1 : 0;
            goto L_8004BBD8;
    }
    // 0x8004BB00: slti        $at, $t3, 0xF
    ctx->r1 = SIGNED(ctx->r11) < 0XF ? 1 : 0;
    // 0x8004BB04: beq         $at, $zero, L_8004BB38
    if (ctx->r1 == 0) {
        // 0x8004BB08: nop
    
            goto L_8004BB38;
    }
    // 0x8004BB08: nop

    // 0x8004BB0C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004BB10: lw          $t9, 0x9D0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9D0);
    // 0x8004BB14: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x8004BB18: addu        $t6, $sp, $t9
    ctx->r14 = ADD32(ctx->r29, ctx->r25);
    // 0x8004BB1C: sb          $t2, 0x60($t6)
    MEM_B(0X60, ctx->r14) = ctx->r10;
    // 0x8004BB20: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004BB24: lw          $t1, 0x9D0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9D0);
    // 0x8004BB28: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004BB2C: addiu       $t8, $t1, 0x1
    ctx->r24 = ADD32(ctx->r9, 0X1);
    // 0x8004BB30: b           L_8004BC00
    // 0x8004BB34: sw          $t8, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r24;
        goto L_8004BC00;
    // 0x8004BB34: sw          $t8, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r24;
L_8004BB38:
    // 0x8004BB38: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004BB3C: lw          $t5, 0x9CC($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9CC);
    // 0x8004BB40: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004BB44: sll         $t7, $t5, 5
    ctx->r15 = S32(ctx->r13 << 5);
    // 0x8004BB48: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8004BB4C: lbu         $t0, 0x77C($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X77C);
    // 0x8004BB50: nop

    // 0x8004BB54: slti        $at, $t0, 0x42
    ctx->r1 = SIGNED(ctx->r8) < 0X42 ? 1 : 0;
    // 0x8004BB58: bne         $at, $zero, L_8004BB8C
    if (ctx->r1 != 0) {
        // 0x8004BB5C: nop
    
            goto L_8004BB8C;
    }
    // 0x8004BB5C: nop

    // 0x8004BB60: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004BB64: lw          $t3, 0x9D0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9D0);
    // 0x8004BB68: addiu       $t4, $zero, 0x2A
    ctx->r12 = ADD32(0, 0X2A);
    // 0x8004BB6C: addu        $t2, $sp, $t3
    ctx->r10 = ADD32(ctx->r29, ctx->r11);
    // 0x8004BB70: sb          $t4, 0x60($t2)
    MEM_B(0X60, ctx->r10) = ctx->r12;
    // 0x8004BB74: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004BB78: lw          $t9, 0x9D0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9D0);
    // 0x8004BB7C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004BB80: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x8004BB84: b           L_8004BC00
    // 0x8004BB88: sw          $t6, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r14;
        goto L_8004BC00;
    // 0x8004BB88: sw          $t6, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r14;
L_8004BB8C:
    // 0x8004BB8C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004BB90: lw          $t1, 0x9CC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9CC);
    // 0x8004BB94: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004BB98: sll         $t8, $t1, 5
    ctx->r24 = S32(ctx->r9 << 5);
    // 0x8004BB9C: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x8004BBA0: lbu         $t5, 0x77C($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X77C);
    // 0x8004BBA4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8004BBA8: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004BBAC: lw          $t0, 0x9D0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X9D0);
    // 0x8004BBB0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8004BBB4: lbu         $t7, -0x1A0($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1A0);
    // 0x8004BBB8: addu        $t4, $sp, $t0
    ctx->r12 = ADD32(ctx->r29, ctx->r8);
    // 0x8004BBBC: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004BBC0: sb          $t7, 0x60($t4)
    MEM_B(0X60, ctx->r12) = ctx->r15;
    // 0x8004BBC4: lw          $t3, 0x9D0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9D0);
    // 0x8004BBC8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004BBCC: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x8004BBD0: b           L_8004BC00
    // 0x8004BBD4: sw          $t2, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r10;
        goto L_8004BC00;
    // 0x8004BBD4: sw          $t2, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r10;
L_8004BBD8:
    // 0x8004BBD8: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004BBDC: lw          $t6, 0x9D0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9D0);
    // 0x8004BBE0: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x8004BBE4: addu        $t1, $sp, $t6
    ctx->r9 = ADD32(ctx->r29, ctx->r14);
    // 0x8004BBE8: sb          $t9, 0x60($t1)
    MEM_B(0X60, ctx->r9) = ctx->r25;
    // 0x8004BBEC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004BBF0: lw          $t8, 0x9D0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9D0);
    // 0x8004BBF4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004BBF8: addiu       $t5, $t8, 0x1
    ctx->r13 = ADD32(ctx->r24, 0X1);
    // 0x8004BBFC: sw          $t5, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r13;
L_8004BC00:
    // 0x8004BC00: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004BC04: lw          $t7, 0x9CC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9CC);
    // 0x8004BC08: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004BC0C: sll         $t0, $t7, 5
    ctx->r8 = S32(ctx->r15 << 5);
    // 0x8004BC10: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x8004BC14: lbu         $t4, 0x77D($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X77D);
    // 0x8004BC18: nop

    // 0x8004BC1C: beq         $t4, $zero, L_8004BCF8
    if (ctx->r12 == 0) {
        // 0x8004BC20: slti        $at, $t4, 0xF
        ctx->r1 = SIGNED(ctx->r12) < 0XF ? 1 : 0;
            goto L_8004BCF8;
    }
    // 0x8004BC20: slti        $at, $t4, 0xF
    ctx->r1 = SIGNED(ctx->r12) < 0XF ? 1 : 0;
    // 0x8004BC24: beq         $at, $zero, L_8004BC58
    if (ctx->r1 == 0) {
        // 0x8004BC28: nop
    
            goto L_8004BC58;
    }
    // 0x8004BC28: nop

    // 0x8004BC2C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004BC30: lw          $t2, 0x9D0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9D0);
    // 0x8004BC34: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x8004BC38: addu        $t9, $sp, $t2
    ctx->r25 = ADD32(ctx->r29, ctx->r10);
    // 0x8004BC3C: sb          $t3, 0x60($t9)
    MEM_B(0X60, ctx->r25) = ctx->r11;
    // 0x8004BC40: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004BC44: lw          $t6, 0x9D0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9D0);
    // 0x8004BC48: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004BC4C: addiu       $t1, $t6, 0x1
    ctx->r9 = ADD32(ctx->r14, 0X1);
    // 0x8004BC50: b           L_8004BD20
    // 0x8004BC54: sw          $t1, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r9;
        goto L_8004BD20;
    // 0x8004BC54: sw          $t1, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r9;
L_8004BC58:
    // 0x8004BC58: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004BC5C: lw          $t8, 0x9CC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9CC);
    // 0x8004BC60: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004BC64: sll         $t5, $t8, 5
    ctx->r13 = S32(ctx->r24 << 5);
    // 0x8004BC68: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8004BC6C: lbu         $t7, 0x77D($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X77D);
    // 0x8004BC70: nop

    // 0x8004BC74: slti        $at, $t7, 0x42
    ctx->r1 = SIGNED(ctx->r15) < 0X42 ? 1 : 0;
    // 0x8004BC78: bne         $at, $zero, L_8004BCAC
    if (ctx->r1 != 0) {
        // 0x8004BC7C: nop
    
            goto L_8004BCAC;
    }
    // 0x8004BC7C: nop

    // 0x8004BC80: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004BC84: lw          $t4, 0x9D0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X9D0);
    // 0x8004BC88: addiu       $t0, $zero, 0x2A
    ctx->r8 = ADD32(0, 0X2A);
    // 0x8004BC8C: addu        $t3, $sp, $t4
    ctx->r11 = ADD32(ctx->r29, ctx->r12);
    // 0x8004BC90: sb          $t0, 0x60($t3)
    MEM_B(0X60, ctx->r11) = ctx->r8;
    // 0x8004BC94: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004BC98: lw          $t2, 0x9D0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9D0);
    // 0x8004BC9C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004BCA0: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x8004BCA4: b           L_8004BD20
    // 0x8004BCA8: sw          $t9, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r25;
        goto L_8004BD20;
    // 0x8004BCA8: sw          $t9, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r25;
L_8004BCAC:
    // 0x8004BCAC: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004BCB0: lw          $t6, 0x9CC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9CC);
    // 0x8004BCB4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004BCB8: sll         $t1, $t6, 5
    ctx->r9 = S32(ctx->r14 << 5);
    // 0x8004BCBC: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x8004BCC0: lbu         $t8, 0x77D($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X77D);
    // 0x8004BCC4: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8004BCC8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004BCCC: lw          $t7, 0x9D0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9D0);
    // 0x8004BCD0: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x8004BCD4: lbu         $t5, -0x1A0($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X1A0);
    // 0x8004BCD8: addu        $t0, $sp, $t7
    ctx->r8 = ADD32(ctx->r29, ctx->r15);
    // 0x8004BCDC: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004BCE0: sb          $t5, 0x60($t0)
    MEM_B(0X60, ctx->r8) = ctx->r13;
    // 0x8004BCE4: lw          $t4, 0x9D0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X9D0);
    // 0x8004BCE8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004BCEC: addiu       $t3, $t4, 0x1
    ctx->r11 = ADD32(ctx->r12, 0X1);
    // 0x8004BCF0: b           L_8004BD20
    // 0x8004BCF4: sw          $t3, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r11;
        goto L_8004BD20;
    // 0x8004BCF4: sw          $t3, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r11;
L_8004BCF8:
    // 0x8004BCF8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004BCFC: lw          $t9, 0x9D0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9D0);
    // 0x8004BD00: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x8004BD04: addu        $t6, $sp, $t9
    ctx->r14 = ADD32(ctx->r29, ctx->r25);
    // 0x8004BD08: sb          $t2, 0x60($t6)
    MEM_B(0X60, ctx->r14) = ctx->r10;
    // 0x8004BD0C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004BD10: lw          $t1, 0x9D0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9D0);
    // 0x8004BD14: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004BD18: addiu       $t8, $t1, 0x1
    ctx->r24 = ADD32(ctx->r9, 0X1);
    // 0x8004BD1C: sw          $t8, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r24;
L_8004BD20:
    // 0x8004BD20: addiu       $t5, $sp, 0x60
    ctx->r13 = ADD32(ctx->r29, 0X60);
    // 0x8004BD24: sb          $zero, 0x5($t5)
    MEM_B(0X5, ctx->r13) = 0;
    // 0x8004BD28: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004BD2C: lw          $t7, 0x9D4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9D4);
    // 0x8004BD30: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004BD34: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004BD38: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x8004BD3C: sw          $t0, 0x9D4($at)
    MEM_W(0X9D4, ctx->r1) = ctx->r8;
    // 0x8004BD40: addiu       $a1, $a1, -0x3EFC
    ctx->r5 = ADD32(ctx->r5, -0X3EFC);
    // 0x8004BD44: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x8004BD48: jal         0x800B62D4
    // 0x8004BD4C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    sprintf_recomp(rdram, ctx);
        goto after_35;
    // 0x8004BD4C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_35:
    // 0x8004BD50: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004BD54: lw          $t4, 0x9CC($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X9CC);
    // 0x8004BD58: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004BD5C: sll         $t3, $t4, 5
    ctx->r11 = S32(ctx->r12 << 5);
    // 0x8004BD60: addu        $a2, $a2, $t3
    ctx->r6 = ADD32(ctx->r6, ctx->r11);
    // 0x8004BD64: lw          $a2, 0x770($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X770);
    // 0x8004BD68: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004BD6C: srl         $t2, $a2, 8
    ctx->r10 = S32(U32(ctx->r6) >> 8);
    // 0x8004BD70: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x8004BD74: addiu       $a1, $a1, -0x3EF8
    ctx->r5 = ADD32(ctx->r5, -0X3EF8);
    // 0x8004BD78: jal         0x800B62D4
    // 0x8004BD7C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    sprintf_recomp(rdram, ctx);
        goto after_36;
    // 0x8004BD7C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    after_36:
    // 0x8004BD80: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004BD84: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004BD88: lw          $t6, -0x15C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X15C);
    // 0x8004BD8C: lw          $t9, 0x9CC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9CC);
    // 0x8004BD90: nop

    // 0x8004BD94: bne         $t9, $t6, L_8004C1A0
    if (ctx->r25 != ctx->r14) {
        // 0x8004BD98: lui         $at, 0x437F
        ctx->r1 = S32(0X437F << 16);
            goto L_8004C1A0;
    }
    // 0x8004BD98: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8004BD9C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8004BDA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004BDA4: lwc1        $f18, -0x140($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X140);
    // 0x8004BDA8: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004BDAC: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8004BDB0: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004BDB4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004BDB8: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004BDBC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8004BDC0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004BDC4: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8004BDC8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004BDCC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004BDD0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8004BDD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004BDD8: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8004BDDC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004BDE0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8004BDE4: lwc1        $f16, -0x138($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X138);
    // 0x8004BDE8: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8004BDEC: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8004BDF0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004BDF4: addiu       $t1, $sp, 0x5C
    ctx->r9 = ADD32(ctx->r29, 0X5C);
    // 0x8004BDF8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8004BDFC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8004BE00: addiu       $a1, $a1, 0x590
    ctx->r5 = ADD32(ctx->r5, 0X590);
    // 0x8004BE04: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8004BE08: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004BE0C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004BE10: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8004BE14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004BE18: cvt.w.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8004BE1C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004BE20: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8004BE24: lwc1        $f10, -0x148($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X148);
    // 0x8004BE28: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x8004BE2C: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8004BE30: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004BE34: addiu       $a2, $a2, -0x19
    ctx->r6 = ADD32(ctx->r6, -0X19);
    // 0x8004BE38: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004BE3C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8004BE40: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8004BE44: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8004BE48: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004BE4C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004BE50: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8004BE54: cvt.w.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8004BE58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8004BE5C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8004BE60: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8004BE64: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8004BE68: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8004BE6C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8004BE70: nop

    // 0x8004BE74: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8004BE78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004BE7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004BE80: nop

    // 0x8004BE84: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8004BE88: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x8004BE8C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8004BE90: jal         0x80077960
    // 0x8004BE94: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    func_80077960(rdram, ctx);
        goto after_37;
    // 0x8004BE94: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_37:
    // 0x8004BE98: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8004BE9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004BEA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004BEA4: lwc1        $f16, -0x140($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X140);
    // 0x8004BEA8: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004BEAC: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8004BEB0: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004BEB4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004BEB8: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004BEBC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8004BEC0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004BEC4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8004BEC8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004BECC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004BED0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8004BED4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8004BED8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8004BEDC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004BEE0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8004BEE4: lwc1        $f4, -0x138($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X138);
    // 0x8004BEE8: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8004BEEC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8004BEF0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004BEF4: addiu       $t6, $sp, 0x54
    ctx->r14 = ADD32(ctx->r29, 0X54);
    // 0x8004BEF8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8004BEFC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8004BF00: addiu       $a1, $a1, 0x590
    ctx->r5 = ADD32(ctx->r5, 0X590);
    // 0x8004BF04: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8004BF08: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004BF0C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004BF10: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8004BF14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8004BF18: cvt.w.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8004BF1C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004BF20: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8004BF24: lwc1        $f10, -0x148($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X148);
    // 0x8004BF28: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8004BF2C: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8004BF30: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004BF34: addiu       $a2, $a2, 0xF0
    ctx->r6 = ADD32(ctx->r6, 0XF0);
    // 0x8004BF38: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8004BF3C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8004BF40: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8004BF44: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8004BF48: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004BF4C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004BF50: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8004BF54: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8004BF58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004BF5C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8004BF60: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x8004BF64: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8004BF68: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8004BF6C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8004BF70: nop

    // 0x8004BF74: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8004BF78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004BF7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004BF80: nop

    // 0x8004BF84: cvt.w.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8004BF88: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x8004BF8C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8004BF90: jal         0x80077960
    // 0x8004BF94: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    func_80077960(rdram, ctx);
        goto after_38;
    // 0x8004BF94: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    after_38:
    // 0x8004BF98: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8004BF9C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8004BFA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004BFA4: lwc1        $f4, -0x140($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X140);
    // 0x8004BFA8: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004BFAC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8004BFB0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004BFB4: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004BFB8: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004BFBC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8004BFC0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004BFC4: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8004BFC8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004BFCC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004BFD0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8004BFD4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8004BFD8: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8004BFDC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004BFE0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8004BFE4: lwc1        $f8, -0x138($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X138);
    // 0x8004BFE8: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8004BFEC: mul.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x8004BFF0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004BFF4: addiu       $t9, $sp, 0x68
    ctx->r25 = ADD32(ctx->r29, 0X68);
    // 0x8004BFF8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004BFFC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8004C000: addiu       $a1, $a1, 0x6F8
    ctx->r5 = ADD32(ctx->r5, 0X6F8);
    // 0x8004C004: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8004C008: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004C00C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004C010: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8004C014: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004C018: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8004C01C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004C020: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8004C024: lwc1        $f10, -0x148($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X148);
    // 0x8004C028: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x8004C02C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8004C030: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C034: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8004C038: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8004C03C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8004C040: nop

    // 0x8004C044: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8004C048: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004C04C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004C050: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8004C054: cvt.w.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8004C058: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8004C05C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8004C060: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x8004C064: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8004C068: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8004C06C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8004C070: nop

    // 0x8004C074: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8004C078: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004C07C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004C080: nop

    // 0x8004C084: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8004C088: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x8004C08C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8004C090: jal         0x80077818
    // 0x8004C094: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    func_80077818(rdram, ctx);
        goto after_39;
    // 0x8004C094: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_39:
    // 0x8004C098: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8004C09C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8004C0A0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004C0A4: lwc1        $f8, -0x140($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X140);
    // 0x8004C0A8: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004C0AC: mul.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x8004C0B0: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004C0B4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004C0B8: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004C0BC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8004C0C0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C0C4: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8004C0C8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004C0CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004C0D0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8004C0D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004C0D8: cvt.w.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8004C0DC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004C0E0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8004C0E4: lwc1        $f6, -0x138($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X138);
    // 0x8004C0E8: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8004C0EC: mul.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8004C0F0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004C0F4: addiu       $t2, $sp, 0x60
    ctx->r10 = ADD32(ctx->r29, 0X60);
    // 0x8004C0F8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8004C0FC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8004C100: addiu       $a1, $a1, 0x6F8
    ctx->r5 = ADD32(ctx->r5, 0X6F8);
    // 0x8004C104: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8004C108: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004C10C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004C110: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8004C114: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8004C118: cvt.w.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8004C11C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004C120: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8004C124: lwc1        $f10, -0x148($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X148);
    // 0x8004C128: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x8004C12C: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8004C130: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C134: addiu       $a2, $a2, 0xB4
    ctx->r6 = ADD32(ctx->r6, 0XB4);
    // 0x8004C138: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8004C13C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8004C140: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8004C144: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8004C148: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004C14C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004C150: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8004C154: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8004C158: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8004C15C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8004C160: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8004C164: mul.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8004C168: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8004C16C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8004C170: nop

    // 0x8004C174: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8004C178: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004C17C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004C180: nop

    // 0x8004C184: cvt.w.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8004C188: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8004C18C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8004C190: jal         0x80077818
    // 0x8004C194: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    func_80077818(rdram, ctx);
        goto after_40;
    // 0x8004C194: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    after_40:
    // 0x8004C198: b           L_8004C2DC
    // 0x8004C19C: nop

        goto L_8004C2DC;
    // 0x8004C19C: nop

L_8004C1A0:
    // 0x8004C1A0: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004C1A4: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004C1A8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004C1AC: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004C1B0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C1B4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004C1B8: addiu       $t3, $sp, 0x5C
    ctx->r11 = ADD32(ctx->r29, 0X5C);
    // 0x8004C1BC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004C1C0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004C1C4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004C1C8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004C1CC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8004C1D0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8004C1D4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8004C1D8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8004C1DC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8004C1E0: addiu       $a1, $a1, 0x590
    ctx->r5 = ADD32(ctx->r5, 0X590);
    // 0x8004C1E4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C1E8: jal         0x80077960
    // 0x8004C1EC: addiu       $a2, $a2, -0x1E
    ctx->r6 = ADD32(ctx->r6, -0X1E);
    func_80077960(rdram, ctx);
        goto after_41;
    // 0x8004C1EC: addiu       $a2, $a2, -0x1E
    ctx->r6 = ADD32(ctx->r6, -0X1E);
    after_41:
    // 0x8004C1F0: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004C1F4: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004C1F8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004C1FC: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004C200: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C204: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004C208: addiu       $t8, $sp, 0x54
    ctx->r24 = ADD32(ctx->r29, 0X54);
    // 0x8004C20C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004C210: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004C214: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004C218: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004C21C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8004C220: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8004C224: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8004C228: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004C22C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004C230: addiu       $a1, $a1, 0x590
    ctx->r5 = ADD32(ctx->r5, 0X590);
    // 0x8004C234: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C238: jal         0x80077960
    // 0x8004C23C: addiu       $a2, $a2, 0xF0
    ctx->r6 = ADD32(ctx->r6, 0XF0);
    func_80077960(rdram, ctx);
        goto after_42;
    // 0x8004C23C: addiu       $a2, $a2, 0xF0
    ctx->r6 = ADD32(ctx->r6, 0XF0);
    after_42:
    // 0x8004C240: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004C244: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004C248: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004C24C: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004C250: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C254: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004C258: addiu       $t3, $sp, 0x68
    ctx->r11 = ADD32(ctx->r29, 0X68);
    // 0x8004C25C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004C260: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004C264: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004C268: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004C26C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8004C270: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8004C274: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8004C278: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8004C27C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8004C280: addiu       $a1, $a1, 0x6F8
    ctx->r5 = ADD32(ctx->r5, 0X6F8);
    // 0x8004C284: jal         0x80077818
    // 0x8004C288: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_80077818(rdram, ctx);
        goto after_43;
    // 0x8004C288: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_43:
    // 0x8004C28C: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004C290: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004C294: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004C298: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004C29C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C2A0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004C2A4: addiu       $t8, $sp, 0x60
    ctx->r24 = ADD32(ctx->r29, 0X60);
    // 0x8004C2A8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004C2AC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004C2B0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004C2B4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004C2B8: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8004C2BC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8004C2C0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8004C2C4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004C2C8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004C2CC: addiu       $a1, $a1, 0x6F8
    ctx->r5 = ADD32(ctx->r5, 0X6F8);
    // 0x8004C2D0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C2D4: jal         0x80077818
    // 0x8004C2D8: addiu       $a2, $a2, 0xB4
    ctx->r6 = ADD32(ctx->r6, 0XB4);
    func_80077818(rdram, ctx);
        goto after_44;
    // 0x8004C2D8: addiu       $a2, $a2, 0xB4
    ctx->r6 = ADD32(ctx->r6, 0XB4);
    after_44:
L_8004C2DC:
    // 0x8004C2DC: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004C2E0: lw          $t3, 0x9DC($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9DC);
    // 0x8004C2E4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004C2E8: addiu       $t2, $t3, 0xD
    ctx->r10 = ADD32(ctx->r11, 0XD);
    // 0x8004C2EC: sw          $t2, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r10;
L_8004C2F0:
    // 0x8004C2F0: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004C2F4: lw          $t9, 0x9CC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9CC);
    // 0x8004C2F8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004C2FC: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x8004C300: sw          $t6, 0x9CC($at)
    MEM_W(0X9CC, ctx->r1) = ctx->r14;
    // 0x8004C304: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x8004C308: bne         $at, $zero, L_8004B760
    if (ctx->r1 != 0) {
        // 0x8004C30C: nop
    
            goto L_8004B760;
    }
    // 0x8004C30C: nop

L_8004C310:
    // 0x8004C310: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8004C314: lw          $t1, -0x158($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X158);
    // 0x8004C318: nop

    // 0x8004C31C: sltiu       $at, $t1, 0xD
    ctx->r1 = ctx->r9 < 0XD ? 1 : 0;
    // 0x8004C320: beq         $at, $zero, L_800504EC
    if (ctx->r1 == 0) {
        // 0x8004C324: nop
    
            goto L_800504EC;
    }
    // 0x8004C324: nop

    // 0x8004C328: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8004C32C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004C330: addu        $at, $at, $t1
    gpr jr_addend_8004C33C = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8004C334: lw          $t1, -0x3608($at)
    ctx->r9 = ADD32(ctx->r1, -0X3608);
    // 0x8004C338: nop

    // 0x8004C33C: jr          $t1
    // 0x8004C340: nop

    switch (jr_addend_8004C33C >> 2) {
        case 0: goto L_8004C344; break;
        case 1: goto L_8004C680; break;
        case 2: goto L_8004CBCC; break;
        case 3: goto L_8004CFD4; break;
        case 4: goto L_8004D12C; break;
        case 5: goto L_8004D2CC; break;
        case 6: goto L_8004DAB4; break;
        case 7: goto L_8004DCD0; break;
        case 8: goto L_8004E300; break;
        case 9: goto L_8004E930; break;
        case 10: goto L_8004EFC0; break;
        case 11: goto L_8004F5F0; break;
        case 12: goto L_8004FC20; break;
        default: switch_error(__func__, 0x8004C33C, 0x800DC9F8);
    }
    // 0x8004C340: nop

L_8004C344:
    // 0x8004C344: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8004C348: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x8004C34C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004C350: addiu       $t5, $t5, -0x3EF4
    ctx->r13 = ADD32(ctx->r13, -0X3EF4);
    // 0x8004C354: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C358: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004C35C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004C360: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004C364: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004C368: sw          $t8, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r24;
    // 0x8004C36C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8004C370: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8004C374: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8004C378: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004C37C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C380: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8004C384: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8004C388: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    // 0x8004C38C: jal         0x80077960
    // 0x8004C390: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_45;
    // 0x8004C390: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_45:
    // 0x8004C394: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004C398: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004C39C: addiu       $a1, $a1, -0x3EEC
    ctx->r5 = ADD32(ctx->r5, -0X3EEC);
    // 0x8004C3A0: jal         0x80077D88
    // 0x8004C3A4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_46;
    // 0x8004C3A4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_46:
    // 0x8004C3A8: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004C3AC: lw          $t3, 0x9D8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9D8);
    // 0x8004C3B0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004C3B4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004C3B8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004C3BC: addiu       $t9, $t9, -0x3EE4
    ctx->r25 = ADD32(ctx->r25, -0X3EE4);
    // 0x8004C3C0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C3C4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004C3C8: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x8004C3CC: addiu       $t1, $zero, 0x50
    ctx->r9 = ADD32(0, 0X50);
    // 0x8004C3D0: addiu       $t8, $zero, 0xB9
    ctx->r24 = ADD32(0, 0XB9);
    // 0x8004C3D4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004C3D8: addu        $t2, $t3, $s0
    ctx->r10 = ADD32(ctx->r11, ctx->r16);
    // 0x8004C3DC: sw          $t2, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r10;
    // 0x8004C3E0: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x8004C3E4: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8004C3E8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8004C3EC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8004C3F0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8004C3F4: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004C3F8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C3FC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004C400: jal         0x80077960
    // 0x8004C404: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    func_80077960(rdram, ctx);
        goto after_47;
    // 0x8004C404: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    after_47:
    // 0x8004C408: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004C40C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004C410: addiu       $a1, $a1, -0x3EE0
    ctx->r5 = ADD32(ctx->r5, -0X3EE0);
    // 0x8004C414: jal         0x80077D88
    // 0x8004C418: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_48;
    // 0x8004C418: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_48:
    // 0x8004C41C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004C420: lw          $t7, 0x9D8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9D8);
    // 0x8004C424: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004C428: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8004C42C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004C430: addiu       $t4, $t4, -0x3EDC
    ctx->r12 = ADD32(ctx->r12, -0X3EDC);
    // 0x8004C434: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C438: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004C43C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004C440: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004C444: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004C448: addu        $t0, $t7, $s0
    ctx->r8 = ADD32(ctx->r15, ctx->r16);
    // 0x8004C44C: sw          $t0, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r8;
    // 0x8004C450: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x8004C454: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8004C458: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8004C45C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8004C460: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004C464: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C468: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8004C46C: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    // 0x8004C470: jal         0x80077960
    // 0x8004C474: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_49;
    // 0x8004C474: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_49:
    // 0x8004C478: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004C47C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004C480: addiu       $a1, $a1, -0x3ECC
    ctx->r5 = ADD32(ctx->r5, -0X3ECC);
    // 0x8004C484: jal         0x80077D88
    // 0x8004C488: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_50;
    // 0x8004C488: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_50:
    // 0x8004C48C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004C490: lw          $t6, 0x9D8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9D8);
    // 0x8004C494: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004C498: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8004C49C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004C4A0: addiu       $t8, $t8, -0x3EBC
    ctx->r24 = ADD32(ctx->r24, -0X3EBC);
    // 0x8004C4A4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C4A8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004C4AC: addiu       $t5, $zero, 0x70
    ctx->r13 = ADD32(0, 0X70);
    // 0x8004C4B0: addiu       $t7, $zero, 0xC3
    ctx->r15 = ADD32(0, 0XC3);
    // 0x8004C4B4: addiu       $t0, $zero, 0x74
    ctx->r8 = ADD32(0, 0X74);
    // 0x8004C4B8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004C4BC: addu        $t1, $t6, $s0
    ctx->r9 = ADD32(ctx->r14, ctx->r16);
    // 0x8004C4C0: sw          $t1, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r9;
    // 0x8004C4C4: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8004C4C8: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8004C4CC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8004C4D0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8004C4D4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004C4D8: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004C4DC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C4E0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004C4E4: jal         0x80077960
    // 0x8004C4E8: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    func_80077960(rdram, ctx);
        goto after_51;
    // 0x8004C4E8: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    after_51:
    // 0x8004C4EC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004C4F0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004C4F4: addiu       $a1, $a1, -0x3EB8
    ctx->r5 = ADD32(ctx->r5, -0X3EB8);
    // 0x8004C4F8: jal         0x80077D88
    // 0x8004C4FC: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_52;
    // 0x8004C4FC: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_52:
    // 0x8004C500: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004C504: lw          $t3, 0x9D8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9D8);
    // 0x8004C508: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004C50C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004C510: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004C514: addiu       $t9, $t9, -0x3EB4
    ctx->r25 = ADD32(ctx->r25, -0X3EB4);
    // 0x8004C518: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C51C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004C520: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004C524: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004C528: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004C52C: addu        $t2, $t3, $s0
    ctx->r10 = ADD32(ctx->r11, ctx->r16);
    // 0x8004C530: sw          $t2, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r10;
    // 0x8004C534: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x8004C538: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8004C53C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8004C540: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8004C544: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004C548: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C54C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004C550: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    // 0x8004C554: jal         0x80077960
    // 0x8004C558: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_53;
    // 0x8004C558: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_53:
    // 0x8004C55C: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004C560: lw          $t5, 0x584($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X584);
    // 0x8004C564: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8004C568: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8004C56C: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x8004C570: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8004C574: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x8004C578: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8004C57C: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8004C580: lw          $t0, -0x10AC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X10AC);
    // 0x8004C584: nop

    // 0x8004C588: andi        $t4, $t0, 0x400
    ctx->r12 = ctx->r8 & 0X400;
    // 0x8004C58C: beq         $t4, $zero, L_8004C59C
    if (ctx->r12 == 0) {
        // 0x8004C590: nop
    
            goto L_8004C59C;
    }
    // 0x8004C590: nop

    // 0x8004C594: jal         0x8004ACB0
    // 0x8004C598: nop

    func_8004ACB0(rdram, ctx);
        goto after_54;
    // 0x8004C598: nop

    after_54:
L_8004C59C:
    // 0x8004C59C: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004C5A0: lw          $t3, 0x584($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X584);
    // 0x8004C5A4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8004C5A8: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x8004C5AC: subu        $t2, $t2, $t3
    ctx->r10 = SUB32(ctx->r10, ctx->r11);
    // 0x8004C5B0: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8004C5B4: subu        $t2, $t2, $t3
    ctx->r10 = SUB32(ctx->r10, ctx->r11);
    // 0x8004C5B8: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8004C5BC: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x8004C5C0: lw          $t9, -0x10AC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X10AC);
    // 0x8004C5C4: nop

    // 0x8004C5C8: andi        $t6, $t9, 0x800
    ctx->r14 = ctx->r25 & 0X800;
    // 0x8004C5CC: beq         $t6, $zero, L_8004C5DC
    if (ctx->r14 == 0) {
        // 0x8004C5D0: nop
    
            goto L_8004C5DC;
    }
    // 0x8004C5D0: nop

    // 0x8004C5D4: jal         0x8004ABE8
    // 0x8004C5D8: nop

    func_8004ABE8(rdram, ctx);
        goto after_55;
    // 0x8004C5D8: nop

    after_55:
L_8004C5DC:
    // 0x8004C5DC: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004C5E0: lw          $t1, 0x584($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X584);
    // 0x8004C5E4: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8004C5E8: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x8004C5EC: subu        $t8, $t8, $t1
    ctx->r24 = SUB32(ctx->r24, ctx->r9);
    // 0x8004C5F0: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8004C5F4: subu        $t8, $t8, $t1
    ctx->r24 = SUB32(ctx->r24, ctx->r9);
    // 0x8004C5F8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8004C5FC: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x8004C600: lw          $t5, -0x10AC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X10AC);
    // 0x8004C604: nop

    // 0x8004C608: andi        $t7, $t5, 0x8000
    ctx->r15 = ctx->r13 & 0X8000;
    // 0x8004C60C: beq         $t7, $zero, L_8004C62C
    if (ctx->r15 == 0) {
        // 0x8004C610: nop
    
            goto L_8004C62C;
    }
    // 0x8004C610: nop

    // 0x8004C614: andi        $t0, $t5, 0x1000
    ctx->r8 = ctx->r13 & 0X1000;
    // 0x8004C618: bne         $t0, $zero, L_8004C62C
    if (ctx->r8 != 0) {
        // 0x8004C61C: nop
    
            goto L_8004C62C;
    }
    // 0x8004C61C: nop

    // 0x8004C620: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8004C624: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004C628: sw          $t4, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r12;
L_8004C62C:
    // 0x8004C62C: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004C630: lw          $t3, 0x584($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X584);
    // 0x8004C634: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8004C638: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x8004C63C: subu        $t2, $t2, $t3
    ctx->r10 = SUB32(ctx->r10, ctx->r11);
    // 0x8004C640: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8004C644: subu        $t2, $t2, $t3
    ctx->r10 = SUB32(ctx->r10, ctx->r11);
    // 0x8004C648: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8004C64C: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x8004C650: lw          $t9, -0x10AC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X10AC);
    // 0x8004C654: nop

    // 0x8004C658: andi        $t6, $t9, 0x4000
    ctx->r14 = ctx->r25 & 0X4000;
    // 0x8004C65C: beq         $t6, $zero, L_80050500
    if (ctx->r14 == 0) {
        // 0x8004C660: nop
    
            goto L_80050500;
    }
    // 0x8004C660: nop

    // 0x8004C664: andi        $t1, $t9, 0x1000
    ctx->r9 = ctx->r25 & 0X1000;
    // 0x8004C668: bne         $t1, $zero, L_80050500
    if (ctx->r9 != 0) {
        // 0x8004C66C: nop
    
            goto L_80050500;
    }
    // 0x8004C66C: nop

    // 0x8004C670: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8004C674: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004C678: b           L_80050500
    // 0x8004C67C: sw          $t8, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r24;
        goto L_80050500;
    // 0x8004C67C: sw          $t8, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r24;
L_8004C680:
    // 0x8004C680: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8004C684: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x8004C688: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004C68C: addiu       $t5, $t5, -0x3EA8
    ctx->r13 = ADD32(ctx->r13, -0X3EA8);
    // 0x8004C690: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C694: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004C698: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004C69C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004C6A0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004C6A4: sw          $t7, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r15;
    // 0x8004C6A8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8004C6AC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8004C6B0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8004C6B4: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004C6B8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C6BC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8004C6C0: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8004C6C4: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    // 0x8004C6C8: jal         0x80077960
    // 0x8004C6CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_56;
    // 0x8004C6CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_56:
    // 0x8004C6D0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004C6D4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004C6D8: addiu       $a1, $a1, -0x3EA0
    ctx->r5 = ADD32(ctx->r5, -0X3EA0);
    // 0x8004C6DC: jal         0x80077D88
    // 0x8004C6E0: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_57;
    // 0x8004C6E0: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_57:
    // 0x8004C6E4: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004C6E8: lw          $t2, 0x9D8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9D8);
    // 0x8004C6EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004C6F0: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004C6F4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004C6F8: addiu       $t9, $t9, -0x3E98
    ctx->r25 = ADD32(ctx->r25, -0X3E98);
    // 0x8004C6FC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C700: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004C704: addiu       $t1, $zero, 0x5A
    ctx->r9 = ADD32(0, 0X5A);
    // 0x8004C708: addiu       $t8, $zero, 0x50
    ctx->r24 = ADD32(0, 0X50);
    // 0x8004C70C: addiu       $t7, $zero, 0xB9
    ctx->r15 = ADD32(0, 0XB9);
    // 0x8004C710: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004C714: addu        $t6, $t2, $s0
    ctx->r14 = ADD32(ctx->r10, ctx->r16);
    // 0x8004C718: sw          $t6, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r14;
    // 0x8004C71C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8004C720: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8004C724: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8004C728: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8004C72C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8004C730: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004C734: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C738: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004C73C: jal         0x80077960
    // 0x8004C740: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    func_80077960(rdram, ctx);
        goto after_58;
    // 0x8004C740: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    after_58:
    // 0x8004C744: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004C748: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004C74C: addiu       $a1, $a1, -0x3E94
    ctx->r5 = ADD32(ctx->r5, -0X3E94);
    // 0x8004C750: jal         0x80077D88
    // 0x8004C754: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_59;
    // 0x8004C754: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_59:
    // 0x8004C758: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004C75C: lw          $t0, 0x9D8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X9D8);
    // 0x8004C760: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004C764: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8004C768: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004C76C: addiu       $t3, $t3, -0x3E90
    ctx->r11 = ADD32(ctx->r11, -0X3E90);
    // 0x8004C770: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C774: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004C778: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004C77C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004C780: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004C784: addu        $t4, $t0, $s0
    ctx->r12 = ADD32(ctx->r8, ctx->r16);
    // 0x8004C788: sw          $t4, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r12;
    // 0x8004C78C: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8004C790: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8004C794: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8004C798: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8004C79C: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004C7A0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C7A4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8004C7A8: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    // 0x8004C7AC: jal         0x80077960
    // 0x8004C7B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_60;
    // 0x8004C7B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_60:
    // 0x8004C7B4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004C7B8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004C7BC: addiu       $a1, $a1, -0x3E80
    ctx->r5 = ADD32(ctx->r5, -0X3E80);
    // 0x8004C7C0: jal         0x80077D88
    // 0x8004C7C4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_61;
    // 0x8004C7C4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_61:
    // 0x8004C7C8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004C7CC: lw          $t1, 0x9D8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9D8);
    // 0x8004C7D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004C7D4: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004C7D8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004C7DC: addiu       $t7, $t7, -0x3E70
    ctx->r15 = ADD32(ctx->r15, -0X3E70);
    // 0x8004C7E0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C7E4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004C7E8: addiu       $t5, $zero, 0x70
    ctx->r13 = ADD32(0, 0X70);
    // 0x8004C7EC: addiu       $t0, $zero, 0xC3
    ctx->r8 = ADD32(0, 0XC3);
    // 0x8004C7F0: addiu       $t4, $zero, 0x74
    ctx->r12 = ADD32(0, 0X74);
    // 0x8004C7F4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004C7F8: addu        $t8, $t1, $s0
    ctx->r24 = ADD32(ctx->r9, ctx->r16);
    // 0x8004C7FC: sw          $t8, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r24;
    // 0x8004C800: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8004C804: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8004C808: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8004C80C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8004C810: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004C814: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004C818: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C81C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8004C820: jal         0x80077960
    // 0x8004C824: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    func_80077960(rdram, ctx);
        goto after_62;
    // 0x8004C824: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    after_62:
    // 0x8004C828: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004C82C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004C830: addiu       $a1, $a1, -0x3E6C
    ctx->r5 = ADD32(ctx->r5, -0X3E6C);
    // 0x8004C834: jal         0x80077D88
    // 0x8004C838: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_63;
    // 0x8004C838: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_63:
    // 0x8004C83C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004C840: lw          $t2, 0x9D8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9D8);
    // 0x8004C844: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004C848: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004C84C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004C850: addiu       $t9, $t9, -0x3E68
    ctx->r25 = ADD32(ctx->r25, -0X3E68);
    // 0x8004C854: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C858: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004C85C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004C860: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004C864: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004C868: addu        $t6, $t2, $s0
    ctx->r14 = ADD32(ctx->r10, ctx->r16);
    // 0x8004C86C: sw          $t6, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r14;
    // 0x8004C870: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8004C874: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8004C878: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8004C87C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8004C880: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004C884: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C888: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004C88C: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    // 0x8004C890: jal         0x80077960
    // 0x8004C894: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_64;
    // 0x8004C894: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_64:
    // 0x8004C898: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004C89C: lw          $t5, 0x9C0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9C0);
    // 0x8004C8A0: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8004C8A4: lbu         $t0, 0x1($t5)
    ctx->r8 = MEM_BU(ctx->r13, 0X1);
    // 0x8004C8A8: lbu         $t4, 0x0($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0X0);
    // 0x8004C8AC: lw          $t1, -0x2B0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2B0);
    // 0x8004C8B0: sll         $t3, $t4, 8
    ctx->r11 = S32(ctx->r12 << 8);
    // 0x8004C8B4: or          $t2, $t0, $t3
    ctx->r10 = ctx->r8 | ctx->r11;
    // 0x8004C8B8: andi        $t6, $t2, 0xFFFF
    ctx->r14 = ctx->r10 & 0XFFFF;
    // 0x8004C8BC: sra         $t9, $t6, 1
    ctx->r25 = S32(SIGNED(ctx->r14) >> 1);
    // 0x8004C8C0: sra         $t8, $t1, 1
    ctx->r24 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8004C8C4: subu        $t7, $t8, $t9
    ctx->r15 = SUB32(ctx->r24, ctx->r25);
    // 0x8004C8C8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004C8CC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004C8D0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004C8D4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004C8D8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004C8DC: addiu       $t4, $zero, 0x46
    ctx->r12 = ADD32(0, 0X46);
    // 0x8004C8E0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C8E4: sw          $t7, 0x9E0($at)
    MEM_W(0X9E0, ctx->r1) = ctx->r15;
    // 0x8004C8E8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C8EC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8004C8F0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8004C8F4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8004C8F8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8004C8FC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8004C900: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8004C904: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8004C908: jal         0x80057460
    // 0x8004C90C: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_80057460(rdram, ctx);
        goto after_65;
    // 0x8004C90C: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_65:
    // 0x8004C910: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004C914: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004C918: addiu       $a1, $a1, -0x3E5C
    ctx->r5 = ADD32(ctx->r5, -0X3E5C);
    // 0x8004C91C: jal         0x80077D88
    // 0x8004C920: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_66;
    // 0x8004C920: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_66:
    // 0x8004C924: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8004C928: lw          $t1, -0x2B0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2B0);
    // 0x8004C92C: sra         $t9, $v0, 1
    ctx->r25 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8004C930: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004C934: sra         $t8, $t1, 1
    ctx->r24 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8004C938: subu        $t5, $t8, $t9
    ctx->r13 = SUB32(ctx->r24, ctx->r25);
    // 0x8004C93C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004C940: addiu       $t7, $t7, -0x3E54
    ctx->r15 = ADD32(ctx->r15, -0X3E54);
    // 0x8004C944: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C948: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004C94C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004C950: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004C954: sw          $t5, 0x9E0($at)
    MEM_W(0X9E0, ctx->r1) = ctx->r13;
    // 0x8004C958: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8004C95C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8004C960: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004C964: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C968: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8004C96C: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x8004C970: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x8004C974: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8004C978: jal         0x80077960
    // 0x8004C97C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_67;
    // 0x8004C97C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_67:
    // 0x8004C980: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004C984: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004C988: addiu       $a1, $a1, -0x3E4C
    ctx->r5 = ADD32(ctx->r5, -0X3E4C);
    // 0x8004C98C: jal         0x80077D88
    // 0x8004C990: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_68;
    // 0x8004C990: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_68:
    // 0x8004C994: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8004C998: lw          $t3, -0x2B0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X2B0);
    // 0x8004C99C: sra         $t6, $v0, 1
    ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8004C9A0: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8004C9A4: sra         $t2, $t3, 1
    ctx->r10 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8004C9A8: subu        $t1, $t2, $t6
    ctx->r9 = SUB32(ctx->r10, ctx->r14);
    // 0x8004C9AC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004C9B0: addiu       $t8, $t8, -0x3E34
    ctx->r24 = ADD32(ctx->r24, -0X3E34);
    // 0x8004C9B4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004C9B8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004C9BC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004C9C0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004C9C4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004C9C8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004C9CC: sw          $t1, 0x9E0($at)
    MEM_W(0X9E0, ctx->r1) = ctx->r9;
    // 0x8004C9D0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8004C9D4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8004C9D8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8004C9DC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8004C9E0: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004C9E4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004C9E8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004C9EC: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8004C9F0: jal         0x80077960
    // 0x8004C9F4: addiu       $a3, $zero, 0x6E
    ctx->r7 = ADD32(0, 0X6E);
    func_80077960(rdram, ctx);
        goto after_69;
    // 0x8004C9F4: addiu       $a3, $zero, 0x6E
    ctx->r7 = ADD32(0, 0X6E);
    after_69:
    // 0x8004C9F8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004C9FC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004CA00: addiu       $a1, $a1, -0x3E1C
    ctx->r5 = ADD32(ctx->r5, -0X3E1C);
    // 0x8004CA04: jal         0x80077D88
    // 0x8004CA08: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_70;
    // 0x8004CA08: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_70:
    // 0x8004CA0C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8004CA10: lw          $t0, -0x2B0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2B0);
    // 0x8004CA14: sra         $t2, $v0, 1
    ctx->r10 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8004CA18: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8004CA1C: sra         $t3, $t0, 1
    ctx->r11 = S32(SIGNED(ctx->r8) >> 1);
    // 0x8004CA20: subu        $t6, $t3, $t2
    ctx->r14 = SUB32(ctx->r11, ctx->r10);
    // 0x8004CA24: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004CA28: addiu       $t1, $t1, -0x3E04
    ctx->r9 = ADD32(ctx->r9, -0X3E04);
    // 0x8004CA2C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004CA30: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004CA34: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004CA38: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004CA3C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004CA40: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004CA44: sw          $t6, 0x9E0($at)
    MEM_W(0X9E0, ctx->r1) = ctx->r14;
    // 0x8004CA48: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8004CA4C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8004CA50: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8004CA54: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8004CA58: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004CA5C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004CA60: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8004CA64: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8004CA68: jal         0x80077960
    // 0x8004CA6C: addiu       $a3, $zero, 0x7D
    ctx->r7 = ADD32(0, 0X7D);
    func_80077960(rdram, ctx);
        goto after_71;
    // 0x8004CA6C: addiu       $a3, $zero, 0x7D
    ctx->r7 = ADD32(0, 0X7D);
    after_71:
    // 0x8004CA70: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004CA74: lw          $t4, 0x584($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X584);
    // 0x8004CA78: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8004CA7C: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x8004CA80: subu        $t0, $t0, $t4
    ctx->r8 = SUB32(ctx->r8, ctx->r12);
    // 0x8004CA84: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8004CA88: subu        $t0, $t0, $t4
    ctx->r8 = SUB32(ctx->r8, ctx->r12);
    // 0x8004CA8C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8004CA90: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x8004CA94: lw          $t3, -0x10AC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X10AC);
    // 0x8004CA98: nop

    // 0x8004CA9C: andi        $t2, $t3, 0x4000
    ctx->r10 = ctx->r11 & 0X4000;
    // 0x8004CAA0: beq         $t2, $zero, L_8004CAB8
    if (ctx->r10 == 0) {
        // 0x8004CAA4: nop
    
            goto L_8004CAB8;
    }
    // 0x8004CAA4: nop

    // 0x8004CAA8: andi        $t6, $t3, 0x1000
    ctx->r14 = ctx->r11 & 0X1000;
    // 0x8004CAAC: bne         $t6, $zero, L_8004CAB8
    if (ctx->r14 != 0) {
        // 0x8004CAB0: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_8004CAB8;
    }
    // 0x8004CAB0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004CAB4: sw          $zero, -0x158($at)
    MEM_W(-0X158, ctx->r1) = 0;
L_8004CAB8:
    // 0x8004CAB8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004CABC: lw          $t1, 0x584($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X584);
    // 0x8004CAC0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8004CAC4: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x8004CAC8: subu        $t8, $t8, $t1
    ctx->r24 = SUB32(ctx->r24, ctx->r9);
    // 0x8004CACC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8004CAD0: subu        $t8, $t8, $t1
    ctx->r24 = SUB32(ctx->r24, ctx->r9);
    // 0x8004CAD4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8004CAD8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8004CADC: lw          $t9, -0x10AC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X10AC);
    // 0x8004CAE0: nop

    // 0x8004CAE4: andi        $t5, $t9, 0x8000
    ctx->r13 = ctx->r25 & 0X8000;
    // 0x8004CAE8: beq         $t5, $zero, L_80050500
    if (ctx->r13 == 0) {
        // 0x8004CAEC: nop
    
            goto L_80050500;
    }
    // 0x8004CAEC: nop

    // 0x8004CAF0: andi        $t7, $t9, 0x1000
    ctx->r15 = ctx->r25 & 0X1000;
    // 0x8004CAF4: bne         $t7, $zero, L_80050500
    if (ctx->r15 != 0) {
        // 0x8004CAF8: nop
    
            goto L_80050500;
    }
    // 0x8004CAF8: nop

    // 0x8004CAFC: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8004CB00: lw          $t4, -0x15C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X15C);
    // 0x8004CB04: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004CB08: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x8004CB0C: lbu         $t0, 0x9B0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X9B0);
    // 0x8004CB10: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004CB14: addiu       $t3, $t3, 0x770
    ctx->r11 = ADD32(ctx->r11, 0X770);
    // 0x8004CB18: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004CB1C: sll         $t2, $t0, 5
    ctx->r10 = S32(ctx->r8 << 5);
    // 0x8004CB20: addu        $a1, $t2, $t3
    ctx->r5 = ADD32(ctx->r10, ctx->r11);
    // 0x8004CB24: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x8004CB28: jal         0x8003B980
    // 0x8004CB2C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    func_8003B980(rdram, ctx);
        goto after_72;
    // 0x8004CB2C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    after_72:
    // 0x8004CB30: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004CB34: sw          $v0, 0x9C4($at)
    MEM_W(0X9C4, ctx->r1) = ctx->r2;
    // 0x8004CB38: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004CB3C: lw          $t6, 0x9C4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9C4);
    // 0x8004CB40: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8004CB44: andi        $t8, $t6, 0xF
    ctx->r24 = ctx->r14 & 0XF;
    // 0x8004CB48: bne         $t8, $at, L_8004CB64
    if (ctx->r24 != ctx->r1) {
        // 0x8004CB4C: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_8004CB64;
    }
    // 0x8004CB4C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004CB50: sw          $zero, -0x154($at)
    MEM_W(-0X154, ctx->r1) = 0;
    // 0x8004CB54: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004CB58: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8004CB5C: b           L_80050500
    // 0x8004CB60: sw          $t5, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r13;
        goto L_80050500;
    // 0x8004CB60: sw          $t5, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r13;
L_8004CB64:
    // 0x8004CB64: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8004CB68: lw          $t0, -0x15C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X15C);
    // 0x8004CB6C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004CB70: lw          $t9, 0x580($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X580);
    // 0x8004CB74: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004CB78: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8004CB7C: lbu         $t2, 0x9B0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X9B0);
    // 0x8004CB80: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004CB84: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x8004CB88: sw          $t7, 0x580($at)
    MEM_W(0X580, ctx->r1) = ctx->r15;
    // 0x8004CB8C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004CB90: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8004CB94: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8004CB98: addiu       $t4, $zero, 0x5F
    ctx->r12 = ADD32(0, 0X5F);
    // 0x8004CB9C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004CBA0: lw          $t6, -0x15C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X15C);
    // 0x8004CBA4: sw          $t4, 0x970($at)
    MEM_W(0X970, ctx->r1) = ctx->r12;
    // 0x8004CBA8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004CBAC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004CBB0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8004CBB4: sb          $t1, 0x9B0($at)
    MEM_B(0X9B0, ctx->r1) = ctx->r9;
    // 0x8004CBB8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004CBBC: jal         0x8004ACB0
    // 0x8004CBC0: sw          $zero, -0x158($at)
    MEM_W(-0X158, ctx->r1) = 0;
    func_8004ACB0(rdram, ctx);
        goto after_73;
    // 0x8004CBC0: sw          $zero, -0x158($at)
    MEM_W(-0X158, ctx->r1) = 0;
    after_73:
    // 0x8004CBC4: b           L_80050500
    // 0x8004CBC8: nop

        goto L_80050500;
    // 0x8004CBC8: nop

L_8004CBCC:
    // 0x8004CBCC: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8004CBD0: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x8004CBD4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004CBD8: addiu       $t5, $t5, -0x3DEC
    ctx->r13 = ADD32(ctx->r13, -0X3DEC);
    // 0x8004CBDC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004CBE0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004CBE4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004CBE8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004CBEC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004CBF0: sw          $t8, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r24;
    // 0x8004CBF4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8004CBF8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8004CBFC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8004CC00: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004CC04: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004CC08: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8004CC0C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8004CC10: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    // 0x8004CC14: jal         0x80077960
    // 0x8004CC18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_74;
    // 0x8004CC18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_74:
    // 0x8004CC1C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004CC20: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004CC24: addiu       $a1, $a1, -0x3DE4
    ctx->r5 = ADD32(ctx->r5, -0X3DE4);
    // 0x8004CC28: jal         0x80077D88
    // 0x8004CC2C: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_75;
    // 0x8004CC2C: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_75:
    // 0x8004CC30: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004CC34: lw          $t2, 0x9D8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9D8);
    // 0x8004CC38: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004CC3C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8004CC40: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004CC44: addiu       $t3, $t3, -0x3DDC
    ctx->r11 = ADD32(ctx->r11, -0X3DDC);
    // 0x8004CC48: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004CC4C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004CC50: addiu       $t1, $zero, 0x5A
    ctx->r9 = ADD32(0, 0X5A);
    // 0x8004CC54: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x8004CC58: addiu       $t8, $zero, 0xB9
    ctx->r24 = ADD32(0, 0XB9);
    // 0x8004CC5C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004CC60: addu        $t4, $t2, $s0
    ctx->r12 = ADD32(ctx->r10, ctx->r16);
    // 0x8004CC64: sw          $t4, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r12;
    // 0x8004CC68: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8004CC6C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8004CC70: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8004CC74: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8004CC78: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8004CC7C: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004CC80: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004CC84: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8004CC88: jal         0x80077960
    // 0x8004CC8C: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    func_80077960(rdram, ctx);
        goto after_76;
    // 0x8004CC8C: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    after_76:
    // 0x8004CC90: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004CC94: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004CC98: addiu       $a1, $a1, -0x3DD8
    ctx->r5 = ADD32(ctx->r5, -0X3DD8);
    // 0x8004CC9C: jal         0x80077D88
    // 0x8004CCA0: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_77;
    // 0x8004CCA0: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_77:
    // 0x8004CCA4: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004CCA8: lw          $t9, 0x9D8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9D8);
    // 0x8004CCAC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004CCB0: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8004CCB4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004CCB8: addiu       $t0, $t0, -0x3DD4
    ctx->r8 = ADD32(ctx->r8, -0X3DD4);
    // 0x8004CCBC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004CCC0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004CCC4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004CCC8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004CCCC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004CCD0: addu        $t7, $t9, $s0
    ctx->r15 = ADD32(ctx->r25, ctx->r16);
    // 0x8004CCD4: sw          $t7, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r15;
    // 0x8004CCD8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8004CCDC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8004CCE0: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8004CCE4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8004CCE8: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004CCEC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004CCF0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8004CCF4: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    // 0x8004CCF8: jal         0x80077960
    // 0x8004CCFC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_78;
    // 0x8004CCFC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_78:
    // 0x8004CD00: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004CD04: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004CD08: addiu       $a1, $a1, -0x3DC4
    ctx->r5 = ADD32(ctx->r5, -0X3DC4);
    // 0x8004CD0C: jal         0x80077D88
    // 0x8004CD10: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_79;
    // 0x8004CD10: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_79:
    // 0x8004CD14: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004CD18: lw          $t1, 0x9D8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9D8);
    // 0x8004CD1C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004CD20: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004CD24: lw          $t8, 0x9C0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9C0);
    // 0x8004CD28: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004CD2C: addu        $t6, $t1, $s0
    ctx->r14 = ADD32(ctx->r9, ctx->r16);
    // 0x8004CD30: sw          $t6, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r14;
    // 0x8004CD34: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x8004CD38: lbu         $t5, 0x1($t8)
    ctx->r13 = MEM_BU(ctx->r24, 0X1);
    // 0x8004CD3C: sll         $t7, $t9, 8
    ctx->r15 = S32(ctx->r25 << 8);
    // 0x8004CD40: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8004CD44: or          $t0, $t5, $t7
    ctx->r8 = ctx->r13 | ctx->r15;
    // 0x8004CD48: lw          $t3, -0x2B0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X2B0);
    // 0x8004CD4C: andi        $t2, $t0, 0xFFFF
    ctx->r10 = ctx->r8 & 0XFFFF;
    // 0x8004CD50: sra         $t4, $t2, 1
    ctx->r12 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8004CD54: sra         $t1, $t3, 1
    ctx->r9 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8004CD58: subu        $t6, $t1, $t4
    ctx->r14 = SUB32(ctx->r9, ctx->r12);
    // 0x8004CD5C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004CD60: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004CD64: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004CD68: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004CD6C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004CD70: addiu       $t9, $zero, 0x46
    ctx->r25 = ADD32(0, 0X46);
    // 0x8004CD74: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004CD78: sw          $t6, 0x9E0($at)
    MEM_W(0X9E0, ctx->r1) = ctx->r14;
    // 0x8004CD7C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004CD80: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004CD84: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004CD88: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8004CD8C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8004CD90: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8004CD94: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8004CD98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8004CD9C: jal         0x80057460
    // 0x8004CDA0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80057460(rdram, ctx);
        goto after_80;
    // 0x8004CDA0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_80:
    // 0x8004CDA4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004CDA8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004CDAC: addiu       $a1, $a1, -0x3DB4
    ctx->r5 = ADD32(ctx->r5, -0X3DB4);
    // 0x8004CDB0: jal         0x80077D88
    // 0x8004CDB4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_81;
    // 0x8004CDB4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_81:
    // 0x8004CDB8: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8004CDBC: lw          $t3, -0x2B0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X2B0);
    // 0x8004CDC0: sra         $t4, $v0, 1
    ctx->r12 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8004CDC4: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8004CDC8: sra         $t1, $t3, 1
    ctx->r9 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8004CDCC: subu        $t8, $t1, $t4
    ctx->r24 = SUB32(ctx->r9, ctx->r12);
    // 0x8004CDD0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004CDD4: addiu       $t6, $t6, -0x3DAC
    ctx->r14 = ADD32(ctx->r14, -0X3DAC);
    // 0x8004CDD8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004CDDC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004CDE0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004CDE4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004CDE8: sw          $t8, 0x9E0($at)
    MEM_W(0X9E0, ctx->r1) = ctx->r24;
    // 0x8004CDEC: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8004CDF0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8004CDF4: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004CDF8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004CDFC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8004CE00: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8004CE04: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x8004CE08: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8004CE0C: jal         0x80077960
    // 0x8004CE10: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_82;
    // 0x8004CE10: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_82:
    // 0x8004CE14: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004CE18: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004CE1C: addiu       $a1, $a1, -0x3DA4
    ctx->r5 = ADD32(ctx->r5, -0X3DA4);
    // 0x8004CE20: jal         0x80077D88
    // 0x8004CE24: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_83;
    // 0x8004CE24: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_83:
    // 0x8004CE28: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8004CE2C: lw          $t7, -0x2B0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2B0);
    // 0x8004CE30: sra         $t2, $v0, 1
    ctx->r10 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8004CE34: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8004CE38: sra         $t0, $t7, 1
    ctx->r8 = S32(SIGNED(ctx->r15) >> 1);
    // 0x8004CE3C: subu        $t3, $t0, $t2
    ctx->r11 = SUB32(ctx->r8, ctx->r10);
    // 0x8004CE40: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004CE44: addiu       $t1, $t1, -0x3D90
    ctx->r9 = ADD32(ctx->r9, -0X3D90);
    // 0x8004CE48: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004CE4C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004CE50: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004CE54: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004CE58: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004CE5C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004CE60: sw          $t3, 0x9E0($at)
    MEM_W(0X9E0, ctx->r1) = ctx->r11;
    // 0x8004CE64: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8004CE68: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8004CE6C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8004CE70: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8004CE74: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004CE78: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004CE7C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8004CE80: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8004CE84: jal         0x80077960
    // 0x8004CE88: addiu       $a3, $zero, 0x6E
    ctx->r7 = ADD32(0, 0X6E);
    func_80077960(rdram, ctx);
        goto after_84;
    // 0x8004CE88: addiu       $a3, $zero, 0x6E
    ctx->r7 = ADD32(0, 0X6E);
    after_84:
    // 0x8004CE8C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004CE90: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004CE94: addiu       $a1, $a1, -0x3D7C
    ctx->r5 = ADD32(ctx->r5, -0X3D7C);
    // 0x8004CE98: jal         0x80077D88
    // 0x8004CE9C: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_85;
    // 0x8004CE9C: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_85:
    // 0x8004CEA0: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8004CEA4: lw          $t5, -0x2B0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X2B0);
    // 0x8004CEA8: sra         $t0, $v0, 1
    ctx->r8 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8004CEAC: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8004CEB0: sra         $t7, $t5, 1
    ctx->r15 = S32(SIGNED(ctx->r13) >> 1);
    // 0x8004CEB4: subu        $t2, $t7, $t0
    ctx->r10 = SUB32(ctx->r15, ctx->r8);
    // 0x8004CEB8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004CEBC: addiu       $t3, $t3, -0x3D64
    ctx->r11 = ADD32(ctx->r11, -0X3D64);
    // 0x8004CEC0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004CEC4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004CEC8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004CECC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004CED0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004CED4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004CED8: sw          $t2, 0x9E0($at)
    MEM_W(0X9E0, ctx->r1) = ctx->r10;
    // 0x8004CEDC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8004CEE0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8004CEE4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8004CEE8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8004CEEC: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004CEF0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004CEF4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8004CEF8: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x8004CEFC: jal         0x80077960
    // 0x8004CF00: addiu       $a3, $zero, 0x7D
    ctx->r7 = ADD32(0, 0X7D);
    func_80077960(rdram, ctx);
        goto after_86;
    // 0x8004CF00: addiu       $a3, $zero, 0x7D
    ctx->r7 = ADD32(0, 0X7D);
    after_86:
    // 0x8004CF04: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004CF08: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004CF0C: addiu       $a1, $a1, -0x3D4C
    ctx->r5 = ADD32(ctx->r5, -0X3D4C);
    // 0x8004CF10: jal         0x80077D88
    // 0x8004CF14: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_87;
    // 0x8004CF14: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_87:
    // 0x8004CF18: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8004CF1C: lw          $t9, -0x2B0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2B0);
    // 0x8004CF20: sra         $t7, $v0, 1
    ctx->r15 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8004CF24: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8004CF28: sra         $t5, $t9, 1
    ctx->r13 = S32(SIGNED(ctx->r25) >> 1);
    // 0x8004CF2C: subu        $t0, $t5, $t7
    ctx->r8 = SUB32(ctx->r13, ctx->r15);
    // 0x8004CF30: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004CF34: addiu       $t2, $t2, -0x3D3C
    ctx->r10 = ADD32(ctx->r10, -0X3D3C);
    // 0x8004CF38: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004CF3C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004CF40: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004CF44: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004CF48: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004CF4C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004CF50: sw          $t0, 0x9E0($at)
    MEM_W(0X9E0, ctx->r1) = ctx->r8;
    // 0x8004CF54: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8004CF58: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8004CF5C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8004CF60: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8004CF64: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004CF68: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004CF6C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8004CF70: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x8004CF74: jal         0x80077960
    // 0x8004CF78: addiu       $a3, $zero, 0x8C
    ctx->r7 = ADD32(0, 0X8C);
    func_80077960(rdram, ctx);
        goto after_88;
    // 0x8004CF78: addiu       $a3, $zero, 0x8C
    ctx->r7 = ADD32(0, 0X8C);
    after_88:
    // 0x8004CF7C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004CF80: lw          $t6, 0x584($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X584);
    // 0x8004CF84: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8004CF88: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8004CF8C: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x8004CF90: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8004CF94: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x8004CF98: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8004CF9C: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x8004CFA0: lw          $t5, -0x10AC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X10AC);
    // 0x8004CFA4: nop

    // 0x8004CFA8: andi        $t7, $t5, 0x8000
    ctx->r15 = ctx->r13 & 0X8000;
    // 0x8004CFAC: beq         $t7, $zero, L_80050500
    if (ctx->r15 == 0) {
        // 0x8004CFB0: nop
    
            goto L_80050500;
    }
    // 0x8004CFB0: nop

    // 0x8004CFB4: andi        $t0, $t5, 0x1000
    ctx->r8 = ctx->r13 & 0X1000;
    // 0x8004CFB8: bne         $t0, $zero, L_80050500
    if (ctx->r8 != 0) {
        // 0x8004CFBC: nop
    
            goto L_80050500;
    }
    // 0x8004CFBC: nop

    // 0x8004CFC0: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8004CFC4: lw          $t2, -0x154($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X154);
    // 0x8004CFC8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004CFCC: b           L_80050500
    // 0x8004CFD0: sw          $t2, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r10;
        goto L_80050500;
    // 0x8004CFD0: sw          $t2, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r10;
L_8004CFD4:
    // 0x8004CFD4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004CFD8: lw          $a1, 0x584($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X584);
    // 0x8004CFDC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004CFE0: jal         0x8003BA0C
    // 0x8004CFE4: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003BA0C(rdram, ctx);
        goto after_89;
    // 0x8004CFE4: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_89:
    // 0x8004CFE8: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x8004CFEC: slti        $at, $t3, 0x10
    ctx->r1 = SIGNED(ctx->r11) < 0X10 ? 1 : 0;
    // 0x8004CFF0: beq         $at, $zero, L_8004D01C
    if (ctx->r1 == 0) {
        // 0x8004CFF4: nop
    
            goto L_8004D01C;
    }
    // 0x8004CFF4: nop

    // 0x8004CFF8: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004CFFC: lw          $a2, 0x584($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X584);
    // 0x8004D000: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004D004: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x8004D008: jal         0x8003BBB0
    // 0x8004D00C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003BBB0(rdram, ctx);
        goto after_90;
    // 0x8004D00C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_90:
    // 0x8004D010: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x8004D014: beq         $at, $zero, L_8004D06C
    if (ctx->r1 == 0) {
        // 0x8004D018: nop
    
            goto L_8004D06C;
    }
    // 0x8004D018: nop

L_8004D01C:
    // 0x8004D01C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8004D020: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D024: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004D028: lw          $t4, 0x580($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X580);
    // 0x8004D02C: sb          $t1, -0x150($at)
    MEM_B(-0X150, ctx->r1) = ctx->r9;
    // 0x8004D030: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8004D034: bne         $t4, $at, L_8004D04C
    if (ctx->r12 != ctx->r1) {
        // 0x8004D038: nop
    
            goto L_8004D04C;
    }
    // 0x8004D038: nop

    // 0x8004D03C: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x8004D040: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D044: b           L_8004D058
    // 0x8004D048: sw          $t8, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r24;
        goto L_8004D058;
    // 0x8004D048: sw          $t8, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r24;
L_8004D04C:
    // 0x8004D04C: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x8004D050: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D054: sw          $t6, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r14;
L_8004D058:
    // 0x8004D058: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D05C: jal         0x8005BE40
    // 0x8004D060: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_91;
    // 0x8004D060: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_91:
    // 0x8004D064: b           L_8005050C
    // 0x8004D068: nop

        goto L_8005050C;
    // 0x8004D068: nop

L_8004D06C:
    // 0x8004D06C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8004D070: lbu         $t9, -0x1A4($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1A4);
    // 0x8004D074: nop

    // 0x8004D078: beq         $t9, $zero, L_8004D09C
    if (ctx->r25 == 0) {
        // 0x8004D07C: nop
    
            goto L_8004D09C;
    }
    // 0x8004D07C: nop

    // 0x8004D080: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8004D084: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D088: sw          $t7, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r15;
    // 0x8004D08C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D090: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x8004D094: b           L_8004D0C0
    // 0x8004D098: sb          $t5, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r13;
        goto L_8004D0C0;
    // 0x8004D098: sb          $t5, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r13;
L_8004D09C:
    // 0x8004D09C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8004D0A0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D0A4: sh          $t0, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r8;
    // 0x8004D0A8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D0AC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8004D0B0: sb          $t2, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r10;
    // 0x8004D0B4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D0B8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x8004D0BC: sw          $t3, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r11;
L_8004D0C0:
    // 0x8004D0C0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D0C4: jal         0x8005BE40
    // 0x8004D0C8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_92;
    // 0x8004D0C8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_92:
    // 0x8004D0CC: jal         0x8004A34C
    // 0x8004D0D0: nop

    func_8004A34C(rdram, ctx);
        goto after_93;
    // 0x8004D0D0: nop

    after_93:
    // 0x8004D0D4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004D0D8: jal         0x800773D0
    // 0x8004D0DC: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    func_800773D0(rdram, ctx);
        goto after_94;
    // 0x8004D0DC: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    after_94:
    // 0x8004D0E0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004D0E4: jal         0x800773D0
    // 0x8004D0E8: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_800773D0(rdram, ctx);
        goto after_95;
    // 0x8004D0E8: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_95:
    // 0x8004D0EC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004D0F0: jal         0x800773D0
    // 0x8004D0F4: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    func_800773D0(rdram, ctx);
        goto after_96;
    // 0x8004D0F4: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    after_96:
    // 0x8004D0F8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004D0FC: jal         0x800773D0
    // 0x8004D100: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    func_800773D0(rdram, ctx);
        goto after_97;
    // 0x8004D100: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    after_97:
    // 0x8004D104: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004D108: lw          $a0, 0x9C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X9C0);
    // 0x8004D10C: jal         0x8007E328
    // 0x8004D110: nop

    func_8007E328(rdram, ctx);
        goto after_98;
    // 0x8004D110: nop

    after_98:
    // 0x8004D114: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D118: sb          $zero, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = 0;
    // 0x8004D11C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D120: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8004D124: b           L_8005050C
    // 0x8004D128: sw          $t1, -0x14C($at)
    MEM_W(-0X14C, ctx->r1) = ctx->r9;
        goto L_8005050C;
    // 0x8004D128: sw          $t1, -0x14C($at)
    MEM_W(-0X14C, ctx->r1) = ctx->r9;
L_8004D12C:
    // 0x8004D12C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D130: jal         0x8005BBFC
    // 0x8004D134: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_99;
    // 0x8004D134: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_99:
    // 0x8004D138: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8004D13C: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x8004D140: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D144: addiu       $t8, $t8, -0x3D2C
    ctx->r24 = ADD32(ctx->r24, -0X3D2C);
    // 0x8004D148: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D14C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004D150: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004D154: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004D158: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004D15C: sw          $t4, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r12;
    // 0x8004D160: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8004D164: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8004D168: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8004D16C: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004D170: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004D174: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004D178: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8004D17C: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    // 0x8004D180: jal         0x80077960
    // 0x8004D184: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_100;
    // 0x8004D184: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_100:
    // 0x8004D188: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004D18C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004D190: addiu       $a1, $a1, -0x3D24
    ctx->r5 = ADD32(ctx->r5, -0X3D24);
    // 0x8004D194: jal         0x80077D88
    // 0x8004D198: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_101;
    // 0x8004D198: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_101:
    // 0x8004D19C: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004D1A0: lw          $t5, 0x9D8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9D8);
    // 0x8004D1A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004D1A8: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8004D1AC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D1B0: addiu       $t2, $t2, -0x3D1C
    ctx->r10 = ADD32(ctx->r10, -0X3D1C);
    // 0x8004D1B4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D1B8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004D1BC: addiu       $t3, $zero, 0x70
    ctx->r11 = ADD32(0, 0X70);
    // 0x8004D1C0: addiu       $t1, $zero, 0xC3
    ctx->r9 = ADD32(0, 0XC3);
    // 0x8004D1C4: addiu       $t4, $zero, 0x74
    ctx->r12 = ADD32(0, 0X74);
    // 0x8004D1C8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004D1CC: addu        $t0, $t5, $s0
    ctx->r8 = ADD32(ctx->r13, ctx->r16);
    // 0x8004D1D0: sw          $t0, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r8;
    // 0x8004D1D4: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x8004D1D8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8004D1DC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8004D1E0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8004D1E4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8004D1E8: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004D1EC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004D1F0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8004D1F4: jal         0x80077960
    // 0x8004D1F8: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    func_80077960(rdram, ctx);
        goto after_102;
    // 0x8004D1F8: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    after_102:
    // 0x8004D1FC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004D200: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004D204: addiu       $a1, $a1, -0x3D18
    ctx->r5 = ADD32(ctx->r5, -0X3D18);
    // 0x8004D208: jal         0x80077D88
    // 0x8004D20C: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_103;
    // 0x8004D20C: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_103:
    // 0x8004D210: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004D214: lw          $t6, 0x9D8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9D8);
    // 0x8004D218: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004D21C: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004D220: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D224: addiu       $t7, $t7, -0x3D14
    ctx->r15 = ADD32(ctx->r15, -0X3D14);
    // 0x8004D228: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D22C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004D230: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004D234: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004D238: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004D23C: addu        $t9, $t6, $s0
    ctx->r25 = ADD32(ctx->r14, ctx->r16);
    // 0x8004D240: sw          $t9, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r25;
    // 0x8004D244: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x8004D248: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8004D24C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8004D250: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004D254: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004D258: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004D25C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8004D260: addiu       $a3, $zero, 0x10C
    ctx->r7 = ADD32(0, 0X10C);
    // 0x8004D264: jal         0x80077960
    // 0x8004D268: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_104;
    // 0x8004D268: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_104:
    // 0x8004D26C: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004D270: lw          $t3, 0x584($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X584);
    // 0x8004D274: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8004D278: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x8004D27C: subu        $t1, $t1, $t3
    ctx->r9 = SUB32(ctx->r9, ctx->r11);
    // 0x8004D280: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8004D284: subu        $t1, $t1, $t3
    ctx->r9 = SUB32(ctx->r9, ctx->r11);
    // 0x8004D288: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8004D28C: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8004D290: lw          $t4, -0x10AC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X10AC);
    // 0x8004D294: nop

    // 0x8004D298: andi        $t8, $t4, 0x4000
    ctx->r24 = ctx->r12 & 0X4000;
    // 0x8004D29C: beq         $t8, $zero, L_8004D2B0
    if (ctx->r24 == 0) {
        // 0x8004D2A0: nop
    
            goto L_8004D2B0;
    }
    // 0x8004D2A0: nop

    // 0x8004D2A4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8004D2A8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D2AC: sw          $t6, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r14;
L_8004D2B0:
    // 0x8004D2B0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D2B4: jal         0x8005BE40
    // 0x8004D2B8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_105;
    // 0x8004D2B8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_105:
    // 0x8004D2BC: jal         0x800B6650
    // 0x8004D2C0: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_106;
    // 0x8004D2C0: nop

    after_106:
    // 0x8004D2C4: b           L_80050500
    // 0x8004D2C8: nop

        goto L_80050500;
    // 0x8004D2C8: nop

L_8004D2CC:
    // 0x8004D2CC: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x8004D2D0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D2D4: sw          $t9, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r25;
    // 0x8004D2D8: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8004D2DC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D2E0: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x8004D2E4: addiu       $t5, $t5, -0x3D08
    ctx->r13 = ADD32(ctx->r13, -0X3D08);
    // 0x8004D2E8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D2EC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004D2F0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004D2F4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004D2F8: sw          $t7, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r15;
    // 0x8004D2FC: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8004D300: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8004D304: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004D308: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004D30C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8004D310: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8004D314: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x8004D318: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8004D31C: jal         0x80077960
    // 0x8004D320: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_107;
    // 0x8004D320: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_107:
    // 0x8004D324: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004D328: lw          $t3, 0x9DC($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9DC);
    // 0x8004D32C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8004D330: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D334: addiu       $t4, $t4, -0x3D00
    ctx->r12 = ADD32(ctx->r12, -0X3D00);
    // 0x8004D338: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D33C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004D340: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004D344: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004D348: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004D34C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004D350: addiu       $t1, $t3, 0x1E
    ctx->r9 = ADD32(ctx->r11, 0X1E);
    // 0x8004D354: sw          $t1, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r9;
    // 0x8004D358: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8004D35C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8004D360: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8004D364: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8004D368: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8004D36C: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004D370: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004D374: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8004D378: jal         0x80077960
    // 0x8004D37C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_80077960(rdram, ctx);
        goto after_108;
    // 0x8004D37C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_108:
    // 0x8004D380: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004D384: lw          $t5, 0x9DC($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9DC);
    // 0x8004D388: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8004D38C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D390: addiu       $t2, $t2, -0x3CE4
    ctx->r10 = ADD32(ctx->r10, -0X3CE4);
    // 0x8004D394: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D398: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004D39C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004D3A0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004D3A4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004D3A8: addiu       $t0, $t5, 0xF
    ctx->r8 = ADD32(ctx->r13, 0XF);
    // 0x8004D3AC: sw          $t0, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r8;
    // 0x8004D3B0: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x8004D3B4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8004D3B8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8004D3BC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8004D3C0: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004D3C4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004D3C8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8004D3CC: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8004D3D0: jal         0x80077960
    // 0x8004D3D4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_109;
    // 0x8004D3D4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_109:
    // 0x8004D3D8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004D3DC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004D3E0: addiu       $a1, $a1, -0x3CD4
    ctx->r5 = ADD32(ctx->r5, -0X3CD4);
    // 0x8004D3E4: jal         0x80077D88
    // 0x8004D3E8: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_110;
    // 0x8004D3E8: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_110:
    // 0x8004D3EC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004D3F0: lw          $t8, 0x9D8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9D8);
    // 0x8004D3F4: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004D3F8: lw          $a2, 0x584($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X584);
    // 0x8004D3FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004D400: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D404: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004D408: addu        $t6, $t8, $s0
    ctx->r14 = ADD32(ctx->r24, ctx->r16);
    // 0x8004D40C: sw          $t6, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r14;
    // 0x8004D410: addiu       $a1, $a1, -0x3CC0
    ctx->r5 = ADD32(ctx->r5, -0X3CC0);
    // 0x8004D414: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8004D418: jal         0x800B62D4
    // 0x8004D41C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    sprintf_recomp(rdram, ctx);
        goto after_111;
    // 0x8004D41C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_111:
    // 0x8004D420: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004D424: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004D428: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004D42C: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004D430: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D434: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004D438: addiu       $t9, $sp, 0x4C
    ctx->r25 = ADD32(ctx->r29, 0X4C);
    // 0x8004D43C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004D440: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004D444: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004D448: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8004D44C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8004D450: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8004D454: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004D458: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004D45C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004D460: jal         0x80077960
    // 0x8004D464: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_112;
    // 0x8004D464: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_112:
    // 0x8004D468: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004D46C: lw          $t2, 0x9DC($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9DC);
    // 0x8004D470: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8004D474: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D478: addiu       $t1, $t1, -0x3CBC
    ctx->r9 = ADD32(ctx->r9, -0X3CBC);
    // 0x8004D47C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D480: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004D484: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004D488: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004D48C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004D490: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004D494: addiu       $t3, $t2, 0x14
    ctx->r11 = ADD32(ctx->r10, 0X14);
    // 0x8004D498: sw          $t3, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r11;
    // 0x8004D49C: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x8004D4A0: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8004D4A4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8004D4A8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8004D4AC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8004D4B0: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004D4B4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004D4B8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8004D4BC: jal         0x80077960
    // 0x8004D4C0: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_80077960(rdram, ctx);
        goto after_113;
    // 0x8004D4C0: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_113:
    // 0x8004D4C4: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004D4C8: lw          $t7, 0x9DC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9DC);
    // 0x8004D4CC: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8004D4D0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D4D4: addiu       $t0, $t0, -0x3C9C
    ctx->r8 = ADD32(ctx->r8, -0X3C9C);
    // 0x8004D4D8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D4DC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004D4E0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004D4E4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004D4E8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004D4EC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004D4F0: addiu       $t5, $t7, 0xF
    ctx->r13 = ADD32(ctx->r15, 0XF);
    // 0x8004D4F4: sw          $t5, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r13;
    // 0x8004D4F8: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x8004D4FC: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8004D500: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8004D504: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8004D508: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8004D50C: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004D510: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004D514: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8004D518: jal         0x80077960
    // 0x8004D51C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_80077960(rdram, ctx);
        goto after_114;
    // 0x8004D51C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_114:
    // 0x8004D520: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004D524: lw          $t8, 0x9DC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9DC);
    // 0x8004D528: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004D52C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D530: addiu       $t9, $t9, -0x3C88
    ctx->r25 = ADD32(ctx->r25, -0X3C88);
    // 0x8004D534: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D538: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004D53C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004D540: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004D544: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004D548: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004D54C: addiu       $t6, $t8, 0xF
    ctx->r14 = ADD32(ctx->r24, 0XF);
    // 0x8004D550: sw          $t6, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r14;
    // 0x8004D554: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8004D558: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8004D55C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8004D560: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8004D564: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8004D568: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004D56C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004D570: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004D574: jal         0x80077960
    // 0x8004D578: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_80077960(rdram, ctx);
        goto after_115;
    // 0x8004D578: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_115:
    // 0x8004D57C: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004D580: lw          $t3, 0x9DC($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9DC);
    // 0x8004D584: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D588: addiu       $t1, $t3, 0x1E
    ctx->r9 = ADD32(ctx->r11, 0X1E);
    // 0x8004D58C: sw          $t1, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r9;
    // 0x8004D590: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8004D594: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D598: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x8004D59C: addiu       $t8, $t8, -0x3C70
    ctx->r24 = ADD32(ctx->r24, -0X3C70);
    // 0x8004D5A0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D5A4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004D5A8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004D5AC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004D5B0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004D5B4: sw          $t4, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r12;
    // 0x8004D5B8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8004D5BC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8004D5C0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8004D5C4: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004D5C8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004D5CC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004D5D0: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8004D5D4: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8004D5D8: jal         0x80077960
    // 0x8004D5DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_116;
    // 0x8004D5DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_116:
    // 0x8004D5E0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004D5E4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004D5E8: addiu       $a1, $a1, -0x3C68
    ctx->r5 = ADD32(ctx->r5, -0X3C68);
    // 0x8004D5EC: jal         0x80077D88
    // 0x8004D5F0: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_117;
    // 0x8004D5F0: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_117:
    // 0x8004D5F4: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004D5F8: lw          $t5, 0x9D8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9D8);
    // 0x8004D5FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004D600: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004D604: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8004D608: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D60C: addiu       $t2, $t2, -0x3C60
    ctx->r10 = ADD32(ctx->r10, -0X3C60);
    // 0x8004D610: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004D614: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D618: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004D61C: addiu       $t3, $zero, 0x5A
    ctx->r11 = ADD32(0, 0X5A);
    // 0x8004D620: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x8004D624: addiu       $t1, $zero, 0xB9
    ctx->r9 = ADD32(0, 0XB9);
    // 0x8004D628: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004D62C: addu        $t0, $t5, $s0
    ctx->r8 = ADD32(ctx->r13, ctx->r16);
    // 0x8004D630: sw          $t0, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r8;
    // 0x8004D634: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x8004D638: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8004D63C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8004D640: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8004D644: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8004D648: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004D64C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004D650: jal         0x80077960
    // 0x8004D654: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80077960(rdram, ctx);
        goto after_118;
    // 0x8004D654: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_118:
    // 0x8004D658: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004D65C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004D660: addiu       $a1, $a1, -0x3C5C
    ctx->r5 = ADD32(ctx->r5, -0X3C5C);
    // 0x8004D664: jal         0x80077D88
    // 0x8004D668: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_119;
    // 0x8004D668: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_119:
    // 0x8004D66C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004D670: lw          $t6, 0x9D8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9D8);
    // 0x8004D674: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004D678: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004D67C: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004D680: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D684: addiu       $t7, $t7, -0x3C58
    ctx->r15 = ADD32(ctx->r15, -0X3C58);
    // 0x8004D688: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004D68C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D690: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004D694: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004D698: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004D69C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004D6A0: addu        $t9, $t6, $s0
    ctx->r25 = ADD32(ctx->r14, ctx->r16);
    // 0x8004D6A4: sw          $t9, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r25;
    // 0x8004D6A8: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x8004D6AC: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8004D6B0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8004D6B4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004D6B8: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004D6BC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004D6C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8004D6C4: jal         0x80077960
    // 0x8004D6C8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_120;
    // 0x8004D6C8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_120:
    // 0x8004D6CC: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004D6D0: lw          $t3, 0x9DC($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9DC);
    // 0x8004D6D4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D6D8: addiu       $t4, $t3, 0xF
    ctx->r12 = ADD32(ctx->r11, 0XF);
    // 0x8004D6DC: sw          $t4, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r12;
    // 0x8004D6E0: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8004D6E4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D6E8: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x8004D6EC: addiu       $t8, $t8, -0x3C4C
    ctx->r24 = ADD32(ctx->r24, -0X3C4C);
    // 0x8004D6F0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D6F4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004D6F8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004D6FC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004D700: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004D704: sw          $t1, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r9;
    // 0x8004D708: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8004D70C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8004D710: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8004D714: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004D718: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004D71C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004D720: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    // 0x8004D724: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8004D728: jal         0x80077960
    // 0x8004D72C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_121;
    // 0x8004D72C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_121:
    // 0x8004D730: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004D734: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004D738: addiu       $a1, $a1, -0x3C44
    ctx->r5 = ADD32(ctx->r5, -0X3C44);
    // 0x8004D73C: jal         0x80077D88
    // 0x8004D740: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_122;
    // 0x8004D740: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_122:
    // 0x8004D744: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004D748: lw          $t5, 0x9D8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9D8);
    // 0x8004D74C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004D750: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004D754: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8004D758: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D75C: addiu       $t2, $t2, -0x3C3C
    ctx->r10 = ADD32(ctx->r10, -0X3C3C);
    // 0x8004D760: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004D764: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D768: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004D76C: addiu       $t3, $zero, 0x70
    ctx->r11 = ADD32(0, 0X70);
    // 0x8004D770: addiu       $t1, $zero, 0xC3
    ctx->r9 = ADD32(0, 0XC3);
    // 0x8004D774: addiu       $t4, $zero, 0x74
    ctx->r12 = ADD32(0, 0X74);
    // 0x8004D778: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004D77C: addu        $t0, $t5, $s0
    ctx->r8 = ADD32(ctx->r13, ctx->r16);
    // 0x8004D780: sw          $t0, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r8;
    // 0x8004D784: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x8004D788: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8004D78C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8004D790: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8004D794: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8004D798: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004D79C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004D7A0: jal         0x80077960
    // 0x8004D7A4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80077960(rdram, ctx);
        goto after_123;
    // 0x8004D7A4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_123:
    // 0x8004D7A8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004D7AC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004D7B0: addiu       $a1, $a1, -0x3C38
    ctx->r5 = ADD32(ctx->r5, -0X3C38);
    // 0x8004D7B4: jal         0x80077D88
    // 0x8004D7B8: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_124;
    // 0x8004D7B8: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_124:
    // 0x8004D7BC: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004D7C0: lw          $t6, 0x9D8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9D8);
    // 0x8004D7C4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004D7C8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004D7CC: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004D7D0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D7D4: addiu       $t7, $t7, -0x3C34
    ctx->r15 = ADD32(ctx->r15, -0X3C34);
    // 0x8004D7D8: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004D7DC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D7E0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004D7E4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004D7E8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004D7EC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004D7F0: addu        $t9, $t6, $s0
    ctx->r25 = ADD32(ctx->r14, ctx->r16);
    // 0x8004D7F4: sw          $t9, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r25;
    // 0x8004D7F8: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x8004D7FC: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8004D800: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8004D804: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004D808: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004D80C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004D810: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8004D814: jal         0x80077960
    // 0x8004D818: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_125;
    // 0x8004D818: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_125:
    // 0x8004D81C: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004D820: lw          $t3, 0x9DC($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9DC);
    // 0x8004D824: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D828: addiu       $t1, $t3, 0xF
    ctx->r9 = ADD32(ctx->r11, 0XF);
    // 0x8004D82C: sw          $t1, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r9;
    // 0x8004D830: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8004D834: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D838: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x8004D83C: addiu       $t8, $t8, -0x3C20
    ctx->r24 = ADD32(ctx->r24, -0X3C20);
    // 0x8004D840: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004D844: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004D848: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004D84C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004D850: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004D854: sw          $t4, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r12;
    // 0x8004D858: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8004D85C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8004D860: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8004D864: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004D868: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004D86C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004D870: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8004D874: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8004D878: jal         0x80077960
    // 0x8004D87C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_126;
    // 0x8004D87C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_126:
    // 0x8004D880: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004D884: lw          $t5, 0x584($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X584);
    // 0x8004D888: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8004D88C: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x8004D890: subu        $t0, $t0, $t5
    ctx->r8 = SUB32(ctx->r8, ctx->r13);
    // 0x8004D894: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8004D898: subu        $t0, $t0, $t5
    ctx->r8 = SUB32(ctx->r8, ctx->r13);
    // 0x8004D89C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8004D8A0: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8004D8A4: lw          $t2, -0x10AC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X10AC);
    // 0x8004D8A8: nop

    // 0x8004D8AC: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x8004D8B0: beq         $t3, $zero, L_8004D9AC
    if (ctx->r11 == 0) {
        // 0x8004D8B4: nop
    
            goto L_8004D9AC;
    }
    // 0x8004D8B4: nop

    // 0x8004D8B8: andi        $t4, $t2, 0x1000
    ctx->r12 = ctx->r10 & 0X1000;
    // 0x8004D8BC: bne         $t4, $zero, L_8004D9AC
    if (ctx->r12 != 0) {
        // 0x8004D8C0: nop
    
            goto L_8004D9AC;
    }
    // 0x8004D8C0: nop

    // 0x8004D8C4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004D8C8: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x8004D8CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004D8D0: jal         0x8003BB24
    // 0x8004D8D4: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    func_8003BB24(rdram, ctx);
        goto after_127;
    // 0x8004D8D4: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_127:
    // 0x8004D8D8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004D8DC: sw          $v0, 0x9C4($at)
    MEM_W(0X9C4, ctx->r1) = ctx->r2;
    // 0x8004D8E0: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004D8E4: lw          $t1, 0x9C4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9C4);
    // 0x8004D8E8: nop

    // 0x8004D8EC: andi        $t8, $t1, 0xF
    ctx->r24 = ctx->r9 & 0XF;
    // 0x8004D8F0: bne         $t8, $zero, L_8004D908
    if (ctx->r24 != 0) {
        // 0x8004D8F4: nop
    
            goto L_8004D908;
    }
    // 0x8004D8F4: nop

    // 0x8004D8F8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8004D8FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D900: b           L_8004D9AC
    // 0x8004D904: sw          $t6, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r14;
        goto L_8004D9AC;
    // 0x8004D904: sw          $t6, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r14;
L_8004D908:
    // 0x8004D908: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004D90C: lw          $t7, 0x9C4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9C4);
    // 0x8004D910: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8004D914: sra         $t0, $t7, 4
    ctx->r8 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8004D918: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D91C: andi        $t3, $t0, 0xF
    ctx->r11 = ctx->r8 & 0XF;
    // 0x8004D920: sw          $t9, -0x154($at)
    MEM_W(-0X154, ctx->r1) = ctx->r25;
    // 0x8004D924: addiu       $t2, $t3, -0x1
    ctx->r10 = ADD32(ctx->r11, -0X1);
    // 0x8004D928: sltiu       $at, $t2, 0xB
    ctx->r1 = ctx->r10 < 0XB ? 1 : 0;
    // 0x8004D92C: beq         $at, $zero, L_8004D9A0
    if (ctx->r1 == 0) {
        // 0x8004D930: nop
    
            goto L_8004D9A0;
    }
    // 0x8004D930: nop

    // 0x8004D934: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8004D938: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004D93C: addu        $at, $at, $t2
    gpr jr_addend_8004D948 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8004D940: lw          $t2, -0x35D4($at)
    ctx->r10 = ADD32(ctx->r1, -0X35D4);
    // 0x8004D944: nop

    // 0x8004D948: jr          $t2
    // 0x8004D94C: nop

    switch (jr_addend_8004D948 >> 2) {
        case 0: goto L_8004D950; break;
        case 1: goto L_8004D960; break;
        case 2: goto L_8004D9A0; break;
        case 3: goto L_8004D970; break;
        case 4: goto L_8004D9A0; break;
        case 5: goto L_8004D9A0; break;
        case 6: goto L_8004D9A0; break;
        case 7: goto L_8004D9A0; break;
        case 8: goto L_8004D9A0; break;
        case 9: goto L_8004D980; break;
        case 10: goto L_8004D990; break;
        default: switch_error(__func__, 0x8004D948, 0x800DCA2C);
    }
    // 0x8004D94C: nop

L_8004D950:
    // 0x8004D950: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x8004D954: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D958: b           L_8004D9AC
    // 0x8004D95C: sw          $t4, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r12;
        goto L_8004D9AC;
    // 0x8004D95C: sw          $t4, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r12;
L_8004D960:
    // 0x8004D960: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x8004D964: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D968: b           L_8004D9AC
    // 0x8004D96C: sw          $t5, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r13;
        goto L_8004D9AC;
    // 0x8004D96C: sw          $t5, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r13;
L_8004D970:
    // 0x8004D970: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x8004D974: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D978: b           L_8004D9AC
    // 0x8004D97C: sw          $t1, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r9;
        goto L_8004D9AC;
    // 0x8004D97C: sw          $t1, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r9;
L_8004D980:
    // 0x8004D980: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8004D984: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D988: b           L_8004D9AC
    // 0x8004D98C: sw          $t8, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r24;
        goto L_8004D9AC;
    // 0x8004D98C: sw          $t8, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r24;
L_8004D990:
    // 0x8004D990: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8004D994: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D998: b           L_8004D9AC
    // 0x8004D99C: sw          $t6, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r14;
        goto L_8004D9AC;
    // 0x8004D99C: sw          $t6, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r14;
L_8004D9A0:
    // 0x8004D9A0: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x8004D9A4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D9A8: sw          $t9, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r25;
L_8004D9AC:
    // 0x8004D9AC: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004D9B0: lw          $t7, 0x584($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X584);
    // 0x8004D9B4: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8004D9B8: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x8004D9BC: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x8004D9C0: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8004D9C4: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x8004D9C8: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8004D9CC: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x8004D9D0: lw          $t3, -0x10AC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X10AC);
    // 0x8004D9D4: nop

    // 0x8004D9D8: andi        $t2, $t3, 0x4000
    ctx->r10 = ctx->r11 & 0X4000;
    // 0x8004D9DC: beq         $t2, $zero, L_80050500
    if (ctx->r10 == 0) {
        // 0x8004D9E0: nop
    
            goto L_80050500;
    }
    // 0x8004D9E0: nop

    // 0x8004D9E4: andi        $t4, $t3, 0x1000
    ctx->r12 = ctx->r11 & 0X1000;
    // 0x8004D9E8: bne         $t4, $zero, L_80050500
    if (ctx->r12 != 0) {
        // 0x8004D9EC: nop
    
            goto L_80050500;
    }
    // 0x8004D9EC: nop

    // 0x8004D9F0: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8004D9F4: lbu         $t1, -0x1A4($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1A4);
    // 0x8004D9F8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x8004D9FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DA00: beq         $t1, $zero, L_8004DA24
    if (ctx->r9 == 0) {
        // 0x8004DA04: sw          $t5, -0x158($at)
        MEM_W(-0X158, ctx->r1) = ctx->r13;
            goto L_8004DA24;
    }
    // 0x8004DA04: sw          $t5, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r13;
    // 0x8004DA08: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8004DA0C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DA10: sw          $t8, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r24;
    // 0x8004DA14: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DA18: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x8004DA1C: b           L_8004DA48
    // 0x8004DA20: sb          $t6, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r14;
        goto L_8004DA48;
    // 0x8004DA20: sb          $t6, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r14;
L_8004DA24:
    // 0x8004DA24: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8004DA28: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DA2C: sh          $t9, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r25;
    // 0x8004DA30: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DA34: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8004DA38: sb          $t7, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r15;
    // 0x8004DA3C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DA40: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x8004DA44: sw          $t0, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r8;
L_8004DA48:
    // 0x8004DA48: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004DA4C: jal         0x8005BE40
    // 0x8004DA50: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_128;
    // 0x8004DA50: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_128:
    // 0x8004DA54: jal         0x8004A34C
    // 0x8004DA58: nop

    func_8004A34C(rdram, ctx);
        goto after_129;
    // 0x8004DA58: nop

    after_129:
    // 0x8004DA5C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004DA60: jal         0x800773D0
    // 0x8004DA64: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    func_800773D0(rdram, ctx);
        goto after_130;
    // 0x8004DA64: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    after_130:
    // 0x8004DA68: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004DA6C: jal         0x800773D0
    // 0x8004DA70: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_800773D0(rdram, ctx);
        goto after_131;
    // 0x8004DA70: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_131:
    // 0x8004DA74: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004DA78: jal         0x800773D0
    // 0x8004DA7C: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    func_800773D0(rdram, ctx);
        goto after_132;
    // 0x8004DA7C: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    after_132:
    // 0x8004DA80: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004DA84: jal         0x800773D0
    // 0x8004DA88: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    func_800773D0(rdram, ctx);
        goto after_133;
    // 0x8004DA88: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    after_133:
    // 0x8004DA8C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004DA90: lw          $a0, 0x9C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X9C0);
    // 0x8004DA94: jal         0x8007E328
    // 0x8004DA98: nop

    func_8007E328(rdram, ctx);
        goto after_134;
    // 0x8004DA98: nop

    after_134:
    // 0x8004DA9C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DAA0: sb          $zero, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = 0;
    // 0x8004DAA4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DAA8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8004DAAC: b           L_8005050C
    // 0x8004DAB0: sw          $t2, -0x14C($at)
    MEM_W(-0X14C, ctx->r1) = ctx->r10;
        goto L_8005050C;
    // 0x8004DAB0: sw          $t2, -0x14C($at)
    MEM_W(-0X14C, ctx->r1) = ctx->r10;
L_8004DAB4:
    // 0x8004DAB4: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8004DAB8: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x8004DABC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004DAC0: addiu       $t4, $t4, -0x3C00
    ctx->r12 = ADD32(ctx->r12, -0X3C00);
    // 0x8004DAC4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004DAC8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004DACC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004DAD0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004DAD4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004DAD8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004DADC: sw          $t3, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r11;
    // 0x8004DAE0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8004DAE4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8004DAE8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8004DAEC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004DAF0: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004DAF4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004DAF8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8004DAFC: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8004DB00: jal         0x80077960
    // 0x8004DB04: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    func_80077960(rdram, ctx);
        goto after_135;
    // 0x8004DB04: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    after_135:
    // 0x8004DB08: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004DB0C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004DB10: addiu       $t9, $t9, -0x3BE4
    ctx->r25 = ADD32(ctx->r25, -0X3BE4);
    // 0x8004DB14: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004DB18: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004DB1C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004DB20: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004DB24: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004DB28: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004DB2C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004DB30: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8004DB34: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8004DB38: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8004DB3C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8004DB40: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004DB44: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004DB48: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004DB4C: jal         0x80077960
    // 0x8004DB50: addiu       $a3, $zero, 0x6E
    ctx->r7 = ADD32(0, 0X6E);
    func_80077960(rdram, ctx);
        goto after_136;
    // 0x8004DB50: addiu       $a3, $zero, 0x6E
    ctx->r7 = ADD32(0, 0X6E);
    after_136:
    // 0x8004DB54: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004DB58: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004DB5C: addiu       $a1, $a1, -0x3BD8
    ctx->r5 = ADD32(ctx->r5, -0X3BD8);
    // 0x8004DB60: jal         0x80077D88
    // 0x8004DB64: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_137;
    // 0x8004DB64: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_137:
    // 0x8004DB68: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004DB6C: lw          $t4, 0x9D8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X9D8);
    // 0x8004DB70: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004DB74: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8004DB78: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004DB7C: addiu       $t1, $t1, -0x3BCC
    ctx->r9 = ADD32(ctx->r9, -0X3BCC);
    // 0x8004DB80: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004DB84: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004DB88: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004DB8C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004DB90: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x8004DB94: sw          $t5, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r13;
    // 0x8004DB98: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x8004DB9C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8004DBA0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8004DBA4: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004DBA8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004DBAC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8004DBB0: addiu       $a3, $zero, 0x6E
    ctx->r7 = ADD32(0, 0X6E);
    // 0x8004DBB4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8004DBB8: jal         0x80077960
    // 0x8004DBBC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_138;
    // 0x8004DBBC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_138:
    // 0x8004DBC0: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004DBC4: lw          $t9, 0x584($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X584);
    // 0x8004DBC8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8004DBCC: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8004DBD0: subu        $t7, $t7, $t9
    ctx->r15 = SUB32(ctx->r15, ctx->r25);
    // 0x8004DBD4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8004DBD8: subu        $t7, $t7, $t9
    ctx->r15 = SUB32(ctx->r15, ctx->r25);
    // 0x8004DBDC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8004DBE0: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8004DBE4: lw          $t0, -0x10AC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X10AC);
    // 0x8004DBE8: nop

    // 0x8004DBEC: andi        $t2, $t0, 0x1000
    ctx->r10 = ctx->r8 & 0X1000;
    // 0x8004DBF0: beq         $t2, $zero, L_80050500
    if (ctx->r10 == 0) {
        // 0x8004DBF4: nop
    
            goto L_80050500;
    }
    // 0x8004DBF4: nop

    // 0x8004DBF8: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8004DBFC: lbu         $t3, -0x1A4($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1A4);
    // 0x8004DC00: nop

    // 0x8004DC04: beq         $t3, $zero, L_8004DC28
    if (ctx->r11 == 0) {
        // 0x8004DC08: nop
    
            goto L_8004DC28;
    }
    // 0x8004DC08: nop

    // 0x8004DC0C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8004DC10: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DC14: sw          $t4, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r12;
    // 0x8004DC18: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DC1C: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x8004DC20: b           L_8004DC4C
    // 0x8004DC24: sb          $t5, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r13;
        goto L_8004DC4C;
    // 0x8004DC24: sb          $t5, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r13;
L_8004DC28:
    // 0x8004DC28: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8004DC2C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DC30: sh          $t1, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r9;
    // 0x8004DC34: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DC38: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8004DC3C: sb          $t8, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r24;
    // 0x8004DC40: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DC44: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8004DC48: sw          $t6, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r14;
L_8004DC4C:
    // 0x8004DC4C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004DC50: jal         0x8005BE40
    // 0x8004DC54: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_139;
    // 0x8004DC54: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_139:
    // 0x8004DC58: jal         0x8004A34C
    // 0x8004DC5C: nop

    func_8004A34C(rdram, ctx);
        goto after_140;
    // 0x8004DC5C: nop

    after_140:
    // 0x8004DC60: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004DC64: jal         0x800773D0
    // 0x8004DC68: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    func_800773D0(rdram, ctx);
        goto after_141;
    // 0x8004DC68: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    after_141:
    // 0x8004DC6C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004DC70: jal         0x800773D0
    // 0x8004DC74: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_800773D0(rdram, ctx);
        goto after_142;
    // 0x8004DC74: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_142:
    // 0x8004DC78: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004DC7C: jal         0x800773D0
    // 0x8004DC80: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    func_800773D0(rdram, ctx);
        goto after_143;
    // 0x8004DC80: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    after_143:
    // 0x8004DC84: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004DC88: jal         0x800773D0
    // 0x8004DC8C: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    func_800773D0(rdram, ctx);
        goto after_144;
    // 0x8004DC8C: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    after_144:
    // 0x8004DC90: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004DC94: lw          $a0, 0x9C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X9C0);
    // 0x8004DC98: jal         0x8007E328
    // 0x8004DC9C: nop

    func_8007E328(rdram, ctx);
        goto after_145;
    // 0x8004DC9C: nop

    after_145:
    // 0x8004DCA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DCA4: sb          $zero, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = 0;
    // 0x8004DCA8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DCAC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8004DCB0: sb          $t9, -0x1DC($at)
    MEM_B(-0X1DC, ctx->r1) = ctx->r25;
    // 0x8004DCB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DCB8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8004DCBC: sw          $t7, -0x14C($at)
    MEM_W(-0X14C, ctx->r1) = ctx->r15;
    // 0x8004DCC0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DCC4: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8004DCC8: b           L_8005050C
    // 0x8004DCCC: sw          $t0, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r8;
        goto L_8005050C;
    // 0x8004DCCC: sw          $t0, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r8;
L_8004DCD0:
    // 0x8004DCD0: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
    // 0x8004DCD4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004DCD8: sw          $t2, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r10;
    // 0x8004DCDC: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8004DCE0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004DCE4: addiu       $t3, $zero, 0x50
    ctx->r11 = ADD32(0, 0X50);
    // 0x8004DCE8: addiu       $t4, $t4, -0x3BC0
    ctx->r12 = ADD32(ctx->r12, -0X3BC0);
    // 0x8004DCEC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004DCF0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004DCF4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004DCF8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004DCFC: sw          $t3, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r11;
    // 0x8004DD00: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8004DD04: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004DD08: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004DD0C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004DD10: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8004DD14: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004DD18: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x8004DD1C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8004DD20: jal         0x80077960
    // 0x8004DD24: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_146;
    // 0x8004DD24: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_146:
    // 0x8004DD28: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004DD2C: lw          $t8, 0x9DC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9DC);
    // 0x8004DD30: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004DD34: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004DD38: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004DD3C: addiu       $t9, $t9, -0x3BB8
    ctx->r25 = ADD32(ctx->r25, -0X3BB8);
    // 0x8004DD40: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004DD44: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004DD48: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004DD4C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004DD50: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004DD54: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004DD58: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004DD5C: addiu       $t6, $t8, 0x14
    ctx->r14 = ADD32(ctx->r24, 0X14);
    // 0x8004DD60: sw          $t6, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r14;
    // 0x8004DD64: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8004DD68: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8004DD6C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8004DD70: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8004DD74: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8004DD78: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004DD7C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004DD80: jal         0x80077960
    // 0x8004DD84: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80077960(rdram, ctx);
        goto after_147;
    // 0x8004DD84: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_147:
    // 0x8004DD88: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004DD8C: lw          $t4, 0x9DC($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X9DC);
    // 0x8004DD90: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004DD94: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8004DD98: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004DD9C: addiu       $t1, $t1, -0x3B9C
    ctx->r9 = ADD32(ctx->r9, -0X3B9C);
    // 0x8004DDA0: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004DDA4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004DDA8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004DDAC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004DDB0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004DDB4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004DDB8: addiu       $t5, $t4, 0xF
    ctx->r13 = ADD32(ctx->r12, 0XF);
    // 0x8004DDBC: sw          $t5, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r13;
    // 0x8004DDC0: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x8004DDC4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8004DDC8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8004DDCC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8004DDD0: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004DDD4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004DDD8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8004DDDC: jal         0x80077960
    // 0x8004DDE0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_148;
    // 0x8004DDE0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_148:
    // 0x8004DDE4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004DDE8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004DDEC: addiu       $a1, $a1, -0x3B8C
    ctx->r5 = ADD32(ctx->r5, -0X3B8C);
    // 0x8004DDF0: jal         0x80077D88
    // 0x8004DDF4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_149;
    // 0x8004DDF4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_149:
    // 0x8004DDF8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004DDFC: lw          $t7, 0x9D8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9D8);
    // 0x8004DE00: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004DE04: lw          $a2, 0x584($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X584);
    // 0x8004DE08: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004DE0C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004DE10: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004DE14: addu        $t0, $t7, $s0
    ctx->r8 = ADD32(ctx->r15, ctx->r16);
    // 0x8004DE18: sw          $t0, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r8;
    // 0x8004DE1C: addiu       $a1, $a1, -0x3B7C
    ctx->r5 = ADD32(ctx->r5, -0X3B7C);
    // 0x8004DE20: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8004DE24: jal         0x800B62D4
    // 0x8004DE28: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    sprintf_recomp(rdram, ctx);
        goto after_150;
    // 0x8004DE28: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_150:
    // 0x8004DE2C: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004DE30: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004DE34: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004DE38: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004DE3C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004DE40: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004DE44: addiu       $t2, $sp, 0x4C
    ctx->r10 = ADD32(ctx->r29, 0X4C);
    // 0x8004DE48: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004DE4C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004DE50: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004DE54: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8004DE58: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8004DE5C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8004DE60: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8004DE64: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004DE68: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004DE6C: jal         0x80077960
    // 0x8004DE70: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_151;
    // 0x8004DE70: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_151:
    // 0x8004DE74: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004DE78: lw          $t1, 0x9DC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9DC);
    // 0x8004DE7C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004DE80: addiu       $t8, $t1, 0x19
    ctx->r24 = ADD32(ctx->r9, 0X19);
    // 0x8004DE84: sw          $t8, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r24;
    // 0x8004DE88: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004DE8C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004DE90: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x8004DE94: addiu       $t9, $t9, -0x3B78
    ctx->r25 = ADD32(ctx->r25, -0X3B78);
    // 0x8004DE98: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004DE9C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004DEA0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004DEA4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004DEA8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004DEAC: sw          $t6, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r14;
    // 0x8004DEB0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8004DEB4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8004DEB8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8004DEBC: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004DEC0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004DEC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004DEC8: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8004DECC: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004DED0: jal         0x80077960
    // 0x8004DED4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_152;
    // 0x8004DED4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_152:
    // 0x8004DED8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004DEDC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004DEE0: addiu       $a1, $a1, -0x3B70
    ctx->r5 = ADD32(ctx->r5, -0X3B70);
    // 0x8004DEE4: jal         0x80077D88
    // 0x8004DEE8: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_153;
    // 0x8004DEE8: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_153:
    // 0x8004DEEC: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004DEF0: lw          $t3, 0x9D8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9D8);
    // 0x8004DEF4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004DEF8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004DEFC: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8004DF00: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004DF04: addiu       $t5, $t5, -0x3B68
    ctx->r13 = ADD32(ctx->r13, -0X3B68);
    // 0x8004DF08: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004DF0C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004DF10: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004DF14: addiu       $t1, $zero, 0x5A
    ctx->r9 = ADD32(0, 0X5A);
    // 0x8004DF18: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x8004DF1C: addiu       $t8, $zero, 0xB9
    ctx->r24 = ADD32(0, 0XB9);
    // 0x8004DF20: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004DF24: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x8004DF28: sw          $t4, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r12;
    // 0x8004DF2C: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8004DF30: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8004DF34: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8004DF38: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8004DF3C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8004DF40: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004DF44: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004DF48: jal         0x80077960
    // 0x8004DF4C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80077960(rdram, ctx);
        goto after_154;
    // 0x8004DF4C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_154:
    // 0x8004DF50: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004DF54: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004DF58: addiu       $a1, $a1, -0x3B64
    ctx->r5 = ADD32(ctx->r5, -0X3B64);
    // 0x8004DF5C: jal         0x80077D88
    // 0x8004DF60: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_155;
    // 0x8004DF60: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_155:
    // 0x8004DF64: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004DF68: lw          $t7, 0x9D8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9D8);
    // 0x8004DF6C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004DF70: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004DF74: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8004DF78: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004DF7C: addiu       $t2, $t2, -0x3B60
    ctx->r10 = ADD32(ctx->r10, -0X3B60);
    // 0x8004DF80: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004DF84: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004DF88: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004DF8C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004DF90: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004DF94: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004DF98: addu        $t0, $t7, $s0
    ctx->r8 = ADD32(ctx->r15, ctx->r16);
    // 0x8004DF9C: sw          $t0, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r8;
    // 0x8004DFA0: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x8004DFA4: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8004DFA8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8004DFAC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8004DFB0: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004DFB4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004DFB8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8004DFBC: jal         0x80077960
    // 0x8004DFC0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_156;
    // 0x8004DFC0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_156:
    // 0x8004DFC4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004DFC8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004DFCC: addiu       $a1, $a1, -0x3B50
    ctx->r5 = ADD32(ctx->r5, -0X3B50);
    // 0x8004DFD0: jal         0x80077D88
    // 0x8004DFD4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_157;
    // 0x8004DFD4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_157:
    // 0x8004DFD8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004DFDC: lw          $t1, 0x9D8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9D8);
    // 0x8004DFE0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004DFE4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004DFE8: lw          $t8, 0x9DC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9DC);
    // 0x8004DFEC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004DFF0: addu        $t6, $t1, $s0
    ctx->r14 = ADD32(ctx->r9, ctx->r16);
    // 0x8004DFF4: sw          $t6, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r14;
    // 0x8004DFF8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004DFFC: addiu       $t9, $t8, 0xF
    ctx->r25 = ADD32(ctx->r24, 0XF);
    // 0x8004E000: sw          $t9, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r25;
    // 0x8004E004: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8004E008: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E00C: addiu       $t7, $zero, 0x19
    ctx->r15 = ADD32(0, 0X19);
    // 0x8004E010: addiu       $t0, $t0, -0x3B40
    ctx->r8 = ADD32(ctx->r8, -0X3B40);
    // 0x8004E014: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E018: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004E01C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004E020: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004E024: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004E028: sw          $t7, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r15;
    // 0x8004E02C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8004E030: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8004E034: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8004E038: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004E03C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004E040: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8004E044: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x8004E048: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004E04C: jal         0x80077960
    // 0x8004E050: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_158;
    // 0x8004E050: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_158:
    // 0x8004E054: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E058: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004E05C: addiu       $a1, $a1, -0x3B38
    ctx->r5 = ADD32(ctx->r5, -0X3B38);
    // 0x8004E060: jal         0x80077D88
    // 0x8004E064: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_159;
    // 0x8004E064: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_159:
    // 0x8004E068: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004E06C: lw          $t5, 0x9D8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9D8);
    // 0x8004E070: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004E074: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004E078: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8004E07C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E080: addiu       $t6, $t6, -0x3B30
    ctx->r14 = ADD32(ctx->r14, -0X3B30);
    // 0x8004E084: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004E088: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E08C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004E090: addiu       $t8, $zero, 0x70
    ctx->r24 = ADD32(0, 0X70);
    // 0x8004E094: addiu       $t7, $zero, 0xC3
    ctx->r15 = ADD32(0, 0XC3);
    // 0x8004E098: addiu       $t9, $zero, 0x74
    ctx->r25 = ADD32(0, 0X74);
    // 0x8004E09C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004E0A0: addu        $t1, $t5, $s0
    ctx->r9 = ADD32(ctx->r13, ctx->r16);
    // 0x8004E0A4: sw          $t1, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r9;
    // 0x8004E0A8: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8004E0AC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8004E0B0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8004E0B4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8004E0B8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8004E0BC: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004E0C0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004E0C4: jal         0x80077960
    // 0x8004E0C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80077960(rdram, ctx);
        goto after_160;
    // 0x8004E0C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_160:
    // 0x8004E0CC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E0D0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004E0D4: addiu       $a1, $a1, -0x3B2C
    ctx->r5 = ADD32(ctx->r5, -0X3B2C);
    // 0x8004E0D8: jal         0x80077D88
    // 0x8004E0DC: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_161;
    // 0x8004E0DC: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_161:
    // 0x8004E0E0: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004E0E4: lw          $t2, 0x9D8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9D8);
    // 0x8004E0E8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004E0EC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004E0F0: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8004E0F4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E0F8: addiu       $t4, $t4, -0x3B28
    ctx->r12 = ADD32(ctx->r12, -0X3B28);
    // 0x8004E0FC: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004E100: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E104: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004E108: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004E10C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004E110: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004E114: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x8004E118: sw          $t3, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r11;
    // 0x8004E11C: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8004E120: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8004E124: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8004E128: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004E12C: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004E130: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004E134: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8004E138: jal         0x80077960
    // 0x8004E13C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_162;
    // 0x8004E13C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_162:
    // 0x8004E140: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004E144: lw          $t8, 0x9DC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9DC);
    // 0x8004E148: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E14C: addiu       $t7, $t8, 0xF
    ctx->r15 = ADD32(ctx->r24, 0XF);
    // 0x8004E150: sw          $t7, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r15;
    // 0x8004E154: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8004E158: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E15C: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x8004E160: addiu       $t0, $t0, -0x3B14
    ctx->r8 = ADD32(ctx->r8, -0X3B14);
    // 0x8004E164: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E168: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004E16C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004E170: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004E174: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004E178: sw          $t9, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r25;
    // 0x8004E17C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8004E180: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8004E184: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8004E188: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004E18C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004E190: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8004E194: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8004E198: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004E19C: jal         0x80077960
    // 0x8004E1A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_163;
    // 0x8004E1A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_163:
    // 0x8004E1A4: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004E1A8: lw          $t5, 0x584($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X584);
    // 0x8004E1AC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8004E1B0: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x8004E1B4: subu        $t1, $t1, $t5
    ctx->r9 = SUB32(ctx->r9, ctx->r13);
    // 0x8004E1B8: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8004E1BC: subu        $t1, $t1, $t5
    ctx->r9 = SUB32(ctx->r9, ctx->r13);
    // 0x8004E1C0: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8004E1C4: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x8004E1C8: lw          $t6, -0x10AC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10AC);
    // 0x8004E1CC: nop

    // 0x8004E1D0: andi        $t8, $t6, 0x4000
    ctx->r24 = ctx->r14 & 0X4000;
    // 0x8004E1D4: beq         $t8, $zero, L_8004E2AC
    if (ctx->r24 == 0) {
        // 0x8004E1D8: nop
    
            goto L_8004E2AC;
    }
    // 0x8004E1D8: nop

    // 0x8004E1DC: andi        $t9, $t6, 0x1000
    ctx->r25 = ctx->r14 & 0X1000;
    // 0x8004E1E0: bne         $t9, $zero, L_8004E2AC
    if (ctx->r25 != 0) {
        // 0x8004E1E4: nop
    
            goto L_8004E2AC;
    }
    // 0x8004E1E4: nop

    // 0x8004E1E8: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8004E1EC: lbu         $t0, -0x1A4($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1A4);
    // 0x8004E1F0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8004E1F4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E1F8: beq         $t0, $zero, L_8004E21C
    if (ctx->r8 == 0) {
        // 0x8004E1FC: sw          $t7, -0x158($at)
        MEM_W(-0X158, ctx->r1) = ctx->r15;
            goto L_8004E21C;
    }
    // 0x8004E1FC: sw          $t7, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r15;
    // 0x8004E200: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8004E204: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E208: sw          $t2, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r10;
    // 0x8004E20C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E210: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x8004E214: b           L_8004E240
    // 0x8004E218: sb          $t3, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r11;
        goto L_8004E240;
    // 0x8004E218: sb          $t3, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r11;
L_8004E21C:
    // 0x8004E21C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8004E220: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E224: sh          $t4, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r12;
    // 0x8004E228: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E22C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8004E230: sb          $t5, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r13;
    // 0x8004E234: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E238: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x8004E23C: sw          $t1, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r9;
L_8004E240:
    // 0x8004E240: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E244: jal         0x8005BE40
    // 0x8004E248: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_164;
    // 0x8004E248: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_164:
    // 0x8004E24C: jal         0x8004A34C
    // 0x8004E250: nop

    func_8004A34C(rdram, ctx);
        goto after_165;
    // 0x8004E250: nop

    after_165:
    // 0x8004E254: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E258: jal         0x800773D0
    // 0x8004E25C: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    func_800773D0(rdram, ctx);
        goto after_166;
    // 0x8004E25C: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    after_166:
    // 0x8004E260: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E264: jal         0x800773D0
    // 0x8004E268: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_800773D0(rdram, ctx);
        goto after_167;
    // 0x8004E268: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_167:
    // 0x8004E26C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E270: jal         0x800773D0
    // 0x8004E274: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    func_800773D0(rdram, ctx);
        goto after_168;
    // 0x8004E274: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    after_168:
    // 0x8004E278: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E27C: jal         0x800773D0
    // 0x8004E280: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    func_800773D0(rdram, ctx);
        goto after_169;
    // 0x8004E280: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    after_169:
    // 0x8004E284: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E288: lw          $a0, 0x9C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X9C0);
    // 0x8004E28C: jal         0x8007E328
    // 0x8004E290: nop

    func_8007E328(rdram, ctx);
        goto after_170;
    // 0x8004E290: nop

    after_170:
    // 0x8004E294: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E298: sb          $zero, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = 0;
    // 0x8004E29C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E2A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8004E2A4: b           L_8005050C
    // 0x8004E2A8: sw          $t8, -0x14C($at)
    MEM_W(-0X14C, ctx->r1) = ctx->r24;
        goto L_8005050C;
    // 0x8004E2A8: sw          $t8, -0x14C($at)
    MEM_W(-0X14C, ctx->r1) = ctx->r24;
L_8004E2AC:
    // 0x8004E2AC: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004E2B0: lw          $t6, 0x584($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X584);
    // 0x8004E2B4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8004E2B8: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8004E2BC: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x8004E2C0: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8004E2C4: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x8004E2C8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8004E2CC: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x8004E2D0: lw          $t7, -0x10AC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10AC);
    // 0x8004E2D4: nop

    // 0x8004E2D8: andi        $t0, $t7, 0x8000
    ctx->r8 = ctx->r15 & 0X8000;
    // 0x8004E2DC: beq         $t0, $zero, L_80050500
    if (ctx->r8 == 0) {
        // 0x8004E2E0: nop
    
            goto L_80050500;
    }
    // 0x8004E2E0: nop

    // 0x8004E2E4: andi        $t2, $t7, 0x1000
    ctx->r10 = ctx->r15 & 0X1000;
    // 0x8004E2E8: bne         $t2, $zero, L_80050500
    if (ctx->r10 != 0) {
        // 0x8004E2EC: nop
    
            goto L_80050500;
    }
    // 0x8004E2EC: nop

    // 0x8004E2F0: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x8004E2F4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E2F8: b           L_80050500
    // 0x8004E2FC: sw          $t3, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r11;
        goto L_80050500;
    // 0x8004E2FC: sw          $t3, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r11;
L_8004E300:
    // 0x8004E300: addiu       $t4, $zero, 0x19
    ctx->r12 = ADD32(0, 0X19);
    // 0x8004E304: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E308: sw          $t4, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r12;
    // 0x8004E30C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8004E310: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E314: addiu       $t5, $zero, 0x50
    ctx->r13 = ADD32(0, 0X50);
    // 0x8004E318: addiu       $t1, $t1, -0x3AF4
    ctx->r9 = ADD32(ctx->r9, -0X3AF4);
    // 0x8004E31C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E320: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004E324: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004E328: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004E32C: sw          $t5, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r13;
    // 0x8004E330: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8004E334: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8004E338: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004E33C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004E340: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8004E344: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004E348: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x8004E34C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8004E350: jal         0x80077960
    // 0x8004E354: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_171;
    // 0x8004E354: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_171:
    // 0x8004E358: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004E35C: lw          $t9, 0x9DC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9DC);
    // 0x8004E360: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004E364: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004E368: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E36C: addiu       $t7, $t7, -0x3AEC
    ctx->r15 = ADD32(ctx->r15, -0X3AEC);
    // 0x8004E370: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004E374: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E378: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004E37C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004E380: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004E384: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004E388: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004E38C: addiu       $t0, $t9, 0x14
    ctx->r8 = ADD32(ctx->r25, 0X14);
    // 0x8004E390: sw          $t0, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r8;
    // 0x8004E394: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x8004E398: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8004E39C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8004E3A0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8004E3A4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8004E3A8: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004E3AC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004E3B0: jal         0x80077960
    // 0x8004E3B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80077960(rdram, ctx);
        goto after_172;
    // 0x8004E3B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_172:
    // 0x8004E3B8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004E3BC: lw          $t1, 0x9DC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9DC);
    // 0x8004E3C0: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004E3C4: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8004E3C8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E3CC: addiu       $t6, $t6, -0x3AD0
    ctx->r14 = ADD32(ctx->r14, -0X3AD0);
    // 0x8004E3D0: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004E3D4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E3D8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004E3DC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004E3E0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004E3E4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004E3E8: addiu       $t8, $t1, 0x14
    ctx->r24 = ADD32(ctx->r9, 0X14);
    // 0x8004E3EC: sw          $t8, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r24;
    // 0x8004E3F0: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8004E3F4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8004E3F8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8004E3FC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8004E400: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004E404: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004E408: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8004E40C: jal         0x80077960
    // 0x8004E410: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_173;
    // 0x8004E410: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_173:
    // 0x8004E414: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E418: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004E41C: addiu       $a1, $a1, -0x3AC0
    ctx->r5 = ADD32(ctx->r5, -0X3AC0);
    // 0x8004E420: jal         0x80077D88
    // 0x8004E424: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_174;
    // 0x8004E424: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_174:
    // 0x8004E428: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004E42C: lw          $t2, 0x9D8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9D8);
    // 0x8004E430: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004E434: lw          $a2, 0x584($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X584);
    // 0x8004E438: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004E43C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E440: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004E444: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x8004E448: sw          $t3, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r11;
    // 0x8004E44C: addiu       $a1, $a1, -0x3AB0
    ctx->r5 = ADD32(ctx->r5, -0X3AB0);
    // 0x8004E450: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8004E454: jal         0x800B62D4
    // 0x8004E458: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    sprintf_recomp(rdram, ctx);
        goto after_175;
    // 0x8004E458: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_175:
    // 0x8004E45C: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004E460: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004E464: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004E468: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004E46C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E470: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004E474: addiu       $t4, $sp, 0x4C
    ctx->r12 = ADD32(ctx->r29, 0X4C);
    // 0x8004E478: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004E47C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004E480: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004E484: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8004E488: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8004E48C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004E490: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8004E494: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004E498: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004E49C: jal         0x80077960
    // 0x8004E4A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_176;
    // 0x8004E4A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_176:
    // 0x8004E4A4: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004E4A8: lw          $t6, 0x9DC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9DC);
    // 0x8004E4AC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E4B0: addiu       $t9, $t6, 0x19
    ctx->r25 = ADD32(ctx->r14, 0X19);
    // 0x8004E4B4: sw          $t9, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r25;
    // 0x8004E4B8: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004E4BC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E4C0: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
    // 0x8004E4C4: addiu       $t7, $t7, -0x3AAC
    ctx->r15 = ADD32(ctx->r15, -0X3AAC);
    // 0x8004E4C8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E4CC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004E4D0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004E4D4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004E4D8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004E4DC: sw          $t0, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r8;
    // 0x8004E4E0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8004E4E4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8004E4E8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8004E4EC: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004E4F0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004E4F4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8004E4F8: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x8004E4FC: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004E500: jal         0x80077960
    // 0x8004E504: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_177;
    // 0x8004E504: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_177:
    // 0x8004E508: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E50C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004E510: addiu       $a1, $a1, -0x3AA4
    ctx->r5 = ADD32(ctx->r5, -0X3AA4);
    // 0x8004E514: jal         0x80077D88
    // 0x8004E518: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_178;
    // 0x8004E518: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_178:
    // 0x8004E51C: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004E520: lw          $t5, 0x9D8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9D8);
    // 0x8004E524: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004E528: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004E52C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8004E530: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E534: addiu       $t8, $t8, -0x3A9C
    ctx->r24 = ADD32(ctx->r24, -0X3A9C);
    // 0x8004E538: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004E53C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E540: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004E544: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x8004E548: addiu       $t0, $zero, 0x50
    ctx->r8 = ADD32(0, 0X50);
    // 0x8004E54C: addiu       $t9, $zero, 0xB9
    ctx->r25 = ADD32(0, 0XB9);
    // 0x8004E550: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004E554: addu        $t1, $t5, $s0
    ctx->r9 = ADD32(ctx->r13, ctx->r16);
    // 0x8004E558: sw          $t1, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r9;
    // 0x8004E55C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8004E560: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8004E564: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8004E568: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8004E56C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8004E570: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004E574: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004E578: jal         0x80077960
    // 0x8004E57C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80077960(rdram, ctx);
        goto after_179;
    // 0x8004E57C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_179:
    // 0x8004E580: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E584: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004E588: addiu       $a1, $a1, -0x3A98
    ctx->r5 = ADD32(ctx->r5, -0X3A98);
    // 0x8004E58C: jal         0x80077D88
    // 0x8004E590: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_180;
    // 0x8004E590: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_180:
    // 0x8004E594: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004E598: lw          $t2, 0x9D8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9D8);
    // 0x8004E59C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004E5A0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004E5A4: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8004E5A8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E5AC: addiu       $t4, $t4, -0x3A94
    ctx->r12 = ADD32(ctx->r12, -0X3A94);
    // 0x8004E5B0: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004E5B4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E5B8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004E5BC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004E5C0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004E5C4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004E5C8: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x8004E5CC: sw          $t3, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r11;
    // 0x8004E5D0: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8004E5D4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8004E5D8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8004E5DC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004E5E0: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004E5E4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004E5E8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8004E5EC: jal         0x80077960
    // 0x8004E5F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_181;
    // 0x8004E5F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_181:
    // 0x8004E5F4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E5F8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004E5FC: addiu       $a1, $a1, -0x3A84
    ctx->r5 = ADD32(ctx->r5, -0X3A84);
    // 0x8004E600: jal         0x80077D88
    // 0x8004E604: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_182;
    // 0x8004E604: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_182:
    // 0x8004E608: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004E60C: lw          $t6, 0x9D8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9D8);
    // 0x8004E610: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004E614: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004E618: lw          $t9, 0x9DC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9DC);
    // 0x8004E61C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E620: addu        $t0, $t6, $s0
    ctx->r8 = ADD32(ctx->r14, ctx->r16);
    // 0x8004E624: sw          $t0, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r8;
    // 0x8004E628: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E62C: addiu       $t7, $t9, 0xF
    ctx->r15 = ADD32(ctx->r25, 0XF);
    // 0x8004E630: sw          $t7, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r15;
    // 0x8004E634: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8004E638: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E63C: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
    // 0x8004E640: addiu       $t3, $t3, -0x3A74
    ctx->r11 = ADD32(ctx->r11, -0X3A74);
    // 0x8004E644: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E648: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004E64C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004E650: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004E654: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004E658: sw          $t2, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r10;
    // 0x8004E65C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8004E660: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8004E664: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8004E668: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004E66C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004E670: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8004E674: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8004E678: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004E67C: jal         0x80077960
    // 0x8004E680: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_183;
    // 0x8004E680: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_183:
    // 0x8004E684: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E688: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004E68C: addiu       $a1, $a1, -0x3A6C
    ctx->r5 = ADD32(ctx->r5, -0X3A6C);
    // 0x8004E690: jal         0x80077D88
    // 0x8004E694: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_184;
    // 0x8004E694: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_184:
    // 0x8004E698: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004E69C: lw          $t8, 0x9D8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9D8);
    // 0x8004E6A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004E6A4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004E6A8: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8004E6AC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E6B0: addiu       $t0, $t0, -0x3A64
    ctx->r8 = ADD32(ctx->r8, -0X3A64);
    // 0x8004E6B4: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004E6B8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E6BC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004E6C0: addiu       $t9, $zero, 0x70
    ctx->r25 = ADD32(0, 0X70);
    // 0x8004E6C4: addiu       $t2, $zero, 0xC3
    ctx->r10 = ADD32(0, 0XC3);
    // 0x8004E6C8: addiu       $t7, $zero, 0x74
    ctx->r15 = ADD32(0, 0X74);
    // 0x8004E6CC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004E6D0: addu        $t6, $t8, $s0
    ctx->r14 = ADD32(ctx->r24, ctx->r16);
    // 0x8004E6D4: sw          $t6, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r14;
    // 0x8004E6D8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8004E6DC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8004E6E0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8004E6E4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8004E6E8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8004E6EC: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004E6F0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004E6F4: jal         0x80077960
    // 0x8004E6F8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80077960(rdram, ctx);
        goto after_185;
    // 0x8004E6F8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_185:
    // 0x8004E6FC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E700: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004E704: addiu       $a1, $a1, -0x3A60
    ctx->r5 = ADD32(ctx->r5, -0X3A60);
    // 0x8004E708: jal         0x80077D88
    // 0x8004E70C: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_186;
    // 0x8004E70C: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_186:
    // 0x8004E710: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004E714: lw          $t4, 0x9D8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X9D8);
    // 0x8004E718: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004E71C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004E720: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8004E724: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E728: addiu       $t1, $t1, -0x3A5C
    ctx->r9 = ADD32(ctx->r9, -0X3A5C);
    // 0x8004E72C: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004E730: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E734: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004E738: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004E73C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004E740: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004E744: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x8004E748: sw          $t5, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r13;
    // 0x8004E74C: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x8004E750: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8004E754: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8004E758: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8004E75C: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004E760: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004E764: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8004E768: jal         0x80077960
    // 0x8004E76C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_187;
    // 0x8004E76C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_187:
    // 0x8004E770: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004E774: lw          $t9, 0x9DC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9DC);
    // 0x8004E778: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E77C: addiu       $t2, $t9, 0xF
    ctx->r10 = ADD32(ctx->r25, 0XF);
    // 0x8004E780: sw          $t2, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r10;
    // 0x8004E784: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8004E788: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E78C: addiu       $t7, $zero, 0x19
    ctx->r15 = ADD32(0, 0X19);
    // 0x8004E790: addiu       $t3, $t3, -0x3A48
    ctx->r11 = ADD32(ctx->r11, -0X3A48);
    // 0x8004E794: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E798: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004E79C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004E7A0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004E7A4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004E7A8: sw          $t7, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r15;
    // 0x8004E7AC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8004E7B0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8004E7B4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8004E7B8: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004E7BC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004E7C0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8004E7C4: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x8004E7C8: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004E7CC: jal         0x80077960
    // 0x8004E7D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_188;
    // 0x8004E7D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_188:
    // 0x8004E7D4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004E7D8: lw          $t8, 0x584($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X584);
    // 0x8004E7DC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8004E7E0: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8004E7E4: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x8004E7E8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8004E7EC: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x8004E7F0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8004E7F4: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8004E7F8: lw          $t0, -0x10AC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X10AC);
    // 0x8004E7FC: nop

    // 0x8004E800: andi        $t9, $t0, 0x4000
    ctx->r25 = ctx->r8 & 0X4000;
    // 0x8004E804: beq         $t9, $zero, L_8004E8DC
    if (ctx->r25 == 0) {
        // 0x8004E808: nop
    
            goto L_8004E8DC;
    }
    // 0x8004E808: nop

    // 0x8004E80C: andi        $t7, $t0, 0x1000
    ctx->r15 = ctx->r8 & 0X1000;
    // 0x8004E810: bne         $t7, $zero, L_8004E8DC
    if (ctx->r15 != 0) {
        // 0x8004E814: nop
    
            goto L_8004E8DC;
    }
    // 0x8004E814: nop

    // 0x8004E818: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8004E81C: lbu         $t3, -0x1A4($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1A4);
    // 0x8004E820: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8004E824: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E828: beq         $t3, $zero, L_8004E84C
    if (ctx->r11 == 0) {
        // 0x8004E82C: sw          $t2, -0x158($at)
        MEM_W(-0X158, ctx->r1) = ctx->r10;
            goto L_8004E84C;
    }
    // 0x8004E82C: sw          $t2, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r10;
    // 0x8004E830: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8004E834: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E838: sw          $t4, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r12;
    // 0x8004E83C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E840: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x8004E844: b           L_8004E870
    // 0x8004E848: sb          $t5, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r13;
        goto L_8004E870;
    // 0x8004E848: sb          $t5, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r13;
L_8004E84C:
    // 0x8004E84C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8004E850: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E854: sh          $t1, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r9;
    // 0x8004E858: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E85C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8004E860: sb          $t8, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r24;
    // 0x8004E864: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E868: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8004E86C: sw          $t6, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r14;
L_8004E870:
    // 0x8004E870: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E874: jal         0x8005BE40
    // 0x8004E878: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_189;
    // 0x8004E878: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_189:
    // 0x8004E87C: jal         0x8004A34C
    // 0x8004E880: nop

    func_8004A34C(rdram, ctx);
        goto after_190;
    // 0x8004E880: nop

    after_190:
    // 0x8004E884: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E888: jal         0x800773D0
    // 0x8004E88C: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    func_800773D0(rdram, ctx);
        goto after_191;
    // 0x8004E88C: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    after_191:
    // 0x8004E890: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E894: jal         0x800773D0
    // 0x8004E898: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_800773D0(rdram, ctx);
        goto after_192;
    // 0x8004E898: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_192:
    // 0x8004E89C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E8A0: jal         0x800773D0
    // 0x8004E8A4: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    func_800773D0(rdram, ctx);
        goto after_193;
    // 0x8004E8A4: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    after_193:
    // 0x8004E8A8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E8AC: jal         0x800773D0
    // 0x8004E8B0: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    func_800773D0(rdram, ctx);
        goto after_194;
    // 0x8004E8B0: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    after_194:
    // 0x8004E8B4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004E8B8: lw          $a0, 0x9C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X9C0);
    // 0x8004E8BC: jal         0x8007E328
    // 0x8004E8C0: nop

    func_8007E328(rdram, ctx);
        goto after_195;
    // 0x8004E8C0: nop

    after_195:
    // 0x8004E8C4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E8C8: sb          $zero, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = 0;
    // 0x8004E8CC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E8D0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8004E8D4: b           L_8005050C
    // 0x8004E8D8: sw          $t9, -0x14C($at)
    MEM_W(-0X14C, ctx->r1) = ctx->r25;
        goto L_8005050C;
    // 0x8004E8D8: sw          $t9, -0x14C($at)
    MEM_W(-0X14C, ctx->r1) = ctx->r25;
L_8004E8DC:
    // 0x8004E8DC: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004E8E0: lw          $t0, 0x584($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X584);
    // 0x8004E8E4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8004E8E8: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x8004E8EC: subu        $t7, $t7, $t0
    ctx->r15 = SUB32(ctx->r15, ctx->r8);
    // 0x8004E8F0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8004E8F4: subu        $t7, $t7, $t0
    ctx->r15 = SUB32(ctx->r15, ctx->r8);
    // 0x8004E8F8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8004E8FC: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x8004E900: lw          $t2, -0x10AC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X10AC);
    // 0x8004E904: nop

    // 0x8004E908: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x8004E90C: beq         $t3, $zero, L_80050500
    if (ctx->r11 == 0) {
        // 0x8004E910: nop
    
            goto L_80050500;
    }
    // 0x8004E910: nop

    // 0x8004E914: andi        $t4, $t2, 0x1000
    ctx->r12 = ctx->r10 & 0X1000;
    // 0x8004E918: bne         $t4, $zero, L_80050500
    if (ctx->r12 != 0) {
        // 0x8004E91C: nop
    
            goto L_80050500;
    }
    // 0x8004E91C: nop

    // 0x8004E920: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x8004E924: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004E928: b           L_80050500
    // 0x8004E92C: sw          $t5, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r13;
        goto L_80050500;
    // 0x8004E92C: sw          $t5, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r13;
L_8004E930:
    // 0x8004E930: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x8004E934: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E938: sw          $t1, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r9;
    // 0x8004E93C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8004E940: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E944: addiu       $t8, $zero, 0x50
    ctx->r24 = ADD32(0, 0X50);
    // 0x8004E948: addiu       $t6, $t6, -0x3A28
    ctx->r14 = ADD32(ctx->r14, -0X3A28);
    // 0x8004E94C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E950: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004E954: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004E958: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004E95C: sw          $t8, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r24;
    // 0x8004E960: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8004E964: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8004E968: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004E96C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004E970: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8004E974: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004E978: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x8004E97C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8004E980: jal         0x80077960
    // 0x8004E984: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_196;
    // 0x8004E984: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_196:
    // 0x8004E988: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004E98C: lw          $t7, 0x9DC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9DC);
    // 0x8004E990: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004E994: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8004E998: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E99C: addiu       $t2, $t2, -0x3A20
    ctx->r10 = ADD32(ctx->r10, -0X3A20);
    // 0x8004E9A0: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004E9A4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004E9A8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004E9AC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004E9B0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004E9B4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004E9B8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004E9BC: addiu       $t3, $t7, 0x14
    ctx->r11 = ADD32(ctx->r15, 0X14);
    // 0x8004E9C0: sw          $t3, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r11;
    // 0x8004E9C4: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x8004E9C8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8004E9CC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8004E9D0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8004E9D4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8004E9D8: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004E9DC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004E9E0: jal         0x80077960
    // 0x8004E9E4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80077960(rdram, ctx);
        goto after_197;
    // 0x8004E9E4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_197:
    // 0x8004E9E8: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004E9EC: lw          $t6, 0x9DC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9DC);
    // 0x8004E9F0: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004E9F4: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8004E9F8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004E9FC: addiu       $t0, $t0, -0x3A00
    ctx->r8 = ADD32(ctx->r8, -0X3A00);
    // 0x8004EA00: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004EA04: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004EA08: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004EA0C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004EA10: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004EA14: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004EA18: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004EA1C: addiu       $t9, $t6, 0x14
    ctx->r25 = ADD32(ctx->r14, 0X14);
    // 0x8004EA20: sw          $t9, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r25;
    // 0x8004EA24: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x8004EA28: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8004EA2C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8004EA30: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8004EA34: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8004EA38: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004EA3C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004EA40: jal         0x80077960
    // 0x8004EA44: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80077960(rdram, ctx);
        goto after_198;
    // 0x8004EA44: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_198:
    // 0x8004EA48: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004EA4C: lw          $t5, 0x9DC($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9DC);
    // 0x8004EA50: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004EA54: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8004EA58: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004EA5C: addiu       $t8, $t8, -0x39E0
    ctx->r24 = ADD32(ctx->r24, -0X39E0);
    // 0x8004EA60: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004EA64: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004EA68: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004EA6C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004EA70: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004EA74: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004EA78: addiu       $t1, $t5, 0xF
    ctx->r9 = ADD32(ctx->r13, 0XF);
    // 0x8004EA7C: sw          $t1, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r9;
    // 0x8004EA80: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8004EA84: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8004EA88: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8004EA8C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8004EA90: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004EA94: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004EA98: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004EA9C: jal         0x80077960
    // 0x8004EAA0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_199;
    // 0x8004EAA0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_199:
    // 0x8004EAA4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004EAA8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004EAAC: addiu       $a1, $a1, -0x39D0
    ctx->r5 = ADD32(ctx->r5, -0X39D0);
    // 0x8004EAB0: jal         0x80077D88
    // 0x8004EAB4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_200;
    // 0x8004EAB4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_200:
    // 0x8004EAB8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004EABC: lw          $t7, 0x9D8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9D8);
    // 0x8004EAC0: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004EAC4: lw          $a2, 0x584($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X584);
    // 0x8004EAC8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004EACC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004EAD0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004EAD4: addu        $t3, $t7, $s0
    ctx->r11 = ADD32(ctx->r15, ctx->r16);
    // 0x8004EAD8: sw          $t3, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r11;
    // 0x8004EADC: addiu       $a1, $a1, -0x39C0
    ctx->r5 = ADD32(ctx->r5, -0X39C0);
    // 0x8004EAE0: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8004EAE4: jal         0x800B62D4
    // 0x8004EAE8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    sprintf_recomp(rdram, ctx);
        goto after_201;
    // 0x8004EAE8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_201:
    // 0x8004EAEC: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004EAF0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004EAF4: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004EAF8: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004EAFC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004EB00: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004EB04: addiu       $t2, $sp, 0x4C
    ctx->r10 = ADD32(ctx->r29, 0X4C);
    // 0x8004EB08: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004EB0C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004EB10: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004EB14: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8004EB18: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8004EB1C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8004EB20: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8004EB24: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004EB28: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004EB2C: jal         0x80077960
    // 0x8004EB30: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_202;
    // 0x8004EB30: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_202:
    // 0x8004EB34: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004EB38: lw          $t8, 0x9DC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9DC);
    // 0x8004EB3C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004EB40: addiu       $t6, $t8, 0x19
    ctx->r14 = ADD32(ctx->r24, 0X19);
    // 0x8004EB44: sw          $t6, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r14;
    // 0x8004EB48: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8004EB4C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004EB50: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x8004EB54: addiu       $t0, $t0, -0x39BC
    ctx->r8 = ADD32(ctx->r8, -0X39BC);
    // 0x8004EB58: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004EB5C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004EB60: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004EB64: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004EB68: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004EB6C: sw          $t9, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r25;
    // 0x8004EB70: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8004EB74: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8004EB78: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8004EB7C: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004EB80: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004EB84: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8004EB88: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8004EB8C: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004EB90: jal         0x80077960
    // 0x8004EB94: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_203;
    // 0x8004EB94: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_203:
    // 0x8004EB98: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004EB9C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004EBA0: addiu       $a1, $a1, -0x39B4
    ctx->r5 = ADD32(ctx->r5, -0X39B4);
    // 0x8004EBA4: jal         0x80077D88
    // 0x8004EBA8: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_204;
    // 0x8004EBA8: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_204:
    // 0x8004EBAC: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004EBB0: lw          $t4, 0x9D8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X9D8);
    // 0x8004EBB4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004EBB8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004EBBC: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8004EBC0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004EBC4: addiu       $t1, $t1, -0x39AC
    ctx->r9 = ADD32(ctx->r9, -0X39AC);
    // 0x8004EBC8: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004EBCC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004EBD0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004EBD4: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x8004EBD8: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x8004EBDC: addiu       $t6, $zero, 0xB9
    ctx->r14 = ADD32(0, 0XB9);
    // 0x8004EBE0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004EBE4: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x8004EBE8: sw          $t5, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r13;
    // 0x8004EBEC: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x8004EBF0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8004EBF4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8004EBF8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8004EBFC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8004EC00: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004EC04: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004EC08: jal         0x80077960
    // 0x8004EC0C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80077960(rdram, ctx);
        goto after_205;
    // 0x8004EC0C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_205:
    // 0x8004EC10: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004EC14: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004EC18: addiu       $a1, $a1, -0x39A8
    ctx->r5 = ADD32(ctx->r5, -0X39A8);
    // 0x8004EC1C: jal         0x80077D88
    // 0x8004EC20: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_206;
    // 0x8004EC20: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_206:
    // 0x8004EC24: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004EC28: lw          $t7, 0x9D8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9D8);
    // 0x8004EC2C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004EC30: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004EC34: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8004EC38: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004EC3C: addiu       $t2, $t2, -0x39A4
    ctx->r10 = ADD32(ctx->r10, -0X39A4);
    // 0x8004EC40: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004EC44: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004EC48: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004EC4C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004EC50: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004EC54: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004EC58: addu        $t3, $t7, $s0
    ctx->r11 = ADD32(ctx->r15, ctx->r16);
    // 0x8004EC5C: sw          $t3, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r11;
    // 0x8004EC60: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8004EC64: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8004EC68: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8004EC6C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8004EC70: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004EC74: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004EC78: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8004EC7C: jal         0x80077960
    // 0x8004EC80: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_207;
    // 0x8004EC80: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_207:
    // 0x8004EC84: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004EC88: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004EC8C: addiu       $a1, $a1, -0x3994
    ctx->r5 = ADD32(ctx->r5, -0X3994);
    // 0x8004EC90: jal         0x80077D88
    // 0x8004EC94: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_208;
    // 0x8004EC94: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_208:
    // 0x8004EC98: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004EC9C: lw          $t8, 0x9D8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9D8);
    // 0x8004ECA0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004ECA4: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004ECA8: lw          $t6, 0x9DC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9DC);
    // 0x8004ECAC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004ECB0: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x8004ECB4: sw          $t9, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r25;
    // 0x8004ECB8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004ECBC: addiu       $t0, $t6, 0xF
    ctx->r8 = ADD32(ctx->r14, 0XF);
    // 0x8004ECC0: sw          $t0, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r8;
    // 0x8004ECC4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8004ECC8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004ECCC: addiu       $t7, $zero, 0x19
    ctx->r15 = ADD32(0, 0X19);
    // 0x8004ECD0: addiu       $t3, $t3, -0x3984
    ctx->r11 = ADD32(ctx->r11, -0X3984);
    // 0x8004ECD4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004ECD8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004ECDC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004ECE0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004ECE4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004ECE8: sw          $t7, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r15;
    // 0x8004ECEC: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8004ECF0: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8004ECF4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8004ECF8: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004ECFC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004ED00: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8004ED04: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x8004ED08: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004ED0C: jal         0x80077960
    // 0x8004ED10: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_209;
    // 0x8004ED10: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_209:
    // 0x8004ED14: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004ED18: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004ED1C: addiu       $a1, $a1, -0x397C
    ctx->r5 = ADD32(ctx->r5, -0X397C);
    // 0x8004ED20: jal         0x80077D88
    // 0x8004ED24: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_210;
    // 0x8004ED24: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_210:
    // 0x8004ED28: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004ED2C: lw          $t1, 0x9D8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9D8);
    // 0x8004ED30: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004ED34: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004ED38: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004ED3C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004ED40: addiu       $t9, $t9, -0x3974
    ctx->r25 = ADD32(ctx->r25, -0X3974);
    // 0x8004ED44: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004ED48: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004ED4C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004ED50: addiu       $t6, $zero, 0x70
    ctx->r14 = ADD32(0, 0X70);
    // 0x8004ED54: addiu       $t7, $zero, 0xC3
    ctx->r15 = ADD32(0, 0XC3);
    // 0x8004ED58: addiu       $t0, $zero, 0x74
    ctx->r8 = ADD32(0, 0X74);
    // 0x8004ED5C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004ED60: addu        $t8, $t1, $s0
    ctx->r24 = ADD32(ctx->r9, ctx->r16);
    // 0x8004ED64: sw          $t8, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r24;
    // 0x8004ED68: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8004ED6C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8004ED70: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8004ED74: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8004ED78: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8004ED7C: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004ED80: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004ED84: jal         0x80077960
    // 0x8004ED88: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80077960(rdram, ctx);
        goto after_211;
    // 0x8004ED88: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_211:
    // 0x8004ED8C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004ED90: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004ED94: addiu       $a1, $a1, -0x3970
    ctx->r5 = ADD32(ctx->r5, -0X3970);
    // 0x8004ED98: jal         0x80077D88
    // 0x8004ED9C: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_212;
    // 0x8004ED9C: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_212:
    // 0x8004EDA0: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004EDA4: lw          $t2, 0x9D8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9D8);
    // 0x8004EDA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004EDAC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004EDB0: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8004EDB4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004EDB8: addiu       $t5, $t5, -0x396C
    ctx->r13 = ADD32(ctx->r13, -0X396C);
    // 0x8004EDBC: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004EDC0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004EDC4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004EDC8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004EDCC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004EDD0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004EDD4: addu        $t4, $t2, $s0
    ctx->r12 = ADD32(ctx->r10, ctx->r16);
    // 0x8004EDD8: sw          $t4, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r12;
    // 0x8004EDDC: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8004EDE0: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8004EDE4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8004EDE8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8004EDEC: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004EDF0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004EDF4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8004EDF8: jal         0x80077960
    // 0x8004EDFC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_213;
    // 0x8004EDFC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_213:
    // 0x8004EE00: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004EE04: lw          $t6, 0x9DC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9DC);
    // 0x8004EE08: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004EE0C: addiu       $t7, $t6, 0xF
    ctx->r15 = ADD32(ctx->r14, 0XF);
    // 0x8004EE10: sw          $t7, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r15;
    // 0x8004EE14: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8004EE18: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004EE1C: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
    // 0x8004EE20: addiu       $t3, $t3, -0x3958
    ctx->r11 = ADD32(ctx->r11, -0X3958);
    // 0x8004EE24: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004EE28: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004EE2C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004EE30: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004EE34: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004EE38: sw          $t0, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r8;
    // 0x8004EE3C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8004EE40: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8004EE44: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8004EE48: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004EE4C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004EE50: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8004EE54: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8004EE58: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004EE5C: jal         0x80077960
    // 0x8004EE60: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_214;
    // 0x8004EE60: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_214:
    // 0x8004EE64: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004EE68: lw          $t1, 0x584($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X584);
    // 0x8004EE6C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8004EE70: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x8004EE74: subu        $t8, $t8, $t1
    ctx->r24 = SUB32(ctx->r24, ctx->r9);
    // 0x8004EE78: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8004EE7C: subu        $t8, $t8, $t1
    ctx->r24 = SUB32(ctx->r24, ctx->r9);
    // 0x8004EE80: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8004EE84: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8004EE88: lw          $t9, -0x10AC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X10AC);
    // 0x8004EE8C: nop

    // 0x8004EE90: andi        $t6, $t9, 0x4000
    ctx->r14 = ctx->r25 & 0X4000;
    // 0x8004EE94: beq         $t6, $zero, L_8004EF6C
    if (ctx->r14 == 0) {
        // 0x8004EE98: nop
    
            goto L_8004EF6C;
    }
    // 0x8004EE98: nop

    // 0x8004EE9C: andi        $t0, $t9, 0x1000
    ctx->r8 = ctx->r25 & 0X1000;
    // 0x8004EEA0: bne         $t0, $zero, L_8004EF6C
    if (ctx->r8 != 0) {
        // 0x8004EEA4: nop
    
            goto L_8004EF6C;
    }
    // 0x8004EEA4: nop

    // 0x8004EEA8: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8004EEAC: lbu         $t3, -0x1A4($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1A4);
    // 0x8004EEB0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8004EEB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004EEB8: beq         $t3, $zero, L_8004EEDC
    if (ctx->r11 == 0) {
        // 0x8004EEBC: sw          $t7, -0x158($at)
        MEM_W(-0X158, ctx->r1) = ctx->r15;
            goto L_8004EEDC;
    }
    // 0x8004EEBC: sw          $t7, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r15;
    // 0x8004EEC0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8004EEC4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004EEC8: sw          $t2, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r10;
    // 0x8004EECC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004EED0: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x8004EED4: b           L_8004EF00
    // 0x8004EED8: sb          $t4, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r12;
        goto L_8004EF00;
    // 0x8004EED8: sb          $t4, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r12;
L_8004EEDC:
    // 0x8004EEDC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8004EEE0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004EEE4: sh          $t5, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r13;
    // 0x8004EEE8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004EEEC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8004EEF0: sb          $t1, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r9;
    // 0x8004EEF4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004EEF8: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8004EEFC: sw          $t8, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r24;
L_8004EF00:
    // 0x8004EF00: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004EF04: jal         0x8005BE40
    // 0x8004EF08: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_215;
    // 0x8004EF08: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_215:
    // 0x8004EF0C: jal         0x8004A34C
    // 0x8004EF10: nop

    func_8004A34C(rdram, ctx);
        goto after_216;
    // 0x8004EF10: nop

    after_216:
    // 0x8004EF14: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004EF18: jal         0x800773D0
    // 0x8004EF1C: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    func_800773D0(rdram, ctx);
        goto after_217;
    // 0x8004EF1C: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    after_217:
    // 0x8004EF20: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004EF24: jal         0x800773D0
    // 0x8004EF28: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_800773D0(rdram, ctx);
        goto after_218;
    // 0x8004EF28: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_218:
    // 0x8004EF2C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004EF30: jal         0x800773D0
    // 0x8004EF34: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    func_800773D0(rdram, ctx);
        goto after_219;
    // 0x8004EF34: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    after_219:
    // 0x8004EF38: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004EF3C: jal         0x800773D0
    // 0x8004EF40: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    func_800773D0(rdram, ctx);
        goto after_220;
    // 0x8004EF40: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    after_220:
    // 0x8004EF44: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004EF48: lw          $a0, 0x9C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X9C0);
    // 0x8004EF4C: jal         0x8007E328
    // 0x8004EF50: nop

    func_8007E328(rdram, ctx);
        goto after_221;
    // 0x8004EF50: nop

    after_221:
    // 0x8004EF54: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004EF58: sb          $zero, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = 0;
    // 0x8004EF5C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004EF60: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004EF64: b           L_8005050C
    // 0x8004EF68: sw          $t6, -0x14C($at)
    MEM_W(-0X14C, ctx->r1) = ctx->r14;
        goto L_8005050C;
    // 0x8004EF68: sw          $t6, -0x14C($at)
    MEM_W(-0X14C, ctx->r1) = ctx->r14;
L_8004EF6C:
    // 0x8004EF6C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004EF70: lw          $t9, 0x584($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X584);
    // 0x8004EF74: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8004EF78: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8004EF7C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8004EF80: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8004EF84: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8004EF88: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8004EF8C: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x8004EF90: lw          $t7, -0x10AC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10AC);
    // 0x8004EF94: nop

    // 0x8004EF98: andi        $t3, $t7, 0x8000
    ctx->r11 = ctx->r15 & 0X8000;
    // 0x8004EF9C: beq         $t3, $zero, L_80050500
    if (ctx->r11 == 0) {
        // 0x8004EFA0: nop
    
            goto L_80050500;
    }
    // 0x8004EFA0: nop

    // 0x8004EFA4: andi        $t2, $t7, 0x1000
    ctx->r10 = ctx->r15 & 0X1000;
    // 0x8004EFA8: bne         $t2, $zero, L_80050500
    if (ctx->r10 != 0) {
        // 0x8004EFAC: nop
    
            goto L_80050500;
    }
    // 0x8004EFAC: nop

    // 0x8004EFB0: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x8004EFB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004EFB8: b           L_80050500
    // 0x8004EFBC: sw          $t4, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r12;
        goto L_80050500;
    // 0x8004EFBC: sw          $t4, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r12;
L_8004EFC0:
    // 0x8004EFC0: addiu       $t5, $zero, 0x19
    ctx->r13 = ADD32(0, 0X19);
    // 0x8004EFC4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004EFC8: sw          $t5, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r13;
    // 0x8004EFCC: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8004EFD0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004EFD4: addiu       $t1, $zero, 0x50
    ctx->r9 = ADD32(0, 0X50);
    // 0x8004EFD8: addiu       $t8, $t8, -0x3938
    ctx->r24 = ADD32(ctx->r24, -0X3938);
    // 0x8004EFDC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004EFE0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004EFE4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004EFE8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004EFEC: sw          $t1, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r9;
    // 0x8004EFF0: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8004EFF4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8004EFF8: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004EFFC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F000: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004F004: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004F008: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x8004F00C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8004F010: jal         0x80077960
    // 0x8004F014: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_222;
    // 0x8004F014: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_222:
    // 0x8004F018: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004F01C: lw          $t0, 0x9DC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X9DC);
    // 0x8004F020: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004F024: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004F028: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F02C: addiu       $t7, $t7, -0x3930
    ctx->r15 = ADD32(ctx->r15, -0X3930);
    // 0x8004F030: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004F034: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F038: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F03C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004F040: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004F044: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004F048: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004F04C: addiu       $t3, $t0, 0x14
    ctx->r11 = ADD32(ctx->r8, 0X14);
    // 0x8004F050: sw          $t3, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r11;
    // 0x8004F054: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x8004F058: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8004F05C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8004F060: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8004F064: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8004F068: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F06C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F070: jal         0x80077960
    // 0x8004F074: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80077960(rdram, ctx);
        goto after_223;
    // 0x8004F074: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_223:
    // 0x8004F078: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004F07C: lw          $t8, 0x9DC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9DC);
    // 0x8004F080: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004F084: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004F088: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F08C: addiu       $t9, $t9, -0x3918
    ctx->r25 = ADD32(ctx->r25, -0X3918);
    // 0x8004F090: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004F094: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F098: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F09C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004F0A0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004F0A4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004F0A8: addiu       $t6, $t8, 0xF
    ctx->r14 = ADD32(ctx->r24, 0XF);
    // 0x8004F0AC: sw          $t6, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r14;
    // 0x8004F0B0: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8004F0B4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8004F0B8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8004F0BC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8004F0C0: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F0C4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F0C8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004F0CC: jal         0x80077960
    // 0x8004F0D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_224;
    // 0x8004F0D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_224:
    // 0x8004F0D4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004F0D8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004F0DC: addiu       $a1, $a1, -0x3908
    ctx->r5 = ADD32(ctx->r5, -0X3908);
    // 0x8004F0E0: jal         0x80077D88
    // 0x8004F0E4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_225;
    // 0x8004F0E4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_225:
    // 0x8004F0E8: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004F0EC: lw          $t2, 0x9D8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9D8);
    // 0x8004F0F0: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004F0F4: lw          $a2, 0x584($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X584);
    // 0x8004F0F8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004F0FC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F100: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004F104: addu        $t4, $t2, $s0
    ctx->r12 = ADD32(ctx->r10, ctx->r16);
    // 0x8004F108: sw          $t4, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r12;
    // 0x8004F10C: addiu       $a1, $a1, -0x38F8
    ctx->r5 = ADD32(ctx->r5, -0X38F8);
    // 0x8004F110: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8004F114: jal         0x800B62D4
    // 0x8004F118: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    sprintf_recomp(rdram, ctx);
        goto after_226;
    // 0x8004F118: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_226:
    // 0x8004F11C: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004F120: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004F124: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004F128: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004F12C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F130: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F134: addiu       $t5, $sp, 0x4C
    ctx->r13 = ADD32(ctx->r29, 0X4C);
    // 0x8004F138: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004F13C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004F140: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004F144: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8004F148: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8004F14C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8004F150: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8004F154: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F158: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F15C: jal         0x80077960
    // 0x8004F160: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_227;
    // 0x8004F160: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_227:
    // 0x8004F164: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004F168: lw          $t9, 0x9DC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9DC);
    // 0x8004F16C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F170: addiu       $t0, $t9, 0x19
    ctx->r8 = ADD32(ctx->r25, 0X19);
    // 0x8004F174: sw          $t0, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r8;
    // 0x8004F178: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004F17C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F180: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x8004F184: addiu       $t7, $t7, -0x38F4
    ctx->r15 = ADD32(ctx->r15, -0X38F4);
    // 0x8004F188: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F18C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F190: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004F194: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004F198: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004F19C: sw          $t3, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r11;
    // 0x8004F1A0: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8004F1A4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8004F1A8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8004F1AC: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F1B0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F1B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8004F1B8: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x8004F1BC: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004F1C0: jal         0x80077960
    // 0x8004F1C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_228;
    // 0x8004F1C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_228:
    // 0x8004F1C8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004F1CC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004F1D0: addiu       $a1, $a1, -0x38EC
    ctx->r5 = ADD32(ctx->r5, -0X38EC);
    // 0x8004F1D4: jal         0x80077D88
    // 0x8004F1D8: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_229;
    // 0x8004F1D8: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_229:
    // 0x8004F1DC: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004F1E0: lw          $t1, 0x9D8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9D8);
    // 0x8004F1E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004F1E8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004F1EC: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8004F1F0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F1F4: addiu       $t6, $t6, -0x38E4
    ctx->r14 = ADD32(ctx->r14, -0X38E4);
    // 0x8004F1F8: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004F1FC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F200: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F204: addiu       $t9, $zero, 0x5A
    ctx->r25 = ADD32(0, 0X5A);
    // 0x8004F208: addiu       $t3, $zero, 0x50
    ctx->r11 = ADD32(0, 0X50);
    // 0x8004F20C: addiu       $t0, $zero, 0xB9
    ctx->r8 = ADD32(0, 0XB9);
    // 0x8004F210: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004F214: addu        $t8, $t1, $s0
    ctx->r24 = ADD32(ctx->r9, ctx->r16);
    // 0x8004F218: sw          $t8, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r24;
    // 0x8004F21C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8004F220: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8004F224: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8004F228: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8004F22C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8004F230: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F234: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F238: jal         0x80077960
    // 0x8004F23C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80077960(rdram, ctx);
        goto after_230;
    // 0x8004F23C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_230:
    // 0x8004F240: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004F244: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004F248: addiu       $a1, $a1, -0x38E0
    ctx->r5 = ADD32(ctx->r5, -0X38E0);
    // 0x8004F24C: jal         0x80077D88
    // 0x8004F250: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_231;
    // 0x8004F250: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_231:
    // 0x8004F254: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004F258: lw          $t2, 0x9D8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9D8);
    // 0x8004F25C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004F260: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004F264: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8004F268: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F26C: addiu       $t5, $t5, -0x38DC
    ctx->r13 = ADD32(ctx->r13, -0X38DC);
    // 0x8004F270: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004F274: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F278: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F27C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004F280: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004F284: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004F288: addu        $t4, $t2, $s0
    ctx->r12 = ADD32(ctx->r10, ctx->r16);
    // 0x8004F28C: sw          $t4, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r12;
    // 0x8004F290: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8004F294: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8004F298: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8004F29C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8004F2A0: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F2A4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F2A8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8004F2AC: jal         0x80077960
    // 0x8004F2B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_232;
    // 0x8004F2B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_232:
    // 0x8004F2B4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004F2B8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004F2BC: addiu       $a1, $a1, -0x38CC
    ctx->r5 = ADD32(ctx->r5, -0X38CC);
    // 0x8004F2C0: jal         0x80077D88
    // 0x8004F2C4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_233;
    // 0x8004F2C4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_233:
    // 0x8004F2C8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004F2CC: lw          $t9, 0x9D8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9D8);
    // 0x8004F2D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004F2D4: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004F2D8: lw          $t0, 0x9DC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X9DC);
    // 0x8004F2DC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F2E0: addu        $t3, $t9, $s0
    ctx->r11 = ADD32(ctx->r25, ctx->r16);
    // 0x8004F2E4: sw          $t3, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r11;
    // 0x8004F2E8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F2EC: addiu       $t7, $t0, 0xF
    ctx->r15 = ADD32(ctx->r8, 0XF);
    // 0x8004F2F0: sw          $t7, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r15;
    // 0x8004F2F4: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8004F2F8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F2FC: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
    // 0x8004F300: addiu       $t4, $t4, -0x38BC
    ctx->r12 = ADD32(ctx->r12, -0X38BC);
    // 0x8004F304: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F308: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F30C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004F310: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004F314: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004F318: sw          $t2, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r10;
    // 0x8004F31C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8004F320: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8004F324: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004F328: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F32C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F330: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8004F334: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8004F338: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004F33C: jal         0x80077960
    // 0x8004F340: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_234;
    // 0x8004F340: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_234:
    // 0x8004F344: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004F348: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004F34C: addiu       $a1, $a1, -0x38B4
    ctx->r5 = ADD32(ctx->r5, -0X38B4);
    // 0x8004F350: jal         0x80077D88
    // 0x8004F354: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_235;
    // 0x8004F354: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_235:
    // 0x8004F358: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004F35C: lw          $t6, 0x9D8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9D8);
    // 0x8004F360: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004F364: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004F368: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8004F36C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F370: addiu       $t3, $t3, -0x38AC
    ctx->r11 = ADD32(ctx->r11, -0X38AC);
    // 0x8004F374: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004F378: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F37C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F380: addiu       $t0, $zero, 0x70
    ctx->r8 = ADD32(0, 0X70);
    // 0x8004F384: addiu       $t2, $zero, 0xC3
    ctx->r10 = ADD32(0, 0XC3);
    // 0x8004F388: addiu       $t7, $zero, 0x74
    ctx->r15 = ADD32(0, 0X74);
    // 0x8004F38C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004F390: addu        $t9, $t6, $s0
    ctx->r25 = ADD32(ctx->r14, ctx->r16);
    // 0x8004F394: sw          $t9, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r25;
    // 0x8004F398: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x8004F39C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8004F3A0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8004F3A4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8004F3A8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8004F3AC: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F3B0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F3B4: jal         0x80077960
    // 0x8004F3B8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_80077960(rdram, ctx);
        goto after_236;
    // 0x8004F3B8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_236:
    // 0x8004F3BC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004F3C0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004F3C4: addiu       $a1, $a1, -0x38A8
    ctx->r5 = ADD32(ctx->r5, -0X38A8);
    // 0x8004F3C8: jal         0x80077D88
    // 0x8004F3CC: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_237;
    // 0x8004F3CC: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_237:
    // 0x8004F3D0: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004F3D4: lw          $t5, 0x9D8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9D8);
    // 0x8004F3D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004F3DC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004F3E0: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8004F3E4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F3E8: addiu       $t8, $t8, -0x38A4
    ctx->r24 = ADD32(ctx->r24, -0X38A4);
    // 0x8004F3EC: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004F3F0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F3F4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F3F8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004F3FC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004F400: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004F404: addu        $t1, $t5, $s0
    ctx->r9 = ADD32(ctx->r13, ctx->r16);
    // 0x8004F408: sw          $t1, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r9;
    // 0x8004F40C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8004F410: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8004F414: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8004F418: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8004F41C: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F420: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F424: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004F428: jal         0x80077960
    // 0x8004F42C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_238;
    // 0x8004F42C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_238:
    // 0x8004F430: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004F434: lw          $t0, 0x9DC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X9DC);
    // 0x8004F438: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F43C: addiu       $t2, $t0, 0xF
    ctx->r10 = ADD32(ctx->r8, 0XF);
    // 0x8004F440: sw          $t2, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r10;
    // 0x8004F444: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8004F448: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F44C: addiu       $t7, $zero, 0x19
    ctx->r15 = ADD32(0, 0X19);
    // 0x8004F450: addiu       $t4, $t4, -0x3890
    ctx->r12 = ADD32(ctx->r12, -0X3890);
    // 0x8004F454: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F458: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F45C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004F460: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004F464: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004F468: sw          $t7, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r15;
    // 0x8004F46C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8004F470: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8004F474: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004F478: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F47C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F480: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8004F484: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x8004F488: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004F48C: jal         0x80077960
    // 0x8004F490: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_239;
    // 0x8004F490: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_239:
    // 0x8004F494: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004F498: lw          $t6, 0x584($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X584);
    // 0x8004F49C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8004F4A0: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8004F4A4: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x8004F4A8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8004F4AC: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x8004F4B0: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8004F4B4: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x8004F4B8: lw          $t3, -0x10AC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X10AC);
    // 0x8004F4BC: nop

    // 0x8004F4C0: andi        $t0, $t3, 0x4000
    ctx->r8 = ctx->r11 & 0X4000;
    // 0x8004F4C4: beq         $t0, $zero, L_8004F59C
    if (ctx->r8 == 0) {
        // 0x8004F4C8: nop
    
            goto L_8004F59C;
    }
    // 0x8004F4C8: nop

    // 0x8004F4CC: andi        $t7, $t3, 0x1000
    ctx->r15 = ctx->r11 & 0X1000;
    // 0x8004F4D0: bne         $t7, $zero, L_8004F59C
    if (ctx->r15 != 0) {
        // 0x8004F4D4: nop
    
            goto L_8004F59C;
    }
    // 0x8004F4D4: nop

    // 0x8004F4D8: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8004F4DC: lbu         $t4, -0x1A4($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1A4);
    // 0x8004F4E0: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8004F4E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004F4E8: beq         $t4, $zero, L_8004F50C
    if (ctx->r12 == 0) {
        // 0x8004F4EC: sw          $t2, -0x158($at)
        MEM_W(-0X158, ctx->r1) = ctx->r10;
            goto L_8004F50C;
    }
    // 0x8004F4EC: sw          $t2, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r10;
    // 0x8004F4F0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8004F4F4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004F4F8: sw          $t5, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r13;
    // 0x8004F4FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004F500: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x8004F504: b           L_8004F530
    // 0x8004F508: sb          $t1, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r9;
        goto L_8004F530;
    // 0x8004F508: sb          $t1, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r9;
L_8004F50C:
    // 0x8004F50C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8004F510: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004F514: sh          $t8, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r24;
    // 0x8004F518: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004F51C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8004F520: sb          $t6, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r14;
    // 0x8004F524: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004F528: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8004F52C: sw          $t9, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r25;
L_8004F530:
    // 0x8004F530: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F534: jal         0x8005BE40
    // 0x8004F538: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_240;
    // 0x8004F538: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_240:
    // 0x8004F53C: jal         0x8004A34C
    // 0x8004F540: nop

    func_8004A34C(rdram, ctx);
        goto after_241;
    // 0x8004F540: nop

    after_241:
    // 0x8004F544: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004F548: jal         0x800773D0
    // 0x8004F54C: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    func_800773D0(rdram, ctx);
        goto after_242;
    // 0x8004F54C: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    after_242:
    // 0x8004F550: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004F554: jal         0x800773D0
    // 0x8004F558: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_800773D0(rdram, ctx);
        goto after_243;
    // 0x8004F558: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_243:
    // 0x8004F55C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004F560: jal         0x800773D0
    // 0x8004F564: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    func_800773D0(rdram, ctx);
        goto after_244;
    // 0x8004F564: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    after_244:
    // 0x8004F568: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004F56C: jal         0x800773D0
    // 0x8004F570: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    func_800773D0(rdram, ctx);
        goto after_245;
    // 0x8004F570: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    after_245:
    // 0x8004F574: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004F578: lw          $a0, 0x9C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X9C0);
    // 0x8004F57C: jal         0x8007E328
    // 0x8004F580: nop

    func_8007E328(rdram, ctx);
        goto after_246;
    // 0x8004F580: nop

    after_246:
    // 0x8004F584: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004F588: sb          $zero, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = 0;
    // 0x8004F58C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004F590: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8004F594: b           L_8005050C
    // 0x8004F598: sw          $t0, -0x14C($at)
    MEM_W(-0X14C, ctx->r1) = ctx->r8;
        goto L_8005050C;
    // 0x8004F598: sw          $t0, -0x14C($at)
    MEM_W(-0X14C, ctx->r1) = ctx->r8;
L_8004F59C:
    // 0x8004F59C: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004F5A0: lw          $t3, 0x584($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X584);
    // 0x8004F5A4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8004F5A8: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x8004F5AC: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x8004F5B0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8004F5B4: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x8004F5B8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8004F5BC: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x8004F5C0: lw          $t2, -0x10AC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X10AC);
    // 0x8004F5C4: nop

    // 0x8004F5C8: andi        $t4, $t2, 0x8000
    ctx->r12 = ctx->r10 & 0X8000;
    // 0x8004F5CC: beq         $t4, $zero, L_80050500
    if (ctx->r12 == 0) {
        // 0x8004F5D0: nop
    
            goto L_80050500;
    }
    // 0x8004F5D0: nop

    // 0x8004F5D4: andi        $t5, $t2, 0x1000
    ctx->r13 = ctx->r10 & 0X1000;
    // 0x8004F5D8: bne         $t5, $zero, L_80050500
    if (ctx->r13 != 0) {
        // 0x8004F5DC: nop
    
            goto L_80050500;
    }
    // 0x8004F5DC: nop

    // 0x8004F5E0: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x8004F5E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004F5E8: b           L_80050500
    // 0x8004F5EC: sw          $t1, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r9;
        goto L_80050500;
    // 0x8004F5EC: sw          $t1, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r9;
L_8004F5F0:
    // 0x8004F5F0: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x8004F5F4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F5F8: sw          $t8, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r24;
    // 0x8004F5FC: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004F600: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F604: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x8004F608: addiu       $t9, $t9, -0x3870
    ctx->r25 = ADD32(ctx->r25, -0X3870);
    // 0x8004F60C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F610: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F614: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004F618: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004F61C: sw          $t6, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r14;
    // 0x8004F620: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8004F624: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8004F628: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F62C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F630: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004F634: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004F638: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x8004F63C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8004F640: jal         0x80077960
    // 0x8004F644: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_247;
    // 0x8004F644: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_247:
    // 0x8004F648: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004F64C: lw          $t7, 0x9DC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9DC);
    // 0x8004F650: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004F654: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8004F658: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F65C: addiu       $t2, $t2, -0x3868
    ctx->r10 = ADD32(ctx->r10, -0X3868);
    // 0x8004F660: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004F664: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F668: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F66C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004F670: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004F674: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004F678: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004F67C: addiu       $t4, $t7, 0x14
    ctx->r12 = ADD32(ctx->r15, 0X14);
    // 0x8004F680: sw          $t4, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r12;
    // 0x8004F684: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    // 0x8004F688: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8004F68C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8004F690: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8004F694: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004F698: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F69C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F6A0: jal         0x80077960
    // 0x8004F6A4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80077960(rdram, ctx);
        goto after_248;
    // 0x8004F6A4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_248:
    // 0x8004F6A8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8004F6AC: lw          $t9, 0x9DC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9DC);
    // 0x8004F6B0: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004F6B4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8004F6B8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F6BC: addiu       $t3, $t3, -0x3848
    ctx->r11 = ADD32(ctx->r11, -0X3848);
    // 0x8004F6C0: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004F6C4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F6C8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F6CC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004F6D0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004F6D4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004F6D8: addiu       $t0, $t9, 0xF
    ctx->r8 = ADD32(ctx->r25, 0XF);
    // 0x8004F6DC: sw          $t0, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r8;
    // 0x8004F6E0: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x8004F6E4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8004F6E8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8004F6EC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8004F6F0: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F6F4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F6F8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8004F6FC: jal         0x80077960
    // 0x8004F700: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_249;
    // 0x8004F700: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_249:
    // 0x8004F704: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004F708: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004F70C: addiu       $a1, $a1, -0x3838
    ctx->r5 = ADD32(ctx->r5, -0X3838);
    // 0x8004F710: jal         0x80077D88
    // 0x8004F714: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_250;
    // 0x8004F714: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_250:
    // 0x8004F718: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004F71C: lw          $t5, 0x9D8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9D8);
    // 0x8004F720: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004F724: lw          $a2, 0x584($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X584);
    // 0x8004F728: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004F72C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F730: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004F734: addu        $t1, $t5, $s0
    ctx->r9 = ADD32(ctx->r13, ctx->r16);
    // 0x8004F738: sw          $t1, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r9;
    // 0x8004F73C: addiu       $a1, $a1, -0x3828
    ctx->r5 = ADD32(ctx->r5, -0X3828);
    // 0x8004F740: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8004F744: jal         0x800B62D4
    // 0x8004F748: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    sprintf_recomp(rdram, ctx);
        goto after_251;
    // 0x8004F748: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_251:
    // 0x8004F74C: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004F750: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004F754: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004F758: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004F75C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F760: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F764: addiu       $t8, $sp, 0x4C
    ctx->r24 = ADD32(ctx->r29, 0X4C);
    // 0x8004F768: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004F76C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004F770: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004F774: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8004F778: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8004F77C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8004F780: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004F784: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F788: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F78C: jal         0x80077960
    // 0x8004F790: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_252;
    // 0x8004F790: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_252:
    // 0x8004F794: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004F798: lw          $t3, 0x9DC($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9DC);
    // 0x8004F79C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F7A0: addiu       $t7, $t3, 0x19
    ctx->r15 = ADD32(ctx->r11, 0X19);
    // 0x8004F7A4: sw          $t7, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r15;
    // 0x8004F7A8: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8004F7AC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F7B0: addiu       $t4, $zero, 0x19
    ctx->r12 = ADD32(0, 0X19);
    // 0x8004F7B4: addiu       $t2, $t2, -0x3824
    ctx->r10 = ADD32(ctx->r10, -0X3824);
    // 0x8004F7B8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F7BC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F7C0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004F7C4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004F7C8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004F7CC: sw          $t4, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r12;
    // 0x8004F7D0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8004F7D4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8004F7D8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8004F7DC: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F7E0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F7E4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8004F7E8: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8004F7EC: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004F7F0: jal         0x80077960
    // 0x8004F7F4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_253;
    // 0x8004F7F4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_253:
    // 0x8004F7F8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004F7FC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004F800: addiu       $a1, $a1, -0x381C
    ctx->r5 = ADD32(ctx->r5, -0X381C);
    // 0x8004F804: jal         0x80077D88
    // 0x8004F808: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_254;
    // 0x8004F808: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_254:
    // 0x8004F80C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004F810: lw          $t6, 0x9D8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9D8);
    // 0x8004F814: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004F818: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004F81C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8004F820: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F824: addiu       $t0, $t0, -0x3814
    ctx->r8 = ADD32(ctx->r8, -0X3814);
    // 0x8004F828: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004F82C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F830: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F834: addiu       $t3, $zero, 0x5A
    ctx->r11 = ADD32(0, 0X5A);
    // 0x8004F838: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x8004F83C: addiu       $t7, $zero, 0xB9
    ctx->r15 = ADD32(0, 0XB9);
    // 0x8004F840: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004F844: addu        $t9, $t6, $s0
    ctx->r25 = ADD32(ctx->r14, ctx->r16);
    // 0x8004F848: sw          $t9, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r25;
    // 0x8004F84C: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x8004F850: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8004F854: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8004F858: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8004F85C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8004F860: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F864: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F868: jal         0x80077960
    // 0x8004F86C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80077960(rdram, ctx);
        goto after_255;
    // 0x8004F86C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_255:
    // 0x8004F870: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004F874: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004F878: addiu       $a1, $a1, -0x3810
    ctx->r5 = ADD32(ctx->r5, -0X3810);
    // 0x8004F87C: jal         0x80077D88
    // 0x8004F880: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_256;
    // 0x8004F880: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_256:
    // 0x8004F884: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8004F888: lw          $t5, 0x9D8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9D8);
    // 0x8004F88C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004F890: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004F894: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8004F898: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F89C: addiu       $t8, $t8, -0x380C
    ctx->r24 = ADD32(ctx->r24, -0X380C);
    // 0x8004F8A0: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004F8A4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F8A8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F8AC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004F8B0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004F8B4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004F8B8: addu        $t1, $t5, $s0
    ctx->r9 = ADD32(ctx->r13, ctx->r16);
    // 0x8004F8BC: sw          $t1, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r9;
    // 0x8004F8C0: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8004F8C4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8004F8C8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8004F8CC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8004F8D0: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F8D4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F8D8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004F8DC: jal         0x80077960
    // 0x8004F8E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_257;
    // 0x8004F8E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_257:
    // 0x8004F8E4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004F8E8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004F8EC: addiu       $a1, $a1, -0x37FC
    ctx->r5 = ADD32(ctx->r5, -0X37FC);
    // 0x8004F8F0: jal         0x80077D88
    // 0x8004F8F4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_258;
    // 0x8004F8F4: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_258:
    // 0x8004F8F8: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004F8FC: lw          $t3, 0x9D8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9D8);
    // 0x8004F900: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004F904: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004F908: lw          $t7, 0x9DC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9DC);
    // 0x8004F90C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F910: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x8004F914: sw          $t4, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r12;
    // 0x8004F918: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F91C: addiu       $t2, $t7, 0xF
    ctx->r10 = ADD32(ctx->r15, 0XF);
    // 0x8004F920: sw          $t2, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r10;
    // 0x8004F924: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8004F928: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F92C: addiu       $t5, $zero, 0x19
    ctx->r13 = ADD32(0, 0X19);
    // 0x8004F930: addiu       $t1, $t1, -0x37EC
    ctx->r9 = ADD32(ctx->r9, -0X37EC);
    // 0x8004F934: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F938: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F93C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004F940: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004F944: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004F948: sw          $t5, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r13;
    // 0x8004F94C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8004F950: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8004F954: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8004F958: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F95C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F960: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8004F964: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x8004F968: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004F96C: jal         0x80077960
    // 0x8004F970: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_259;
    // 0x8004F970: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_259:
    // 0x8004F974: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004F978: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004F97C: addiu       $a1, $a1, -0x37E4
    ctx->r5 = ADD32(ctx->r5, -0X37E4);
    // 0x8004F980: jal         0x80077D88
    // 0x8004F984: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_260;
    // 0x8004F984: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_260:
    // 0x8004F988: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004F98C: lw          $t0, 0x9D8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X9D8);
    // 0x8004F990: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004F994: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004F998: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8004F99C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004F9A0: addiu       $t4, $t4, -0x37DC
    ctx->r12 = ADD32(ctx->r12, -0X37DC);
    // 0x8004F9A4: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004F9A8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004F9AC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004F9B0: addiu       $t7, $zero, 0x70
    ctx->r15 = ADD32(0, 0X70);
    // 0x8004F9B4: addiu       $t5, $zero, 0xC3
    ctx->r13 = ADD32(0, 0XC3);
    // 0x8004F9B8: addiu       $t2, $zero, 0x74
    ctx->r10 = ADD32(0, 0X74);
    // 0x8004F9BC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004F9C0: addu        $t3, $t0, $s0
    ctx->r11 = ADD32(ctx->r8, ctx->r16);
    // 0x8004F9C4: sw          $t3, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r11;
    // 0x8004F9C8: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8004F9CC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8004F9D0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8004F9D4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8004F9D8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8004F9DC: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004F9E0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004F9E4: jal         0x80077960
    // 0x8004F9E8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_80077960(rdram, ctx);
        goto after_261;
    // 0x8004F9E8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_261:
    // 0x8004F9EC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004F9F0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004F9F4: addiu       $a1, $a1, -0x37D8
    ctx->r5 = ADD32(ctx->r5, -0X37D8);
    // 0x8004F9F8: jal         0x80077D88
    // 0x8004F9FC: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_262;
    // 0x8004F9FC: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_262:
    // 0x8004FA00: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004FA04: lw          $t8, 0x9D8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9D8);
    // 0x8004FA08: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004FA0C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004FA10: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004FA14: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004FA18: addiu       $t9, $t9, -0x37D4
    ctx->r25 = ADD32(ctx->r25, -0X37D4);
    // 0x8004FA1C: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004FA20: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004FA24: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004FA28: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004FA2C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004FA30: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004FA34: addu        $t6, $t8, $s0
    ctx->r14 = ADD32(ctx->r24, ctx->r16);
    // 0x8004FA38: sw          $t6, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r14;
    // 0x8004FA3C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8004FA40: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8004FA44: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8004FA48: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8004FA4C: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004FA50: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004FA54: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004FA58: jal         0x80077960
    // 0x8004FA5C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_263;
    // 0x8004FA5C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_263:
    // 0x8004FA60: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004FA64: lw          $t7, 0x9DC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9DC);
    // 0x8004FA68: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004FA6C: addiu       $t5, $t7, 0xF
    ctx->r13 = ADD32(ctx->r15, 0XF);
    // 0x8004FA70: sw          $t5, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r13;
    // 0x8004FA74: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8004FA78: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004FA7C: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
    // 0x8004FA80: addiu       $t1, $t1, -0x37C0
    ctx->r9 = ADD32(ctx->r9, -0X37C0);
    // 0x8004FA84: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004FA88: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004FA8C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004FA90: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004FA94: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004FA98: sw          $t2, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r10;
    // 0x8004FA9C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8004FAA0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8004FAA4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8004FAA8: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004FAAC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004FAB0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8004FAB4: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x8004FAB8: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8004FABC: jal         0x80077960
    // 0x8004FAC0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_264;
    // 0x8004FAC0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_264:
    // 0x8004FAC4: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8004FAC8: lw          $t0, 0x584($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X584);
    // 0x8004FACC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8004FAD0: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x8004FAD4: subu        $t3, $t3, $t0
    ctx->r11 = SUB32(ctx->r11, ctx->r8);
    // 0x8004FAD8: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8004FADC: subu        $t3, $t3, $t0
    ctx->r11 = SUB32(ctx->r11, ctx->r8);
    // 0x8004FAE0: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8004FAE4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8004FAE8: lw          $t4, -0x10AC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X10AC);
    // 0x8004FAEC: nop

    // 0x8004FAF0: andi        $t7, $t4, 0x4000
    ctx->r15 = ctx->r12 & 0X4000;
    // 0x8004FAF4: beq         $t7, $zero, L_8004FBCC
    if (ctx->r15 == 0) {
        // 0x8004FAF8: nop
    
            goto L_8004FBCC;
    }
    // 0x8004FAF8: nop

    // 0x8004FAFC: andi        $t2, $t4, 0x1000
    ctx->r10 = ctx->r12 & 0X1000;
    // 0x8004FB00: bne         $t2, $zero, L_8004FBCC
    if (ctx->r10 != 0) {
        // 0x8004FB04: nop
    
            goto L_8004FBCC;
    }
    // 0x8004FB04: nop

    // 0x8004FB08: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8004FB0C: lbu         $t1, -0x1A4($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1A4);
    // 0x8004FB10: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x8004FB14: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004FB18: beq         $t1, $zero, L_8004FB3C
    if (ctx->r9 == 0) {
        // 0x8004FB1C: sw          $t5, -0x158($at)
        MEM_W(-0X158, ctx->r1) = ctx->r13;
            goto L_8004FB3C;
    }
    // 0x8004FB1C: sw          $t5, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r13;
    // 0x8004FB20: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8004FB24: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004FB28: sw          $t8, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r24;
    // 0x8004FB2C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004FB30: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x8004FB34: b           L_8004FB60
    // 0x8004FB38: sb          $t6, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r14;
        goto L_8004FB60;
    // 0x8004FB38: sb          $t6, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r14;
L_8004FB3C:
    // 0x8004FB3C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8004FB40: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004FB44: sh          $t9, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r25;
    // 0x8004FB48: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004FB4C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8004FB50: sb          $t0, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r8;
    // 0x8004FB54: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004FB58: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x8004FB5C: sw          $t3, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r11;
L_8004FB60:
    // 0x8004FB60: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004FB64: jal         0x8005BE40
    // 0x8004FB68: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_265;
    // 0x8004FB68: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_265:
    // 0x8004FB6C: jal         0x8004A34C
    // 0x8004FB70: nop

    func_8004A34C(rdram, ctx);
        goto after_266;
    // 0x8004FB70: nop

    after_266:
    // 0x8004FB74: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004FB78: jal         0x800773D0
    // 0x8004FB7C: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    func_800773D0(rdram, ctx);
        goto after_267;
    // 0x8004FB7C: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    after_267:
    // 0x8004FB80: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004FB84: jal         0x800773D0
    // 0x8004FB88: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_800773D0(rdram, ctx);
        goto after_268;
    // 0x8004FB88: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_268:
    // 0x8004FB8C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004FB90: jal         0x800773D0
    // 0x8004FB94: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    func_800773D0(rdram, ctx);
        goto after_269;
    // 0x8004FB94: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    after_269:
    // 0x8004FB98: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004FB9C: jal         0x800773D0
    // 0x8004FBA0: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    func_800773D0(rdram, ctx);
        goto after_270;
    // 0x8004FBA0: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    after_270:
    // 0x8004FBA4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004FBA8: lw          $a0, 0x9C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X9C0);
    // 0x8004FBAC: jal         0x8007E328
    // 0x8004FBB0: nop

    func_8007E328(rdram, ctx);
        goto after_271;
    // 0x8004FBB0: nop

    after_271:
    // 0x8004FBB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004FBB8: sb          $zero, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = 0;
    // 0x8004FBBC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004FBC0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8004FBC4: b           L_8005050C
    // 0x8004FBC8: sw          $t7, -0x14C($at)
    MEM_W(-0X14C, ctx->r1) = ctx->r15;
        goto L_8005050C;
    // 0x8004FBC8: sw          $t7, -0x14C($at)
    MEM_W(-0X14C, ctx->r1) = ctx->r15;
L_8004FBCC:
    // 0x8004FBCC: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8004FBD0: lw          $t4, 0x584($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X584);
    // 0x8004FBD4: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8004FBD8: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x8004FBDC: subu        $t2, $t2, $t4
    ctx->r10 = SUB32(ctx->r10, ctx->r12);
    // 0x8004FBE0: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8004FBE4: subu        $t2, $t2, $t4
    ctx->r10 = SUB32(ctx->r10, ctx->r12);
    // 0x8004FBE8: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8004FBEC: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x8004FBF0: lw          $t5, -0x10AC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X10AC);
    // 0x8004FBF4: nop

    // 0x8004FBF8: andi        $t1, $t5, 0x8000
    ctx->r9 = ctx->r13 & 0X8000;
    // 0x8004FBFC: beq         $t1, $zero, L_80050500
    if (ctx->r9 == 0) {
        // 0x8004FC00: nop
    
            goto L_80050500;
    }
    // 0x8004FC00: nop

    // 0x8004FC04: andi        $t8, $t5, 0x1000
    ctx->r24 = ctx->r13 & 0X1000;
    // 0x8004FC08: bne         $t8, $zero, L_80050500
    if (ctx->r24 != 0) {
        // 0x8004FC0C: nop
    
            goto L_80050500;
    }
    // 0x8004FC0C: nop

    // 0x8004FC10: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8004FC14: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004FC18: b           L_80050500
    // 0x8004FC1C: sw          $t6, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r14;
        goto L_80050500;
    // 0x8004FC1C: sw          $t6, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r14;
L_8004FC20:
    // 0x8004FC20: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x8004FC24: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004FC28: sw          $t9, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r25;
    // 0x8004FC2C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8004FC30: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004FC34: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x8004FC38: addiu       $t3, $t3, -0x37A0
    ctx->r11 = ADD32(ctx->r11, -0X37A0);
    // 0x8004FC3C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004FC40: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004FC44: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004FC48: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004FC4C: sw          $t0, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r8;
    // 0x8004FC50: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8004FC54: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8004FC58: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004FC5C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004FC60: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8004FC64: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8004FC68: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x8004FC6C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8004FC70: jal         0x80077960
    // 0x8004FC74: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_272;
    // 0x8004FC74: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_272:
    // 0x8004FC78: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004FC7C: lw          $t2, 0x9DC($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9DC);
    // 0x8004FC80: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004FC84: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8004FC88: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004FC8C: addiu       $t5, $t5, -0x3798
    ctx->r13 = ADD32(ctx->r13, -0X3798);
    // 0x8004FC90: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004FC94: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004FC98: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004FC9C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004FCA0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004FCA4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004FCA8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004FCAC: addiu       $t1, $t2, 0x14
    ctx->r9 = ADD32(ctx->r10, 0X14);
    // 0x8004FCB0: sw          $t1, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r9;
    // 0x8004FCB4: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8004FCB8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8004FCBC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8004FCC0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8004FCC4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8004FCC8: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004FCCC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004FCD0: jal         0x80077960
    // 0x8004FCD4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80077960(rdram, ctx);
        goto after_273;
    // 0x8004FCD4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_273:
    // 0x8004FCD8: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004FCDC: lw          $t3, 0x9DC($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9DC);
    // 0x8004FCE0: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004FCE4: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8004FCE8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004FCEC: addiu       $t4, $t4, -0x3778
    ctx->r12 = ADD32(ctx->r12, -0X3778);
    // 0x8004FCF0: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004FCF4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004FCF8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004FCFC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004FD00: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004FD04: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004FD08: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004FD0C: addiu       $t7, $t3, 0xF
    ctx->r15 = ADD32(ctx->r11, 0XF);
    // 0x8004FD10: sw          $t7, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r15;
    // 0x8004FD14: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8004FD18: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8004FD1C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8004FD20: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8004FD24: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8004FD28: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004FD2C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004FD30: jal         0x80077960
    // 0x8004FD34: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_80077960(rdram, ctx);
        goto after_274;
    // 0x8004FD34: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_274:
    // 0x8004FD38: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004FD3C: lw          $t6, 0x9DC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9DC);
    // 0x8004FD40: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004FD44: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8004FD48: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004FD4C: addiu       $t0, $t0, -0x3758
    ctx->r8 = ADD32(ctx->r8, -0X3758);
    // 0x8004FD50: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004FD54: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004FD58: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004FD5C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004FD60: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004FD64: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004FD68: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004FD6C: addiu       $t9, $t6, 0xF
    ctx->r25 = ADD32(ctx->r14, 0XF);
    // 0x8004FD70: sw          $t9, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r25;
    // 0x8004FD74: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x8004FD78: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8004FD7C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8004FD80: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8004FD84: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8004FD88: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004FD8C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004FD90: jal         0x80077960
    // 0x8004FD94: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80077960(rdram, ctx);
        goto after_275;
    // 0x8004FD94: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_275:
    // 0x8004FD98: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8004FD9C: lw          $t1, 0x9DC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9DC);
    // 0x8004FDA0: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004FDA4: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8004FDA8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004FDAC: addiu       $t8, $t8, -0x373C
    ctx->r24 = ADD32(ctx->r24, -0X373C);
    // 0x8004FDB0: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004FDB4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004FDB8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004FDBC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8004FDC0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004FDC4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004FDC8: addiu       $t5, $t1, 0xF
    ctx->r13 = ADD32(ctx->r9, 0XF);
    // 0x8004FDCC: sw          $t5, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r13;
    // 0x8004FDD0: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x8004FDD4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8004FDD8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8004FDDC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8004FDE0: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004FDE4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004FDE8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004FDEC: jal         0x80077960
    // 0x8004FDF0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_276;
    // 0x8004FDF0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_276:
    // 0x8004FDF4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004FDF8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004FDFC: addiu       $a1, $a1, -0x372C
    ctx->r5 = ADD32(ctx->r5, -0X372C);
    // 0x8004FE00: jal         0x80077D88
    // 0x8004FE04: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_80077D88(rdram, ctx);
        goto after_277;
    // 0x8004FE04: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_277:
    // 0x8004FE08: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004FE0C: lw          $t3, 0x9D8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9D8);
    // 0x8004FE10: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004FE14: lw          $a2, 0x584($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X584);
    // 0x8004FE18: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004FE1C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004FE20: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004FE24: addu        $t7, $t3, $s0
    ctx->r15 = ADD32(ctx->r11, ctx->r16);
    // 0x8004FE28: sw          $t7, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r15;
    // 0x8004FE2C: addiu       $a1, $a1, -0x371C
    ctx->r5 = ADD32(ctx->r5, -0X371C);
    // 0x8004FE30: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8004FE34: jal         0x800B62D4
    // 0x8004FE38: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    sprintf_recomp(rdram, ctx);
        goto after_278;
    // 0x8004FE38: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_278:
    // 0x8004FE3C: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8004FE40: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004FE44: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004FE48: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8004FE4C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004FE50: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004FE54: addiu       $t4, $sp, 0x4C
    ctx->r12 = ADD32(ctx->r29, 0X4C);
    // 0x8004FE58: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004FE5C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004FE60: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004FE64: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8004FE68: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8004FE6C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8004FE70: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8004FE74: addiu       $a1, $a1, 0x680
    ctx->r5 = ADD32(ctx->r5, 0X680);
    // 0x8004FE78: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004FE7C: jal         0x80077960
    // 0x8004FE80: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_279;
    // 0x8004FE80: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_279:
    // 0x8004FE84: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004FE88: lw          $t8, 0x9DC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9DC);
    // 0x8004FE8C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004FE90: addiu       $t6, $t8, 0x14
    ctx->r14 = ADD32(ctx->r24, 0X14);
    // 0x8004FE94: sw          $t6, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r14;
    // 0x8004FE98: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8004FE9C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004FEA0: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x8004FEA4: addiu       $t0, $t0, -0x3718
    ctx->r8 = ADD32(ctx->r8, -0X3718);
    // 0x8004FEA8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004FEAC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004FEB0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8004FEB4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8004FEB8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8004FEBC: sw          $t9, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r25;
    // 0x8004FEC0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8004FEC4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8004FEC8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8004FECC: addiu       $a1, $a1, 0x590
    ctx->r5 = ADD32(ctx->r5, 0X590);
    // 0x8004FED0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004FED4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8004FED8: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8004FEDC: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8004FEE0: jal         0x80077960
    // 0x8004FEE4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_280;
    // 0x8004FEE4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_280:
    // 0x8004FEE8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004FEEC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004FEF0: addiu       $a1, $a1, -0x3710
    ctx->r5 = ADD32(ctx->r5, -0X3710);
    // 0x8004FEF4: jal         0x80077D88
    // 0x8004FEF8: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    func_80077D88(rdram, ctx);
        goto after_281;
    // 0x8004FEF8: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    after_281:
    // 0x8004FEFC: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8004FF00: lw          $t2, 0x9D8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9D8);
    // 0x8004FF04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004FF08: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004FF0C: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8004FF10: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004FF14: addiu       $t5, $t5, -0x3708
    ctx->r13 = ADD32(ctx->r13, -0X3708);
    // 0x8004FF18: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004FF1C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004FF20: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004FF24: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x8004FF28: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x8004FF2C: addiu       $t6, $zero, 0xB9
    ctx->r14 = ADD32(0, 0XB9);
    // 0x8004FF30: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004FF34: addu        $t1, $t2, $s0
    ctx->r9 = ADD32(ctx->r10, ctx->r16);
    // 0x8004FF38: sw          $t1, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r9;
    // 0x8004FF3C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8004FF40: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8004FF44: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8004FF48: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8004FF4C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8004FF50: addiu       $a1, $a1, 0x590
    ctx->r5 = ADD32(ctx->r5, 0X590);
    // 0x8004FF54: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004FF58: jal         0x80077960
    // 0x8004FF5C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80077960(rdram, ctx);
        goto after_282;
    // 0x8004FF5C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_282:
    // 0x8004FF60: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004FF64: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004FF68: addiu       $a1, $a1, -0x3704
    ctx->r5 = ADD32(ctx->r5, -0X3704);
    // 0x8004FF6C: jal         0x80077D88
    // 0x8004FF70: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    func_80077D88(rdram, ctx);
        goto after_283;
    // 0x8004FF70: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    after_283:
    // 0x8004FF74: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8004FF78: lw          $t3, 0x9D8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9D8);
    // 0x8004FF7C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004FF80: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8004FF84: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8004FF88: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004FF8C: addiu       $t4, $t4, -0x3700
    ctx->r12 = ADD32(ctx->r12, -0X3700);
    // 0x8004FF90: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8004FF94: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004FF98: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004FF9C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004FFA0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8004FFA4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8004FFA8: addu        $t7, $t3, $s0
    ctx->r15 = ADD32(ctx->r11, ctx->r16);
    // 0x8004FFAC: sw          $t7, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r15;
    // 0x8004FFB0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8004FFB4: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8004FFB8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8004FFBC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8004FFC0: addiu       $a1, $a1, 0x590
    ctx->r5 = ADD32(ctx->r5, 0X590);
    // 0x8004FFC4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x8004FFC8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8004FFCC: jal         0x80077960
    // 0x8004FFD0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_284;
    // 0x8004FFD0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_284:
    // 0x8004FFD4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004FFD8: lw          $t8, 0x9DC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9DC);
    // 0x8004FFDC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004FFE0: addiu       $t9, $t8, 0xF
    ctx->r25 = ADD32(ctx->r24, 0XF);
    // 0x8004FFE4: sw          $t9, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r25;
    // 0x8004FFE8: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8004FFEC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004FFF0: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x8004FFF4: addiu       $t0, $t0, -0x36E4
    ctx->r8 = ADD32(ctx->r8, -0X36E4);
    // 0x8004FFF8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004FFFC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80050000: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80050004: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80050008: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8005000C: sw          $t6, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r14;
    // 0x80050010: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80050014: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80050018: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8005001C: addiu       $a1, $a1, 0x590
    ctx->r5 = ADD32(ctx->r5, 0X590);
    // 0x80050020: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80050024: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80050028: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x8005002C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x80050030: jal         0x80077960
    // 0x80050034: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_285;
    // 0x80050034: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_285:
    // 0x80050038: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8005003C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80050040: addiu       $a1, $a1, -0x36DC
    ctx->r5 = ADD32(ctx->r5, -0X36DC);
    // 0x80050044: jal         0x80077D88
    // 0x80050048: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    func_80077D88(rdram, ctx);
        goto after_286;
    // 0x80050048: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    after_286:
    // 0x8005004C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80050050: lw          $t2, 0x9D8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9D8);
    // 0x80050054: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80050058: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8005005C: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80050060: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80050064: addiu       $t5, $t5, -0x36D4
    ctx->r13 = ADD32(ctx->r13, -0X36D4);
    // 0x80050068: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x8005006C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80050070: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80050074: addiu       $t8, $zero, 0x70
    ctx->r24 = ADD32(0, 0X70);
    // 0x80050078: addiu       $t6, $zero, 0xC3
    ctx->r14 = ADD32(0, 0XC3);
    // 0x8005007C: addiu       $t9, $zero, 0x74
    ctx->r25 = ADD32(0, 0X74);
    // 0x80050080: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80050084: addu        $t1, $t2, $s0
    ctx->r9 = ADD32(ctx->r10, ctx->r16);
    // 0x80050088: sw          $t1, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r9;
    // 0x8005008C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x80050090: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80050094: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80050098: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8005009C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800500A0: addiu       $a1, $a1, 0x590
    ctx->r5 = ADD32(ctx->r5, 0X590);
    // 0x800500A4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800500A8: jal         0x80077960
    // 0x800500AC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80077960(rdram, ctx);
        goto after_287;
    // 0x800500AC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_287:
    // 0x800500B0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800500B4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800500B8: addiu       $a1, $a1, -0x36D0
    ctx->r5 = ADD32(ctx->r5, -0X36D0);
    // 0x800500BC: jal         0x80077D88
    // 0x800500C0: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    func_80077D88(rdram, ctx);
        goto after_288;
    // 0x800500C0: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    after_288:
    // 0x800500C4: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x800500C8: lw          $t3, 0x9D8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9D8);
    // 0x800500CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800500D0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800500D4: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x800500D8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800500DC: addiu       $t4, $t4, -0x36CC
    ctx->r12 = ADD32(ctx->r12, -0X36CC);
    // 0x800500E0: lw          $a3, 0x9DC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9DC);
    // 0x800500E4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800500E8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800500EC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x800500F0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800500F4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800500F8: addu        $t7, $t3, $s0
    ctx->r15 = ADD32(ctx->r11, ctx->r16);
    // 0x800500FC: sw          $t7, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r15;
    // 0x80050100: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80050104: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80050108: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8005010C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80050110: addiu       $a1, $a1, 0x590
    ctx->r5 = ADD32(ctx->r5, 0X590);
    // 0x80050114: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80050118: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8005011C: jal         0x80077960
    // 0x80050120: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_289;
    // 0x80050120: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_289:
    // 0x80050124: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80050128: lw          $t8, 0x9DC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9DC);
    // 0x8005012C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80050130: addiu       $t6, $t8, 0xF
    ctx->r14 = ADD32(ctx->r24, 0XF);
    // 0x80050134: sw          $t6, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r14;
    // 0x80050138: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8005013C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80050140: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x80050144: addiu       $t0, $t0, -0x36B8
    ctx->r8 = ADD32(ctx->r8, -0X36B8);
    // 0x80050148: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8005014C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80050150: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80050154: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80050158: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8005015C: sw          $t9, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r25;
    // 0x80050160: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80050164: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80050168: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8005016C: addiu       $a1, $a1, 0x590
    ctx->r5 = ADD32(ctx->r5, 0X590);
    // 0x80050170: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80050174: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80050178: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8005017C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x80050180: jal         0x80077960
    // 0x80050184: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80077960(rdram, ctx);
        goto after_290;
    // 0x80050184: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_290:
    // 0x80050188: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8005018C: lw          $t2, 0x9DC($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9DC);
    // 0x80050190: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80050194: addiu       $t1, $t2, 0xF
    ctx->r9 = ADD32(ctx->r10, 0XF);
    // 0x80050198: sw          $t1, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r9;
    // 0x8005019C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x800501A0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800501A4: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x800501A8: addiu       $t8, $t8, -0x3698
    ctx->r24 = ADD32(ctx->r24, -0X3698);
    // 0x800501AC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800501B0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800501B4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800501B8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800501BC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800501C0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800501C4: sw          $t5, 0x9D8($at)
    MEM_W(0X9D8, ctx->r1) = ctx->r13;
    // 0x800501C8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x800501CC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x800501D0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800501D4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800501D8: addiu       $a1, $a1, 0x590
    ctx->r5 = ADD32(ctx->r5, 0X590);
    // 0x800501DC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800501E0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800501E4: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x800501E8: jal         0x80077960
    // 0x800501EC: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_80077960(rdram, ctx);
        goto after_291;
    // 0x800501EC: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_291:
    // 0x800501F0: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800501F4: lw          $t7, 0x9DC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9DC);
    // 0x800501F8: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x800501FC: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x80050200: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80050204: addiu       $t2, $t2, -0x3674
    ctx->r10 = ADD32(ctx->r10, -0X3674);
    // 0x80050208: lw          $a2, 0x9D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9D8);
    // 0x8005020C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80050210: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80050214: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80050218: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8005021C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80050220: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80050224: addiu       $t4, $t7, 0xF
    ctx->r12 = ADD32(ctx->r15, 0XF);
    // 0x80050228: sw          $t4, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r12;
    // 0x8005022C: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    // 0x80050230: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80050234: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80050238: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8005023C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80050240: addiu       $a1, $a1, 0x590
    ctx->r5 = ADD32(ctx->r5, 0X590);
    // 0x80050244: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80050248: jal         0x80077960
    // 0x8005024C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80077960(rdram, ctx);
        goto after_292;
    // 0x8005024C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_292:
    // 0x80050250: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80050254: lw          $t3, 0x584($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X584);
    // 0x80050258: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8005025C: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80050260: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x80050264: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80050268: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x8005026C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80050270: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80050274: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80050278: lw          $t6, 0x9DC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9DC);
    // 0x8005027C: lw          $t4, -0x10AC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X10AC);
    // 0x80050280: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80050284: addiu       $t0, $t6, 0xF
    ctx->r8 = ADD32(ctx->r14, 0XF);
    // 0x80050288: andi        $t2, $t4, 0x8000
    ctx->r10 = ctx->r12 & 0X8000;
    // 0x8005028C: beq         $t2, $zero, L_800503D4
    if (ctx->r10 == 0) {
        // 0x80050290: sw          $t0, 0x9DC($at)
        MEM_W(0X9DC, ctx->r1) = ctx->r8;
            goto L_800503D4;
    }
    // 0x80050290: sw          $t0, 0x9DC($at)
    MEM_W(0X9DC, ctx->r1) = ctx->r8;
    // 0x80050294: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x80050298: bne         $t5, $zero, L_800503D4
    if (ctx->r13 != 0) {
        // 0x8005029C: nop
    
            goto L_800503D4;
    }
    // 0x8005029C: nop

    // 0x800502A0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800502A4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800502A8: sw          $t1, -0x15C($at)
    MEM_W(-0X15C, ctx->r1) = ctx->r9;
    // 0x800502AC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800502B0: sw          $zero, 0x9CC($at)
    MEM_W(0X9CC, ctx->r1) = 0;
    // 0x800502B4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800502B8: sw          $zero, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = 0;
L_800502BC:
    // 0x800502BC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800502C0: lw          $t8, 0x9CC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X9CC);
    // 0x800502C4: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800502C8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800502CC: lw          $a3, 0x584($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X584);
    // 0x800502D0: addiu       $t6, $t6, 0x770
    ctx->r14 = ADD32(ctx->r14, 0X770);
    // 0x800502D4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800502D8: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x800502DC: addu        $a1, $t9, $t6
    ctx->r5 = ADD32(ctx->r25, ctx->r14);
    // 0x800502E0: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x800502E4: jal         0x8003BA84
    // 0x800502E8: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    func_8003BA84(rdram, ctx);
        goto after_293;
    // 0x800502E8: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    after_293:
    // 0x800502EC: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800502F0: lw          $t0, 0x9CC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X9CC);
    // 0x800502F4: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800502F8: lw          $t7, 0x9CC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9CC);
    // 0x800502FC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80050300: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x80050304: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80050308: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8005030C: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x80050310: sw          $v0, 0x970($at)
    MEM_W(0X970, ctx->r1) = ctx->r2;
    // 0x80050314: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80050318: lw          $t4, 0x970($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X970);
    // 0x8005031C: nop

    // 0x80050320: slti        $at, $t4, 0x11
    ctx->r1 = SIGNED(ctx->r12) < 0X11 ? 1 : 0;
    // 0x80050324: beq         $at, $zero, L_80050378
    if (ctx->r1 == 0) {
        // 0x80050328: nop
    
            goto L_80050378;
    }
    // 0x80050328: nop

    // 0x8005032C: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80050330: lw          $t5, -0x15C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X15C);
    // 0x80050334: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80050338: bne         $t5, $at, L_80050344
    if (ctx->r13 != ctx->r1) {
        // 0x8005033C: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_80050344;
    }
    // 0x8005033C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050340: sw          $t7, -0x15C($at)
    MEM_W(-0X15C, ctx->r1) = ctx->r15;
L_80050344:
    // 0x80050344: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80050348: lw          $t9, 0x9D0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X9D0);
    // 0x8005034C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80050350: lw          $t1, 0x9CC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X9CC);
    // 0x80050354: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80050358: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8005035C: lw          $t6, 0x9D0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X9D0);
    // 0x80050360: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80050364: sb          $t1, 0x9B0($at)
    MEM_B(0X9B0, ctx->r1) = ctx->r9;
    // 0x80050368: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8005036C: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80050370: b           L_800503A4
    // 0x80050374: sw          $t8, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r24;
        goto L_800503A4;
    // 0x80050374: sw          $t8, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r24;
L_80050378:
    // 0x80050378: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8005037C: lw          $t3, 0x9D0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9D0);
    // 0x80050380: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80050384: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80050388: lw          $t2, 0x9D0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9D0);
    // 0x8005038C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80050390: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80050394: sb          $t0, 0x9B0($at)
    MEM_B(0X9B0, ctx->r1) = ctx->r8;
    // 0x80050398: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8005039C: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x800503A0: sw          $t4, 0x9D0($at)
    MEM_W(0X9D0, ctx->r1) = ctx->r12;
L_800503A4:
    // 0x800503A4: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800503A8: lw          $t5, 0x9CC($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9CC);
    // 0x800503AC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800503B0: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x800503B4: sw          $t7, 0x9CC($at)
    MEM_W(0X9CC, ctx->r1) = ctx->r15;
    // 0x800503B8: slti        $at, $t7, 0x10
    ctx->r1 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x800503BC: bne         $at, $zero, L_800502BC
    if (ctx->r1 != 0) {
        // 0x800503C0: nop
    
            goto L_800502BC;
    }
    // 0x800503C0: nop

    // 0x800503C4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800503C8: sw          $zero, -0x158($at)
    MEM_W(-0X158, ctx->r1) = 0;
    // 0x800503CC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800503D0: sb          $zero, -0x150($at)
    MEM_B(-0X150, ctx->r1) = 0;
L_800503D4:
    // 0x800503D4: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800503D8: lw          $t1, 0x584($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X584);
    // 0x800503DC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800503E0: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x800503E4: subu        $t9, $t9, $t1
    ctx->r25 = SUB32(ctx->r25, ctx->r9);
    // 0x800503E8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800503EC: subu        $t9, $t9, $t1
    ctx->r25 = SUB32(ctx->r25, ctx->r9);
    // 0x800503F0: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800503F4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800503F8: lw          $t6, -0x10AC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10AC);
    // 0x800503FC: nop

    // 0x80050400: andi        $t8, $t6, 0x4000
    ctx->r24 = ctx->r14 & 0X4000;
    // 0x80050404: beq         $t8, $zero, L_80050500
    if (ctx->r24 == 0) {
        // 0x80050408: nop
    
            goto L_80050500;
    }
    // 0x80050408: nop

    // 0x8005040C: andi        $t0, $t6, 0x1000
    ctx->r8 = ctx->r14 & 0X1000;
    // 0x80050410: bne         $t0, $zero, L_80050500
    if (ctx->r8 != 0) {
        // 0x80050414: nop
    
            goto L_80050500;
    }
    // 0x80050414: nop

    // 0x80050418: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8005041C: lbu         $t3, -0x150($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X150);
    // 0x80050420: nop

    // 0x80050424: beq         $t3, $zero, L_800504DC
    if (ctx->r11 == 0) {
        // 0x80050428: nop
    
            goto L_800504DC;
    }
    // 0x80050428: nop

    // 0x8005042C: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80050430: lbu         $t2, -0x1A4($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X1A4);
    // 0x80050434: nop

    // 0x80050438: beq         $t2, $zero, L_8005045C
    if (ctx->r10 == 0) {
        // 0x8005043C: nop
    
            goto L_8005045C;
    }
    // 0x8005043C: nop

    // 0x80050440: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x80050444: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050448: sb          $t4, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r12;
    // 0x8005044C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050450: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80050454: b           L_80050468
    // 0x80050458: sw          $t5, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r13;
        goto L_80050468;
    // 0x80050458: sw          $t5, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r13;
L_8005045C:
    // 0x8005045C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x80050460: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050464: sw          $t7, -0x1AC($at)
    MEM_W(-0X1AC, ctx->r1) = ctx->r15;
L_80050468:
    // 0x80050468: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8005046C: jal         0x8005BE40
    // 0x80050470: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_294;
    // 0x80050470: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_294:
    // 0x80050474: jal         0x8004A34C
    // 0x80050478: nop

    func_8004A34C(rdram, ctx);
        goto after_295;
    // 0x80050478: nop

    after_295:
    // 0x8005047C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80050480: jal         0x800773D0
    // 0x80050484: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    func_800773D0(rdram, ctx);
        goto after_296;
    // 0x80050484: addiu       $a0, $a0, 0x6F8
    ctx->r4 = ADD32(ctx->r4, 0X6F8);
    after_296:
    // 0x80050488: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8005048C: jal         0x800773D0
    // 0x80050490: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    func_800773D0(rdram, ctx);
        goto after_297;
    // 0x80050490: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    after_297:
    // 0x80050494: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80050498: jal         0x800773D0
    // 0x8005049C: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    func_800773D0(rdram, ctx);
        goto after_298;
    // 0x8005049C: addiu       $a0, $a0, 0x608
    ctx->r4 = ADD32(ctx->r4, 0X608);
    after_298:
    // 0x800504A0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800504A4: jal         0x800773D0
    // 0x800504A8: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    func_800773D0(rdram, ctx);
        goto after_299;
    // 0x800504A8: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    after_299:
    // 0x800504AC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800504B0: lw          $a0, 0x9C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X9C0);
    // 0x800504B4: jal         0x8007E328
    // 0x800504B8: nop

    func_8007E328(rdram, ctx);
        goto after_300;
    // 0x800504B8: nop

    after_300:
    // 0x800504BC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800504C0: sb          $zero, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = 0;
    // 0x800504C4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800504C8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800504CC: sw          $t1, -0x14C($at)
    MEM_W(-0X14C, ctx->r1) = ctx->r9;
    // 0x800504D0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800504D4: b           L_8005050C
    // 0x800504D8: sb          $zero, -0x150($at)
    MEM_B(-0X150, ctx->r1) = 0;
        goto L_8005050C;
    // 0x800504D8: sb          $zero, -0x150($at)
    MEM_B(-0X150, ctx->r1) = 0;
L_800504DC:
    // 0x800504DC: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800504E0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800504E4: b           L_80050500
    // 0x800504E8: sw          $t9, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r25;
        goto L_80050500;
    // 0x800504E8: sw          $t9, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r25;
L_800504EC:
    // 0x800504EC: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x800504F0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800504F4: sw          $t8, -0x158($at)
    MEM_W(-0X158, ctx->r1) = ctx->r24;
    // 0x800504F8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800504FC: sb          $zero, -0x1B0($at)
    MEM_B(-0X1B0, ctx->r1) = 0;
L_80050500:
    // 0x80050500: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80050504: jal         0x8005BE40
    // 0x80050508: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_301;
    // 0x80050508: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_301:
L_8005050C:
    // 0x8005050C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80050510: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80050514: jr          $ra
    // 0x80050518: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80050518: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x8005051C: nop

;}
RECOMP_FUNC void func_80050520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050520: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80050524: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80050528: addiu       $a1, $a1, 0xA00
    ctx->r5 = ADD32(ctx->r5, 0XA00);
    // 0x8005052C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80050530: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80050534: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x80050538: sb          $a0, -0x10DF($at)
    MEM_B(-0X10DF, ctx->r1) = ctx->r4;
    // 0x8005053C: addiu       $t8, $t7, 0x7FFF
    ctx->r24 = ADD32(ctx->r15, 0X7FFF);
    // 0x80050540: lw          $t8, 0x612D($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X612D);
    // 0x80050544: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80050548: sw          $t8, -0xDD0($at)
    MEM_W(-0XDD0, ctx->r1) = ctx->r24;
    // 0x8005054C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80050550: addiu       $t9, $a1, 0x80
    ctx->r25 = ADD32(ctx->r5, 0X80);
    // 0x80050554: sw          $t9, -0x350($at)
    MEM_W(-0X350, ctx->r1) = ctx->r25;
    // 0x80050558: ori         $at, $zero, 0xE0E8
    ctx->r1 = 0 | 0XE0E8;
    // 0x8005055C: addu        $t0, $a1, $at
    ctx->r8 = ADD32(ctx->r5, ctx->r1);
    // 0x80050560: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80050564: sw          $t0, -0x390($at)
    MEM_W(-0X390, ctx->r1) = ctx->r8;
    // 0x80050568: lw          $t1, 0x674C($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X674C);
    // 0x8005056C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80050570: sw          $t1, -0x380($at)
    MEM_W(-0X380, ctx->r1) = ctx->r9;
    // 0x80050574: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80050578: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x8005057C: sw          $t2, -0xDE0($at)
    MEM_W(-0XDE0, ctx->r1) = ctx->r10;
    // 0x80050580: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80050584: addiu       $t3, $t8, 0x7D0
    ctx->r11 = ADD32(ctx->r24, 0X7D0);
    // 0x80050588: sw          $t3, -0x3F0($at)
    MEM_W(-0X3F0, ctx->r1) = ctx->r11;
    // 0x8005058C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80050590: addiu       $t4, $t8, 0x54
    ctx->r12 = ADD32(ctx->r24, 0X54);
    // 0x80050594: sw          $t4, -0x470($at)
    MEM_W(-0X470, ctx->r1) = ctx->r12;
    // 0x80050598: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005059C: addiu       $t5, $t8, 0x44C
    ctx->r13 = ADD32(ctx->r24, 0X44C);
    // 0x800505A0: sw          $t5, -0x460($at)
    MEM_W(-0X460, ctx->r1) = ctx->r13;
    // 0x800505A4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800505A8: addiu       $t6, $t8, 0x768
    ctx->r14 = ADD32(ctx->r24, 0X768);
    // 0x800505AC: sw          $t6, -0x440($at)
    MEM_W(-0X440, ctx->r1) = ctx->r14;
    // 0x800505B0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800505B4: addiu       $t7, $t8, 0x6750
    ctx->r15 = ADD32(ctx->r24, 0X6750);
    // 0x800505B8: sw          $t7, -0xDA0($at)
    MEM_W(-0XDA0, ctx->r1) = ctx->r15;
    // 0x800505BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800505C0: addiu       $t9, $t8, 0x6808
    ctx->r25 = ADD32(ctx->r24, 0X6808);
    // 0x800505C4: sw          $t9, -0x10F0($at)
    MEM_W(-0X10F0, ctx->r1) = ctx->r25;
    // 0x800505C8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800505CC: addiu       $t0, $t8, 0x3BC0
    ctx->r8 = ADD32(ctx->r24, 0X3BC0);
    // 0x800505D0: sw          $t0, -0x410($at)
    MEM_W(-0X410, ctx->r1) = ctx->r8;
    // 0x800505D4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800505D8: addiu       $t1, $t8, 0x3BCC
    ctx->r9 = ADD32(ctx->r24, 0X3BCC);
    // 0x800505DC: sw          $t1, -0x400($at)
    MEM_W(-0X400, ctx->r1) = ctx->r9;
    // 0x800505E0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800505E4: addiu       $t2, $t8, 0x3BD4
    ctx->r10 = ADD32(ctx->r24, 0X3BD4);
    // 0x800505E8: sw          $t2, -0x420($at)
    MEM_W(-0X420, ctx->r1) = ctx->r10;
    // 0x800505EC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800505F0: addiu       $t3, $t8, 0x3BD8
    ctx->r11 = ADD32(ctx->r24, 0X3BD8);
    // 0x800505F4: sw          $t3, -0x430($at)
    MEM_W(-0X430, ctx->r1) = ctx->r11;
    // 0x800505F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800505FC: addiu       $t4, $t8, 0x830
    ctx->r12 = ADD32(ctx->r24, 0X830);
    // 0x80050600: sw          $t4, -0x490($at)
    MEM_W(-0X490, ctx->r1) = ctx->r12;
    // 0x80050604: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80050608: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005060C: addiu       $t5, $t8, 0x12A0
    ctx->r13 = ADD32(ctx->r24, 0X12A0);
    // 0x80050610: sw          $t5, -0x480($at)
    MEM_W(-0X480, ctx->r1) = ctx->r13;
    // 0x80050614: jr          $ra
    // 0x80050618: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80050618: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8005061C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005061C: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80050620: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80050624: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80050628: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8005062C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80050630: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80050634: addiu       $t7, $t7, -0x10D0
    ctx->r15 = ADD32(ctx->r15, -0X10D0);
    // 0x80050638: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8005063C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80050640: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80050644: jr          $ra
    // 0x80050648: sw          $t8, -0xDF0($at)
    MEM_W(-0XDF0, ctx->r1) = ctx->r24;
    return;
    // 0x80050648: sw          $t8, -0xDF0($at)
    MEM_W(-0XDF0, ctx->r1) = ctx->r24;
    // 0x8005064C: nop

;}
RECOMP_FUNC void func_80050650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050650: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80050654: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80050658: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8005065C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80050660: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80050664: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80050668: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8005066C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80050670: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80050674: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80050678: nop

    // 0x8005067C: sw          $zero, 0x8($t8)
    MEM_W(0X8, ctx->r24) = 0;
    // 0x80050680: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80050684: jal         0x8007E03C
    // 0x80050688: nop

    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x80050688: nop

    after_0:
    // 0x8005068C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80050690: nop

    // 0x80050694: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
    // 0x80050698: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8005069C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800506A0: lw          $s0, 0x0($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X0);
    // 0x800506A4: blez        $s1, L_800506BC
    if (SIGNED(ctx->r17) <= 0) {
        // 0x800506A8: nop
    
            goto L_800506BC;
    }
    // 0x800506A8: nop

L_800506AC:
    // 0x800506AC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x800506B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800506B4: bgtz        $s1, L_800506AC
    if (SIGNED(ctx->r17) > 0) {
        // 0x800506B8: sb          $zero, -0x1($s0)
        MEM_B(-0X1, ctx->r16) = 0;
            goto L_800506AC;
    }
    // 0x800506B8: sb          $zero, -0x1($s0)
    MEM_B(-0X1, ctx->r16) = 0;
L_800506BC:
    // 0x800506BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800506C0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800506C4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800506C8: jr          $ra
    // 0x800506CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800506CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800506D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800506D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800506D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800506D8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800506DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800506E0: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x800506E4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800506E8: nop

    // 0x800506EC: sw          $zero, 0x8($t7)
    MEM_W(0X8, ctx->r15) = 0;
    // 0x800506F0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800506F4: nop

    // 0x800506F8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x800506FC: jal         0x8007E328
    // 0x80050700: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x80050700: nop

    after_0:
    // 0x80050704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80050708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005070C: jr          $ra
    // 0x80050710: nop

    return;
    // 0x80050710: nop

;}
RECOMP_FUNC void func_80050714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050714: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80050718: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8005071C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80050720: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80050724: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80050728: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8005072C: lw          $s2, 0x8($t6)
    ctx->r18 = MEM_W(ctx->r14, 0X8);
    // 0x80050730: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80050734: nop

    // 0x80050738: addu        $s0, $t7, $s2
    ctx->r16 = ADD32(ctx->r15, ctx->r18);
    // 0x8005073C: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x80050740: nop

    // 0x80050744: beq         $t8, $zero, L_800507A8
    if (ctx->r24 == 0) {
        // 0x80050748: nop
    
            goto L_800507A8;
    }
    // 0x80050748: nop

L_8005074C:
    // 0x8005074C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80050750: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80050754: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x80050758: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8005075C: bne         $t0, $s2, L_8005076C
    if (ctx->r8 != ctx->r18) {
        // 0x80050760: nop
    
            goto L_8005076C;
    }
    // 0x80050760: nop

    // 0x80050764: lw          $s0, 0x0($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X0);
    // 0x80050768: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8005076C:
    // 0x8005076C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80050770: nop

    // 0x80050774: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x80050778: nop

    // 0x8005077C: bne         $t2, $s2, L_80050798
    if (ctx->r10 != ctx->r18) {
        // 0x80050780: nop
    
            goto L_80050798;
    }
    // 0x80050780: nop

    // 0x80050784: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80050788: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8005078C: addiu       $a1, $a1, -0x3598
    ctx->r5 = ADD32(ctx->r5, -0X3598);
    // 0x80050790: jal         0x80083560
    // 0x80050794: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    Fault_Assert(rdram, ctx);
        goto after_0;
    // 0x80050794: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_0:
L_80050798:
    // 0x80050798: lbu         $t3, 0x0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X0);
    // 0x8005079C: nop

    // 0x800507A0: bne         $t3, $zero, L_8005074C
    if (ctx->r11 != 0) {
        // 0x800507A4: nop
    
            goto L_8005074C;
    }
    // 0x800507A4: nop

L_800507A8:
    // 0x800507A8: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800507AC: addiu       $t4, $s2, 0x1
    ctx->r12 = ADD32(ctx->r18, 0X1);
    // 0x800507B0: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x800507B4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800507B8: divu        $zero, $t4, $t6
    lo = S32(U32(ctx->r12) / U32(ctx->r14)); hi = S32(U32(ctx->r12) % U32(ctx->r14));
    // 0x800507BC: bne         $t6, $zero, L_800507C8
    if (ctx->r14 != 0) {
        // 0x800507C0: nop
    
            goto L_800507C8;
    }
    // 0x800507C0: nop

    // 0x800507C4: break       7
    do_break(2147813316);
L_800507C8:
    // 0x800507C8: mfhi        $t7
    ctx->r15 = hi;
    // 0x800507CC: sw          $t7, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r15;
    // 0x800507D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800507D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800507D8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800507DC: jr          $ra
    // 0x800507E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800507E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800507E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800507E4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800507E8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800507EC: addu        $a2, $t6, $a1
    ctx->r6 = ADD32(ctx->r14, ctx->r5);
    // 0x800507F0: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x800507F4: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x800507F8: jr          $ra
    // 0x800507FC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800507FC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80050800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050800: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80050804: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80050808: addu        $a2, $t6, $a1
    ctx->r6 = ADD32(ctx->r14, ctx->r5);
    // 0x8005080C: lbu         $t7, 0x0($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X0);
    // 0x80050810: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80050814: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80050818: jr          $ra
    // 0x8005081C: sb          $t8, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r24;
    return;
    // 0x8005081C: sb          $t8, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r24;
;}
RECOMP_FUNC void func_80050820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050820: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80050824: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80050828: addu        $a3, $t6, $a1
    ctx->r7 = ADD32(ctx->r14, ctx->r5);
    // 0x8005082C: lbu         $t7, 0x0($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X0);
    // 0x80050830: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80050834: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x80050838: jr          $ra
    // 0x8005083C: sb          $t8, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r24;
    return;
    // 0x8005083C: sb          $t8, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r24;
;}
RECOMP_FUNC void func_80050840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050840: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80050844: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80050848: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8005084C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80050850: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80050854: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80050858: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8005085C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80050860: nop

    // 0x80050864: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x80050868: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x8005086C: nop

    // 0x80050870: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80050874: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
    // 0x80050878: lbu         $t1, 0x0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X0);
    // 0x8005087C: nop

    // 0x80050880: bne         $t1, $zero, L_80050898
    if (ctx->r9 != 0) {
        // 0x80050884: nop
    
            goto L_80050898;
    }
    // 0x80050884: nop

    // 0x80050888: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8005088C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80050890: jal         0x800507E4
    // 0x80050894: nop

    func_800507E4(rdram, ctx);
        goto after_0;
    // 0x80050894: nop

    after_0:
L_80050898:
    // 0x80050898: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005089C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800508A0: jr          $ra
    // 0x800508A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800508A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800508A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800508A8: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800508AC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800508B0: addu        $a3, $t6, $a1
    ctx->r7 = ADD32(ctx->r14, ctx->r5);
    // 0x800508B4: lbu         $t7, 0x0($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X0);
    // 0x800508B8: nop

    // 0x800508BC: sltu        $at, $a2, $t7
    ctx->r1 = ctx->r6 < ctx->r15 ? 1 : 0;
    // 0x800508C0: bne         $at, $zero, L_800508D4
    if (ctx->r1 != 0) {
        // 0x800508C4: nop
    
            goto L_800508D4;
    }
    // 0x800508C4: nop

    // 0x800508C8: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
    // 0x800508CC: b           L_800508E4
    // 0x800508D0: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
        goto L_800508E4;
    // 0x800508D0: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
L_800508D4:
    // 0x800508D4: lbu         $t8, 0x0($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X0);
    // 0x800508D8: nop

    // 0x800508DC: subu        $t9, $t8, $a2
    ctx->r25 = SUB32(ctx->r24, ctx->r6);
    // 0x800508E0: sb          $t9, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r25;
L_800508E4:
    // 0x800508E4: jr          $ra
    // 0x800508E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800508E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800508EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800508EC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800508F0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800508F4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800508F8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800508FC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80050900: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80050904: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80050908: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005090C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80050910: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80050914: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80050918: nop

    // 0x8005091C: beq         $t7, $t9, L_80050970
    if (ctx->r15 == ctx->r25) {
        // 0x80050920: nop
    
            goto L_80050970;
    }
    // 0x80050920: nop

    // 0x80050924: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x80050928: jal         0x8007E328
    // 0x8005092C: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x8005092C: nop

    after_0:
    // 0x80050930: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80050934: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80050938: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x8005093C: nop

    // 0x80050940: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x80050944: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80050948: nop

    // 0x8005094C: sw          $zero, 0x8($t3)
    MEM_W(0X8, ctx->r11) = 0;
    // 0x80050950: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80050954: nop

    // 0x80050958: lw          $a0, 0x4($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X4);
    // 0x8005095C: jal         0x8007E03C
    // 0x80050960: nop

    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x80050960: nop

    after_1:
    // 0x80050964: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80050968: nop

    // 0x8005096C: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
L_80050970:
    // 0x80050970: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80050974: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80050978: lw          $s2, 0x4($t8)
    ctx->r18 = MEM_W(ctx->r24, 0X4);
    // 0x8005097C: lw          $s0, 0x0($t8)
    ctx->r16 = MEM_W(ctx->r24, 0X0);
    // 0x80050980: lw          $s1, 0x0($t7)
    ctx->r17 = MEM_W(ctx->r15, 0X0);
    // 0x80050984: blez        $s2, L_800509A4
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80050988: nop
    
            goto L_800509A4;
    }
    // 0x80050988: nop

L_8005098C:
    // 0x8005098C: lbu         $at, 0x0($s1)
    ctx->r1 = MEM_BU(ctx->r17, 0X0);
    // 0x80050990: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80050994: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80050998: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8005099C: bgtz        $s2, L_8005098C
    if (SIGNED(ctx->r18) > 0) {
        // 0x800509A0: sb          $at, -0x1($s0)
        MEM_B(-0X1, ctx->r16) = ctx->r1;
            goto L_8005098C;
    }
    // 0x800509A0: sb          $at, -0x1($s0)
    MEM_B(-0X1, ctx->r16) = ctx->r1;
L_800509A4:
    // 0x800509A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800509A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800509AC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800509B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800509B4: jr          $ra
    // 0x800509B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800509B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800509BC: nop

;}
RECOMP_FUNC void func_800509C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800509C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800509C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800509C8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800509CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800509D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800509D4: addiu       $t7, $t6, 0x7FFF
    ctx->r15 = ADD32(ctx->r14, 0X7FFF);
    // 0x800509D8: lbu         $t7, 0x6510($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X6510);
    // 0x800509DC: nop

    // 0x800509E0: bltz        $t7, L_80050A00
    if (SIGNED(ctx->r15) < 0) {
        // 0x800509E4: nop
    
            goto L_80050A00;
    }
    // 0x800509E4: nop

    // 0x800509E8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800509EC: lbu         $t8, -0x10E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X10E0);
    // 0x800509F0: nop

    // 0x800509F4: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800509F8: bne         $at, $zero, L_80050A18
    if (ctx->r1 != 0) {
        // 0x800509FC: nop
    
            goto L_80050A18;
    }
    // 0x800509FC: nop

L_80050A00:
    // 0x80050A00: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80050A04: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80050A08: addiu       $a1, $a1, -0x3564
    ctx->r5 = ADD32(ctx->r5, -0X3564);
    // 0x80050A0C: addiu       $a0, $a0, -0x3580
    ctx->r4 = ADD32(ctx->r4, -0X3580);
    // 0x80050A10: jal         0x8004A5A0
    // 0x80050A14: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    func_8004A5A0(rdram, ctx);
        goto after_0;
    // 0x80050A14: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    after_0:
L_80050A18:
    // 0x80050A18: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80050A1C: lbu         $t9, 0x1F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1F);
    // 0x80050A20: addiu       $t1, $t0, 0x7FFF
    ctx->r9 = ADD32(ctx->r8, 0X7FFF);
    // 0x80050A24: lbu         $t1, 0x6510($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X6510);
    // 0x80050A28: nop

    // 0x80050A2C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80050A30: addiu       $at, $t2, 0x7FFF
    ctx->r1 = ADD32(ctx->r10, 0X7FFF);
    // 0x80050A34: sb          $t9, 0x650C($at)
    MEM_B(0X650C, ctx->r1) = ctx->r25;
    // 0x80050A38: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80050A3C: nop

    // 0x80050A40: addiu       $t4, $t3, 0x7FFF
    ctx->r12 = ADD32(ctx->r11, 0X7FFF);
    // 0x80050A44: lbu         $t4, 0x6510($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X6510);
    // 0x80050A48: addiu       $at, $t3, 0x7FFF
    ctx->r1 = ADD32(ctx->r11, 0X7FFF);
    // 0x80050A4C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80050A50: sb          $t5, 0x6510($at)
    MEM_B(0X6510, ctx->r1) = ctx->r13;
    // 0x80050A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80050A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80050A5C: jr          $ra
    // 0x80050A60: nop

    return;
    // 0x80050A60: nop

;}
RECOMP_FUNC void func_80050A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050A64: addiu       $t6, $a0, 0x7FFF
    ctx->r14 = ADD32(ctx->r4, 0X7FFF);
    // 0x80050A68: lbu         $t6, 0x6510($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X6510);
    // 0x80050A6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80050A70: slt         $at, $a2, $t6
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80050A74: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80050A78: beq         $at, $zero, L_80050AB8
    if (ctx->r1 == 0) {
        // 0x80050A7C: andi        $a1, $a1, 0xFF
        ctx->r5 = ctx->r5 & 0XFF;
            goto L_80050AB8;
    }
    // 0x80050A7C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
L_80050A80:
    // 0x80050A80: addu        $t7, $a0, $a2
    ctx->r15 = ADD32(ctx->r4, ctx->r6);
    // 0x80050A84: addiu       $t8, $t7, 0x7FFF
    ctx->r24 = ADD32(ctx->r15, 0X7FFF);
    // 0x80050A88: lbu         $t8, 0x650C($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X650C);
    // 0x80050A8C: nop

    // 0x80050A90: bne         $t8, $a1, L_80050AA0
    if (ctx->r24 != ctx->r5) {
        // 0x80050A94: nop
    
            goto L_80050AA0;
    }
    // 0x80050A94: nop

    // 0x80050A98: b           L_80050ABC
    // 0x80050A9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80050ABC;
    // 0x80050A9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80050AA0:
    // 0x80050AA0: addiu       $t9, $a0, 0x7FFF
    ctx->r25 = ADD32(ctx->r4, 0X7FFF);
    // 0x80050AA4: lbu         $t9, 0x6510($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X6510);
    // 0x80050AA8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80050AAC: slt         $at, $a2, $t9
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80050AB0: bne         $at, $zero, L_80050A80
    if (ctx->r1 != 0) {
        // 0x80050AB4: nop
    
            goto L_80050A80;
    }
    // 0x80050AB4: nop

L_80050AB8:
    // 0x80050AB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80050ABC:
    // 0x80050ABC: jr          $ra
    // 0x80050AC0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80050AC0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80050AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050AC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80050AC8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80050ACC: lbu         $t6, -0x10E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X10E0);
    // 0x80050AD0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80050AD4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80050AD8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80050ADC: sltu        $at, $s1, $t6
    ctx->r1 = ctx->r17 < ctx->r14 ? 1 : 0;
    // 0x80050AE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80050AE4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80050AE8: beq         $at, $zero, L_80050B3C
    if (ctx->r1 == 0) {
        // 0x80050AEC: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80050B3C;
    }
    // 0x80050AEC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80050AF0: bne         $s0, $zero, L_80050B3C
    if (ctx->r16 != 0) {
        // 0x80050AF4: nop
    
            goto L_80050B3C;
    }
    // 0x80050AF4: nop

L_80050AF8:
    // 0x80050AF8: jal         0x80050520
    // 0x80050AFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80050520(rdram, ctx);
        goto after_0;
    // 0x80050AFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x80050B00: jal         0x8005061C
    // 0x80050B04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005061C(rdram, ctx);
        goto after_1;
    // 0x80050B04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80050B08: jal         0x8006DDD0
    // 0x80050B0C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8006DDD0(rdram, ctx);
        goto after_2;
    // 0x80050B0C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x80050B10: beq         $v0, $zero, L_80050B1C
    if (ctx->r2 == 0) {
        // 0x80050B14: nop
    
            goto L_80050B1C;
    }
    // 0x80050B14: nop

    // 0x80050B18: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80050B1C:
    // 0x80050B1C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80050B20: lbu         $t7, -0x10E0($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X10E0);
    // 0x80050B24: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80050B28: sltu        $at, $s1, $t7
    ctx->r1 = ctx->r17 < ctx->r15 ? 1 : 0;
    // 0x80050B2C: beq         $at, $zero, L_80050B3C
    if (ctx->r1 == 0) {
        // 0x80050B30: nop
    
            goto L_80050B3C;
    }
    // 0x80050B30: nop

    // 0x80050B34: beq         $s0, $zero, L_80050AF8
    if (ctx->r16 == 0) {
        // 0x80050B38: nop
    
            goto L_80050AF8;
    }
    // 0x80050B38: nop

L_80050B3C:
    // 0x80050B3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80050B40: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80050B44: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80050B48: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80050B4C: jr          $ra
    // 0x80050B50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80050B50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80050B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050B54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80050B58: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80050B5C: lbu         $t6, -0x10E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X10E0);
    // 0x80050B60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80050B64: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80050B68: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80050B6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80050B70: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80050B74: beq         $at, $zero, L_80050C98
    if (ctx->r1 == 0) {
        // 0x80050B78: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_80050C98;
    }
    // 0x80050B78: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
L_80050B7C:
    // 0x80050B7C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80050B80: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x80050B84: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80050B88: addiu       $t1, $t0, 0x7FFF
    ctx->r9 = ADD32(ctx->r8, 0X7FFF);
    // 0x80050B8C: lw          $t1, 0x612D($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X612D);
    // 0x80050B90: lbu         $t7, 0x2F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2F);
    // 0x80050B94: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x80050B98: sb          $t7, 0x844($t1)
    MEM_B(0X844, ctx->r9) = ctx->r15;
    // 0x80050B9C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80050BA0: lbu         $t2, 0x2F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X2F);
    // 0x80050BA4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80050BA8: addiu       $t6, $t5, 0x7FFF
    ctx->r14 = ADD32(ctx->r13, 0X7FFF);
    // 0x80050BAC: lw          $t6, 0x612D($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X612D);
    // 0x80050BB0: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x80050BB4: sb          $t2, 0x3BC6($t6)
    MEM_B(0X3BC6, ctx->r14) = ctx->r10;
    // 0x80050BB8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80050BBC: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x80050BC0: addu        $t7, $t9, $t0
    ctx->r15 = ADD32(ctx->r25, ctx->r8);
    // 0x80050BC4: addiu       $t1, $t7, 0x7FFF
    ctx->r9 = ADD32(ctx->r15, 0X7FFF);
    // 0x80050BC8: lw          $t1, 0x612D($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X612D);
    // 0x80050BCC: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x80050BD0: sb          $t8, 0x3BBA($t1)
    MEM_B(0X3BBA, ctx->r9) = ctx->r24;
    // 0x80050BD4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80050BD8: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x80050BDC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80050BE0: addiu       $a0, $t5, 0x7FFF
    ctx->r4 = ADD32(ctx->r13, 0X7FFF);
    // 0x80050BE4: lw          $a0, 0x612D($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X612D);
    // 0x80050BE8: jal         0x8006F064
    // 0x80050BEC: addiu       $a0, $a0, 0x3BCC
    ctx->r4 = ADD32(ctx->r4, 0X3BCC);
    func_8006F064(rdram, ctx);
        goto after_0;
    // 0x80050BEC: addiu       $a0, $a0, 0x3BCC
    ctx->r4 = ADD32(ctx->r4, 0X3BCC);
    after_0:
    // 0x80050BF0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80050BF4: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x80050BF8: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x80050BFC: addiu       $t7, $t0, 0x7FFF
    ctx->r15 = ADD32(ctx->r8, 0X7FFF);
    // 0x80050C00: lw          $t7, 0x612D($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X612D);
    // 0x80050C04: lbu         $t2, 0x2F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X2F);
    // 0x80050C08: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x80050C0C: sb          $t2, 0x5210($t7)
    MEM_B(0X5210, ctx->r15) = ctx->r10;
    // 0x80050C10: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80050C14: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x80050C18: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80050C1C: addiu       $t5, $t4, 0x7FFF
    ctx->r13 = ADD32(ctx->r12, 0X7FFF);
    // 0x80050C20: lw          $t5, 0x612D($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X612D);
    // 0x80050C24: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x80050C28: sb          $t8, 0x5729($t5)
    MEM_B(0X5729, ctx->r13) = ctx->r24;
    // 0x80050C2C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80050C30: lbu         $t6, 0x2F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2F);
    // 0x80050C34: addu        $t2, $t9, $t0
    ctx->r10 = ADD32(ctx->r25, ctx->r8);
    // 0x80050C38: addiu       $t7, $t2, 0x7FFF
    ctx->r15 = ADD32(ctx->r10, 0X7FFF);
    // 0x80050C3C: lw          $t7, 0x612D($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X612D);
    // 0x80050C40: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x80050C44: sb          $t6, 0x5C58($t7)
    MEM_B(0X5C58, ctx->r15) = ctx->r14;
    // 0x80050C48: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80050C4C: lbu         $t1, 0x2F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X2F);
    // 0x80050C50: addu        $t8, $t3, $t4
    ctx->r24 = ADD32(ctx->r11, ctx->r12);
    // 0x80050C54: addiu       $t5, $t8, 0x7FFF
    ctx->r13 = ADD32(ctx->r24, 0X7FFF);
    // 0x80050C58: lw          $t5, 0x612D($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X612D);
    // 0x80050C5C: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x80050C60: sb          $t1, 0x6171($t5)
    MEM_B(0X6171, ctx->r13) = ctx->r9;
    // 0x80050C64: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80050C68: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x80050C6C: addu        $t2, $t9, $t0
    ctx->r10 = ADD32(ctx->r25, ctx->r8);
    // 0x80050C70: addiu       $a0, $t2, 0x7FFF
    ctx->r4 = ADD32(ctx->r10, 0X7FFF);
    // 0x80050C74: lw          $a0, 0x612D($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X612D);
    // 0x80050C78: jal         0x8006AEBC
    // 0x80050C7C: addiu       $a0, $a0, 0x44C
    ctx->r4 = ADD32(ctx->r4, 0X44C);
    func_8006AEBC(rdram, ctx);
        goto after_1;
    // 0x80050C7C: addiu       $a0, $a0, 0x44C
    ctx->r4 = ADD32(ctx->r4, 0X44C);
    after_1:
    // 0x80050C80: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80050C84: lbu         $t6, -0x10E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X10E0);
    // 0x80050C88: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80050C8C: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80050C90: bne         $at, $zero, L_80050B7C
    if (ctx->r1 != 0) {
        // 0x80050C94: nop
    
            goto L_80050B7C;
    }
    // 0x80050C94: nop

L_80050C98:
    // 0x80050C98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80050C9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80050CA0: jr          $ra
    // 0x80050CA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80050CA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80050CA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050CA8: addiu       $t6, $a0, 0x7FFF
    ctx->r14 = ADD32(ctx->r4, 0X7FFF);
    // 0x80050CAC: lbu         $t6, 0x6510($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X6510);
    // 0x80050CB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80050CB4: slt         $at, $a2, $t6
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80050CB8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80050CBC: beq         $at, $zero, L_80050CFC
    if (ctx->r1 == 0) {
        // 0x80050CC0: andi        $a1, $a1, 0xFF
        ctx->r5 = ctx->r5 & 0XFF;
            goto L_80050CFC;
    }
    // 0x80050CC0: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
L_80050CC4:
    // 0x80050CC4: addu        $t7, $a0, $a2
    ctx->r15 = ADD32(ctx->r4, ctx->r6);
    // 0x80050CC8: addiu       $t8, $t7, 0x7FFF
    ctx->r24 = ADD32(ctx->r15, 0X7FFF);
    // 0x80050CCC: lbu         $t8, 0x650C($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X650C);
    // 0x80050CD0: nop

    // 0x80050CD4: bne         $t8, $a1, L_80050CE4
    if (ctx->r24 != ctx->r5) {
        // 0x80050CD8: nop
    
            goto L_80050CE4;
    }
    // 0x80050CD8: nop

    // 0x80050CDC: b           L_80050D00
    // 0x80050CE0: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
        goto L_80050D00;
    // 0x80050CE0: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
L_80050CE4:
    // 0x80050CE4: addiu       $t9, $a0, 0x7FFF
    ctx->r25 = ADD32(ctx->r4, 0X7FFF);
    // 0x80050CE8: lbu         $t9, 0x6510($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X6510);
    // 0x80050CEC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80050CF0: slt         $at, $a2, $t9
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80050CF4: bne         $at, $zero, L_80050CC4
    if (ctx->r1 != 0) {
        // 0x80050CF8: nop
    
            goto L_80050CC4;
    }
    // 0x80050CF8: nop

L_80050CFC:
    // 0x80050CFC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80050D00:
    // 0x80050D00: jr          $ra
    // 0x80050D04: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80050D04: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80050D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050D08: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80050D0C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80050D10: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80050D14: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80050D18: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80050D1C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80050D20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80050D24: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x80050D28: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80050D2C: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80050D30: beq         $at, $zero, L_80050D98
    if (ctx->r1 == 0) {
        // 0x80050D34: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80050D98;
    }
    // 0x80050D34: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80050D38:
    // 0x80050D38: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80050D3C: jal         0x80050CA8
    // 0x80050D40: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80050CA8(rdram, ctx);
        goto after_0;
    // 0x80050D40: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80050D44: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80050D48: bne         $v0, $at, L_80050D7C
    if (ctx->r2 != ctx->r1) {
        // 0x80050D4C: nop
    
            goto L_80050D7C;
    }
    // 0x80050D4C: nop

    // 0x80050D50: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x80050D54: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80050D58: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x80050D5C: lw          $a0, -0x14D4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14D4);
    // 0x80050D60: jal         0x8005282C
    // 0x80050D64: addiu       $a0, $a0, 0x681C
    ctx->r4 = ADD32(ctx->r4, 0X681C);
    func_8005282C(rdram, ctx);
        goto after_1;
    // 0x80050D64: addiu       $a0, $a0, 0x681C
    ctx->r4 = ADD32(ctx->r4, 0X681C);
    after_1:
    // 0x80050D68: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80050D6C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80050D70: beq         $at, $zero, L_80050D7C
    if (ctx->r1 == 0) {
        // 0x80050D74: nop
    
            goto L_80050D7C;
    }
    // 0x80050D74: nop

    // 0x80050D78: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80050D7C:
    // 0x80050D7C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80050D80: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80050D84: lbu         $t0, 0x5($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X5);
    // 0x80050D88: nop

    // 0x80050D8C: slt         $at, $s1, $t0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80050D90: bne         $at, $zero, L_80050D38
    if (ctx->r1 != 0) {
        // 0x80050D94: nop
    
            goto L_80050D38;
    }
    // 0x80050D94: nop

L_80050D98:
    // 0x80050D98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80050D9C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80050DA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80050DA4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80050DA8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80050DAC: jr          $ra
    // 0x80050DB0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80050DB0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80050DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050DB4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80050DB8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80050DBC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80050DC0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80050DC4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80050DC8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80050DCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80050DD0: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x80050DD4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80050DD8: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80050DDC: beq         $at, $zero, L_80050E44
    if (ctx->r1 == 0) {
        // 0x80050DE0: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_80050E44;
    }
    // 0x80050DE0: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_80050DE4:
    // 0x80050DE4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80050DE8: jal         0x80050CA8
    // 0x80050DEC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80050CA8(rdram, ctx);
        goto after_0;
    // 0x80050DEC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80050DF0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80050DF4: bne         $v0, $at, L_80050E28
    if (ctx->r2 != ctx->r1) {
        // 0x80050DF8: nop
    
            goto L_80050E28;
    }
    // 0x80050DF8: nop

    // 0x80050DFC: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x80050E00: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80050E04: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80050E08: lw          $t9, -0x14D4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X14D4);
    // 0x80050E0C: nop

    // 0x80050E10: lw          $s2, 0x6818($t9)
    ctx->r18 = MEM_W(ctx->r25, 0X6818);
    // 0x80050E14: nop

    // 0x80050E18: sltu        $at, $s2, $s0
    ctx->r1 = ctx->r18 < ctx->r16 ? 1 : 0;
    // 0x80050E1C: beq         $at, $zero, L_80050E28
    if (ctx->r1 == 0) {
        // 0x80050E20: nop
    
            goto L_80050E28;
    }
    // 0x80050E20: nop

    // 0x80050E24: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80050E28:
    // 0x80050E28: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80050E2C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80050E30: lbu         $t1, 0x5($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X5);
    // 0x80050E34: nop

    // 0x80050E38: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80050E3C: bne         $at, $zero, L_80050DE4
    if (ctx->r1 != 0) {
        // 0x80050E40: nop
    
            goto L_80050DE4;
    }
    // 0x80050E40: nop

L_80050E44:
    // 0x80050E44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80050E48: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80050E4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80050E50: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80050E54: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80050E58: jr          $ra
    // 0x80050E5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80050E5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80050E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050E60: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80050E64: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80050E68: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80050E6C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80050E70: lbu         $a1, 0x4F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X4F);
    // 0x80050E74: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80050E78: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80050E7C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80050E80: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80050E84: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80050E88: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80050E8C: jal         0x80050CA8
    // 0x80050E90: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80050CA8(rdram, ctx);
        goto after_0;
    // 0x80050E90: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80050E94: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80050E98: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x80050E9C: lbu         $t8, 0x5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5);
    // 0x80050EA0: addiu       $t6, $s0, 0x1
    ctx->r14 = ADD32(ctx->r16, 0X1);
    // 0x80050EA4: bne         $t6, $t8, L_80050EB4
    if (ctx->r14 != ctx->r24) {
        // 0x80050EA8: nop
    
            goto L_80050EB4;
    }
    // 0x80050EA8: nop

    // 0x80050EAC: b           L_80051008
    // 0x80050EB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80051008;
    // 0x80050EB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80050EB4:
    // 0x80050EB4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80050EB8: beq         $s0, $at, L_80050EC8
    if (ctx->r16 == ctx->r1) {
        // 0x80050EBC: nop
    
            goto L_80050EC8;
    }
    // 0x80050EBC: nop

    // 0x80050EC0: b           L_80051008
    // 0x80050EC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80051008;
    // 0x80050EC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80050EC8:
    // 0x80050EC8: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80050ECC: nop

    // 0x80050ED0: addiu       $s5, $t9, 0x7FFF
    ctx->r21 = ADD32(ctx->r25, 0X7FFF);
    // 0x80050ED4: lbu         $s5, 0x64ED($s5)
    ctx->r21 = MEM_BU(ctx->r21, 0X64ED);
    // 0x80050ED8: nop

    // 0x80050EDC: beq         $s5, $zero, L_80050EFC
    if (ctx->r21 == 0) {
        // 0x80050EE0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80050EFC;
    }
    // 0x80050EE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80050EE4: beq         $s5, $at, L_80050F04
    if (ctx->r21 == ctx->r1) {
        // 0x80050EE8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80050F04;
    }
    // 0x80050EE8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80050EEC: beq         $s5, $at, L_80050F44
    if (ctx->r21 == ctx->r1) {
        // 0x80050EF0: nop
    
            goto L_80050F44;
    }
    // 0x80050EF0: nop

    // 0x80050EF4: b           L_80050FEC
    // 0x80050EF8: nop

        goto L_80050FEC;
    // 0x80050EF8: nop

L_80050EFC:
    // 0x80050EFC: b           L_80051008
    // 0x80050F00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80051008;
    // 0x80050F00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80050F04:
    // 0x80050F04: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80050F08: jal         0x80050D08
    // 0x80050F0C: nop

    func_80050D08(rdram, ctx);
        goto after_1;
    // 0x80050F0C: nop

    after_1:
    // 0x80050F10: lbu         $t0, 0x4F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4F);
    // 0x80050F14: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80050F18: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80050F1C: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x80050F20: lw          $a0, -0x14D4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14D4);
    // 0x80050F24: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80050F28: jal         0x8005282C
    // 0x80050F2C: addiu       $a0, $a0, 0x681C
    ctx->r4 = ADD32(ctx->r4, 0X681C);
    func_8005282C(rdram, ctx);
        goto after_2;
    // 0x80050F2C: addiu       $a0, $a0, 0x681C
    ctx->r4 = ADD32(ctx->r4, 0X681C);
    after_2:
    // 0x80050F30: xor         $v0, $v0, $s1
    ctx->r2 = ctx->r2 ^ ctx->r17;
    // 0x80050F34: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80050F38: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x80050F3C: b           L_80051008
    // 0x80050F40: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_80051008;
    // 0x80050F40: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_80050F44:
    // 0x80050F44: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80050F48: jal         0x80050DB4
    // 0x80050F4C: nop

    func_80050DB4(rdram, ctx);
        goto after_3;
    // 0x80050F4C: nop

    after_3:
    // 0x80050F50: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80050F54: jal         0x80050D08
    // 0x80050F58: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_80050D08(rdram, ctx);
        goto after_4;
    // 0x80050F58: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_4:
    // 0x80050F5C: lbu         $t3, 0x4F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4F);
    // 0x80050F60: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80050F64: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80050F68: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x80050F6C: lw          $a0, -0x14D4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14D4);
    // 0x80050F70: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80050F74: jal         0x8005282C
    // 0x80050F78: addiu       $a0, $a0, 0x681C
    ctx->r4 = ADD32(ctx->r4, 0X681C);
    func_8005282C(rdram, ctx);
        goto after_5;
    // 0x80050F78: addiu       $a0, $a0, 0x681C
    ctx->r4 = ADD32(ctx->r4, 0X681C);
    after_5:
    // 0x80050F7C: lbu         $t5, 0x4F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X4F);
    // 0x80050F80: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80050F84: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80050F88: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80050F8C: lw          $t6, -0x14D4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X14D4);
    // 0x80050F90: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80050F94: lw          $t8, 0x6834($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X6834);
    // 0x80050F98: nop

    // 0x80050F9C: sltu        $s5, $s4, $t8
    ctx->r21 = ctx->r20 < ctx->r24 ? 1 : 0;
    // 0x80050FA0: xori        $s5, $s5, 0x1
    ctx->r21 = ctx->r21 ^ 0X1;
    // 0x80050FA4: bne         $s5, $zero, L_80050FBC
    if (ctx->r21 != 0) {
        // 0x80050FA8: nop
    
            goto L_80050FBC;
    }
    // 0x80050FA8: nop

    // 0x80050FAC: sltu        $s5, $s4, $s3
    ctx->r21 = ctx->r20 < ctx->r19 ? 1 : 0;
    // 0x80050FB0: xori        $s5, $s5, 0x1
    ctx->r21 = ctx->r21 ^ 0X1;
    // 0x80050FB4: beq         $s5, $zero, L_80050FE4
    if (ctx->r21 == 0) {
        // 0x80050FB8: nop
    
            goto L_80050FE4;
    }
    // 0x80050FB8: nop

L_80050FBC:
    // 0x80050FBC: lbu         $t9, 0x4F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X4F);
    // 0x80050FC0: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80050FC4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80050FC8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80050FCC: lw          $t1, -0x14D4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X14D4);
    // 0x80050FD0: nop

    // 0x80050FD4: lw          $t2, 0x6818($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X6818);
    // 0x80050FD8: nop

    // 0x80050FDC: xor         $s5, $t2, $s2
    ctx->r21 = ctx->r10 ^ ctx->r18;
    // 0x80050FE0: sltiu       $s5, $s5, 0x1
    ctx->r21 = ctx->r21 < 0X1 ? 1 : 0;
L_80050FE4:
    // 0x80050FE4: b           L_80051008
    // 0x80050FE8: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
        goto L_80051008;
    // 0x80050FE8: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
L_80050FEC:
    // 0x80050FEC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80050FF0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80050FF4: addiu       $a1, $a1, -0x3548
    ctx->r5 = ADD32(ctx->r5, -0X3548);
    // 0x80050FF8: addiu       $a0, $a0, -0x355C
    ctx->r4 = ADD32(ctx->r4, -0X355C);
    // 0x80050FFC: jal         0x8004A5A0
    // 0x80051000: addiu       $a2, $zero, 0x124
    ctx->r6 = ADD32(0, 0X124);
    func_8004A5A0(rdram, ctx);
        goto after_6;
    // 0x80051000: addiu       $a2, $zero, 0x124
    ctx->r6 = ADD32(0, 0X124);
    after_6:
    // 0x80051004: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80051008:
    // 0x80051008: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8005100C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80051010: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80051014: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80051018: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8005101C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80051020: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80051024: jr          $ra
    // 0x80051028: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80051028: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8005102C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005102C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80051030: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80051034: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80051038: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005103C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80051040: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80051044: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x80051048: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8005104C: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80051050: beq         $at, $zero, L_8005108C
    if (ctx->r1 == 0) {
        // 0x80051054: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8005108C;
    }
    // 0x80051054: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80051058:
    // 0x80051058: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8005105C: jal         0x80050E60
    // 0x80051060: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80050E60(rdram, ctx);
        goto after_0;
    // 0x80051060: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80051064: beq         $v0, $zero, L_80051070
    if (ctx->r2 == 0) {
        // 0x80051068: nop
    
            goto L_80051070;
    }
    // 0x80051068: nop

    // 0x8005106C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80051070:
    // 0x80051070: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80051074: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80051078: lbu         $t9, 0x5($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X5);
    // 0x8005107C: nop

    // 0x80051080: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80051084: bne         $at, $zero, L_80051058
    if (ctx->r1 != 0) {
        // 0x80051088: nop
    
            goto L_80051058;
    }
    // 0x80051088: nop

L_8005108C:
    // 0x8005108C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80051090: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80051094: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80051098: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8005109C: jr          $ra
    // 0x800510A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800510A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800510A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800510A4: lbu         $t6, 0x5($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5);
    // 0x800510A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800510AC: slt         $at, $a1, $t6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800510B0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800510B4: beq         $at, $zero, L_800510F8
    if (ctx->r1 == 0) {
        // 0x800510B8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_800510F8;
    }
    // 0x800510B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_800510BC:
    // 0x800510BC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x800510C0: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x800510C4: addiu       $t9, $t8, 0x7FFF
    ctx->r25 = ADD32(ctx->r24, 0X7FFF);
    // 0x800510C8: lw          $t9, 0x612D($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X612D);
    // 0x800510CC: nop

    // 0x800510D0: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x800510D4: nop

    // 0x800510D8: beq         $t0, $zero, L_800510E4
    if (ctx->r8 == 0) {
        // 0x800510DC: nop
    
            goto L_800510E4;
    }
    // 0x800510DC: nop

    // 0x800510E0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_800510E4:
    // 0x800510E4: lbu         $t1, 0x5($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X5);
    // 0x800510E8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800510EC: slt         $at, $a1, $t1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800510F0: bne         $at, $zero, L_800510BC
    if (ctx->r1 != 0) {
        // 0x800510F4: nop
    
            goto L_800510BC;
    }
    // 0x800510F4: nop

L_800510F8:
    // 0x800510F8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x800510FC: jr          $ra
    // 0x80051100: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80051100: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80051104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051104: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80051108: lbu         $a3, -0x10E0($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X10E0);
    // 0x8005110C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80051110: sltu        $at, $a1, $a3
    ctx->r1 = ctx->r5 < ctx->r7 ? 1 : 0;
    // 0x80051114: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80051118: beq         $at, $zero, L_80051158
    if (ctx->r1 == 0) {
        // 0x8005111C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80051158;
    }
    // 0x8005111C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80051120:
    // 0x80051120: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80051124: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x80051128: addiu       $t8, $t7, 0x7FFF
    ctx->r24 = ADD32(ctx->r15, 0X7FFF);
    // 0x8005112C: lw          $t8, 0x612D($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X612D);
    // 0x80051130: nop

    // 0x80051134: lbu         $t9, 0x2($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X2);
    // 0x80051138: nop

    // 0x8005113C: beq         $t9, $zero, L_80051148
    if (ctx->r25 == 0) {
        // 0x80051140: nop
    
            goto L_80051148;
    }
    // 0x80051140: nop

    // 0x80051144: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_80051148:
    // 0x80051148: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8005114C: sltu        $at, $a1, $a3
    ctx->r1 = ctx->r5 < ctx->r7 ? 1 : 0;
    // 0x80051150: bne         $at, $zero, L_80051120
    if (ctx->r1 != 0) {
        // 0x80051154: nop
    
            goto L_80051120;
    }
    // 0x80051154: nop

L_80051158:
    // 0x80051158: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8005115C: jr          $ra
    // 0x80051160: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80051160: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80051164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051164: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80051168: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8005116C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80051170: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80051174: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80051178: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8005117C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80051180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80051184: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80051188: addiu       $a0, $t9, 0x7FFF
    ctx->r4 = ADD32(ctx->r25, 0X7FFF);
    // 0x8005118C: lw          $a0, 0x612D($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X612D);
    // 0x80051190: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80051194: jal         0x80053B84
    // 0x80051198: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_80053B84(rdram, ctx);
        goto after_0;
    // 0x80051198: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x8005119C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800511A0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800511A4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800511A8: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x800511AC: addiu       $t4, $t3, 0x7FFF
    ctx->r12 = ADD32(ctx->r11, 0X7FFF);
    // 0x800511B0: lw          $t4, 0x612D($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X612D);
    // 0x800511B4: ori         $at, $zero, 0xE0E8
    ctx->r1 = 0 | 0XE0E8;
    // 0x800511B8: sb          $zero, 0x2($t4)
    MEM_B(0X2, ctx->r12) = 0;
    // 0x800511BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800511C0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800511C4: jal         0x800726A4
    // 0x800511C8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800726A4(rdram, ctx);
        goto after_1;
    // 0x800511C8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x800511CC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800511D0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800511D4: addiu       $at, $t7, 0x7FFF
    ctx->r1 = ADD32(ctx->r15, 0X7FFF);
    // 0x800511D8: sb          $t5, 0x650B($at)
    MEM_B(0X650B, ctx->r1) = ctx->r13;
    // 0x800511DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800511E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800511E4: jr          $ra
    // 0x800511E8: nop

    return;
    // 0x800511E8: nop

;}
RECOMP_FUNC void func_800511EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800511EC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800511F0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800511F4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800511F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800511FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80051200: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80051204: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80051208: addiu       $s2, $t6, 0x7FFF
    ctx->r18 = ADD32(ctx->r14, 0X7FFF);
    // 0x8005120C: lbu         $s2, 0x64ED($s2)
    ctx->r18 = MEM_BU(ctx->r18, 0X64ED);
    // 0x80051210: nop

    // 0x80051214: beq         $s2, $zero, L_80051234
    if (ctx->r18 == 0) {
        // 0x80051218: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80051234;
    }
    // 0x80051218: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005121C: beq         $s2, $at, L_8005123C
    if (ctx->r18 == ctx->r1) {
        // 0x80051220: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8005123C;
    }
    // 0x80051220: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80051224: beq         $s2, $at, L_80051278
    if (ctx->r18 == ctx->r1) {
        // 0x80051228: nop
    
            goto L_80051278;
    }
    // 0x80051228: nop

    // 0x8005122C: b           L_800512F0
    // 0x80051230: nop

        goto L_800512F0;
    // 0x80051230: nop

L_80051234:
    // 0x80051234: b           L_80051308
    // 0x80051238: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80051308;
    // 0x80051238: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8005123C:
    // 0x8005123C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80051240: nop

    // 0x80051244: addiu       $t8, $t7, 0x7FFF
    ctx->r24 = ADD32(ctx->r15, 0X7FFF);
    // 0x80051248: addiu       $t9, $t7, 0x7FFF
    ctx->r25 = ADD32(ctx->r15, 0X7FFF);
    // 0x8005124C: lw          $t9, 0x64F1($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X64F1);
    // 0x80051250: lw          $t8, 0x64E9($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X64E9);
    // 0x80051254: nop

    // 0x80051258: sltu        $at, $t8, $t9
    ctx->r1 = ctx->r24 < ctx->r25 ? 1 : 0;
    // 0x8005125C: bne         $at, $zero, L_80051270
    if (ctx->r1 != 0) {
        // 0x80051260: addiu       $at, $t7, 0x7FFF
        ctx->r1 = ADD32(ctx->r15, 0X7FFF);
            goto L_80051270;
    }
    // 0x80051260: addiu       $at, $t7, 0x7FFF
    ctx->r1 = ADD32(ctx->r15, 0X7FFF);
    // 0x80051264: sw          $t9, 0x64E9($at)
    MEM_W(0X64E9, ctx->r1) = ctx->r25;
    // 0x80051268: b           L_80051308
    // 0x8005126C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80051308;
    // 0x8005126C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80051270:
    // 0x80051270: b           L_80051308
    // 0x80051274: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80051308;
    // 0x80051274: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80051278:
    // 0x80051278: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x8005127C: lbu         $s1, -0x10E0($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X10E0);
    // 0x80051280: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80051284: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x80051288: beq         $at, $zero, L_800512E8
    if (ctx->r1 == 0) {
        // 0x8005128C: nop
    
            goto L_800512E8;
    }
    // 0x8005128C: nop

L_80051290:
    // 0x80051290: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x80051294: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80051298: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x8005129C: lw          $a0, -0x14D4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14D4);
    // 0x800512A0: jal         0x8005282C
    // 0x800512A4: addiu       $a0, $a0, 0x681C
    ctx->r4 = ADD32(ctx->r4, 0X681C);
    func_8005282C(rdram, ctx);
        goto after_0;
    // 0x800512A4: addiu       $a0, $a0, 0x681C
    ctx->r4 = ADD32(ctx->r4, 0X681C);
    after_0:
    // 0x800512A8: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x800512AC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800512B0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800512B4: lw          $t2, -0x14D4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X14D4);
    // 0x800512B8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800512BC: lw          $t3, 0x6834($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X6834);
    // 0x800512C0: nop

    // 0x800512C4: sltu        $at, $s2, $t3
    ctx->r1 = ctx->r18 < ctx->r11 ? 1 : 0;
    // 0x800512C8: bne         $at, $zero, L_800512D8
    if (ctx->r1 != 0) {
        // 0x800512CC: nop
    
            goto L_800512D8;
    }
    // 0x800512CC: nop

    // 0x800512D0: b           L_80051308
    // 0x800512D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80051308;
    // 0x800512D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800512D8:
    // 0x800512D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800512DC: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800512E0: bne         $at, $zero, L_80051290
    if (ctx->r1 != 0) {
        // 0x800512E4: nop
    
            goto L_80051290;
    }
    // 0x800512E4: nop

L_800512E8:
    // 0x800512E8: b           L_80051308
    // 0x800512EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80051308;
    // 0x800512EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800512F0:
    // 0x800512F0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800512F4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800512F8: addiu       $a1, $a1, -0x3530
    ctx->r5 = ADD32(ctx->r5, -0X3530);
    // 0x800512FC: addiu       $a0, $a0, -0x3540
    ctx->r4 = ADD32(ctx->r4, -0X3540);
    // 0x80051300: jal         0x8004A5A0
    // 0x80051304: addiu       $a2, $zero, 0x195
    ctx->r6 = ADD32(0, 0X195);
    func_8004A5A0(rdram, ctx);
        goto after_1;
    // 0x80051304: addiu       $a2, $zero, 0x195
    ctx->r6 = ADD32(0, 0X195);
    after_1:
L_80051308:
    // 0x80051308: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8005130C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80051310: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80051314: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80051318: jr          $ra
    // 0x8005131C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8005131C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80051320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051320: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80051324: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80051328: lbu         $t7, 0x2F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2F);
    // 0x8005132C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80051330: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80051334: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80051338: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005133C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80051340: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80051344: addiu       $s0, $t9, 0x7FFF
    ctx->r16 = ADD32(ctx->r25, 0X7FFF);
    // 0x80051348: lw          $s0, 0x612D($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X612D);
    // 0x8005134C: nop

    // 0x80051350: lbu         $t0, 0xB($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XB);
    // 0x80051354: nop

    // 0x80051358: beq         $t0, $zero, L_800513AC
    if (ctx->r8 == 0) {
        // 0x8005135C: nop
    
            goto L_800513AC;
    }
    // 0x8005135C: nop

    // 0x80051360: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80051364: lbu         $t1, -0x10E0($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X10E0);
    // 0x80051368: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005136C: bne         $t1, $at, L_8005138C
    if (ctx->r9 != ctx->r1) {
        // 0x80051370: nop
    
            goto L_8005138C;
    }
    // 0x80051370: nop

    // 0x80051374: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80051378: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8005137C: jal         0x80051164
    // 0x80051380: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80051164(rdram, ctx);
        goto after_0;
    // 0x80051380: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x80051384: b           L_8005139C
    // 0x80051388: nop

        goto L_8005139C;
    // 0x80051388: nop

L_8005138C:
    // 0x8005138C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80051390: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x80051394: jal         0x80051164
    // 0x80051398: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80051164(rdram, ctx);
        goto after_1;
    // 0x80051398: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_8005139C:
    // 0x8005139C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800513A0: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x800513A4: jal         0x800509C0
    // 0x800513A8: nop

    func_800509C0(rdram, ctx);
        goto after_2;
    // 0x800513A8: nop

    after_2:
L_800513AC:
    // 0x800513AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800513B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800513B4: jr          $ra
    // 0x800513B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800513B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800513BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800513BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800513C0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800513C4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800513C8: lbu         $s0, -0x10E0($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X10E0);
    // 0x800513CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800513D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800513D4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800513D8: beq         $s0, $at, L_80051450
    if (ctx->r16 == ctx->r1) {
        // 0x800513DC: sw          $s1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r17;
            goto L_80051450;
    }
    // 0x800513DC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800513E0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800513E4: jal         0x80051104
    // 0x800513E8: nop

    func_80051104(rdram, ctx);
        goto after_0;
    // 0x800513E8: nop

    after_0:
    // 0x800513EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800513F0: bne         $v0, $at, L_80051450
    if (ctx->r2 != ctx->r1) {
        // 0x800513F4: nop
    
            goto L_80051450;
    }
    // 0x800513F4: nop

    // 0x800513F8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800513FC: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80051400: beq         $at, $zero, L_80051450
    if (ctx->r1 == 0) {
        // 0x80051404: nop
    
            goto L_80051450;
    }
    // 0x80051404: nop

L_80051408:
    // 0x80051408: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8005140C: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x80051410: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80051414: addiu       $t9, $t8, 0x7FFF
    ctx->r25 = ADD32(ctx->r24, 0X7FFF);
    // 0x80051418: lw          $t9, 0x612D($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X612D);
    // 0x8005141C: nop

    // 0x80051420: lbu         $t0, 0x2($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X2);
    // 0x80051424: nop

    // 0x80051428: beq         $t0, $zero, L_80051440
    if (ctx->r8 == 0) {
        // 0x8005142C: nop
    
            goto L_80051440;
    }
    // 0x8005142C: nop

    // 0x80051430: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80051434: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80051438: jal         0x80051164
    // 0x8005143C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80051164(rdram, ctx);
        goto after_1;
    // 0x8005143C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80051440:
    // 0x80051440: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80051444: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80051448: bne         $at, $zero, L_80051408
    if (ctx->r1 != 0) {
        // 0x8005144C: nop
    
            goto L_80051408;
    }
    // 0x8005144C: nop

L_80051450:
    // 0x80051450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80051454: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80051458: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8005145C: jr          $ra
    // 0x80051460: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80051460: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80051464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051464: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80051468: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8005146C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80051470: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80051474: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80051478: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8005147C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80051480: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80051484: lbu         $s1, 0x5($t6)
    ctx->r17 = MEM_BU(ctx->r14, 0X5);
    // 0x80051488: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005148C: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x80051490: beq         $at, $zero, L_800514DC
    if (ctx->r1 == 0) {
        // 0x80051494: nop
    
            goto L_800514DC;
    }
    // 0x80051494: nop

L_80051498:
    // 0x80051498: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8005149C: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x800514A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800514A4: addiu       $s2, $t9, 0x7FFF
    ctx->r18 = ADD32(ctx->r25, 0X7FFF);
    // 0x800514A8: lw          $s2, 0x612D($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X612D);
    // 0x800514AC: nop

    // 0x800514B0: lbu         $t0, 0x2($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X2);
    // 0x800514B4: nop

    // 0x800514B8: beq         $t0, $zero, L_800514CC
    if (ctx->r8 == 0) {
        // 0x800514BC: nop
    
            goto L_800514CC;
    }
    // 0x800514BC: nop

    // 0x800514C0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800514C4: jal         0x80051320
    // 0x800514C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80051320(rdram, ctx);
        goto after_0;
    // 0x800514C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
L_800514CC:
    // 0x800514CC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800514D0: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800514D4: bne         $at, $zero, L_80051498
    if (ctx->r1 != 0) {
        // 0x800514D8: nop
    
            goto L_80051498;
    }
    // 0x800514D8: nop

L_800514DC:
    // 0x800514DC: sltiu       $at, $s1, 0x2
    ctx->r1 = ctx->r17 < 0X2 ? 1 : 0;
    // 0x800514E0: bne         $at, $zero, L_800514F4
    if (ctx->r1 != 0) {
        // 0x800514E4: nop
    
            goto L_800514F4;
    }
    // 0x800514E4: nop

    // 0x800514E8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800514EC: jal         0x800513BC
    // 0x800514F0: nop

    func_800513BC(rdram, ctx);
        goto after_1;
    // 0x800514F0: nop

    after_1:
L_800514F4:
    // 0x800514F4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800514F8: jal         0x800511EC
    // 0x800514FC: nop

    func_800511EC(rdram, ctx);
        goto after_2;
    // 0x800514FC: nop

    after_2:
    // 0x80051500: beq         $v0, $zero, L_800515A4
    if (ctx->r2 == 0) {
        // 0x80051504: nop
    
            goto L_800515A4;
    }
    // 0x80051504: nop

    // 0x80051508: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8005150C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80051510: lbu         $t2, 0x5($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X5);
    // 0x80051514: nop

    // 0x80051518: slt         $at, $s3, $t2
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8005151C: beq         $at, $zero, L_800515A4
    if (ctx->r1 == 0) {
        // 0x80051520: nop
    
            goto L_800515A4;
    }
    // 0x80051520: nop

L_80051524:
    // 0x80051524: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80051528: sll         $t4, $s3, 2
    ctx->r12 = S32(ctx->r19 << 2);
    // 0x8005152C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80051530: addiu       $t6, $t5, 0x7FFF
    ctx->r14 = ADD32(ctx->r13, 0X7FFF);
    // 0x80051534: lw          $t6, 0x612D($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X612D);
    // 0x80051538: nop

    // 0x8005153C: lbu         $t7, 0x2($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2);
    // 0x80051540: nop

    // 0x80051544: beq         $t7, $zero, L_80051588
    if (ctx->r15 == 0) {
        // 0x80051548: nop
    
            goto L_80051588;
    }
    // 0x80051548: nop

    // 0x8005154C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80051550: jal         0x80050E60
    // 0x80051554: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80050E60(rdram, ctx);
        goto after_3;
    // 0x80051554: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_3:
    // 0x80051558: beq         $v0, $zero, L_80051578
    if (ctx->r2 == 0) {
        // 0x8005155C: nop
    
            goto L_80051578;
    }
    // 0x8005155C: nop

    // 0x80051560: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80051564: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80051568: jal         0x80051164
    // 0x8005156C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80051164(rdram, ctx);
        goto after_4;
    // 0x8005156C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80051570: b           L_80051588
    // 0x80051574: nop

        goto L_80051588;
    // 0x80051574: nop

L_80051578:
    // 0x80051578: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8005157C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80051580: jal         0x80051164
    // 0x80051584: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80051164(rdram, ctx);
        goto after_5;
    // 0x80051584: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
L_80051588:
    // 0x80051588: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8005158C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80051590: lbu         $t9, 0x5($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X5);
    // 0x80051594: nop

    // 0x80051598: slt         $at, $s3, $t9
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8005159C: bne         $at, $zero, L_80051524
    if (ctx->r1 != 0) {
        // 0x800515A0: nop
    
            goto L_80051524;
    }
    // 0x800515A0: nop

L_800515A4:
    // 0x800515A4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800515A8: jal         0x800510A4
    // 0x800515AC: nop

    func_800510A4(rdram, ctx);
        goto after_6;
    // 0x800515AC: nop

    after_6:
    // 0x800515B0: bne         $v0, $zero, L_800515DC
    if (ctx->r2 != 0) {
        // 0x800515B4: nop
    
            goto L_800515DC;
    }
    // 0x800515B4: nop

    // 0x800515B8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800515BC: jal         0x800B3BFC
    // 0x800515C0: addiu       $a0, $a0, -0x3528
    ctx->r4 = ADD32(ctx->r4, -0X3528);
    osSyncPrintf(rdram, ctx);
        goto after_7;
    // 0x800515C0: addiu       $a0, $a0, -0x3528
    ctx->r4 = ADD32(ctx->r4, -0X3528);
    after_7:
    // 0x800515C4: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800515C8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800515CC: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
    // 0x800515D0: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800515D4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800515D8: sb          $t2, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r10;
L_800515DC:
    // 0x800515DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800515E0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800515E4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800515E8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800515EC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800515F0: jr          $ra
    // 0x800515F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800515F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800515F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800515F8: lbu         $t6, 0x3($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3);
    // 0x800515FC: nop

    // 0x80051600: beq         $t6, $zero, L_80051610
    if (ctx->r14 == 0) {
        // 0x80051604: nop
    
            goto L_80051610;
    }
    // 0x80051604: nop

    // 0x80051608: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8005160C: sb          $t7, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r15;
L_80051610:
    // 0x80051610: jr          $ra
    // 0x80051614: nop

    return;
    // 0x80051614: nop

;}
RECOMP_FUNC void func_80051618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051618: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005161C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80051620: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80051624: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80051628: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8005162C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80051630: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80051634: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x80051638: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005163C: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80051640: beq         $at, $zero, L_80051680
    if (ctx->r1 == 0) {
        // 0x80051644: nop
    
            goto L_80051680;
    }
    // 0x80051644: nop

L_80051648:
    // 0x80051648: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8005164C: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x80051650: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80051654: addiu       $a0, $t0, 0x7FFF
    ctx->r4 = ADD32(ctx->r8, 0X7FFF);
    // 0x80051658: lw          $a0, 0x612D($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X612D);
    // 0x8005165C: jal         0x80054220
    // 0x80051660: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80054220(rdram, ctx);
        goto after_0;
    // 0x80051660: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80051664: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80051668: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8005166C: lbu         $t2, 0x5($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X5);
    // 0x80051670: nop

    // 0x80051674: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80051678: bne         $at, $zero, L_80051648
    if (ctx->r1 != 0) {
        // 0x8005167C: nop
    
            goto L_80051648;
    }
    // 0x8005167C: nop

L_80051680:
    // 0x80051680: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80051684: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80051688: sb          $zero, 0x3($t3)
    MEM_B(0X3, ctx->r11) = 0;
    // 0x8005168C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80051690: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80051694: sb          $zero, 0x0($t4)
    MEM_B(0X0, ctx->r12) = 0;
    // 0x80051698: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8005169C: nop

    // 0x800516A0: sb          $t5, 0x6($t6)
    MEM_B(0X6, ctx->r14) = ctx->r13;
    // 0x800516A4: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800516A8: nop

    // 0x800516AC: lbu         $t8, 0x5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5);
    // 0x800516B0: nop

    // 0x800516B4: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800516B8: beq         $at, $zero, L_80051718
    if (ctx->r1 == 0) {
        // 0x800516BC: nop
    
            goto L_80051718;
    }
    // 0x800516BC: nop

L_800516C0:
    // 0x800516C0: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x800516C4: subu        $t9, $t9, $s0
    ctx->r25 = SUB32(ctx->r25, ctx->r16);
    // 0x800516C8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800516CC: subu        $t9, $t9, $s0
    ctx->r25 = SUB32(ctx->r25, ctx->r16);
    // 0x800516D0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800516D4: addiu       $t0, $t0, -0x10D0
    ctx->r8 = ADD32(ctx->r8, -0X10D0);
    // 0x800516D8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800516DC: addu        $s1, $t9, $t0
    ctx->r17 = ADD32(ctx->r25, ctx->r8);
    // 0x800516E0: addiu       $s2, $s1, 0x28
    ctx->r18 = ADD32(ctx->r17, 0X28);
    // 0x800516E4: sw          $zero, 0x88($s2)
    MEM_W(0X88, ctx->r18) = 0;
    // 0x800516E8: sw          $zero, 0x8C($s2)
    MEM_W(0X8C, ctx->r18) = 0;
    // 0x800516EC: jal         0x80060CA0
    // 0x800516F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80060CA0(rdram, ctx);
        goto after_1;
    // 0x800516F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x800516F4: jal         0x800A3460
    // 0x800516F8: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    func_800A3460(rdram, ctx);
        goto after_2;
    // 0x800516F8: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    after_2:
    // 0x800516FC: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80051700: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80051704: lbu         $t2, 0x5($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X5);
    // 0x80051708: nop

    // 0x8005170C: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80051710: bne         $at, $zero, L_800516C0
    if (ctx->r1 != 0) {
        // 0x80051714: nop
    
            goto L_800516C0;
    }
    // 0x80051714: nop

L_80051718:
    // 0x80051718: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8005171C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80051720: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80051724: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80051728: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8005172C: swc1        $f4, -0x1AFC($at)
    MEM_W(-0X1AFC, ctx->r1) = ctx->f4.u32l;
    // 0x80051730: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80051734: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80051738: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8005173C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80051740: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80051744: lwc1        $f8, -0x1B04($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1B04);
    // 0x80051748: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8005174C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80051750: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80051754: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80051758: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8005175C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80051760: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80051764: swc1        $f18, -0x1B00($at)
    MEM_W(-0X1B00, ctx->r1) = ctx->f18.u32l;
    // 0x80051768: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8005176C: nop

    // 0x80051770: addiu       $at, $t6, 0x7FFF
    ctx->r1 = ADD32(ctx->r14, 0X7FFF);
    // 0x80051774: sb          $t5, 0x6509($at)
    MEM_B(0X6509, ctx->r1) = ctx->r13;
    // 0x80051778: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8005177C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80051780: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80051784: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80051788: jr          $ra
    // 0x8005178C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8005178C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80051790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051790: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80051794: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80051798: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8005179C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800517A0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800517A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800517A8: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x800517AC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800517B0: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800517B4: beq         $at, $zero, L_800517F4
    if (ctx->r1 == 0) {
        // 0x800517B8: nop
    
            goto L_800517F4;
    }
    // 0x800517B8: nop

L_800517BC:
    // 0x800517BC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800517C0: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x800517C4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800517C8: addiu       $a0, $t0, 0x7FFF
    ctx->r4 = ADD32(ctx->r8, 0X7FFF);
    // 0x800517CC: lw          $a0, 0x612D($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X612D);
    // 0x800517D0: jal         0x80054220
    // 0x800517D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80054220(rdram, ctx);
        goto after_0;
    // 0x800517D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800517D8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800517DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800517E0: lbu         $t2, 0x5($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X5);
    // 0x800517E4: nop

    // 0x800517E8: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800517EC: bne         $at, $zero, L_800517BC
    if (ctx->r1 != 0) {
        // 0x800517F0: nop
    
            goto L_800517BC;
    }
    // 0x800517F0: nop

L_800517F4:
    // 0x800517F4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800517F8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800517FC: sb          $t3, 0x3($t4)
    MEM_B(0X3, ctx->r12) = ctx->r11;
    // 0x80051800: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80051804: lbu         $t5, 0x2F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X2F);
    // 0x80051808: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8005180C: sb          $t5, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r13;
    // 0x80051810: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80051814: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80051818: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x8005181C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80051820: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80051824: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80051828: swc1        $f4, -0x1AFC($at)
    MEM_W(-0X1AFC, ctx->r1) = ctx->f4.u32l;
    // 0x8005182C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80051830: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80051834: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80051838: lwc1        $f8, -0x1B04($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1B04);
    // 0x8005183C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80051840: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80051844: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80051848: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8005184C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80051850: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80051854: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80051858: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8005185C: swc1        $f18, -0x1B00($at)
    MEM_W(-0X1B00, ctx->r1) = ctx->f18.u32l;
    // 0x80051860: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80051864: nop

    // 0x80051868: addiu       $at, $t2, 0x7FFF
    ctx->r1 = ADD32(ctx->r10, 0X7FFF);
    // 0x8005186C: sb          $t1, 0x6509($at)
    MEM_B(0X6509, ctx->r1) = ctx->r9;
    // 0x80051870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80051874: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80051878: jr          $ra
    // 0x8005187C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8005187C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80051880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051880: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80051884: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80051888: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8005188C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80051890: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80051894: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x80051898: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005189C: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800518A0: beq         $at, $zero, L_800518E0
    if (ctx->r1 == 0) {
        // 0x800518A4: nop
    
            goto L_800518E0;
    }
    // 0x800518A4: nop

L_800518A8:
    // 0x800518A8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800518AC: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x800518B0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800518B4: addiu       $a0, $t0, 0x7FFF
    ctx->r4 = ADD32(ctx->r8, 0X7FFF);
    // 0x800518B8: lw          $a0, 0x612D($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X612D);
    // 0x800518BC: jal         0x80052D48
    // 0x800518C0: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_80052D48(rdram, ctx);
        goto after_0;
    // 0x800518C0: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x800518C4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800518C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800518CC: lbu         $t2, 0x5($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X5);
    // 0x800518D0: nop

    // 0x800518D4: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800518D8: bne         $at, $zero, L_800518A8
    if (ctx->r1 != 0) {
        // 0x800518DC: nop
    
            goto L_800518A8;
    }
    // 0x800518DC: nop

L_800518E0:
    // 0x800518E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800518E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800518E8: jr          $ra
    // 0x800518EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800518EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800518F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800518F0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800518F4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800518F8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800518FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80051900: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80051904: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80051908: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005190C: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x80051910: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80051914: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80051918: beq         $at, $zero, L_8005199C
    if (ctx->r1 == 0) {
        // 0x8005191C: nop
    
            goto L_8005199C;
    }
    // 0x8005191C: nop

L_80051920:
    // 0x80051920: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80051924: subu        $t8, $t8, $s0
    ctx->r24 = SUB32(ctx->r24, ctx->r16);
    // 0x80051928: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8005192C: subu        $t8, $t8, $s0
    ctx->r24 = SUB32(ctx->r24, ctx->r16);
    // 0x80051930: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80051934: addiu       $t9, $t9, -0x10D0
    ctx->r25 = ADD32(ctx->r25, -0X10D0);
    // 0x80051938: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8005193C: addu        $s1, $t8, $t9
    ctx->r17 = ADD32(ctx->r24, ctx->r25);
    // 0x80051940: lw          $t0, 0x1C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X1C);
    // 0x80051944: addiu       $s2, $s1, 0x28
    ctx->r18 = ADD32(ctx->r17, 0X28);
    // 0x80051948: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x8005194C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80051950: sw          $t1, 0x88($s2)
    MEM_W(0X88, ctx->r18) = ctx->r9;
    // 0x80051954: lw          $t2, 0x24($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X24);
    // 0x80051958: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8005195C: addiu       $a1, $a1, -0x34DC
    ctx->r5 = ADD32(ctx->r5, -0X34DC);
    // 0x80051960: addiu       $a0, $a0, -0x34F4
    ctx->r4 = ADD32(ctx->r4, -0X34F4);
    // 0x80051964: jal         0x8006CF08
    // 0x80051968: sw          $t2, 0x8C($s2)
    MEM_W(0X8C, ctx->r18) = ctx->r10;
    alSynFreeFX(rdram, ctx);
        goto after_0;
    // 0x80051968: sw          $t2, 0x8C($s2)
    MEM_W(0X8C, ctx->r18) = ctx->r10;
    after_0:
    // 0x8005196C: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x80051970: lw          $a2, 0x9F4($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X9F4);
    // 0x80051974: lw          $a1, 0x88($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X88);
    // 0x80051978: jal         0x80060BD4
    // 0x8005197C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80060BD4(rdram, ctx);
        goto after_1;
    // 0x8005197C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x80051980: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80051984: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80051988: lbu         $t4, 0x5($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X5);
    // 0x8005198C: nop

    // 0x80051990: slt         $at, $s0, $t4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80051994: bne         $at, $zero, L_80051920
    if (ctx->r1 != 0) {
        // 0x80051998: nop
    
            goto L_80051920;
    }
    // 0x80051998: nop

L_8005199C:
    // 0x8005199C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800519A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800519A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800519A8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800519AC: jr          $ra
    // 0x800519B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800519B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800519B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800519B4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800519B8: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x800519BC: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x800519C0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800519C4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800519C8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800519CC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800519D0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800519D4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800519D8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800519DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800519E0: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x800519E4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800519E8: slt         $at, $s2, $t7
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800519EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800519F0: beq         $at, $zero, L_80051A90
    if (ctx->r1 == 0) {
        // 0x800519F4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80051A90;
    }
    // 0x800519F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_800519F8:
    // 0x800519F8: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x800519FC: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x80051A00: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80051A04: addiu       $t1, $t0, 0x7FFF
    ctx->r9 = ADD32(ctx->r8, 0X7FFF);
    // 0x80051A08: lw          $t1, 0x612D($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X612D);
    // 0x80051A0C: nop

    // 0x80051A10: lbu         $t2, 0x2($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X2);
    // 0x80051A14: nop

    // 0x80051A18: beq         $t2, $zero, L_80051A74
    if (ctx->r10 == 0) {
        // 0x80051A1C: nop
    
            goto L_80051A74;
    }
    // 0x80051A1C: nop

    // 0x80051A20: sll         $t3, $s2, 2
    ctx->r11 = S32(ctx->r18 << 2);
    // 0x80051A24: subu        $t3, $t3, $s2
    ctx->r11 = SUB32(ctx->r11, ctx->r18);
    // 0x80051A28: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80051A2C: subu        $t3, $t3, $s2
    ctx->r11 = SUB32(ctx->r11, ctx->r18);
    // 0x80051A30: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80051A34: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80051A38: addiu       $t5, $t5, -0x10D0
    ctx->r13 = ADD32(ctx->r13, -0X10D0);
    // 0x80051A3C: addiu       $t4, $t3, 0x28
    ctx->r12 = ADD32(ctx->r11, 0X28);
    // 0x80051A40: addu        $s3, $t4, $t5
    ctx->r19 = ADD32(ctx->r12, ctx->r13);
    // 0x80051A44: lw          $t6, 0x8C($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X8C);
    // 0x80051A48: nop

    // 0x80051A4C: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x80051A50: beq         $t7, $zero, L_80051A74
    if (ctx->r15 == 0) {
        // 0x80051A54: nop
    
            goto L_80051A74;
    }
    // 0x80051A54: nop

    // 0x80051A58: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80051A5C: lbu         $t8, -0xB0($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0XB0);
    // 0x80051A60: nop

    // 0x80051A64: beq         $t8, $zero, L_80051A74
    if (ctx->r24 == 0) {
        // 0x80051A68: nop
    
            goto L_80051A74;
    }
    // 0x80051A68: nop

    // 0x80051A6C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80051A70: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
L_80051A74:
    // 0x80051A74: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80051A78: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80051A7C: lbu         $t0, 0x5($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X5);
    // 0x80051A80: nop

    // 0x80051A84: slt         $at, $s2, $t0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80051A88: bne         $at, $zero, L_800519F8
    if (ctx->r1 != 0) {
        // 0x80051A8C: nop
    
            goto L_800519F8;
    }
    // 0x80051A8C: nop

L_80051A90:
    // 0x80051A90: beq         $s0, $zero, L_80051AAC
    if (ctx->r16 == 0) {
        // 0x80051A94: nop
    
            goto L_80051AAC;
    }
    // 0x80051A94: nop

    // 0x80051A98: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80051A9C: jal         0x80051790
    // 0x80051AA0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80051790(rdram, ctx);
        goto after_0;
    // 0x80051AA0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80051AA4: b           L_80051B80
    // 0x80051AA8: nop

        goto L_80051B80;
    // 0x80051AA8: nop

L_80051AAC:
    // 0x80051AAC: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80051AB0: jal         0x80051104
    // 0x80051AB4: nop

    func_80051104(rdram, ctx);
        goto after_1;
    // 0x80051AB4: nop

    after_1:
    // 0x80051AB8: bne         $v0, $zero, L_80051B80
    if (ctx->r2 != 0) {
        // 0x80051ABC: nop
    
            goto L_80051B80;
    }
    // 0x80051ABC: nop

    // 0x80051AC0: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80051AC4: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80051AC8: lw          $t3, 0x9F4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9F4);
    // 0x80051ACC: lbu         $t2, 0x7($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X7);
    // 0x80051AD0: nop

    // 0x80051AD4: sltu        $at, $t3, $t2
    ctx->r1 = ctx->r11 < ctx->r10 ? 1 : 0;
    // 0x80051AD8: beq         $at, $zero, L_80051AEC
    if (ctx->r1 == 0) {
        // 0x80051ADC: nop
    
            goto L_80051AEC;
    }
    // 0x80051ADC: nop

    // 0x80051AE0: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x80051AE4: b           L_80051B80
    // 0x80051AE8: sb          $t4, 0x7($t1)
    MEM_B(0X7, ctx->r9) = ctx->r12;
        goto L_80051B80;
    // 0x80051AE8: sb          $t4, 0x7($t1)
    MEM_B(0X7, ctx->r9) = ctx->r12;
L_80051AEC:
    // 0x80051AEC: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x80051AF0: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80051AF4: lbu         $t6, 0x5($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X5);
    // 0x80051AF8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80051AFC: slt         $at, $s5, $t6
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80051B00: beq         $at, $zero, L_80051B60
    if (ctx->r1 == 0) {
        // 0x80051B04: nop
    
            goto L_80051B60;
    }
    // 0x80051B04: nop

L_80051B08:
    // 0x80051B08: sll         $t7, $s5, 2
    ctx->r15 = S32(ctx->r21 << 2);
    // 0x80051B0C: subu        $t7, $t7, $s5
    ctx->r15 = SUB32(ctx->r15, ctx->r21);
    // 0x80051B10: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80051B14: subu        $t7, $t7, $s5
    ctx->r15 = SUB32(ctx->r15, ctx->r21);
    // 0x80051B18: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80051B1C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80051B20: addiu       $t9, $t9, -0x10D0
    ctx->r25 = ADD32(ctx->r25, -0X10D0);
    // 0x80051B24: addiu       $t8, $t7, 0x28
    ctx->r24 = ADD32(ctx->r15, 0X28);
    // 0x80051B28: addu        $s6, $t8, $t9
    ctx->r22 = ADD32(ctx->r24, ctx->r25);
    // 0x80051B2C: lw          $t0, 0x8C($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X8C);
    // 0x80051B30: nop

    // 0x80051B34: andi        $t2, $t0, 0x9000
    ctx->r10 = ctx->r8 & 0X9000;
    // 0x80051B38: beq         $t2, $zero, L_80051B44
    if (ctx->r10 == 0) {
        // 0x80051B3C: nop
    
            goto L_80051B44;
    }
    // 0x80051B3C: nop

    // 0x80051B40: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_80051B44:
    // 0x80051B44: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x80051B48: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80051B4C: lbu         $t4, 0x5($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X5);
    // 0x80051B50: nop

    // 0x80051B54: slt         $at, $s5, $t4
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80051B58: bne         $at, $zero, L_80051B08
    if (ctx->r1 != 0) {
        // 0x80051B5C: nop
    
            goto L_80051B08;
    }
    // 0x80051B5C: nop

L_80051B60:
    // 0x80051B60: beq         $s4, $zero, L_80051B74
    if (ctx->r20 == 0) {
        // 0x80051B64: nop
    
            goto L_80051B74;
    }
    // 0x80051B64: nop

    // 0x80051B68: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80051B6C: jal         0x80051880
    // 0x80051B70: nop

    func_80051880(rdram, ctx);
        goto after_2;
    // 0x80051B70: nop

    after_2:
L_80051B74:
    // 0x80051B74: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80051B78: nop

    // 0x80051B7C: sb          $zero, 0x7($t1)
    MEM_B(0X7, ctx->r9) = 0;
L_80051B80:
    // 0x80051B80: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80051B84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80051B88: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80051B8C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80051B90: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80051B94: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80051B98: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80051B9C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80051BA0: jr          $ra
    // 0x80051BA4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80051BA4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80051BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051BA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80051BAC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80051BB0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80051BB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80051BB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80051BBC: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x80051BC0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80051BC4: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80051BC8: beq         $at, $zero, L_80051CA0
    if (ctx->r1 == 0) {
        // 0x80051BCC: nop
    
            goto L_80051CA0;
    }
    // 0x80051BCC: nop

L_80051BD0:
    // 0x80051BD0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80051BD4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80051BD8: addiu       $a1, $a1, -0x34C0
    ctx->r5 = ADD32(ctx->r5, -0X34C0);
    // 0x80051BDC: jal         0x8006CF08
    // 0x80051BE0: addiu       $a0, $a0, -0x34D8
    ctx->r4 = ADD32(ctx->r4, -0X34D8);
    alSynFreeFX(rdram, ctx);
        goto after_0;
    // 0x80051BE0: addiu       $a0, $a0, -0x34D8
    ctx->r4 = ADD32(ctx->r4, -0X34D8);
    after_0:
    // 0x80051BE4: jal         0x80050520
    // 0x80051BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80050520(rdram, ctx);
        goto after_1;
    // 0x80051BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80051BEC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80051BF0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80051BF4: addiu       $a1, $a1, -0x349C
    ctx->r5 = ADD32(ctx->r5, -0X349C);
    // 0x80051BF8: jal         0x8006CF08
    // 0x80051BFC: addiu       $a0, $a0, -0x34BC
    ctx->r4 = ADD32(ctx->r4, -0X34BC);
    alSynFreeFX(rdram, ctx);
        goto after_2;
    // 0x80051BFC: addiu       $a0, $a0, -0x34BC
    ctx->r4 = ADD32(ctx->r4, -0X34BC);
    after_2:
    // 0x80051C00: jal         0x8005061C
    // 0x80051C04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005061C(rdram, ctx);
        goto after_3;
    // 0x80051C04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80051C08: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80051C0C: lbu         $t8, -0x118($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X118);
    // 0x80051C10: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80051C14: bne         $t8, $at, L_80051C40
    if (ctx->r24 != ctx->r1) {
        // 0x80051C18: nop
    
            goto L_80051C40;
    }
    // 0x80051C18: nop

    // 0x80051C1C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80051C20: addiu       $t9, $t9, -0x10D0
    ctx->r25 = ADD32(ctx->r25, -0X10D0);
    // 0x80051C24: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x80051C28: nop

    // 0x80051C2C: beq         $t0, $zero, L_80051C40
    if (ctx->r8 == 0) {
        // 0x80051C30: nop
    
            goto L_80051C40;
    }
    // 0x80051C30: nop

    // 0x80051C34: addiu       $t1, $zero, 0xFA0
    ctx->r9 = ADD32(0, 0XFA0);
    // 0x80051C38: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80051C3C: sw          $t1, 0x550($at)
    MEM_W(0X550, ctx->r1) = ctx->r9;
L_80051C40:
    // 0x80051C40: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80051C44: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80051C48: addiu       $a1, $a1, -0x3480
    ctx->r5 = ADD32(ctx->r5, -0X3480);
    // 0x80051C4C: jal         0x8006CF08
    // 0x80051C50: addiu       $a0, $a0, -0x3498
    ctx->r4 = ADD32(ctx->r4, -0X3498);
    alSynFreeFX(rdram, ctx);
        goto after_4;
    // 0x80051C50: addiu       $a0, $a0, -0x3498
    ctx->r4 = ADD32(ctx->r4, -0X3498);
    after_4:
    // 0x80051C54: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80051C58: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x80051C5C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80051C60: addiu       $a0, $t4, 0x7FFF
    ctx->r4 = ADD32(ctx->r12, 0X7FFF);
    // 0x80051C64: lw          $a0, 0x612D($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X612D);
    // 0x80051C68: jal         0x8005423C
    // 0x80051C6C: nop

    func_8005423C(rdram, ctx);
        goto after_5;
    // 0x80051C6C: nop

    after_5:
    // 0x80051C70: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80051C74: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80051C78: addiu       $a1, $a1, -0x3454
    ctx->r5 = ADD32(ctx->r5, -0X3454);
    // 0x80051C7C: jal         0x8006CF08
    // 0x80051C80: addiu       $a0, $a0, -0x3470
    ctx->r4 = ADD32(ctx->r4, -0X3470);
    alSynFreeFX(rdram, ctx);
        goto after_6;
    // 0x80051C80: addiu       $a0, $a0, -0x3470
    ctx->r4 = ADD32(ctx->r4, -0X3470);
    after_6:
    // 0x80051C84: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80051C88: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80051C8C: lbu         $t6, 0x5($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X5);
    // 0x80051C90: nop

    // 0x80051C94: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80051C98: bne         $at, $zero, L_80051BD0
    if (ctx->r1 != 0) {
        // 0x80051C9C: nop
    
            goto L_80051BD0;
    }
    // 0x80051C9C: nop

L_80051CA0:
    // 0x80051CA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80051CA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80051CA8: jr          $ra
    // 0x80051CAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80051CAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80051CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051CB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80051CB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80051CB8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80051CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80051CC0: lbu         $t7, 0x2($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2);
    // 0x80051CC4: nop

    // 0x80051CC8: bne         $t7, $zero, L_80051CE8
    if (ctx->r15 != 0) {
        // 0x80051CCC: nop
    
            goto L_80051CE8;
    }
    // 0x80051CCC: nop

    // 0x80051CD0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80051CD4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80051CD8: addiu       $a1, $a1, -0x343C
    ctx->r5 = ADD32(ctx->r5, -0X343C);
    // 0x80051CDC: addiu       $a0, $a0, -0x3444
    ctx->r4 = ADD32(ctx->r4, -0X3444);
    // 0x80051CE0: jal         0x8004A5A0
    // 0x80051CE4: addiu       $a2, $zero, 0x30E
    ctx->r6 = ADD32(0, 0X30E);
    func_8004A5A0(rdram, ctx);
        goto after_0;
    // 0x80051CE4: addiu       $a2, $zero, 0x30E
    ctx->r6 = ADD32(0, 0X30E);
    after_0:
L_80051CE8:
    // 0x80051CE8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80051CEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80051CF0: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x80051CF4: nop

    // 0x80051CF8: beq         $t9, $at, L_80051F20
    if (ctx->r25 == ctx->r1) {
        // 0x80051CFC: nop
    
            goto L_80051F20;
    }
    // 0x80051CFC: nop

    // 0x80051D00: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80051D04: nop

    // 0x80051D08: sb          $zero, 0x1($t0)
    MEM_B(0X1, ctx->r8) = 0;
    // 0x80051D0C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80051D10: nop

    // 0x80051D14: addiu       $t2, $t1, 0x7FFF
    ctx->r10 = ADD32(ctx->r9, 0X7FFF);
    // 0x80051D18: lbu         $t2, 0x6509($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X6509);
    // 0x80051D1C: nop

    // 0x80051D20: beq         $t2, $zero, L_80051E2C
    if (ctx->r10 == 0) {
        // 0x80051D24: nop
    
            goto L_80051E2C;
    }
    // 0x80051D24: nop

    // 0x80051D28: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80051D2C: lw          $t3, 0x9F4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X9F4);
    // 0x80051D30: ori         $at, $zero, 0xE4FC
    ctx->r1 = 0 | 0XE4FC;
    // 0x80051D34: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80051D38: addu        $a0, $t1, $at
    ctx->r4 = ADD32(ctx->r9, ctx->r1);
    // 0x80051D3C: bgez        $t3, L_80051D54
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80051D40: cvt.s.w     $f4, $f4
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80051D54;
    }
    // 0x80051D40: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80051D44: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80051D48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80051D4C: nop

    // 0x80051D50: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_80051D54:
    // 0x80051D54: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80051D58: jal         0x80060770
    // 0x80051D5C: nop

    func_80060770(rdram, ctx);
        goto after_1;
    // 0x80051D5C: nop

    after_1:
    // 0x80051D60: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80051D64: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80051D68: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80051D6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80051D70: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80051D74: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x80051D78: lwc1        $f8, -0x1B04($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1B04);
    // 0x80051D7C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80051D80: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80051D84: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x80051D88: nop

    // 0x80051D8C: andi        $at, $a1, 0x4
    ctx->r1 = ctx->r5 & 0X4;
    // 0x80051D90: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x80051D94: beq         $a1, $zero, L_80051DE4
    if (ctx->r5 == 0) {
        // 0x80051D98: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_80051DE4;
    }
    // 0x80051D98: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80051D9C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80051DA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80051DA4: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80051DA8: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x80051DAC: nop

    // 0x80051DB0: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80051DB4: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x80051DB8: nop

    // 0x80051DBC: andi        $at, $a1, 0x4
    ctx->r1 = ctx->r5 & 0X4;
    // 0x80051DC0: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x80051DC4: bne         $a1, $zero, L_80051DDC
    if (ctx->r5 != 0) {
        // 0x80051DC8: nop
    
            goto L_80051DDC;
    }
    // 0x80051DC8: nop

    // 0x80051DCC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80051DD0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80051DD4: b           L_80051DF4
    // 0x80051DD8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_80051DF4;
    // 0x80051DD8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_80051DDC:
    // 0x80051DDC: b           L_80051DF4
    // 0x80051DE0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_80051DF4;
    // 0x80051DE0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_80051DE4:
    // 0x80051DE4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80051DE8: nop

    // 0x80051DEC: bltz        $a1, L_80051DDC
    if (SIGNED(ctx->r5) < 0) {
        // 0x80051DF0: nop
    
            goto L_80051DDC;
    }
    // 0x80051DF0: nop

L_80051DF4:
    // 0x80051DF4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80051DF8: jal         0x80050B54
    // 0x80051DFC: nop

    func_80050B54(rdram, ctx);
        goto after_2;
    // 0x80051DFC: nop

    after_2:
    // 0x80051E00: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80051E04: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80051E08: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80051E0C: lwc1        $f16, -0x1B00($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1B00);
    // 0x80051E10: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80051E14: nop

    // 0x80051E18: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x80051E1C: nop

    // 0x80051E20: bc1f        L_80051E2C
    if (!c1cs) {
        // 0x80051E24: addiu       $at, $t6, 0x7FFF
        ctx->r1 = ADD32(ctx->r14, 0X7FFF);
            goto L_80051E2C;
    }
    // 0x80051E24: addiu       $at, $t6, 0x7FFF
    ctx->r1 = ADD32(ctx->r14, 0X7FFF);
    // 0x80051E28: sb          $zero, 0x6509($at)
    MEM_B(0X6509, ctx->r1) = 0;
L_80051E2C:
    // 0x80051E2C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80051E30: nop

    // 0x80051E34: lbu         $t8, 0x3($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X3);
    // 0x80051E38: nop

    // 0x80051E3C: bne         $t8, $zero, L_80051F20
    if (ctx->r24 != 0) {
        // 0x80051E40: nop
    
            goto L_80051F20;
    }
    // 0x80051E40: nop

    // 0x80051E44: jal         0x80051104
    // 0x80051E48: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80051104(rdram, ctx);
        goto after_3;
    // 0x80051E48: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_3:
    // 0x80051E4C: beq         $v0, $zero, L_80051E74
    if (ctx->r2 == 0) {
        // 0x80051E50: nop
    
            goto L_80051E74;
    }
    // 0x80051E50: nop

    // 0x80051E54: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80051E58: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80051E5C: addiu       $t0, $t9, 0x7FFF
    ctx->r8 = ADD32(ctx->r25, 0X7FFF);
    // 0x80051E60: lw          $t0, 0x64E9($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X64E9);
    // 0x80051E64: lw          $t2, 0x9F4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9F4);
    // 0x80051E68: addiu       $at, $t9, 0x7FFF
    ctx->r1 = ADD32(ctx->r25, 0X7FFF);
    // 0x80051E6C: addu        $t1, $t0, $t2
    ctx->r9 = ADD32(ctx->r8, ctx->r10);
    // 0x80051E70: sw          $t1, 0x64E9($at)
    MEM_W(0X64E9, ctx->r1) = ctx->r9;
L_80051E74:
    // 0x80051E74: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80051E78: lw          $a0, 0x9F4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X9F4);
    // 0x80051E7C: jal         0x800763EC
    // 0x80051E80: nop

    func_800763EC(rdram, ctx);
        goto after_4;
    // 0x80051E80: nop

    after_4:
    // 0x80051E84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80051E88: jal         0x800518F0
    // 0x80051E8C: nop

    func_800518F0(rdram, ctx);
        goto after_5;
    // 0x80051E8C: nop

    after_5:
    // 0x80051E90: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80051E94: nop

    // 0x80051E98: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x80051E9C: nop

    // 0x80051EA0: bne         $t4, $zero, L_80051EB0
    if (ctx->r12 != 0) {
        // 0x80051EA4: nop
    
            goto L_80051EB0;
    }
    // 0x80051EA4: nop

    // 0x80051EA8: jal         0x8004311C
    // 0x80051EAC: nop

    func_8004311C(rdram, ctx);
        goto after_6;
    // 0x80051EAC: nop

    after_6:
L_80051EB0:
    // 0x80051EB0: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80051EB4: lbu         $t5, -0x118($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X118);
    // 0x80051EB8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80051EBC: beq         $t5, $at, L_80051ED0
    if (ctx->r13 == ctx->r1) {
        // 0x80051EC0: nop
    
            goto L_80051ED0;
    }
    // 0x80051EC0: nop

    // 0x80051EC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80051EC8: jal         0x800519B4
    // 0x80051ECC: nop

    func_800519B4(rdram, ctx);
        goto after_7;
    // 0x80051ECC: nop

    after_7:
L_80051ED0:
    // 0x80051ED0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80051ED4: jal         0x800515F8
    // 0x80051ED8: nop

    func_800515F8(rdram, ctx);
        goto after_8;
    // 0x80051ED8: nop

    after_8:
    // 0x80051EDC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80051EE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80051EE4: lbu         $t8, 0x1($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X1);
    // 0x80051EE8: nop

    // 0x80051EEC: beq         $t8, $at, L_80051F20
    if (ctx->r24 == ctx->r1) {
        // 0x80051EF0: nop
    
            goto L_80051F20;
    }
    // 0x80051EF0: nop

    // 0x80051EF4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80051EF8: nop

    // 0x80051EFC: lbu         $t0, 0x0($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X0);
    // 0x80051F00: nop

    // 0x80051F04: bne         $t0, $zero, L_80051F14
    if (ctx->r8 != 0) {
        // 0x80051F08: nop
    
            goto L_80051F14;
    }
    // 0x80051F08: nop

    // 0x80051F0C: jal         0x80051BA8
    // 0x80051F10: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80051BA8(rdram, ctx);
        goto after_9;
    // 0x80051F10: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_9:
L_80051F14:
    // 0x80051F14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80051F18: jal         0x80051464
    // 0x80051F1C: nop

    func_80051464(rdram, ctx);
        goto after_10;
    // 0x80051F1C: nop

    after_10:
L_80051F20:
    // 0x80051F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80051F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80051F28: jr          $ra
    // 0x80051F2C: nop

    return;
    // 0x80051F2C: nop

;}
RECOMP_FUNC void func_80051F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051F30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80051F34: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80051F38: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80051F3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80051F40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80051F44: lbu         $t7, 0x2($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2);
    // 0x80051F48: nop

    // 0x80051F4C: bne         $t7, $zero, L_80051F6C
    if (ctx->r15 != 0) {
        // 0x80051F50: nop
    
            goto L_80051F6C;
    }
    // 0x80051F50: nop

    // 0x80051F54: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80051F58: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80051F5C: addiu       $a1, $a1, -0x342C
    ctx->r5 = ADD32(ctx->r5, -0X342C);
    // 0x80051F60: addiu       $a0, $a0, -0x3434
    ctx->r4 = ADD32(ctx->r4, -0X3434);
    // 0x80051F64: jal         0x8004A5A0
    // 0x80051F68: addiu       $a2, $zero, 0x352
    ctx->r6 = ADD32(0, 0X352);
    func_8004A5A0(rdram, ctx);
        goto after_0;
    // 0x80051F68: addiu       $a2, $zero, 0x352
    ctx->r6 = ADD32(0, 0X352);
    after_0:
L_80051F6C:
    // 0x80051F6C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80051F70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80051F74: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x80051F78: nop

    // 0x80051F7C: beq         $t9, $at, L_80052080
    if (ctx->r25 == ctx->r1) {
        // 0x80051F80: nop
    
            goto L_80052080;
    }
    // 0x80051F80: nop

    // 0x80051F84: jal         0x800636C0
    // 0x80051F88: nop

    func_800636C0(rdram, ctx);
        goto after_1;
    // 0x80051F88: nop

    after_1:
    // 0x80051F8C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80051F90: ori         $at, $zero, 0xE0E8
    ctx->r1 = 0 | 0XE0E8;
    // 0x80051F94: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x80051F98: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051F9C: jal         0x80072A84
    // 0x80051FA0: sw          $t1, -0x390($at)
    MEM_W(-0X390, ctx->r1) = ctx->r9;
    func_80072A84(rdram, ctx);
        goto after_2;
    // 0x80051FA0: sw          $t1, -0x390($at)
    MEM_W(-0X390, ctx->r1) = ctx->r9;
    after_2:
    // 0x80051FA4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80051FA8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80051FAC: addiu       $a1, $a1, -0x341C
    ctx->r5 = ADD32(ctx->r5, -0X341C);
    // 0x80051FB0: jal         0x8006CF08
    // 0x80051FB4: addiu       $a0, $a0, -0x3424
    ctx->r4 = ADD32(ctx->r4, -0X3424);
    alSynFreeFX(rdram, ctx);
        goto after_3;
    // 0x80051FB4: addiu       $a0, $a0, -0x3424
    ctx->r4 = ADD32(ctx->r4, -0X3424);
    after_3:
    // 0x80051FB8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80051FBC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80051FC0: lbu         $t3, 0x5($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X5);
    // 0x80051FC4: nop

    // 0x80051FC8: sltu        $at, $s0, $t3
    ctx->r1 = ctx->r16 < ctx->r11 ? 1 : 0;
    // 0x80051FCC: beq         $at, $zero, L_80052058
    if (ctx->r1 == 0) {
        // 0x80051FD0: nop
    
            goto L_80052058;
    }
    // 0x80051FD0: nop

L_80051FD4:
    // 0x80051FD4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80051FD8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80051FDC: addiu       $a1, $a1, -0x3408
    ctx->r5 = ADD32(ctx->r5, -0X3408);
    // 0x80051FE0: jal         0x8006CF08
    // 0x80051FE4: addiu       $a0, $a0, -0x3410
    ctx->r4 = ADD32(ctx->r4, -0X3410);
    alSynFreeFX(rdram, ctx);
        goto after_4;
    // 0x80051FE4: addiu       $a0, $a0, -0x3410
    ctx->r4 = ADD32(ctx->r4, -0X3410);
    after_4:
    // 0x80051FE8: jal         0x80050520
    // 0x80051FEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80050520(rdram, ctx);
        goto after_5;
    // 0x80051FEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80051FF0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80051FF4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80051FF8: addiu       $a1, $a1, -0x33F8
    ctx->r5 = ADD32(ctx->r5, -0X33F8);
    // 0x80051FFC: jal         0x8006CF08
    // 0x80052000: addiu       $a0, $a0, -0x3400
    ctx->r4 = ADD32(ctx->r4, -0X3400);
    alSynFreeFX(rdram, ctx);
        goto after_6;
    // 0x80052000: addiu       $a0, $a0, -0x3400
    ctx->r4 = ADD32(ctx->r4, -0X3400);
    after_6:
    // 0x80052004: jal         0x8005061C
    // 0x80052008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005061C(rdram, ctx);
        goto after_7;
    // 0x80052008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8005200C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80052010: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80052014: addiu       $a1, $a1, -0x33E8
    ctx->r5 = ADD32(ctx->r5, -0X33E8);
    // 0x80052018: jal         0x8006CF08
    // 0x8005201C: addiu       $a0, $a0, -0x33F0
    ctx->r4 = ADD32(ctx->r4, -0X33F0);
    alSynFreeFX(rdram, ctx);
        goto after_8;
    // 0x8005201C: addiu       $a0, $a0, -0x33F0
    ctx->r4 = ADD32(ctx->r4, -0X33F0);
    after_8:
    // 0x80052020: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80052024: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x80052028: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8005202C: addiu       $a0, $t6, 0x7FFF
    ctx->r4 = ADD32(ctx->r14, 0X7FFF);
    // 0x80052030: lw          $a0, 0x612D($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X612D);
    // 0x80052034: jal         0x8005447C
    // 0x80052038: nop

    func_8005447C(rdram, ctx);
        goto after_9;
    // 0x80052038: nop

    after_9:
    // 0x8005203C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80052040: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80052044: lbu         $t8, 0x5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5);
    // 0x80052048: nop

    // 0x8005204C: sltu        $at, $s0, $t8
    ctx->r1 = ctx->r16 < ctx->r24 ? 1 : 0;
    // 0x80052050: bne         $at, $zero, L_80051FD4
    if (ctx->r1 != 0) {
        // 0x80052054: nop
    
            goto L_80051FD4;
    }
    // 0x80052054: nop

L_80052058:
    // 0x80052058: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8005205C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80052060: addiu       $a1, $a1, -0x33D8
    ctx->r5 = ADD32(ctx->r5, -0X33D8);
    // 0x80052064: jal         0x8006CF08
    // 0x80052068: addiu       $a0, $a0, -0x33E0
    ctx->r4 = ADD32(ctx->r4, -0X33E0);
    alSynFreeFX(rdram, ctx);
        goto after_10;
    // 0x80052068: addiu       $a0, $a0, -0x33E0
    ctx->r4 = ADD32(ctx->r4, -0X33E0);
    after_10:
    // 0x8005206C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80052070: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80052074: addiu       $a1, $a1, -0x33C8
    ctx->r5 = ADD32(ctx->r5, -0X33C8);
    // 0x80052078: jal         0x8006CF08
    // 0x8005207C: addiu       $a0, $a0, -0x33D0
    ctx->r4 = ADD32(ctx->r4, -0X33D0);
    alSynFreeFX(rdram, ctx);
        goto after_11;
    // 0x8005207C: addiu       $a0, $a0, -0x33D0
    ctx->r4 = ADD32(ctx->r4, -0X33D0);
    after_11:
L_80052080:
    // 0x80052080: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80052084: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80052088: jr          $ra
    // 0x8005208C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8005208C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80052090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052090: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80052094: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80052098: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x8005209C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800520A0: addiu       $s0, $s0, 0xA00
    ctx->r16 = ADD32(ctx->r16, 0XA00);
    // 0x800520A4: ori         $at, $zero, 0xE080
    ctx->r1 = 0 | 0XE080;
    // 0x800520A8: jal         0x80075F5C
    // 0x800520AC: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    func_80075F5C(rdram, ctx);
        goto after_0;
    // 0x800520AC: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    after_0:
    // 0x800520B0: jal         0x80075DB4
    // 0x800520B4: addiu       $a0, $s0, 0x80
    ctx->r4 = ADD32(ctx->r16, 0X80);
    func_80075DB4(rdram, ctx);
        goto after_1;
    // 0x800520B4: addiu       $a0, $s0, 0x80
    ctx->r4 = ADD32(ctx->r16, 0X80);
    after_1:
    // 0x800520B8: jal         0x8006B384
    // 0x800520BC: nop

    func_8006B384(rdram, ctx);
        goto after_2;
    // 0x800520BC: nop

    after_2:
    // 0x800520C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800520C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800520C8: jr          $ra
    // 0x800520CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800520CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800520D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800520D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800520D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800520D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800520DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800520E0: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x800520E4: lbu         $a0, -0x10E0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X10E0);
    // 0x800520E8: jal         0x8006B248
    // 0x800520EC: addiu       $s0, $s0, 0xA00
    ctx->r16 = ADD32(ctx->r16, 0XA00);
    func_8006B248(rdram, ctx);
        goto after_0;
    // 0x800520EC: addiu       $s0, $s0, 0xA00
    ctx->r16 = ADD32(ctx->r16, 0XA00);
    after_0:
    // 0x800520F0: ori         $at, $zero, 0xE080
    ctx->r1 = 0 | 0XE080;
    // 0x800520F4: jal         0x80075EB0
    // 0x800520F8: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    func_80075EB0(rdram, ctx);
        goto after_1;
    // 0x800520F8: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    after_1:
    // 0x800520FC: jal         0x80075C98
    // 0x80052100: addiu       $a0, $s0, 0x80
    ctx->r4 = ADD32(ctx->r16, 0X80);
    func_80075C98(rdram, ctx);
        goto after_2;
    // 0x80052100: addiu       $a0, $s0, 0x80
    ctx->r4 = ADD32(ctx->r16, 0X80);
    after_2:
    // 0x80052104: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80052108: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005210C: jr          $ra
    // 0x80052110: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80052110: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80052114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052114: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80052118: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005211C: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x80052120: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x80052124: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80052128: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x8005212C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80052130: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80052134: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80052138: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8005213C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80052140: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80052144: addiu       $s0, $s0, 0xA00
    ctx->r16 = ADD32(ctx->r16, 0XA00);
    // 0x80052148: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8005214C: sb          $t6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r14;
    // 0x80052150: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80052154: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80052158: lbu         $a1, 0x73($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X73);
    // 0x8005215C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80052160: sb          $t7, -0xB0($at)
    MEM_B(-0XB0, ctx->r1) = ctx->r15;
    // 0x80052164: jal         0x800B3BFC
    // 0x80052168: addiu       $a0, $a0, -0x33BC
    ctx->r4 = ADD32(ctx->r4, -0X33BC);
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x80052168: addiu       $a0, $a0, -0x33BC
    ctx->r4 = ADD32(ctx->r4, -0X33BC);
    after_0:
    // 0x8005216C: lbu         $t8, 0x73($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X73);
    // 0x80052170: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80052174: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80052178: beq         $at, $zero, L_800521B0
    if (ctx->r1 == 0) {
        // 0x8005217C: nop
    
            goto L_800521B0;
    }
    // 0x8005217C: nop

L_80052180:
    // 0x80052180: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x80052184: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80052188: addu        $t0, $t9, $s1
    ctx->r8 = ADD32(ctx->r25, ctx->r17);
    // 0x8005218C: lbu         $a2, 0x0($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0X0);
    // 0x80052190: addiu       $a0, $a0, -0x3398
    ctx->r4 = ADD32(ctx->r4, -0X3398);
    // 0x80052194: jal         0x800B3BFC
    // 0x80052198: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_1;
    // 0x80052198: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x8005219C: lbu         $t1, 0x73($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X73);
    // 0x800521A0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800521A4: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800521A8: bne         $at, $zero, L_80052180
    if (ctx->r1 != 0) {
        // 0x800521AC: nop
    
            goto L_80052180;
    }
    // 0x800521AC: nop

L_800521B0:
    // 0x800521B0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800521B4: jal         0x800B3BFC
    // 0x800521B8: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    osSyncPrintf(rdram, ctx);
        goto after_2;
    // 0x800521B8: addiu       $a0, $a0, -0x3388
    ctx->r4 = ADD32(ctx->r4, -0X3388);
    after_2:
    // 0x800521BC: lbu         $t2, 0x73($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X73);
    // 0x800521C0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800521C4: slt         $at, $s2, $t2
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800521C8: beq         $at, $zero, L_8005223C
    if (ctx->r1 == 0) {
        // 0x800521CC: nop
    
            goto L_8005223C;
    }
    // 0x800521CC: nop

L_800521D0:
    // 0x800521D0: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x800521D4: nop

    // 0x800521D8: addu        $t4, $t3, $s2
    ctx->r12 = ADD32(ctx->r11, ctx->r18);
    // 0x800521DC: lbu         $s3, 0x0($t4)
    ctx->r19 = MEM_BU(ctx->r12, 0X0);
    // 0x800521E0: nop

    // 0x800521E4: bgez        $s3, L_80052204
    if (SIGNED(ctx->r19) >= 0) {
        // 0x800521E8: nop
    
            goto L_80052204;
    }
    // 0x800521E8: nop

    // 0x800521EC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800521F0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800521F4: addiu       $a1, $a1, -0x336C
    ctx->r5 = ADD32(ctx->r5, -0X336C);
    // 0x800521F8: addiu       $a0, $a0, -0x3384
    ctx->r4 = ADD32(ctx->r4, -0X3384);
    // 0x800521FC: jal         0x8004A5A0
    // 0x80052200: addiu       $a2, $zero, 0x3DC
    ctx->r6 = ADD32(0, 0X3DC);
    func_8004A5A0(rdram, ctx);
        goto after_3;
    // 0x80052200: addiu       $a2, $zero, 0x3DC
    ctx->r6 = ADD32(0, 0X3DC);
    after_3:
L_80052204:
    // 0x80052204: slti        $at, $s3, 0xA
    ctx->r1 = SIGNED(ctx->r19) < 0XA ? 1 : 0;
    // 0x80052208: bne         $at, $zero, L_80052228
    if (ctx->r1 != 0) {
        // 0x8005220C: nop
    
            goto L_80052228;
    }
    // 0x8005220C: nop

    // 0x80052210: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80052214: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80052218: addiu       $a1, $a1, -0x334C
    ctx->r5 = ADD32(ctx->r5, -0X334C);
    // 0x8005221C: addiu       $a0, $a0, -0x3364
    ctx->r4 = ADD32(ctx->r4, -0X3364);
    // 0x80052220: jal         0x8004A5A0
    // 0x80052224: addiu       $a2, $zero, 0x3DF
    ctx->r6 = ADD32(0, 0X3DF);
    func_8004A5A0(rdram, ctx);
        goto after_4;
    // 0x80052224: addiu       $a2, $zero, 0x3DF
    ctx->r6 = ADD32(0, 0X3DF);
    after_4:
L_80052228:
    // 0x80052228: lbu         $t5, 0x73($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X73);
    // 0x8005222C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80052230: slt         $at, $s2, $t5
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80052234: bne         $at, $zero, L_800521D0
    if (ctx->r1 != 0) {
        // 0x80052238: nop
    
            goto L_800521D0;
    }
    // 0x80052238: nop

L_8005223C:
    // 0x8005223C: lbu         $t6, 0x73($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X73);
    // 0x80052240: addiu       $a0, $s0, 0x7FFF
    ctx->r4 = ADD32(ctx->r16, 0X7FFF);
    // 0x80052244: sb          $t6, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r14;
    // 0x80052248: lbu         $a0, 0x64F9($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X64F9);
    // 0x8005224C: jal         0x80062788
    // 0x80052250: nop

    func_80062788(rdram, ctx);
        goto after_5;
    // 0x80052250: nop

    after_5:
    // 0x80052254: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x80052258: sw          $zero, 0x64E9($at)
    MEM_W(0X64E9, ctx->r1) = 0;
    // 0x8005225C: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x80052260: sb          $zero, 0x6510($at)
    MEM_B(0X6510, ctx->r1) = 0;
    // 0x80052264: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x80052268: sb          $t7, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r15;
    // 0x8005226C: addiu       $s6, $s0, 0x7FFF
    ctx->r22 = ADD32(ctx->r16, 0X7FFF);
    // 0x80052270: lbu         $s6, 0x64ED($s6)
    ctx->r22 = MEM_BU(ctx->r22, 0X64ED);
    // 0x80052274: nop

    // 0x80052278: beq         $s6, $zero, L_800522D0
    if (ctx->r22 == 0) {
        // 0x8005227C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800522D0;
    }
    // 0x8005227C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80052280: beq         $s6, $at, L_80052298
    if (ctx->r22 == ctx->r1) {
        // 0x80052284: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80052298;
    }
    // 0x80052284: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80052288: beq         $s6, $at, L_800522A8
    if (ctx->r22 == ctx->r1) {
        // 0x8005228C: nop
    
            goto L_800522A8;
    }
    // 0x8005228C: nop

    // 0x80052290: b           L_800522B8
    // 0x80052294: nop

        goto L_800522B8;
    // 0x80052294: nop

L_80052298:
    // 0x80052298: addiu       $t8, $zero, 0x2A30
    ctx->r24 = ADD32(0, 0X2A30);
    // 0x8005229C: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x800522A0: b           L_800522D0
    // 0x800522A4: sw          $t8, 0x64F1($at)
    MEM_W(0X64F1, ctx->r1) = ctx->r24;
        goto L_800522D0;
    // 0x800522A4: sw          $t8, 0x64F1($at)
    MEM_W(0X64F1, ctx->r1) = ctx->r24;
L_800522A8:
    // 0x800522A8: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x800522AC: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x800522B0: b           L_800522D0
    // 0x800522B4: sw          $t9, 0x64F5($at)
    MEM_W(0X64F5, ctx->r1) = ctx->r25;
        goto L_800522D0;
    // 0x800522B4: sw          $t9, 0x64F5($at)
    MEM_W(0X64F5, ctx->r1) = ctx->r25;
L_800522B8:
    // 0x800522B8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800522BC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800522C0: addiu       $a1, $a1, -0x3330
    ctx->r5 = ADD32(ctx->r5, -0X3330);
    // 0x800522C4: addiu       $a0, $a0, -0x3344
    ctx->r4 = ADD32(ctx->r4, -0X3344);
    // 0x800522C8: jal         0x8004A5A0
    // 0x800522CC: addiu       $a2, $zero, 0x419
    ctx->r6 = ADD32(0, 0X419);
    func_8004A5A0(rdram, ctx);
        goto after_6;
    // 0x800522CC: addiu       $a2, $zero, 0x419
    ctx->r6 = ADD32(0, 0X419);
    after_6:
L_800522D0:
    // 0x800522D0: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x800522D4: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x800522D8: lbu         $t0, 0x73($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X73);
    // 0x800522DC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800522E0: addiu       $a0, $s0, 0x80
    ctx->r4 = ADD32(ctx->r16, 0X80);
    // 0x800522E4: jal         0x80075C98
    // 0x800522E8: sb          $t0, -0x10E0($at)
    MEM_B(-0X10E0, ctx->r1) = ctx->r8;
    func_80075C98(rdram, ctx);
        goto after_7;
    // 0x800522E8: sb          $t0, -0x10E0($at)
    MEM_B(-0X10E0, ctx->r1) = ctx->r8;
    after_7:
    // 0x800522EC: ori         $at, $zero, 0xE080
    ctx->r1 = 0 | 0XE080;
    // 0x800522F0: jal         0x80075EB0
    // 0x800522F4: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    func_80075EB0(rdram, ctx);
        goto after_8;
    // 0x800522F4: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    after_8:
    // 0x800522F8: ori         $at, $zero, 0xE0E8
    ctx->r1 = 0 | 0XE0E8;
    // 0x800522FC: jal         0x8007287C
    // 0x80052300: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    func_8007287C(rdram, ctx);
        goto after_9;
    // 0x80052300: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    after_9:
    // 0x80052304: jal         0x8007635C
    // 0x80052308: nop

    func_8007635C(rdram, ctx);
        goto after_10;
    // 0x80052308: nop

    after_10:
    // 0x8005230C: lbu         $a0, 0x73($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X73);
    // 0x80052310: jal         0x8006B248
    // 0x80052314: nop

    func_8006B248(rdram, ctx);
        goto after_11;
    // 0x80052314: nop

    after_11:
    // 0x80052318: lbu         $a0, 0x73($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X73);
    // 0x8005231C: jal         0x8005344C
    // 0x80052320: nop

    func_8005344C(rdram, ctx);
        goto after_12;
    // 0x80052320: nop

    after_12:
    // 0x80052324: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x80052328: jal         0x80077408
    // 0x8005232C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80077408(rdram, ctx);
        goto after_13;
    // 0x8005232C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_13:
    // 0x80052330: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80052334: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80052338: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8005233C: swc1        $f4, -0x1B04($at)
    MEM_W(-0X1B04, ctx->r1) = ctx->f4.u32l;
    // 0x80052340: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80052344: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80052348: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8005234C: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80052350: swc1        $f6, -0x1AFC($at)
    MEM_W(-0X1AFC, ctx->r1) = ctx->f6.u32l;
    // 0x80052354: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80052358: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8005235C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80052360: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80052364: lwc1        $f10, -0x1B04($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1B04);
    // 0x80052368: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8005236C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80052370: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80052374: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80052378: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8005237C: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80052380: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80052384: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80052388: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x8005238C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80052390: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x80052394: swc1        $f4, -0x1B00($at)
    MEM_W(-0X1B00, ctx->r1) = ctx->f4.u32l;
    // 0x80052398: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x8005239C: sb          $t1, 0x6509($at)
    MEM_B(0X6509, ctx->r1) = ctx->r9;
    // 0x800523A0: lw          $t2, -0x310($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X310);
    // 0x800523A4: nop

    // 0x800523A8: lw          $t3, 0x18F4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X18F4);
    // 0x800523AC: jal         0x800B7658
    // 0x800523B0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    __ll_mul_recomp(rdram, ctx);
        goto after_14;
    // 0x800523B0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_14:
    // 0x800523B4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x800523B8: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x800523BC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x800523C0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800523C4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800523C8: jal         0x800B7558
    // 0x800523CC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    __ull_div_recomp(rdram, ctx);
        goto after_15;
    // 0x800523CC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_15:
    // 0x800523D0: or          $t4, $v1, $zero
    ctx->r12 = ctx->r3 | 0;
    // 0x800523D4: jal         0x800B6550
    // 0x800523D8: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
    osGetTime_recomp(rdram, ctx);
        goto after_16;
    // 0x800523D8: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
    after_16:
    // 0x800523DC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800523E0: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x800523E4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x800523E8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800523EC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800523F0: jal         0x800B7658
    // 0x800523F4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    __ll_mul_recomp(rdram, ctx);
        goto after_17;
    // 0x800523F4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_17:
    // 0x800523F8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x800523FC: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x80052400: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80052404: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80052408: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8005240C: jal         0x800B7558
    // 0x80052410: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    __ull_div_recomp(rdram, ctx);
        goto after_18;
    // 0x80052410: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_18:
    // 0x80052414: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80052418: lw          $t6, -0x310($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X310);
    // 0x8005241C: or          $t5, $v1, $zero
    ctx->r13 = ctx->r3 | 0;
    // 0x80052420: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80052424: sw          $t5, 0x18F4($t6)
    MEM_W(0X18F4, ctx->r14) = ctx->r13;
    // 0x80052428: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x8005242C: jal         0x8007C5CC
    // 0x80052430: nop

    func_8007C5CC(rdram, ctx);
        goto after_19;
    // 0x80052430: nop

    after_19:
    // 0x80052434: ori         $at, $zero, 0xE080
    ctx->r1 = 0 | 0XE080;
    // 0x80052438: addu        $t7, $s0, $at
    ctx->r15 = ADD32(ctx->r16, ctx->r1);
    // 0x8005243C: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
    // 0x80052440: addiu       $t8, $s0, 0x7FFF
    ctx->r24 = ADD32(ctx->r16, 0X7FFF);
    // 0x80052444: lbu         $t8, 0x64F9($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X64F9);
    // 0x80052448: lbu         $t0, 0x73($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X73);
    // 0x8005244C: addiu       $t9, $s0, 0x7FFF
    ctx->r25 = ADD32(ctx->r16, 0X7FFF);
    // 0x80052450: sb          $t8, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r24;
    // 0x80052454: lbu         $t9, 0x64ED($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X64ED);
    // 0x80052458: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8005245C: slt         $at, $s4, $t0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80052460: beq         $at, $zero, L_8005252C
    if (ctx->r1 == 0) {
        // 0x80052464: sb          $t9, 0x5E($sp)
        MEM_B(0X5E, ctx->r29) = ctx->r25;
            goto L_8005252C;
    }
    // 0x80052464: sb          $t9, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = ctx->r25;
L_80052468:
    // 0x80052468: jal         0x8007E03C
    // 0x8005246C: addiu       $a0, $zero, 0x6848
    ctx->r4 = ADD32(0, 0X6848);
    func_8007E03C(rdram, ctx);
        goto after_20;
    // 0x8005246C: addiu       $a0, $zero, 0x6848
    ctx->r4 = ADD32(0, 0X6848);
    after_20:
    // 0x80052470: sll         $t1, $s4, 2
    ctx->r9 = S32(ctx->r20 << 2);
    // 0x80052474: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x80052478: addiu       $at, $t2, 0x7FFF
    ctx->r1 = ADD32(ctx->r10, 0X7FFF);
    // 0x8005247C: sw          $v0, 0x612D($at)
    MEM_W(0X612D, ctx->r1) = ctx->r2;
    // 0x80052480: jal         0x80050520
    // 0x80052484: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80050520(rdram, ctx);
        goto after_21;
    // 0x80052484: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_21:
    // 0x80052488: jal         0x8005061C
    // 0x8005248C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8005061C(rdram, ctx);
        goto after_22;
    // 0x8005248C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_22:
    // 0x80052490: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x80052494: lw          $s5, -0xDF0($s5)
    ctx->r21 = MEM_W(ctx->r21, -0XDF0);
    // 0x80052498: nop

    // 0x8005249C: addiu       $s5, $s5, 0x28
    ctx->r21 = ADD32(ctx->r21, 0X28);
    // 0x800524A0: jal         0x80060AD4
    // 0x800524A4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80060AD4(rdram, ctx);
        goto after_23;
    // 0x800524A4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_23:
    // 0x800524A8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800524AC: addiu       $a1, $zero, 0xF00
    ctx->r5 = ADD32(0, 0XF00);
    // 0x800524B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x800524B4: jal         0x80060B04
    // 0x800524B8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80060B04(rdram, ctx);
        goto after_24;
    // 0x800524B8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_24:
    // 0x800524BC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800524C0: ori         $a1, $zero, 0xC000
    ctx->r5 = 0 | 0XC000;
    // 0x800524C4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x800524C8: jal         0x80060B04
    // 0x800524CC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_80060B04(rdram, ctx);
        goto after_25;
    // 0x800524CC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_25:
    // 0x800524D0: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800524D4: lw          $t3, -0xDF0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0XDF0);
    // 0x800524D8: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800524DC: sw          $zero, 0x24($t3)
    MEM_W(0X24, ctx->r11) = 0;
    // 0x800524E0: lw          $t4, -0xDF0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0XDF0);
    // 0x800524E4: sll         $t9, $s4, 2
    ctx->r25 = S32(ctx->r20 << 2);
    // 0x800524E8: lw          $t5, 0x24($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X24);
    // 0x800524EC: addu        $t0, $s0, $t9
    ctx->r8 = ADD32(ctx->r16, ctx->r25);
    // 0x800524F0: sw          $t5, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->r13;
    // 0x800524F4: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x800524F8: addiu       $a0, $t0, 0x7FFF
    ctx->r4 = ADD32(ctx->r8, 0X7FFF);
    // 0x800524FC: addu        $t7, $t6, $s4
    ctx->r15 = ADD32(ctx->r14, ctx->r20);
    // 0x80052500: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x80052504: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x80052508: sb          $t8, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r24;
    // 0x8005250C: lw          $a0, 0x612D($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X612D);
    // 0x80052510: jal         0x800547F0
    // 0x80052514: nop

    func_800547F0(rdram, ctx);
        goto after_26;
    // 0x80052514: nop

    after_26:
    // 0x80052518: lbu         $t1, 0x73($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X73);
    // 0x8005251C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80052520: slt         $at, $s4, $t1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80052524: bne         $at, $zero, L_80052468
    if (ctx->r1 != 0) {
        // 0x80052528: nop
    
            goto L_80052468;
    }
    // 0x80052528: nop

L_8005252C:
    // 0x8005252C: jal         0x80041260
    // 0x80052530: nop

    func_80041260(rdram, ctx);
        goto after_27;
    // 0x80052530: nop

    after_27:
    // 0x80052534: jal         0x800B6650
    // 0x80052538: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_28;
    // 0x80052538: nop

    after_28:
    // 0x8005253C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80052540: jal         0x800B3BFC
    // 0x80052544: addiu       $a0, $a0, -0x3328
    ctx->r4 = ADD32(ctx->r4, -0X3328);
    osSyncPrintf(rdram, ctx);
        goto after_29;
    // 0x80052544: addiu       $a0, $a0, -0x3328
    ctx->r4 = ADD32(ctx->r4, -0X3328);
    after_29:
    // 0x80052548: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8005254C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80052550: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80052554: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80052558: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8005255C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80052560: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80052564: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80052568: jr          $ra
    // 0x8005256C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8005256C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80052570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052570: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80052574: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80052578: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x8005257C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80052580: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80052584: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80052588: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8005258C: addiu       $s0, $s0, 0xA00
    ctx->r16 = ADD32(ctx->r16, 0XA00);
    // 0x80052590: lbu         $t6, 0x2($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2);
    // 0x80052594: nop

    // 0x80052598: bne         $t6, $zero, L_800525B8
    if (ctx->r14 != 0) {
        // 0x8005259C: nop
    
            goto L_800525B8;
    }
    // 0x8005259C: nop

    // 0x800525A0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800525A4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800525A8: addiu       $a1, $a1, -0x330C
    ctx->r5 = ADD32(ctx->r5, -0X330C);
    // 0x800525AC: addiu       $a0, $a0, -0x3314
    ctx->r4 = ADD32(ctx->r4, -0X3314);
    // 0x800525B0: jal         0x8004A5A0
    // 0x800525B4: addiu       $a2, $zero, 0x48D
    ctx->r6 = ADD32(0, 0X48D);
    func_8004A5A0(rdram, ctx);
        goto after_0;
    // 0x800525B4: addiu       $a2, $zero, 0x48D
    ctx->r6 = ADD32(0, 0X48D);
    after_0:
L_800525B8:
    // 0x800525B8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800525BC: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x800525C0: jal         0x800B3BFC
    // 0x800525C4: addiu       $a0, $a0, -0x3304
    ctx->r4 = ADD32(ctx->r4, -0X3304);
    osSyncPrintf(rdram, ctx);
        goto after_1;
    // 0x800525C4: addiu       $a0, $a0, -0x3304
    ctx->r4 = ADD32(ctx->r4, -0X3304);
    after_1:
    // 0x800525C8: lbu         $t7, 0x5($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X5);
    // 0x800525CC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800525D0: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800525D4: beq         $at, $zero, L_8005262C
    if (ctx->r1 == 0) {
        // 0x800525D8: nop
    
            goto L_8005262C;
    }
    // 0x800525D8: nop

L_800525DC:
    // 0x800525DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800525E0: jal         0x80050E60
    // 0x800525E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80050E60(rdram, ctx);
        goto after_2;
    // 0x800525E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x800525E8: beq         $v0, $zero, L_80052608
    if (ctx->r2 == 0) {
        // 0x800525EC: nop
    
            goto L_80052608;
    }
    // 0x800525EC: nop

    // 0x800525F0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800525F4: addiu       $a0, $a0, -0x32E0
    ctx->r4 = ADD32(ctx->r4, -0X32E0);
    // 0x800525F8: jal         0x800B3BFC
    // 0x800525FC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_3;
    // 0x800525FC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x80052600: b           L_80052618
    // 0x80052604: nop

        goto L_80052618;
    // 0x80052604: nop

L_80052608:
    // 0x80052608: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8005260C: addiu       $a0, $a0, -0x32C8
    ctx->r4 = ADD32(ctx->r4, -0X32C8);
    // 0x80052610: jal         0x800B3BFC
    // 0x80052614: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_4;
    // 0x80052614: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
L_80052618:
    // 0x80052618: lbu         $t8, 0x5($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X5);
    // 0x8005261C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80052620: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80052624: bne         $at, $zero, L_800525DC
    if (ctx->r1 != 0) {
        // 0x80052628: nop
    
            goto L_800525DC;
    }
    // 0x80052628: nop

L_8005262C:
    // 0x8005262C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80052630: jal         0x800B3BFC
    // 0x80052634: addiu       $a0, $a0, -0x32B0
    ctx->r4 = ADD32(ctx->r4, -0X32B0);
    osSyncPrintf(rdram, ctx);
        goto after_5;
    // 0x80052634: addiu       $a0, $a0, -0x32B0
    ctx->r4 = ADD32(ctx->r4, -0X32B0);
    after_5:
    // 0x80052638: lbu         $t9, 0x5($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X5);
    // 0x8005263C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80052640: slt         $at, $s2, $t9
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80052644: beq         $at, $zero, L_80052684
    if (ctx->r1 == 0) {
        // 0x80052648: nop
    
            goto L_80052684;
    }
    // 0x80052648: nop

L_8005264C:
    // 0x8005264C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80052650: jal         0x80050E60
    // 0x80052654: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80050E60(rdram, ctx);
        goto after_6;
    // 0x80052654: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_6:
    // 0x80052658: beq         $v0, $zero, L_80052670
    if (ctx->r2 == 0) {
        // 0x8005265C: nop
    
            goto L_80052670;
    }
    // 0x8005265C: nop

    // 0x80052660: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80052664: addiu       $a0, $a0, -0x3298
    ctx->r4 = ADD32(ctx->r4, -0X3298);
    // 0x80052668: jal         0x800B3BFC
    // 0x8005266C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_7;
    // 0x8005266C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_7:
L_80052670:
    // 0x80052670: lbu         $t0, 0x5($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X5);
    // 0x80052674: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80052678: slt         $at, $s2, $t0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8005267C: bne         $at, $zero, L_8005264C
    if (ctx->r1 != 0) {
        // 0x80052680: nop
    
            goto L_8005264C;
    }
    // 0x80052680: nop

L_80052684:
    // 0x80052684: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80052688: jal         0x800B3BFC
    // 0x8005268C: addiu       $a0, $a0, -0x328C
    ctx->r4 = ADD32(ctx->r4, -0X328C);
    osSyncPrintf(rdram, ctx);
        goto after_8;
    // 0x8005268C: addiu       $a0, $a0, -0x328C
    ctx->r4 = ADD32(ctx->r4, -0X328C);
    after_8:
    // 0x80052690: jal         0x800630EC
    // 0x80052694: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800630EC(rdram, ctx);
        goto after_9;
    // 0x80052694: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x80052698: jal         0x80042B3C
    // 0x8005269C: nop

    func_80042B3C(rdram, ctx);
        goto after_10;
    // 0x8005269C: nop

    after_10:
    // 0x800526A0: jal         0x8004129C
    // 0x800526A4: nop

    func_8004129C(rdram, ctx);
        goto after_11;
    // 0x800526A4: nop

    after_11:
    // 0x800526A8: lbu         $t1, 0x5($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X5);
    // 0x800526AC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800526B0: slt         $at, $s3, $t1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800526B4: beq         $at, $zero, L_80052718
    if (ctx->r1 == 0) {
        // 0x800526B8: nop
    
            goto L_80052718;
    }
    // 0x800526B8: nop

L_800526BC:
    // 0x800526BC: jal         0x80050520
    // 0x800526C0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80050520(rdram, ctx);
        goto after_12;
    // 0x800526C0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_12:
    // 0x800526C4: sll         $t2, $s3, 2
    ctx->r10 = S32(ctx->r19 << 2);
    // 0x800526C8: addu        $t3, $s0, $t2
    ctx->r11 = ADD32(ctx->r16, ctx->r10);
    // 0x800526CC: addiu       $a0, $t3, 0x7FFF
    ctx->r4 = ADD32(ctx->r11, 0X7FFF);
    // 0x800526D0: lw          $a0, 0x612D($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X612D);
    // 0x800526D4: jal         0x80054AF4
    // 0x800526D8: nop

    func_80054AF4(rdram, ctx);
        goto after_13;
    // 0x800526D8: nop

    after_13:
    // 0x800526DC: sll         $t4, $s3, 2
    ctx->r12 = S32(ctx->r19 << 2);
    // 0x800526E0: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x800526E4: addiu       $a0, $t5, 0x7FFF
    ctx->r4 = ADD32(ctx->r13, 0X7FFF);
    // 0x800526E8: lw          $a0, 0x612D($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X612D);
    // 0x800526EC: jal         0x8007E328
    // 0x800526F0: nop

    func_8007E328(rdram, ctx);
        goto after_14;
    // 0x800526F0: nop

    after_14:
    // 0x800526F4: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x800526F8: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x800526FC: addiu       $at, $t7, 0x7FFF
    ctx->r1 = ADD32(ctx->r15, 0X7FFF);
    // 0x80052700: sw          $zero, 0x612D($at)
    MEM_W(0X612D, ctx->r1) = 0;
    // 0x80052704: lbu         $t8, 0x5($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X5);
    // 0x80052708: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8005270C: slt         $at, $s3, $t8
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80052710: bne         $at, $zero, L_800526BC
    if (ctx->r1 != 0) {
        // 0x80052714: nop
    
            goto L_800526BC;
    }
    // 0x80052714: nop

L_80052718:
    // 0x80052718: jal         0x800534A4
    // 0x8005271C: nop

    func_800534A4(rdram, ctx);
        goto after_15;
    // 0x8005271C: nop

    after_15:
    // 0x80052720: jal         0x8006B384
    // 0x80052724: nop

    func_8006B384(rdram, ctx);
        goto after_16;
    // 0x80052724: nop

    after_16:
    // 0x80052728: jal         0x800763B4
    // 0x8005272C: nop

    func_800763B4(rdram, ctx);
        goto after_17;
    // 0x8005272C: nop

    after_17:
    // 0x80052730: jal         0x800773D0
    // 0x80052734: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    func_800773D0(rdram, ctx);
        goto after_18;
    // 0x80052734: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    after_18:
    // 0x80052738: ori         $at, $zero, 0xE0E8
    ctx->r1 = 0 | 0XE0E8;
    // 0x8005273C: jal         0x80072988
    // 0x80052740: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    func_80072988(rdram, ctx);
        goto after_19;
    // 0x80052740: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    after_19:
    // 0x80052744: jal         0x80075DB4
    // 0x80052748: addiu       $a0, $s0, 0x80
    ctx->r4 = ADD32(ctx->r16, 0X80);
    func_80075DB4(rdram, ctx);
        goto after_20;
    // 0x80052748: addiu       $a0, $s0, 0x80
    ctx->r4 = ADD32(ctx->r16, 0X80);
    after_20:
    // 0x8005274C: ori         $at, $zero, 0xE080
    ctx->r1 = 0 | 0XE080;
    // 0x80052750: jal         0x80075F5C
    // 0x80052754: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    func_80075F5C(rdram, ctx);
        goto after_21;
    // 0x80052754: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    after_21:
    // 0x80052758: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005275C: sb          $zero, -0x10E0($at)
    MEM_B(-0X10E0, ctx->r1) = 0;
    // 0x80052760: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80052764: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80052768: sb          $t9, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r25;
    // 0x8005276C: jal         0x800B3BFC
    // 0x80052770: addiu       $a0, $a0, -0x3288
    ctx->r4 = ADD32(ctx->r4, -0X3288);
    osSyncPrintf(rdram, ctx);
        goto after_22;
    // 0x80052770: addiu       $a0, $a0, -0x3288
    ctx->r4 = ADD32(ctx->r4, -0X3288);
    after_22:
    // 0x80052774: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80052778: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8005277C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80052780: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80052784: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80052788: jr          $ra
    // 0x8005278C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8005278C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80052790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052790: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80052794: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80052798: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x8005279C: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x800527A0: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
    // 0x800527A4: jr          $ra
    // 0x800527A8: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    return;
    // 0x800527A8: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
;}
RECOMP_FUNC void func_800527AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800527AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800527B0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800527B4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800527B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800527BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800527C0: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x800527C4: nop

    // 0x800527C8: beq         $t7, $zero, L_8005281C
    if (ctx->r15 == 0) {
        // 0x800527CC: nop
    
            goto L_8005281C;
    }
    // 0x800527CC: nop

    // 0x800527D0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800527D4: jal         0x8005282C
    // 0x800527D8: nop

    func_8005282C(rdram, ctx);
        goto after_0;
    // 0x800527D8: nop

    after_0:
    // 0x800527DC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800527E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800527E4: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x800527E8: lw          $t0, 0x10($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X10);
    // 0x800527EC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800527F0: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800527F4: mflo        $t1
    ctx->r9 = lo;
    // 0x800527F8: addu        $a1, $s0, $t1
    ctx->r5 = ADD32(ctx->r16, ctx->r9);
    // 0x800527FC: jal         0x8005283C
    // 0x80052800: nop

    func_8005283C(rdram, ctx);
        goto after_1;
    // 0x80052800: nop

    after_1:
    // 0x80052804: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80052808: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8005280C: sw          $t2, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r10;
    // 0x80052810: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80052814: nop

    // 0x80052818: sw          $zero, 0xC($t4)
    MEM_W(0XC, ctx->r12) = 0;
L_8005281C:
    // 0x8005281C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80052820: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80052824: jr          $ra
    // 0x80052828: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80052828: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8005282C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005282C: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80052830: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x80052834: jr          $ra
    // 0x80052838: or          $v0, $t6, $t7
    ctx->r2 = ctx->r14 | ctx->r15;
    return;
    // 0x80052838: or          $v0, $t6, $t7
    ctx->r2 = ctx->r14 | ctx->r15;
;}
RECOMP_FUNC void func_8005283C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005283C: lui         $at, 0xAAAA
    ctx->r1 = S32(0XAAAA << 16);
    // 0x80052840: ori         $at, $at, 0xAAAA
    ctx->r1 = ctx->r1 | 0XAAAA;
    // 0x80052844: and         $t6, $a1, $at
    ctx->r14 = ctx->r5 & ctx->r1;
    // 0x80052848: lui         $at, 0x5555
    ctx->r1 = S32(0X5555 << 16);
    // 0x8005284C: ori         $at, $at, 0x5555
    ctx->r1 = ctx->r1 | 0X5555;
    // 0x80052850: and         $t7, $a1, $at
    ctx->r15 = ctx->r5 & ctx->r1;
    // 0x80052854: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x80052858: jr          $ra
    // 0x8005285C: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    return;
    // 0x8005285C: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
;}
