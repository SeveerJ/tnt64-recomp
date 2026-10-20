#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8008457C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008457C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80084580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80084584: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80084588: addiu       $a1, $a1, 0x980
    ctx->r5 = ADD32(ctx->r5, 0X980);
    // 0x8008458C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x80084590: jal         0x800B30B0
    // 0x80084594: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80084594: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80084598: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008459C: sw          $zero, 0xA30($at)
    MEM_W(0XA30, ctx->r1) = 0;
L_800845A0:
    // 0x800845A0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800845A4: addiu       $a0, $a0, 0x980
    ctx->r4 = ADD32(ctx->r4, 0X980);
    // 0x800845A8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x800845AC: jal         0x800B3C20
    // 0x800845B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800845B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x800845B4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800845B8: lw          $t6, 0x99C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X99C);
    // 0x800845BC: nop

    // 0x800845C0: beq         $t6, $zero, L_800845E8
    if (ctx->r14 == 0) {
        // 0x800845C4: nop
    
            goto L_800845E8;
    }
    // 0x800845C4: nop

    // 0x800845C8: jalr        $t6
    // 0x800845CC: nop

    LOOKUP_FUNC(ctx->r14)(rdram, ctx);
        goto after_2;
    // 0x800845CC: nop

    after_2:
    // 0x800845D0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800845D4: addiu       $a0, $a0, 0x3D0
    ctx->r4 = ADD32(ctx->r4, 0X3D0);
    // 0x800845D8: jal         0x800B7370
    // 0x800845DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    osSetThreadPri_recomp(rdram, ctx);
        goto after_3;
    // 0x800845DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_800845E0:
    // 0x800845E0: b           L_800845E0
    pause_self(rdram);
    // 0x800845E4: nop

L_800845E8:
    // 0x800845E8: jal         0x800B84E0
    // 0x800845EC: nop

    func_800B84E0(rdram, ctx);
        goto after_4;
    // 0x800845EC: nop

    after_4:
    // 0x800845F0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800845F4: sw          $v0, 0xA2C($at)
    MEM_W(0XA2C, ctx->r1) = ctx->r2;
    // 0x800845F8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800845FC: lw          $t7, 0xA2C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XA2C);
    // 0x80084600: nop

    // 0x80084604: beq         $t7, $zero, L_800845A0
    if (ctx->r15 == 0) {
        // 0x80084608: nop
    
            goto L_800845A0;
    }
    // 0x80084608: nop

    // 0x8008460C: jal         0x80083910
    // 0x80084610: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80083910(rdram, ctx);
        goto after_5;
    // 0x80084610: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_5:
L_80084614:
    // 0x80084614: b           L_80084614
    pause_self(rdram);
    // 0x80084618: nop

    // 0x8008461C: nop

    // 0x80084620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80084624: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80084628: jr          $ra
    // 0x8008462C: nop

    return;
    // 0x8008462C: nop

;}
RECOMP_FUNC void func_80084630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084630: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80084634: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80084638: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8008463C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80084640: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80084644: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80084648: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008464C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80084650: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80084654: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80084658: addiu       $a0, $a0, 0x980
    ctx->r4 = ADD32(ctx->r4, 0X980);
    // 0x8008465C: addiu       $a1, $a1, 0x998
    ctx->r5 = ADD32(ctx->r5, 0X998);
    // 0x80084660: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80084664: jal         0x800B3080
    // 0x80084668: sw          $t6, 0x99C($at)
    MEM_W(0X99C, ctx->r1) = ctx->r14;
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80084668: sw          $t6, 0x99C($at)
    MEM_W(0X99C, ctx->r1) = ctx->r14;
    after_0:
    // 0x8008466C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80084670: addiu       $t7, $t7, 0x580
    ctx->r15 = ADD32(ctx->r15, 0X580);
    // 0x80084674: addiu       $t8, $t7, 0x80
    ctx->r24 = ADD32(ctx->r15, 0X80);
    // 0x80084678: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8008467C: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80084680: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x80084684: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80084688: addiu       $a2, $a2, 0x457C
    ctx->r6 = ADD32(ctx->r6, 0X457C);
    // 0x8008468C: addiu       $a0, $a0, 0x3D0
    ctx->r4 = ADD32(ctx->r4, 0X3D0);
    // 0x80084690: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80084694: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80084698: jal         0x800B6010
    // 0x8008469C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    osCreateThread_recomp(rdram, ctx);
        goto after_1;
    // 0x8008469C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x800846A0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800846A4: jal         0x800B6160
    // 0x800846A8: addiu       $a0, $a0, 0x3D0
    ctx->r4 = ADD32(ctx->r4, 0X3D0);
    osStartThread_recomp(rdram, ctx);
        goto after_2;
    // 0x800846A8: addiu       $a0, $a0, 0x3D0
    ctx->r4 = ADD32(ctx->r4, 0X3D0);
    after_2:
    // 0x800846AC: lhu         $t1, 0x2A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X2A);
    // 0x800846B0: lhu         $t2, 0x2E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X2E);
    // 0x800846B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800846B8: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800846BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800846C0: sw          $t0, 0x9A0($at)
    MEM_W(0X9A0, ctx->r1) = ctx->r8;
    // 0x800846C4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800846C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800846CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800846D0: mflo        $t3
    ctx->r11 = lo;
    // 0x800846D4: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x800846D8: addu        $t5, $t4, $t0
    ctx->r13 = ADD32(ctx->r12, ctx->r8);
    // 0x800846DC: sw          $t5, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = ctx->r13;
    // 0x800846E0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800846E4: sh          $t1, 0x9A8($at)
    MEM_H(0X9A8, ctx->r1) = ctx->r9;
    // 0x800846E8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800846EC: jr          $ra
    // 0x800846F0: sh          $t2, 0x9AA($at)
    MEM_H(0X9AA, ctx->r1) = ctx->r10;
    return;
    // 0x800846F0: sh          $t2, 0x9AA($at)
    MEM_H(0X9AA, ctx->r1) = ctx->r10;
    // 0x800846F4: nop

    // 0x800846F8: nop

    // 0x800846FC: nop

;}
RECOMP_FUNC void func_80084700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084700: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80084704: addiu       $t6, $zero, 0x4000
    ctx->r14 = ADD32(0, 0X4000);
    // 0x80084708: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008470C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80084710: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80084714: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80084718: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8008471C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80084720: sh          $t6, -0x7228($at)
    MEM_H(-0X7228, ctx->r1) = ctx->r14;
    // 0x80084724: addiu       $t7, $t7, 0x6778
    ctx->r15 = ADD32(ctx->r15, 0X6778);
    // 0x80084728: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8008472C: lui         $t0, 0x8035
    ctx->r8 = S32(0X8035 << 16);
    // 0x80084730: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x80084734: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x80084738: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8008473C: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x80084740: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80084744: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80084748: sw          $at, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r1;
    // 0x8008474C: lw          $t9, 0xC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC);
    // 0x80084750: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80084754: addiu       $t0, $t0, -0x5300
    ctx->r8 = ADD32(ctx->r8, -0X5300);
    // 0x80084758: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008475C: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x80084760: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80084764: addiu       $a0, $a0, -0xED0
    ctx->r4 = ADD32(ctx->r4, -0XED0);
    // 0x80084768: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8008476C: jal         0x800B3BFC
    // 0x80084770: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x80084770: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x80084774: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80084778: lui         $a1, 0x8035
    ctx->r5 = S32(0X8035 << 16);
    // 0x8008477C: addiu       $a1, $a1, -0x5300
    ctx->r5 = ADD32(ctx->r5, -0X5300);
    // 0x80084780: addiu       $a0, $a0, 0x6778
    ctx->r4 = ADD32(ctx->r4, 0X6778);
    // 0x80084784: jal         0x800B84F0
    // 0x80084788: lui         $a2, 0x4
    ctx->r6 = S32(0X4 << 16);
    alHeapInit(rdram, ctx);
        goto after_1;
    // 0x80084788: lui         $a2, 0x4
    ctx->r6 = S32(0X4 << 16);
    after_1:
    // 0x8008478C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80084790: lui         $a1, 0x8035
    ctx->r5 = S32(0X8035 << 16);
    // 0x80084794: addiu       $a1, $a1, -0x5300
    ctx->r5 = ADD32(ctx->r5, -0X5300);
    // 0x80084798: jal         0x800B3BFC
    // 0x8008479C: addiu       $a0, $a0, -0xEC4
    ctx->r4 = ADD32(ctx->r4, -0XEC4);
    osSyncPrintf(rdram, ctx);
        goto after_2;
    // 0x8008479C: addiu       $a0, $a0, -0xEC4
    ctx->r4 = ADD32(ctx->r4, -0XEC4);
    after_2:
    // 0x800847A0: lui         $t2, 0x8035
    ctx->r10 = S32(0X8035 << 16);
    // 0x800847A4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800847A8: addiu       $t2, $t2, -0x5300
    ctx->r10 = ADD32(ctx->r10, -0X5300);
    // 0x800847AC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800847B0: addiu       $t3, $zero, 0x30
    ctx->r11 = ADD32(0, 0X30);
    // 0x800847B4: addiu       $t4, $zero, 0x60
    ctx->r12 = ADD32(0, 0X60);
    // 0x800847B8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800847BC: addiu       $t6, $t6, 0x6778
    ctx->r14 = ADD32(ctx->r14, 0X6778);
    // 0x800847C0: ori         $t8, $zero, 0x8CA0
    ctx->r24 = 0 | 0X8CA0;
    // 0x800847C4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800847C8: addiu       $t9, $zero, 0x1400
    ctx->r25 = ADD32(0, 0X1400);
    // 0x800847CC: sw          $t2, 0x6798($at)
    MEM_W(0X6798, ctx->r1) = ctx->r10;
    // 0x800847D0: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x800847D4: sw          $t3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r11;
    // 0x800847D8: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
    // 0x800847DC: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x800847E0: sb          $t5, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r13;
    // 0x800847E4: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x800847E8: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x800847EC: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x800847F0: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x800847F4: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x800847F8: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x800847FC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80084800: jal         0x80085430
    // 0x80084804: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_80085430(rdram, ctx);
        goto after_3;
    // 0x80084804: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_3:
    // 0x80084808: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8008480C: lw          $t0, 0x6798($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6798);
    // 0x80084810: lui         $t1, 0x8035
    ctx->r9 = S32(0X8035 << 16);
    // 0x80084814: addiu       $t1, $t1, -0x5300
    ctx->r9 = ADD32(ctx->r9, -0X5300);
    // 0x80084818: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008481C: addiu       $a0, $a0, -0xEB0
    ctx->r4 = ADD32(ctx->r4, -0XEB0);
    // 0x80084820: jal         0x800B3BFC
    // 0x80084824: subu        $a1, $t1, $t0
    ctx->r5 = SUB32(ctx->r9, ctx->r8);
    osSyncPrintf(rdram, ctx);
        goto after_4;
    // 0x80084824: subu        $a1, $t1, $t0
    ctx->r5 = SUB32(ctx->r9, ctx->r8);
    after_4:
    // 0x80084828: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8008482C: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x80084830: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80084834: addiu       $a2, $a2, 0x6778
    ctx->r6 = ADD32(ctx->r6, 0X6778);
    // 0x80084838: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8008483C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80084840: jal         0x800B8530
    // 0x80084844: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_5;
    // 0x80084844: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x80084848: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008484C: sw          $v0, 0x6788($at)
    MEM_W(0X6788, ctx->r1) = ctx->r2;
    // 0x80084850: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80084854: lw          $t3, 0x6788($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X6788);
    // 0x80084858: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008485C: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x80084860: lhu         $t4, -0x7228($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X7228);
    // 0x80084864: sw          $t3, 0x678C($at)
    MEM_W(0X678C, ctx->r1) = ctx->r11;
    // 0x80084868: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008486C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80084870: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80084874: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80084878: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8008487C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80084880: addiu       $a2, $a2, 0x4678
    ctx->r6 = ADD32(ctx->r6, 0X4678);
    // 0x80084884: addiu       $a1, $a1, 0x3A18
    ctx->r5 = ADD32(ctx->r5, 0X3A18);
    // 0x80084888: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    // 0x8008488C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80084890: sw          $t3, 0x2000($at)
    MEM_W(0X2000, ctx->r1) = ctx->r11;
    // 0x80084894: jal         0x80085D50
    // 0x80084898: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_80085D50(rdram, ctx);
        goto after_6;
    // 0x80084898: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_6:
    // 0x8008489C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800848A0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800848A4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800848A8: addiu       $t6, $zero, 0x7FFF
    ctx->r14 = ADD32(0, 0X7FFF);
    // 0x800848AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800848B0: addiu       $a2, $a2, 0x64B8
    ctx->r6 = ADD32(ctx->r6, 0X64B8);
    // 0x800848B4: addiu       $a1, $a1, 0x5858
    ctx->r5 = ADD32(ctx->r5, 0X5858);
    // 0x800848B8: addiu       $a0, $a0, 0x2010
    ctx->r4 = ADD32(ctx->r4, 0X2010);
    // 0x800848BC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x800848C0: jal         0x80085D50
    // 0x800848C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80085D50(rdram, ctx);
        goto after_7;
    // 0x800848C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_7:
    // 0x800848C8: lui         $a0, 0xB
    ctx->r4 = S32(0XB << 16);
    // 0x800848CC: jal         0x8007E03C
    // 0x800848D0: ori         $a0, $a0, 0xCF20
    ctx->r4 = ctx->r4 | 0XCF20;
    func_8007E03C(rdram, ctx);
        goto after_8;
    // 0x800848D0: ori         $a0, $a0, 0xCF20
    ctx->r4 = ctx->r4 | 0XCF20;
    after_8:
    // 0x800848D4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800848D8: lui         $a0, 0x5C
    ctx->r4 = S32(0X5C << 16);
    // 0x800848DC: sw          $v0, 0x2000($at)
    MEM_W(0X2000, ctx->r1) = ctx->r2;
    // 0x800848E0: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    // 0x800848E4: jal         0x80074888
    // 0x800848E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80074888(rdram, ctx);
        goto after_9;
    // 0x800848E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x800848EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800848F0: jal         0x8007E03C
    // 0x800848F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_10;
    // 0x800848F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x800848F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800848FC: lui         $a0, 0x5C
    ctx->r4 = S32(0X5C << 16);
    // 0x80084900: sw          $v0, 0x6790($at)
    MEM_W(0X6790, ctx->r1) = ctx->r2;
    // 0x80084904: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    // 0x80084908: jal         0x80074888
    // 0x8008490C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80074888(rdram, ctx);
        goto after_11;
    // 0x8008490C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x80084910: lui         $a0, 0x5C
    ctx->r4 = S32(0X5C << 16);
    // 0x80084914: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    // 0x80084918: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8008491C: jal         0x80074888
    // 0x80084920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80074888(rdram, ctx);
        goto after_12;
    // 0x80084920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x80084924: jal         0x8007E4A4
    // 0x80084928: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_8007E4A4(rdram, ctx);
        goto after_13;
    // 0x80084928: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_13:
    // 0x8008492C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80084930: lw          $t8, 0x6790($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6790);
    // 0x80084934: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80084938: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008493C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80084940: addiu       $a1, $a1, -0xE60
    ctx->r5 = ADD32(ctx->r5, -0XE60);
    // 0x80084944: addiu       $a0, $a0, -0xE9C
    ctx->r4 = ADD32(ctx->r4, -0XE9C);
    // 0x80084948: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8008494C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80084950: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x80084954: jal         0x800B3BFC
    // 0x80084958: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    osSyncPrintf(rdram, ctx);
        goto after_14;
    // 0x80084958: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_14:
    // 0x8008495C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80084960: lw          $a1, 0x6790($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6790);
    // 0x80084964: lui         $a0, 0x5C
    ctx->r4 = S32(0X5C << 16);
    // 0x80084968: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    // 0x8008496C: jal         0x800746C0
    // 0x80084970: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800746C0(rdram, ctx);
        goto after_15;
    // 0x80084970: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x80084974: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80084978: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8008497C: lw          $a2, 0x6794($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6794);
    // 0x80084980: lw          $a1, 0x6790($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6790);
    // 0x80084984: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80084988: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    // 0x8008498C: jal         0x80086138
    // 0x80084990: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80086138(rdram, ctx);
        goto after_16;
    // 0x80084990: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
    // 0x80084994: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80084998: sw          $v0, 0x6788($at)
    MEM_W(0X6788, ctx->r1) = ctx->r2;
    // 0x8008499C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800849A0: sh          $zero, 0x1FF0($at)
    MEM_H(0X1FF0, ctx->r1) = 0;
    // 0x800849A4: sh          $zero, 0x1FF2($at)
    MEM_H(0X1FF2, ctx->r1) = 0;
    // 0x800849A8: sb          $zero, 0x1FF4($at)
    MEM_B(0X1FF4, ctx->r1) = 0;
    // 0x800849AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800849B0: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x800849B4: jal         0x8004A34C
    // 0x800849B8: sw          $t7, -0x7224($at)
    MEM_W(-0X7224, ctx->r1) = ctx->r15;
    func_8004A34C(rdram, ctx);
        goto after_17;
    // 0x800849B8: sw          $t7, -0x7224($at)
    MEM_W(-0X7224, ctx->r1) = ctx->r15;
    after_17:
    // 0x800849BC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800849C0: lbu         $t9, 0x1FF4($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X1FF4);
    // 0x800849C4: nop

    // 0x800849C8: bne         $t9, $zero, L_800849F0
    if (ctx->r25 != 0) {
        // 0x800849CC: nop
    
            goto L_800849F0;
    }
    // 0x800849CC: nop

L_800849D0:
    // 0x800849D0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800849D4: jal         0x80085408
    // 0x800849D8: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80085408(rdram, ctx);
        goto after_18;
    // 0x800849D8: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_18:
    // 0x800849DC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800849E0: lbu         $t1, 0x1FF4($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X1FF4);
    // 0x800849E4: nop

    // 0x800849E8: beq         $t1, $zero, L_800849D0
    if (ctx->r9 == 0) {
        // 0x800849EC: nop
    
            goto L_800849D0;
    }
    // 0x800849EC: nop

L_800849F0:
    // 0x800849F0: jal         0x8007E4A4
    // 0x800849F4: nop

    func_8007E4A4(rdram, ctx);
        goto after_19;
    // 0x800849F4: nop

    after_19:
    // 0x800849F8: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800849FC: lw          $a2, 0x6790($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6790);
    // 0x80084A00: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80084A04: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80084A08: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80084A0C: addiu       $a1, $a1, -0xE24
    ctx->r5 = ADD32(ctx->r5, -0XE24);
    // 0x80084A10: addiu       $a0, $a0, -0xE54
    ctx->r4 = ADD32(ctx->r4, -0XE54);
    // 0x80084A14: jal         0x800B3BFC
    // 0x80084A18: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_20;
    // 0x80084A18: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_20:
    // 0x80084A1C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80084A20: lw          $a0, 0x6790($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6790);
    // 0x80084A24: jal         0x8007E328
    // 0x80084A28: nop

    func_8007E328(rdram, ctx);
        goto after_21;
    // 0x80084A28: nop

    after_21:
    // 0x80084A2C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80084A30: lw          $t0, 0x3990($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3990);
    // 0x80084A34: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80084A38: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80084A3C: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x80084A40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80084A44: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80084A48: sw          $t0, 0x6788($at)
    MEM_W(0X6788, ctx->r1) = ctx->r8;
    // 0x80084A4C: jal         0x80088C84
    // 0x80084A50: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    func_80088C84(rdram, ctx);
        goto after_22;
    // 0x80084A50: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    after_22:
    // 0x80084A54: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80084A58: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80084A5C: sw          $zero, -0x752C($at)
    MEM_W(-0X752C, ctx->r1) = 0;
    // 0x80084A60: jal         0x80085030
    // 0x80084A64: addiu       $a0, $a0, 0x3B28
    ctx->r4 = ADD32(ctx->r4, 0X3B28);
    func_80085030(rdram, ctx);
        goto after_23;
    // 0x80084A64: addiu       $a0, $a0, 0x3B28
    ctx->r4 = ADD32(ctx->r4, 0X3B28);
    after_23:
    // 0x80084A68: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80084A6C: lw          $t2, 0x6788($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6788);
    // 0x80084A70: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80084A74: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80084A78: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x80084A7C: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x80084A80: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x80084A84: addiu       $a0, $a0, -0xE18
    ctx->r4 = ADD32(ctx->r4, -0XE18);
    // 0x80084A88: jal         0x800B3BFC
    // 0x80084A8C: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_24;
    // 0x80084A8C: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    after_24:
    // 0x80084A90: jal         0x800B6650
    // 0x80084A94: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_25;
    // 0x80084A94: nop

    after_25:
    // 0x80084A98: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80084A9C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80084AA0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80084AA4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80084AA8: jr          $ra
    // 0x80084AAC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80084AAC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80084AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084AB0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80084AB4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80084AB8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80084ABC: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x80084AC0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80084AC4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80084AC8: lw          $a2, -0x7224($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X7224);
    // 0x80084ACC: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80084AD0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80084AD4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80084AD8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80084ADC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80084AE0: sh          $zero, -0x7240($at)
    MEM_H(-0X7240, ctx->r1) = 0;
    // 0x80084AE4: jal         0x800B3BFC
    // 0x80084AE8: addiu       $a0, $a0, -0xDFC
    ctx->r4 = ADD32(ctx->r4, -0XDFC);
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x80084AE8: addiu       $a0, $a0, -0xDFC
    ctx->r4 = ADD32(ctx->r4, -0XDFC);
    after_0:
    // 0x80084AEC: lui         $a0, 0x5C
    ctx->r4 = S32(0X5C << 16);
    // 0x80084AF0: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80084AF4: jal         0x80074888
    // 0x80084AF8: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    func_80074888(rdram, ctx);
        goto after_1;
    // 0x80084AF8: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    after_1:
    // 0x80084AFC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80084B00: jal         0x8007E03C
    // 0x80084B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_2;
    // 0x80084B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80084B08: lui         $a0, 0x5C
    ctx->r4 = S32(0X5C << 16);
    // 0x80084B0C: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80084B10: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80084B14: jal         0x80074888
    // 0x80084B18: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    func_80074888(rdram, ctx);
        goto after_3;
    // 0x80084B18: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    after_3:
    // 0x80084B1C: lui         $a0, 0x5C
    ctx->r4 = S32(0X5C << 16);
    // 0x80084B20: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80084B24: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    // 0x80084B28: jal         0x80074888
    // 0x80084B2C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_80074888(rdram, ctx);
        goto after_4;
    // 0x80084B2C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_4:
    // 0x80084B30: jal         0x8007E4A4
    // 0x80084B34: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_8007E4A4(rdram, ctx);
        goto after_5;
    // 0x80084B34: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_5:
    // 0x80084B38: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80084B3C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80084B40: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80084B44: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80084B48: addiu       $a1, $a1, -0xD9C
    ctx->r5 = ADD32(ctx->r5, -0XD9C);
    // 0x80084B4C: addiu       $a0, $a0, -0xDD8
    ctx->r4 = ADD32(ctx->r4, -0XDD8);
    // 0x80084B50: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80084B54: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80084B58: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x80084B5C: jal         0x800B3BFC
    // 0x80084B60: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    osSyncPrintf(rdram, ctx);
        goto after_6;
    // 0x80084B60: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_6:
    // 0x80084B64: lui         $a0, 0x5C
    ctx->r4 = S32(0X5C << 16);
    // 0x80084B68: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80084B6C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80084B70: jal         0x800746C0
    // 0x80084B74: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    func_800746C0(rdram, ctx);
        goto after_7;
    // 0x80084B74: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    after_7:
    // 0x80084B78: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80084B7C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80084B80: jal         0x80085F8C
    // 0x80084B84: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    func_80085F8C(rdram, ctx);
        goto after_8;
    // 0x80084B84: addiu       $a0, $a0, 0xA70
    ctx->r4 = ADD32(ctx->r4, 0XA70);
    after_8:
    // 0x80084B88: jal         0x8007E4A4
    // 0x80084B8C: nop

    func_8007E4A4(rdram, ctx);
        goto after_9;
    // 0x80084B8C: nop

    after_9:
    // 0x80084B90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80084B94: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80084B98: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80084B9C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80084BA0: addiu       $a1, $a1, -0xD5C
    ctx->r5 = ADD32(ctx->r5, -0XD5C);
    // 0x80084BA4: addiu       $a0, $a0, -0xD8C
    ctx->r4 = ADD32(ctx->r4, -0XD8C);
    // 0x80084BA8: jal         0x800B3BFC
    // 0x80084BAC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_10;
    // 0x80084BAC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_10:
    // 0x80084BB0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80084BB4: jal         0x8007E328
    // 0x80084BB8: nop

    func_8007E328(rdram, ctx);
        goto after_11;
    // 0x80084BB8: nop

    after_11:
    // 0x80084BBC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80084BC0: nop

    // 0x80084BC4: lw          $t8, 0x444($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X444);
    // 0x80084BC8: nop

    // 0x80084BCC: beq         $t8, $zero, L_80084C20
    if (ctx->r24 == 0) {
        // 0x80084BD0: nop
    
            goto L_80084C20;
    }
    // 0x80084BD0: nop

    // 0x80084BD4: jal         0x8007E4A4
    // 0x80084BD8: nop

    func_8007E4A4(rdram, ctx);
        goto after_12;
    // 0x80084BD8: nop

    after_12:
    // 0x80084BDC: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80084BE0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80084BE4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80084BE8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80084BEC: lw          $a2, 0x444($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X444);
    // 0x80084BF0: addiu       $a1, $a1, -0xD1C
    ctx->r5 = ADD32(ctx->r5, -0XD1C);
    // 0x80084BF4: addiu       $a0, $a0, -0xD4C
    ctx->r4 = ADD32(ctx->r4, -0XD4C);
    // 0x80084BF8: jal         0x800B3BFC
    // 0x80084BFC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_13;
    // 0x80084BFC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_13:
    // 0x80084C00: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80084C04: nop

    // 0x80084C08: lw          $a0, 0x444($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X444);
    // 0x80084C0C: jal         0x8007E328
    // 0x80084C10: nop

    func_8007E328(rdram, ctx);
        goto after_14;
    // 0x80084C10: nop

    after_14:
    // 0x80084C14: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80084C18: nop

    // 0x80084C1C: sw          $zero, 0x444($t1)
    MEM_W(0X444, ctx->r9) = 0;
L_80084C20:
    // 0x80084C20: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80084C24: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80084C28: lw          $t3, 0x44C($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X44C);
    // 0x80084C2C: nop

    // 0x80084C30: sw          $t3, 0x444($t2)
    MEM_W(0X444, ctx->r10) = ctx->r11;
    // 0x80084C34: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80084C38: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80084C3C: nop

    // 0x80084C40: sh          $t4, 0x1580($t5)
    MEM_H(0X1580, ctx->r13) = ctx->r12;
    // 0x80084C44: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80084C48: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80084C4C: nop

    // 0x80084C50: sh          $t6, 0x1582($t7)
    MEM_H(0X1582, ctx->r15) = ctx->r14;
    // 0x80084C54: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80084C58: nop

    // 0x80084C5C: sb          $t8, 0x1584($t9)
    MEM_B(0X1584, ctx->r25) = ctx->r24;
    // 0x80084C60: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80084C64: jal         0x8008777C
    // 0x80084C68: nop

    func_8008777C(rdram, ctx);
        goto after_15;
    // 0x80084C68: nop

    after_15:
    // 0x80084C6C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80084C70: jal         0x80087784
    // 0x80084C74: nop

    func_80087784(rdram, ctx);
        goto after_16;
    // 0x80084C74: nop

    after_16:
    // 0x80084C78: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80084C7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80084C80: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80084C84: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80084C88: jr          $ra
    // 0x80084C8C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80084C8C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80084C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084C90: jr          $ra
    // 0x80084C94: sh          $a0, 0x1582($a1)
    MEM_H(0X1582, ctx->r5) = ctx->r4;
    return;
    // 0x80084C94: sh          $a0, 0x1582($a1)
    MEM_H(0X1582, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void func_80084C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084C98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80084C9C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80084CA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80084CA4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80084CA8: jal         0x8008780C
    // 0x80084CAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8008780C(rdram, ctx);
        goto after_0;
    // 0x80084CAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80084CB0: jal         0x8004A34C
    // 0x80084CB4: nop

    func_8004A34C(rdram, ctx);
        goto after_1;
    // 0x80084CB4: nop

    after_1:
    // 0x80084CB8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80084CBC: nop

    // 0x80084CC0: lw          $t7, 0x444($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X444);
    // 0x80084CC4: nop

    // 0x80084CC8: beq         $t7, $zero, L_80084D1C
    if (ctx->r15 == 0) {
        // 0x80084CCC: nop
    
            goto L_80084D1C;
    }
    // 0x80084CCC: nop

    // 0x80084CD0: jal         0x8007E4A4
    // 0x80084CD4: nop

    func_8007E4A4(rdram, ctx);
        goto after_2;
    // 0x80084CD4: nop

    after_2:
    // 0x80084CD8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80084CDC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80084CE0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80084CE4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80084CE8: lw          $a2, 0x444($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X444);
    // 0x80084CEC: addiu       $a1, $a1, -0xCDC
    ctx->r5 = ADD32(ctx->r5, -0XCDC);
    // 0x80084CF0: addiu       $a0, $a0, -0xD0C
    ctx->r4 = ADD32(ctx->r4, -0XD0C);
    // 0x80084CF4: jal         0x800B3BFC
    // 0x80084CF8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_3;
    // 0x80084CF8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_3:
    // 0x80084CFC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80084D00: nop

    // 0x80084D04: lw          $a0, 0x444($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X444);
    // 0x80084D08: jal         0x8007E328
    // 0x80084D0C: nop

    func_8007E328(rdram, ctx);
        goto after_4;
    // 0x80084D0C: nop

    after_4:
    // 0x80084D10: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80084D14: nop

    // 0x80084D18: sw          $zero, 0x444($t0)
    MEM_W(0X444, ctx->r8) = 0;
L_80084D1C:
    // 0x80084D1C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80084D20: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80084D24: lbu         $t2, 0x41D($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X41D);
    // 0x80084D28: nop

    // 0x80084D2C: blez        $t2, L_80084E10
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80084D30: nop
    
            goto L_80084E10;
    }
    // 0x80084D30: nop

L_80084D34:
    // 0x80084D34: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80084D38: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80084D3C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80084D40: lw          $t4, 0x438($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X438);
    // 0x80084D44: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80084D48: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80084D4C: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x80084D50: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80084D54: nop

    // 0x80084D58: beq         $t8, $zero, L_80084DEC
    if (ctx->r24 == 0) {
        // 0x80084D5C: nop
    
            goto L_80084DEC;
    }
    // 0x80084D5C: nop

    // 0x80084D60: jal         0x8007E4A4
    // 0x80084D64: nop

    func_8007E4A4(rdram, ctx);
        goto after_5;
    // 0x80084D64: nop

    after_5:
    // 0x80084D68: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80084D6C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80084D70: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80084D74: lw          $t0, 0x438($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X438);
    // 0x80084D78: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80084D7C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80084D80: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80084D84: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x80084D88: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80084D8C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80084D90: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80084D94: addiu       $a1, $a1, -0xC90
    ctx->r5 = ADD32(ctx->r5, -0XC90);
    // 0x80084D98: addiu       $a0, $a0, -0xCC0
    ctx->r4 = ADD32(ctx->r4, -0XCC0);
    // 0x80084D9C: jal         0x800B3BFC
    // 0x80084DA0: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_6;
    // 0x80084DA0: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_6:
    // 0x80084DA4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80084DA8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80084DAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80084DB0: lw          $t4, 0x438($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X438);
    // 0x80084DB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80084DB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80084DBC: addu        $t8, $t4, $t7
    ctx->r24 = ADD32(ctx->r12, ctx->r15);
    // 0x80084DC0: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80084DC4: jal         0x8007E328
    // 0x80084DC8: nop

    func_8007E328(rdram, ctx);
        goto after_7;
    // 0x80084DC8: nop

    after_7:
    // 0x80084DCC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80084DD0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80084DD4: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80084DD8: lw          $t1, 0x438($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X438);
    // 0x80084DDC: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80084DE0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80084DE4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80084DE8: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
L_80084DEC:
    // 0x80084DEC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80084DF0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80084DF4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80084DF8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80084DFC: lbu         $t7, 0x41D($t4)
    ctx->r15 = MEM_BU(ctx->r12, 0X41D);
    // 0x80084E00: nop

    // 0x80084E04: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80084E08: bne         $at, $zero, L_80084D34
    if (ctx->r1 != 0) {
        // 0x80084E0C: nop
    
            goto L_80084D34;
    }
    // 0x80084E0C: nop

L_80084E10:
    // 0x80084E10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80084E14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80084E18: jr          $ra
    // 0x80084E1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80084E1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80084E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084E20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80084E24: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80084E28: lbu         $t6, -0x118($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X118);
    // 0x80084E2C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80084E30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80084E34: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80084E38: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80084E3C: beq         $t6, $at, L_80084F70
    if (ctx->r14 == ctx->r1) {
        // 0x80084E40: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_80084F70;
    }
    // 0x80084E40: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80084E44: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80084E48: jal         0x8008780C
    // 0x80084E4C: nop

    func_8008780C(rdram, ctx);
        goto after_0;
    // 0x80084E4C: nop

    after_0:
    // 0x80084E50: lbu         $t7, 0x2B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2B);
    // 0x80084E54: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80084E58: beq         $t7, $at, L_80084E74
    if (ctx->r15 == ctx->r1) {
        // 0x80084E5C: nop
    
            goto L_80084E74;
    }
    // 0x80084E5C: nop

    // 0x80084E60: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80084E64: lw          $t9, -0x310($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X310);
    // 0x80084E68: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80084E6C: nop

    // 0x80084E70: sw          $t8, 0x18EC($t9)
    MEM_W(0X18EC, ctx->r25) = ctx->r24;
L_80084E74:
    // 0x80084E74: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80084E78: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80084E7C: nop

    // 0x80084E80: sh          $t0, 0x1580($t1)
    MEM_H(0X1580, ctx->r9) = ctx->r8;
    // 0x80084E84: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80084E88: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80084E8C: jal         0x8004A34C
    // 0x80084E90: sh          $t2, 0x1582($t3)
    MEM_H(0X1582, ctx->r11) = ctx->r10;
    func_8004A34C(rdram, ctx);
        goto after_1;
    // 0x80084E90: sh          $t2, 0x1582($t3)
    MEM_H(0X1582, ctx->r11) = ctx->r10;
    after_1:
    // 0x80084E94: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80084E98: jal         0x8004A34C
    // 0x80084E9C: sb          $zero, 0x1598($t4)
    MEM_B(0X1598, ctx->r12) = 0;
    func_8004A34C(rdram, ctx);
        goto after_2;
    // 0x80084E9C: sb          $zero, 0x1598($t4)
    MEM_B(0X1598, ctx->r12) = 0;
    after_2:
    // 0x80084EA0: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80084EA4: lhu         $t5, 0x20B0($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X20B0);
    // 0x80084EA8: lui         $t7, 0x8039
    ctx->r15 = S32(0X8039 << 16);
    // 0x80084EAC: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80084EB0: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80084EB4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80084EB8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80084EBC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80084EC0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80084EC4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80084EC8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80084ECC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80084ED0: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80084ED4: sll         $t6, $t6, 7
    ctx->r14 = S32(ctx->r14 << 7);
    // 0x80084ED8: addiu       $t7, $t7, -0x5300
    ctx->r15 = ADD32(ctx->r15, -0X5300);
    // 0x80084EDC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80084EE0: lui         $a0, 0x5C
    ctx->r4 = S32(0X5C << 16);
    // 0x80084EE4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80084EE8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80084EEC: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    // 0x80084EF0: jal         0x800746C0
    // 0x80084EF4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_800746C0(rdram, ctx);
        goto after_3;
    // 0x80084EF4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_3:
    // 0x80084EF8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80084EFC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80084F00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80084F04: jal         0x80086138
    // 0x80084F08: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80086138(rdram, ctx);
        goto after_4;
    // 0x80084F08: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_4:
    // 0x80084F0C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80084F10: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80084F14: sw          $v0, 0x6788($at)
    MEM_W(0X6788, ctx->r1) = ctx->r2;
    // 0x80084F18: sh          $zero, 0x157E($t9)
    MEM_H(0X157E, ctx->r25) = 0;
    // 0x80084F1C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80084F20: nop

    // 0x80084F24: sb          $zero, 0x1584($t0)
    MEM_B(0X1584, ctx->r8) = 0;
    // 0x80084F28: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80084F2C: nop

    // 0x80084F30: lbu         $t2, 0x1584($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X1584);
    // 0x80084F34: nop

    // 0x80084F38: bne         $t2, $zero, L_80084F64
    if (ctx->r10 != 0) {
        // 0x80084F3C: nop
    
            goto L_80084F64;
    }
    // 0x80084F3C: nop

L_80084F40:
    // 0x80084F40: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80084F44: jal         0x80085408
    // 0x80084F48: nop

    func_80085408(rdram, ctx);
        goto after_5;
    // 0x80084F48: nop

    after_5:
    // 0x80084F4C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80084F50: nop

    // 0x80084F54: lbu         $t4, 0x1584($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1584);
    // 0x80084F58: nop

    // 0x80084F5C: beq         $t4, $zero, L_80084F40
    if (ctx->r12 == 0) {
        // 0x80084F60: nop
    
            goto L_80084F40;
    }
    // 0x80084F60: nop

L_80084F64:
    // 0x80084F64: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80084F68: jal         0x8008777C
    // 0x80084F6C: nop

    func_8008777C(rdram, ctx);
        goto after_6;
    // 0x80084F6C: nop

    after_6:
L_80084F70:
    // 0x80084F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80084F74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80084F78: jr          $ra
    // 0x80084F7C: nop

    return;
    // 0x80084F7C: nop

;}
RECOMP_FUNC void func_80084F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084F80: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80084F84: lw          $t6, -0x752C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X752C);
    // 0x80084F88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80084F8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80084F90: beq         $t6, $zero, L_80085018
    if (ctx->r14 == 0) {
        // 0x80084F94: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80085018;
    }
    // 0x80084F94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80084F98: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x80084F9C: nop

    // 0x80084FA0: beq         $t7, $zero, L_80085018
    if (ctx->r15 == 0) {
        // 0x80084FA4: nop
    
            goto L_80085018;
    }
    // 0x80084FA4: nop

    // 0x80084FA8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80084FAC: jal         0x80089D5C
    // 0x80084FB0: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    func_80089D5C(rdram, ctx);
        goto after_0;
    // 0x80084FB0: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    after_0:
    // 0x80084FB4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80084FB8: jal         0x80088C14
    // 0x80084FBC: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    func_80088C14(rdram, ctx);
        goto after_1;
    // 0x80084FBC: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    after_1:
    // 0x80084FC0: jal         0x8007E4A4
    // 0x80084FC4: nop

    func_8007E4A4(rdram, ctx);
        goto after_2;
    // 0x80084FC4: nop

    after_2:
    // 0x80084FC8: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80084FCC: lw          $t8, -0x752C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X752C);
    // 0x80084FD0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80084FD4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80084FD8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80084FDC: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    // 0x80084FE0: addiu       $a1, $a1, -0xC44
    ctx->r5 = ADD32(ctx->r5, -0XC44);
    // 0x80084FE4: addiu       $a0, $a0, -0xC74
    ctx->r4 = ADD32(ctx->r4, -0XC74);
    // 0x80084FE8: jal         0x800B3BFC
    // 0x80084FEC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_3;
    // 0x80084FEC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_3:
    // 0x80084FF0: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80084FF4: lw          $t9, -0x752C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X752C);
    // 0x80084FF8: nop

    // 0x80084FFC: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    // 0x80085000: jal         0x8007E328
    // 0x80085004: nop

    func_8007E328(rdram, ctx);
        goto after_4;
    // 0x80085004: nop

    after_4:
    // 0x80085008: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8008500C: lw          $t0, -0x752C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X752C);
    // 0x80085010: nop

    // 0x80085014: sw          $zero, 0x8($t0)
    MEM_W(0X8, ctx->r8) = 0;
L_80085018:
    // 0x80085018: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008501C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80085020: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80085024: sw          $zero, -0x752C($at)
    MEM_W(-0X752C, ctx->r1) = 0;
    // 0x80085028: jr          $ra
    // 0x8008502C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8008502C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80085030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085030: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80085034: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80085038: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8008503C: lw          $t6, -0x752C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X752C);
    // 0x80085040: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80085044: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80085048: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8008504C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80085050: bne         $t6, $t7, L_8008506C
    if (ctx->r14 != ctx->r15) {
        // 0x80085054: sw          $s0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r16;
            goto L_8008506C;
    }
    // 0x80085054: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80085058: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008505C: jal         0x800B3BFC
    // 0x80085060: addiu       $a0, $a0, -0xC30
    ctx->r4 = ADD32(ctx->r4, -0XC30);
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x80085060: addiu       $a0, $a0, -0xC30
    ctx->r4 = ADD32(ctx->r4, -0XC30);
    after_0:
    // 0x80085064: b           L_800853F0
    // 0x80085068: nop

        goto L_800853F0;
    // 0x80085068: nop

L_8008506C:
    // 0x8008506C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80085070: jal         0x80089D5C
    // 0x80085074: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    func_80089D5C(rdram, ctx);
        goto after_1;
    // 0x80085074: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    after_1:
    // 0x80085078: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8008507C: jal         0x80088C14
    // 0x80085080: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    func_80088C14(rdram, ctx);
        goto after_2;
    // 0x80085080: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    after_2:
    // 0x80085084: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80085088: lw          $t8, -0x752C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X752C);
    // 0x8008508C: nop

    // 0x80085090: beq         $t8, $zero, L_80085100
    if (ctx->r24 == 0) {
        // 0x80085094: nop
    
            goto L_80085100;
    }
    // 0x80085094: nop

    // 0x80085098: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x8008509C: nop

    // 0x800850A0: beq         $t9, $zero, L_80085100
    if (ctx->r25 == 0) {
        // 0x800850A4: nop
    
            goto L_80085100;
    }
    // 0x800850A4: nop

    // 0x800850A8: jal         0x8007E4A4
    // 0x800850AC: nop

    func_8007E4A4(rdram, ctx);
        goto after_3;
    // 0x800850AC: nop

    after_3:
    // 0x800850B0: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800850B4: lw          $t0, -0x752C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X752C);
    // 0x800850B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800850BC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800850C0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800850C4: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x800850C8: addiu       $a1, $a1, -0xBE8
    ctx->r5 = ADD32(ctx->r5, -0XBE8);
    // 0x800850CC: addiu       $a0, $a0, -0xC18
    ctx->r4 = ADD32(ctx->r4, -0XC18);
    // 0x800850D0: jal         0x800B3BFC
    // 0x800850D4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_4;
    // 0x800850D4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_4:
    // 0x800850D8: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800850DC: lw          $t1, -0x752C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X752C);
    // 0x800850E0: nop

    // 0x800850E4: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    // 0x800850E8: jal         0x8007E328
    // 0x800850EC: nop

    func_8007E328(rdram, ctx);
        goto after_5;
    // 0x800850EC: nop

    after_5:
    // 0x800850F0: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x800850F4: lw          $t2, -0x752C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X752C);
    // 0x800850F8: nop

    // 0x800850FC: sw          $zero, 0x8($t2)
    MEM_W(0X8, ctx->r10) = 0;
L_80085100:
    // 0x80085100: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80085104: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80085108: sw          $zero, -0x752C($at)
    MEM_W(-0X752C, ctx->r1) = 0;
    // 0x8008510C: lhu         $t4, 0xC($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0XC);
    // 0x80085110: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80085114: sh          $t4, 0x3B50($at)
    MEM_H(0X3B50, ctx->r1) = ctx->r12;
    // 0x80085118: lhu         $t5, 0x6($t3)
    ctx->r13 = MEM_HU(ctx->r11, 0X6);
    // 0x8008511C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80085120: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x80085124: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80085128: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8008512C: jal         0x80088C84
    // 0x80085130: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    func_80088C84(rdram, ctx);
        goto after_6;
    // 0x80085130: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    after_6:
    // 0x80085134: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80085138: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8008513C: lhu         $a3, 0x1FF0($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0X1FF0);
    // 0x80085140: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80085144: lw          $a1, 0x10($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X10);
    // 0x80085148: addiu       $a0, $a0, -0xBD8
    ctx->r4 = ADD32(ctx->r4, -0XBD8);
    // 0x8008514C: jal         0x800B3BFC
    // 0x80085150: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_7;
    // 0x80085150: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_7:
    // 0x80085154: jal         0x8007E4F4
    // 0x80085158: nop

    func_8007E4F4(rdram, ctx);
        goto after_8;
    // 0x80085158: nop

    after_8:
    // 0x8008515C: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80085160: nop

    // 0x80085164: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x80085168: nop

    // 0x8008516C: sltu        $at, $v0, $t8
    ctx->r1 = ctx->r2 < ctx->r24 ? 1 : 0;
    // 0x80085170: beq         $at, $zero, L_800851A0
    if (ctx->r1 == 0) {
        // 0x80085174: nop
    
            goto L_800851A0;
    }
    // 0x80085174: nop

    // 0x80085178: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008517C: jal         0x800B3BFC
    // 0x80085180: addiu       $a0, $a0, -0xBB0
    ctx->r4 = ADD32(ctx->r4, -0XBB0);
    osSyncPrintf(rdram, ctx);
        goto after_9;
    // 0x80085180: addiu       $a0, $a0, -0xBB0
    ctx->r4 = ADD32(ctx->r4, -0XBB0);
    after_9:
    // 0x80085184: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80085188: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8008518C: addiu       $a1, $a1, -0xB78
    ctx->r5 = ADD32(ctx->r5, -0XB78);
    // 0x80085190: jal         0x80083560
    // 0x80085194: addiu       $a0, $a0, -0xB90
    ctx->r4 = ADD32(ctx->r4, -0XB90);
    Fault_Assert(rdram, ctx);
        goto after_10;
    // 0x80085194: addiu       $a0, $a0, -0xB90
    ctx->r4 = ADD32(ctx->r4, -0XB90);
    after_10:
    // 0x80085198: b           L_800853F0
    // 0x8008519C: nop

        goto L_800853F0;
    // 0x8008519C: nop

L_800851A0:
    // 0x800851A0: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x800851A4: nop

    // 0x800851A8: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    // 0x800851AC: jal         0x8007E03C
    // 0x800851B0: nop

    func_8007E03C(rdram, ctx);
        goto after_11;
    // 0x800851B0: nop

    after_11:
    // 0x800851B4: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x800851B8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800851BC: sw          $v0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r2;
    // 0x800851C0: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x800851C4: addiu       $a0, $a0, -0xB70
    ctx->r4 = ADD32(ctx->r4, -0XB70);
    // 0x800851C8: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x800851CC: jal         0x800B3BFC
    // 0x800851D0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_12;
    // 0x800851D0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_12:
    // 0x800851D4: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x800851D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800851DC: lw          $t4, 0x8($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X8);
    // 0x800851E0: jal         0x8007E4A4
    // 0x800851E4: sw          $t4, 0x6788($at)
    MEM_W(0X6788, ctx->r1) = ctx->r12;
    func_8007E4A4(rdram, ctx);
        goto after_13;
    // 0x800851E4: sw          $t4, 0x6788($at)
    MEM_W(0X6788, ctx->r1) = ctx->r12;
    after_13:
    // 0x800851E8: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x800851EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800851F0: lw          $t5, 0x10($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X10);
    // 0x800851F4: lw          $t6, 0x8($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X8);
    // 0x800851F8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800851FC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80085200: addiu       $a1, $a1, -0xB18
    ctx->r5 = ADD32(ctx->r5, -0XB18);
    // 0x80085204: addiu       $a0, $a0, -0xB54
    ctx->r4 = ADD32(ctx->r4, -0XB54);
    // 0x80085208: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8008520C: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x80085210: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x80085214: jal         0x800B3BFC
    // 0x80085218: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    osSyncPrintf(rdram, ctx);
        goto after_14;
    // 0x80085218: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_14:
    // 0x8008521C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80085220: lw          $t7, 0x6788($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6788);
    // 0x80085224: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80085228: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008522C: sw          $t7, 0x3900($at)
    MEM_W(0X3900, ctx->r1) = ctx->r15;
    // 0x80085230: lhu         $t9, 0x4($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X4);
    // 0x80085234: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80085238: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008523C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80085240: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80085244: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x80085248: sw          $t1, 0x6788($at)
    MEM_W(0X6788, ctx->r1) = ctx->r9;
    // 0x8008524C: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x80085250: lhu         $t2, 0x4($t8)
    ctx->r10 = MEM_HU(ctx->r24, 0X4);
    // 0x80085254: nop

    // 0x80085258: blez        $t2, L_80085370
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8008525C: nop
    
            goto L_80085370;
    }
    // 0x8008525C: nop

L_80085260:
    // 0x80085260: lui         $a0, 0x5C
    ctx->r4 = S32(0X5C << 16);
    // 0x80085264: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80085268: jal         0x80074888
    // 0x8008526C: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    func_80074888(rdram, ctx);
        goto after_15;
    // 0x8008526C: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    after_15:
    // 0x80085270: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80085274: jal         0x8007E03C
    // 0x80085278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_16;
    // 0x80085278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x8008527C: lui         $a0, 0x5C
    ctx->r4 = S32(0X5C << 16);
    // 0x80085280: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80085284: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80085288: jal         0x80074888
    // 0x8008528C: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    func_80074888(rdram, ctx);
        goto after_17;
    // 0x8008528C: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    after_17:
    // 0x80085290: lui         $a0, 0x5C
    ctx->r4 = S32(0X5C << 16);
    // 0x80085294: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80085298: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    // 0x8008529C: jal         0x80074888
    // 0x800852A0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_80074888(rdram, ctx);
        goto after_18;
    // 0x800852A0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_18:
    // 0x800852A4: jal         0x8007E4A4
    // 0x800852A8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_8007E4A4(rdram, ctx);
        goto after_19;
    // 0x800852A8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_19:
    // 0x800852AC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800852B0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800852B4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800852B8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800852BC: addiu       $a1, $a1, -0xACC
    ctx->r5 = ADD32(ctx->r5, -0XACC);
    // 0x800852C0: addiu       $a0, $a0, -0xB08
    ctx->r4 = ADD32(ctx->r4, -0XB08);
    // 0x800852C4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800852C8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800852CC: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x800852D0: jal         0x800B3BFC
    // 0x800852D4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    osSyncPrintf(rdram, ctx);
        goto after_20;
    // 0x800852D4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_20:
    // 0x800852D8: lui         $a0, 0x5C
    ctx->r4 = S32(0X5C << 16);
    // 0x800852DC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x800852E0: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x800852E4: jal         0x800746C0
    // 0x800852E8: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    func_800746C0(rdram, ctx);
        goto after_21;
    // 0x800852E8: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    after_21:
    // 0x800852EC: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x800852F0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800852F4: lw          $a2, 0x6788($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6788);
    // 0x800852F8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800852FC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80085300: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x80085304: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x80085308: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8008530C: jal         0x80089030
    // 0x80085310: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_80089030(rdram, ctx);
        goto after_22;
    // 0x80085310: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_22:
    // 0x80085314: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80085318: jal         0x8007E4A4
    // 0x8008531C: sw          $v0, 0x6788($at)
    MEM_W(0X6788, ctx->r1) = ctx->r2;
    func_8007E4A4(rdram, ctx);
        goto after_23;
    // 0x8008531C: sw          $v0, 0x6788($at)
    MEM_W(0X6788, ctx->r1) = ctx->r2;
    after_23:
    // 0x80085320: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80085324: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80085328: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8008532C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80085330: addiu       $a1, $a1, -0xA94
    ctx->r5 = ADD32(ctx->r5, -0XA94);
    // 0x80085334: addiu       $a0, $a0, -0xAC4
    ctx->r4 = ADD32(ctx->r4, -0XAC4);
    // 0x80085338: jal         0x800B3BFC
    // 0x8008533C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_24;
    // 0x8008533C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_24:
    // 0x80085340: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80085344: jal         0x8007E328
    // 0x80085348: nop

    func_8007E328(rdram, ctx);
        goto after_25;
    // 0x80085348: nop

    after_25:
    // 0x8008534C: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80085350: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80085354: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x80085358: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x8008535C: lhu         $t0, 0x4($t7)
    ctx->r8 = MEM_HU(ctx->r15, 0X4);
    // 0x80085360: nop

    // 0x80085364: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80085368: bne         $at, $zero, L_80085260
    if (ctx->r1 != 0) {
        // 0x8008536C: nop
    
            goto L_80085260;
    }
    // 0x8008536C: nop

L_80085370:
    // 0x80085370: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80085374: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80085378: lw          $t1, 0x6788($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6788);
    // 0x8008537C: lw          $t2, 0x8($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X8);
    // 0x80085380: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80085384: addiu       $a0, $a0, -0xA8C
    ctx->r4 = ADD32(ctx->r4, -0XA8C);
    // 0x80085388: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8008538C: jal         0x800B3BFC
    // 0x80085390: subu        $a2, $t1, $t2
    ctx->r6 = SUB32(ctx->r9, ctx->r10);
    osSyncPrintf(rdram, ctx);
        goto after_26;
    // 0x80085390: subu        $a2, $t1, $t2
    ctx->r6 = SUB32(ctx->r9, ctx->r10);
    after_26:
    // 0x80085394: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80085398: lw          $t4, 0x6788($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6788);
    // 0x8008539C: lui         $at, 0x8038
    ctx->r1 = S32(0X8038 << 16);
    // 0x800853A0: ori         $at, $at, 0xAD01
    ctx->r1 = ctx->r1 | 0XAD01;
    // 0x800853A4: sltu        $at, $t4, $at
    ctx->r1 = ctx->r12 < ctx->r1 ? 1 : 0;
    // 0x800853A8: bne         $at, $zero, L_800853C4
    if (ctx->r1 != 0) {
        // 0x800853AC: nop
    
            goto L_800853C4;
    }
    // 0x800853AC: nop

    // 0x800853B0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800853B4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800853B8: addiu       $a1, $a1, -0xA4C
    ctx->r5 = ADD32(ctx->r5, -0XA4C);
    // 0x800853BC: jal         0x80083560
    // 0x800853C0: addiu       $a0, $a0, -0xA64
    ctx->r4 = ADD32(ctx->r4, -0XA64);
    Fault_Assert(rdram, ctx);
        goto after_27;
    // 0x800853C0: addiu       $a0, $a0, -0xA64
    ctx->r4 = ADD32(ctx->r4, -0XA64);
    after_27:
L_800853C4:
    // 0x800853C4: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x800853C8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800853CC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800853D0: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x800853D4: jal         0x80088BA4
    // 0x800853D8: sw          $t5, -0x752C($at)
    MEM_W(-0X752C, ctx->r1) = ctx->r13;
    func_80088BA4(rdram, ctx);
        goto after_28;
    // 0x800853D8: sw          $t5, -0x752C($at)
    MEM_W(-0X752C, ctx->r1) = ctx->r13;
    after_28:
    // 0x800853DC: jal         0x800B6650
    // 0x800853E0: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_29;
    // 0x800853E0: nop

    after_29:
    // 0x800853E4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800853E8: jal         0x800B3BFC
    // 0x800853EC: addiu       $a0, $a0, -0xA40
    ctx->r4 = ADD32(ctx->r4, -0XA40);
    osSyncPrintf(rdram, ctx);
        goto after_30;
    // 0x800853EC: addiu       $a0, $a0, -0xA40
    ctx->r4 = ADD32(ctx->r4, -0XA40);
    after_30:
L_800853F0:
    // 0x800853F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800853F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800853F8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800853FC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80085400: jr          $ra
    // 0x80085404: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80085404: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80085408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085408: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008540C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80085410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80085414: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80085418: jal         0x800864B4
    // 0x8008541C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_800864B4(rdram, ctx);
        goto after_0;
    // 0x8008541C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80085420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80085424: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80085428: jr          $ra
    // 0x8008542C: nop

    return;
    // 0x8008542C: nop

;}
RECOMP_FUNC void func_80085430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085430: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80085434: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80085438: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008543C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80085440: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80085444: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80085448: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
    // 0x8008544C: jal         0x8005EE84
    // 0x80085450: addiu       $a0, $a0, -0x4460
    ctx->r4 = ADD32(ctx->r4, -0X4460);
    func_8005EE84(rdram, ctx);
        goto after_0;
    // 0x80085450: addiu       $a0, $a0, -0x4460
    ctx->r4 = ADD32(ctx->r4, -0X4460);
    after_0:
    // 0x80085454: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80085458: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008545C: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80085460: sw          $v0, 0x67A0($at)
    MEM_W(0X67A0, ctx->r1) = ctx->r2;
    // 0x80085464: addiu       $t6, $t6, 0x5CF4
    ctx->r14 = ADD32(ctx->r14, 0X5CF4);
    // 0x80085468: sw          $t6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r14;
    // 0x8008546C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80085470: nop

    // 0x80085474: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80085478: jal         0x800B8590
    // 0x8008547C: nop

    osAiSetFrequency_recomp(rdram, ctx);
        goto after_1;
    // 0x8008547C: nop

    after_1:
    // 0x80085480: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80085484: nop

    // 0x80085488: sw          $v0, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->r2;
    // 0x8008548C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80085490: nop

    // 0x80085494: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x80085498: nop

    // 0x8008549C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800854A0: bgez        $t1, L_800854B8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x800854A4: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800854B8;
    }
    // 0x800854A4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800854A8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800854AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800854B0: nop

    // 0x800854B4: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_800854B8:
    // 0x800854B8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800854BC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800854C0: lw          $t3, 0x18($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X18);
    // 0x800854C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800854C8: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x800854CC: nop

    // 0x800854D0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800854D4: mul.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x800854D8: nop

    // 0x800854DC: div.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800854E0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800854E4: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x800854E8: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800854EC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800854F0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800854F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800854F8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800854FC: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x80085500: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80085504: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x80085508: sw          $t5, -0x75A8($at)
    MEM_W(-0X75A8, ctx->r1) = ctx->r13;
    // 0x8008550C: bgez        $t5, L_80085524
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80085510: cvt.s.w     $f16, $f6
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80085524;
    }
    // 0x80085510: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80085514: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80085518: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8008551C: nop

    // 0x80085520: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_80085524:
    // 0x80085524: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x80085528: nop

    // 0x8008552C: bc1f        L_80085540
    if (!c1cs) {
        // 0x80085530: nop
    
            goto L_80085540;
    }
    // 0x80085530: nop

    // 0x80085534: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80085538: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008553C: sw          $t6, -0x75A8($at)
    MEM_W(-0X75A8, ctx->r1) = ctx->r14;
L_80085540:
    // 0x80085540: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80085544: lw          $t7, -0x75A8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X75A8);
    // 0x80085548: nop

    // 0x8008554C: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x80085550: beq         $t8, $zero, L_80085568
    if (ctx->r24 == 0) {
        // 0x80085554: addiu       $at, $zero, -0x10
        ctx->r1 = ADD32(0, -0X10);
            goto L_80085568;
    }
    // 0x80085554: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80085558: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x8008555C: addiu       $t0, $t9, 0x10
    ctx->r8 = ADD32(ctx->r25, 0X10);
    // 0x80085560: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80085564: sw          $t0, -0x75A8($at)
    MEM_W(-0X75A8, ctx->r1) = ctx->r8;
L_80085568:
    // 0x80085568: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8008556C: lw          $t1, -0x75A8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X75A8);
    // 0x80085570: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80085574: addiu       $t2, $t1, -0x10
    ctx->r10 = ADD32(ctx->r9, -0X10);
    // 0x80085578: sw          $t2, -0x75AC($at)
    MEM_W(-0X75AC, ctx->r1) = ctx->r10;
    // 0x8008557C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80085580: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80085584: addiu       $a0, $a0, 0x67A8
    ctx->r4 = ADD32(ctx->r4, 0X67A8);
    // 0x80085588: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8008558C: addiu       $t3, $t1, 0x60
    ctx->r11 = ADD32(ctx->r9, 0X60);
    // 0x80085590: sw          $t3, -0x75A4($at)
    MEM_W(-0X75A4, ctx->r1) = ctx->r11;
    // 0x80085594: jal         0x800B876C
    // 0x80085598: addiu       $a0, $a0, 0x238
    ctx->r4 = ADD32(ctx->r4, 0X238);
    alInit(rdram, ctx);
        goto after_2;
    // 0x80085598: addiu       $a0, $a0, 0x238
    ctx->r4 = ADD32(ctx->r4, 0X238);
    after_2:
    // 0x8008559C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_800855A0:
    // 0x800855A0: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800855A4: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800855A8: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x800855AC: lw          $a2, 0x14($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X14);
    // 0x800855B0: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x800855B4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800855B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800855BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800855C0: jal         0x800B8530
    // 0x800855C4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x800855C4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x800855C8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800855CC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800855D0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800855D4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800855D8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800855DC: sw          $v0, 0x67A8($at)
    MEM_W(0X67A8, ctx->r1) = ctx->r2;
    // 0x800855E0: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x800855E4: sltiu       $at, $t2, 0x2
    ctx->r1 = ctx->r10 < 0X2 ? 1 : 0;
    // 0x800855E8: bne         $at, $zero, L_800855A0
    if (ctx->r1 != 0) {
        // 0x800855EC: sw          $t2, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r10;
            goto L_800855A0;
    }
    // 0x800855EC: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x800855F0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800855F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800855F8: lw          $t3, 0x8($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X8);
    // 0x800855FC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80085600: sw          $t3, -0x75A0($at)
    MEM_W(-0X75A0, ctx->r1) = ctx->r11;
L_80085604:
    // 0x80085604: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80085608: addiu       $t5, $zero, 0x90
    ctx->r13 = ADD32(0, 0X90);
    // 0x8008560C: lw          $a2, 0x14($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X14);
    // 0x80085610: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80085614: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80085618: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008561C: jal         0x800B8530
    // 0x80085620: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_4;
    // 0x80085620: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x80085624: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80085628: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8008562C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80085630: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80085634: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80085638: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8008563C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80085640: sw          $v0, 0x67B0($at)
    MEM_W(0X67B0, ctx->r1) = ctx->r2;
    // 0x80085644: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80085648: lw          $t2, 0x67B0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X67B0);
    // 0x8008564C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80085650: sh          $t7, 0x70($t2)
    MEM_H(0X70, ctx->r10) = ctx->r15;
    // 0x80085654: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80085658: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8008565C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80085660: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80085664: lw          $t4, 0x67B0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X67B0);
    // 0x80085668: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8008566C: sw          $t4, 0x74($t4)
    MEM_W(0X74, ctx->r12) = ctx->r12;
    // 0x80085670: lw          $t6, -0x75A4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X75A4);
    // 0x80085674: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80085678: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8008567C: lw          $a2, 0x14($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X14);
    // 0x80085680: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80085684: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80085688: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008568C: jal         0x800B8530
    // 0x80085690: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_5;
    // 0x80085690: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x80085694: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80085698: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8008569C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800856A0: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x800856A4: lw          $t7, 0x67B0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X67B0);
    // 0x800856A8: nop

    // 0x800856AC: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x800856B0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800856B4: nop

    // 0x800856B8: addiu       $t1, $t2, 0x1
    ctx->r9 = ADD32(ctx->r10, 0X1);
    // 0x800856BC: sltiu       $at, $t1, 0x3
    ctx->r1 = ctx->r9 < 0X3 ? 1 : 0;
    // 0x800856C0: bne         $at, $zero, L_80085604
    if (ctx->r1 != 0) {
        // 0x800856C4: sw          $t1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r9;
            goto L_80085604;
    }
    // 0x800856C4: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x800856C8: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800856CC: ori         $t4, $zero, 0xFFFF
    ctx->r12 = 0 | 0XFFFF;
    // 0x800856D0: lw          $a2, 0x14($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X14);
    // 0x800856D4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800856D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800856DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800856E0: jal         0x800B8530
    // 0x800856E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_6;
    // 0x800856E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x800856E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800856EC: sw          $v0, -0x7564($at)
    MEM_W(-0X7564, ctx->r1) = ctx->r2;
    // 0x800856F0: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x800856F4: lw          $t5, -0x7564($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X7564);
    // 0x800856F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800856FC: sw          $t5, -0x7560($at)
    MEM_W(-0X7560, ctx->r1) = ctx->r13;
    // 0x80085700: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80085704: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x80085708: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008570C: addiu       $a0, $a0, -0xA30
    ctx->r4 = ADD32(ctx->r4, -0XA30);
    // 0x80085710: jal         0x800B3BFC
    // 0x80085714: addu        $a1, $t5, $at
    ctx->r5 = ADD32(ctx->r13, ctx->r1);
    osSyncPrintf(rdram, ctx);
        goto after_7;
    // 0x80085714: addu        $a1, $t5, $at
    ctx->r5 = ADD32(ctx->r13, ctx->r1);
    after_7:
    // 0x80085718: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8008571C: addiu       $t6, $t6, 0x67A8
    ctx->r14 = ADD32(ctx->r14, 0X67A8);
    // 0x80085720: addiu       $a0, $t6, 0x200
    ctx->r4 = ADD32(ctx->r14, 0X200);
    // 0x80085724: addiu       $a1, $t6, 0x218
    ctx->r5 = ADD32(ctx->r14, 0X218);
    // 0x80085728: jal         0x800B3080
    // 0x8008572C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_8;
    // 0x8008572C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80085730: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80085734: addiu       $t8, $t8, 0x67A8
    ctx->r24 = ADD32(ctx->r24, 0X67A8);
    // 0x80085738: addiu       $a0, $t8, 0x1C8
    ctx->r4 = ADD32(ctx->r24, 0X1C8);
    // 0x8008573C: addiu       $a1, $t8, 0x1E0
    ctx->r5 = ADD32(ctx->r24, 0X1E0);
    // 0x80085740: jal         0x800B3080
    // 0x80085744: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_9;
    // 0x80085744: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80085748: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8008574C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80085750: addiu       $a1, $a1, -0x7568
    ctx->r5 = ADD32(ctx->r5, -0X7568);
    // 0x80085754: addiu       $a0, $a0, -0x7580
    ctx->r4 = ADD32(ctx->r4, -0X7580);
    // 0x80085758: jal         0x800B3080
    // 0x8008575C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_10;
    // 0x8008575C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x80085760: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80085764: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80085768: addiu       $t9, $t9, 0x6A30
    ctx->r25 = ADD32(ctx->r25, 0X6A30);
    // 0x8008576C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80085770: addiu       $a0, $a0, 0x67A8
    ctx->r4 = ADD32(ctx->r4, 0X67A8);
    // 0x80085774: addiu       $t0, $t9, 0x2000
    ctx->r8 = ADD32(ctx->r25, 0X2000);
    // 0x80085778: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x8008577C: addiu       $a2, $a2, 0x57B8
    ctx->r6 = ADD32(ctx->r6, 0X57B8);
    // 0x80085780: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80085784: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x80085788: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8008578C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80085790: jal         0x800B6010
    // 0x80085794: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    osCreateThread_recomp(rdram, ctx);
        goto after_11;
    // 0x80085794: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_11:
    // 0x80085798: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8008579C: addiu       $a0, $a0, 0x67A8
    ctx->r4 = ADD32(ctx->r4, 0X67A8);
    // 0x800857A0: jal         0x800B6160
    // 0x800857A4: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    osStartThread_recomp(rdram, ctx);
        goto after_12;
    // 0x800857A4: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_12:
    // 0x800857A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800857AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800857B0: jr          $ra
    // 0x800857B4: nop

    return;
    // 0x800857B4: nop

;}
RECOMP_FUNC void func_800857B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800857B8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800857BC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800857C0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800857C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800857C8: addiu       $a2, $a2, 0x67A8
    ctx->r6 = ADD32(ctx->r6, 0X67A8);
    // 0x800857CC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800857D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800857D4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x800857D8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x800857DC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x800857E0: addiu       $a0, $a0, -0x4460
    ctx->r4 = ADD32(ctx->r4, -0X4460);
    // 0x800857E4: addiu       $a2, $a2, 0x1C8
    ctx->r6 = ADD32(ctx->r6, 0X1C8);
    // 0x800857E8: jal         0x8005ED58
    // 0x800857EC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8005ED58(rdram, ctx);
        goto after_0;
    // 0x800857EC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x800857F0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800857F4: nop

    // 0x800857F8: bne         $t6, $zero, L_80085904
    if (ctx->r14 != 0) {
        // 0x800857FC: nop
    
            goto L_80085904;
    }
    // 0x800857FC: nop

L_80085800:
    // 0x80085800: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80085804: addiu       $a0, $a0, 0x67A8
    ctx->r4 = ADD32(ctx->r4, 0X67A8);
    // 0x80085808: addiu       $a0, $a0, 0x1C8
    ctx->r4 = ADD32(ctx->r4, 0X1C8);
    // 0x8008580C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80085810: jal         0x800B3C20
    // 0x80085814: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80085814: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80085818: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8008581C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80085820: lh          $s0, 0x0($t7)
    ctx->r16 = MEM_H(ctx->r15, 0X0);
    // 0x80085824: nop

    // 0x80085828: beq         $s0, $at, L_80085848
    if (ctx->r16 == ctx->r1) {
        // 0x8008582C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80085848;
    }
    // 0x8008582C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80085830: beq         $s0, $at, L_800858D0
    if (ctx->r16 == ctx->r1) {
        // 0x80085834: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_800858D0;
    }
    // 0x80085834: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80085838: beq         $s0, $at, L_800858EC
    if (ctx->r16 == ctx->r1) {
        // 0x8008583C: nop
    
            goto L_800858EC;
    }
    // 0x8008583C: nop

    // 0x80085840: b           L_800858F4
    // 0x80085844: nop

        goto L_800858F4;
    // 0x80085844: nop

L_80085848:
    // 0x80085848: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8008584C: lw          $t8, 0x3910($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3910);
    // 0x80085850: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80085854: divu        $zero, $t8, $at
    lo = S32(U32(ctx->r24) / U32(ctx->r1)); hi = S32(U32(ctx->r24) % U32(ctx->r1));
    // 0x80085858: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8008585C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80085860: lw          $a1, 0x391C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X391C);
    // 0x80085864: mfhi        $t9
    ctx->r25 = hi;
    // 0x80085868: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008586C: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80085870: lw          $a0, 0x67B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X67B0);
    // 0x80085874: jal         0x80085924
    // 0x80085878: nop

    func_80085924(rdram, ctx);
        goto after_2;
    // 0x80085878: nop

    after_2:
    // 0x8008587C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80085880: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80085884: nop

    // 0x80085888: beq         $t1, $zero, L_800858F4
    if (ctx->r9 == 0) {
        // 0x8008588C: nop
    
            goto L_800858F4;
    }
    // 0x8008588C: nop

    // 0x80085890: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80085894: addiu       $a0, $a0, 0x67A8
    ctx->r4 = ADD32(ctx->r4, 0X67A8);
    // 0x80085898: addiu       $a0, $a0, 0x200
    ctx->r4 = ADD32(ctx->r4, 0X200);
    // 0x8008589C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x800858A0: jal         0x800B3C20
    // 0x800858A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x800858A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x800858A8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800858AC: nop

    // 0x800858B0: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x800858B4: jal         0x80085B9C
    // 0x800858B8: nop

    func_80085B9C(rdram, ctx);
        goto after_4;
    // 0x800858B8: nop

    after_4:
    // 0x800858BC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800858C0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800858C4: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x800858C8: b           L_800858F4
    // 0x800858CC: sw          $t4, 0x391C($at)
    MEM_W(0X391C, ctx->r1) = ctx->r12;
        goto L_800858F4;
    // 0x800858CC: sw          $t4, 0x391C($at)
    MEM_W(0X391C, ctx->r1) = ctx->r12;
L_800858D0:
    // 0x800858D0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800858D4: jal         0x800B3BFC
    // 0x800858D8: addiu       $a0, $a0, -0xA1C
    ctx->r4 = ADD32(ctx->r4, -0XA1C);
    osSyncPrintf(rdram, ctx);
        goto after_5;
    // 0x800858D8: addiu       $a0, $a0, -0xA1C
    ctx->r4 = ADD32(ctx->r4, -0XA1C);
    after_5:
    // 0x800858DC: jal         0x80061198
    // 0x800858E0: nop

    func_80061198(rdram, ctx);
        goto after_6;
    // 0x800858E0: nop

    after_6:
    // 0x800858E4: b           L_800858F4
    // 0x800858E8: nop

        goto L_800858F4;
    // 0x800858E8: nop

L_800858EC:
    // 0x800858EC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800858F0: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
L_800858F4:
    // 0x800858F4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800858F8: nop

    // 0x800858FC: beq         $t6, $zero, L_80085800
    if (ctx->r14 == 0) {
        // 0x80085900: nop
    
            goto L_80085800;
    }
    // 0x80085900: nop

L_80085904:
    // 0x80085904: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80085908: addiu       $a0, $a0, 0x67A8
    ctx->r4 = ADD32(ctx->r4, 0X67A8);
    // 0x8008590C: jal         0x800B8734
    // 0x80085910: addiu       $a0, $a0, 0x238
    ctx->r4 = ADD32(ctx->r4, 0X238);
    alClose(rdram, ctx);
        goto after_7;
    // 0x80085910: addiu       $a0, $a0, 0x238
    ctx->r4 = ADD32(ctx->r4, 0X238);
    after_7:
    // 0x80085914: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80085918: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008591C: jr          $ra
    // 0x80085920: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80085920: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80085924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085924: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80085928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008592C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80085930: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80085934: jal         0x80085D04
    // 0x80085938: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_80085D04(rdram, ctx);
        goto after_0;
    // 0x80085938: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_0:
    // 0x8008593C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80085940: nop

    // 0x80085944: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x80085948: jal         0x800B87A0
    // 0x8008594C: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8008594C: nop

    after_1:
    // 0x80085950: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80085954: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80085958: beq         $t7, $zero, L_80085974
    if (ctx->r15 == 0) {
        // 0x8008595C: nop
    
            goto L_80085974;
    }
    // 0x8008595C: nop

    // 0x80085960: lh          $a1, 0x4($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X4);
    // 0x80085964: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80085968: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x8008596C: jal         0x800B8820
    // 0x80085970: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    osAiSetNextBuffer_recomp(rdram, ctx);
        goto after_2;
    // 0x80085970: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_2:
L_80085974:
    // 0x80085974: jal         0x800B88D0
    // 0x80085978: nop

    osAiGetLength_recomp(rdram, ctx);
        goto after_3;
    // 0x80085978: nop

    after_3:
    // 0x8008597C: srl         $t9, $v0, 2
    ctx->r25 = S32(U32(ctx->r2) >> 2);
    // 0x80085980: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80085984: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80085988: lw          $t0, -0x75A8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X75A8);
    // 0x8008598C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80085990: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80085994: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x80085998: addiu       $t3, $t2, 0x60
    ctx->r11 = ADD32(ctx->r10, 0X60);
    // 0x8008599C: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x800859A0: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x800859A4: sh          $t4, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r12;
    // 0x800859A8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800859AC: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800859B0: lw          $t8, -0x75AC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X75AC);
    // 0x800859B4: lh          $t7, 0x4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X4);
    // 0x800859B8: nop

    // 0x800859BC: sltu        $at, $t7, $t8
    ctx->r1 = ctx->r15 < ctx->r24 ? 1 : 0;
    // 0x800859C0: beq         $at, $zero, L_800859CC
    if (ctx->r1 == 0) {
        // 0x800859C4: nop
    
            goto L_800859CC;
    }
    // 0x800859C4: nop

    // 0x800859C8: sh          $t8, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r24;
L_800859CC:
    // 0x800859CC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800859D0: lw          $t9, 0x3918($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3918);
    // 0x800859D4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800859D8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800859DC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800859E0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x800859E4: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x800859E8: lw          $a0, 0x67A8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X67A8);
    // 0x800859EC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800859F0: lh          $a3, 0x4($t1)
    ctx->r7 = MEM_H(ctx->r9, 0X4);
    // 0x800859F4: jal         0x8008EAAC
    // 0x800859F8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8008EAAC(rdram, ctx);
        goto after_4;
    // 0x800859F8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x800859FC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80085A00: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80085A04: bne         $t2, $zero, L_80085A14
    if (ctx->r10 != 0) {
        // 0x80085A08: nop
    
            goto L_80085A14;
    }
    // 0x80085A08: nop

    // 0x80085A0C: b           L_80085B8C
    // 0x80085A10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80085B8C;
    // 0x80085A10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80085A14:
    // 0x80085A14: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80085A18: nop

    // 0x80085A1C: bne         $t3, $zero, L_80085A2C
    if (ctx->r11 != 0) {
        // 0x80085A20: nop
    
            goto L_80085A2C;
    }
    // 0x80085A20: nop

    // 0x80085A24: b           L_80085B8C
    // 0x80085A28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80085B8C;
    // 0x80085A28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80085A2C:
    // 0x80085A2C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80085A30: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80085A34: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x80085A38: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80085A3C: sw          $zero, 0x8($t4)
    MEM_W(0X8, ctx->r12) = 0;
    // 0x80085A40: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80085A44: addiu       $t7, $t7, 0x67A8
    ctx->r15 = ADD32(ctx->r15, 0X67A8);
    // 0x80085A48: addiu       $t8, $t7, 0x200
    ctx->r24 = ADD32(ctx->r15, 0X200);
    // 0x80085A4C: sw          $t8, 0x50($t6)
    MEM_W(0X50, ctx->r14) = ctx->r24;
    // 0x80085A50: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80085A54: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80085A58: addiu       $t0, $t9, 0x70
    ctx->r8 = ADD32(ctx->r25, 0X70);
    // 0x80085A5C: sw          $t0, 0x54($t1)
    MEM_W(0X54, ctx->r9) = ctx->r8;
    // 0x80085A60: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80085A64: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80085A68: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80085A6C: sw          $t2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r10;
    // 0x80085A70: lw          $t5, 0x3918($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3918);
    // 0x80085A74: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80085A78: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80085A7C: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80085A80: lw          $t7, 0x67A8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X67A8);
    // 0x80085A84: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80085A88: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80085A8C: sw          $t7, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->r15;
    // 0x80085A90: lw          $t9, 0x3918($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3918);
    // 0x80085A94: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80085A98: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80085A9C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80085AA0: lw          $t1, 0x67A8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X67A8);
    // 0x80085AA4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80085AA8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80085AAC: subu        $t2, $t6, $t1
    ctx->r10 = SUB32(ctx->r14, ctx->r9);
    // 0x80085AB0: sra         $t3, $t2, 3
    ctx->r11 = S32(SIGNED(ctx->r10) >> 3);
    // 0x80085AB4: sll         $t5, $t3, 3
    ctx->r13 = S32(ctx->r11 << 3);
    // 0x80085AB8: sw          $t5, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->r13;
    // 0x80085ABC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80085AC0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80085AC4: sw          $t7, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r15;
    // 0x80085AC8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80085ACC: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80085AD0: addiu       $t9, $t9, 0x3310
    ctx->r25 = ADD32(ctx->r25, 0X3310);
    // 0x80085AD4: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x80085AD8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x80085ADC: sw          $t9, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r25;
    // 0x80085AE0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80085AE4: addiu       $t6, $t6, 0x33E0
    ctx->r14 = ADD32(ctx->r14, 0X33E0);
    // 0x80085AE8: addiu       $t1, $t1, 0x3310
    ctx->r9 = ADD32(ctx->r9, 0X3310);
    // 0x80085AEC: subu        $t2, $t6, $t1
    ctx->r10 = SUB32(ctx->r14, ctx->r9);
    // 0x80085AF0: sw          $t2, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->r10;
    // 0x80085AF4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80085AF8: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x80085AFC: sw          $zero, 0x14($t5)
    MEM_W(0X14, ctx->r13) = 0;
    // 0x80085B00: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80085B04: addiu       $t4, $t4, 0x4770
    ctx->r12 = ADD32(ctx->r12, 0X4770);
    // 0x80085B08: sw          $t4, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->r12;
    // 0x80085B0C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80085B10: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80085B14: addiu       $t8, $t8, 0x1C50
    ctx->r24 = ADD32(ctx->r24, 0X1C50);
    // 0x80085B18: sw          $t8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->r24;
    // 0x80085B1C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80085B20: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
    // 0x80085B24: sw          $t0, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->r8;
    // 0x80085B28: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80085B2C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80085B30: sw          $zero, 0x30($t1)
    MEM_W(0X30, ctx->r9) = 0;
    // 0x80085B34: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80085B38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80085B3C: sw          $zero, 0x38($t2)
    MEM_W(0X38, ctx->r10) = 0;
    // 0x80085B40: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80085B44: nop

    // 0x80085B48: sw          $zero, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = 0;
    // 0x80085B4C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80085B50: nop

    // 0x80085B54: sw          $zero, 0x48($t5)
    MEM_W(0X48, ctx->r13) = 0;
    // 0x80085B58: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80085B5C: nop

    // 0x80085B60: sw          $zero, 0x4C($t4)
    MEM_W(0X4C, ctx->r12) = 0;
    // 0x80085B64: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80085B68: lw          $a0, 0x67A0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X67A0);
    // 0x80085B6C: jal         0x800B34D0
    // 0x80085B70: nop

    osSendMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x80085B70: nop

    after_5:
    // 0x80085B74: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80085B78: lw          $t7, 0x3918($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3918);
    // 0x80085B7C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80085B80: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x80085B84: sw          $t8, 0x3918($at)
    MEM_W(0X3918, ctx->r1) = ctx->r24;
    // 0x80085B88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80085B8C:
    // 0x80085B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80085B90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80085B94: jr          $ra
    // 0x80085B98: nop

    return;
    // 0x80085B98: nop

;}
RECOMP_FUNC void func_80085B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085B9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80085BA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80085BA4: jal         0x800B88D0
    // 0x80085BA8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    osAiGetLength_recomp(rdram, ctx);
        goto after_0;
    // 0x80085BA8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80085BAC: srl         $t6, $v0, 2
    ctx->r14 = S32(U32(ctx->r2) >> 2);
    // 0x80085BB0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80085BB4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80085BB8: nop

    // 0x80085BBC: bne         $t7, $zero, L_80085BDC
    if (ctx->r15 != 0) {
        // 0x80085BC0: nop
    
            goto L_80085BDC;
    }
    // 0x80085BC0: nop

    // 0x80085BC4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80085BC8: lw          $t8, 0x3920($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3920);
    // 0x80085BCC: nop

    // 0x80085BD0: bne         $t8, $zero, L_80085BDC
    if (ctx->r24 != 0) {
        // 0x80085BD4: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_80085BDC;
    }
    // 0x80085BD4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80085BD8: sw          $zero, 0x3920($at)
    MEM_W(0X3920, ctx->r1) = 0;
L_80085BDC:
    // 0x80085BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80085BE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80085BE4: jr          $ra
    // 0x80085BE8: nop

    return;
    // 0x80085BE8: nop

;}
RECOMP_FUNC void func_80085BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085BEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80085BF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80085BF4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80085BF8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80085BFC: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80085C00: sltu        $at, $t6, $at
    ctx->r1 = ctx->r14 < ctx->r1 ? 1 : 0;
    // 0x80085C04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80085C08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80085C0C: bne         $at, $zero, L_80085C24
    if (ctx->r1 != 0) {
        // 0x80085C10: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_80085C24;
    }
    // 0x80085C10: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80085C14: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x80085C18: sltu        $at, $t6, $at
    ctx->r1 = ctx->r14 < ctx->r1 ? 1 : 0;
    // 0x80085C1C: bne         $at, $zero, L_80085C30
    if (ctx->r1 != 0) {
        // 0x80085C20: nop
    
            goto L_80085C30;
    }
    // 0x80085C20: nop

L_80085C24:
    // 0x80085C24: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80085C28: b           L_80085CE4
    // 0x80085C2C: nop

        goto L_80085CE4;
    // 0x80085C2C: nop

L_80085C30:
    // 0x80085C30: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80085C34: lw          $t7, -0x7564($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7564);
    // 0x80085C38: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80085C3C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80085C40: sw          $t7, -0x755C($at)
    MEM_W(-0X755C, ctx->r1) = ctx->r15;
    // 0x80085C44: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80085C48: addiu       $t9, $t8, 0xF
    ctx->r25 = ADD32(ctx->r24, 0XF);
    // 0x80085C4C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x80085C50: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80085C54: slt         $at, $t0, $at
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80085C58: bne         $at, $zero, L_80085C68
    if (ctx->r1 != 0) {
        // 0x80085C5C: sw          $t0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r8;
            goto L_80085C68;
    }
    // 0x80085C5C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80085C60: b           L_80085CE4
    // 0x80085C64: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_80085CE4;
    // 0x80085C64: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80085C68:
    // 0x80085C68: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80085C6C: lw          $t3, -0x7564($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X7564);
    // 0x80085C70: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80085C74: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80085C78: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x80085C7C: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80085C80: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80085C84: addu        $t5, $t3, $at
    ctx->r13 = ADD32(ctx->r11, ctx->r1);
    // 0x80085C88: sltu        $at, $t5, $t4
    ctx->r1 = ctx->r13 < ctx->r12 ? 1 : 0;
    // 0x80085C8C: beq         $at, $zero, L_80085C9C
    if (ctx->r1 == 0) {
        // 0x80085C90: nop
    
            goto L_80085C9C;
    }
    // 0x80085C90: nop

    // 0x80085C94: b           L_80085CE4
    // 0x80085C98: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
        goto L_80085CE4;
    // 0x80085C98: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_80085C9C:
    // 0x80085C9C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80085CA0: lw          $a1, -0x7564($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7564);
    // 0x80085CA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80085CA8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80085CAC: jal         0x800A2F00
    // 0x80085CB0: nop

    func_800A2F00(rdram, ctx);
        goto after_0;
    // 0x80085CB0: nop

    after_0:
    // 0x80085CB4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80085CB8: sw          $v0, -0x7564($at)
    MEM_W(-0X7564, ctx->r1) = ctx->r2;
    // 0x80085CBC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80085CC0: lw          $t6, -0x7564($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7564);
    // 0x80085CC4: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80085CC8: addiu       $t8, $t6, 0xF
    ctx->r24 = ADD32(ctx->r14, 0XF);
    // 0x80085CCC: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80085CD0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80085CD4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80085CD8: lw          $a0, -0x755C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X755C);
    // 0x80085CDC: jal         0x800B87A0
    // 0x80085CE0: sw          $t9, -0x7564($at)
    MEM_W(-0X7564, ctx->r1) = ctx->r25;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x80085CE0: sw          $t9, -0x7564($at)
    MEM_W(-0X7564, ctx->r1) = ctx->r25;
    after_1:
L_80085CE4:
    // 0x80085CE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80085CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80085CEC: jr          $ra
    // 0x80085CF0: nop

    return;
    // 0x80085CF0: nop

;}
RECOMP_FUNC void func_80085CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085CF4: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80085CF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80085CFC: jr          $ra
    // 0x80085D00: addiu       $v0, $v0, 0x5BEC
    ctx->r2 = ADD32(ctx->r2, 0X5BEC);
    return;
    // 0x80085D00: addiu       $v0, $v0, 0x5BEC
    ctx->r2 = ADD32(ctx->r2, 0X5BEC);
;}
RECOMP_FUNC void func_80085D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085D04: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80085D08: lw          $t6, 0x3910($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3910);
    // 0x80085D0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80085D10: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80085D14: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80085D18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80085D1C: bne         $t7, $zero, L_80085D30
    if (ctx->r15 != 0) {
        // 0x80085D20: sw          $t7, 0x3910($at)
        MEM_W(0X3910, ctx->r1) = ctx->r15;
            goto L_80085D30;
    }
    // 0x80085D20: sw          $t7, 0x3910($at)
    MEM_W(0X3910, ctx->r1) = ctx->r15;
    // 0x80085D24: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80085D28: jal         0x800B3BFC
    // 0x80085D2C: addiu       $a0, $a0, -0x9D0
    ctx->r4 = ADD32(ctx->r4, -0X9D0);
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x80085D2C: addiu       $a0, $a0, -0x9D0
    ctx->r4 = ADD32(ctx->r4, -0X9D0);
    after_0:
L_80085D30:
    // 0x80085D30: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80085D34: lw          $t8, -0x7560($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X7560);
    // 0x80085D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80085D3C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80085D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80085D44: jr          $ra
    // 0x80085D48: sw          $t8, -0x7564($at)
    MEM_W(-0X7564, ctx->r1) = ctx->r24;
    return;
    // 0x80085D48: sw          $t8, -0x7564($at)
    MEM_W(-0X7564, ctx->r1) = ctx->r24;
    // 0x80085D4C: nop

;}
RECOMP_FUNC void func_80085D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085D50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80085D54: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80085D58: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80085D5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80085D60: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80085D64: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80085D68: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80085D6C: sb          $zero, 0x454($t6)
    MEM_B(0X454, ctx->r14) = 0;
    // 0x80085D70: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80085D74: lw          $t7, -0x4FB0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4FB0);
    // 0x80085D78: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80085D7C: addiu       $t9, $zero, 0x4E20
    ctx->r25 = ADD32(0, 0X4E20);
    // 0x80085D80: sw          $t7, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->r15;
    // 0x80085D84: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80085D88: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80085D8C: sw          $t9, 0x1578($t0)
    MEM_W(0X1578, ctx->r8) = ctx->r25;
    // 0x80085D90: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80085D94: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80085D98: sb          $zero, 0x1570($t1)
    MEM_B(0X1570, ctx->r9) = 0;
    // 0x80085D9C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80085DA0: nop

    // 0x80085DA4: sb          $t2, 0x1571($t3)
    MEM_B(0X1571, ctx->r11) = ctx->r10;
    // 0x80085DA8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80085DAC: nop

    // 0x80085DB0: sb          $zero, 0x1587($t4)
    MEM_B(0X1587, ctx->r12) = 0;
    // 0x80085DB4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80085DB8: nop

    // 0x80085DBC: sb          $zero, 0x158C($t5)
    MEM_B(0X158C, ctx->r13) = 0;
    // 0x80085DC0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80085DC4: addiu       $t5, $zero, 0x7FFF
    ctx->r13 = ADD32(0, 0X7FFF);
    // 0x80085DC8: sb          $zero, 0x1584($t6)
    MEM_B(0X1584, ctx->r14) = 0;
    // 0x80085DCC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80085DD0: nop

    // 0x80085DD4: sb          $zero, 0x1572($t7)
    MEM_B(0X1572, ctx->r15) = 0;
    // 0x80085DD8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80085DDC: nop

    // 0x80085DE0: sh          $zero, 0x157E($t8)
    MEM_H(0X157E, ctx->r24) = 0;
    // 0x80085DE4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80085DE8: nop

    // 0x80085DEC: sh          $zero, 0x1580($t9)
    MEM_H(0X1580, ctx->r25) = 0;
    // 0x80085DF0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80085DF4: nop

    // 0x80085DF8: sb          $zero, 0x1585($t0)
    MEM_B(0X1585, ctx->r8) = 0;
    // 0x80085DFC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80085E00: nop

    // 0x80085E04: sh          $zero, 0x1582($t1)
    MEM_H(0X1582, ctx->r9) = 0;
    // 0x80085E08: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80085E0C: nop

    // 0x80085E10: sb          $zero, 0x1586($t2)
    MEM_B(0X1586, ctx->r10) = 0;
    // 0x80085E14: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80085E18: lh          $t3, 0x3A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X3A);
    // 0x80085E1C: nop

    // 0x80085E20: sh          $t3, 0x157C($t4)
    MEM_H(0X157C, ctx->r12) = ctx->r11;
    // 0x80085E24: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80085E28: nop

    // 0x80085E2C: sh          $t5, 0x158A($t6)
    MEM_H(0X158A, ctx->r14) = ctx->r13;
    // 0x80085E30: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80085E34: nop

    // 0x80085E38: sh          $zero, 0x1588($t7)
    MEM_H(0X1588, ctx->r15) = 0;
    // 0x80085E3C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80085E40: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80085E44: sb          $zero, 0x1598($t8)
    MEM_B(0X1598, ctx->r24) = 0;
    // 0x80085E48: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80085E4C: addiu       $t7, $t7, 0x78F0
    ctx->r15 = ADD32(ctx->r15, 0X78F0);
    // 0x80085E50: sb          $zero, 0x1599($t9)
    MEM_B(0X1599, ctx->r25) = 0;
    // 0x80085E54: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80085E58: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80085E5C: nop

    // 0x80085E60: sw          $t0, 0x438($t1)
    MEM_W(0X438, ctx->r9) = ctx->r8;
    // 0x80085E64: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80085E68: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80085E6C: nop

    // 0x80085E70: sw          $t2, 0x43C($t3)
    MEM_W(0X43C, ctx->r11) = ctx->r10;
    // 0x80085E74: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80085E78: lbu         $t4, 0x3F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X3F);
    // 0x80085E7C: nop

    // 0x80085E80: sb          $t4, 0x158E($t5)
    MEM_B(0X158E, ctx->r13) = ctx->r12;
    // 0x80085E84: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80085E88: nop

    // 0x80085E8C: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x80085E90: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80085E94: nop

    // 0x80085E98: sw          $t7, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r15;
    // 0x80085E9C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80085EA0: nop

    // 0x80085EA4: sw          $t9, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r25;
    // 0x80085EA8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80085EAC: nop

    // 0x80085EB0: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
    // 0x80085EB4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80085EB8: lw          $a0, -0x4FB0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4FB0);
    // 0x80085EBC: jal         0x800B88E0
    // 0x80085EC0: nop

    alSynAddPlayer(rdram, ctx);
        goto after_0;
    // 0x80085EC0: nop

    after_0:
    // 0x80085EC4: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x80085EC8: sh          $t1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r9;
    // 0x80085ECC: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    // 0x80085ED0: sb          $zero, 0x20($sp)
    MEM_B(0X20, ctx->r29) = 0;
    // 0x80085ED4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80085ED8:
    // 0x80085ED8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80085EDC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80085EE0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80085EE4: lw          $t3, 0x438($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X438);
    // 0x80085EE8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80085EEC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80085EF0: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80085EF4: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x80085EF8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80085EFC: nop

    // 0x80085F00: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80085F04: slti        $at, $t8, 0x42
    ctx->r1 = SIGNED(ctx->r24) < 0X42 ? 1 : 0;
    // 0x80085F08: bne         $at, $zero, L_80085ED8
    if (ctx->r1 != 0) {
        // 0x80085F0C: sw          $t8, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r24;
            goto L_80085ED8;
    }
    // 0x80085F0C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80085F10: lbu         $t9, 0x37($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X37);
    // 0x80085F14: nop

    // 0x80085F18: beq         $t9, $zero, L_80085F70
    if (ctx->r25 == 0) {
        // 0x80085F1C: nop
    
            goto L_80085F70;
    }
    // 0x80085F1C: nop

    // 0x80085F20: blez        $t9, L_80085F70
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80085F24: sw          $zero, 0x24($sp)
        MEM_W(0X24, ctx->r29) = 0;
            goto L_80085F70;
    }
    // 0x80085F24: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80085F28:
    // 0x80085F28: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80085F2C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80085F30: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80085F34: subu        $t4, $t4, $t2
    ctx->r12 = SUB32(ctx->r12, ctx->r10);
    // 0x80085F38: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80085F3C: lw          $t1, 0x43C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X43C);
    // 0x80085F40: subu        $t4, $t4, $t2
    ctx->r12 = SUB32(ctx->r12, ctx->r10);
    // 0x80085F44: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80085F48: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x80085F4C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x80085F50: jal         0x800B8A18
    // 0x80085F54: addu        $a1, $t1, $t4
    ctx->r5 = ADD32(ctx->r9, ctx->r12);
    alSynAllocVoice(rdram, ctx);
        goto after_1;
    // 0x80085F54: addu        $a1, $t1, $t4
    ctx->r5 = ADD32(ctx->r9, ctx->r12);
    after_1:
    // 0x80085F58: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80085F5C: lbu         $t6, 0x37($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X37);
    // 0x80085F60: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x80085F64: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80085F68: bne         $at, $zero, L_80085F28
    if (ctx->r1 != 0) {
        // 0x80085F6C: sw          $t5, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r13;
            goto L_80085F28;
    }
    // 0x80085F6C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_80085F70:
    // 0x80085F70: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80085F74: jal         0x800B3BFC
    // 0x80085F78: addiu       $a0, $a0, -0x9C0
    ctx->r4 = ADD32(ctx->r4, -0X9C0);
    osSyncPrintf(rdram, ctx);
        goto after_2;
    // 0x80085F78: addiu       $a0, $a0, -0x9C0
    ctx->r4 = ADD32(ctx->r4, -0X9C0);
    after_2:
    // 0x80085F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80085F80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80085F84: jr          $ra
    // 0x80085F88: nop

    return;
    // 0x80085F88: nop

;}
RECOMP_FUNC void func_80085F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085F8C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80085F90: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80085F94: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80085F98: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80085F9C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80085FA0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80085FA4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80085FA8: jal         0x8008BF58
    // 0x80085FAC: addiu       $a1, $a1, 0x418
    ctx->r5 = ADD32(ctx->r5, 0X418);
    func_8008BF58(rdram, ctx);
        goto after_0;
    // 0x80085FAC: addiu       $a1, $a1, 0x418
    ctx->r5 = ADD32(ctx->r5, 0X418);
    after_0:
    // 0x80085FB0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80085FB4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80085FB8: addiu       $t7, $t6, 0xE
    ctx->r15 = ADD32(ctx->r14, 0XE);
    // 0x80085FBC: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x80085FC0: lbu         $t9, 0x41C($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X41C);
    // 0x80085FC4: nop

    // 0x80085FC8: sw          $t9, 0x440($t8)
    MEM_W(0X440, ctx->r24) = ctx->r25;
    // 0x80085FCC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80085FD0: nop

    // 0x80085FD4: lw          $a0, 0x420($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X420);
    // 0x80085FD8: jal         0x8007E03C
    // 0x80085FDC: nop

    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x80085FDC: nop

    after_1:
    // 0x80085FE0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80085FE4: jal         0x8007E4A4
    // 0x80085FE8: sw          $v0, 0x44C($t1)
    MEM_W(0X44C, ctx->r9) = ctx->r2;
    func_8007E4A4(rdram, ctx);
        goto after_2;
    // 0x80085FE8: sw          $v0, 0x44C($t1)
    MEM_W(0X44C, ctx->r9) = ctx->r2;
    after_2:
    // 0x80085FEC: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80085FF0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80085FF4: lw          $t3, 0x420($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X420);
    // 0x80085FF8: lw          $t4, 0x44C($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X44C);
    // 0x80085FFC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80086000: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80086004: addiu       $a1, $a1, -0x974
    ctx->r5 = ADD32(ctx->r5, -0X974);
    // 0x80086008: addiu       $a0, $a0, -0x9B0
    ctx->r4 = ADD32(ctx->r4, -0X9B0);
    // 0x8008600C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80086010: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80086014: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x80086018: jal         0x800B3BFC
    // 0x8008601C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    osSyncPrintf(rdram, ctx);
        goto after_3;
    // 0x8008601C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_3:
    // 0x80086020: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80086024: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80086028: lw          $t6, 0x44C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X44C);
    // 0x8008602C: addiu       $a0, $a0, -0x964
    ctx->r4 = ADD32(ctx->r4, -0X964);
    // 0x80086030: sw          $t6, 0x448($t5)
    MEM_W(0X448, ctx->r13) = ctx->r14;
    // 0x80086034: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80086038: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8008603C: lbu         $t9, 0x41D($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X41D);
    // 0x80086040: nop

    // 0x80086044: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x80086048: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8008604C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x80086050: lbu         $t2, 0x2($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X2);
    // 0x80086054: lbu         $t5, 0x1($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X1);
    // 0x80086058: lbu         $t3, 0x3($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X3);
    // 0x8008605C: lbu         $t0, 0x0($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X0);
    // 0x80086060: sll         $t4, $t2, 8
    ctx->r12 = S32(ctx->r10 << 8);
    // 0x80086064: sll         $t9, $t5, 16
    ctx->r25 = S32(ctx->r13 << 16);
    // 0x80086068: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x8008606C: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x80086070: sll         $t2, $t0, 24
    ctx->r10 = S32(ctx->r8 << 24);
    // 0x80086074: addu        $t3, $t2, $t8
    ctx->r11 = ADD32(ctx->r10, ctx->r24);
    // 0x80086078: sw          $t3, 0x450($t7)
    MEM_W(0X450, ctx->r15) = ctx->r11;
    // 0x8008607C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80086080: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80086084: addiu       $t5, $t4, 0x4
    ctx->r13 = ADD32(ctx->r12, 0X4);
    // 0x80086088: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x8008608C: lw          $t9, 0x44C($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X44C);
    // 0x80086090: nop

    // 0x80086094: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x80086098: lw          $t1, 0x420($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X420);
    // 0x8008609C: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x800860A0: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x800860A4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x800860A8: jal         0x800B3BFC
    // 0x800860AC: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_4;
    // 0x800860AC: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    after_4:
    // 0x800860B0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800860B4: nop

    // 0x800860B8: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x800860BC: addiu       $t2, $t0, -0x1
    ctx->r10 = ADD32(ctx->r8, -0X1);
    // 0x800860C0: beq         $s0, $zero, L_80086108
    if (ctx->r16 == 0) {
        // 0x800860C4: sw          $t2, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r10;
            goto L_80086108;
    }
    // 0x800860C4: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
L_800860C8:
    // 0x800860C8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800860CC: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800860D0: lb          $t3, 0x0($t8)
    ctx->r11 = MEM_B(ctx->r24, 0X0);
    // 0x800860D4: nop

    // 0x800860D8: sb          $t3, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r11;
    // 0x800860DC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800860E0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800860E4: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800860E8: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x800860EC: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800860F0: addiu       $t1, $t6, 0x1
    ctx->r9 = ADD32(ctx->r14, 0X1);
    // 0x800860F4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800860F8: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x800860FC: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x80086100: bne         $s0, $zero, L_800860C8
    if (ctx->r16 != 0) {
        // 0x80086104: sw          $t0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r8;
            goto L_800860C8;
    }
    // 0x80086104: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_80086108:
    // 0x80086108: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8008610C: nop

    // 0x80086110: lw          $a0, 0x44C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X44C);
    // 0x80086114: jal         0x8008EFA0
    // 0x80086118: addiu       $a1, $t2, 0x458
    ctx->r5 = ADD32(ctx->r10, 0X458);
    func_8008EFA0(rdram, ctx);
        goto after_5;
    // 0x80086118: addiu       $a1, $t2, 0x458
    ctx->r5 = ADD32(ctx->r10, 0X458);
    after_5:
    // 0x8008611C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80086120: jal         0x8008756C
    // 0x80086124: nop

    func_8008756C(rdram, ctx);
        goto after_6;
    // 0x80086124: nop

    after_6:
    // 0x80086128: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8008612C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80086130: jr          $ra
    // 0x80086134: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80086134: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80086138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80086138: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8008613C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80086140: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80086144: lbu         $t7, 0x4F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4F);
    // 0x80086148: sw          $zero, 0x3B3C($at)
    MEM_W(0X3B3C, ctx->r1) = 0;
    // 0x8008614C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80086150: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80086154: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80086158: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8008615C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80086160: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80086164: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80086168: sh          $t6, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r14;
    // 0x8008616C: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x80086170: bne         $t7, $at, L_800861E4
    if (ctx->r15 != ctx->r1) {
        // 0x80086174: sb          $zero, 0x2C($sp)
        MEM_B(0X2C, ctx->r29) = 0;
            goto L_800861E4;
    }
    // 0x80086174: sb          $zero, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = 0;
    // 0x80086178: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_8008617C:
    // 0x8008617C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80086180: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80086184: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80086188: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8008618C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80086190: lw          $t9, 0x43C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X43C);
    // 0x80086194: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80086198: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008619C: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x800861A0: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x800861A4: lbu         $t3, 0x27($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X27);
    // 0x800861A8: nop

    // 0x800861AC: beq         $t3, $zero, L_800861CC
    if (ctx->r11 == 0) {
        // 0x800861B0: nop
    
            goto L_800861CC;
    }
    // 0x800861B0: nop

    // 0x800861B4: sb          $zero, 0x27($t2)
    MEM_B(0X27, ctx->r10) = 0;
    // 0x800861B8: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x800861BC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800861C0: lw          $a0, 0x14($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14);
    // 0x800861C4: jal         0x800B8B60
    // 0x800861C8: nop

    alSynStopVoice(rdram, ctx);
        goto after_0;
    // 0x800861C8: nop

    after_0:
L_800861CC:
    // 0x800861CC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800861D0: nop

    // 0x800861D4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800861D8: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x800861DC: bne         $at, $zero, L_8008617C
    if (ctx->r1 != 0) {
        // 0x800861E0: sw          $t6, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r14;
            goto L_8008617C;
    }
    // 0x800861E0: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
L_800861E4:
    // 0x800861E4: lbu         $t7, 0x4F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4F);
    // 0x800861E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800861EC: bne         $t7, $at, L_80086254
    if (ctx->r15 != ctx->r1) {
        // 0x800861F0: nop
    
            goto L_80086254;
    }
    // 0x800861F0: nop

    // 0x800861F4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800861F8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800861FC: addiu       $a1, $a1, -0x7308
    ctx->r5 = ADD32(ctx->r5, -0X7308);
    // 0x80086200: addiu       $a0, $a0, -0x7320
    ctx->r4 = ADD32(ctx->r4, -0X7320);
    // 0x80086204: jal         0x800B3080
    // 0x80086208: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x80086208: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8008620C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80086210: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80086214: addiu       $a1, $a1, -0x72D0
    ctx->r5 = ADD32(ctx->r5, -0X72D0);
    // 0x80086218: addiu       $a0, $a0, -0x72E8
    ctx->r4 = ADD32(ctx->r4, -0X72E8);
    // 0x8008621C: jal         0x800B3080
    // 0x80086220: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_2;
    // 0x80086220: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80086224: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80086228: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8008622C: addiu       $a1, $a1, -0x7308
    ctx->r5 = ADD32(ctx->r5, -0X7308);
    // 0x80086230: addiu       $a0, $a0, -0x72B0
    ctx->r4 = ADD32(ctx->r4, -0X72B0);
    // 0x80086234: jal         0x800B3080
    // 0x80086238: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_3;
    // 0x80086238: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8008623C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80086240: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80086244: addiu       $a1, $a1, -0x72D0
    ctx->r5 = ADD32(ctx->r5, -0X72D0);
    // 0x80086248: addiu       $a0, $a0, -0x7278
    ctx->r4 = ADD32(ctx->r4, -0X7278);
    // 0x8008624C: jal         0x800B3080
    // 0x80086250: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_4;
    // 0x80086250: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
L_80086254:
    // 0x80086254: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80086258: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8008625C: jal         0x8008BF58
    // 0x80086260: addiu       $a1, $a1, 0x418
    ctx->r5 = ADD32(ctx->r5, 0X418);
    func_8008BF58(rdram, ctx);
        goto after_5;
    // 0x80086260: addiu       $a1, $a1, 0x418
    ctx->r5 = ADD32(ctx->r5, 0X418);
    after_5:
    // 0x80086264: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80086268: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8008626C: addiu       $t0, $t8, 0xE
    ctx->r8 = ADD32(ctx->r24, 0XE);
    // 0x80086270: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x80086274: lbu         $t1, 0x41C($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X41C);
    // 0x80086278: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008627C: sw          $t1, 0x440($t9)
    MEM_W(0X440, ctx->r25) = ctx->r9;
    // 0x80086280: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80086284: addiu       $a0, $a0, -0x940
    ctx->r4 = ADD32(ctx->r4, -0X940);
    // 0x80086288: lbu         $a1, 0x41C($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0X41C);
    // 0x8008628C: jal         0x800B3BFC
    // 0x80086290: nop

    osSyncPrintf(rdram, ctx);
        goto after_6;
    // 0x80086290: nop

    after_6:
    // 0x80086294: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80086298: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x8008629C: lw          $t4, 0x1590($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X1590);
    // 0x800862A0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800862A4: sw          $t4, 0x1574($t2)
    MEM_W(0X1574, ctx->r10) = ctx->r12;
    // 0x800862A8: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x800862AC: addiu       $a0, $a0, -0x924
    ctx->r4 = ADD32(ctx->r4, -0X924);
    // 0x800862B0: lw          $t6, 0x1574($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X1574);
    // 0x800862B4: nop

    // 0x800862B8: sw          $t6, 0x444($t5)
    MEM_W(0X444, ctx->r13) = ctx->r14;
    // 0x800862BC: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800862C0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800862C4: lw          $t8, 0x444($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X444);
    // 0x800862C8: nop

    // 0x800862CC: sw          $t8, 0x448($t7)
    MEM_W(0X448, ctx->r15) = ctx->r24;
    // 0x800862D0: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x800862D4: nop

    // 0x800862D8: lw          $t9, 0x420($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X420);
    // 0x800862DC: lw          $t1, 0x1574($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1574);
    // 0x800862E0: addiu       $t3, $t9, 0xF
    ctx->r11 = ADD32(ctx->r25, 0XF);
    // 0x800862E4: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x800862E8: addu        $t2, $t1, $t4
    ctx->r10 = ADD32(ctx->r9, ctx->r12);
    // 0x800862EC: sw          $t2, 0x1574($t0)
    MEM_W(0X1574, ctx->r8) = ctx->r10;
    // 0x800862F0: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x800862F4: lw          $t6, 0x3B3C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B3C);
    // 0x800862F8: lw          $t8, 0x420($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X420);
    // 0x800862FC: nop

    // 0x80086300: addiu       $t7, $t8, 0xF
    ctx->r15 = ADD32(ctx->r24, 0XF);
    // 0x80086304: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x80086308: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008630C: addu        $t3, $t6, $t9
    ctx->r11 = ADD32(ctx->r14, ctx->r25);
    // 0x80086310: sw          $t3, 0x3B3C($at)
    MEM_W(0X3B3C, ctx->r1) = ctx->r11;
    // 0x80086314: lw          $t1, 0x420($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X420);
    // 0x80086318: nop

    // 0x8008631C: addiu       $t4, $t1, -0x4
    ctx->r12 = ADD32(ctx->r9, -0X4);
    // 0x80086320: sw          $t4, 0x420($t5)
    MEM_W(0X420, ctx->r13) = ctx->r12;
    // 0x80086324: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80086328: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8008632C: lbu         $t0, 0x41D($t2)
    ctx->r8 = MEM_BU(ctx->r10, 0X41D);
    // 0x80086330: nop

    // 0x80086334: sll         $t8, $t0, 4
    ctx->r24 = S32(ctx->r8 << 4);
    // 0x80086338: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x8008633C: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80086340: lbu         $t3, 0x2($t6)
    ctx->r11 = MEM_BU(ctx->r14, 0X2);
    // 0x80086344: lbu         $t5, 0x1($t6)
    ctx->r13 = MEM_BU(ctx->r14, 0X1);
    // 0x80086348: lbu         $t9, 0x3($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X3);
    // 0x8008634C: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80086350: sll         $t1, $t3, 8
    ctx->r9 = S32(ctx->r11 << 8);
    // 0x80086354: sll         $t0, $t5, 16
    ctx->r8 = S32(ctx->r13 << 16);
    // 0x80086358: addu        $t4, $t9, $t1
    ctx->r12 = ADD32(ctx->r25, ctx->r9);
    // 0x8008635C: addu        $t8, $t4, $t0
    ctx->r24 = ADD32(ctx->r12, ctx->r8);
    // 0x80086360: sll         $t3, $t7, 24
    ctx->r11 = S32(ctx->r15 << 24);
    // 0x80086364: addu        $t9, $t3, $t8
    ctx->r25 = ADD32(ctx->r11, ctx->r24);
    // 0x80086368: sw          $t9, 0x450($t2)
    MEM_W(0X450, ctx->r10) = ctx->r25;
    // 0x8008636C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80086370: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80086374: addiu       $t5, $t1, 0x4
    ctx->r13 = ADD32(ctx->r9, 0X4);
    // 0x80086378: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x8008637C: lw          $t0, 0x444($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X444);
    // 0x80086380: nop

    // 0x80086384: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x80086388: lw          $t6, 0x420($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X420);
    // 0x8008638C: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x80086390: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x80086394: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80086398: jal         0x800B3BFC
    // 0x8008639C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_7;
    // 0x8008639C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_7:
    // 0x800863A0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800863A4: nop

    // 0x800863A8: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x800863AC: addiu       $t3, $t7, -0x1
    ctx->r11 = ADD32(ctx->r15, -0X1);
    // 0x800863B0: beq         $s0, $zero, L_800863F8
    if (ctx->r16 == 0) {
        // 0x800863B4: sw          $t3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r11;
            goto L_800863F8;
    }
    // 0x800863B4: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
L_800863B8:
    // 0x800863B8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800863BC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800863C0: lb          $t9, 0x0($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X0);
    // 0x800863C4: nop

    // 0x800863C8: sb          $t9, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r25;
    // 0x800863CC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800863D0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800863D4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800863D8: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x800863DC: addiu       $t7, $t0, -0x1
    ctx->r15 = ADD32(ctx->r8, -0X1);
    // 0x800863E0: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x800863E4: addiu       $t5, $t1, 0x1
    ctx->r13 = ADD32(ctx->r9, 0X1);
    // 0x800863E8: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x800863EC: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x800863F0: bne         $s0, $zero, L_800863B8
    if (ctx->r16 != 0) {
        // 0x800863F4: sw          $t7, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r15;
            goto L_800863B8;
    }
    // 0x800863F4: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
L_800863F8:
    // 0x800863F8: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x800863FC: nop

    // 0x80086400: lw          $a0, 0x444($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X444);
    // 0x80086404: jal         0x8008EFA0
    // 0x80086408: addiu       $a1, $t3, 0x458
    ctx->r5 = ADD32(ctx->r11, 0X458);
    func_8008EFA0(rdram, ctx);
        goto after_8;
    // 0x80086408: addiu       $a1, $t3, 0x458
    ctx->r5 = ADD32(ctx->r11, 0X458);
    after_8:
    // 0x8008640C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80086410: jal         0x8008756C
    // 0x80086414: nop

    func_8008756C(rdram, ctx);
        goto after_9;
    // 0x80086414: nop

    after_9:
    // 0x80086418: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8008641C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x80086420: lbu         $t9, 0x41D($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X41D);
    // 0x80086424: nop

    // 0x80086428: blez        $t9, L_8008647C
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8008642C: nop
    
            goto L_8008647C;
    }
    // 0x8008642C: nop

L_80086430:
    // 0x80086430: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80086434: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80086438: sll         $t5, $t1, 4
    ctx->r13 = S32(ctx->r9 << 4);
    // 0x8008643C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80086440: addu        $a1, $t2, $t5
    ctx->r5 = ADD32(ctx->r10, ctx->r13);
    // 0x80086444: jal         0x8008C014
    // 0x80086448: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    func_8008C014(rdram, ctx);
        goto after_10;
    // 0x80086448: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    after_10:
    // 0x8008644C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80086450: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80086454: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80086458: addiu       $t7, $t0, 0x1
    ctx->r15 = ADD32(ctx->r8, 0X1);
    // 0x8008645C: addiu       $t6, $t4, 0x10
    ctx->r14 = ADD32(ctx->r12, 0X10);
    // 0x80086460: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x80086464: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x80086468: lbu         $t8, 0x41D($t3)
    ctx->r24 = MEM_BU(ctx->r11, 0X41D);
    // 0x8008646C: nop

    // 0x80086470: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80086474: bne         $at, $zero, L_80086430
    if (ctx->r1 != 0) {
        // 0x80086478: nop
    
            goto L_80086430;
    }
    // 0x80086478: nop

L_8008647C:
    // 0x8008647C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80086480: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80086484: sb          $zero, 0x1572($t9)
    MEM_B(0X1572, ctx->r25) = 0;
    // 0x80086488: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x8008648C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80086490: sb          $t1, 0x1570($t2)
    MEM_B(0X1570, ctx->r10) = ctx->r9;
    // 0x80086494: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80086498: nop

    // 0x8008649C: sb          $t5, 0x1571($t4)
    MEM_B(0X1571, ctx->r12) = ctx->r13;
    // 0x800864A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800864A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800864A8: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x800864AC: jr          $ra
    // 0x800864B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800864B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800864B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800864B4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800864B8: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x800864BC: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x800864C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800864C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800864C8: lbu         $t7, 0x1570($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1570);
    // 0x800864CC: nop

    // 0x800864D0: beq         $t7, $zero, L_80087468
    if (ctx->r15 == 0) {
        // 0x800864D4: nop
    
            goto L_80087468;
    }
    // 0x800864D4: nop

    // 0x800864D8: lbu         $t8, 0x1571($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X1571);
    // 0x800864DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800864E0: beq         $t8, $at, L_800864F4
    if (ctx->r24 == ctx->r1) {
        // 0x800864E4: nop
    
            goto L_800864F4;
    }
    // 0x800864E4: nop

    // 0x800864E8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800864EC: b           L_80087468
    // 0x800864F0: sb          $t9, 0x1571($t6)
    MEM_B(0X1571, ctx->r14) = ctx->r25;
        goto L_80087468;
    // 0x800864F0: sb          $t9, 0x1571($t6)
    MEM_B(0X1571, ctx->r14) = ctx->r25;
L_800864F4:
    // 0x800864F4: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x800864F8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800864FC: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x80086500: sb          $t0, 0x1571($t1)
    MEM_B(0X1571, ctx->r9) = ctx->r8;
    // 0x80086504: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x80086508: ori         $t2, $t2, 0x400
    ctx->r10 = ctx->r10 | 0X400;
    // 0x8008650C: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x80086510: lbu         $t4, 0x1572($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1572);
    // 0x80086514: nop

    // 0x80086518: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x8008651C: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x80086520: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
    // 0x80086524: lhu         $t8, 0x24($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X24);
    // 0x80086528: nop

    // 0x8008652C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80086530: beq         $t9, $zero, L_80086B8C
    if (ctx->r25 == 0) {
        // 0x80086534: nop
    
            goto L_80086B8C;
    }
    // 0x80086534: nop

    // 0x80086538: lw          $a0, 0x18($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18);
    // 0x8008653C: nop

    // 0x80086540: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x80086544: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80086548: jal         0x8007E03C
    // 0x8008654C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x8008654C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_0:
    // 0x80086550: jal         0x8007E4A4
    // 0x80086554: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_8007E4A4(rdram, ctx);
        goto after_1;
    // 0x80086554: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x80086558: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x8008655C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80086560: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80086564: addu        $t4, $t0, $t2
    ctx->r12 = ADD32(ctx->r8, ctx->r10);
    // 0x80086568: lw          $t3, 0x18($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X18);
    // 0x8008656C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80086570: sll         $t5, $t3, 1
    ctx->r13 = S32(ctx->r11 << 1);
    // 0x80086574: addiu       $t8, $t5, 0x20
    ctx->r24 = ADD32(ctx->r13, 0X20);
    // 0x80086578: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8008657C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80086580: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80086584: addiu       $a1, $a1, -0x8C4
    ctx->r5 = ADD32(ctx->r5, -0X8C4);
    // 0x80086588: addiu       $a0, $a0, -0x900
    ctx->r4 = ADD32(ctx->r4, -0X900);
    // 0x8008658C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80086590: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80086594: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80086598: jal         0x800B3BFC
    // 0x8008659C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    osSyncPrintf(rdram, ctx);
        goto after_2;
    // 0x8008659C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_2:
    // 0x800865A0: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x800865A4: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x800865A8: sll         $t1, $t6, 4
    ctx->r9 = S32(ctx->r14 << 4);
    // 0x800865AC: addu        $t0, $t7, $t1
    ctx->r8 = ADD32(ctx->r15, ctx->r9);
    // 0x800865B0: lhu         $a1, 0x26($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X26);
    // 0x800865B4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800865B8: jal         0x80087478
    // 0x800865BC: nop

    func_80087478(rdram, ctx);
        goto after_3;
    // 0x800865BC: nop

    after_3:
    // 0x800865C0: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x800865C4: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x800865C8: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x800865CC: lw          $t3, 0x438($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X438);
    // 0x800865D0: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x800865D4: lw          $t4, 0x1574($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X1574);
    // 0x800865D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800865DC: addu        $t9, $t3, $t8
    ctx->r25 = ADD32(ctx->r11, ctx->r24);
    // 0x800865E0: sw          $t4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r12;
    // 0x800865E4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800865E8: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x800865EC: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x800865F0: lw          $t7, 0x438($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X438);
    // 0x800865F4: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x800865F8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800865FC: addu        $t2, $t7, $t0
    ctx->r10 = ADD32(ctx->r15, ctx->r8);
    // 0x80086600: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x80086604: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80086608: addu        $t8, $t7, $t3
    ctx->r24 = ADD32(ctx->r15, ctx->r11);
    // 0x8008660C: sw          $t5, 0x528($t8)
    MEM_W(0X528, ctx->r24) = ctx->r13;
    // 0x80086610: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80086614: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x80086618: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x8008661C: addu        $t0, $t4, $t6
    ctx->r8 = ADD32(ctx->r12, ctx->r14);
    // 0x80086620: lhu         $t2, 0x24($t0)
    ctx->r10 = MEM_HU(ctx->r8, 0X24);
    // 0x80086624: nop

    // 0x80086628: andi        $t1, $t2, 0x4
    ctx->r9 = ctx->r10 & 0X4;
    // 0x8008662C: beq         $t1, $zero, L_8008668C
    if (ctx->r9 == 0) {
        // 0x80086630: nop
    
            goto L_8008668C;
    }
    // 0x80086630: nop

    // 0x80086634: lw          $t7, 0x18($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X18);
    // 0x80086638: lw          $t9, 0x1574($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X1574);
    // 0x8008663C: sll         $t3, $t7, 1
    ctx->r11 = S32(ctx->r15 << 1);
    // 0x80086640: addiu       $t5, $t3, 0x2F
    ctx->r13 = ADD32(ctx->r11, 0X2F);
    // 0x80086644: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80086648: and         $t8, $t5, $at
    ctx->r24 = ctx->r13 & ctx->r1;
    // 0x8008664C: addu        $t6, $t9, $t8
    ctx->r14 = ADD32(ctx->r25, ctx->r24);
    // 0x80086650: sw          $t6, 0x1574($t4)
    MEM_W(0X1574, ctx->r12) = ctx->r14;
    // 0x80086654: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80086658: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x8008665C: sll         $t0, $t1, 4
    ctx->r8 = S32(ctx->r9 << 4);
    // 0x80086660: addu        $t7, $t2, $t0
    ctx->r15 = ADD32(ctx->r10, ctx->r8);
    // 0x80086664: lw          $t3, 0x18($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X18);
    // 0x80086668: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8008666C: sll         $t5, $t3, 1
    ctx->r13 = S32(ctx->r11 << 1);
    // 0x80086670: addiu       $t9, $t5, 0x2F
    ctx->r25 = ADD32(ctx->r13, 0X2F);
    // 0x80086674: lw          $t6, 0x3B3C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B3C);
    // 0x80086678: and         $t8, $t9, $at
    ctx->r24 = ctx->r25 & ctx->r1;
    // 0x8008667C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80086680: addu        $t4, $t6, $t8
    ctx->r12 = ADD32(ctx->r14, ctx->r24);
    // 0x80086684: b           L_800866E8
    // 0x80086688: sw          $t4, 0x3B3C($at)
    MEM_W(0X3B3C, ctx->r1) = ctx->r12;
        goto L_800866E8;
    // 0x80086688: sw          $t4, 0x3B3C($at)
    MEM_W(0X3B3C, ctx->r1) = ctx->r12;
L_8008668C:
    // 0x8008668C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80086690: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80086694: sll         $t0, $t2, 4
    ctx->r8 = S32(ctx->r10 << 4);
    // 0x80086698: addu        $t7, $t1, $t0
    ctx->r15 = ADD32(ctx->r9, ctx->r8);
    // 0x8008669C: lw          $t3, 0x18($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X18);
    // 0x800866A0: lw          $t6, 0x1574($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X1574);
    // 0x800866A4: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x800866A8: addiu       $t5, $t3, 0x2F
    ctx->r13 = ADD32(ctx->r11, 0X2F);
    // 0x800866AC: and         $t9, $t5, $at
    ctx->r25 = ctx->r13 & ctx->r1;
    // 0x800866B0: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x800866B4: sw          $t8, 0x1574($t1)
    MEM_W(0X1574, ctx->r9) = ctx->r24;
    // 0x800866B8: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x800866BC: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x800866C0: sll         $t0, $t2, 4
    ctx->r8 = S32(ctx->r10 << 4);
    // 0x800866C4: addu        $t7, $t4, $t0
    ctx->r15 = ADD32(ctx->r12, ctx->r8);
    // 0x800866C8: lw          $t3, 0x18($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X18);
    // 0x800866CC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800866D0: addiu       $t5, $t3, 0x2F
    ctx->r13 = ADD32(ctx->r11, 0X2F);
    // 0x800866D4: lw          $t9, 0x3B3C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B3C);
    // 0x800866D8: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x800866DC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800866E0: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x800866E4: sw          $t8, 0x3B3C($at)
    MEM_W(0X3B3C, ctx->r1) = ctx->r24;
L_800866E8:
    // 0x800866E8: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x800866EC: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x800866F0: sll         $t4, $t2, 4
    ctx->r12 = S32(ctx->r10 << 4);
    // 0x800866F4: addu        $t0, $t1, $t4
    ctx->r8 = ADD32(ctx->r9, ctx->r12);
    // 0x800866F8: lhu         $t7, 0x24($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X24);
    // 0x800866FC: nop

    // 0x80086700: andi        $t3, $t7, 0x4
    ctx->r11 = ctx->r15 & 0X4;
    // 0x80086704: beq         $t3, $zero, L_8008697C
    if (ctx->r11 == 0) {
        // 0x80086708: nop
    
            goto L_8008697C;
    }
    // 0x80086708: nop

    // 0x8008670C: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x80086710: lw          $t5, 0x18($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X18);
    // 0x80086714: lw          $t6, 0x438($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X438);
    // 0x80086718: addu        $t8, $t8, $t2
    ctx->r24 = ADD32(ctx->r24, ctx->r10);
    // 0x8008671C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80086720: sll         $t9, $t5, 1
    ctx->r25 = S32(ctx->r13 << 1);
    // 0x80086724: addu        $t4, $t6, $t8
    ctx->r12 = ADD32(ctx->r14, ctx->r24);
    // 0x80086728: sw          $t9, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r25;
    // 0x8008672C: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80086730: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x80086734: sll         $t0, $t3, 4
    ctx->r8 = S32(ctx->r11 << 4);
    // 0x80086738: addu        $t5, $t7, $t0
    ctx->r13 = ADD32(ctx->r15, ctx->r8);
    // 0x8008673C: lw          $t1, 0x18($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X18);
    // 0x80086740: lw          $t6, 0x438($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X438);
    // 0x80086744: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x80086748: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8008674C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80086750: sw          $t2, 0x630($t9)
    MEM_W(0X630, ctx->r25) = ctx->r10;
    // 0x80086754: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80086758: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x8008675C: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x80086760: lw          $t5, 0x438($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X438);
    // 0x80086764: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x80086768: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008676C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80086770: addu        $t3, $t5, $t7
    ctx->r11 = ADD32(ctx->r13, ctx->r15);
    // 0x80086774: sb          $t4, 0x8($t3)
    MEM_B(0X8, ctx->r11) = ctx->r12;
    // 0x80086778: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8008677C: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80086780: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80086784: lw          $t2, 0x438($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X438);
    // 0x80086788: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008678C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80086790: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80086794: addu        $t1, $t2, $t0
    ctx->r9 = ADD32(ctx->r10, ctx->r8);
    // 0x80086798: sb          $t6, 0x9($t1)
    MEM_B(0X9, ctx->r9) = ctx->r14;
    // 0x8008679C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800867A0: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x800867A4: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x800867A8: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    // 0x800867AC: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x800867B0: lw          $t4, 0x438($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X438);
    // 0x800867B4: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x800867B8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800867BC: addu        $t9, $t4, $t8
    ctx->r25 = ADD32(ctx->r12, ctx->r24);
    // 0x800867C0: lw          $t2, 0x0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X0);
    // 0x800867C4: sll         $t0, $t3, 4
    ctx->r8 = S32(ctx->r11 << 4);
    // 0x800867C8: addu        $t6, $t7, $t0
    ctx->r14 = ADD32(ctx->r15, ctx->r8);
    // 0x800867CC: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x800867D0: lw          $t1, 0x18($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X18);
    // 0x800867D4: nop

    // 0x800867D8: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x800867DC: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x800867E0: addiu       $t5, $t1, -0x1
    ctx->r13 = ADD32(ctx->r9, -0X1);
    // 0x800867E4: beq         $s0, $zero, L_8008683C
    if (ctx->r16 == 0) {
        // 0x800867E8: sw          $t5, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r13;
            goto L_8008683C;
    }
    // 0x800867E8: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
L_800867EC:
    // 0x800867EC: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800867F0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800867F4: lb          $t2, 0x1($t4)
    ctx->r10 = MEM_B(ctx->r12, 0X1);
    // 0x800867F8: lb          $t8, 0x0($t4)
    ctx->r24 = MEM_B(ctx->r12, 0X0);
    // 0x800867FC: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x80086800: andi        $t7, $t3, 0xFF00
    ctx->r15 = ctx->r11 & 0XFF00;
    // 0x80086804: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x80086808: addu        $t0, $t9, $t7
    ctx->r8 = ADD32(ctx->r25, ctx->r15);
    // 0x8008680C: sh          $t0, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r8;
    // 0x80086810: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80086814: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80086818: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8008681C: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80086820: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80086824: addiu       $t5, $t1, 0x2
    ctx->r13 = ADD32(ctx->r9, 0X2);
    // 0x80086828: addiu       $t4, $t8, 0x2
    ctx->r12 = ADD32(ctx->r24, 0X2);
    // 0x8008682C: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x80086830: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x80086834: bne         $s0, $zero, L_800867EC
    if (ctx->r16 != 0) {
        // 0x80086838: sw          $t3, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r11;
            goto L_800867EC;
    }
    // 0x80086838: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
L_8008683C:
    // 0x8008683C: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80086840: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80086844: sll         $t0, $t7, 4
    ctx->r8 = S32(ctx->r15 << 4);
    // 0x80086848: addu        $t6, $t9, $t0
    ctx->r14 = ADD32(ctx->r25, ctx->r8);
    // 0x8008684C: lhu         $t1, 0x24($t6)
    ctx->r9 = MEM_HU(ctx->r14, 0X24);
    // 0x80086850: nop

    // 0x80086854: andi        $t5, $t1, 0x4
    ctx->r13 = ctx->r9 & 0X4;
    // 0x80086858: beq         $t5, $zero, L_80086B50
    if (ctx->r13 == 0) {
        // 0x8008685C: nop
    
            goto L_80086B50;
    }
    // 0x8008685C: nop

    // 0x80086860: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x80086864: lw          $t8, 0x438($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X438);
    // 0x80086868: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x8008686C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80086870: addu        $t2, $t8, $t4
    ctx->r10 = ADD32(ctx->r24, ctx->r12);
    // 0x80086874: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80086878: nop

    // 0x8008687C: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x80086880: lw          $t0, 0x438($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X438);
    // 0x80086884: nop

    // 0x80086888: addu        $t1, $t0, $t4
    ctx->r9 = ADD32(ctx->r8, ctx->r12);
    // 0x8008688C: lw          $t5, 0x0($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X0);
    // 0x80086890: nop

    // 0x80086894: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    // 0x80086898: lhu         $t7, 0x24($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X24);
    // 0x8008689C: nop

    // 0x800868A0: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x800868A4: beq         $t8, $zero, L_80086914
    if (ctx->r24 == 0) {
        // 0x800868A8: nop
    
            goto L_80086914;
    }
    // 0x800868A8: nop

    // 0x800868AC: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
L_800868B0:
    // 0x800868B0: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x800868B4: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x800868B8: sll         $t9, $t3, 4
    ctx->r25 = S32(ctx->r11 << 4);
    // 0x800868BC: addu        $t0, $t2, $t9
    ctx->r8 = ADD32(ctx->r10, ctx->r25);
    // 0x800868C0: lw          $t4, 0x1C($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X1C);
    // 0x800868C4: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x800868C8: lw          $t2, 0x20($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X20);
    // 0x800868CC: subu        $t5, $t4, $t1
    ctx->r13 = SUB32(ctx->r12, ctx->r9);
    // 0x800868D0: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800868D4: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x800868D8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800868DC: addu        $t9, $t2, $t1
    ctx->r25 = ADD32(ctx->r10, ctx->r9);
    // 0x800868E0: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x800868E4: lh          $t3, -0x2($t8)
    ctx->r11 = MEM_H(ctx->r24, -0X2);
    // 0x800868E8: sll         $t4, $t9, 1
    ctx->r12 = S32(ctx->r25 << 1);
    // 0x800868EC: addu        $t7, $t5, $t4
    ctx->r15 = ADD32(ctx->r13, ctx->r12);
    // 0x800868F0: sh          $t3, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r11;
    // 0x800868F4: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800868F8: nop

    // 0x800868FC: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80086900: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x80086904: bne         $at, $zero, L_800868B0
    if (ctx->r1 != 0) {
        // 0x80086908: sw          $t8, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r24;
            goto L_800868B0;
    }
    // 0x80086908: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x8008690C: b           L_80086B50
    // 0x80086910: nop

        goto L_80086B50;
    // 0x80086910: nop

L_80086914:
    // 0x80086914: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
L_80086918:
    // 0x80086918: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x8008691C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80086920: sll         $t1, $t2, 4
    ctx->r9 = S32(ctx->r10 << 4);
    // 0x80086924: addu        $t9, $t0, $t1
    ctx->r25 = ADD32(ctx->r8, ctx->r9);
    // 0x80086928: lw          $t5, 0x1C($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X1C);
    // 0x8008692C: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80086930: lw          $t0, 0x20($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X20);
    // 0x80086934: addu        $t3, $t5, $t4
    ctx->r11 = ADD32(ctx->r13, ctx->r12);
    // 0x80086938: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8008693C: sll         $t7, $t3, 1
    ctx->r15 = S32(ctx->r11 << 1);
    // 0x80086940: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80086944: addu        $t1, $t0, $t4
    ctx->r9 = ADD32(ctx->r8, ctx->r12);
    // 0x80086948: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8008694C: lh          $t2, 0x0($t8)
    ctx->r10 = MEM_H(ctx->r24, 0X0);
    // 0x80086950: sll         $t5, $t1, 1
    ctx->r13 = S32(ctx->r9 << 1);
    // 0x80086954: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80086958: sh          $t2, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r10;
    // 0x8008695C: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80086960: nop

    // 0x80086964: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80086968: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x8008696C: bne         $at, $zero, L_80086918
    if (ctx->r1 != 0) {
        // 0x80086970: sw          $t8, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r24;
            goto L_80086918;
    }
    // 0x80086970: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x80086974: b           L_80086B50
    // 0x80086978: nop

        goto L_80086B50;
    // 0x80086978: nop

L_8008697C:
    // 0x8008697C: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80086980: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80086984: sll         $t4, $t0, 4
    ctx->r12 = S32(ctx->r8 << 4);
    // 0x80086988: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x8008698C: lw          $t5, 0x438($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X438);
    // 0x80086990: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80086994: addu        $t1, $t9, $t4
    ctx->r9 = ADD32(ctx->r25, ctx->r12);
    // 0x80086998: lw          $t3, 0x18($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X18);
    // 0x8008699C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800869A0: addu        $t6, $t5, $t2
    ctx->r14 = ADD32(ctx->r13, ctx->r10);
    // 0x800869A4: sw          $t3, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r11;
    // 0x800869A8: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x800869AC: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x800869B0: sll         $t4, $t8, 4
    ctx->r12 = S32(ctx->r24 << 4);
    // 0x800869B4: lw          $t0, 0x438($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X438);
    // 0x800869B8: addu        $t1, $t7, $t4
    ctx->r9 = ADD32(ctx->r15, ctx->r12);
    // 0x800869BC: lw          $t9, 0x18($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X18);
    // 0x800869C0: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x800869C4: addu        $t2, $t0, $t5
    ctx->r10 = ADD32(ctx->r8, ctx->r13);
    // 0x800869C8: sw          $t9, 0x630($t2)
    MEM_W(0X630, ctx->r10) = ctx->r25;
    // 0x800869CC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800869D0: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x800869D4: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x800869D8: lw          $t4, 0x438($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X438);
    // 0x800869DC: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x800869E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800869E4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800869E8: addu        $t8, $t4, $t7
    ctx->r24 = ADD32(ctx->r12, ctx->r15);
    // 0x800869EC: sb          $t3, 0x8($t8)
    MEM_B(0X8, ctx->r24) = ctx->r11;
    // 0x800869F0: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x800869F4: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x800869F8: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x800869FC: lw          $t9, 0x438($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X438);
    // 0x80086A00: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80086A04: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80086A08: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80086A0C: addu        $t1, $t9, $t6
    ctx->r9 = ADD32(ctx->r25, ctx->r14);
    // 0x80086A10: sb          $t0, 0x9($t1)
    MEM_B(0X9, ctx->r9) = ctx->r8;
    // 0x80086A14: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80086A18: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80086A1C: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x80086A20: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x80086A24: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x80086A28: lw          $t3, 0x438($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X438);
    // 0x80086A2C: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x80086A30: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80086A34: addu        $t2, $t3, $t5
    ctx->r10 = ADD32(ctx->r11, ctx->r13);
    // 0x80086A38: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x80086A3C: sll         $t6, $t8, 4
    ctx->r14 = S32(ctx->r24 << 4);
    // 0x80086A40: addu        $t0, $t7, $t6
    ctx->r8 = ADD32(ctx->r15, ctx->r14);
    // 0x80086A44: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x80086A48: lw          $t1, 0x18($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X18);
    // 0x80086A4C: nop

    // 0x80086A50: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x80086A54: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x80086A58: addiu       $t4, $t1, -0x1
    ctx->r12 = ADD32(ctx->r9, -0X1);
    // 0x80086A5C: beq         $s0, $zero, L_80086AA8
    if (ctx->r16 == 0) {
        // 0x80086A60: sw          $t4, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r12;
            goto L_80086AA8;
    }
    // 0x80086A60: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
L_80086A64:
    // 0x80086A64: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80086A68: jal         0x8008C0E0
    // 0x80086A6C: nop

    func_8008C0E0(rdram, ctx);
        goto after_4;
    // 0x80086A6C: nop

    after_4:
    // 0x80086A70: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x80086A74: sra         $t3, $v0, 8
    ctx->r11 = S32(SIGNED(ctx->r2) >> 8);
    // 0x80086A78: sb          $t3, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r11;
    // 0x80086A7C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80086A80: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x80086A84: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80086A88: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80086A8C: addiu       $t0, $t6, -0x1
    ctx->r8 = ADD32(ctx->r14, -0X1);
    // 0x80086A90: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x80086A94: addiu       $t7, $t8, 0x2
    ctx->r15 = ADD32(ctx->r24, 0X2);
    // 0x80086A98: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x80086A9C: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x80086AA0: bne         $s0, $zero, L_80086A64
    if (ctx->r16 != 0) {
        // 0x80086AA4: sw          $t0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r8;
            goto L_80086A64;
    }
    // 0x80086AA4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
L_80086AA8:
    // 0x80086AA8: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80086AAC: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80086AB0: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80086AB4: lw          $t4, 0x438($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X438);
    // 0x80086AB8: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80086ABC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80086AC0: addu        $t2, $t4, $t5
    ctx->r10 = ADD32(ctx->r12, ctx->r13);
    // 0x80086AC4: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x80086AC8: sll         $t8, $t3, 4
    ctx->r24 = S32(ctx->r11 << 4);
    // 0x80086ACC: addu        $t7, $t1, $t8
    ctx->r15 = ADD32(ctx->r9, ctx->r24);
    // 0x80086AD0: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x80086AD4: lw          $t6, 0x18($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X18);
    // 0x80086AD8: nop

    // 0x80086ADC: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x80086AE0: lb          $t4, 0x0($t0)
    ctx->r12 = MEM_B(ctx->r8, 0X0);
    // 0x80086AE4: sb          $zero, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = 0;
    // 0x80086AE8: sra         $t5, $t4, 4
    ctx->r13 = S32(SIGNED(ctx->r12) >> 4);
    // 0x80086AEC: sb          $t5, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r13;
    // 0x80086AF0: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
L_80086AF4:
    // 0x80086AF4: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80086AF8: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x80086AFC: sll         $t1, $t3, 4
    ctx->r9 = S32(ctx->r11 << 4);
    // 0x80086B00: addu        $t8, $t2, $t1
    ctx->r24 = ADD32(ctx->r10, ctx->r9);
    // 0x80086B04: lw          $t7, 0x18($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X18);
    // 0x80086B08: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80086B0C: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80086B10: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x80086B14: lb          $t0, 0x0($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X0);
    // 0x80086B18: lbu         $t4, 0x2F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X2F);
    // 0x80086B1C: addu        $t2, $t3, $t7
    ctx->r10 = ADD32(ctx->r11, ctx->r15);
    // 0x80086B20: addu        $t1, $t6, $t2
    ctx->r9 = ADD32(ctx->r14, ctx->r10);
    // 0x80086B24: subu        $t5, $t0, $t4
    ctx->r13 = SUB32(ctx->r8, ctx->r12);
    // 0x80086B28: sb          $t5, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r13;
    // 0x80086B2C: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80086B30: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x80086B34: lbu         $t9, 0x2E($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2E);
    // 0x80086B38: addiu       $t3, $t4, 0x1
    ctx->r11 = ADD32(ctx->r12, 0X1);
    // 0x80086B3C: slti        $at, $t3, 0x10
    ctx->r1 = SIGNED(ctx->r11) < 0X10 ? 1 : 0;
    // 0x80086B40: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80086B44: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x80086B48: bne         $at, $zero, L_80086AF4
    if (ctx->r1 != 0) {
        // 0x80086B4C: sb          $t0, 0x2F($sp)
        MEM_B(0X2F, ctx->r29) = ctx->r8;
            goto L_80086AF4;
    }
    // 0x80086B4C: sb          $t0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r8;
L_80086B50:
    // 0x80086B50: jal         0x8007E4A4
    // 0x80086B54: nop

    func_8007E4A4(rdram, ctx);
        goto after_5;
    // 0x80086B54: nop

    after_5:
    // 0x80086B58: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80086B5C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80086B60: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80086B64: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80086B68: addiu       $a1, $a1, -0x880
    ctx->r5 = ADD32(ctx->r5, -0X880);
    // 0x80086B6C: addiu       $a0, $a0, -0x8B0
    ctx->r4 = ADD32(ctx->r4, -0X8B0);
    // 0x80086B70: jal         0x800B3BFC
    // 0x80086B74: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_6;
    // 0x80086B74: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_6:
    // 0x80086B78: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80086B7C: jal         0x8007E328
    // 0x80086B80: nop

    func_8007E328(rdram, ctx);
        goto after_7;
    // 0x80086B80: nop

    after_7:
    // 0x80086B84: b           L_800871AC
    // 0x80086B88: nop

        goto L_800871AC;
    // 0x80086B88: nop

L_80086B8C:
    // 0x80086B8C: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80086B90: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x80086B94: sll         $t2, $t6, 4
    ctx->r10 = S32(ctx->r14 << 4);
    // 0x80086B98: addu        $t5, $t7, $t2
    ctx->r13 = ADD32(ctx->r15, ctx->r10);
    // 0x80086B9C: lw          $a0, 0x18($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X18);
    // 0x80086BA0: jal         0x8007E03C
    // 0x80086BA4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_8007E03C(rdram, ctx);
        goto after_8;
    // 0x80086BA4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_8:
    // 0x80086BA8: jal         0x8007E4A4
    // 0x80086BAC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_8007E4A4(rdram, ctx);
        goto after_9;
    // 0x80086BAC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_9:
    // 0x80086BB0: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80086BB4: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80086BB8: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x80086BBC: addu        $t0, $t1, $t9
    ctx->r8 = ADD32(ctx->r9, ctx->r25);
    // 0x80086BC0: lw          $t4, 0x18($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X18);
    // 0x80086BC4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80086BC8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80086BCC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80086BD0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80086BD4: addiu       $t3, $t4, 0x20
    ctx->r11 = ADD32(ctx->r12, 0X20);
    // 0x80086BD8: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80086BDC: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x80086BE0: addiu       $a1, $a1, -0x830
    ctx->r5 = ADD32(ctx->r5, -0X830);
    // 0x80086BE4: addiu       $a0, $a0, -0x86C
    ctx->r4 = ADD32(ctx->r4, -0X86C);
    // 0x80086BE8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80086BEC: jal         0x800B3BFC
    // 0x80086BF0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    osSyncPrintf(rdram, ctx);
        goto after_10;
    // 0x80086BF0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_10:
    // 0x80086BF4: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80086BF8: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x80086BFC: sll         $t5, $t2, 4
    ctx->r13 = S32(ctx->r10 << 4);
    // 0x80086C00: addu        $t8, $t7, $t5
    ctx->r24 = ADD32(ctx->r15, ctx->r13);
    // 0x80086C04: lhu         $a1, 0x26($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X26);
    // 0x80086C08: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80086C0C: jal         0x80087478
    // 0x80086C10: nop

    func_80087478(rdram, ctx);
        goto after_11;
    // 0x80086C10: nop

    after_11:
    // 0x80086C14: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x80086C18: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80086C1C: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80086C20: lw          $t0, 0x438($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X438);
    // 0x80086C24: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80086C28: lw          $t9, 0x1574($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X1574);
    // 0x80086C2C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80086C30: addu        $t6, $t0, $t3
    ctx->r14 = ADD32(ctx->r8, ctx->r11);
    // 0x80086C34: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x80086C38: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80086C3C: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x80086C40: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80086C44: lw          $t7, 0x438($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X438);
    // 0x80086C48: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80086C4C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80086C50: addu        $t1, $t7, $t8
    ctx->r9 = ADD32(ctx->r15, ctx->r24);
    // 0x80086C54: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
    // 0x80086C58: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x80086C5C: addu        $t3, $t7, $t0
    ctx->r11 = ADD32(ctx->r15, ctx->r8);
    // 0x80086C60: sw          $t4, 0x528($t3)
    MEM_W(0X528, ctx->r11) = ctx->r12;
    // 0x80086C64: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80086C68: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80086C6C: sll         $t2, $t6, 4
    ctx->r10 = S32(ctx->r14 << 4);
    // 0x80086C70: addu        $t8, $t9, $t2
    ctx->r24 = ADD32(ctx->r25, ctx->r10);
    // 0x80086C74: lhu         $t1, 0x24($t8)
    ctx->r9 = MEM_HU(ctx->r24, 0X24);
    // 0x80086C78: nop

    // 0x80086C7C: andi        $t5, $t1, 0x4
    ctx->r13 = ctx->r9 & 0X4;
    // 0x80086C80: beq         $t5, $zero, L_80086CE0
    if (ctx->r13 == 0) {
        // 0x80086C84: nop
    
            goto L_80086CE0;
    }
    // 0x80086C84: nop

    // 0x80086C88: lw          $t7, 0x18($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X18);
    // 0x80086C8C: lw          $t6, 0x1574($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X1574);
    // 0x80086C90: sll         $t0, $t7, 1
    ctx->r8 = S32(ctx->r15 << 1);
    // 0x80086C94: addiu       $t4, $t0, 0x2F
    ctx->r12 = ADD32(ctx->r8, 0X2F);
    // 0x80086C98: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80086C9C: and         $t3, $t4, $at
    ctx->r11 = ctx->r12 & ctx->r1;
    // 0x80086CA0: addu        $t2, $t6, $t3
    ctx->r10 = ADD32(ctx->r14, ctx->r11);
    // 0x80086CA4: sw          $t2, 0x1574($t9)
    MEM_W(0X1574, ctx->r25) = ctx->r10;
    // 0x80086CA8: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80086CAC: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80086CB0: sll         $t8, $t5, 4
    ctx->r24 = S32(ctx->r13 << 4);
    // 0x80086CB4: addu        $t7, $t1, $t8
    ctx->r15 = ADD32(ctx->r9, ctx->r24);
    // 0x80086CB8: lw          $t0, 0x18($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X18);
    // 0x80086CBC: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80086CC0: sll         $t4, $t0, 1
    ctx->r12 = S32(ctx->r8 << 1);
    // 0x80086CC4: addiu       $t6, $t4, 0x2F
    ctx->r14 = ADD32(ctx->r12, 0X2F);
    // 0x80086CC8: lw          $t2, 0x3B3C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B3C);
    // 0x80086CCC: and         $t3, $t6, $at
    ctx->r11 = ctx->r14 & ctx->r1;
    // 0x80086CD0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80086CD4: addu        $t9, $t2, $t3
    ctx->r25 = ADD32(ctx->r10, ctx->r11);
    // 0x80086CD8: b           L_80086D3C
    // 0x80086CDC: sw          $t9, 0x3B3C($at)
    MEM_W(0X3B3C, ctx->r1) = ctx->r25;
        goto L_80086D3C;
    // 0x80086CDC: sw          $t9, 0x3B3C($at)
    MEM_W(0X3B3C, ctx->r1) = ctx->r25;
L_80086CE0:
    // 0x80086CE0: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80086CE4: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x80086CE8: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x80086CEC: addu        $t7, $t5, $t8
    ctx->r15 = ADD32(ctx->r13, ctx->r24);
    // 0x80086CF0: lw          $t0, 0x18($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X18);
    // 0x80086CF4: lw          $t2, 0x1574($t5)
    ctx->r10 = MEM_W(ctx->r13, 0X1574);
    // 0x80086CF8: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80086CFC: addiu       $t4, $t0, 0x2F
    ctx->r12 = ADD32(ctx->r8, 0X2F);
    // 0x80086D00: and         $t6, $t4, $at
    ctx->r14 = ctx->r12 & ctx->r1;
    // 0x80086D04: addu        $t3, $t2, $t6
    ctx->r11 = ADD32(ctx->r10, ctx->r14);
    // 0x80086D08: sw          $t3, 0x1574($t5)
    MEM_W(0X1574, ctx->r13) = ctx->r11;
    // 0x80086D0C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80086D10: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80086D14: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x80086D18: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x80086D1C: lw          $t0, 0x18($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X18);
    // 0x80086D20: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80086D24: addiu       $t4, $t0, 0x2F
    ctx->r12 = ADD32(ctx->r8, 0X2F);
    // 0x80086D28: lw          $t6, 0x3B3C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B3C);
    // 0x80086D2C: and         $t2, $t4, $at
    ctx->r10 = ctx->r12 & ctx->r1;
    // 0x80086D30: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80086D34: addu        $t3, $t6, $t2
    ctx->r11 = ADD32(ctx->r14, ctx->r10);
    // 0x80086D38: sw          $t3, 0x3B3C($at)
    MEM_W(0X3B3C, ctx->r1) = ctx->r11;
L_80086D3C:
    // 0x80086D3C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80086D40: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x80086D44: sll         $t9, $t1, 4
    ctx->r25 = S32(ctx->r9 << 4);
    // 0x80086D48: addu        $t8, $t5, $t9
    ctx->r24 = ADD32(ctx->r13, ctx->r25);
    // 0x80086D4C: lhu         $t7, 0x24($t8)
    ctx->r15 = MEM_HU(ctx->r24, 0X24);
    // 0x80086D50: nop

    // 0x80086D54: andi        $t0, $t7, 0x4
    ctx->r8 = ctx->r15 & 0X4;
    // 0x80086D58: beq         $t0, $zero, L_80086FA8
    if (ctx->r8 == 0) {
        // 0x80086D5C: nop
    
            goto L_80086FA8;
    }
    // 0x80086D5C: nop

    // 0x80086D60: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80086D64: lw          $t4, 0x18($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X18);
    // 0x80086D68: lw          $t2, 0x438($t5)
    ctx->r10 = MEM_W(ctx->r13, 0X438);
    // 0x80086D6C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80086D70: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80086D74: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x80086D78: addu        $t9, $t2, $t3
    ctx->r25 = ADD32(ctx->r10, ctx->r11);
    // 0x80086D7C: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
    // 0x80086D80: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x80086D84: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80086D88: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80086D8C: lw          $t8, 0x438($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X438);
    // 0x80086D90: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80086D94: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80086D98: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80086D9C: addu        $t1, $t8, $t5
    ctx->r9 = ADD32(ctx->r24, ctx->r13);
    // 0x80086DA0: sb          $t7, 0x8($t1)
    MEM_B(0X8, ctx->r9) = ctx->r15;
    // 0x80086DA4: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80086DA8: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x80086DAC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80086DB0: lw          $t6, 0x438($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X438);
    // 0x80086DB4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80086DB8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80086DBC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80086DC0: addu        $t4, $t6, $t0
    ctx->r12 = ADD32(ctx->r14, ctx->r8);
    // 0x80086DC4: sb          $t2, 0x9($t4)
    MEM_B(0X9, ctx->r12) = ctx->r10;
    // 0x80086DC8: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80086DCC: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80086DD0: sll         $t7, $t5, 4
    ctx->r15 = S32(ctx->r13 << 4);
    // 0x80086DD4: addu        $t1, $t8, $t7
    ctx->r9 = ADD32(ctx->r24, ctx->r15);
    // 0x80086DD8: lw          $t3, 0x18($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X18);
    // 0x80086DDC: lw          $t6, 0x438($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X438);
    // 0x80086DE0: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x80086DE4: sll         $t9, $t3, 1
    ctx->r25 = S32(ctx->r11 << 1);
    // 0x80086DE8: addu        $t2, $t6, $t0
    ctx->r10 = ADD32(ctx->r14, ctx->r8);
    // 0x80086DEC: sw          $t9, 0x630($t2)
    MEM_W(0X630, ctx->r10) = ctx->r25;
    // 0x80086DF0: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80086DF4: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80086DF8: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x80086DFC: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x80086E00: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x80086E04: lw          $t1, 0x438($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X438);
    // 0x80086E08: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x80086E0C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80086E10: addu        $t5, $t1, $t8
    ctx->r13 = ADD32(ctx->r9, ctx->r24);
    // 0x80086E14: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80086E18: sll         $t0, $t3, 4
    ctx->r8 = S32(ctx->r11 << 4);
    // 0x80086E1C: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x80086E20: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x80086E24: lw          $t2, 0x18($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X18);
    // 0x80086E28: nop

    // 0x80086E2C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x80086E30: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80086E34: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x80086E38: beq         $s0, $zero, L_80086E84
    if (ctx->r16 == 0) {
        // 0x80086E3C: sw          $t4, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r12;
            goto L_80086E84;
    }
    // 0x80086E3C: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
L_80086E40:
    // 0x80086E40: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80086E44: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80086E48: lb          $t8, 0x0($t1)
    ctx->r24 = MEM_B(ctx->r9, 0X0);
    // 0x80086E4C: nop

    // 0x80086E50: sll         $t5, $t8, 8
    ctx->r13 = S32(ctx->r24 << 8);
    // 0x80086E54: sh          $t5, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r13;
    // 0x80086E58: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80086E5C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80086E60: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80086E64: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80086E68: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x80086E6C: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x80086E70: addiu       $t7, $t3, 0x2
    ctx->r15 = ADD32(ctx->r11, 0X2);
    // 0x80086E74: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x80086E78: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x80086E7C: bne         $s0, $zero, L_80086E40
    if (ctx->r16 != 0) {
        // 0x80086E80: sw          $t4, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r12;
            goto L_80086E40;
    }
    // 0x80086E80: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
L_80086E84:
    // 0x80086E84: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80086E88: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80086E8C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80086E90: lw          $t8, 0x438($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X438);
    // 0x80086E94: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80086E98: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80086E9C: addu        $t3, $t8, $t6
    ctx->r11 = ADD32(ctx->r24, ctx->r14);
    // 0x80086EA0: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
    // 0x80086EA4: sll         $t4, $t5, 4
    ctx->r12 = S32(ctx->r13 << 4);
    // 0x80086EA8: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x80086EAC: lw          $t0, 0x438($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X438);
    // 0x80086EB0: addu        $t8, $t1, $t4
    ctx->r24 = ADD32(ctx->r9, ctx->r12);
    // 0x80086EB4: addu        $t9, $t0, $t6
    ctx->r25 = ADD32(ctx->r8, ctx->r14);
    // 0x80086EB8: lw          $t2, 0x0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X0);
    // 0x80086EBC: nop

    // 0x80086EC0: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x80086EC4: lhu         $t3, 0x24($t8)
    ctx->r11 = MEM_HU(ctx->r24, 0X24);
    // 0x80086EC8: nop

    // 0x80086ECC: andi        $t7, $t3, 0x8
    ctx->r15 = ctx->r11 & 0X8;
    // 0x80086ED0: beq         $t7, $zero, L_80086F40
    if (ctx->r15 == 0) {
        // 0x80086ED4: nop
    
            goto L_80086F40;
    }
    // 0x80086ED4: nop

    // 0x80086ED8: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
L_80086EDC:
    // 0x80086EDC: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80086EE0: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80086EE4: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x80086EE8: addu        $t2, $t0, $t9
    ctx->r10 = ADD32(ctx->r8, ctx->r25);
    // 0x80086EEC: lw          $t5, 0x1C($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X1C);
    // 0x80086EF0: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80086EF4: lw          $t0, 0x20($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X20);
    // 0x80086EF8: subu        $t4, $t5, $t1
    ctx->r12 = SUB32(ctx->r13, ctx->r9);
    // 0x80086EFC: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80086F00: sll         $t8, $t4, 1
    ctx->r24 = S32(ctx->r12 << 1);
    // 0x80086F04: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80086F08: addu        $t9, $t0, $t1
    ctx->r25 = ADD32(ctx->r8, ctx->r9);
    // 0x80086F0C: addu        $t7, $t3, $t8
    ctx->r15 = ADD32(ctx->r11, ctx->r24);
    // 0x80086F10: lh          $t6, -0x2($t7)
    ctx->r14 = MEM_H(ctx->r15, -0X2);
    // 0x80086F14: sll         $t5, $t9, 1
    ctx->r13 = S32(ctx->r25 << 1);
    // 0x80086F18: addu        $t3, $t4, $t5
    ctx->r11 = ADD32(ctx->r12, ctx->r13);
    // 0x80086F1C: sh          $t6, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r14;
    // 0x80086F20: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80086F24: nop

    // 0x80086F28: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x80086F2C: slti        $at, $t7, 0x10
    ctx->r1 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x80086F30: bne         $at, $zero, L_80086EDC
    if (ctx->r1 != 0) {
        // 0x80086F34: sw          $t7, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r15;
            goto L_80086EDC;
    }
    // 0x80086F34: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x80086F38: b           L_80087178
    // 0x80086F3C: nop

        goto L_80087178;
    // 0x80086F3C: nop

L_80086F40:
    // 0x80086F40: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
L_80086F44:
    // 0x80086F44: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80086F48: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x80086F4C: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x80086F50: addu        $t9, $t2, $t1
    ctx->r25 = ADD32(ctx->r10, ctx->r9);
    // 0x80086F54: lw          $t4, 0x1C($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X1C);
    // 0x80086F58: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80086F5C: lw          $t2, 0x20($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X20);
    // 0x80086F60: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80086F64: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80086F68: sll         $t3, $t6, 1
    ctx->r11 = S32(ctx->r14 << 1);
    // 0x80086F6C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80086F70: addu        $t1, $t2, $t5
    ctx->r9 = ADD32(ctx->r10, ctx->r13);
    // 0x80086F74: addu        $t7, $t8, $t3
    ctx->r15 = ADD32(ctx->r24, ctx->r11);
    // 0x80086F78: lh          $t0, 0x0($t7)
    ctx->r8 = MEM_H(ctx->r15, 0X0);
    // 0x80086F7C: sll         $t4, $t1, 1
    ctx->r12 = S32(ctx->r9 << 1);
    // 0x80086F80: addu        $t8, $t6, $t4
    ctx->r24 = ADD32(ctx->r14, ctx->r12);
    // 0x80086F84: sh          $t0, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r8;
    // 0x80086F88: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80086F8C: nop

    // 0x80086F90: addiu       $t7, $t3, 0x1
    ctx->r15 = ADD32(ctx->r11, 0X1);
    // 0x80086F94: slti        $at, $t7, 0x10
    ctx->r1 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x80086F98: bne         $at, $zero, L_80086F44
    if (ctx->r1 != 0) {
        // 0x80086F9C: sw          $t7, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r15;
            goto L_80086F44;
    }
    // 0x80086F9C: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x80086FA0: b           L_80087178
    // 0x80086FA4: nop

        goto L_80087178;
    // 0x80086FA4: nop

L_80086FA8:
    // 0x80086FA8: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80086FAC: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80086FB0: sll         $t5, $t2, 4
    ctx->r13 = S32(ctx->r10 << 4);
    // 0x80086FB4: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x80086FB8: lw          $t4, 0x438($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X438);
    // 0x80086FBC: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x80086FC0: addu        $t1, $t9, $t5
    ctx->r9 = ADD32(ctx->r25, ctx->r13);
    // 0x80086FC4: lw          $t6, 0x18($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X18);
    // 0x80086FC8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80086FCC: addu        $t8, $t4, $t0
    ctx->r24 = ADD32(ctx->r12, ctx->r8);
    // 0x80086FD0: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x80086FD4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80086FD8: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x80086FDC: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80086FE0: lw          $t5, 0x438($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X438);
    // 0x80086FE4: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80086FE8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80086FEC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80086FF0: addu        $t2, $t5, $t9
    ctx->r10 = ADD32(ctx->r13, ctx->r25);
    // 0x80086FF4: sb          $t3, 0x8($t2)
    MEM_B(0X8, ctx->r10) = ctx->r11;
    // 0x80086FF8: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80086FFC: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80087000: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80087004: lw          $t6, 0x438($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X438);
    // 0x80087008: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8008700C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80087010: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80087014: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x80087018: sb          $t4, 0x9($t1)
    MEM_B(0X9, ctx->r9) = ctx->r12;
    // 0x8008701C: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80087020: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x80087024: sll         $t3, $t9, 4
    ctx->r11 = S32(ctx->r25 << 4);
    // 0x80087028: lw          $t8, 0x438($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X438);
    // 0x8008702C: addu        $t2, $t5, $t3
    ctx->r10 = ADD32(ctx->r13, ctx->r11);
    // 0x80087030: lw          $t0, 0x18($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X18);
    // 0x80087034: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80087038: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x8008703C: sw          $t0, 0x630($t7)
    MEM_W(0X630, ctx->r15) = ctx->r8;
    // 0x80087040: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80087044: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80087048: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x8008704C: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x80087050: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80087054: lw          $t3, 0x438($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X438);
    // 0x80087058: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x8008705C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80087060: addu        $t9, $t3, $t5
    ctx->r25 = ADD32(ctx->r11, ctx->r13);
    // 0x80087064: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x80087068: sll         $t6, $t2, 4
    ctx->r14 = S32(ctx->r10 << 4);
    // 0x8008706C: addu        $t0, $t1, $t6
    ctx->r8 = ADD32(ctx->r9, ctx->r14);
    // 0x80087070: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x80087074: lw          $t7, 0x18($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X18);
    // 0x80087078: nop

    // 0x8008707C: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x80087080: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80087084: addiu       $t4, $t7, -0x1
    ctx->r12 = ADD32(ctx->r15, -0X1);
    // 0x80087088: beq         $s0, $zero, L_800870D0
    if (ctx->r16 == 0) {
        // 0x8008708C: sw          $t4, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r12;
            goto L_800870D0;
    }
    // 0x8008708C: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
L_80087090:
    // 0x80087090: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80087094: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80087098: lb          $t5, 0x0($t3)
    ctx->r13 = MEM_B(ctx->r11, 0X0);
    // 0x8008709C: nop

    // 0x800870A0: sb          $t5, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r13;
    // 0x800870A4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800870A8: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800870AC: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x800870B0: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x800870B4: addiu       $t7, $t0, -0x1
    ctx->r15 = ADD32(ctx->r8, -0X1);
    // 0x800870B8: addiu       $t6, $t1, 0x1
    ctx->r14 = ADD32(ctx->r9, 0X1);
    // 0x800870BC: addiu       $t2, $t8, 0x1
    ctx->r10 = ADD32(ctx->r24, 0X1);
    // 0x800870C0: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x800870C4: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x800870C8: bne         $s0, $zero, L_80087090
    if (ctx->r16 != 0) {
        // 0x800870CC: sw          $t7, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r15;
            goto L_80087090;
    }
    // 0x800870CC: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
L_800870D0:
    // 0x800870D0: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x800870D4: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x800870D8: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x800870DC: lw          $t3, 0x438($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X438);
    // 0x800870E0: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x800870E4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800870E8: addu        $t8, $t3, $t9
    ctx->r24 = ADD32(ctx->r11, ctx->r25);
    // 0x800870EC: lw          $t2, 0x0($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X0);
    // 0x800870F0: sll         $t1, $t5, 4
    ctx->r9 = S32(ctx->r13 << 4);
    // 0x800870F4: addu        $t6, $t4, $t1
    ctx->r14 = ADD32(ctx->r12, ctx->r9);
    // 0x800870F8: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x800870FC: lw          $t0, 0x18($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X18);
    // 0x80087100: nop

    // 0x80087104: addu        $t7, $t0, $t2
    ctx->r15 = ADD32(ctx->r8, ctx->r10);
    // 0x80087108: lb          $t3, 0x0($t7)
    ctx->r11 = MEM_B(ctx->r15, 0X0);
    // 0x8008710C: sb          $zero, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = 0;
    // 0x80087110: sra         $t9, $t3, 4
    ctx->r25 = S32(SIGNED(ctx->r11) >> 4);
    // 0x80087114: sb          $t9, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r25;
    // 0x80087118: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
L_8008711C:
    // 0x8008711C: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80087120: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80087124: sll         $t4, $t5, 4
    ctx->r12 = S32(ctx->r13 << 4);
    // 0x80087128: addu        $t1, $t8, $t4
    ctx->r9 = ADD32(ctx->r24, ctx->r12);
    // 0x8008712C: lw          $t6, 0x18($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X18);
    // 0x80087130: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x80087134: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80087138: addu        $t2, $t6, $t0
    ctx->r10 = ADD32(ctx->r14, ctx->r8);
    // 0x8008713C: lb          $t7, 0x0($t2)
    ctx->r15 = MEM_B(ctx->r10, 0X0);
    // 0x80087140: lbu         $t3, 0x2D($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X2D);
    // 0x80087144: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x80087148: addu        $t4, $t0, $t8
    ctx->r12 = ADD32(ctx->r8, ctx->r24);
    // 0x8008714C: subu        $t9, $t7, $t3
    ctx->r25 = SUB32(ctx->r15, ctx->r11);
    // 0x80087150: sb          $t9, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r25;
    // 0x80087154: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80087158: lbu         $t1, 0x2D($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X2D);
    // 0x8008715C: lbu         $t2, 0x2C($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X2C);
    // 0x80087160: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x80087164: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x80087168: addu        $t7, $t1, $t2
    ctx->r15 = ADD32(ctx->r9, ctx->r10);
    // 0x8008716C: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
    // 0x80087170: bne         $at, $zero, L_8008711C
    if (ctx->r1 != 0) {
        // 0x80087174: sb          $t7, 0x2D($sp)
        MEM_B(0X2D, ctx->r29) = ctx->r15;
            goto L_8008711C;
    }
    // 0x80087174: sb          $t7, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r15;
L_80087178:
    // 0x80087178: jal         0x8007E4A4
    // 0x8008717C: nop

    func_8007E4A4(rdram, ctx);
        goto after_12;
    // 0x8008717C: nop

    after_12:
    // 0x80087180: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80087184: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80087188: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8008718C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80087190: addiu       $a1, $a1, -0x7EC
    ctx->r5 = ADD32(ctx->r5, -0X7EC);
    // 0x80087194: addiu       $a0, $a0, -0x81C
    ctx->r4 = ADD32(ctx->r4, -0X81C);
    // 0x80087198: jal         0x800B3BFC
    // 0x8008719C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_13;
    // 0x8008719C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_13:
    // 0x800871A0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800871A4: jal         0x8007E328
    // 0x800871A8: nop

    func_8007E328(rdram, ctx);
        goto after_14;
    // 0x800871A8: nop

    after_14:
L_800871AC:
    // 0x800871AC: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x800871B0: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x800871B4: sll         $t8, $t0, 4
    ctx->r24 = S32(ctx->r8 << 4);
    // 0x800871B8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x800871BC: lhu         $t4, 0x24($t9)
    ctx->r12 = MEM_HU(ctx->r25, 0X24);
    // 0x800871C0: nop

    // 0x800871C4: andi        $t1, $t4, 0x4
    ctx->r9 = ctx->r12 & 0X4;
    // 0x800871C8: beq         $t1, $zero, L_800872C4
    if (ctx->r9 == 0) {
        // 0x800871CC: nop
    
            goto L_800872C4;
    }
    // 0x800871CC: nop

    // 0x800871D0: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x800871D4: lw          $t2, 0x438($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X438);
    // 0x800871D8: subu        $t7, $t7, $t0
    ctx->r15 = SUB32(ctx->r15, ctx->r8);
    // 0x800871DC: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x800871E0: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x800871E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800871E8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800871EC: addu        $t3, $t2, $t7
    ctx->r11 = ADD32(ctx->r10, ctx->r15);
    // 0x800871F0: addiu       $t5, $t3, 0x948
    ctx->r13 = ADD32(ctx->r11, 0X948);
    // 0x800871F4: addu        $t9, $t2, $t8
    ctx->r25 = ADD32(ctx->r10, ctx->r24);
    // 0x800871F8: sw          $t5, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r13;
    // 0x800871FC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80087200: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x80087204: sll         $t6, $t1, 4
    ctx->r14 = S32(ctx->r9 << 4);
    // 0x80087208: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8008720C: lw          $t0, 0x438($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X438);
    // 0x80087210: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80087214: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x80087218: lw          $t3, 0x1C($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X1C);
    // 0x8008721C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80087220: addu        $t8, $t0, $t2
    ctx->r24 = ADD32(ctx->r8, ctx->r10);
    // 0x80087224: sw          $t3, 0x948($t8)
    MEM_W(0X948, ctx->r24) = ctx->r11;
    // 0x80087228: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8008722C: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x80087230: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x80087234: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80087238: lw          $t1, 0x438($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X438);
    // 0x8008723C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80087240: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80087244: lw          $t4, 0x20($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X20);
    // 0x80087248: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008724C: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x80087250: sw          $t4, 0x94C($t2)
    MEM_W(0X94C, ctx->r10) = ctx->r12;
    // 0x80087254: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80087258: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x8008725C: sll         $t6, $t8, 4
    ctx->r14 = S32(ctx->r24 << 4);
    // 0x80087260: lw          $t9, 0x438($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X438);
    // 0x80087264: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x80087268: lw          $t5, 0x1C($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X1C);
    // 0x8008726C: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80087270: addu        $t0, $t9, $t1
    ctx->r8 = ADD32(ctx->r25, ctx->r9);
    // 0x80087274: sw          $t5, 0x738($t0)
    MEM_W(0X738, ctx->r8) = ctx->r13;
    // 0x80087278: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x8008727C: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x80087280: sll         $t6, $t2, 4
    ctx->r14 = S32(ctx->r10 << 4);
    // 0x80087284: lw          $t8, 0x438($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X438);
    // 0x80087288: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x8008728C: lw          $t3, 0x20($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X20);
    // 0x80087290: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x80087294: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x80087298: sw          $t3, 0x840($t1)
    MEM_W(0X840, ctx->r9) = ctx->r11;
    // 0x8008729C: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x800872A0: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x800872A4: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x800872A8: lw          $t6, 0x438($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X438);
    // 0x800872AC: subu        $t4, $t4, $t7
    ctx->r12 = SUB32(ctx->r12, ctx->r15);
    // 0x800872B0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800872B4: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x800872B8: addu        $t2, $t6, $t4
    ctx->r10 = ADD32(ctx->r14, ctx->r12);
    // 0x800872BC: b           L_80087304
    // 0x800872C0: sw          $t5, 0x950($t2)
    MEM_W(0X950, ctx->r10) = ctx->r13;
        goto L_80087304;
    // 0x800872C0: sw          $t5, 0x950($t2)
    MEM_W(0X950, ctx->r10) = ctx->r13;
L_800872C4:
    // 0x800872C4: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x800872C8: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x800872CC: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x800872D0: lw          $t9, 0x438($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X438);
    // 0x800872D4: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x800872D8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800872DC: addu        $t0, $t9, $t1
    ctx->r8 = ADD32(ctx->r25, ctx->r9);
    // 0x800872E0: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
    // 0x800872E4: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x800872E8: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x800872EC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800872F0: lw          $t6, 0x438($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X438);
    // 0x800872F4: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800872F8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800872FC: addu        $t2, $t6, $t5
    ctx->r10 = ADD32(ctx->r14, ctx->r13);
    // 0x80087300: sw          $zero, 0x950($t2)
    MEM_W(0X950, ctx->r10) = 0;
L_80087304:
    // 0x80087304: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80087308: nop

    // 0x8008730C: lbu         $t3, 0x1572($t8)
    ctx->r11 = MEM_BU(ctx->r24, 0X1572);
    // 0x80087310: nop

    // 0x80087314: addiu       $t9, $t3, 0x1
    ctx->r25 = ADD32(ctx->r11, 0X1);
    // 0x80087318: sb          $t9, 0x1572($t8)
    MEM_B(0X1572, ctx->r24) = ctx->r25;
    // 0x8008731C: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80087320: nop

    // 0x80087324: lbu         $t0, 0x1572($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X1572);
    // 0x80087328: lbu         $t7, 0x41D($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X41D);
    // 0x8008732C: nop

    // 0x80087330: bne         $t0, $t7, L_80087468
    if (ctx->r8 != ctx->r15) {
        // 0x80087334: nop
    
            goto L_80087468;
    }
    // 0x80087334: nop

    // 0x80087338: sb          $zero, 0x1570($t1)
    MEM_B(0X1570, ctx->r9) = 0;
    // 0x8008733C: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
L_80087340:
    // 0x80087340: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80087344: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x80087348: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008734C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80087350: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80087354: lw          $t5, 0x43C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X43C);
    // 0x80087358: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8008735C: lw          $t6, 0x438($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X438);
    // 0x80087360: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80087364: addu        $t9, $t5, $t3
    ctx->r25 = ADD32(ctx->r13, ctx->r11);
    // 0x80087368: sw          $t6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->r14;
    // 0x8008736C: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80087370: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80087374: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x80087378: subu        $t1, $t1, $t7
    ctx->r9 = SUB32(ctx->r9, ctx->r15);
    // 0x8008737C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80087380: lw          $t0, 0x43C($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X43C);
    // 0x80087384: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80087388: subu        $t1, $t1, $t7
    ctx->r9 = SUB32(ctx->r9, ctx->r15);
    // 0x8008738C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80087390: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80087394: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x80087398: swc1        $f4, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f4.u32l;
    // 0x8008739C: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x800873A0: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x800873A4: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x800873A8: subu        $t6, $t6, $t3
    ctx->r14 = SUB32(ctx->r14, ctx->r11);
    // 0x800873AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800873B0: lw          $t5, 0x43C($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X43C);
    // 0x800873B4: subu        $t6, $t6, $t3
    ctx->r14 = SUB32(ctx->r14, ctx->r11);
    // 0x800873B8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800873BC: addu        $t9, $t5, $t6
    ctx->r25 = ADD32(ctx->r13, ctx->r14);
    // 0x800873C0: sh          $zero, 0x24($t9)
    MEM_H(0X24, ctx->r25) = 0;
    // 0x800873C4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800873C8: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x800873CC: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x800873D0: subu        $t4, $t4, $t1
    ctx->r12 = SUB32(ctx->r12, ctx->r9);
    // 0x800873D4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800873D8: lw          $t0, 0x43C($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X43C);
    // 0x800873DC: subu        $t4, $t4, $t1
    ctx->r12 = SUB32(ctx->r12, ctx->r9);
    // 0x800873E0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800873E4: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x800873E8: addu        $t2, $t0, $t4
    ctx->r10 = ADD32(ctx->r8, ctx->r12);
    // 0x800873EC: sb          $t8, 0x26($t2)
    MEM_B(0X26, ctx->r10) = ctx->r24;
    // 0x800873F0: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x800873F4: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x800873F8: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800873FC: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x80087400: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80087404: lw          $t5, 0x43C($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X43C);
    // 0x80087408: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x8008740C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80087410: addu        $t7, $t5, $t9
    ctx->r15 = ADD32(ctx->r13, ctx->r25);
    // 0x80087414: sb          $zero, 0x27($t7)
    MEM_B(0X27, ctx->r15) = 0;
    // 0x80087418: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x8008741C: nop

    // 0x80087420: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x80087424: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x80087428: bne         $at, $zero, L_80087340
    if (ctx->r1 != 0) {
        // 0x8008742C: sw          $t0, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r8;
            goto L_80087340;
    }
    // 0x8008742C: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    // 0x80087430: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80087434: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80087438: sb          $t4, 0x1584($t8)
    MEM_B(0X1584, ctx->r24) = ctx->r12;
    // 0x8008743C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80087440: lw          $t3, 0x3B3C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B3C);
    // 0x80087444: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x80087448: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008744C: lw          $a1, 0x1574($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X1574);
    // 0x80087450: addiu       $a0, $a0, -0x7D8
    ctx->r4 = ADD32(ctx->r4, -0X7D8);
    // 0x80087454: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80087458: jal         0x800B3BFC
    // 0x8008745C: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_15;
    // 0x8008745C: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    after_15:
    // 0x80087460: jal         0x800B6650
    // 0x80087464: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_16;
    // 0x80087464: nop

    after_16:
L_80087468:
    // 0x80087468: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8008746C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80087470: jr          $ra
    // 0x80087474: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80087474: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80087478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087478: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008747C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80087480: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80087484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80087488: lhu         $a2, 0x1E($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X1E);
    // 0x8008748C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80087490: lui         $a0, 0x7C
    ctx->r4 = S32(0X7C << 16);
    // 0x80087494: jal         0x800746C0
    // 0x80087498: addiu       $a0, $a0, 0x1960
    ctx->r4 = ADD32(ctx->r4, 0X1960);
    func_800746C0(rdram, ctx);
        goto after_0;
    // 0x80087498: addiu       $a0, $a0, 0x1960
    ctx->r4 = ADD32(ctx->r4, 0X1960);
    after_0:
    // 0x8008749C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800874A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800874A4: jr          $ra
    // 0x800874A8: nop

    return;
    // 0x800874A8: nop

;}
RECOMP_FUNC void func_800874AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800874AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800874B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800874B4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800874B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800874BC: lhu         $t7, 0x1568($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X1568);
    // 0x800874C0: nop

    // 0x800874C4: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x800874C8: sh          $t8, 0x1568($t6)
    MEM_H(0X1568, ctx->r14) = ctx->r24;
    // 0x800874CC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800874D0: nop

    // 0x800874D4: lhu         $t0, 0x156A($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X156A);
    // 0x800874D8: nop

    // 0x800874DC: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x800874E0: sh          $t1, 0x156A($t9)
    MEM_H(0X156A, ctx->r25) = ctx->r9;
    // 0x800874E4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x800874E8: nop

    // 0x800874EC: lbu         $t3, 0x156B($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X156B);
    // 0x800874F0: lbu         $t4, 0x1569($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X1569);
    // 0x800874F4: nop

    // 0x800874F8: beq         $t3, $t4, L_8008755C
    if (ctx->r11 == ctx->r12) {
        // 0x800874FC: nop
    
            goto L_8008755C;
    }
    // 0x800874FC: nop

L_80087500:
    // 0x80087500: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80087504: jal         0x8008F0D0
    // 0x80087508: addiu       $a0, $a0, 0x458
    ctx->r4 = ADD32(ctx->r4, 0X458);
    func_8008F0D0(rdram, ctx);
        goto after_0;
    // 0x80087508: addiu       $a0, $a0, 0x458
    ctx->r4 = ADD32(ctx->r4, 0X458);
    after_0:
    // 0x8008750C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80087510: nop

    // 0x80087514: lbu         $t7, 0x156B($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X156B);
    // 0x80087518: nop

    // 0x8008751C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80087520: sb          $v0, 0x1468($t8)
    MEM_B(0X1468, ctx->r24) = ctx->r2;
    // 0x80087524: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80087528: nop

    // 0x8008752C: lhu         $t0, 0x156A($t6)
    ctx->r8 = MEM_HU(ctx->r14, 0X156A);
    // 0x80087530: nop

    // 0x80087534: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80087538: andi        $t9, $t1, 0xFF
    ctx->r25 = ctx->r9 & 0XFF;
    // 0x8008753C: sh          $t9, 0x156A($t6)
    MEM_H(0X156A, ctx->r14) = ctx->r25;
    // 0x80087540: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80087544: nop

    // 0x80087548: lbu         $t3, 0x156B($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X156B);
    // 0x8008754C: lbu         $t4, 0x1569($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X1569);
    // 0x80087550: nop

    // 0x80087554: bne         $t3, $t4, L_80087500
    if (ctx->r11 != ctx->r12) {
        // 0x80087558: nop
    
            goto L_80087500;
    }
    // 0x80087558: nop

L_8008755C:
    // 0x8008755C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80087560: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80087564: jr          $ra
    // 0x80087568: nop

    return;
    // 0x80087568: nop

;}
RECOMP_FUNC void func_8008756C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008756C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80087570: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80087574: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80087578: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008757C: sh          $zero, 0x1568($t6)
    MEM_H(0X1568, ctx->r14) = 0;
    // 0x80087580: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80087584: nop

    // 0x80087588: sh          $zero, 0x156A($t7)
    MEM_H(0X156A, ctx->r15) = 0;
    // 0x8008758C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80087590: nop

    // 0x80087594: sw          $zero, 0x156C($t8)
    MEM_W(0X156C, ctx->r24) = 0;
    // 0x80087598: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8008759C:
    // 0x8008759C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800875A0: jal         0x8008F0D0
    // 0x800875A4: addiu       $a0, $a0, 0x458
    ctx->r4 = ADD32(ctx->r4, 0X458);
    func_8008F0D0(rdram, ctx);
        goto after_0;
    // 0x800875A4: addiu       $a0, $a0, 0x458
    ctx->r4 = ADD32(ctx->r4, 0X458);
    after_0:
    // 0x800875A8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800875AC: lbu         $t0, 0x1F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1F);
    // 0x800875B0: nop

    // 0x800875B4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800875B8: sb          $v0, 0x1468($t1)
    MEM_B(0X1468, ctx->r9) = ctx->r2;
    // 0x800875BC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800875C0: nop

    // 0x800875C4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800875C8: slti        $at, $t3, 0x100
    ctx->r1 = SIGNED(ctx->r11) < 0X100 ? 1 : 0;
    // 0x800875CC: bne         $at, $zero, L_8008759C
    if (ctx->r1 != 0) {
        // 0x800875D0: sw          $t3, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r11;
            goto L_8008759C;
    }
    // 0x800875D0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800875D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800875D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800875DC: jr          $ra
    // 0x800875E0: nop

    return;
    // 0x800875E0: nop

;}
RECOMP_FUNC void func_800875E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800875E4: jr          $ra
    // 0x800875E8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x800875E8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_800875EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800875EC: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x800875F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800875F4: sh          $a0, 0x157C($a1)
    MEM_H(0X157C, ctx->r5) = ctx->r4;
    // 0x800875F8: jr          $ra
    // 0x800875FC: sb          $t6, 0x1587($a1)
    MEM_B(0X1587, ctx->r5) = ctx->r14;
    return;
    // 0x800875FC: sb          $t6, 0x1587($a1)
    MEM_B(0X1587, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_80087600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087600: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80087604: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80087608: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008760C: sb          $a0, 0x158D($a1)
    MEM_B(0X158D, ctx->r5) = ctx->r4;
    // 0x80087610: jr          $ra
    // 0x80087614: sb          $t6, 0x158C($a1)
    MEM_B(0X158C, ctx->r5) = ctx->r14;
    return;
    // 0x80087614: sb          $t6, 0x158C($a1)
    MEM_B(0X158C, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_80087618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087618: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008761C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80087620: lhu         $t6, 0x22($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X22);
    // 0x80087624: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80087628: slt         $at, $t6, $at
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8008762C: bne         $at, $zero, L_8008763C
    if (ctx->r1 != 0) {
        // 0x80087630: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8008763C;
    }
    // 0x80087630: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80087634: addiu       $t7, $zero, 0x7FFF
    ctx->r15 = ADD32(0, 0X7FFF);
    // 0x80087638: sh          $t7, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r15;
L_8008763C:
    // 0x8008763C: lhu         $t8, 0x22($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X22);
    // 0x80087640: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80087644: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    // 0x80087648: sh          $t8, -0x7328($at)
    MEM_H(-0X7328, ctx->r1) = ctx->r24;
L_8008764C:
    // 0x8008764C: lhu         $t9, 0x1E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X1E);
    // 0x80087650: nop

    // 0x80087654: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80087658: bgez        $t9, L_80087670
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8008765C: cvt.s.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80087670;
    }
    // 0x8008765C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80087660: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80087664: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80087668: nop

    // 0x8008766C: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
L_80087670:
    // 0x80087670: jal         0x800B8340
    // 0x80087674: nop

    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x80087674: nop

    after_0:
    // 0x80087678: lhu         $t0, 0x22($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X22);
    // 0x8008767C: nop

    // 0x80087680: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80087684: bgez        $t0, L_8008769C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80087688: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8008769C;
    }
    // 0x80087688: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008768C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80087690: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80087694: nop

    // 0x80087698: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_8008769C:
    // 0x8008769C: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800876A0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x800876A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800876A8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800876AC: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800876B0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800876B4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800876B8: nop

    // 0x800876BC: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800876C0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800876C4: nop

    // 0x800876C8: andi        $at, $t2, 0x4
    ctx->r1 = ctx->r10 & 0X4;
    // 0x800876CC: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x800876D0: beq         $t2, $zero, L_80087720
    if (ctx->r10 == 0) {
        // 0x800876D4: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_80087720;
    }
    // 0x800876D4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800876D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800876DC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800876E0: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800876E4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800876E8: nop

    // 0x800876EC: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800876F0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800876F4: nop

    // 0x800876F8: andi        $at, $t2, 0x4
    ctx->r1 = ctx->r10 & 0X4;
    // 0x800876FC: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80087700: bne         $t2, $zero, L_80087718
    if (ctx->r10 != 0) {
        // 0x80087704: nop
    
            goto L_80087718;
    }
    // 0x80087704: nop

    // 0x80087708: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x8008770C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80087710: b           L_80087730
    // 0x80087714: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_80087730;
    // 0x80087714: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_80087718:
    // 0x80087718: b           L_80087730
    // 0x8008771C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_80087730;
    // 0x8008771C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
L_80087720:
    // 0x80087720: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80087724: nop

    // 0x80087728: bltz        $t2, L_80087718
    if (SIGNED(ctx->r10) < 0) {
        // 0x8008772C: nop
    
            goto L_80087718;
    }
    // 0x8008772C: nop

L_80087730:
    // 0x80087730: lhu         $t3, 0x1E($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X1E);
    // 0x80087734: lhu         $t5, 0x1E($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X1E);
    // 0x80087738: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008773C: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80087740: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80087744: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80087748: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x8008774C: sh          $t2, -0x7528($at)
    MEM_H(-0X7528, ctx->r1) = ctx->r10;
    // 0x80087750: slti        $at, $t7, 0x100
    ctx->r1 = SIGNED(ctx->r15) < 0X100 ? 1 : 0;
    // 0x80087754: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80087758: bne         $at, $zero, L_8008764C
    if (ctx->r1 != 0) {
        // 0x8008775C: sh          $t6, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r14;
            goto L_8008764C;
    }
    // 0x8008775C: sh          $t6, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r14;
    // 0x80087760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80087764: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80087768: jr          $ra
    // 0x8008776C: nop

    return;
    // 0x8008776C: nop

;}
RECOMP_FUNC void func_80087770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087770: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80087774: jr          $ra
    // 0x80087778: sb          $t6, 0x1599($a0)
    MEM_B(0X1599, ctx->r4) = ctx->r14;
    return;
    // 0x80087778: sb          $t6, 0x1599($a0)
    MEM_B(0X1599, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_8008777C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008777C: jr          $ra
    // 0x80087780: sb          $zero, 0x1599($a0)
    MEM_B(0X1599, ctx->r4) = 0;
    return;
    // 0x80087780: sb          $zero, 0x1599($a0)
    MEM_B(0X1599, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80087784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087784: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80087788: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008778C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80087790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80087794: lbu         $t7, 0x1599($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1599);
    // 0x80087798: nop

    // 0x8008779C: bne         $t7, $zero, L_800877FC
    if (ctx->r15 != 0) {
        // 0x800877A0: nop
    
            goto L_800877FC;
    }
    // 0x800877A0: nop

    // 0x800877A4: lbu         $t8, 0x454($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X454);
    // 0x800877A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800877AC: beq         $t8, $at, L_800877FC
    if (ctx->r24 == ctx->r1) {
        // 0x800877B0: nop
    
            goto L_800877FC;
    }
    // 0x800877B0: nop

    // 0x800877B4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800877B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800877BC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800877C0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800877C4: sh          $t9, -0x7240($at)
    MEM_H(-0X7240, ctx->r1) = ctx->r25;
    // 0x800877C8: sw          $t6, -0x723C($at)
    MEM_W(-0X723C, ctx->r1) = ctx->r14;
    // 0x800877CC: addiu       $a1, $a1, -0x7240
    ctx->r5 = ADD32(ctx->r5, -0X7240);
    // 0x800877D0: addiu       $a0, $a0, -0x7320
    ctx->r4 = ADD32(ctx->r4, -0X7320);
    // 0x800877D4: jal         0x800B8BE0
    // 0x800877D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osJamMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x800877D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800877DC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800877E0: addiu       $a0, $a0, -0x72E8
    ctx->r4 = ADD32(ctx->r4, -0X72E8);
    // 0x800877E4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x800877E8: jal         0x800B3C20
    // 0x800877EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800877EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x800877F0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800877F4: jal         0x800B3BFC
    // 0x800877F8: addiu       $a0, $a0, -0x7B0
    ctx->r4 = ADD32(ctx->r4, -0X7B0);
    osSyncPrintf(rdram, ctx);
        goto after_2;
    // 0x800877F8: addiu       $a0, $a0, -0x7B0
    ctx->r4 = ADD32(ctx->r4, -0X7B0);
    after_2:
L_800877FC:
    // 0x800877FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80087800: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80087804: jr          $ra
    // 0x80087808: nop

    return;
    // 0x80087808: nop

;}
RECOMP_FUNC void func_8008780C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008780C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80087810: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80087814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80087818: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008781C: jal         0x80087770
    // 0x80087820: nop

    func_80087770(rdram, ctx);
        goto after_0;
    // 0x80087820: nop

    after_0:
    // 0x80087824: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80087828: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008782C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80087830: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80087834: sh          $zero, -0x7240($at)
    MEM_H(-0X7240, ctx->r1) = 0;
    // 0x80087838: addiu       $a1, $a1, -0x7240
    ctx->r5 = ADD32(ctx->r5, -0X7240);
    // 0x8008783C: addiu       $a0, $a0, -0x7320
    ctx->r4 = ADD32(ctx->r4, -0X7320);
    // 0x80087840: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80087844: jal         0x800B8BE0
    // 0x80087848: sw          $t6, -0x723C($at)
    MEM_W(-0X723C, ctx->r1) = ctx->r14;
    osJamMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80087848: sw          $t6, -0x723C($at)
    MEM_W(-0X723C, ctx->r1) = ctx->r14;
    after_1:
    // 0x8008784C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80087850: addiu       $a0, $a0, -0x72E8
    ctx->r4 = ADD32(ctx->r4, -0X72E8);
    // 0x80087854: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80087858: jal         0x800B3C20
    // 0x8008785C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x8008785C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80087860: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80087864: jal         0x8008777C
    // 0x80087868: nop

    func_8008777C(rdram, ctx);
        goto after_3;
    // 0x80087868: nop

    after_3:
    // 0x8008786C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80087870: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80087874: jr          $ra
    // 0x80087878: nop

    return;
    // 0x80087878: nop

;}
RECOMP_FUNC void func_8008787C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008787C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80087880: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80087884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80087888: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8008788C: jal         0x8008780C
    // 0x80087890: nop

    func_8008780C(rdram, ctx);
        goto after_0;
    // 0x80087890: nop

    after_0:
    // 0x80087894: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80087898: jal         0x8008777C
    // 0x8008789C: nop

    func_8008777C(rdram, ctx);
        goto after_1;
    // 0x8008789C: nop

    after_1:
    // 0x800878A0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800878A4: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800878A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800878AC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800878B0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800878B4: sh          $t6, -0x7240($at)
    MEM_H(-0X7240, ctx->r1) = ctx->r14;
    // 0x800878B8: addiu       $a1, $a1, -0x7240
    ctx->r5 = ADD32(ctx->r5, -0X7240);
    // 0x800878BC: addiu       $a0, $a0, -0x7320
    ctx->r4 = ADD32(ctx->r4, -0X7320);
    // 0x800878C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800878C4: jal         0x800B8BE0
    // 0x800878C8: sw          $t7, -0x723C($at)
    MEM_W(-0X723C, ctx->r1) = ctx->r15;
    osJamMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x800878C8: sw          $t7, -0x723C($at)
    MEM_W(-0X723C, ctx->r1) = ctx->r15;
    after_2:
    // 0x800878CC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800878D0: addiu       $a0, $a0, -0x72E8
    ctx->r4 = ADD32(ctx->r4, -0X72E8);
    // 0x800878D4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x800878D8: jal         0x800B3C20
    // 0x800878DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x800878DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x800878E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800878E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800878E8: jr          $ra
    // 0x800878EC: nop

    return;
    // 0x800878EC: nop

;}
RECOMP_FUNC void func_800878F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800878F0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800878F4: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x800878F8: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x800878FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80087900: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80087904: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80087908: addiu       $a0, $a0, -0x7320
    ctx->r4 = ADD32(ctx->r4, -0X7320);
    // 0x8008790C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80087910: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80087914: jal         0x800B3C20
    // 0x80087918: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80087918: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    after_0:
    // 0x8008791C: bne         $v0, $zero, L_80087AC4
    if (ctx->r2 != 0) {
        // 0x80087920: nop
    
            goto L_80087AC4;
    }
    // 0x80087920: nop

    // 0x80087924: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80087928: nop

    // 0x8008792C: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x80087930: nop

    // 0x80087934: sw          $t8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r24;
    // 0x80087938: lh          $s0, 0x0($t7)
    ctx->r16 = MEM_H(ctx->r15, 0X0);
    // 0x8008793C: nop

    // 0x80087940: beq         $s0, $zero, L_80087960
    if (ctx->r16 == 0) {
        // 0x80087944: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80087960;
    }
    // 0x80087944: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80087948: beq         $s0, $at, L_80087A2C
    if (ctx->r16 == ctx->r1) {
        // 0x8008794C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80087A2C;
    }
    // 0x8008794C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80087950: beq         $s0, $at, L_80087A5C
    if (ctx->r16 == ctx->r1) {
        // 0x80087954: nop
    
            goto L_80087A5C;
    }
    // 0x80087954: nop

    // 0x80087958: b           L_80087AB8
    // 0x8008795C: nop

        goto L_80087AB8;
    // 0x8008795C: nop

L_80087960:
    // 0x80087960: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80087964: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x80087968: lw          $t0, 0x440($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X440);
    // 0x8008796C: nop

    // 0x80087970: blez        $t0, L_800879EC
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80087974: nop
    
            goto L_800879EC;
    }
    // 0x80087974: nop

L_80087978:
    // 0x80087978: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x8008797C: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80087980: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80087984: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80087988: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008798C: lw          $t2, 0x43C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X43C);
    // 0x80087990: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80087994: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80087998: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8008799C: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
    // 0x800879A0: lbu         $t6, 0x27($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X27);
    // 0x800879A4: nop

    // 0x800879A8: beq         $t6, $zero, L_800879C8
    if (ctx->r14 == 0) {
        // 0x800879AC: nop
    
            goto L_800879C8;
    }
    // 0x800879AC: nop

    // 0x800879B0: sb          $zero, 0x27($t5)
    MEM_B(0X27, ctx->r13) = 0;
    // 0x800879B4: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x800879B8: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x800879BC: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    // 0x800879C0: jal         0x800B8B60
    // 0x800879C4: nop

    alSynStopVoice(rdram, ctx);
        goto after_1;
    // 0x800879C4: nop

    after_1:
L_800879C8:
    // 0x800879C8: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800879CC: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x800879D0: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x800879D4: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x800879D8: lw          $t1, 0x440($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X440);
    // 0x800879DC: nop

    // 0x800879E0: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800879E4: bne         $at, $zero, L_80087978
    if (ctx->r1 != 0) {
        // 0x800879E8: nop
    
            goto L_80087978;
    }
    // 0x800879E8: nop

L_800879EC:
    // 0x800879EC: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x800879F0: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x800879F4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800879F8: addiu       $a0, $a0, -0x72E8
    ctx->r4 = ADD32(ctx->r4, -0X72E8);
    // 0x800879FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80087A00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80087A04: jal         0x800B34D0
    // 0x80087A08: sb          $t3, 0x454($t2)
    MEM_B(0X454, ctx->r10) = ctx->r11;
    osSendMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80087A08: sb          $t3, 0x454($t2)
    MEM_B(0X454, ctx->r10) = ctx->r11;
    after_2:
    // 0x80087A0C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80087A10: nop

    // 0x80087A14: sh          $zero, 0x0($t4)
    MEM_H(0X0, ctx->r12) = 0;
    // 0x80087A18: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x80087A1C: nop

    // 0x80087A20: lw          $v0, 0x1578($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X1578);
    // 0x80087A24: b           L_80088B94
    // 0x80087A28: nop

        goto L_80088B94;
    // 0x80087A28: nop

L_80087A2C:
    // 0x80087A2C: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80087A30: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80087A34: sb          $t5, 0x454($t8)
    MEM_B(0X454, ctx->r24) = ctx->r13;
    // 0x80087A38: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80087A3C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80087A40: addiu       $a0, $a0, -0x72E8
    ctx->r4 = ADD32(ctx->r4, -0X72E8);
    // 0x80087A44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80087A48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80087A4C: jal         0x800B34D0
    // 0x80087A50: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x80087A50: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    after_3:
    // 0x80087A54: b           L_80087AC4
    // 0x80087A58: nop

        goto L_80087AC4;
    // 0x80087A58: nop

L_80087A5C:
    // 0x80087A5C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80087A60: nop

    // 0x80087A64: sb          $zero, 0x1586($t0)
    MEM_B(0X1586, ctx->r8) = 0;
    // 0x80087A68: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80087A6C: nop

    // 0x80087A70: lw          $a0, 0x444($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X444);
    // 0x80087A74: jal         0x8008EFA0
    // 0x80087A78: addiu       $a1, $t9, 0x458
    ctx->r5 = ADD32(ctx->r25, 0X458);
    func_8008EFA0(rdram, ctx);
        goto after_4;
    // 0x80087A78: addiu       $a1, $t9, 0x458
    ctx->r5 = ADD32(ctx->r25, 0X458);
    after_4:
    // 0x80087A7C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80087A80: jal         0x8008756C
    // 0x80087A84: nop

    func_8008756C(rdram, ctx);
        goto after_5;
    // 0x80087A84: nop

    after_5:
    // 0x80087A88: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80087A8C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80087A90: addiu       $a0, $a0, -0x72E8
    ctx->r4 = ADD32(ctx->r4, -0X72E8);
    // 0x80087A94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80087A98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80087A9C: jal         0x800B34D0
    // 0x80087AA0: sh          $zero, 0x0($t1)
    MEM_H(0X0, ctx->r9) = 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x80087AA0: sh          $zero, 0x0($t1)
    MEM_H(0X0, ctx->r9) = 0;
    after_6:
    // 0x80087AA4: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x80087AA8: nop

    // 0x80087AAC: lw          $v0, 0x1578($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X1578);
    // 0x80087AB0: b           L_80088B94
    // 0x80087AB4: nop

        goto L_80088B94;
    // 0x80087AB4: nop

L_80087AB8:
    // 0x80087AB8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80087ABC: nop

    // 0x80087AC0: sh          $zero, 0x0($t2)
    MEM_H(0X0, ctx->r10) = 0;
L_80087AC4:
    // 0x80087AC4: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x80087AC8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80087ACC: lbu         $t6, 0x454($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X454);
    // 0x80087AD0: nop

    // 0x80087AD4: bne         $t6, $at, L_80087AE8
    if (ctx->r14 != ctx->r1) {
        // 0x80087AD8: nop
    
            goto L_80087AE8;
    }
    // 0x80087AD8: nop

    // 0x80087ADC: lw          $v0, 0x1578($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X1578);
    // 0x80087AE0: b           L_80088B94
    // 0x80087AE4: nop

        goto L_80088B94;
    // 0x80087AE4: nop

L_80087AE8:
    // 0x80087AE8: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x80087AEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80087AF0: lbu         $t8, 0x454($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0X454);
    // 0x80087AF4: nop

    // 0x80087AF8: bne         $t8, $at, L_80088B84
    if (ctx->r24 != ctx->r1) {
        // 0x80087AFC: nop
    
            goto L_80088B84;
    }
    // 0x80087AFC: nop

    // 0x80087B00: lw          $t7, 0x156C($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X156C);
    // 0x80087B04: lw          $t0, 0x450($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X450);
    // 0x80087B08: nop

    // 0x80087B0C: sltu        $at, $t7, $t0
    ctx->r1 = ctx->r15 < ctx->r8 ? 1 : 0;
    // 0x80087B10: bne         $at, $zero, L_80087C40
    if (ctx->r1 != 0) {
        // 0x80087B14: nop
    
            goto L_80087C40;
    }
    // 0x80087B14: nop

    // 0x80087B18: lbu         $t9, 0x158E($t5)
    ctx->r25 = MEM_BU(ctx->r13, 0X158E);
    // 0x80087B1C: nop

    // 0x80087B20: beq         $t9, $zero, L_80087C20
    if (ctx->r25 == 0) {
        // 0x80087B24: nop
    
            goto L_80087C20;
    }
    // 0x80087B24: nop

    // 0x80087B28: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80087B2C: lw          $a1, -0x7224($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7224);
    // 0x80087B30: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80087B34: lhu         $a2, 0x1580($t5)
    ctx->r6 = MEM_HU(ctx->r13, 0X1580);
    // 0x80087B38: jal         0x800B3BFC
    // 0x80087B3C: addiu       $a0, $a0, -0x794
    ctx->r4 = ADD32(ctx->r4, -0X794);
    osSyncPrintf(rdram, ctx);
        goto after_7;
    // 0x80087B3C: addiu       $a0, $a0, -0x794
    ctx->r4 = ADD32(ctx->r4, -0X794);
    after_7:
    // 0x80087B40: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80087B44: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x80087B48: lw          $t3, 0x440($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X440);
    // 0x80087B4C: nop

    // 0x80087B50: blez        $t3, L_80087BD8
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80087B54: nop
    
            goto L_80087BD8;
    }
    // 0x80087B54: nop

L_80087B58:
    // 0x80087B58: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x80087B5C: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x80087B60: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x80087B64: subu        $t8, $t8, $t4
    ctx->r24 = SUB32(ctx->r24, ctx->r12);
    // 0x80087B68: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80087B6C: lw          $t6, 0x43C($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X43C);
    // 0x80087B70: subu        $t8, $t8, $t4
    ctx->r24 = SUB32(ctx->r24, ctx->r12);
    // 0x80087B74: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80087B78: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80087B7C: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x80087B80: lbu         $t0, 0x27($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X27);
    // 0x80087B84: nop

    // 0x80087B88: beq         $t0, $zero, L_80087BA8
    if (ctx->r8 == 0) {
        // 0x80087B8C: nop
    
            goto L_80087BA8;
    }
    // 0x80087B8C: nop

    // 0x80087B90: sb          $zero, 0x27($t7)
    MEM_B(0X27, ctx->r15) = 0;
    // 0x80087B94: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80087B98: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80087B9C: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    // 0x80087BA0: jal         0x800B8B60
    // 0x80087BA4: nop

    alSynStopVoice(rdram, ctx);
        goto after_8;
    // 0x80087BA4: nop

    after_8:
L_80087BA8:
    // 0x80087BA8: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80087BAC: nop

    // 0x80087BB0: sh          $zero, 0x14($t5)
    MEM_H(0X14, ctx->r13) = 0;
    // 0x80087BB4: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80087BB8: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x80087BBC: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x80087BC0: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
    // 0x80087BC4: lw          $t4, 0x440($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X440);
    // 0x80087BC8: nop

    // 0x80087BCC: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80087BD0: bne         $at, $zero, L_80087B58
    if (ctx->r1 != 0) {
        // 0x80087BD4: nop
    
            goto L_80087B58;
    }
    // 0x80087BD4: nop

L_80087BD8:
    // 0x80087BD8: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80087BDC: nop

    // 0x80087BE0: lw          $t8, 0x448($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X448);
    // 0x80087BE4: nop

    // 0x80087BE8: sw          $t8, 0x444($t6)
    MEM_W(0X444, ctx->r14) = ctx->r24;
    // 0x80087BEC: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80087BF0: nop

    // 0x80087BF4: lw          $a0, 0x444($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X444);
    // 0x80087BF8: jal         0x8008EFA0
    // 0x80087BFC: addiu       $a1, $t0, 0x458
    ctx->r5 = ADD32(ctx->r8, 0X458);
    func_8008EFA0(rdram, ctx);
        goto after_9;
    // 0x80087BFC: addiu       $a1, $t0, 0x458
    ctx->r5 = ADD32(ctx->r8, 0X458);
    after_9:
    // 0x80087C00: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80087C04: jal         0x8008756C
    // 0x80087C08: nop

    func_8008756C(rdram, ctx);
        goto after_10;
    // 0x80087C08: nop

    after_10:
    // 0x80087C0C: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80087C10: nop

    // 0x80087C14: lw          $v0, 0x1578($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X1578);
    // 0x80087C18: b           L_80088B94
    // 0x80087C1C: nop

        goto L_80088B94;
    // 0x80087C1C: nop

L_80087C20:
    // 0x80087C20: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80087C24: nop

    // 0x80087C28: sb          $zero, 0x454($t9)
    MEM_B(0X454, ctx->r25) = 0;
    // 0x80087C2C: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x80087C30: nop

    // 0x80087C34: lw          $v0, 0x1578($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X1578);
    // 0x80087C38: b           L_80088B94
    // 0x80087C3C: nop

        goto L_80088B94;
    // 0x80087C3C: nop

L_80087C40:
    // 0x80087C40: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80087C44: jal         0x800874AC
    // 0x80087C48: nop

    func_800874AC(rdram, ctx);
        goto after_11;
    // 0x80087C48: nop

    after_11:
    // 0x80087C4C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80087C50: nop

    // 0x80087C54: lbu         $t2, 0x1587($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X1587);
    // 0x80087C58: nop

    // 0x80087C5C: beq         $t2, $zero, L_80087DE8
    if (ctx->r10 == 0) {
        // 0x80087C60: nop
    
            goto L_80087DE8;
    }
    // 0x80087C60: nop

    // 0x80087C64: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x80087C68: lw          $t3, 0x440($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X440);
    // 0x80087C6C: nop

    // 0x80087C70: blez        $t3, L_80087DDC
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80087C74: nop
    
            goto L_80087DDC;
    }
    // 0x80087C74: nop

L_80087C78:
    // 0x80087C78: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80087C7C: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x80087C80: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80087C84: subu        $t0, $t0, $t6
    ctx->r8 = SUB32(ctx->r8, ctx->r14);
    // 0x80087C88: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80087C8C: lw          $t8, 0x43C($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X43C);
    // 0x80087C90: subu        $t0, $t0, $t6
    ctx->r8 = SUB32(ctx->r8, ctx->r14);
    // 0x80087C94: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80087C98: addu        $t7, $t8, $t0
    ctx->r15 = ADD32(ctx->r24, ctx->r8);
    // 0x80087C9C: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x80087CA0: lbu         $t9, 0x27($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X27);
    // 0x80087CA4: nop

    // 0x80087CA8: beq         $t9, $zero, L_80087DB8
    if (ctx->r25 == 0) {
        // 0x80087CAC: nop
    
            goto L_80087DB8;
    }
    // 0x80087CAC: nop

    // 0x80087CB0: lh          $t5, 0x28($t7)
    ctx->r13 = MEM_H(ctx->r15, 0X28);
    // 0x80087CB4: nop

    // 0x80087CB8: bne         $t5, $zero, L_80087CC8
    if (ctx->r13 != 0) {
        // 0x80087CBC: nop
    
            goto L_80087CC8;
    }
    // 0x80087CBC: nop

    // 0x80087CC0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80087CC4: sh          $t2, 0x28($t7)
    MEM_H(0X28, ctx->r15) = ctx->r10;
L_80087CC8:
    // 0x80087CC8: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80087CCC: nop

    // 0x80087CD0: lh          $t3, 0x28($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X28);
    // 0x80087CD4: nop

    // 0x80087CD8: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80087CDC: jal         0x800B8340
    // 0x80087CE0: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    sqrtf_recomp(rdram, ctx);
        goto after_12;
    // 0x80087CE0: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_12:
    // 0x80087CE4: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x80087CE8: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80087CEC: lh          $t6, 0x157C($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X157C);
    // 0x80087CF0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80087CF4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80087CF8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80087CFC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80087D00: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80087D04: nop

    // 0x80087D08: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80087D0C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80087D10: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80087D14: nop

    // 0x80087D18: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80087D1C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80087D20: nop

    // 0x80087D24: andi        $at, $t0, 0x4
    ctx->r1 = ctx->r8 & 0X4;
    // 0x80087D28: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x80087D2C: beq         $t0, $zero, L_80087D7C
    if (ctx->r8 == 0) {
        // 0x80087D30: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_80087D7C;
    }
    // 0x80087D30: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80087D34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80087D38: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80087D3C: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80087D40: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80087D44: nop

    // 0x80087D48: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80087D4C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80087D50: nop

    // 0x80087D54: andi        $at, $t0, 0x4
    ctx->r1 = ctx->r8 & 0X4;
    // 0x80087D58: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x80087D5C: bne         $t0, $zero, L_80087D74
    if (ctx->r8 != 0) {
        // 0x80087D60: nop
    
            goto L_80087D74;
    }
    // 0x80087D60: nop

    // 0x80087D64: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x80087D68: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80087D6C: b           L_80087D8C
    // 0x80087D70: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_80087D8C;
    // 0x80087D70: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_80087D74:
    // 0x80087D74: b           L_80087D8C
    // 0x80087D78: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_80087D8C;
    // 0x80087D78: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_80087D7C:
    // 0x80087D7C: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x80087D80: nop

    // 0x80087D84: bltz        $t0, L_80087D74
    if (SIGNED(ctx->r8) < 0) {
        // 0x80087D88: nop
    
            goto L_80087D74;
    }
    // 0x80087D88: nop

L_80087D8C:
    // 0x80087D8C: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80087D90: andi        $t9, $t0, 0xFFFF
    ctx->r25 = ctx->r8 & 0XFFFF;
    // 0x80087D94: sh          $t9, 0x24($t5)
    MEM_H(0X24, ctx->r13) = ctx->r25;
    // 0x80087D98: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80087D9C: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x80087DA0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80087DA4: lh          $a2, 0x24($t7)
    ctx->r6 = MEM_H(ctx->r15, 0X24);
    // 0x80087DA8: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    // 0x80087DAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80087DB0: jal         0x8008E5A0
    // 0x80087DB4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_8008E5A0(rdram, ctx);
        goto after_13;
    // 0x80087DB4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_13:
L_80087DB8:
    // 0x80087DB8: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80087DBC: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x80087DC0: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x80087DC4: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
    // 0x80087DC8: lw          $t6, 0x440($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X440);
    // 0x80087DCC: nop

    // 0x80087DD0: slt         $at, $t3, $t6
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80087DD4: bne         $at, $zero, L_80087C78
    if (ctx->r1 != 0) {
        // 0x80087DD8: nop
    
            goto L_80087C78;
    }
    // 0x80087DD8: nop

L_80087DDC:
    // 0x80087DDC: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80087DE0: nop

    // 0x80087DE4: sb          $zero, 0x1587($t8)
    MEM_B(0X1587, ctx->r24) = 0;
L_80087DE8:
    // 0x80087DE8: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80087DEC: nop

    // 0x80087DF0: lbu         $t9, 0x158C($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X158C);
    // 0x80087DF4: nop

    // 0x80087DF8: beq         $t9, $zero, L_80087EA0
    if (ctx->r25 == 0) {
        // 0x80087DFC: nop
    
            goto L_80087EA0;
    }
    // 0x80087DFC: nop

    // 0x80087E00: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x80087E04: lw          $t5, 0x440($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X440);
    // 0x80087E08: nop

    // 0x80087E0C: blez        $t5, L_80087E94
    if (SIGNED(ctx->r13) <= 0) {
        // 0x80087E10: nop
    
            goto L_80087E94;
    }
    // 0x80087E10: nop

L_80087E14:
    // 0x80087E14: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80087E18: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x80087E1C: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80087E20: subu        $t4, $t4, $t1
    ctx->r12 = SUB32(ctx->r12, ctx->r9);
    // 0x80087E24: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80087E28: lw          $t7, 0x43C($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X43C);
    // 0x80087E2C: subu        $t4, $t4, $t1
    ctx->r12 = SUB32(ctx->r12, ctx->r9);
    // 0x80087E30: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80087E34: addu        $t3, $t7, $t4
    ctx->r11 = ADD32(ctx->r15, ctx->r12);
    // 0x80087E38: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x80087E3C: lbu         $t6, 0x27($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0X27);
    // 0x80087E40: nop

    // 0x80087E44: beq         $t6, $zero, L_80087E70
    if (ctx->r14 == 0) {
        // 0x80087E48: nop
    
            goto L_80087E70;
    }
    // 0x80087E48: nop

    // 0x80087E4C: lb          $t8, 0x158D($t2)
    ctx->r24 = MEM_B(ctx->r10, 0X158D);
    // 0x80087E50: nop

    // 0x80087E54: sb          $t8, 0x26($t3)
    MEM_B(0X26, ctx->r11) = ctx->r24;
    // 0x80087E58: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80087E5C: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80087E60: lb          $a2, 0x26($t0)
    ctx->r6 = MEM_B(ctx->r8, 0X26);
    // 0x80087E64: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    // 0x80087E68: jal         0x800B8D30
    // 0x80087E6C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    alSynSetPan(rdram, ctx);
        goto after_14;
    // 0x80087E6C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_14:
L_80087E70:
    // 0x80087E70: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80087E74: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80087E78: addiu       $t1, $t5, 0x1
    ctx->r9 = ADD32(ctx->r13, 0X1);
    // 0x80087E7C: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x80087E80: lw          $t4, 0x440($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X440);
    // 0x80087E84: nop

    // 0x80087E88: slt         $at, $t1, $t4
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80087E8C: bne         $at, $zero, L_80087E14
    if (ctx->r1 != 0) {
        // 0x80087E90: nop
    
            goto L_80087E14;
    }
    // 0x80087E90: nop

L_80087E94:
    // 0x80087E94: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80087E98: nop

    // 0x80087E9C: sb          $zero, 0x158C($t6)
    MEM_B(0X158C, ctx->r14) = 0;
L_80087EA0:
    // 0x80087EA0: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x80087EA4: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x80087EA8: lw          $t8, 0x440($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X440);
    // 0x80087EAC: nop

    // 0x80087EB0: blez        $t8, L_80088B84
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80087EB4: nop
    
            goto L_80088B84;
    }
    // 0x80087EB4: nop

L_80087EB8:
    // 0x80087EB8: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80087EBC: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80087EC0: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x80087EC4: subu        $t5, $t5, $t0
    ctx->r13 = SUB32(ctx->r13, ctx->r8);
    // 0x80087EC8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80087ECC: lw          $t9, 0x43C($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X43C);
    // 0x80087ED0: subu        $t5, $t5, $t0
    ctx->r13 = SUB32(ctx->r13, ctx->r8);
    // 0x80087ED4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80087ED8: addu        $t7, $t9, $t5
    ctx->r15 = ADD32(ctx->r25, ctx->r13);
    // 0x80087EDC: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x80087EE0: lbu         $t1, 0x1586($t3)
    ctx->r9 = MEM_BU(ctx->r11, 0X1586);
    // 0x80087EE4: nop

    // 0x80087EE8: beq         $t1, $zero, L_80087EFC
    if (ctx->r9 == 0) {
        // 0x80087EEC: nop
    
            goto L_80087EFC;
    }
    // 0x80087EEC: nop

    // 0x80087EF0: addiu       $t4, $t1, -0x1
    ctx->r12 = ADD32(ctx->r9, -0X1);
    // 0x80087EF4: b           L_80088B60
    // 0x80087EF8: sb          $t4, 0x1586($t3)
    MEM_B(0X1586, ctx->r11) = ctx->r12;
        goto L_80088B60;
    // 0x80087EF8: sb          $t4, 0x1586($t3)
    MEM_B(0X1586, ctx->r11) = ctx->r12;
L_80087EFC:
    // 0x80087EFC: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80087F00: nop

    // 0x80087F04: lhu         $t2, 0x1568($t6)
    ctx->r10 = MEM_HU(ctx->r14, 0X1568);
    // 0x80087F08: nop

    // 0x80087F0C: andi        $t8, $t2, 0xFF
    ctx->r24 = ctx->r10 & 0XFF;
    // 0x80087F10: andi        $t0, $t8, 0xFF
    ctx->r8 = ctx->r24 & 0XFF;
    // 0x80087F14: addu        $t9, $t6, $t0
    ctx->r25 = ADD32(ctx->r14, ctx->r8);
    // 0x80087F18: lbu         $t5, 0x1468($t9)
    ctx->r13 = MEM_BU(ctx->r25, 0X1468);
    // 0x80087F1C: nop

    // 0x80087F20: sb          $t5, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r13;
    // 0x80087F24: lhu         $t7, 0x1568($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X1568);
    // 0x80087F28: nop

    // 0x80087F2C: addiu       $t1, $t7, 0x1
    ctx->r9 = ADD32(ctx->r15, 0X1);
    // 0x80087F30: sh          $t1, 0x1568($t6)
    MEM_H(0X1568, ctx->r14) = ctx->r9;
    // 0x80087F34: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x80087F38: nop

    // 0x80087F3C: lw          $t3, 0x156C($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X156C);
    // 0x80087F40: nop

    // 0x80087F44: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x80087F48: sw          $t2, 0x156C($t4)
    MEM_W(0X156C, ctx->r12) = ctx->r10;
    // 0x80087F4C: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80087F50: nop

    // 0x80087F54: lbu         $t0, 0x1598($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X1598);
    // 0x80087F58: nop

    // 0x80087F5C: bne         $t0, $zero, L_80087F70
    if (ctx->r8 != 0) {
        // 0x80087F60: nop
    
            goto L_80087F70;
    }
    // 0x80087F60: nop

    // 0x80087F64: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80087F68: jal         0x800B6650
    // 0x80087F6C: sb          $t9, 0x1598($t8)
    MEM_B(0X1598, ctx->r24) = ctx->r25;
    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_15;
    // 0x80087F6C: sb          $t9, 0x1598($t8)
    MEM_B(0X1598, ctx->r24) = ctx->r25;
    after_15:
L_80087F70:
    // 0x80087F70: lbu         $t5, 0x57($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X57);
    // 0x80087F74: nop

    // 0x80087F78: andi        $t7, $t5, 0x80
    ctx->r15 = ctx->r13 & 0X80;
    // 0x80087F7C: beq         $t7, $zero, L_80087F94
    if (ctx->r15 == 0) {
        // 0x80087F80: nop
    
            goto L_80087F94;
    }
    // 0x80087F80: nop

    // 0x80087F84: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80087F88: andi        $t1, $t5, 0x7F
    ctx->r9 = ctx->r13 & 0X7F;
    // 0x80087F8C: b           L_80088B60
    // 0x80087F90: sb          $t1, 0x1586($t6)
    MEM_B(0X1586, ctx->r14) = ctx->r9;
        goto L_80088B60;
    // 0x80087F90: sb          $t1, 0x1586($t6)
    MEM_B(0X1586, ctx->r14) = ctx->r9;
L_80087F94:
    // 0x80087F94: lbu         $t3, 0x57($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X57);
    // 0x80087F98: nop

    // 0x80087F9C: andi        $t2, $t3, 0x40
    ctx->r10 = ctx->r11 & 0X40;
    // 0x80087FA0: beq         $t2, $zero, L_80088060
    if (ctx->r10 == 0) {
        // 0x80087FA4: nop
    
            goto L_80088060;
    }
    // 0x80087FA4: nop

    // 0x80087FA8: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x80087FAC: nop

    // 0x80087FB0: lhu         $t0, 0x1568($t4)
    ctx->r8 = MEM_HU(ctx->r12, 0X1568);
    // 0x80087FB4: nop

    // 0x80087FB8: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x80087FBC: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x80087FC0: andi        $t7, $t8, 0xFF
    ctx->r15 = ctx->r24 & 0XFF;
    // 0x80087FC4: andi        $t3, $t0, 0xFF
    ctx->r11 = ctx->r8 & 0XFF;
    // 0x80087FC8: andi        $t2, $t3, 0xFF
    ctx->r10 = ctx->r11 & 0XFF;
    // 0x80087FCC: addu        $t5, $t4, $t7
    ctx->r13 = ADD32(ctx->r12, ctx->r15);
    // 0x80087FD0: lbu         $t1, 0x1468($t5)
    ctx->r9 = MEM_BU(ctx->r13, 0X1468);
    // 0x80087FD4: addu        $t9, $t4, $t2
    ctx->r25 = ADD32(ctx->r12, ctx->r10);
    // 0x80087FD8: lbu         $t8, 0x1468($t9)
    ctx->r24 = MEM_BU(ctx->r25, 0X1468);
    // 0x80087FDC: sll         $t6, $t1, 8
    ctx->r14 = S32(ctx->r9 << 8);
    // 0x80087FE0: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80087FE4: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x80087FE8: lw          $t5, 0x156C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X156C);
    // 0x80087FEC: nop

    // 0x80087FF0: addiu       $t1, $t5, 0x2
    ctx->r9 = ADD32(ctx->r13, 0X2);
    // 0x80087FF4: sw          $t1, 0x156C($t4)
    MEM_W(0X156C, ctx->r12) = ctx->r9;
    // 0x80087FF8: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80087FFC: nop

    // 0x80088000: lhu         $t3, 0x1568($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X1568);
    // 0x80088004: nop

    // 0x80088008: addiu       $t2, $t3, 0x2
    ctx->r10 = ADD32(ctx->r11, 0X2);
    // 0x8008800C: sh          $t2, 0x1568($t0)
    MEM_H(0X1568, ctx->r8) = ctx->r10;
    // 0x80088010: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80088014: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80088018: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x8008801C: srl         $t8, $t6, 14
    ctx->r24 = S32(U32(ctx->r14) >> 14);
    // 0x80088020: sb          $t8, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r24;
    // 0x80088024: lbu         $t5, 0x43($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X43);
    // 0x80088028: andi        $t7, $t6, 0x3FFF
    ctx->r15 = ctx->r14 & 0X3FFF;
    // 0x8008802C: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80088030: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80088034: lw          $t3, 0x3B40($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B40);
    // 0x80088038: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x8008803C: sllv        $t1, $t7, $t5
    ctx->r9 = S32(ctx->r15 << (ctx->r13 & 31));
    // 0x80088040: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x80088044: addu        $t2, $t3, $t1
    ctx->r10 = ADD32(ctx->r11, ctx->r9);
    // 0x80088048: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x8008804C: jal         0x8008BE18
    // 0x80088050: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_8008BE18(rdram, ctx);
        goto after_16;
    // 0x80088050: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_16:
    // 0x80088054: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80088058: nop

    // 0x8008805C: swc1        $f0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f0.u32l;
L_80088060:
    // 0x80088060: lbu         $t9, 0x57($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X57);
    // 0x80088064: nop

    // 0x80088068: andi        $t8, $t9, 0x20
    ctx->r24 = ctx->r25 & 0X20;
    // 0x8008806C: beq         $t8, $zero, L_800881D8
    if (ctx->r24 == 0) {
        // 0x80088070: nop
    
            goto L_800881D8;
    }
    // 0x80088070: nop

    // 0x80088074: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80088078: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8008807C: lhu         $t7, 0x1568($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X1568);
    // 0x80088080: nop

    // 0x80088084: andi        $t5, $t7, 0xFF
    ctx->r13 = ctx->r15 & 0XFF;
    // 0x80088088: andi        $t4, $t5, 0xFF
    ctx->r12 = ctx->r13 & 0XFF;
    // 0x8008808C: addu        $t3, $t6, $t4
    ctx->r11 = ADD32(ctx->r14, ctx->r12);
    // 0x80088090: lbu         $t1, 0x1468($t3)
    ctx->r9 = MEM_BU(ctx->r11, 0X1468);
    // 0x80088094: nop

    // 0x80088098: sh          $t1, 0x28($t2)
    MEM_H(0X28, ctx->r10) = ctx->r9;
    // 0x8008809C: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x800880A0: nop

    // 0x800880A4: lhu         $t9, 0x1568($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X1568);
    // 0x800880A8: nop

    // 0x800880AC: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x800880B0: sh          $t8, 0x1568($t0)
    MEM_H(0X1568, ctx->r8) = ctx->r24;
    // 0x800880B4: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x800880B8: nop

    // 0x800880BC: lw          $t5, 0x156C($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X156C);
    // 0x800880C0: nop

    // 0x800880C4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800880C8: sw          $t6, 0x156C($t7)
    MEM_W(0X156C, ctx->r15) = ctx->r14;
    // 0x800880CC: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x800880D0: nop

    // 0x800880D4: lh          $t3, 0x28($t4)
    ctx->r11 = MEM_H(ctx->r12, 0X28);
    // 0x800880D8: nop

    // 0x800880DC: andi        $t1, $t3, 0xFF
    ctx->r9 = ctx->r11 & 0XFF;
    // 0x800880E0: sh          $t1, 0x28($t4)
    MEM_H(0X28, ctx->r12) = ctx->r9;
    // 0x800880E4: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x800880E8: nop

    // 0x800880EC: lh          $t9, 0x28($t2)
    ctx->r25 = MEM_H(ctx->r10, 0X28);
    // 0x800880F0: nop

    // 0x800880F4: bne         $t9, $zero, L_80088104
    if (ctx->r25 != 0) {
        // 0x800880F8: nop
    
            goto L_80088104;
    }
    // 0x800880F8: nop

    // 0x800880FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80088100: sh          $t8, 0x28($t2)
    MEM_H(0X28, ctx->r10) = ctx->r24;
L_80088104:
    // 0x80088104: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80088108: nop

    // 0x8008810C: lh          $t5, 0x28($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X28);
    // 0x80088110: nop

    // 0x80088114: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x80088118: jal         0x800B8340
    // 0x8008811C: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    sqrtf_recomp(rdram, ctx);
        goto after_17;
    // 0x8008811C: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_17:
    // 0x80088120: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80088124: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80088128: lh          $t7, 0x157C($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X157C);
    // 0x8008812C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80088130: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80088134: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80088138: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008813C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80088140: nop

    // 0x80088144: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80088148: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8008814C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80088150: nop

    // 0x80088154: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80088158: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8008815C: nop

    // 0x80088160: andi        $at, $t1, 0x4
    ctx->r1 = ctx->r9 & 0X4;
    // 0x80088164: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x80088168: beq         $t1, $zero, L_800881B8
    if (ctx->r9 == 0) {
        // 0x8008816C: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_800881B8;
    }
    // 0x8008816C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80088170: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80088174: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80088178: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8008817C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80088180: nop

    // 0x80088184: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80088188: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8008818C: nop

    // 0x80088190: andi        $at, $t1, 0x4
    ctx->r1 = ctx->r9 & 0X4;
    // 0x80088194: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x80088198: bne         $t1, $zero, L_800881B0
    if (ctx->r9 != 0) {
        // 0x8008819C: nop
    
            goto L_800881B0;
    }
    // 0x8008819C: nop

    // 0x800881A0: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x800881A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800881A8: b           L_800881C8
    // 0x800881AC: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_800881C8;
    // 0x800881AC: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_800881B0:
    // 0x800881B0: b           L_800881C8
    // 0x800881B4: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_800881C8;
    // 0x800881B4: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
L_800881B8:
    // 0x800881B8: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x800881BC: nop

    // 0x800881C0: bltz        $t1, L_800881B0
    if (SIGNED(ctx->r9) < 0) {
        // 0x800881C4: nop
    
            goto L_800881B0;
    }
    // 0x800881C4: nop

L_800881C8:
    // 0x800881C8: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x800881CC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800881D0: andi        $t4, $t1, 0xFFFF
    ctx->r12 = ctx->r9 & 0XFFFF;
    // 0x800881D4: sh          $t4, 0x24($t9)
    MEM_H(0X24, ctx->r25) = ctx->r12;
L_800881D8:
    // 0x800881D8: lbu         $t8, 0x57($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X57);
    // 0x800881DC: nop

    // 0x800881E0: andi        $t2, $t8, 0x10
    ctx->r10 = ctx->r24 & 0X10;
    // 0x800881E4: beq         $t2, $zero, L_80088248
    if (ctx->r10 == 0) {
        // 0x800881E8: nop
    
            goto L_80088248;
    }
    // 0x800881E8: nop

    // 0x800881EC: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x800881F0: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x800881F4: lhu         $t5, 0x1568($t0)
    ctx->r13 = MEM_HU(ctx->r8, 0X1568);
    // 0x800881F8: nop

    // 0x800881FC: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x80088200: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80088204: addu        $t3, $t0, $t7
    ctx->r11 = ADD32(ctx->r8, ctx->r15);
    // 0x80088208: lbu         $t1, 0x1468($t3)
    ctx->r9 = MEM_BU(ctx->r11, 0X1468);
    // 0x8008820C: nop

    // 0x80088210: sra         $t4, $t1, 1
    ctx->r12 = S32(SIGNED(ctx->r9) >> 1);
    // 0x80088214: sb          $t4, 0x26($t9)
    MEM_B(0X26, ctx->r25) = ctx->r12;
    // 0x80088218: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x8008821C: nop

    // 0x80088220: lhu         $t2, 0x1568($t8)
    ctx->r10 = MEM_HU(ctx->r24, 0X1568);
    // 0x80088224: nop

    // 0x80088228: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x8008822C: sh          $t5, 0x1568($t8)
    MEM_H(0X1568, ctx->r24) = ctx->r13;
    // 0x80088230: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80088234: nop

    // 0x80088238: lw          $t0, 0x156C($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X156C);
    // 0x8008823C: nop

    // 0x80088240: addiu       $t7, $t0, 0x1
    ctx->r15 = ADD32(ctx->r8, 0X1);
    // 0x80088244: sw          $t7, 0x156C($t6)
    MEM_W(0X156C, ctx->r14) = ctx->r15;
L_80088248:
    // 0x80088248: lbu         $t3, 0x57($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X57);
    // 0x8008824C: nop

    // 0x80088250: andi        $t1, $t3, 0x8
    ctx->r9 = ctx->r11 & 0X8;
    // 0x80088254: beq         $t1, $zero, L_80088414
    if (ctx->r9 == 0) {
        // 0x80088258: nop
    
            goto L_80088414;
    }
    // 0x80088258: nop

    // 0x8008825C: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x80088260: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80088264: lhu         $t9, 0x1568($t4)
    ctx->r25 = MEM_HU(ctx->r12, 0X1568);
    // 0x80088268: nop

    // 0x8008826C: andi        $t2, $t9, 0xFF
    ctx->r10 = ctx->r25 & 0XFF;
    // 0x80088270: andi        $t5, $t2, 0xFF
    ctx->r13 = ctx->r10 & 0XFF;
    // 0x80088274: addu        $t8, $t4, $t5
    ctx->r24 = ADD32(ctx->r12, ctx->r13);
    // 0x80088278: lbu         $t0, 0x1468($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X1468);
    // 0x8008827C: nop

    // 0x80088280: sb          $t0, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r8;
    // 0x80088284: lhu         $t7, 0x1568($t4)
    ctx->r15 = MEM_HU(ctx->r12, 0X1568);
    // 0x80088288: nop

    // 0x8008828C: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x80088290: sh          $t6, 0x1568($t4)
    MEM_H(0X1568, ctx->r12) = ctx->r14;
    // 0x80088294: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80088298: nop

    // 0x8008829C: lw          $t1, 0x156C($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X156C);
    // 0x800882A0: nop

    // 0x800882A4: addiu       $t9, $t1, 0x1
    ctx->r25 = ADD32(ctx->r9, 0X1);
    // 0x800882A8: sw          $t9, 0x156C($t3)
    MEM_W(0X156C, ctx->r11) = ctx->r25;
    // 0x800882AC: lbu         $t8, 0x56($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X56);
    // 0x800882B0: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x800882B4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800882B8: lw          $t5, 0x438($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X438);
    // 0x800882BC: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800882C0: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800882C4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800882C8: addu        $t7, $t5, $t0
    ctx->r15 = ADD32(ctx->r13, ctx->r8);
    // 0x800882CC: sw          $t7, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->r15;
    // 0x800882D0: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800882D4: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x800882D8: lbu         $t4, 0x56($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X56);
    // 0x800882DC: addu        $t3, $t1, $t9
    ctx->r11 = ADD32(ctx->r9, ctx->r25);
    // 0x800882E0: sb          $t4, 0x428($t3)
    MEM_B(0X428, ctx->r11) = ctx->r12;
    // 0x800882E4: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x800882E8: nop

    // 0x800882EC: lbu         $t8, 0x27($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X27);
    // 0x800882F0: nop

    // 0x800882F4: bne         $t8, $at, L_80088414
    if (ctx->r24 != ctx->r1) {
        // 0x800882F8: nop
    
            goto L_80088414;
    }
    // 0x800882F8: nop

    // 0x800882FC: lw          $t5, 0x8($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X8);
    // 0x80088300: nop

    // 0x80088304: beq         $t5, $zero, L_80088414
    if (ctx->r13 == 0) {
        // 0x80088308: nop
    
            goto L_80088414;
    }
    // 0x80088308: nop

    // 0x8008830C: lw          $t0, 0xC($t5)
    ctx->r8 = MEM_W(ctx->r13, 0XC);
    // 0x80088310: addiu       $t7, $zero, 0x140
    ctx->r15 = ADD32(0, 0X140);
    // 0x80088314: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x80088318: lw          $t6, 0x8($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X8);
    // 0x8008831C: jal         0x8008ED04
    // 0x80088320: sw          $t7, 0xD8($t6)
    MEM_W(0XD8, ctx->r14) = ctx->r15;
    __allocParam(rdram, ctx);
        goto after_18;
    // 0x80088320: sw          $t7, 0xD8($t6)
    MEM_W(0XD8, ctx->r14) = ctx->r15;
    after_18:
    // 0x80088324: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80088328: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8008832C: nop

    // 0x80088330: beq         $t1, $zero, L_800883A4
    if (ctx->r9 == 0) {
        // 0x80088334: nop
    
            goto L_800883A4;
    }
    // 0x80088334: nop

    // 0x80088338: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8008833C: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x80088340: lw          $t4, 0x14($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X14);
    // 0x80088344: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80088348: lw          $t3, 0x1C($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X1C);
    // 0x8008834C: nop

    // 0x80088350: sw          $t3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r11;
    // 0x80088354: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80088358: nop

    // 0x8008835C: sh          $t8, 0x8($t5)
    MEM_H(0X8, ctx->r13) = ctx->r24;
    // 0x80088360: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80088364: nop

    // 0x80088368: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
    // 0x8008836C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80088370: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80088374: lw          $t7, 0x8($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X8);
    // 0x80088378: nop

    // 0x8008837C: lw          $t6, 0xD8($t7)
    ctx->r14 = MEM_W(ctx->r15, 0XD8);
    // 0x80088380: nop

    // 0x80088384: addiu       $t9, $t6, -0x40
    ctx->r25 = ADD32(ctx->r14, -0X40);
    // 0x80088388: sw          $t9, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r25;
    // 0x8008838C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80088390: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80088394: lw          $t9, 0x8($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X8);
    // 0x80088398: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8008839C: jalr        $t9
    // 0x800883A0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x800883A0: nop

    after_19:
L_800883A4:
    // 0x800883A4: jal         0x8008ED04
    // 0x800883A8: nop

    __allocParam(rdram, ctx);
        goto after_20;
    // 0x800883A8: nop

    after_20:
    // 0x800883AC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x800883B0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800883B4: nop

    // 0x800883B8: beq         $t1, $zero, L_80088414
    if (ctx->r9 == 0) {
        // 0x800883BC: nop
    
            goto L_80088414;
    }
    // 0x800883BC: nop

    // 0x800883C0: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x800883C4: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x800883C8: lw          $t5, 0x14($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X14);
    // 0x800883CC: lw          $t7, 0x8($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X8);
    // 0x800883D0: lw          $t0, 0x1C($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X1C);
    // 0x800883D4: lw          $t6, 0xD8($t7)
    ctx->r14 = MEM_W(ctx->r15, 0XD8);
    // 0x800883D8: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x800883DC: addu        $t4, $t0, $t6
    ctx->r12 = ADD32(ctx->r8, ctx->r14);
    // 0x800883E0: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x800883E4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800883E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800883EC: sh          $t3, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r11;
    // 0x800883F0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800883F4: nop

    // 0x800883F8: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x800883FC: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80088400: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80088404: lw          $t9, 0x8($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X8);
    // 0x80088408: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8008840C: jalr        $t9
    // 0x80088410: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x80088410: nop

    after_21:
L_80088414:
    // 0x80088414: lbu         $t2, 0x57($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X57);
    // 0x80088418: nop

    // 0x8008841C: andi        $t7, $t2, 0x4
    ctx->r15 = ctx->r10 & 0X4;
    // 0x80088420: beq         $t7, $zero, L_8008861C
    if (ctx->r15 == 0) {
        // 0x80088424: nop
    
            goto L_8008861C;
    }
    // 0x80088424: nop

    // 0x80088428: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8008842C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80088430: lhu         $t6, 0x1568($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X1568);
    // 0x80088434: nop

    // 0x80088438: andi        $t4, $t6, 0xFF
    ctx->r12 = ctx->r14 & 0XFF;
    // 0x8008843C: andi        $t1, $t4, 0xFF
    ctx->r9 = ctx->r12 & 0XFF;
    // 0x80088440: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x80088444: lbu         $t8, 0x1468($t3)
    ctx->r24 = MEM_BU(ctx->r11, 0X1468);
    // 0x80088448: nop

    // 0x8008844C: sll         $t5, $t8, 8
    ctx->r13 = S32(ctx->r24 << 8);
    // 0x80088450: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x80088454: lhu         $t9, 0x1568($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X1568);
    // 0x80088458: nop

    // 0x8008845C: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x80088460: sh          $t2, 0x1568($t0)
    MEM_H(0X1568, ctx->r8) = ctx->r10;
    // 0x80088464: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80088468: nop

    // 0x8008846C: lw          $t6, 0x156C($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X156C);
    // 0x80088470: nop

    // 0x80088474: addiu       $t4, $t6, 0x1
    ctx->r12 = ADD32(ctx->r14, 0X1);
    // 0x80088478: sw          $t4, 0x156C($t7)
    MEM_W(0X156C, ctx->r15) = ctx->r12;
    // 0x8008847C: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80088480: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80088484: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80088488: addu        $t8, $t1, $t3
    ctx->r24 = ADD32(ctx->r9, ctx->r11);
    // 0x8008848C: lbu         $t5, 0x428($t8)
    ctx->r13 = MEM_BU(ctx->r24, 0X428);
    // 0x80088490: lw          $t2, 0x438($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X438);
    // 0x80088494: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x80088498: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8008849C: addu        $t0, $t2, $t9
    ctx->r8 = ADD32(ctx->r10, ctx->r25);
    // 0x800884A0: lw          $t6, 0x528($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X528);
    // 0x800884A4: lw          $t8, 0x1C($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X1C);
    // 0x800884A8: addu        $t7, $t6, $t4
    ctx->r15 = ADD32(ctx->r14, ctx->r12);
    // 0x800884AC: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x800884B0: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800884B4: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x800884B8: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x800884BC: addu        $t2, $t5, $t1
    ctx->r10 = ADD32(ctx->r13, ctx->r9);
    // 0x800884C0: lbu         $t9, 0x428($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X428);
    // 0x800884C4: lw          $t6, 0x438($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X438);
    // 0x800884C8: lw          $t1, 0x1C($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X1C);
    // 0x800884CC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800884D0: addu        $t4, $t6, $t0
    ctx->r12 = ADD32(ctx->r14, ctx->r8);
    // 0x800884D4: lw          $t7, 0x528($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X528);
    // 0x800884D8: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x800884DC: lw          $t3, 0x630($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X630);
    // 0x800884E0: subu        $t9, $t2, $t7
    ctx->r25 = SUB32(ctx->r10, ctx->r15);
    // 0x800884E4: subu        $t5, $t3, $t9
    ctx->r13 = SUB32(ctx->r11, ctx->r25);
    // 0x800884E8: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x800884EC: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800884F0: nop

    // 0x800884F4: lbu         $t0, 0x27($t6)
    ctx->r8 = MEM_BU(ctx->r14, 0X27);
    // 0x800884F8: nop

    // 0x800884FC: bne         $t0, $at, L_8008861C
    if (ctx->r8 != ctx->r1) {
        // 0x80088500: nop
    
            goto L_8008861C;
    }
    // 0x80088500: nop

    // 0x80088504: lw          $t4, 0x8($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X8);
    // 0x80088508: nop

    // 0x8008850C: beq         $t4, $zero, L_8008861C
    if (ctx->r12 == 0) {
        // 0x80088510: nop
    
            goto L_8008861C;
    }
    // 0x80088510: nop

    // 0x80088514: lw          $t8, 0xC($t4)
    ctx->r24 = MEM_W(ctx->r12, 0XC);
    // 0x80088518: addiu       $t2, $zero, 0x140
    ctx->r10 = ADD32(0, 0X140);
    // 0x8008851C: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x80088520: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x80088524: jal         0x8008ED04
    // 0x80088528: sw          $t2, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = ctx->r10;
    __allocParam(rdram, ctx);
        goto after_22;
    // 0x80088528: sw          $t2, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = ctx->r10;
    after_22:
    // 0x8008852C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80088530: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80088534: nop

    // 0x80088538: beq         $t3, $zero, L_800885AC
    if (ctx->r11 == 0) {
        // 0x8008853C: nop
    
            goto L_800885AC;
    }
    // 0x8008853C: nop

    // 0x80088540: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80088544: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x80088548: lw          $t5, 0x14($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X14);
    // 0x8008854C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80088550: lw          $t1, 0x1C($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X1C);
    // 0x80088554: nop

    // 0x80088558: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x8008855C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80088560: nop

    // 0x80088564: sh          $t0, 0x8($t4)
    MEM_H(0X8, ctx->r12) = ctx->r8;
    // 0x80088568: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8008856C: nop

    // 0x80088570: sw          $zero, 0xC($t8)
    MEM_W(0XC, ctx->r24) = 0;
    // 0x80088574: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80088578: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8008857C: lw          $t2, 0x8($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X8);
    // 0x80088580: nop

    // 0x80088584: lw          $t7, 0xD8($t2)
    ctx->r15 = MEM_W(ctx->r10, 0XD8);
    // 0x80088588: nop

    // 0x8008858C: addiu       $t9, $t7, -0x40
    ctx->r25 = ADD32(ctx->r15, -0X40);
    // 0x80088590: sw          $t9, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->r25;
    // 0x80088594: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80088598: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8008859C: lw          $t9, 0x8($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X8);
    // 0x800885A0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x800885A4: jalr        $t9
    // 0x800885A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x800885A8: nop

    after_23:
L_800885AC:
    // 0x800885AC: jal         0x8008ED04
    // 0x800885B0: nop

    __allocParam(rdram, ctx);
        goto after_24;
    // 0x800885B0: nop

    after_24:
    // 0x800885B4: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x800885B8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800885BC: nop

    // 0x800885C0: beq         $t3, $zero, L_8008861C
    if (ctx->r11 == 0) {
        // 0x800885C4: nop
    
            goto L_8008861C;
    }
    // 0x800885C4: nop

    // 0x800885C8: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x800885CC: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800885D0: lw          $t4, 0x14($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X14);
    // 0x800885D4: lw          $t2, 0x8($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X8);
    // 0x800885D8: lw          $t8, 0x1C($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X1C);
    // 0x800885DC: lw          $t7, 0xD8($t2)
    ctx->r15 = MEM_W(ctx->r10, 0XD8);
    // 0x800885E0: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x800885E4: addu        $t5, $t8, $t7
    ctx->r13 = ADD32(ctx->r24, ctx->r15);
    // 0x800885E8: sw          $t5, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r13;
    // 0x800885EC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800885F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800885F4: sh          $t1, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r9;
    // 0x800885F8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800885FC: nop

    // 0x80088600: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x80088604: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80088608: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8008860C: lw          $t9, 0x8($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X8);
    // 0x80088610: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80088614: jalr        $t9
    // 0x80088618: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x80088618: nop

    after_25:
L_8008861C:
    // 0x8008861C: lbu         $t6, 0x57($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X57);
    // 0x80088620: nop

    // 0x80088624: andi        $t2, $t6, 0x2
    ctx->r10 = ctx->r14 & 0X2;
    // 0x80088628: beq         $t2, $zero, L_80088820
    if (ctx->r10 == 0) {
        // 0x8008862C: nop
    
            goto L_80088820;
    }
    // 0x8008862C: nop

    // 0x80088630: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80088634: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80088638: lbu         $t7, 0x27($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X27);
    // 0x8008863C: nop

    // 0x80088640: bne         $t7, $at, L_80088760
    if (ctx->r15 != ctx->r1) {
        // 0x80088644: nop
    
            goto L_80088760;
    }
    // 0x80088644: nop

    // 0x80088648: lw          $t5, 0x8($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X8);
    // 0x8008864C: nop

    // 0x80088650: beq         $t5, $zero, L_80088760
    if (ctx->r13 == 0) {
        // 0x80088654: nop
    
            goto L_80088760;
    }
    // 0x80088654: nop

    // 0x80088658: lw          $t3, 0xC($t5)
    ctx->r11 = MEM_W(ctx->r13, 0XC);
    // 0x8008865C: addiu       $t1, $zero, 0x140
    ctx->r9 = ADD32(0, 0X140);
    // 0x80088660: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x80088664: lw          $t0, 0x8($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X8);
    // 0x80088668: jal         0x8008ED04
    // 0x8008866C: sw          $t1, 0xD8($t0)
    MEM_W(0XD8, ctx->r8) = ctx->r9;
    __allocParam(rdram, ctx);
        goto after_26;
    // 0x8008866C: sw          $t1, 0xD8($t0)
    MEM_W(0XD8, ctx->r8) = ctx->r9;
    after_26:
    // 0x80088670: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80088674: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80088678: nop

    // 0x8008867C: beq         $t4, $zero, L_800886F0
    if (ctx->r12 == 0) {
        // 0x80088680: nop
    
            goto L_800886F0;
    }
    // 0x80088680: nop

    // 0x80088684: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80088688: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x8008868C: lw          $t6, 0x14($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X14);
    // 0x80088690: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80088694: lw          $t2, 0x1C($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X1C);
    // 0x80088698: nop

    // 0x8008869C: sw          $t2, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r10;
    // 0x800886A0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800886A4: nop

    // 0x800886A8: sh          $t7, 0x8($t5)
    MEM_H(0X8, ctx->r13) = ctx->r15;
    // 0x800886AC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800886B0: nop

    // 0x800886B4: sw          $zero, 0xC($t3)
    MEM_W(0XC, ctx->r11) = 0;
    // 0x800886B8: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x800886BC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800886C0: lw          $t1, 0x8($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X8);
    // 0x800886C4: nop

    // 0x800886C8: lw          $t0, 0xD8($t1)
    ctx->r8 = MEM_W(ctx->r9, 0XD8);
    // 0x800886CC: nop

    // 0x800886D0: addiu       $t9, $t0, -0x40
    ctx->r25 = ADD32(ctx->r8, -0X40);
    // 0x800886D4: sw          $t9, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r25;
    // 0x800886D8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800886DC: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x800886E0: lw          $t9, 0x8($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X8);
    // 0x800886E4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x800886E8: jalr        $t9
    // 0x800886EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x800886EC: nop

    after_27:
L_800886F0:
    // 0x800886F0: jal         0x8008ED04
    // 0x800886F4: nop

    __allocParam(rdram, ctx);
        goto after_28;
    // 0x800886F4: nop

    after_28:
    // 0x800886F8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x800886FC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80088700: nop

    // 0x80088704: beq         $t4, $zero, L_80088760
    if (ctx->r12 == 0) {
        // 0x80088708: nop
    
            goto L_80088760;
    }
    // 0x80088708: nop

    // 0x8008870C: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80088710: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80088714: lw          $t5, 0x14($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X14);
    // 0x80088718: lw          $t1, 0x8($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X8);
    // 0x8008871C: lw          $t3, 0x1C($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X1C);
    // 0x80088720: lw          $t0, 0xD8($t1)
    ctx->r8 = MEM_W(ctx->r9, 0XD8);
    // 0x80088724: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x80088728: addu        $t6, $t3, $t0
    ctx->r14 = ADD32(ctx->r11, ctx->r8);
    // 0x8008872C: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x80088730: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80088734: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80088738: sh          $t2, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r10;
    // 0x8008873C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80088740: nop

    // 0x80088744: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x80088748: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8008874C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80088750: lw          $t9, 0x8($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X8);
    // 0x80088754: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80088758: jalr        $t9
    // 0x8008875C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x8008875C: nop

    after_29:
L_80088760:
    // 0x80088760: lbu         $t8, 0x57($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X57);
    // 0x80088764: nop

    // 0x80088768: andi        $t1, $t8, 0x4
    ctx->r9 = ctx->r24 & 0X4;
    // 0x8008876C: beq         $t1, $zero, L_800887DC
    if (ctx->r9 == 0) {
        // 0x80088770: nop
    
            goto L_800887DC;
    }
    // 0x80088770: nop

    // 0x80088774: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80088778: nop

    // 0x8008877C: lw          $t0, 0x14($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X14);
    // 0x80088780: nop

    // 0x80088784: beq         $t0, $zero, L_80088814
    if (ctx->r8 == 0) {
        // 0x80088788: nop
    
            goto L_80088814;
    }
    // 0x80088788: nop

    // 0x8008878C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80088790: nop

    // 0x80088794: lw          $t4, 0x1C($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X1C);
    // 0x80088798: nop

    // 0x8008879C: beq         $t4, $zero, L_80088814
    if (ctx->r12 == 0) {
        // 0x800887A0: nop
    
            goto L_80088814;
    }
    // 0x800887A0: nop

    // 0x800887A4: lh          $t2, 0x24($t6)
    ctx->r10 = MEM_H(ctx->r14, 0X24);
    // 0x800887A8: lw          $a3, 0x20($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X20);
    // 0x800887AC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800887B0: lb          $t7, 0x26($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X26);
    // 0x800887B4: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x800887B8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x800887BC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x800887C0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800887C4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800887C8: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x800887CC: jal         0x800B8DC0
    // 0x800887D0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    alSynStartVoiceParams(rdram, ctx);
        goto after_30;
    // 0x800887D0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_30:
    // 0x800887D4: b           L_80088814
    // 0x800887D8: nop

        goto L_80088814;
    // 0x800887D8: nop

L_800887DC:
    // 0x800887DC: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x800887E0: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x800887E4: lh          $t1, 0x24($t8)
    ctx->r9 = MEM_H(ctx->r24, 0X24);
    // 0x800887E8: lw          $a2, 0x1C($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X1C);
    // 0x800887EC: lw          $a3, 0x20($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X20);
    // 0x800887F0: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    // 0x800887F4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800887F8: lb          $t3, 0x26($t8)
    ctx->r11 = MEM_B(ctx->r24, 0X26);
    // 0x800887FC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80088800: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80088804: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80088808: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8008880C: jal         0x800B8DC0
    // 0x80088810: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    alSynStartVoiceParams(rdram, ctx);
        goto after_31;
    // 0x80088810: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_31:
L_80088814:
    // 0x80088814: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80088818: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8008881C: sb          $t4, 0x27($t2)
    MEM_B(0X27, ctx->r10) = ctx->r12;
L_80088820:
    // 0x80088820: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80088824: nop

    // 0x80088828: lbu         $t7, 0x27($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X27);
    // 0x8008882C: nop

    // 0x80088830: beq         $t7, $zero, L_8008886C
    if (ctx->r15 == 0) {
        // 0x80088834: nop
    
            goto L_8008886C;
    }
    // 0x80088834: nop

    // 0x80088838: lbu         $t5, 0x57($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X57);
    // 0x8008883C: nop

    // 0x80088840: andi        $t9, $t5, 0x40
    ctx->r25 = ctx->r13 & 0X40;
    // 0x80088844: beq         $t9, $zero, L_8008886C
    if (ctx->r25 == 0) {
        // 0x80088848: nop
    
            goto L_8008886C;
    }
    // 0x80088848: nop

    // 0x8008884C: andi        $t1, $t5, 0x2
    ctx->r9 = ctx->r13 & 0X2;
    // 0x80088850: bne         $t1, $zero, L_8008886C
    if (ctx->r9 != 0) {
        // 0x80088854: nop
    
            goto L_8008886C;
    }
    // 0x80088854: nop

    // 0x80088858: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x8008885C: lw          $a2, 0x20($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X20);
    // 0x80088860: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    // 0x80088864: jal         0x800B8EB0
    // 0x80088868: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    alSynSetPitch(rdram, ctx);
        goto after_32;
    // 0x80088868: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_32:
L_8008886C:
    // 0x8008886C: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80088870: nop

    // 0x80088874: lbu         $t0, 0x27($t3)
    ctx->r8 = MEM_BU(ctx->r11, 0X27);
    // 0x80088878: nop

    // 0x8008887C: beq         $t0, $zero, L_800889C0
    if (ctx->r8 == 0) {
        // 0x80088880: nop
    
            goto L_800889C0;
    }
    // 0x80088880: nop

    // 0x80088884: lbu         $t4, 0x57($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X57);
    // 0x80088888: nop

    // 0x8008888C: andi        $t2, $t4, 0x20
    ctx->r10 = ctx->r12 & 0X20;
    // 0x80088890: beq         $t2, $zero, L_800889C0
    if (ctx->r10 == 0) {
        // 0x80088894: nop
    
            goto L_800889C0;
    }
    // 0x80088894: nop

    // 0x80088898: andi        $t7, $t4, 0x2
    ctx->r15 = ctx->r12 & 0X2;
    // 0x8008889C: bne         $t7, $zero, L_800889C0
    if (ctx->r15 != 0) {
        // 0x800888A0: nop
    
            goto L_800889C0;
    }
    // 0x800888A0: nop

    // 0x800888A4: lh          $t9, 0x28($t3)
    ctx->r25 = MEM_H(ctx->r11, 0X28);
    // 0x800888A8: nop

    // 0x800888AC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800888B0: jal         0x800B8340
    // 0x800888B4: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    sqrtf_recomp(rdram, ctx);
        goto after_33;
    // 0x800888B4: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    after_33:
    // 0x800888B8: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x800888BC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x800888C0: lh          $t1, 0x157C($t5)
    ctx->r9 = MEM_H(ctx->r13, 0X157C);
    // 0x800888C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800888C8: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x800888CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800888D0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800888D4: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800888D8: nop

    // 0x800888DC: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800888E0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800888E4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800888E8: nop

    // 0x800888EC: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800888F0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800888F4: nop

    // 0x800888F8: andi        $at, $t6, 0x4
    ctx->r1 = ctx->r14 & 0X4;
    // 0x800888FC: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80088900: beq         $t6, $zero, L_80088950
    if (ctx->r14 == 0) {
        // 0x80088904: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_80088950;
    }
    // 0x80088904: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80088908: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008890C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80088910: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80088914: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80088918: nop

    // 0x8008891C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80088920: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80088924: nop

    // 0x80088928: andi        $at, $t6, 0x4
    ctx->r1 = ctx->r14 & 0X4;
    // 0x8008892C: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80088930: bne         $t6, $zero, L_80088948
    if (ctx->r14 != 0) {
        // 0x80088934: nop
    
            goto L_80088948;
    }
    // 0x80088934: nop

    // 0x80088938: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8008893C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80088940: b           L_80088960
    // 0x80088944: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_80088960;
    // 0x80088944: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_80088948:
    // 0x80088948: b           L_80088960
    // 0x8008894C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_80088960;
    // 0x8008894C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
L_80088950:
    // 0x80088950: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x80088954: nop

    // 0x80088958: bltz        $t6, L_80088948
    if (SIGNED(ctx->r14) < 0) {
        // 0x8008895C: nop
    
            goto L_80088948;
    }
    // 0x8008895C: nop

L_80088960:
    // 0x80088960: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80088964: andi        $t0, $t6, 0xFFFF
    ctx->r8 = ctx->r14 & 0XFFFF;
    // 0x80088968: sh          $t0, 0x24($t2)
    MEM_H(0X24, ctx->r10) = ctx->r8;
    // 0x8008896C: lbu         $t4, 0x57($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X57);
    // 0x80088970: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80088974: andi        $t7, $t4, 0x4
    ctx->r15 = ctx->r12 & 0X4;
    // 0x80088978: beq         $t7, $zero, L_800889A4
    if (ctx->r15 == 0) {
        // 0x8008897C: nop
    
            goto L_800889A4;
    }
    // 0x8008897C: nop

    // 0x80088980: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80088984: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x80088988: lw          $a0, 0x14($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X14);
    // 0x8008898C: lh          $a2, 0x24($t9)
    ctx->r6 = MEM_H(ctx->r25, 0X24);
    // 0x80088990: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    // 0x80088994: jal         0x8008E5A0
    // 0x80088998: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8008E5A0(rdram, ctx);
        goto after_34;
    // 0x80088998: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_34:
    // 0x8008899C: b           L_800889C0
    // 0x800889A0: nop

        goto L_800889C0;
    // 0x800889A0: nop

L_800889A4:
    // 0x800889A4: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x800889A8: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x800889AC: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    // 0x800889B0: lh          $a2, 0x24($t1)
    ctx->r6 = MEM_H(ctx->r9, 0X24);
    // 0x800889B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x800889B8: jal         0x8008E5A0
    // 0x800889BC: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_8008E5A0(rdram, ctx);
        goto after_35;
    // 0x800889BC: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_35:
L_800889C0:
    // 0x800889C0: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x800889C4: nop

    // 0x800889C8: lbu         $t6, 0x27($t8)
    ctx->r14 = MEM_BU(ctx->r24, 0X27);
    // 0x800889CC: nop

    // 0x800889D0: beq         $t6, $zero, L_80088A0C
    if (ctx->r14 == 0) {
        // 0x800889D4: nop
    
            goto L_80088A0C;
    }
    // 0x800889D4: nop

    // 0x800889D8: lbu         $t0, 0x57($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X57);
    // 0x800889DC: nop

    // 0x800889E0: andi        $t2, $t0, 0x10
    ctx->r10 = ctx->r8 & 0X10;
    // 0x800889E4: beq         $t2, $zero, L_80088A0C
    if (ctx->r10 == 0) {
        // 0x800889E8: nop
    
            goto L_80088A0C;
    }
    // 0x800889E8: nop

    // 0x800889EC: andi        $t4, $t0, 0x2
    ctx->r12 = ctx->r8 & 0X2;
    // 0x800889F0: bne         $t4, $zero, L_80088A0C
    if (ctx->r12 != 0) {
        // 0x800889F4: nop
    
            goto L_80088A0C;
    }
    // 0x800889F4: nop

    // 0x800889F8: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x800889FC: lb          $a2, 0x26($t8)
    ctx->r6 = MEM_B(ctx->r24, 0X26);
    // 0x80088A00: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    // 0x80088A04: jal         0x800B8D30
    // 0x80088A08: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    alSynSetPan(rdram, ctx);
        goto after_36;
    // 0x80088A08: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_36:
L_80088A0C:
    // 0x80088A0C: lbu         $t3, 0x57($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X57);
    // 0x80088A10: nop

    // 0x80088A14: andi        $t9, $t3, 0x1
    ctx->r25 = ctx->r11 & 0X1;
    // 0x80088A18: beq         $t9, $zero, L_80088B60
    if (ctx->r25 == 0) {
        // 0x80088A1C: nop
    
            goto L_80088B60;
    }
    // 0x80088A1C: nop

    // 0x80088A20: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x80088A24: nop

    // 0x80088A28: lhu         $t1, 0x1568($t5)
    ctx->r9 = MEM_HU(ctx->r13, 0X1568);
    // 0x80088A2C: nop

    // 0x80088A30: andi        $t6, $t1, 0xFF
    ctx->r14 = ctx->r9 & 0XFF;
    // 0x80088A34: andi        $t2, $t6, 0xFF
    ctx->r10 = ctx->r14 & 0XFF;
    // 0x80088A38: addu        $t0, $t5, $t2
    ctx->r8 = ADD32(ctx->r13, ctx->r10);
    // 0x80088A3C: lbu         $t4, 0x1468($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X1468);
    // 0x80088A40: nop

    // 0x80088A44: sb          $t4, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r12;
    // 0x80088A48: lhu         $t7, 0x1568($t5)
    ctx->r15 = MEM_HU(ctx->r13, 0X1568);
    // 0x80088A4C: nop

    // 0x80088A50: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80088A54: sh          $t8, 0x1568($t5)
    MEM_H(0X1568, ctx->r13) = ctx->r24;
    // 0x80088A58: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80088A5C: nop

    // 0x80088A60: lw          $t9, 0x156C($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X156C);
    // 0x80088A64: nop

    // 0x80088A68: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x80088A6C: sw          $t1, 0x156C($t3)
    MEM_W(0X156C, ctx->r11) = ctx->r9;
    // 0x80088A70: lbu         $t6, 0x57($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X57);
    // 0x80088A74: nop

    // 0x80088A78: andi        $t2, $t6, 0x40
    ctx->r10 = ctx->r14 & 0X40;
    // 0x80088A7C: beq         $t2, $zero, L_80088B1C
    if (ctx->r10 == 0) {
        // 0x80088A80: nop
    
            goto L_80088B1C;
    }
    // 0x80088A80: nop

    // 0x80088A84: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80088A88: lui         $t3, 0x773
    ctx->r11 = S32(0X773 << 16);
    // 0x80088A8C: lhu         $t4, 0x1568($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X1568);
    // 0x80088A90: ori         $t3, $t3, 0x5940
    ctx->r11 = ctx->r11 | 0X5940;
    // 0x80088A94: andi        $t7, $t4, 0xFF
    ctx->r15 = ctx->r12 & 0XFF;
    // 0x80088A98: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x80088A9C: addu        $t5, $t0, $t8
    ctx->r13 = ADD32(ctx->r8, ctx->r24);
    // 0x80088AA0: lbu         $t9, 0x1468($t5)
    ctx->r25 = MEM_BU(ctx->r13, 0X1468);
    // 0x80088AA4: nop

    // 0x80088AA8: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80088AAC: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x80088AB0: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80088AB4: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80088AB8: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x80088ABC: div         $zero, $t3, $t1
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r9)));
    // 0x80088AC0: bne         $t1, $zero, L_80088ACC
    if (ctx->r9 != 0) {
        // 0x80088AC4: nop
    
            goto L_80088ACC;
    }
    // 0x80088AC4: nop

    // 0x80088AC8: break       7
    do_break(2148043464);
L_80088ACC:
    // 0x80088ACC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80088AD0: bne         $t1, $at, L_80088AE4
    if (ctx->r9 != ctx->r1) {
        // 0x80088AD4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80088AE4;
    }
    // 0x80088AD4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80088AD8: bne         $t3, $at, L_80088AE4
    if (ctx->r11 != ctx->r1) {
        // 0x80088ADC: nop
    
            goto L_80088AE4;
    }
    // 0x80088ADC: nop

    // 0x80088AE0: break       6
    do_break(2148043488);
L_80088AE4:
    // 0x80088AE4: mflo        $t6
    ctx->r14 = lo;
    // 0x80088AE8: sw          $t6, 0x1578($t0)
    MEM_W(0X1578, ctx->r8) = ctx->r14;
    // 0x80088AEC: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x80088AF0: nop

    // 0x80088AF4: lhu         $t4, 0x1568($t2)
    ctx->r12 = MEM_HU(ctx->r10, 0X1568);
    // 0x80088AF8: nop

    // 0x80088AFC: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x80088B00: sh          $t7, 0x1568($t2)
    MEM_H(0X1568, ctx->r10) = ctx->r15;
    // 0x80088B04: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80088B08: nop

    // 0x80088B0C: lw          $t5, 0x156C($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X156C);
    // 0x80088B10: nop

    // 0x80088B14: addiu       $t9, $t5, 0x1
    ctx->r25 = ADD32(ctx->r13, 0X1);
    // 0x80088B18: sw          $t9, 0x156C($t8)
    MEM_W(0X156C, ctx->r24) = ctx->r25;
L_80088B1C:
    // 0x80088B1C: lbu         $t3, 0x57($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X57);
    // 0x80088B20: nop

    // 0x80088B24: andi        $t1, $t3, 0x20
    ctx->r9 = ctx->r11 & 0X20;
    // 0x80088B28: beq         $t1, $zero, L_80088B60
    if (ctx->r9 == 0) {
        // 0x80088B2C: nop
    
            goto L_80088B60;
    }
    // 0x80088B2C: nop

    // 0x80088B30: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80088B34: nop

    // 0x80088B38: lhu         $t0, 0x1568($t6)
    ctx->r8 = MEM_HU(ctx->r14, 0X1568);
    // 0x80088B3C: nop

    // 0x80088B40: addiu       $t4, $t0, 0x1
    ctx->r12 = ADD32(ctx->r8, 0X1);
    // 0x80088B44: sh          $t4, 0x1568($t6)
    MEM_H(0X1568, ctx->r14) = ctx->r12;
    // 0x80088B48: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80088B4C: nop

    // 0x80088B50: lw          $t2, 0x156C($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X156C);
    // 0x80088B54: nop

    // 0x80088B58: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x80088B5C: sw          $t5, 0x156C($t7)
    MEM_W(0X156C, ctx->r15) = ctx->r13;
L_80088B60:
    // 0x80088B60: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80088B64: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80088B68: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x80088B6C: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x80088B70: lw          $t1, 0x440($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X440);
    // 0x80088B74: nop

    // 0x80088B78: slt         $at, $t8, $t1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80088B7C: bne         $at, $zero, L_80087EB8
    if (ctx->r1 != 0) {
        // 0x80088B80: nop
    
            goto L_80087EB8;
    }
    // 0x80088B80: nop

L_80088B84:
    // 0x80088B84: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80088B88: nop

    // 0x80088B8C: lw          $v0, 0x1578($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X1578);
    // 0x80088B90: nop

L_80088B94:
    // 0x80088B94: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80088B98: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80088B9C: jr          $ra
    // 0x80088BA0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80088BA0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80088BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088BA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80088BA8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80088BAC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80088BB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80088BB4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80088BB8: lw          $t7, 0x88($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X88);
    // 0x80088BBC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80088BC0: beq         $t7, $at, L_80088C04
    if (ctx->r15 == ctx->r1) {
        // 0x80088BC4: nop
    
            goto L_80088C04;
    }
    // 0x80088BC4: nop

    // 0x80088BC8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80088BCC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088BD0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80088BD4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80088BD8: sh          $t8, -0x7238($at)
    MEM_H(-0X7238, ctx->r1) = ctx->r24;
    // 0x80088BDC: sw          $t6, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r14;
    // 0x80088BE0: addiu       $a1, $a1, -0x7238
    ctx->r5 = ADD32(ctx->r5, -0X7238);
    // 0x80088BE4: addiu       $a0, $a0, -0x72B0
    ctx->r4 = ADD32(ctx->r4, -0X72B0);
    // 0x80088BE8: jal         0x800B8BE0
    // 0x80088BEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osJamMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80088BEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80088BF0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80088BF4: addiu       $a0, $a0, -0x72E8
    ctx->r4 = ADD32(ctx->r4, -0X72E8);
    // 0x80088BF8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80088BFC: jal         0x800B3C20
    // 0x80088C00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80088C00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_80088C04:
    // 0x80088C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80088C08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80088C0C: jr          $ra
    // 0x80088C10: nop

    return;
    // 0x80088C10: nop

;}
RECOMP_FUNC void func_80088C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088C14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80088C18: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80088C1C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80088C20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80088C24: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088C28: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80088C2C: sh          $zero, -0x7238($at)
    MEM_H(-0X7238, ctx->r1) = 0;
    // 0x80088C30: addiu       $a0, $a0, -0x778
    ctx->r4 = ADD32(ctx->r4, -0X778);
    // 0x80088C34: jal         0x800B3BFC
    // 0x80088C38: sw          $t6, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r14;
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x80088C38: sw          $t6, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r14;
    after_0:
    // 0x80088C3C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80088C40: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80088C44: addiu       $a1, $a1, -0x7238
    ctx->r5 = ADD32(ctx->r5, -0X7238);
    // 0x80088C48: addiu       $a0, $a0, -0x72B0
    ctx->r4 = ADD32(ctx->r4, -0X72B0);
    // 0x80088C4C: jal         0x800B8BE0
    // 0x80088C50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osJamMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80088C50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80088C54: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80088C58: addiu       $a0, $a0, -0x72E8
    ctx->r4 = ADD32(ctx->r4, -0X72E8);
    // 0x80088C5C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80088C60: jal         0x800B3C20
    // 0x80088C64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80088C64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80088C68: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80088C6C: jal         0x800B3BFC
    // 0x80088C70: addiu       $a0, $a0, -0x754
    ctx->r4 = ADD32(ctx->r4, -0X754);
    osSyncPrintf(rdram, ctx);
        goto after_3;
    // 0x80088C70: addiu       $a0, $a0, -0x754
    ctx->r4 = ADD32(ctx->r4, -0X754);
    after_3:
    // 0x80088C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80088C78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80088C7C: jr          $ra
    // 0x80088C80: nop

    return;
    // 0x80088C80: nop

;}
RECOMP_FUNC void func_80088C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088C84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80088C88: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80088C8C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80088C90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80088C94: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80088C98: bne         $t6, $zero, L_80088E88
    if (ctx->r14 != 0) {
        // 0x80088C9C: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_80088E88;
    }
    // 0x80088C9C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80088CA0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80088CA4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80088CA8: addiu       $t7, $t7, 0x4938
    ctx->r15 = ADD32(ctx->r15, 0X4938);
    // 0x80088CAC: sw          $t7, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->r15;
    // 0x80088CB0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80088CB4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80088CB8: addiu       $t9, $t9, 0x5598
    ctx->r25 = ADD32(ctx->r25, 0X5598);
    // 0x80088CBC: sw          $t9, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r25;
    // 0x80088CC0: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80088CC4: lw          $t1, -0x4FB0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4FB0);
    // 0x80088CC8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80088CCC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80088CD0: sw          $t1, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r9;
    // 0x80088CD4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80088CD8: lbu         $t3, 0x33($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X33);
    // 0x80088CDC: addiu       $t6, $t6, -0x57F4
    ctx->r14 = ADD32(ctx->r14, -0X57F4);
    // 0x80088CE0: sw          $t3, 0x8C($t4)
    MEM_W(0X8C, ctx->r12) = ctx->r11;
    // 0x80088CE4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80088CE8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80088CEC: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x80088CF0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80088CF4: nop

    // 0x80088CF8: sw          $t6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r14;
    // 0x80088CFC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80088D00: nop

    // 0x80088D04: sw          $t8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r24;
    // 0x80088D08: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80088D0C: nop

    // 0x80088D10: sw          $zero, 0xC($t9)
    MEM_W(0XC, ctx->r25) = 0;
    // 0x80088D14: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80088D18: lw          $a0, -0x4FB0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4FB0);
    // 0x80088D1C: jal         0x800B88E0
    // 0x80088D20: nop

    alSynAddPlayer(rdram, ctx);
        goto after_0;
    // 0x80088D20: nop

    after_0:
    // 0x80088D24: lbu         $t1, 0x33($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X33);
    // 0x80088D28: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x80088D2C: sh          $t0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r8;
    // 0x80088D30: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    // 0x80088D34: sb          $zero, 0x20($sp)
    MEM_B(0X20, ctx->r29) = 0;
    // 0x80088D38: blez        $t1, L_80088D88
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80088D3C: sw          $zero, 0x24($sp)
        MEM_W(0X24, ctx->r29) = 0;
            goto L_80088D88;
    }
    // 0x80088D3C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80088D40:
    // 0x80088D40: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80088D44: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80088D48: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80088D4C: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80088D50: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80088D54: lw          $t3, 0x1C($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X1C);
    // 0x80088D58: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80088D5C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80088D60: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    // 0x80088D64: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x80088D68: jal         0x800B8A18
    // 0x80088D6C: addu        $a1, $t3, $t5
    ctx->r5 = ADD32(ctx->r11, ctx->r13);
    alSynAllocVoice(rdram, ctx);
        goto after_1;
    // 0x80088D6C: addu        $a1, $t3, $t5
    ctx->r5 = ADD32(ctx->r11, ctx->r13);
    after_1:
    // 0x80088D70: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80088D74: lbu         $t8, 0x33($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X33);
    // 0x80088D78: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80088D7C: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80088D80: bne         $at, $zero, L_80088D40
    if (ctx->r1 != 0) {
        // 0x80088D84: sw          $t7, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r15;
            goto L_80088D40;
    }
    // 0x80088D84: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80088D88:
    // 0x80088D88: lbu         $t9, 0x33($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X33);
    // 0x80088D8C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80088D90: blez        $t9, L_80088E88
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80088D94: nop
    
            goto L_80088E88;
    }
    // 0x80088D94: nop

L_80088D98:
    // 0x80088D98: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80088D9C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80088DA0: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80088DA4: subu        $t3, $t3, $t4
    ctx->r11 = SUB32(ctx->r11, ctx->r12);
    // 0x80088DA8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80088DAC: lw          $t2, 0x1C($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X1C);
    // 0x80088DB0: subu        $t3, $t3, $t4
    ctx->r11 = SUB32(ctx->r11, ctx->r12);
    // 0x80088DB4: lw          $t1, 0x18($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X18);
    // 0x80088DB8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80088DBC: addu        $t5, $t2, $t3
    ctx->r13 = ADD32(ctx->r10, ctx->r11);
    // 0x80088DC0: sw          $t1, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->r9;
    // 0x80088DC4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80088DC8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80088DCC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80088DD0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80088DD4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80088DD8: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x80088DDC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80088DE0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80088DE4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80088DE8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80088DEC: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80088DF0: swc1        $f4, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f4.u32l;
    // 0x80088DF4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80088DF8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80088DFC: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x80088E00: subu        $t1, $t1, $t3
    ctx->r9 = SUB32(ctx->r9, ctx->r11);
    // 0x80088E04: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80088E08: lw          $t2, 0x1C($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X1C);
    // 0x80088E0C: subu        $t1, $t1, $t3
    ctx->r9 = SUB32(ctx->r9, ctx->r11);
    // 0x80088E10: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80088E14: addu        $t5, $t2, $t1
    ctx->r13 = ADD32(ctx->r10, ctx->r9);
    // 0x80088E18: sh          $zero, 0x24($t5)
    MEM_H(0X24, ctx->r13) = 0;
    // 0x80088E1C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80088E20: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80088E24: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80088E28: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80088E2C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80088E30: lw          $t7, 0x1C($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X1C);
    // 0x80088E34: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80088E38: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80088E3C: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x80088E40: addu        $t4, $t7, $t0
    ctx->r12 = ADD32(ctx->r15, ctx->r8);
    // 0x80088E44: sb          $t6, 0x26($t4)
    MEM_B(0X26, ctx->r12) = ctx->r14;
    // 0x80088E48: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80088E4C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80088E50: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x80088E54: subu        $t5, $t5, $t1
    ctx->r13 = SUB32(ctx->r13, ctx->r9);
    // 0x80088E58: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80088E5C: lw          $t2, 0x1C($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X1C);
    // 0x80088E60: subu        $t5, $t5, $t1
    ctx->r13 = SUB32(ctx->r13, ctx->r9);
    // 0x80088E64: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80088E68: addu        $t8, $t2, $t5
    ctx->r24 = ADD32(ctx->r10, ctx->r13);
    // 0x80088E6C: sb          $zero, 0x27($t8)
    MEM_B(0X27, ctx->r24) = 0;
    // 0x80088E70: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80088E74: lbu         $t0, 0x33($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X33);
    // 0x80088E78: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x80088E7C: slt         $at, $t7, $t0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80088E80: bne         $at, $zero, L_80088D98
    if (ctx->r1 != 0) {
        // 0x80088E84: sw          $t7, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r15;
            goto L_80088D98;
    }
    // 0x80088E84: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80088E88:
    // 0x80088E88: lbu         $t6, 0x33($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X33);
    // 0x80088E8C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80088E90: blez        $t6, L_80088F94
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80088E94: nop
    
            goto L_80088F94;
    }
    // 0x80088E94: nop

L_80088E98:
    // 0x80088E98: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80088E9C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80088EA0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80088EA4: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80088EA8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80088EAC: lw          $t3, 0x1C($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X1C);
    // 0x80088EB0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80088EB4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80088EB8: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x80088EBC: addu        $t5, $t3, $t2
    ctx->r13 = ADD32(ctx->r11, ctx->r10);
    // 0x80088EC0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80088EC4: addu        $t9, $t4, $t8
    ctx->r25 = ADD32(ctx->r12, ctx->r24);
    // 0x80088EC8: sw          $zero, 0x20($t9)
    MEM_W(0X20, ctx->r25) = 0;
    // 0x80088ECC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80088ED0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80088ED4: sll         $t6, $t0, 3
    ctx->r14 = S32(ctx->r8 << 3);
    // 0x80088ED8: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x80088EDC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80088EE0: addu        $t3, $t7, $t6
    ctx->r11 = ADD32(ctx->r15, ctx->r14);
    // 0x80088EE4: addiu       $t2, $t3, 0x114
    ctx->r10 = ADD32(ctx->r11, 0X114);
    // 0x80088EE8: sw          $t2, 0x110($t3)
    MEM_W(0X110, ctx->r11) = ctx->r10;
    // 0x80088EEC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80088EF0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80088EF4: sll         $t4, $t1, 3
    ctx->r12 = S32(ctx->r9 << 3);
    // 0x80088EF8: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80088EFC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80088F00: addu        $t8, $t5, $t4
    ctx->r24 = ADD32(ctx->r13, ctx->r12);
    // 0x80088F04: lw          $t9, 0x110($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X110);
    // 0x80088F08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80088F0C: sb          $zero, 0x0($t9)
    MEM_B(0X0, ctx->r25) = 0;
    // 0x80088F10: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80088F14: nop

    // 0x80088F18: lbu         $t7, 0x27($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X27);
    // 0x80088F1C: nop

    // 0x80088F20: bne         $t7, $at, L_80088F40
    if (ctx->r15 != ctx->r1) {
        // 0x80088F24: nop
    
            goto L_80088F40;
    }
    // 0x80088F24: nop

    // 0x80088F28: sb          $zero, 0x27($t0)
    MEM_B(0X27, ctx->r8) = 0;
    // 0x80088F2C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80088F30: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80088F34: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    // 0x80088F38: jal         0x800B8B60
    // 0x80088F3C: nop

    alSynStopVoice(rdram, ctx);
        goto after_2;
    // 0x80088F3C: nop

    after_2:
L_80088F40:
    // 0x80088F40: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80088F44: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80088F48: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x80088F4C: addu        $t5, $t2, $t1
    ctx->r13 = ADD32(ctx->r10, ctx->r9);
    // 0x80088F50: sw          $zero, 0x20($t5)
    MEM_W(0X20, ctx->r13) = 0;
    // 0x80088F54: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80088F58: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80088F5C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80088F60: addu        $t7, $t4, $t9
    ctx->r15 = ADD32(ctx->r12, ctx->r25);
    // 0x80088F64: sw          $zero, 0x90($t7)
    MEM_W(0X90, ctx->r15) = 0;
    // 0x80088F68: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80088F6C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80088F70: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x80088F74: addu        $t2, $t0, $t3
    ctx->r10 = ADD32(ctx->r8, ctx->r11);
    // 0x80088F78: sw          $zero, 0xD0($t2)
    MEM_W(0XD0, ctx->r10) = 0;
    // 0x80088F7C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80088F80: lbu         $t8, 0x33($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X33);
    // 0x80088F84: addiu       $t5, $t1, 0x1
    ctx->r13 = ADD32(ctx->r9, 0X1);
    // 0x80088F88: slt         $at, $t5, $t8
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80088F8C: bne         $at, $zero, L_80088E98
    if (ctx->r1 != 0) {
        // 0x80088F90: sw          $t5, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r13;
            goto L_80088E98;
    }
    // 0x80088F90: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_80088F94:
    // 0x80088F94: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80088F98:
    // 0x80088F98: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80088F9C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80088FA0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80088FA4: addu        $t6, $t9, $t7
    ctx->r14 = ADD32(ctx->r25, ctx->r15);
    // 0x80088FA8: sb          $t4, 0x364($t6)
    MEM_B(0X364, ctx->r14) = ctx->r12;
    // 0x80088FAC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80088FB0: nop

    // 0x80088FB4: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x80088FB8: slti        $at, $t3, 0xFF
    ctx->r1 = SIGNED(ctx->r11) < 0XFF ? 1 : 0;
    // 0x80088FBC: bne         $at, $zero, L_80088F98
    if (ctx->r1 != 0) {
        // 0x80088FC0: sw          $t3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r11;
            goto L_80088F98;
    }
    // 0x80088FC0: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80088FC4: lbu         $t2, 0x33($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X33);
    // 0x80088FC8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80088FCC: sra         $t1, $t2, 1
    ctx->r9 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80088FD0: blez        $t1, L_80089008
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80088FD4: nop
    
            goto L_80089008;
    }
    // 0x80088FD4: nop

L_80088FD8:
    // 0x80088FD8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80088FDC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80088FE0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80088FE4: addu        $t7, $t5, $t9
    ctx->r15 = ADD32(ctx->r13, ctx->r25);
    // 0x80088FE8: sw          $zero, 0x60($t7)
    MEM_W(0X60, ctx->r15) = 0;
    // 0x80088FEC: lbu         $t0, 0x33($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X33);
    // 0x80088FF0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80088FF4: sra         $t3, $t0, 1
    ctx->r11 = S32(SIGNED(ctx->r8) >> 1);
    // 0x80088FF8: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x80088FFC: slt         $at, $t6, $t3
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80089000: bne         $at, $zero, L_80088FD8
    if (ctx->r1 != 0) {
        // 0x80089004: sw          $t6, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r14;
            goto L_80088FD8;
    }
    // 0x80089004: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80089008:
    // 0x80089008: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8008900C: nop

    // 0x80089010: sw          $zero, 0x80($t2)
    MEM_W(0X80, ctx->r10) = 0;
    // 0x80089014: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80089018: nop

    // 0x8008901C: sw          $zero, 0x84($t1)
    MEM_W(0X84, ctx->r9) = 0;
    // 0x80089020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80089024: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80089028: jr          $ra
    // 0x8008902C: nop

    return;
    // 0x8008902C: nop

;}
RECOMP_FUNC void func_80089030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089030: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80089034: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x80089038: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x8008903C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80089040: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x80089044: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x80089048: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x8008904C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80089050: lw          $t7, 0x84($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X84);
    // 0x80089054: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x80089058: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x8008905C: jal         0x8008BF58
    // 0x80089060: sh          $t7, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r15;
    func_8008BF58(rdram, ctx);
        goto after_0;
    // 0x80089060: sh          $t7, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r15;
    after_0:
    // 0x80089064: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x80089068: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x8008906C: addiu       $t9, $t8, 0xE
    ctx->r25 = ADD32(ctx->r24, 0XE);
    // 0x80089070: lhu         $t3, 0x2E($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X2E);
    // 0x80089074: sw          $t9, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r25;
    // 0x80089078: lw          $t2, 0x350($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X350);
    // 0x8008907C: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x80089080: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80089084: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80089088: sw          $t0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r8;
    // 0x8008908C: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x80089090: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80089094: addiu       $t7, $t6, 0x18
    ctx->r15 = ADD32(ctx->r14, 0X18);
    // 0x80089098: addiu       $t8, $t7, 0xF
    ctx->r24 = ADD32(ctx->r15, 0XF);
    // 0x8008909C: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x800890A0: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    // 0x800890A4: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x800890A8: lhu         $t4, 0x2E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X2E);
    // 0x800890AC: sw          $t9, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r25;
    // 0x800890B0: lw          $t2, 0x350($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X350);
    // 0x800890B4: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x800890B8: addu        $t5, $t2, $t0
    ctx->r13 = ADD32(ctx->r10, ctx->r8);
    // 0x800890BC: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x800890C0: lbu         $t1, 0x64($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X64);
    // 0x800890C4: nop

    // 0x800890C8: sw          $t1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r9;
    // 0x800890CC: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x800890D0: lhu         $t3, 0x2E($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X2E);
    // 0x800890D4: lw          $t9, 0x350($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X350);
    // 0x800890D8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800890DC: addu        $t2, $t9, $t4
    ctx->r10 = ADD32(ctx->r25, ctx->r12);
    // 0x800890E0: lw          $t0, 0x0($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X0);
    // 0x800890E4: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x800890E8: nop

    // 0x800890EC: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x800890F0: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x800890F4: lhu         $t8, 0x2E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X2E);
    // 0x800890F8: lw          $t6, 0x350($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X350);
    // 0x800890FC: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x80089100: addu        $t9, $t6, $t3
    ctx->r25 = ADD32(ctx->r14, ctx->r11);
    // 0x80089104: lw          $t4, 0x0($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X0);
    // 0x80089108: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x8008910C: nop

    // 0x80089110: sw          $t5, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r13;
    // 0x80089114: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x80089118: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x8008911C: lbu         $t6, 0x65($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X65);
    // 0x80089120: addu        $t0, $t2, $t7
    ctx->r8 = ADD32(ctx->r10, ctx->r15);
    // 0x80089124: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x80089128: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x8008912C: addiu       $t1, $t0, 0xF
    ctx->r9 = ADD32(ctx->r8, 0XF);
    // 0x80089130: sll         $t3, $t6, 4
    ctx->r11 = S32(ctx->r14 << 4);
    // 0x80089134: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x80089138: and         $t8, $t1, $at
    ctx->r24 = ctx->r9 & ctx->r1;
    // 0x8008913C: addu        $t5, $t3, $t9
    ctx->r13 = ADD32(ctx->r11, ctx->r25);
    // 0x80089140: lhu         $t0, 0x2E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X2E);
    // 0x80089144: sw          $t8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r24;
    // 0x80089148: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x8008914C: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x80089150: lw          $t2, 0x350($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X350);
    // 0x80089154: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80089158: addu        $t8, $t2, $t1
    ctx->r24 = ADD32(ctx->r10, ctx->r9);
    // 0x8008915C: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x80089160: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x80089164: lw          $t3, 0x0($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X0);
    // 0x80089168: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x8008916C: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x80089170: beq         $s0, $zero, L_800891B8
    if (ctx->r16 == 0) {
        // 0x80089174: sw          $t3, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r11;
            goto L_800891B8;
    }
    // 0x80089174: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
L_80089178:
    // 0x80089178: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8008917C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80089180: lb          $t4, 0x0($t5)
    ctx->r12 = MEM_B(ctx->r13, 0X0);
    // 0x80089184: nop

    // 0x80089188: sb          $t4, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r12;
    // 0x8008918C: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80089190: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80089194: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80089198: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x8008919C: addiu       $t7, $t3, -0x1
    ctx->r15 = ADD32(ctx->r11, -0X1);
    // 0x800891A0: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x800891A4: addiu       $t1, $t2, 0x1
    ctx->r9 = ADD32(ctx->r10, 0X1);
    // 0x800891A8: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x800891AC: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x800891B0: bne         $s0, $zero, L_80089178
    if (ctx->r16 != 0) {
        // 0x800891B4: sw          $t7, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r15;
            goto L_80089178;
    }
    // 0x800891B4: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
L_800891B8:
    // 0x800891B8: lbu         $t9, 0x65($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X65);
    // 0x800891BC: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x800891C0: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x800891C4: sll         $t5, $t9, 4
    ctx->r13 = S32(ctx->r25 << 4);
    // 0x800891C8: addu        $t0, $t5, $t4
    ctx->r8 = ADD32(ctx->r13, ctx->r12);
    // 0x800891CC: addu        $t1, $t0, $t2
    ctx->r9 = ADD32(ctx->r8, ctx->r10);
    // 0x800891D0: lbu         $t3, 0x64($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X64);
    // 0x800891D4: addiu       $t8, $t1, 0xF
    ctx->r24 = ADD32(ctx->r9, 0XF);
    // 0x800891D8: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x800891DC: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x800891E0: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x800891E4: bne         $at, $zero, L_800891F8
    if (ctx->r1 != 0) {
        // 0x800891E8: sw          $t6, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r14;
            goto L_800891F8;
    }
    // 0x800891E8: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x800891EC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800891F0: jal         0x800B3BFC
    // 0x800891F4: addiu       $a0, $a0, -0x728
    ctx->r4 = ADD32(ctx->r4, -0X728);
    osSyncPrintf(rdram, ctx);
        goto after_1;
    // 0x800891F4: addiu       $a0, $a0, -0x728
    ctx->r4 = ADD32(ctx->r4, -0X728);
    after_1:
L_800891F8:
    // 0x800891F8: lbu         $t7, 0x65($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X65);
    // 0x800891FC: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x80089200: blez        $t7, L_80089D30
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80089204: nop
    
            goto L_80089D30;
    }
    // 0x80089204: nop

L_80089208:
    // 0x80089208: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x8008920C: jal         0x8008C014
    // 0x80089210: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_8008C014(rdram, ctx);
        goto after_2;
    // 0x80089210: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_2:
    // 0x80089214: jal         0x800B6650
    // 0x80089218: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_3;
    // 0x80089218: nop

    after_3:
    // 0x8008921C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80089220: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80089224: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
L_80089228:
    // 0x80089228: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x8008922C: lhu         $t4, 0x2C($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X2C);
    // 0x80089230: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80089234: lhu         $t8, 0x3B50($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X3B50);
    // 0x80089238: lhu         $t1, 0x5E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X5E);
    // 0x8008923C: addu        $t0, $t5, $t4
    ctx->r8 = ADD32(ctx->r13, ctx->r12);
    // 0x80089240: lbu         $t2, 0x364($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X364);
    // 0x80089244: subu        $t6, $t1, $t8
    ctx->r14 = SUB32(ctx->r9, ctx->r24);
    // 0x80089248: bne         $t2, $t6, L_8008927C
    if (ctx->r10 != ctx->r14) {
        // 0x8008924C: nop
    
            goto L_8008927C;
    }
    // 0x8008924C: nop

    // 0x80089250: lhu         $t7, 0x2E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X2E);
    // 0x80089254: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80089258: lw          $t3, 0x350($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X350);
    // 0x8008925C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80089260: addu        $t0, $t3, $t9
    ctx->r8 = ADD32(ctx->r11, ctx->r25);
    // 0x80089264: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80089268: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8008926C: nop

    // 0x80089270: addu        $t2, $t1, $t8
    ctx->r10 = ADD32(ctx->r9, ctx->r24);
    // 0x80089274: b           L_80089298
    // 0x80089278: sb          $t4, 0x10($t2)
    MEM_B(0X10, ctx->r10) = ctx->r12;
        goto L_80089298;
    // 0x80089278: sb          $t4, 0x10($t2)
    MEM_B(0X10, ctx->r10) = ctx->r12;
L_8008927C:
    // 0x8008927C: lhu         $t6, 0x2C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X2C);
    // 0x80089280: nop

    // 0x80089284: addiu       $t5, $t6, 0x1
    ctx->r13 = ADD32(ctx->r14, 0X1);
    // 0x80089288: andi        $t7, $t5, 0xFFFF
    ctx->r15 = ctx->r13 & 0XFFFF;
    // 0x8008928C: slti        $at, $t7, 0xFF
    ctx->r1 = SIGNED(ctx->r15) < 0XFF ? 1 : 0;
    // 0x80089290: bne         $at, $zero, L_80089228
    if (ctx->r1 != 0) {
        // 0x80089294: sh          $t5, 0x2C($sp)
        MEM_H(0X2C, ctx->r29) = ctx->r13;
            goto L_80089228;
    }
    // 0x80089294: sh          $t5, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r13;
L_80089298:
    // 0x80089298: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8008929C: nop

    // 0x800892A0: beq         $t3, $zero, L_80089D0C
    if (ctx->r11 == 0) {
        // 0x800892A4: nop
    
            goto L_80089D0C;
    }
    // 0x800892A4: nop

    // 0x800892A8: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x800892AC: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800892B0: lhu         $t0, 0x3B50($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X3B50);
    // 0x800892B4: lhu         $t9, 0x5E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X5E);
    // 0x800892B8: lw          $t4, 0x80($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X80);
    // 0x800892BC: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x800892C0: addu        $t2, $t8, $t4
    ctx->r10 = ADD32(ctx->r24, ctx->r12);
    // 0x800892C4: sb          $t1, 0x364($t2)
    MEM_B(0X364, ctx->r10) = ctx->r9;
    // 0x800892C8: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x800892CC: lhu         $t3, 0x2E($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X2E);
    // 0x800892D0: lw          $t7, 0x350($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X350);
    // 0x800892D4: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x800892D8: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x800892DC: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x800892E0: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800892E4: lw          $t5, 0x80($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X80);
    // 0x800892E8: addu        $t1, $t8, $t4
    ctx->r9 = ADD32(ctx->r24, ctx->r12);
    // 0x800892EC: sb          $t5, 0x10($t1)
    MEM_B(0X10, ctx->r9) = ctx->r13;
    // 0x800892F0: lhu         $t2, 0x5C($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X5C);
    // 0x800892F4: nop

    // 0x800892F8: andi        $t6, $t2, 0x1
    ctx->r14 = ctx->r10 & 0X1;
    // 0x800892FC: beq         $t6, $zero, L_800899C4
    if (ctx->r14 == 0) {
        // 0x80089300: nop
    
            goto L_800899C4;
    }
    // 0x80089300: nop

    // 0x80089304: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x80089308: beq         $t3, $zero, L_80089660
    if (ctx->r11 == 0) {
        // 0x8008930C: nop
    
            goto L_80089660;
    }
    // 0x8008930C: nop

    // 0x80089310: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x80089314: lhu         $a1, 0x5E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X5E);
    // 0x80089318: jal         0x80087478
    // 0x8008931C: nop

    func_80087478(rdram, ctx);
        goto after_4;
    // 0x8008931C: nop

    after_4:
    // 0x80089320: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x80089324: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x80089328: lw          $t8, 0x80($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X80);
    // 0x8008932C: lw          $t0, 0x18($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X18);
    // 0x80089330: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x80089334: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x80089338: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008933C: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x80089340: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x80089344: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x80089348: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x8008934C: lw          $t3, 0x80($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X80);
    // 0x80089350: lw          $t2, 0x18($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X18);
    // 0x80089354: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80089358: addu        $t8, $t2, $t9
    ctx->r24 = ADD32(ctx->r10, ctx->r25);
    // 0x8008935C: sw          $t1, 0x528($t8)
    MEM_W(0X528, ctx->r24) = ctx->r9;
    // 0x80089360: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x80089364: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80089368: lw          $t6, 0x80($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X80);
    // 0x8008936C: lw          $t5, 0x18($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X18);
    // 0x80089370: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x80089374: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x80089378: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008937C: sll         $t4, $t0, 1
    ctx->r12 = S32(ctx->r8 << 1);
    // 0x80089380: addu        $t2, $t5, $t3
    ctx->r10 = ADD32(ctx->r13, ctx->r11);
    // 0x80089384: sw          $t4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r12;
    // 0x80089388: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8008938C: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x80089390: lw          $t7, 0x80($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X80);
    // 0x80089394: lw          $t0, 0x18($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X18);
    // 0x80089398: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8008939C: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x800893A0: addu        $t5, $t0, $t6
    ctx->r13 = ADD32(ctx->r8, ctx->r14);
    // 0x800893A4: sw          $t1, 0x630($t5)
    MEM_W(0X630, ctx->r13) = ctx->r9;
    // 0x800893A8: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x800893AC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800893B0: lw          $t9, 0x80($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X80);
    // 0x800893B4: lw          $t2, 0x18($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X18);
    // 0x800893B8: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x800893BC: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800893C0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800893C4: addu        $t7, $t2, $t8
    ctx->r15 = ADD32(ctx->r10, ctx->r24);
    // 0x800893C8: sb          $t3, 0x8($t7)
    MEM_B(0X8, ctx->r15) = ctx->r11;
    // 0x800893CC: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x800893D0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800893D4: lw          $t5, 0x80($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X80);
    // 0x800893D8: lw          $t1, 0x18($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X18);
    // 0x800893DC: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x800893E0: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800893E4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800893E8: addu        $t9, $t1, $t4
    ctx->r25 = ADD32(ctx->r9, ctx->r12);
    // 0x800893EC: sb          $t0, 0x9($t9)
    MEM_B(0X9, ctx->r25) = ctx->r8;
    // 0x800893F0: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x800893F4: nop

    // 0x800893F8: lw          $t3, 0x80($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X80);
    // 0x800893FC: lw          $t8, 0x18($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X18);
    // 0x80089400: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80089404: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x80089408: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008940C: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x80089410: lw          $t5, 0x0($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X0);
    // 0x80089414: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80089418: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x8008941C: lw          $t4, 0x80($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X80);
    // 0x80089420: lw          $t1, 0x18($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X18);
    // 0x80089424: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x80089428: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x8008942C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80089430: addu        $t9, $t1, $t0
    ctx->r25 = ADD32(ctx->r9, ctx->r8);
    // 0x80089434: lw          $t3, 0x0($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X0);
    // 0x80089438: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8008943C: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80089440: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x80089444: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80089448: beq         $s0, $zero, L_800894A0
    if (ctx->r16 == 0) {
        // 0x8008944C: sw          $t3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r11;
            goto L_800894A0;
    }
    // 0x8008944C: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
L_80089450:
    // 0x80089450: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80089454: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80089458: lb          $t4, 0x1($t6)
    ctx->r12 = MEM_B(ctx->r14, 0X1);
    // 0x8008945C: lb          $t5, 0x0($t6)
    ctx->r13 = MEM_B(ctx->r14, 0X0);
    // 0x80089460: sll         $t1, $t4, 8
    ctx->r9 = S32(ctx->r12 << 8);
    // 0x80089464: andi        $t0, $t1, 0xFF00
    ctx->r8 = ctx->r9 & 0XFF00;
    // 0x80089468: andi        $t2, $t5, 0xFF
    ctx->r10 = ctx->r13 & 0XFF;
    // 0x8008946C: addu        $t9, $t2, $t0
    ctx->r25 = ADD32(ctx->r10, ctx->r8);
    // 0x80089470: sh          $t9, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r25;
    // 0x80089474: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80089478: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8008947C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80089480: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x80089484: addiu       $t1, $t4, -0x1
    ctx->r9 = ADD32(ctx->r12, -0X1);
    // 0x80089488: addiu       $t7, $t8, 0x2
    ctx->r15 = ADD32(ctx->r24, 0X2);
    // 0x8008948C: addiu       $t6, $t5, 0x2
    ctx->r14 = ADD32(ctx->r13, 0X2);
    // 0x80089490: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x80089494: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x80089498: bne         $s0, $zero, L_80089450
    if (ctx->r16 != 0) {
        // 0x8008949C: sw          $t1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r9;
            goto L_80089450;
    }
    // 0x8008949C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
L_800894A0:
    // 0x800894A0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x800894A4: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x800894A8: sll         $t9, $t0, 1
    ctx->r25 = S32(ctx->r8 << 1);
    // 0x800894AC: lhu         $t5, 0x5C($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X5C);
    // 0x800894B0: addu        $t3, $t2, $t9
    ctx->r11 = ADD32(ctx->r10, ctx->r25);
    // 0x800894B4: addiu       $t8, $t3, 0x1F
    ctx->r24 = ADD32(ctx->r11, 0X1F);
    // 0x800894B8: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x800894BC: sw          $t3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r11;
    // 0x800894C0: and         $t7, $t8, $at
    ctx->r15 = ctx->r24 & ctx->r1;
    // 0x800894C4: andi        $t6, $t5, 0x4
    ctx->r14 = ctx->r13 & 0X4;
    // 0x800894C8: beq         $t6, $zero, L_800895D0
    if (ctx->r14 == 0) {
        // 0x800894CC: sw          $t7, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->r15;
            goto L_800895D0;
    }
    // 0x800894CC: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    // 0x800894D0: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x800894D4: nop

    // 0x800894D8: lw          $t0, 0x80($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X80);
    // 0x800894DC: lw          $t1, 0x18($t4)
    ctx->r9 = MEM_W(ctx->r12, 0X18);
    // 0x800894E0: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x800894E4: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800894E8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800894EC: addu        $t9, $t1, $t2
    ctx->r25 = ADD32(ctx->r9, ctx->r10);
    // 0x800894F0: lw          $t3, 0x0($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X0);
    // 0x800894F4: andi        $t2, $t5, 0x8
    ctx->r10 = ctx->r13 & 0X8;
    // 0x800894F8: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x800894FC: lw          $t7, 0x80($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X80);
    // 0x80089500: lw          $t8, 0x18($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X18);
    // 0x80089504: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80089508: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x8008950C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80089510: addu        $t0, $t8, $t6
    ctx->r8 = ADD32(ctx->r24, ctx->r14);
    // 0x80089514: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80089518: beq         $t2, $zero, L_80089578
    if (ctx->r10 == 0) {
        // 0x8008951C: sw          $t1, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r9;
            goto L_80089578;
    }
    // 0x8008951C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x80089520: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
L_80089524:
    // 0x80089524: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80089528: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x8008952C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80089530: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80089534: subu        $t4, $t9, $t3
    ctx->r12 = SUB32(ctx->r25, ctx->r11);
    // 0x80089538: sll         $t7, $t4, 1
    ctx->r15 = S32(ctx->r12 << 1);
    // 0x8008953C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80089540: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x80089544: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x80089548: lh          $t0, -0x2($t6)
    ctx->r8 = MEM_H(ctx->r14, -0X2);
    // 0x8008954C: sll         $t2, $t5, 1
    ctx->r10 = S32(ctx->r13 << 1);
    // 0x80089550: addu        $t4, $t9, $t2
    ctx->r12 = ADD32(ctx->r25, ctx->r10);
    // 0x80089554: sh          $t0, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r8;
    // 0x80089558: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8008955C: nop

    // 0x80089560: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x80089564: slti        $at, $t7, 0x10
    ctx->r1 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x80089568: bne         $at, $zero, L_80089524
    if (ctx->r1 != 0) {
        // 0x8008956C: sw          $t7, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r15;
            goto L_80089524;
    }
    // 0x8008956C: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x80089570: b           L_80089C14
    // 0x80089574: nop

        goto L_80089C14;
    // 0x80089574: nop

L_80089578:
    // 0x80089578: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
L_8008957C:
    // 0x8008957C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80089580: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80089584: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80089588: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x8008958C: addu        $t3, $t6, $t1
    ctx->r11 = ADD32(ctx->r14, ctx->r9);
    // 0x80089590: sll         $t5, $t3, 1
    ctx->r13 = S32(ctx->r11 << 1);
    // 0x80089594: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80089598: addu        $t2, $t9, $t5
    ctx->r10 = ADD32(ctx->r25, ctx->r13);
    // 0x8008959C: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x800895A0: lh          $t0, 0x0($t2)
    ctx->r8 = MEM_H(ctx->r10, 0X0);
    // 0x800895A4: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x800895A8: addu        $t3, $t1, $t7
    ctx->r11 = ADD32(ctx->r9, ctx->r15);
    // 0x800895AC: sh          $t0, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r8;
    // 0x800895B0: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x800895B4: nop

    // 0x800895B8: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x800895BC: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x800895C0: bne         $at, $zero, L_8008957C
    if (ctx->r1 != 0) {
        // 0x800895C4: sw          $t5, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r13;
            goto L_8008957C;
    }
    // 0x800895C4: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    // 0x800895C8: b           L_80089C14
    // 0x800895CC: nop

        goto L_80089C14;
    // 0x800895CC: nop

L_800895D0:
    // 0x800895D0: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x800895D4: nop

    // 0x800895D8: lw          $t6, 0x80($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X80);
    // 0x800895DC: lw          $t4, 0x18($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X18);
    // 0x800895E0: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800895E4: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x800895E8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800895EC: addu        $t1, $t4, $t8
    ctx->r9 = ADD32(ctx->r12, ctx->r24);
    // 0x800895F0: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x800895F4: nop

    // 0x800895F8: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x800895FC: lw          $t3, 0x80($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X80);
    // 0x80089600: lw          $t0, 0x18($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X18);
    // 0x80089604: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80089608: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x8008960C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80089610: addu        $t5, $t0, $t9
    ctx->r13 = ADD32(ctx->r8, ctx->r25);
    // 0x80089614: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80089618: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x8008961C: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
L_80089620:
    // 0x80089620: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x80089624: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80089628: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8008962C: addu        $t1, $t4, $t8
    ctx->r9 = ADD32(ctx->r12, ctx->r24);
    // 0x80089630: sll         $t7, $t1, 1
    ctx->r15 = S32(ctx->r9 << 1);
    // 0x80089634: sll         $t2, $t7, 1
    ctx->r10 = S32(ctx->r15 << 1);
    // 0x80089638: addu        $t0, $t3, $t2
    ctx->r8 = ADD32(ctx->r11, ctx->r10);
    // 0x8008963C: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80089640: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80089644: nop

    // 0x80089648: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x8008964C: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x80089650: bne         $at, $zero, L_80089620
    if (ctx->r1 != 0) {
        // 0x80089654: sw          $t5, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r13;
            goto L_80089620;
    }
    // 0x80089654: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    // 0x80089658: b           L_80089C14
    // 0x8008965C: nop

        goto L_80089C14;
    // 0x8008965C: nop

L_80089660:
    // 0x80089660: lhu         $t6, 0x5C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X5C);
    // 0x80089664: nop

    // 0x80089668: andi        $t4, $t6, 0x4
    ctx->r12 = ctx->r14 & 0X4;
    // 0x8008966C: beq         $t4, $zero, L_80089818
    if (ctx->r12 == 0) {
        // 0x80089670: nop
    
            goto L_80089818;
    }
    // 0x80089670: nop

    // 0x80089674: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x80089678: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x8008967C: lhu         $a1, 0x5E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X5E);
    // 0x80089680: jal         0x80087478
    // 0x80089684: addu        $a0, $t8, $t1
    ctx->r4 = ADD32(ctx->r24, ctx->r9);
    func_80087478(rdram, ctx);
        goto after_5;
    // 0x80089684: addu        $a0, $t8, $t1
    ctx->r4 = ADD32(ctx->r24, ctx->r9);
    after_5:
    // 0x80089688: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x8008968C: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x80089690: lw          $t0, 0x80($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X80);
    // 0x80089694: lw          $t2, 0x18($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X18);
    // 0x80089698: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x8008969C: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x800896A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800896A4: addu        $t5, $t2, $t9
    ctx->r13 = ADD32(ctx->r10, ctx->r25);
    // 0x800896A8: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x800896AC: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x800896B0: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x800896B4: lw          $t1, 0x80($t4)
    ctx->r9 = MEM_W(ctx->r12, 0X80);
    // 0x800896B8: lw          $t8, 0x18($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X18);
    // 0x800896BC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800896C0: addu        $t0, $t8, $t3
    ctx->r8 = ADD32(ctx->r24, ctx->r11);
    // 0x800896C4: sw          $t6, 0x528($t0)
    MEM_W(0X528, ctx->r8) = ctx->r14;
    // 0x800896C8: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x800896CC: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x800896D0: lw          $t5, 0x80($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X80);
    // 0x800896D4: lw          $t7, 0x18($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X18);
    // 0x800896D8: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x800896DC: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800896E0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800896E4: addu        $t1, $t7, $t4
    ctx->r9 = ADD32(ctx->r15, ctx->r12);
    // 0x800896E8: sw          $t2, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r10;
    // 0x800896EC: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x800896F0: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x800896F4: lw          $t0, 0x80($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X80);
    // 0x800896F8: lw          $t6, 0x18($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X18);
    // 0x800896FC: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x80089700: addu        $t5, $t6, $t9
    ctx->r13 = ADD32(ctx->r14, ctx->r25);
    // 0x80089704: sw          $t8, 0x630($t5)
    MEM_W(0X630, ctx->r13) = ctx->r24;
    // 0x80089708: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x8008970C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80089710: lw          $t1, 0x80($t4)
    ctx->r9 = MEM_W(ctx->r12, 0X80);
    // 0x80089714: lw          $t2, 0x18($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X18);
    // 0x80089718: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8008971C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80089720: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80089724: addu        $t0, $t2, $t3
    ctx->r8 = ADD32(ctx->r10, ctx->r11);
    // 0x80089728: sb          $t7, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r15;
    // 0x8008972C: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x80089730: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80089734: lw          $t5, 0x80($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X80);
    // 0x80089738: lw          $t8, 0x18($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X18);
    // 0x8008973C: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80089740: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x80089744: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80089748: addu        $t1, $t8, $t4
    ctx->r9 = ADD32(ctx->r24, ctx->r12);
    // 0x8008974C: sb          $t6, 0x9($t1)
    MEM_B(0X9, ctx->r9) = ctx->r14;
    // 0x80089750: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x80089754: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80089758: lw          $t7, 0x80($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X80);
    // 0x8008975C: lw          $t3, 0x18($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X18);
    // 0x80089760: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80089764: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80089768: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008976C: addu        $t9, $t3, $t0
    ctx->r25 = ADD32(ctx->r11, ctx->r8);
    // 0x80089770: lw          $t5, 0x0($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X0);
    // 0x80089774: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80089778: addu        $t4, $t5, $t8
    ctx->r12 = ADD32(ctx->r13, ctx->r24);
    // 0x8008977C: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x80089780: lw          $t1, 0x80($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X80);
    // 0x80089784: lw          $t6, 0x18($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X18);
    // 0x80089788: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x8008978C: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x80089790: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80089794: addu        $t3, $t6, $t7
    ctx->r11 = ADD32(ctx->r14, ctx->r15);
    // 0x80089798: lw          $t0, 0x0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X0);
    // 0x8008979C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x800897A0: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x800897A4: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x800897A8: beq         $s0, $zero, L_800897F4
    if (ctx->r16 == 0) {
        // 0x800897AC: sw          $t0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r8;
            goto L_800897F4;
    }
    // 0x800897AC: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_800897B0:
    // 0x800897B0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800897B4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800897B8: lb          $t4, 0x0($t5)
    ctx->r12 = MEM_B(ctx->r13, 0X0);
    // 0x800897BC: nop

    // 0x800897C0: sll         $t2, $t4, 8
    ctx->r10 = S32(ctx->r12 << 8);
    // 0x800897C4: sh          $t2, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r10;
    // 0x800897C8: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800897CC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800897D0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800897D4: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x800897D8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800897DC: addiu       $t0, $t3, 0x1
    ctx->r8 = ADD32(ctx->r11, 0X1);
    // 0x800897E0: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x800897E4: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x800897E8: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x800897EC: bne         $s0, $zero, L_800897B0
    if (ctx->r16 != 0) {
        // 0x800897F0: sw          $t9, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r25;
            goto L_800897B0;
    }
    // 0x800897F0: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_800897F4:
    // 0x800897F4: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x800897F8: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x800897FC: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80089800: addu        $t2, $t5, $t4
    ctx->r10 = ADD32(ctx->r13, ctx->r12);
    // 0x80089804: addiu       $t1, $t2, 0x1F
    ctx->r9 = ADD32(ctx->r10, 0X1F);
    // 0x80089808: sw          $t2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r10;
    // 0x8008980C: and         $t6, $t1, $at
    ctx->r14 = ctx->r9 & ctx->r1;
    // 0x80089810: b           L_80089C14
    // 0x80089814: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
        goto L_80089C14;
    // 0x80089814: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
L_80089818:
    // 0x80089818: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8008981C: lhu         $a1, 0x5E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X5E);
    // 0x80089820: jal         0x80087478
    // 0x80089824: nop

    func_80087478(rdram, ctx);
        goto after_6;
    // 0x80089824: nop

    after_6:
    // 0x80089828: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x8008982C: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x80089830: lw          $t8, 0x80($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X80);
    // 0x80089834: lw          $t0, 0x18($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X18);
    // 0x80089838: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8008983C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80089840: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80089844: addu        $t5, $t0, $t9
    ctx->r13 = ADD32(ctx->r8, ctx->r25);
    // 0x80089848: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x8008984C: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x80089850: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x80089854: lw          $t6, 0x80($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X80);
    // 0x80089858: lw          $t1, 0x18($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X18);
    // 0x8008985C: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x80089860: addu        $t8, $t1, $t3
    ctx->r24 = ADD32(ctx->r9, ctx->r11);
    // 0x80089864: sw          $t4, 0x528($t8)
    MEM_W(0X528, ctx->r24) = ctx->r12;
    // 0x80089868: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x8008986C: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80089870: lw          $t5, 0x80($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X80);
    // 0x80089874: lw          $t7, 0x18($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X18);
    // 0x80089878: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x8008987C: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x80089880: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80089884: addu        $t6, $t7, $t2
    ctx->r14 = ADD32(ctx->r15, ctx->r10);
    // 0x80089888: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x8008988C: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x80089890: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80089894: lw          $t8, 0x80($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X80);
    // 0x80089898: lw          $t4, 0x18($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X18);
    // 0x8008989C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800898A0: addu        $t5, $t4, $t9
    ctx->r13 = ADD32(ctx->r12, ctx->r25);
    // 0x800898A4: sw          $t1, 0x630($t5)
    MEM_W(0X630, ctx->r13) = ctx->r9;
    // 0x800898A8: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x800898AC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800898B0: lw          $t6, 0x80($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X80);
    // 0x800898B4: lw          $t0, 0x18($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X18);
    // 0x800898B8: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x800898BC: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x800898C0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800898C4: addu        $t8, $t0, $t3
    ctx->r24 = ADD32(ctx->r8, ctx->r11);
    // 0x800898C8: sb          $t7, 0x8($t8)
    MEM_B(0X8, ctx->r24) = ctx->r15;
    // 0x800898CC: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x800898D0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800898D4: lw          $t5, 0x80($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X80);
    // 0x800898D8: lw          $t1, 0x18($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X18);
    // 0x800898DC: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x800898E0: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x800898E4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800898E8: addu        $t6, $t1, $t2
    ctx->r14 = ADD32(ctx->r9, ctx->r10);
    // 0x800898EC: sb          $t4, 0x9($t6)
    MEM_B(0X9, ctx->r14) = ctx->r12;
    // 0x800898F0: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x800898F4: nop

    // 0x800898F8: lw          $t7, 0x80($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X80);
    // 0x800898FC: lw          $t3, 0x18($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X18);
    // 0x80089900: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80089904: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80089908: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008990C: addu        $t9, $t3, $t8
    ctx->r25 = ADD32(ctx->r11, ctx->r24);
    // 0x80089910: lw          $t5, 0x0($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X0);
    // 0x80089914: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80089918: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x8008991C: lw          $t2, 0x80($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X80);
    // 0x80089920: lw          $t1, 0x18($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X18);
    // 0x80089924: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80089928: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8008992C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80089930: addu        $t6, $t1, $t4
    ctx->r14 = ADD32(ctx->r9, ctx->r12);
    // 0x80089934: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80089938: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8008993C: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80089940: addiu       $t8, $t3, -0x1
    ctx->r24 = ADD32(ctx->r11, -0X1);
    // 0x80089944: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80089948: beq         $s0, $zero, L_8008999C
    if (ctx->r16 == 0) {
        // 0x8008994C: sw          $t7, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r15;
            goto L_8008999C;
    }
    // 0x8008994C: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
L_80089950:
    // 0x80089950: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80089954: jal         0x8008C0E0
    // 0x80089958: nop

    func_8008C0E0(rdram, ctx);
        goto after_7;
    // 0x80089958: nop

    after_7:
    // 0x8008995C: sra         $t9, $v0, 8
    ctx->r25 = S32(SIGNED(ctx->r2) >> 8);
    // 0x80089960: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80089964: sll         $t5, $t9, 16
    ctx->r13 = S32(ctx->r25 << 16);
    // 0x80089968: sra         $t0, $t5, 16
    ctx->r8 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8008996C: sb          $t0, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r8;
    // 0x80089970: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80089974: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80089978: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8008997C: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80089980: addiu       $t8, $t3, -0x1
    ctx->r24 = ADD32(ctx->r11, -0X1);
    // 0x80089984: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x80089988: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x8008998C: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x80089990: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x80089994: bne         $s0, $zero, L_80089950
    if (ctx->r16 != 0) {
        // 0x80089998: sw          $t8, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r24;
            goto L_80089950;
    }
    // 0x80089998: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_8008999C:
    // 0x8008999C: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x800899A0: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x800899A4: sll         $t0, $t5, 1
    ctx->r8 = S32(ctx->r13 << 1);
    // 0x800899A8: addu        $t2, $t9, $t0
    ctx->r10 = ADD32(ctx->r25, ctx->r8);
    // 0x800899AC: addiu       $t1, $t2, 0x1F
    ctx->r9 = ADD32(ctx->r10, 0X1F);
    // 0x800899B0: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x800899B4: sw          $t2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r10;
    // 0x800899B8: and         $t4, $t1, $at
    ctx->r12 = ctx->r9 & ctx->r1;
    // 0x800899BC: b           L_80089C14
    // 0x800899C0: sw          $t4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r12;
        goto L_80089C14;
    // 0x800899C0: sw          $t4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r12;
L_800899C4:
    // 0x800899C4: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x800899C8: lhu         $a1, 0x5E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X5E);
    // 0x800899CC: jal         0x80087478
    // 0x800899D0: nop

    func_80087478(rdram, ctx);
        goto after_8;
    // 0x800899D0: nop

    after_8:
    // 0x800899D4: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x800899D8: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x800899DC: lw          $t8, 0x80($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X80);
    // 0x800899E0: lw          $t3, 0x18($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X18);
    // 0x800899E4: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x800899E8: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x800899EC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800899F0: addu        $t9, $t3, $t5
    ctx->r25 = ADD32(ctx->r11, ctx->r13);
    // 0x800899F4: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x800899F8: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x800899FC: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x80089A00: lw          $t4, 0x80($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X80);
    // 0x80089A04: lw          $t1, 0x18($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X18);
    // 0x80089A08: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80089A0C: addu        $t8, $t1, $t7
    ctx->r24 = ADD32(ctx->r9, ctx->r15);
    // 0x80089A10: sw          $t0, 0x528($t8)
    MEM_W(0X528, ctx->r24) = ctx->r8;
    // 0x80089A14: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x80089A18: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80089A1C: lw          $t9, 0x80($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X80);
    // 0x80089A20: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x80089A24: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x80089A28: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x80089A2C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80089A30: addu        $t4, $t6, $t2
    ctx->r12 = ADD32(ctx->r14, ctx->r10);
    // 0x80089A34: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x80089A38: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x80089A3C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80089A40: lw          $t8, 0x80($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X80);
    // 0x80089A44: lw          $t0, 0x18($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X18);
    // 0x80089A48: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x80089A4C: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x80089A50: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80089A54: addu        $t9, $t0, $t5
    ctx->r25 = ADD32(ctx->r8, ctx->r13);
    // 0x80089A58: sb          $t1, 0x8($t9)
    MEM_B(0X8, ctx->r25) = ctx->r9;
    // 0x80089A5C: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x80089A60: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80089A64: lw          $t4, 0x80($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X80);
    // 0x80089A68: lw          $t3, 0x18($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X18);
    // 0x80089A6C: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80089A70: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80089A74: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80089A78: addu        $t8, $t3, $t7
    ctx->r24 = ADD32(ctx->r11, ctx->r15);
    // 0x80089A7C: sb          $t6, 0x9($t8)
    MEM_B(0X9, ctx->r24) = ctx->r14;
    // 0x80089A80: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x80089A84: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80089A88: lw          $t9, 0x80($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X80);
    // 0x80089A8C: lw          $t1, 0x18($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X18);
    // 0x80089A90: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x80089A94: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x80089A98: sw          $t0, 0x630($t4)
    MEM_W(0X630, ctx->r12) = ctx->r8;
    // 0x80089A9C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80089AA0: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x80089AA4: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x80089AA8: lw          $t8, 0x80($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X80);
    // 0x80089AAC: lw          $t6, 0x18($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X18);
    // 0x80089AB0: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x80089AB4: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x80089AB8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80089ABC: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80089AC0: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x80089AC4: addu        $t9, $t6, $t5
    ctx->r25 = ADD32(ctx->r14, ctx->r13);
    // 0x80089AC8: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x80089ACC: lhu         $t6, 0x5C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X5C);
    // 0x80089AD0: addu        $t4, $t0, $t2
    ctx->r12 = ADD32(ctx->r8, ctx->r10);
    // 0x80089AD4: addiu       $t3, $t4, 0x1F
    ctx->r11 = ADD32(ctx->r12, 0X1F);
    // 0x80089AD8: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80089ADC: sw          $t4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r12;
    // 0x80089AE0: and         $t8, $t3, $at
    ctx->r24 = ctx->r11 & ctx->r1;
    // 0x80089AE4: andi        $t5, $t6, 0x4
    ctx->r13 = ctx->r14 & 0X4;
    // 0x80089AE8: sw          $t8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r24;
    // 0x80089AEC: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x80089AF0: beq         $t5, $zero, L_80089BB8
    if (ctx->r13 == 0) {
        // 0x80089AF4: sw          $t1, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r9;
            goto L_80089BB8;
    }
    // 0x80089AF4: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x80089AF8: lw          $t1, 0x80($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X80);
    // 0x80089AFC: lw          $t9, 0x18($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X18);
    // 0x80089B00: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80089B04: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80089B08: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80089B0C: addu        $t2, $t9, $t0
    ctx->r10 = ADD32(ctx->r25, ctx->r8);
    // 0x80089B10: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x80089B14: andi        $t3, $t6, 0x8
    ctx->r11 = ctx->r14 & 0X8;
    // 0x80089B18: beq         $t3, $zero, L_80089B6C
    if (ctx->r11 == 0) {
        // 0x80089B1C: sw          $t4, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r12;
            goto L_80089B6C;
    }
    // 0x80089B1C: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x80089B20: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
L_80089B24:
    // 0x80089B24: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80089B28: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x80089B2C: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80089B30: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x80089B34: subu        $t7, $t8, $t5
    ctx->r15 = SUB32(ctx->r24, ctx->r13);
    // 0x80089B38: addu        $t9, $t7, $t1
    ctx->r25 = ADD32(ctx->r15, ctx->r9);
    // 0x80089B3C: lb          $t0, -0x1($t9)
    ctx->r8 = MEM_B(ctx->r25, -0X1);
    // 0x80089B40: addu        $t4, $t2, $t5
    ctx->r12 = ADD32(ctx->r10, ctx->r13);
    // 0x80089B44: addu        $t6, $t1, $t4
    ctx->r14 = ADD32(ctx->r9, ctx->r12);
    // 0x80089B48: sb          $t0, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r8;
    // 0x80089B4C: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80089B50: nop

    // 0x80089B54: addiu       $t8, $t3, 0x1
    ctx->r24 = ADD32(ctx->r11, 0X1);
    // 0x80089B58: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x80089B5C: bne         $at, $zero, L_80089B24
    if (ctx->r1 != 0) {
        // 0x80089B60: sw          $t8, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r24;
            goto L_80089B24;
    }
    // 0x80089B60: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x80089B64: b           L_80089C14
    // 0x80089B68: nop

        goto L_80089C14;
    // 0x80089B68: nop

L_80089B6C:
    // 0x80089B6C: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
L_80089B70:
    // 0x80089B70: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80089B74: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80089B78: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80089B7C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80089B80: addu        $t2, $t7, $t9
    ctx->r10 = ADD32(ctx->r15, ctx->r25);
    // 0x80089B84: addu        $t1, $t2, $t5
    ctx->r9 = ADD32(ctx->r10, ctx->r13);
    // 0x80089B88: lb          $t4, 0x0($t1)
    ctx->r12 = MEM_B(ctx->r9, 0X0);
    // 0x80089B8C: addu        $t6, $t0, $t7
    ctx->r14 = ADD32(ctx->r8, ctx->r15);
    // 0x80089B90: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x80089B94: sb          $t4, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r12;
    // 0x80089B98: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80089B9C: nop

    // 0x80089BA0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80089BA4: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x80089BA8: bne         $at, $zero, L_80089B70
    if (ctx->r1 != 0) {
        // 0x80089BAC: sw          $t9, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r25;
            goto L_80089B70;
    }
    // 0x80089BAC: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x80089BB0: b           L_80089C14
    // 0x80089BB4: nop

        goto L_80089C14;
    // 0x80089BB4: nop

L_80089BB8:
    // 0x80089BB8: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x80089BBC: nop

    // 0x80089BC0: lw          $t0, 0x80($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X80);
    // 0x80089BC4: lw          $t1, 0x18($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X18);
    // 0x80089BC8: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x80089BCC: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x80089BD0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80089BD4: addu        $t5, $t1, $t7
    ctx->r13 = ADD32(ctx->r9, ctx->r15);
    // 0x80089BD8: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80089BDC: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x80089BE0: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
L_80089BE4:
    // 0x80089BE4: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x80089BE8: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80089BEC: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80089BF0: addu        $t8, $t4, $t3
    ctx->r24 = ADD32(ctx->r12, ctx->r11);
    // 0x80089BF4: addu        $t2, $t9, $t8
    ctx->r10 = ADD32(ctx->r25, ctx->r24);
    // 0x80089BF8: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
    // 0x80089BFC: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x80089C00: nop

    // 0x80089C04: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80089C08: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x80089C0C: bne         $at, $zero, L_80089BE4
    if (ctx->r1 != 0) {
        // 0x80089C10: sw          $t1, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r9;
            goto L_80089BE4;
    }
    // 0x80089C10: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
L_80089C14:
    // 0x80089C14: lhu         $t7, 0x5C($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X5C);
    // 0x80089C18: nop

    // 0x80089C1C: andi        $t5, $t7, 0x4
    ctx->r13 = ctx->r15 & 0X4;
    // 0x80089C20: beq         $t5, $zero, L_80089CD0
    if (ctx->r13 == 0) {
        // 0x80089C24: nop
    
            goto L_80089CD0;
    }
    // 0x80089C24: nop

    // 0x80089C28: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x80089C2C: nop

    // 0x80089C30: lw          $t3, 0x80($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X80);
    // 0x80089C34: lw          $t4, 0x18($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X18);
    // 0x80089C38: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80089C3C: subu        $t9, $t9, $t3
    ctx->r25 = SUB32(ctx->r25, ctx->r11);
    // 0x80089C40: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x80089C44: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80089C48: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x80089C4C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80089C50: addu        $t8, $t4, $t9
    ctx->r24 = ADD32(ctx->r12, ctx->r25);
    // 0x80089C54: addiu       $t2, $t8, 0x948
    ctx->r10 = ADD32(ctx->r24, 0X948);
    // 0x80089C58: addu        $t1, $t4, $t0
    ctx->r9 = ADD32(ctx->r12, ctx->r8);
    // 0x80089C5C: sw          $t2, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r10;
    // 0x80089C60: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x80089C64: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80089C68: lw          $t9, 0x80($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X80);
    // 0x80089C6C: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x80089C70: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80089C74: subu        $t8, $t8, $t9
    ctx->r24 = SUB32(ctx->r24, ctx->r25);
    // 0x80089C78: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80089C7C: addu        $t3, $t6, $t8
    ctx->r11 = ADD32(ctx->r14, ctx->r24);
    // 0x80089C80: sw          $t7, 0x948($t3)
    MEM_W(0X948, ctx->r11) = ctx->r15;
    // 0x80089C84: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x80089C88: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x80089C8C: lw          $t1, 0x80($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X80);
    // 0x80089C90: lw          $t2, 0x18($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X18);
    // 0x80089C94: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x80089C98: subu        $t5, $t5, $t1
    ctx->r13 = SUB32(ctx->r13, ctx->r9);
    // 0x80089C9C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80089CA0: addu        $t9, $t2, $t5
    ctx->r25 = ADD32(ctx->r10, ctx->r13);
    // 0x80089CA4: sw          $t4, 0x94C($t9)
    MEM_W(0X94C, ctx->r25) = ctx->r12;
    // 0x80089CA8: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x80089CAC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80089CB0: lw          $t3, 0x80($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X80);
    // 0x80089CB4: lw          $t7, 0x18($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X18);
    // 0x80089CB8: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x80089CBC: subu        $t0, $t0, $t3
    ctx->r8 = SUB32(ctx->r8, ctx->r11);
    // 0x80089CC0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80089CC4: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x80089CC8: b           L_80089CF4
    // 0x80089CCC: sw          $t6, 0x950($t1)
    MEM_W(0X950, ctx->r9) = ctx->r14;
        goto L_80089CF4;
    // 0x80089CCC: sw          $t6, 0x950($t1)
    MEM_W(0X950, ctx->r9) = ctx->r14;
L_80089CD0:
    // 0x80089CD0: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x80089CD4: nop

    // 0x80089CD8: lw          $t4, 0x80($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X80);
    // 0x80089CDC: lw          $t5, 0x18($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X18);
    // 0x80089CE0: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x80089CE4: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x80089CE8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80089CEC: addu        $t8, $t5, $t9
    ctx->r24 = ADD32(ctx->r13, ctx->r25);
    // 0x80089CF0: sw          $zero, 0xC($t8)
    MEM_W(0XC, ctx->r24) = 0;
L_80089CF4:
    // 0x80089CF4: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x80089CF8: nop

    // 0x80089CFC: lw          $t7, 0x80($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X80);
    // 0x80089D00: nop

    // 0x80089D04: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x80089D08: sw          $t0, 0x80($t3)
    MEM_W(0X80, ctx->r11) = ctx->r8;
L_80089D0C:
    // 0x80089D0C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80089D10: lbu         $t5, 0x65($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X65);
    // 0x80089D14: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x80089D18: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x80089D1C: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80089D20: addiu       $t1, $t6, 0x10
    ctx->r9 = ADD32(ctx->r14, 0X10);
    // 0x80089D24: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x80089D28: bne         $at, $zero, L_80089208
    if (ctx->r1 != 0) {
        // 0x80089D2C: sw          $t1, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r9;
            goto L_80089208;
    }
    // 0x80089D2C: sw          $t1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r9;
L_80089D30:
    // 0x80089D30: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x80089D34: nop

    // 0x80089D38: lw          $t8, 0x84($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X84);
    // 0x80089D3C: nop

    // 0x80089D40: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x80089D44: sw          $t7, 0x84($t9)
    MEM_W(0X84, ctx->r25) = ctx->r15;
    // 0x80089D48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80089D4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80089D50: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x80089D54: jr          $ra
    // 0x80089D58: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80089D58: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80089D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089D5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80089D60: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80089D64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80089D68: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80089D6C: jal         0x80088C14
    // 0x80089D70: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_80088C14(rdram, ctx);
        goto after_0;
    // 0x80089D70: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80089D74: jal         0x8008A7C0
    // 0x80089D78: nop

    func_8008A7C0(rdram, ctx);
        goto after_1;
    // 0x80089D78: nop

    after_1:
    // 0x80089D7C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80089D80: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80089D84: lw          $t7, 0x8C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8C);
    // 0x80089D88: nop

    // 0x80089D8C: beq         $t7, $zero, L_80089E54
    if (ctx->r15 == 0) {
        // 0x80089D90: nop
    
            goto L_80089E54;
    }
    // 0x80089D90: nop

L_80089D94:
    // 0x80089D94: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80089D98: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80089D9C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80089DA0: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80089DA4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80089DA8: lw          $t9, 0x1C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X1C);
    // 0x80089DAC: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80089DB0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80089DB4: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80089DB8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80089DBC: lbu         $t3, 0x27($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X27);
    // 0x80089DC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80089DC4: bne         $t3, $at, L_80089DE4
    if (ctx->r11 != ctx->r1) {
        // 0x80089DC8: nop
    
            goto L_80089DE4;
    }
    // 0x80089DC8: nop

    // 0x80089DCC: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    // 0x80089DD0: jal         0x800B8B60
    // 0x80089DD4: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    alSynStopVoice(rdram, ctx);
        goto after_2;
    // 0x80089DD4: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    after_2:
    // 0x80089DD8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80089DDC: nop

    // 0x80089DE0: sb          $zero, 0x27($t4)
    MEM_B(0X27, ctx->r12) = 0;
L_80089DE4:
    // 0x80089DE4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80089DE8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80089DEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80089DF0: addu        $t0, $t5, $t7
    ctx->r8 = ADD32(ctx->r13, ctx->r15);
    // 0x80089DF4: sw          $zero, 0x20($t0)
    MEM_W(0X20, ctx->r8) = 0;
    // 0x80089DF8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80089DFC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80089E00: sll         $t3, $t1, 3
    ctx->r11 = S32(ctx->r9 << 3);
    // 0x80089E04: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80089E08: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80089E0C: addu        $t8, $t9, $t3
    ctx->r24 = ADD32(ctx->r25, ctx->r11);
    // 0x80089E10: lw          $t2, 0x110($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X110);
    // 0x80089E14: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80089E18: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
    // 0x80089E1C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80089E20: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80089E24: nop

    // 0x80089E28: addu        $t7, $t6, $t5
    ctx->r15 = ADD32(ctx->r14, ctx->r13);
    // 0x80089E2C: sb          $t4, 0x354($t7)
    MEM_B(0X354, ctx->r15) = ctx->r12;
    // 0x80089E30: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80089E34: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80089E38: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80089E3C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80089E40: lw          $t3, 0x8C($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X8C);
    // 0x80089E44: nop

    // 0x80089E48: sltu        $at, $t1, $t3
    ctx->r1 = ctx->r9 < ctx->r11 ? 1 : 0;
    // 0x80089E4C: bne         $at, $zero, L_80089D94
    if (ctx->r1 != 0) {
        // 0x80089E50: nop
    
            goto L_80089D94;
    }
    // 0x80089E50: nop

L_80089E54:
    // 0x80089E54: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80089E58: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80089E5C: lw          $t2, 0x8C($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X8C);
    // 0x80089E60: nop

    // 0x80089E64: srl         $t6, $t2, 1
    ctx->r14 = S32(U32(ctx->r10) >> 1);
    // 0x80089E68: beq         $t6, $zero, L_80089EC0
    if (ctx->r14 == 0) {
        // 0x80089E6C: nop
    
            goto L_80089EC0;
    }
    // 0x80089E6C: nop

L_80089E70:
    // 0x80089E70: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80089E74: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80089E78: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80089E7C: addu        $t0, $t5, $t7
    ctx->r8 = ADD32(ctx->r13, ctx->r15);
    // 0x80089E80: sw          $zero, 0x60($t0)
    MEM_W(0X60, ctx->r8) = 0;
    // 0x80089E84: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80089E88: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80089E8C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089E90: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80089E94: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80089E98: addiu       $t8, $t3, 0x1
    ctx->r24 = ADD32(ctx->r11, 0X1);
    // 0x80089E9C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80089EA0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80089EA4: sb          $t9, -0x7220($at)
    MEM_B(-0X7220, ctx->r1) = ctx->r25;
    // 0x80089EA8: lw          $t6, 0x8C($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X8C);
    // 0x80089EAC: nop

    // 0x80089EB0: srl         $t4, $t6, 1
    ctx->r12 = S32(U32(ctx->r14) >> 1);
    // 0x80089EB4: sltu        $at, $t8, $t4
    ctx->r1 = ctx->r24 < ctx->r12 ? 1 : 0;
    // 0x80089EB8: bne         $at, $zero, L_80089E70
    if (ctx->r1 != 0) {
        // 0x80089EBC: nop
    
            goto L_80089E70;
    }
    // 0x80089EBC: nop

L_80089EC0:
    // 0x80089EC0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80089EC4: jal         0x80088BA4
    // 0x80089EC8: nop

    func_80088BA4(rdram, ctx);
        goto after_3;
    // 0x80089EC8: nop

    after_3:
    // 0x80089ECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80089ED0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80089ED4: jr          $ra
    // 0x80089ED8: nop

    return;
    // 0x80089ED8: nop

;}
RECOMP_FUNC void func_80089EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089EDC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80089EE0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80089EE4: addiu       $t7, $t7, 0x3B54
    ctx->r15 = ADD32(ctx->r15, 0X3B54);
    // 0x80089EE8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80089EEC: addiu       $t0, $t7, 0x3C
    ctx->r8 = ADD32(ctx->r15, 0X3C);
    // 0x80089EF0: addiu       $t6, $sp, 0x8
    ctx->r14 = ADD32(ctx->r29, 0X8);
L_80089EF4:
    // 0x80089EF4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80089EF8: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80089EFC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80089F00: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80089F04: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80089F08: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80089F0C: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80089F10: bne         $t7, $t0, L_80089EF4
    if (ctx->r15 != ctx->r8) {
        // 0x80089F14: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_80089EF4;
    }
    // 0x80089F14: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80089F18: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80089F1C: nop

    // 0x80089F20: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80089F24: sb          $zero, 0x7($sp)
    MEM_B(0X7, ctx->r29) = 0;
    // 0x80089F28: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x80089F2C: sb          $zero, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = 0;
    // 0x80089F30: lw          $t1, 0x8C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8C);
    // 0x80089F34: nop

    // 0x80089F38: srl         $t2, $t1, 1
    ctx->r10 = S32(U32(ctx->r9) >> 1);
    // 0x80089F3C: beq         $t2, $zero, L_80089FF0
    if (ctx->r10 == 0) {
        // 0x80089F40: nop
    
            goto L_80089FF0;
    }
    // 0x80089F40: nop

L_80089F44:
    // 0x80089F44: lbu         $t3, 0x4F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4F);
    // 0x80089F48: nop

    // 0x80089F4C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80089F50: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x80089F54: lw          $t9, 0x20($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X20);
    // 0x80089F58: nop

    // 0x80089F5C: bne         $t9, $zero, L_80089F6C
    if (ctx->r25 != 0) {
        // 0x80089F60: nop
    
            goto L_80089F6C;
    }
    // 0x80089F60: nop

    // 0x80089F64: b           L_8008A080
    // 0x80089F68: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
        goto L_8008A080;
    // 0x80089F68: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_80089F6C:
    // 0x80089F6C: lbu         $t8, 0x4F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4F);
    // 0x80089F70: nop

    // 0x80089F74: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80089F78: addu        $t7, $a0, $t0
    ctx->r15 = ADD32(ctx->r4, ctx->r8);
    // 0x80089F7C: lw          $t6, 0x20($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X20);
    // 0x80089F80: nop

    // 0x80089F84: sltu        $at, $a1, $t6
    ctx->r1 = ctx->r5 < ctx->r14 ? 1 : 0;
    // 0x80089F88: bne         $at, $zero, L_80089FB4
    if (ctx->r1 != 0) {
        // 0x80089F8C: nop
    
            goto L_80089FB4;
    }
    // 0x80089F8C: nop

    // 0x80089F90: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x80089F94: lw          $t2, 0x60($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X60);
    // 0x80089F98: addu        $t4, $sp, $t0
    ctx->r12 = ADD32(ctx->r29, ctx->r8);
    // 0x80089F9C: sw          $t2, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r10;
    // 0x80089FA0: lbu         $t5, 0x7($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X7);
    // 0x80089FA4: nop

    // 0x80089FA8: addiu       $t9, $t5, 0x1
    ctx->r25 = ADD32(ctx->r13, 0X1);
    // 0x80089FAC: b           L_80089FC8
    // 0x80089FB0: sb          $t9, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r25;
        goto L_80089FC8;
    // 0x80089FB0: sb          $t9, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r25;
L_80089FB4:
    // 0x80089FB4: lbu         $t3, 0x4F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4F);
    // 0x80089FB8: nop

    // 0x80089FBC: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x80089FC0: addu        $t7, $sp, $t8
    ctx->r15 = ADD32(ctx->r29, ctx->r24);
    // 0x80089FC4: sw          $zero, 0x8($t7)
    MEM_W(0X8, ctx->r15) = 0;
L_80089FC8:
    // 0x80089FC8: lbu         $t6, 0x4F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X4F);
    // 0x80089FCC: nop

    // 0x80089FD0: addiu       $t1, $t6, 0x1
    ctx->r9 = ADD32(ctx->r14, 0X1);
    // 0x80089FD4: sb          $t1, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r9;
    // 0x80089FD8: lw          $t0, 0x8C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8C);
    // 0x80089FDC: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x80089FE0: srl         $t4, $t0, 1
    ctx->r12 = S32(U32(ctx->r8) >> 1);
    // 0x80089FE4: sltu        $at, $t2, $t4
    ctx->r1 = ctx->r10 < ctx->r12 ? 1 : 0;
    // 0x80089FE8: bne         $at, $zero, L_80089F44
    if (ctx->r1 != 0) {
        // 0x80089FEC: nop
    
            goto L_80089F44;
    }
    // 0x80089FEC: nop

L_80089FF0:
    // 0x80089FF0: lbu         $t5, 0x7($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X7);
    // 0x80089FF4: nop

    // 0x80089FF8: bne         $t5, $zero, L_8008A008
    if (ctx->r13 != 0) {
        // 0x80089FFC: nop
    
            goto L_8008A008;
    }
    // 0x80089FFC: nop

    // 0x8008A000: b           L_8008A080
    // 0x8008A004: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_8008A080;
    // 0x8008A004: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8008A008:
    // 0x8008A008: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8008A00C: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x8008A010: sb          $zero, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = 0;
    // 0x8008A014: sb          $zero, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = 0;
L_8008A018:
    // 0x8008A018: lbu         $t3, 0x4F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4F);
    // 0x8008A01C: addiu       $t7, $sp, 0x8
    ctx->r15 = ADD32(ctx->r29, 0X8);
    // 0x8008A020: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x8008A024: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x8008A028: lw          $t1, 0x0($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X0);
    // 0x8008A02C: nop

    // 0x8008A030: beq         $t1, $zero, L_8008A05C
    if (ctx->r9 == 0) {
        // 0x8008A034: nop
    
            goto L_8008A05C;
    }
    // 0x8008A034: nop

    // 0x8008A038: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8008A03C: nop

    // 0x8008A040: sltu        $at, $t1, $t0
    ctx->r1 = ctx->r9 < ctx->r8 ? 1 : 0;
    // 0x8008A044: beq         $at, $zero, L_8008A05C
    if (ctx->r1 == 0) {
        // 0x8008A048: nop
    
            goto L_8008A05C;
    }
    // 0x8008A048: nop

    // 0x8008A04C: sb          $t3, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = ctx->r11;
    // 0x8008A050: lw          $t2, 0x0($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X0);
    // 0x8008A054: nop

    // 0x8008A058: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
L_8008A05C:
    // 0x8008A05C: lbu         $t4, 0x4F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X4F);
    // 0x8008A060: nop

    // 0x8008A064: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8008A068: andi        $t9, $t5, 0xFF
    ctx->r25 = ctx->r13 & 0XFF;
    // 0x8008A06C: slti        $at, $t9, 0x8
    ctx->r1 = SIGNED(ctx->r25) < 0X8 ? 1 : 0;
    // 0x8008A070: bne         $at, $zero, L_8008A018
    if (ctx->r1 != 0) {
        // 0x8008A074: sb          $t5, 0x4F($sp)
        MEM_B(0X4F, ctx->r29) = ctx->r13;
            goto L_8008A018;
    }
    // 0x8008A074: sb          $t5, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r13;
    // 0x8008A078: lbu         $v0, 0x4E($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X4E);
    // 0x8008A07C: nop

L_8008A080:
    // 0x8008A080: jr          $ra
    // 0x8008A084: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8008A084: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8008A088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A088: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008A08C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8008A090: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8008A094: lw          $t6, -0x752C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X752C);
    // 0x8008A098: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8008A09C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008A0A0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8008A0A4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8008A0A8: beq         $t6, $t7, L_8008A0C8
    if (ctx->r14 == ctx->r15) {
        // 0x8008A0AC: sw          $a3, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r7;
            goto L_8008A0C8;
    }
    // 0x8008A0AC: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8008A0B0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008A0B4: jal         0x800B3BFC
    // 0x8008A0B8: addiu       $a0, $a0, -0x6F8
    ctx->r4 = ADD32(ctx->r4, -0X6F8);
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x8008A0B8: addiu       $a0, $a0, -0x6F8
    ctx->r4 = ADD32(ctx->r4, -0X6F8);
    after_0:
    // 0x8008A0BC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8008A0C0: b           L_8008A5B8
    // 0x8008A0C4: addiu       $v0, $v0, -0x7550
    ctx->r2 = ADD32(ctx->r2, -0X7550);
        goto L_8008A5B8;
    // 0x8008A0C4: addiu       $v0, $v0, -0x7550
    ctx->r2 = ADD32(ctx->r2, -0X7550);
L_8008A0C8:
    // 0x8008A0C8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8008A0CC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8008A0D0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_8008A0D4:
    // 0x8008A0D4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8008A0D8: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8008A0DC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008A0E0: lbu         $t0, -0x7220($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X7220);
    // 0x8008A0E4: lbu         $t1, 0x43($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X43);
    // 0x8008A0E8: nop

    // 0x8008A0EC: bne         $t0, $t1, L_8008A12C
    if (ctx->r8 != ctx->r9) {
        // 0x8008A0F0: nop
    
            goto L_8008A12C;
    }
    // 0x8008A0F0: nop

    // 0x8008A0F4: sll         $t4, $t9, 3
    ctx->r12 = S32(ctx->r25 << 3);
    // 0x8008A0F8: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8008A0FC: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x8008A100: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008A104: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8008A108: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8008A10C: sb          $t2, 0x124($t5)
    MEM_B(0X124, ctx->r13) = ctx->r10;
    // 0x8008A110: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8008A114: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8008A118: bne         $t6, $at, L_8008A12C
    if (ctx->r14 != ctx->r1) {
        // 0x8008A11C: nop
    
            goto L_8008A12C;
    }
    // 0x8008A11C: nop

    // 0x8008A120: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8008A124: nop

    // 0x8008A128: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_8008A12C:
    // 0x8008A12C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8008A130: nop

    // 0x8008A134: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x8008A138: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x8008A13C: bne         $at, $zero, L_8008A0D4
    if (ctx->r1 != 0) {
        // 0x8008A140: sw          $t0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r8;
            goto L_8008A0D4;
    }
    // 0x8008A140: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8008A144: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8008A148: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8008A14C: beq         $t1, $at, L_8008A170
    if (ctx->r9 == ctx->r1) {
        // 0x8008A150: nop
    
            goto L_8008A170;
    }
    // 0x8008A150: nop

    // 0x8008A154: sll         $t3, $t1, 3
    ctx->r11 = S32(ctx->r9 << 3);
    // 0x8008A158: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8008A15C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8008A160: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008A164: addu        $v0, $t9, $t3
    ctx->r2 = ADD32(ctx->r25, ctx->r11);
    // 0x8008A168: b           L_8008A5B8
    // 0x8008A16C: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
        goto L_8008A5B8;
    // 0x8008A16C: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
L_8008A170:
    // 0x8008A170: lbu         $t5, 0x43($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X43);
    // 0x8008A174: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8008A178: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8008A17C: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8008A180: lw          $t2, 0x0($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X0);
    // 0x8008A184: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008A188: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8008A18C: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x8008A190: lbu         $t8, 0x2($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2);
    // 0x8008A194: nop

    // 0x8008A198: sb          $t8, 0x36($sp)
    MEM_B(0X36, ctx->r29) = ctx->r24;
    // 0x8008A19C: lw          $t0, 0x0($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X0);
    // 0x8008A1A0: nop

    // 0x8008A1A4: addu        $t1, $t0, $t6
    ctx->r9 = ADD32(ctx->r8, ctx->r14);
    // 0x8008A1A8: lbu         $t9, 0x1($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X1);
    // 0x8008A1AC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8008A1B0: sb          $t9, 0x35($sp)
    MEM_B(0X35, ctx->r29) = ctx->r25;
    // 0x8008A1B4: lbu         $t3, 0x35($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X35);
    // 0x8008A1B8: nop

    // 0x8008A1BC: blez        $t3, L_8008A210
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8008A1C0: nop
    
            goto L_8008A210;
    }
    // 0x8008A1C0: nop

L_8008A1C4:
    // 0x8008A1C4: lbu         $t7, 0x43($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X43);
    // 0x8008A1C8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8008A1CC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008A1D0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8008A1D4: lw          $t2, 0x0($t5)
    ctx->r10 = MEM_W(ctx->r13, 0X0);
    // 0x8008A1D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008A1DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8008A1E0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8008A1E4: addu        $t4, $t2, $t8
    ctx->r12 = ADD32(ctx->r10, ctx->r24);
    // 0x8008A1E8: addu        $t6, $t4, $t0
    ctx->r14 = ADD32(ctx->r12, ctx->r8);
    // 0x8008A1EC: lbu         $t1, 0x3($t6)
    ctx->r9 = MEM_BU(ctx->r14, 0X3);
    // 0x8008A1F0: addu        $t9, $sp, $t0
    ctx->r25 = ADD32(ctx->r29, ctx->r8);
    // 0x8008A1F4: sb          $t1, 0x28($t9)
    MEM_B(0X28, ctx->r25) = ctx->r9;
    // 0x8008A1F8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8008A1FC: lbu         $t7, 0x35($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X35);
    // 0x8008A200: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x8008A204: slt         $at, $t5, $t7
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8008A208: bne         $at, $zero, L_8008A1C4
    if (ctx->r1 != 0) {
        // 0x8008A20C: sw          $t5, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r13;
            goto L_8008A1C4;
    }
    // 0x8008A20C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_8008A210:
    // 0x8008A210: lbu         $t8, 0x35($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X35);
    // 0x8008A214: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8008A218: sb          $t2, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r10;
    // 0x8008A21C: blez        $t8, L_8008A59C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8008A220: sw          $zero, 0x24($sp)
        MEM_W(0X24, ctx->r29) = 0;
            goto L_8008A59C;
    }
    // 0x8008A220: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_8008A224:
    // 0x8008A224: lbu         $t4, 0x36($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X36);
    // 0x8008A228: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8008A22C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8008A230: jal         0x80089EDC
    // 0x8008A234: subu        $a1, $t4, $t6
    ctx->r5 = SUB32(ctx->r12, ctx->r14);
    func_80089EDC(rdram, ctx);
        goto after_1;
    // 0x8008A234: subu        $a1, $t4, $t6
    ctx->r5 = SUB32(ctx->r12, ctx->r14);
    after_1:
    // 0x8008A238: sb          $v0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r2;
    // 0x8008A23C: lbu         $t1, 0x37($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A240: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8008A244: bne         $t1, $at, L_8008A284
    if (ctx->r9 != ctx->r1) {
        // 0x8008A248: nop
    
            goto L_8008A284;
    }
    // 0x8008A248: nop

    // 0x8008A24C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8008A250: jal         0x80089EDC
    // 0x8008A254: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    func_80089EDC(rdram, ctx);
        goto after_2;
    // 0x8008A254: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    after_2:
    // 0x8008A258: sb          $v0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r2;
    // 0x8008A25C: lbu         $t0, 0x37($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A260: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8008A264: bne         $t0, $at, L_8008A284
    if (ctx->r8 != ctx->r1) {
        // 0x8008A268: nop
    
            goto L_8008A284;
    }
    // 0x8008A268: nop

    // 0x8008A26C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008A270: jal         0x800B3BFC
    // 0x8008A274: addiu       $a0, $a0, -0x684
    ctx->r4 = ADD32(ctx->r4, -0X684);
    osSyncPrintf(rdram, ctx);
        goto after_3;
    // 0x8008A274: addiu       $a0, $a0, -0x684
    ctx->r4 = ADD32(ctx->r4, -0X684);
    after_3:
    // 0x8008A278: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8008A27C: b           L_8008A5B8
    // 0x8008A280: addiu       $v0, $v0, -0x7550
    ctx->r2 = ADD32(ctx->r2, -0X7550);
        goto L_8008A5B8;
    // 0x8008A280: addiu       $v0, $v0, -0x7550
    ctx->r2 = ADD32(ctx->r2, -0X7550);
L_8008A284:
    // 0x8008A284: lbu         $t3, 0x33($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X33);
    // 0x8008A288: lbu         $t8, 0x37($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A28C: sll         $t5, $t3, 3
    ctx->r13 = S32(ctx->r11 << 3);
    // 0x8008A290: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8008A294: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8008A298: sll         $t4, $t8, 3
    ctx->r12 = S32(ctx->r24 << 3);
    // 0x8008A29C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008A2A0: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x8008A2A4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008A2A8: addu        $t7, $t9, $t5
    ctx->r15 = ADD32(ctx->r25, ctx->r13);
    // 0x8008A2AC: addiu       $t2, $t7, 0x114
    ctx->r10 = ADD32(ctx->r15, 0X114);
    // 0x8008A2B0: addu        $t6, $t9, $t4
    ctx->r14 = ADD32(ctx->r25, ctx->r12);
    // 0x8008A2B4: sw          $t2, 0x110($t6)
    MEM_W(0X110, ctx->r14) = ctx->r10;
    // 0x8008A2B8: lbu         $t3, 0x37($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A2BC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8008A2C0: sll         $t5, $t3, 1
    ctx->r13 = S32(ctx->r11 << 1);
    // 0x8008A2C4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8008A2C8: addu        $t7, $t0, $t5
    ctx->r15 = ADD32(ctx->r8, ctx->r13);
    // 0x8008A2CC: sb          $t1, 0x354($t7)
    MEM_B(0X354, ctx->r15) = ctx->r9;
    // 0x8008A2D0: lbu         $t4, 0x37($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A2D4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8008A2D8: sll         $t2, $t4, 1
    ctx->r10 = S32(ctx->r12 << 1);
    // 0x8008A2DC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8008A2E0: addu        $t6, $t9, $t2
    ctx->r14 = ADD32(ctx->r25, ctx->r10);
    // 0x8008A2E4: sb          $t8, 0x355($t6)
    MEM_B(0X355, ctx->r14) = ctx->r24;
    // 0x8008A2E8: lbu         $t3, 0x33($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X33);
    // 0x8008A2EC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8008A2F0: bne         $t3, $at, L_8008A304
    if (ctx->r11 != ctx->r1) {
        // 0x8008A2F4: nop
    
            goto L_8008A304;
    }
    // 0x8008A2F4: nop

    // 0x8008A2F8: lbu         $t0, 0x37($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A2FC: nop

    // 0x8008A300: sb          $t0, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r8;
L_8008A304:
    // 0x8008A304: sb          $zero, 0x34($sp)
    MEM_B(0X34, ctx->r29) = 0;
L_8008A308:
    // 0x8008A308: lbu         $t1, 0x37($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A30C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8008A310: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x8008A314: addu        $t4, $t5, $t7
    ctx->r12 = ADD32(ctx->r13, ctx->r15);
    // 0x8008A318: sw          $zero, 0x20($t4)
    MEM_W(0X20, ctx->r12) = 0;
    // 0x8008A31C: lbu         $t2, 0x37($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A320: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8008A324: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x8008A328: addu        $t6, $t9, $t8
    ctx->r14 = ADD32(ctx->r25, ctx->r24);
    // 0x8008A32C: sw          $zero, 0x60($t6)
    MEM_W(0X60, ctx->r14) = 0;
    // 0x8008A330: lbu         $t3, 0x34($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X34);
    // 0x8008A334: nop

    // 0x8008A338: addiu       $t0, $t3, 0x1
    ctx->r8 = ADD32(ctx->r11, 0X1);
    // 0x8008A33C: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x8008A340: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x8008A344: bne         $at, $zero, L_8008A308
    if (ctx->r1 != 0) {
        // 0x8008A348: sb          $t0, 0x34($sp)
        MEM_B(0X34, ctx->r29) = ctx->r8;
            goto L_8008A308;
    }
    // 0x8008A348: sb          $t0, 0x34($sp)
    MEM_B(0X34, ctx->r29) = ctx->r8;
    // 0x8008A34C: lbu         $t5, 0x47($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X47);
    // 0x8008A350: nop

    // 0x8008A354: beq         $t5, $zero, L_8008A3A4
    if (ctx->r13 == 0) {
        // 0x8008A358: nop
    
            goto L_8008A3A4;
    }
    // 0x8008A358: nop

    // 0x8008A35C: lbu         $t4, 0x37($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A360: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8008A364: sll         $t2, $t4, 3
    ctx->r10 = S32(ctx->r12 << 3);
    // 0x8008A368: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8008A36C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008A370: addu        $t9, $t7, $t2
    ctx->r25 = ADD32(ctx->r15, ctx->r10);
    // 0x8008A374: lw          $t8, 0x110($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X110);
    // 0x8008A378: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008A37C: sb          $t5, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r13;
    // 0x8008A380: lbu         $t0, 0x37($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A384: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8008A388: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8008A38C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008A390: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008A394: addu        $t4, $t3, $t1
    ctx->r12 = ADD32(ctx->r11, ctx->r9);
    // 0x8008A398: lw          $t7, 0x110($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X110);
    // 0x8008A39C: b           L_8008A3EC
    // 0x8008A3A0: sb          $t6, 0x2($t7)
    MEM_B(0X2, ctx->r15) = ctx->r14;
        goto L_8008A3EC;
    // 0x8008A3A0: sb          $t6, 0x2($t7)
    MEM_B(0X2, ctx->r15) = ctx->r14;
L_8008A3A4:
    // 0x8008A3A4: lbu         $t9, 0x37($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A3A8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8008A3AC: sll         $t5, $t9, 3
    ctx->r13 = S32(ctx->r25 << 3);
    // 0x8008A3B0: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x8008A3B4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008A3B8: addu        $t8, $t2, $t5
    ctx->r24 = ADD32(ctx->r10, ctx->r13);
    // 0x8008A3BC: lw          $t0, 0x110($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X110);
    // 0x8008A3C0: nop

    // 0x8008A3C4: sb          $zero, 0x1($t0)
    MEM_B(0X1, ctx->r8) = 0;
    // 0x8008A3C8: lbu         $t1, 0x37($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A3CC: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8008A3D0: sll         $t4, $t1, 3
    ctx->r12 = S32(ctx->r9 << 3);
    // 0x8008A3D4: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8008A3D8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008A3DC: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x8008A3E0: lw          $t7, 0x110($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X110);
    // 0x8008A3E4: nop

    // 0x8008A3E8: sb          $zero, 0x2($t7)
    MEM_B(0X2, ctx->r15) = 0;
L_8008A3EC:
    // 0x8008A3EC: lbu         $t8, 0x37($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A3F0: lbu         $t2, 0x37($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A3F4: sll         $t0, $t8, 3
    ctx->r8 = S32(ctx->r24 << 3);
    // 0x8008A3F8: lbu         $t9, 0x43($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X43);
    // 0x8008A3FC: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8008A400: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008A404: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8008A408: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008A40C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8008A410: sb          $t9, -0x7220($at)
    MEM_B(-0X7220, ctx->r1) = ctx->r25;
    // 0x8008A414: addu        $t1, $t5, $t0
    ctx->r9 = ADD32(ctx->r13, ctx->r8);
    // 0x8008A418: sb          $zero, 0x124($t1)
    MEM_B(0X124, ctx->r9) = 0;
    // 0x8008A41C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8008A420: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8008A424: addu        $t7, $sp, $t6
    ctx->r15 = ADD32(ctx->r29, ctx->r14);
    // 0x8008A428: lbu         $t7, 0x28($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X28);
    // 0x8008A42C: lw          $t4, 0x350($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X350);
    // 0x8008A430: lbu         $t0, 0x37($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A434: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8008A438: addu        $t2, $t4, $t9
    ctx->r10 = ADD32(ctx->r12, ctx->r25);
    // 0x8008A43C: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x8008A440: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8008A444: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008A448: lw          $t5, 0x0($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X0);
    // 0x8008A44C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008A450: addu        $t6, $t3, $t1
    ctx->r14 = ADD32(ctx->r11, ctx->r9);
    // 0x8008A454: sw          $t5, 0x118($t6)
    MEM_W(0X118, ctx->r14) = ctx->r13;
    // 0x8008A458: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8008A45C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8008A460: addu        $t2, $sp, $t9
    ctx->r10 = ADD32(ctx->r29, ctx->r25);
    // 0x8008A464: lbu         $t2, 0x28($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X28);
    // 0x8008A468: lbu         $t5, 0x37($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A46C: lw          $t4, 0x350($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X350);
    // 0x8008A470: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x8008A474: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x8008A478: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008A47C: addu        $t0, $t4, $t8
    ctx->r8 = ADD32(ctx->r12, ctx->r24);
    // 0x8008A480: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x8008A484: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008A488: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x8008A48C: lw          $t2, 0x118($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X118);
    // 0x8008A490: lw          $t1, 0x4($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X4);
    // 0x8008A494: nop

    // 0x8008A498: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x8008A49C: sw          $t4, 0x11C($t9)
    MEM_W(0X11C, ctx->r25) = ctx->r12;
    // 0x8008A4A0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8008A4A4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8008A4A8: addu        $t5, $sp, $t3
    ctx->r13 = ADD32(ctx->r29, ctx->r11);
    // 0x8008A4AC: lbu         $t5, 0x28($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X28);
    // 0x8008A4B0: lw          $t0, 0x350($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X350);
    // 0x8008A4B4: lbu         $t4, 0x37($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A4B8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8008A4BC: addu        $t6, $t0, $t7
    ctx->r14 = ADD32(ctx->r8, ctx->r15);
    // 0x8008A4C0: lw          $t1, 0x0($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X0);
    // 0x8008A4C4: sll         $t9, $t4, 3
    ctx->r25 = S32(ctx->r12 << 3);
    // 0x8008A4C8: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x8008A4CC: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x8008A4D0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008A4D4: addu        $t3, $t8, $t9
    ctx->r11 = ADD32(ctx->r24, ctx->r25);
    // 0x8008A4D8: sw          $t2, 0x128($t3)
    MEM_W(0X128, ctx->r11) = ctx->r10;
    // 0x8008A4DC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_8008A4E0:
    // 0x8008A4E0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8008A4E4: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8008A4E8: addu        $t6, $sp, $t7
    ctx->r14 = ADD32(ctx->r29, ctx->r15);
    // 0x8008A4EC: lbu         $t6, 0x28($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X28);
    // 0x8008A4F0: lw          $t0, 0x350($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X350);
    // 0x8008A4F4: lbu         $t7, 0x37($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A4F8: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x8008A4FC: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x8008A500: lw          $t8, 0x0($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X0);
    // 0x8008A504: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8008A508: sll         $t6, $t7, 3
    ctx->r14 = S32(ctx->r15 << 3);
    // 0x8008A50C: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x8008A510: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008A514: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x8008A518: lbu         $t3, 0x10($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X10);
    // 0x8008A51C: addu        $t0, $t5, $t6
    ctx->r8 = ADD32(ctx->r13, ctx->r14);
    // 0x8008A520: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x8008A524: sb          $t3, 0x12C($t1)
    MEM_B(0X12C, ctx->r9) = ctx->r11;
    // 0x8008A528: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8008A52C: nop

    // 0x8008A530: addiu       $t8, $t4, 0x1
    ctx->r24 = ADD32(ctx->r12, 0X1);
    // 0x8008A534: slti        $at, $t8, 0x8
    ctx->r1 = SIGNED(ctx->r24) < 0X8 ? 1 : 0;
    // 0x8008A538: bne         $at, $zero, L_8008A4E0
    if (ctx->r1 != 0) {
        // 0x8008A53C: sw          $t8, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r24;
            goto L_8008A4E0;
    }
    // 0x8008A53C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8008A540: lbu         $t0, 0x37($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A544: lbu         $t2, 0x36($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X36);
    // 0x8008A548: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8008A54C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8008A550: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x8008A554: subu        $t5, $t2, $t7
    ctx->r13 = SUB32(ctx->r10, ctx->r15);
    // 0x8008A558: addu        $t3, $t6, $t9
    ctx->r11 = ADD32(ctx->r14, ctx->r25);
    // 0x8008A55C: sw          $t5, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->r13;
    // 0x8008A560: lbu         $t7, 0x37($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X37);
    // 0x8008A564: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8008A568: lw          $t1, 0x3910($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3910);
    // 0x8008A56C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8008A570: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8008A574: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x8008A578: subu        $t8, $t1, $t4
    ctx->r24 = SUB32(ctx->r9, ctx->r12);
    // 0x8008A57C: addu        $t6, $t2, $t0
    ctx->r14 = ADD32(ctx->r10, ctx->r8);
    // 0x8008A580: sw          $t8, 0x60($t6)
    MEM_W(0X60, ctx->r14) = ctx->r24;
    // 0x8008A584: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8008A588: lbu         $t3, 0x35($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X35);
    // 0x8008A58C: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x8008A590: slt         $at, $t5, $t3
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8008A594: bne         $at, $zero, L_8008A224
    if (ctx->r1 != 0) {
        // 0x8008A598: sw          $t5, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r13;
            goto L_8008A224;
    }
    // 0x8008A598: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_8008A59C:
    // 0x8008A59C: lbu         $t4, 0x33($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X33);
    // 0x8008A5A0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8008A5A4: sll         $t7, $t4, 3
    ctx->r15 = S32(ctx->r12 << 3);
    // 0x8008A5A8: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x8008A5AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008A5B0: addu        $v0, $t1, $t7
    ctx->r2 = ADD32(ctx->r9, ctx->r15);
    // 0x8008A5B4: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
L_8008A5B8:
    // 0x8008A5B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008A5BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8008A5C0: jr          $ra
    // 0x8008A5C4: nop

    return;
    // 0x8008A5C4: nop

;}
RECOMP_FUNC void func_8008A5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A5C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008A5CC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8008A5D0: lw          $t6, -0x752C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X752C);
    // 0x8008A5D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008A5D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008A5DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8008A5E0: beq         $t6, $zero, L_8008A604
    if (ctx->r14 == 0) {
        // 0x8008A5E4: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_8008A604;
    }
    // 0x8008A5E4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8008A5E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8008A5EC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8008A5F0: lbu         $a2, 0x23($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X23);
    // 0x8008A5F4: jal         0x8008A088
    // 0x8008A5F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8008A088(rdram, ctx);
        goto after_0;
    // 0x8008A5F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8008A5FC: b           L_8008A60C
    // 0x8008A600: nop

        goto L_8008A60C;
    // 0x8008A600: nop

L_8008A604:
    // 0x8008A604: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8008A608: addiu       $v0, $v0, -0x7550
    ctx->r2 = ADD32(ctx->r2, -0X7550);
L_8008A60C:
    // 0x8008A60C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008A610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008A614: jr          $ra
    // 0x8008A618: nop

    return;
    // 0x8008A618: nop

;}
RECOMP_FUNC void func_8008A61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A61C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008A620: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008A624: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
L_8008A628:
    // 0x8008A628: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x8008A62C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008A630: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008A634: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8008A638: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008A63C: addiu       $t8, $t8, -0x7218
    ctx->r24 = ADD32(ctx->r24, -0X7218);
    // 0x8008A640: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8008A644: lh          $t0, 0xA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA);
    // 0x8008A648: addiu       $at, $zero, 0x7D00
    ctx->r1 = ADD32(0, 0X7D00);
    // 0x8008A64C: beq         $t0, $at, L_8008A6BC
    if (ctx->r8 == ctx->r1) {
        // 0x8008A650: nop
    
            goto L_8008A6BC;
    }
    // 0x8008A650: nop

    // 0x8008A654: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8008A658: sh          $t1, 0xA($t9)
    MEM_H(0XA, ctx->r25) = ctx->r9;
    // 0x8008A65C: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x8008A660: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8008A664: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008A668: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8008A66C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008A670: addiu       $t4, $t4, -0x7218
    ctx->r12 = ADD32(ctx->r12, -0X7218);
    // 0x8008A674: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8008A678: lh          $t6, 0xA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA);
    // 0x8008A67C: nop

    // 0x8008A680: bgtz        $t6, L_8008A6BC
    if (SIGNED(ctx->r14) > 0) {
        // 0x8008A684: nop
    
            goto L_8008A6BC;
    }
    // 0x8008A684: nop

    // 0x8008A688: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x8008A68C: lw          $a1, 0x4($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X4);
    // 0x8008A690: lbu         $a2, 0x8($t5)
    ctx->r6 = MEM_BU(ctx->r13, 0X8);
    // 0x8008A694: jal         0x8008A5C8
    // 0x8008A698: nop

    func_8008A5C8(rdram, ctx);
        goto after_0;
    // 0x8008A698: nop

    after_0:
    // 0x8008A69C: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x8008A6A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008A6A4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8008A6A8: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x8008A6AC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008A6B0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8008A6B4: addiu       $t7, $zero, 0x7D00
    ctx->r15 = ADD32(0, 0X7D00);
    // 0x8008A6B8: sh          $t7, -0x720E($at)
    MEM_H(-0X720E, ctx->r1) = ctx->r15;
L_8008A6BC:
    // 0x8008A6BC: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
    // 0x8008A6C0: nop

    // 0x8008A6C4: addiu       $t9, $t1, 0x1
    ctx->r25 = ADD32(ctx->r9, 0X1);
    // 0x8008A6C8: sll         $t2, $t9, 16
    ctx->r10 = S32(ctx->r25 << 16);
    // 0x8008A6CC: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8008A6D0: slti        $at, $t3, 0x10
    ctx->r1 = SIGNED(ctx->r11) < 0X10 ? 1 : 0;
    // 0x8008A6D4: bne         $at, $zero, L_8008A628
    if (ctx->r1 != 0) {
        // 0x8008A6D8: sh          $t9, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r25;
            goto L_8008A628;
    }
    // 0x8008A6D8: sh          $t9, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r25;
    // 0x8008A6DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008A6E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008A6E4: jr          $ra
    // 0x8008A6E8: nop

    return;
    // 0x8008A6E8: nop

;}
RECOMP_FUNC void func_8008A6EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A6EC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008A6F0: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8008A6F4: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8008A6F8: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8008A6FC: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
L_8008A700:
    // 0x8008A700: lh          $t6, 0x6($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X6);
    // 0x8008A704: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008A708: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008A70C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8008A710: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008A714: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008A718: lh          $t8, -0x720E($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X720E);
    // 0x8008A71C: addiu       $at, $zero, 0x7D00
    ctx->r1 = ADD32(0, 0X7D00);
    // 0x8008A720: beq         $t8, $at, L_8008A748
    if (ctx->r24 == ctx->r1) {
        // 0x8008A724: nop
    
            goto L_8008A748;
    }
    // 0x8008A724: nop

    // 0x8008A728: lh          $t9, 0x6($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X6);
    // 0x8008A72C: nop

    // 0x8008A730: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8008A734: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x8008A738: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8008A73C: slti        $at, $t2, 0x10
    ctx->r1 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x8008A740: bne         $at, $zero, L_8008A700
    if (ctx->r1 != 0) {
        // 0x8008A744: sh          $t0, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r8;
            goto L_8008A700;
    }
    // 0x8008A744: sh          $t0, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r8;
L_8008A748:
    // 0x8008A748: lh          $t3, 0x6($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X6);
    // 0x8008A74C: lh          $t5, 0x6($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X6);
    // 0x8008A750: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8008A754: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8008A758: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008A75C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008A760: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8008A764: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8008A768: lh          $t7, 0x6($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X6);
    // 0x8008A76C: sw          $a0, -0x7218($at)
    MEM_W(-0X7218, ctx->r1) = ctx->r4;
    // 0x8008A770: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8008A774: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008A778: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008A77C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8008A780: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008A784: lh          $t9, 0x6($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X6);
    // 0x8008A788: sw          $a1, -0x7214($at)
    MEM_W(-0X7214, ctx->r1) = ctx->r5;
    // 0x8008A78C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8008A790: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008A794: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008A798: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8008A79C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008A7A0: sb          $a2, -0x7210($at)
    MEM_B(-0X7210, ctx->r1) = ctx->r6;
    // 0x8008A7A4: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8008A7A8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008A7AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008A7B0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8008A7B4: sh          $a3, -0x720E($at)
    MEM_H(-0X720E, ctx->r1) = ctx->r7;
    // 0x8008A7B8: jr          $ra
    // 0x8008A7BC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008A7BC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8008A7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A7C0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008A7C4: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
L_8008A7C8:
    // 0x8008A7C8: lh          $t7, 0x6($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X6);
    // 0x8008A7CC: lh          $t9, 0x6($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X6);
    // 0x8008A7D0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008A7D4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8008A7D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008A7DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008A7E0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8008A7E4: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x8008A7E8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8008A7EC: addiu       $t6, $zero, 0x7D00
    ctx->r14 = ADD32(0, 0X7D00);
    // 0x8008A7F0: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8008A7F4: sh          $t6, -0x720E($at)
    MEM_H(-0X720E, ctx->r1) = ctx->r14;
    // 0x8008A7F8: slti        $at, $t2, 0x10
    ctx->r1 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x8008A7FC: bne         $at, $zero, L_8008A7C8
    if (ctx->r1 != 0) {
        // 0x8008A800: sh          $t0, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r8;
            goto L_8008A7C8;
    }
    // 0x8008A800: sh          $t0, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r8;
    // 0x8008A804: jr          $ra
    // 0x8008A808: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008A808: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8008A80C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A80C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8008A810: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8008A814: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8008A818: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8008A81C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8008A820: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8008A824: addiu       $a0, $a0, -0x72B0
    ctx->r4 = ADD32(ctx->r4, -0X72B0);
    // 0x8008A828: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8008A82C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008A830: jal         0x800B3C20
    // 0x8008A834: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8008A834: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    after_0:
    // 0x8008A838: bne         $v0, $zero, L_8008A974
    if (ctx->r2 != 0) {
        // 0x8008A83C: nop
    
            goto L_8008A974;
    }
    // 0x8008A83C: nop

    // 0x8008A840: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8008A844: nop

    // 0x8008A848: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x8008A84C: nop

    // 0x8008A850: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x8008A854: lh          $s0, 0x0($t7)
    ctx->r16 = MEM_H(ctx->r15, 0X0);
    // 0x8008A858: nop

    // 0x8008A85C: beq         $s0, $zero, L_8008A874
    if (ctx->r16 == 0) {
        // 0x8008A860: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8008A874;
    }
    // 0x8008A860: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008A864: beq         $s0, $at, L_8008A938
    if (ctx->r16 == ctx->r1) {
        // 0x8008A868: nop
    
            goto L_8008A938;
    }
    // 0x8008A868: nop

    // 0x8008A86C: b           L_8008A968
    // 0x8008A870: nop

        goto L_8008A968;
    // 0x8008A870: nop

L_8008A874:
    // 0x8008A874: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8008A878: sb          $zero, 0x56($sp)
    MEM_B(0X56, ctx->r29) = 0;
    // 0x8008A87C: lw          $t0, 0x8C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8C);
    // 0x8008A880: nop

    // 0x8008A884: beq         $t0, $zero, L_8008A900
    if (ctx->r8 == 0) {
        // 0x8008A888: nop
    
            goto L_8008A900;
    }
    // 0x8008A888: nop

L_8008A88C:
    // 0x8008A88C: lbu         $t3, 0x56($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X56);
    // 0x8008A890: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8008A894: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8008A898: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8008A89C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008A8A0: lw          $t2, 0x1C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X1C);
    // 0x8008A8A4: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8008A8A8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008A8AC: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8008A8B0: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x8008A8B4: lbu         $t6, 0x27($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X27);
    // 0x8008A8B8: nop

    // 0x8008A8BC: beq         $t6, $zero, L_8008A8DC
    if (ctx->r14 == 0) {
        // 0x8008A8C0: nop
    
            goto L_8008A8DC;
    }
    // 0x8008A8C0: nop

    // 0x8008A8C4: sb          $zero, 0x27($t5)
    MEM_B(0X27, ctx->r13) = 0;
    // 0x8008A8C8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8008A8CC: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x8008A8D0: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    // 0x8008A8D4: jal         0x800B8B60
    // 0x8008A8D8: nop

    alSynStopVoice(rdram, ctx);
        goto after_1;
    // 0x8008A8D8: nop

    after_1:
L_8008A8DC:
    // 0x8008A8DC: lbu         $t7, 0x56($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X56);
    // 0x8008A8E0: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8008A8E4: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x8008A8E8: sb          $t9, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r25;
    // 0x8008A8EC: lw          $t3, 0x8C($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X8C);
    // 0x8008A8F0: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x8008A8F4: sltu        $at, $t0, $t3
    ctx->r1 = ctx->r8 < ctx->r11 ? 1 : 0;
    // 0x8008A8F8: bne         $at, $zero, L_8008A88C
    if (ctx->r1 != 0) {
        // 0x8008A8FC: nop
    
            goto L_8008A88C;
    }
    // 0x8008A8FC: nop

L_8008A900:
    // 0x8008A900: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8008A904: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8008A908: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8008A90C: addiu       $a0, $a0, -0x72E8
    ctx->r4 = ADD32(ctx->r4, -0X72E8);
    // 0x8008A910: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008A914: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008A918: jal         0x800B34D0
    // 0x8008A91C: sw          $t2, 0x88($t4)
    MEM_W(0X88, ctx->r12) = ctx->r10;
    osSendMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x8008A91C: sw          $t2, 0x88($t4)
    MEM_W(0X88, ctx->r12) = ctx->r10;
    after_2:
    // 0x8008A920: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8008A924: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008A928: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    // 0x8008A92C: lw          $v0, 0x3940($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3940);
    // 0x8008A930: b           L_8008BCC8
    // 0x8008A934: nop

        goto L_8008BCC8;
    // 0x8008A934: nop

L_8008A938:
    // 0x8008A938: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8008A93C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8008A940: sw          $t5, 0x88($t8)
    MEM_W(0X88, ctx->r24) = ctx->r13;
    // 0x8008A944: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8008A948: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8008A94C: addiu       $a0, $a0, -0x72E8
    ctx->r4 = ADD32(ctx->r4, -0X72E8);
    // 0x8008A950: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008A954: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008A958: jal         0x800B34D0
    // 0x8008A95C: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x8008A95C: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    after_3:
    // 0x8008A960: b           L_8008A974
    // 0x8008A964: nop

        goto L_8008A974;
    // 0x8008A964: nop

L_8008A968:
    // 0x8008A968: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8008A96C: nop

    // 0x8008A970: sh          $zero, 0x0($t9)
    MEM_H(0X0, ctx->r25) = 0;
L_8008A974:
    // 0x8008A974: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x8008A978: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008A97C: lw          $t0, 0x88($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X88);
    // 0x8008A980: nop

    // 0x8008A984: bne         $t0, $at, L_8008A99C
    if (ctx->r8 != ctx->r1) {
        // 0x8008A988: nop
    
            goto L_8008A99C;
    }
    // 0x8008A988: nop

    // 0x8008A98C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008A990: lw          $v0, 0x3940($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3940);
    // 0x8008A994: b           L_8008BCC8
    // 0x8008A998: nop

        goto L_8008BCC8;
    // 0x8008A998: nop

L_8008A99C:
    // 0x8008A99C: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x8008A9A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008A9A4: lw          $t2, 0x88($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X88);
    // 0x8008A9A8: nop

    // 0x8008A9AC: bne         $t2, $at, L_8008BCBC
    if (ctx->r10 != ctx->r1) {
        // 0x8008A9B0: nop
    
            goto L_8008BCBC;
    }
    // 0x8008A9B0: nop

    // 0x8008A9B4: jal         0x8008A61C
    // 0x8008A9B8: nop

    func_8008A61C(rdram, ctx);
        goto after_4;
    // 0x8008A9B8: nop

    after_4:
    // 0x8008A9BC: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8008A9C0: sb          $zero, 0x56($sp)
    MEM_B(0X56, ctx->r29) = 0;
    // 0x8008A9C4: lw          $t6, 0x8C($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X8C);
    // 0x8008A9C8: nop

    // 0x8008A9CC: beq         $t6, $zero, L_8008AF70
    if (ctx->r14 == 0) {
        // 0x8008A9D0: nop
    
            goto L_8008AF70;
    }
    // 0x8008A9D0: nop

L_8008A9D4:
    // 0x8008A9D4: lbu         $t7, 0x56($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X56);
    // 0x8008A9D8: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x8008A9DC: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8008A9E0: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x8008A9E4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008A9E8: sra         $t0, $t7, 1
    ctx->r8 = S32(SIGNED(ctx->r15) >> 1);
    // 0x8008A9EC: lw          $t8, 0x1C($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X1C);
    // 0x8008A9F0: sll         $t3, $t0, 3
    ctx->r11 = S32(ctx->r8 << 3);
    // 0x8008A9F4: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x8008A9F8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008A9FC: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x8008AA00: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008AA04: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x8008AA08: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x8008AA0C: addu        $t2, $t5, $t3
    ctx->r10 = ADD32(ctx->r13, ctx->r11);
    // 0x8008AA10: lbu         $t4, 0x124($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X124);
    // 0x8008AA14: nop

    // 0x8008AA18: beq         $t4, $zero, L_8008ABF0
    if (ctx->r12 == 0) {
        // 0x8008AA1C: nop
    
            goto L_8008ABF0;
    }
    // 0x8008AA1C: nop

    // 0x8008AA20: lbu         $t8, 0x56($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X56);
    // 0x8008AA24: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8008AA28: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8008AA2C: sll         $t1, $t9, 3
    ctx->r9 = S32(ctx->r25 << 3);
    // 0x8008AA30: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008AA34: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8008AA38: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8008AA3C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008AA40: sb          $zero, 0x3B98($at)
    MEM_B(0X3B98, ctx->r1) = 0;
    // 0x8008AA44: addu        $t7, $t6, $t1
    ctx->r15 = ADD32(ctx->r14, ctx->r9);
    // 0x8008AA48: sb          $zero, 0x124($t7)
    MEM_B(0X124, ctx->r15) = 0;
    // 0x8008AA4C: lbu         $t3, 0x56($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X56);
    // 0x8008AA50: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x8008AA54: sra         $t2, $t3, 1
    ctx->r10 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8008AA58: sll         $t4, $t2, 3
    ctx->r12 = S32(ctx->r10 << 3);
    // 0x8008AA5C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8008AA60: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008AA64: addu        $t0, $t5, $t4
    ctx->r8 = ADD32(ctx->r13, ctx->r12);
    // 0x8008AA68: lw          $t8, 0x11C($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X11C);
    // 0x8008AA6C: lw          $t9, 0x128($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X128);
    // 0x8008AA70: nop

    // 0x8008AA74: subu        $t6, $t8, $t9
    ctx->r14 = SUB32(ctx->r24, ctx->r25);
    // 0x8008AA78: sw          $t6, 0x118($t0)
    MEM_W(0X118, ctx->r8) = ctx->r14;
    // 0x8008AA7C: lbu         $t3, 0x56($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X56);
    // 0x8008AA80: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x8008AA84: sra         $t2, $t3, 1
    ctx->r10 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8008AA88: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x8008AA8C: subu        $t5, $t5, $t2
    ctx->r13 = SUB32(ctx->r13, ctx->r10);
    // 0x8008AA90: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008AA94: lw          $t7, 0x1C($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X1C);
    // 0x8008AA98: subu        $t5, $t5, $t2
    ctx->r13 = SUB32(ctx->r13, ctx->r10);
    // 0x8008AA9C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008AAA0: addu        $t4, $t7, $t5
    ctx->r12 = ADD32(ctx->r15, ctx->r13);
    // 0x8008AAA4: sw          $t4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r12;
    // 0x8008AAA8: lbu         $t8, 0x27($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X27);
    // 0x8008AAAC: nop

    // 0x8008AAB0: beq         $t8, $zero, L_8008ABF0
    if (ctx->r24 == 0) {
        // 0x8008AAB4: nop
    
            goto L_8008ABF0;
    }
    // 0x8008AAB4: nop

    // 0x8008AAB8: lw          $t9, 0x8($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X8);
    // 0x8008AABC: nop

    // 0x8008AAC0: beq         $t9, $zero, L_8008ABD0
    if (ctx->r25 == 0) {
        // 0x8008AAC4: nop
    
            goto L_8008ABD0;
    }
    // 0x8008AAC4: nop

    // 0x8008AAC8: lw          $t6, 0xC($t9)
    ctx->r14 = MEM_W(ctx->r25, 0XC);
    // 0x8008AACC: addiu       $t0, $zero, 0x240
    ctx->r8 = ADD32(0, 0X240);
    // 0x8008AAD0: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x8008AAD4: lw          $t1, 0x8($t4)
    ctx->r9 = MEM_W(ctx->r12, 0X8);
    // 0x8008AAD8: jal         0x8008ED04
    // 0x8008AADC: sw          $t0, 0xD8($t1)
    MEM_W(0XD8, ctx->r9) = ctx->r8;
    __allocParam(rdram, ctx);
        goto after_5;
    // 0x8008AADC: sw          $t0, 0xD8($t1)
    MEM_W(0XD8, ctx->r9) = ctx->r8;
    after_5:
    // 0x8008AAE0: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8008AAE4: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8008AAE8: nop

    // 0x8008AAEC: beq         $t3, $zero, L_8008AB60
    if (ctx->r11 == 0) {
        // 0x8008AAF0: nop
    
            goto L_8008AB60;
    }
    // 0x8008AAF0: nop

    // 0x8008AAF4: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x8008AAF8: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x8008AAFC: lw          $t7, 0x14($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X14);
    // 0x8008AB00: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8008AB04: lw          $t5, 0x1C($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X1C);
    // 0x8008AB08: nop

    // 0x8008AB0C: sw          $t5, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r13;
    // 0x8008AB10: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8008AB14: nop

    // 0x8008AB18: sh          $t8, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r24;
    // 0x8008AB1C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8008AB20: nop

    // 0x8008AB24: sw          $zero, 0xC($t6)
    MEM_W(0XC, ctx->r14) = 0;
    // 0x8008AB28: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x8008AB2C: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8008AB30: lw          $t0, 0x8($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X8);
    // 0x8008AB34: nop

    // 0x8008AB38: lw          $t1, 0xD8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XD8);
    // 0x8008AB3C: nop

    // 0x8008AB40: addiu       $t2, $t1, -0x40
    ctx->r10 = ADD32(ctx->r9, -0X40);
    // 0x8008AB44: sw          $t2, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r10;
    // 0x8008AB48: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x8008AB4C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8008AB50: lw          $t9, 0x8($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X8);
    // 0x8008AB54: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8008AB58: jalr        $t9
    // 0x8008AB5C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x8008AB5C: nop

    after_6:
L_8008AB60:
    // 0x8008AB60: jal         0x8008ED04
    // 0x8008AB64: nop

    __allocParam(rdram, ctx);
        goto after_7;
    // 0x8008AB64: nop

    after_7:
    // 0x8008AB68: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8008AB6C: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8008AB70: nop

    // 0x8008AB74: beq         $t3, $zero, L_8008ABD0
    if (ctx->r11 == 0) {
        // 0x8008AB78: nop
    
            goto L_8008ABD0;
    }
    // 0x8008AB78: nop

    // 0x8008AB7C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8008AB80: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8008AB84: lw          $t6, 0x14($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X14);
    // 0x8008AB88: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x8008AB8C: lw          $t4, 0x1C($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X1C);
    // 0x8008AB90: lw          $t2, 0xD8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XD8);
    // 0x8008AB94: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x8008AB98: addu        $t7, $t4, $t2
    ctx->r15 = ADD32(ctx->r12, ctx->r10);
    // 0x8008AB9C: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x8008ABA0: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8008ABA4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8008ABA8: sh          $t5, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r13;
    // 0x8008ABAC: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8008ABB0: nop

    // 0x8008ABB4: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x8008ABB8: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x8008ABBC: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8008ABC0: lw          $t9, 0x8($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X8);
    // 0x8008ABC4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8008ABC8: jalr        $t9
    // 0x8008ABCC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x8008ABCC: nop

    after_8:
L_8008ABD0:
    // 0x8008ABD0: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8008ABD4: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x8008ABD8: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x8008ABDC: jal         0x800B8B60
    // 0x8008ABE0: nop

    alSynStopVoice(rdram, ctx);
        goto after_9;
    // 0x8008ABE0: nop

    after_9:
    // 0x8008ABE4: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8008ABE8: nop

    // 0x8008ABEC: sb          $zero, 0x27($t1)
    MEM_B(0X27, ctx->r9) = 0;
L_8008ABF0:
    // 0x8008ABF0: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8008ABF4: lbu         $t2, 0x56($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X56);
    // 0x8008ABF8: nop

    // 0x8008ABFC: addu        $t7, $t4, $t2
    ctx->r15 = ADD32(ctx->r12, ctx->r10);
    // 0x8008AC00: lbu         $t3, 0x354($t7)
    ctx->r11 = MEM_BU(ctx->r15, 0X354);
    // 0x8008AC04: nop

    // 0x8008AC08: beq         $t3, $zero, L_8008AF4C
    if (ctx->r11 == 0) {
        // 0x8008AC0C: nop
    
            goto L_8008AF4C;
    }
    // 0x8008AC0C: nop

    // 0x8008AC10: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8008AC14: lbu         $t6, 0x56($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X56);
    // 0x8008AC18: sra         $t5, $t2, 1
    ctx->r13 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8008AC1C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008AC20: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8008AC24: sb          $zero, 0x3B98($at)
    MEM_B(0X3B98, ctx->r1) = 0;
    // 0x8008AC28: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x8008AC2C: lbu         $t0, 0x354($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X354);
    // 0x8008AC30: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8008AC34: beq         $t0, $at, L_8008AC50
    if (ctx->r8 == ctx->r1) {
        // 0x8008AC38: nop
    
            goto L_8008AC50;
    }
    // 0x8008AC38: nop

    // 0x8008AC3C: sra         $t4, $t6, 1
    ctx->r12 = S32(SIGNED(ctx->r14) >> 1);
    // 0x8008AC40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AC44: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8008AC48: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8008AC4C: sb          $t1, -0x7220($at)
    MEM_B(-0X7220, ctx->r1) = ctx->r9;
L_8008AC50:
    // 0x8008AC50: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8008AC54: lbu         $t3, 0x56($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X56);
    // 0x8008AC58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008AC5C: addu        $t2, $t7, $t3
    ctx->r10 = ADD32(ctx->r15, ctx->r11);
    // 0x8008AC60: sb          $zero, 0x354($t2)
    MEM_B(0X354, ctx->r10) = 0;
    // 0x8008AC64: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x8008AC68: nop

    // 0x8008AC6C: lbu         $t8, 0x27($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0X27);
    // 0x8008AC70: nop

    // 0x8008AC74: bne         $t8, $at, L_8008ADB4
    if (ctx->r24 != ctx->r1) {
        // 0x8008AC78: nop
    
            goto L_8008ADB4;
    }
    // 0x8008AC78: nop

    // 0x8008AC7C: lw          $t9, 0x8($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X8);
    // 0x8008AC80: nop

    // 0x8008AC84: beq         $t9, $zero, L_8008AD94
    if (ctx->r25 == 0) {
        // 0x8008AC88: nop
    
            goto L_8008AD94;
    }
    // 0x8008AC88: nop

    // 0x8008AC8C: lw          $t0, 0xC($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC);
    // 0x8008AC90: addiu       $t6, $zero, 0x240
    ctx->r14 = ADD32(0, 0X240);
    // 0x8008AC94: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x8008AC98: lw          $t1, 0x8($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X8);
    // 0x8008AC9C: jal         0x8008ED04
    // 0x8008ACA0: sw          $t6, 0xD8($t1)
    MEM_W(0XD8, ctx->r9) = ctx->r14;
    __allocParam(rdram, ctx);
        goto after_10;
    // 0x8008ACA0: sw          $t6, 0xD8($t1)
    MEM_W(0XD8, ctx->r9) = ctx->r14;
    after_10:
    // 0x8008ACA4: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8008ACA8: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x8008ACAC: nop

    // 0x8008ACB0: beq         $t4, $zero, L_8008AD24
    if (ctx->r12 == 0) {
        // 0x8008ACB4: nop
    
            goto L_8008AD24;
    }
    // 0x8008ACB4: nop

    // 0x8008ACB8: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8008ACBC: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x8008ACC0: lw          $t3, 0x14($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X14);
    // 0x8008ACC4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8008ACC8: lw          $t2, 0x1C($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X1C);
    // 0x8008ACCC: nop

    // 0x8008ACD0: sw          $t2, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r10;
    // 0x8008ACD4: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8008ACD8: nop

    // 0x8008ACDC: sh          $t8, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r24;
    // 0x8008ACE0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8008ACE4: nop

    // 0x8008ACE8: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
    // 0x8008ACEC: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x8008ACF0: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8008ACF4: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x8008ACF8: nop

    // 0x8008ACFC: lw          $t1, 0xD8($t6)
    ctx->r9 = MEM_W(ctx->r14, 0XD8);
    // 0x8008AD00: nop

    // 0x8008AD04: addiu       $t7, $t1, -0x40
    ctx->r15 = ADD32(ctx->r9, -0X40);
    // 0x8008AD08: sw          $t7, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r15;
    // 0x8008AD0C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x8008AD10: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8008AD14: lw          $t9, 0x8($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X8);
    // 0x8008AD18: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8008AD1C: jalr        $t9
    // 0x8008AD20: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x8008AD20: nop

    after_11:
L_8008AD24:
    // 0x8008AD24: jal         0x8008ED04
    // 0x8008AD28: nop

    __allocParam(rdram, ctx);
        goto after_12;
    // 0x8008AD28: nop

    after_12:
    // 0x8008AD2C: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8008AD30: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x8008AD34: nop

    // 0x8008AD38: beq         $t4, $zero, L_8008AD94
    if (ctx->r12 == 0) {
        // 0x8008AD3C: nop
    
            goto L_8008AD94;
    }
    // 0x8008AD3C: nop

    // 0x8008AD40: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8008AD44: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x8008AD48: lw          $t0, 0x14($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X14);
    // 0x8008AD4C: lw          $t1, 0x8($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X8);
    // 0x8008AD50: lw          $t5, 0x1C($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X1C);
    // 0x8008AD54: lw          $t7, 0xD8($t1)
    ctx->r15 = MEM_W(ctx->r9, 0XD8);
    // 0x8008AD58: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x8008AD5C: addu        $t3, $t5, $t7
    ctx->r11 = ADD32(ctx->r13, ctx->r15);
    // 0x8008AD60: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8008AD64: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8008AD68: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8008AD6C: sh          $t2, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r10;
    // 0x8008AD70: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8008AD74: nop

    // 0x8008AD78: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x8008AD7C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8008AD80: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8008AD84: lw          $t9, 0x8($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X8);
    // 0x8008AD88: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8008AD8C: jalr        $t9
    // 0x8008AD90: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x8008AD90: nop

    after_13:
L_8008AD94:
    // 0x8008AD94: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8008AD98: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x8008AD9C: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    // 0x8008ADA0: jal         0x800B8B60
    // 0x8008ADA4: nop

    alSynStopVoice(rdram, ctx);
        goto after_14;
    // 0x8008ADA4: nop

    after_14:
    // 0x8008ADA8: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8008ADAC: b           L_8008AF4C
    // 0x8008ADB0: sb          $zero, 0x27($t1)
    MEM_B(0X27, ctx->r9) = 0;
        goto L_8008AF4C;
    // 0x8008ADB0: sb          $zero, 0x27($t1)
    MEM_B(0X27, ctx->r9) = 0;
L_8008ADB4:
    // 0x8008ADB4: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x8008ADB8: nop

    // 0x8008ADBC: lw          $t7, 0x14($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X14);
    // 0x8008ADC0: nop

    // 0x8008ADC4: beq         $t7, $zero, L_8008AE0C
    if (ctx->r15 == 0) {
        // 0x8008ADC8: nop
    
            goto L_8008AE0C;
    }
    // 0x8008ADC8: nop

    // 0x8008ADCC: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x8008ADD0: nop

    // 0x8008ADD4: lw          $t4, 0x1C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1C);
    // 0x8008ADD8: nop

    // 0x8008ADDC: beq         $t4, $zero, L_8008AE0C
    if (ctx->r12 == 0) {
        // 0x8008ADE0: nop
    
            goto L_8008AE0C;
    }
    // 0x8008ADE0: nop

    // 0x8008ADE4: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x8008ADE8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8008ADEC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8008ADF0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x8008ADF4: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8008ADF8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8008ADFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8008AE00: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8008AE04: jal         0x800B8DC0
    // 0x8008AE08: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    alSynStartVoiceParams(rdram, ctx);
        goto after_15;
    // 0x8008AE08: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_15:
L_8008AE0C:
    // 0x8008AE0C: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x8008AE10: nop

    // 0x8008AE14: lw          $t0, 0x8($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X8);
    // 0x8008AE18: nop

    // 0x8008AE1C: beq         $t0, $zero, L_8008AF2C
    if (ctx->r8 == 0) {
        // 0x8008AE20: nop
    
            goto L_8008AF2C;
    }
    // 0x8008AE20: nop

    // 0x8008AE24: lw          $t9, 0xC($t0)
    ctx->r25 = MEM_W(ctx->r8, 0XC);
    // 0x8008AE28: addiu       $t6, $zero, 0x240
    ctx->r14 = ADD32(0, 0X240);
    // 0x8008AE2C: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x8008AE30: lw          $t1, 0x8($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X8);
    // 0x8008AE34: jal         0x8008ED04
    // 0x8008AE38: sw          $t6, 0xD8($t1)
    MEM_W(0XD8, ctx->r9) = ctx->r14;
    __allocParam(rdram, ctx);
        goto after_16;
    // 0x8008AE38: sw          $t6, 0xD8($t1)
    MEM_W(0XD8, ctx->r9) = ctx->r14;
    after_16:
    // 0x8008AE3C: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8008AE40: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x8008AE44: nop

    // 0x8008AE48: beq         $t5, $zero, L_8008AEBC
    if (ctx->r13 == 0) {
        // 0x8008AE4C: nop
    
            goto L_8008AEBC;
    }
    // 0x8008AE4C: nop

    // 0x8008AE50: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8008AE54: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x8008AE58: lw          $t3, 0x14($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X14);
    // 0x8008AE5C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8008AE60: lw          $t4, 0x1C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1C);
    // 0x8008AE64: nop

    // 0x8008AE68: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8008AE6C: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8008AE70: nop

    // 0x8008AE74: sh          $t2, 0x8($t0)
    MEM_H(0X8, ctx->r8) = ctx->r10;
    // 0x8008AE78: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8008AE7C: nop

    // 0x8008AE80: sw          $zero, 0xC($t9)
    MEM_W(0XC, ctx->r25) = 0;
    // 0x8008AE84: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x8008AE88: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8008AE8C: lw          $t6, 0x8($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X8);
    // 0x8008AE90: nop

    // 0x8008AE94: lw          $t1, 0xD8($t6)
    ctx->r9 = MEM_W(ctx->r14, 0XD8);
    // 0x8008AE98: nop

    // 0x8008AE9C: addiu       $t7, $t1, -0x40
    ctx->r15 = ADD32(ctx->r9, -0X40);
    // 0x8008AEA0: sw          $t7, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r15;
    // 0x8008AEA4: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x8008AEA8: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8008AEAC: lw          $t9, 0x8($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X8);
    // 0x8008AEB0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x8008AEB4: jalr        $t9
    // 0x8008AEB8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x8008AEB8: nop

    after_17:
L_8008AEBC:
    // 0x8008AEBC: jal         0x8008ED04
    // 0x8008AEC0: nop

    __allocParam(rdram, ctx);
        goto after_18;
    // 0x8008AEC0: nop

    after_18:
    // 0x8008AEC4: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8008AEC8: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x8008AECC: nop

    // 0x8008AED0: beq         $t5, $zero, L_8008AF2C
    if (ctx->r13 == 0) {
        // 0x8008AED4: nop
    
            goto L_8008AF2C;
    }
    // 0x8008AED4: nop

    // 0x8008AED8: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x8008AEDC: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x8008AEE0: lw          $t0, 0x14($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X14);
    // 0x8008AEE4: lw          $t1, 0x8($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X8);
    // 0x8008AEE8: lw          $t8, 0x1C($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X1C);
    // 0x8008AEEC: lw          $t7, 0xD8($t1)
    ctx->r15 = MEM_W(ctx->r9, 0XD8);
    // 0x8008AEF0: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x8008AEF4: addu        $t3, $t8, $t7
    ctx->r11 = ADD32(ctx->r24, ctx->r15);
    // 0x8008AEF8: sw          $t3, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r11;
    // 0x8008AEFC: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8008AF00: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8008AF04: sh          $t4, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r12;
    // 0x8008AF08: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8008AF0C: nop

    // 0x8008AF10: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x8008AF14: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8008AF18: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8008AF1C: lw          $t9, 0x8($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X8);
    // 0x8008AF20: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8008AF24: jalr        $t9
    // 0x8008AF28: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x8008AF28: nop

    after_19:
L_8008AF2C:
    // 0x8008AF2C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8008AF30: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x8008AF34: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    // 0x8008AF38: jal         0x800B8B60
    // 0x8008AF3C: nop

    alSynStopVoice(rdram, ctx);
        goto after_20;
    // 0x8008AF3C: nop

    after_20:
    // 0x8008AF40: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8008AF44: nop

    // 0x8008AF48: sb          $zero, 0x27($t1)
    MEM_B(0X27, ctx->r9) = 0;
L_8008AF4C:
    // 0x8008AF4C: lbu         $t8, 0x56($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X56);
    // 0x8008AF50: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x8008AF54: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x8008AF58: sb          $t7, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r15;
    // 0x8008AF5C: lw          $t4, 0x8C($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X8C);
    // 0x8008AF60: andi        $t3, $t7, 0xFF
    ctx->r11 = ctx->r15 & 0XFF;
    // 0x8008AF64: sltu        $at, $t3, $t4
    ctx->r1 = ctx->r11 < ctx->r12 ? 1 : 0;
    // 0x8008AF68: bne         $at, $zero, L_8008A9D4
    if (ctx->r1 != 0) {
        // 0x8008AF6C: nop
    
            goto L_8008A9D4;
    }
    // 0x8008AF6C: nop

L_8008AF70:
    // 0x8008AF70: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x8008AF74: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008AF78: sb          $zero, 0x3BA0($at)
    MEM_B(0X3BA0, ctx->r1) = 0;
    // 0x8008AF7C: lw          $t0, 0x8C($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X8C);
    // 0x8008AF80: nop

    // 0x8008AF84: srl         $t9, $t0, 1
    ctx->r25 = S32(U32(ctx->r8) >> 1);
    // 0x8008AF88: beq         $t9, $zero, L_8008BCBC
    if (ctx->r25 == 0) {
        // 0x8008AF8C: nop
    
            goto L_8008BCBC;
    }
    // 0x8008AF8C: nop

L_8008AF90:
    // 0x8008AF90: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8008AF94: lbu         $t1, 0x3BA0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X3BA0);
    // 0x8008AF98: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8008AF9C: sll         $t8, $t1, 3
    ctx->r24 = S32(ctx->r9 << 3);
    // 0x8008AFA0: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x8008AFA4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008AFA8: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x8008AFAC: lw          $t5, 0x118($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X118);
    // 0x8008AFB0: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8008AFB4: addu        $t4, $t6, $t3
    ctx->r12 = ADD32(ctx->r14, ctx->r11);
    // 0x8008AFB8: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x8008AFBC: lw          $t2, 0x20($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X20);
    // 0x8008AFC0: nop

    // 0x8008AFC4: beq         $t2, $zero, L_8008BC8C
    if (ctx->r10 == 0) {
        // 0x8008AFC8: nop
    
            goto L_8008BC8C;
    }
    // 0x8008AFC8: nop

    // 0x8008AFCC: beq         $t5, $zero, L_8008BC8C
    if (ctx->r13 == 0) {
        // 0x8008AFD0: nop
    
            goto L_8008BC8C;
    }
    // 0x8008AFD0: nop

    // 0x8008AFD4: lw          $t0, 0x110($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X110);
    // 0x8008AFD8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008AFDC: lbu         $t9, 0x0($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X0);
    // 0x8008AFE0: nop

    // 0x8008AFE4: bne         $t9, $at, L_8008AFFC
    if (ctx->r25 != ctx->r1) {
        // 0x8008AFE8: nop
    
            goto L_8008AFFC;
    }
    // 0x8008AFE8: nop

    // 0x8008AFEC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008AFF0: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    // 0x8008AFF4: jal         0x800B3BFC
    // 0x8008AFF8: addiu       $a0, $a0, -0x670
    ctx->r4 = ADD32(ctx->r4, -0X670);
    osSyncPrintf(rdram, ctx);
        goto after_21;
    // 0x8008AFF8: addiu       $a0, $a0, -0x670
    ctx->r4 = ADD32(ctx->r4, -0X670);
    after_21:
L_8008AFFC:
    // 0x8008AFFC: sb          $zero, 0x56($sp)
    MEM_B(0X56, ctx->r29) = 0;
L_8008B000:
    // 0x8008B000: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8008B004: lbu         $t1, 0x3BA0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X3BA0);
    // 0x8008B008: lbu         $t8, 0x56($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X56);
    // 0x8008B00C: sll         $t6, $t1, 1
    ctx->r14 = S32(ctx->r9 << 1);
    // 0x8008B010: addu        $t3, $t8, $t6
    ctx->r11 = ADD32(ctx->r24, ctx->r14);
    // 0x8008B014: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8008B018: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x8008B01C: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8008B020: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008B024: lw          $t5, 0x1C($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X1C);
    // 0x8008B028: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8008B02C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008B030: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8008B034: addiu       $t9, $t9, 0x3B98
    ctx->r25 = ADD32(ctx->r25, 0X3B98);
    // 0x8008B038: addu        $t7, $t5, $t4
    ctx->r15 = ADD32(ctx->r13, ctx->r12);
    // 0x8008B03C: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x8008B040: addu        $t0, $t1, $t9
    ctx->r8 = ADD32(ctx->r9, ctx->r25);
    // 0x8008B044: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x8008B048: nop

    // 0x8008B04C: beq         $t8, $zero, L_8008B060
    if (ctx->r24 == 0) {
        // 0x8008B050: nop
    
            goto L_8008B060;
    }
    // 0x8008B050: nop

    // 0x8008B054: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x8008B058: b           L_8008BC70
    // 0x8008B05C: sb          $t6, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r14;
        goto L_8008BC70;
    // 0x8008B05C: sb          $t6, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r14;
L_8008B060:
    // 0x8008B060: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8008B064: lbu         $t2, 0x3BA0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X3BA0);
    // 0x8008B068: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x8008B06C: sll         $t5, $t2, 3
    ctx->r13 = S32(ctx->r10 << 3);
    // 0x8008B070: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x8008B074: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008B078: addu        $t4, $t3, $t5
    ctx->r12 = ADD32(ctx->r11, ctx->r13);
    // 0x8008B07C: lw          $t7, 0x118($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X118);
    // 0x8008B080: lw          $t1, 0x11C($t4)
    ctx->r9 = MEM_W(ctx->r12, 0X11C);
    // 0x8008B084: nop

    // 0x8008B088: sltu        $at, $t7, $t1
    ctx->r1 = ctx->r15 < ctx->r9 ? 1 : 0;
    // 0x8008B08C: bne         $at, $zero, L_8008B110
    if (ctx->r1 != 0) {
        // 0x8008B090: lui         $at, 0x8013
        ctx->r1 = S32(0X8013 << 16);
            goto L_8008B110;
    }
    // 0x8008B090: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B094: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B098: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8008B09C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8008B0A0: sb          $t9, -0x7220($at)
    MEM_B(-0X7220, ctx->r1) = ctx->r25;
    // 0x8008B0A4: sb          $zero, 0x27($t8)
    MEM_B(0X27, ctx->r24) = 0;
    // 0x8008B0A8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8008B0AC: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8008B0B0: lbu         $t6, 0x3BA0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3BA0);
    // 0x8008B0B4: lbu         $t3, 0x3BA0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X3BA0);
    // 0x8008B0B8: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8008B0BC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008B0C0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8008B0C4: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8008B0C8: sb          $zero, 0x3B98($at)
    MEM_B(0X3B98, ctx->r1) = 0;
    // 0x8008B0CC: addu        $t4, $t0, $t5
    ctx->r12 = ADD32(ctx->r8, ctx->r13);
    // 0x8008B0D0: sw          $zero, 0x20($t4)
    MEM_W(0X20, ctx->r12) = 0;
    // 0x8008B0D4: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8008B0D8: lbu         $t9, 0x3BA0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X3BA0);
    // 0x8008B0DC: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x8008B0E0: sll         $t2, $t9, 1
    ctx->r10 = S32(ctx->r25 << 1);
    // 0x8008B0E4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8008B0E8: addu        $t8, $t1, $t2
    ctx->r24 = ADD32(ctx->r9, ctx->r10);
    // 0x8008B0EC: sb          $t7, 0x354($t8)
    MEM_B(0X354, ctx->r24) = ctx->r15;
    // 0x8008B0F0: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8008B0F4: lbu         $t0, 0x3BA0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3BA0);
    // 0x8008B0F8: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x8008B0FC: sll         $t5, $t0, 1
    ctx->r13 = S32(ctx->r8 << 1);
    // 0x8008B100: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008B104: addu        $t4, $t3, $t5
    ctx->r12 = ADD32(ctx->r11, ctx->r13);
    // 0x8008B108: b           L_8008BC70
    // 0x8008B10C: sb          $t6, 0x355($t4)
    MEM_B(0X355, ctx->r12) = ctx->r14;
        goto L_8008BC70;
    // 0x8008B10C: sb          $t6, 0x355($t4)
    MEM_B(0X355, ctx->r12) = ctx->r14;
L_8008B110:
    // 0x8008B110: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8008B114: lbu         $t1, 0x3BA0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X3BA0);
    // 0x8008B118: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8008B11C: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8008B120: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008B124: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008B128: addu        $t7, $t9, $t2
    ctx->r15 = ADD32(ctx->r25, ctx->r10);
    // 0x8008B12C: lw          $t8, 0x118($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X118);
    // 0x8008B130: nop

    // 0x8008B134: lbu         $t0, 0x0($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X0);
    // 0x8008B138: nop

    // 0x8008B13C: sb          $t0, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r8;
    // 0x8008B140: lw          $t3, 0x118($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X118);
    // 0x8008B144: nop

    // 0x8008B148: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x8008B14C: sw          $t5, 0x118($t7)
    MEM_W(0X118, ctx->r15) = ctx->r13;
    // 0x8008B150: lbu         $t6, 0x55($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X55);
    // 0x8008B154: nop

    // 0x8008B158: andi        $t4, $t6, 0x80
    ctx->r12 = ctx->r14 & 0X80;
    // 0x8008B15C: beq         $t4, $zero, L_8008B180
    if (ctx->r12 == 0) {
        // 0x8008B160: nop
    
            goto L_8008B180;
    }
    // 0x8008B160: nop

    // 0x8008B164: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8008B168: lbu         $t9, 0x3BA0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X3BA0);
    // 0x8008B16C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008B170: andi        $t1, $t6, 0x7F
    ctx->r9 = ctx->r14 & 0X7F;
    // 0x8008B174: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8008B178: b           L_8008BC70
    // 0x8008B17C: sb          $t1, 0x3B98($at)
    MEM_B(0X3B98, ctx->r1) = ctx->r9;
        goto L_8008BC70;
    // 0x8008B17C: sb          $t1, 0x3B98($at)
    MEM_B(0X3B98, ctx->r1) = ctx->r9;
L_8008B180:
    // 0x8008B180: lbu         $t2, 0x55($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X55);
    // 0x8008B184: nop

    // 0x8008B188: andi        $t8, $t2, 0x40
    ctx->r24 = ctx->r10 & 0X40;
    // 0x8008B18C: beq         $t8, $zero, L_8008B23C
    if (ctx->r24 == 0) {
        // 0x8008B190: nop
    
            goto L_8008B23C;
    }
    // 0x8008B190: nop

    // 0x8008B194: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8008B198: lbu         $t3, 0x3BA0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X3BA0);
    // 0x8008B19C: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8008B1A0: sll         $t5, $t3, 3
    ctx->r13 = S32(ctx->r11 << 3);
    // 0x8008B1A4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8008B1A8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008B1AC: addu        $t7, $t0, $t5
    ctx->r15 = ADD32(ctx->r8, ctx->r13);
    // 0x8008B1B0: lw          $a0, 0x118($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X118);
    // 0x8008B1B4: jal         0x8008C0E0
    // 0x8008B1B8: nop

    func_8008C0E0(rdram, ctx);
        goto after_22;
    // 0x8008B1B8: nop

    after_22:
    // 0x8008B1BC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8008B1C0: lbu         $t6, 0x3BA0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3BA0);
    // 0x8008B1C4: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8008B1C8: sll         $t1, $t6, 3
    ctx->r9 = S32(ctx->r14 << 3);
    // 0x8008B1CC: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x8008B1D0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008B1D4: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x8008B1D8: addu        $t9, $t4, $t1
    ctx->r25 = ADD32(ctx->r12, ctx->r9);
    // 0x8008B1DC: lw          $t2, 0x118($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X118);
    // 0x8008B1E0: nop

    // 0x8008B1E4: addiu       $t8, $t2, 0x2
    ctx->r24 = ADD32(ctx->r10, 0X2);
    // 0x8008B1E8: sw          $t8, 0x118($t9)
    MEM_W(0X118, ctx->r25) = ctx->r24;
    // 0x8008B1EC: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x8008B1F0: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8008B1F4: andi        $t0, $t3, 0xFFFF
    ctx->r8 = ctx->r11 & 0XFFFF;
    // 0x8008B1F8: srl         $t5, $t0, 14
    ctx->r13 = S32(U32(ctx->r8) >> 14);
    // 0x8008B1FC: sb          $t5, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r13;
    // 0x8008B200: lbu         $t6, 0x57($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X57);
    // 0x8008B204: andi        $t7, $t0, 0x3FFF
    ctx->r15 = ctx->r8 & 0X3FFF;
    // 0x8008B208: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x8008B20C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008B210: lw          $t2, 0x3B40($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B40);
    // 0x8008B214: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    // 0x8008B218: sllv        $t4, $t7, $t6
    ctx->r12 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x8008B21C: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
    // 0x8008B220: addu        $t8, $t2, $t4
    ctx->r24 = ADD32(ctx->r10, ctx->r12);
    // 0x8008B224: sw          $t8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r24;
    // 0x8008B228: jal         0x8008BCD8
    // 0x8008B22C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8008BCD8(rdram, ctx);
        goto after_23;
    // 0x8008B22C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_23:
    // 0x8008B230: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B234: nop

    // 0x8008B238: swc1        $f0, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f0.u32l;
L_8008B23C:
    // 0x8008B23C: lbu         $t3, 0x55($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X55);
    // 0x8008B240: nop

    // 0x8008B244: andi        $t5, $t3, 0x20
    ctx->r13 = ctx->r11 & 0X20;
    // 0x8008B248: beq         $t5, $zero, L_8008B300
    if (ctx->r13 == 0) {
        // 0x8008B24C: nop
    
            goto L_8008B300;
    }
    // 0x8008B24C: nop

    // 0x8008B250: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8008B254: lbu         $t7, 0x3BA0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3BA0);
    // 0x8008B258: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8008B25C: sll         $t6, $t7, 3
    ctx->r14 = S32(ctx->r15 << 3);
    // 0x8008B260: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x8008B264: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008B268: addu        $t1, $t0, $t6
    ctx->r9 = ADD32(ctx->r8, ctx->r14);
    // 0x8008B26C: lw          $t2, 0x118($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X118);
    // 0x8008B270: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8008B274: lbu         $t4, 0x0($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X0);
    // 0x8008B278: nop

    // 0x8008B27C: sb          $t4, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = ctx->r12;
    // 0x8008B280: lw          $t8, 0x118($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X118);
    // 0x8008B284: nop

    // 0x8008B288: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8008B28C: sw          $t9, 0x118($t1)
    MEM_W(0X118, ctx->r9) = ctx->r25;
    // 0x8008B290: lbu         $t5, 0x3BA0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X3BA0);
    // 0x8008B294: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x8008B298: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x8008B29C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8008B2A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008B2A4: addu        $t0, $t3, $t7
    ctx->r8 = ADD32(ctx->r11, ctx->r15);
    // 0x8008B2A8: lw          $t6, 0x110($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X110);
    // 0x8008B2AC: nop

    // 0x8008B2B0: lbu         $t2, 0x2($t6)
    ctx->r10 = MEM_BU(ctx->r14, 0X2);
    // 0x8008B2B4: nop

    // 0x8008B2B8: beq         $t2, $zero, L_8008B2E0
    if (ctx->r10 == 0) {
        // 0x8008B2BC: nop
    
            goto L_8008B2E0;
    }
    // 0x8008B2BC: nop

    // 0x8008B2C0: lbu         $t4, 0x1($t6)
    ctx->r12 = MEM_BU(ctx->r14, 0X1);
    // 0x8008B2C4: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008B2C8: sll         $t8, $t4, 1
    ctx->r24 = S32(ctx->r12 << 1);
    // 0x8008B2CC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008B2D0: lhu         $t9, -0x7528($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X7528);
    // 0x8008B2D4: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B2D8: b           L_8008B300
    // 0x8008B2DC: sh          $t9, 0x24($t1)
    MEM_H(0X24, ctx->r9) = ctx->r25;
        goto L_8008B300;
    // 0x8008B2DC: sh          $t9, 0x24($t1)
    MEM_H(0X24, ctx->r9) = ctx->r25;
L_8008B2E0:
    // 0x8008B2E0: lbu         $t5, 0x3B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X3B);
    // 0x8008B2E4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8008B2E8: sll         $t3, $t5, 1
    ctx->r11 = S32(ctx->r13 << 1);
    // 0x8008B2EC: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x8008B2F0: lhu         $t7, -0x7528($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X7528);
    // 0x8008B2F4: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B2F8: nop

    // 0x8008B2FC: sh          $t7, 0x24($t0)
    MEM_H(0X24, ctx->r8) = ctx->r15;
L_8008B300:
    // 0x8008B300: lbu         $t2, 0x55($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X55);
    // 0x8008B304: nop

    // 0x8008B308: andi        $t6, $t2, 0x10
    ctx->r14 = ctx->r10 & 0X10;
    // 0x8008B30C: beq         $t6, $zero, L_8008B370
    if (ctx->r14 == 0) {
        // 0x8008B310: nop
    
            goto L_8008B370;
    }
    // 0x8008B310: nop

    // 0x8008B314: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8008B318: lbu         $t8, 0x3BA0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3BA0);
    // 0x8008B31C: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8008B320: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8008B324: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008B328: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008B32C: addu        $t1, $t4, $t9
    ctx->r9 = ADD32(ctx->r12, ctx->r25);
    // 0x8008B330: lw          $t5, 0x118($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X118);
    // 0x8008B334: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B338: lbu         $t3, 0x0($t5)
    ctx->r11 = MEM_BU(ctx->r13, 0X0);
    // 0x8008B33C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8008B340: sra         $t7, $t3, 1
    ctx->r15 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8008B344: sb          $t7, 0x26($t0)
    MEM_B(0X26, ctx->r8) = ctx->r15;
    // 0x8008B348: lbu         $t6, 0x3BA0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3BA0);
    // 0x8008B34C: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x8008B350: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x8008B354: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8008B358: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008B35C: addu        $t4, $t2, $t8
    ctx->r12 = ADD32(ctx->r10, ctx->r24);
    // 0x8008B360: lw          $t9, 0x118($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X118);
    // 0x8008B364: nop

    // 0x8008B368: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8008B36C: sw          $t1, 0x118($t4)
    MEM_W(0X118, ctx->r12) = ctx->r9;
L_8008B370:
    // 0x8008B370: lbu         $t5, 0x55($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X55);
    // 0x8008B374: nop

    // 0x8008B378: andi        $t3, $t5, 0x8
    ctx->r11 = ctx->r13 & 0X8;
    // 0x8008B37C: beq         $t3, $zero, L_8008B55C
    if (ctx->r11 == 0) {
        // 0x8008B380: nop
    
            goto L_8008B55C;
    }
    // 0x8008B380: nop

    // 0x8008B384: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8008B388: lbu         $t0, 0x3BA0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3BA0);
    // 0x8008B38C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8008B390: sll         $t6, $t0, 3
    ctx->r14 = S32(ctx->r8 << 3);
    // 0x8008B394: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x8008B398: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008B39C: addu        $t2, $t7, $t6
    ctx->r10 = ADD32(ctx->r15, ctx->r14);
    // 0x8008B3A0: lw          $t8, 0x118($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X118);
    // 0x8008B3A4: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8008B3A8: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x8008B3AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008B3B0: sb          $t9, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r25;
    // 0x8008B3B4: lw          $t1, 0x118($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X118);
    // 0x8008B3B8: nop

    // 0x8008B3BC: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x8008B3C0: sw          $t4, 0x118($t2)
    MEM_W(0X118, ctx->r10) = ctx->r12;
    // 0x8008B3C4: lbu         $t3, 0x3BA0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X3BA0);
    // 0x8008B3C8: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x8008B3CC: sll         $t0, $t3, 3
    ctx->r8 = S32(ctx->r11 << 3);
    // 0x8008B3D0: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x8008B3D4: lbu         $t6, 0x54($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X54);
    // 0x8008B3D8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008B3DC: addu        $t7, $t5, $t0
    ctx->r15 = ADD32(ctx->r13, ctx->r8);
    // 0x8008B3E0: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x8008B3E4: lbu         $t9, 0x12C($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X12C);
    // 0x8008B3E8: lw          $t4, 0x18($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X18);
    // 0x8008B3EC: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8008B3F0: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8008B3F4: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B3F8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008B3FC: addu        $t2, $t4, $t1
    ctx->r10 = ADD32(ctx->r12, ctx->r9);
    // 0x8008B400: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8008B404: sw          $t2, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->r10;
    // 0x8008B408: lbu         $t6, 0x3BA0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3BA0);
    // 0x8008B40C: lbu         $t7, 0x56($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X56);
    // 0x8008B410: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x8008B414: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8008B418: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8008B41C: lbu         $t0, 0x54($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X54);
    // 0x8008B420: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x8008B424: addu        $t1, $t4, $t5
    ctx->r9 = ADD32(ctx->r12, ctx->r13);
    // 0x8008B428: sw          $t0, 0xD0($t1)
    MEM_W(0XD0, ctx->r9) = ctx->r8;
    // 0x8008B42C: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B430: nop

    // 0x8008B434: lbu         $t3, 0x27($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X27);
    // 0x8008B438: nop

    // 0x8008B43C: bne         $t3, $at, L_8008B55C
    if (ctx->r11 != ctx->r1) {
        // 0x8008B440: nop
    
            goto L_8008B55C;
    }
    // 0x8008B440: nop

    // 0x8008B444: lw          $t6, 0x8($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X8);
    // 0x8008B448: nop

    // 0x8008B44C: beq         $t6, $zero, L_8008B55C
    if (ctx->r14 == 0) {
        // 0x8008B450: nop
    
            goto L_8008B55C;
    }
    // 0x8008B450: nop

    // 0x8008B454: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x8008B458: addiu       $t8, $zero, 0x240
    ctx->r24 = ADD32(0, 0X240);
    // 0x8008B45C: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x8008B460: lw          $t9, 0x8($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X8);
    // 0x8008B464: jal         0x8008ED04
    // 0x8008B468: sw          $t8, 0xD8($t9)
    MEM_W(0XD8, ctx->r25) = ctx->r24;
    __allocParam(rdram, ctx);
        goto after_24;
    // 0x8008B468: sw          $t8, 0xD8($t9)
    MEM_W(0XD8, ctx->r25) = ctx->r24;
    after_24:
    // 0x8008B46C: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8008B470: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x8008B474: nop

    // 0x8008B478: beq         $t4, $zero, L_8008B4EC
    if (ctx->r12 == 0) {
        // 0x8008B47C: nop
    
            goto L_8008B4EC;
    }
    // 0x8008B47C: nop

    // 0x8008B480: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x8008B484: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x8008B488: lw          $t0, 0x14($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X14);
    // 0x8008B48C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8008B490: lw          $t1, 0x1C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1C);
    // 0x8008B494: nop

    // 0x8008B498: sw          $t1, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r9;
    // 0x8008B49C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8008B4A0: nop

    // 0x8008B4A4: sh          $t3, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r11;
    // 0x8008B4A8: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8008B4AC: nop

    // 0x8008B4B0: sw          $zero, 0xC($t7)
    MEM_W(0XC, ctx->r15) = 0;
    // 0x8008B4B4: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B4B8: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8008B4BC: lw          $t8, 0x8($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X8);
    // 0x8008B4C0: nop

    // 0x8008B4C4: lw          $t9, 0xD8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XD8);
    // 0x8008B4C8: nop

    // 0x8008B4CC: addiu       $t5, $t9, -0x40
    ctx->r13 = ADD32(ctx->r25, -0X40);
    // 0x8008B4D0: sw          $t5, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r13;
    // 0x8008B4D4: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8008B4D8: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8008B4DC: lw          $t9, 0x8($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X8);
    // 0x8008B4E0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8008B4E4: jalr        $t9
    // 0x8008B4E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x8008B4E8: nop

    after_25:
L_8008B4EC:
    // 0x8008B4EC: jal         0x8008ED04
    // 0x8008B4F0: nop

    __allocParam(rdram, ctx);
        goto after_26;
    // 0x8008B4F0: nop

    after_26:
    // 0x8008B4F4: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8008B4F8: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x8008B4FC: nop

    // 0x8008B500: beq         $t4, $zero, L_8008B55C
    if (ctx->r12 == 0) {
        // 0x8008B504: nop
    
            goto L_8008B55C;
    }
    // 0x8008B504: nop

    // 0x8008B508: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x8008B50C: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B510: lw          $t6, 0x14($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X14);
    // 0x8008B514: lw          $t8, 0x8($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X8);
    // 0x8008B518: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x8008B51C: lw          $t5, 0xD8($t8)
    ctx->r13 = MEM_W(ctx->r24, 0XD8);
    // 0x8008B520: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x8008B524: addu        $t0, $t7, $t5
    ctx->r8 = ADD32(ctx->r15, ctx->r13);
    // 0x8008B528: sw          $t0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r8;
    // 0x8008B52C: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8008B530: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8008B534: sh          $t1, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r9;
    // 0x8008B538: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8008B53C: nop

    // 0x8008B540: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
    // 0x8008B544: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x8008B548: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8008B54C: lw          $t9, 0x8($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X8);
    // 0x8008B550: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8008B554: jalr        $t9
    // 0x8008B558: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x8008B558: nop

    after_27:
L_8008B55C:
    // 0x8008B55C: lbu         $t2, 0x55($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X55);
    // 0x8008B560: nop

    // 0x8008B564: andi        $t8, $t2, 0x4
    ctx->r24 = ctx->r10 & 0X4;
    // 0x8008B568: beq         $t8, $zero, L_8008B680
    if (ctx->r24 == 0) {
        // 0x8008B56C: nop
    
            goto L_8008B680;
    }
    // 0x8008B56C: nop

    // 0x8008B570: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8008B574: lbu         $t5, 0x3BA0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X3BA0);
    // 0x8008B578: lbu         $t1, 0x56($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X56);
    // 0x8008B57C: sll         $t3, $t5, 1
    ctx->r11 = S32(ctx->r13 << 1);
    // 0x8008B580: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8008B584: addu        $t6, $t1, $t3
    ctx->r14 = ADD32(ctx->r9, ctx->r11);
    // 0x8008B588: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8008B58C: sll         $t0, $t5, 3
    ctx->r8 = S32(ctx->r13 << 3);
    // 0x8008B590: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x8008B594: addu        $t2, $t7, $t9
    ctx->r10 = ADD32(ctx->r15, ctx->r25);
    // 0x8008B598: lw          $t8, 0xD0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0XD0);
    // 0x8008B59C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008B5A0: addu        $t4, $t7, $t0
    ctx->r12 = ADD32(ctx->r15, ctx->r8);
    // 0x8008B5A4: addu        $t0, $t4, $t8
    ctx->r8 = ADD32(ctx->r12, ctx->r24);
    // 0x8008B5A8: lbu         $t5, 0x12C($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X12C);
    // 0x8008B5AC: lw          $t2, 0x118($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X118);
    // 0x8008B5B0: lw          $t3, 0x18($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X18);
    // 0x8008B5B4: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x8008B5B8: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B5BC: lbu         $t8, 0x0($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X0);
    // 0x8008B5C0: addu        $t6, $t3, $t1
    ctx->r14 = ADD32(ctx->r11, ctx->r9);
    // 0x8008B5C4: lw          $t9, 0x528($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X528);
    // 0x8008B5C8: lw          $t3, 0x1C($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X1C);
    // 0x8008B5CC: sll         $t0, $t8, 8
    ctx->r8 = S32(ctx->r24 << 8);
    // 0x8008B5D0: addu        $t5, $t0, $t9
    ctx->r13 = ADD32(ctx->r8, ctx->r25);
    // 0x8008B5D4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8008B5D8: sw          $t5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r13;
    // 0x8008B5DC: lbu         $t6, 0x3BA0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3BA0);
    // 0x8008B5E0: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x8008B5E4: sll         $t4, $t6, 3
    ctx->r12 = S32(ctx->r14 << 3);
    // 0x8008B5E8: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x8008B5EC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008B5F0: addu        $t2, $t1, $t4
    ctx->r10 = ADD32(ctx->r9, ctx->r12);
    // 0x8008B5F4: lw          $t8, 0x118($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X118);
    // 0x8008B5F8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8008B5FC: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x8008B600: sw          $t0, 0x118($t2)
    MEM_W(0X118, ctx->r10) = ctx->r8;
    // 0x8008B604: lbu         $t7, 0x3BA0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3BA0);
    // 0x8008B608: lbu         $t6, 0x56($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X56);
    // 0x8008B60C: sll         $t1, $t7, 1
    ctx->r9 = S32(ctx->r15 << 1);
    // 0x8008B610: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8008B614: addu        $t4, $t6, $t1
    ctx->r12 = ADD32(ctx->r14, ctx->r9);
    // 0x8008B618: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x8008B61C: sll         $t5, $t7, 3
    ctx->r13 = S32(ctx->r15 << 3);
    // 0x8008B620: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x8008B624: addu        $t0, $t9, $t8
    ctx->r8 = ADD32(ctx->r25, ctx->r24);
    // 0x8008B628: lw          $t2, 0xD0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0XD0);
    // 0x8008B62C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008B630: addu        $t3, $t9, $t5
    ctx->r11 = ADD32(ctx->r25, ctx->r13);
    // 0x8008B634: addu        $t5, $t3, $t2
    ctx->r13 = ADD32(ctx->r11, ctx->r10);
    // 0x8008B638: lbu         $t7, 0x12C($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X12C);
    // 0x8008B63C: lw          $t1, 0x18($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X18);
    // 0x8008B640: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8008B644: addu        $t4, $t1, $t6
    ctx->r12 = ADD32(ctx->r9, ctx->r14);
    // 0x8008B648: lw          $t8, 0x630($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X630);
    // 0x8008B64C: addu        $t0, $t3, $t2
    ctx->r8 = ADD32(ctx->r11, ctx->r10);
    // 0x8008B650: lbu         $t5, 0x12C($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X12C);
    // 0x8008B654: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B658: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8008B65C: lw          $t3, 0x1C($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X1C);
    // 0x8008B660: addu        $t9, $t1, $t7
    ctx->r25 = ADD32(ctx->r9, ctx->r15);
    // 0x8008B664: lw          $t6, 0x528($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X528);
    // 0x8008B668: lw          $t2, 0x0($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X0);
    // 0x8008B66C: nop

    // 0x8008B670: subu        $t0, $t2, $t6
    ctx->r8 = SUB32(ctx->r10, ctx->r14);
    // 0x8008B674: subu        $t5, $t8, $t0
    ctx->r13 = SUB32(ctx->r24, ctx->r8);
    // 0x8008B678: b           L_8008B748
    // 0x8008B67C: sw          $t5, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r13;
        goto L_8008B748;
    // 0x8008B67C: sw          $t5, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r13;
L_8008B680:
    // 0x8008B680: lbu         $t1, 0x55($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X55);
    // 0x8008B684: nop

    // 0x8008B688: andi        $t7, $t1, 0x2
    ctx->r15 = ctx->r9 & 0X2;
    // 0x8008B68C: beq         $t7, $zero, L_8008B748
    if (ctx->r15 == 0) {
        // 0x8008B690: nop
    
            goto L_8008B748;
    }
    // 0x8008B690: nop

    // 0x8008B694: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8008B698: lbu         $t4, 0x3BA0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X3BA0);
    // 0x8008B69C: lbu         $t8, 0x56($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X56);
    // 0x8008B6A0: sll         $t0, $t4, 1
    ctx->r8 = S32(ctx->r12 << 1);
    // 0x8008B6A4: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8008B6A8: addu        $t5, $t8, $t0
    ctx->r13 = ADD32(ctx->r24, ctx->r8);
    // 0x8008B6AC: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x8008B6B0: sll         $t2, $t4, 3
    ctx->r10 = S32(ctx->r12 << 3);
    // 0x8008B6B4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8008B6B8: addu        $t1, $t9, $t3
    ctx->r9 = ADD32(ctx->r25, ctx->r11);
    // 0x8008B6BC: lw          $t7, 0xD0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0XD0);
    // 0x8008B6C0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008B6C4: addu        $t6, $t9, $t2
    ctx->r14 = ADD32(ctx->r25, ctx->r10);
    // 0x8008B6C8: addu        $t2, $t6, $t7
    ctx->r10 = ADD32(ctx->r14, ctx->r15);
    // 0x8008B6CC: lbu         $t4, 0x12C($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X12C);
    // 0x8008B6D0: lw          $t0, 0x18($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X18);
    // 0x8008B6D4: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B6D8: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x8008B6DC: addu        $t5, $t0, $t8
    ctx->r13 = ADD32(ctx->r8, ctx->r24);
    // 0x8008B6E0: lw          $t3, 0x528($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X528);
    // 0x8008B6E4: lw          $t6, 0x1C($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X1C);
    // 0x8008B6E8: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8008B6EC: sw          $t3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r11;
    // 0x8008B6F0: lbu         $t2, 0x3BA0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X3BA0);
    // 0x8008B6F4: lbu         $t0, 0x56($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X56);
    // 0x8008B6F8: sll         $t8, $t2, 1
    ctx->r24 = S32(ctx->r10 << 1);
    // 0x8008B6FC: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8008B700: addu        $t5, $t0, $t8
    ctx->r13 = ADD32(ctx->r8, ctx->r24);
    // 0x8008B704: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x8008B708: sll         $t4, $t2, 3
    ctx->r12 = S32(ctx->r10 << 3);
    // 0x8008B70C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8008B710: addu        $t3, $t7, $t1
    ctx->r11 = ADD32(ctx->r15, ctx->r9);
    // 0x8008B714: lw          $t6, 0xD0($t3)
    ctx->r14 = MEM_W(ctx->r11, 0XD0);
    // 0x8008B718: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008B71C: addu        $t9, $t7, $t4
    ctx->r25 = ADD32(ctx->r15, ctx->r12);
    // 0x8008B720: addu        $t4, $t9, $t6
    ctx->r12 = ADD32(ctx->r25, ctx->r14);
    // 0x8008B724: lbu         $t2, 0x12C($t4)
    ctx->r10 = MEM_BU(ctx->r12, 0X12C);
    // 0x8008B728: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x8008B72C: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B730: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x8008B734: addu        $t5, $t8, $t0
    ctx->r13 = ADD32(ctx->r24, ctx->r8);
    // 0x8008B738: lw          $t1, 0x630($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X630);
    // 0x8008B73C: lw          $t9, 0x1C($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X1C);
    // 0x8008B740: nop

    // 0x8008B744: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
L_8008B748:
    // 0x8008B748: lbu         $t6, 0x55($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X55);
    // 0x8008B74C: nop

    // 0x8008B750: andi        $t4, $t6, 0x2
    ctx->r12 = ctx->r14 & 0X2;
    // 0x8008B754: beq         $t4, $zero, L_8008B8F8
    if (ctx->r12 == 0) {
        // 0x8008B758: nop
    
            goto L_8008B8F8;
    }
    // 0x8008B758: nop

    // 0x8008B75C: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B760: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008B764: lbu         $t7, 0x27($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X27);
    // 0x8008B768: nop

    // 0x8008B76C: bne         $t7, $at, L_8008B88C
    if (ctx->r15 != ctx->r1) {
        // 0x8008B770: nop
    
            goto L_8008B88C;
    }
    // 0x8008B770: nop

    // 0x8008B774: lw          $t8, 0x8($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X8);
    // 0x8008B778: nop

    // 0x8008B77C: beq         $t8, $zero, L_8008B88C
    if (ctx->r24 == 0) {
        // 0x8008B780: nop
    
            goto L_8008B88C;
    }
    // 0x8008B780: nop

    // 0x8008B784: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x8008B788: addiu       $t5, $zero, 0x240
    ctx->r13 = ADD32(0, 0X240);
    // 0x8008B78C: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x8008B790: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x8008B794: jal         0x8008ED04
    // 0x8008B798: sw          $t5, 0xD8($t3)
    MEM_W(0XD8, ctx->r11) = ctx->r13;
    __allocParam(rdram, ctx);
        goto after_28;
    // 0x8008B798: sw          $t5, 0xD8($t3)
    MEM_W(0XD8, ctx->r11) = ctx->r13;
    after_28:
    // 0x8008B79C: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8008B7A0: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x8008B7A4: nop

    // 0x8008B7A8: beq         $t1, $zero, L_8008B81C
    if (ctx->r9 == 0) {
        // 0x8008B7AC: nop
    
            goto L_8008B81C;
    }
    // 0x8008B7AC: nop

    // 0x8008B7B0: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8008B7B4: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x8008B7B8: lw          $t6, 0x14($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X14);
    // 0x8008B7BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8008B7C0: lw          $t4, 0x1C($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X1C);
    // 0x8008B7C4: nop

    // 0x8008B7C8: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x8008B7CC: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8008B7D0: nop

    // 0x8008B7D4: sh          $t7, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r15;
    // 0x8008B7D8: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8008B7DC: nop

    // 0x8008B7E0: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
    // 0x8008B7E4: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B7E8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8008B7EC: lw          $t5, 0x8($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X8);
    // 0x8008B7F0: nop

    // 0x8008B7F4: lw          $t3, 0xD8($t5)
    ctx->r11 = MEM_W(ctx->r13, 0XD8);
    // 0x8008B7F8: nop

    // 0x8008B7FC: addiu       $t9, $t3, -0x40
    ctx->r25 = ADD32(ctx->r11, -0X40);
    // 0x8008B800: sw          $t9, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r25;
    // 0x8008B804: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x8008B808: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8008B80C: lw          $t9, 0x8($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X8);
    // 0x8008B810: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x8008B814: jalr        $t9
    // 0x8008B818: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x8008B818: nop

    after_29:
L_8008B81C:
    // 0x8008B81C: jal         0x8008ED04
    // 0x8008B820: nop

    __allocParam(rdram, ctx);
        goto after_30;
    // 0x8008B820: nop

    after_30:
    // 0x8008B824: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8008B828: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x8008B82C: nop

    // 0x8008B830: beq         $t1, $zero, L_8008B88C
    if (ctx->r9 == 0) {
        // 0x8008B834: nop
    
            goto L_8008B88C;
    }
    // 0x8008B834: nop

    // 0x8008B838: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8008B83C: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B840: lw          $t8, 0x14($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X14);
    // 0x8008B844: lw          $t5, 0x8($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X8);
    // 0x8008B848: lw          $t0, 0x1C($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X1C);
    // 0x8008B84C: lw          $t3, 0xD8($t5)
    ctx->r11 = MEM_W(ctx->r13, 0XD8);
    // 0x8008B850: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x8008B854: addu        $t6, $t0, $t3
    ctx->r14 = ADD32(ctx->r8, ctx->r11);
    // 0x8008B858: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x8008B85C: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8008B860: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8008B864: sh          $t4, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r12;
    // 0x8008B868: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8008B86C: nop

    // 0x8008B870: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x8008B874: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8008B878: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8008B87C: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x8008B880: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8008B884: jalr        $t9
    // 0x8008B888: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x8008B888: nop

    after_31:
L_8008B88C:
    // 0x8008B88C: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x8008B890: nop

    // 0x8008B894: lw          $t5, 0x14($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X14);
    // 0x8008B898: nop

    // 0x8008B89C: beq         $t5, $zero, L_8008B8EC
    if (ctx->r13 == 0) {
        // 0x8008B8A0: nop
    
            goto L_8008B8EC;
    }
    // 0x8008B8A0: nop

    // 0x8008B8A4: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B8A8: nop

    // 0x8008B8AC: lw          $t3, 0x1C($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X1C);
    // 0x8008B8B0: nop

    // 0x8008B8B4: beq         $t3, $zero, L_8008B8EC
    if (ctx->r11 == 0) {
        // 0x8008B8B8: nop
    
            goto L_8008B8EC;
    }
    // 0x8008B8B8: nop

    // 0x8008B8BC: lh          $t6, 0x24($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X24);
    // 0x8008B8C0: lw          $a3, 0x20($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X20);
    // 0x8008B8C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8008B8C8: lb          $t1, 0x26($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X26);
    // 0x8008B8CC: addiu       $t4, $zero, 0x1F4
    ctx->r12 = ADD32(0, 0X1F4);
    // 0x8008B8D0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8008B8D4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8008B8D8: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8008B8DC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8008B8E0: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8008B8E4: jal         0x800B8DC0
    // 0x8008B8E8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    alSynStartVoiceParams(rdram, ctx);
        goto after_32;
    // 0x8008B8E8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_32:
L_8008B8EC:
    // 0x8008B8EC: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B8F0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8008B8F4: sb          $t7, 0x27($t8)
    MEM_B(0X27, ctx->r24) = ctx->r15;
L_8008B8F8:
    // 0x8008B8F8: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B8FC: nop

    // 0x8008B900: lbu         $t2, 0x27($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X27);
    // 0x8008B904: nop

    // 0x8008B908: beq         $t2, $zero, L_8008B944
    if (ctx->r10 == 0) {
        // 0x8008B90C: nop
    
            goto L_8008B944;
    }
    // 0x8008B90C: nop

    // 0x8008B910: lbu         $t5, 0x55($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X55);
    // 0x8008B914: nop

    // 0x8008B918: andi        $t3, $t5, 0x40
    ctx->r11 = ctx->r13 & 0X40;
    // 0x8008B91C: beq         $t3, $zero, L_8008B944
    if (ctx->r11 == 0) {
        // 0x8008B920: nop
    
            goto L_8008B944;
    }
    // 0x8008B920: nop

    // 0x8008B924: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x8008B928: bne         $t6, $zero, L_8008B944
    if (ctx->r14 != 0) {
        // 0x8008B92C: nop
    
            goto L_8008B944;
    }
    // 0x8008B92C: nop

    // 0x8008B930: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8008B934: lw          $a2, 0x20($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X20);
    // 0x8008B938: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x8008B93C: jal         0x800B8EB0
    // 0x8008B940: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    alSynSetPitch(rdram, ctx);
        goto after_33;
    // 0x8008B940: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_33:
L_8008B944:
    // 0x8008B944: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B948: nop

    // 0x8008B94C: lbu         $t4, 0x27($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X27);
    // 0x8008B950: nop

    // 0x8008B954: beq         $t4, $zero, L_8008B994
    if (ctx->r12 == 0) {
        // 0x8008B958: nop
    
            goto L_8008B994;
    }
    // 0x8008B958: nop

    // 0x8008B95C: lbu         $t7, 0x55($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X55);
    // 0x8008B960: nop

    // 0x8008B964: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x8008B968: beq         $t8, $zero, L_8008B994
    if (ctx->r24 == 0) {
        // 0x8008B96C: nop
    
            goto L_8008B994;
    }
    // 0x8008B96C: nop

    // 0x8008B970: andi        $t2, $t7, 0x2
    ctx->r10 = ctx->r15 & 0X2;
    // 0x8008B974: bne         $t2, $zero, L_8008B994
    if (ctx->r10 != 0) {
        // 0x8008B978: nop
    
            goto L_8008B994;
    }
    // 0x8008B978: nop

    // 0x8008B97C: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x8008B980: lh          $a2, 0x24($t1)
    ctx->r6 = MEM_H(ctx->r9, 0X24);
    // 0x8008B984: lw          $a0, 0x14($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X14);
    // 0x8008B988: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8008B98C: jal         0x8008E5A0
    // 0x8008B990: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    func_8008E5A0(rdram, ctx);
        goto after_34;
    // 0x8008B990: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    after_34:
L_8008B994:
    // 0x8008B994: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B998: nop

    // 0x8008B99C: lbu         $t6, 0x27($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X27);
    // 0x8008B9A0: nop

    // 0x8008B9A4: beq         $t6, $zero, L_8008B9E0
    if (ctx->r14 == 0) {
        // 0x8008B9A8: nop
    
            goto L_8008B9E0;
    }
    // 0x8008B9A8: nop

    // 0x8008B9AC: lbu         $t0, 0x55($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X55);
    // 0x8008B9B0: nop

    // 0x8008B9B4: andi        $t9, $t0, 0x10
    ctx->r25 = ctx->r8 & 0X10;
    // 0x8008B9B8: beq         $t9, $zero, L_8008B9E0
    if (ctx->r25 == 0) {
        // 0x8008B9BC: nop
    
            goto L_8008B9E0;
    }
    // 0x8008B9BC: nop

    // 0x8008B9C0: andi        $t4, $t0, 0x2
    ctx->r12 = ctx->r8 & 0X2;
    // 0x8008B9C4: bne         $t4, $zero, L_8008B9E0
    if (ctx->r12 != 0) {
        // 0x8008B9C8: nop
    
            goto L_8008B9E0;
    }
    // 0x8008B9C8: nop

    // 0x8008B9CC: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8008B9D0: lb          $a2, 0x26($t5)
    ctx->r6 = MEM_B(ctx->r13, 0X26);
    // 0x8008B9D4: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    // 0x8008B9D8: jal         0x800B8D30
    // 0x8008B9DC: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    alSynSetPan(rdram, ctx);
        goto after_35;
    // 0x8008B9DC: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_35:
L_8008B9E0:
    // 0x8008B9E0: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x8008B9E4: nop

    // 0x8008B9E8: lbu         $t2, 0x27($t7)
    ctx->r10 = MEM_BU(ctx->r15, 0X27);
    // 0x8008B9EC: nop

    // 0x8008B9F0: beq         $t2, $zero, L_8008BA60
    if (ctx->r10 == 0) {
        // 0x8008B9F4: nop
    
            goto L_8008BA60;
    }
    // 0x8008B9F4: nop

    // 0x8008B9F8: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8008B9FC: lbu         $t1, 0x3BA0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X3BA0);
    // 0x8008BA00: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x8008BA04: sll         $t6, $t1, 3
    ctx->r14 = S32(ctx->r9 << 3);
    // 0x8008BA08: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x8008BA0C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008BA10: addu        $t9, $t3, $t6
    ctx->r25 = ADD32(ctx->r11, ctx->r14);
    // 0x8008BA14: lw          $t0, 0x110($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X110);
    // 0x8008BA18: nop

    // 0x8008BA1C: lbu         $t4, 0x2($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X2);
    // 0x8008BA20: nop

    // 0x8008BA24: beq         $t4, $zero, L_8008BA60
    if (ctx->r12 == 0) {
        // 0x8008BA28: nop
    
            goto L_8008BA60;
    }
    // 0x8008BA28: nop

    // 0x8008BA2C: lbu         $t8, 0x1($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X1);
    // 0x8008BA30: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8008BA34: sll         $t5, $t8, 1
    ctx->r13 = S32(ctx->r24 << 1);
    // 0x8008BA38: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x8008BA3C: lhu         $t2, -0x7528($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X7528);
    // 0x8008BA40: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    // 0x8008BA44: sh          $t2, 0x24($t7)
    MEM_H(0X24, ctx->r15) = ctx->r10;
    // 0x8008BA48: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x8008BA4C: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x8008BA50: lh          $a2, 0x24($t3)
    ctx->r6 = MEM_H(ctx->r11, 0X24);
    // 0x8008BA54: lw          $a0, 0x14($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X14);
    // 0x8008BA58: jal         0x8008E5A0
    // 0x8008BA5C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_8008E5A0(rdram, ctx);
        goto after_36;
    // 0x8008BA5C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_36:
L_8008BA60:
    // 0x8008BA60: lbu         $t6, 0x55($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X55);
    // 0x8008BA64: nop

    // 0x8008BA68: andi        $t9, $t6, 0x1
    ctx->r25 = ctx->r14 & 0X1;
    // 0x8008BA6C: beq         $t9, $zero, L_8008BC70
    if (ctx->r25 == 0) {
        // 0x8008BA70: nop
    
            goto L_8008BC70;
    }
    // 0x8008BA70: nop

    // 0x8008BA74: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8008BA78: lbu         $t0, 0x3BA0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3BA0);
    // 0x8008BA7C: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8008BA80: sll         $t8, $t0, 3
    ctx->r24 = S32(ctx->r8 << 3);
    // 0x8008BA84: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x8008BA88: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008BA8C: addu        $t5, $t4, $t8
    ctx->r13 = ADD32(ctx->r12, ctx->r24);
    // 0x8008BA90: lw          $t2, 0x118($t5)
    ctx->r10 = MEM_W(ctx->r13, 0X118);
    // 0x8008BA94: nop

    // 0x8008BA98: lbu         $t7, 0x0($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X0);
    // 0x8008BA9C: nop

    // 0x8008BAA0: sb          $t7, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r15;
    // 0x8008BAA4: lw          $t1, 0x118($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X118);
    // 0x8008BAA8: nop

    // 0x8008BAAC: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x8008BAB0: sw          $t3, 0x118($t5)
    MEM_W(0X118, ctx->r13) = ctx->r11;
    // 0x8008BAB4: lbu         $t6, 0x55($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X55);
    // 0x8008BAB8: nop

    // 0x8008BABC: andi        $t9, $t6, 0x40
    ctx->r25 = ctx->r14 & 0X40;
    // 0x8008BAC0: beq         $t9, $zero, L_8008BB98
    if (ctx->r25 == 0) {
        // 0x8008BAC4: nop
    
            goto L_8008BB98;
    }
    // 0x8008BAC4: nop

    // 0x8008BAC8: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8008BACC: lbu         $t4, 0x3BA0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X3BA0);
    // 0x8008BAD0: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8008BAD4: sll         $t8, $t4, 3
    ctx->r24 = S32(ctx->r12 << 3);
    // 0x8008BAD8: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x8008BADC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008BAE0: addu        $t2, $t0, $t8
    ctx->r10 = ADD32(ctx->r8, ctx->r24);
    // 0x8008BAE4: lw          $t7, 0x118($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X118);
    // 0x8008BAE8: nop

    // 0x8008BAEC: lbu         $t1, 0x0($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X0);
    // 0x8008BAF0: nop

    // 0x8008BAF4: beq         $t1, $zero, L_8008BB60
    if (ctx->r9 == 0) {
        // 0x8008BAF8: nop
    
            goto L_8008BB60;
    }
    // 0x8008BAF8: nop

    // 0x8008BAFC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8008BB00: subu        $t3, $t3, $t1
    ctx->r11 = SUB32(ctx->r11, ctx->r9);
    // 0x8008BB04: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8008BB08: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8008BB0C: lui         $t5, 0x773
    ctx->r13 = S32(0X773 << 16);
    // 0x8008BB10: ori         $t5, $t5, 0x5940
    ctx->r13 = ctx->r13 | 0X5940;
    // 0x8008BB14: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x8008BB18: div         $zero, $t5, $t3
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r11)));
    // 0x8008BB1C: bne         $t3, $zero, L_8008BB28
    if (ctx->r11 != 0) {
        // 0x8008BB20: nop
    
            goto L_8008BB28;
    }
    // 0x8008BB20: nop

    // 0x8008BB24: break       7
    do_break(2148055844);
L_8008BB28:
    // 0x8008BB28: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008BB2C: bne         $t3, $at, L_8008BB40
    if (ctx->r11 != ctx->r1) {
        // 0x8008BB30: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8008BB40;
    }
    // 0x8008BB30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008BB34: bne         $t5, $at, L_8008BB40
    if (ctx->r13 != ctx->r1) {
        // 0x8008BB38: nop
    
            goto L_8008BB40;
    }
    // 0x8008BB38: nop

    // 0x8008BB3C: break       6
    do_break(2148055868);
L_8008BB40:
    // 0x8008BB40: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008BB44: mflo        $t6
    ctx->r14 = lo;
    // 0x8008BB48: sw          $t6, 0x3940($at)
    MEM_W(0X3940, ctx->r1) = ctx->r14;
    // 0x8008BB4C: lw          $t9, 0x118($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X118);
    // 0x8008BB50: nop

    // 0x8008BB54: addiu       $t4, $t9, 0x1
    ctx->r12 = ADD32(ctx->r25, 0X1);
    // 0x8008BB58: b           L_8008BB98
    // 0x8008BB5C: sw          $t4, 0x118($t2)
    MEM_W(0X118, ctx->r10) = ctx->r12;
        goto L_8008BB98;
    // 0x8008BB5C: sw          $t4, 0x118($t2)
    MEM_W(0X118, ctx->r10) = ctx->r12;
L_8008BB60:
    // 0x8008BB60: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008BB64: jal         0x800B3BFC
    // 0x8008BB68: addiu       $a0, $a0, -0x650
    ctx->r4 = ADD32(ctx->r4, -0X650);
    osSyncPrintf(rdram, ctx);
        goto after_37;
    // 0x8008BB68: addiu       $a0, $a0, -0x650
    ctx->r4 = ADD32(ctx->r4, -0X650);
    after_37:
    // 0x8008BB6C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8008BB70: lbu         $t8, 0x3BA0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3BA0);
    // 0x8008BB74: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8008BB78: sll         $t7, $t8, 3
    ctx->r15 = S32(ctx->r24 << 3);
    // 0x8008BB7C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8008BB80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008BB84: addu        $t1, $t0, $t7
    ctx->r9 = ADD32(ctx->r8, ctx->r15);
    // 0x8008BB88: lw          $t5, 0x118($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X118);
    // 0x8008BB8C: nop

    // 0x8008BB90: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x8008BB94: sw          $t3, 0x118($t1)
    MEM_W(0X118, ctx->r9) = ctx->r11;
L_8008BB98:
    // 0x8008BB98: lbu         $t6, 0x55($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X55);
    // 0x8008BB9C: nop

    // 0x8008BBA0: andi        $t9, $t6, 0x20
    ctx->r25 = ctx->r14 & 0X20;
    // 0x8008BBA4: beq         $t9, $zero, L_8008BC70
    if (ctx->r25 == 0) {
        // 0x8008BBA8: nop
    
            goto L_8008BC70;
    }
    // 0x8008BBA8: nop

    // 0x8008BBAC: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8008BBB0: lbu         $t2, 0x3BA0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X3BA0);
    // 0x8008BBB4: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8008BBB8: sll         $t8, $t2, 3
    ctx->r24 = S32(ctx->r10 << 3);
    // 0x8008BBBC: addu        $t8, $t8, $t2
    ctx->r24 = ADD32(ctx->r24, ctx->r10);
    // 0x8008BBC0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008BBC4: addu        $t0, $t4, $t8
    ctx->r8 = ADD32(ctx->r12, ctx->r24);
    // 0x8008BBC8: lw          $t7, 0x118($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X118);
    // 0x8008BBCC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8008BBD0: lbu         $t5, 0x0($t7)
    ctx->r13 = MEM_BU(ctx->r15, 0X0);
    // 0x8008BBD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008BBD8: sb          $t5, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r13;
    // 0x8008BBDC: lw          $t3, 0x118($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X118);
    // 0x8008BBE0: nop

    // 0x8008BBE4: addiu       $t1, $t3, 0x1
    ctx->r9 = ADD32(ctx->r11, 0X1);
    // 0x8008BBE8: sw          $t1, 0x118($t0)
    MEM_W(0X118, ctx->r8) = ctx->r9;
    // 0x8008BBEC: lbu         $t9, 0x3BA0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X3BA0);
    // 0x8008BBF0: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8008BBF4: sll         $t2, $t9, 3
    ctx->r10 = S32(ctx->r25 << 3);
    // 0x8008BBF8: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x8008BBFC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008BC00: addu        $t4, $t6, $t2
    ctx->r12 = ADD32(ctx->r14, ctx->r10);
    // 0x8008BC04: lw          $t8, 0x110($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X110);
    // 0x8008BC08: nop

    // 0x8008BC0C: lbu         $t7, 0x0($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X0);
    // 0x8008BC10: nop

    // 0x8008BC14: bne         $t7, $at, L_8008BC70
    if (ctx->r15 != ctx->r1) {
        // 0x8008BC18: nop
    
            goto L_8008BC70;
    }
    // 0x8008BC18: nop

    // 0x8008BC1C: lbu         $t5, 0x55($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X55);
    // 0x8008BC20: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008BC24: bne         $t5, $at, L_8008BC38
    if (ctx->r13 != ctx->r1) {
        // 0x8008BC28: nop
    
            goto L_8008BC38;
    }
    // 0x8008BC28: nop

    // 0x8008BC2C: lw          $t3, 0x118($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X118);
    // 0x8008BC30: nop

    // 0x8008BC34: sw          $t3, 0x120($t4)
    MEM_W(0X120, ctx->r12) = ctx->r11;
L_8008BC38:
    // 0x8008BC38: lbu         $t1, 0x55($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X55);
    // 0x8008BC3C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8008BC40: bne         $t1, $at, L_8008BC70
    if (ctx->r9 != ctx->r1) {
        // 0x8008BC44: nop
    
            goto L_8008BC70;
    }
    // 0x8008BC44: nop

    // 0x8008BC48: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8008BC4C: lbu         $t9, 0x3BA0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X3BA0);
    // 0x8008BC50: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8008BC54: sll         $t6, $t9, 3
    ctx->r14 = S32(ctx->r25 << 3);
    // 0x8008BC58: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8008BC5C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008BC60: addu        $t2, $t0, $t6
    ctx->r10 = ADD32(ctx->r8, ctx->r14);
    // 0x8008BC64: lw          $t8, 0x120($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X120);
    // 0x8008BC68: nop

    // 0x8008BC6C: sw          $t8, 0x118($t2)
    MEM_W(0X118, ctx->r10) = ctx->r24;
L_8008BC70:
    // 0x8008BC70: lbu         $t7, 0x56($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X56);
    // 0x8008BC74: nop

    // 0x8008BC78: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x8008BC7C: andi        $t3, $t5, 0xFF
    ctx->r11 = ctx->r13 & 0XFF;
    // 0x8008BC80: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x8008BC84: bne         $at, $zero, L_8008B000
    if (ctx->r1 != 0) {
        // 0x8008BC88: sb          $t5, 0x56($sp)
        MEM_B(0X56, ctx->r29) = ctx->r13;
            goto L_8008B000;
    }
    // 0x8008BC88: sb          $t5, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r13;
L_8008BC8C:
    // 0x8008BC8C: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8008BC90: lbu         $t4, 0x3BA0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X3BA0);
    // 0x8008BC94: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8008BC98: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008BC9C: addiu       $t1, $t4, 0x1
    ctx->r9 = ADD32(ctx->r12, 0X1);
    // 0x8008BCA0: sb          $t1, 0x3BA0($at)
    MEM_B(0X3BA0, ctx->r1) = ctx->r9;
    // 0x8008BCA4: lw          $t6, 0x8C($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X8C);
    // 0x8008BCA8: andi        $t9, $t1, 0xFF
    ctx->r25 = ctx->r9 & 0XFF;
    // 0x8008BCAC: srl         $t8, $t6, 1
    ctx->r24 = S32(U32(ctx->r14) >> 1);
    // 0x8008BCB0: sltu        $at, $t9, $t8
    ctx->r1 = ctx->r25 < ctx->r24 ? 1 : 0;
    // 0x8008BCB4: bne         $at, $zero, L_8008AF90
    if (ctx->r1 != 0) {
        // 0x8008BCB8: nop
    
            goto L_8008AF90;
    }
    // 0x8008BCB8: nop

L_8008BCBC:
    // 0x8008BCBC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008BCC0: lw          $v0, 0x3940($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3940);
    // 0x8008BCC4: nop

L_8008BCC8:
    // 0x8008BCC8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8008BCCC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8008BCD0: jr          $ra
    // 0x8008BCD4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8008BCD4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8008BCD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BCD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008BCDC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008BCE0: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8008BCE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BCE8: bgtz        $t6, L_8008BCFC
    if (SIGNED(ctx->r14) > 0) {
        // 0x8008BCEC: nop
    
            goto L_8008BCFC;
    }
    // 0x8008BCEC: nop

    // 0x8008BCF0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8008BCF4: b           L_8008BE08
    // 0x8008BCF8: nop

        goto L_8008BE08;
    // 0x8008BCF8: nop

L_8008BCFC:
    // 0x8008BCFC: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x8008BD00: lui         $t8, 0xDA
    ctx->r24 = S32(0XDA << 16);
    // 0x8008BD04: ori         $t8, $t8, 0x7A68
    ctx->r24 = ctx->r24 | 0X7A68;
    // 0x8008BD08: div         $zero, $t8, $t7
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r15)));
    // 0x8008BD0C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8008BD10: lwc1        $f5, -0x508($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X508);
    // 0x8008BD14: lwc1        $f4, -0x504($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X504);
    // 0x8008BD18: bne         $t7, $zero, L_8008BD24
    if (ctx->r15 != 0) {
        // 0x8008BD1C: nop
    
            goto L_8008BD24;
    }
    // 0x8008BD1C: nop

    // 0x8008BD20: break       7
    do_break(2148056352);
L_8008BD24:
    // 0x8008BD24: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008BD28: bne         $t7, $at, L_8008BD3C
    if (ctx->r15 != ctx->r1) {
        // 0x8008BD2C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8008BD3C;
    }
    // 0x8008BD2C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008BD30: bne         $t8, $at, L_8008BD3C
    if (ctx->r24 != ctx->r1) {
        // 0x8008BD34: nop
    
            goto L_8008BD3C;
    }
    // 0x8008BD34: nop

    // 0x8008BD38: break       6
    do_break(2148056376);
L_8008BD3C:
    // 0x8008BD3C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8008BD40: lwc1        $f19, -0x500($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X500);
    // 0x8008BD44: lwc1        $f18, -0x4FC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4FC);
    // 0x8008BD48: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8008BD4C: mflo        $t9
    ctx->r25 = lo;
    // 0x8008BD50: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8008BD54: nop

    // 0x8008BD58: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008BD5C: lwc1        $f9, -0x4F8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4F8);
    // 0x8008BD60: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8008BD64: nop

    // 0x8008BD68: div.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f4.d, ctx->f10.d);
    // 0x8008BD6C: lwc1        $f8, -0x4F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4F4);
    // 0x8008BD70: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8008BD74: mul.d       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8008BD78: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8008BD7C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8008BD80: div.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x8008BD84: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x8008BD88: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8008BD8C: c.le.d      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.d <= ctx->f16.d;
    // 0x8008BD90: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x8008BD94: bc1f        L_8008BDC0
    if (!c1cs) {
        // 0x8008BD98: nop
    
            goto L_8008BDC0;
    }
    // 0x8008BD98: nop

    // 0x8008BD9C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008BDA0: mfc1        $a2, $f17
    ctx->r6 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    // 0x8008BDA4: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8008BDA8: jal         0x800B3BFC
    // 0x8008BDAC: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x8008BDAC: addiu       $a0, $a0, -0x628
    ctx->r4 = ADD32(ctx->r4, -0X628);
    after_0:
    // 0x8008BDB0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008BDB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8008BDB8: nop

    // 0x8008BDBC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
L_8008BDC0:
    // 0x8008BDC0: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8008BDC4: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x8008BDC8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8008BDCC: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x8008BDD0: c.lt.d      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.d < ctx->f10.d;
    // 0x8008BDD4: nop

    // 0x8008BDD8: bc1f        L_8008BE00
    if (!c1cs) {
        // 0x8008BDDC: lui         $at, 0xBFF0
        ctx->r1 = S32(0XBFF0 << 16);
            goto L_8008BE00;
    }
    // 0x8008BDDC: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x8008BDE0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8008BDE4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8008BDE8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008BDEC: mul.d       $f16, $f4, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f18.d);
    // 0x8008BDF0: addiu       $a0, $a0, -0x610
    ctx->r4 = ADD32(ctx->r4, -0X610);
    // 0x8008BDF4: cvt.s.d     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f6.fl = CVT_S_D(ctx->f16.d);
    // 0x8008BDF8: jal         0x800B3BFC
    // 0x8008BDFC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    osSyncPrintf(rdram, ctx);
        goto after_1;
    // 0x8008BDFC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_1:
L_8008BE00:
    // 0x8008BE00: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8008BE04: nop

L_8008BE08:
    // 0x8008BE08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BE0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008BE10: jr          $ra
    // 0x8008BE14: nop

    return;
    // 0x8008BE14: nop

;}
RECOMP_FUNC void func_8008BE18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BE18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008BE1C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008BE20: lhu         $t6, 0x22($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X22);
    // 0x8008BE24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BE28: bgtz        $t6, L_8008BE3C
    if (SIGNED(ctx->r14) > 0) {
        // 0x8008BE2C: nop
    
            goto L_8008BE3C;
    }
    // 0x8008BE2C: nop

    // 0x8008BE30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8008BE34: b           L_8008BF48
    // 0x8008BE38: nop

        goto L_8008BF48;
    // 0x8008BE38: nop

L_8008BE3C:
    // 0x8008BE3C: lhu         $t7, 0x22($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X22);
    // 0x8008BE40: lui         $t8, 0xDA
    ctx->r24 = S32(0XDA << 16);
    // 0x8008BE44: ori         $t8, $t8, 0x7A68
    ctx->r24 = ctx->r24 | 0X7A68;
    // 0x8008BE48: div         $zero, $t8, $t7
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r15)));
    // 0x8008BE4C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8008BE50: lwc1        $f5, -0x4F0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X4F0);
    // 0x8008BE54: lwc1        $f4, -0x4EC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4EC);
    // 0x8008BE58: bne         $t7, $zero, L_8008BE64
    if (ctx->r15 != 0) {
        // 0x8008BE5C: nop
    
            goto L_8008BE64;
    }
    // 0x8008BE5C: nop

    // 0x8008BE60: break       7
    do_break(2148056672);
L_8008BE64:
    // 0x8008BE64: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008BE68: bne         $t7, $at, L_8008BE7C
    if (ctx->r15 != ctx->r1) {
        // 0x8008BE6C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8008BE7C;
    }
    // 0x8008BE6C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008BE70: bne         $t8, $at, L_8008BE7C
    if (ctx->r24 != ctx->r1) {
        // 0x8008BE74: nop
    
            goto L_8008BE7C;
    }
    // 0x8008BE74: nop

    // 0x8008BE78: break       6
    do_break(2148056696);
L_8008BE7C:
    // 0x8008BE7C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8008BE80: lwc1        $f19, -0x4E8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X4E8);
    // 0x8008BE84: lwc1        $f18, -0x4E4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4E4);
    // 0x8008BE88: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8008BE8C: mflo        $t9
    ctx->r25 = lo;
    // 0x8008BE90: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8008BE94: nop

    // 0x8008BE98: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008BE9C: lwc1        $f9, -0x4E0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4E0);
    // 0x8008BEA0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8008BEA4: nop

    // 0x8008BEA8: div.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f4.d, ctx->f10.d);
    // 0x8008BEAC: lwc1        $f8, -0x4DC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4DC);
    // 0x8008BEB0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8008BEB4: mul.d       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8008BEB8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8008BEBC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8008BEC0: div.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x8008BEC4: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x8008BEC8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8008BECC: c.le.d      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.d <= ctx->f16.d;
    // 0x8008BED0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x8008BED4: bc1f        L_8008BF00
    if (!c1cs) {
        // 0x8008BED8: nop
    
            goto L_8008BF00;
    }
    // 0x8008BED8: nop

    // 0x8008BEDC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008BEE0: mfc1        $a2, $f17
    ctx->r6 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    // 0x8008BEE4: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8008BEE8: jal         0x800B3BFC
    // 0x8008BEEC: addiu       $a0, $a0, -0x5FC
    ctx->r4 = ADD32(ctx->r4, -0X5FC);
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x8008BEEC: addiu       $a0, $a0, -0x5FC
    ctx->r4 = ADD32(ctx->r4, -0X5FC);
    after_0:
    // 0x8008BEF0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008BEF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8008BEF8: nop

    // 0x8008BEFC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
L_8008BF00:
    // 0x8008BF00: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8008BF04: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x8008BF08: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8008BF0C: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x8008BF10: c.lt.d      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.d < ctx->f10.d;
    // 0x8008BF14: nop

    // 0x8008BF18: bc1f        L_8008BF40
    if (!c1cs) {
        // 0x8008BF1C: lui         $at, 0xBFF0
        ctx->r1 = S32(0XBFF0 << 16);
            goto L_8008BF40;
    }
    // 0x8008BF1C: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x8008BF20: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8008BF24: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8008BF28: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008BF2C: mul.d       $f16, $f4, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f18.d);
    // 0x8008BF30: addiu       $a0, $a0, -0x5E4
    ctx->r4 = ADD32(ctx->r4, -0X5E4);
    // 0x8008BF34: cvt.s.d     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f6.fl = CVT_S_D(ctx->f16.d);
    // 0x8008BF38: jal         0x800B3BFC
    // 0x8008BF3C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    osSyncPrintf(rdram, ctx);
        goto after_1;
    // 0x8008BF3C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_1:
L_8008BF40:
    // 0x8008BF40: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8008BF44: nop

L_8008BF48:
    // 0x8008BF48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BF4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008BF50: jr          $ra
    // 0x8008BF54: nop

    return;
    // 0x8008BF54: nop

;}
RECOMP_FUNC void func_8008BF58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BF58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008BF5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008BF60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BF64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8008BF68: jal         0x8008C130
    // 0x8008BF6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8008C130(rdram, ctx);
        goto after_0;
    // 0x8008BF6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008BF70: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8008BF74: nop

    // 0x8008BF78: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x8008BF7C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8008BF80: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8008BF84: addiu       $t8, $t7, 0x4
    ctx->r24 = ADD32(ctx->r15, 0X4);
    // 0x8008BF88: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8008BF8C: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x8008BF90: nop

    // 0x8008BF94: sb          $t9, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r25;
    // 0x8008BF98: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8008BF9C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8008BFA0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8008BFA4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8008BFA8: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x8008BFAC: nop

    // 0x8008BFB0: sb          $t3, 0x5($t4)
    MEM_B(0X5, ctx->r12) = ctx->r11;
    // 0x8008BFB4: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8008BFB8: nop

    // 0x8008BFBC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8008BFC0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8008BFC4: jal         0x8008C104
    // 0x8008BFC8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8008C104(rdram, ctx);
        goto after_1;
    // 0x8008BFC8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x8008BFCC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8008BFD0: nop

    // 0x8008BFD4: sw          $v0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r2;
    // 0x8008BFD8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8008BFDC: nop

    // 0x8008BFE0: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x8008BFE4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8008BFE8: jal         0x8008C104
    // 0x8008BFEC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_8008C104(rdram, ctx);
        goto after_2;
    // 0x8008BFEC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_2:
    // 0x8008BFF0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8008BFF4: nop

    // 0x8008BFF8: sw          $v0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r2;
    // 0x8008BFFC: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8008C000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008C004: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x8008C008: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8008C00C: jr          $ra
    // 0x8008C010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8008C010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008C014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C014: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008C018: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008C01C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C020: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8008C024: jal         0x8008C104
    // 0x8008C028: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8008C104(rdram, ctx);
        goto after_0;
    // 0x8008C028: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008C02C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C030: nop

    // 0x8008C034: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x8008C038: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8008C03C: nop

    // 0x8008C040: addiu       $t8, $t7, 0x4
    ctx->r24 = ADD32(ctx->r15, 0X4);
    // 0x8008C044: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8008C048: jal         0x8008C104
    // 0x8008C04C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8008C104(rdram, ctx);
        goto after_1;
    // 0x8008C04C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
    // 0x8008C050: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C054: nop

    // 0x8008C058: sw          $v0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r2;
    // 0x8008C05C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8008C060: nop

    // 0x8008C064: addiu       $t1, $t0, 0x4
    ctx->r9 = ADD32(ctx->r8, 0X4);
    // 0x8008C068: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8008C06C: jal         0x8008C104
    // 0x8008C070: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_8008C104(rdram, ctx);
        goto after_2;
    // 0x8008C070: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_2:
    // 0x8008C074: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C078: nop

    // 0x8008C07C: sw          $v0, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r2;
    // 0x8008C080: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8008C084: nop

    // 0x8008C088: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x8008C08C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8008C090: jal         0x8008C0E0
    // 0x8008C094: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_8008C0E0(rdram, ctx);
        goto after_3;
    // 0x8008C094: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_3:
    // 0x8008C098: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C09C: nop

    // 0x8008C0A0: sh          $v0, 0xC($t5)
    MEM_H(0XC, ctx->r13) = ctx->r2;
    // 0x8008C0A4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8008C0A8: nop

    // 0x8008C0AC: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x8008C0B0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8008C0B4: jal         0x8008C0E0
    // 0x8008C0B8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8008C0E0(rdram, ctx);
        goto after_4;
    // 0x8008C0B8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_4:
    // 0x8008C0BC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C0C0: nop

    // 0x8008C0C4: sh          $v0, 0xE($t8)
    MEM_H(0XE, ctx->r24) = ctx->r2;
    // 0x8008C0C8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8008C0CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008C0D0: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x8008C0D4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8008C0D8: jr          $ra
    // 0x8008C0DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8008C0DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
