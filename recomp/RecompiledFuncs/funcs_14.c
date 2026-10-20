#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800751C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800751C0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800751C4: lw          $a0, 0x20C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20C0);
    // 0x800751C8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800751CC: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x800751D0: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x800751D4: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x800751D8: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x800751DC: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x800751E0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800751E4: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x800751E8: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x800751EC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800751F0: lui         $t9, 0xE300
    ctx->r25 = S32(0XE300 << 16);
    // 0x800751F4: ori         $t9, $t9, 0xA01
    ctx->r25 = ctx->r25 | 0XA01;
    // 0x800751F8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x800751FC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80075200: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80075204: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80075208: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8007520C: sw          $a0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r4;
    // 0x80075210: jr          $ra
    // 0x80075214: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80075214: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80075218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075218: lbu         $t6, 0x14($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X14);
    // 0x8007521C: lbu         $t9, 0x15($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X15);
    // 0x80075220: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x80075224: subu        $t0, $a2, $t9
    ctx->r8 = SUB32(ctx->r6, ctx->r25);
    // 0x80075228: subu        $t8, $a1, $t7
    ctx->r24 = SUB32(ctx->r5, ctx->r15);
    // 0x8007522C: addiu       $t1, $t0, 0x3
    ctx->r9 = ADD32(ctx->r8, 0X3);
    // 0x80075230: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
    // 0x80075234: jr          $ra
    // 0x80075238: sh          $t1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r9;
    return;
    // 0x80075238: sh          $t1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_8007523C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007523C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80075240: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80075244: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80075248: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007524C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80075250: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80075254: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80075258: lbu         $t7, 0x1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1);
    // 0x8007525C: nop

    // 0x80075260: addiu       $t8, $t7, 0x3
    ctx->r24 = ADD32(ctx->r15, 0X3);
    // 0x80075264: sb          $t8, 0x1($t6)
    MEM_B(0X1, ctx->r14) = ctx->r24;
    // 0x80075268: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8007526C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80075270: lbu         $at, 0x0($t0)
    ctx->r1 = MEM_BU(ctx->r8, 0X0);
    // 0x80075274: nop

    // 0x80075278: sb          $at, 0x14($t9)
    MEM_B(0X14, ctx->r25) = ctx->r1;
    // 0x8007527C: lbu         $t2, 0x1($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X1);
    // 0x80075280: nop

    // 0x80075284: sb          $t2, 0x15($t9)
    MEM_B(0X15, ctx->r25) = ctx->r10;
    // 0x80075288: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8007528C: nop

    // 0x80075290: lbu         $t4, 0x14($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X14);
    // 0x80075294: lbu         $t5, 0x15($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X15);
    // 0x80075298: nop

    // 0x8007529C: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800752A0: mflo        $t7
    ctx->r15 = lo;
    // 0x800752A4: sh          $t7, 0x16($t3)
    MEM_H(0X16, ctx->r11) = ctx->r15;
    // 0x800752A8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800752AC: nop

    // 0x800752B0: lhu         $t6, 0x16($t8)
    ctx->r14 = MEM_HU(ctx->r24, 0X16);
    // 0x800752B4: nop

    // 0x800752B8: sh          $t6, 0x18($t8)
    MEM_H(0X18, ctx->r24) = ctx->r14;
    // 0x800752BC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800752C0: nop

    // 0x800752C4: lhu         $t9, 0x18($t1)
    ctx->r25 = MEM_HU(ctx->r9, 0X18);
    // 0x800752C8: nop

    // 0x800752CC: slti        $at, $t9, 0x1000
    ctx->r1 = SIGNED(ctx->r25) < 0X1000 ? 1 : 0;
    // 0x800752D0: bne         $at, $zero, L_800752E0
    if (ctx->r1 != 0) {
        // 0x800752D4: nop
    
            goto L_800752E0;
    }
    // 0x800752D4: nop

    // 0x800752D8: b           L_800753EC
    // 0x800752DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800753EC;
    // 0x800752DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800752E0:
    // 0x800752E0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800752E4: nop

    // 0x800752E8: lhu         $a0, 0x18($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X18);
    // 0x800752EC: jal         0x8007E03C
    // 0x800752F0: nop

    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x800752F0: nop

    after_0:
    // 0x800752F4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800752F8: nop

    // 0x800752FC: sw          $v0, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r2;
    // 0x80075300: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80075304: nop

    // 0x80075308: lhu         $a0, 0x18($t4)
    ctx->r4 = MEM_HU(ctx->r12, 0X18);
    // 0x8007530C: jal         0x8007E03C
    // 0x80075310: nop

    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x80075310: nop

    after_1:
    // 0x80075314: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80075318: nop

    // 0x8007531C: sw          $v0, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->r2;
    // 0x80075320: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80075324: nop

    // 0x80075328: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    // 0x8007532C: lhu         $a1, 0x18($t7)
    ctx->r5 = MEM_HU(ctx->r15, 0X18);
    // 0x80075330: jal         0x800B7450
    // 0x80075334: nop

    _bzero(rdram, ctx);
        goto after_2;
    // 0x80075334: nop

    after_2:
    // 0x80075338: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8007533C: nop

    // 0x80075340: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    // 0x80075344: lhu         $a1, 0x18($t3)
    ctx->r5 = MEM_HU(ctx->r11, 0X18);
    // 0x80075348: jal         0x800B7450
    // 0x8007534C: nop

    _bzero(rdram, ctx);
        goto after_3;
    // 0x8007534C: nop

    after_3:
    // 0x80075350: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80075354: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80075358: lhu         $t8, 0x6($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X6);
    // 0x8007535C: nop

    // 0x80075360: sh          $t8, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r24;
    // 0x80075364: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80075368: nop

    // 0x8007536C: lhu         $a0, 0x4($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X4);
    // 0x80075370: nop

    // 0x80075374: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x80075378: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x8007537C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80075380: jal         0x8007E03C
    // 0x80075384: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8007E03C(rdram, ctx);
        goto after_4;
    // 0x80075384: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_4:
    // 0x80075388: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8007538C: nop

    // 0x80075390: sw          $v0, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r2;
    // 0x80075394: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80075398: nop

    // 0x8007539C: lhu         $s0, 0x4($t4)
    ctx->r16 = MEM_HU(ctx->r12, 0X4);
    // 0x800753A0: lw          $s1, 0x8($t4)
    ctx->r17 = MEM_W(ctx->r12, 0X8);
    // 0x800753A4: blez        $s0, L_800753D0
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800753A8: nop
    
            goto L_800753D0;
    }
    // 0x800753A8: nop

L_800753AC:
    // 0x800753AC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800753B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800753B4: lbu         $a1, 0x14($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X14);
    // 0x800753B8: lbu         $a2, 0x15($t5)
    ctx->r6 = MEM_BU(ctx->r13, 0X15);
    // 0x800753BC: jal         0x800749A0
    // 0x800753C0: nop

    func_800749A0(rdram, ctx);
        goto after_5;
    // 0x800753C0: nop

    after_5:
    // 0x800753C4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800753C8: bgtz        $s0, L_800753AC
    if (SIGNED(ctx->r16) > 0) {
        // 0x800753CC: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_800753AC;
    }
    // 0x800753CC: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_800753D0:
    // 0x800753D0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800753D4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800753D8: lh          $a1, 0x2($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X2);
    // 0x800753DC: lh          $a2, 0x4($t7)
    ctx->r6 = MEM_H(ctx->r15, 0X4);
    // 0x800753E0: jal         0x80075218
    // 0x800753E4: nop

    func_80075218(rdram, ctx);
        goto after_6;
    // 0x800753E4: nop

    after_6:
    // 0x800753E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800753EC:
    // 0x800753EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800753F0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800753F4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800753F8: jr          $ra
    // 0x800753FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800753FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80075400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075404: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80075408: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8007540C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075410: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    // 0x80075414: jal         0x8007E328
    // 0x80075418: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x80075418: nop

    after_0:
    // 0x8007541C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80075420: nop

    // 0x80075424: sw          $zero, 0x8($t7)
    MEM_W(0X8, ctx->r15) = 0;
    // 0x80075428: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8007542C: nop

    // 0x80075430: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    // 0x80075434: jal         0x8007E328
    // 0x80075438: nop

    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x80075438: nop

    after_1:
    // 0x8007543C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80075440: nop

    // 0x80075444: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    // 0x80075448: jal         0x8007E328
    // 0x8007544C: nop

    func_8007E328(rdram, ctx);
        goto after_2;
    // 0x8007544C: nop

    after_2:
    // 0x80075450: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80075454: nop

    // 0x80075458: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
    // 0x8007545C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80075460: nop

    // 0x80075464: sw          $zero, 0x10($t1)
    MEM_W(0X10, ctx->r9) = 0;
    // 0x80075468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007546C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075470: jr          $ra
    // 0x80075474: nop

    return;
    // 0x80075474: nop

    // 0x80075478: nop

    // 0x8007547C: nop

;}
RECOMP_FUNC void func_80075480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075480: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80075484: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80075488: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x8007548C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80075490: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80075494: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80075498: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8007549C: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x800754A0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800754A4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800754A8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800754AC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800754B0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800754B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800754B8: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x800754BC: lhu         $t7, 0x6($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X6);
    // 0x800754C0: nop

    // 0x800754C4: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
    // 0x800754C8: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x800754CC: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x800754D0: lhu         $t0, 0x6($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X6);
    // 0x800754D4: nop

    // 0x800754D8: sh          $t0, 0x6($t1)
    MEM_H(0X6, ctx->r9) = ctx->r8;
    // 0x800754DC: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x800754E0: nop

    // 0x800754E4: lh          $t3, 0x4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X4);
    // 0x800754E8: lh          $t4, 0x6($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X6);
    // 0x800754EC: lbu         $t6, 0x9($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X9);
    // 0x800754F0: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800754F4: mflo        $t5
    ctx->r13 = lo;
    // 0x800754F8: nop

    // 0x800754FC: nop

    // 0x80075500: multu       $t5, $t6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80075504: mflo        $s0
    ctx->r16 = lo;
    // 0x80075508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007550C: jal         0x8007E03C
    // 0x80075510: nop

    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x80075510: nop

    after_0:
    // 0x80075514: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x80075518: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8007551C: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x80075520: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x80075524: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x80075528: lhu         $t0, 0x6($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X6);
    // 0x8007552C: lw          $s5, 0x0($t9)
    ctx->r21 = MEM_W(ctx->r25, 0X0);
    // 0x80075530: lw          $s3, 0x0($t8)
    ctx->r19 = MEM_W(ctx->r24, 0X0);
    // 0x80075534: slt         $at, $s2, $t0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80075538: beq         $at, $zero, L_80075678
    if (ctx->r1 == 0) {
        // 0x8007553C: nop
    
            goto L_80075678;
    }
    // 0x8007553C: nop

L_80075540:
    // 0x80075540: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x80075544: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80075548: lhu         $t3, 0x6($t1)
    ctx->r11 = MEM_HU(ctx->r9, 0X6);
    // 0x8007554C: lw          $s4, 0x0($t1)
    ctx->r20 = MEM_W(ctx->r9, 0X0);
    // 0x80075550: slt         $at, $s1, $t3
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80075554: beq         $at, $zero, L_8007565C
    if (ctx->r1 == 0) {
        // 0x80075558: nop
    
            goto L_8007565C;
    }
    // 0x80075558: nop

L_8007555C:
    // 0x8007555C: lbu         $t2, 0x0($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X0);
    // 0x80075560: lbu         $t4, 0x0($s5)
    ctx->r12 = MEM_BU(ctx->r21, 0X0);
    // 0x80075564: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80075568: subu        $t6, $t5, $t2
    ctx->r14 = SUB32(ctx->r13, ctx->r10);
    // 0x8007556C: multu       $t4, $t6
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80075570: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80075574: lbu         $t9, 0x1($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X1);
    // 0x80075578: lbu         $t8, 0x1($s5)
    ctx->r24 = MEM_BU(ctx->r21, 0X1);
    // 0x8007557C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80075580: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x80075584: lbu         $t2, 0x2($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X2);
    // 0x80075588: lbu         $t5, 0x2($s5)
    ctx->r13 = MEM_BU(ctx->r21, 0X2);
    // 0x8007558C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80075590: subu        $t6, $t4, $t2
    ctx->r14 = SUB32(ctx->r12, ctx->r10);
    // 0x80075594: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80075598: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x8007559C: mflo        $s6
    ctx->r22 = lo;
    // 0x800755A0: addiu       $s4, $s4, 0x3
    ctx->r20 = ADD32(ctx->r20, 0X3);
    // 0x800755A4: nop

    // 0x800755A8: div         $zero, $s6, $at
    lo = S32(S64(S32(ctx->r22)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r22)) % S64(S32(ctx->r1)));
    // 0x800755AC: mflo        $t7
    ctx->r15 = lo;
    // 0x800755B0: or          $s6, $t7, $zero
    ctx->r22 = ctx->r15 | 0;
    // 0x800755B4: nop

    // 0x800755B8: multu       $t8, $t1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800755BC: mflo        $s7
    ctx->r23 = lo;
    // 0x800755C0: nop

    // 0x800755C4: nop

    // 0x800755C8: div         $zero, $s7, $at
    lo = S32(S64(S32(ctx->r23)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r23)) % S64(S32(ctx->r1)));
    // 0x800755CC: mflo        $t3
    ctx->r11 = lo;
    // 0x800755D0: or          $s7, $t3, $zero
    ctx->r23 = ctx->r11 | 0;
    // 0x800755D4: nop

    // 0x800755D8: multu       $t5, $t6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800755DC: mflo        $t7
    ctx->r15 = lo;
    // 0x800755E0: nop

    // 0x800755E4: nop

    // 0x800755E8: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x800755EC: mflo        $t0
    ctx->r8 = lo;
    // 0x800755F0: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x800755F4: lbu         $t9, -0x3($s4)
    ctx->r25 = MEM_BU(ctx->r20, -0X3);
    // 0x800755F8: lbu         $t8, -0x2($s4)
    ctx->r24 = MEM_BU(ctx->r20, -0X2);
    // 0x800755FC: lbu         $t1, -0x1($s4)
    ctx->r9 = MEM_BU(ctx->r20, -0X1);
    // 0x80075600: addu        $s6, $s6, $t9
    ctx->r22 = ADD32(ctx->r22, ctx->r25);
    // 0x80075604: addu        $s7, $s7, $t8
    ctx->r23 = ADD32(ctx->r23, ctx->r24);
    // 0x80075608: srl         $t5, $s7, 3
    ctx->r13 = S32(U32(ctx->r23) >> 3);
    // 0x8007560C: srl         $t4, $s6, 3
    ctx->r12 = S32(U32(ctx->r22) >> 3);
    // 0x80075610: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x80075614: srl         $t9, $t3, 3
    ctx->r25 = S32(U32(ctx->r11) >> 3);
    // 0x80075618: sll         $t2, $t4, 11
    ctx->r10 = S32(ctx->r12 << 11);
    // 0x8007561C: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x80075620: or          $t7, $t2, $t6
    ctx->r15 = ctx->r10 | ctx->r14;
    // 0x80075624: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x80075628: or          $t0, $t7, $t8
    ctx->r8 = ctx->r15 | ctx->r24;
    // 0x8007562C: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x80075630: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x80075634: sh          $t1, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r9;
    // 0x80075638: andi        $t4, $t1, 0xFFFF
    ctx->r12 = ctx->r9 & 0XFFFF;
    // 0x8007563C: sh          $t4, -0x2($s3)
    MEM_H(-0X2, ctx->r19) = ctx->r12;
    // 0x80075640: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x80075644: nop

    // 0x80075648: lhu         $t2, 0x6($t5)
    ctx->r10 = MEM_HU(ctx->r13, 0X6);
    // 0x8007564C: nop

    // 0x80075650: slt         $at, $s1, $t2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80075654: bne         $at, $zero, L_8007555C
    if (ctx->r1 != 0) {
        // 0x80075658: nop
    
            goto L_8007555C;
    }
    // 0x80075658: nop

L_8007565C:
    // 0x8007565C: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x80075660: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80075664: lhu         $t3, 0x6($t6)
    ctx->r11 = MEM_HU(ctx->r14, 0X6);
    // 0x80075668: addiu       $s5, $s5, 0x3
    ctx->r21 = ADD32(ctx->r21, 0X3);
    // 0x8007566C: slt         $at, $s2, $t3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80075670: bne         $at, $zero, L_80075540
    if (ctx->r1 != 0) {
        // 0x80075674: nop
    
            goto L_80075540;
    }
    // 0x80075674: nop

L_80075678:
    // 0x80075678: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8007567C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80075680: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80075684: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80075688: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8007568C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80075690: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80075694: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80075698: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8007569C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x800756A0: jr          $ra
    // 0x800756A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800756A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800756A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800756A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800756AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800756B0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800756B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800756B8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x800756BC: jal         0x8007E328
    // 0x800756C0: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x800756C0: nop

    after_0:
    // 0x800756C4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800756C8: nop

    // 0x800756CC: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x800756D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800756D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800756D8: jr          $ra
    // 0x800756DC: nop

    return;
    // 0x800756DC: nop

;}
RECOMP_FUNC void func_800756E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800756E0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800756E4: addiu       $t6, $sp, 0x8
    ctx->r14 = ADD32(ctx->r29, 0X8);
    // 0x800756E8: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x800756EC: addiu       $t8, $t6, 0x14
    ctx->r24 = ADD32(ctx->r14, 0X14);
    // 0x800756F0: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x800756F4: sw          $t8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r24;
    // 0x800756F8: jr          $ra
    // 0x800756FC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x800756FC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80075700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075700: lui         $t6, 0x1
    ctx->r14 = S32(0X1 << 16);
    // 0x80075704: divu        $zero, $t6, $a1
    lo = S32(U32(ctx->r14) / U32(ctx->r5)); hi = S32(U32(ctx->r14) % U32(ctx->r5));
    // 0x80075708: lui         $t9, 0x1
    ctx->r25 = S32(0X1 << 16);
    // 0x8007570C: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
    // 0x80075710: sw          $a2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r6;
    // 0x80075714: sw          $a3, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r7;
    // 0x80075718: bne         $a1, $zero, L_80075724
    if (ctx->r5 != 0) {
        // 0x8007571C: nop
    
            goto L_80075724;
    }
    // 0x8007571C: nop

    // 0x80075720: break       7
    do_break(2147964704);
L_80075724:
    // 0x80075724: mflo        $t7
    ctx->r15 = lo;
    // 0x80075728: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8007572C: sw          $t8, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r24;
    // 0x80075730: divu        $zero, $t9, $a2
    lo = S32(U32(ctx->r25) / U32(ctx->r6)); hi = S32(U32(ctx->r25) % U32(ctx->r6));
    // 0x80075734: bne         $a2, $zero, L_80075740
    if (ctx->r6 != 0) {
        // 0x80075738: nop
    
            goto L_80075740;
    }
    // 0x80075738: nop

    // 0x8007573C: break       7
    do_break(2147964732);
L_80075740:
    // 0x80075740: mflo        $t0
    ctx->r8 = lo;
    // 0x80075744: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x80075748: sw          $t1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r9;
    // 0x8007574C: multu       $a1, $a2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80075750: mflo        $t2
    ctx->r10 = lo;
    // 0x80075754: sw          $t2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r10;
    // 0x80075758: jr          $ra
    // 0x8007575C: nop

    return;
    // 0x8007575C: nop

;}
RECOMP_FUNC void func_80075760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075760: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80075764: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80075768: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007576C: beq         $a2, $zero, L_80075790
    if (ctx->r6 == 0) {
        // 0x80075770: sb          $a1, 0x5C($a0)
        MEM_B(0X5C, ctx->r4) = ctx->r5;
            goto L_80075790;
    }
    // 0x80075770: sb          $a1, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r5;
    // 0x80075774: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80075778: beq         $a2, $at, L_800757A8
    if (ctx->r6 == ctx->r1) {
        // 0x8007577C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800757A8;
    }
    // 0x8007577C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80075780: beq         $a2, $at, L_80075798
    if (ctx->r6 == ctx->r1) {
        // 0x80075784: nop
    
            goto L_80075798;
    }
    // 0x80075784: nop

    // 0x80075788: b           L_800757B4
    // 0x8007578C: nop

        goto L_800757B4;
    // 0x8007578C: nop

L_80075790:
    // 0x80075790: b           L_800757B4
    // 0x80075794: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
        goto L_800757B4;
    // 0x80075794: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
L_80075798:
    // 0x80075798: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8007579C: addiu       $t6, $t6, 0x2FB0
    ctx->r14 = ADD32(ctx->r14, 0X2FB0);
    // 0x800757A0: b           L_800757B4
    // 0x800757A4: sw          $t6, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r14;
        goto L_800757B4;
    // 0x800757A4: sw          $t6, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r14;
L_800757A8:
    // 0x800757A8: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x800757AC: addiu       $t7, $t7, 0x30F0
    ctx->r15 = ADD32(ctx->r15, 0X30F0);
    // 0x800757B0: sw          $t7, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r15;
L_800757B4:
    // 0x800757B4: jr          $ra
    // 0x800757B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800757B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800757BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800757BC: lbu         $t0, 0x5C($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X5C);
    // 0x800757C0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800757C4: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x800757C8: sh          $a2, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r6;
    // 0x800757CC: beq         $t0, $zero, L_80075824
    if (ctx->r8 == 0) {
        // 0x800757D0: sh          $a3, 0x6($a0)
        MEM_H(0X6, ctx->r4) = ctx->r7;
            goto L_80075824;
    }
    // 0x800757D0: sh          $a3, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r7;
    // 0x800757D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800757D8: beq         $t0, $at, L_80075800
    if (ctx->r8 == ctx->r1) {
        // 0x800757DC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80075800;
    }
    // 0x800757DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800757E0: bne         $t0, $at, L_8007581C
    if (ctx->r8 != ctx->r1) {
        // 0x800757E4: addiu       $at, $zero, 0x80
        ctx->r1 = ADD32(0, 0X80);
            goto L_8007581C;
    }
    // 0x800757E4: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x800757E8: bne         $a2, $at, L_800757F8
    if (ctx->r6 != ctx->r1) {
        // 0x800757EC: addiu       $at, $zero, 0x80
        ctx->r1 = ADD32(0, 0X80);
            goto L_800757F8;
    }
    // 0x800757EC: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x800757F0: beq         $a3, $at, L_80075824
    if (ctx->r7 == ctx->r1) {
        // 0x800757F4: nop
    
            goto L_80075824;
    }
    // 0x800757F4: nop

L_800757F8:
    // 0x800757F8: b           L_80075828
    // 0x800757FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80075828;
    // 0x800757FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80075800:
    // 0x80075800: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x80075804: bne         $a2, $at, L_80075814
    if (ctx->r6 != ctx->r1) {
        // 0x80075808: addiu       $at, $zero, 0x80
        ctx->r1 = ADD32(0, 0X80);
            goto L_80075814;
    }
    // 0x80075808: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x8007580C: beq         $a3, $at, L_80075824
    if (ctx->r7 == ctx->r1) {
        // 0x80075810: nop
    
            goto L_80075824;
    }
    // 0x80075810: nop

L_80075814:
    // 0x80075814: b           L_80075828
    // 0x80075818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80075828;
    // 0x80075818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8007581C:
    // 0x8007581C: b           L_80075828
    // 0x80075820: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80075828;
    // 0x80075820: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80075824:
    // 0x80075824: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80075828:
    // 0x80075828: jr          $ra
    // 0x8007582C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007582C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80075830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075838: jal         0x800756E0
    // 0x8007583C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800756E0(rdram, ctx);
        goto after_0;
    // 0x8007583C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80075840: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80075844: jal         0x80075760
    // 0x80075848: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80075760(rdram, ctx);
        goto after_1;
    // 0x80075848: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8007584C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80075850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80075854: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80075858: jal         0x800757BC
    // 0x8007585C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800757BC(rdram, ctx);
        goto after_2;
    // 0x8007585C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x80075860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075868: jr          $ra
    // 0x8007586C: nop

    return;
    // 0x8007586C: nop

;}
RECOMP_FUNC void func_80075870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075874: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80075878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007587C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80075880: jal         0x80075760
    // 0x80075884: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80075760(rdram, ctx);
        goto after_0;
    // 0x80075884: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075888: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007588C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80075890: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80075894: jal         0x800757BC
    // 0x80075898: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800757BC(rdram, ctx);
        goto after_1;
    // 0x80075898: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8007589C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800758A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800758A4: jr          $ra
    // 0x800758A8: nop

    return;
    // 0x800758A8: nop

    // 0x800758AC: nop

;}
RECOMP_FUNC void func_800758B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800758B0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800758B4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x800758B8: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800758BC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x800758C0: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x800758C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800758C8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800758CC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800758D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800758D4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800758D8: lbu         $t0, -0x348($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X348);
    // 0x800758DC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800758E0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800758E4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x800758E8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800758EC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800758F0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800758F4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800758F8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800758FC: beq         $t0, $zero, L_80075914
    if (ctx->r8 == 0) {
        // 0x80075900: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80075914;
    }
    // 0x80075900: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80075904: ori         $t1, $s1, 0x1
    ctx->r9 = ctx->r17 | 0X1;
    // 0x80075908: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x8007590C: andi        $t2, $s1, 0xFF
    ctx->r10 = ctx->r17 & 0XFF;
    // 0x80075910: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
L_80075914:
    // 0x80075914: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80075918: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x8007591C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80075920: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80075924: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80075928: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8007592C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80075930: lbu         $t7, -0x347($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X347);
    // 0x80075934: nop

    // 0x80075938: beq         $t7, $zero, L_80075950
    if (ctx->r15 == 0) {
        // 0x8007593C: nop
    
            goto L_80075950;
    }
    // 0x8007593C: nop

    // 0x80075940: ori         $t8, $s1, 0x2
    ctx->r24 = ctx->r17 | 0X2;
    // 0x80075944: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x80075948: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x8007594C: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
L_80075950:
    // 0x80075950: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80075954: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x80075958: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8007595C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80075960: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80075964: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80075968: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8007596C: lbu         $t4, -0x345($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X345);
    // 0x80075970: nop

    // 0x80075974: beq         $t4, $zero, L_8007598C
    if (ctx->r12 == 0) {
        // 0x80075978: nop
    
            goto L_8007598C;
    }
    // 0x80075978: nop

    // 0x8007597C: ori         $t5, $s1, 0x4
    ctx->r13 = ctx->r17 | 0X4;
    // 0x80075980: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x80075984: andi        $t6, $s1, 0xFF
    ctx->r14 = ctx->r17 & 0XFF;
    // 0x80075988: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
L_8007598C:
    // 0x8007598C: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80075990: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80075994: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80075998: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8007599C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800759A0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800759A4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800759A8: lbu         $t1, -0x344($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X344);
    // 0x800759AC: nop

    // 0x800759B0: beq         $t1, $zero, L_800759C8
    if (ctx->r9 == 0) {
        // 0x800759B4: nop
    
            goto L_800759C8;
    }
    // 0x800759B4: nop

    // 0x800759B8: ori         $t2, $s1, 0x8
    ctx->r10 = ctx->r17 | 0X8;
    // 0x800759BC: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x800759C0: andi        $t3, $s1, 0xFF
    ctx->r11 = ctx->r17 & 0XFF;
    // 0x800759C4: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
L_800759C8:
    // 0x800759C8: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800759CC: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x800759D0: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x800759D4: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800759D8: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x800759DC: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x800759E0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800759E4: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x800759E8: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x800759EC: lw          $s0, 0x830($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X830);
    // 0x800759F0: nop

    // 0x800759F4: bne         $s0, $zero, L_80075A10
    if (ctx->r16 != 0) {
        // 0x800759F8: nop
    
            goto L_80075A10;
    }
    // 0x800759F8: nop

    // 0x800759FC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80075A00: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80075A04: addiu       $a1, $a1, -0x24A0
    ctx->r5 = ADD32(ctx->r5, -0X24A0);
    // 0x80075A08: jal         0x80083560
    // 0x80075A0C: addiu       $a0, $a0, -0x24C0
    ctx->r4 = ADD32(ctx->r4, -0X24C0);
    Fault_Assert(rdram, ctx);
        goto after_0;
    // 0x80075A0C: addiu       $a0, $a0, -0x24C0
    ctx->r4 = ADD32(ctx->r4, -0X24C0);
    after_0:
L_80075A10:
    // 0x80075A10: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80075A14: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x80075A18: slti        $at, $s5, 0x4
    ctx->r1 = SIGNED(ctx->r21) < 0X4 ? 1 : 0;
    // 0x80075A1C: beq         $at, $zero, L_80075A60
    if (ctx->r1 == 0) {
        // 0x80075A20: or          $s2, $s0, $zero
        ctx->r18 = ctx->r16 | 0;
            goto L_80075A60;
    }
    // 0x80075A20: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
L_80075A24:
    // 0x80075A24: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80075A28: slti        $at, $s4, 0x4
    ctx->r1 = SIGNED(ctx->r20) < 0X4 ? 1 : 0;
    // 0x80075A2C: beq         $at, $zero, L_80075A50
    if (ctx->r1 == 0) {
        // 0x80075A30: nop
    
            goto L_80075A50;
    }
    // 0x80075A30: nop

L_80075A34:
    // 0x80075A34: lhu         $t1, 0x0($s2)
    ctx->r9 = MEM_HU(ctx->r18, 0X0);
    // 0x80075A38: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80075A3C: slti        $at, $s4, 0x4
    ctx->r1 = SIGNED(ctx->r20) < 0X4 ? 1 : 0;
    // 0x80075A40: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x80075A44: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x80075A48: bne         $at, $zero, L_80075A34
    if (ctx->r1 != 0) {
        // 0x80075A4C: sh          $t1, -0x2($s3)
        MEM_H(-0X2, ctx->r19) = ctx->r9;
            goto L_80075A34;
    }
    // 0x80075A4C: sh          $t1, -0x2($s3)
    MEM_H(-0X2, ctx->r19) = ctx->r9;
L_80075A50:
    // 0x80075A50: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80075A54: slti        $at, $s5, 0x4
    ctx->r1 = SIGNED(ctx->r21) < 0X4 ? 1 : 0;
    // 0x80075A58: bne         $at, $zero, L_80075A24
    if (ctx->r1 != 0) {
        // 0x80075A5C: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_80075A24;
    }
    // 0x80075A5C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
L_80075A60:
    // 0x80075A60: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80075A64: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80075A68: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80075A6C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80075A70: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80075A74: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80075A78: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80075A7C: jr          $ra
    // 0x80075A80: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80075A80: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80075A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075A84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075A88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80075A8C: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x80075A90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075A94: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x80075A98: beq         $t7, $zero, L_80075AB4
    if (ctx->r15 == 0) {
        // 0x80075A9C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80075AB4;
    }
    // 0x80075A9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80075AA0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80075AA4: addiu       $t9, $t9, -0x348
    ctx->r25 = ADD32(ctx->r25, -0X348);
    // 0x80075AA8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80075AAC: b           L_80075AC0
    // 0x80075AB0: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
        goto L_80075AC0;
    // 0x80075AB0: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
L_80075AB4:
    // 0x80075AB4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80075AB8: addiu       $t0, $t0, -0x348
    ctx->r8 = ADD32(ctx->r8, -0X348);
    // 0x80075ABC: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
L_80075AC0:
    // 0x80075AC0: lbu         $t1, 0x1B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1B);
    // 0x80075AC4: nop

    // 0x80075AC8: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80075ACC: beq         $t2, $zero, L_80075AE8
    if (ctx->r10 == 0) {
        // 0x80075AD0: nop
    
            goto L_80075AE8;
    }
    // 0x80075AD0: nop

    // 0x80075AD4: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80075AD8: addiu       $t4, $t4, -0x348
    ctx->r12 = ADD32(ctx->r12, -0X348);
    // 0x80075ADC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80075AE0: b           L_80075AF4
    // 0x80075AE4: sb          $t3, 0x1($t4)
    MEM_B(0X1, ctx->r12) = ctx->r11;
        goto L_80075AF4;
    // 0x80075AE4: sb          $t3, 0x1($t4)
    MEM_B(0X1, ctx->r12) = ctx->r11;
L_80075AE8:
    // 0x80075AE8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80075AEC: addiu       $t5, $t5, -0x348
    ctx->r13 = ADD32(ctx->r13, -0X348);
    // 0x80075AF0: sb          $zero, 0x1($t5)
    MEM_B(0X1, ctx->r13) = 0;
L_80075AF4:
    // 0x80075AF4: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x80075AF8: nop

    // 0x80075AFC: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x80075B00: beq         $t7, $zero, L_80075B1C
    if (ctx->r15 == 0) {
        // 0x80075B04: nop
    
            goto L_80075B1C;
    }
    // 0x80075B04: nop

    // 0x80075B08: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80075B0C: addiu       $t9, $t9, -0x348
    ctx->r25 = ADD32(ctx->r25, -0X348);
    // 0x80075B10: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80075B14: b           L_80075B28
    // 0x80075B18: sb          $t8, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r24;
        goto L_80075B28;
    // 0x80075B18: sb          $t8, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r24;
L_80075B1C:
    // 0x80075B1C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80075B20: addiu       $t0, $t0, -0x348
    ctx->r8 = ADD32(ctx->r8, -0X348);
    // 0x80075B24: sb          $zero, 0x2($t0)
    MEM_B(0X2, ctx->r8) = 0;
L_80075B28:
    // 0x80075B28: lbu         $t1, 0x1B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1B);
    // 0x80075B2C: nop

    // 0x80075B30: andi        $t2, $t1, 0x8
    ctx->r10 = ctx->r9 & 0X8;
    // 0x80075B34: beq         $t2, $zero, L_80075B50
    if (ctx->r10 == 0) {
        // 0x80075B38: nop
    
            goto L_80075B50;
    }
    // 0x80075B38: nop

    // 0x80075B3C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80075B40: addiu       $t4, $t4, -0x348
    ctx->r12 = ADD32(ctx->r12, -0X348);
    // 0x80075B44: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80075B48: b           L_80075B5C
    // 0x80075B4C: sb          $t3, 0x3($t4)
    MEM_B(0X3, ctx->r12) = ctx->r11;
        goto L_80075B5C;
    // 0x80075B4C: sb          $t3, 0x3($t4)
    MEM_B(0X3, ctx->r12) = ctx->r11;
L_80075B50:
    // 0x80075B50: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80075B54: addiu       $t5, $t5, -0x348
    ctx->r13 = ADD32(ctx->r13, -0X348);
    // 0x80075B58: sb          $zero, 0x3($t5)
    MEM_B(0X3, ctx->r13) = 0;
L_80075B5C:
    // 0x80075B5C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80075B60: addiu       $t7, $t7, -0x348
    ctx->r15 = ADD32(ctx->r15, -0X348);
    // 0x80075B64: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80075B68: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
    // 0x80075B6C: lbu         $t8, 0x1B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1B);
    // 0x80075B70: nop

    // 0x80075B74: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80075B78: beq         $t9, $zero, L_80075B94
    if (ctx->r25 == 0) {
        // 0x80075B7C: nop
    
            goto L_80075B94;
    }
    // 0x80075B7C: nop

    // 0x80075B80: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80075B84: addiu       $t1, $t1, -0x348
    ctx->r9 = ADD32(ctx->r9, -0X348);
    // 0x80075B88: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80075B8C: b           L_80075BA0
    // 0x80075B90: sb          $t0, 0x5($t1)
    MEM_B(0X5, ctx->r9) = ctx->r8;
        goto L_80075BA0;
    // 0x80075B90: sb          $t0, 0x5($t1)
    MEM_B(0X5, ctx->r9) = ctx->r8;
L_80075B94:
    // 0x80075B94: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80075B98: addiu       $t2, $t2, -0x348
    ctx->r10 = ADD32(ctx->r10, -0X348);
    // 0x80075B9C: sb          $zero, 0x5($t2)
    MEM_B(0X5, ctx->r10) = 0;
L_80075BA0:
    // 0x80075BA0: lbu         $t3, 0x1B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X1B);
    // 0x80075BA4: nop

    // 0x80075BA8: andi        $t4, $t3, 0x40
    ctx->r12 = ctx->r11 & 0X40;
    // 0x80075BAC: beq         $t4, $zero, L_80075BC8
    if (ctx->r12 == 0) {
        // 0x80075BB0: nop
    
            goto L_80075BC8;
    }
    // 0x80075BB0: nop

    // 0x80075BB4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80075BB8: addiu       $t6, $t6, -0x348
    ctx->r14 = ADD32(ctx->r14, -0X348);
    // 0x80075BBC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80075BC0: b           L_80075BD4
    // 0x80075BC4: sb          $t5, 0x6($t6)
    MEM_B(0X6, ctx->r14) = ctx->r13;
        goto L_80075BD4;
    // 0x80075BC4: sb          $t5, 0x6($t6)
    MEM_B(0X6, ctx->r14) = ctx->r13;
L_80075BC8:
    // 0x80075BC8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80075BCC: addiu       $t7, $t7, -0x348
    ctx->r15 = ADD32(ctx->r15, -0X348);
    // 0x80075BD0: sb          $zero, 0x6($t7)
    MEM_B(0X6, ctx->r15) = 0;
L_80075BD4:
    // 0x80075BD4: lbu         $t8, 0x1B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1B);
    // 0x80075BD8: nop

    // 0x80075BDC: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x80075BE0: beq         $t9, $zero, L_80075BFC
    if (ctx->r25 == 0) {
        // 0x80075BE4: nop
    
            goto L_80075BFC;
    }
    // 0x80075BE4: nop

    // 0x80075BE8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80075BEC: addiu       $t1, $t1, -0x348
    ctx->r9 = ADD32(ctx->r9, -0X348);
    // 0x80075BF0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80075BF4: b           L_80075C08
    // 0x80075BF8: sb          $t0, 0x7($t1)
    MEM_B(0X7, ctx->r9) = ctx->r8;
        goto L_80075C08;
    // 0x80075BF8: sb          $t0, 0x7($t1)
    MEM_B(0X7, ctx->r9) = ctx->r8;
L_80075BFC:
    // 0x80075BFC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80075C00: addiu       $t2, $t2, -0x348
    ctx->r10 = ADD32(ctx->r10, -0X348);
    // 0x80075C04: sb          $zero, 0x7($t2)
    MEM_B(0X7, ctx->r10) = 0;
L_80075C08:
    // 0x80075C08: lbu         $t3, 0x1B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X1B);
    // 0x80075C0C: nop

    // 0x80075C10: andi        $t4, $t3, 0x20
    ctx->r12 = ctx->r11 & 0X20;
    // 0x80075C14: beq         $t4, $zero, L_80075C30
    if (ctx->r12 == 0) {
        // 0x80075C18: nop
    
            goto L_80075C30;
    }
    // 0x80075C18: nop

    // 0x80075C1C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80075C20: addiu       $t6, $t6, -0x348
    ctx->r14 = ADD32(ctx->r14, -0X348);
    // 0x80075C24: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80075C28: b           L_80075C3C
    // 0x80075C2C: sb          $t5, 0x8($t6)
    MEM_B(0X8, ctx->r14) = ctx->r13;
        goto L_80075C3C;
    // 0x80075C2C: sb          $t5, 0x8($t6)
    MEM_B(0X8, ctx->r14) = ctx->r13;
L_80075C30:
    // 0x80075C30: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80075C34: addiu       $t7, $t7, -0x348
    ctx->r15 = ADD32(ctx->r15, -0X348);
    // 0x80075C38: sb          $zero, 0x8($t7)
    MEM_B(0X8, ctx->r15) = 0;
L_80075C3C:
    // 0x80075C3C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80075C40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80075C44: jal         0x800758B0
    // 0x80075C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800758B0(rdram, ctx);
        goto after_0;
    // 0x80075C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075C4C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80075C50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80075C54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80075C58: jal         0x800758B0
    // 0x80075C5C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    func_800758B0(rdram, ctx);
        goto after_1;
    // 0x80075C5C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    after_1:
    // 0x80075C60: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80075C64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80075C68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80075C6C: jal         0x800758B0
    // 0x80075C70: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    func_800758B0(rdram, ctx);
        goto after_2;
    // 0x80075C70: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    after_2:
    // 0x80075C74: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80075C78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80075C7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80075C80: jal         0x800758B0
    // 0x80075C84: addiu       $a2, $a2, 0x48
    ctx->r6 = ADD32(ctx->r6, 0X48);
    func_800758B0(rdram, ctx);
        goto after_3;
    // 0x80075C84: addiu       $a2, $a2, 0x48
    ctx->r6 = ADD32(ctx->r6, 0X48);
    after_3:
    // 0x80075C88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075C90: jr          $ra
    // 0x80075C94: nop

    return;
    // 0x80075C94: nop

;}
RECOMP_FUNC void func_80075C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075C98: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80075C9C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80075CA0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80075CA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80075CA8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80075CAC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80075CB0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80075CB4: slti        $at, $s1, 0x100
    ctx->r1 = SIGNED(ctx->r17) < 0X100 ? 1 : 0;
    // 0x80075CB8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80075CBC: beq         $at, $zero, L_80075D7C
    if (ctx->r1 == 0) {
        // 0x80075CC0: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80075D7C;
    }
    // 0x80075CC0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80075CC4:
    // 0x80075CC4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80075CC8: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x80075CCC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80075CD0: addiu       $at, $t8, 0x7FFF
    ctx->r1 = ADD32(ctx->r24, 0X7FFF);
    // 0x80075CD4: andi        $t9, $s1, 0x80
    ctx->r25 = ctx->r17 & 0X80;
    // 0x80075CD8: beq         $t9, $zero, L_80075CEC
    if (ctx->r25 == 0) {
        // 0x80075CDC: sw          $t6, 0x5C01($at)
        MEM_W(0X5C01, ctx->r1) = ctx->r14;
            goto L_80075CEC;
    }
    // 0x80075CDC: sw          $t6, 0x5C01($at)
    MEM_W(0X5C01, ctx->r1) = ctx->r14;
    // 0x80075CE0: andi        $t0, $s1, 0x9
    ctx->r8 = ctx->r17 & 0X9;
    // 0x80075CE4: beq         $t0, $zero, L_80075D64
    if (ctx->r8 == 0) {
        // 0x80075CE8: nop
    
            goto L_80075D64;
    }
    // 0x80075CE8: nop

L_80075CEC:
    // 0x80075CEC: andi        $t1, $s1, 0x10
    ctx->r9 = ctx->r17 & 0X10;
    // 0x80075CF0: beq         $t1, $zero, L_80075D04
    if (ctx->r9 == 0) {
        // 0x80075CF4: nop
    
            goto L_80075D04;
    }
    // 0x80075CF4: nop

    // 0x80075CF8: andi        $t2, $s1, 0x3
    ctx->r10 = ctx->r17 & 0X3;
    // 0x80075CFC: beq         $t2, $zero, L_80075D64
    if (ctx->r10 == 0) {
        // 0x80075D00: nop
    
            goto L_80075D64;
    }
    // 0x80075D00: nop

L_80075D04:
    // 0x80075D04: andi        $t3, $s1, 0x40
    ctx->r11 = ctx->r17 & 0X40;
    // 0x80075D08: beq         $t3, $zero, L_80075D1C
    if (ctx->r11 == 0) {
        // 0x80075D0C: nop
    
            goto L_80075D1C;
    }
    // 0x80075D0C: nop

    // 0x80075D10: andi        $t4, $s1, 0xC
    ctx->r12 = ctx->r17 & 0XC;
    // 0x80075D14: beq         $t4, $zero, L_80075D64
    if (ctx->r12 == 0) {
        // 0x80075D18: nop
    
            goto L_80075D64;
    }
    // 0x80075D18: nop

L_80075D1C:
    // 0x80075D1C: andi        $t5, $s1, 0x20
    ctx->r13 = ctx->r17 & 0X20;
    // 0x80075D20: beq         $t5, $zero, L_80075D34
    if (ctx->r13 == 0) {
        // 0x80075D24: nop
    
            goto L_80075D34;
    }
    // 0x80075D24: nop

    // 0x80075D28: andi        $t7, $s1, 0x6
    ctx->r15 = ctx->r17 & 0X6;
    // 0x80075D2C: beq         $t7, $zero, L_80075D64
    if (ctx->r15 == 0) {
        // 0x80075D30: nop
    
            goto L_80075D64;
    }
    // 0x80075D30: nop

L_80075D34:
    // 0x80075D34: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80075D38: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x80075D3C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80075D40: addiu       $at, $t9, 0x7FFF
    ctx->r1 = ADD32(ctx->r25, 0X7FFF);
    // 0x80075D44: sw          $s0, 0x5C01($at)
    MEM_W(0X5C01, ctx->r1) = ctx->r16;
    // 0x80075D48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80075D4C: jal         0x80075A84
    // 0x80075D50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80075A84(rdram, ctx);
        goto after_0;
    // 0x80075D50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80075D54: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80075D58: andi        $t0, $s2, 0xFFFF
    ctx->r8 = ctx->r18 & 0XFFFF;
    // 0x80075D5C: addiu       $s0, $s0, 0x80
    ctx->r16 = ADD32(ctx->r16, 0X80);
    // 0x80075D60: or          $s2, $t0, $zero
    ctx->r18 = ctx->r8 | 0;
L_80075D64:
    // 0x80075D64: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80075D68: andi        $t1, $s1, 0xFFFF
    ctx->r9 = ctx->r17 & 0XFFFF;
    // 0x80075D6C: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x80075D70: slti        $at, $s1, 0x100
    ctx->r1 = SIGNED(ctx->r17) < 0X100 ? 1 : 0;
    // 0x80075D74: bne         $at, $zero, L_80075CC4
    if (ctx->r1 != 0) {
        // 0x80075D78: nop
    
            goto L_80075CC4;
    }
    // 0x80075D78: nop

L_80075D7C:
    // 0x80075D7C: slti        $at, $s2, 0xC9
    ctx->r1 = SIGNED(ctx->r18) < 0XC9 ? 1 : 0;
    // 0x80075D80: bne         $at, $zero, L_80075D9C
    if (ctx->r1 != 0) {
        // 0x80075D84: nop
    
            goto L_80075D9C;
    }
    // 0x80075D84: nop

    // 0x80075D88: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80075D8C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80075D90: addiu       $a1, $a1, -0x246C
    ctx->r5 = ADD32(ctx->r5, -0X246C);
    // 0x80075D94: jal         0x80083560
    // 0x80075D98: addiu       $a0, $a0, -0x2494
    ctx->r4 = ADD32(ctx->r4, -0X2494);
    Fault_Assert(rdram, ctx);
        goto after_1;
    // 0x80075D98: addiu       $a0, $a0, -0x2494
    ctx->r4 = ADD32(ctx->r4, -0X2494);
    after_1:
L_80075D9C:
    // 0x80075D9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80075DA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80075DA4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80075DA8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80075DAC: jr          $ra
    // 0x80075DB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80075DB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80075DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075DB4: jr          $ra
    // 0x80075DB8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80075DB8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80075DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075DBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80075DC0: sltiu       $at, $a1, 0x20
    ctx->r1 = ctx->r5 < 0X20 ? 1 : 0;
    // 0x80075DC4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80075DC8: beq         $at, $zero, L_80075DEC
    if (ctx->r1 == 0) {
        // 0x80075DCC: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_80075DEC;
    }
    // 0x80075DCC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
L_80075DD0:
    // 0x80075DD0: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x80075DD4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80075DD8: sltiu       $at, $a1, 0x20
    ctx->r1 = ctx->r5 < 0X20 ? 1 : 0;
    // 0x80075DDC: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80075DE0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80075DE4: bne         $at, $zero, L_80075DD0
    if (ctx->r1 != 0) {
        // 0x80075DE8: sb          $t7, -0x1($a2)
        MEM_B(-0X1, ctx->r6) = ctx->r15;
            goto L_80075DD0;
    }
    // 0x80075DE8: sb          $t7, -0x1($a2)
    MEM_B(-0X1, ctx->r6) = ctx->r15;
L_80075DEC:
    // 0x80075DEC: jr          $ra
    // 0x80075DF0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80075DF0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80075DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075DF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075DFC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80075E00: jal         0x80075DBC
    // 0x80075E04: addiu       $a0, $a0, 0x690
    ctx->r4 = ADD32(ctx->r4, 0X690);
    func_80075DBC(rdram, ctx);
        goto after_0;
    // 0x80075E04: addiu       $a0, $a0, 0x690
    ctx->r4 = ADD32(ctx->r4, 0X690);
    after_0:
    // 0x80075E08: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80075E0C: jal         0x80075DBC
    // 0x80075E10: addiu       $a0, $a0, 0x6B0
    ctx->r4 = ADD32(ctx->r4, 0X6B0);
    func_80075DBC(rdram, ctx);
        goto after_1;
    // 0x80075E10: addiu       $a0, $a0, 0x6B0
    ctx->r4 = ADD32(ctx->r4, 0X6B0);
    after_1:
    // 0x80075E14: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80075E18: jal         0x80075DBC
    // 0x80075E1C: addiu       $a0, $a0, 0x6F0
    ctx->r4 = ADD32(ctx->r4, 0X6F0);
    func_80075DBC(rdram, ctx);
        goto after_2;
    // 0x80075E1C: addiu       $a0, $a0, 0x6F0
    ctx->r4 = ADD32(ctx->r4, 0X6F0);
    after_2:
    // 0x80075E20: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80075E24: jal         0x80075DBC
    // 0x80075E28: addiu       $a0, $a0, 0x6D0
    ctx->r4 = ADD32(ctx->r4, 0X6D0);
    func_80075DBC(rdram, ctx);
        goto after_3;
    // 0x80075E28: addiu       $a0, $a0, 0x6D0
    ctx->r4 = ADD32(ctx->r4, 0X6D0);
    after_3:
    // 0x80075E2C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80075E30: jal         0x80075DBC
    // 0x80075E34: addiu       $a0, $a0, 0x710
    ctx->r4 = ADD32(ctx->r4, 0X710);
    func_80075DBC(rdram, ctx);
        goto after_4;
    // 0x80075E34: addiu       $a0, $a0, 0x710
    ctx->r4 = ADD32(ctx->r4, 0X710);
    after_4:
    // 0x80075E38: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80075E3C: jal         0x80075DBC
    // 0x80075E40: addiu       $a0, $a0, 0x730
    ctx->r4 = ADD32(ctx->r4, 0X730);
    func_80075DBC(rdram, ctx);
        goto after_5;
    // 0x80075E40: addiu       $a0, $a0, 0x730
    ctx->r4 = ADD32(ctx->r4, 0X730);
    after_5:
    // 0x80075E44: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80075E48: jal         0x80075DBC
    // 0x80075E4C: addiu       $a0, $a0, 0x750
    ctx->r4 = ADD32(ctx->r4, 0X750);
    func_80075DBC(rdram, ctx);
        goto after_6;
    // 0x80075E4C: addiu       $a0, $a0, 0x750
    ctx->r4 = ADD32(ctx->r4, 0X750);
    after_6:
    // 0x80075E50: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80075E54: jal         0x80075DBC
    // 0x80075E58: addiu       $a0, $a0, 0x770
    ctx->r4 = ADD32(ctx->r4, 0X770);
    func_80075DBC(rdram, ctx);
        goto after_7;
    // 0x80075E58: addiu       $a0, $a0, 0x770
    ctx->r4 = ADD32(ctx->r4, 0X770);
    after_7:
    // 0x80075E5C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80075E60: jal         0x80075DBC
    // 0x80075E64: addiu       $a0, $a0, 0x790
    ctx->r4 = ADD32(ctx->r4, 0X790);
    func_80075DBC(rdram, ctx);
        goto after_8;
    // 0x80075E64: addiu       $a0, $a0, 0x790
    ctx->r4 = ADD32(ctx->r4, 0X790);
    after_8:
    // 0x80075E68: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80075E6C: jal         0x80075DBC
    // 0x80075E70: addiu       $a0, $a0, 0x7F0
    ctx->r4 = ADD32(ctx->r4, 0X7F0);
    func_80075DBC(rdram, ctx);
        goto after_9;
    // 0x80075E70: addiu       $a0, $a0, 0x7F0
    ctx->r4 = ADD32(ctx->r4, 0X7F0);
    after_9:
    // 0x80075E74: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80075E78: jal         0x80075DBC
    // 0x80075E7C: addiu       $a0, $a0, 0x810
    ctx->r4 = ADD32(ctx->r4, 0X810);
    func_80075DBC(rdram, ctx);
        goto after_10;
    // 0x80075E7C: addiu       $a0, $a0, 0x810
    ctx->r4 = ADD32(ctx->r4, 0X810);
    after_10:
    // 0x80075E80: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80075E84: jal         0x80075DBC
    // 0x80075E88: addiu       $a0, $a0, 0x7B0
    ctx->r4 = ADD32(ctx->r4, 0X7B0);
    func_80075DBC(rdram, ctx);
        goto after_11;
    // 0x80075E88: addiu       $a0, $a0, 0x7B0
    ctx->r4 = ADD32(ctx->r4, 0X7B0);
    after_11:
    // 0x80075E8C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80075E90: jal         0x80075DBC
    // 0x80075E94: addiu       $a0, $a0, 0x7D0
    ctx->r4 = ADD32(ctx->r4, 0X7D0);
    func_80075DBC(rdram, ctx);
        goto after_12;
    // 0x80075E94: addiu       $a0, $a0, 0x7D0
    ctx->r4 = ADD32(ctx->r4, 0X7D0);
    after_12:
    // 0x80075E98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075E9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075EA0: jr          $ra
    // 0x80075EA4: nop

    return;
    // 0x80075EA4: nop

    // 0x80075EA8: nop

    // 0x80075EAC: nop

;}
RECOMP_FUNC void func_80075EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075EB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80075EB4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80075EB8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80075EBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80075EC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80075EC4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80075EC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80075ECC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80075ED0: jal         0x80075700
    // 0x80075ED4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_80075700(rdram, ctx);
        goto after_0;
    // 0x80075ED4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_0:
    // 0x80075ED8: jal         0x8004A34C
    // 0x80075EDC: nop

    func_8004A34C(rdram, ctx);
        goto after_1;
    // 0x80075EDC: nop

    after_1:
    // 0x80075EE0: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80075EE4: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x80075EE8: jal         0x80074888
    // 0x80075EEC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80074888(rdram, ctx);
        goto after_2;
    // 0x80075EEC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x80075EF0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80075EF4: jal         0x8007E03C
    // 0x80075EF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_3;
    // 0x80075EF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80075EFC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80075F00: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80075F04: sw          $v0, 0x64($t6)
    MEM_W(0X64, ctx->r14) = ctx->r2;
    // 0x80075F08: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80075F0C: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    // 0x80075F10: lw          $a1, 0x64($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X64);
    // 0x80075F14: jal         0x800746C0
    // 0x80075F18: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_800746C0(rdram, ctx);
        goto after_4;
    // 0x80075F18: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_4:
    // 0x80075F1C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80075F20: jal         0x80075830
    // 0x80075F24: nop

    func_80075830(rdram, ctx);
        goto after_5;
    // 0x80075F24: nop

    after_5:
    // 0x80075F28: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80075F2C: jal         0x80075760
    // 0x80075F30: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80075760(rdram, ctx);
        goto after_6;
    // 0x80075F30: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x80075F34: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80075F38: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x80075F3C: lw          $a1, 0x64($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X64);
    // 0x80075F40: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80075F44: jal         0x800757BC
    // 0x80075F48: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_800757BC(rdram, ctx);
        goto after_7;
    // 0x80075F48: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_7:
    // 0x80075F4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80075F50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80075F54: jr          $ra
    // 0x80075F58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80075F58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80075F5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075F5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075F60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80075F64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075F68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80075F6C: jal         0x80075870
    // 0x80075F70: nop

    func_80075870(rdram, ctx);
        goto after_0;
    // 0x80075F70: nop

    after_0:
    // 0x80075F74: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80075F78: nop

    // 0x80075F7C: lw          $a0, 0x64($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X64);
    // 0x80075F80: jal         0x8007E328
    // 0x80075F84: nop

    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x80075F84: nop

    after_1:
    // 0x80075F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075F8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075F90: jr          $ra
    // 0x80075F94: nop

    return;
    // 0x80075F94: nop

    // 0x80075F98: nop

    // 0x80075F9C: nop

;}
RECOMP_FUNC void func_80075FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075FA0: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x80075FA4: jr          $ra
    // 0x80075FA8: sh          $zero, 0x2($a0)
    MEM_H(0X2, ctx->r4) = 0;
    return;
    // 0x80075FA8: sh          $zero, 0x2($a0)
    MEM_H(0X2, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80075FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075FAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80075FB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075FB4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80075FB8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80075FBC:
    // 0x80075FBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80075FC0:
    // 0x80075FC0: jal         0x80060814
    // 0x80075FC4: nop

    func_80060814(rdram, ctx);
        goto after_0;
    // 0x80075FC4: nop

    after_0:
    // 0x80075FC8: lui         $at, 0x1F
    ctx->r1 = S32(0X1F << 16);
    // 0x80075FCC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80075FD0: and         $t6, $v0, $at
    ctx->r14 = ctx->r2 & ctx->r1;
    // 0x80075FD4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80075FD8: lui         $at, 0xFFF0
    ctx->r1 = S32(0XFFF0 << 16);
    // 0x80075FDC: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x80075FE0: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80075FE4: sll         $t9, $t8, 24
    ctx->r25 = S32(ctx->r24 << 24);
    // 0x80075FE8: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x80075FEC: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x80075FF0: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x80075FF4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80075FF8: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80075FFC: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x80076000: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80076004: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80076008: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8007600C: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x80076010: mflo        $t1
    ctx->r9 = lo;
    // 0x80076014: addu        $t2, $t7, $t1
    ctx->r10 = ADD32(ctx->r15, ctx->r9);
    // 0x80076018: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8007601C: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x80076020: nop

    // 0x80076024: subu        $t1, $t2, $t7
    ctx->r9 = SUB32(ctx->r10, ctx->r15);
    // 0x80076028: bgez        $t1, L_80076038
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8007602C: sra         $t4, $t1, 5
        ctx->r12 = S32(SIGNED(ctx->r9) >> 5);
            goto L_80076038;
    }
    // 0x8007602C: sra         $t4, $t1, 5
    ctx->r12 = S32(SIGNED(ctx->r9) >> 5);
    // 0x80076030: addiu       $at, $t1, 0x1F
    ctx->r1 = ADD32(ctx->r9, 0X1F);
    // 0x80076034: sra         $t4, $at, 5
    ctx->r12 = S32(SIGNED(ctx->r1) >> 5);
L_80076038:
    // 0x80076038: jal         0x80060814
    // 0x8007603C: sw          $t4, 0xC00($t0)
    MEM_W(0XC00, ctx->r8) = ctx->r12;
    func_80060814(rdram, ctx);
        goto after_1;
    // 0x8007603C: sw          $t4, 0xC00($t0)
    MEM_W(0XC00, ctx->r8) = ctx->r12;
    after_1:
    // 0x80076040: lui         $at, 0x1F
    ctx->r1 = S32(0X1F << 16);
    // 0x80076044: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80076048: and         $t3, $v0, $at
    ctx->r11 = ctx->r2 & ctx->r1;
    // 0x8007604C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80076050: lui         $at, 0xFFF0
    ctx->r1 = S32(0XFFF0 << 16);
    // 0x80076054: addu        $t5, $t3, $at
    ctx->r13 = ADD32(ctx->r11, ctx->r1);
    // 0x80076058: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x8007605C: sll         $t6, $t8, 24
    ctx->r14 = S32(ctx->r24 << 24);
    // 0x80076060: addu        $t9, $t6, $at
    ctx->r25 = ADD32(ctx->r14, ctx->r1);
    // 0x80076064: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x80076068: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x8007606C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80076070: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80076074: sll         $t4, $t8, 6
    ctx->r12 = S32(ctx->r24 << 6);
    // 0x80076078: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8007607C: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x80076080: addu        $t0, $t1, $t4
    ctx->r8 = ADD32(ctx->r9, ctx->r12);
    // 0x80076084: addu        $t9, $t0, $t6
    ctx->r25 = ADD32(ctx->r8, ctx->r14);
    // 0x80076088: mflo        $t2
    ctx->r10 = lo;
    // 0x8007608C: addu        $t7, $t5, $t2
    ctx->r15 = ADD32(ctx->r13, ctx->r10);
    // 0x80076090: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80076094: lw          $t5, 0x600($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X600);
    // 0x80076098: nop

    // 0x8007609C: subu        $t2, $t7, $t5
    ctx->r10 = SUB32(ctx->r15, ctx->r13);
    // 0x800760A0: bgez        $t2, L_800760B0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800760A4: sra         $t8, $t2, 5
        ctx->r24 = S32(SIGNED(ctx->r10) >> 5);
            goto L_800760B0;
    }
    // 0x800760A4: sra         $t8, $t2, 5
    ctx->r24 = S32(SIGNED(ctx->r10) >> 5);
    // 0x800760A8: addiu       $at, $t2, 0x1F
    ctx->r1 = ADD32(ctx->r10, 0X1F);
    // 0x800760AC: sra         $t8, $at, 5
    ctx->r24 = S32(SIGNED(ctx->r1) >> 5);
L_800760B0:
    // 0x800760B0: sw          $t8, 0x1200($t9)
    MEM_W(0X1200, ctx->r25) = ctx->r24;
    // 0x800760B4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800760B8: nop

    // 0x800760BC: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x800760C0: slti        $at, $t4, 0x10
    ctx->r1 = SIGNED(ctx->r12) < 0X10 ? 1 : 0;
    // 0x800760C4: bne         $at, $zero, L_80075FC0
    if (ctx->r1 != 0) {
        // 0x800760C8: sw          $t4, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r12;
            goto L_80075FC0;
    }
    // 0x800760C8: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x800760CC: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800760D0: nop

    // 0x800760D4: addiu       $t0, $t3, 0x1
    ctx->r8 = ADD32(ctx->r11, 0X1);
    // 0x800760D8: slti        $at, $t0, 0x18
    ctx->r1 = SIGNED(ctx->r8) < 0X18 ? 1 : 0;
    // 0x800760DC: bne         $at, $zero, L_80075FBC
    if (ctx->r1 != 0) {
        // 0x800760E0: sw          $t0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r8;
            goto L_80075FBC;
    }
    // 0x800760E0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x800760E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800760E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800760EC: jr          $ra
    // 0x800760F0: nop

    return;
    // 0x800760F0: nop

;}
RECOMP_FUNC void func_800760F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800760F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800760F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800760FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80076100: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_80076104:
    // 0x80076104: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80076108:
    // 0x80076108: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007610C: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80076110: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x80076114: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80076118: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x8007611C: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x80076120: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80076124: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80076128: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x8007612C: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x80076130: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80076134: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80076138: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x8007613C: mflo        $t9
    ctx->r25 = lo;
    // 0x80076140: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x80076144: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80076148: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8007614C: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x80076150: addu        $t1, $t8, $at
    ctx->r9 = ADD32(ctx->r24, ctx->r1);
    // 0x80076154: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x80076158: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x8007615C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80076160: sll         $t6, $t7, 6
    ctx->r14 = S32(ctx->r15 << 6);
    // 0x80076164: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x80076168: addu        $t3, $t2, $t6
    ctx->r11 = ADD32(ctx->r10, ctx->r14);
    // 0x8007616C: addu        $t5, $t3, $t9
    ctx->r13 = ADD32(ctx->r11, ctx->r25);
    // 0x80076170: mflo        $t0
    ctx->r8 = lo;
    // 0x80076174: sw          $t0, 0x600($t5)
    MEM_W(0X600, ctx->r13) = ctx->r8;
    // 0x80076178: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8007617C: nop

    // 0x80076180: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x80076184: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x80076188: bne         $at, $zero, L_80076108
    if (ctx->r1 != 0) {
        // 0x8007618C: sw          $t1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r9;
            goto L_80076108;
    }
    // 0x8007618C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80076190: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80076194: nop

    // 0x80076198: addiu       $t2, $t7, 0x1
    ctx->r10 = ADD32(ctx->r15, 0X1);
    // 0x8007619C: slti        $at, $t2, 0x18
    ctx->r1 = SIGNED(ctx->r10) < 0X18 ? 1 : 0;
    // 0x800761A0: bne         $at, $zero, L_80076104
    if (ctx->r1 != 0) {
        // 0x800761A4: sw          $t2, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r10;
            goto L_80076104;
    }
    // 0x800761A4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x800761A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800761AC: jal         0x80075FAC
    // 0x800761B0: nop

    func_80075FAC(rdram, ctx);
        goto after_0;
    // 0x800761B0: nop

    after_0:
    // 0x800761B4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800761B8: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x800761BC: sb          $t6, 0x1800($t4)
    MEM_B(0X1800, ctx->r12) = ctx->r14;
    // 0x800761C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800761C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800761C8: jr          $ra
    // 0x800761CC: nop

    return;
    // 0x800761CC: nop

;}
RECOMP_FUNC void func_800761D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800761D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800761D4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800761D8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800761DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800761E0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800761E4: blez        $t6, L_800762DC
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800761E8: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_800762DC;
    }
    // 0x800761E8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_800761EC:
    // 0x800761EC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_800761F0:
    // 0x800761F0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_800761F4:
    // 0x800761F4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800761F8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800761FC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80076200: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x80076204: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80076208: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8007620C: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80076210: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80076214: lw          $t5, 0xC00($t3)
    ctx->r13 = MEM_W(ctx->r11, 0XC00);
    // 0x80076218: nop

    // 0x8007621C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80076220: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x80076224: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80076228: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8007622C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80076230: sll         $t9, $t7, 6
    ctx->r25 = S32(ctx->r15 << 6);
    // 0x80076234: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80076238: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x8007623C: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x80076240: lw          $t5, 0x600($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X600);
    // 0x80076244: lw          $t6, 0x1200($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X1200);
    // 0x80076248: nop

    // 0x8007624C: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x80076250: sw          $t3, 0x600($t4)
    MEM_W(0X600, ctx->r12) = ctx->r11;
    // 0x80076254: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80076258: nop

    // 0x8007625C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80076260: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x80076264: bne         $at, $zero, L_800761F4
    if (ctx->r1 != 0) {
        // 0x80076268: sw          $t8, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r24;
            goto L_800761F4;
    }
    // 0x80076268: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8007626C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80076270: nop

    // 0x80076274: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80076278: slti        $at, $t0, 0x18
    ctx->r1 = SIGNED(ctx->r8) < 0X18 ? 1 : 0;
    // 0x8007627C: bne         $at, $zero, L_800761F0
    if (ctx->r1 != 0) {
        // 0x80076280: sw          $t0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r8;
            goto L_800761F0;
    }
    // 0x80076280: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80076284: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80076288: nop

    // 0x8007628C: lbu         $t2, 0x1800($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X1800);
    // 0x80076290: nop

    // 0x80076294: addiu       $t5, $t2, -0x1
    ctx->r13 = ADD32(ctx->r10, -0X1);
    // 0x80076298: sb          $t5, 0x1800($t1)
    MEM_B(0X1800, ctx->r9) = ctx->r13;
    // 0x8007629C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800762A0: nop

    // 0x800762A4: lbu         $t3, 0x1800($t6)
    ctx->r11 = MEM_BU(ctx->r14, 0X1800);
    // 0x800762A8: nop

    // 0x800762AC: bne         $t3, $zero, L_800762C8
    if (ctx->r11 != 0) {
        // 0x800762B0: nop
    
            goto L_800762C8;
    }
    // 0x800762B0: nop

    // 0x800762B4: jal         0x80075FAC
    // 0x800762B8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_80075FAC(rdram, ctx);
        goto after_0;
    // 0x800762B8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x800762BC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800762C0: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x800762C4: sb          $t4, 0x1800($t7)
    MEM_B(0X1800, ctx->r15) = ctx->r12;
L_800762C8:
    // 0x800762C8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800762CC: nop

    // 0x800762D0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800762D4: bgtz        $t9, L_800761EC
    if (SIGNED(ctx->r25) > 0) {
        // 0x800762D8: sw          $t9, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r25;
            goto L_800761EC;
    }
    // 0x800762D8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_800762DC:
    // 0x800762DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800762E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800762E4: jr          $ra
    // 0x800762E8: nop

    return;
    // 0x800762E8: nop

;}
RECOMP_FUNC void func_800762EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800762EC: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x800762F0: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800762F4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x800762F8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x800762FC: sra         $t8, $a2, 8
    ctx->r24 = S32(SIGNED(ctx->r6) >> 8);
    // 0x80076300: sra         $t6, $a1, 8
    ctx->r14 = S32(SIGNED(ctx->r5) >> 8);
    // 0x80076304: addiu       $t9, $t8, 0xB
    ctx->r25 = ADD32(ctx->r24, 0XB);
    // 0x80076308: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007630C: addiu       $t7, $t6, 0x6
    ctx->r15 = ADD32(ctx->r14, 0X6);
    // 0x80076310: sll         $t0, $t9, 6
    ctx->r8 = S32(ctx->r25 << 6);
    // 0x80076314: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x80076318: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x8007631C: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x80076320: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    // 0x80076324: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80076328: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8007632C: nop

    // 0x80076330: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
    // 0x80076334: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x80076338: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8007633C: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x80076340: addu        $t8, $a0, $t6
    ctx->r24 = ADD32(ctx->r4, ctx->r14);
    // 0x80076344: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80076348: addu        $t7, $t8, $t0
    ctx->r15 = ADD32(ctx->r24, ctx->r8);
    // 0x8007634C: lw          $t1, 0x600($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X600);
    // 0x80076350: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80076354: jr          $ra
    // 0x80076358: sw          $t1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r9;
    return;
    // 0x80076358: sw          $t1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r9;
;}
RECOMP_FUNC void func_8007635C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007635C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076360: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076364: jal         0x8007E03C
    // 0x80076368: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x80076368: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x8007636C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80076370: sw          $v0, -0x330($at)
    MEM_W(-0X330, ctx->r1) = ctx->r2;
    // 0x80076374: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80076378: lw          $a0, -0x330($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X330);
    // 0x8007637C: jal         0x80075FA0
    // 0x80076380: nop

    func_80075FA0(rdram, ctx);
        goto after_1;
    // 0x80076380: nop

    after_1:
    // 0x80076384: jal         0x8007E03C
    // 0x80076388: addiu       $a0, $zero, 0x1804
    ctx->r4 = ADD32(0, 0X1804);
    func_8007E03C(rdram, ctx);
        goto after_2;
    // 0x80076388: addiu       $a0, $zero, 0x1804
    ctx->r4 = ADD32(0, 0X1804);
    after_2:
    // 0x8007638C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80076390: sw          $v0, -0x32C($at)
    MEM_W(-0X32C, ctx->r1) = ctx->r2;
    // 0x80076394: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80076398: lw          $a0, -0x32C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X32C);
    // 0x8007639C: jal         0x800760F4
    // 0x800763A0: nop

    func_800760F4(rdram, ctx);
        goto after_3;
    // 0x800763A0: nop

    after_3:
    // 0x800763A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800763A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800763AC: jr          $ra
    // 0x800763B0: nop

    return;
    // 0x800763B0: nop

;}
RECOMP_FUNC void func_800763B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800763B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800763B8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800763BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800763C0: lw          $a0, -0x330($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X330);
    // 0x800763C4: jal         0x8007E328
    // 0x800763C8: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x800763C8: nop

    after_0:
    // 0x800763CC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800763D0: lw          $a0, -0x32C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X32C);
    // 0x800763D4: jal         0x8007E328
    // 0x800763D8: nop

    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x800763D8: nop

    after_1:
    // 0x800763DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800763E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800763E4: jr          $ra
    // 0x800763E8: nop

    return;
    // 0x800763E8: nop

;}
RECOMP_FUNC void func_800763EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800763EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800763F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800763F4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800763F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800763FC: lw          $a0, -0x32C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X32C);
    // 0x80076400: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80076404: jal         0x800761D0
    // 0x80076408: nop

    func_800761D0(rdram, ctx);
        goto after_0;
    // 0x80076408: nop

    after_0:
    // 0x8007640C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076414: jr          $ra
    // 0x80076418: nop

    return;
    // 0x80076418: nop

;}
RECOMP_FUNC void func_8007641C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007641C: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80076420: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x80076424: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80076428: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007642C: sll         $t7, $t7, 9
    ctx->r15 = S32(ctx->r15 << 9);
    // 0x80076430: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80076434: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80076438: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x8007643C: nop

    // 0x80076440: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80076444: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80076448: sll         $t0, $t0, 9
    ctx->r8 = S32(ctx->r8 << 9);
    // 0x8007644C: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x80076450: jr          $ra
    // 0x80076454: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    return;
    // 0x80076454: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
;}
RECOMP_FUNC void func_80076458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076458: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007645C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80076460: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80076464: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80076468: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8007646C: lw          $t6, -0x32C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X32C);
    // 0x80076470: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80076474: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80076478: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x8007647C: lh          $a2, 0x2($t7)
    ctx->r6 = MEM_H(ctx->r15, 0X2);
    // 0x80076480: lh          $a1, 0x0($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X0);
    // 0x80076484: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80076488: jal         0x800762EC
    // 0x8007648C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800762EC(rdram, ctx);
        goto after_0;
    // 0x8007648C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x80076490: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80076494: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80076498: jr          $ra
    // 0x8007649C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8007649C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800764A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800764A0: lw          $t6, 0x80($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X80);
    // 0x800764A4: nop

    // 0x800764A8: sw          $t6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r14;
    // 0x800764AC: lw          $t7, 0x84($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X84);
    // 0x800764B0: jr          $ra
    // 0x800764B4: sw          $t7, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r15;
    return;
    // 0x800764B4: sw          $t7, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800764B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800764B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800764BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800764C0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800764C4: jal         0x8004A34C
    // 0x800764C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x800764C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x800764CC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800764D0: nop

    // 0x800764D4: lbu         $a0, 0x78($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X78);
    // 0x800764D8: nop

    // 0x800764DC: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800764E0: jal         0x8007E03C
    // 0x800764E4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x800764E4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x800764E8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800764EC: nop

    // 0x800764F0: sw          $v0, 0x80($t8)
    MEM_W(0X80, ctx->r24) = ctx->r2;
    // 0x800764F4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800764F8: nop

    // 0x800764FC: lbu         $a0, 0x78($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X78);
    // 0x80076500: nop

    // 0x80076504: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x80076508: jal         0x8007E03C
    // 0x8007650C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8007E03C(rdram, ctx);
        goto after_2;
    // 0x8007650C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_2:
    // 0x80076510: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80076514: nop

    // 0x80076518: sw          $v0, 0x84($t1)
    MEM_W(0X84, ctx->r9) = ctx->r2;
    // 0x8007651C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80076520: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80076524: lbu         $t3, 0x78($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X78);
    // 0x80076528: nop

    // 0x8007652C: blez        $t3, L_80076650
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80076530: nop
    
            goto L_80076650;
    }
    // 0x80076530: nop

L_80076534:
    // 0x80076534: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80076538: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8007653C: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80076540: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x80076544: lhu         $a1, 0x0($t7)
    ctx->r5 = MEM_HU(ctx->r15, 0X0);
    // 0x80076548: lui         $a0, 0x52
    ctx->r4 = S32(0X52 << 16);
    // 0x8007654C: jal         0x80074888
    // 0x80076550: addiu       $a0, $a0, 0x6B0
    ctx->r4 = ADD32(ctx->r4, 0X6B0);
    func_80074888(rdram, ctx);
        goto after_3;
    // 0x80076550: addiu       $a0, $a0, 0x6B0
    ctx->r4 = ADD32(ctx->r4, 0X6B0);
    after_3:
    // 0x80076554: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80076558: jal         0x8007E03C
    // 0x8007655C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_4;
    // 0x8007655C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80076560: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80076564: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80076568: lw          $t9, 0x80($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X80);
    // 0x8007656C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80076570: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80076574: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x80076578: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8007657C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80076580: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80076584: lw          $t5, 0x80($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X80);
    // 0x80076588: sll         $t8, $t4, 1
    ctx->r24 = S32(ctx->r12 << 1);
    // 0x8007658C: addu        $t0, $t3, $t8
    ctx->r8 = ADD32(ctx->r11, ctx->r24);
    // 0x80076590: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80076594: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x80076598: lhu         $a2, 0x0($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X0);
    // 0x8007659C: lui         $a0, 0x52
    ctx->r4 = S32(0X52 << 16);
    // 0x800765A0: jal         0x800746C0
    // 0x800765A4: addiu       $a0, $a0, 0x6B0
    ctx->r4 = ADD32(ctx->r4, 0X6B0);
    func_800746C0(rdram, ctx);
        goto after_5;
    // 0x800765A4: addiu       $a0, $a0, 0x6B0
    ctx->r4 = ADD32(ctx->r4, 0X6B0);
    after_5:
    // 0x800765A8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800765AC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800765B0: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x800765B4: addu        $t5, $t9, $t2
    ctx->r13 = ADD32(ctx->r25, ctx->r10);
    // 0x800765B8: lhu         $t6, 0x3C($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X3C);
    // 0x800765BC: nop

    // 0x800765C0: beq         $t6, $zero, L_8007662C
    if (ctx->r14 == 0) {
        // 0x800765C4: nop
    
            goto L_8007662C;
    }
    // 0x800765C4: nop

    // 0x800765C8: lui         $a0, 0x52
    ctx->r4 = S32(0X52 << 16);
    // 0x800765CC: addiu       $a0, $a0, 0x6B0
    ctx->r4 = ADD32(ctx->r4, 0X6B0);
    // 0x800765D0: jal         0x80074888
    // 0x800765D4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80074888(rdram, ctx);
        goto after_6;
    // 0x800765D4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_6:
    // 0x800765D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800765DC: jal         0x8007E03C
    // 0x800765E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_7;
    // 0x800765E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800765E4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800765E8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800765EC: lw          $t4, 0x84($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X84);
    // 0x800765F0: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x800765F4: addu        $t0, $t4, $t8
    ctx->r8 = ADD32(ctx->r12, ctx->r24);
    // 0x800765F8: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x800765FC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80076600: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80076604: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80076608: lw          $t9, 0x84($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X84);
    // 0x8007660C: sll         $t7, $t2, 1
    ctx->r15 = S32(ctx->r10 << 1);
    // 0x80076610: addu        $t3, $t1, $t7
    ctx->r11 = ADD32(ctx->r9, ctx->r15);
    // 0x80076614: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80076618: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x8007661C: lhu         $a2, 0x3C($t3)
    ctx->r6 = MEM_HU(ctx->r11, 0X3C);
    // 0x80076620: lui         $a0, 0x52
    ctx->r4 = S32(0X52 << 16);
    // 0x80076624: jal         0x800746C0
    // 0x80076628: addiu       $a0, $a0, 0x6B0
    ctx->r4 = ADD32(ctx->r4, 0X6B0);
    func_800746C0(rdram, ctx);
        goto after_8;
    // 0x80076628: addiu       $a0, $a0, 0x6B0
    ctx->r4 = ADD32(ctx->r4, 0X6B0);
    after_8:
L_8007662C:
    // 0x8007662C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80076630: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80076634: addiu       $t8, $t4, 0x1
    ctx->r24 = ADD32(ctx->r12, 0X1);
    // 0x80076638: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8007663C: lbu         $t9, 0x78($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X78);
    // 0x80076640: nop

    // 0x80076644: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80076648: bne         $at, $zero, L_80076534
    if (ctx->r1 != 0) {
        // 0x8007664C: nop
    
            goto L_80076534;
    }
    // 0x8007664C: nop

L_80076650:
    // 0x80076650: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80076654: nop

    // 0x80076658: lbu         $t6, 0x8C($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X8C);
    // 0x8007665C: nop

    // 0x80076660: beq         $t6, $zero, L_800766B8
    if (ctx->r14 == 0) {
        // 0x80076664: nop
    
            goto L_800766B8;
    }
    // 0x80076664: nop

    // 0x80076668: lbu         $t2, 0x78($t5)
    ctx->r10 = MEM_BU(ctx->r13, 0X78);
    // 0x8007666C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80076670: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80076674: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80076678: bgez        $t2, L_80076688
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8007667C: sra         $t1, $t2, 1
        ctx->r9 = S32(SIGNED(ctx->r10) >> 1);
            goto L_80076688;
    }
    // 0x8007667C: sra         $t1, $t2, 1
    ctx->r9 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80076680: addiu       $at, $t2, 0x1
    ctx->r1 = ADD32(ctx->r10, 0X1);
    // 0x80076684: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_80076688:
    // 0x80076688: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8007668C: nop

    // 0x80076690: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80076694: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80076698: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8007669C: nop

    // 0x800766A0: div.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f4.d, ctx->f10.d);
    // 0x800766A4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800766A8: swc1        $f18, 0x90($t5)
    MEM_W(0X90, ctx->r13) = ctx->f18.u32l;
    // 0x800766AC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800766B0: nop

    // 0x800766B4: swc1        $f6, 0x94($t7)
    MEM_W(0X94, ctx->r15) = ctx->f6.u32l;
L_800766B8:
    // 0x800766B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800766BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800766C0: jr          $ra
    // 0x800766C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800766C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800766C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800766C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800766CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800766D0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800766D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800766D8: lbu         $t7, 0x78($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X78);
    // 0x800766DC: nop

    // 0x800766E0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800766E4: bltz        $t8, L_80076770
    if (SIGNED(ctx->r24) < 0) {
        // 0x800766E8: sw          $t8, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r24;
            goto L_80076770;
    }
    // 0x800766E8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_800766EC:
    // 0x800766EC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800766F0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800766F4: lw          $t0, 0x80($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X80);
    // 0x800766F8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800766FC: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80076700: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80076704: nop

    // 0x80076708: beq         $t4, $zero, L_80076718
    if (ctx->r12 == 0) {
        // 0x8007670C: nop
    
            goto L_80076718;
    }
    // 0x8007670C: nop

    // 0x80076710: jal         0x8007E328
    // 0x80076714: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x80076714: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_0:
L_80076718:
    // 0x80076718: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007671C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80076720: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80076724: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80076728: lhu         $t9, 0x3C($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X3C);
    // 0x8007672C: nop

    // 0x80076730: beq         $t9, $zero, L_8007675C
    if (ctx->r25 == 0) {
        // 0x80076734: nop
    
            goto L_8007675C;
    }
    // 0x80076734: nop

    // 0x80076738: lw          $t1, 0x84($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X84);
    // 0x8007673C: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80076740: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x80076744: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80076748: nop

    // 0x8007674C: beq         $t3, $zero, L_8007675C
    if (ctx->r11 == 0) {
        // 0x80076750: nop
    
            goto L_8007675C;
    }
    // 0x80076750: nop

    // 0x80076754: jal         0x8007E328
    // 0x80076758: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x80076758: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_1:
L_8007675C:
    // 0x8007675C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80076760: nop

    // 0x80076764: addiu       $t7, $t4, -0x1
    ctx->r15 = ADD32(ctx->r12, -0X1);
    // 0x80076768: bgez        $t7, L_800766EC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8007676C: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_800766EC;
    }
    // 0x8007676C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_80076770:
    // 0x80076770: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80076774: nop

    // 0x80076778: lw          $t9, 0x80($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X80);
    // 0x8007677C: nop

    // 0x80076780: beq         $t9, $zero, L_80076790
    if (ctx->r25 == 0) {
        // 0x80076784: nop
    
            goto L_80076790;
    }
    // 0x80076784: nop

    // 0x80076788: jal         0x8007E328
    // 0x8007678C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_8007E328(rdram, ctx);
        goto after_2;
    // 0x8007678C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_2:
L_80076790:
    // 0x80076790: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80076794: nop

    // 0x80076798: lw          $t6, 0x84($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X84);
    // 0x8007679C: nop

    // 0x800767A0: beq         $t6, $zero, L_800767B0
    if (ctx->r14 == 0) {
        // 0x800767A4: nop
    
            goto L_800767B0;
    }
    // 0x800767A4: nop

    // 0x800767A8: jal         0x8007E328
    // 0x800767AC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8007E328(rdram, ctx);
        goto after_3;
    // 0x800767AC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_3:
L_800767B0:
    // 0x800767B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800767B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800767B8: jr          $ra
    // 0x800767BC: nop

    return;
    // 0x800767BC: nop

;}
RECOMP_FUNC void func_800767C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800767C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800767C4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800767C8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800767CC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800767D0: lbu         $t7, 0x8A($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8A);
    // 0x800767D4: nop

    // 0x800767D8: beq         $t7, $zero, L_80076D34
    if (ctx->r15 == 0) {
        // 0x800767DC: nop
    
            goto L_80076D34;
    }
    // 0x800767DC: nop

    // 0x800767E0: lbu         $t8, 0x8B($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X8B);
    // 0x800767E4: nop

    // 0x800767E8: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800767EC: beq         $at, $zero, L_80076D18
    if (ctx->r1 == 0) {
        // 0x800767F0: nop
    
            goto L_80076D18;
    }
    // 0x800767F0: nop

    // 0x800767F4: lbu         $t9, 0x78($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X78);
    // 0x800767F8: nop

    // 0x800767FC: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80076800: slt         $at, $t0, $t8
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80076804: beq         $at, $zero, L_80076814
    if (ctx->r1 == 0) {
        // 0x80076808: nop
    
            goto L_80076814;
    }
    // 0x80076808: nop

    // 0x8007680C: b           L_80076E8C
    // 0x80076810: sb          $zero, 0x8B($t6)
    MEM_B(0X8B, ctx->r14) = 0;
        goto L_80076E8C;
    // 0x80076810: sb          $zero, 0x8B($t6)
    MEM_B(0X8B, ctx->r14) = 0;
L_80076814:
    // 0x80076814: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80076818: nop

    // 0x8007681C: lbu         $t2, 0x88($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X88);
    // 0x80076820: nop

    // 0x80076824: beq         $t2, $zero, L_80076A78
    if (ctx->r10 == 0) {
        // 0x80076828: nop
    
            goto L_80076A78;
    }
    // 0x80076828: nop

    // 0x8007682C: lbu         $t3, 0x89($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X89);
    // 0x80076830: nop

    // 0x80076834: bne         $t3, $zero, L_80076A5C
    if (ctx->r11 != 0) {
        // 0x80076838: nop
    
            goto L_80076A5C;
    }
    // 0x80076838: nop

    // 0x8007683C: sb          $t2, 0x89($t1)
    MEM_B(0X89, ctx->r9) = ctx->r10;
    // 0x80076840: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80076844: nop

    // 0x80076848: lbu         $t5, 0x79($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X79);
    // 0x8007684C: lbu         $t9, 0x78($t4)
    ctx->r25 = MEM_BU(ctx->r12, 0X78);
    // 0x80076850: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x80076854: div         $zero, $t7, $t9
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r25))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r25)));
    // 0x80076858: bne         $t9, $zero, L_80076864
    if (ctx->r25 != 0) {
        // 0x8007685C: nop
    
            goto L_80076864;
    }
    // 0x8007685C: nop

    // 0x80076860: break       7
    do_break(2147969120);
L_80076864:
    // 0x80076864: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80076868: bne         $t9, $at, L_8007687C
    if (ctx->r25 != ctx->r1) {
        // 0x8007686C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8007687C;
    }
    // 0x8007686C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80076870: bne         $t7, $at, L_8007687C
    if (ctx->r15 != ctx->r1) {
        // 0x80076874: nop
    
            goto L_8007687C;
    }
    // 0x80076874: nop

    // 0x80076878: break       6
    do_break(2147969144);
L_8007687C:
    // 0x8007687C: mfhi        $t8
    ctx->r24 = hi;
    // 0x80076880: sb          $t8, 0x79($t4)
    MEM_B(0X79, ctx->r12) = ctx->r24;
    // 0x80076884: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80076888: nop

    // 0x8007688C: lbu         $t6, 0x8B($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X8B);
    // 0x80076890: nop

    // 0x80076894: addiu       $t3, $t6, 0x1
    ctx->r11 = ADD32(ctx->r14, 0X1);
    // 0x80076898: sb          $t3, 0x8B($t0)
    MEM_B(0X8B, ctx->r8) = ctx->r11;
    // 0x8007689C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800768A0: nop

    // 0x800768A4: lbu         $t1, 0x8C($t2)
    ctx->r9 = MEM_BU(ctx->r10, 0X8C);
    // 0x800768A8: nop

    // 0x800768AC: beq         $t1, $zero, L_80076C94
    if (ctx->r9 == 0) {
        // 0x800768B0: nop
    
            goto L_80076C94;
    }
    // 0x800768B0: nop

    // 0x800768B4: lwc1        $f4, 0x94($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X94);
    // 0x800768B8: lwc1        $f6, 0x90($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X90);
    // 0x800768BC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800768C0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800768C4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x800768C8: swc1        $f8, 0x94($t2)
    MEM_W(0X94, ctx->r10) = ctx->f8.u32l;
    // 0x800768CC: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800768D0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800768D4: lwc1        $f10, 0x94($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X94);
    // 0x800768D8: nop

    // 0x800768DC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800768E0: c.le.d      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.d <= ctx->f16.d;
    // 0x800768E4: nop

    // 0x800768E8: bc1f        L_80076948
    if (!c1cs) {
        // 0x800768EC: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80076948;
    }
    // 0x800768EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800768F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800768F4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800768F8: swc1        $f4, 0x94($t5)
    MEM_W(0X94, ctx->r13) = ctx->f4.u32l;
    // 0x800768FC: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80076900: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80076904: lbu         $t9, 0x78($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X78);
    // 0x80076908: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007690C: bgez        $t9, L_8007691C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80076910: sra         $t8, $t9, 1
        ctx->r24 = S32(SIGNED(ctx->r25) >> 1);
            goto L_8007691C;
    }
    // 0x80076910: sra         $t8, $t9, 1
    ctx->r24 = S32(SIGNED(ctx->r25) >> 1);
    // 0x80076914: addiu       $at, $t9, 0x1
    ctx->r1 = ADD32(ctx->r25, 0X1);
    // 0x80076918: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_8007691C:
    // 0x8007691C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80076920: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80076924: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80076928: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8007692C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80076930: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80076934: nop

    // 0x80076938: div.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f6.d, ctx->f16.d);
    // 0x8007693C: mul.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80076940: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80076944: swc1        $f10, 0x90($t7)
    MEM_W(0X90, ctx->r15) = ctx->f10.u32l;
L_80076948:
    // 0x80076948: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8007694C: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x80076950: lwc1        $f6, 0x94($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X94);
    // 0x80076954: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80076958: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x8007695C: c.le.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d <= ctx->f18.d;
    // 0x80076960: nop

    // 0x80076964: bc1f        L_800769B8
    if (!c1cs) {
        // 0x80076968: nop
    
            goto L_800769B8;
    }
    // 0x80076968: nop

    // 0x8007696C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80076970: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80076974: swc1        $f4, 0x94($t4)
    MEM_W(0X94, ctx->r12) = ctx->f4.u32l;
    // 0x80076978: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007697C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80076980: lbu         $t3, 0x78($t6)
    ctx->r11 = MEM_BU(ctx->r14, 0X78);
    // 0x80076984: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80076988: bgez        $t3, L_80076998
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8007698C: sra         $t0, $t3, 1
        ctx->r8 = S32(SIGNED(ctx->r11) >> 1);
            goto L_80076998;
    }
    // 0x8007698C: sra         $t0, $t3, 1
    ctx->r8 = S32(SIGNED(ctx->r11) >> 1);
    // 0x80076990: addiu       $at, $t3, 0x1
    ctx->r1 = ADD32(ctx->r11, 0X1);
    // 0x80076994: sra         $t0, $at, 1
    ctx->r8 = S32(SIGNED(ctx->r1) >> 1);
L_80076998:
    // 0x80076998: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8007699C: nop

    // 0x800769A0: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800769A4: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x800769A8: nop

    // 0x800769AC: div.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f8.d, ctx->f16.d);
    // 0x800769B0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800769B4: swc1        $f4, 0x90($t6)
    MEM_W(0X90, ctx->r14) = ctx->f4.u32l;
L_800769B8:
    // 0x800769B8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800769BC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800769C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800769C4: lwc1        $f10, 0x94($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X94);
    // 0x800769C8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800769CC: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x800769D0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800769D4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800769D8: nop

    // 0x800769DC: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800769E0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800769E4: nop

    // 0x800769E8: andi        $at, $t5, 0x4
    ctx->r1 = ctx->r13 & 0X4;
    // 0x800769EC: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x800769F0: beq         $t5, $zero, L_80076A40
    if (ctx->r13 == 0) {
        // 0x800769F4: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_80076A40;
    }
    // 0x800769F4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800769F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800769FC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80076A00: sub.s       $f16, $f8, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80076A04: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80076A08: nop

    // 0x80076A0C: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80076A10: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80076A14: nop

    // 0x80076A18: andi        $at, $t5, 0x4
    ctx->r1 = ctx->r13 & 0X4;
    // 0x80076A1C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80076A20: bne         $t5, $zero, L_80076A38
    if (ctx->r13 != 0) {
        // 0x80076A24: nop
    
            goto L_80076A38;
    }
    // 0x80076A24: nop

    // 0x80076A28: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x80076A2C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80076A30: b           L_80076A50
    // 0x80076A34: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_80076A50;
    // 0x80076A34: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_80076A38:
    // 0x80076A38: b           L_80076A50
    // 0x80076A3C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_80076A50;
    // 0x80076A3C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
L_80076A40:
    // 0x80076A40: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x80076A44: nop

    // 0x80076A48: bltz        $t5, L_80076A38
    if (SIGNED(ctx->r13) < 0) {
        // 0x80076A4C: nop
    
            goto L_80076A38;
    }
    // 0x80076A4C: nop

L_80076A50:
    // 0x80076A50: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80076A54: b           L_80076C94
    // 0x80076A58: sb          $t5, 0x9B($t1)
    MEM_B(0X9B, ctx->r9) = ctx->r13;
        goto L_80076C94;
    // 0x80076A58: sb          $t5, 0x9B($t1)
    MEM_B(0X9B, ctx->r9) = ctx->r13;
L_80076A5C:
    // 0x80076A5C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80076A60: nop

    // 0x80076A64: lbu         $t8, 0x89($t9)
    ctx->r24 = MEM_BU(ctx->r25, 0X89);
    // 0x80076A68: nop

    // 0x80076A6C: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x80076A70: b           L_80076C94
    // 0x80076A74: sb          $t7, 0x89($t9)
    MEM_B(0X89, ctx->r25) = ctx->r15;
        goto L_80076C94;
    // 0x80076A74: sb          $t7, 0x89($t9)
    MEM_B(0X89, ctx->r25) = ctx->r15;
L_80076A78:
    // 0x80076A78: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80076A7C: nop

    // 0x80076A80: lbu         $t3, 0x8C($t4)
    ctx->r11 = MEM_BU(ctx->r12, 0X8C);
    // 0x80076A84: nop

    // 0x80076A88: beq         $t3, $zero, L_80076C38
    if (ctx->r11 == 0) {
        // 0x80076A8C: nop
    
            goto L_80076C38;
    }
    // 0x80076A8C: nop

    // 0x80076A90: lwc1        $f18, 0x94($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X94);
    // 0x80076A94: lwc1        $f4, 0x90($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X90);
    // 0x80076A98: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80076A9C: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80076AA0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80076AA4: swc1        $f10, 0x94($t4)
    MEM_W(0X94, ctx->r12) = ctx->f10.u32l;
    // 0x80076AA8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80076AAC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80076AB0: lwc1        $f6, 0x94($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X94);
    // 0x80076AB4: nop

    // 0x80076AB8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80076ABC: c.le.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d <= ctx->f8.d;
    // 0x80076AC0: nop

    // 0x80076AC4: bc1f        L_80076B24
    if (!c1cs) {
        // 0x80076AC8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80076B24;
    }
    // 0x80076AC8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80076ACC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80076AD0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80076AD4: swc1        $f18, 0x94($t0)
    MEM_W(0X94, ctx->r8) = ctx->f18.u32l;
    // 0x80076AD8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80076ADC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80076AE0: lbu         $t2, 0x78($t6)
    ctx->r10 = MEM_BU(ctx->r14, 0X78);
    // 0x80076AE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80076AE8: bgez        $t2, L_80076AF8
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80076AEC: sra         $t5, $t2, 1
        ctx->r13 = S32(SIGNED(ctx->r10) >> 1);
            goto L_80076AF8;
    }
    // 0x80076AEC: sra         $t5, $t2, 1
    ctx->r13 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80076AF0: addiu       $at, $t2, 0x1
    ctx->r1 = ADD32(ctx->r10, 0X1);
    // 0x80076AF4: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_80076AF8:
    // 0x80076AF8: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80076AFC: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80076B00: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80076B04: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80076B08: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80076B0C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80076B10: nop

    // 0x80076B14: div.d       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x80076B18: mul.d       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80076B1C: cvt.s.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f6.fl = CVT_S_D(ctx->f10.d);
    // 0x80076B20: swc1        $f6, 0x90($t6)
    MEM_W(0X90, ctx->r14) = ctx->f6.u32l;
L_80076B24:
    // 0x80076B24: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80076B28: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x80076B2C: lwc1        $f4, 0x94($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X94);
    // 0x80076B30: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80076B34: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x80076B38: c.le.d      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.d <= ctx->f16.d;
    // 0x80076B3C: nop

    // 0x80076B40: bc1f        L_80076B94
    if (!c1cs) {
        // 0x80076B44: nop
    
            goto L_80076B94;
    }
    // 0x80076B44: nop

    // 0x80076B48: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80076B4C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80076B50: swc1        $f18, 0x94($t1)
    MEM_W(0X94, ctx->r9) = ctx->f18.u32l;
    // 0x80076B54: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80076B58: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80076B5C: lbu         $t7, 0x78($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X78);
    // 0x80076B60: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80076B64: bgez        $t7, L_80076B74
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80076B68: sra         $t9, $t7, 1
        ctx->r25 = S32(SIGNED(ctx->r15) >> 1);
            goto L_80076B74;
    }
    // 0x80076B68: sra         $t9, $t7, 1
    ctx->r25 = S32(SIGNED(ctx->r15) >> 1);
    // 0x80076B6C: addiu       $at, $t7, 0x1
    ctx->r1 = ADD32(ctx->r15, 0X1);
    // 0x80076B70: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_80076B74:
    // 0x80076B74: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80076B78: nop

    // 0x80076B7C: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80076B80: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x80076B84: nop

    // 0x80076B88: div.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f8.d);
    // 0x80076B8C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80076B90: swc1        $f18, 0x90($t8)
    MEM_W(0X90, ctx->r24) = ctx->f18.u32l;
L_80076B94:
    // 0x80076B94: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80076B98: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80076B9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80076BA0: lwc1        $f6, 0x94($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X94);
    // 0x80076BA4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80076BA8: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80076BAC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80076BB0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80076BB4: nop

    // 0x80076BB8: cvt.w.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80076BBC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80076BC0: nop

    // 0x80076BC4: andi        $at, $t0, 0x4
    ctx->r1 = ctx->r8 & 0X4;
    // 0x80076BC8: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x80076BCC: beq         $t0, $zero, L_80076C1C
    if (ctx->r8 == 0) {
        // 0x80076BD0: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_80076C1C;
    }
    // 0x80076BD0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80076BD4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80076BD8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80076BDC: sub.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80076BE0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80076BE4: nop

    // 0x80076BE8: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80076BEC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80076BF0: nop

    // 0x80076BF4: andi        $at, $t0, 0x4
    ctx->r1 = ctx->r8 & 0X4;
    // 0x80076BF8: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x80076BFC: bne         $t0, $zero, L_80076C14
    if (ctx->r8 != 0) {
        // 0x80076C00: nop
    
            goto L_80076C14;
    }
    // 0x80076C00: nop

    // 0x80076C04: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x80076C08: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80076C0C: b           L_80076C2C
    // 0x80076C10: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_80076C2C;
    // 0x80076C10: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_80076C14:
    // 0x80076C14: b           L_80076C2C
    // 0x80076C18: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_80076C2C;
    // 0x80076C18: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_80076C1C:
    // 0x80076C1C: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x80076C20: nop

    // 0x80076C24: bltz        $t0, L_80076C14
    if (SIGNED(ctx->r8) < 0) {
        // 0x80076C28: nop
    
            goto L_80076C14;
    }
    // 0x80076C28: nop

L_80076C2C:
    // 0x80076C2C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80076C30: sb          $t0, 0x9B($t3)
    MEM_B(0X9B, ctx->r11) = ctx->r8;
    // 0x80076C34: nop

L_80076C38:
    // 0x80076C38: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80076C3C: nop

    // 0x80076C40: lbu         $t5, 0x79($t2)
    ctx->r13 = MEM_BU(ctx->r10, 0X79);
    // 0x80076C44: lbu         $t1, 0x78($t2)
    ctx->r9 = MEM_BU(ctx->r10, 0X78);
    // 0x80076C48: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80076C4C: div         $zero, $t6, $t1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r9)));
    // 0x80076C50: bne         $t1, $zero, L_80076C5C
    if (ctx->r9 != 0) {
        // 0x80076C54: nop
    
            goto L_80076C5C;
    }
    // 0x80076C54: nop

    // 0x80076C58: break       7
    do_break(2147970136);
L_80076C5C:
    // 0x80076C5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80076C60: bne         $t1, $at, L_80076C74
    if (ctx->r9 != ctx->r1) {
        // 0x80076C64: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80076C74;
    }
    // 0x80076C64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80076C68: bne         $t6, $at, L_80076C74
    if (ctx->r14 != ctx->r1) {
        // 0x80076C6C: nop
    
            goto L_80076C74;
    }
    // 0x80076C6C: nop

    // 0x80076C70: break       6
    do_break(2147970160);
L_80076C74:
    // 0x80076C74: mfhi        $t7
    ctx->r15 = hi;
    // 0x80076C78: sb          $t7, 0x79($t2)
    MEM_B(0X79, ctx->r10) = ctx->r15;
    // 0x80076C7C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80076C80: nop

    // 0x80076C84: lbu         $t8, 0x8B($t9)
    ctx->r24 = MEM_BU(ctx->r25, 0X8B);
    // 0x80076C88: nop

    // 0x80076C8C: addiu       $t4, $t8, 0x1
    ctx->r12 = ADD32(ctx->r24, 0X1);
    // 0x80076C90: sb          $t4, 0x8B($t9)
    MEM_B(0X8B, ctx->r25) = ctx->r12;
L_80076C94:
    // 0x80076C94: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80076C98: jal         0x8005BBFC
    // 0x80076C9C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_0;
    // 0x80076C9C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_0:
    // 0x80076CA0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80076CA4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80076CA8: lbu         $t5, 0x79($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X79);
    // 0x80076CAC: lw          $t3, 0x80($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X80);
    // 0x80076CB0: lw          $t7, 0x84($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X84);
    // 0x80076CB4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80076CB8: lhu         $t8, 0x7C($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X7C);
    // 0x80076CBC: addu        $t1, $t3, $t6
    ctx->r9 = ADD32(ctx->r11, ctx->r14);
    // 0x80076CC0: addu        $t2, $t7, $t6
    ctx->r10 = ADD32(ctx->r15, ctx->r14);
    // 0x80076CC4: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x80076CC8: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x80076CCC: lhu         $a3, 0x7A($t0)
    ctx->r7 = MEM_HU(ctx->r8, 0X7A);
    // 0x80076CD0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80076CD4: lbu         $t4, 0x98($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X98);
    // 0x80076CD8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80076CDC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80076CE0: lbu         $t9, 0x99($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X99);
    // 0x80076CE4: nop

    // 0x80076CE8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80076CEC: lbu         $t5, 0x9A($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X9A);
    // 0x80076CF0: nop

    // 0x80076CF4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80076CF8: lbu         $t3, 0x9B($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X9B);
    // 0x80076CFC: jal         0x80057460
    // 0x80076D00: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    func_80057460(rdram, ctx);
        goto after_1;
    // 0x80076D00: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_1:
    // 0x80076D04: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80076D08: jal         0x8005BE40
    // 0x80076D0C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_2;
    // 0x80076D0C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_2:
    // 0x80076D10: b           L_80076E8C
    // 0x80076D14: nop

        goto L_80076E8C;
    // 0x80076D14: nop

L_80076D18:
    // 0x80076D18: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80076D1C: nop

    // 0x80076D20: lbu         $t7, 0x8B($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X8B);
    // 0x80076D24: nop

    // 0x80076D28: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x80076D2C: b           L_80076E8C
    // 0x80076D30: sb          $t6, 0x8B($t1)
    MEM_B(0X8B, ctx->r9) = ctx->r14;
        goto L_80076E8C;
    // 0x80076D30: sb          $t6, 0x8B($t1)
    MEM_B(0X8B, ctx->r9) = ctx->r14;
L_80076D34:
    // 0x80076D34: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80076D38: nop

    // 0x80076D3C: lbu         $t8, 0x88($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X88);
    // 0x80076D40: nop

    // 0x80076D44: beq         $t8, $zero, L_80076DC8
    if (ctx->r24 == 0) {
        // 0x80076D48: nop
    
            goto L_80076DC8;
    }
    // 0x80076D48: nop

    // 0x80076D4C: lbu         $t4, 0x89($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X89);
    // 0x80076D50: nop

    // 0x80076D54: bne         $t4, $zero, L_80076DAC
    if (ctx->r12 != 0) {
        // 0x80076D58: nop
    
            goto L_80076DAC;
    }
    // 0x80076D58: nop

    // 0x80076D5C: sb          $t8, 0x89($t2)
    MEM_B(0X89, ctx->r10) = ctx->r24;
    // 0x80076D60: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80076D64: nop

    // 0x80076D68: lbu         $t5, 0x79($t9)
    ctx->r13 = MEM_BU(ctx->r25, 0X79);
    // 0x80076D6C: lbu         $t3, 0x78($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X78);
    // 0x80076D70: addiu       $t0, $t5, 0x1
    ctx->r8 = ADD32(ctx->r13, 0X1);
    // 0x80076D74: div         $zero, $t0, $t3
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r11)));
    // 0x80076D78: bne         $t3, $zero, L_80076D84
    if (ctx->r11 != 0) {
        // 0x80076D7C: nop
    
            goto L_80076D84;
    }
    // 0x80076D7C: nop

    // 0x80076D80: break       7
    do_break(2147970432);
L_80076D84:
    // 0x80076D84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80076D88: bne         $t3, $at, L_80076D9C
    if (ctx->r11 != ctx->r1) {
        // 0x80076D8C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80076D9C;
    }
    // 0x80076D8C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80076D90: bne         $t0, $at, L_80076D9C
    if (ctx->r8 != ctx->r1) {
        // 0x80076D94: nop
    
            goto L_80076D9C;
    }
    // 0x80076D94: nop

    // 0x80076D98: break       6
    do_break(2147970456);
L_80076D9C:
    // 0x80076D9C: mfhi        $t7
    ctx->r15 = hi;
    // 0x80076DA0: sb          $t7, 0x79($t9)
    MEM_B(0X79, ctx->r25) = ctx->r15;
    // 0x80076DA4: b           L_80076E10
    // 0x80076DA8: nop

        goto L_80076E10;
    // 0x80076DA8: nop

L_80076DAC:
    // 0x80076DAC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80076DB0: nop

    // 0x80076DB4: lbu         $t1, 0x89($t6)
    ctx->r9 = MEM_BU(ctx->r14, 0X89);
    // 0x80076DB8: nop

    // 0x80076DBC: addiu       $t4, $t1, -0x1
    ctx->r12 = ADD32(ctx->r9, -0X1);
    // 0x80076DC0: b           L_80076E10
    // 0x80076DC4: sb          $t4, 0x89($t6)
    MEM_B(0X89, ctx->r14) = ctx->r12;
        goto L_80076E10;
    // 0x80076DC4: sb          $t4, 0x89($t6)
    MEM_B(0X89, ctx->r14) = ctx->r12;
L_80076DC8:
    // 0x80076DC8: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80076DCC: nop

    // 0x80076DD0: lbu         $t2, 0x79($t8)
    ctx->r10 = MEM_BU(ctx->r24, 0X79);
    // 0x80076DD4: lbu         $t0, 0x78($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X78);
    // 0x80076DD8: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x80076DDC: div         $zero, $t5, $t0
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r8)));
    // 0x80076DE0: bne         $t0, $zero, L_80076DEC
    if (ctx->r8 != 0) {
        // 0x80076DE4: nop
    
            goto L_80076DEC;
    }
    // 0x80076DE4: nop

    // 0x80076DE8: break       7
    do_break(2147970536);
L_80076DEC:
    // 0x80076DEC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80076DF0: bne         $t0, $at, L_80076E04
    if (ctx->r8 != ctx->r1) {
        // 0x80076DF4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80076E04;
    }
    // 0x80076DF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80076DF8: bne         $t5, $at, L_80076E04
    if (ctx->r13 != ctx->r1) {
        // 0x80076DFC: nop
    
            goto L_80076E04;
    }
    // 0x80076DFC: nop

    // 0x80076E00: break       6
    do_break(2147970560);
L_80076E04:
    // 0x80076E04: mfhi        $t3
    ctx->r11 = hi;
    // 0x80076E08: sb          $t3, 0x79($t8)
    MEM_B(0X79, ctx->r24) = ctx->r11;
    // 0x80076E0C: nop

L_80076E10:
    // 0x80076E10: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80076E14: jal         0x8005BBFC
    // 0x80076E18: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BBFC(rdram, ctx);
        goto after_3;
    // 0x80076E18: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_3:
    // 0x80076E1C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80076E20: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80076E24: lbu         $t1, 0x79($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X79);
    // 0x80076E28: lw          $t9, 0x80($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X80);
    // 0x80076E2C: lw          $t2, 0x84($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X84);
    // 0x80076E30: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80076E34: lhu         $t0, 0x7C($t7)
    ctx->r8 = MEM_HU(ctx->r15, 0X7C);
    // 0x80076E38: addu        $t6, $t9, $t4
    ctx->r14 = ADD32(ctx->r25, ctx->r12);
    // 0x80076E3C: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80076E40: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x80076E44: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x80076E48: lhu         $a3, 0x7A($t7)
    ctx->r7 = MEM_HU(ctx->r15, 0X7A);
    // 0x80076E4C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80076E50: lbu         $t3, 0x98($t7)
    ctx->r11 = MEM_BU(ctx->r15, 0X98);
    // 0x80076E54: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x80076E58: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80076E5C: lbu         $t8, 0x99($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X99);
    // 0x80076E60: nop

    // 0x80076E64: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80076E68: lbu         $t1, 0x9A($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X9A);
    // 0x80076E6C: nop

    // 0x80076E70: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80076E74: lbu         $t9, 0x9B($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X9B);
    // 0x80076E78: jal         0x80057460
    // 0x80076E7C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    func_80057460(rdram, ctx);
        goto after_4;
    // 0x80076E7C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_4:
    // 0x80076E80: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80076E84: jal         0x8005BE40
    // 0x80076E88: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    func_8005BE40(rdram, ctx);
        goto after_5;
    // 0x80076E88: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    after_5:
L_80076E8C:
    // 0x80076E8C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80076E90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80076E94: jr          $ra
    // 0x80076E98: nop

    return;
    // 0x80076E98: nop

    // 0x80076E9C: nop

;}
RECOMP_FUNC void func_80076EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076EA0: jr          $ra
    // 0x80076EA4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80076EA4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80076EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076EA8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80076EAC: jr          $ra
    // 0x80076EB0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80076EB0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x80076EB4: nop

    // 0x80076EB8: nop

    // 0x80076EBC: nop

;}
RECOMP_FUNC void func_80076EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076EC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076EC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80076EC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076ECC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80076ED0: jal         0x80076F20
    // 0x80076ED4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80076F20(rdram, ctx);
        goto after_0;
    // 0x80076ED4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80076ED8: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x80076EDC: nop

    // 0x80076EE0: beq         $t6, $zero, L_80076F10
    if (ctx->r14 == 0) {
        // 0x80076EE4: nop
    
            goto L_80076F10;
    }
    // 0x80076EE4: nop

    // 0x80076EE8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80076EEC: nop

    // 0x80076EF0: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80076EF4: jal         0x800A4590
    // 0x80076EF8: nop

    func_800A4590(rdram, ctx);
        goto after_1;
    // 0x80076EF8: nop

    after_1:
    // 0x80076EFC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80076F00: nop

    // 0x80076F04: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80076F08: jal         0x800A45D8
    // 0x80076F0C: nop

    func_800A45D8(rdram, ctx);
        goto after_2;
    // 0x80076F0C: nop

    after_2:
L_80076F10:
    // 0x80076F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076F18: jr          $ra
    // 0x80076F1C: nop

    return;
    // 0x80076F1C: nop

;}
RECOMP_FUNC void func_80076F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076F20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076F24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80076F28: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80076F2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076F30: lw          $t7, 0x28($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X28);
    // 0x80076F34: nop

    // 0x80076F38: beq         $t7, $zero, L_80076F54
    if (ctx->r15 == 0) {
        // 0x80076F3C: nop
    
            goto L_80076F54;
    }
    // 0x80076F3C: nop

    // 0x80076F40: jal         0x800A6990
    // 0x80076F44: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_800A6990(rdram, ctx);
        goto after_0;
    // 0x80076F44: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x80076F48: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80076F4C: nop

    // 0x80076F50: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
L_80076F54:
    // 0x80076F54: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80076F58: nop

    // 0x80076F5C: lw          $t0, 0x2C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X2C);
    // 0x80076F60: nop

    // 0x80076F64: beq         $t0, $zero, L_80076FD0
    if (ctx->r8 == 0) {
        // 0x80076F68: nop
    
            goto L_80076FD0;
    }
    // 0x80076F68: nop

    // 0x80076F6C: jal         0x800A6A74
    // 0x80076F70: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_800A6A74(rdram, ctx);
        goto after_1;
    // 0x80076F70: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x80076F74: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80076F78: nop

    // 0x80076F7C: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x80076F80: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80076F84: nop

    // 0x80076F88: lw          $t3, 0x28($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X28);
    // 0x80076F8C: nop

    // 0x80076F90: bne         $t3, $zero, L_80076FB8
    if (ctx->r11 != 0) {
        // 0x80076F94: nop
    
            goto L_80076FB8;
    }
    // 0x80076F94: nop

    // 0x80076F98: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x80076F9C: nop

    // 0x80076FA0: lw          $a0, 0x20($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X20);
    // 0x80076FA4: jal         0x800A6990
    // 0x80076FA8: nop

    func_800A6990(rdram, ctx);
        goto after_2;
    // 0x80076FA8: nop

    after_2:
    // 0x80076FAC: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80076FB0: nop

    // 0x80076FB4: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
L_80076FB8:
    // 0x80076FB8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80076FBC: nop

    // 0x80076FC0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x80076FC4: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x80076FC8: jal         0x800A678C
    // 0x80076FCC: nop

    func_800A678C(rdram, ctx);
        goto after_3;
    // 0x80076FCC: nop

    after_3:
L_80076FD0:
    // 0x80076FD0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80076FD4: nop

    // 0x80076FD8: lbu         $t8, 0x20($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X20);
    // 0x80076FDC: nop

    // 0x80076FE0: bne         $t8, $zero, L_80076FF0
    if (ctx->r24 != 0) {
        // 0x80076FE4: nop
    
            goto L_80076FF0;
    }
    // 0x80076FE4: nop

    // 0x80076FE8: ori         $t9, $t8, 0x1B
    ctx->r25 = ctx->r24 | 0X1B;
    // 0x80076FEC: sb          $t9, 0x20($t7)
    MEM_B(0X20, ctx->r15) = ctx->r25;
L_80076FF0:
    // 0x80076FF0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80076FF4: nop

    // 0x80076FF8: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x80076FFC: jal         0x800B79D0
    // 0x80077000: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    guMtxIdentF(rdram, ctx);
        goto after_4;
    // 0x80077000: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_4:
    // 0x80077004: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80077008: nop

    // 0x8007700C: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x80077010: jal         0x800B79D0
    // 0x80077014: addiu       $a0, $a0, 0x4C
    ctx->r4 = ADD32(ctx->r4, 0X4C);
    guMtxIdentF(rdram, ctx);
        goto after_5;
    // 0x80077014: addiu       $a0, $a0, 0x4C
    ctx->r4 = ADD32(ctx->r4, 0X4C);
    after_5:
    // 0x80077018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007701C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077020: jr          $ra
    // 0x80077024: nop

    return;
    // 0x80077024: nop

;}
RECOMP_FUNC void func_80077028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077028: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007702C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80077030: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80077034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077038: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8007703C: nop

    // 0x80077040: beq         $t7, $zero, L_8007705C
    if (ctx->r15 == 0) {
        // 0x80077044: nop
    
            goto L_8007705C;
    }
    // 0x80077044: nop

    // 0x80077048: jal         0x800A6AA8
    // 0x8007704C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_800A6AA8(rdram, ctx);
        goto after_0;
    // 0x8007704C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x80077050: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80077054: nop

    // 0x80077058: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
L_8007705C:
    // 0x8007705C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80077060: nop

    // 0x80077064: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80077068: nop

    // 0x8007706C: beq         $t0, $zero, L_80077088
    if (ctx->r8 == 0) {
        // 0x80077070: nop
    
            goto L_80077088;
    }
    // 0x80077070: nop

    // 0x80077074: jal         0x800A6A2C
    // 0x80077078: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_800A6A2C(rdram, ctx);
        goto after_1;
    // 0x80077078: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x8007707C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80077080: nop

    // 0x80077084: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
L_80077088:
    // 0x80077088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007708C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077090: jr          $ra
    // 0x80077094: nop

    return;
    // 0x80077094: nop

;}
RECOMP_FUNC void func_80077098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077098: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8007709C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800770A0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800770A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800770A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800770AC: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800770B0: nop

    // 0x800770B4: beq         $t7, $zero, L_80077394
    if (ctx->r15 == 0) {
        // 0x800770B8: nop
    
            goto L_80077394;
    }
    // 0x800770B8: nop

    // 0x800770BC: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x800770C0: nop

    // 0x800770C4: lw          $t9, 0x2C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X2C);
    // 0x800770C8: nop

    // 0x800770CC: beq         $t9, $zero, L_800771A8
    if (ctx->r25 == 0) {
        // 0x800770D0: nop
    
            goto L_800771A8;
    }
    // 0x800770D0: nop

    // 0x800770D4: lbu         $t0, 0x20($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X20);
    // 0x800770D8: nop

    // 0x800770DC: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x800770E0: beq         $t1, $zero, L_80077120
    if (ctx->r9 == 0) {
        // 0x800770E4: nop
    
            goto L_80077120;
    }
    // 0x800770E4: nop

    // 0x800770E8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x800770EC: jal         0x800A4698
    // 0x800770F0: nop

    func_800A4698(rdram, ctx);
        goto after_0;
    // 0x800770F0: nop

    after_0:
    // 0x800770F4: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x800770F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800770FC: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x80077100: jal         0x800A46C0
    // 0x80077104: nop

    func_800A46C0(rdram, ctx);
        goto after_1;
    // 0x80077104: nop

    after_1:
    // 0x80077108: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x8007710C: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80077110: lbu         $t4, 0x20($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X20);
    // 0x80077114: nop

    // 0x80077118: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x8007711C: sb          $t5, 0x20($t3)
    MEM_B(0X20, ctx->r11) = ctx->r13;
L_80077120:
    // 0x80077120: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80077124: nop

    // 0x80077128: lbu         $t7, 0x20($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X20);
    // 0x8007712C: nop

    // 0x80077130: andi        $t9, $t7, 0x4
    ctx->r25 = ctx->r15 & 0X4;
    // 0x80077134: beq         $t9, $zero, L_80077144
    if (ctx->r25 == 0) {
        // 0x80077138: nop
    
            goto L_80077144;
    }
    // 0x80077138: nop

    // 0x8007713C: ori         $t0, $t7, 0x1
    ctx->r8 = ctx->r15 | 0X1;
    // 0x80077140: sb          $t0, 0x20($t6)
    MEM_B(0X20, ctx->r14) = ctx->r8;
L_80077144:
    // 0x80077144: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80077148: nop

    // 0x8007714C: lbu         $t8, 0x20($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X20);
    // 0x80077150: nop

    // 0x80077154: andi        $t2, $t8, 0x1
    ctx->r10 = ctx->r24 & 0X1;
    // 0x80077158: beq         $t2, $zero, L_80077170
    if (ctx->r10 == 0) {
        // 0x8007715C: nop
    
            goto L_80077170;
    }
    // 0x8007715C: nop

    // 0x80077160: jal         0x800A3AF0
    // 0x80077164: nop

    func_800A3AF0(rdram, ctx);
        goto after_2;
    // 0x80077164: nop

    after_2:
    // 0x80077168: b           L_80077174
    // 0x8007716C: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
        goto L_80077174;
    // 0x8007716C: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
L_80077170:
    // 0x80077170: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80077174:
    // 0x80077174: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80077178: nop

    // 0x8007717C: lbu         $t5, 0x20($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X20);
    // 0x80077180: nop

    // 0x80077184: andi        $t3, $t5, 0x4
    ctx->r11 = ctx->r13 & 0X4;
    // 0x80077188: beq         $t3, $zero, L_80077194
    if (ctx->r11 == 0) {
        // 0x8007718C: nop
    
            goto L_80077194;
    }
    // 0x8007718C: nop

    // 0x80077190: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
L_80077194:
    // 0x80077194: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80077198: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007719C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x800771A0: jal         0x800A46C0
    // 0x800771A4: nop

    func_800A46C0(rdram, ctx);
        goto after_3;
    // 0x800771A4: nop

    after_3:
L_800771A8:
    // 0x800771A8: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800771AC: nop

    // 0x800771B0: lbu         $t0, 0x20($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X20);
    // 0x800771B4: nop

    // 0x800771B8: andi        $t6, $t0, 0x10
    ctx->r14 = ctx->r8 & 0X10;
    // 0x800771BC: beq         $t6, $zero, L_800771DC
    if (ctx->r14 == 0) {
        // 0x800771C0: nop
    
            goto L_800771DC;
    }
    // 0x800771C0: nop

    // 0x800771C4: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x800771C8: lw          $a1, 0x14($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X14);
    // 0x800771CC: lw          $a2, 0x18($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X18);
    // 0x800771D0: lw          $a3, 0x1C($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X1C);
    // 0x800771D4: jal         0x800A3BF8
    // 0x800771D8: nop

    func_800A3BF8(rdram, ctx);
        goto after_4;
    // 0x800771D8: nop

    after_4:
L_800771DC:
    // 0x800771DC: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x800771E0: nop

    // 0x800771E4: lbu         $t8, 0x20($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X20);
    // 0x800771E8: nop

    // 0x800771EC: andi        $t2, $t8, 0x8
    ctx->r10 = ctx->r24 & 0X8;
    // 0x800771F0: beq         $t2, $zero, L_80077210
    if (ctx->r10 == 0) {
        // 0x800771F4: nop
    
            goto L_80077210;
    }
    // 0x800771F4: nop

    // 0x800771F8: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x800771FC: lw          $a1, 0x8($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X8);
    // 0x80077200: lw          $a2, 0xC($t1)
    ctx->r6 = MEM_W(ctx->r9, 0XC);
    // 0x80077204: lw          $a3, 0x10($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X10);
    // 0x80077208: jal         0x800A3B00
    // 0x8007720C: nop

    func_800A3B00(rdram, ctx);
        goto after_5;
    // 0x8007720C: nop

    after_5:
L_80077210:
    // 0x80077210: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80077214: lw          $t4, 0x20C0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X20C0);
    // 0x80077218: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007721C: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x80077220: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80077224: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x80077228: sw          $t5, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r13;
    // 0x8007722C: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x80077230: sw          $t3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r11;
    // 0x80077234: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80077238: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8007723C: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80077240: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x80077244: lui         $t8, 0xED00
    ctx->r24 = S32(0XED00 << 16);
    // 0x80077248: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8007724C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80077250: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80077254: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x80077258: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8007725C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80077260: lui         $t1, 0x63
    ctx->r9 = S32(0X63 << 16);
    // 0x80077264: ori         $t1, $t1, 0xC4AC
    ctx->r9 = ctx->r9 | 0XC4AC;
    // 0x80077268: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8007726C: sw          $t1, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r9;
    // 0x80077270: lw          $t5, 0x20C0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X20C0);
    // 0x80077274: lui         $t9, 0xDB04
    ctx->r25 = S32(0XDB04 << 16);
    // 0x80077278: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x8007727C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80077280: addiu       $t3, $t5, 0x8
    ctx->r11 = ADD32(ctx->r13, 0X8);
    // 0x80077284: sw          $t3, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r11;
    // 0x80077288: ori         $t9, $t9, 0x4
    ctx->r25 = ctx->r25 | 0X4;
    // 0x8007728C: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80077290: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80077294: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80077298: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8007729C: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x800772A0: lw          $t8, 0x20C0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X20C0);
    // 0x800772A4: lui         $t1, 0xDB04
    ctx->r9 = S32(0XDB04 << 16);
    // 0x800772A8: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x800772AC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800772B0: addiu       $t2, $t8, 0x8
    ctx->r10 = ADD32(ctx->r24, 0X8);
    // 0x800772B4: sw          $t2, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r10;
    // 0x800772B8: ori         $t1, $t1, 0xC
    ctx->r9 = ctx->r9 | 0XC;
    // 0x800772BC: sw          $t1, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r9;
    // 0x800772C0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800772C4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800772C8: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x800772CC: sw          $t5, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r13;
    // 0x800772D0: lw          $t9, 0x20C0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X20C0);
    // 0x800772D4: lui         $t6, 0xDB04
    ctx->r14 = S32(0XDB04 << 16);
    // 0x800772D8: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x800772DC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800772E0: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x800772E4: sw          $t0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r8;
    // 0x800772E8: ori         $t6, $t6, 0x14
    ctx->r14 = ctx->r14 | 0X14;
    // 0x800772EC: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x800772F0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800772F4: ori         $t8, $zero, 0xFFFF
    ctx->r24 = 0 | 0XFFFF;
    // 0x800772F8: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x800772FC: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x80077300: lw          $t1, 0x20C0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X20C0);
    // 0x80077304: lui         $t5, 0xDB04
    ctx->r13 = S32(0XDB04 << 16);
    // 0x80077308: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8007730C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80077310: addiu       $t4, $t1, 0x8
    ctx->r12 = ADD32(ctx->r9, 0X8);
    // 0x80077314: sw          $t4, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r12;
    // 0x80077318: ori         $t5, $t5, 0x1C
    ctx->r13 = ctx->r13 | 0X1C;
    // 0x8007731C: sw          $t5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r13;
    // 0x80077320: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80077324: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x80077328: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8007732C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80077330: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80077334: lw          $a0, 0x20C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20C0);
    // 0x80077338: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x8007733C: jal         0x800A724C
    // 0x80077340: nop

    func_800A724C(rdram, ctx);
        goto after_6;
    // 0x80077340: nop

    after_6:
    // 0x80077344: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80077348: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007734C: sw          $v0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r2;
    // 0x80077350: lw          $t8, 0x2C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X2C);
    // 0x80077354: nop

    // 0x80077358: beq         $t8, $zero, L_80077394
    if (ctx->r24 == 0) {
        // 0x8007735C: nop
    
            goto L_80077394;
    }
    // 0x8007735C: nop

    // 0x80077360: lbu         $t2, 0x20($t7)
    ctx->r10 = MEM_BU(ctx->r15, 0X20);
    // 0x80077364: nop

    // 0x80077368: andi        $t1, $t2, 0x4
    ctx->r9 = ctx->r10 & 0X4;
    // 0x8007736C: beq         $t1, $zero, L_80077394
    if (ctx->r9 == 0) {
        // 0x80077370: addiu       $at, $zero, -0x2
        ctx->r1 = ADD32(0, -0X2);
            goto L_80077394;
    }
    // 0x80077370: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80077374: and         $t4, $t2, $at
    ctx->r12 = ctx->r10 & ctx->r1;
    // 0x80077378: sb          $t4, 0x20($t7)
    MEM_B(0X20, ctx->r15) = ctx->r12;
    // 0x8007737C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80077380: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x80077384: lbu         $t3, 0x20($t5)
    ctx->r11 = MEM_BU(ctx->r13, 0X20);
    // 0x80077388: nop

    // 0x8007738C: and         $t9, $t3, $at
    ctx->r25 = ctx->r11 & ctx->r1;
    // 0x80077390: sb          $t9, 0x20($t5)
    MEM_B(0X20, ctx->r13) = ctx->r25;
L_80077394:
    // 0x80077394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80077398: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007739C: jr          $ra
    // 0x800773A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800773A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800773A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800773A4: lbu         $t6, 0x20($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X20);
    // 0x800773A8: nop

    // 0x800773AC: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x800773B0: jr          $ra
    // 0x800773B4: sb          $t7, 0x20($a0)
    MEM_B(0X20, ctx->r4) = ctx->r15;
    return;
    // 0x800773B4: sb          $t7, 0x20($a0)
    MEM_B(0X20, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800773B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800773B8: lbu         $t6, 0x20($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X20);
    // 0x800773BC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x800773C0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x800773C4: jr          $ra
    // 0x800773C8: sb          $t7, 0x20($a0)
    MEM_B(0X20, ctx->r4) = ctx->r15;
    return;
    // 0x800773C8: sb          $t7, 0x20($a0)
    MEM_B(0X20, ctx->r4) = ctx->r15;
    // 0x800773CC: nop

;}
RECOMP_FUNC void func_800773D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800773D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800773D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800773D8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800773DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800773E0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x800773E4: jal         0x8007E328
    // 0x800773E8: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x800773E8: nop

    after_0:
    // 0x800773EC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800773F0: nop

    // 0x800773F4: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x800773F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800773FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077400: jr          $ra
    // 0x80077404: nop

    return;
    // 0x80077404: nop

;}
RECOMP_FUNC void func_80077408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077408: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007740C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80077410: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80077414: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80077418: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8007741C: beq         $t6, $zero, L_80077600
    if (ctx->r14 == 0) {
        // 0x80077420: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80077600;
    }
    // 0x80077420: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80077424: jal         0x8004A34C
    // 0x80077428: nop

    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x80077428: nop

    after_0:
    // 0x8007742C: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80077430: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80077434: jal         0x80074888
    // 0x80077438: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_80074888(rdram, ctx);
        goto after_1;
    // 0x80077438: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_1:
    // 0x8007743C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80077440: jal         0x8007E03C
    // 0x80077444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_2;
    // 0x80077444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80077448: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8007744C: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80077450: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x80077454: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80077458: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8007745C: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x80077460: jal         0x800746C0
    // 0x80077464: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_800746C0(rdram, ctx);
        goto after_3;
    // 0x80077464: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_3:
    // 0x80077468: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8007746C: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x80077470: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80077474: nop

    // 0x80077478: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x8007747C: nop

    // 0x80077480: sh          $t1, 0x74($t9)
    MEM_H(0X74, ctx->r25) = ctx->r9;
    // 0x80077484: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80077488: nop

    // 0x8007748C: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80077490: nop

    // 0x80077494: lhu         $t4, 0x2($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X2);
    // 0x80077498: nop

    // 0x8007749C: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x800774A0: mflo        $t5
    ctx->r13 = lo;
    // 0x800774A4: sh          $t5, 0x76($t2)
    MEM_H(0X76, ctx->r10) = ctx->r13;
    // 0x800774A8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_800774AC:
    // 0x800774AC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800774B0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800774B4: lh          $t7, 0x74($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X74);
    // 0x800774B8: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x800774BC: addu        $t9, $t6, $t1
    ctx->r25 = ADD32(ctx->r14, ctx->r9);
    // 0x800774C0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800774C4: sh          $t8, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r24;
    // 0x800774C8: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800774CC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800774D0: lh          $t0, 0x74($t3)
    ctx->r8 = MEM_H(ctx->r11, 0X74);
    // 0x800774D4: lh          $t1, 0x76($t3)
    ctx->r9 = MEM_H(ctx->r11, 0X76);
    // 0x800774D8: multu       $t4, $t0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800774DC: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x800774E0: addu        $t2, $t3, $t5
    ctx->r10 = ADD32(ctx->r11, ctx->r13);
    // 0x800774E4: lh          $t7, 0x4($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X4);
    // 0x800774E8: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x800774EC: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x800774F0: mflo        $t6
    ctx->r14 = lo;
    // 0x800774F4: nop

    // 0x800774F8: nop

    // 0x800774FC: multu       $t6, $t1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80077500: mflo        $t8
    ctx->r24 = lo;
    // 0x80077504: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80077508: addu        $t2, $t9, $t5
    ctx->r10 = ADD32(ctx->r25, ctx->r13);
    // 0x8007750C: lbu         $t4, 0x8($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X8);
    // 0x80077510: nop

    // 0x80077514: andi        $t0, $t4, 0xF0
    ctx->r8 = ctx->r12 & 0XF0;
    // 0x80077518: bne         $t0, $at, L_80077594
    if (ctx->r8 != ctx->r1) {
        // 0x8007751C: nop
    
            goto L_80077594;
    }
    // 0x8007751C: nop

L_80077520:
    // 0x80077520: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80077524: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80077528: sll         $t7, $t1, 1
    ctx->r15 = S32(ctx->r9 << 1);
    // 0x8007752C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80077530: lh          $t3, 0x4($t8)
    ctx->r11 = MEM_H(ctx->r24, 0X4);
    // 0x80077534: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x80077538: addiu       $t9, $t3, -0x1
    ctx->r25 = ADD32(ctx->r11, -0X1);
    // 0x8007753C: sh          $t9, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r25;
    // 0x80077540: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80077544: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80077548: lh          $t6, 0x74($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X74);
    // 0x8007754C: lh          $t3, 0x76($t5)
    ctx->r11 = MEM_H(ctx->r13, 0X76);
    // 0x80077550: multu       $t2, $t6
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80077554: sll         $t4, $t2, 1
    ctx->r12 = S32(ctx->r10 << 1);
    // 0x80077558: addu        $t0, $t5, $t4
    ctx->r8 = ADD32(ctx->r13, ctx->r12);
    // 0x8007755C: lh          $t1, 0x4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X4);
    // 0x80077560: lw          $t4, 0x0($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X0);
    // 0x80077564: mflo        $t7
    ctx->r15 = lo;
    // 0x80077568: nop

    // 0x8007756C: nop

    // 0x80077570: multu       $t7, $t3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80077574: mflo        $t9
    ctx->r25 = lo;
    // 0x80077578: addu        $t8, $t1, $t9
    ctx->r24 = ADD32(ctx->r9, ctx->r25);
    // 0x8007757C: addu        $t0, $t8, $t4
    ctx->r8 = ADD32(ctx->r24, ctx->r12);
    // 0x80077580: lbu         $t2, 0x8($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X8);
    // 0x80077584: nop

    // 0x80077588: andi        $t6, $t2, 0xF0
    ctx->r14 = ctx->r10 & 0XF0;
    // 0x8007758C: beq         $t6, $at, L_80077520
    if (ctx->r14 == ctx->r1) {
        // 0x80077590: nop
    
            goto L_80077520;
    }
    // 0x80077590: nop

L_80077594:
    // 0x80077594: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80077598: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8007759C: sll         $t1, $t3, 1
    ctx->r9 = S32(ctx->r11 << 1);
    // 0x800775A0: addu        $t9, $t7, $t1
    ctx->r25 = ADD32(ctx->r15, ctx->r9);
    // 0x800775A4: lh          $t5, 0x4($t9)
    ctx->r13 = MEM_H(ctx->r25, 0X4);
    // 0x800775A8: nop

    // 0x800775AC: addiu       $t8, $t5, 0x1
    ctx->r24 = ADD32(ctx->r13, 0X1);
    // 0x800775B0: sh          $t8, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r24;
    // 0x800775B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800775B8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800775BC: sll         $t2, $t0, 1
    ctx->r10 = S32(ctx->r8 << 1);
    // 0x800775C0: addu        $t6, $t4, $t2
    ctx->r14 = ADD32(ctx->r12, ctx->r10);
    // 0x800775C4: lh          $t3, 0x4($t6)
    ctx->r11 = MEM_H(ctx->r14, 0X4);
    // 0x800775C8: nop

    // 0x800775CC: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x800775D0: beq         $at, $zero, L_800775E8
    if (ctx->r1 == 0) {
        // 0x800775D4: nop
    
            goto L_800775E8;
    }
    // 0x800775D4: nop

    // 0x800775D8: lh          $t7, 0x74($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X74);
    // 0x800775DC: nop

    // 0x800775E0: addiu       $t1, $t7, -0x1
    ctx->r9 = ADD32(ctx->r15, -0X1);
    // 0x800775E4: sh          $t1, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r9;
L_800775E8:
    // 0x800775E8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800775EC: nop

    // 0x800775F0: addiu       $t8, $t5, 0x1
    ctx->r24 = ADD32(ctx->r13, 0X1);
    // 0x800775F4: slti        $at, $t8, 0x2E
    ctx->r1 = SIGNED(ctx->r24) < 0X2E ? 1 : 0;
    // 0x800775F8: bne         $at, $zero, L_800774AC
    if (ctx->r1 != 0) {
        // 0x800775FC: sw          $t8, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r24;
            goto L_800774AC;
    }
    // 0x800775FC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80077600:
    // 0x80077600: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80077604: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80077608: jr          $ra
    // 0x8007760C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8007760C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80077610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077610: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80077614: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80077618: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8007761C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80077620: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80077624: beq         $t6, $zero, L_80077808
    if (ctx->r14 == 0) {
        // 0x80077628: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80077808;
    }
    // 0x80077628: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007762C: jal         0x8004A34C
    // 0x80077630: nop

    func_8004A34C(rdram, ctx);
        goto after_0;
    // 0x80077630: nop

    after_0:
    // 0x80077634: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80077638: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8007763C: jal         0x80074888
    // 0x80077640: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_80074888(rdram, ctx);
        goto after_1;
    // 0x80077640: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_1:
    // 0x80077644: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80077648: jal         0x8007E03C
    // 0x8007764C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E03C(rdram, ctx);
        goto after_2;
    // 0x8007764C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80077650: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80077654: lui         $a0, 0x27
    ctx->r4 = S32(0X27 << 16);
    // 0x80077658: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x8007765C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80077660: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80077664: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x80077668: jal         0x800746C0
    // 0x8007766C: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    func_800746C0(rdram, ctx);
        goto after_3;
    // 0x8007766C: addiu       $a0, $a0, 0x3A00
    ctx->r4 = ADD32(ctx->r4, 0X3A00);
    after_3:
    // 0x80077670: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80077674: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x80077678: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8007767C: nop

    // 0x80077680: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x80077684: nop

    // 0x80077688: sh          $t1, 0x74($t9)
    MEM_H(0X74, ctx->r25) = ctx->r9;
    // 0x8007768C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80077690: nop

    // 0x80077694: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80077698: nop

    // 0x8007769C: lhu         $t4, 0x2($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X2);
    // 0x800776A0: nop

    // 0x800776A4: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x800776A8: mflo        $t5
    ctx->r13 = lo;
    // 0x800776AC: sh          $t5, 0x76($t2)
    MEM_H(0X76, ctx->r10) = ctx->r13;
    // 0x800776B0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_800776B4:
    // 0x800776B4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800776B8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800776BC: lh          $t7, 0x74($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X74);
    // 0x800776C0: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x800776C4: addu        $t9, $t6, $t1
    ctx->r25 = ADD32(ctx->r14, ctx->r9);
    // 0x800776C8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800776CC: sh          $t8, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r24;
    // 0x800776D0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800776D4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800776D8: lh          $t0, 0x74($t3)
    ctx->r8 = MEM_H(ctx->r11, 0X74);
    // 0x800776DC: lh          $t1, 0x76($t3)
    ctx->r9 = MEM_H(ctx->r11, 0X76);
    // 0x800776E0: multu       $t4, $t0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800776E4: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x800776E8: addu        $t2, $t3, $t5
    ctx->r10 = ADD32(ctx->r11, ctx->r13);
    // 0x800776EC: lh          $t7, 0x4($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X4);
    // 0x800776F0: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x800776F4: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x800776F8: mflo        $t6
    ctx->r14 = lo;
    // 0x800776FC: nop

    // 0x80077700: nop

    // 0x80077704: multu       $t6, $t1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80077708: mflo        $t8
    ctx->r24 = lo;
    // 0x8007770C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80077710: addu        $t2, $t9, $t5
    ctx->r10 = ADD32(ctx->r25, ctx->r13);
    // 0x80077714: lbu         $t4, 0x8($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X8);
    // 0x80077718: nop

    // 0x8007771C: andi        $t0, $t4, 0xF0
    ctx->r8 = ctx->r12 & 0XF0;
    // 0x80077720: bne         $t0, $at, L_8007779C
    if (ctx->r8 != ctx->r1) {
        // 0x80077724: nop
    
            goto L_8007779C;
    }
    // 0x80077724: nop

L_80077728:
    // 0x80077728: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8007772C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80077730: sll         $t7, $t1, 1
    ctx->r15 = S32(ctx->r9 << 1);
    // 0x80077734: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80077738: lh          $t3, 0x4($t8)
    ctx->r11 = MEM_H(ctx->r24, 0X4);
    // 0x8007773C: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x80077740: addiu       $t9, $t3, -0x1
    ctx->r25 = ADD32(ctx->r11, -0X1);
    // 0x80077744: sh          $t9, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r25;
    // 0x80077748: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8007774C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80077750: lh          $t6, 0x74($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X74);
    // 0x80077754: lh          $t3, 0x76($t5)
    ctx->r11 = MEM_H(ctx->r13, 0X76);
    // 0x80077758: multu       $t2, $t6
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007775C: sll         $t4, $t2, 1
    ctx->r12 = S32(ctx->r10 << 1);
    // 0x80077760: addu        $t0, $t5, $t4
    ctx->r8 = ADD32(ctx->r13, ctx->r12);
    // 0x80077764: lh          $t1, 0x4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X4);
    // 0x80077768: lw          $t4, 0x0($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X0);
    // 0x8007776C: mflo        $t7
    ctx->r15 = lo;
    // 0x80077770: nop

    // 0x80077774: nop

    // 0x80077778: multu       $t7, $t3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007777C: mflo        $t9
    ctx->r25 = lo;
    // 0x80077780: addu        $t8, $t1, $t9
    ctx->r24 = ADD32(ctx->r9, ctx->r25);
    // 0x80077784: addu        $t0, $t8, $t4
    ctx->r8 = ADD32(ctx->r24, ctx->r12);
    // 0x80077788: lbu         $t2, 0x8($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X8);
    // 0x8007778C: nop

    // 0x80077790: andi        $t6, $t2, 0xF0
    ctx->r14 = ctx->r10 & 0XF0;
    // 0x80077794: beq         $t6, $at, L_80077728
    if (ctx->r14 == ctx->r1) {
        // 0x80077798: nop
    
            goto L_80077728;
    }
    // 0x80077798: nop

L_8007779C:
    // 0x8007779C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800777A0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800777A4: sll         $t1, $t3, 1
    ctx->r9 = S32(ctx->r11 << 1);
    // 0x800777A8: addu        $t9, $t7, $t1
    ctx->r25 = ADD32(ctx->r15, ctx->r9);
    // 0x800777AC: lh          $t5, 0x4($t9)
    ctx->r13 = MEM_H(ctx->r25, 0X4);
    // 0x800777B0: nop

    // 0x800777B4: addiu       $t8, $t5, 0x1
    ctx->r24 = ADD32(ctx->r13, 0X1);
    // 0x800777B8: sh          $t8, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r24;
    // 0x800777BC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800777C0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800777C4: sll         $t2, $t0, 1
    ctx->r10 = S32(ctx->r8 << 1);
    // 0x800777C8: addu        $t6, $t4, $t2
    ctx->r14 = ADD32(ctx->r12, ctx->r10);
    // 0x800777CC: lh          $t3, 0x4($t6)
    ctx->r11 = MEM_H(ctx->r14, 0X4);
    // 0x800777D0: nop

    // 0x800777D4: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x800777D8: beq         $at, $zero, L_800777F0
    if (ctx->r1 == 0) {
        // 0x800777DC: nop
    
            goto L_800777F0;
    }
    // 0x800777DC: nop

    // 0x800777E0: lh          $t7, 0x74($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X74);
    // 0x800777E4: nop

    // 0x800777E8: addiu       $t1, $t7, -0x1
    ctx->r9 = ADD32(ctx->r15, -0X1);
    // 0x800777EC: sh          $t1, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r9;
L_800777F0:
    // 0x800777F0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800777F4: nop

    // 0x800777F8: addiu       $t8, $t5, 0x1
    ctx->r24 = ADD32(ctx->r13, 0X1);
    // 0x800777FC: slti        $at, $t8, 0x33
    ctx->r1 = SIGNED(ctx->r24) < 0X33 ? 1 : 0;
    // 0x80077800: bne         $at, $zero, L_800776B4
    if (ctx->r1 != 0) {
        // 0x80077804: sw          $t8, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r24;
            goto L_800776B4;
    }
    // 0x80077804: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80077808:
    // 0x80077808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007780C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80077810: jr          $ra
    // 0x80077814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80077814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80077818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077818: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8007781C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80077820: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80077824: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80077828: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8007782C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80077830: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80077834: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80077838: nop

    // 0x8007783C: beq         $t7, $zero, L_80077950
    if (ctx->r15 == 0) {
        // 0x80077840: nop
    
            goto L_80077950;
    }
    // 0x80077840: nop

    // 0x80077844: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80077848: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8007784C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x80077850: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x80077854: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x80077858: nop

    // 0x8007785C: beq         $t0, $zero, L_80077950
    if (ctx->r8 == 0) {
        // 0x80077860: nop
    
            goto L_80077950;
    }
    // 0x80077860: nop

L_80077864:
    // 0x80077864: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80077868: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8007786C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80077870: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80077874: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x80077878: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8007787C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80077880: lbu         $t6, 0x2D10($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2D10);
    // 0x80077884: lh          $t7, 0x76($t1)
    ctx->r15 = MEM_H(ctx->r9, 0X76);
    // 0x80077888: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x8007788C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80077890: addu        $t0, $t1, $t9
    ctx->r8 = ADD32(ctx->r9, ctx->r25);
    // 0x80077894: lh          $t2, 0x4($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X4);
    // 0x80077898: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x8007789C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x800778A0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800778A4: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x800778A8: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x800778AC: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800778B0: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x800778B4: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x800778B8: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x800778BC: mflo        $t8
    ctx->r24 = lo;
    // 0x800778C0: addu        $t4, $t8, $t7
    ctx->r12 = ADD32(ctx->r24, ctx->r15);
    // 0x800778C4: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x800778C8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800778CC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x800778D0: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x800778D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800778D8: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x800778DC: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x800778E0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x800778E4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x800778E8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x800778EC: jal         0x80059048
    // 0x800778F0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    func_80059048(rdram, ctx);
        goto after_0;
    // 0x800778F0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_0:
    // 0x800778F4: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x800778F8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800778FC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80077900: addu        $t4, $t8, $t7
    ctx->r12 = ADD32(ctx->r24, ctx->r15);
    // 0x80077904: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x80077908: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8007790C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80077910: lbu         $t6, 0x2D10($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2D10);
    // 0x80077914: addiu       $t4, $t7, 0x1
    ctx->r12 = ADD32(ctx->r15, 0X1);
    // 0x80077918: sll         $t1, $t6, 1
    ctx->r9 = S32(ctx->r14 << 1);
    // 0x8007791C: addu        $t0, $t9, $t1
    ctx->r8 = ADD32(ctx->r25, ctx->r9);
    // 0x80077920: lh          $t2, 0x4($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X4);
    // 0x80077924: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80077928: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x8007792C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80077930: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80077934: addu        $t8, $t3, $t2
    ctx->r24 = ADD32(ctx->r11, ctx->r10);
    // 0x80077938: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x8007793C: addu        $t9, $t5, $t6
    ctx->r25 = ADD32(ctx->r13, ctx->r14);
    // 0x80077940: lbu         $t1, 0x0($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X0);
    // 0x80077944: nop

    // 0x80077948: bne         $t1, $zero, L_80077864
    if (ctx->r9 != 0) {
        // 0x8007794C: nop
    
            goto L_80077864;
    }
    // 0x8007794C: nop

L_80077950:
    // 0x80077950: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80077954: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80077958: jr          $ra
    // 0x8007795C: nop

    return;
    // 0x8007795C: nop

;}
RECOMP_FUNC void func_80077960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077960: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80077964: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80077968: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8007796C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80077970: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80077974: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80077978: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8007797C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80077980: nop

    // 0x80077984: beq         $t7, $zero, L_80077A98
    if (ctx->r15 == 0) {
        // 0x80077988: nop
    
            goto L_80077A98;
    }
    // 0x80077988: nop

    // 0x8007798C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80077990: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x80077994: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x80077998: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x8007799C: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x800779A0: nop

    // 0x800779A4: beq         $t0, $zero, L_80077A98
    if (ctx->r8 == 0) {
        // 0x800779A8: nop
    
            goto L_80077A98;
    }
    // 0x800779A8: nop

L_800779AC:
    // 0x800779AC: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x800779B0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800779B4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800779B8: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800779BC: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x800779C0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800779C4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800779C8: lbu         $t6, 0x2CD0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2CD0);
    // 0x800779CC: lh          $t7, 0x76($t1)
    ctx->r15 = MEM_H(ctx->r9, 0X76);
    // 0x800779D0: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x800779D4: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800779D8: addu        $t0, $t1, $t9
    ctx->r8 = ADD32(ctx->r9, ctx->r25);
    // 0x800779DC: lh          $t2, 0x4($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X4);
    // 0x800779E0: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x800779E4: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x800779E8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800779EC: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x800779F0: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x800779F4: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800779F8: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x800779FC: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80077A00: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80077A04: mflo        $t8
    ctx->r24 = lo;
    // 0x80077A08: addu        $t4, $t8, $t7
    ctx->r12 = ADD32(ctx->r24, ctx->r15);
    // 0x80077A0C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80077A10: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80077A14: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80077A18: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80077A1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80077A20: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80077A24: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x80077A28: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80077A2C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80077A30: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80077A34: jal         0x80059048
    // 0x80077A38: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    func_80059048(rdram, ctx);
        goto after_0;
    // 0x80077A38: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_0:
    // 0x80077A3C: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80077A40: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80077A44: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80077A48: addu        $t4, $t8, $t7
    ctx->r12 = ADD32(ctx->r24, ctx->r15);
    // 0x80077A4C: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x80077A50: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80077A54: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80077A58: lbu         $t6, 0x2CD0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2CD0);
    // 0x80077A5C: addiu       $t4, $t7, 0x1
    ctx->r12 = ADD32(ctx->r15, 0X1);
    // 0x80077A60: sll         $t1, $t6, 1
    ctx->r9 = S32(ctx->r14 << 1);
    // 0x80077A64: addu        $t0, $t9, $t1
    ctx->r8 = ADD32(ctx->r25, ctx->r9);
    // 0x80077A68: lh          $t2, 0x4($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X4);
    // 0x80077A6C: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80077A70: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x80077A74: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80077A78: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80077A7C: addu        $t8, $t3, $t2
    ctx->r24 = ADD32(ctx->r11, ctx->r10);
    // 0x80077A80: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x80077A84: addu        $t9, $t5, $t6
    ctx->r25 = ADD32(ctx->r13, ctx->r14);
    // 0x80077A88: lbu         $t1, 0x0($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X0);
    // 0x80077A8C: nop

    // 0x80077A90: bne         $t1, $zero, L_800779AC
    if (ctx->r9 != 0) {
        // 0x80077A94: nop
    
            goto L_800779AC;
    }
    // 0x80077A94: nop

L_80077A98:
    // 0x80077A98: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80077A9C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80077AA0: jr          $ra
    // 0x80077AA4: nop

    return;
    // 0x80077AA4: nop

;}
RECOMP_FUNC void func_80077AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077AA8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80077AAC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80077AB0: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80077AB4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80077AB8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80077ABC: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80077AC0: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80077AC4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80077AC8: nop

    // 0x80077ACC: bne         $t7, $zero, L_80077ADC
    if (ctx->r15 != 0) {
        // 0x80077AD0: nop
    
            goto L_80077ADC;
    }
    // 0x80077AD0: nop

    // 0x80077AD4: b           L_80077B98
    // 0x80077AD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80077B98;
    // 0x80077AD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80077ADC:
    // 0x80077ADC: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80077AE0: lbu         $t0, 0x53($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X53);
    // 0x80077AE4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80077AE8: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80077AEC: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x80077AF0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80077AF4: lbu         $t1, 0x2CD0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X2CD0);
    // 0x80077AF8: lh          $t2, 0x76($t9)
    ctx->r10 = MEM_H(ctx->r25, 0X76);
    // 0x80077AFC: sll         $t4, $t1, 1
    ctx->r12 = S32(ctx->r9 << 1);
    // 0x80077B00: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80077B04: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x80077B08: lh          $t6, 0x4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X4);
    // 0x80077B0C: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x80077B10: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80077B14: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80077B18: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x80077B1C: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80077B20: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80077B24: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x80077B28: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x80077B2C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80077B30: mflo        $t3
    ctx->r11 = lo;
    // 0x80077B34: addu        $t0, $t3, $t2
    ctx->r8 = ADD32(ctx->r11, ctx->r10);
    // 0x80077B38: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80077B3C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80077B40: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x80077B44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80077B48: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80077B4C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80077B50: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80077B54: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80077B58: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80077B5C: jal         0x80059048
    // 0x80077B60: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    func_80059048(rdram, ctx);
        goto after_0;
    // 0x80077B60: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    after_0:
    // 0x80077B64: lbu         $t2, 0x53($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X53);
    // 0x80077B68: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80077B6C: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x80077B70: lbu         $t0, 0x2CD0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X2CD0);
    // 0x80077B74: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80077B78: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80077B7C: addu        $t8, $t3, $t1
    ctx->r24 = ADD32(ctx->r11, ctx->r9);
    // 0x80077B80: lh          $t9, 0x4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X4);
    // 0x80077B84: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x80077B88: nop

    // 0x80077B8C: addu        $t5, $t4, $t9
    ctx->r13 = ADD32(ctx->r12, ctx->r25);
    // 0x80077B90: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    // 0x80077B94: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_80077B98:
    // 0x80077B98: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80077B9C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80077BA0: jr          $ra
    // 0x80077BA4: nop

    return;
    // 0x80077BA4: nop

;}
RECOMP_FUNC void func_80077BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077BA8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80077BAC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80077BB0: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80077BB4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80077BB8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80077BBC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80077BC0: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80077BC4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80077BC8: nop

    // 0x80077BCC: beq         $t7, $zero, L_80077D28
    if (ctx->r15 == 0) {
        // 0x80077BD0: nop
    
            goto L_80077D28;
    }
    // 0x80077BD0: nop

    // 0x80077BD4: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80077BD8: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x80077BDC: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x80077BE0: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x80077BE4: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x80077BE8: nop

    // 0x80077BEC: beq         $t0, $zero, L_80077D28
    if (ctx->r8 == 0) {
        // 0x80077BF0: nop
    
            goto L_80077D28;
    }
    // 0x80077BF0: nop

L_80077BF4:
    // 0x80077BF4: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x80077BF8: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80077BFC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80077C00: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80077C04: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x80077C08: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80077C0C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80077C10: lbu         $t6, 0x2CD0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2CD0);
    // 0x80077C14: lh          $t7, 0x76($t1)
    ctx->r15 = MEM_H(ctx->r9, 0X76);
    // 0x80077C18: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x80077C1C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80077C20: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x80077C24: addu        $t0, $t1, $t9
    ctx->r8 = ADD32(ctx->r9, ctx->r25);
    // 0x80077C28: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x80077C2C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80077C30: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x80077C34: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80077C38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80077C3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80077C40: mflo        $t8
    ctx->r24 = lo;
    // 0x80077C44: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80077C48: lh          $t2, 0x4($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X4);
    // 0x80077C4C: addu        $t4, $t8, $t7
    ctx->r12 = ADD32(ctx->r24, ctx->r15);
    // 0x80077C50: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80077C54: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80077C58: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x80077C5C: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x80077C60: lh          $t7, 0x76($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X76);
    // 0x80077C64: lh          $t8, 0x76($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X76);
    // 0x80077C68: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x80077C6C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80077C70: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80077C74: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80077C78: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80077C7C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80077C80: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x80077C84: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x80077C88: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x80077C8C: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x80077C90: jal         0x8005AA9C
    // 0x80077C94: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_8005AA9C(rdram, ctx);
        goto after_0;
    // 0x80077C94: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_0:
    // 0x80077C98: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x80077C9C: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80077CA0: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80077CA4: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80077CA8: lbu         $t1, 0x0($t6)
    ctx->r9 = MEM_BU(ctx->r14, 0X0);
    // 0x80077CAC: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80077CB0: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80077CB4: lbu         $t9, 0x2CD0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X2CD0);
    // 0x80077CB8: lh          $t4, 0x76($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X76);
    // 0x80077CBC: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80077CC0: addu        $t3, $t2, $t0
    ctx->r11 = ADD32(ctx->r10, ctx->r8);
    // 0x80077CC4: lh          $t8, 0x4($t3)
    ctx->r24 = MEM_H(ctx->r11, 0X4);
    // 0x80077CC8: addiu       $t2, $t5, 0x1
    ctx->r10 = ADD32(ctx->r13, 0X1);
    // 0x80077CCC: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x80077CD0: div         $zero, $t7, $t4
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r12)));
    // 0x80077CD4: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80077CD8: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x80077CDC: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80077CE0: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x80077CE4: bne         $t4, $zero, L_80077CF0
    if (ctx->r12 != 0) {
        // 0x80077CE8: nop
    
            goto L_80077CF0;
    }
    // 0x80077CE8: nop

    // 0x80077CEC: break       7
    do_break(2147974380);
L_80077CF0:
    // 0x80077CF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80077CF4: bne         $t4, $at, L_80077D08
    if (ctx->r12 != ctx->r1) {
        // 0x80077CF8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80077D08;
    }
    // 0x80077CF8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80077CFC: bne         $t7, $at, L_80077D08
    if (ctx->r15 != ctx->r1) {
        // 0x80077D00: nop
    
            goto L_80077D08;
    }
    // 0x80077D00: nop

    // 0x80077D04: break       6
    do_break(2147974404);
L_80077D08:
    // 0x80077D08: addu        $t8, $t0, $t3
    ctx->r24 = ADD32(ctx->r8, ctx->r11);
    // 0x80077D0C: mflo        $t6
    ctx->r14 = lo;
    // 0x80077D10: addu        $t9, $t1, $t6
    ctx->r25 = ADD32(ctx->r9, ctx->r14);
    // 0x80077D14: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x80077D18: lbu         $t7, 0x0($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X0);
    // 0x80077D1C: nop

    // 0x80077D20: bne         $t7, $zero, L_80077BF4
    if (ctx->r15 != 0) {
        // 0x80077D24: nop
    
            goto L_80077BF4;
    }
    // 0x80077D24: nop

L_80077D28:
    // 0x80077D28: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80077D2C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80077D30: jr          $ra
    // 0x80077D34: nop

    return;
    // 0x80077D34: nop

;}
RECOMP_FUNC void func_80077D38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077D38: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80077D3C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80077D40: bne         $t6, $zero, L_80077D50
    if (ctx->r14 != 0) {
        // 0x80077D44: andi        $a1, $a1, 0xFF
        ctx->r5 = ctx->r5 & 0XFF;
            goto L_80077D50;
    }
    // 0x80077D44: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80077D48: b           L_80077D80
    // 0x80077D4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80077D80;
    // 0x80077D4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80077D50:
    // 0x80077D50: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80077D54: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x80077D58: lbu         $t7, 0x2CD0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X2CD0);
    // 0x80077D5C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x80077D60: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80077D64: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    // 0x80077D68: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x80077D6C: lh          $t0, 0x4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X4);
    // 0x80077D70: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80077D74: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x80077D78: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
    // 0x80077D7C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_80077D80:
    // 0x80077D80: jr          $ra
    // 0x80077D84: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80077D84: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
