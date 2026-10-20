#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800804F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800804F0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800804F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800804F8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x800804FC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80080500: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80080504: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80080508: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8008050C: jal         0x8007E03C
    // 0x80080510: addiu       $a0, $zero, 0x7530
    ctx->r4 = ADD32(0, 0X7530);
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x80080510: addiu       $a0, $zero, 0x7530
    ctx->r4 = ADD32(0, 0X7530);
    after_0:
    // 0x80080514: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x80080518: jal         0x8007E03C
    // 0x8008051C: ori         $a0, $zero, 0xEA60
    ctx->r4 = 0 | 0XEA60;
    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x8008051C: ori         $a0, $zero, 0xEA60
    ctx->r4 = 0 | 0XEA60;
    after_1:
    // 0x80080520: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80080524: addiu       $a0, $zero, 0x7530
    ctx->r4 = ADD32(0, 0X7530);
    // 0x80080528: jal         0x8007E03C
    // 0x8008052C: sw          $v0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r2;
    func_8007E03C(rdram, ctx);
        goto after_2;
    // 0x8008052C: sw          $v0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r2;
    after_2:
    // 0x80080530: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80080534: addiu       $a0, $zero, 0x300
    ctx->r4 = ADD32(0, 0X300);
    // 0x80080538: jal         0x8007E03C
    // 0x8008053C: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    func_8007E03C(rdram, ctx);
        goto after_3;
    // 0x8008053C: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    after_3:
    // 0x80080540: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80080544: addiu       $a0, $zero, 0x4000
    ctx->r4 = ADD32(0, 0X4000);
    // 0x80080548: jal         0x8007E03C
    // 0x8008054C: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    func_8007E03C(rdram, ctx);
        goto after_4;
    // 0x8008054C: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    after_4:
    // 0x80080550: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x80080554: addiu       $a0, $zero, 0x300
    ctx->r4 = ADD32(0, 0X300);
    // 0x80080558: jal         0x8007E03C
    // 0x8008055C: sw          $v0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r2;
    func_8007E03C(rdram, ctx);
        goto after_5;
    // 0x8008055C: sw          $v0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r2;
    after_5:
    // 0x80080560: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80080564: ori         $a0, $zero, 0xEA68
    ctx->r4 = 0 | 0XEA68;
    // 0x80080568: jal         0x8007E03C
    // 0x8008056C: sw          $v0, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r2;
    func_8007E03C(rdram, ctx);
        goto after_6;
    // 0x8008056C: sw          $v0, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r2;
    after_6:
    // 0x80080570: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80080574: ori         $a0, $zero, 0xEA68
    ctx->r4 = 0 | 0XEA68;
    // 0x80080578: jal         0x8007E03C
    // 0x8008057C: sw          $v0, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r2;
    func_8007E03C(rdram, ctx);
        goto after_7;
    // 0x8008057C: sw          $v0, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r2;
    after_7:
    // 0x80080580: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80080584: jal         0x8004A34C
    // 0x80080588: sw          $v0, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->r2;
    func_8004A34C(rdram, ctx);
        goto after_8;
    // 0x80080588: sw          $v0, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->r2;
    after_8:
    // 0x8008058C: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80080590: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80080594: lw          $a1, 0x0($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X0);
    // 0x80080598: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x8008059C: jal         0x800746C0
    // 0x800805A0: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    func_800746C0(rdram, ctx);
        goto after_9;
    // 0x800805A0: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    after_9:
    // 0x800805A4: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x800805A8: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x800805AC: lw          $a1, 0x4($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X4);
    // 0x800805B0: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x800805B4: jal         0x800746C0
    // 0x800805B8: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    func_800746C0(rdram, ctx);
        goto after_10;
    // 0x800805B8: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    after_10:
    // 0x800805BC: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x800805C0: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x800805C4: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x800805C8: jal         0x800746C0
    // 0x800805CC: addiu       $a2, $zero, 0x45
    ctx->r6 = ADD32(0, 0X45);
    func_800746C0(rdram, ctx);
        goto after_11;
    // 0x800805CC: addiu       $a2, $zero, 0x45
    ctx->r6 = ADD32(0, 0X45);
    after_11:
    // 0x800805D0: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x800805D4: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x800805D8: lw          $a1, 0xC($t5)
    ctx->r5 = MEM_W(ctx->r13, 0XC);
    // 0x800805DC: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x800805E0: jal         0x800746C0
    // 0x800805E4: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    func_800746C0(rdram, ctx);
        goto after_12;
    // 0x800805E4: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    after_12:
    // 0x800805E8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800805EC: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x800805F0: lw          $a1, 0x10($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X10);
    // 0x800805F4: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x800805F8: jal         0x800746C0
    // 0x800805FC: addiu       $a2, $zero, 0x47
    ctx->r6 = ADD32(0, 0X47);
    func_800746C0(rdram, ctx);
        goto after_13;
    // 0x800805FC: addiu       $a2, $zero, 0x47
    ctx->r6 = ADD32(0, 0X47);
    after_13:
    // 0x80080600: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80080604: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80080608: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8008060C: slti        $at, $s1, 0x95
    ctx->r1 = SIGNED(ctx->r17) < 0X95 ? 1 : 0;
    // 0x80080610: lw          $s2, 0x8($t7)
    ctx->r18 = MEM_W(ctx->r15, 0X8);
    // 0x80080614: beq         $at, $zero, L_8008067C
    if (ctx->r1 == 0) {
        // 0x80080618: nop
    
            goto L_8008067C;
    }
    // 0x80080618: nop

L_8008061C:
    // 0x8008061C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80080620: slti        $at, $s0, 0xC7
    ctx->r1 = SIGNED(ctx->r16) < 0XC7 ? 1 : 0;
    // 0x80080624: beq         $at, $zero, L_80080660
    if (ctx->r1 == 0) {
        // 0x80080628: nop
    
            goto L_80080660;
    }
    // 0x80080628: nop

L_8008062C:
    // 0x8008062C: lbu         $t8, 0x0($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X0);
    // 0x80080630: lbu         $t9, 0xC8($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0XC8);
    // 0x80080634: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80080638: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8008063C: sb          $t0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r8;
    // 0x80080640: lbu         $t2, 0x1($s3)
    ctx->r10 = MEM_BU(ctx->r19, 0X1);
    // 0x80080644: lbu         $t1, 0x0($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0X0);
    // 0x80080648: slti        $at, $s0, 0xC7
    ctx->r1 = SIGNED(ctx->r16) < 0XC7 ? 1 : 0;
    // 0x8008064C: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x80080650: sb          $t3, 0x1($s2)
    MEM_B(0X1, ctx->r18) = ctx->r11;
    // 0x80080654: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x80080658: bne         $at, $zero, L_8008062C
    if (ctx->r1 != 0) {
        // 0x8008065C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_8008062C;
    }
    // 0x8008065C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80080660:
    // 0x80080660: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80080664: slti        $at, $s1, 0x95
    ctx->r1 = SIGNED(ctx->r17) < 0X95 ? 1 : 0;
    // 0x80080668: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    // 0x8008066C: sb          $zero, 0x1($s2)
    MEM_B(0X1, ctx->r18) = 0;
    // 0x80080670: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x80080674: bne         $at, $zero, L_8008061C
    if (ctx->r1 != 0) {
        // 0x80080678: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_8008061C;
    }
    // 0x80080678: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_8008067C:
    // 0x8008067C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80080680: jal         0x8007E328
    // 0x80080684: nop

    func_8007E328(rdram, ctx);
        goto after_14;
    // 0x80080684: nop

    after_14:
    // 0x80080688: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x8008068C: addiu       $t4, $zero, 0x100
    ctx->r12 = ADD32(0, 0X100);
    // 0x80080690: sb          $zero, 0x38($sp)
    MEM_B(0X38, ctx->r29) = 0;
    // 0x80080694: sh          $t4, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r12;
    // 0x80080698: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x8008069C: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x800806A0: sb          $zero, 0x30($sp)
    MEM_B(0X30, ctx->r29) = 0;
    // 0x800806A4: sh          $t7, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r15;
    // 0x800806A8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x800806AC: lw          $t8, 0x10($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X10);
    // 0x800806B0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800806B4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x800806B8: sb          $zero, 0x2C($t5)
    MEM_B(0X2C, ctx->r13) = 0;
    // 0x800806BC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x800806C0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x800806C4: sb          $t9, 0x2D($t0)
    MEM_B(0X2D, ctx->r8) = ctx->r25;
    // 0x800806C8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x800806CC: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x800806D0: jal         0x80075480
    // 0x800806D4: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    func_80075480(rdram, ctx);
        goto after_15;
    // 0x800806D4: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    after_15:
    // 0x800806D8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x800806DC: jal         0x80075830
    // 0x800806E0: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_80075830(rdram, ctx);
        goto after_16;
    // 0x800806E0: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_16:
    // 0x800806E4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x800806E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800806EC: jal         0x80075760
    // 0x800806F0: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_80075760(rdram, ctx);
        goto after_17;
    // 0x800806F0: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_17:
    // 0x800806F4: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x800806F8: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x800806FC: lw          $a1, 0xC($t1)
    ctx->r5 = MEM_W(ctx->r9, 0XC);
    // 0x80080700: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80080704: jal         0x800757BC
    // 0x80080708: addiu       $a0, $t1, 0x1C
    ctx->r4 = ADD32(ctx->r9, 0X1C);
    func_800757BC(rdram, ctx);
        goto after_18;
    // 0x80080708: addiu       $a0, $t1, 0x1C
    ctx->r4 = ADD32(ctx->r9, 0X1C);
    after_18:
    // 0x8008070C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80080710: nop

    // 0x80080714: sh          $zero, 0x7C($t2)
    MEM_H(0X7C, ctx->r10) = 0;
    // 0x80080718: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8008071C: nop

    // 0x80080720: sh          $zero, 0x7E($t3)
    MEM_H(0X7E, ctx->r11) = 0;
    // 0x80080724: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80080728: nop

    // 0x8008072C: sh          $zero, 0x80($t4)
    MEM_H(0X80, ctx->r12) = 0;
    // 0x80080730: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80080734: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80080738: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8008073C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80080740: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80080744: jr          $ra
    // 0x80080748: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80080748: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8008074C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008074C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80080750: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80080754: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80080758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008075C: jal         0x800756A8
    // 0x80080760: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    func_800756A8(rdram, ctx);
        goto after_0;
    // 0x80080760: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    after_0:
    // 0x80080764: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80080768: nop

    // 0x8008076C: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    // 0x80080770: jal         0x8007E328
    // 0x80080774: nop

    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x80080774: nop

    after_1:
    // 0x80080778: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8008077C: nop

    // 0x80080780: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    // 0x80080784: jal         0x8007E328
    // 0x80080788: nop

    func_8007E328(rdram, ctx);
        goto after_2;
    // 0x80080788: nop

    after_2:
    // 0x8008078C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80080790: nop

    // 0x80080794: lw          $a0, 0x18($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X18);
    // 0x80080798: jal         0x8007E328
    // 0x8008079C: nop

    func_8007E328(rdram, ctx);
        goto after_3;
    // 0x8008079C: nop

    after_3:
    // 0x800807A0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800807A4: nop

    // 0x800807A8: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x800807AC: jal         0x8007E328
    // 0x800807B0: nop

    func_8007E328(rdram, ctx);
        goto after_4;
    // 0x800807B0: nop

    after_4:
    // 0x800807B4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800807B8: nop

    // 0x800807BC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x800807C0: jal         0x8007E328
    // 0x800807C4: nop

    func_8007E328(rdram, ctx);
        goto after_5;
    // 0x800807C4: nop

    after_5:
    // 0x800807C8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800807CC: nop

    // 0x800807D0: lw          $a0, 0xC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XC);
    // 0x800807D4: jal         0x8007E328
    // 0x800807D8: nop

    func_8007E328(rdram, ctx);
        goto after_6;
    // 0x800807D8: nop

    after_6:
    // 0x800807DC: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x800807E0: nop

    // 0x800807E4: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    // 0x800807E8: jal         0x8007E328
    // 0x800807EC: nop

    func_8007E328(rdram, ctx);
        goto after_7;
    // 0x800807EC: nop

    after_7:
    // 0x800807F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800807F4: jal         0x80075870
    // 0x800807F8: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_80075870(rdram, ctx);
        goto after_8;
    // 0x800807F8: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_8:
    // 0x800807FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80080800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80080804: jr          $ra
    // 0x80080808: nop

    return;
    // 0x80080808: nop

;}
RECOMP_FUNC void func_8008080C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008080C: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x80080810: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x80080814: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80080818: addu        $t0, $t0, $a1
    ctx->r8 = ADD32(ctx->r8, ctx->r5);
    // 0x8008081C: lhu         $t6, 0x7C($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X7C);
    // 0x80080820: lhu         $t9, 0x7E($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X7E);
    // 0x80080824: lhu         $t2, 0x80($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X80);
    // 0x80080828: sll         $t7, $a1, 7
    ctx->r15 = S32(ctx->r5 << 7);
    // 0x8008082C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80080830: sll         $t3, $a1, 4
    ctx->r11 = S32(ctx->r5 << 4);
    // 0x80080834: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x80080838: addu        $t0, $t0, $a1
    ctx->r8 = ADD32(ctx->r8, ctx->r5);
    // 0x8008083C: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x80080840: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80080844: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80080848: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8008084C: sh          $t8, 0x7C($a0)
    MEM_H(0X7C, ctx->r4) = ctx->r24;
    // 0x80080850: sh          $t1, 0x7E($a0)
    MEM_H(0X7E, ctx->r4) = ctx->r9;
    // 0x80080854: jr          $ra
    // 0x80080858: sh          $t4, 0x80($a0)
    MEM_H(0X80, ctx->r4) = ctx->r12;
    return;
    // 0x80080858: sh          $t4, 0x80($a0)
    MEM_H(0X80, ctx->r4) = ctx->r12;
;}
RECOMP_FUNC void func_8008085C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008085C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80080860: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80080864: lhu         $t7, 0x20B0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X20B0);
    // 0x80080868: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8008086C: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x80080870: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80080874: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80080878: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8008087C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80080880: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80080884: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80080888: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8008088C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80080890: lw          $s1, 0x14($t9)
    ctx->r17 = MEM_W(ctx->r25, 0X14);
    // 0x80080894: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x80080898: addiu       $t1, $zero, 0x96
    ctx->r9 = ADD32(0, 0X96);
    // 0x8008089C: sh          $t0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r8;
    // 0x800808A0: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x800808A4: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x800808A8: sh          $t1, -0x2($s1)
    MEM_H(-0X2, ctx->r17) = ctx->r9;
    // 0x800808AC: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x800808B0: sh          $zero, -0x2($s1)
    MEM_H(-0X2, ctx->r17) = 0;
    // 0x800808B4: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x800808B8: addiu       $s0, $t6, 0x30
    ctx->r16 = ADD32(ctx->r14, 0X30);
    // 0x800808BC: sh          $zero, -0x2($s1)
    MEM_H(-0X2, ctx->r17) = 0;
    // 0x800808C0: sw          $s1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r17;
    // 0x800808C4: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x800808C8: nop

    // 0x800808CC: lhu         $a0, 0x7C($t2)
    ctx->r4 = MEM_HU(ctx->r10, 0X7C);
    // 0x800808D0: jal         0x800B8010
    // 0x800808D4: nop

    sins(rdram, ctx);
        goto after_0;
    // 0x800808D4: nop

    after_0:
    // 0x800808D8: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x800808DC: sll         $s2, $v0, 7
    ctx->r18 = S32(ctx->r2 << 7);
    // 0x800808E0: lhu         $a0, 0x7E($t3)
    ctx->r4 = MEM_HU(ctx->r11, 0X7E);
    // 0x800808E4: jal         0x800B8080
    // 0x800808E8: nop

    coss(rdram, ctx);
        goto after_1;
    // 0x800808E8: nop

    after_1:
    // 0x800808EC: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x800808F0: sll         $s3, $v0, 7
    ctx->r19 = S32(ctx->r2 << 7);
    // 0x800808F4: lhu         $a0, 0x80($t4)
    ctx->r4 = MEM_HU(ctx->r12, 0X80);
    // 0x800808F8: jal         0x800B8010
    // 0x800808FC: nop

    sins(rdram, ctx);
        goto after_2;
    // 0x800808FC: nop

    after_2:
    // 0x80080900: sll         $s4, $v0, 7
    ctx->r20 = S32(ctx->r2 << 7);
    // 0x80080904: lui         $at, 0xF0
    ctx->r1 = S32(0XF0 << 16);
    // 0x80080908: addu        $s4, $s4, $at
    ctx->r20 = ADD32(ctx->r20, ctx->r1);
    // 0x8008090C: sra         $t5, $s3, 1
    ctx->r13 = S32(SIGNED(ctx->r19) >> 1);
    // 0x80080910: addu        $s2, $s2, $t5
    ctx->r18 = ADD32(ctx->r18, ctx->r13);
    // 0x80080914: addu        $t8, $s2, $s4
    ctx->r24 = ADD32(ctx->r18, ctx->r20);
    // 0x80080918: addu        $t7, $s2, $s4
    ctx->r15 = ADD32(ctx->r18, ctx->r20);
    // 0x8008091C: addu        $t6, $s3, $s4
    ctx->r14 = ADD32(ctx->r19, ctx->r20);
    // 0x80080920: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x80080924: sw          $s2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r18;
    // 0x80080928: sw          $s3, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r19;
    // 0x8008092C: sw          $t7, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r15;
    // 0x80080930: sw          $s3, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r19;
    // 0x80080934: sw          $t6, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r14;
    // 0x80080938: sw          $s2, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r18;
    // 0x8008093C: sw          $t9, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r25;
    // 0x80080940: bgez        $s4, L_80080950
    if (SIGNED(ctx->r20) >= 0) {
        // 0x80080944: sra         $t0, $s4, 1
        ctx->r8 = S32(SIGNED(ctx->r20) >> 1);
            goto L_80080950;
    }
    // 0x80080944: sra         $t0, $s4, 1
    ctx->r8 = S32(SIGNED(ctx->r20) >> 1);
    // 0x80080948: addiu       $at, $s4, 0x1
    ctx->r1 = ADD32(ctx->r20, 0X1);
    // 0x8008094C: sra         $t0, $at, 1
    ctx->r8 = S32(SIGNED(ctx->r1) >> 1);
L_80080950:
    // 0x80080950: addu        $t1, $t0, $s3
    ctx->r9 = ADD32(ctx->r8, ctx->r19);
    // 0x80080954: sw          $t1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r9;
    // 0x80080958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008095C: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x80080960: addiu       $a2, $zero, 0x96
    ctx->r6 = ADD32(0, 0X96);
    // 0x80080964: jal         0x80075700
    // 0x80080968: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80075700(rdram, ctx);
        goto after_3;
    // 0x80080968: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_3:
    // 0x8008096C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x80080970: nop

    // 0x80080974: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80080978: nop

    // 0x8008097C: sw          $t3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r11;
    // 0x80080980: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x80080984: nop

    // 0x80080988: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x8008098C: nop

    // 0x80080990: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x80080994: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x80080998: nop

    // 0x8008099C: lw          $t9, 0x74($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X74);
    // 0x800809A0: addiu       $a0, $t7, 0x1C
    ctx->r4 = ADD32(ctx->r15, 0X1C);
    // 0x800809A4: jalr        $t9
    // 0x800809A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x800809A8: nop

    after_4:
    // 0x800809AC: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x800809B0: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x800809B4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800809B8: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x800809BC: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x800809C0: addiu       $t8, $t6, 0x8
    ctx->r24 = ADD32(ctx->r14, 0X8);
    // 0x800809C4: sw          $t8, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r24;
    // 0x800809C8: lui         $t0, 0xED00
    ctx->r8 = S32(0XED00 << 16);
    // 0x800809CC: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x800809D0: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x800809D4: lui         $t2, 0x63
    ctx->r10 = S32(0X63 << 16);
    // 0x800809D8: ori         $t2, $t2, 0xC4AC
    ctx->r10 = ctx->r10 | 0XC4AC;
    // 0x800809DC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800809E0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800809E4: jal         0x8005BBFC
    // 0x800809E8: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    func_8005BBFC(rdram, ctx);
        goto after_5;
    // 0x800809E8: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    after_5:
    // 0x800809EC: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x800809F0: lhu         $t5, 0x20B0($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X20B0);
    // 0x800809F4: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x800809F8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800809FC: addu        $t9, $t4, $t7
    ctx->r25 = ADD32(ctx->r12, ctx->r15);
    // 0x80080A00: lw          $a1, 0x14($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X14);
    // 0x80080A04: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80080A08: addiu       $t6, $zero, 0x46
    ctx->r14 = ADD32(0, 0X46);
    // 0x80080A0C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80080A10: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80080A14: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80080A18: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80080A1C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80080A20: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80080A24: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80080A28: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80080A2C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80080A30: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80080A34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80080A38: jal         0x80057460
    // 0x80080A3C: addiu       $a3, $zero, 0x67
    ctx->r7 = ADD32(0, 0X67);
    func_80057460(rdram, ctx);
        goto after_6;
    // 0x80080A3C: addiu       $a3, $zero, 0x67
    ctx->r7 = ADD32(0, 0X67);
    after_6:
    // 0x80080A40: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80080A44: jal         0x8005BE40
    // 0x80080A48: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_7;
    // 0x80080A48: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_7:
    // 0x80080A4C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80080A50: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80080A54: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80080A58: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80080A5C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80080A60: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80080A64: jr          $ra
    // 0x80080A68: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80080A68: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80080A6C: nop

;}
RECOMP_FUNC void func_80080A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080A70: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x80080A74: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80080A78: beq         $t6, $a1, L_80080AB0
    if (ctx->r14 == ctx->r5) {
        // 0x80080A7C: nop
    
            goto L_80080AB0;
    }
    // 0x80080A7C: nop

    // 0x80080A80: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x80080A84: nop

    // 0x80080A88: beq         $t7, $zero, L_80080AB0
    if (ctx->r15 == 0) {
        // 0x80080A8C: nop
    
            goto L_80080AB0;
    }
    // 0x80080A8C: nop

L_80080A90:
    // 0x80080A90: lbu         $t8, 0x1($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X1);
    // 0x80080A94: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80080A98: beq         $t8, $a1, L_80080AB0
    if (ctx->r24 == ctx->r5) {
        // 0x80080A9C: nop
    
            goto L_80080AB0;
    }
    // 0x80080A9C: nop

    // 0x80080AA0: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x80080AA4: nop

    // 0x80080AA8: bne         $t9, $zero, L_80080A90
    if (ctx->r25 != 0) {
        // 0x80080AAC: nop
    
            goto L_80080A90;
    }
    // 0x80080AAC: nop

L_80080AB0:
    // 0x80080AB0: jr          $ra
    // 0x80080AB4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x80080AB4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_80080AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080AB8: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x80080ABC: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80080AC0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80080AC4: beq         $t6, $a1, L_80080AFC
    if (ctx->r14 == ctx->r5) {
        // 0x80080AC8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80080AFC;
    }
    // 0x80080AC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80080ACC: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x80080AD0: nop

    // 0x80080AD4: beq         $t7, $zero, L_80080AFC
    if (ctx->r15 == 0) {
        // 0x80080AD8: nop
    
            goto L_80080AFC;
    }
    // 0x80080AD8: nop

L_80080ADC:
    // 0x80080ADC: lbu         $t8, 0x1($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X1);
    // 0x80080AE0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80080AE4: beq         $t8, $a1, L_80080AFC
    if (ctx->r24 == ctx->r5) {
        // 0x80080AE8: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_80080AFC;
    }
    // 0x80080AE8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80080AEC: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x80080AF0: nop

    // 0x80080AF4: bne         $t9, $zero, L_80080ADC
    if (ctx->r25 != 0) {
        // 0x80080AF8: nop
    
            goto L_80080ADC;
    }
    // 0x80080AF8: nop

L_80080AFC:
    // 0x80080AFC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x80080B00: jr          $ra
    // 0x80080B04: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80080B04: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80080B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080B08: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x80080B0C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80080B10: beq         $t6, $zero, L_80080B3C
    if (ctx->r14 == 0) {
        // 0x80080B14: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80080B3C;
    }
    // 0x80080B14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80080B18:
    // 0x80080B18: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x80080B1C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80080B20: bne         $t7, $at, L_80080B2C
    if (ctx->r15 != ctx->r1) {
        // 0x80080B24: nop
    
            goto L_80080B2C;
    }
    // 0x80080B24: nop

    // 0x80080B28: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_80080B2C:
    // 0x80080B2C: lbu         $t8, 0x1($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X1);
    // 0x80080B30: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80080B34: bne         $t8, $zero, L_80080B18
    if (ctx->r24 != 0) {
        // 0x80080B38: nop
    
            goto L_80080B18;
    }
    // 0x80080B38: nop

L_80080B3C:
    // 0x80080B3C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80080B40: jr          $ra
    // 0x80080B44: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80080B44: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80080B48: nop

    // 0x80080B4C: nop

;}
RECOMP_FUNC void func_80080B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080B50: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80080B54: lw          $t6, 0x32C8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X32C8);
    // 0x80080B58: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80080B5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80080B60: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80080B64: beq         $t6, $at, L_80080B80
    if (ctx->r14 == ctx->r1) {
        // 0x80080B68: sw          $s0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r16;
            goto L_80080B80;
    }
    // 0x80080B68: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80080B6C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80080B70: beq         $t6, $at, L_80080B80
    if (ctx->r14 == ctx->r1) {
        // 0x80080B74: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80080B80;
    }
    // 0x80080B74: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80080B78: bne         $t6, $at, L_80080BDC
    if (ctx->r14 != ctx->r1) {
        // 0x80080B7C: nop
    
            goto L_80080BDC;
    }
    // 0x80080B7C: nop

L_80080B80:
    // 0x80080B80: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80080B84: jal         0x8005BBFC
    // 0x80080B88: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_0;
    // 0x80080B88: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_0:
    // 0x80080B8C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80080B90: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80080B94: lw          $a2, 0x214($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X214);
    // 0x80080B98: lw          $a1, 0x210($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X210);
    // 0x80080B9C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80080BA0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80080BA4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80080BA8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80080BAC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80080BB0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80080BB4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80080BB8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80080BBC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80080BC0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80080BC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80080BC8: jal         0x80057460
    // 0x80080BCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80057460(rdram, ctx);
        goto after_1;
    // 0x80080BCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80080BD0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80080BD4: jal         0x8005BE40
    // 0x80080BD8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_2;
    // 0x80080BD8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_2:
L_80080BDC:
    // 0x80080BDC: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80080BE0: lw          $t1, 0x32C8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X32C8);
    // 0x80080BE4: nop

    // 0x80080BE8: sltiu       $at, $t1, 0x5
    ctx->r1 = ctx->r9 < 0X5 ? 1 : 0;
    // 0x80080BEC: beq         $at, $zero, L_80080E30
    if (ctx->r1 == 0) {
        // 0x80080BF0: nop
    
            goto L_80080E30;
    }
    // 0x80080BF0: nop

    // 0x80080BF4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80080BF8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80080BFC: addu        $at, $at, $t1
    gpr jr_addend_80080C08 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80080C00: lw          $t1, -0x15F0($at)
    ctx->r9 = ADD32(ctx->r1, -0X15F0);
    // 0x80080C04: nop

    // 0x80080C08: jr          $t1
    // 0x80080C0C: nop

    switch (jr_addend_80080C08 >> 2) {
        case 0: goto L_80080C10; break;
        case 1: goto L_80080D10; break;
        case 2: goto L_80080D40; break;
        case 3: goto L_80080D98; break;
        case 4: goto L_80080E18; break;
        default: switch_error(__func__, 0x80080C08, 0x800DEA10);
    }
    // 0x80080C0C: nop

L_80080C10:
    // 0x80080C10: jal         0x8004A34C
    // 0x80080C14: nop

    func_8004A34C(rdram, ctx);
        goto after_3;
    // 0x80080C14: nop

    after_3:
    // 0x80080C18: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80080C1C: lw          $t2, 0x32CC($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X32CC);
    // 0x80080C20: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80080C24: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80080C28: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x80080C2C: lw          $a1, 0x32C0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X32C0);
    // 0x80080C30: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80080C34: jal         0x80074888
    // 0x80080C38: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_80074888(rdram, ctx);
        goto after_4;
    // 0x80080C38: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_4:
    // 0x80080C3C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80080C40: jal         0x8007E03C
    // 0x80080C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_5;
    // 0x80080C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80080C48: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x80080C4C: lw          $t4, 0x32CC($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X32CC);
    // 0x80080C50: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80080C54: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x80080C58: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80080C5C: sw          $v0, 0x210($at)
    MEM_W(0X210, ctx->r1) = ctx->r2;
    // 0x80080C60: addu        $a2, $a2, $t5
    ctx->r6 = ADD32(ctx->r6, ctx->r13);
    // 0x80080C64: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80080C68: lw          $a1, 0x210($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X210);
    // 0x80080C6C: lw          $a2, 0x32C0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X32C0);
    // 0x80080C70: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80080C74: jal         0x800746C0
    // 0x80080C78: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_800746C0(rdram, ctx);
        goto after_6;
    // 0x80080C78: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_6:
    // 0x80080C7C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80080C80: lw          $t6, 0x32CC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X32CC);
    // 0x80080C84: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80080C88: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80080C8C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80080C90: lw          $t8, 0x32C4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X32C4);
    // 0x80080C94: nop

    // 0x80080C98: beq         $t8, $zero, L_80080CF0
    if (ctx->r24 == 0) {
        // 0x80080C9C: nop
    
            goto L_80080CF0;
    }
    // 0x80080C9C: nop

    // 0x80080CA0: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80080CA4: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x80080CA8: jal         0x80074888
    // 0x80080CAC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80074888(rdram, ctx);
        goto after_7;
    // 0x80080CAC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_7:
    // 0x80080CB0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80080CB4: jal         0x8007E03C
    // 0x80080CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_8;
    // 0x80080CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80080CBC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80080CC0: lw          $t9, 0x32CC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X32CC);
    // 0x80080CC4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80080CC8: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x80080CCC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80080CD0: sw          $v0, 0x214($at)
    MEM_W(0X214, ctx->r1) = ctx->r2;
    // 0x80080CD4: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x80080CD8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80080CDC: lw          $a1, 0x214($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X214);
    // 0x80080CE0: lw          $a2, 0x32C4($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X32C4);
    // 0x80080CE4: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80080CE8: jal         0x800746C0
    // 0x80080CEC: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_800746C0(rdram, ctx);
        goto after_9;
    // 0x80080CEC: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_9:
L_80080CF0:
    // 0x80080CF0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80080CF4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80080CF8: jal         0x8007ECC8
    // 0x80080CFC: nop

    func_8007ECC8(rdram, ctx);
        goto after_10;
    // 0x80080CFC: nop

    after_10:
    // 0x80080D00: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80080D04: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80080D08: b           L_80080E30
    // 0x80080D0C: sw          $t1, 0x32C8($at)
    MEM_W(0X32C8, ctx->r1) = ctx->r9;
        goto L_80080E30;
    // 0x80080D0C: sw          $t1, 0x32C8($at)
    MEM_W(0X32C8, ctx->r1) = ctx->r9;
L_80080D10:
    // 0x80080D10: jal         0x8007EA2C
    // 0x80080D14: nop

    func_8007EA2C(rdram, ctx);
        goto after_11;
    // 0x80080D14: nop

    after_11:
    // 0x80080D18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80080D1C: bne         $v0, $at, L_80080E30
    if (ctx->r2 != ctx->r1) {
        // 0x80080D20: nop
    
            goto L_80080E30;
    }
    // 0x80080D20: nop

    // 0x80080D24: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80080D28: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80080D2C: sw          $t2, 0x32C8($at)
    MEM_W(0X32C8, ctx->r1) = ctx->r10;
    // 0x80080D30: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80080D34: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
    // 0x80080D38: b           L_80080E30
    // 0x80080D3C: sw          $t3, 0x218($at)
    MEM_W(0X218, ctx->r1) = ctx->r11;
        goto L_80080E30;
    // 0x80080D3C: sw          $t3, 0x218($at)
    MEM_W(0X218, ctx->r1) = ctx->r11;
L_80080D40:
    // 0x80080D40: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80080D44: lw          $t4, 0x218($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X218);
    // 0x80080D48: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80080D4C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80080D50: beq         $t5, $zero, L_80080D78
    if (ctx->r13 == 0) {
        // 0x80080D54: sw          $t5, 0x218($at)
        MEM_W(0X218, ctx->r1) = ctx->r13;
            goto L_80080D78;
    }
    // 0x80080D54: sw          $t5, 0x218($at)
    MEM_W(0X218, ctx->r1) = ctx->r13;
    // 0x80080D58: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80080D5C: addiu       $t6, $t6, -0x10D0
    ctx->r14 = ADD32(ctx->r14, -0X10D0);
    // 0x80080D60: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x80080D64: nop

    // 0x80080D68: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x80080D6C: beq         $t8, $zero, L_80080E30
    if (ctx->r24 == 0) {
        // 0x80080D70: slti        $at, $t5, 0xF0
        ctx->r1 = SIGNED(ctx->r13) < 0XF0 ? 1 : 0;
            goto L_80080E30;
    }
    // 0x80080D70: slti        $at, $t5, 0xF0
    ctx->r1 = SIGNED(ctx->r13) < 0XF0 ? 1 : 0;
    // 0x80080D74: beq         $at, $zero, L_80080E30
    if (ctx->r1 == 0) {
        // 0x80080D78: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80080E30;
    }
L_80080D78:
    // 0x80080D78: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80080D7C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80080D80: jal         0x8007E9F8
    // 0x80080D84: nop

    func_8007E9F8(rdram, ctx);
        goto after_12;
    // 0x80080D84: nop

    after_12:
    // 0x80080D88: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80080D8C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80080D90: b           L_80080E30
    // 0x80080D94: sw          $t9, 0x32C8($at)
    MEM_W(0X32C8, ctx->r1) = ctx->r25;
        goto L_80080E30;
    // 0x80080D94: sw          $t9, 0x32C8($at)
    MEM_W(0X32C8, ctx->r1) = ctx->r25;
L_80080D98:
    // 0x80080D98: jal         0x8007E750
    // 0x80080D9C: nop

    func_8007E750(rdram, ctx);
        goto after_13;
    // 0x80080D9C: nop

    after_13:
    // 0x80080DA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80080DA4: bne         $v0, $at, L_80080E30
    if (ctx->r2 != ctx->r1) {
        // 0x80080DA8: nop
    
            goto L_80080E30;
    }
    // 0x80080DA8: nop

    // 0x80080DAC: jal         0x8004A34C
    // 0x80080DB0: nop

    func_8004A34C(rdram, ctx);
        goto after_14;
    // 0x80080DB0: nop

    after_14:
    // 0x80080DB4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80080DB8: lw          $a0, 0x214($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X214);
    // 0x80080DBC: jal         0x8007E328
    // 0x80080DC0: nop

    func_8007E328(rdram, ctx);
        goto after_15;
    // 0x80080DC0: nop

    after_15:
    // 0x80080DC4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80080DC8: lw          $a0, 0x210($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X210);
    // 0x80080DCC: jal         0x8007E328
    // 0x80080DD0: nop

    func_8007E328(rdram, ctx);
        goto after_16;
    // 0x80080DD0: nop

    after_16:
    // 0x80080DD4: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80080DD8: lw          $t0, 0x32CC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X32CC);
    // 0x80080DDC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80080DE0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80080DE4: sw          $t1, 0x32CC($at)
    MEM_W(0X32CC, ctx->r1) = ctx->r9;
    // 0x80080DE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80080DEC: bne         $t1, $at, L_80080E0C
    if (ctx->r9 != ctx->r1) {
        // 0x80080DF0: nop
    
            goto L_80080E0C;
    }
    // 0x80080DF0: nop

    // 0x80080DF4: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80080DF8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80080DFC: jal         0x8007E750
    // 0x80080E00: sw          $t2, 0x32C8($at)
    MEM_W(0X32C8, ctx->r1) = ctx->r10;
    func_8007E750(rdram, ctx);
        goto after_17;
    // 0x80080E00: sw          $t2, 0x32C8($at)
    MEM_W(0X32C8, ctx->r1) = ctx->r10;
    after_17:
    // 0x80080E04: b           L_80080E30
    // 0x80080E08: nop

        goto L_80080E30;
    // 0x80080E08: nop

L_80080E0C:
    // 0x80080E0C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80080E10: b           L_80080E30
    // 0x80080E14: sw          $zero, 0x32C8($at)
    MEM_W(0X32C8, ctx->r1) = 0;
        goto L_80080E30;
    // 0x80080E14: sw          $zero, 0x32C8($at)
    MEM_W(0X32C8, ctx->r1) = 0;
L_80080E18:
    // 0x80080E18: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80080E1C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80080E20: sb          $t3, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r11;
    // 0x80080E24: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80080E28: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80080E2C: sb          $t4, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r12;
L_80080E30:
    // 0x80080E30: jal         0x800722E0
    // 0x80080E34: nop

    func_800722E0(rdram, ctx);
        goto after_18;
    // 0x80080E34: nop

    after_18:
    // 0x80080E38: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80080E3C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80080E40: jr          $ra
    // 0x80080E44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80080E44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80080E48: nop

    // 0x80080E4C: nop

;}
RECOMP_FUNC void func_80080E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080E50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80080E54: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80080E58: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80080E5C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80080E60: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80080E64: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80080E68: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80080E6C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80080E70: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80080E74: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80080E78: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80080E7C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80080E80: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80080E84: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80080E88: addiu       $a0, $zero, 0x1040
    ctx->r4 = ADD32(0, 0X1040);
    // 0x80080E8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80080E90: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80080E94: jal         0x80081D1C
    // 0x80080E98: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80081D1C(rdram, ctx);
        goto after_0;
    // 0x80080E98: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x80080E9C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80080EA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80080EA4: jr          $ra
    // 0x80080EA8: nop

    return;
    // 0x80080EA8: nop

    // 0x80080EAC: jr          $ra
    // 0x80080EB0: nop

    return;
    // 0x80080EB0: nop

;}
RECOMP_FUNC void func_80080EB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080EB4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80080EB8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80080EBC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80080EC0: jr          $ra
    // 0x80080EC4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    return;
    // 0x80080EC4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
;}
RECOMP_FUNC void func_80080EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080EC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80080ECC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80080ED0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80080ED4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80080ED8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80080EDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80080EE0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80080EE4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80080EE8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80080EEC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80080EF0: jal         0x800827EC
    // 0x80080EF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800827EC(rdram, ctx);
        goto after_0;
    // 0x80080EF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80080EF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80080EFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80080F00: jr          $ra
    // 0x80080F04: nop

    return;
    // 0x80080F04: nop

;}
RECOMP_FUNC void func_80080F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080F08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80080F0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80080F10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80080F14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80080F18: jal         0x8007E03C
    // 0x80080F1C: nop

    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x80080F1C: nop

    after_0:
    // 0x80080F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80080F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80080F28: jr          $ra
    // 0x80080F2C: nop

    return;
    // 0x80080F2C: nop

;}
RECOMP_FUNC void func_80080F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080F30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80080F34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80080F38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80080F3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80080F40: jal         0x8007E328
    // 0x80080F44: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x80080F44: nop

    after_0:
    // 0x80080F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80080F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80080F50: jr          $ra
    // 0x80080F54: nop

    return;
    // 0x80080F54: nop

    // 0x80080F58: nop

    // 0x80080F5C: nop

;}
RECOMP_FUNC void func_80080F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080F60: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80080F64: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x80080F68: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x80080F6C: jr          $ra
    // 0x80080F70: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80080F70: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80080F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080F74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80080F78: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80080F7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80080F80: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80080F84: jal         0x80080F60
    // 0x80080F88: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_80080F60(rdram, ctx);
        goto after_0;
    // 0x80080F88: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80080F8C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80080F90: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80080F94: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80080F98: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80080F9C: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x80080FA0: divu        $zero, $t9, $t6
    lo = S32(U32(ctx->r25) / U32(ctx->r14)); hi = S32(U32(ctx->r25) % U32(ctx->r14));
    // 0x80080FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80080FA8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80080FAC: bne         $t6, $zero, L_80080FB8
    if (ctx->r14 != 0) {
        // 0x80080FB0: nop
    
            goto L_80080FB8;
    }
    // 0x80080FB0: nop

    // 0x80080FB4: break       7
    do_break(2148011956);
L_80080FB8:
    // 0x80080FB8: mflo        $t0
    ctx->r8 = lo;
    // 0x80080FBC: nop

    // 0x80080FC0: nop

    // 0x80080FC4: multu       $t0, $t6
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80080FC8: mflo        $t1
    ctx->r9 = lo;
    // 0x80080FCC: subu        $t2, $t1, $t8
    ctx->r10 = SUB32(ctx->r9, ctx->r24);
    // 0x80080FD0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80080FD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80080FD8: jr          $ra
    // 0x80080FDC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    return;
    // 0x80080FDC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
;}
RECOMP_FUNC void func_80080FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080FE0: beq         $a0, $zero, L_80080FF0
    if (ctx->r4 == 0) {
        // 0x80080FE4: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_80080FF0;
    }
    // 0x80080FE4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80080FE8: b           L_80080FF4
    // 0x80080FEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80080FF4;
    // 0x80080FEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80080FF0:
    // 0x80080FF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80080FF4:
    // 0x80080FF4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80080FF8: jr          $ra
    // 0x80080FFC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80080FFC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80081000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081000: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x80081004: jr          $ra
    // 0x80081008: addiu       $v0, $v0, -0x15D0
    ctx->r2 = ADD32(ctx->r2, -0X15D0);
    return;
    // 0x80081008: addiu       $v0, $v0, -0x15D0
    ctx->r2 = ADD32(ctx->r2, -0X15D0);
;}
RECOMP_FUNC void func_8008100C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008100C: jr          $ra
    // 0x80081010: addiu       $v0, $zero, 0x1040
    ctx->r2 = ADD32(0, 0X1040);
    return;
    // 0x80081010: addiu       $v0, $zero, 0x1040
    ctx->r2 = ADD32(0, 0X1040);
;}
RECOMP_FUNC void func_80081014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081014: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x80081018: jr          $ra
    // 0x8008101C: addiu       $v0, $v0, -0x15CC
    ctx->r2 = ADD32(ctx->r2, -0X15CC);
    return;
    // 0x8008101C: addiu       $v0, $v0, -0x15CC
    ctx->r2 = ADD32(ctx->r2, -0X15CC);
;}
RECOMP_FUNC void func_80081020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081020: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x80081024: jr          $ra
    // 0x80081028: addiu       $v0, $v0, -0x15C4
    ctx->r2 = ADD32(ctx->r2, -0X15C4);
    return;
    // 0x80081028: addiu       $v0, $v0, -0x15C4
    ctx->r2 = ADD32(ctx->r2, -0X15C4);
;}
RECOMP_FUNC void func_8008102C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008102C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x80081030: jr          $ra
    // 0x80081034: addiu       $v0, $v0, -0x15B8
    ctx->r2 = ADD32(ctx->r2, -0X15B8);
    return;
    // 0x80081034: addiu       $v0, $v0, -0x15B8
    ctx->r2 = ADD32(ctx->r2, -0X15B8);
;}
RECOMP_FUNC void func_80081038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081038: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x8008103C: jr          $ra
    // 0x80081040: addiu       $v0, $v0, -0x15B0
    ctx->r2 = ADD32(ctx->r2, -0X15B0);
    return;
    // 0x80081040: addiu       $v0, $v0, -0x15B0
    ctx->r2 = ADD32(ctx->r2, -0X15B0);
;}
RECOMP_FUNC void func_80081044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081044: srl         $t7, $a0, 16
    ctx->r15 = S32(U32(ctx->r4) >> 16);
    // 0x80081048: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8008104C: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80081050: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80081054: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x80081058: bne         $a1, $zero, L_80081068
    if (ctx->r5 != 0) {
        // 0x8008105C: sw          $t8, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r24;
            goto L_80081068;
    }
    // 0x8008105C: sw          $t8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r24;
    // 0x80081060: b           L_800812BC
    // 0x80081064: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800812BC;
    // 0x80081064: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80081068:
    // 0x80081068: beq         $a2, $zero, L_800812AC
    if (ctx->r6 == 0) {
        // 0x8008106C: sltiu       $at, $a2, 0x15B0
        ctx->r1 = ctx->r6 < 0X15B0 ? 1 : 0;
            goto L_800812AC;
    }
L_8008106C:
    // 0x8008106C: sltiu       $at, $a2, 0x15B0
    ctx->r1 = ctx->r6 < 0X15B0 ? 1 : 0;
    // 0x80081070: beq         $at, $zero, L_80081080
    if (ctx->r1 == 0) {
        // 0x80081074: nop
    
            goto L_80081080;
    }
    // 0x80081074: nop

    // 0x80081078: b           L_80081088
    // 0x8008107C: sw          $a2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r6;
        goto L_80081088;
    // 0x8008107C: sw          $a2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r6;
L_80081080:
    // 0x80081080: addiu       $t9, $zero, 0x15B0
    ctx->r25 = ADD32(0, 0X15B0);
    // 0x80081084: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
L_80081088:
    // 0x80081088: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8008108C: nop

    // 0x80081090: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x80081094: bne         $at, $zero, L_8008123C
    if (ctx->r1 != 0) {
        // 0x80081098: subu        $a2, $a2, $t0
        ctx->r6 = SUB32(ctx->r6, ctx->r8);
            goto L_8008123C;
    }
    // 0x80081098: subu        $a2, $a2, $t0
    ctx->r6 = SUB32(ctx->r6, ctx->r8);
L_8008109C:
    // 0x8008109C: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x800810A0: lbu         $t2, 0x0($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X0);
    // 0x800810A4: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x800810A8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800810AC: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x800810B0: sw          $t5, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r13;
    // 0x800810B4: sw          $t3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r11;
    // 0x800810B8: lbu         $t6, 0x1($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X1);
    // 0x800810BC: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x800810C0: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x800810C4: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x800810C8: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x800810CC: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    // 0x800810D0: lbu         $t0, 0x2($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X2);
    // 0x800810D4: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x800810D8: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x800810DC: addu        $t4, $t2, $t1
    ctx->r12 = ADD32(ctx->r10, ctx->r9);
    // 0x800810E0: sw          $t4, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r12;
    // 0x800810E4: sw          $t1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r9;
    // 0x800810E8: lbu         $t5, 0x3($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X3);
    // 0x800810EC: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x800810F0: addu        $t3, $t1, $t5
    ctx->r11 = ADD32(ctx->r9, ctx->r13);
    // 0x800810F4: addu        $t8, $t6, $t3
    ctx->r24 = ADD32(ctx->r14, ctx->r11);
    // 0x800810F8: sw          $t8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r24;
    // 0x800810FC: sw          $t3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r11;
    // 0x80081100: lbu         $t9, 0x4($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X4);
    // 0x80081104: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x80081108: addu        $t7, $t3, $t9
    ctx->r15 = ADD32(ctx->r11, ctx->r25);
    // 0x8008110C: addu        $t2, $t0, $t7
    ctx->r10 = ADD32(ctx->r8, ctx->r15);
    // 0x80081110: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
    // 0x80081114: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    // 0x80081118: lbu         $t4, 0x5($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X5);
    // 0x8008111C: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x80081120: addu        $t1, $t7, $t4
    ctx->r9 = ADD32(ctx->r15, ctx->r12);
    // 0x80081124: addu        $t6, $t5, $t1
    ctx->r14 = ADD32(ctx->r13, ctx->r9);
    // 0x80081128: sw          $t6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r14;
    // 0x8008112C: sw          $t1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r9;
    // 0x80081130: lbu         $t8, 0x6($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X6);
    // 0x80081134: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x80081138: addu        $t3, $t1, $t8
    ctx->r11 = ADD32(ctx->r9, ctx->r24);
    // 0x8008113C: addu        $t0, $t9, $t3
    ctx->r8 = ADD32(ctx->r25, ctx->r11);
    // 0x80081140: sw          $t0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r8;
    // 0x80081144: sw          $t3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r11;
    // 0x80081148: lbu         $t2, 0x7($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X7);
    // 0x8008114C: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x80081150: addu        $t7, $t3, $t2
    ctx->r15 = ADD32(ctx->r11, ctx->r10);
    // 0x80081154: addu        $t5, $t4, $t7
    ctx->r13 = ADD32(ctx->r12, ctx->r15);
    // 0x80081158: sw          $t5, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r13;
    // 0x8008115C: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    // 0x80081160: lbu         $t6, 0x8($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X8);
    // 0x80081164: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x80081168: addu        $t1, $t7, $t6
    ctx->r9 = ADD32(ctx->r15, ctx->r14);
    // 0x8008116C: addu        $t9, $t8, $t1
    ctx->r25 = ADD32(ctx->r24, ctx->r9);
    // 0x80081170: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x80081174: sw          $t1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r9;
    // 0x80081178: lbu         $t0, 0x9($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X9);
    // 0x8008117C: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x80081180: addu        $t3, $t1, $t0
    ctx->r11 = ADD32(ctx->r9, ctx->r8);
    // 0x80081184: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80081188: sw          $t4, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r12;
    // 0x8008118C: sw          $t3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r11;
    // 0x80081190: lbu         $t5, 0xA($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0XA);
    // 0x80081194: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x80081198: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x8008119C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800811A0: sw          $t8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r24;
    // 0x800811A4: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    // 0x800811A8: lbu         $t9, 0xB($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0XB);
    // 0x800811AC: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x800811B0: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x800811B4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800811B8: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
    // 0x800811BC: sw          $t1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r9;
    // 0x800811C0: lbu         $t4, 0xC($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0XC);
    // 0x800811C4: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x800811C8: addu        $t3, $t1, $t4
    ctx->r11 = ADD32(ctx->r9, ctx->r12);
    // 0x800811CC: addu        $t6, $t5, $t3
    ctx->r14 = ADD32(ctx->r13, ctx->r11);
    // 0x800811D0: sw          $t6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r14;
    // 0x800811D4: sw          $t3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r11;
    // 0x800811D8: lbu         $t8, 0xD($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0XD);
    // 0x800811DC: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x800811E0: addu        $t7, $t3, $t8
    ctx->r15 = ADD32(ctx->r11, ctx->r24);
    // 0x800811E4: addu        $t0, $t9, $t7
    ctx->r8 = ADD32(ctx->r25, ctx->r15);
    // 0x800811E8: sw          $t0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r8;
    // 0x800811EC: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    // 0x800811F0: lbu         $t2, 0xE($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0XE);
    // 0x800811F4: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x800811F8: addu        $t1, $t7, $t2
    ctx->r9 = ADD32(ctx->r15, ctx->r10);
    // 0x800811FC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80081200: addu        $t5, $t4, $t1
    ctx->r13 = ADD32(ctx->r12, ctx->r9);
    // 0x80081204: sw          $t5, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r13;
    // 0x80081208: sw          $t1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r9;
    // 0x8008120C: lbu         $t6, 0xF($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0XF);
    // 0x80081210: addiu       $t7, $t0, -0x10
    ctx->r15 = ADD32(ctx->r8, -0X10);
    // 0x80081214: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x80081218: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x8008121C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80081220: addu        $t3, $t1, $t6
    ctx->r11 = ADD32(ctx->r9, ctx->r14);
    // 0x80081224: addu        $t9, $t8, $t3
    ctx->r25 = ADD32(ctx->r24, ctx->r11);
    // 0x80081228: slti        $at, $t2, 0x10
    ctx->r1 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x8008122C: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x80081230: sw          $t3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r11;
    // 0x80081234: beq         $at, $zero, L_8008109C
    if (ctx->r1 == 0) {
        // 0x80081238: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_8008109C;
    }
    // 0x80081238: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
L_8008123C:
    // 0x8008123C: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80081240: nop

    // 0x80081244: beq         $t4, $zero, L_8008127C
    if (ctx->r12 == 0) {
        // 0x80081248: nop
    
            goto L_8008127C;
    }
    // 0x80081248: nop

L_8008124C:
    // 0x8008124C: lw          $t5, 0xC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC);
    // 0x80081250: lbu         $t1, 0x0($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X0);
    // 0x80081254: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x80081258: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8008125C: addu        $t6, $t5, $t1
    ctx->r14 = ADD32(ctx->r13, ctx->r9);
    // 0x80081260: addu        $t3, $t8, $t6
    ctx->r11 = ADD32(ctx->r24, ctx->r14);
    // 0x80081264: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80081268: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x8008126C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80081270: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x80081274: bgtz        $t0, L_8008124C
    if (SIGNED(ctx->r8) > 0) {
        // 0x80081278: sw          $t3, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r11;
            goto L_8008124C;
    }
    // 0x80081278: sw          $t3, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r11;
L_8008127C:
    // 0x8008127C: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x80081280: ori         $at, $zero, 0xFFF1
    ctx->r1 = 0 | 0XFFF1;
    // 0x80081284: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x80081288: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x8008128C: mfhi        $t2
    ctx->r10 = hi;
    // 0x80081290: sw          $t2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r10;
    // 0x80081294: nop

    // 0x80081298: divu        $zero, $t4, $at
    lo = S32(U32(ctx->r12) / U32(ctx->r1)); hi = S32(U32(ctx->r12) % U32(ctx->r1));
    // 0x8008129C: mfhi        $t5
    ctx->r13 = hi;
    // 0x800812A0: sw          $t5, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r13;
    // 0x800812A4: bne         $a2, $zero, L_8008106C
    if (ctx->r6 != 0) {
        // 0x800812A8: nop
    
            goto L_8008106C;
    }
    // 0x800812A8: nop

L_800812AC:
    // 0x800812AC: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x800812B0: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x800812B4: sll         $t8, $t1, 16
    ctx->r24 = S32(ctx->r9 << 16);
    // 0x800812B8: or          $v0, $t8, $t6
    ctx->r2 = ctx->r24 | ctx->r14;
L_800812BC:
    // 0x800812BC: jr          $ra
    // 0x800812C0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x800812C0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800812C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800812C4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800812C8: sw          $a0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r4;
    // 0x800812CC: beq         $a2, $zero, L_8008131C
    if (ctx->r6 == 0) {
        // 0x800812D0: sw          $a1, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r5;
            goto L_8008131C;
    }
    // 0x800812D0: sw          $a1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r5;
L_800812D4:
    // 0x800812D4: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x800812D8: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x800812DC: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x800812E0: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x800812E4: nop

    // 0x800812E8: subu        $t0, $t7, $t9
    ctx->r8 = SUB32(ctx->r15, ctx->r25);
    // 0x800812EC: beq         $t0, $zero, L_800812FC
    if (ctx->r8 == 0) {
        // 0x800812F0: sw          $t0, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r8;
            goto L_800812FC;
    }
    // 0x800812F0: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x800812F4: b           L_80081320
    // 0x800812F8: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_80081320;
    // 0x800812F8: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_800812FC:
    // 0x800812FC: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x80081300: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x80081304: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80081308: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8008130C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80081310: sw          $t2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r10;
    // 0x80081314: bne         $a2, $zero, L_800812D4
    if (ctx->r6 != 0) {
        // 0x80081318: sw          $t4, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r12;
            goto L_800812D4;
    }
    // 0x80081318: sw          $t4, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r12;
L_8008131C:
    // 0x8008131C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80081320:
    // 0x80081320: jr          $ra
    // 0x80081324: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80081324: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80081328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081328: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008132C: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x80081330: beq         $a2, $zero, L_8008134C
    if (ctx->r6 == 0) {
        // 0x80081334: sw          $a1, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r5;
            goto L_8008134C;
    }
    // 0x80081334: sw          $a1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r5;
    // 0x80081338: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8008133C: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x80081340: nop

    // 0x80081344: bne         $t6, $t7, L_80081354
    if (ctx->r14 != ctx->r15) {
        // 0x80081348: nop
    
            goto L_80081354;
    }
    // 0x80081348: nop

L_8008134C:
    // 0x8008134C: b           L_80081388
    // 0x80081350: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_80081388;
    // 0x80081350: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80081354:
    // 0x80081354: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x80081358: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8008135C: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x80081360: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80081364: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
    // 0x80081368: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x8008136C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80081370: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80081374: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80081378: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x8008137C: bne         $a2, $zero, L_80081354
    if (ctx->r6 != 0) {
        // 0x80081380: sw          $t4, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r12;
            goto L_80081354;
    }
    // 0x80081380: sw          $t4, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r12;
    // 0x80081384: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80081388:
    // 0x80081388: jr          $ra
    // 0x8008138C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008138C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80081390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081390: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80081394: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x80081398: beq         $a2, $zero, L_800813B4
    if (ctx->r6 == 0) {
        // 0x8008139C: sw          $a1, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r5;
            goto L_800813B4;
    }
    // 0x8008139C: sw          $a1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r5;
    // 0x800813A0: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800813A4: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x800813A8: nop

    // 0x800813AC: bne         $t6, $t7, L_800813BC
    if (ctx->r14 != ctx->r15) {
        // 0x800813B0: nop
    
            goto L_800813BC;
    }
    // 0x800813B0: nop

L_800813B4:
    // 0x800813B4: b           L_80081450
    // 0x800813B8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_80081450;
    // 0x800813B8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_800813BC:
    // 0x800813BC: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800813C0: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x800813C4: nop

    // 0x800813C8: sltu        $at, $t8, $t9
    ctx->r1 = ctx->r24 < ctx->r25 ? 1 : 0;
    // 0x800813CC: beq         $at, $zero, L_8008140C
    if (ctx->r1 == 0) {
        // 0x800813D0: nop
    
            goto L_8008140C;
    }
    // 0x800813D0: nop

L_800813D4:
    // 0x800813D4: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x800813D8: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800813DC: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x800813E0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x800813E4: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
    // 0x800813E8: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x800813EC: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800813F0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800813F4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800813F8: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x800813FC: bne         $a2, $zero, L_800813D4
    if (ctx->r6 != 0) {
        // 0x80081400: sw          $t6, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r14;
            goto L_800813D4;
    }
    // 0x80081400: sw          $t6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r14;
    // 0x80081404: b           L_8008144C
    // 0x80081408: nop

        goto L_8008144C;
    // 0x80081408: nop

L_8008140C:
    // 0x8008140C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80081410: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x80081414: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x80081418: addu        $t0, $t9, $a2
    ctx->r8 = ADD32(ctx->r25, ctx->r6);
    // 0x8008141C: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80081420: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
L_80081424:
    // 0x80081424: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80081428: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x8008142C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80081430: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80081434: sw          $t4, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r12;
    // 0x80081438: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x8008143C: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x80081440: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80081444: bne         $a2, $zero, L_80081424
    if (ctx->r6 != 0) {
        // 0x80081448: sb          $t5, 0x0($t2)
        MEM_B(0X0, ctx->r10) = ctx->r13;
            goto L_80081424;
    }
    // 0x80081448: sb          $t5, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r13;
L_8008144C:
    // 0x8008144C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80081450:
    // 0x80081450: jr          $ra
    // 0x80081454: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80081454: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80081458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081458: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008145C: beq         $a2, $zero, L_80081484
    if (ctx->r6 == 0) {
        // 0x80081460: sw          $a0, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r4;
            goto L_80081484;
    }
    // 0x80081460: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
L_80081464:
    // 0x80081464: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80081468: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8008146C: sb          $a1, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r5;
    // 0x80081470: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80081474: nop

    // 0x80081478: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8008147C: bne         $a2, $zero, L_80081464
    if (ctx->r6 != 0) {
        // 0x80081480: sw          $t8, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r24;
            goto L_80081464;
    }
    // 0x80081480: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
L_80081484:
    // 0x80081484: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80081488: jr          $ra
    // 0x8008148C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008148C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80081490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081490: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80081494: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80081498: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8008149C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800814A0: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x800814A4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800814A8: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x800814AC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800814B0: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800814B4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800814B8: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x800814BC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800814C0: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x800814C4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800814C8: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x800814CC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800814D0: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
    // 0x800814D4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800814D8: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x800814DC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800814E0: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x800814E4: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x800814E8: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x800814EC: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x800814F0: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x800814F4: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x800814F8: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x800814FC: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
    // 0x80081500: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x80081504: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x80081508: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8008150C: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x80081510: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80081514: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80081518: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x8008151C: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x80081520: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    // 0x80081524: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x80081528: jr          $ra
    // 0x8008152C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008152C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80081530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081530: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80081534: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80081538: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8008153C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80081540: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x80081544: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80081548: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8008154C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80081550: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80081554: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80081558: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x8008155C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80081560: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x80081564: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80081568: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x8008156C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80081570: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
    // 0x80081574: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80081578: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x8008157C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80081580: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x80081584: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x80081588: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8008158C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80081590: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x80081594: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x80081598: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    // 0x8008159C: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x800815A0: jr          $ra
    // 0x800815A4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800815A4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800815A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800815A8: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x800815AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800815B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800815B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800815B8: sw          $t6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r14;
    // 0x800815BC: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
L_800815C0:
    // 0x800815C0: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x800815C4: nop

    // 0x800815C8: addu        $t8, $sp, $t7
    ctx->r24 = ADD32(ctx->r29, ctx->r15);
    // 0x800815CC: sb          $t7, 0x44($t8)
    MEM_B(0X44, ctx->r24) = ctx->r15;
    // 0x800815D0: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x800815D4: nop

    // 0x800815D8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800815DC: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x800815E0: bne         $at, $zero, L_800815C0
    if (ctx->r1 != 0) {
        // 0x800815E4: sw          $t0, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->r8;
            goto L_800815C0;
    }
    // 0x800815E4: sw          $t0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r8;
    // 0x800815E8: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x800815EC: jal         0x80080F74
    // 0x800815F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80080F74(rdram, ctx);
        goto after_0;
    // 0x800815F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x800815F4: addiu       $t1, $sp, 0x5C
    ctx->r9 = ADD32(ctx->r29, 0X5C);
    // 0x800815F8: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x800815FC: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x80081600: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x80081604: nop

    // 0x80081608: subu        $t4, $t3, $t1
    ctx->r12 = SUB32(ctx->r11, ctx->r9);
    // 0x8008160C: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x80081610: bltz        $t4, L_80081620
    if (SIGNED(ctx->r12) < 0) {
        // 0x80081614: sw          $t3, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r11;
            goto L_80081620;
    }
    // 0x80081614: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
    // 0x80081618: b           L_80081624
    // 0x8008161C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80081624;
    // 0x8008161C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80081620:
    // 0x80081620: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80081624:
    // 0x80081624: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x80081628: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8008162C: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x80081630: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x80081634: beq         $at, $zero, L_80081644
    if (ctx->r1 == 0) {
        // 0x80081638: sw          $t6, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r14;
            goto L_80081644;
    }
    // 0x80081638: sw          $t6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r14;
    // 0x8008163C: b           L_80081648
    // 0x80081640: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80081648;
    // 0x80081640: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80081644:
    // 0x80081644: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80081648:
    // 0x80081648: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x8008164C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80081650: and         $t9, $t8, $s0
    ctx->r25 = ctx->r24 & ctx->r16;
    // 0x80081654: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
    // 0x80081658: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8008165C: jal         0x80081458
    // 0x80081660: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80081458(rdram, ctx);
        goto after_1;
    // 0x80081660: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x80081664: lhu         $t0, 0x3C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3C);
    // 0x80081668: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8008166C: bne         $t0, $at, L_8008167C
    if (ctx->r8 != ctx->r1) {
        // 0x80081670: nop
    
            goto L_8008167C;
    }
    // 0x80081670: nop

    // 0x80081674: b           L_80081680
    // 0x80081678: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80081680;
    // 0x80081678: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8008167C:
    // 0x8008167C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80081680:
    // 0x80081680: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
    // 0x80081684: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80081688: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008168C: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x80081690: bne         $t1, $at, L_800816A0
    if (ctx->r9 != ctx->r1) {
        // 0x80081694: sw          $t3, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r11;
            goto L_800816A0;
    }
    // 0x80081694: sw          $t3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r11;
    // 0x80081698: b           L_800816A4
    // 0x8008169C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_800816A4;
    // 0x8008169C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_800816A0:
    // 0x800816A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800816A4:
    // 0x800816A4: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x800816A8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800816AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800816B0: and         $t5, $t4, $s0
    ctx->r13 = ctx->r12 & ctx->r16;
    // 0x800816B4: bne         $t6, $at, L_800816C4
    if (ctx->r14 != ctx->r1) {
        // 0x800816B8: sw          $t5, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r13;
            goto L_800816C4;
    }
    // 0x800816B8: sw          $t5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r13;
    // 0x800816BC: b           L_800816C8
    // 0x800816C0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_800816C8;
    // 0x800816C0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_800816C4:
    // 0x800816C4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800816C8:
    // 0x800816C8: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x800816CC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800816D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800816D4: and         $t8, $t7, $s0
    ctx->r24 = ctx->r15 & ctx->r16;
    // 0x800816D8: bne         $t9, $at, L_800816E8
    if (ctx->r25 != ctx->r1) {
        // 0x800816DC: sw          $t8, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r24;
            goto L_800816E8;
    }
    // 0x800816DC: sw          $t8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r24;
    // 0x800816E0: b           L_800816EC
    // 0x800816E4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_800816EC;
    // 0x800816E4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_800816E8:
    // 0x800816E8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800816EC:
    // 0x800816EC: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x800816F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800816F4: and         $t2, $t0, $s0
    ctx->r10 = ctx->r8 & ctx->r16;
    // 0x800816F8: bne         $t2, $at, L_80081754
    if (ctx->r10 != ctx->r1) {
        // 0x800816FC: sw          $t2, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r10;
            goto L_80081754;
    }
    // 0x800816FC: sw          $t2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r10;
    // 0x80081700: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
L_80081704:
    // 0x80081704: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x80081708: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x8008170C: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x80081710: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x80081714: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80081718: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x8008171C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80081720: bne         $t5, $t8, L_80081730
    if (ctx->r13 != ctx->r24) {
        // 0x80081724: nop
    
            goto L_80081730;
    }
    // 0x80081724: nop

    // 0x80081728: b           L_80081734
    // 0x8008172C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80081734;
    // 0x8008172C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80081730:
    // 0x80081730: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80081734:
    // 0x80081734: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x80081738: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x8008173C: addiu       $t1, $t2, 0x1
    ctx->r9 = ADD32(ctx->r10, 0X1);
    // 0x80081740: slti        $at, $t1, 0x8
    ctx->r1 = SIGNED(ctx->r9) < 0X8 ? 1 : 0;
    // 0x80081744: and         $t0, $t9, $s0
    ctx->r8 = ctx->r25 & ctx->r16;
    // 0x80081748: sw          $t1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r9;
    // 0x8008174C: bne         $at, $zero, L_80081704
    if (ctx->r1 != 0) {
        // 0x80081750: sw          $t0, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r8;
            goto L_80081704;
    }
    // 0x80081750: sw          $t0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r8;
L_80081754:
    // 0x80081754: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80081758: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008175C: jal         0x80081458
    // 0x80081760: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80081458(rdram, ctx);
        goto after_2;
    // 0x80081760: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x80081764: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80081768: nop

    // 0x8008176C: bne         $t4, $zero, L_8008177C
    if (ctx->r12 != 0) {
        // 0x80081770: nop
    
            goto L_8008177C;
    }
    // 0x80081770: nop

    // 0x80081774: b           L_80081780
    // 0x80081778: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80081780;
    // 0x80081778: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8008177C:
    // 0x8008177C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80081780:
    // 0x80081780: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x80081784: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80081788: and         $t6, $t3, $s0
    ctx->r14 = ctx->r11 & ctx->r16;
    // 0x8008178C: bne         $t7, $zero, L_8008179C
    if (ctx->r15 != 0) {
        // 0x80081790: sw          $t6, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r14;
            goto L_8008179C;
    }
    // 0x80081790: sw          $t6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r14;
    // 0x80081794: b           L_800817A0
    // 0x80081798: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_800817A0;
    // 0x80081798: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8008179C:
    // 0x8008179C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800817A0:
    // 0x800817A0: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x800817A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800817A8: and         $t8, $t5, $s0
    ctx->r24 = ctx->r13 & ctx->r16;
    // 0x800817AC: sw          $t8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r24;
    // 0x800817B0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x800817B4: bne         $t9, $at, L_800818BC
    if (ctx->r25 != ctx->r1) {
        // 0x800817B8: sw          $t9, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r25;
            goto L_800818BC;
    }
    // 0x800817B8: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
    // 0x800817BC: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
L_800817C0:
    // 0x800817C0: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x800817C4: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x800817C8: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x800817CC: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x800817D0: addu        $t3, $t2, $t4
    ctx->r11 = ADD32(ctx->r10, ctx->r12);
    // 0x800817D4: sw          $t0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r8;
    // 0x800817D8: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x800817DC: nop

    // 0x800817E0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800817E4: slti        $at, $t7, 0xA
    ctx->r1 = SIGNED(ctx->r15) < 0XA ? 1 : 0;
    // 0x800817E8: bne         $at, $zero, L_800817C0
    if (ctx->r1 != 0) {
        // 0x800817EC: sw          $t7, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->r15;
            goto L_800817C0;
    }
    // 0x800817EC: sw          $t7, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r15;
    // 0x800817F0: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x800817F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800817F8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x800817FC: jal         0x80081458
    // 0x80081800: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_80081458(rdram, ctx);
        goto after_3;
    // 0x80081800: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_3:
    // 0x80081804: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80081808: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x8008180C: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x80081810: nop

    // 0x80081814: bne         $t8, $t9, L_80081824
    if (ctx->r24 != ctx->r25) {
        // 0x80081818: nop
    
            goto L_80081824;
    }
    // 0x80081818: nop

    // 0x8008181C: b           L_80081828
    // 0x80081820: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80081828;
    // 0x80081820: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80081824:
    // 0x80081824: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80081828:
    // 0x80081828: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x8008182C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80081830: and         $t2, $t1, $s0
    ctx->r10 = ctx->r9 & ctx->r16;
    // 0x80081834: sw          $t2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r10;
    // 0x80081838: sw          $t4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r12;
L_8008183C:
    // 0x8008183C: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x80081840: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80081844: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x80081848: addu        $t7, $t0, $t6
    ctx->r15 = ADD32(ctx->r8, ctx->r14);
    // 0x8008184C: lw          $t5, 0x0($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X0);
    // 0x80081850: nop

    // 0x80081854: bne         $t5, $zero, L_80081864
    if (ctx->r13 != 0) {
        // 0x80081858: nop
    
            goto L_80081864;
    }
    // 0x80081858: nop

    // 0x8008185C: b           L_80081868
    // 0x80081860: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80081868;
    // 0x80081860: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80081864:
    // 0x80081864: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80081868:
    // 0x80081868: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x8008186C: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x80081870: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80081874: slti        $at, $t2, 0x9
    ctx->r1 = SIGNED(ctx->r10) < 0X9 ? 1 : 0;
    // 0x80081878: and         $t9, $t8, $s0
    ctx->r25 = ctx->r24 & ctx->r16;
    // 0x8008187C: sw          $t2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r10;
    // 0x80081880: bne         $at, $zero, L_8008183C
    if (ctx->r1 != 0) {
        // 0x80081884: sw          $t9, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r25;
            goto L_8008183C;
    }
    // 0x80081884: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
    // 0x80081888: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x8008188C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80081890: lw          $t3, 0x24($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X24);
    // 0x80081894: nop

    // 0x80081898: bne         $t3, $t0, L_800818A8
    if (ctx->r11 != ctx->r8) {
        // 0x8008189C: nop
    
            goto L_800818A8;
    }
    // 0x8008189C: nop

    // 0x800818A0: b           L_800818AC
    // 0x800818A4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_800818AC;
    // 0x800818A4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_800818A8:
    // 0x800818A8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800818AC:
    // 0x800818AC: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x800818B0: nop

    // 0x800818B4: and         $t7, $t6, $s0
    ctx->r15 = ctx->r14 & ctx->r16;
    // 0x800818B8: sw          $t7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r15;
L_800818BC:
    // 0x800818BC: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x800818C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800818C4: bne         $t5, $at, L_80081A54
    if (ctx->r13 != ctx->r1) {
        // 0x800818C8: nop
    
            goto L_80081A54;
    }
    // 0x800818C8: nop

    // 0x800818CC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800818D0: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x800818D4: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x800818D8: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x800818DC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800818E0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800818E4: jal         0x80080F74
    // 0x800818E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80080F74(rdram, ctx);
        goto after_4;
    // 0x800818E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x800818EC: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800818F0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800818F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800818F8: addiu       $t4, $sp, 0x44
    ctx->r12 = ADD32(ctx->r29, 0X44);
    // 0x800818FC: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x80081900: addu        $t3, $t2, $t4
    ctx->r11 = ADD32(ctx->r10, ctx->r12);
    // 0x80081904: addiu       $t6, $t0, -0x1
    ctx->r14 = ADD32(ctx->r8, -0X1);
    // 0x80081908: and         $t7, $t3, $t6
    ctx->r15 = ctx->r11 & ctx->r14;
    // 0x8008190C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x80081910: bne         $t7, $zero, L_80081920
    if (ctx->r15 != 0) {
        // 0x80081914: sw          $t3, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r11;
            goto L_80081920;
    }
    // 0x80081914: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x80081918: b           L_80081924
    // 0x8008191C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80081924;
    // 0x8008191C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80081920:
    // 0x80081920: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80081924:
    // 0x80081924: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x80081928: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8008192C: and         $t8, $t5, $s0
    ctx->r24 = ctx->r13 & ctx->r16;
    // 0x80081930: beq         $t9, $zero, L_80081940
    if (ctx->r25 == 0) {
        // 0x80081934: sw          $t8, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r24;
            goto L_80081940;
    }
    // 0x80081934: sw          $t8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r24;
    // 0x80081938: b           L_80081944
    // 0x8008193C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80081944;
    // 0x8008193C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80081940:
    // 0x80081940: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80081944:
    // 0x80081944: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x80081948: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8008194C: addiu       $t4, $sp, 0x44
    ctx->r12 = ADD32(ctx->r29, 0X44);
    // 0x80081950: addiu       $t0, $t4, 0x1
    ctx->r8 = ADD32(ctx->r12, 0X1);
    // 0x80081954: and         $t2, $t1, $s0
    ctx->r10 = ctx->r9 & ctx->r16;
    // 0x80081958: sltu        $at, $t3, $t0
    ctx->r1 = ctx->r11 < ctx->r8 ? 1 : 0;
    // 0x8008195C: sw          $t2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r10;
    // 0x80081960: bne         $at, $zero, L_80081970
    if (ctx->r1 != 0) {
        // 0x80081964: sw          $t0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r8;
            goto L_80081970;
    }
    // 0x80081964: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80081968: b           L_80081974
    // 0x8008196C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80081974;
    // 0x8008196C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80081970:
    // 0x80081970: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80081974:
    // 0x80081974: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80081978: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x8008197C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80081980: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80081984: and         $t7, $t6, $s0
    ctx->r15 = ctx->r14 & ctx->r16;
    // 0x80081988: sltu        $at, $t5, $t9
    ctx->r1 = ctx->r13 < ctx->r25 ? 1 : 0;
    // 0x8008198C: beq         $at, $zero, L_8008199C
    if (ctx->r1 == 0) {
        // 0x80081990: sw          $t7, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r15;
            goto L_8008199C;
    }
    // 0x80081990: sw          $t7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r15;
    // 0x80081994: b           L_800819A0
    // 0x80081998: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_800819A0;
    // 0x80081998: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8008199C:
    // 0x8008199C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800819A0:
    // 0x800819A0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800819A4: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x800819A8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800819AC: addiu       $t0, $sp, 0x44
    ctx->r8 = ADD32(ctx->r29, 0X44);
    // 0x800819B0: addiu       $t3, $t4, 0x1
    ctx->r11 = ADD32(ctx->r12, 0X1);
    // 0x800819B4: addu        $t6, $t3, $t0
    ctx->r14 = ADD32(ctx->r11, ctx->r8);
    // 0x800819B8: and         $t2, $t1, $s0
    ctx->r10 = ctx->r9 & ctx->r16;
    // 0x800819BC: sltu        $at, $t7, $t6
    ctx->r1 = ctx->r15 < ctx->r14 ? 1 : 0;
    // 0x800819C0: sw          $t2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r10;
    // 0x800819C4: beq         $at, $zero, L_800819D4
    if (ctx->r1 == 0) {
        // 0x800819C8: sw          $t6, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r14;
            goto L_800819D4;
    }
    // 0x800819C8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x800819CC: b           L_800819D8
    // 0x800819D0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_800819D8;
    // 0x800819D0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_800819D4:
    // 0x800819D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800819D8:
    // 0x800819D8: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x800819DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800819E0: and         $t5, $t8, $s0
    ctx->r13 = ctx->r24 & ctx->r16;
    // 0x800819E4: bne         $t5, $at, L_80081A54
    if (ctx->r13 != ctx->r1) {
        // 0x800819E8: sw          $t5, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r13;
            goto L_80081A54;
    }
    // 0x800819E8: sw          $t5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r13;
    // 0x800819EC: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800819F0: addiu       $t1, $sp, 0x44
    ctx->r9 = ADD32(ctx->r29, 0X44);
    // 0x800819F4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800819F8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x800819FC: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x80081A00: addu        $t0, $t9, $t3
    ctx->r8 = ADD32(ctx->r25, ctx->r11);
    // 0x80081A04: addu        $t7, $t0, $t1
    ctx->r15 = ADD32(ctx->r8, ctx->r9);
    // 0x80081A08: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80081A0C: lw          $t6, 0x0($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X0);
    // 0x80081A10: beq         $t4, $zero, L_80081A20
    if (ctx->r12 == 0) {
        // 0x80081A14: sw          $t6, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r14;
            goto L_80081A20;
    }
    // 0x80081A14: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80081A18: b           L_80081A24
    // 0x80081A1C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80081A24;
    // 0x80081A1C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80081A20:
    // 0x80081A20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80081A24:
    // 0x80081A24: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x80081A28: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80081A2C: and         $t5, $t8, $s0
    ctx->r13 = ctx->r24 & ctx->r16;
    // 0x80081A30: beq         $t2, $zero, L_80081A40
    if (ctx->r10 == 0) {
        // 0x80081A34: sw          $t5, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r13;
            goto L_80081A40;
    }
    // 0x80081A34: sw          $t5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r13;
    // 0x80081A38: b           L_80081A44
    // 0x80081A3C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80081A44;
    // 0x80081A3C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80081A40:
    // 0x80081A40: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80081A44:
    // 0x80081A44: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x80081A48: nop

    // 0x80081A4C: and         $t3, $t9, $s0
    ctx->r11 = ctx->r25 & ctx->r16;
    // 0x80081A50: sw          $t3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r11;
L_80081A54:
    // 0x80081A54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80081A58: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x80081A5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80081A60: jr          $ra
    // 0x80081A64: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x80081A64: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_80081A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081A68: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80081A6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80081A70: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80081A74: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80081A78: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80081A7C: jal         0x80081490
    // 0x80081A80: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    func_80081490(rdram, ctx);
        goto after_0;
    // 0x80081A80: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    after_0:
    // 0x80081A84: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80081A88: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80081A8C: and         $t8, $t7, $s1
    ctx->r24 = ctx->r15 & ctx->r17;
    // 0x80081A90: jal         0x80081530
    // 0x80081A94: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    func_80081530(rdram, ctx);
        goto after_1;
    // 0x80081A94: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    after_1:
    // 0x80081A98: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80081A9C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80081AA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80081AA4: and         $t0, $t9, $s1
    ctx->r8 = ctx->r25 & ctx->r17;
    // 0x80081AA8: beq         $t0, $at, L_80081AB8
    if (ctx->r8 == ctx->r1) {
        // 0x80081AAC: sw          $t0, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r8;
            goto L_80081AB8;
    }
    // 0x80081AAC: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x80081AB0: b           L_80081C60
    // 0x80081AB4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80081C60;
    // 0x80081AB4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80081AB8:
    // 0x80081AB8: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
L_80081ABC:
    // 0x80081ABC: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80081AC0: nop

    // 0x80081AC4: addu        $t2, $sp, $t1
    ctx->r10 = ADD32(ctx->r29, ctx->r9);
    // 0x80081AC8: sb          $t1, 0x2C($t2)
    MEM_B(0X2C, ctx->r10) = ctx->r9;
    // 0x80081ACC: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80081AD0: nop

    // 0x80081AD4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80081AD8: slti        $at, $t4, 0x10
    ctx->r1 = SIGNED(ctx->r12) < 0X10 ? 1 : 0;
    // 0x80081ADC: bne         $at, $zero, L_80081ABC
    if (ctx->r1 != 0) {
        // 0x80081AE0: sw          $t4, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r12;
            goto L_80081ABC;
    }
    // 0x80081AE0: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x80081AE4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80081AE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80081AEC: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80081AF0: bne         $t6, $at, L_80081B58
    if (ctx->r14 != ctx->r1) {
        // 0x80081AF4: sw          $t6, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r14;
            goto L_80081B58;
    }
    // 0x80081AF4: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x80081AF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80081AFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80081B00: jal         0x80081044
    // 0x80081B04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80081044(rdram, ctx);
        goto after_2;
    // 0x80081B04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80081B08: jal         0x80081000
    // 0x80081B0C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    func_80081000(rdram, ctx);
        goto after_3;
    // 0x80081B0C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_3:
    // 0x80081B10: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80081B14: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80081B18: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80081B1C: jal         0x80081044
    // 0x80081B20: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    func_80081044(rdram, ctx);
        goto after_4;
    // 0x80081B20: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    after_4:
    // 0x80081B24: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80081B28: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80081B2C: lui         $at, 0xFC1C
    ctx->r1 = S32(0XFC1C << 16);
    // 0x80081B30: ori         $at, $at, 0x43C4
    ctx->r1 = ctx->r1 | 0X43C4;
    // 0x80081B34: bne         $t7, $at, L_80081B44
    if (ctx->r15 != ctx->r1) {
        // 0x80081B38: nop
    
            goto L_80081B44;
    }
    // 0x80081B38: nop

    // 0x80081B3C: b           L_80081B48
    // 0x80081B40: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_80081B48;
    // 0x80081B40: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80081B44:
    // 0x80081B44: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80081B48:
    // 0x80081B48: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80081B4C: nop

    // 0x80081B50: and         $t9, $t8, $s1
    ctx->r25 = ctx->r24 & ctx->r17;
    // 0x80081B54: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
L_80081B58:
    // 0x80081B58: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80081B5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80081B60: bne         $t0, $at, L_80081B94
    if (ctx->r8 != ctx->r1) {
        // 0x80081B64: nop
    
            goto L_80081B94;
    }
    // 0x80081B64: nop

    // 0x80081B68: jal         0x80081C74
    // 0x80081B6C: nop

    func_80081C74(rdram, ctx);
        goto after_5;
    // 0x80081B6C: nop

    after_5:
    // 0x80081B70: bne         $v0, $zero, L_80081B80
    if (ctx->r2 != 0) {
        // 0x80081B74: nop
    
            goto L_80081B80;
    }
    // 0x80081B74: nop

    // 0x80081B78: b           L_80081B84
    // 0x80081B7C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_80081B84;
    // 0x80081B7C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80081B80:
    // 0x80081B80: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80081B84:
    // 0x80081B84: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80081B88: nop

    // 0x80081B8C: and         $t2, $t1, $s1
    ctx->r10 = ctx->r9 & ctx->r17;
    // 0x80081B90: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
L_80081B94:
    // 0x80081B94: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80081B98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80081B9C: bne         $t3, $at, L_80081C18
    if (ctx->r11 != ctx->r1) {
        // 0x80081BA0: nop
    
            goto L_80081C18;
    }
    // 0x80081BA0: nop

    // 0x80081BA4: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x80081BA8: lw          $t4, 0x32D0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X32D0);
    // 0x80081BAC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80081BB0: sltu        $at, $s0, $t4
    ctx->r1 = ctx->r16 < ctx->r12 ? 1 : 0;
    // 0x80081BB4: beq         $at, $zero, L_80081BE8
    if (ctx->r1 == 0) {
        // 0x80081BB8: nop
    
            goto L_80081BE8;
    }
    // 0x80081BB8: nop

L_80081BBC:
    // 0x80081BBC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80081BC0: addiu       $t5, $s0, -0x3
    ctx->r13 = ADD32(ctx->r16, -0X3);
    // 0x80081BC4: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x80081BC8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80081BCC: lw          $t7, 0x32D0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X32D0);
    // 0x80081BD0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80081BD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80081BD8: sw          $t5, 0x230($at)
    MEM_W(0X230, ctx->r1) = ctx->r13;
    // 0x80081BDC: sltu        $at, $s0, $t7
    ctx->r1 = ctx->r16 < ctx->r15 ? 1 : 0;
    // 0x80081BE0: bne         $at, $zero, L_80081BBC
    if (ctx->r1 != 0) {
        // 0x80081BE4: nop
    
            goto L_80081BBC;
    }
    // 0x80081BE4: nop

L_80081BE8:
    // 0x80081BE8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80081BEC: jal         0x80081CC8
    // 0x80081BF0: addiu       $a0, $a0, 0x230
    ctx->r4 = ADD32(ctx->r4, 0X230);
    func_80081CC8(rdram, ctx);
        goto after_6;
    // 0x80081BF0: addiu       $a0, $a0, 0x230
    ctx->r4 = ADD32(ctx->r4, 0X230);
    after_6:
    // 0x80081BF4: bne         $v0, $zero, L_80081C04
    if (ctx->r2 != 0) {
        // 0x80081BF8: nop
    
            goto L_80081C04;
    }
    // 0x80081BF8: nop

    // 0x80081BFC: b           L_80081C08
    // 0x80081C00: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_80081C08;
    // 0x80081C00: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80081C04:
    // 0x80081C04: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80081C08:
    // 0x80081C08: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80081C0C: nop

    // 0x80081C10: and         $t9, $t8, $s1
    ctx->r25 = ctx->r24 & ctx->r17;
    // 0x80081C14: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
L_80081C18:
    // 0x80081C18: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80081C1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80081C20: bne         $t0, $at, L_80081C40
    if (ctx->r8 != ctx->r1) {
        // 0x80081C24: nop
    
            goto L_80081C40;
    }
    // 0x80081C24: nop

    // 0x80081C28: jal         0x800815A8
    // 0x80081C2C: nop

    func_800815A8(rdram, ctx);
        goto after_7;
    // 0x80081C2C: nop

    after_7:
    // 0x80081C30: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80081C34: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80081C38: and         $t2, $t1, $s1
    ctx->r10 = ctx->r9 & ctx->r17;
    // 0x80081C3C: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
L_80081C40:
    // 0x80081C40: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80081C44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80081C48: bne         $t3, $at, L_80081C58
    if (ctx->r11 != ctx->r1) {
        // 0x80081C4C: nop
    
            goto L_80081C58;
    }
    // 0x80081C4C: nop

    // 0x80081C50: b           L_80081C5C
    // 0x80081C54: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_80081C5C;
    // 0x80081C54: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80081C58:
    // 0x80081C58: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_80081C5C:
    // 0x80081C5C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_80081C60:
    // 0x80081C60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80081C64: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80081C68: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80081C6C: jr          $ra
    // 0x80081C70: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80081C70: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80081C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081C74: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80081C78: addiu       $t7, $t7, -0x15A4
    ctx->r15 = ADD32(ctx->r15, -0X15A4);
    // 0x80081C7C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80081C80: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80081C84: addiu       $t6, $sp, 0x4
    ctx->r14 = ADD32(ctx->r29, 0X4);
    // 0x80081C88: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80081C8C: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80081C90: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x80081C94: addiu       $t1, $sp, 0x4
    ctx->r9 = ADD32(ctx->r29, 0X4);
    // 0x80081C98: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80081C9C: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x80081CA0: sw          $t1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r9;
    // 0x80081CA4: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x80081CA8: nop

    // 0x80081CAC: beq         $t2, $zero, L_80081CBC
    if (ctx->r10 == 0) {
        // 0x80081CB0: nop
    
            goto L_80081CBC;
    }
    // 0x80081CB0: nop

    // 0x80081CB4: b           L_80081CC0
    // 0x80081CB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80081CC0;
    // 0x80081CB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80081CBC:
    // 0x80081CBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80081CC0:
    // 0x80081CC0: jr          $ra
    // 0x80081CC4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80081CC4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80081CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081CC8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80081CCC: nop

    // 0x80081CD0: addiu       $t6, $v0, 0x3
    ctx->r14 = ADD32(ctx->r2, 0X3);
    // 0x80081CD4: sltu        $t6, $zero, $t6
    ctx->r14 = 0 < ctx->r14 ? 1 : 0;
    // 0x80081CD8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80081CDC: bne         $v0, $zero, L_80081D14
    if (ctx->r2 != 0) {
        // 0x80081CE0: nop
    
            goto L_80081D14;
    }
    // 0x80081CE0: nop

    // 0x80081CE4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80081CE8: nop

    // 0x80081CEC: addiu       $t7, $v0, 0x2
    ctx->r15 = ADD32(ctx->r2, 0X2);
    // 0x80081CF0: sltu        $t7, $zero, $t7
    ctx->r15 = 0 < ctx->r15 ? 1 : 0;
    // 0x80081CF4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80081CF8: bne         $v0, $zero, L_80081D14
    if (ctx->r2 != 0) {
        // 0x80081CFC: nop
    
            goto L_80081D14;
    }
    // 0x80081CFC: nop

    // 0x80081D00: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80081D04: nop

    // 0x80081D08: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x80081D0C: sltu        $t8, $zero, $t8
    ctx->r24 = 0 < ctx->r24 ? 1 : 0;
    // 0x80081D10: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_80081D14:
    // 0x80081D14: jr          $ra
    // 0x80081D18: nop

    return;
    // 0x80081D18: nop

;}
RECOMP_FUNC void func_80081D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081D1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80081D20: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80081D24: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80081D28: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80081D2C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80081D30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80081D34: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80081D38: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80081D3C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80081D40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80081D44: bne         $t7, $zero, L_80081D54
    if (ctx->r15 != 0) {
        // 0x80081D48: sw          $t6, 0x32D4($at)
        MEM_W(0X32D4, ctx->r1) = ctx->r14;
            goto L_80081D54;
    }
    // 0x80081D48: sw          $t6, 0x32D4($at)
    MEM_W(0X32D4, ctx->r1) = ctx->r14;
    // 0x80081D4C: b           L_80081EFC
    // 0x80081D50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80081EFC;
    // 0x80081D50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80081D54:
    // 0x80081D54: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80081D58: nop

    // 0x80081D5C: addiu       $s0, $t8, 0x1
    ctx->r16 = ADD32(ctx->r24, 0X1);
    // 0x80081D60: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80081D64: bne         $s0, $zero, L_80081D7C
    if (ctx->r16 != 0) {
        // 0x80081D68: nop
    
            goto L_80081D7C;
    }
    // 0x80081D68: nop

    // 0x80081D6C: xori        $s0, $t8, 0x2
    ctx->r16 = ctx->r24 ^ 0X2;
    // 0x80081D70: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80081D74: beq         $s0, $zero, L_80081EB4
    if (ctx->r16 == 0) {
        // 0x80081D78: nop
    
            goto L_80081EB4;
    }
    // 0x80081D78: nop

L_80081D7C:
    // 0x80081D7C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80081D80: nop

    // 0x80081D84: addiu       $s0, $t9, 0x1
    ctx->r16 = ADD32(ctx->r25, 0X1);
    // 0x80081D88: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80081D8C: bne         $s0, $zero, L_80081DA4
    if (ctx->r16 != 0) {
        // 0x80081D90: nop
    
            goto L_80081DA4;
    }
    // 0x80081D90: nop

    // 0x80081D94: xori        $s0, $t9, 0x4
    ctx->r16 = ctx->r25 ^ 0X4;
    // 0x80081D98: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80081D9C: beq         $s0, $zero, L_80081EB4
    if (ctx->r16 == 0) {
        // 0x80081DA0: nop
    
            goto L_80081EB4;
    }
    // 0x80081DA0: nop

L_80081DA4:
    // 0x80081DA4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80081DA8: nop

    // 0x80081DAC: addiu       $s0, $t0, 0x1
    ctx->r16 = ADD32(ctx->r8, 0X1);
    // 0x80081DB0: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80081DB4: bne         $s0, $zero, L_80081DCC
    if (ctx->r16 != 0) {
        // 0x80081DB8: nop
    
            goto L_80081DCC;
    }
    // 0x80081DB8: nop

    // 0x80081DBC: xori        $s0, $t0, 0x4
    ctx->r16 = ctx->r8 ^ 0X4;
    // 0x80081DC0: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80081DC4: beq         $s0, $zero, L_80081EB4
    if (ctx->r16 == 0) {
        // 0x80081DC8: nop
    
            goto L_80081EB4;
    }
    // 0x80081DC8: nop

L_80081DCC:
    // 0x80081DCC: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80081DD0: nop

    // 0x80081DD4: addiu       $s0, $t1, 0x1
    ctx->r16 = ADD32(ctx->r9, 0X1);
    // 0x80081DD8: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80081DDC: bne         $s0, $zero, L_80081DF4
    if (ctx->r16 != 0) {
        // 0x80081DE0: nop
    
            goto L_80081DF4;
    }
    // 0x80081DE0: nop

    // 0x80081DE4: xori        $s0, $t1, 0x4
    ctx->r16 = ctx->r9 ^ 0X4;
    // 0x80081DE8: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80081DEC: beq         $s0, $zero, L_80081EB4
    if (ctx->r16 == 0) {
        // 0x80081DF0: nop
    
            goto L_80081EB4;
    }
    // 0x80081DF0: nop

L_80081DF4:
    // 0x80081DF4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80081DF8: nop

    // 0x80081DFC: addiu       $s0, $t2, 0x1
    ctx->r16 = ADD32(ctx->r10, 0X1);
    // 0x80081E00: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80081E04: bne         $s0, $zero, L_80081E1C
    if (ctx->r16 != 0) {
        // 0x80081E08: nop
    
            goto L_80081E1C;
    }
    // 0x80081E08: nop

    // 0x80081E0C: xori        $s0, $t2, 0x4
    ctx->r16 = ctx->r10 ^ 0X4;
    // 0x80081E10: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80081E14: beq         $s0, $zero, L_80081EB4
    if (ctx->r16 == 0) {
        // 0x80081E18: nop
    
            goto L_80081EB4;
    }
    // 0x80081E18: nop

L_80081E1C:
    // 0x80081E1C: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80081E20: nop

    // 0x80081E24: addiu       $s0, $t3, 0x1
    ctx->r16 = ADD32(ctx->r11, 0X1);
    // 0x80081E28: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80081E2C: bne         $s0, $zero, L_80081E44
    if (ctx->r16 != 0) {
        // 0x80081E30: nop
    
            goto L_80081E44;
    }
    // 0x80081E30: nop

    // 0x80081E34: xori        $s0, $t3, 0x4
    ctx->r16 = ctx->r11 ^ 0X4;
    // 0x80081E38: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80081E3C: beq         $s0, $zero, L_80081EB4
    if (ctx->r16 == 0) {
        // 0x80081E40: nop
    
            goto L_80081EB4;
    }
    // 0x80081E40: nop

L_80081E44:
    // 0x80081E44: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80081E48: nop

    // 0x80081E4C: addiu       $s0, $t4, 0x1
    ctx->r16 = ADD32(ctx->r12, 0X1);
    // 0x80081E50: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80081E54: bne         $s0, $zero, L_80081E6C
    if (ctx->r16 != 0) {
        // 0x80081E58: nop
    
            goto L_80081E6C;
    }
    // 0x80081E58: nop

    // 0x80081E5C: xori        $s0, $t4, 0x4
    ctx->r16 = ctx->r12 ^ 0X4;
    // 0x80081E60: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80081E64: beq         $s0, $zero, L_80081EB4
    if (ctx->r16 == 0) {
        // 0x80081E68: nop
    
            goto L_80081EB4;
    }
    // 0x80081E68: nop

L_80081E6C:
    // 0x80081E6C: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x80081E70: nop

    // 0x80081E74: addiu       $s0, $t5, 0x1
    ctx->r16 = ADD32(ctx->r13, 0X1);
    // 0x80081E78: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80081E7C: bne         $s0, $zero, L_80081E94
    if (ctx->r16 != 0) {
        // 0x80081E80: nop
    
            goto L_80081E94;
    }
    // 0x80081E80: nop

    // 0x80081E84: xori        $s0, $t5, 0x4
    ctx->r16 = ctx->r13 ^ 0X4;
    // 0x80081E88: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80081E8C: beq         $s0, $zero, L_80081EB4
    if (ctx->r16 == 0) {
        // 0x80081E90: nop
    
            goto L_80081EB4;
    }
    // 0x80081E90: nop

L_80081E94:
    // 0x80081E94: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80081E98: nop

    // 0x80081E9C: addiu       $s0, $t6, 0x1
    ctx->r16 = ADD32(ctx->r14, 0X1);
    // 0x80081EA0: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80081EA4: bne         $s0, $zero, L_80081EB4
    if (ctx->r16 != 0) {
        // 0x80081EA8: nop
    
            goto L_80081EB4;
    }
    // 0x80081EA8: nop

    // 0x80081EAC: xori        $s0, $t6, 0x4
    ctx->r16 = ctx->r14 ^ 0X4;
    // 0x80081EB0: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
L_80081EB4:
    // 0x80081EB4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80081EB8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80081EBC: nop

    // 0x80081EC0: bne         $t7, $zero, L_80081ED0
    if (ctx->r15 != 0) {
        // 0x80081EC4: nop
    
            goto L_80081ED0;
    }
    // 0x80081EC4: nop

    // 0x80081EC8: b           L_80081EFC
    // 0x80081ECC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80081EFC;
    // 0x80081ECC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80081ED0:
    // 0x80081ED0: jal         0x80081A68
    // 0x80081ED4: nop

    func_80081A68(rdram, ctx);
        goto after_0;
    // 0x80081ED4: nop

    after_0:
    // 0x80081ED8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80081EDC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80081EE0: nop

    // 0x80081EE4: beq         $t8, $zero, L_80081EF4
    if (ctx->r24 == 0) {
        // 0x80081EE8: nop
    
            goto L_80081EF4;
    }
    // 0x80081EE8: nop

    // 0x80081EEC: b           L_80081EFC
    // 0x80081EF0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_80081EFC;
    // 0x80081EF0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_80081EF4:
    // 0x80081EF4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80081EF8: nop

L_80081EFC:
    // 0x80081EFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80081F00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80081F04: jr          $ra
    // 0x80081F08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80081F08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80081F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081F0C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80081F10: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x80081F14: addu        $t7, $a0, $a1
    ctx->r15 = ADD32(ctx->r4, ctx->r5);
    // 0x80081F18: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80081F1C: addu        $t6, $a0, $a1
    ctx->r14 = ADD32(ctx->r4, ctx->r5);
    // 0x80081F20: addiu       $t8, $t7, -0xD
    ctx->r24 = ADD32(ctx->r15, -0XD);
    // 0x80081F24: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x80081F28: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x80081F2C: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x80081F30: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80081F34: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80081F38: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
L_80081F3C:
    // 0x80081F3C: lbu         $t6, 0x3($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X3);
    // 0x80081F40: lbu         $t8, 0x2($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X2);
    // 0x80081F44: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x80081F48: xor         $t9, $t7, $t8
    ctx->r25 = ctx->r15 ^ ctx->r24;
    // 0x80081F4C: lbu         $t7, 0x1($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X1);
    // 0x80081F50: sll         $t6, $t9, 5
    ctx->r14 = S32(ctx->r25 << 5);
    // 0x80081F54: xor         $t8, $t6, $t7
    ctx->r24 = ctx->r14 ^ ctx->r15;
    // 0x80081F58: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
    // 0x80081F5C: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x80081F60: xor         $t7, $t6, $t9
    ctx->r15 = ctx->r14 ^ ctx->r25;
    // 0x80081F64: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x80081F68: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80081F6C: srl         $t6, $t8, 5
    ctx->r14 = S32(U32(ctx->r24) >> 5);
    // 0x80081F70: andi        $t9, $t6, 0x3FFF
    ctx->r25 = ctx->r14 & 0X3FFF;
    // 0x80081F74: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80081F78: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80081F7C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80081F80: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x80081F84: lw          $t1, 0x0($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X0);
    // 0x80081F88: nop

    // 0x80081F8C: sltu        $at, $t1, $a0
    ctx->r1 = ctx->r9 < ctx->r4 ? 1 : 0;
    // 0x80081F90: bne         $at, $zero, L_8008209C
    if (ctx->r1 != 0) {
        // 0x80081F94: nop
    
            goto L_8008209C;
    }
    // 0x80081F94: nop

    // 0x80081F98: subu        $t9, $t0, $t1
    ctx->r25 = SUB32(ctx->r8, ctx->r9);
    // 0x80081F9C: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x80081FA0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80081FA4: nop

    // 0x80081FA8: beq         $t8, $zero, L_8008209C
    if (ctx->r24 == 0) {
        // 0x80081FAC: ori         $at, $zero, 0xC000
        ctx->r1 = 0 | 0XC000;
            goto L_8008209C;
    }
    // 0x80081FAC: ori         $at, $zero, 0xC000
    ctx->r1 = 0 | 0XC000;
    // 0x80081FB0: sltu        $at, $t8, $at
    ctx->r1 = ctx->r24 < ctx->r1 ? 1 : 0;
    // 0x80081FB4: beq         $at, $zero, L_8008209C
    if (ctx->r1 == 0) {
        // 0x80081FB8: nop
    
            goto L_8008209C;
    }
    // 0x80081FB8: nop

    // 0x80081FBC: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80081FC0: nop

    // 0x80081FC4: sltiu       $at, $t7, 0x801
    ctx->r1 = ctx->r15 < 0X801 ? 1 : 0;
    // 0x80081FC8: bne         $at, $zero, L_80082060
    if (ctx->r1 != 0) {
        // 0x80081FCC: nop
    
            goto L_80082060;
    }
    // 0x80081FCC: nop

    // 0x80081FD0: lbu         $t6, 0x3($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X3);
    // 0x80081FD4: lbu         $t9, 0x3($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X3);
    // 0x80081FD8: nop

    // 0x80081FDC: beq         $t6, $t9, L_80082060
    if (ctx->r14 == ctx->r25) {
        // 0x80081FE0: nop
    
            goto L_80082060;
    }
    // 0x80081FE0: nop

    // 0x80081FE4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80081FE8: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80081FEC: andi        $t7, $t8, 0x7FF
    ctx->r15 = ctx->r24 & 0X7FF;
    // 0x80081FF0: xori        $t6, $t7, 0x201F
    ctx->r14 = ctx->r15 ^ 0X201F;
    // 0x80081FF4: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80081FF8: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80081FFC: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x80082000: lw          $t1, 0x0($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X0);
    // 0x80082004: nop

    // 0x80082008: sltu        $at, $t1, $a0
    ctx->r1 = ctx->r9 < ctx->r4 ? 1 : 0;
    // 0x8008200C: bne         $at, $zero, L_8008209C
    if (ctx->r1 != 0) {
        // 0x80082010: nop
    
            goto L_8008209C;
    }
    // 0x80082010: nop

    // 0x80082014: subu        $t6, $t0, $t1
    ctx->r14 = SUB32(ctx->r8, ctx->r9);
    // 0x80082018: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8008201C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80082020: nop

    // 0x80082024: beq         $t9, $zero, L_8008209C
    if (ctx->r25 == 0) {
        // 0x80082028: ori         $at, $zero, 0xC000
        ctx->r1 = 0 | 0XC000;
            goto L_8008209C;
    }
    // 0x80082028: ori         $at, $zero, 0xC000
    ctx->r1 = 0 | 0XC000;
    // 0x8008202C: sltu        $at, $t9, $at
    ctx->r1 = ctx->r25 < ctx->r1 ? 1 : 0;
    // 0x80082030: beq         $at, $zero, L_8008209C
    if (ctx->r1 == 0) {
        // 0x80082034: nop
    
            goto L_8008209C;
    }
    // 0x80082034: nop

    // 0x80082038: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8008203C: nop

    // 0x80082040: sltiu       $at, $t8, 0x801
    ctx->r1 = ctx->r24 < 0X801 ? 1 : 0;
    // 0x80082044: bne         $at, $zero, L_80082060
    if (ctx->r1 != 0) {
        // 0x80082048: nop
    
            goto L_80082060;
    }
    // 0x80082048: nop

    // 0x8008204C: lbu         $t7, 0x3($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X3);
    // 0x80082050: lbu         $t6, 0x3($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X3);
    // 0x80082054: nop

    // 0x80082058: bne         $t7, $t6, L_8008209C
    if (ctx->r15 != ctx->r14) {
        // 0x8008205C: nop
    
            goto L_8008209C;
    }
    // 0x8008205C: nop

L_80082060:
    // 0x80082060: lbu         $t9, 0x0($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X0);
    // 0x80082064: lbu         $t8, 0x0($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X0);
    // 0x80082068: nop

    // 0x8008206C: bne         $t9, $t8, L_8008209C
    if (ctx->r25 != ctx->r24) {
        // 0x80082070: nop
    
            goto L_8008209C;
    }
    // 0x80082070: nop

    // 0x80082074: lbu         $t7, 0x1($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X1);
    // 0x80082078: lbu         $t6, 0x1($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X1);
    // 0x8008207C: nop

    // 0x80082080: bne         $t7, $t6, L_8008209C
    if (ctx->r15 != ctx->r14) {
        // 0x80082084: nop
    
            goto L_8008209C;
    }
    // 0x80082084: nop

    // 0x80082088: lbu         $t9, 0x2($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X2);
    // 0x8008208C: lbu         $t8, 0x2($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X2);
    // 0x80082090: nop

    // 0x80082094: beq         $t9, $t8, L_800820CC
    if (ctx->r25 == ctx->r24) {
        // 0x80082098: nop
    
            goto L_800820CC;
    }
    // 0x80082098: nop

L_8008209C:
    // 0x8008209C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800820A0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800820A4: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800820A8: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x800820AC: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
    // 0x800820B0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800820B4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800820B8: sltu        $at, $t0, $t6
    ctx->r1 = ctx->r8 < ctx->r14 ? 1 : 0;
    // 0x800820BC: bne         $at, $zero, L_80081F3C
    if (ctx->r1 != 0) {
        // 0x800820C0: nop
    
            goto L_80081F3C;
    }
    // 0x800820C0: nop

    // 0x800820C4: b           L_8008258C
    // 0x800820C8: nop

        goto L_8008258C;
    // 0x800820C8: nop

L_800820CC:
    // 0x800820CC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800820D0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800820D4: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x800820D8: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x800820DC: sw          $t0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r8;
    // 0x800820E0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800820E4: nop

    // 0x800820E8: subu        $t7, $t0, $t9
    ctx->r15 = SUB32(ctx->r8, ctx->r25);
    // 0x800820EC: blez        $t7, L_800821D8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800820F0: nop
    
            goto L_800821D8;
    }
    // 0x800820F0: nop

    // 0x800820F4: subu        $t2, $t0, $t9
    ctx->r10 = SUB32(ctx->r8, ctx->r25);
    // 0x800820F8: sltiu       $at, $t2, 0x4
    ctx->r1 = ctx->r10 < 0X4 ? 1 : 0;
    // 0x800820FC: beq         $at, $zero, L_80082120
    if (ctx->r1 == 0) {
        // 0x80082100: nop
    
            goto L_80082120;
    }
    // 0x80082100: nop

    // 0x80082104: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80082108: andi        $t7, $t2, 0xFF
    ctx->r15 = ctx->r10 & 0XFF;
    // 0x8008210C: lbu         $t6, -0x2($t8)
    ctx->r14 = MEM_BU(ctx->r24, -0X2);
    // 0x80082110: nop

    // 0x80082114: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x80082118: b           L_800821A8
    // 0x8008211C: sb          $t9, -0x2($t8)
    MEM_B(-0X2, ctx->r24) = ctx->r25;
        goto L_800821A8;
    // 0x8008211C: sb          $t9, -0x2($t8)
    MEM_B(-0X2, ctx->r24) = ctx->r25;
L_80082120:
    // 0x80082120: sltiu       $at, $t2, 0x13
    ctx->r1 = ctx->r10 < 0X13 ? 1 : 0;
    // 0x80082124: beq         $at, $zero, L_8008214C
    if (ctx->r1 == 0) {
        // 0x80082128: nop
    
            goto L_8008214C;
    }
    // 0x80082128: nop

    // 0x8008212C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80082130: addiu       $t6, $t2, -0x3
    ctx->r14 = ADD32(ctx->r10, -0X3);
    // 0x80082134: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x80082138: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8008213C: nop

    // 0x80082140: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x80082144: b           L_800821A8
    // 0x80082148: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
        goto L_800821A8;
    // 0x80082148: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
L_8008214C:
    // 0x8008214C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80082150: addiu       $t3, $t2, -0x12
    ctx->r11 = ADD32(ctx->r10, -0X12);
    // 0x80082154: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x80082158: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8008215C: sltiu       $at, $t3, 0x100
    ctx->r1 = ctx->r11 < 0X100 ? 1 : 0;
    // 0x80082160: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80082164: bne         $at, $zero, L_8008218C
    if (ctx->r1 != 0) {
        // 0x80082168: sw          $t9, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r25;
            goto L_8008218C;
    }
    // 0x80082168: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
L_8008216C:
    // 0x8008216C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80082170: addiu       $t3, $t3, -0xFF
    ctx->r11 = ADD32(ctx->r11, -0XFF);
    // 0x80082174: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x80082178: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8008217C: sltiu       $at, $t3, 0x100
    ctx->r1 = ctx->r11 < 0X100 ? 1 : 0;
    // 0x80082180: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80082184: beq         $at, $zero, L_8008216C
    if (ctx->r1 == 0) {
        // 0x80082188: sw          $t7, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r15;
            goto L_8008216C;
    }
    // 0x80082188: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
L_8008218C:
    // 0x8008218C: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80082190: nop

    // 0x80082194: sb          $t3, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r11;
    // 0x80082198: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8008219C: nop

    // 0x800821A0: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x800821A4: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
L_800821A8:
    // 0x800821A8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800821AC: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x800821B0: lbu         $t9, 0x0($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X0);
    // 0x800821B4: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x800821B8: sb          $t9, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r25;
    // 0x800821BC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800821C0: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x800821C4: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x800821C8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800821CC: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x800821D0: bne         $t2, $zero, L_800821A8
    if (ctx->r10 != 0) {
        // 0x800821D4: sw          $t8, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r24;
            goto L_800821A8;
    }
    // 0x800821D4: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
L_800821D8:
    // 0x800821D8: lbu         $t6, 0x3($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X3);
    // 0x800821DC: lbu         $t7, 0x3($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X3);
    // 0x800821E0: addiu       $t0, $t0, 0x3
    ctx->r8 = ADD32(ctx->r8, 0X3);
    // 0x800821E4: xor         $t4, $t6, $t7
    ctx->r12 = ctx->r14 ^ ctx->r15;
    // 0x800821E8: sltu        $t4, $zero, $t4
    ctx->r12 = 0 < ctx->r12 ? 1 : 0;
    // 0x800821EC: bne         $t4, $zero, L_80082280
    if (ctx->r12 != 0) {
        // 0x800821F0: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_80082280;
    }
    // 0x800821F0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800821F4: lbu         $t9, 0x0($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X0);
    // 0x800821F8: lbu         $t8, 0x4($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X4);
    // 0x800821FC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082200: xor         $t5, $t9, $t8
    ctx->r13 = ctx->r25 ^ ctx->r24;
    // 0x80082204: sltu        $t5, $zero, $t5
    ctx->r13 = 0 < ctx->r13 ? 1 : 0;
    // 0x80082208: bne         $t5, $zero, L_80082280
    if (ctx->r13 != 0) {
        // 0x8008220C: nop
    
            goto L_80082280;
    }
    // 0x8008220C: nop

    // 0x80082210: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
    // 0x80082214: lbu         $t7, 0x5($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X5);
    // 0x80082218: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8008221C: xor         $t9, $t6, $t7
    ctx->r25 = ctx->r14 ^ ctx->r15;
    // 0x80082220: sltu        $t9, $zero, $t9
    ctx->r25 = 0 < ctx->r25 ? 1 : 0;
    // 0x80082224: bne         $t9, $zero, L_80082280
    if (ctx->r25 != 0) {
        // 0x80082228: sw          $t9, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r25;
            goto L_80082280;
    }
    // 0x80082228: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x8008222C: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x80082230: lbu         $t6, 0x6($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X6);
    // 0x80082234: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082238: xor         $t7, $t8, $t6
    ctx->r15 = ctx->r24 ^ ctx->r14;
    // 0x8008223C: sltu        $t7, $zero, $t7
    ctx->r15 = 0 < ctx->r15 ? 1 : 0;
    // 0x80082240: bne         $t7, $zero, L_80082280
    if (ctx->r15 != 0) {
        // 0x80082244: sw          $t7, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r15;
            goto L_80082280;
    }
    // 0x80082244: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x80082248: lbu         $t9, 0x0($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X0);
    // 0x8008224C: lbu         $t8, 0x7($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X7);
    // 0x80082250: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082254: xor         $t6, $t9, $t8
    ctx->r14 = ctx->r25 ^ ctx->r24;
    // 0x80082258: sltu        $t6, $zero, $t6
    ctx->r14 = 0 < ctx->r14 ? 1 : 0;
    // 0x8008225C: bne         $t6, $zero, L_80082280
    if (ctx->r14 != 0) {
        // 0x80082260: sw          $t6, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r14;
            goto L_80082280;
    }
    // 0x80082260: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x80082264: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x80082268: lbu         $t9, 0x8($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X8);
    // 0x8008226C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082270: xor         $t8, $t7, $t9
    ctx->r24 = ctx->r15 ^ ctx->r25;
    // 0x80082274: sltu        $t8, $zero, $t8
    ctx->r24 = 0 < ctx->r24 ? 1 : 0;
    // 0x80082278: beq         $t8, $zero, L_80082378
    if (ctx->r24 == 0) {
        // 0x8008227C: sw          $t8, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r24;
            goto L_80082378;
    }
    // 0x8008227C: sw          $t8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r24;
L_80082280:
    // 0x80082280: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80082284: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80082288: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x8008228C: subu        $t7, $t0, $t6
    ctx->r15 = SUB32(ctx->r8, ctx->r14);
    // 0x80082290: sltiu       $at, $t9, 0x801
    ctx->r1 = ctx->r25 < 0X801 ? 1 : 0;
    // 0x80082294: beq         $at, $zero, L_800822F0
    if (ctx->r1 == 0) {
        // 0x80082298: sw          $t7, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r15;
            goto L_800822F0;
    }
    // 0x80082298: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x8008229C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800822A0: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x800822A4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800822A8: sll         $t9, $t7, 5
    ctx->r25 = S32(ctx->r15 << 5);
    // 0x800822AC: andi        $t6, $t8, 0x7
    ctx->r14 = ctx->r24 & 0X7;
    // 0x800822B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800822B4: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x800822B8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x800822BC: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x800822C0: sb          $t8, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r24;
    // 0x800822C4: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x800822C8: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800822CC: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x800822D0: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x800822D4: srl         $t6, $t8, 3
    ctx->r14 = S32(U32(ctx->r24) >> 3);
    // 0x800822D8: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x800822DC: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x800822E0: nop

    // 0x800822E4: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x800822E8: b           L_80082570
    // 0x800822EC: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
        goto L_80082570;
    // 0x800822EC: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
L_800822F0:
    // 0x800822F0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800822F4: nop

    // 0x800822F8: sltiu       $at, $t6, 0x4001
    ctx->r1 = ctx->r14 < 0X4001 ? 1 : 0;
    // 0x800822FC: beq         $at, $zero, L_80082334
    if (ctx->r1 == 0) {
        // 0x80082300: nop
    
            goto L_80082334;
    }
    // 0x80082300: nop

    // 0x80082304: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80082308: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8008230C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80082310: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80082314: addiu       $t8, $t9, -0x2
    ctx->r24 = ADD32(ctx->r25, -0X2);
    // 0x80082318: ori         $t6, $t8, 0x20
    ctx->r14 = ctx->r24 | 0X20;
    // 0x8008231C: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x80082320: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80082324: nop

    // 0x80082328: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x8008232C: b           L_80082534
    // 0x80082330: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
        goto L_80082534;
    // 0x80082330: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
L_80082334:
    // 0x80082334: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80082338: nop

    // 0x8008233C: addiu       $t7, $t6, -0x4000
    ctx->r15 = ADD32(ctx->r14, -0X4000);
    // 0x80082340: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80082344: andi        $t9, $t7, 0x4000
    ctx->r25 = ctx->r15 & 0X4000;
    // 0x80082348: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8008234C: srl         $t8, $t9, 11
    ctx->r24 = S32(U32(ctx->r25) >> 11);
    // 0x80082350: addiu       $t9, $t7, -0x2
    ctx->r25 = ADD32(ctx->r15, -0X2);
    // 0x80082354: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80082358: ori         $t6, $t8, 0x10
    ctx->r14 = ctx->r24 | 0X10;
    // 0x8008235C: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x80082360: sb          $t8, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r24;
    // 0x80082364: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80082368: nop

    // 0x8008236C: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x80082370: b           L_80082534
    // 0x80082374: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
        goto L_80082534;
    // 0x80082374: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
L_80082378:
    // 0x80082378: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8008237C: addiu       $t7, $t1, 0x9
    ctx->r15 = ADD32(ctx->r9, 0X9);
    // 0x80082380: sltu        $at, $t0, $t8
    ctx->r1 = ctx->r8 < ctx->r24 ? 1 : 0;
    // 0x80082384: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80082388: beq         $at, $zero, L_800823DC
    if (ctx->r1 == 0) {
        // 0x8008238C: sw          $t8, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r24;
            goto L_800823DC;
    }
    // 0x8008238C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80082390: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80082394: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
    // 0x80082398: lbu         $t7, 0x0($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X0);
    // 0x8008239C: nop

    // 0x800823A0: bne         $t6, $t7, L_800823DC
    if (ctx->r14 != ctx->r15) {
        // 0x800823A4: nop
    
            goto L_800823DC;
    }
    // 0x800823A4: nop

L_800823A8:
    // 0x800823A8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800823AC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800823B0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800823B4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800823B8: sltu        $at, $t0, $t6
    ctx->r1 = ctx->r8 < ctx->r14 ? 1 : 0;
    // 0x800823BC: beq         $at, $zero, L_800823DC
    if (ctx->r1 == 0) {
        // 0x800823C0: sw          $t9, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r25;
            goto L_800823DC;
    }
    // 0x800823C0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800823C4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800823C8: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x800823CC: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x800823D0: nop

    // 0x800823D4: beq         $t7, $t9, L_800823A8
    if (ctx->r15 == ctx->r25) {
        // 0x800823D8: nop
    
            goto L_800823A8;
    }
    // 0x800823D8: nop

L_800823DC:
    // 0x800823DC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800823E0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800823E4: subu        $t8, $t0, $t6
    ctx->r24 = SUB32(ctx->r8, ctx->r14);
    // 0x800823E8: sltiu       $at, $t7, 0x4001
    ctx->r1 = ctx->r15 < 0X4001 ? 1 : 0;
    // 0x800823EC: beq         $at, $zero, L_80082458
    if (ctx->r1 == 0) {
        // 0x800823F0: sw          $t8, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r24;
            goto L_80082458;
    }
    // 0x800823F0: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x800823F4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800823F8: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x800823FC: sltiu       $at, $t6, 0x22
    ctx->r1 = ctx->r14 < 0X22 ? 1 : 0;
    // 0x80082400: beq         $at, $zero, L_8008242C
    if (ctx->r1 == 0) {
        // 0x80082404: sw          $t9, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r25;
            goto L_8008242C;
    }
    // 0x80082404: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x80082408: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8008240C: addiu       $t8, $t6, -0x2
    ctx->r24 = ADD32(ctx->r14, -0X2);
    // 0x80082410: ori         $t7, $t8, 0x20
    ctx->r15 = ctx->r24 | 0X20;
    // 0x80082414: sb          $t7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r15;
    // 0x80082418: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8008241C: nop

    // 0x80082420: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80082424: b           L_80082534
    // 0x80082428: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
        goto L_80082534;
    // 0x80082428: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
L_8008242C:
    // 0x8008242C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80082430: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80082434: addiu       $t9, $t7, -0x21
    ctx->r25 = ADD32(ctx->r15, -0X21);
    // 0x80082438: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8008243C: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80082440: sb          $t6, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r14;
    // 0x80082444: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80082448: nop

    // 0x8008244C: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80082450: b           L_800824D4
    // 0x80082454: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
        goto L_800824D4;
    // 0x80082454: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
L_80082458:
    // 0x80082458: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8008245C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80082460: addiu       $t8, $t6, -0x4000
    ctx->r24 = ADD32(ctx->r14, -0X4000);
    // 0x80082464: sltiu       $at, $t7, 0xA
    ctx->r1 = ctx->r15 < 0XA ? 1 : 0;
    // 0x80082468: beq         $at, $zero, L_800824A0
    if (ctx->r1 == 0) {
        // 0x8008246C: sw          $t8, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r24;
            goto L_800824A0;
    }
    // 0x8008246C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80082470: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x80082474: srl         $t6, $t9, 11
    ctx->r14 = S32(U32(ctx->r25) >> 11);
    // 0x80082478: addiu       $t9, $t7, -0x2
    ctx->r25 = ADD32(ctx->r15, -0X2);
    // 0x8008247C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80082480: ori         $t8, $t6, 0x10
    ctx->r24 = ctx->r14 | 0X10;
    // 0x80082484: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x80082488: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x8008248C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80082490: nop

    // 0x80082494: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80082498: b           L_80082534
    // 0x8008249C: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
        goto L_80082534;
    // 0x8008249C: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
L_800824A0:
    // 0x800824A0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800824A4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800824A8: addiu       $t7, $t6, -0x9
    ctx->r15 = ADD32(ctx->r14, -0X9);
    // 0x800824AC: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x800824B0: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x800824B4: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x800824B8: srl         $t6, $t9, 11
    ctx->r14 = S32(U32(ctx->r25) >> 11);
    // 0x800824BC: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x800824C0: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x800824C4: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x800824C8: nop

    // 0x800824CC: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x800824D0: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
L_800824D4:
    // 0x800824D4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800824D8: nop

    // 0x800824DC: sltiu       $at, $t7, 0x100
    ctx->r1 = ctx->r15 < 0X100 ? 1 : 0;
    // 0x800824E0: bne         $at, $zero, L_80082514
    if (ctx->r1 != 0) {
        // 0x800824E4: nop
    
            goto L_80082514;
    }
    // 0x800824E4: nop

L_800824E8:
    // 0x800824E8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800824EC: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x800824F0: addiu       $t9, $t8, -0xFF
    ctx->r25 = ADD32(ctx->r24, -0XFF);
    // 0x800824F4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800824F8: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x800824FC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80082500: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80082504: sltiu       $at, $t9, 0x100
    ctx->r1 = ctx->r25 < 0X100 ? 1 : 0;
    // 0x80082508: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8008250C: beq         $at, $zero, L_800824E8
    if (ctx->r1 == 0) {
        // 0x80082510: sw          $t8, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r24;
            goto L_800824E8;
    }
    // 0x80082510: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
L_80082514:
    // 0x80082514: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80082518: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x8008251C: nop

    // 0x80082520: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x80082524: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80082528: nop

    // 0x8008252C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80082530: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
L_80082534:
    // 0x80082534: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80082538: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8008253C: andi        $t7, $t6, 0x3F
    ctx->r15 = ctx->r14 & 0X3F;
    // 0x80082540: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80082544: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
    // 0x80082548: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8008254C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80082550: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80082554: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x80082558: srl         $t9, $t8, 6
    ctx->r25 = S32(U32(ctx->r24) >> 6);
    // 0x8008255C: sb          $t9, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r25;
    // 0x80082560: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80082564: nop

    // 0x80082568: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x8008256C: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
L_80082570:
    // 0x80082570: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80082574: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x80082578: sltu        $at, $t0, $t9
    ctx->r1 = ctx->r8 < ctx->r25 ? 1 : 0;
    // 0x8008257C: bne         $at, $zero, L_80081F3C
    if (ctx->r1 != 0) {
        // 0x80082580: nop
    
            goto L_80081F3C;
    }
    // 0x80082580: nop

    // 0x80082584: b           L_8008258C
    // 0x80082588: nop

        goto L_8008258C;
    // 0x80082588: nop

L_8008258C:
    // 0x8008258C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80082590: nop

    // 0x80082594: subu        $t6, $t7, $a2
    ctx->r14 = SUB32(ctx->r15, ctx->r6);
    // 0x80082598: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8008259C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800825A0: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800825A4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x800825A8: jr          $ra
    // 0x800825AC: subu        $v0, $t8, $t9
    ctx->r2 = SUB32(ctx->r24, ctx->r25);
    return;
    // 0x800825AC: subu        $v0, $t8, $t9
    ctx->r2 = SUB32(ctx->r24, ctx->r25);
;}
RECOMP_FUNC void func_800825B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800825B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800825B4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800825B8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800825BC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800825C0: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800825C4: sltiu       $at, $t7, 0xE
    ctx->r1 = ctx->r15 < 0XE ? 1 : 0;
    // 0x800825C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800825CC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800825D0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x800825D4: beq         $at, $zero, L_800825E4
    if (ctx->r1 == 0) {
        // 0x800825D8: sw          $t6, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r14;
            goto L_800825E4;
    }
    // 0x800825D8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x800825DC: b           L_8008261C
    // 0x800825E0: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
        goto L_8008261C;
    // 0x800825E0: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
L_800825E4:
    // 0x800825E4: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x800825E8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800825EC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x800825F0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800825F4: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x800825F8: jal         0x80081F0C
    // 0x800825FC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80081F0C(rdram, ctx);
        goto after_0;
    // 0x800825FC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x80082600: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80082604: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80082608: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8008260C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80082610: nop

    // 0x80082614: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80082618: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
L_8008261C:
    // 0x8008261C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80082620: nop

    // 0x80082624: beq         $t3, $zero, L_8008278C
    if (ctx->r11 == 0) {
        // 0x80082628: nop
    
            goto L_8008278C;
    }
    // 0x80082628: nop

    // 0x8008262C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80082630: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80082634: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80082638: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8008263C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80082640: subu        $t7, $t6, $t3
    ctx->r15 = SUB32(ctx->r14, ctx->r11);
    // 0x80082644: bne         $t8, $t0, L_80082674
    if (ctx->r24 != ctx->r8) {
        // 0x80082648: sw          $t7, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r15;
            goto L_80082674;
    }
    // 0x80082648: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8008264C: sltiu       $at, $t3, 0xEF
    ctx->r1 = ctx->r11 < 0XEF ? 1 : 0;
    // 0x80082650: beq         $at, $zero, L_80082674
    if (ctx->r1 == 0) {
        // 0x80082654: nop
    
            goto L_80082674;
    }
    // 0x80082654: nop

    // 0x80082658: addiu       $t9, $t3, 0x11
    ctx->r25 = ADD32(ctx->r11, 0X11);
    // 0x8008265C: sb          $t9, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r25;
    // 0x80082660: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80082664: nop

    // 0x80082668: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8008266C: b           L_80082750
    // 0x80082670: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
        goto L_80082750;
    // 0x80082670: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
L_80082674:
    // 0x80082674: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80082678: nop

    // 0x8008267C: sltiu       $at, $t4, 0x4
    ctx->r1 = ctx->r12 < 0X4 ? 1 : 0;
    // 0x80082680: beq         $at, $zero, L_800826A4
    if (ctx->r1 == 0) {
        // 0x80082684: nop
    
            goto L_800826A4;
    }
    // 0x80082684: nop

    // 0x80082688: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8008268C: lbu         $t7, 0x2B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2B);
    // 0x80082690: lbu         $t6, -0x2($t5)
    ctx->r14 = MEM_BU(ctx->r13, -0X2);
    // 0x80082694: nop

    // 0x80082698: or          $t0, $t6, $t7
    ctx->r8 = ctx->r14 | ctx->r15;
    // 0x8008269C: b           L_80082750
    // 0x800826A0: sb          $t0, -0x2($t5)
    MEM_B(-0X2, ctx->r13) = ctx->r8;
        goto L_80082750;
    // 0x800826A0: sb          $t0, -0x2($t5)
    MEM_B(-0X2, ctx->r13) = ctx->r8;
L_800826A4:
    // 0x800826A4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800826A8: nop

    // 0x800826AC: sltiu       $at, $t3, 0x13
    ctx->r1 = ctx->r11 < 0X13 ? 1 : 0;
    // 0x800826B0: beq         $at, $zero, L_800826D8
    if (ctx->r1 == 0) {
        // 0x800826B4: nop
    
            goto L_800826D8;
    }
    // 0x800826B4: nop

    // 0x800826B8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800826BC: addiu       $t9, $t3, -0x3
    ctx->r25 = ADD32(ctx->r11, -0X3);
    // 0x800826C0: sb          $t9, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r25;
    // 0x800826C4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800826C8: nop

    // 0x800826CC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800826D0: b           L_80082750
    // 0x800826D4: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
        goto L_80082750;
    // 0x800826D4: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
L_800826D8:
    // 0x800826D8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800826DC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800826E0: addiu       $t6, $t4, -0x12
    ctx->r14 = ADD32(ctx->r12, -0X12);
    // 0x800826E4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800826E8: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x800826EC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800826F0: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800826F4: addiu       $t5, $t0, 0x1
    ctx->r13 = ADD32(ctx->r8, 0X1);
    // 0x800826F8: sltiu       $at, $t3, 0x100
    ctx->r1 = ctx->r11 < 0X100 ? 1 : 0;
    // 0x800826FC: bne         $at, $zero, L_80082730
    if (ctx->r1 != 0) {
        // 0x80082700: sw          $t5, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r13;
            goto L_80082730;
    }
    // 0x80082700: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
L_80082704:
    // 0x80082704: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80082708: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8008270C: addiu       $t8, $t9, -0xFF
    ctx->r24 = ADD32(ctx->r25, -0XFF);
    // 0x80082710: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80082714: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    // 0x80082718: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8008271C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80082720: sltiu       $at, $t6, 0x100
    ctx->r1 = ctx->r14 < 0X100 ? 1 : 0;
    // 0x80082724: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x80082728: beq         $at, $zero, L_80082704
    if (ctx->r1 == 0) {
        // 0x8008272C: sw          $t4, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r12;
            goto L_80082704;
    }
    // 0x8008272C: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
L_80082730:
    // 0x80082730: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80082734: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80082738: nop

    // 0x8008273C: sb          $t7, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r15;
    // 0x80082740: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80082744: nop

    // 0x80082748: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x8008274C: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
L_80082750:
    // 0x80082750: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80082754: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80082758: lbu         $t8, 0x0($t9)
    ctx->r24 = MEM_BU(ctx->r25, 0X0);
    // 0x8008275C: nop

    // 0x80082760: sb          $t8, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r24;
    // 0x80082764: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80082768: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8008276C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80082770: addiu       $t5, $t0, -0x1
    ctx->r13 = ADD32(ctx->r8, -0X1);
    // 0x80082774: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80082778: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x8008277C: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x80082780: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80082784: bne         $t5, $zero, L_80082750
    if (ctx->r13 != 0) {
        // 0x80082788: sw          $t5, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r13;
            goto L_80082750;
    }
    // 0x80082788: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
L_8008278C:
    // 0x8008278C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80082790: addiu       $t3, $zero, 0x11
    ctx->r11 = ADD32(0, 0X11);
    // 0x80082794: sb          $t3, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r11;
    // 0x80082798: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8008279C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800827A0: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x800827A4: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x800827A8: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    // 0x800827AC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800827B0: nop

    // 0x800827B4: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x800827B8: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x800827BC: sb          $zero, 0x0($t4)
    MEM_B(0X0, ctx->r12) = 0;
    // 0x800827C0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800827C4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800827C8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800827CC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800827D0: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x800827D4: subu        $t5, $t7, $t0
    ctx->r13 = SUB32(ctx->r15, ctx->r8);
    // 0x800827D8: sw          $t5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r13;
    // 0x800827DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800827E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800827E4: jr          $ra
    // 0x800827E8: nop

    return;
    // 0x800827E8: nop

;}
RECOMP_FUNC void func_800827EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800827EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800827F0: addu        $t6, $a0, $a1
    ctx->r14 = ADD32(ctx->r4, ctx->r5);
    // 0x800827F4: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x800827F8: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x800827FC: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x80082800: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x80082804: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x80082808: slti        $at, $t7, 0x12
    ctx->r1 = SIGNED(ctx->r15) < 0X12 ? 1 : 0;
    // 0x8008280C: bne         $at, $zero, L_8008284C
    if (ctx->r1 != 0) {
        // 0x80082810: nop
    
            goto L_8008284C;
    }
    // 0x80082810: nop

    // 0x80082814: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80082818: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x8008281C: addiu       $t2, $t2, -0x11
    ctx->r10 = ADD32(ctx->r10, -0X11);
    // 0x80082820: sltiu       $at, $t2, 0x4
    ctx->r1 = ctx->r10 < 0X4 ? 1 : 0;
    // 0x80082824: bne         $at, $zero, L_80082AF8
    if (ctx->r1 != 0) {
        // 0x80082828: nop
    
            goto L_80082AF8;
    }
    // 0x80082828: nop

L_8008282C:
    // 0x8008282C: lbu         $t8, 0x0($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X0);
    // 0x80082830: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x80082834: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082838: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x8008283C: bne         $t2, $zero, L_8008282C
    if (ctx->r10 != 0) {
        // 0x80082840: sb          $t8, -0x1($t0)
        MEM_B(-0X1, ctx->r8) = ctx->r24;
            goto L_8008282C;
    }
    // 0x80082840: sb          $t8, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r24;
    // 0x80082844: b           L_800828E0
    // 0x80082848: nop

        goto L_800828E0;
    // 0x80082848: nop

L_8008284C:
    // 0x8008284C: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80082850: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082854: sltiu       $at, $t2, 0x10
    ctx->r1 = ctx->r10 < 0X10 ? 1 : 0;
    // 0x80082858: beq         $at, $zero, L_80082940
    if (ctx->r1 == 0) {
        // 0x8008285C: nop
    
            goto L_80082940;
    }
    // 0x8008285C: nop

    // 0x80082860: bne         $t2, $zero, L_80082898
    if (ctx->r10 != 0) {
        // 0x80082864: nop
    
            goto L_80082898;
    }
    // 0x80082864: nop

    // 0x80082868: lbu         $t9, 0x0($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X0);
    // 0x8008286C: nop

    // 0x80082870: bne         $t9, $zero, L_80082888
    if (ctx->r25 != 0) {
        // 0x80082874: nop
    
            goto L_80082888;
    }
    // 0x80082874: nop

L_80082878:
    // 0x80082878: lbu         $t6, 0x1($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X1);
    // 0x8008287C: addiu       $t2, $t2, 0xFF
    ctx->r10 = ADD32(ctx->r10, 0XFF);
    // 0x80082880: beq         $t6, $zero, L_80082878
    if (ctx->r14 == 0) {
        // 0x80082884: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_80082878;
    }
    // 0x80082884: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_80082888:
    // 0x80082888: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x8008288C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082890: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x80082894: addiu       $t2, $t2, 0xF
    ctx->r10 = ADD32(ctx->r10, 0XF);
L_80082898:
    // 0x80082898: lbu         $t8, 0x0($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X0);
    // 0x8008289C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800828A0: sb          $t8, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r24;
    // 0x800828A4: lbu         $t9, 0x1($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X1);
    // 0x800828A8: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800828AC: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
    // 0x800828B0: lbu         $t6, 0x1($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X1);
    // 0x800828B4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800828B8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800828BC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800828C0: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800828C4: sb          $t6, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r14;
L_800828C8:
    // 0x800828C8: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x800828CC: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x800828D0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800828D4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800828D8: bne         $t2, $zero, L_800828C8
    if (ctx->r10 != 0) {
        // 0x800828DC: sb          $t7, -0x1($t0)
        MEM_B(-0X1, ctx->r8) = ctx->r15;
            goto L_800828C8;
    }
    // 0x800828DC: sb          $t7, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r15;
L_800828E0:
    // 0x800828E0: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x800828E4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800828E8: sltiu       $at, $t2, 0x10
    ctx->r1 = ctx->r10 < 0X10 ? 1 : 0;
    // 0x800828EC: beq         $at, $zero, L_80082940
    if (ctx->r1 == 0) {
        // 0x800828F0: nop
    
            goto L_80082940;
    }
    // 0x800828F0: nop

    // 0x800828F4: lbu         $t9, 0x0($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X0);
    // 0x800828F8: addiu       $t3, $t0, -0x801
    ctx->r11 = ADD32(ctx->r8, -0X801);
    // 0x800828FC: srl         $t8, $t2, 2
    ctx->r24 = S32(U32(ctx->r10) >> 2);
    // 0x80082900: subu        $t3, $t3, $t8
    ctx->r11 = SUB32(ctx->r11, ctx->r24);
    // 0x80082904: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80082908: subu        $t3, $t3, $t6
    ctx->r11 = SUB32(ctx->r11, ctx->r14);
    // 0x8008290C: lbu         $t7, 0x0($t3)
    ctx->r15 = MEM_BU(ctx->r11, 0X0);
    // 0x80082910: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082914: sb          $t7, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r15;
    // 0x80082918: lbu         $t8, 0x1($t3)
    ctx->r24 = MEM_BU(ctx->r11, 0X1);
    // 0x8008291C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082920: sb          $t8, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r24;
    // 0x80082924: lbu         $t9, 0x2($t3)
    ctx->r25 = MEM_BU(ctx->r11, 0X2);
    // 0x80082928: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x8008292C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082930: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80082934: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082938: b           L_80082AE0
    // 0x8008293C: sb          $t9, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r25;
        goto L_80082AE0;
    // 0x8008293C: sb          $t9, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r25;
L_80082940:
    // 0x80082940: sltiu       $at, $t2, 0x40
    ctx->r1 = ctx->r10 < 0X40 ? 1 : 0;
    // 0x80082944: bne         $at, $zero, L_8008297C
    if (ctx->r1 != 0) {
        // 0x80082948: nop
    
            goto L_8008297C;
    }
    // 0x80082948: nop

    // 0x8008294C: srl         $t6, $t2, 2
    ctx->r14 = S32(U32(ctx->r10) >> 2);
    // 0x80082950: lbu         $t8, 0x0($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X0);
    // 0x80082954: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x80082958: addiu       $t3, $t0, -0x1
    ctx->r11 = ADD32(ctx->r8, -0X1);
    // 0x8008295C: srl         $t6, $t2, 5
    ctx->r14 = S32(U32(ctx->r10) >> 5);
    // 0x80082960: subu        $t3, $t3, $t7
    ctx->r11 = SUB32(ctx->r11, ctx->r15);
    // 0x80082964: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x80082968: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8008296C: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x80082970: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082974: b           L_80082AA8
    // 0x80082978: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
        goto L_80082AA8;
    // 0x80082978: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
L_8008297C:
    // 0x8008297C: sltiu       $at, $t2, 0x20
    ctx->r1 = ctx->r10 < 0X20 ? 1 : 0;
    // 0x80082980: bne         $at, $zero, L_800829EC
    if (ctx->r1 != 0) {
        // 0x80082984: nop
    
            goto L_800829EC;
    }
    // 0x80082984: nop

    // 0x80082988: andi        $t7, $t2, 0x1F
    ctx->r15 = ctx->r10 & 0X1F;
    // 0x8008298C: or          $t2, $t7, $zero
    ctx->r10 = ctx->r15 | 0;
    // 0x80082990: bne         $t2, $zero, L_800829C8
    if (ctx->r10 != 0) {
        // 0x80082994: nop
    
            goto L_800829C8;
    }
    // 0x80082994: nop

    // 0x80082998: lbu         $t8, 0x0($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X0);
    // 0x8008299C: nop

    // 0x800829A0: bne         $t8, $zero, L_800829B8
    if (ctx->r24 != 0) {
        // 0x800829A4: nop
    
            goto L_800829B8;
    }
    // 0x800829A4: nop

L_800829A8:
    // 0x800829A8: lbu         $t9, 0x1($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X1);
    // 0x800829AC: addiu       $t2, $t2, 0xFF
    ctx->r10 = ADD32(ctx->r10, 0XFF);
    // 0x800829B0: beq         $t9, $zero, L_800829A8
    if (ctx->r25 == 0) {
        // 0x800829B4: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_800829A8;
    }
    // 0x800829B4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_800829B8:
    // 0x800829B8: lbu         $t6, 0x0($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X0);
    // 0x800829BC: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800829C0: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x800829C4: addiu       $t2, $t2, 0x1F
    ctx->r10 = ADD32(ctx->r10, 0X1F);
L_800829C8:
    // 0x800829C8: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x800829CC: lbu         $t9, 0x1($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X1);
    // 0x800829D0: sra         $t8, $t7, 2
    ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
    // 0x800829D4: sll         $t6, $t9, 6
    ctx->r14 = S32(ctx->r25 << 6);
    // 0x800829D8: addiu       $t3, $t0, -0x1
    ctx->r11 = ADD32(ctx->r8, -0X1);
    // 0x800829DC: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x800829E0: subu        $t3, $t3, $t7
    ctx->r11 = SUB32(ctx->r11, ctx->r15);
    // 0x800829E4: b           L_80082AA8
    // 0x800829E8: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
        goto L_80082AA8;
    // 0x800829E8: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
L_800829EC:
    // 0x800829EC: sltiu       $at, $t2, 0x10
    ctx->r1 = ctx->r10 < 0X10 ? 1 : 0;
    // 0x800829F0: bne         $at, $zero, L_80082A6C
    if (ctx->r1 != 0) {
        // 0x800829F4: nop
    
            goto L_80082A6C;
    }
    // 0x800829F4: nop

    // 0x800829F8: andi        $t9, $t2, 0x8
    ctx->r25 = ctx->r10 & 0X8;
    // 0x800829FC: andi        $t6, $t2, 0x7
    ctx->r14 = ctx->r10 & 0X7;
    // 0x80082A00: or          $t3, $t0, $zero
    ctx->r11 = ctx->r8 | 0;
    // 0x80082A04: sll         $t8, $t9, 11
    ctx->r24 = S32(ctx->r25 << 11);
    // 0x80082A08: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x80082A0C: bne         $t2, $zero, L_80082A44
    if (ctx->r10 != 0) {
        // 0x80082A10: subu        $t3, $t3, $t8
        ctx->r11 = SUB32(ctx->r11, ctx->r24);
            goto L_80082A44;
    }
    // 0x80082A10: subu        $t3, $t3, $t8
    ctx->r11 = SUB32(ctx->r11, ctx->r24);
    // 0x80082A14: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x80082A18: nop

    // 0x80082A1C: bne         $t7, $zero, L_80082A34
    if (ctx->r15 != 0) {
        // 0x80082A20: nop
    
            goto L_80082A34;
    }
    // 0x80082A20: nop

L_80082A24:
    // 0x80082A24: lbu         $t9, 0x1($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X1);
    // 0x80082A28: addiu       $t2, $t2, 0xFF
    ctx->r10 = ADD32(ctx->r10, 0XFF);
    // 0x80082A2C: beq         $t9, $zero, L_80082A24
    if (ctx->r25 == 0) {
        // 0x80082A30: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_80082A24;
    }
    // 0x80082A30: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_80082A34:
    // 0x80082A34: lbu         $t8, 0x0($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X0);
    // 0x80082A38: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082A3C: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80082A40: addiu       $t2, $t2, 0x7
    ctx->r10 = ADD32(ctx->r10, 0X7);
L_80082A44:
    // 0x80082A44: lbu         $t6, 0x0($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X0);
    // 0x80082A48: lbu         $t9, 0x1($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X1);
    // 0x80082A4C: sra         $t7, $t6, 2
    ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
    // 0x80082A50: sll         $t8, $t9, 6
    ctx->r24 = S32(ctx->r25 << 6);
    // 0x80082A54: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x80082A58: subu        $t3, $t3, $t6
    ctx->r11 = SUB32(ctx->r11, ctx->r14);
    // 0x80082A5C: beq         $t3, $t0, L_80082B1C
    if (ctx->r11 == ctx->r8) {
        // 0x80082A60: addiu       $t1, $t1, 0x2
        ctx->r9 = ADD32(ctx->r9, 0X2);
            goto L_80082B1C;
    }
    // 0x80082A60: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x80082A64: b           L_80082AA8
    // 0x80082A68: addiu       $t3, $t3, -0x4000
    ctx->r11 = ADD32(ctx->r11, -0X4000);
        goto L_80082AA8;
    // 0x80082A68: addiu       $t3, $t3, -0x4000
    ctx->r11 = ADD32(ctx->r11, -0X4000);
L_80082A6C:
    // 0x80082A6C: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x80082A70: addiu       $t3, $t0, -0x1
    ctx->r11 = ADD32(ctx->r8, -0X1);
    // 0x80082A74: srl         $t9, $t2, 2
    ctx->r25 = S32(U32(ctx->r10) >> 2);
    // 0x80082A78: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x80082A7C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80082A80: subu        $t3, $t3, $t8
    ctx->r11 = SUB32(ctx->r11, ctx->r24);
    // 0x80082A84: lbu         $t6, 0x0($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0X0);
    // 0x80082A88: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082A8C: sb          $t6, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r14;
    // 0x80082A90: lbu         $t9, 0x1($t3)
    ctx->r25 = MEM_BU(ctx->r11, 0X1);
    // 0x80082A94: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082A98: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082A9C: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80082AA0: b           L_80082AE0
    // 0x80082AA4: sb          $t9, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r25;
        goto L_80082AE0;
    // 0x80082AA4: sb          $t9, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r25;
L_80082AA8:
    // 0x80082AA8: lbu         $t7, 0x0($t3)
    ctx->r15 = MEM_BU(ctx->r11, 0X0);
    // 0x80082AAC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082AB0: sb          $t7, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r15;
    // 0x80082AB4: lbu         $t8, 0x1($t3)
    ctx->r24 = MEM_BU(ctx->r11, 0X1);
    // 0x80082AB8: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80082ABC: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80082AC0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082AC4: sb          $t8, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r24;
L_80082AC8:
    // 0x80082AC8: lbu         $t6, 0x0($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0X0);
    // 0x80082ACC: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x80082AD0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082AD4: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80082AD8: bne         $t2, $zero, L_80082AC8
    if (ctx->r10 != 0) {
        // 0x80082ADC: sb          $t6, -0x1($t0)
        MEM_B(-0X1, ctx->r8) = ctx->r14;
            goto L_80082AC8;
    }
    // 0x80082ADC: sb          $t6, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r14;
L_80082AE0:
    // 0x80082AE0: lbu         $t2, -0x2($t1)
    ctx->r10 = MEM_BU(ctx->r9, -0X2);
    // 0x80082AE4: nop

    // 0x80082AE8: andi        $t9, $t2, 0x3
    ctx->r25 = ctx->r10 & 0X3;
    // 0x80082AEC: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
    // 0x80082AF0: beq         $t2, $zero, L_8008284C
    if (ctx->r10 == 0) {
        // 0x80082AF4: nop
    
            goto L_8008284C;
    }
    // 0x80082AF4: nop

L_80082AF8:
    // 0x80082AF8: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x80082AFC: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x80082B00: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082B04: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082B08: bne         $t2, $zero, L_80082AF8
    if (ctx->r10 != 0) {
        // 0x80082B0C: sb          $t7, -0x1($t0)
        MEM_B(-0X1, ctx->r8) = ctx->r15;
            goto L_80082AF8;
    }
    // 0x80082B0C: sb          $t7, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r15;
    // 0x80082B10: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80082B14: b           L_80082940
    // 0x80082B18: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
        goto L_80082940;
    // 0x80082B18: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_80082B1C:
    // 0x80082B1C: subu        $t8, $t0, $a2
    ctx->r24 = SUB32(ctx->r8, ctx->r6);
    // 0x80082B20: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x80082B24: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x80082B28: nop

    // 0x80082B2C: bne         $t1, $t6, L_80082B3C
    if (ctx->r9 != ctx->r14) {
        // 0x80082B30: nop
    
            goto L_80082B3C;
    }
    // 0x80082B30: nop

    // 0x80082B34: b           L_80082B60
    // 0x80082B38: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
        goto L_80082B60;
    // 0x80082B38: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
L_80082B3C:
    // 0x80082B3C: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x80082B40: nop

    // 0x80082B44: sltu        $at, $t1, $t9
    ctx->r1 = ctx->r9 < ctx->r25 ? 1 : 0;
    // 0x80082B48: beq         $at, $zero, L_80082B58
    if (ctx->r1 == 0) {
        // 0x80082B4C: nop
    
            goto L_80082B58;
    }
    // 0x80082B4C: nop

    // 0x80082B50: b           L_80082B5C
    // 0x80082B54: addiu       $t5, $zero, -0x8
    ctx->r13 = ADD32(0, -0X8);
        goto L_80082B5C;
    // 0x80082B54: addiu       $t5, $zero, -0x8
    ctx->r13 = ADD32(0, -0X8);
L_80082B58:
    // 0x80082B58: addiu       $t5, $zero, -0x4
    ctx->r13 = ADD32(0, -0X4);
L_80082B5C:
    // 0x80082B5C: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
L_80082B60:
    // 0x80082B60: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x80082B64: jr          $ra
    // 0x80082B68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80082B68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80082B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80082B70: addu        $t6, $a0, $a1
    ctx->r14 = ADD32(ctx->r4, ctx->r5);
    // 0x80082B74: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x80082B78: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x80082B7C: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x80082B80: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x80082B84: sw          $t8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r24;
    // 0x80082B88: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x80082B8C: lbu         $t9, 0x0($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X0);
    // 0x80082B90: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x80082B94: slti        $at, $t9, 0x12
    ctx->r1 = SIGNED(ctx->r25) < 0X12 ? 1 : 0;
    // 0x80082B98: bne         $at, $zero, L_80082C08
    if (ctx->r1 != 0) {
        // 0x80082B9C: nop
    
            goto L_80082C08;
    }
    // 0x80082B9C: nop

    // 0x80082BA0: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80082BA4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082BA8: addiu       $t2, $t2, -0x11
    ctx->r10 = ADD32(ctx->r10, -0X11);
    // 0x80082BAC: sltiu       $at, $t2, 0x4
    ctx->r1 = ctx->r10 < 0X4 ? 1 : 0;
    // 0x80082BB0: bne         $at, $zero, L_80082FF8
    if (ctx->r1 != 0) {
        // 0x80082BB4: nop
    
            goto L_80082FF8;
    }
    // 0x80082BB4: nop

    // 0x80082BB8: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x80082BBC: nop

    // 0x80082BC0: subu        $t7, $t6, $t0
    ctx->r15 = SUB32(ctx->r14, ctx->r8);
    // 0x80082BC4: sltu        $at, $t7, $t2
    ctx->r1 = ctx->r15 < ctx->r10 ? 1 : 0;
    // 0x80082BC8: bne         $at, $zero, L_800830D8
    if (ctx->r1 != 0) {
        // 0x80082BCC: nop
    
            goto L_800830D8;
    }
    // 0x80082BCC: nop

    // 0x80082BD0: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x80082BD4: addiu       $t6, $t2, 0x1
    ctx->r14 = ADD32(ctx->r10, 0X1);
    // 0x80082BD8: subu        $t9, $t8, $t1
    ctx->r25 = SUB32(ctx->r24, ctx->r9);
    // 0x80082BDC: sltu        $at, $t9, $t6
    ctx->r1 = ctx->r25 < ctx->r14 ? 1 : 0;
    // 0x80082BE0: bne         $at, $zero, L_800830C8
    if (ctx->r1 != 0) {
        // 0x80082BE4: nop
    
            goto L_800830C8;
    }
    // 0x80082BE4: nop

L_80082BE8:
    // 0x80082BE8: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x80082BEC: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x80082BF0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082BF4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082BF8: bne         $t2, $zero, L_80082BE8
    if (ctx->r10 != 0) {
        // 0x80082BFC: sb          $t7, -0x1($t0)
        MEM_B(-0X1, ctx->r8) = ctx->r15;
            goto L_80082BE8;
    }
    // 0x80082BFC: sb          $t7, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r15;
    // 0x80082C00: b           L_80082D08
    // 0x80082C04: nop

        goto L_80082D08;
    // 0x80082C04: nop

L_80082C08:
    // 0x80082C08: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x80082C0C: nop

    // 0x80082C10: sltu        $at, $t1, $t8
    ctx->r1 = ctx->r9 < ctx->r24 ? 1 : 0;
    // 0x80082C14: beq         $at, $zero, L_8008306C
    if (ctx->r1 == 0) {
        // 0x80082C18: nop
    
            goto L_8008306C;
    }
    // 0x80082C18: nop

L_80082C1C:
    // 0x80082C1C: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80082C20: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082C24: sltiu       $at, $t2, 0x10
    ctx->r1 = ctx->r10 < 0X10 ? 1 : 0;
    // 0x80082C28: beq         $at, $zero, L_80082D88
    if (ctx->r1 == 0) {
        // 0x80082C2C: nop
    
            goto L_80082D88;
    }
    // 0x80082C2C: nop

    // 0x80082C30: bne         $t2, $zero, L_80082C90
    if (ctx->r10 != 0) {
        // 0x80082C34: nop
    
            goto L_80082C90;
    }
    // 0x80082C34: nop

    // 0x80082C38: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x80082C3C: nop

    // 0x80082C40: subu        $t6, $t9, $t1
    ctx->r14 = SUB32(ctx->r25, ctx->r9);
    // 0x80082C44: beq         $t6, $zero, L_800830C8
    if (ctx->r14 == 0) {
        // 0x80082C48: nop
    
            goto L_800830C8;
    }
    // 0x80082C48: nop

    // 0x80082C4C: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x80082C50: nop

    // 0x80082C54: bne         $t7, $zero, L_80082C80
    if (ctx->r15 != 0) {
        // 0x80082C58: nop
    
            goto L_80082C80;
    }
    // 0x80082C58: nop

L_80082C5C:
    // 0x80082C5C: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x80082C60: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082C64: subu        $t9, $t8, $t1
    ctx->r25 = SUB32(ctx->r24, ctx->r9);
    // 0x80082C68: beq         $t9, $zero, L_800830C8
    if (ctx->r25 == 0) {
        // 0x80082C6C: addiu       $t2, $t2, 0xFF
        ctx->r10 = ADD32(ctx->r10, 0XFF);
            goto L_800830C8;
    }
    // 0x80082C6C: addiu       $t2, $t2, 0xFF
    ctx->r10 = ADD32(ctx->r10, 0XFF);
    // 0x80082C70: lbu         $t6, 0x0($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X0);
    // 0x80082C74: nop

    // 0x80082C78: beq         $t6, $zero, L_80082C5C
    if (ctx->r14 == 0) {
        // 0x80082C7C: nop
    
            goto L_80082C5C;
    }
    // 0x80082C7C: nop

L_80082C80:
    // 0x80082C80: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x80082C84: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082C88: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x80082C8C: addiu       $t2, $t2, 0xF
    ctx->r10 = ADD32(ctx->r10, 0XF);
L_80082C90:
    // 0x80082C90: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x80082C94: addiu       $t6, $t2, 0x3
    ctx->r14 = ADD32(ctx->r10, 0X3);
    // 0x80082C98: subu        $t9, $t8, $t0
    ctx->r25 = SUB32(ctx->r24, ctx->r8);
    // 0x80082C9C: sltu        $at, $t9, $t6
    ctx->r1 = ctx->r25 < ctx->r14 ? 1 : 0;
    // 0x80082CA0: bne         $at, $zero, L_800830D8
    if (ctx->r1 != 0) {
        // 0x80082CA4: nop
    
            goto L_800830D8;
    }
    // 0x80082CA4: nop

    // 0x80082CA8: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x80082CAC: addiu       $t9, $t2, 0x4
    ctx->r25 = ADD32(ctx->r10, 0X4);
    // 0x80082CB0: subu        $t8, $t7, $t1
    ctx->r24 = SUB32(ctx->r15, ctx->r9);
    // 0x80082CB4: sltu        $at, $t8, $t9
    ctx->r1 = ctx->r24 < ctx->r25 ? 1 : 0;
    // 0x80082CB8: bne         $at, $zero, L_800830C8
    if (ctx->r1 != 0) {
        // 0x80082CBC: nop
    
            goto L_800830C8;
    }
    // 0x80082CBC: nop

    // 0x80082CC0: lbu         $t6, 0x0($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X0);
    // 0x80082CC4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082CC8: sb          $t6, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r14;
    // 0x80082CCC: lbu         $t7, 0x1($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X1);
    // 0x80082CD0: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082CD4: sb          $t7, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r15;
    // 0x80082CD8: lbu         $t8, 0x1($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X1);
    // 0x80082CDC: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082CE0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082CE4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082CE8: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082CEC: sb          $t8, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r24;
L_80082CF0:
    // 0x80082CF0: lbu         $t9, 0x0($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X0);
    // 0x80082CF4: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x80082CF8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082CFC: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082D00: bne         $t2, $zero, L_80082CF0
    if (ctx->r10 != 0) {
        // 0x80082D04: sb          $t9, -0x1($t0)
        MEM_B(-0X1, ctx->r8) = ctx->r25;
            goto L_80082CF0;
    }
    // 0x80082D04: sb          $t9, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r25;
L_80082D08:
    // 0x80082D08: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80082D0C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082D10: sltiu       $at, $t2, 0x10
    ctx->r1 = ctx->r10 < 0X10 ? 1 : 0;
    // 0x80082D14: beq         $at, $zero, L_80082D88
    if (ctx->r1 == 0) {
        // 0x80082D18: nop
    
            goto L_80082D88;
    }
    // 0x80082D18: nop

    // 0x80082D1C: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x80082D20: addiu       $t3, $t0, -0x801
    ctx->r11 = ADD32(ctx->r8, -0X801);
    // 0x80082D24: srl         $t6, $t2, 2
    ctx->r14 = S32(U32(ctx->r10) >> 2);
    // 0x80082D28: subu        $t3, $t3, $t6
    ctx->r11 = SUB32(ctx->r11, ctx->r14);
    // 0x80082D2C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80082D30: subu        $t3, $t3, $t8
    ctx->r11 = SUB32(ctx->r11, ctx->r24);
    // 0x80082D34: sltu        $at, $t3, $a2
    ctx->r1 = ctx->r11 < ctx->r6 ? 1 : 0;
    // 0x80082D38: bne         $at, $zero, L_800830E8
    if (ctx->r1 != 0) {
        // 0x80082D3C: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_800830E8;
    }
    // 0x80082D3C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082D40: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x80082D44: nop

    // 0x80082D48: subu        $t6, $t9, $t0
    ctx->r14 = SUB32(ctx->r25, ctx->r8);
    // 0x80082D4C: sltiu       $at, $t6, 0x3
    ctx->r1 = ctx->r14 < 0X3 ? 1 : 0;
    // 0x80082D50: bne         $at, $zero, L_800830D8
    if (ctx->r1 != 0) {
        // 0x80082D54: nop
    
            goto L_800830D8;
    }
    // 0x80082D54: nop

    // 0x80082D58: lbu         $t7, 0x0($t3)
    ctx->r15 = MEM_BU(ctx->r11, 0X0);
    // 0x80082D5C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082D60: sb          $t7, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r15;
    // 0x80082D64: lbu         $t8, 0x1($t3)
    ctx->r24 = MEM_BU(ctx->r11, 0X1);
    // 0x80082D68: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082D6C: sb          $t8, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r24;
    // 0x80082D70: lbu         $t9, 0x2($t3)
    ctx->r25 = MEM_BU(ctx->r11, 0X2);
    // 0x80082D74: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80082D78: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80082D7C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082D80: b           L_80082FE0
    // 0x80082D84: sb          $t9, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r25;
        goto L_80082FE0;
    // 0x80082D84: sb          $t9, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r25;
L_80082D88:
    // 0x80082D88: sltiu       $at, $t2, 0x40
    ctx->r1 = ctx->r10 < 0X40 ? 1 : 0;
    // 0x80082D8C: bne         $at, $zero, L_80082DE8
    if (ctx->r1 != 0) {
        // 0x80082D90: nop
    
            goto L_80082DE8;
    }
    // 0x80082D90: nop

    // 0x80082D94: lbu         $t8, 0x0($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X0);
    // 0x80082D98: srl         $t6, $t2, 2
    ctx->r14 = S32(U32(ctx->r10) >> 2);
    // 0x80082D9C: addiu       $t3, $t0, -0x1
    ctx->r11 = ADD32(ctx->r8, -0X1);
    // 0x80082DA0: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x80082DA4: subu        $t3, $t3, $t7
    ctx->r11 = SUB32(ctx->r11, ctx->r15);
    // 0x80082DA8: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80082DAC: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x80082DB0: srl         $t6, $t2, 5
    ctx->r14 = S32(U32(ctx->r10) >> 5);
    // 0x80082DB4: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x80082DB8: sltu        $at, $t3, $a2
    ctx->r1 = ctx->r11 < ctx->r6 ? 1 : 0;
    // 0x80082DBC: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082DC0: bne         $at, $zero, L_800830E8
    if (ctx->r1 != 0) {
        // 0x80082DC4: addiu       $t2, $t2, -0x1
        ctx->r10 = ADD32(ctx->r10, -0X1);
            goto L_800830E8;
    }
    // 0x80082DC4: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x80082DC8: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x80082DCC: addiu       $t9, $t2, 0x2
    ctx->r25 = ADD32(ctx->r10, 0X2);
    // 0x80082DD0: subu        $t8, $t7, $t0
    ctx->r24 = SUB32(ctx->r15, ctx->r8);
    // 0x80082DD4: sltu        $at, $t8, $t9
    ctx->r1 = ctx->r24 < ctx->r25 ? 1 : 0;
    // 0x80082DD8: beq         $at, $zero, L_80082FA8
    if (ctx->r1 == 0) {
        // 0x80082DDC: nop
    
            goto L_80082FA8;
    }
    // 0x80082DDC: nop

    // 0x80082DE0: b           L_800830D8
    // 0x80082DE4: nop

        goto L_800830D8;
    // 0x80082DE4: nop

L_80082DE8:
    // 0x80082DE8: sltiu       $at, $t2, 0x20
    ctx->r1 = ctx->r10 < 0X20 ? 1 : 0;
    // 0x80082DEC: bne         $at, $zero, L_80082E80
    if (ctx->r1 != 0) {
        // 0x80082DF0: nop
    
            goto L_80082E80;
    }
    // 0x80082DF0: nop

    // 0x80082DF4: andi        $t6, $t2, 0x1F
    ctx->r14 = ctx->r10 & 0X1F;
    // 0x80082DF8: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x80082DFC: bne         $t2, $zero, L_80082E5C
    if (ctx->r10 != 0) {
        // 0x80082E00: nop
    
            goto L_80082E5C;
    }
    // 0x80082E00: nop

    // 0x80082E04: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x80082E08: nop

    // 0x80082E0C: subu        $t8, $t7, $t1
    ctx->r24 = SUB32(ctx->r15, ctx->r9);
    // 0x80082E10: beq         $t8, $zero, L_800830C8
    if (ctx->r24 == 0) {
        // 0x80082E14: nop
    
            goto L_800830C8;
    }
    // 0x80082E14: nop

    // 0x80082E18: lbu         $t9, 0x0($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X0);
    // 0x80082E1C: nop

    // 0x80082E20: bne         $t9, $zero, L_80082E4C
    if (ctx->r25 != 0) {
        // 0x80082E24: nop
    
            goto L_80082E4C;
    }
    // 0x80082E24: nop

L_80082E28:
    // 0x80082E28: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x80082E2C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082E30: subu        $t7, $t6, $t1
    ctx->r15 = SUB32(ctx->r14, ctx->r9);
    // 0x80082E34: beq         $t7, $zero, L_800830C8
    if (ctx->r15 == 0) {
        // 0x80082E38: addiu       $t2, $t2, 0xFF
        ctx->r10 = ADD32(ctx->r10, 0XFF);
            goto L_800830C8;
    }
    // 0x80082E38: addiu       $t2, $t2, 0xFF
    ctx->r10 = ADD32(ctx->r10, 0XFF);
    // 0x80082E3C: lbu         $t8, 0x0($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X0);
    // 0x80082E40: nop

    // 0x80082E44: beq         $t8, $zero, L_80082E28
    if (ctx->r24 == 0) {
        // 0x80082E48: nop
    
            goto L_80082E28;
    }
    // 0x80082E48: nop

L_80082E4C:
    // 0x80082E4C: lbu         $t9, 0x0($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X0);
    // 0x80082E50: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082E54: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x80082E58: addiu       $t2, $t2, 0x1F
    ctx->r10 = ADD32(ctx->r10, 0X1F);
L_80082E5C:
    // 0x80082E5C: lbu         $t6, 0x0($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X0);
    // 0x80082E60: lbu         $t8, 0x1($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X1);
    // 0x80082E64: sra         $t7, $t6, 2
    ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
    // 0x80082E68: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x80082E6C: addiu       $t3, $t0, -0x1
    ctx->r11 = ADD32(ctx->r8, -0X1);
    // 0x80082E70: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80082E74: subu        $t3, $t3, $t6
    ctx->r11 = SUB32(ctx->r11, ctx->r14);
    // 0x80082E78: b           L_80082F84
    // 0x80082E7C: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
        goto L_80082F84;
    // 0x80082E7C: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
L_80082E80:
    // 0x80082E80: sltiu       $at, $t2, 0x10
    ctx->r1 = ctx->r10 < 0X10 ? 1 : 0;
    // 0x80082E84: bne         $at, $zero, L_80082F28
    if (ctx->r1 != 0) {
        // 0x80082E88: nop
    
            goto L_80082F28;
    }
    // 0x80082E88: nop

    // 0x80082E8C: andi        $t8, $t2, 0x8
    ctx->r24 = ctx->r10 & 0X8;
    // 0x80082E90: andi        $t9, $t2, 0x7
    ctx->r25 = ctx->r10 & 0X7;
    // 0x80082E94: or          $t3, $t0, $zero
    ctx->r11 = ctx->r8 | 0;
    // 0x80082E98: sll         $t7, $t8, 11
    ctx->r15 = S32(ctx->r24 << 11);
    // 0x80082E9C: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
    // 0x80082EA0: bne         $t2, $zero, L_80082F00
    if (ctx->r10 != 0) {
        // 0x80082EA4: subu        $t3, $t3, $t7
        ctx->r11 = SUB32(ctx->r11, ctx->r15);
            goto L_80082F00;
    }
    // 0x80082EA4: subu        $t3, $t3, $t7
    ctx->r11 = SUB32(ctx->r11, ctx->r15);
    // 0x80082EA8: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x80082EAC: nop

    // 0x80082EB0: subu        $t8, $t6, $t1
    ctx->r24 = SUB32(ctx->r14, ctx->r9);
    // 0x80082EB4: beq         $t8, $zero, L_800830C8
    if (ctx->r24 == 0) {
        // 0x80082EB8: nop
    
            goto L_800830C8;
    }
    // 0x80082EB8: nop

    // 0x80082EBC: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x80082EC0: nop

    // 0x80082EC4: bne         $t7, $zero, L_80082EF0
    if (ctx->r15 != 0) {
        // 0x80082EC8: nop
    
            goto L_80082EF0;
    }
    // 0x80082EC8: nop

L_80082ECC:
    // 0x80082ECC: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x80082ED0: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082ED4: subu        $t6, $t9, $t1
    ctx->r14 = SUB32(ctx->r25, ctx->r9);
    // 0x80082ED8: beq         $t6, $zero, L_800830C8
    if (ctx->r14 == 0) {
        // 0x80082EDC: addiu       $t2, $t2, 0xFF
        ctx->r10 = ADD32(ctx->r10, 0XFF);
            goto L_800830C8;
    }
    // 0x80082EDC: addiu       $t2, $t2, 0xFF
    ctx->r10 = ADD32(ctx->r10, 0XFF);
    // 0x80082EE0: lbu         $t8, 0x0($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X0);
    // 0x80082EE4: nop

    // 0x80082EE8: beq         $t8, $zero, L_80082ECC
    if (ctx->r24 == 0) {
        // 0x80082EEC: nop
    
            goto L_80082ECC;
    }
    // 0x80082EEC: nop

L_80082EF0:
    // 0x80082EF0: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x80082EF4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082EF8: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x80082EFC: addiu       $t2, $t2, 0x7
    ctx->r10 = ADD32(ctx->r10, 0X7);
L_80082F00:
    // 0x80082F00: lbu         $t9, 0x0($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X0);
    // 0x80082F04: lbu         $t8, 0x1($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X1);
    // 0x80082F08: sra         $t6, $t9, 2
    ctx->r14 = S32(SIGNED(ctx->r25) >> 2);
    // 0x80082F0C: sll         $t7, $t8, 6
    ctx->r15 = S32(ctx->r24 << 6);
    // 0x80082F10: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x80082F14: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x80082F18: beq         $t3, $t0, L_8008307C
    if (ctx->r11 == ctx->r8) {
        // 0x80082F1C: addiu       $t1, $t1, 0x2
        ctx->r9 = ADD32(ctx->r9, 0X2);
            goto L_8008307C;
    }
    // 0x80082F1C: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x80082F20: b           L_80082F84
    // 0x80082F24: addiu       $t3, $t3, -0x4000
    ctx->r11 = ADD32(ctx->r11, -0X4000);
        goto L_80082F84;
    // 0x80082F24: addiu       $t3, $t3, -0x4000
    ctx->r11 = ADD32(ctx->r11, -0X4000);
L_80082F28:
    // 0x80082F28: lbu         $t6, 0x0($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X0);
    // 0x80082F2C: addiu       $t3, $t0, -0x1
    ctx->r11 = ADD32(ctx->r8, -0X1);
    // 0x80082F30: srl         $t8, $t2, 2
    ctx->r24 = S32(U32(ctx->r10) >> 2);
    // 0x80082F34: subu        $t3, $t3, $t8
    ctx->r11 = SUB32(ctx->r11, ctx->r24);
    // 0x80082F38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80082F3C: subu        $t3, $t3, $t7
    ctx->r11 = SUB32(ctx->r11, ctx->r15);
    // 0x80082F40: sltu        $at, $t3, $a2
    ctx->r1 = ctx->r11 < ctx->r6 ? 1 : 0;
    // 0x80082F44: bne         $at, $zero, L_800830E8
    if (ctx->r1 != 0) {
        // 0x80082F48: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_800830E8;
    }
    // 0x80082F48: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80082F4C: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x80082F50: nop

    // 0x80082F54: subu        $t8, $t9, $t0
    ctx->r24 = SUB32(ctx->r25, ctx->r8);
    // 0x80082F58: sltiu       $at, $t8, 0x2
    ctx->r1 = ctx->r24 < 0X2 ? 1 : 0;
    // 0x80082F5C: bne         $at, $zero, L_800830D8
    if (ctx->r1 != 0) {
        // 0x80082F60: nop
    
            goto L_800830D8;
    }
    // 0x80082F60: nop

    // 0x80082F64: lbu         $t6, 0x0($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0X0);
    // 0x80082F68: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082F6C: sb          $t6, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r14;
    // 0x80082F70: lbu         $t7, 0x1($t3)
    ctx->r15 = MEM_BU(ctx->r11, 0X1);
    // 0x80082F74: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082F78: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80082F7C: b           L_80082FE0
    // 0x80082F80: sb          $t7, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r15;
        goto L_80082FE0;
    // 0x80082F80: sb          $t7, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r15;
L_80082F84:
    // 0x80082F84: sltu        $at, $t3, $a2
    ctx->r1 = ctx->r11 < ctx->r6 ? 1 : 0;
    // 0x80082F88: bne         $at, $zero, L_800830E8
    if (ctx->r1 != 0) {
        // 0x80082F8C: nop
    
            goto L_800830E8;
    }
    // 0x80082F8C: nop

    // 0x80082F90: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x80082F94: addiu       $t6, $t2, 0x2
    ctx->r14 = ADD32(ctx->r10, 0X2);
    // 0x80082F98: subu        $t8, $t9, $t0
    ctx->r24 = SUB32(ctx->r25, ctx->r8);
    // 0x80082F9C: sltu        $at, $t8, $t6
    ctx->r1 = ctx->r24 < ctx->r14 ? 1 : 0;
    // 0x80082FA0: bne         $at, $zero, L_800830D8
    if (ctx->r1 != 0) {
        // 0x80082FA4: nop
    
            goto L_800830D8;
    }
    // 0x80082FA4: nop

L_80082FA8:
    // 0x80082FA8: lbu         $t7, 0x0($t3)
    ctx->r15 = MEM_BU(ctx->r11, 0X0);
    // 0x80082FAC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082FB0: sb          $t7, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r15;
    // 0x80082FB4: lbu         $t9, 0x1($t3)
    ctx->r25 = MEM_BU(ctx->r11, 0X1);
    // 0x80082FB8: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80082FBC: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80082FC0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082FC4: sb          $t9, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r25;
L_80082FC8:
    // 0x80082FC8: lbu         $t8, 0x0($t3)
    ctx->r24 = MEM_BU(ctx->r11, 0X0);
    // 0x80082FCC: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x80082FD0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80082FD4: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80082FD8: bne         $t2, $zero, L_80082FC8
    if (ctx->r10 != 0) {
        // 0x80082FDC: sb          $t8, -0x1($t0)
        MEM_B(-0X1, ctx->r8) = ctx->r24;
            goto L_80082FC8;
    }
    // 0x80082FDC: sb          $t8, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r24;
L_80082FE0:
    // 0x80082FE0: lbu         $t2, -0x2($t1)
    ctx->r10 = MEM_BU(ctx->r9, -0X2);
    // 0x80082FE4: nop

    // 0x80082FE8: andi        $t6, $t2, 0x3
    ctx->r14 = ctx->r10 & 0X3;
    // 0x80082FEC: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x80082FF0: beq         $t2, $zero, L_80083058
    if (ctx->r10 == 0) {
        // 0x80082FF4: nop
    
            goto L_80083058;
    }
    // 0x80082FF4: nop

L_80082FF8:
    // 0x80082FF8: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x80082FFC: nop

    // 0x80083000: subu        $t9, $t7, $t0
    ctx->r25 = SUB32(ctx->r15, ctx->r8);
    // 0x80083004: sltu        $at, $t9, $t2
    ctx->r1 = ctx->r25 < ctx->r10 ? 1 : 0;
    // 0x80083008: bne         $at, $zero, L_800830D8
    if (ctx->r1 != 0) {
        // 0x8008300C: nop
    
            goto L_800830D8;
    }
    // 0x8008300C: nop

    // 0x80083010: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x80083014: addiu       $t7, $t2, 0x1
    ctx->r15 = ADD32(ctx->r10, 0X1);
    // 0x80083018: subu        $t6, $t8, $t1
    ctx->r14 = SUB32(ctx->r24, ctx->r9);
    // 0x8008301C: sltu        $at, $t6, $t7
    ctx->r1 = ctx->r14 < ctx->r15 ? 1 : 0;
    // 0x80083020: bne         $at, $zero, L_800830C8
    if (ctx->r1 != 0) {
        // 0x80083024: nop
    
            goto L_800830C8;
    }
    // 0x80083024: nop

L_80083028:
    // 0x80083028: lbu         $t9, 0x0($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X0);
    // 0x8008302C: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x80083030: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80083034: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80083038: bne         $t2, $zero, L_80083028
    if (ctx->r10 != 0) {
        // 0x8008303C: sb          $t9, -0x1($t0)
        MEM_B(-0X1, ctx->r8) = ctx->r25;
            goto L_80083028;
    }
    // 0x8008303C: sb          $t9, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r25;
    // 0x80083040: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x80083044: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80083048: lbu         $t2, -0x1($t1)
    ctx->r10 = MEM_BU(ctx->r9, -0X1);
    // 0x8008304C: sltu        $at, $t1, $t8
    ctx->r1 = ctx->r9 < ctx->r24 ? 1 : 0;
    // 0x80083050: bne         $at, $zero, L_80082D88
    if (ctx->r1 != 0) {
        // 0x80083054: nop
    
            goto L_80082D88;
    }
    // 0x80083054: nop

L_80083058:
    // 0x80083058: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x8008305C: nop

    // 0x80083060: sltu        $at, $t1, $t6
    ctx->r1 = ctx->r9 < ctx->r14 ? 1 : 0;
    // 0x80083064: bne         $at, $zero, L_80082C1C
    if (ctx->r1 != 0) {
        // 0x80083068: nop
    
            goto L_80082C1C;
    }
    // 0x80083068: nop

L_8008306C:
    // 0x8008306C: subu        $t7, $t0, $a2
    ctx->r15 = SUB32(ctx->r8, ctx->r6);
    // 0x80083070: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x80083074: b           L_800830F4
    // 0x80083078: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
        goto L_800830F4;
    // 0x80083078: addiu       $v0, $zero, -0x7
    ctx->r2 = ADD32(0, -0X7);
L_8008307C:
    // 0x8008307C: subu        $t9, $t0, $a2
    ctx->r25 = SUB32(ctx->r8, ctx->r6);
    // 0x80083080: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x80083084: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x80083088: nop

    // 0x8008308C: bne         $t1, $t8, L_8008309C
    if (ctx->r9 != ctx->r24) {
        // 0x80083090: nop
    
            goto L_8008309C;
    }
    // 0x80083090: nop

    // 0x80083094: b           L_800830C0
    // 0x80083098: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
        goto L_800830C0;
    // 0x80083098: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
L_8008309C:
    // 0x8008309C: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x800830A0: nop

    // 0x800830A4: sltu        $at, $t1, $t6
    ctx->r1 = ctx->r9 < ctx->r14 ? 1 : 0;
    // 0x800830A8: beq         $at, $zero, L_800830B8
    if (ctx->r1 == 0) {
        // 0x800830AC: nop
    
            goto L_800830B8;
    }
    // 0x800830AC: nop

    // 0x800830B0: b           L_800830BC
    // 0x800830B4: addiu       $t5, $zero, -0x8
    ctx->r13 = ADD32(0, -0X8);
        goto L_800830BC;
    // 0x800830B4: addiu       $t5, $zero, -0x8
    ctx->r13 = ADD32(0, -0X8);
L_800830B8:
    // 0x800830B8: addiu       $t5, $zero, -0x4
    ctx->r13 = ADD32(0, -0X4);
L_800830BC:
    // 0x800830BC: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
L_800830C0:
    // 0x800830C0: b           L_800830F4
    // 0x800830C4: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
        goto L_800830F4;
    // 0x800830C4: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_800830C8:
    // 0x800830C8: subu        $t7, $t0, $a2
    ctx->r15 = SUB32(ctx->r8, ctx->r6);
    // 0x800830CC: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x800830D0: b           L_800830F4
    // 0x800830D4: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
        goto L_800830F4;
    // 0x800830D4: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
L_800830D8:
    // 0x800830D8: subu        $t9, $t0, $a2
    ctx->r25 = SUB32(ctx->r8, ctx->r6);
    // 0x800830DC: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x800830E0: b           L_800830F4
    // 0x800830E4: addiu       $v0, $zero, -0x5
    ctx->r2 = ADD32(0, -0X5);
        goto L_800830F4;
    // 0x800830E4: addiu       $v0, $zero, -0x5
    ctx->r2 = ADD32(0, -0X5);
L_800830E8:
    // 0x800830E8: subu        $t8, $t0, $a2
    ctx->r24 = SUB32(ctx->r8, ctx->r6);
    // 0x800830EC: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x800830F0: addiu       $v0, $zero, -0x6
    ctx->r2 = ADD32(0, -0X6);
L_800830F4:
    // 0x800830F4: jr          $ra
    // 0x800830F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800830F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800830FC: nop

;}
RECOMP_FUNC void func_80083100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80083100: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80083104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80083108: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8008310C: addiu       $a0, $a0, 0x32E0
    ctx->r4 = ADD32(ctx->r4, 0X32E0);
    // 0x80083110: jal         0x80076EC0
    // 0x80083114: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80076EC0(rdram, ctx);
        goto after_0;
    // 0x80083114: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80083118: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8008311C: lw          $a0, 0x32E0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X32E0);
    // 0x80083120: jal         0x800A4654
    // 0x80083124: nop

    func_800A4654(rdram, ctx);
        goto after_1;
    // 0x80083124: nop

    after_1:
    // 0x80083128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008312C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083130: sw          $zero, 0x3318($at)
    MEM_W(0X3318, ctx->r1) = 0;
    // 0x80083134: jr          $ra
    // 0x80083138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80083138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008313C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008313C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80083140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80083144: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80083148: jal         0x80077028
    // 0x8008314C: addiu       $a0, $a0, 0x32E0
    ctx->r4 = ADD32(ctx->r4, 0X32E0);
    func_80077028(rdram, ctx);
        goto after_0;
    // 0x8008314C: addiu       $a0, $a0, 0x32E0
    ctx->r4 = ADD32(ctx->r4, 0X32E0);
    after_0:
    // 0x80083150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80083154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80083158: jr          $ra
    // 0x8008315C: nop

    return;
    // 0x8008315C: nop

;}
RECOMP_FUNC void func_80083160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80083160: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80083164: lw          $t6, 0x3318($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3318);
    // 0x80083168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008316C: bne         $t6, $zero, L_8008328C
    if (ctx->r14 != 0) {
        // 0x80083170: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8008328C;
    }
    // 0x80083170: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80083174: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80083178: lw          $t7, 0x331C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X331C);
    // 0x8008317C: nop

    // 0x80083180: beq         $t7, $zero, L_800831C4
    if (ctx->r15 == 0) {
        // 0x80083184: nop
    
            goto L_800831C4;
    }
    // 0x80083184: nop

    // 0x80083188: jal         0x80083100
    // 0x8008318C: nop

    func_80083100(rdram, ctx);
        goto after_0;
    // 0x8008318C: nop

    after_0:
    // 0x80083190: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083194: sw          $zero, 0x331C($at)
    MEM_W(0X331C, ctx->r1) = 0;
    // 0x80083198: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8008319C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800831A0: jal         0x8007ECC8
    // 0x800831A4: nop

    func_8007ECC8(rdram, ctx);
        goto after_1;
    // 0x800831A4: nop

    after_1:
    // 0x800831A8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800831AC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800831B0: jal         0x8007EA2C
    // 0x800831B4: sw          $t8, 0x3324($at)
    MEM_W(0X3324, ctx->r1) = ctx->r24;
    func_8007EA2C(rdram, ctx);
        goto after_2;
    // 0x800831B4: sw          $t8, 0x3324($at)
    MEM_W(0X3324, ctx->r1) = ctx->r24;
    after_2:
    // 0x800831B8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800831BC: b           L_80083304
    // 0x800831C0: sw          $zero, 0x3320($at)
    MEM_W(0X3320, ctx->r1) = 0;
        goto L_80083304;
    // 0x800831C0: sw          $zero, 0x3320($at)
    MEM_W(0X3320, ctx->r1) = 0;
L_800831C4:
    // 0x800831C4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800831C8: addiu       $t9, $t9, -0x10D0
    ctx->r25 = ADD32(ctx->r25, -0X10D0);
    // 0x800831CC: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x800831D0: nop

    // 0x800831D4: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x800831D8: bne         $t1, $zero, L_80083204
    if (ctx->r9 != 0) {
        // 0x800831DC: nop
    
            goto L_80083204;
    }
    // 0x800831DC: nop

    // 0x800831E0: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x800831E4: lw          $t2, 0x32E0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X32E0);
    // 0x800831E8: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x800831EC: lw          $t4, 0x3310($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3310);
    // 0x800831F0: lhu         $t3, 0x6($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X6);
    // 0x800831F4: nop

    // 0x800831F8: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800831FC: bne         $at, $zero, L_80083248
    if (ctx->r1 != 0) {
        // 0x80083200: nop
    
            goto L_80083248;
    }
    // 0x80083200: nop

L_80083204:
    // 0x80083204: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80083208: lw          $t5, 0x3320($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3320);
    // 0x8008320C: nop

    // 0x80083210: slti        $at, $t5, 0x3D
    ctx->r1 = SIGNED(ctx->r13) < 0X3D ? 1 : 0;
    // 0x80083214: bne         $at, $zero, L_80083248
    if (ctx->r1 != 0) {
        // 0x80083218: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_80083248;
    }
    // 0x80083218: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8008321C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80083220: jal         0x8007E9F8
    // 0x80083224: nop

    func_8007E9F8(rdram, ctx);
        goto after_3;
    // 0x80083224: nop

    after_3:
    // 0x80083228: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008322C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083230: sw          $t6, 0x331C($at)
    MEM_W(0X331C, ctx->r1) = ctx->r14;
    // 0x80083234: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083238: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8008323C: sw          $t7, 0x3318($at)
    MEM_W(0X3318, ctx->r1) = ctx->r15;
    // 0x80083240: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083244: sw          $zero, 0x3324($at)
    MEM_W(0X3324, ctx->r1) = 0;
L_80083248:
    // 0x80083248: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8008324C: jal         0x80077098
    // 0x80083250: addiu       $a0, $a0, 0x32E0
    ctx->r4 = ADD32(ctx->r4, 0X32E0);
    func_80077098(rdram, ctx);
        goto after_4;
    // 0x80083250: addiu       $a0, $a0, 0x32E0
    ctx->r4 = ADD32(ctx->r4, 0X32E0);
    after_4:
    // 0x80083254: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80083258: lw          $t8, 0x3320($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3320);
    // 0x8008325C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80083260: lw          $t0, 0x3324($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3324);
    // 0x80083264: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083268: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8008326C: beq         $t0, $zero, L_8008328C
    if (ctx->r8 == 0) {
        // 0x80083270: sw          $t9, 0x3320($at)
        MEM_W(0X3320, ctx->r1) = ctx->r25;
            goto L_8008328C;
    }
    // 0x80083270: sw          $t9, 0x3320($at)
    MEM_W(0X3320, ctx->r1) = ctx->r25;
    // 0x80083274: jal         0x8007EA2C
    // 0x80083278: nop

    func_8007EA2C(rdram, ctx);
        goto after_5;
    // 0x80083278: nop

    after_5:
    // 0x8008327C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80083280: bne         $v0, $at, L_8008328C
    if (ctx->r2 != ctx->r1) {
        // 0x80083284: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_8008328C;
    }
    // 0x80083284: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083288: sw          $zero, 0x3324($at)
    MEM_W(0X3324, ctx->r1) = 0;
L_8008328C:
    // 0x8008328C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80083290: lw          $t1, 0x3318($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3318);
    // 0x80083294: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80083298: bne         $t1, $at, L_80083304
    if (ctx->r9 != ctx->r1) {
        // 0x8008329C: nop
    
            goto L_80083304;
    }
    // 0x8008329C: nop

    // 0x800832A0: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x800832A4: lw          $t2, 0x331C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X331C);
    // 0x800832A8: nop

    // 0x800832AC: beq         $t2, $zero, L_800832BC
    if (ctx->r10 == 0) {
        // 0x800832B0: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_800832BC;
    }
    // 0x800832B0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800832B4: b           L_800832C8
    // 0x800832B8: sw          $zero, 0x331C($at)
    MEM_W(0X331C, ctx->r1) = 0;
        goto L_800832C8;
    // 0x800832B8: sw          $zero, 0x331C($at)
    MEM_W(0X331C, ctx->r1) = 0;
L_800832BC:
    // 0x800832BC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800832C0: jal         0x80077098
    // 0x800832C4: addiu       $a0, $a0, 0x32E0
    ctx->r4 = ADD32(ctx->r4, 0X32E0);
    func_80077098(rdram, ctx);
        goto after_6;
    // 0x800832C4: addiu       $a0, $a0, 0x32E0
    ctx->r4 = ADD32(ctx->r4, 0X32E0);
    after_6:
L_800832C8:
    // 0x800832C8: jal         0x8007E750
    // 0x800832CC: nop

    func_8007E750(rdram, ctx);
        goto after_7;
    // 0x800832CC: nop

    after_7:
    // 0x800832D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800832D4: bne         $v0, $at, L_80083304
    if (ctx->r2 != ctx->r1) {
        // 0x800832D8: nop
    
            goto L_80083304;
    }
    // 0x800832D8: nop

    // 0x800832DC: jal         0x8004A34C
    // 0x800832E0: nop

    func_8004A34C(rdram, ctx);
        goto after_8;
    // 0x800832E0: nop

    after_8:
    // 0x800832E4: jal         0x8008313C
    // 0x800832E8: nop

    func_8008313C(rdram, ctx);
        goto after_9;
    // 0x800832E8: nop

    after_9:
    // 0x800832EC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800832F0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800832F4: sw          $t3, 0x331C($at)
    MEM_W(0X331C, ctx->r1) = ctx->r11;
    // 0x800832F8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800832FC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80083300: sb          $t4, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r12;
L_80083304:
    // 0x80083304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80083308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008330C: jr          $ra
    // 0x80083310: nop

    return;
    // 0x80083310: nop

    // 0x80083314: nop

    // 0x80083318: nop

    // 0x8008331C: nop

;}
RECOMP_FUNC void func_80083320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80083320: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80083324: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80083328: jal         0x8004A34C
    // 0x8008332C: nop

    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x8008332C: nop

    after_0:
    // 0x80083330: lui         $a0, 0x3
    ctx->r4 = S32(0X3 << 16);
    // 0x80083334: jal         0x8007E03C
    // 0x80083338: ori         $a0, $a0, 0xA988
    ctx->r4 = ctx->r4 | 0XA988;
    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x80083338: ori         $a0, $a0, 0xA988
    ctx->r4 = ctx->r4 | 0XA988;
    after_1:
    // 0x8008333C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80083340: sw          $v0, 0x240($at)
    MEM_W(0X240, ctx->r1) = ctx->r2;
    // 0x80083344: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80083348: lw          $t7, 0x240($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X240);
    // 0x8008334C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80083350: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80083354: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x80083358: lw          $t9, 0x240($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X240);
    // 0x8008335C: addiu       $t8, $zero, 0x90
    ctx->r24 = ADD32(0, 0X90);
    // 0x80083360: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80083364: sb          $t8, 0x1($t9)
    MEM_B(0X1, ctx->r25) = ctx->r24;
    // 0x80083368: lw          $t1, 0x240($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X240);
    // 0x8008336C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80083370: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80083374: sb          $t0, 0x2($t1)
    MEM_B(0X2, ctx->r9) = ctx->r8;
    // 0x80083378: lw          $t3, 0x240($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X240);
    // 0x8008337C: addiu       $t2, $zero, 0x2C
    ctx->r10 = ADD32(0, 0X2C);
    // 0x80083380: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80083384: sb          $t2, 0x3($t3)
    MEM_B(0X3, ctx->r11) = ctx->r10;
    // 0x80083388: lw          $t4, 0x240($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X240);
    // 0x8008338C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80083390: sb          $zero, 0x4($t4)
    MEM_B(0X4, ctx->r12) = 0;
    // 0x80083394: lw          $t5, 0x240($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X240);
    // 0x80083398: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8008339C: sb          $zero, 0x5($t5)
    MEM_B(0X5, ctx->r13) = 0;
    // 0x800833A0: lw          $t6, 0x240($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X240);
    // 0x800833A4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800833A8: sb          $zero, 0x6($t6)
    MEM_B(0X6, ctx->r14) = 0;
    // 0x800833AC: lw          $t7, 0x240($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X240);
    // 0x800833B0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800833B4: sb          $zero, 0x7($t7)
    MEM_B(0X7, ctx->r15) = 0;
    // 0x800833B8: lw          $a0, 0x240($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X240);
    // 0x800833BC: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x800833C0: ori         $a1, $a1, 0xD4C4
    ctx->r5 = ctx->r5 | 0XD4C4;
    // 0x800833C4: jal         0x800A8FC8
    // 0x800833C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800A8FC8(rdram, ctx);
        goto after_2;
    // 0x800833C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800833CC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800833D0: lw          $t8, 0x240($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X240);
    // 0x800833D4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800833D8: addiu       $a0, $a0, -0x6F30
    ctx->r4 = ADD32(ctx->r4, -0X6F30);
    // 0x800833DC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800833E0: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    // 0x800833E4: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x800833E8: jal         0x8008F280
    // 0x800833EC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8008F280(rdram, ctx);
        goto after_3;
    // 0x800833EC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_3:
    // 0x800833F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800833F4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800833F8: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x800833FC: addiu       $a2, $a2, 0x6128
    ctx->r6 = ADD32(ctx->r6, 0X6128);
    // 0x80083400: addiu       $a1, $a1, 0x6138
    ctx->r5 = ADD32(ctx->r5, 0X6138);
    // 0x80083404: jal         0x8008F360
    // 0x80083408: addiu       $a0, $a0, -0x6F30
    ctx->r4 = ADD32(ctx->r4, -0X6F30);
    func_8008F360(rdram, ctx);
        goto after_4;
    // 0x80083408: addiu       $a0, $a0, -0x6F30
    ctx->r4 = ADD32(ctx->r4, -0X6F30);
    after_4:
    // 0x8008340C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083410: sw          $zero, 0x3CF4($at)
    MEM_W(0X3CF4, ctx->r1) = 0;
    // 0x80083414: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083418: sw          $zero, 0x3CF8($at)
    MEM_W(0X3CF8, ctx->r1) = 0;
    // 0x8008341C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083420: sw          $zero, 0x3CFC($at)
    MEM_W(0X3CFC, ctx->r1) = 0;
    // 0x80083424: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80083428: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008342C: lw          $a1, 0x31F0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X31F0);
    // 0x80083430: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80083434: sw          $zero, -0x6E1C($at)
    MEM_W(-0X6E1C, ctx->r1) = 0;
    // 0x80083438: jal         0x8007FFE4
    // 0x8008343C: addiu       $a0, $a0, 0x248
    ctx->r4 = ADD32(ctx->r4, 0X248);
    func_8007FFE4(rdram, ctx);
        goto after_5;
    // 0x8008343C: addiu       $a0, $a0, 0x248
    ctx->r4 = ADD32(ctx->r4, 0X248);
    after_5:
    // 0x80083440: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80083444: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80083448: jr          $ra
    // 0x8008344C: nop

    return;
    // 0x8008344C: nop

;}
RECOMP_FUNC void func_80083450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80083450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80083454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80083458: jal         0x80090A44
    // 0x8008345C: nop

    func_80090A44(rdram, ctx);
        goto after_0;
    // 0x8008345C: nop

    after_0:
    // 0x80083460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80083464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80083468: jr          $ra
    // 0x8008346C: nop

    return;
    // 0x8008346C: nop

;}
RECOMP_FUNC void func_80083470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80083470: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80083474: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80083478: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x8008347C: lw          $s0, 0x3330($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X3330);
    // 0x80083480: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80083484: beq         $s0, $zero, L_800834A4
    if (ctx->r16 == 0) {
        // 0x80083488: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800834A4;
    }
    // 0x80083488: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008348C: beq         $s0, $at, L_800834BC
    if (ctx->r16 == ctx->r1) {
        // 0x80083490: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800834BC;
    }
    // 0x80083490: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80083494: beq         $s0, $at, L_80083504
    if (ctx->r16 == ctx->r1) {
        // 0x80083498: nop
    
            goto L_80083504;
    }
    // 0x80083498: nop

    // 0x8008349C: b           L_8008354C
    // 0x800834A0: nop

        goto L_8008354C;
    // 0x800834A0: nop

L_800834A4:
    // 0x800834A4: jal         0x80083320
    // 0x800834A8: nop

    func_80083320(rdram, ctx);
        goto after_0;
    // 0x800834A8: nop

    after_0:
    // 0x800834AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800834B0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800834B4: b           L_8008354C
    // 0x800834B8: sw          $t6, 0x3330($at)
    MEM_W(0X3330, ctx->r1) = ctx->r14;
        goto L_8008354C;
    // 0x800834B8: sw          $t6, 0x3330($at)
    MEM_W(0X3330, ctx->r1) = ctx->r14;
L_800834BC:
    // 0x800834BC: jal         0x8009D5E4
    // 0x800834C0: nop

    func_8009D5E4(rdram, ctx);
        goto after_1;
    // 0x800834C0: nop

    after_1:
    // 0x800834C4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800834C8: addiu       $a0, $a0, 0x248
    ctx->r4 = ADD32(ctx->r4, 0X248);
    // 0x800834CC: jal         0x8008023C
    // 0x800834D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008023C(rdram, ctx);
        goto after_2;
    // 0x800834D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800834D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800834D8: bne         $v0, $at, L_800834F0
    if (ctx->r2 != ctx->r1) {
        // 0x800834DC: nop
    
            goto L_800834F0;
    }
    // 0x800834DC: nop

    // 0x800834E0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800834E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800834E8: b           L_8008354C
    // 0x800834EC: sw          $t7, 0x3330($at)
    MEM_W(0X3330, ctx->r1) = ctx->r15;
        goto L_8008354C;
    // 0x800834EC: sw          $t7, 0x3330($at)
    MEM_W(0X3330, ctx->r1) = ctx->r15;
L_800834F0:
    // 0x800834F0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800834F4: jal         0x80080400
    // 0x800834F8: addiu       $a0, $a0, 0x248
    ctx->r4 = ADD32(ctx->r4, 0X248);
    func_80080400(rdram, ctx);
        goto after_3;
    // 0x800834F8: addiu       $a0, $a0, 0x248
    ctx->r4 = ADD32(ctx->r4, 0X248);
    after_3:
    // 0x800834FC: b           L_8008354C
    // 0x80083500: nop

        goto L_8008354C;
    // 0x80083500: nop

L_80083504:
    // 0x80083504: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80083508: jal         0x8008015C
    // 0x8008350C: addiu       $a0, $a0, 0x248
    ctx->r4 = ADD32(ctx->r4, 0X248);
    func_8008015C(rdram, ctx);
        goto after_4;
    // 0x8008350C: addiu       $a0, $a0, 0x248
    ctx->r4 = ADD32(ctx->r4, 0X248);
    after_4:
    // 0x80083510: jal         0x80083450
    // 0x80083514: nop

    func_80083450(rdram, ctx);
        goto after_5;
    // 0x80083514: nop

    after_5:
    // 0x80083518: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8008351C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80083520: addiu       $a1, $a1, 0x5378
    ctx->r5 = ADD32(ctx->r5, 0X5378);
    // 0x80083524: jal         0x8009035C
    // 0x80083528: addiu       $a0, $a0, 0x53C8
    ctx->r4 = ADD32(ctx->r4, 0X53C8);
    func_8009035C(rdram, ctx);
        goto after_6;
    // 0x80083528: addiu       $a0, $a0, 0x53C8
    ctx->r4 = ADD32(ctx->r4, 0X53C8);
    after_6:
    // 0x8008352C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80083530: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083534: sb          $t8, -0x118($at)
    MEM_B(-0X118, ctx->r1) = ctx->r24;
    // 0x80083538: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008353C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80083540: sb          $t9, -0x2B8($at)
    MEM_B(-0X2B8, ctx->r1) = ctx->r25;
    // 0x80083544: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083548: sw          $zero, 0x3330($at)
    MEM_W(0X3330, ctx->r1) = 0;
L_8008354C:
    // 0x8008354C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80083550: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80083554: jr          $ra
    // 0x80083558: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80083558: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008355C: nop

;}
RECOMP_FUNC void Fault_Assert(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80083560: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80083564: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80083568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008356C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80083570: jal         0x800B837C
    // 0x80083574: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    strlen_recomp(rdram, ctx);
        goto after_0;
    // 0x80083574: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80083578: slti        $at, $v0, 0x29
    ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x8008357C: bne         $at, $zero, L_80083590
    if (ctx->r1 != 0) {
        // 0x80083580: nop
    
            goto L_80083590;
    }
    // 0x80083580: nop

    // 0x80083584: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80083588: nop

    // 0x8008358C: sb          $zero, 0x28($t6)
    MEM_B(0X28, ctx->r14) = 0;
L_80083590:
    // 0x80083590: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80083594: jal         0x800B837C
    // 0x80083598: nop

    strlen_recomp(rdram, ctx);
        goto after_1;
    // 0x80083598: nop

    after_1:
    // 0x8008359C: slti        $at, $v0, 0x29
    ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x800835A0: bne         $at, $zero, L_800835B4
    if (ctx->r1 != 0) {
        // 0x800835A4: nop
    
            goto L_800835B4;
    }
    // 0x800835A4: nop

    // 0x800835A8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800835AC: nop

    // 0x800835B0: sb          $zero, 0x28($t7)
    MEM_B(0X28, ctx->r15) = 0;
L_800835B4:
    // 0x800835B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800835B8: jal         0x800B837C
    // 0x800835BC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    strlen_recomp(rdram, ctx);
        goto after_2;
    // 0x800835BC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_2:
    // 0x800835C0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800835C4: nop

    // 0x800835C8: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800835CC: beq         $at, $zero, L_80083630
    if (ctx->r1 == 0) {
        // 0x800835D0: nop
    
            goto L_80083630;
    }
    // 0x800835D0: nop

L_800835D4:
    // 0x800835D4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800835D8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800835DC: nop

    // 0x800835E0: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800835E4: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x800835E8: nop

    // 0x800835EC: slti        $at, $t2, 0x41
    ctx->r1 = SIGNED(ctx->r10) < 0X41 ? 1 : 0;
    // 0x800835F0: bne         $at, $zero, L_80083608
    if (ctx->r1 != 0) {
        // 0x800835F4: slti        $at, $t2, 0x60
        ctx->r1 = SIGNED(ctx->r10) < 0X60 ? 1 : 0;
            goto L_80083608;
    }
    // 0x800835F4: slti        $at, $t2, 0x60
    ctx->r1 = SIGNED(ctx->r10) < 0X60 ? 1 : 0;
    // 0x800835F8: beq         $at, $zero, L_80083608
    if (ctx->r1 == 0) {
        // 0x800835FC: nop
    
            goto L_80083608;
    }
    // 0x800835FC: nop

    // 0x80083600: addiu       $t3, $t2, 0x20
    ctx->r11 = ADD32(ctx->r10, 0X20);
    // 0x80083604: sb          $t3, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r11;
L_80083608:
    // 0x80083608: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8008360C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80083610: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80083614: jal         0x800B837C
    // 0x80083618: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    strlen_recomp(rdram, ctx);
        goto after_3;
    // 0x80083618: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    after_3:
    // 0x8008361C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80083620: nop

    // 0x80083624: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80083628: bne         $at, $zero, L_800835D4
    if (ctx->r1 != 0) {
        // 0x8008362C: nop
    
            goto L_800835D4;
    }
    // 0x8008362C: nop

L_80083630:
    // 0x80083630: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80083634: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80083638: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8008363C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80083640: addiu       $a1, $a1, -0x124C
    ctx->r5 = ADD32(ctx->r5, -0X124C);
    // 0x80083644: jal         0x800B62D4
    // 0x80083648: addiu       $a0, $a0, 0x9C8
    ctx->r4 = ADD32(ctx->r4, 0X9C8);
    sprintf_recomp(rdram, ctx);
        goto after_4;
    // 0x80083648: addiu       $a0, $a0, 0x9C8
    ctx->r4 = ADD32(ctx->r4, 0X9C8);
    after_4:
    // 0x8008364C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80083650: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083654: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80083658: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8008365C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80083660: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80083664: sw          $t7, 0x38F0($at)
    MEM_W(0X38F0, ctx->r1) = ctx->r15;
    // 0x80083668: addiu       $a3, $a3, 0x9C8
    ctx->r7 = ADD32(ctx->r7, 0X9C8);
    // 0x8008366C: jal         0x800B3BFC
    // 0x80083670: addiu       $a0, $a0, -0x1244
    ctx->r4 = ADD32(ctx->r4, -0X1244);
    osSyncPrintf(rdram, ctx);
        goto after_5;
    // 0x80083670: addiu       $a0, $a0, -0x1244
    ctx->r4 = ADD32(ctx->r4, -0X1244);
    after_5:
    // 0x80083674: jal         0x800B6650
    // 0x80083678: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_6;
    // 0x80083678: nop

    after_6:
    // 0x8008367C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80083680: lw          $t8, 0x38F4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X38F4);
    // 0x80083684: nop

    // 0x80083688: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x8008368C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80083690: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80083694: jr          $ra
    // 0x80083698: nop

    return;
    // 0x80083698: nop

;}
RECOMP_FUNC void func_8008369C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008369C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800836A0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800836A4: lbu         $t6, 0x2B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2B);
    // 0x800836A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800836AC: slti        $at, $t6, 0x61
    ctx->r1 = SIGNED(ctx->r14) < 0X61 ? 1 : 0;
    // 0x800836B0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800836B4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800836B8: bne         $at, $zero, L_800836C8
    if (ctx->r1 != 0) {
        // 0x800836BC: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_800836C8;
    }
    // 0x800836BC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800836C0: addiu       $t7, $t6, -0x20
    ctx->r15 = ADD32(ctx->r14, -0X20);
    // 0x800836C4: sb          $t7, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r15;
L_800836C8:
    // 0x800836C8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800836CC: lbu         $t8, 0x2B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2B);
    // 0x800836D0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800836D4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800836D8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800836DC: addiu       $t9, $t8, -0x20
    ctx->r25 = ADD32(ctx->r24, -0X20);
    // 0x800836E0: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x800836E4: sll         $t3, $t3, 6
    ctx->r11 = S32(ctx->r11 << 6);
    // 0x800836E8: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x800836EC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800836F0: sb          $t9, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r25;
    // 0x800836F4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x800836F8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x800836FC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80083700:
    // 0x80083700: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80083704:
    // 0x80083704: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80083708: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8008370C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80083710: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80083714: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80083718: lbu         $t7, 0x3718($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3718);
    // 0x8008371C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80083720: subu        $t0, $t9, $t8
    ctx->r8 = SUB32(ctx->r25, ctx->r24);
    // 0x80083724: sllv        $t2, $t1, $t0
    ctx->r10 = S32(ctx->r9 << (ctx->r8 & 31));
    // 0x80083728: and         $t3, $t7, $t2
    ctx->r11 = ctx->r15 & ctx->r10;
    // 0x8008372C: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x80083730: beq         $t4, $zero, L_80083780
    if (ctx->r12 == 0) {
        // 0x80083734: nop
    
            goto L_80083780;
    }
    // 0x80083734: nop

    // 0x80083738: lbu         $t1, 0x3F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3F);
    // 0x8008373C: lbu         $t5, 0x3B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X3B);
    // 0x80083740: sll         $t0, $t1, 3
    ctx->r8 = S32(ctx->r9 << 3);
    // 0x80083744: andi        $t7, $t0, 0x7C0
    ctx->r15 = ctx->r8 & 0X7C0;
    // 0x80083748: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x8008374C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80083750: lbu         $t3, 0x43($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X43);
    // 0x80083754: andi        $t9, $t6, 0xF800
    ctx->r25 = ctx->r14 & 0XF800;
    // 0x80083758: or          $t2, $t9, $t7
    ctx->r10 = ctx->r25 | ctx->r15;
    // 0x8008375C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80083760: addu        $t0, $t1, $t8
    ctx->r8 = ADD32(ctx->r9, ctx->r24);
    // 0x80083764: sra         $t4, $t3, 2
    ctx->r12 = S32(SIGNED(ctx->r11) >> 2);
    // 0x80083768: andi        $t5, $t4, 0x3E
    ctx->r13 = ctx->r12 & 0X3E;
    // 0x8008376C: sll         $t9, $t0, 1
    ctx->r25 = S32(ctx->r8 << 1);
    // 0x80083770: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x80083774: addu        $t3, $t7, $t9
    ctx->r11 = ADD32(ctx->r15, ctx->r25);
    // 0x80083778: b           L_800837A0
    // 0x8008377C: sh          $t6, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r14;
        goto L_800837A0;
    // 0x8008377C: sh          $t6, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r14;
L_80083780:
    // 0x80083780: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80083784: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80083788: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8008378C: addu        $t1, $t2, $t5
    ctx->r9 = ADD32(ctx->r10, ctx->r13);
    // 0x80083790: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x80083794: ori         $t4, $zero, 0xFFFE
    ctx->r12 = 0 | 0XFFFE;
    // 0x80083798: addu        $t7, $t0, $t8
    ctx->r15 = ADD32(ctx->r8, ctx->r24);
    // 0x8008379C: sh          $t4, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r12;
L_800837A0:
    // 0x800837A0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800837A4: nop

    // 0x800837A8: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x800837AC: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x800837B0: bne         $at, $zero, L_80083704
    if (ctx->r1 != 0) {
        // 0x800837B4: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_80083704;
    }
    // 0x800837B4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800837B8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800837BC: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x800837C0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800837C4: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x800837C8: slti        $at, $t8, 0x8
    ctx->r1 = SIGNED(ctx->r24) < 0X8 ? 1 : 0;
    // 0x800837CC: addiu       $t2, $t3, 0x140
    ctx->r10 = ADD32(ctx->r11, 0X140);
    // 0x800837D0: addiu       $t1, $t5, 0x1
    ctx->r9 = ADD32(ctx->r13, 0X1);
    // 0x800837D4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x800837D8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x800837DC: bne         $at, $zero, L_80083700
    if (ctx->r1 != 0) {
        // 0x800837E0: sw          $t1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r9;
            goto L_80083700;
    }
    // 0x800837E0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x800837E4: jal         0x800B6650
    // 0x800837E8: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_0;
    // 0x800837E8: nop

    after_0:
    // 0x800837EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800837F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800837F4: jr          $ra
    // 0x800837F8: nop

    return;
    // 0x800837F8: nop

;}
RECOMP_FUNC void func_800837FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800837FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80083800: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80083804: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80083808: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8008380C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80083810: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80083814: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80083818: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8008381C: sb          $zero, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = 0;
    // 0x80083820: sb          $zero, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = 0;
    // 0x80083824: jal         0x800B837C
    // 0x80083828: sb          $t6, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r14;
    strlen_recomp(rdram, ctx);
        goto after_0;
    // 0x80083828: sb          $t6, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r14;
    after_0:
    // 0x8008382C: lbu         $t7, 0x2E($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2E);
    // 0x80083830: nop

    // 0x80083834: slt         $at, $t7, $v0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80083838: beq         $at, $zero, L_800838F4
    if (ctx->r1 == 0) {
        // 0x8008383C: nop
    
            goto L_800838F4;
    }
    // 0x8008383C: nop

L_80083840:
    // 0x80083840: lbu         $t8, 0x2E($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2E);
    // 0x80083844: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80083848: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8008384C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80083850: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x80083854: nop

    // 0x80083858: bne         $t1, $at, L_80083880
    if (ctx->r9 != ctx->r1) {
        // 0x8008385C: sb          $t1, 0x2F($sp)
        MEM_B(0X2F, ctx->r29) = ctx->r9;
            goto L_80083880;
    }
    // 0x8008385C: sb          $t1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r9;
    // 0x80083860: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80083864: lbu         $t5, 0x2C($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X2C);
    // 0x80083868: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8008386C: addiu       $t4, $t3, 0x9
    ctx->r12 = ADD32(ctx->r11, 0X9);
    // 0x80083870: sb          $t2, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r10;
    // 0x80083874: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x80083878: b           L_800838C0
    // 0x8008387C: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
        goto L_800838C0;
    // 0x8008387C: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
L_80083880:
    // 0x80083880: lbu         $t7, 0x2D($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2D);
    // 0x80083884: lbu         $t6, 0x2C($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2C);
    // 0x80083888: lbu         $t0, 0x43($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X43);
    // 0x8008388C: lbu         $t1, 0x47($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X47);
    // 0x80083890: lbu         $t2, 0x4B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4B);
    // 0x80083894: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80083898: lbu         $a0, 0x2F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2F);
    // 0x8008389C: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800838A0: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x800838A4: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x800838A8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800838AC: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x800838B0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800838B4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800838B8: jal         0x8008369C
    // 0x800838BC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    func_8008369C(rdram, ctx);
        goto after_1;
    // 0x800838BC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    after_1:
L_800838C0:
    // 0x800838C0: lbu         $t3, 0x2E($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X2E);
    // 0x800838C4: lbu         $t5, 0x2D($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X2D);
    // 0x800838C8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800838CC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800838D0: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x800838D4: sb          $t7, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r15;
    // 0x800838D8: jal         0x800B837C
    // 0x800838DC: sb          $t4, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r12;
    strlen_recomp(rdram, ctx);
        goto after_2;
    // 0x800838DC: sb          $t4, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r12;
    after_2:
    // 0x800838E0: lbu         $t6, 0x2E($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2E);
    // 0x800838E4: nop

    // 0x800838E8: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800838EC: bne         $at, $zero, L_80083840
    if (ctx->r1 != 0) {
        // 0x800838F0: nop
    
            goto L_80083840;
    }
    // 0x800838F0: nop

L_800838F4:
    // 0x800838F4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800838F8: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800838FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80083900: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80083904: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80083908: jr          $ra
    // 0x8008390C: or          $v0, $t9, $t0
    ctx->r2 = ctx->r25 | ctx->r8;
    return;
    // 0x8008390C: or          $v0, $t9, $t0
    ctx->r2 = ctx->r25 | ctx->r8;
;}
RECOMP_FUNC void func_80083910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80083910: addiu       $sp, $sp, -0x890
    ctx->r29 = ADD32(ctx->r29, -0X890);
    // 0x80083914: sw          $a0, 0x890($sp)
    MEM_W(0X890, ctx->r29) = ctx->r4;
    // 0x80083918: lw          $t6, 0x890($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X890);
    // 0x8008391C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80083920: addiu       $t7, $t6, 0x20
    ctx->r15 = ADD32(ctx->r14, 0X20);
    // 0x80083924: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x80083928: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x8008392C: addiu       $a0, $sp, 0x868
    ctx->r4 = ADD32(ctx->r29, 0X868);
    // 0x80083930: addiu       $a1, $sp, 0x880
    ctx->r5 = ADD32(ctx->r29, 0X880);
    // 0x80083934: jal         0x800B3080
    // 0x80083938: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80083938: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8008393C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80083940: addiu       $a1, $sp, 0x868
    ctx->r5 = ADD32(ctx->r29, 0X868);
    // 0x80083944: jal         0x800B30B0
    // 0x80083948: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80083948: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8008394C: jal         0x8007E5D4
    // 0x80083950: nop

    func_8007E5D4(rdram, ctx);
        goto after_2;
    // 0x80083950: nop

    after_2:
    // 0x80083954: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80083958: jal         0x800B3BFC
    // 0x8008395C: addiu       $a0, $a0, -0x121C
    ctx->r4 = ADD32(ctx->r4, -0X121C);
    osSyncPrintf(rdram, ctx);
        goto after_3;
    // 0x8008395C: addiu       $a0, $a0, -0x121C
    ctx->r4 = ADD32(ctx->r4, -0X121C);
    after_3:
    // 0x80083960: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80083964: lw          $a1, 0xA20($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XA20);
    // 0x80083968: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8008396C: addiu       $a0, $a0, 0x9B0
    ctx->r4 = ADD32(ctx->r4, 0X9B0);
    // 0x80083970: jal         0x800B3080
    // 0x80083974: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_4;
    // 0x80083974: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80083978: jal         0x800B78B0
    // 0x8008397C: nop

    osSpTaskYield_recomp(rdram, ctx);
        goto after_5;
    // 0x8008397C: nop

    after_5:
    // 0x80083980: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80083984: addiu       $a0, $a0, -0x4460
    ctx->r4 = ADD32(ctx->r4, -0X4460);
    // 0x80083988: jal         0x800B83F0
    // 0x8008398C: addiu       $a0, $a0, 0xB0
    ctx->r4 = ADD32(ctx->r4, 0XB0);
    osStopThread_recomp(rdram, ctx);
        goto after_6;
    // 0x8008398C: addiu       $a0, $a0, 0xB0
    ctx->r4 = ADD32(ctx->r4, 0XB0);
    after_6:
    // 0x80083990: jal         0x800B7060
    // 0x80083994: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    osCreateViManager_recomp(rdram, ctx);
        goto after_7;
    // 0x80083994: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_7:
    // 0x80083998: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x8008399C: lw          $t8, 0x300($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X300);
    // 0x800839A0: nop

    // 0x800839A4: bne         $t8, $zero, L_800839BC
    if (ctx->r24 != 0) {
        // 0x800839A8: nop
    
            goto L_800839BC;
    }
    // 0x800839A8: nop

    // 0x800839AC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800839B0: addiu       $a0, $a0, -0x6A90
    ctx->r4 = ADD32(ctx->r4, -0X6A90);
    // 0x800839B4: jal         0x800B6A20
    // 0x800839B8: addiu       $a0, $a0, 0x460
    ctx->r4 = ADD32(ctx->r4, 0X460);
    osViSetMode_recomp(rdram, ctx);
        goto after_8;
    // 0x800839B8: addiu       $a0, $a0, 0x460
    ctx->r4 = ADD32(ctx->r4, 0X460);
    after_8:
L_800839BC:
    // 0x800839BC: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x800839C0: lw          $t9, 0x300($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X300);
    // 0x800839C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800839C8: bne         $t9, $at, L_800839DC
    if (ctx->r25 != ctx->r1) {
        // 0x800839CC: nop
    
            goto L_800839DC;
    }
    // 0x800839CC: nop

    // 0x800839D0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800839D4: jal         0x800B6A20
    // 0x800839D8: addiu       $a0, $a0, -0x6A90
    ctx->r4 = ADD32(ctx->r4, -0X6A90);
    osViSetMode_recomp(rdram, ctx);
        goto after_9;
    // 0x800839D8: addiu       $a0, $a0, -0x6A90
    ctx->r4 = ADD32(ctx->r4, -0X6A90);
    after_9:
L_800839DC:
    // 0x800839DC: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x800839E0: lw          $t0, 0x300($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X300);
    // 0x800839E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800839E8: bne         $t0, $at, L_80083A00
    if (ctx->r8 != ctx->r1) {
        // 0x800839EC: nop
    
            goto L_80083A00;
    }
    // 0x800839EC: nop

    // 0x800839F0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800839F4: addiu       $a0, $a0, -0x6A90
    ctx->r4 = ADD32(ctx->r4, -0X6A90);
    // 0x800839F8: jal         0x800B6A20
    // 0x800839FC: addiu       $a0, $a0, 0x8C0
    ctx->r4 = ADD32(ctx->r4, 0X8C0);
    osViSetMode_recomp(rdram, ctx);
        goto after_10;
    // 0x800839FC: addiu       $a0, $a0, 0x8C0
    ctx->r4 = ADD32(ctx->r4, 0X8C0);
    after_10:
L_80083A00:
    // 0x80083A00: jal         0x800B6330
    // 0x80083A04: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_11;
    // 0x80083A04: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    after_11:
    // 0x80083A08: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80083A0C: lw          $a0, 0x9A0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X9A0);
    // 0x80083A10: jal         0x800B64F0
    // 0x80083A14: nop

    osViSwapBuffer_recomp(rdram, ctx);
        goto after_12;
    // 0x80083A14: nop

    after_12:
    // 0x80083A18: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80083A1C: addiu       $a0, $a0, 0x9B0
    ctx->r4 = ADD32(ctx->r4, 0X9B0);
    // 0x80083A20: addiu       $a1, $zero, 0x29A
    ctx->r5 = ADD32(0, 0X29A);
    // 0x80083A24: jal         0x800B65E0
    // 0x80083A28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osViSetEvent_recomp(rdram, ctx);
        goto after_13;
    // 0x80083A28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x80083A2C: jal         0x800B6650
    // 0x80083A30: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_14;
    // 0x80083A30: nop

    after_14:
    // 0x80083A34: lw          $t1, 0x890($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X890);
    // 0x80083A38: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80083A3C: lw          $a1, 0x14($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X14);
    // 0x80083A40: jal         0x800B3BFC
    // 0x80083A44: addiu       $a0, $a0, -0x1200
    ctx->r4 = ADD32(ctx->r4, -0X1200);
    osSyncPrintf(rdram, ctx);
        goto after_15;
    // 0x80083A44: addiu       $a0, $a0, -0x1200
    ctx->r4 = ADD32(ctx->r4, -0X1200);
    after_15:
    // 0x80083A48: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80083A4C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80083A50: lw          $a1, 0xFC($t2)
    ctx->r5 = MEM_W(ctx->r10, 0XFC);
    // 0x80083A54: jal         0x800B3BFC
    // 0x80083A58: addiu       $a0, $a0, -0x11E8
    ctx->r4 = ADD32(ctx->r4, -0X11E8);
    osSyncPrintf(rdram, ctx);
        goto after_16;
    // 0x80083A58: addiu       $a0, $a0, -0x11E8
    ctx->r4 = ADD32(ctx->r4, -0X11E8);
    after_16:
    // 0x80083A5C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80083A60: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80083A64: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x80083A68: lw          $a0, 0x100($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X100);
    // 0x80083A6C: addiu       $a2, $a2, 0x3340
    ctx->r6 = ADD32(ctx->r6, 0X3340);
    // 0x80083A70: jal         0x80084490
    // 0x80083A74: addiu       $a1, $a1, -0x11D8
    ctx->r5 = ADD32(ctx->r5, -0X11D8);
    func_80084490(rdram, ctx);
        goto after_17;
    // 0x80083A74: addiu       $a1, $a1, -0x11D8
    ctx->r5 = ADD32(ctx->r5, -0X11D8);
    after_17:
    // 0x80083A78: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80083A7C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80083A80: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x80083A84: lw          $a0, 0xF8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XF8);
    // 0x80083A88: addiu       $a2, $a2, 0x3490
    ctx->r6 = ADD32(ctx->r6, 0X3490);
    // 0x80083A8C: jal         0x80084490
    // 0x80083A90: addiu       $a1, $a1, -0x11D0
    ctx->r5 = ADD32(ctx->r5, -0X11D0);
    func_80084490(rdram, ctx);
        goto after_18;
    // 0x80083A90: addiu       $a1, $a1, -0x11D0
    ctx->r5 = ADD32(ctx->r5, -0X11D0);
    after_18:
    // 0x80083A94: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80083A98: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80083A9C: lw          $a1, 0x104($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X104);
    // 0x80083AA0: jal         0x800B3BFC
    // 0x80083AA4: addiu       $a0, $a0, -0x11CC
    ctx->r4 = ADD32(ctx->r4, -0X11CC);
    osSyncPrintf(rdram, ctx);
        goto after_19;
    // 0x80083AA4: addiu       $a0, $a0, -0x11CC
    ctx->r4 = ADD32(ctx->r4, -0X11CC);
    after_19:
    // 0x80083AA8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80083AAC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80083AB0: lw          $t8, 0x8($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X8);
    // 0x80083AB4: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x80083AB8: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80083ABC: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x80083AC0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80083AC4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80083AC8: lw          $t1, 0x14($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X14);
    // 0x80083ACC: lw          $t0, 0x10($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X10);
    // 0x80083AD0: addiu       $a0, $a0, -0x11B8
    ctx->r4 = ADD32(ctx->r4, -0X11B8);
    // 0x80083AD4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80083AD8: jal         0x800B3BFC
    // 0x80083ADC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    osSyncPrintf(rdram, ctx);
        goto after_20;
    // 0x80083ADC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_20:
    // 0x80083AE0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80083AE4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80083AE8: lw          $t2, 0x20($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X20);
    // 0x80083AEC: lw          $t3, 0x24($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X24);
    // 0x80083AF0: lw          $a2, 0x18($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X18);
    // 0x80083AF4: lw          $a3, 0x1C($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X1C);
    // 0x80083AF8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80083AFC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80083B00: lw          $t5, 0x2C($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X2C);
    // 0x80083B04: lw          $t4, 0x28($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X28);
    // 0x80083B08: addiu       $a0, $a0, -0x1190
    ctx->r4 = ADD32(ctx->r4, -0X1190);
    // 0x80083B0C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80083B10: jal         0x800B3BFC
    // 0x80083B14: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    osSyncPrintf(rdram, ctx);
        goto after_21;
    // 0x80083B14: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    after_21:
    // 0x80083B18: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80083B1C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80083B20: lw          $t6, 0x38($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X38);
    // 0x80083B24: lw          $t7, 0x3C($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X3C);
    // 0x80083B28: lw          $a2, 0x30($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X30);
    // 0x80083B2C: lw          $a3, 0x34($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X34);
    // 0x80083B30: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80083B34: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80083B38: lw          $t1, 0x44($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X44);
    // 0x80083B3C: lw          $t0, 0x40($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X40);
    // 0x80083B40: addiu       $a0, $a0, -0x1168
    ctx->r4 = ADD32(ctx->r4, -0X1168);
    // 0x80083B44: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80083B48: jal         0x800B3BFC
    // 0x80083B4C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    osSyncPrintf(rdram, ctx);
        goto after_22;
    // 0x80083B4C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_22:
    // 0x80083B50: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80083B54: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80083B58: lw          $t2, 0x50($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X50);
    // 0x80083B5C: lw          $t3, 0x54($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X54);
    // 0x80083B60: lw          $a2, 0x48($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X48);
    // 0x80083B64: lw          $a3, 0x4C($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X4C);
    // 0x80083B68: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80083B6C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80083B70: lw          $t5, 0x5C($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X5C);
    // 0x80083B74: lw          $t4, 0x58($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X58);
    // 0x80083B78: addiu       $a0, $a0, -0x1140
    ctx->r4 = ADD32(ctx->r4, -0X1140);
    // 0x80083B7C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80083B80: jal         0x800B3BFC
    // 0x80083B84: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    osSyncPrintf(rdram, ctx);
        goto after_23;
    // 0x80083B84: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    after_23:
    // 0x80083B88: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80083B8C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80083B90: lw          $t8, 0x68($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X68);
    // 0x80083B94: lw          $t9, 0x6C($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X6C);
    // 0x80083B98: lw          $a2, 0x60($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X60);
    // 0x80083B9C: lw          $a3, 0x64($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X64);
    // 0x80083BA0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80083BA4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80083BA8: lw          $t1, 0x74($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X74);
    // 0x80083BAC: lw          $t0, 0x70($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X70);
    // 0x80083BB0: addiu       $a0, $a0, -0x1118
    ctx->r4 = ADD32(ctx->r4, -0X1118);
    // 0x80083BB4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80083BB8: jal         0x800B3BFC
    // 0x80083BBC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    osSyncPrintf(rdram, ctx);
        goto after_24;
    // 0x80083BBC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_24:
    // 0x80083BC0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80083BC4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80083BC8: lw          $t2, 0x80($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X80);
    // 0x80083BCC: lw          $t3, 0x84($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X84);
    // 0x80083BD0: lw          $a2, 0x78($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X78);
    // 0x80083BD4: lw          $a3, 0x7C($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X7C);
    // 0x80083BD8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80083BDC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80083BE0: lw          $t5, 0x8C($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X8C);
    // 0x80083BE4: lw          $t4, 0x88($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X88);
    // 0x80083BE8: addiu       $a0, $a0, -0x10F0
    ctx->r4 = ADD32(ctx->r4, -0X10F0);
    // 0x80083BEC: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80083BF0: jal         0x800B3BFC
    // 0x80083BF4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    osSyncPrintf(rdram, ctx);
        goto after_25;
    // 0x80083BF4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    after_25:
    // 0x80083BF8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80083BFC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80083C00: lw          $t6, 0x98($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X98);
    // 0x80083C04: lw          $t7, 0x9C($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X9C);
    // 0x80083C08: lw          $a2, 0x90($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X90);
    // 0x80083C0C: lw          $a3, 0x94($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X94);
    // 0x80083C10: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80083C14: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80083C18: lw          $t1, 0xA4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0XA4);
    // 0x80083C1C: lw          $t0, 0xA0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XA0);
    // 0x80083C20: addiu       $a0, $a0, -0x10C8
    ctx->r4 = ADD32(ctx->r4, -0X10C8);
    // 0x80083C24: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80083C28: jal         0x800B3BFC
    // 0x80083C2C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    osSyncPrintf(rdram, ctx);
        goto after_26;
    // 0x80083C2C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_26:
    // 0x80083C30: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80083C34: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80083C38: lw          $t2, 0xB0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0XB0);
    // 0x80083C3C: lw          $t3, 0xB4($t9)
    ctx->r11 = MEM_W(ctx->r25, 0XB4);
    // 0x80083C40: lw          $a2, 0xA8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0XA8);
    // 0x80083C44: lw          $a3, 0xAC($t9)
    ctx->r7 = MEM_W(ctx->r25, 0XAC);
    // 0x80083C48: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80083C4C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80083C50: lw          $t5, 0xBC($t9)
    ctx->r13 = MEM_W(ctx->r25, 0XBC);
    // 0x80083C54: lw          $t4, 0xB8($t9)
    ctx->r12 = MEM_W(ctx->r25, 0XB8);
    // 0x80083C58: addiu       $a0, $a0, -0x10A0
    ctx->r4 = ADD32(ctx->r4, -0X10A0);
    // 0x80083C5C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80083C60: jal         0x800B3BFC
    // 0x80083C64: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    osSyncPrintf(rdram, ctx);
        goto after_27;
    // 0x80083C64: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    after_27:
    // 0x80083C68: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80083C6C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80083C70: lw          $t8, 0xC8($t6)
    ctx->r24 = MEM_W(ctx->r14, 0XC8);
    // 0x80083C74: lw          $t9, 0xCC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XCC);
    // 0x80083C78: lw          $a2, 0xC0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0XC0);
    // 0x80083C7C: lw          $a3, 0xC4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0XC4);
    // 0x80083C80: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80083C84: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80083C88: lw          $t1, 0xD4($t6)
    ctx->r9 = MEM_W(ctx->r14, 0XD4);
    // 0x80083C8C: lw          $t0, 0xD0($t6)
    ctx->r8 = MEM_W(ctx->r14, 0XD0);
    // 0x80083C90: addiu       $a0, $a0, -0x1078
    ctx->r4 = ADD32(ctx->r4, -0X1078);
    // 0x80083C94: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80083C98: jal         0x800B3BFC
    // 0x80083C9C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    osSyncPrintf(rdram, ctx);
        goto after_28;
    // 0x80083C9C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_28:
    // 0x80083CA0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80083CA4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80083CA8: lw          $t2, 0xE0($t7)
    ctx->r10 = MEM_W(ctx->r15, 0XE0);
    // 0x80083CAC: lw          $t3, 0xE4($t7)
    ctx->r11 = MEM_W(ctx->r15, 0XE4);
    // 0x80083CB0: lw          $a2, 0xD8($t7)
    ctx->r6 = MEM_W(ctx->r15, 0XD8);
    // 0x80083CB4: lw          $a3, 0xDC($t7)
    ctx->r7 = MEM_W(ctx->r15, 0XDC);
    // 0x80083CB8: addiu       $a0, $a0, -0x1050
    ctx->r4 = ADD32(ctx->r4, -0X1050);
    // 0x80083CBC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80083CC0: jal         0x800B3BFC
    // 0x80083CC4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    osSyncPrintf(rdram, ctx);
        goto after_29;
    // 0x80083CC4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_29:
    // 0x80083CC8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80083CCC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80083CD0: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x80083CD4: lw          $a0, 0x10C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X10C);
    // 0x80083CD8: addiu       $a2, $a2, 0x3604
    ctx->r6 = ADD32(ctx->r6, 0X3604);
    // 0x80083CDC: jal         0x80084490
    // 0x80083CE0: addiu       $a1, $a1, -0x1034
    ctx->r5 = ADD32(ctx->r5, -0X1034);
    func_80084490(rdram, ctx);
        goto after_30;
    // 0x80083CE0: addiu       $a1, $a1, -0x1034
    ctx->r5 = ADD32(ctx->r5, -0X1034);
    after_30:
    // 0x80083CE4: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80083CE8: lw          $t5, 0xA28($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XA28);
    // 0x80083CEC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80083CF0: addiu       $t9, $zero, 0x400
    ctx->r25 = ADD32(0, 0X400);
    // 0x80083CF4: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x80083CF8: sh          $t9, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r25;
    // 0x80083CFC: sw          $zero, 0x88C($sp)
    MEM_W(0X88C, ctx->r29) = 0;
    // 0x80083D00: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
L_80083D04:
    // 0x80083D04: lw          $t1, 0x88C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88C);
    // 0x80083D08: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80083D0C: lw          $t0, 0x9A0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X9A0);
    // 0x80083D10: sll         $t7, $t1, 1
    ctx->r15 = S32(ctx->r9 << 1);
    // 0x80083D14: ori         $t6, $zero, 0xFFFE
    ctx->r14 = 0 | 0XFFFE;
    // 0x80083D18: addu        $t2, $t0, $t7
    ctx->r10 = ADD32(ctx->r8, ctx->r15);
    // 0x80083D1C: sh          $t6, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r14;
    // 0x80083D20: lw          $t3, 0x88C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88C);
    // 0x80083D24: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80083D28: ori         $at, $at, 0x2C00
    ctx->r1 = ctx->r1 | 0X2C00;
    // 0x80083D2C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80083D30: slt         $at, $t4, $at
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80083D34: bne         $at, $zero, L_80083D04
    if (ctx->r1 != 0) {
        // 0x80083D38: sw          $t4, 0x88C($sp)
        MEM_W(0X88C, ctx->r29) = ctx->r12;
            goto L_80083D04;
    }
    // 0x80083D38: sw          $t4, 0x88C($sp)
    MEM_W(0X88C, ctx->r29) = ctx->r12;
L_80083D3C:
    // 0x80083D3C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083D40: lwc1        $f4, 0x38F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X38F8);
    // 0x80083D44: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083D48: lwc1        $f6, 0x38FC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X38FC);
    // 0x80083D4C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083D50: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80083D54: swc1        $f8, 0x38F8($at)
    MEM_W(0X38F8, ctx->r1) = ctx->f8.u32l;
    // 0x80083D58: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083D5C: lwc1        $f10, 0x3900($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3900);
    // 0x80083D60: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083D64: lwc1        $f16, 0x3904($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3904);
    // 0x80083D68: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083D6C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80083D70: swc1        $f18, 0x3900($at)
    MEM_W(0X3900, ctx->r1) = ctx->f18.u32l;
    // 0x80083D74: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083D78: lwc1        $f4, 0x3908($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3908);
    // 0x80083D7C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083D80: lwc1        $f10, 0x390C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X390C);
    // 0x80083D84: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083D88: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80083D8C: swc1        $f16, 0x3908($at)
    MEM_W(0X3908, ctx->r1) = ctx->f16.u32l;
    // 0x80083D90: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80083D94: lwc1        $f5, -0xF38($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0XF38);
    // 0x80083D98: lwc1        $f4, -0xF34($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0XF34);
    // 0x80083D9C: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x80083DA0: c.le.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d <= ctx->f18.d;
    // 0x80083DA4: nop

    // 0x80083DA8: bc1f        L_80083DD0
    if (!c1cs) {
        // 0x80083DAC: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_80083DD0;
    }
    // 0x80083DAC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80083DB0: lwc1        $f10, -0xF30($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0XF30);
    // 0x80083DB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083DB8: swc1        $f10, 0x38F8($at)
    MEM_W(0X38F8, ctx->r1) = ctx->f10.u32l;
    // 0x80083DBC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80083DC0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80083DC4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083DC8: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x80083DCC: swc1        $f8, 0x38FC($at)
    MEM_W(0X38FC, ctx->r1) = ctx->f8.u32l;
L_80083DD0:
    // 0x80083DD0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083DD4: lwc1        $f18, 0x38F8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X38F8);
    // 0x80083DD8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80083DDC: lwc1        $f11, -0xF28($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0XF28);
    // 0x80083DE0: lwc1        $f10, -0xF24($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0XF24);
    // 0x80083DE4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80083DE8: c.le.d      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.d <= ctx->f10.d;
    // 0x80083DEC: nop

    // 0x80083DF0: bc1f        L_80083E20
    if (!c1cs) {
        // 0x80083DF4: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_80083E20;
    }
    // 0x80083DF4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80083DF8: lwc1        $f6, -0xF20($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0XF20);
    // 0x80083DFC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083E00: swc1        $f6, 0x38F8($at)
    MEM_W(0X38F8, ctx->r1) = ctx->f6.u32l;
    // 0x80083E04: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083E08: lwc1        $f16, 0x38FC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X38FC);
    // 0x80083E0C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80083E10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80083E14: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083E18: mul.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x80083E1C: swc1        $f18, 0x38FC($at)
    MEM_W(0X38FC, ctx->r1) = ctx->f18.u32l;
L_80083E20:
    // 0x80083E20: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083E24: lwc1        $f4, 0x3900($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3900);
    // 0x80083E28: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80083E2C: lwc1        $f7, -0xF18($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0XF18);
    // 0x80083E30: lwc1        $f6, -0xF14($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0XF14);
    // 0x80083E34: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x80083E38: c.le.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d <= ctx->f10.d;
    // 0x80083E3C: nop

    // 0x80083E40: bc1f        L_80083E70
    if (!c1cs) {
        // 0x80083E44: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_80083E70;
    }
    // 0x80083E44: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80083E48: lwc1        $f16, -0xF10($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0XF10);
    // 0x80083E4C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083E50: swc1        $f16, 0x3900($at)
    MEM_W(0X3900, ctx->r1) = ctx->f16.u32l;
    // 0x80083E54: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083E58: lwc1        $f8, 0x3904($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3904);
    // 0x80083E5C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80083E60: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80083E64: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083E68: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80083E6C: swc1        $f4, 0x3904($at)
    MEM_W(0X3904, ctx->r1) = ctx->f4.u32l;
L_80083E70:
    // 0x80083E70: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083E74: lwc1        $f10, 0x3900($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3900);
    // 0x80083E78: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80083E7C: lwc1        $f17, -0xF08($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0XF08);
    // 0x80083E80: lwc1        $f16, -0xF04($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0XF04);
    // 0x80083E84: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x80083E88: c.le.d      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.d <= ctx->f16.d;
    // 0x80083E8C: nop

    // 0x80083E90: bc1f        L_80083EC0
    if (!c1cs) {
        // 0x80083E94: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_80083EC0;
    }
    // 0x80083E94: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80083E98: lwc1        $f8, -0xF00($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0XF00);
    // 0x80083E9C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083EA0: swc1        $f8, 0x3900($at)
    MEM_W(0X3900, ctx->r1) = ctx->f8.u32l;
    // 0x80083EA4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083EA8: lwc1        $f18, 0x3904($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3904);
    // 0x80083EAC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80083EB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80083EB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083EB8: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80083EBC: swc1        $f10, 0x3904($at)
    MEM_W(0X3904, ctx->r1) = ctx->f10.u32l;
L_80083EC0:
    // 0x80083EC0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083EC4: lwc1        $f6, 0x3908($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3908);
    // 0x80083EC8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80083ECC: lwc1        $f9, -0xEF8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0XEF8);
    // 0x80083ED0: lwc1        $f8, -0xEF4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0XEF4);
    // 0x80083ED4: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x80083ED8: c.le.d      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.d <= ctx->f16.d;
    // 0x80083EDC: nop

    // 0x80083EE0: bc1f        L_80083F10
    if (!c1cs) {
        // 0x80083EE4: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_80083F10;
    }
    // 0x80083EE4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80083EE8: lwc1        $f18, -0xEF0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0XEF0);
    // 0x80083EEC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083EF0: swc1        $f18, 0x3908($at)
    MEM_W(0X3908, ctx->r1) = ctx->f18.u32l;
    // 0x80083EF4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083EF8: lwc1        $f4, 0x390C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X390C);
    // 0x80083EFC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80083F00: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80083F04: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083F08: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80083F0C: swc1        $f6, 0x390C($at)
    MEM_W(0X390C, ctx->r1) = ctx->f6.u32l;
L_80083F10:
    // 0x80083F10: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083F14: lwc1        $f16, 0x3908($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3908);
    // 0x80083F18: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80083F1C: lwc1        $f19, -0xEE8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0XEE8);
    // 0x80083F20: lwc1        $f18, -0xEE4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0XEE4);
    // 0x80083F24: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x80083F28: c.le.d      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.d <= ctx->f18.d;
    // 0x80083F2C: nop

    // 0x80083F30: bc1f        L_80083F60
    if (!c1cs) {
        // 0x80083F34: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_80083F60;
    }
    // 0x80083F34: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80083F38: lwc1        $f4, -0xEE0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0XEE0);
    // 0x80083F3C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083F40: swc1        $f4, 0x3908($at)
    MEM_W(0X3908, ctx->r1) = ctx->f4.u32l;
    // 0x80083F44: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083F48: lwc1        $f10, 0x390C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X390C);
    // 0x80083F4C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80083F50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80083F54: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083F58: mul.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80083F5C: swc1        $f16, 0x390C($at)
    MEM_W(0X390C, ctx->r1) = ctx->f16.u32l;
L_80083F60:
    // 0x80083F60: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80083F64: addiu       $a1, $a1, -0x102C
    ctx->r5 = ADD32(ctx->r5, -0X102C);
    // 0x80083F68: jal         0x800B62D4
    // 0x80083F6C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    sprintf_recomp(rdram, ctx);
        goto after_31;
    // 0x80083F6C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    after_31:
    // 0x80083F70: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80083F74: lw          $a3, 0x9A0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9A0);
    // 0x80083F78: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80083F7C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x80083F80: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x80083F84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80083F88: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80083F8C: jal         0x800837FC
    // 0x80083F90: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_800837FC(rdram, ctx);
        goto after_32;
    // 0x80083F90: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_32:
    // 0x80083F94: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80083F98: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80083F9C: sw          $v0, 0xA28($at)
    MEM_W(0XA28, ctx->r1) = ctx->r2;
    // 0x80083FA0: addiu       $a1, $a1, -0x1008
    ctx->r5 = ADD32(ctx->r5, -0X1008);
    // 0x80083FA4: jal         0x800B62D4
    // 0x80083FA8: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    sprintf_recomp(rdram, ctx);
        goto after_33;
    // 0x80083FA8: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    after_33:
    // 0x80083FAC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80083FB0: lw          $a3, 0x9A0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9A0);
    // 0x80083FB4: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80083FB8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x80083FBC: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x80083FC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80083FC4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80083FC8: jal         0x800837FC
    // 0x80083FCC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_800837FC(rdram, ctx);
        goto after_34;
    // 0x80083FCC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_34:
    // 0x80083FD0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80083FD4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80083FD8: sw          $v0, 0xA28($at)
    MEM_W(0XA28, ctx->r1) = ctx->r2;
    // 0x80083FDC: addiu       $a1, $a1, -0x1000
    ctx->r5 = ADD32(ctx->r5, -0X1000);
    // 0x80083FE0: jal         0x800B62D4
    // 0x80083FE4: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    sprintf_recomp(rdram, ctx);
        goto after_35;
    // 0x80083FE4: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    after_35:
    // 0x80083FE8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80083FEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80083FF0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80083FF4: lwc1        $f18, 0x38F8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X38F8);
    // 0x80083FF8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80083FFC: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80084000: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80084004: lw          $a3, 0x9A0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9A0);
    // 0x80084008: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x8008400C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80084010: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80084014: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80084018: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8008401C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x80084020: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80084024: nop

    // 0x80084028: andi        $at, $t8, 0x4
    ctx->r1 = ctx->r24 & 0X4;
    // 0x8008402C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80084030: beq         $t8, $zero, L_80084080
    if (ctx->r24 == 0) {
        // 0x80084034: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_80084080;
    }
    // 0x80084034: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80084038: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8008403C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80084040: sub.s       $f10, $f4, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80084044: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80084048: nop

    // 0x8008404C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80084050: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80084054: nop

    // 0x80084058: andi        $at, $t8, 0x4
    ctx->r1 = ctx->r24 & 0X4;
    // 0x8008405C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80084060: bne         $t8, $zero, L_80084078
    if (ctx->r24 != 0) {
        // 0x80084064: nop
    
            goto L_80084078;
    }
    // 0x80084064: nop

    // 0x80084068: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8008406C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80084070: b           L_80084090
    // 0x80084074: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_80084090;
    // 0x80084074: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_80084078:
    // 0x80084078: b           L_80084090
    // 0x8008407C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_80084090;
    // 0x8008407C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_80084080:
    // 0x80084080: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x80084084: nop

    // 0x80084088: bltz        $t8, L_80084078
    if (SIGNED(ctx->r24) < 0) {
        // 0x8008408C: nop
    
            goto L_80084078;
    }
    // 0x8008408C: nop

L_80084090:
    // 0x80084090: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80084094: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80084098: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008409C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800840A0: lwc1        $f16, 0x3900($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3900);
    // 0x800840A4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800840A8: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x800840AC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800840B0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800840B4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800840B8: nop

    // 0x800840BC: cvt.w.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800840C0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800840C4: nop

    // 0x800840C8: andi        $at, $t1, 0x4
    ctx->r1 = ctx->r9 & 0X4;
    // 0x800840CC: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x800840D0: beq         $t1, $zero, L_80084120
    if (ctx->r9 == 0) {
        // 0x800840D4: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_80084120;
    }
    // 0x800840D4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800840D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800840DC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800840E0: sub.s       $f18, $f8, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x800840E4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800840E8: nop

    // 0x800840EC: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800840F0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800840F4: nop

    // 0x800840F8: andi        $at, $t1, 0x4
    ctx->r1 = ctx->r9 & 0X4;
    // 0x800840FC: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x80084100: bne         $t1, $zero, L_80084118
    if (ctx->r9 != 0) {
        // 0x80084104: nop
    
            goto L_80084118;
    }
    // 0x80084104: nop

    // 0x80084108: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8008410C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80084110: b           L_80084130
    // 0x80084114: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_80084130;
    // 0x80084114: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_80084118:
    // 0x80084118: b           L_80084130
    // 0x8008411C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_80084130;
    // 0x8008411C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
L_80084120:
    // 0x80084120: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x80084124: nop

    // 0x80084128: bltz        $t1, L_80084118
    if (SIGNED(ctx->r9) < 0) {
        // 0x8008412C: nop
    
            goto L_80084118;
    }
    // 0x8008412C: nop

L_80084130:
    // 0x80084130: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80084134: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80084138: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008413C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80084140: lwc1        $f10, 0x3908($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3908);
    // 0x80084144: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80084148: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8008414C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80084150: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80084154: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80084158: nop

    // 0x8008415C: cvt.w.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80084160: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80084164: nop

    // 0x80084168: andi        $at, $t7, 0x4
    ctx->r1 = ctx->r15 & 0X4;
    // 0x8008416C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80084170: beq         $t7, $zero, L_800841C0
    if (ctx->r15 == 0) {
        // 0x80084174: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_800841C0;
    }
    // 0x80084174: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80084178: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8008417C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80084180: sub.s       $f16, $f6, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x80084184: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80084188: nop

    // 0x8008418C: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80084190: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80084194: nop

    // 0x80084198: andi        $at, $t7, 0x4
    ctx->r1 = ctx->r15 & 0X4;
    // 0x8008419C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x800841A0: bne         $t7, $zero, L_800841B8
    if (ctx->r15 != 0) {
        // 0x800841A4: nop
    
            goto L_800841B8;
    }
    // 0x800841A4: nop

    // 0x800841A8: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x800841AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800841B0: b           L_800841D0
    // 0x800841B4: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_800841D0;
    // 0x800841B4: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_800841B8:
    // 0x800841B8: b           L_800841D0
    // 0x800841BC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_800841D0;
    // 0x800841BC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_800841C0:
    // 0x800841C0: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x800841C4: nop

    // 0x800841C8: bltz        $t7, L_800841B8
    if (SIGNED(ctx->r15) < 0) {
        // 0x800841CC: nop
    
            goto L_800841B8;
    }
    // 0x800841CC: nop

L_800841D0:
    // 0x800841D0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800841D4: jal         0x800837FC
    // 0x800841D8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_800837FC(rdram, ctx);
        goto after_36;
    // 0x800841D8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_36:
    // 0x800841DC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800841E0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800841E4: sw          $v0, 0xA28($at)
    MEM_W(0XA28, ctx->r1) = ctx->r2;
    // 0x800841E8: addiu       $a1, $a1, -0xFF8
    ctx->r5 = ADD32(ctx->r5, -0XFF8);
    // 0x800841EC: jal         0x800B62D4
    // 0x800841F0: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    sprintf_recomp(rdram, ctx);
        goto after_37;
    // 0x800841F0: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    after_37:
    // 0x800841F4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800841F8: lw          $a3, 0x9A0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9A0);
    // 0x800841FC: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80084200: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x80084204: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x80084208: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8008420C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80084210: jal         0x800837FC
    // 0x80084214: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_800837FC(rdram, ctx);
        goto after_38;
    // 0x80084214: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_38:
    // 0x80084218: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008421C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80084220: sw          $v0, 0xA28($at)
    MEM_W(0XA28, ctx->r1) = ctx->r2;
    // 0x80084224: addiu       $a1, $a1, -0xFD8
    ctx->r5 = ADD32(ctx->r5, -0XFD8);
    // 0x80084228: jal         0x800B62D4
    // 0x8008422C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    sprintf_recomp(rdram, ctx);
        goto after_39;
    // 0x8008422C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    after_39:
    // 0x80084230: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80084234: lw          $a3, 0x9A0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9A0);
    // 0x80084238: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x8008423C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x80084240: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x80084244: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80084248: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8008424C: jal         0x800837FC
    // 0x80084250: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_800837FC(rdram, ctx);
        goto after_40;
    // 0x80084250: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_40:
    // 0x80084254: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80084258: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8008425C: sw          $v0, 0xA28($at)
    MEM_W(0XA28, ctx->r1) = ctx->r2;
    // 0x80084260: addiu       $a1, $a1, -0xFB8
    ctx->r5 = ADD32(ctx->r5, -0XFB8);
    // 0x80084264: jal         0x800B62D4
    // 0x80084268: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    sprintf_recomp(rdram, ctx);
        goto after_41;
    // 0x80084268: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    after_41:
    // 0x8008426C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80084270: lw          $a3, 0x9A0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9A0);
    // 0x80084274: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80084278: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x8008427C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x80084280: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80084284: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80084288: jal         0x800837FC
    // 0x8008428C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_800837FC(rdram, ctx);
        goto after_42;
    // 0x8008428C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_42:
    // 0x80084290: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80084294: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80084298: sw          $v0, 0xA28($at)
    MEM_W(0XA28, ctx->r1) = ctx->r2;
    // 0x8008429C: addiu       $a1, $a1, -0xF98
    ctx->r5 = ADD32(ctx->r5, -0XF98);
    // 0x800842A0: jal         0x800B62D4
    // 0x800842A4: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    sprintf_recomp(rdram, ctx);
        goto after_43;
    // 0x800842A4: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    after_43:
    // 0x800842A8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800842AC: lw          $a3, 0x9A0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9A0);
    // 0x800842B0: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x800842B4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x800842B8: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    // 0x800842BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800842C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800842C4: jal         0x800837FC
    // 0x800842C8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_800837FC(rdram, ctx);
        goto after_44;
    // 0x800842C8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_44:
    // 0x800842CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800842D0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800842D4: sw          $v0, 0xA28($at)
    MEM_W(0XA28, ctx->r1) = ctx->r2;
    // 0x800842D8: addiu       $a1, $a1, -0xF7C
    ctx->r5 = ADD32(ctx->r5, -0XF7C);
    // 0x800842DC: jal         0x800B62D4
    // 0x800842E0: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    sprintf_recomp(rdram, ctx);
        goto after_45;
    // 0x800842E0: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    after_45:
    // 0x800842E4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800842E8: lw          $a3, 0x9A0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9A0);
    // 0x800842EC: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x800842F0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x800842F4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x800842F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800842FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80084300: jal         0x800837FC
    // 0x80084304: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_800837FC(rdram, ctx);
        goto after_46;
    // 0x80084304: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_46:
    // 0x80084308: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x8008430C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80084310: sw          $v0, 0xA28($at)
    MEM_W(0XA28, ctx->r1) = ctx->r2;
    // 0x80084314: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x80084318: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x8008431C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80084320: jal         0x800B84B0
    // 0x80084324: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    osSetTime_recomp(rdram, ctx);
        goto after_47;
    // 0x80084324: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    after_47:
    // 0x80084328: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x8008432C: nop

    // 0x80084330: bne         $t2, $zero, L_80083D3C
    if (ctx->r10 != 0) {
        // 0x80084334: nop
    
            goto L_80083D3C;
    }
    // 0x80084334: nop

    // 0x80084338: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x8008433C: nop

    // 0x80084340: bne         $t3, $zero, L_80083D3C
    if (ctx->r11 != 0) {
        // 0x80084344: nop
    
            goto L_80083D3C;
    }
    // 0x80084344: nop

    // 0x80084348: jal         0x800B3D60
    // 0x8008434C: addiu       $a0, $sp, 0x868
    ctx->r4 = ADD32(ctx->r29, 0X868);
    osContStartReadData_recomp(rdram, ctx);
        goto after_48;
    // 0x8008434C: addiu       $a0, $sp, 0x868
    ctx->r4 = ADD32(ctx->r29, 0X868);
    after_48:
    // 0x80084350: addiu       $a0, $sp, 0x868
    ctx->r4 = ADD32(ctx->r29, 0X868);
    // 0x80084354: addiu       $a1, $sp, 0x880
    ctx->r5 = ADD32(ctx->r29, 0X880);
    // 0x80084358: jal         0x800B3C20
    // 0x8008435C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_49;
    // 0x8008435C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_49:
    // 0x80084360: jal         0x800B3DE4
    // 0x80084364: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    osContGetReadData_recomp(rdram, ctx);
        goto after_50;
    // 0x80084364: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_50:
    // 0x80084368: addiu       $t4, $sp, 0x30
    ctx->r12 = ADD32(ctx->r29, 0X30);
    // 0x8008436C: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x80084370: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x80084374: sh          $t5, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r13;
    // 0x80084378: b           L_80083D3C
    // 0x8008437C: sh          $t5, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r13;
        goto L_80083D3C;
    // 0x8008437C: sh          $t5, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r13;
    // 0x80084380: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80084384: addiu       $sp, $sp, 0x890
    ctx->r29 = ADD32(ctx->r29, 0X890);
    // 0x80084388: jr          $ra
    // 0x8008438C: nop

    return;
    // 0x8008438C: nop

;}
RECOMP_FUNC void func_80084390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084390: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x80084394: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80084398: lw          $t7, 0x38F0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X38F0);
    // 0x8008439C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800843A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800843A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800843A8: sw          $a0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r4;
    // 0x800843AC: sw          $a1, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r5;
    // 0x800843B0: bne         $t7, $at, L_800843D8
    if (ctx->r15 != ctx->r1) {
        // 0x800843B4: sw          $t6, 0x12C($sp)
        MEM_W(0X12C, ctx->r29) = ctx->r14;
            goto L_800843D8;
    }
    // 0x800843B4: sw          $t6, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r14;
    // 0x800843B8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800843BC: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800843C0: addiu       $a2, $a2, 0x9C8
    ctx->r6 = ADD32(ctx->r6, 0X9C8);
    // 0x800843C4: addiu       $a1, $a1, -0xF60
    ctx->r5 = ADD32(ctx->r5, -0XF60);
    // 0x800843C8: jal         0x800B62D4
    // 0x800843CC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x800843CC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x800843D0: b           L_80084448
    // 0x800843D4: nop

        goto L_80084448;
    // 0x800843D4: nop

L_800843D8:
    // 0x800843D8: lw          $t8, 0x134($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X134);
    // 0x800843DC: nop

    // 0x800843E0: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x800843E4: nop

    // 0x800843E8: beq         $t9, $zero, L_80084448
    if (ctx->r25 == 0) {
        // 0x800843EC: nop
    
            goto L_80084448;
    }
    // 0x800843EC: nop

L_800843F0:
    // 0x800843F0: lw          $t0, 0x134($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X134);
    // 0x800843F4: lw          $t2, 0x130($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X130);
    // 0x800843F8: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x800843FC: lw          $t4, 0x4($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X4);
    // 0x80084400: and         $t3, $t1, $t2
    ctx->r11 = ctx->r9 & ctx->r10;
    // 0x80084404: bne         $t3, $t4, L_80084420
    if (ctx->r11 != ctx->r12) {
        // 0x80084408: nop
    
            goto L_80084420;
    }
    // 0x80084408: nop

    // 0x8008440C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80084410: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x80084414: addiu       $a1, $a1, -0xF5C
    ctx->r5 = ADD32(ctx->r5, -0XF5C);
    // 0x80084418: jal         0x800B62D4
    // 0x8008441C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    sprintf_recomp(rdram, ctx);
        goto after_1;
    // 0x8008441C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_1:
L_80084420:
    // 0x80084420: lw          $t5, 0x134($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X134);
    // 0x80084424: nop

    // 0x80084428: addiu       $t6, $t5, 0xC
    ctx->r14 = ADD32(ctx->r13, 0XC);
    // 0x8008442C: sw          $t6, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r14;
    // 0x80084430: lw          $t7, 0x134($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X134);
    // 0x80084434: nop

    // 0x80084438: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8008443C: nop

    // 0x80084440: bne         $t8, $zero, L_800843F0
    if (ctx->r24 != 0) {
        // 0x80084444: nop
    
            goto L_800843F0;
    }
    // 0x80084444: nop

L_80084448:
    // 0x80084448: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8008444C: lw          $t9, 0xA28($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XA28);
    // 0x80084450: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80084454: lw          $a3, 0x9A0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X9A0);
    // 0x80084458: addiu       $t1, $zero, 0xC8
    ctx->r9 = ADD32(0, 0XC8);
    // 0x8008445C: andi        $a2, $t9, 0xFF
    ctx->r6 = ctx->r25 & 0XFF;
    // 0x80084460: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80084464: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80084468: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8008446C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80084470: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80084474: jal         0x800837FC
    // 0x80084478: srl         $a1, $t9, 16
    ctx->r5 = S32(U32(ctx->r25) >> 16);
    func_800837FC(rdram, ctx);
        goto after_2;
    // 0x80084478: srl         $a1, $t9, 16
    ctx->r5 = S32(U32(ctx->r25) >> 16);
    after_2:
    // 0x8008447C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80084480: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80084484: sw          $v0, 0xA28($at)
    MEM_W(0XA28, ctx->r1) = ctx->r2;
    // 0x80084488: jr          $ra
    // 0x8008448C: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x8008448C: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void func_80084490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084490: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80084494: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80084498: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8008449C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800844A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800844A4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800844A8: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800844AC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800844B0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800844B4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800844B8: jal         0x800B3BFC
    // 0x800844BC: addiu       $a0, $a0, -0xF58
    ctx->r4 = ADD32(ctx->r4, -0XF58);
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x800844BC: addiu       $a0, $a0, -0xF58
    ctx->r4 = ADD32(ctx->r4, -0XF58);
    after_0:
    // 0x800844C0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800844C4: jal         0x800B3BFC
    // 0x800844C8: addiu       $a0, $a0, -0xF4C
    ctx->r4 = ADD32(ctx->r4, -0XF4C);
    osSyncPrintf(rdram, ctx);
        goto after_1;
    // 0x800844C8: addiu       $a0, $a0, -0xF4C
    ctx->r4 = ADD32(ctx->r4, -0XF4C);
    after_1:
    // 0x800844CC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800844D0: nop

    // 0x800844D4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x800844D8: nop

    // 0x800844DC: beq         $t8, $zero, L_80084560
    if (ctx->r24 == 0) {
        // 0x800844E0: nop
    
            goto L_80084560;
    }
    // 0x800844E0: nop

L_800844E4:
    // 0x800844E4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800844E8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800844EC: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x800844F0: lw          $t3, 0x4($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X4);
    // 0x800844F4: and         $t2, $t0, $t1
    ctx->r10 = ctx->r8 & ctx->r9;
    // 0x800844F8: bne         $t2, $t3, L_80084538
    if (ctx->r10 != ctx->r11) {
        // 0x800844FC: nop
    
            goto L_80084538;
    }
    // 0x800844FC: nop

    // 0x80084500: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80084504: nop

    // 0x80084508: beq         $t4, $zero, L_80084518
    if (ctx->r12 == 0) {
        // 0x8008450C: nop
    
            goto L_80084518;
    }
    // 0x8008450C: nop

    // 0x80084510: b           L_80084524
    // 0x80084514: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
        goto L_80084524;
    // 0x80084514: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80084518:
    // 0x80084518: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008451C: jal         0x800B3BFC
    // 0x80084520: addiu       $a0, $a0, -0xF48
    ctx->r4 = ADD32(ctx->r4, -0XF48);
    osSyncPrintf(rdram, ctx);
        goto after_2;
    // 0x80084520: addiu       $a0, $a0, -0xF48
    ctx->r4 = ADD32(ctx->r4, -0XF48);
    after_2:
L_80084524:
    // 0x80084524: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80084528: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8008452C: lw          $a1, 0x8($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X8);
    // 0x80084530: jal         0x800B3BFC
    // 0x80084534: addiu       $a0, $a0, -0xF44
    ctx->r4 = ADD32(ctx->r4, -0XF44);
    osSyncPrintf(rdram, ctx);
        goto after_3;
    // 0x80084534: addiu       $a0, $a0, -0xF44
    ctx->r4 = ADD32(ctx->r4, -0XF44);
    after_3:
L_80084538:
    // 0x80084538: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8008453C: nop

    // 0x80084540: addiu       $t7, $t6, 0xC
    ctx->r15 = ADD32(ctx->r14, 0XC);
    // 0x80084544: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80084548: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8008454C: nop

    // 0x80084550: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x80084554: nop

    // 0x80084558: bne         $t0, $zero, L_800844E4
    if (ctx->r8 != 0) {
        // 0x8008455C: nop
    
            goto L_800844E4;
    }
    // 0x8008455C: nop

L_80084560:
    // 0x80084560: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80084564: jal         0x800B3BFC
    // 0x80084568: addiu       $a0, $a0, -0xF40
    ctx->r4 = ADD32(ctx->r4, -0XF40);
    osSyncPrintf(rdram, ctx);
        goto after_4;
    // 0x80084568: addiu       $a0, $a0, -0xF40
    ctx->r4 = ADD32(ctx->r4, -0XF40);
    after_4:
    // 0x8008456C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80084570: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80084574: jr          $ra
    // 0x80084578: nop

    return;
    // 0x80084578: nop

;}
