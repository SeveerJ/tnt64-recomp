#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800AA134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA134: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800AA138: lw          $t6, 0x7B00($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7B00);
    // 0x800AA13C: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x800AA140: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800AA144: jr          $ra
    // 0x800AA148: lw          $v0, 0x4($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X4);
    return;
    // 0x800AA148: lw          $v0, 0x4($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X4);
;}
RECOMP_FUNC void func_800AA14C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA14C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800AA150: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AA154: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800AA158: bltz        $a0, L_800AA17C
    if (SIGNED(ctx->r4) < 0) {
        // 0x800AA15C: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_800AA17C;
    }
    // 0x800AA15C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800AA160: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800AA164: lw          $t6, -0x69F8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X69F8);
    // 0x800AA168: sll         $t7, $a3, 4
    ctx->r15 = S32(ctx->r7 << 4);
    // 0x800AA16C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800AA170: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800AA174: bne         $at, $zero, L_800AA184
    if (ctx->r1 != 0) {
        // 0x800AA178: addiu       $a1, $sp, 0x48
        ctx->r5 = ADD32(ctx->r29, 0X48);
            goto L_800AA184;
    }
    // 0x800AA178: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
L_800AA17C:
    // 0x800AA17C: b           L_800AA3C8
    // 0x800AA180: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800AA3C8;
    // 0x800AA180: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800AA184:
    // 0x800AA184: lw          $t8, -0x6A00($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6A00);
    // 0x800AA188: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x800AA18C: sw          $a3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r7;
    // 0x800AA190: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x800AA194: jal         0x800ABFF0
    // 0x800AA198: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_800ABFF0(rdram, ctx);
        goto after_0;
    // 0x800AA198: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x800AA19C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800AA1A0: lw          $t9, 0x7B04($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7B04);
    // 0x800AA1A4: lh          $t0, 0x48($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X48);
    // 0x800AA1A8: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x800AA1AC: beq         $t9, $zero, L_800AA288
    if (ctx->r25 == 0) {
        // 0x800AA1B0: sll         $t1, $t0, 2
        ctx->r9 = S32(ctx->r8 << 2);
            goto L_800AA288;
    }
    // 0x800AA1B0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800AA1B4: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x800AA1B8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800AA1BC: lw          $t2, 0x7B70($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7B70);
    // 0x800AA1C0: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x800AA1C4: jal         0x8007E03C
    // 0x800AA1C8: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x800AA1C8: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    after_1:
    // 0x800AA1CC: lh          $t6, 0x48($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X48);
    // 0x800AA1D0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800AA1D4: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x800AA1D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AA1DC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800AA1E0: lw          $t4, -0x69FC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X69FC);
    // 0x800AA1E4: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x800AA1E8: lw          $t8, 0x7B70($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7B70);
    // 0x800AA1EC: lh          $t9, 0x4A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4A);
    // 0x800AA1F0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800AA1F4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x800AA1F8: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x800AA1FC: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x800AA200: addu        $a2, $t8, $v0
    ctx->r6 = ADD32(ctx->r24, ctx->r2);
    // 0x800AA204: jal         0x800A9F9C
    // 0x800AA208: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_800A9F9C(rdram, ctx);
        goto after_2;
    // 0x800AA208: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_2:
    // 0x800AA20C: lh          $a0, 0x48($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X48);
    // 0x800AA210: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800AA214: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x800AA218: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x800AA21C: lw          $v1, 0x7B08($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7B08);
    // 0x800AA220: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800AA224: beq         $v1, $zero, L_800AA240
    if (ctx->r3 == 0) {
        // 0x800AA228: nop
    
            goto L_800AA240;
    }
    // 0x800AA228: nop

    // 0x800AA22C: jalr        $v1
    // 0x800AA230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_3;
    // 0x800AA230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800AA234: lh          $a0, 0x48($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X48);
    // 0x800AA238: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x800AA23C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
L_800AA240:
    // 0x800AA240: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800AA244: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800AA248: lw          $v0, 0x7B3C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7B3C);
    // 0x800AA24C: beql        $v0, $zero, L_800AA260
    if (ctx->r2 == 0) {
        // 0x800AA250: addiu       $t2, $zero, -0x1
        ctx->r10 = ADD32(0, -0X1);
            goto L_800AA260;
    }
    goto skip_0;
    // 0x800AA250: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    skip_0:
    // 0x800AA254: jalr        $v0
    // 0x800AA258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x800AA258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800AA25C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
L_800AA260:
    // 0x800AA260: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x800AA264: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800AA268: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x800AA26C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800AA270: lw          $t3, 0x7B00($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7B00);
    // 0x800AA274: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x800AA278: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800AA27C: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x800AA280: b           L_800AA3C8
    // 0x800AA284: sw          $s0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r16;
        goto L_800AA3C8;
    // 0x800AA284: sw          $s0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r16;
L_800AA288:
    // 0x800AA288: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800AA28C: lw          $t9, 0x7B00($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7B00);
    // 0x800AA290: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x800AA294: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x800AA298: addu        $v1, $t9, $t8
    ctx->r3 = ADD32(ctx->r25, ctx->r24);
    // 0x800AA29C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x800AA2A0: lh          $t6, 0x48($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X48);
    // 0x800AA2A4: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800AA2A8: beq         $a0, $zero, L_800AA2F4
    if (ctx->r4 == 0) {
        // 0x800AA2AC: sll         $t7, $t6, 2
        ctx->r15 = S32(ctx->r14 << 2);
            goto L_800AA2F4;
    }
    // 0x800AA2AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AA2B0: addiu       $t0, $a0, 0x1
    ctx->r8 = ADD32(ctx->r4, 0X1);
    // 0x800AA2B4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x800AA2B8: lh          $t1, 0x48($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X48);
    // 0x800AA2BC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800AA2C0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800AA2C4: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x800AA2C8: lw          $v0, 0x7B3C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7B3C);
    // 0x800AA2CC: beq         $v0, $zero, L_800AA2DC
    if (ctx->r2 == 0) {
        // 0x800AA2D0: nop
    
            goto L_800AA2DC;
    }
    // 0x800AA2D0: nop

    // 0x800AA2D4: jalr        $v0
    // 0x800AA2D8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x800AA2D8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    after_5:
L_800AA2DC:
    // 0x800AA2DC: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x800AA2E0: lw          $t4, 0x7B00($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7B00);
    // 0x800AA2E4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800AA2E8: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x800AA2EC: b           L_800AA3C8
    // 0x800AA2F0: lw          $v0, 0x4($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X4);
        goto L_800AA3C8;
    // 0x800AA2F0: lw          $v0, 0x4($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X4);
L_800AA2F4:
    // 0x800AA2F4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800AA2F8: lw          $t9, 0x7B70($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7B70);
    // 0x800AA2FC: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x800AA300: jal         0x8007E03C
    // 0x800AA304: addu        $a0, $t9, $t8
    ctx->r4 = ADD32(ctx->r25, ctx->r24);
    func_8007E03C(rdram, ctx);
        goto after_6;
    // 0x800AA304: addu        $a0, $t9, $t8
    ctx->r4 = ADD32(ctx->r25, ctx->r24);
    after_6:
    // 0x800AA308: lh          $t2, 0x48($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X48);
    // 0x800AA30C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800AA310: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800AA314: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800AA318: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x800AA31C: lw          $t0, -0x69FC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X69FC);
    // 0x800AA320: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800AA324: lw          $t3, 0x7B70($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7B70);
    // 0x800AA328: lh          $t5, 0x4A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X4A);
    // 0x800AA32C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800AA330: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x800AA334: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x800AA338: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x800AA33C: addu        $a2, $t3, $v0
    ctx->r6 = ADD32(ctx->r11, ctx->r2);
    // 0x800AA340: jal         0x800A9F9C
    // 0x800AA344: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_800A9F9C(rdram, ctx);
        goto after_7;
    // 0x800AA344: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_7:
    // 0x800AA348: lh          $a0, 0x48($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X48);
    // 0x800AA34C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800AA350: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800AA354: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x800AA358: lw          $v1, 0x7B08($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7B08);
    // 0x800AA35C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800AA360: beq         $v1, $zero, L_800AA37C
    if (ctx->r3 == 0) {
        // 0x800AA364: nop
    
            goto L_800AA37C;
    }
    // 0x800AA364: nop

    // 0x800AA368: jalr        $v1
    // 0x800AA36C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_8;
    // 0x800AA36C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x800AA370: lh          $a0, 0x48($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X48);
    // 0x800AA374: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800AA378: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_800AA37C:
    // 0x800AA37C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800AA380: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800AA384: lw          $v0, 0x7B3C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7B3C);
    // 0x800AA388: beql        $v0, $zero, L_800AA39C
    if (ctx->r2 == 0) {
        // 0x800AA38C: lw          $t9, 0x60($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X60);
            goto L_800AA39C;
    }
    goto skip_1;
    // 0x800AA38C: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    skip_1:
    // 0x800AA390: jalr        $v0
    // 0x800AA394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x800AA394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x800AA398: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
L_800AA39C:
    // 0x800AA39C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800AA3A0: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800AA3A4: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x800AA3A8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800AA3AC: lw          $t0, 0x7B00($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7B00);
    // 0x800AA3B0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800AA3B4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800AA3B8: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800AA3BC: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x800AA3C0: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x800AA3C4: sw          $s0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r16;
L_800AA3C8:
    // 0x800AA3C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800AA3CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800AA3D0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x800AA3D4: jr          $ra
    // 0x800AA3D8: nop

    return;
    // 0x800AA3D8: nop

;}
RECOMP_FUNC void func_800AA3DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA3DC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800AA3E0: lw          $t6, 0x7B00($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7B00);
    // 0x800AA3E4: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x800AA3E8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800AA3EC: jr          $ra
    // 0x800AA3F0: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    return;
    // 0x800AA3F0: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
;}
RECOMP_FUNC void func_800AA3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA3F4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800AA3F8: addiu       $a1, $a1, 0x7B00
    ctx->r5 = ADD32(ctx->r5, 0X7B00);
    // 0x800AA3FC: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x800AA400: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800AA404: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x800AA408: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA40C: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x800AA410: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800AA414: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800AA418: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800AA41C: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x800AA420: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x800AA424: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x800AA428: beql        $t0, $zero, L_800AA43C
    if (ctx->r8 == 0) {
        // 0x800AA42C: lw          $a0, 0x4($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X4);
            goto L_800AA43C;
    }
    goto skip_0;
    // 0x800AA42C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    skip_0:
    // 0x800AA430: b           L_800AA460
    // 0x800AA434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800AA460;
    // 0x800AA434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800AA438: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
L_800AA43C:
    // 0x800AA43C: jal         0x8007E328
    // 0x800AA440: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x800AA440: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x800AA444: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800AA448: addiu       $a1, $a1, 0x7B00
    ctx->r5 = ADD32(ctx->r5, 0X7B00);
    // 0x800AA44C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA450: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x800AA454: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800AA458: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x800AA45C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
L_800AA460:
    // 0x800AA460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AA464: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800AA468: jr          $ra
    // 0x800AA46C: nop

    return;
    // 0x800AA46C: nop

;}
RECOMP_FUNC void func_800AA470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA470: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800AA474: lw          $t6, 0x7B00($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7B00);
    // 0x800AA478: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800AA47C: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x800AA480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA484: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800AA488: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800AA48C: beql        $t8, $zero, L_800AA508
    if (ctx->r24 == 0) {
        // 0x800AA490: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800AA508;
    }
    goto skip_0;
    // 0x800AA490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800AA494: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x800AA498: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800AA49C: jal         0x800AA038
    // 0x800AA4A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800AA038(rdram, ctx);
        goto after_0;
    // 0x800AA4A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800AA4A4: sltiu       $at, $v0, 0x7
    ctx->r1 = ctx->r2 < 0X7 ? 1 : 0;
    // 0x800AA4A8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800AA4AC: beq         $at, $zero, L_800AA504
    if (ctx->r1 == 0) {
        // 0x800AA4B0: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_800AA504;
    }
    // 0x800AA4B0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA4B4: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x800AA4B8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800AA4BC: addu        $at, $at, $t9
    gpr jr_addend_800AA4C4 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800AA4C0: lw          $t9, 0x1128($at)
    ctx->r25 = ADD32(ctx->r1, 0X1128);
    // 0x800AA4C4: jr          $t9
    // 0x800AA4C8: nop

    switch (jr_addend_800AA4C4 >> 2) {
        case 0: goto L_800AA4CC; break;
        case 1: goto L_800AA4CC; break;
        case 2: goto L_800AA4DC; break;
        case 3: goto L_800AA4CC; break;
        case 4: goto L_800AA4CC; break;
        case 5: goto L_800AA4EC; break;
        case 6: goto L_800AA4FC; break;
        default: switch_error(__func__, 0x800AA4C4, 0x800E1128);
    }
    // 0x800AA4C8: nop

L_800AA4CC:
    // 0x800AA4CC: jal         0x800AA3F4
    // 0x800AA4D0: nop

    func_800AA3F4(rdram, ctx);
        goto after_1;
    // 0x800AA4D0: nop

    after_1:
    // 0x800AA4D4: b           L_800AA508
    // 0x800AA4D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800AA508;
    // 0x800AA4D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800AA4DC:
    // 0x800AA4DC: jal         0x800AA874
    // 0x800AA4E0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800AA874(rdram, ctx);
        goto after_2;
    // 0x800AA4E0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x800AA4E4: b           L_800AA508
    // 0x800AA4E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800AA508;
    // 0x800AA4E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800AA4EC:
    // 0x800AA4EC: jal         0x800AB5E0
    // 0x800AA4F0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800AB5E0(rdram, ctx);
        goto after_3;
    // 0x800AA4F0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_3:
    // 0x800AA4F4: b           L_800AA508
    // 0x800AA4F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800AA508;
    // 0x800AA4F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800AA4FC:
    // 0x800AA4FC: jal         0x800AB934
    // 0x800AA500: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800AB934(rdram, ctx);
        goto after_4;
    // 0x800AA500: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_4:
L_800AA504:
    // 0x800AA504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800AA508:
    // 0x800AA508: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800AA50C: jr          $ra
    // 0x800AA510: nop

    return;
    // 0x800AA510: nop

;}
RECOMP_FUNC void func_800AA514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA514: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800AA518: lw          $v1, -0x69F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X69F8);
    // 0x800AA51C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AA520: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800AA524: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AA528: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800AA52C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800AA530: blez        $v1, L_800AA590
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800AA534: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_800AA590;
    }
    // 0x800AA534: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800AA538: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x800AA53C: addiu       $s1, $s1, 0x7B00
    ctx->r17 = ADD32(ctx->r17, 0X7B00);
    // 0x800AA540: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800AA544:
    // 0x800AA544: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x800AA548: addu        $v0, $t6, $s0
    ctx->r2 = ADD32(ctx->r14, ctx->r16);
    // 0x800AA54C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800AA550: beql        $t7, $zero, L_800AA584
    if (ctx->r15 == 0) {
        // 0x800AA554: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800AA584;
    }
    goto skip_0;
    // 0x800AA554: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x800AA558: jal         0x8007E328
    // 0x800AA55C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x800AA55C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    after_0:
    // 0x800AA560: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x800AA564: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800AA568: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x800AA56C: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x800AA570: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x800AA574: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x800AA578: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x800AA57C: lw          $v1, -0x69F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X69F8);
    // 0x800AA580: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800AA584:
    // 0x800AA584: slt         $at, $s2, $v1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800AA588: bne         $at, $zero, L_800AA544
    if (ctx->r1 != 0) {
        // 0x800AA58C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_800AA544;
    }
    // 0x800AA58C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_800AA590:
    // 0x800AA590: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800AA594: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800AA598: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA59C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800AA5A0: jr          $ra
    // 0x800AA5A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800AA5A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800AA5A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA5A8: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x800AA5AC: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x800AA5B0: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x800AA5B4: jr          $ra
    // 0x800AA5B8: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
    return;
    // 0x800AA5B8: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void alHeapCheck(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA5BC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800AA5C0: jr          $ra
    // 0x800AA5C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800AA5C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800AA5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA5C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800AA5CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA5D0: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x800AA5D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AA5D8: bne         $a1, $at, L_800AA5F0
    if (ctx->r5 != ctx->r1) {
        // 0x800AA5DC: nop
    
            goto L_800AA5F0;
    }
    // 0x800AA5DC: nop

    // 0x800AA5E0: jal         0x8007E328
    // 0x800AA5E4: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x800AA5E4: nop

    after_0:
    // 0x800AA5E8: b           L_800AA5FC
    // 0x800AA5EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800AA5FC;
    // 0x800AA5EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800AA5F0:
    // 0x800AA5F0: jal         0x800AA3F4
    // 0x800AA5F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800AA3F4(rdram, ctx);
        goto after_1;
    // 0x800AA5F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x800AA5F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800AA5FC:
    // 0x800AA5FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800AA600: jr          $ra
    // 0x800AA604: nop

    return;
    // 0x800AA604: nop

;}
RECOMP_FUNC void func_800AA608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA608: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x800AA60C: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x800AA610: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x800AA614: addu        $t0, $t9, $a0
    ctx->r8 = ADD32(ctx->r25, ctx->r4);
    // 0x800AA618: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x800AA61C: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x800AA620: sw          $t8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r24;
    // 0x800AA624: jr          $ra
    // 0x800AA628: sw          $t1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r9;
    return;
    // 0x800AA628: sw          $t1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_800AA62C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA62C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800AA630: jr          $ra
    // 0x800AA634: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800AA634: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800AA638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA638: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800AA63C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA640: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x800AA644: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AA648: bne         $a1, $at, L_800AA660
    if (ctx->r5 != ctx->r1) {
        // 0x800AA64C: nop
    
            goto L_800AA660;
    }
    // 0x800AA64C: nop

    // 0x800AA650: jal         0x8007E328
    // 0x800AA654: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x800AA654: nop

    after_0:
    // 0x800AA658: b           L_800AA66C
    // 0x800AA65C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800AA66C;
    // 0x800AA65C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800AA660:
    // 0x800AA660: jal         0x800AA3F4
    // 0x800AA664: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800AA3F4(rdram, ctx);
        goto after_1;
    // 0x800AA664: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x800AA668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800AA66C:
    // 0x800AA66C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800AA670: jr          $ra
    // 0x800AA674: nop

    return;
    // 0x800AA674: nop

;}
RECOMP_FUNC void func_800AA678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA678: lw          $t6, 0x1C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1C);
    // 0x800AA67C: lw          $t9, 0x20($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X20);
    // 0x800AA680: lw          $t2, 0x2C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X2C);
    // 0x800AA684: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x800AA688: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x800AA68C: addu        $t0, $t9, $a0
    ctx->r8 = ADD32(ctx->r25, ctx->r4);
    // 0x800AA690: addu        $t3, $t2, $a0
    ctx->r11 = ADD32(ctx->r10, ctx->r4);
    // 0x800AA694: addiu       $v0, $t7, 0x10
    ctx->r2 = ADD32(ctx->r15, 0X10);
    // 0x800AA698: addiu       $t1, $t0, 0x10
    ctx->r9 = ADD32(ctx->r8, 0X10);
    // 0x800AA69C: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x800AA6A0: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x800AA6A4: sw          $t1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r9;
    // 0x800AA6A8: beq         $v1, $zero, L_800AA730
    if (ctx->r3 == 0) {
        // 0x800AA6AC: sw          $t4, 0x2C($a0)
        MEM_W(0X2C, ctx->r4) = ctx->r12;
            goto L_800AA730;
    }
    // 0x800AA6AC: sw          $t4, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r12;
    // 0x800AA6B0: andi        $a2, $v1, 0x3
    ctx->r6 = ctx->r3 & 0X3;
    // 0x800AA6B4: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x800AA6B8: beq         $a2, $zero, L_800AA6E4
    if (ctx->r6 == 0) {
        // 0x800AA6BC: addu        $a1, $a2, $v1
        ctx->r5 = ADD32(ctx->r6, ctx->r3);
            goto L_800AA6E4;
    }
    // 0x800AA6BC: addu        $a1, $a2, $v1
    ctx->r5 = ADD32(ctx->r6, ctx->r3);
L_800AA6C0:
    // 0x800AA6C0: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x800AA6C4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800AA6C8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800AA6CC: addu        $t6, $t5, $a0
    ctx->r14 = ADD32(ctx->r13, ctx->r4);
    // 0x800AA6D0: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x800AA6D4: bne         $a1, $v1, L_800AA6C0
    if (ctx->r5 != ctx->r3) {
        // 0x800AA6D8: sw          $t7, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r15;
            goto L_800AA6C0;
    }
    // 0x800AA6D8: sw          $t7, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r15;
    // 0x800AA6DC: beql        $v1, $zero, L_800AA734
    if (ctx->r3 == 0) {
        // 0x800AA6E0: lw          $t0, 0x28($a0)
        ctx->r8 = MEM_W(ctx->r4, 0X28);
            goto L_800AA734;
    }
    goto skip_0;
    // 0x800AA6E0: lw          $t0, 0x28($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X28);
    skip_0:
L_800AA6E4:
    // 0x800AA6E4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800AA6E8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x800AA6EC: lw          $t4, 0x8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X8);
    // 0x800AA6F0: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x800AA6F4: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x800AA6F8: addiu       $t0, $t9, 0x10
    ctx->r8 = ADD32(ctx->r25, 0X10);
    // 0x800AA6FC: addu        $t2, $t1, $a0
    ctx->r10 = ADD32(ctx->r9, ctx->r4);
    // 0x800AA700: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x800AA704: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x800AA708: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x800AA70C: addiu       $t6, $t5, 0x10
    ctx->r14 = ADD32(ctx->r13, 0X10);
    // 0x800AA710: addiu       $t3, $t2, 0x10
    ctx->r11 = ADD32(ctx->r10, 0X10);
    // 0x800AA714: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x800AA718: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x800AA71C: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
    // 0x800AA720: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x800AA724: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800AA728: bne         $v1, $zero, L_800AA6E4
    if (ctx->r3 != 0) {
        // 0x800AA72C: sw          $t0, -0x10($v0)
        MEM_W(-0X10, ctx->r2) = ctx->r8;
            goto L_800AA6E4;
    }
    // 0x800AA72C: sw          $t0, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->r8;
L_800AA730:
    // 0x800AA730: lw          $t0, 0x28($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X28);
L_800AA734:
    // 0x800AA734: beq         $t0, $zero, L_800AA85C
    if (ctx->r8 == 0) {
        // 0x800AA738: nop
    
            goto L_800AA85C;
    }
    // 0x800AA738: nop

    // 0x800AA73C: lw          $t1, 0x28($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X28);
    // 0x800AA740: addu        $t2, $t1, $a0
    ctx->r10 = ADD32(ctx->r9, ctx->r4);
    // 0x800AA744: addiu       $t3, $t2, 0x10
    ctx->r11 = ADD32(ctx->r10, 0X10);
    // 0x800AA748: sw          $t3, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r11;
    // 0x800AA74C: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x800AA750: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x800AA754: addiu       $t6, $t5, 0x10
    ctx->r14 = ADD32(ctx->r13, 0X10);
    // 0x800AA758: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
    // 0x800AA75C: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x800AA760: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x800AA764: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x800AA768: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x800AA76C: sw          $t9, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r25;
    // 0x800AA770: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x800AA774: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800AA778: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x800AA77C: beq         $v1, $zero, L_800AA85C
    if (ctx->r3 == 0) {
        // 0x800AA780: andi        $a2, $v1, 0x3
        ctx->r6 = ctx->r3 & 0X3;
            goto L_800AA85C;
    }
    // 0x800AA780: andi        $a2, $v1, 0x3
    ctx->r6 = ctx->r3 & 0X3;
    // 0x800AA784: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x800AA788: beq         $a2, $zero, L_800AA7C4
    if (ctx->r6 == 0) {
        // 0x800AA78C: addu        $a1, $a2, $v1
        ctx->r5 = ADD32(ctx->r6, ctx->r3);
            goto L_800AA7C4;
    }
    // 0x800AA78C: addu        $a1, $a2, $v1
    ctx->r5 = ADD32(ctx->r6, ctx->r3);
L_800AA790:
    // 0x800AA790: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x800AA794: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800AA798: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x800AA79C: bne         $at, $zero, L_800AA7B4
    if (ctx->r1 != 0) {
        // 0x800AA7A0: nop
    
            goto L_800AA7B4;
    }
    // 0x800AA7A0: nop

    // 0x800AA7A4: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x800AA7A8: addu        $t2, $t1, $a0
    ctx->r10 = ADD32(ctx->r9, ctx->r4);
    // 0x800AA7AC: addiu       $t3, $t2, 0x10
    ctx->r11 = ADD32(ctx->r10, 0X10);
    // 0x800AA7B0: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
L_800AA7B4:
    // 0x800AA7B4: bne         $a1, $v1, L_800AA790
    if (ctx->r5 != ctx->r3) {
        // 0x800AA7B8: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_800AA790;
    }
    // 0x800AA7B8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800AA7BC: beq         $v1, $zero, L_800AA85C
    if (ctx->r3 == 0) {
        // 0x800AA7C0: nop
    
            goto L_800AA85C;
    }
    // 0x800AA7C0: nop

L_800AA7C4:
    // 0x800AA7C4: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x800AA7C8: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x800AA7CC: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x800AA7D0: bnel        $at, $zero, L_800AA7EC
    if (ctx->r1 != 0) {
        // 0x800AA7D4: lw          $t8, 0x8($v0)
        ctx->r24 = MEM_W(ctx->r2, 0X8);
            goto L_800AA7EC;
    }
    goto skip_1;
    // 0x800AA7D4: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    skip_1:
    // 0x800AA7D8: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x800AA7DC: addu        $t6, $t5, $a0
    ctx->r14 = ADD32(ctx->r13, ctx->r4);
    // 0x800AA7E0: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x800AA7E4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800AA7E8: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
L_800AA7EC:
    // 0x800AA7EC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800AA7F0: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x800AA7F4: bnel        $at, $zero, L_800AA810
    if (ctx->r1 != 0) {
        // 0x800AA7F8: lw          $t2, 0x8($v0)
        ctx->r10 = MEM_W(ctx->r2, 0X8);
            goto L_800AA810;
    }
    goto skip_2;
    // 0x800AA7F8: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    skip_2:
    // 0x800AA7FC: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x800AA800: addu        $t0, $t9, $a0
    ctx->r8 = ADD32(ctx->r25, ctx->r4);
    // 0x800AA804: addiu       $t1, $t0, 0x10
    ctx->r9 = ADD32(ctx->r8, 0X10);
    // 0x800AA808: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x800AA80C: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
L_800AA810:
    // 0x800AA810: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800AA814: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x800AA818: bnel        $at, $zero, L_800AA834
    if (ctx->r1 != 0) {
        // 0x800AA81C: lw          $t6, 0x8($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X8);
            goto L_800AA834;
    }
    goto skip_3;
    // 0x800AA81C: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    skip_3:
    // 0x800AA820: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x800AA824: addu        $t4, $t3, $a0
    ctx->r12 = ADD32(ctx->r11, ctx->r4);
    // 0x800AA828: addiu       $t5, $t4, 0x10
    ctx->r13 = ADD32(ctx->r12, 0X10);
    // 0x800AA82C: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x800AA830: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
L_800AA834:
    // 0x800AA834: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800AA838: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x800AA83C: bne         $at, $zero, L_800AA854
    if (ctx->r1 != 0) {
        // 0x800AA840: nop
    
            goto L_800AA854;
    }
    // 0x800AA840: nop

    // 0x800AA844: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x800AA848: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x800AA84C: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x800AA850: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
L_800AA854:
    // 0x800AA854: bne         $v1, $zero, L_800AA7C4
    if (ctx->r3 != 0) {
        // 0x800AA858: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_800AA7C4;
    }
    // 0x800AA858: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_800AA85C:
    // 0x800AA85C: jr          $ra
    // 0x800AA860: nop

    return;
    // 0x800AA860: nop

;}
RECOMP_FUNC void func_800AA864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA864: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x800AA868: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x800AA86C: jr          $ra
    // 0x800AA870: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800AA870: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800AA874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800AA878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA87C: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x800AA880: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AA884: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800AA888: bnel        $a1, $at, L_800AA8A4
    if (ctx->r5 != ctx->r1) {
        // 0x800AA88C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_800AA8A4;
    }
    goto skip_0;
    // 0x800AA88C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    skip_0:
    // 0x800AA890: jal         0x8007E328
    // 0x800AA894: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x800AA894: nop

    after_0:
    // 0x800AA898: b           L_800AA8BC
    // 0x800AA89C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800AA8BC;
    // 0x800AA89C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AA8A0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_800AA8A4:
    // 0x800AA8A4: jal         0x800AA3DC
    // 0x800AA8A8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800AA3DC(rdram, ctx);
        goto after_1;
    // 0x800AA8A8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x800AA8AC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800AA8B0: jal         0x800AA3F4
    // 0x800AA8B4: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    func_800AA3F4(rdram, ctx);
        goto after_2;
    // 0x800AA8B4: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    after_2:
    // 0x800AA8B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800AA8BC:
    // 0x800AA8BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800AA8C0: jr          $ra
    // 0x800AA8C4: nop

    return;
    // 0x800AA8C4: nop

;}
RECOMP_FUNC void func_800AA8C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA8C8: jr          $ra
    // 0x800AA8CC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x800AA8CC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_800AA8D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA8D0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800AA8D4: jr          $ra
    // 0x800AA8D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800AA8D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800AA8DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA8DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800AA8E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA8E4: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x800AA8E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AA8EC: bne         $a1, $at, L_800AA904
    if (ctx->r5 != ctx->r1) {
        // 0x800AA8F0: nop
    
            goto L_800AA904;
    }
    // 0x800AA8F0: nop

    // 0x800AA8F4: jal         0x8007E328
    // 0x800AA8F8: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x800AA8F8: nop

    after_0:
    // 0x800AA8FC: b           L_800AA910
    // 0x800AA900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800AA910;
    // 0x800AA900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800AA904:
    // 0x800AA904: jal         0x800AA3F4
    // 0x800AA908: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800AA3F4(rdram, ctx);
        goto after_1;
    // 0x800AA908: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x800AA90C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800AA910:
    // 0x800AA910: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800AA914: jr          $ra
    // 0x800AA918: nop

    return;
    // 0x800AA918: nop

;}
RECOMP_FUNC void func_800AA91C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA91C: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x800AA920: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x800AA924: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x800AA928: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x800AA92C: jr          $ra
    // 0x800AA930: sw          $t8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r24;
    return;
    // 0x800AA930: sw          $t8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_800AA934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA934: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800AA938: jr          $ra
    // 0x800AA93C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800AA93C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800AA940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800AA944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA948: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x800AA94C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AA950: bne         $a1, $at, L_800AA968
    if (ctx->r5 != ctx->r1) {
        // 0x800AA954: nop
    
            goto L_800AA968;
    }
    // 0x800AA954: nop

    // 0x800AA958: jal         0x8007E328
    // 0x800AA95C: nop

    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x800AA95C: nop

    after_0:
    // 0x800AA960: b           L_800AA974
    // 0x800AA964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800AA974;
    // 0x800AA964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800AA968:
    // 0x800AA968: jal         0x800AA3F4
    // 0x800AA96C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800AA3F4(rdram, ctx);
        goto after_1;
    // 0x800AA96C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x800AA970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800AA974:
    // 0x800AA974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800AA978: jr          $ra
    // 0x800AA97C: nop

    return;
    // 0x800AA97C: nop

;}
RECOMP_FUNC void func_800AA980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800AA984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA988: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x800AA98C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800AA990: beql        $t6, $zero, L_800AAA34
    if (ctx->r14 == 0) {
        // 0x800AA994: lw          $t5, 0x30($a2)
        ctx->r13 = MEM_W(ctx->r6, 0X30);
            goto L_800AAA34;
    }
    goto skip_0;
    // 0x800AA994: lw          $t5, 0x30($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X30);
    skip_0:
    // 0x800AA998: lw          $t7, 0x28($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X28);
    // 0x800AA99C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x800AA9A0: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x800AA9A4: addiu       $v0, $t8, 0x10
    ctx->r2 = ADD32(ctx->r24, 0X10);
    // 0x800AA9A8: beq         $v1, $zero, L_800AAA30
    if (ctx->r3 == 0) {
        // 0x800AA9AC: sw          $v0, 0x28($a0)
        MEM_W(0X28, ctx->r4) = ctx->r2;
            goto L_800AAA30;
    }
    // 0x800AA9AC: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
    // 0x800AA9B0: andi        $a1, $v1, 0x3
    ctx->r5 = ctx->r3 & 0X3;
    // 0x800AA9B4: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x800AA9B8: beq         $a1, $zero, L_800AA9E4
    if (ctx->r5 == 0) {
        // 0x800AA9BC: addu        $a0, $a1, $v1
        ctx->r4 = ADD32(ctx->r5, ctx->r3);
            goto L_800AA9E4;
    }
    // 0x800AA9BC: addu        $a0, $a1, $v1
    ctx->r4 = ADD32(ctx->r5, ctx->r3);
L_800AA9C0:
    // 0x800AA9C0: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x800AA9C4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800AA9C8: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x800AA9CC: addu        $t1, $t0, $a2
    ctx->r9 = ADD32(ctx->r8, ctx->r6);
    // 0x800AA9D0: addiu       $t2, $t1, 0x10
    ctx->r10 = ADD32(ctx->r9, 0X10);
    // 0x800AA9D4: bne         $a0, $v1, L_800AA9C0
    if (ctx->r4 != ctx->r3) {
        // 0x800AA9D8: sw          $t2, -0x3C($v0)
        MEM_W(-0X3C, ctx->r2) = ctx->r10;
            goto L_800AA9C0;
    }
    // 0x800AA9D8: sw          $t2, -0x3C($v0)
    MEM_W(-0X3C, ctx->r2) = ctx->r10;
    // 0x800AA9DC: beql        $v1, $zero, L_800AAA34
    if (ctx->r3 == 0) {
        // 0x800AA9E0: lw          $t5, 0x30($a2)
        ctx->r13 = MEM_W(ctx->r6, 0X30);
            goto L_800AAA34;
    }
    goto skip_1;
    // 0x800AA9E0: lw          $t5, 0x30($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X30);
    skip_1:
L_800AA9E4:
    // 0x800AA9E4: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x800AA9E8: lw          $t6, 0x44($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X44);
    // 0x800AA9EC: lw          $t9, 0x84($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X84);
    // 0x800AA9F0: lw          $t2, 0xC4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC4);
    // 0x800AA9F4: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x800AA9F8: addiu       $t5, $t4, 0x10
    ctx->r13 = ADD32(ctx->r12, 0X10);
    // 0x800AA9FC: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x800AAA00: addu        $t0, $t9, $a2
    ctx->r8 = ADD32(ctx->r25, ctx->r6);
    // 0x800AAA04: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x800AAA08: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x800AAA0C: addiu       $t1, $t0, 0x10
    ctx->r9 = ADD32(ctx->r8, 0X10);
    // 0x800AAA10: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x800AAA14: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x800AAA18: sw          $t8, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r24;
    // 0x800AAA1C: sw          $t1, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r9;
    // 0x800AAA20: sw          $t4, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = ctx->r12;
    // 0x800AAA24: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x800AAA28: bne         $v1, $zero, L_800AA9E4
    if (ctx->r3 != 0) {
        // 0x800AAA2C: sw          $t5, -0xFC($v0)
        MEM_W(-0XFC, ctx->r2) = ctx->r13;
            goto L_800AA9E4;
    }
    // 0x800AAA2C: sw          $t5, -0xFC($v0)
    MEM_W(-0XFC, ctx->r2) = ctx->r13;
L_800AAA30:
    // 0x800AAA30: lw          $t5, 0x30($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X30);
L_800AAA34:
    // 0x800AAA34: beql        $t5, $zero, L_800AAA50
    if (ctx->r13 == 0) {
        // 0x800AAA38: lw          $t9, 0x2C($a2)
        ctx->r25 = MEM_W(ctx->r6, 0X2C);
            goto L_800AAA50;
    }
    goto skip_2;
    // 0x800AAA38: lw          $t9, 0x2C($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X2C);
    skip_2:
    // 0x800AAA3C: lw          $t6, 0x30($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X30);
    // 0x800AAA40: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x800AAA44: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x800AAA48: sw          $t8, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r24;
    // 0x800AAA4C: lw          $t9, 0x2C($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X2C);
L_800AAA50:
    // 0x800AAA50: beql        $t9, $zero, L_800AAA7C
    if (ctx->r25 == 0) {
        // 0x800AAA54: lw          $t3, 0x38($a2)
        ctx->r11 = MEM_W(ctx->r6, 0X38);
            goto L_800AAA7C;
    }
    goto skip_3;
    // 0x800AAA54: lw          $t3, 0x38($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X38);
    skip_3:
    // 0x800AAA58: lw          $t0, 0x2C($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X2C);
    // 0x800AAA5C: addiu       $a1, $a2, 0x10
    ctx->r5 = ADD32(ctx->r6, 0X10);
    // 0x800AAA60: addu        $t1, $t0, $a2
    ctx->r9 = ADD32(ctx->r8, ctx->r6);
    // 0x800AAA64: addiu       $a0, $t1, 0x10
    ctx->r4 = ADD32(ctx->r9, 0X10);
    // 0x800AAA68: sw          $a0, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r4;
    // 0x800AAA6C: jal         0x800ABAB8
    // 0x800AAA70: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800ABAB8(rdram, ctx);
        goto after_0;
    // 0x800AAA70: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x800AAA74: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800AAA78: lw          $t3, 0x38($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X38);
L_800AAA7C:
    // 0x800AAA7C: beql        $t3, $zero, L_800AAA98
    if (ctx->r11 == 0) {
        // 0x800AAA80: lw          $t7, 0x3C($a2)
        ctx->r15 = MEM_W(ctx->r6, 0X3C);
            goto L_800AAA98;
    }
    goto skip_4;
    // 0x800AAA80: lw          $t7, 0x3C($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X3C);
    skip_4:
    // 0x800AAA84: lw          $t4, 0x38($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X38);
    // 0x800AAA88: addu        $t5, $t4, $a2
    ctx->r13 = ADD32(ctx->r12, ctx->r6);
    // 0x800AAA8C: addiu       $t6, $t5, 0x10
    ctx->r14 = ADD32(ctx->r13, 0X10);
    // 0x800AAA90: sw          $t6, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r14;
    // 0x800AAA94: lw          $t7, 0x3C($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X3C);
L_800AAA98:
    // 0x800AAA98: beql        $t7, $zero, L_800AAAB4
    if (ctx->r15 == 0) {
        // 0x800AAA9C: lw          $t1, 0x40($a2)
        ctx->r9 = MEM_W(ctx->r6, 0X40);
            goto L_800AAAB4;
    }
    goto skip_5;
    // 0x800AAA9C: lw          $t1, 0x40($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X40);
    skip_5:
    // 0x800AAAA0: lw          $t8, 0x3C($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X3C);
    // 0x800AAAA4: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x800AAAA8: addiu       $t0, $t9, 0x10
    ctx->r8 = ADD32(ctx->r25, 0X10);
    // 0x800AAAAC: sw          $t0, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->r8;
    // 0x800AAAB0: lw          $t1, 0x40($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X40);
L_800AAAB4:
    // 0x800AAAB4: beql        $t1, $zero, L_800AAAD0
    if (ctx->r9 == 0) {
        // 0x800AAAB8: lw          $t5, 0x44($a2)
        ctx->r13 = MEM_W(ctx->r6, 0X44);
            goto L_800AAAD0;
    }
    goto skip_6;
    // 0x800AAAB8: lw          $t5, 0x44($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X44);
    skip_6:
    // 0x800AAABC: lw          $t2, 0x40($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X40);
    // 0x800AAAC0: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x800AAAC4: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x800AAAC8: sw          $t4, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->r12;
    // 0x800AAACC: lw          $t5, 0x44($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X44);
L_800AAAD0:
    // 0x800AAAD0: beql        $t5, $zero, L_800AAAEC
    if (ctx->r13 == 0) {
        // 0x800AAAD4: lw          $t9, 0x48($a2)
        ctx->r25 = MEM_W(ctx->r6, 0X48);
            goto L_800AAAEC;
    }
    goto skip_7;
    // 0x800AAAD4: lw          $t9, 0x48($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X48);
    skip_7:
    // 0x800AAAD8: lw          $t6, 0x44($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X44);
    // 0x800AAADC: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x800AAAE0: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x800AAAE4: sw          $t8, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->r24;
    // 0x800AAAE8: lw          $t9, 0x48($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X48);
L_800AAAEC:
    // 0x800AAAEC: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x800AAAF0: addu        $t0, $t9, $a2
    ctx->r8 = ADD32(ctx->r25, ctx->r6);
    // 0x800AAAF4: addiu       $t1, $t0, 0x10
    ctx->r9 = ADD32(ctx->r8, 0X10);
    // 0x800AAAF8: sw          $t1, 0x48($a2)
    MEM_W(0X48, ctx->r6) = ctx->r9;
    // 0x800AAAFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AAB00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800AAB04: jr          $ra
    // 0x800AAB08: nop

    return;
    // 0x800AAB08: nop

;}
RECOMP_FUNC void func_800AAB0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AAB0C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800AAB10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AAB14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800AAB18: lw          $t0, 0x10($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X10);
    // 0x800AAB1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800AAB20: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x800AAB24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800AAB28: blez        $t0, L_800AABE0
    if (SIGNED(ctx->r8) <= 0) {
        // 0x800AAB2C: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_800AABE0;
    }
    // 0x800AAB2C: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_800AAB30:
    // 0x800AAB30: lbu         $a0, 0x3($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X3);
    // 0x800AAB34: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800AAB38: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x800AAB3C: beq         $a0, $zero, L_800AABD8
    if (ctx->r4 == 0) {
        // 0x800AAB40: addiu       $a3, $a3, 0x188
        ctx->r7 = ADD32(ctx->r7, 0X188);
            goto L_800AABD8;
    }
    // 0x800AAB40: addiu       $a3, $a3, 0x188
    ctx->r7 = ADD32(ctx->r7, 0X188);
    // 0x800AAB44: andi        $a2, $a0, 0x3
    ctx->r6 = ctx->r4 & 0X3;
    // 0x800AAB48: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x800AAB4C: beq         $a2, $zero, L_800AAB7C
    if (ctx->r6 == 0) {
        // 0x800AAB50: addu        $a1, $a2, $a0
        ctx->r5 = ADD32(ctx->r6, ctx->r4);
            goto L_800AAB7C;
    }
    // 0x800AAB50: addu        $a1, $a2, $a0
    ctx->r5 = ADD32(ctx->r6, ctx->r4);
L_800AAB54:
    // 0x800AAB54: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800AAB58: lw          $t8, 0x28($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X28);
    // 0x800AAB5C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x800AAB60: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x800AAB64: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AAB68: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800AAB6C: bne         $a1, $a0, L_800AAB54
    if (ctx->r5 != ctx->r4) {
        // 0x800AAB70: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800AAB54;
    }
    // 0x800AAB70: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800AAB74: beq         $a0, $zero, L_800AABD8
    if (ctx->r4 == 0) {
        // 0x800AAB78: nop
    
            goto L_800AABD8;
    }
    // 0x800AAB78: nop

L_800AAB7C:
    // 0x800AAB7C: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x800AAB80: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x800AAB84: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x800AAB88: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x800AAB8C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800AAB90: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800AAB94: lw          $t4, 0x28($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X28);
    // 0x800AAB98: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x800AAB9C: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x800AABA0: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x800AABA4: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x800AABA8: lw          $t8, 0x28($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X28);
    // 0x800AABAC: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x800AABB0: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x800AABB4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AABB8: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    // 0x800AABBC: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x800AABC0: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x800AABC4: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x800AABC8: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800AABCC: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
    // 0x800AABD0: bne         $a0, $zero, L_800AAB7C
    if (ctx->r4 != 0) {
        // 0x800AABD4: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_800AAB7C;
    }
    // 0x800AABD4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_800AABD8:
    // 0x800AABD8: bne         $t1, $t0, L_800AAB30
    if (ctx->r9 != ctx->r8) {
        // 0x800AABDC: addiu       $v1, $v1, 0x40
        ctx->r3 = ADD32(ctx->r3, 0X40);
            goto L_800AAB30;
    }
    // 0x800AABDC: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
L_800AABE0:
    // 0x800AABE0: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x800AABE4: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x800AABE8: beql        $t3, $a0, L_800AAC0C
    if (ctx->r11 == ctx->r4) {
        // 0x800AABEC: sw          $zero, 0x34($s0)
        MEM_W(0X34, ctx->r16) = 0;
            goto L_800AAC0C;
    }
    goto skip_0;
    // 0x800AABEC: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    skip_0:
    // 0x800AABF0: jal         0x800AA14C
    // 0x800AABF4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    func_800AA14C(rdram, ctx);
        goto after_0;
    // 0x800AABF4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_0:
    // 0x800AABF8: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x800AABFC: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x800AAC00: b           L_800AAC0C
    // 0x800AAC04: addiu       $a3, $a3, 0x80
    ctx->r7 = ADD32(ctx->r7, 0X80);
        goto L_800AAC0C;
    // 0x800AAC04: addiu       $a3, $a3, 0x80
    ctx->r7 = ADD32(ctx->r7, 0X80);
    // 0x800AAC08: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
L_800AAC0C:
    // 0x800AAC0C: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x800AAC10: beql        $a0, $zero, L_800AAC60
    if (ctx->r4 == 0) {
        // 0x800AAC14: lw          $v0, 0x3C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X3C);
            goto L_800AAC60;
    }
    goto skip_1;
    // 0x800AAC14: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    skip_1:
    // 0x800AAC18: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x800AAC1C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800AAC20: beql        $t1, $zero, L_800AAC60
    if (ctx->r9 == 0) {
        // 0x800AAC24: lw          $v0, 0x3C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X3C);
            goto L_800AAC60;
    }
    goto skip_2;
    // 0x800AAC24: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    skip_2:
L_800AAC28:
    // 0x800AAC28: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x800AAC2C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x800AAC30: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x800AAC34: jal         0x800AA14C
    // 0x800AAC38: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    func_800AA14C(rdram, ctx);
        goto after_1;
    // 0x800AAC38: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_1:
    // 0x800AAC3C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800AAC40: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x800AAC44: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x800AAC48: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x800AAC4C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800AAC50: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x800AAC54: bne         $t1, $zero, L_800AAC28
    if (ctx->r9 != 0) {
        // 0x800AAC58: addiu       $a3, $a3, 0x20
        ctx->r7 = ADD32(ctx->r7, 0X20);
            goto L_800AAC28;
    }
    // 0x800AAC58: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x800AAC5C: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
L_800AAC60:
    // 0x800AAC60: beql        $v0, $zero, L_800AADE0
    if (ctx->r2 == 0) {
        // 0x800AAC64: lw          $v0, 0x40($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X40);
            goto L_800AADE0;
    }
    goto skip_3;
    // 0x800AAC64: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    skip_3:
    // 0x800AAC68: lw          $t1, 0x18($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X18);
    // 0x800AAC6C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x800AAC70: beql        $t1, $zero, L_800AADE0
    if (ctx->r9 == 0) {
        // 0x800AAC74: lw          $v0, 0x40($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X40);
            goto L_800AADE0;
    }
    goto skip_4;
    // 0x800AAC74: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    skip_4:
L_800AAC78:
    // 0x800AAC78: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x800AAC7C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x800AAC80: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x800AAC84: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x800AAC88: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x800AAC8C: jal         0x800AA14C
    // 0x800AAC90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800AA14C(rdram, ctx);
        goto after_2;
    // 0x800AAC90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800AAC94: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAC98: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800AAC9C: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x800AACA0: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x800AACA4: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x800AACA8: lw          $t8, 0x28($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X28);
    // 0x800AACAC: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x800AACB0: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x800AACB4: beql        $t8, $zero, L_800AACD4
    if (ctx->r24 == 0) {
        // 0x800AACB8: lw          $t2, 0x0($t0)
        ctx->r10 = MEM_W(ctx->r8, 0X0);
            goto L_800AACD4;
    }
    goto skip_5;
    // 0x800AACB8: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    skip_5:
    // 0x800AACBC: lw          $t5, 0x24($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X24);
    // 0x800AACC0: addiu       $a3, $a3, 0x7
    ctx->r7 = ADD32(ctx->r7, 0X7);
    // 0x800AACC4: and         $t9, $a3, $at
    ctx->r25 = ctx->r7 & ctx->r1;
    // 0x800AACC8: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x800AACCC: addu        $a3, $t9, $t6
    ctx->r7 = ADD32(ctx->r25, ctx->r14);
    // 0x800AACD0: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
L_800AACD4:
    // 0x800AACD4: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    // 0x800AACD8: lw          $v0, 0x2C($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X2C);
    // 0x800AACDC: beq         $a0, $zero, L_800AADA8
    if (ctx->r4 == 0) {
        // 0x800AACE0: andi        $a2, $a0, 0x3
        ctx->r6 = ctx->r4 & 0X3;
            goto L_800AADA8;
    }
    // 0x800AACE0: andi        $a2, $a0, 0x3
    ctx->r6 = ctx->r4 & 0X3;
    // 0x800AACE4: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x800AACE8: beq         $a2, $zero, L_800AAD20
    if (ctx->r6 == 0) {
        // 0x800AACEC: addu        $v1, $a2, $a0
        ctx->r3 = ADD32(ctx->r6, ctx->r4);
            goto L_800AAD20;
    }
    // 0x800AACEC: addu        $v1, $a2, $a0
    ctx->r3 = ADD32(ctx->r6, ctx->r4);
L_800AACF0:
    // 0x800AACF0: lwl         $t7, 0x0($v0)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r2, 0X0);
    // 0x800AACF4: lwr         $t7, 0x3($v0)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r2, 0X3);
    // 0x800AACF8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x800AACFC: ori         $t9, $a1, 0x1
    ctx->r25 = ctx->r5 | 0X1;
    // 0x800AAD00: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x800AAD04: beq         $t8, $zero, L_800AAD10
    if (ctx->r24 == 0) {
        // 0x800AAD08: nop
    
            goto L_800AAD10;
    }
    // 0x800AAD08: nop

    // 0x800AAD0C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_800AAD10:
    // 0x800AAD10: bne         $v1, $a0, L_800AACF0
    if (ctx->r3 != ctx->r4) {
        // 0x800AAD14: addiu       $v0, $v0, 0x14
        ctx->r2 = ADD32(ctx->r2, 0X14);
            goto L_800AACF0;
    }
    // 0x800AAD14: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x800AAD18: beq         $a0, $zero, L_800AADA8
    if (ctx->r4 == 0) {
        // 0x800AAD1C: nop
    
            goto L_800AADA8;
    }
    // 0x800AAD1C: nop

L_800AAD20:
    // 0x800AAD20: lwl         $t4, 0x0($v0)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r2, 0X0);
    // 0x800AAD24: lwr         $t4, 0x3($v0)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r2, 0X3);
    // 0x800AAD28: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x800AAD2C: ori         $t6, $a1, 0x1
    ctx->r14 = ctx->r5 | 0X1;
    // 0x800AAD30: andi        $t5, $t4, 0x3
    ctx->r13 = ctx->r12 & 0X3;
    // 0x800AAD34: beql        $t5, $zero, L_800AAD44
    if (ctx->r13 == 0) {
        // 0x800AAD38: lwl         $t7, 0x14($v0)
        ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r2, 0X14);
            goto L_800AAD44;
    }
    goto skip_6;
    // 0x800AAD38: lwl         $t7, 0x14($v0)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r2, 0X14);
    skip_6:
    // 0x800AAD3C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800AAD40: lwl         $t7, 0x14($v0)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r2, 0X14);
L_800AAD44:
    // 0x800AAD44: lwr         $t7, 0x17($v0)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r2, 0X17);
    // 0x800AAD48: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x800AAD4C: ori         $t9, $a1, 0x1
    ctx->r25 = ctx->r5 | 0X1;
    // 0x800AAD50: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x800AAD54: beql        $t8, $zero, L_800AAD64
    if (ctx->r24 == 0) {
        // 0x800AAD58: lwl         $t4, 0x14($v0)
        ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r2, 0X14);
            goto L_800AAD64;
    }
    goto skip_7;
    // 0x800AAD58: lwl         $t4, 0x14($v0)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r2, 0X14);
    skip_7:
    // 0x800AAD5C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x800AAD60: lwl         $t4, 0x14($v0)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r2, 0X14);
L_800AAD64:
    // 0x800AAD64: lwr         $t4, 0x17($v0)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r2, 0X17);
    // 0x800AAD68: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x800AAD6C: ori         $t6, $a1, 0x1
    ctx->r14 = ctx->r5 | 0X1;
    // 0x800AAD70: andi        $t5, $t4, 0x3
    ctx->r13 = ctx->r12 & 0X3;
    // 0x800AAD74: beql        $t5, $zero, L_800AAD84
    if (ctx->r13 == 0) {
        // 0x800AAD78: lwl         $t7, 0x14($v0)
        ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r2, 0X14);
            goto L_800AAD84;
    }
    goto skip_8;
    // 0x800AAD78: lwl         $t7, 0x14($v0)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r2, 0X14);
    skip_8:
    // 0x800AAD7C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800AAD80: lwl         $t7, 0x14($v0)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r2, 0X14);
L_800AAD84:
    // 0x800AAD84: lwr         $t7, 0x17($v0)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r2, 0X17);
    // 0x800AAD88: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x800AAD8C: ori         $t9, $a1, 0x1
    ctx->r25 = ctx->r5 | 0X1;
    // 0x800AAD90: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x800AAD94: beq         $t8, $zero, L_800AADA0
    if (ctx->r24 == 0) {
        // 0x800AAD98: nop
    
            goto L_800AADA0;
    }
    // 0x800AAD98: nop

    // 0x800AAD9C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_800AADA0:
    // 0x800AADA0: bne         $a0, $zero, L_800AAD20
    if (ctx->r4 != 0) {
        // 0x800AADA4: addiu       $v0, $v0, 0x14
        ctx->r2 = ADD32(ctx->r2, 0X14);
            goto L_800AAD20;
    }
    // 0x800AADA4: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
L_800AADA8:
    // 0x800AADA8: beq         $a1, $zero, L_800AADC8
    if (ctx->r5 == 0) {
        // 0x800AADAC: addiu       $t4, $zero, -0x1
        ctx->r12 = ADD32(0, -0X1);
            goto L_800AADC8;
    }
    // 0x800AADAC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x800AADB0: sw          $t4, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r12;
    // 0x800AADB4: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x800AADB8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x800AADBC: addiu       $a3, $a3, 0x60
    ctx->r7 = ADD32(ctx->r7, 0X60);
    // 0x800AADC0: b           L_800AADD4
    // 0x800AADC4: sw          $t5, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r13;
        goto L_800AADD4;
    // 0x800AADC4: sw          $t5, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r13;
L_800AADC8:
    // 0x800AADC8: sw          $zero, 0x8($t2)
    MEM_W(0X8, ctx->r10) = 0;
    // 0x800AADCC: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x800AADD0: sw          $zero, 0xC($t7)
    MEM_W(0XC, ctx->r15) = 0;
L_800AADD4:
    // 0x800AADD4: bne         $t1, $zero, L_800AAC78
    if (ctx->r9 != 0) {
        // 0x800AADD8: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_800AAC78;
    }
    // 0x800AADD8: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x800AADDC: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
L_800AADE0:
    // 0x800AADE0: beq         $v0, $zero, L_800AAE28
    if (ctx->r2 == 0) {
        // 0x800AADE4: nop
    
            goto L_800AAE28;
    }
    // 0x800AADE4: nop

    // 0x800AADE8: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x800AADEC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800AADF0: beq         $t1, $zero, L_800AAE28
    if (ctx->r9 == 0) {
        // 0x800AADF4: nop
    
            goto L_800AAE28;
    }
    // 0x800AADF4: nop

L_800AADF8:
    // 0x800AADF8: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x800AADFC: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x800AAE00: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x800AAE04: jal         0x800AA14C
    // 0x800AAE08: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_800AA14C(rdram, ctx);
        goto after_3;
    // 0x800AAE08: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_3:
    // 0x800AAE0C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800AAE10: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800AAE14: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x800AAE18: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x800AAE1C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800AAE20: bne         $t1, $zero, L_800AADF8
    if (ctx->r9 != 0) {
        // 0x800AAE24: sw          $v0, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r2;
            goto L_800AADF8;
    }
    // 0x800AAE24: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
L_800AAE28:
    // 0x800AAE28: jal         0x8007E03C
    // 0x800AAE2C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8007E03C(rdram, ctx);
        goto after_4;
    // 0x800AAE2C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_4:
    // 0x800AAE30: lw          $t1, 0x10($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X10);
    // 0x800AAE34: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x800AAE38: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x800AAE3C: beq         $t1, $zero, L_800AB2AC
    if (ctx->r9 == 0) {
        // 0x800AAE40: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_800AB2AC;
    }
    // 0x800AAE40: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x800AAE44: andi        $a1, $t1, 0x3
    ctx->r5 = ctx->r9 & 0X3;
    // 0x800AAE48: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x800AAE4C: beql        $a1, $zero, L_800AAF50
    if (ctx->r5 == 0) {
        // 0x800AAE50: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_800AAF50;
    }
    goto skip_9;
    // 0x800AAE50: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_9:
    // 0x800AAE54: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800AAE58: addu        $v0, $a1, $t1
    ctx->r2 = ADD32(ctx->r5, ctx->r9);
    // 0x800AAE5C: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x800AAE60: sw          $a3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r7;
    // 0x800AAE64: beq         $v0, $t1, L_800AAEE0
    if (ctx->r2 == ctx->r9) {
        // 0x800AAE68: lw          $t8, 0xC($v1)
        ctx->r24 = MEM_W(ctx->r3, 0XC);
            goto L_800AAEE0;
    }
    // 0x800AAE68: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
L_800AAE6C:
    // 0x800AAE6C: swc1        $f0, 0x140($t8)
    MEM_W(0X140, ctx->r24) = ctx->f0.u32l;
    // 0x800AAE70: lw          $t9, 0xC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XC);
    // 0x800AAE74: addiu       $a3, $a3, 0x188
    ctx->r7 = ADD32(ctx->r7, 0X188);
    // 0x800AAE78: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x800AAE7C: swc1        $f0, 0x144($t9)
    MEM_W(0X144, ctx->r25) = ctx->f0.u32l;
    // 0x800AAE80: lw          $t4, 0xC($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XC);
    // 0x800AAE84: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x800AAE88: swc1        $f0, 0x148($t4)
    MEM_W(0X148, ctx->r12) = ctx->f0.u32l;
    // 0x800AAE8C: lw          $t5, -0x34($v1)
    ctx->r13 = MEM_W(ctx->r3, -0X34);
    // 0x800AAE90: swc1        $f0, 0x14C($t5)
    MEM_W(0X14C, ctx->r13) = ctx->f0.u32l;
    // 0x800AAE94: lw          $t6, -0x34($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X34);
    // 0x800AAE98: swc1        $f0, 0x150($t6)
    MEM_W(0X150, ctx->r14) = ctx->f0.u32l;
    // 0x800AAE9C: lw          $t7, -0x34($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X34);
    // 0x800AAEA0: swc1        $f0, 0x154($t7)
    MEM_W(0X154, ctx->r15) = ctx->f0.u32l;
    // 0x800AAEA4: lw          $t8, -0x34($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X34);
    // 0x800AAEA8: swc1        $f0, 0x158($t8)
    MEM_W(0X158, ctx->r24) = ctx->f0.u32l;
    // 0x800AAEAC: lw          $t9, -0x34($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X34);
    // 0x800AAEB0: swc1        $f0, 0x15C($t9)
    MEM_W(0X15C, ctx->r25) = ctx->f0.u32l;
    // 0x800AAEB4: lw          $t4, -0x34($v1)
    ctx->r12 = MEM_W(ctx->r3, -0X34);
    // 0x800AAEB8: swc1        $f0, 0x160($t4)
    MEM_W(0X160, ctx->r12) = ctx->f0.u32l;
    // 0x800AAEBC: lw          $t5, -0x34($v1)
    ctx->r13 = MEM_W(ctx->r3, -0X34);
    // 0x800AAEC0: swc1        $f0, 0x164($t5)
    MEM_W(0X164, ctx->r13) = ctx->f0.u32l;
    // 0x800AAEC4: lw          $t6, -0x34($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X34);
    // 0x800AAEC8: swc1        $f0, 0x168($t6)
    MEM_W(0X168, ctx->r14) = ctx->f0.u32l;
    // 0x800AAECC: lw          $t7, -0x34($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X34);
    // 0x800AAED0: swc1        $f0, 0x16C($t7)
    MEM_W(0X16C, ctx->r15) = ctx->f0.u32l;
    // 0x800AAED4: sw          $a3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r7;
    // 0x800AAED8: bne         $v0, $t1, L_800AAE6C
    if (ctx->r2 != ctx->r9) {
        // 0x800AAEDC: lw          $t8, 0xC($v1)
        ctx->r24 = MEM_W(ctx->r3, 0XC);
            goto L_800AAE6C;
    }
    // 0x800AAEDC: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
L_800AAEE0:
    // 0x800AAEE0: swc1        $f0, 0x140($t8)
    MEM_W(0X140, ctx->r24) = ctx->f0.u32l;
    // 0x800AAEE4: lw          $t9, 0xC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XC);
    // 0x800AAEE8: addiu       $a3, $a3, 0x188
    ctx->r7 = ADD32(ctx->r7, 0X188);
    // 0x800AAEEC: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x800AAEF0: swc1        $f0, 0x144($t9)
    MEM_W(0X144, ctx->r25) = ctx->f0.u32l;
    // 0x800AAEF4: lw          $t4, -0x34($v1)
    ctx->r12 = MEM_W(ctx->r3, -0X34);
    // 0x800AAEF8: swc1        $f0, 0x148($t4)
    MEM_W(0X148, ctx->r12) = ctx->f0.u32l;
    // 0x800AAEFC: lw          $t5, -0x34($v1)
    ctx->r13 = MEM_W(ctx->r3, -0X34);
    // 0x800AAF00: swc1        $f0, 0x14C($t5)
    MEM_W(0X14C, ctx->r13) = ctx->f0.u32l;
    // 0x800AAF04: lw          $t6, -0x34($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X34);
    // 0x800AAF08: swc1        $f0, 0x150($t6)
    MEM_W(0X150, ctx->r14) = ctx->f0.u32l;
    // 0x800AAF0C: lw          $t7, -0x34($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X34);
    // 0x800AAF10: swc1        $f0, 0x154($t7)
    MEM_W(0X154, ctx->r15) = ctx->f0.u32l;
    // 0x800AAF14: lw          $t8, -0x34($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X34);
    // 0x800AAF18: swc1        $f0, 0x158($t8)
    MEM_W(0X158, ctx->r24) = ctx->f0.u32l;
    // 0x800AAF1C: lw          $t9, -0x34($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X34);
    // 0x800AAF20: swc1        $f0, 0x15C($t9)
    MEM_W(0X15C, ctx->r25) = ctx->f0.u32l;
    // 0x800AAF24: lw          $t4, -0x34($v1)
    ctx->r12 = MEM_W(ctx->r3, -0X34);
    // 0x800AAF28: swc1        $f0, 0x160($t4)
    MEM_W(0X160, ctx->r12) = ctx->f0.u32l;
    // 0x800AAF2C: lw          $t5, -0x34($v1)
    ctx->r13 = MEM_W(ctx->r3, -0X34);
    // 0x800AAF30: swc1        $f0, 0x164($t5)
    MEM_W(0X164, ctx->r13) = ctx->f0.u32l;
    // 0x800AAF34: lw          $t6, -0x34($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X34);
    // 0x800AAF38: swc1        $f0, 0x168($t6)
    MEM_W(0X168, ctx->r14) = ctx->f0.u32l;
    // 0x800AAF3C: lw          $t7, -0x34($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X34);
    // 0x800AAF40: swc1        $f0, 0x16C($t7)
    MEM_W(0X16C, ctx->r15) = ctx->f0.u32l;
    // 0x800AAF44: beql        $t1, $zero, L_800AB2B0
    if (ctx->r9 == 0) {
        // 0x800AAF48: lw          $v0, 0x34($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X34);
            goto L_800AB2B0;
    }
    goto skip_10;
    // 0x800AAF48: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    skip_10:
    // 0x800AAF4C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_800AAF50:
    // 0x800AAF50: nop

    // 0x800AAF54: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
    // 0x800AAF58: sw          $a3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r7;
    // 0x800AAF5C: beq         $t1, $zero, L_800AB110
    if (ctx->r9 == 0) {
        // 0x800AAF60: lw          $t8, 0xC($v1)
        ctx->r24 = MEM_W(ctx->r3, 0XC);
            goto L_800AB110;
    }
    // 0x800AAF60: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
L_800AAF64:
    // 0x800AAF64: swc1        $f0, 0x140($t8)
    MEM_W(0X140, ctx->r24) = ctx->f0.u32l;
    // 0x800AAF68: lw          $t9, 0xC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XC);
    // 0x800AAF6C: addiu       $a3, $a3, 0x188
    ctx->r7 = ADD32(ctx->r7, 0X188);
    // 0x800AAF70: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
    // 0x800AAF74: swc1        $f0, 0x144($t9)
    MEM_W(0X144, ctx->r25) = ctx->f0.u32l;
    // 0x800AAF78: lw          $t4, 0xC($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XC);
    // 0x800AAF7C: addiu       $v1, $v1, 0x100
    ctx->r3 = ADD32(ctx->r3, 0X100);
    // 0x800AAF80: swc1        $f0, 0x148($t4)
    MEM_W(0X148, ctx->r12) = ctx->f0.u32l;
    // 0x800AAF84: lw          $t5, -0xF4($v1)
    ctx->r13 = MEM_W(ctx->r3, -0XF4);
    // 0x800AAF88: swc1        $f0, 0x14C($t5)
    MEM_W(0X14C, ctx->r13) = ctx->f0.u32l;
    // 0x800AAF8C: lw          $t6, -0xF4($v1)
    ctx->r14 = MEM_W(ctx->r3, -0XF4);
    // 0x800AAF90: swc1        $f0, 0x150($t6)
    MEM_W(0X150, ctx->r14) = ctx->f0.u32l;
    // 0x800AAF94: lw          $t7, -0xF4($v1)
    ctx->r15 = MEM_W(ctx->r3, -0XF4);
    // 0x800AAF98: swc1        $f0, 0x154($t7)
    MEM_W(0X154, ctx->r15) = ctx->f0.u32l;
    // 0x800AAF9C: lw          $t8, -0xF4($v1)
    ctx->r24 = MEM_W(ctx->r3, -0XF4);
    // 0x800AAFA0: swc1        $f0, 0x158($t8)
    MEM_W(0X158, ctx->r24) = ctx->f0.u32l;
    // 0x800AAFA4: lw          $t9, -0xF4($v1)
    ctx->r25 = MEM_W(ctx->r3, -0XF4);
    // 0x800AAFA8: swc1        $f0, 0x15C($t9)
    MEM_W(0X15C, ctx->r25) = ctx->f0.u32l;
    // 0x800AAFAC: lw          $t4, -0xF4($v1)
    ctx->r12 = MEM_W(ctx->r3, -0XF4);
    // 0x800AAFB0: swc1        $f0, 0x160($t4)
    MEM_W(0X160, ctx->r12) = ctx->f0.u32l;
    // 0x800AAFB4: lw          $t5, -0xF4($v1)
    ctx->r13 = MEM_W(ctx->r3, -0XF4);
    // 0x800AAFB8: swc1        $f0, 0x164($t5)
    MEM_W(0X164, ctx->r13) = ctx->f0.u32l;
    // 0x800AAFBC: lw          $t6, -0xF4($v1)
    ctx->r14 = MEM_W(ctx->r3, -0XF4);
    // 0x800AAFC0: swc1        $f0, 0x168($t6)
    MEM_W(0X168, ctx->r14) = ctx->f0.u32l;
    // 0x800AAFC4: lw          $t7, -0xF4($v1)
    ctx->r15 = MEM_W(ctx->r3, -0XF4);
    // 0x800AAFC8: swc1        $f0, 0x16C($t7)
    MEM_W(0X16C, ctx->r15) = ctx->f0.u32l;
    // 0x800AAFCC: sw          $a3, -0xB4($v1)
    MEM_W(-0XB4, ctx->r3) = ctx->r7;
    // 0x800AAFD0: lw          $t8, -0xB4($v1)
    ctx->r24 = MEM_W(ctx->r3, -0XB4);
    // 0x800AAFD4: addiu       $a3, $a3, 0x188
    ctx->r7 = ADD32(ctx->r7, 0X188);
    // 0x800AAFD8: swc1        $f0, 0x140($t8)
    MEM_W(0X140, ctx->r24) = ctx->f0.u32l;
    // 0x800AAFDC: lw          $t9, -0xB4($v1)
    ctx->r25 = MEM_W(ctx->r3, -0XB4);
    // 0x800AAFE0: swc1        $f0, 0x144($t9)
    MEM_W(0X144, ctx->r25) = ctx->f0.u32l;
    // 0x800AAFE4: lw          $t4, -0xB4($v1)
    ctx->r12 = MEM_W(ctx->r3, -0XB4);
    // 0x800AAFE8: swc1        $f0, 0x148($t4)
    MEM_W(0X148, ctx->r12) = ctx->f0.u32l;
    // 0x800AAFEC: lw          $t5, -0xB4($v1)
    ctx->r13 = MEM_W(ctx->r3, -0XB4);
    // 0x800AAFF0: swc1        $f0, 0x14C($t5)
    MEM_W(0X14C, ctx->r13) = ctx->f0.u32l;
    // 0x800AAFF4: lw          $t6, -0xB4($v1)
    ctx->r14 = MEM_W(ctx->r3, -0XB4);
    // 0x800AAFF8: swc1        $f0, 0x150($t6)
    MEM_W(0X150, ctx->r14) = ctx->f0.u32l;
    // 0x800AAFFC: lw          $t7, -0xB4($v1)
    ctx->r15 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB000: swc1        $f0, 0x154($t7)
    MEM_W(0X154, ctx->r15) = ctx->f0.u32l;
    // 0x800AB004: lw          $t8, -0xB4($v1)
    ctx->r24 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB008: swc1        $f0, 0x158($t8)
    MEM_W(0X158, ctx->r24) = ctx->f0.u32l;
    // 0x800AB00C: lw          $t9, -0xB4($v1)
    ctx->r25 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB010: swc1        $f0, 0x15C($t9)
    MEM_W(0X15C, ctx->r25) = ctx->f0.u32l;
    // 0x800AB014: lw          $t4, -0xB4($v1)
    ctx->r12 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB018: swc1        $f0, 0x160($t4)
    MEM_W(0X160, ctx->r12) = ctx->f0.u32l;
    // 0x800AB01C: lw          $t5, -0xB4($v1)
    ctx->r13 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB020: swc1        $f0, 0x164($t5)
    MEM_W(0X164, ctx->r13) = ctx->f0.u32l;
    // 0x800AB024: lw          $t6, -0xB4($v1)
    ctx->r14 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB028: swc1        $f0, 0x168($t6)
    MEM_W(0X168, ctx->r14) = ctx->f0.u32l;
    // 0x800AB02C: lw          $t7, -0xB4($v1)
    ctx->r15 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB030: swc1        $f0, 0x16C($t7)
    MEM_W(0X16C, ctx->r15) = ctx->f0.u32l;
    // 0x800AB034: sw          $a3, -0x74($v1)
    MEM_W(-0X74, ctx->r3) = ctx->r7;
    // 0x800AB038: lw          $t8, -0x74($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X74);
    // 0x800AB03C: addiu       $a3, $a3, 0x188
    ctx->r7 = ADD32(ctx->r7, 0X188);
    // 0x800AB040: swc1        $f0, 0x140($t8)
    MEM_W(0X140, ctx->r24) = ctx->f0.u32l;
    // 0x800AB044: lw          $t9, -0x74($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X74);
    // 0x800AB048: swc1        $f0, 0x144($t9)
    MEM_W(0X144, ctx->r25) = ctx->f0.u32l;
    // 0x800AB04C: lw          $t4, -0x74($v1)
    ctx->r12 = MEM_W(ctx->r3, -0X74);
    // 0x800AB050: swc1        $f0, 0x148($t4)
    MEM_W(0X148, ctx->r12) = ctx->f0.u32l;
    // 0x800AB054: lw          $t5, -0x74($v1)
    ctx->r13 = MEM_W(ctx->r3, -0X74);
    // 0x800AB058: swc1        $f0, 0x14C($t5)
    MEM_W(0X14C, ctx->r13) = ctx->f0.u32l;
    // 0x800AB05C: lw          $t6, -0x74($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X74);
    // 0x800AB060: swc1        $f0, 0x150($t6)
    MEM_W(0X150, ctx->r14) = ctx->f0.u32l;
    // 0x800AB064: lw          $t7, -0x74($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X74);
    // 0x800AB068: swc1        $f0, 0x154($t7)
    MEM_W(0X154, ctx->r15) = ctx->f0.u32l;
    // 0x800AB06C: lw          $t8, -0x74($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X74);
    // 0x800AB070: swc1        $f0, 0x158($t8)
    MEM_W(0X158, ctx->r24) = ctx->f0.u32l;
    // 0x800AB074: lw          $t9, -0x74($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X74);
    // 0x800AB078: swc1        $f0, 0x15C($t9)
    MEM_W(0X15C, ctx->r25) = ctx->f0.u32l;
    // 0x800AB07C: lw          $t4, -0x74($v1)
    ctx->r12 = MEM_W(ctx->r3, -0X74);
    // 0x800AB080: swc1        $f0, 0x160($t4)
    MEM_W(0X160, ctx->r12) = ctx->f0.u32l;
    // 0x800AB084: lw          $t5, -0x74($v1)
    ctx->r13 = MEM_W(ctx->r3, -0X74);
    // 0x800AB088: swc1        $f0, 0x164($t5)
    MEM_W(0X164, ctx->r13) = ctx->f0.u32l;
    // 0x800AB08C: lw          $t6, -0x74($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X74);
    // 0x800AB090: swc1        $f0, 0x168($t6)
    MEM_W(0X168, ctx->r14) = ctx->f0.u32l;
    // 0x800AB094: lw          $t7, -0x74($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X74);
    // 0x800AB098: swc1        $f0, 0x16C($t7)
    MEM_W(0X16C, ctx->r15) = ctx->f0.u32l;
    // 0x800AB09C: sw          $a3, -0x34($v1)
    MEM_W(-0X34, ctx->r3) = ctx->r7;
    // 0x800AB0A0: lw          $t8, -0x34($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X34);
    // 0x800AB0A4: addiu       $a3, $a3, 0x188
    ctx->r7 = ADD32(ctx->r7, 0X188);
    // 0x800AB0A8: swc1        $f0, 0x140($t8)
    MEM_W(0X140, ctx->r24) = ctx->f0.u32l;
    // 0x800AB0AC: lw          $t9, -0x34($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X34);
    // 0x800AB0B0: swc1        $f0, 0x144($t9)
    MEM_W(0X144, ctx->r25) = ctx->f0.u32l;
    // 0x800AB0B4: lw          $t4, -0x34($v1)
    ctx->r12 = MEM_W(ctx->r3, -0X34);
    // 0x800AB0B8: swc1        $f0, 0x148($t4)
    MEM_W(0X148, ctx->r12) = ctx->f0.u32l;
    // 0x800AB0BC: lw          $t5, -0x34($v1)
    ctx->r13 = MEM_W(ctx->r3, -0X34);
    // 0x800AB0C0: swc1        $f0, 0x14C($t5)
    MEM_W(0X14C, ctx->r13) = ctx->f0.u32l;
    // 0x800AB0C4: lw          $t6, -0x34($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X34);
    // 0x800AB0C8: swc1        $f0, 0x150($t6)
    MEM_W(0X150, ctx->r14) = ctx->f0.u32l;
    // 0x800AB0CC: lw          $t7, -0x34($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X34);
    // 0x800AB0D0: swc1        $f0, 0x154($t7)
    MEM_W(0X154, ctx->r15) = ctx->f0.u32l;
    // 0x800AB0D4: lw          $t8, -0x34($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X34);
    // 0x800AB0D8: swc1        $f0, 0x158($t8)
    MEM_W(0X158, ctx->r24) = ctx->f0.u32l;
    // 0x800AB0DC: lw          $t9, -0x34($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X34);
    // 0x800AB0E0: swc1        $f0, 0x15C($t9)
    MEM_W(0X15C, ctx->r25) = ctx->f0.u32l;
    // 0x800AB0E4: lw          $t4, -0x34($v1)
    ctx->r12 = MEM_W(ctx->r3, -0X34);
    // 0x800AB0E8: swc1        $f0, 0x160($t4)
    MEM_W(0X160, ctx->r12) = ctx->f0.u32l;
    // 0x800AB0EC: lw          $t5, -0x34($v1)
    ctx->r13 = MEM_W(ctx->r3, -0X34);
    // 0x800AB0F0: swc1        $f0, 0x164($t5)
    MEM_W(0X164, ctx->r13) = ctx->f0.u32l;
    // 0x800AB0F4: lw          $t6, -0x34($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X34);
    // 0x800AB0F8: swc1        $f0, 0x168($t6)
    MEM_W(0X168, ctx->r14) = ctx->f0.u32l;
    // 0x800AB0FC: lw          $t7, -0x34($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X34);
    // 0x800AB100: swc1        $f0, 0x16C($t7)
    MEM_W(0X16C, ctx->r15) = ctx->f0.u32l;
    // 0x800AB104: sw          $a3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r7;
    // 0x800AB108: bne         $t1, $zero, L_800AAF64
    if (ctx->r9 != 0) {
        // 0x800AB10C: lw          $t8, 0xC($v1)
        ctx->r24 = MEM_W(ctx->r3, 0XC);
            goto L_800AAF64;
    }
    // 0x800AB10C: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
L_800AB110:
    // 0x800AB110: swc1        $f0, 0x140($t8)
    MEM_W(0X140, ctx->r24) = ctx->f0.u32l;
    // 0x800AB114: lw          $t9, 0xC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XC);
    // 0x800AB118: addiu       $a3, $a3, 0x188
    ctx->r7 = ADD32(ctx->r7, 0X188);
    // 0x800AB11C: addiu       $v1, $v1, 0x100
    ctx->r3 = ADD32(ctx->r3, 0X100);
    // 0x800AB120: swc1        $f0, 0x144($t9)
    MEM_W(0X144, ctx->r25) = ctx->f0.u32l;
    // 0x800AB124: lw          $t4, -0xF4($v1)
    ctx->r12 = MEM_W(ctx->r3, -0XF4);
    // 0x800AB128: swc1        $f0, 0x148($t4)
    MEM_W(0X148, ctx->r12) = ctx->f0.u32l;
    // 0x800AB12C: lw          $t5, -0xF4($v1)
    ctx->r13 = MEM_W(ctx->r3, -0XF4);
    // 0x800AB130: swc1        $f0, 0x14C($t5)
    MEM_W(0X14C, ctx->r13) = ctx->f0.u32l;
    // 0x800AB134: lw          $t6, -0xF4($v1)
    ctx->r14 = MEM_W(ctx->r3, -0XF4);
    // 0x800AB138: swc1        $f0, 0x150($t6)
    MEM_W(0X150, ctx->r14) = ctx->f0.u32l;
    // 0x800AB13C: lw          $t7, -0xF4($v1)
    ctx->r15 = MEM_W(ctx->r3, -0XF4);
    // 0x800AB140: swc1        $f0, 0x154($t7)
    MEM_W(0X154, ctx->r15) = ctx->f0.u32l;
    // 0x800AB144: lw          $t8, -0xF4($v1)
    ctx->r24 = MEM_W(ctx->r3, -0XF4);
    // 0x800AB148: swc1        $f0, 0x158($t8)
    MEM_W(0X158, ctx->r24) = ctx->f0.u32l;
    // 0x800AB14C: lw          $t9, -0xF4($v1)
    ctx->r25 = MEM_W(ctx->r3, -0XF4);
    // 0x800AB150: swc1        $f0, 0x15C($t9)
    MEM_W(0X15C, ctx->r25) = ctx->f0.u32l;
    // 0x800AB154: lw          $t4, -0xF4($v1)
    ctx->r12 = MEM_W(ctx->r3, -0XF4);
    // 0x800AB158: swc1        $f0, 0x160($t4)
    MEM_W(0X160, ctx->r12) = ctx->f0.u32l;
    // 0x800AB15C: lw          $t5, -0xF4($v1)
    ctx->r13 = MEM_W(ctx->r3, -0XF4);
    // 0x800AB160: swc1        $f0, 0x164($t5)
    MEM_W(0X164, ctx->r13) = ctx->f0.u32l;
    // 0x800AB164: lw          $t6, -0xF4($v1)
    ctx->r14 = MEM_W(ctx->r3, -0XF4);
    // 0x800AB168: swc1        $f0, 0x168($t6)
    MEM_W(0X168, ctx->r14) = ctx->f0.u32l;
    // 0x800AB16C: lw          $t7, -0xF4($v1)
    ctx->r15 = MEM_W(ctx->r3, -0XF4);
    // 0x800AB170: swc1        $f0, 0x16C($t7)
    MEM_W(0X16C, ctx->r15) = ctx->f0.u32l;
    // 0x800AB174: sw          $a3, -0xB4($v1)
    MEM_W(-0XB4, ctx->r3) = ctx->r7;
    // 0x800AB178: lw          $t8, -0xB4($v1)
    ctx->r24 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB17C: addiu       $a3, $a3, 0x188
    ctx->r7 = ADD32(ctx->r7, 0X188);
    // 0x800AB180: swc1        $f0, 0x140($t8)
    MEM_W(0X140, ctx->r24) = ctx->f0.u32l;
    // 0x800AB184: lw          $t9, -0xB4($v1)
    ctx->r25 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB188: swc1        $f0, 0x144($t9)
    MEM_W(0X144, ctx->r25) = ctx->f0.u32l;
    // 0x800AB18C: lw          $t4, -0xB4($v1)
    ctx->r12 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB190: swc1        $f0, 0x148($t4)
    MEM_W(0X148, ctx->r12) = ctx->f0.u32l;
    // 0x800AB194: lw          $t5, -0xB4($v1)
    ctx->r13 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB198: swc1        $f0, 0x14C($t5)
    MEM_W(0X14C, ctx->r13) = ctx->f0.u32l;
    // 0x800AB19C: lw          $t6, -0xB4($v1)
    ctx->r14 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB1A0: swc1        $f0, 0x150($t6)
    MEM_W(0X150, ctx->r14) = ctx->f0.u32l;
    // 0x800AB1A4: lw          $t7, -0xB4($v1)
    ctx->r15 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB1A8: swc1        $f0, 0x154($t7)
    MEM_W(0X154, ctx->r15) = ctx->f0.u32l;
    // 0x800AB1AC: lw          $t8, -0xB4($v1)
    ctx->r24 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB1B0: swc1        $f0, 0x158($t8)
    MEM_W(0X158, ctx->r24) = ctx->f0.u32l;
    // 0x800AB1B4: lw          $t9, -0xB4($v1)
    ctx->r25 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB1B8: swc1        $f0, 0x15C($t9)
    MEM_W(0X15C, ctx->r25) = ctx->f0.u32l;
    // 0x800AB1BC: lw          $t4, -0xB4($v1)
    ctx->r12 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB1C0: swc1        $f0, 0x160($t4)
    MEM_W(0X160, ctx->r12) = ctx->f0.u32l;
    // 0x800AB1C4: lw          $t5, -0xB4($v1)
    ctx->r13 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB1C8: swc1        $f0, 0x164($t5)
    MEM_W(0X164, ctx->r13) = ctx->f0.u32l;
    // 0x800AB1CC: lw          $t6, -0xB4($v1)
    ctx->r14 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB1D0: swc1        $f0, 0x168($t6)
    MEM_W(0X168, ctx->r14) = ctx->f0.u32l;
    // 0x800AB1D4: lw          $t7, -0xB4($v1)
    ctx->r15 = MEM_W(ctx->r3, -0XB4);
    // 0x800AB1D8: swc1        $f0, 0x16C($t7)
    MEM_W(0X16C, ctx->r15) = ctx->f0.u32l;
    // 0x800AB1DC: sw          $a3, -0x74($v1)
    MEM_W(-0X74, ctx->r3) = ctx->r7;
    // 0x800AB1E0: lw          $t8, -0x74($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X74);
    // 0x800AB1E4: addiu       $a3, $a3, 0x188
    ctx->r7 = ADD32(ctx->r7, 0X188);
    // 0x800AB1E8: swc1        $f0, 0x140($t8)
    MEM_W(0X140, ctx->r24) = ctx->f0.u32l;
    // 0x800AB1EC: lw          $t9, -0x74($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X74);
    // 0x800AB1F0: swc1        $f0, 0x144($t9)
    MEM_W(0X144, ctx->r25) = ctx->f0.u32l;
    // 0x800AB1F4: lw          $t4, -0x74($v1)
    ctx->r12 = MEM_W(ctx->r3, -0X74);
    // 0x800AB1F8: swc1        $f0, 0x148($t4)
    MEM_W(0X148, ctx->r12) = ctx->f0.u32l;
    // 0x800AB1FC: lw          $t5, -0x74($v1)
    ctx->r13 = MEM_W(ctx->r3, -0X74);
    // 0x800AB200: swc1        $f0, 0x14C($t5)
    MEM_W(0X14C, ctx->r13) = ctx->f0.u32l;
    // 0x800AB204: lw          $t6, -0x74($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X74);
    // 0x800AB208: swc1        $f0, 0x150($t6)
    MEM_W(0X150, ctx->r14) = ctx->f0.u32l;
    // 0x800AB20C: lw          $t7, -0x74($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X74);
    // 0x800AB210: swc1        $f0, 0x154($t7)
    MEM_W(0X154, ctx->r15) = ctx->f0.u32l;
    // 0x800AB214: lw          $t8, -0x74($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X74);
    // 0x800AB218: swc1        $f0, 0x158($t8)
    MEM_W(0X158, ctx->r24) = ctx->f0.u32l;
    // 0x800AB21C: lw          $t9, -0x74($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X74);
    // 0x800AB220: swc1        $f0, 0x15C($t9)
    MEM_W(0X15C, ctx->r25) = ctx->f0.u32l;
    // 0x800AB224: lw          $t4, -0x74($v1)
    ctx->r12 = MEM_W(ctx->r3, -0X74);
    // 0x800AB228: swc1        $f0, 0x160($t4)
    MEM_W(0X160, ctx->r12) = ctx->f0.u32l;
    // 0x800AB22C: lw          $t5, -0x74($v1)
    ctx->r13 = MEM_W(ctx->r3, -0X74);
    // 0x800AB230: swc1        $f0, 0x164($t5)
    MEM_W(0X164, ctx->r13) = ctx->f0.u32l;
    // 0x800AB234: lw          $t6, -0x74($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X74);
    // 0x800AB238: swc1        $f0, 0x168($t6)
    MEM_W(0X168, ctx->r14) = ctx->f0.u32l;
    // 0x800AB23C: lw          $t7, -0x74($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X74);
    // 0x800AB240: swc1        $f0, 0x16C($t7)
    MEM_W(0X16C, ctx->r15) = ctx->f0.u32l;
    // 0x800AB244: sw          $a3, -0x34($v1)
    MEM_W(-0X34, ctx->r3) = ctx->r7;
    // 0x800AB248: lw          $t8, -0x34($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X34);
    // 0x800AB24C: addiu       $a3, $a3, 0x188
    ctx->r7 = ADD32(ctx->r7, 0X188);
    // 0x800AB250: swc1        $f0, 0x140($t8)
    MEM_W(0X140, ctx->r24) = ctx->f0.u32l;
    // 0x800AB254: lw          $t9, -0x34($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X34);
    // 0x800AB258: swc1        $f0, 0x144($t9)
    MEM_W(0X144, ctx->r25) = ctx->f0.u32l;
    // 0x800AB25C: lw          $t4, -0x34($v1)
    ctx->r12 = MEM_W(ctx->r3, -0X34);
    // 0x800AB260: swc1        $f0, 0x148($t4)
    MEM_W(0X148, ctx->r12) = ctx->f0.u32l;
    // 0x800AB264: lw          $t5, -0x34($v1)
    ctx->r13 = MEM_W(ctx->r3, -0X34);
    // 0x800AB268: swc1        $f0, 0x14C($t5)
    MEM_W(0X14C, ctx->r13) = ctx->f0.u32l;
    // 0x800AB26C: lw          $t6, -0x34($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X34);
    // 0x800AB270: swc1        $f0, 0x150($t6)
    MEM_W(0X150, ctx->r14) = ctx->f0.u32l;
    // 0x800AB274: lw          $t7, -0x34($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X34);
    // 0x800AB278: swc1        $f0, 0x154($t7)
    MEM_W(0X154, ctx->r15) = ctx->f0.u32l;
    // 0x800AB27C: lw          $t8, -0x34($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X34);
    // 0x800AB280: swc1        $f0, 0x158($t8)
    MEM_W(0X158, ctx->r24) = ctx->f0.u32l;
    // 0x800AB284: lw          $t9, -0x34($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X34);
    // 0x800AB288: swc1        $f0, 0x15C($t9)
    MEM_W(0X15C, ctx->r25) = ctx->f0.u32l;
    // 0x800AB28C: lw          $t4, -0x34($v1)
    ctx->r12 = MEM_W(ctx->r3, -0X34);
    // 0x800AB290: swc1        $f0, 0x160($t4)
    MEM_W(0X160, ctx->r12) = ctx->f0.u32l;
    // 0x800AB294: lw          $t5, -0x34($v1)
    ctx->r13 = MEM_W(ctx->r3, -0X34);
    // 0x800AB298: swc1        $f0, 0x164($t5)
    MEM_W(0X164, ctx->r13) = ctx->f0.u32l;
    // 0x800AB29C: lw          $t6, -0x34($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X34);
    // 0x800AB2A0: swc1        $f0, 0x168($t6)
    MEM_W(0X168, ctx->r14) = ctx->f0.u32l;
    // 0x800AB2A4: lw          $t7, -0x34($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X34);
    // 0x800AB2A8: swc1        $f0, 0x16C($t7)
    MEM_W(0X16C, ctx->r15) = ctx->f0.u32l;
L_800AB2AC:
    // 0x800AB2AC: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
L_800AB2B0:
    // 0x800AB2B0: beql        $v0, $zero, L_800AB2C4
    if (ctx->r2 == 0) {
        // 0x800AB2B4: lw          $a0, 0x38($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X38);
            goto L_800AB2C4;
    }
    goto skip_11;
    // 0x800AB2B4: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    skip_11:
    // 0x800AB2B8: sw          $a3, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r7;
    // 0x800AB2BC: addiu       $a3, $a3, 0x80
    ctx->r7 = ADD32(ctx->r7, 0X80);
    // 0x800AB2C0: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
L_800AB2C4:
    // 0x800AB2C4: beql        $a0, $zero, L_800AB348
    if (ctx->r4 == 0) {
        // 0x800AB2C8: lw          $v0, 0x3C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X3C);
            goto L_800AB348;
    }
    goto skip_12;
    // 0x800AB2C8: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    skip_12:
    // 0x800AB2CC: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x800AB2D0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800AB2D4: beq         $t1, $zero, L_800AB344
    if (ctx->r9 == 0) {
        // 0x800AB2D8: andi        $a1, $t1, 0x3
        ctx->r5 = ctx->r9 & 0X3;
            goto L_800AB344;
    }
    // 0x800AB2D8: andi        $a1, $t1, 0x3
    ctx->r5 = ctx->r9 & 0X3;
    // 0x800AB2DC: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x800AB2E0: beq         $a1, $zero, L_800AB308
    if (ctx->r5 == 0) {
        // 0x800AB2E4: addu        $v1, $a1, $t1
        ctx->r3 = ADD32(ctx->r5, ctx->r9);
            goto L_800AB308;
    }
    // 0x800AB2E4: addu        $v1, $a1, $t1
    ctx->r3 = ADD32(ctx->r5, ctx->r9);
L_800AB2E8:
    // 0x800AB2E8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800AB2EC: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x800AB2F0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800AB2F4: sw          $a3, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->r7;
    // 0x800AB2F8: bne         $v1, $t1, L_800AB2E8
    if (ctx->r3 != ctx->r9) {
        // 0x800AB2FC: addiu       $a3, $a3, 0x20
        ctx->r7 = ADD32(ctx->r7, 0X20);
            goto L_800AB2E8;
    }
    // 0x800AB2FC: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x800AB300: beql        $t1, $zero, L_800AB348
    if (ctx->r9 == 0) {
        // 0x800AB304: lw          $v0, 0x3C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X3C);
            goto L_800AB348;
    }
    goto skip_13;
    // 0x800AB304: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    skip_13:
L_800AB308:
    // 0x800AB308: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800AB30C: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
    // 0x800AB310: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800AB314: sw          $a3, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->r7;
    // 0x800AB318: lw          $t4, -0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, -0XC);
    // 0x800AB31C: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x800AB320: sw          $a3, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->r7;
    // 0x800AB324: lw          $t5, -0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, -0X8);
    // 0x800AB328: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x800AB32C: sw          $a3, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->r7;
    // 0x800AB330: lw          $t6, -0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, -0X4);
    // 0x800AB334: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x800AB338: sw          $a3, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->r7;
    // 0x800AB33C: bne         $t1, $zero, L_800AB308
    if (ctx->r9 != 0) {
        // 0x800AB340: addiu       $a3, $a3, 0x20
        ctx->r7 = ADD32(ctx->r7, 0X20);
            goto L_800AB308;
    }
    // 0x800AB340: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
L_800AB344:
    // 0x800AB344: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
L_800AB348:
    // 0x800AB348: beql        $v0, $zero, L_800AB4B8
    if (ctx->r2 == 0) {
        // 0x800AB34C: lw          $a0, 0x2C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X2C);
            goto L_800AB4B8;
    }
    goto skip_14;
    // 0x800AB34C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    skip_14:
    // 0x800AB350: lw          $t1, 0x18($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X18);
    // 0x800AB354: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x800AB358: beql        $t1, $zero, L_800AB4B8
    if (ctx->r9 == 0) {
        // 0x800AB35C: lw          $a0, 0x2C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X2C);
            goto L_800AB4B8;
    }
    goto skip_15;
    // 0x800AB35C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    skip_15:
L_800AB360:
    // 0x800AB360: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x800AB364: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x800AB368: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x800AB36C: lw          $t7, 0x28($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X28);
    // 0x800AB370: beql        $t7, $zero, L_800AB484
    if (ctx->r15 == 0) {
        // 0x800AB374: lw          $t8, 0x8($a2)
        ctx->r24 = MEM_W(ctx->r6, 0X8);
            goto L_800AB484;
    }
    goto skip_16;
    // 0x800AB374: lw          $t8, 0x8($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X8);
    skip_16:
    // 0x800AB378: lw          $a1, 0x24($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X24);
    // 0x800AB37C: addiu       $a3, $a3, 0x7
    ctx->r7 = ADD32(ctx->r7, 0X7);
    // 0x800AB380: and         $v1, $a3, $at
    ctx->r3 = ctx->r7 & ctx->r1;
    // 0x800AB384: sw          $v1, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r3;
    // 0x800AB388: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x800AB38C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x800AB390: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800AB394: beq         $a1, $zero, L_800AB478
    if (ctx->r5 == 0) {
        // 0x800AB398: lw          $v0, 0x20($a2)
        ctx->r2 = MEM_W(ctx->r6, 0X20);
            goto L_800AB478;
    }
    // 0x800AB398: lw          $v0, 0x20($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X20);
    // 0x800AB39C: andi        $t0, $a1, 0x3
    ctx->r8 = ctx->r5 & 0X3;
    // 0x800AB3A0: negu        $t0, $t0
    ctx->r8 = SUB32(0, ctx->r8);
    // 0x800AB3A4: beq         $t0, $zero, L_800AB3E4
    if (ctx->r8 == 0) {
        // 0x800AB3A8: addu        $a2, $t0, $a1
        ctx->r6 = ADD32(ctx->r8, ctx->r5);
            goto L_800AB3E4;
    }
    // 0x800AB3A8: addu        $a2, $t0, $a1
    ctx->r6 = ADD32(ctx->r8, ctx->r5);
L_800AB3AC:
    // 0x800AB3AC: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x800AB3B0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x800AB3B4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800AB3B8: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
    // 0x800AB3BC: lw          $t4, -0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, -0XC);
    // 0x800AB3C0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x800AB3C4: sw          $t4, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->r12;
    // 0x800AB3C8: lw          $at, -0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X8);
    // 0x800AB3CC: sw          $at, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->r1;
    // 0x800AB3D0: lw          $t4, -0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, -0X4);
    // 0x800AB3D4: bne         $a2, $a0, L_800AB3AC
    if (ctx->r6 != ctx->r4) {
        // 0x800AB3D8: sw          $t4, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r12;
            goto L_800AB3AC;
    }
    // 0x800AB3D8: sw          $t4, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r12;
    // 0x800AB3DC: beql        $a0, $zero, L_800AB478
    if (ctx->r4 == 0) {
        // 0x800AB3E0: lw          $a2, 0x0($t2)
        ctx->r6 = MEM_W(ctx->r10, 0X0);
            goto L_800AB478;
    }
    goto skip_17;
    // 0x800AB3E0: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    skip_17:
L_800AB3E4:
    // 0x800AB3E4: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x800AB3E8: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x800AB3EC: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x800AB3F0: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
    // 0x800AB3F4: lw          $t6, -0x3C($v0)
    ctx->r14 = MEM_W(ctx->r2, -0X3C);
    // 0x800AB3F8: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x800AB3FC: sw          $t6, -0x3C($v1)
    MEM_W(-0X3C, ctx->r3) = ctx->r14;
    // 0x800AB400: lw          $at, -0x38($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X38);
    // 0x800AB404: sw          $at, -0x38($v1)
    MEM_W(-0X38, ctx->r3) = ctx->r1;
    // 0x800AB408: lw          $t6, -0x34($v0)
    ctx->r14 = MEM_W(ctx->r2, -0X34);
    // 0x800AB40C: sw          $t6, -0x34($v1)
    MEM_W(-0X34, ctx->r3) = ctx->r14;
    // 0x800AB410: lw          $at, -0x30($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X30);
    // 0x800AB414: sw          $at, -0x30($v1)
    MEM_W(-0X30, ctx->r3) = ctx->r1;
    // 0x800AB418: lw          $t8, -0x2C($v0)
    ctx->r24 = MEM_W(ctx->r2, -0X2C);
    // 0x800AB41C: sw          $t8, -0x2C($v1)
    MEM_W(-0X2C, ctx->r3) = ctx->r24;
    // 0x800AB420: lw          $at, -0x28($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X28);
    // 0x800AB424: sw          $at, -0x28($v1)
    MEM_W(-0X28, ctx->r3) = ctx->r1;
    // 0x800AB428: lw          $t8, -0x24($v0)
    ctx->r24 = MEM_W(ctx->r2, -0X24);
    // 0x800AB42C: sw          $t8, -0x24($v1)
    MEM_W(-0X24, ctx->r3) = ctx->r24;
    // 0x800AB430: lw          $at, -0x20($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X20);
    // 0x800AB434: sw          $at, -0x20($v1)
    MEM_W(-0X20, ctx->r3) = ctx->r1;
    // 0x800AB438: lw          $t4, -0x1C($v0)
    ctx->r12 = MEM_W(ctx->r2, -0X1C);
    // 0x800AB43C: sw          $t4, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = ctx->r12;
    // 0x800AB440: lw          $at, -0x18($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X18);
    // 0x800AB444: sw          $at, -0x18($v1)
    MEM_W(-0X18, ctx->r3) = ctx->r1;
    // 0x800AB448: lw          $t4, -0x14($v0)
    ctx->r12 = MEM_W(ctx->r2, -0X14);
    // 0x800AB44C: sw          $t4, -0x14($v1)
    MEM_W(-0X14, ctx->r3) = ctx->r12;
    // 0x800AB450: lw          $at, -0x10($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X10);
    // 0x800AB454: sw          $at, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->r1;
    // 0x800AB458: lw          $t6, -0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, -0XC);
    // 0x800AB45C: sw          $t6, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->r14;
    // 0x800AB460: lw          $at, -0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X8);
    // 0x800AB464: sw          $at, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->r1;
    // 0x800AB468: lw          $t6, -0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, -0X4);
    // 0x800AB46C: bne         $a0, $zero, L_800AB3E4
    if (ctx->r4 != 0) {
        // 0x800AB470: sw          $t6, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r14;
            goto L_800AB3E4;
    }
    // 0x800AB470: sw          $t6, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r14;
    // 0x800AB474: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
L_800AB478:
    // 0x800AB478: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x800AB47C: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x800AB480: lw          $t8, 0x8($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X8);
L_800AB484:
    // 0x800AB484: beql        $t8, $zero, L_800AB49C
    if (ctx->r24 == 0) {
        // 0x800AB488: lw          $t9, 0xC($a2)
        ctx->r25 = MEM_W(ctx->r6, 0XC);
            goto L_800AB49C;
    }
    goto skip_18;
    // 0x800AB488: lw          $t9, 0xC($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XC);
    skip_18:
    // 0x800AB48C: sw          $a3, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r7;
    // 0x800AB490: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x800AB494: addiu       $a3, $a3, 0x40
    ctx->r7 = ADD32(ctx->r7, 0X40);
    // 0x800AB498: lw          $t9, 0xC($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XC);
L_800AB49C:
    // 0x800AB49C: beq         $t9, $zero, L_800AB4AC
    if (ctx->r25 == 0) {
        // 0x800AB4A0: nop
    
            goto L_800AB4AC;
    }
    // 0x800AB4A0: nop

    // 0x800AB4A4: sw          $a3, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r7;
    // 0x800AB4A8: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
L_800AB4AC:
    // 0x800AB4AC: bne         $t1, $zero, L_800AB360
    if (ctx->r9 != 0) {
        // 0x800AB4B0: addiu       $t2, $t2, 0x4
        ctx->r10 = ADD32(ctx->r10, 0X4);
            goto L_800AB360;
    }
    // 0x800AB4B0: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x800AB4B4: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
L_800AB4B8:
    // 0x800AB4B8: beql        $a0, $zero, L_800AB5D0
    if (ctx->r4 == 0) {
        // 0x800AB4BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800AB5D0;
    }
    goto skip_19;
    // 0x800AB4BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_19:
    // 0x800AB4C0: jal         0x800ABD64
    // 0x800AB4C4: nop

    func_800ABD64(rdram, ctx);
        goto after_5;
    // 0x800AB4C4: nop

    after_5:
    // 0x800AB4C8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x800AB4CC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x800AB4D0: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x800AB4D4: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x800AB4D8: beq         $t1, $zero, L_800AB5CC
    if (ctx->r9 == 0) {
        // 0x800AB4DC: andi        $a1, $t1, 0x3
        ctx->r5 = ctx->r9 & 0X3;
            goto L_800AB5CC;
    }
    // 0x800AB4DC: andi        $a1, $t1, 0x3
    ctx->r5 = ctx->r9 & 0X3;
    // 0x800AB4E0: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x800AB4E4: beq         $a1, $zero, L_800AB524
    if (ctx->r5 == 0) {
        // 0x800AB4E8: addu        $a0, $a1, $t1
        ctx->r4 = ADD32(ctx->r5, ctx->r9);
            goto L_800AB524;
    }
    // 0x800AB4E8: addu        $a0, $a1, $t1
    ctx->r4 = ADD32(ctx->r5, ctx->r9);
L_800AB4EC:
    // 0x800AB4EC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800AB4F0: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x800AB4F4: bnel        $t3, $v0, L_800AB508
    if (ctx->r11 != ctx->r2) {
        // 0x800AB4F8: lw          $t4, 0x28($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X28);
            goto L_800AB508;
    }
    goto skip_20;
    // 0x800AB4F8: lw          $t4, 0x28($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X28);
    skip_20:
    // 0x800AB4FC: b           L_800AB514
    // 0x800AB500: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
        goto L_800AB514;
    // 0x800AB500: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x800AB504: lw          $t4, 0x28($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X28);
L_800AB508:
    // 0x800AB508: sll         $t5, $v0, 6
    ctx->r13 = S32(ctx->r2 << 6);
    // 0x800AB50C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800AB510: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_800AB514:
    // 0x800AB514: bne         $a0, $t1, L_800AB4EC
    if (ctx->r4 != ctx->r9) {
        // 0x800AB518: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_800AB4EC;
    }
    // 0x800AB518: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800AB51C: beql        $t1, $zero, L_800AB5D0
    if (ctx->r9 == 0) {
        // 0x800AB520: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800AB5D0;
    }
    goto skip_21;
    // 0x800AB520: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_21:
L_800AB524:
    // 0x800AB524: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800AB528: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
    // 0x800AB52C: bnel        $t3, $v0, L_800AB540
    if (ctx->r11 != ctx->r2) {
        // 0x800AB530: lw          $t7, 0x28($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X28);
            goto L_800AB540;
    }
    goto skip_22;
    // 0x800AB530: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
    skip_22:
    // 0x800AB534: b           L_800AB54C
    // 0x800AB538: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
        goto L_800AB54C;
    // 0x800AB538: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x800AB53C: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
L_800AB540:
    // 0x800AB540: sll         $t8, $v0, 6
    ctx->r24 = S32(ctx->r2 << 6);
    // 0x800AB544: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AB548: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
L_800AB54C:
    // 0x800AB54C: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x800AB550: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800AB554: bnel        $t3, $v0, L_800AB568
    if (ctx->r11 != ctx->r2) {
        // 0x800AB558: lw          $t4, 0x28($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X28);
            goto L_800AB568;
    }
    goto skip_23;
    // 0x800AB558: lw          $t4, 0x28($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X28);
    skip_23:
    // 0x800AB55C: b           L_800AB574
    // 0x800AB560: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
        goto L_800AB574;
    // 0x800AB560: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x800AB564: lw          $t4, 0x28($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X28);
L_800AB568:
    // 0x800AB568: sll         $t5, $v0, 6
    ctx->r13 = S32(ctx->r2 << 6);
    // 0x800AB56C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800AB570: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_800AB574:
    // 0x800AB574: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x800AB578: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800AB57C: bnel        $t3, $v0, L_800AB590
    if (ctx->r11 != ctx->r2) {
        // 0x800AB580: lw          $t7, 0x28($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X28);
            goto L_800AB590;
    }
    goto skip_24;
    // 0x800AB580: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
    skip_24:
    // 0x800AB584: b           L_800AB59C
    // 0x800AB588: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
        goto L_800AB59C;
    // 0x800AB588: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x800AB58C: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
L_800AB590:
    // 0x800AB590: sll         $t8, $v0, 6
    ctx->r24 = S32(ctx->r2 << 6);
    // 0x800AB594: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AB598: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
L_800AB59C:
    // 0x800AB59C: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x800AB5A0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800AB5A4: bnel        $t3, $v0, L_800AB5B8
    if (ctx->r11 != ctx->r2) {
        // 0x800AB5A8: lw          $t4, 0x28($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X28);
            goto L_800AB5B8;
    }
    goto skip_25;
    // 0x800AB5A8: lw          $t4, 0x28($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X28);
    skip_25:
    // 0x800AB5AC: b           L_800AB5C4
    // 0x800AB5B0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
        goto L_800AB5C4;
    // 0x800AB5B0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x800AB5B4: lw          $t4, 0x28($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X28);
L_800AB5B8:
    // 0x800AB5B8: sll         $t5, $v0, 6
    ctx->r13 = S32(ctx->r2 << 6);
    // 0x800AB5BC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800AB5C0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_800AB5C4:
    // 0x800AB5C4: bne         $t1, $zero, L_800AB524
    if (ctx->r9 != 0) {
        // 0x800AB5C8: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_800AB524;
    }
    // 0x800AB5C8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_800AB5CC:
    // 0x800AB5CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800AB5D0:
    // 0x800AB5D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800AB5D4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x800AB5D8: jr          $ra
    // 0x800AB5DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800AB5DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800AB5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AB5E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AB5E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AB5E8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800AB5EC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800AB5F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800AB5F4: lw          $a1, 0x34($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X34);
    // 0x800AB5F8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800AB5FC: beql        $a1, $zero, L_800AB610
    if (ctx->r5 == 0) {
        // 0x800AB600: lw          $v0, 0x38($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X38);
            goto L_800AB610;
    }
    goto skip_0;
    // 0x800AB600: lw          $v0, 0x38($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X38);
    skip_0:
    // 0x800AB604: jal         0x800AA940
    // 0x800AB608: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800AA940(rdram, ctx);
        goto after_0;
    // 0x800AB608: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x800AB60C: lw          $v0, 0x38($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X38);
L_800AB610:
    // 0x800AB610: beql        $v0, $zero, L_800AB640
    if (ctx->r2 == 0) {
        // 0x800AB614: lw          $v0, 0x3C($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X3C);
            goto L_800AB640;
    }
    goto skip_1;
    // 0x800AB614: lw          $v0, 0x3C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X3C);
    skip_1:
    // 0x800AB618: lw          $s0, 0x14($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X14);
    // 0x800AB61C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800AB620: beql        $s0, $zero, L_800AB640
    if (ctx->r16 == 0) {
        // 0x800AB624: lw          $v0, 0x3C($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X3C);
            goto L_800AB640;
    }
    goto skip_2;
    // 0x800AB624: lw          $v0, 0x3C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X3C);
    skip_2:
L_800AB628:
    // 0x800AB628: jal         0x800AA8DC
    // 0x800AB62C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_800AA8DC(rdram, ctx);
        goto after_1;
    // 0x800AB62C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_1:
    // 0x800AB630: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800AB634: bne         $s0, $zero, L_800AB628
    if (ctx->r16 != 0) {
        // 0x800AB638: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800AB628;
    }
    // 0x800AB638: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800AB63C: lw          $v0, 0x3C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X3C);
L_800AB640:
    // 0x800AB640: beql        $v0, $zero, L_800AB670
    if (ctx->r2 == 0) {
        // 0x800AB644: lw          $v0, 0x40($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X40);
            goto L_800AB670;
    }
    goto skip_3;
    // 0x800AB644: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
    skip_3:
    // 0x800AB648: lw          $s0, 0x18($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X18);
    // 0x800AB64C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800AB650: beql        $s0, $zero, L_800AB670
    if (ctx->r16 == 0) {
        // 0x800AB654: lw          $v0, 0x40($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X40);
            goto L_800AB670;
    }
    goto skip_4;
    // 0x800AB654: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
    skip_4:
L_800AB658:
    // 0x800AB658: jal         0x800AA874
    // 0x800AB65C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_800AA874(rdram, ctx);
        goto after_2;
    // 0x800AB65C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_2:
    // 0x800AB660: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800AB664: bne         $s0, $zero, L_800AB658
    if (ctx->r16 != 0) {
        // 0x800AB668: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800AB658;
    }
    // 0x800AB668: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800AB66C: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
L_800AB670:
    // 0x800AB670: beql        $v0, $zero, L_800AB6A0
    if (ctx->r2 == 0) {
        // 0x800AB674: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_800AB6A0;
    }
    goto skip_5;
    // 0x800AB674: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_5:
    // 0x800AB678: lw          $s0, 0x1C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X1C);
    // 0x800AB67C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800AB680: beql        $s0, $zero, L_800AB6A0
    if (ctx->r16 == 0) {
        // 0x800AB684: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_800AB6A0;
    }
    goto skip_6;
    // 0x800AB684: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_6:
L_800AB688:
    // 0x800AB688: jal         0x800AA638
    // 0x800AB68C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_800AA638(rdram, ctx);
        goto after_3;
    // 0x800AB68C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_3:
    // 0x800AB690: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800AB694: bne         $s0, $zero, L_800AB688
    if (ctx->r16 != 0) {
        // 0x800AB698: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800AB688;
    }
    // 0x800AB698: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800AB69C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_800AB6A0:
    // 0x800AB6A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AB6A4: bne         $a0, $at, L_800AB6C4
    if (ctx->r4 != ctx->r1) {
        // 0x800AB6A8: nop
    
            goto L_800AB6C4;
    }
    // 0x800AB6A8: nop

    // 0x800AB6AC: jal         0x8007E328
    // 0x800AB6B0: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    func_8007E328(rdram, ctx);
        goto after_4;
    // 0x800AB6B0: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    after_4:
    // 0x800AB6B4: jal         0x8007E328
    // 0x800AB6B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8007E328(rdram, ctx);
        goto after_5;
    // 0x800AB6B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_5:
    // 0x800AB6BC: b           L_800AB6EC
    // 0x800AB6C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800AB6EC;
    // 0x800AB6C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800AB6C4:
    // 0x800AB6C4: jal         0x800AA3DC
    // 0x800AB6C8: nop

    func_800AA3DC(rdram, ctx);
        goto after_6;
    // 0x800AB6C8: nop

    after_6:
    // 0x800AB6CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AB6D0: bne         $v0, $at, L_800AB6E0
    if (ctx->r2 != ctx->r1) {
        // 0x800AB6D4: nop
    
            goto L_800AB6E0;
    }
    // 0x800AB6D4: nop

    // 0x800AB6D8: jal         0x8007E328
    // 0x800AB6DC: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    func_8007E328(rdram, ctx);
        goto after_7;
    // 0x800AB6DC: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    after_7:
L_800AB6E0:
    // 0x800AB6E0: jal         0x800AA3F4
    // 0x800AB6E4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    func_800AA3F4(rdram, ctx);
        goto after_8;
    // 0x800AB6E4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_8:
    // 0x800AB6E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800AB6EC:
    // 0x800AB6EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800AB6F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800AB6F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800AB6F8: jr          $ra
    // 0x800AB6FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800AB6FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800AB700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AB700: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x800AB704: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x800AB708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AB70C: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x800AB710: addiu       $v1, $t7, 0x20
    ctx->r3 = ADD32(ctx->r15, 0X20);
    // 0x800AB714: blez        $v0, L_800AB78C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800AB718: sw          $v1, 0x28($a0)
        MEM_W(0X28, ctx->r4) = ctx->r3;
            goto L_800AB78C;
    }
    // 0x800AB718: sw          $v1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r3;
L_800AB71C:
    // 0x800AB71C: lw          $t9, 0x1C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X1C);
    // 0x800AB720: lw          $a2, 0x18($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X18);
    // 0x800AB724: sw          $a0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r4;
    // 0x800AB728: addu        $t2, $t9, $a0
    ctx->r10 = ADD32(ctx->r25, ctx->r4);
    // 0x800AB72C: addiu       $a3, $t2, 0x20
    ctx->r7 = ADD32(ctx->r10, 0X20);
    // 0x800AB730: sw          $a3, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r7;
    // 0x800AB734: blez        $a2, L_800AB780
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800AB738: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_800AB780;
    }
    // 0x800AB738: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_800AB73C:
    // 0x800AB73C: lw          $t4, 0xC($a3)
    ctx->r12 = MEM_W(ctx->r7, 0XC);
    // 0x800AB740: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800AB744: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x800AB748: addiu       $t1, $t5, 0x20
    ctx->r9 = ADD32(ctx->r13, 0X20);
    // 0x800AB74C: sw          $t1, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r9;
L_800AB750:
    // 0x800AB750: lw          $t7, 0x4($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X4);
    // 0x800AB754: lh          $t3, 0x0($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X0);
    // 0x800AB758: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x800AB75C: addiu       $t9, $t8, 0x20
    ctx->r25 = ADD32(ctx->r24, 0X20);
    // 0x800AB760: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x800AB764: lh          $t2, 0x4($a3)
    ctx->r10 = MEM_H(ctx->r7, 0X4);
    // 0x800AB768: beq         $t2, $t3, L_800AB778
    if (ctx->r10 == ctx->r11) {
        // 0x800AB76C: nop
    
            goto L_800AB778;
    }
    // 0x800AB76C: nop

    // 0x800AB770: b           L_800AB750
    // 0x800AB774: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_800AB750;
    // 0x800AB774: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_800AB778:
    // 0x800AB778: bne         $t0, $a2, L_800AB73C
    if (ctx->r8 != ctx->r6) {
        // 0x800AB77C: addiu       $a3, $a3, 0x14
        ctx->r7 = ADD32(ctx->r7, 0X14);
            goto L_800AB73C;
    }
    // 0x800AB77C: addiu       $a3, $a3, 0x14
    ctx->r7 = ADD32(ctx->r7, 0X14);
L_800AB780:
    // 0x800AB780: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800AB784: bne         $a1, $v0, L_800AB71C
    if (ctx->r5 != ctx->r2) {
        // 0x800AB788: addiu       $v1, $v1, 0x24
        ctx->r3 = ADD32(ctx->r3, 0X24);
            goto L_800AB71C;
    }
    // 0x800AB788: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
L_800AB78C:
    // 0x800AB78C: jr          $ra
    // 0x800AB790: nop

    return;
    // 0x800AB790: nop

;}
RECOMP_FUNC void func_800AB794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AB794: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800AB798: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AB79C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800AB7A0: lw          $t4, 0x24($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X24);
    // 0x800AB7A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800AB7A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800AB7AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800AB7B0: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x800AB7B4: lw          $t2, 0x28($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X28);
    // 0x800AB7B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AB7BC: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x800AB7C0: blez        $t4, L_800AB828
    if (SIGNED(ctx->r12) <= 0) {
        // 0x800AB7C4: swc1        $f4, 0x18($a0)
        MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
            goto L_800AB828;
    }
    // 0x800AB7C4: swc1        $f4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
    // 0x800AB7C8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_800AB7CC:
    // 0x800AB7CC: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    // 0x800AB7D0: sw          $s0, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->r16;
    // 0x800AB7D4: lw          $a3, 0x1C($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X1C);
    // 0x800AB7D8: blez        $a0, L_800AB814
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800AB7DC: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_800AB814;
    }
    // 0x800AB7DC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_800AB7E0:
    // 0x800AB7E0: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x800AB7E4: sh          $t1, 0x6($a3)
    MEM_H(0X6, ctx->r7) = ctx->r9;
    // 0x800AB7E8: lh          $v1, 0x4($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X4);
    // 0x800AB7EC: sw          $v0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r2;
L_800AB7F0:
    // 0x800AB7F0: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x800AB7F4: beql        $v1, $t6, L_800AB808
    if (ctx->r3 == ctx->r14) {
        // 0x800AB7F8: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_800AB808;
    }
    goto skip_0;
    // 0x800AB7F8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_0:
    // 0x800AB7FC: b           L_800AB7F0
    // 0x800AB800: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
        goto L_800AB7F0;
    // 0x800AB800: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800AB804: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_800AB808:
    // 0x800AB808: addiu       $a3, $a3, 0x14
    ctx->r7 = ADD32(ctx->r7, 0X14);
    // 0x800AB80C: bne         $t0, $a0, L_800AB7E0
    if (ctx->r8 != ctx->r4) {
        // 0x800AB810: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_800AB7E0;
    }
    // 0x800AB810: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
L_800AB814:
    // 0x800AB814: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x800AB818: addiu       $t2, $t2, 0x24
    ctx->r10 = ADD32(ctx->r10, 0X24);
    // 0x800AB81C: sw          $zero, -0x20($t2)
    MEM_W(-0X20, ctx->r10) = 0;
    // 0x800AB820: bne         $t3, $t4, L_800AB7CC
    if (ctx->r11 != ctx->r12) {
        // 0x800AB824: sw          $zero, -0x1C($t2)
        MEM_W(-0X1C, ctx->r10) = 0;
            goto L_800AB7CC;
    }
    // 0x800AB824: sw          $zero, -0x1C($t2)
    MEM_W(-0X1C, ctx->r10) = 0;
L_800AB828:
    // 0x800AB828: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800AB82C: jal         0x8007E03C
    // 0x800AB830: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x800AB830: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    after_0:
    // 0x800AB834: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800AB838: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800AB83C: lw          $t2, 0x28($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X28);
    // 0x800AB840: beql        $t3, $zero, L_800AB91C
    if (ctx->r11 == 0) {
        // 0x800AB844: sw          $zero, 0x8($s0)
        MEM_W(0X8, ctx->r16) = 0;
            goto L_800AB91C;
    }
    goto skip_1;
    // 0x800AB844: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    skip_1:
    // 0x800AB848: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800AB84C: nop

L_800AB850:
    // 0x800AB850: lw          $t0, 0x18($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X18);
    // 0x800AB854: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
    // 0x800AB858: lw          $a3, 0x1C($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X1C);
    // 0x800AB85C: beq         $t0, $zero, L_800AB910
    if (ctx->r8 == 0) {
        // 0x800AB860: nop
    
            goto L_800AB910;
    }
    // 0x800AB860: nop

L_800AB864:
    // 0x800AB864: lw          $a2, 0xC($a3)
    ctx->r6 = MEM_W(ctx->r7, 0XC);
    // 0x800AB868: sw          $a1, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r5;
    // 0x800AB86C: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x800AB870: lh          $v1, 0x2($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X2);
    // 0x800AB874: addiu       $v0, $a1, 0x4
    ctx->r2 = ADD32(ctx->r5, 0X4);
    // 0x800AB878: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x800AB87C: andi        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 & 0X1;
    // 0x800AB880: beq         $t7, $zero, L_800AB898
    if (ctx->r15 == 0) {
        // 0x800AB884: sra         $t8, $v1, 1
        ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
            goto L_800AB898;
    }
    // 0x800AB884: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800AB888: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800AB88C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800AB890: b           L_800AB89C
    // 0x800AB894: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
        goto L_800AB89C;
    // 0x800AB894: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
L_800AB898:
    // 0x800AB898: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
L_800AB89C:
    // 0x800AB89C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x800AB8A0: beq         $t9, $zero, L_800AB8B8
    if (ctx->r25 == 0) {
        // 0x800AB8A4: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_800AB8B8;
    }
    // 0x800AB8A4: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x800AB8A8: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800AB8AC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800AB8B0: b           L_800AB8BC
    // 0x800AB8B4: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
        goto L_800AB8BC;
    // 0x800AB8B4: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
L_800AB8B8:
    // 0x800AB8B8: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
L_800AB8BC:
    // 0x800AB8BC: sra         $t5, $v1, 1
    ctx->r13 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800AB8C0: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x800AB8C4: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x800AB8C8: beq         $t6, $zero, L_800AB8E0
    if (ctx->r14 == 0) {
        // 0x800AB8CC: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800AB8E0;
    }
    // 0x800AB8CC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800AB8D0: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800AB8D4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800AB8D8: b           L_800AB8E4
    // 0x800AB8DC: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
        goto L_800AB8E4;
    // 0x800AB8DC: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
L_800AB8E0:
    // 0x800AB8E0: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
L_800AB8E4:
    // 0x800AB8E4: sra         $t7, $v1, 1
    ctx->r15 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800AB8E8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x800AB8EC: beq         $t8, $zero, L_800AB900
    if (ctx->r24 == 0) {
        // 0x800AB8F0: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800AB900;
    }
    // 0x800AB8F0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800AB8F4: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800AB8F8: b           L_800AB904
    // 0x800AB8FC: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
        goto L_800AB904;
    // 0x800AB8FC: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
L_800AB900:
    // 0x800AB900: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
L_800AB904:
    // 0x800AB904: addiu       $a3, $a3, 0x14
    ctx->r7 = ADD32(ctx->r7, 0X14);
    // 0x800AB908: bne         $t0, $zero, L_800AB864
    if (ctx->r8 != 0) {
        // 0x800AB90C: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_800AB864;
    }
    // 0x800AB90C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
L_800AB910:
    // 0x800AB910: bne         $t3, $zero, L_800AB850
    if (ctx->r11 != 0) {
        // 0x800AB914: addiu       $t2, $t2, 0x24
        ctx->r10 = ADD32(ctx->r10, 0X24);
            goto L_800AB850;
    }
    // 0x800AB914: addiu       $t2, $t2, 0x24
    ctx->r10 = ADD32(ctx->r10, 0X24);
    // 0x800AB918: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_800AB91C:
    // 0x800AB91C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x800AB920: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AB924: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800AB928: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800AB92C: jr          $ra
    // 0x800AB930: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800AB930: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800AB934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AB934: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800AB938: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AB93C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800AB940: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x800AB944: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AB948: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800AB94C: bne         $a1, $at, L_800AB974
    if (ctx->r5 != ctx->r1) {
        // 0x800AB950: nop
    
            goto L_800AB974;
    }
    // 0x800AB950: nop

    // 0x800AB954: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x800AB958: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x800AB95C: jal         0x8007E328
    // 0x800AB960: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x800AB960: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    after_0:
    // 0x800AB964: jal         0x8007E328
    // 0x800AB968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x800AB968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800AB96C: b           L_800AB9A4
    // 0x800AB970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800AB9A4;
    // 0x800AB970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800AB974:
    // 0x800AB974: jal         0x800AA3DC
    // 0x800AB978: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800AA3DC(rdram, ctx);
        goto after_2;
    // 0x800AB978: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x800AB97C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AB980: bne         $v0, $at, L_800AB998
    if (ctx->r2 != ctx->r1) {
        // 0x800AB984: nop
    
            goto L_800AB998;
    }
    // 0x800AB984: nop

    // 0x800AB988: lw          $t8, 0x28($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X28);
    // 0x800AB98C: lw          $t9, 0x1C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X1C);
    // 0x800AB990: jal         0x8007E328
    // 0x800AB994: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    func_8007E328(rdram, ctx);
        goto after_3;
    // 0x800AB994: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    after_3:
L_800AB998:
    // 0x800AB998: jal         0x800AA3F4
    // 0x800AB99C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800AA3F4(rdram, ctx);
        goto after_4;
    // 0x800AB99C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_4:
    // 0x800AB9A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800AB9A4:
    // 0x800AB9A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800AB9A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800AB9AC: jr          $ra
    // 0x800AB9B0: nop

    return;
    // 0x800AB9B0: nop

;}
RECOMP_FUNC void func_800AB9B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AB9B4: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x800AB9B8: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x800AB9BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AB9C0: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x800AB9C4: beq         $t8, $zero, L_800AB9D8
    if (ctx->r24 == 0) {
        // 0x800AB9C8: sw          $t7, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->r15;
            goto L_800AB9D8;
    }
    // 0x800AB9C8: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x800AB9CC: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800AB9D0: addu        $t0, $t9, $a1
    ctx->r8 = ADD32(ctx->r25, ctx->r5);
    // 0x800AB9D4: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
L_800AB9D8:
    // 0x800AB9D8: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x800AB9DC: beql        $t1, $zero, L_800AB9F4
    if (ctx->r9 == 0) {
        // 0x800AB9E0: lh          $v0, 0x2($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X2);
            goto L_800AB9F4;
    }
    goto skip_0;
    // 0x800AB9E0: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    skip_0:
    // 0x800AB9E4: lw          $t2, 0xC($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC);
    // 0x800AB9E8: addu        $t3, $t2, $a1
    ctx->r11 = ADD32(ctx->r10, ctx->r5);
    // 0x800AB9EC: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
    // 0x800AB9F0: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
L_800AB9F4:
    // 0x800AB9F4: beql        $v0, $zero, L_800ABA10
    if (ctx->r2 == 0) {
        // 0x800AB9F8: lw          $v0, 0x4($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X4);
            goto L_800ABA10;
    }
    goto skip_1;
    // 0x800AB9F8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    skip_1:
    // 0x800AB9FC: beql        $v0, $at, L_800ABA30
    if (ctx->r2 == ctx->r1) {
        // 0x800ABA00: lw          $v0, 0x4($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X4);
            goto L_800ABA30;
    }
    goto skip_2;
    // 0x800ABA00: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    skip_2:
    // 0x800ABA04: jr          $ra
    // 0x800ABA08: nop

    return;
    // 0x800ABA08: nop

    // 0x800ABA0C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
L_800ABA10:
    // 0x800ABA10: lw          $t4, 0x10($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X10);
    // 0x800ABA14: beq         $t4, $zero, L_800ABAB0
    if (ctx->r12 == 0) {
        // 0x800ABA18: nop
    
            goto L_800ABAB0;
    }
    // 0x800ABA18: nop

    // 0x800ABA1C: lw          $t5, 0x10($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X10);
    // 0x800ABA20: addu        $t6, $t5, $a1
    ctx->r14 = ADD32(ctx->r13, ctx->r5);
    // 0x800ABA24: jr          $ra
    // 0x800ABA28: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    return;
    // 0x800ABA28: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    // 0x800ABA2C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
L_800ABA30:
    // 0x800ABA30: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800ABA34: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x800ABA38: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x800ABA3C: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x800ABA40: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x800ABA44: addu        $t0, $t9, $a1
    ctx->r8 = ADD32(ctx->r25, ctx->r5);
    // 0x800ABA48: addu        $t2, $t1, $a1
    ctx->r10 = ADD32(ctx->r9, ctx->r5);
    // 0x800ABA4C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800ABA50: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x800ABA54: beq         $t3, $zero, L_800ABA68
    if (ctx->r11 == 0) {
        // 0x800ABA58: sw          $t2, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->r10;
            goto L_800ABA68;
    }
    // 0x800ABA58: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // 0x800ABA5C: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x800ABA60: addu        $t5, $t4, $a1
    ctx->r13 = ADD32(ctx->r12, ctx->r5);
    // 0x800ABA64: sw          $t5, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r13;
L_800ABA68:
    // 0x800ABA68: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x800ABA6C: beql        $t6, $zero, L_800ABA84
    if (ctx->r14 == 0) {
        // 0x800ABA70: lw          $t9, 0x14($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X14);
            goto L_800ABA84;
    }
    goto skip_3;
    // 0x800ABA70: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    skip_3:
    // 0x800ABA74: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x800ABA78: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x800ABA7C: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x800ABA80: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
L_800ABA84:
    // 0x800ABA84: beql        $t9, $zero, L_800ABA9C
    if (ctx->r25 == 0) {
        // 0x800ABA88: lw          $t2, 0x24($v0)
        ctx->r10 = MEM_W(ctx->r2, 0X24);
            goto L_800ABA9C;
    }
    goto skip_4;
    // 0x800ABA88: lw          $t2, 0x24($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X24);
    skip_4:
    // 0x800ABA8C: lw          $t0, 0x14($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X14);
    // 0x800ABA90: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x800ABA94: sw          $t1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r9;
    // 0x800ABA98: lw          $t2, 0x24($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X24);
L_800ABA9C:
    // 0x800ABA9C: beq         $t2, $zero, L_800ABAB0
    if (ctx->r10 == 0) {
        // 0x800ABAA0: nop
    
            goto L_800ABAB0;
    }
    // 0x800ABAA0: nop

    // 0x800ABAA4: lw          $t3, 0x24($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X24);
    // 0x800ABAA8: addu        $t4, $t3, $a1
    ctx->r12 = ADD32(ctx->r11, ctx->r5);
    // 0x800ABAAC: sw          $t4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r12;
L_800ABAB0:
    // 0x800ABAB0: jr          $ra
    // 0x800ABAB4: nop

    return;
    // 0x800ABAB4: nop

;}
RECOMP_FUNC void func_800ABAB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ABAB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800ABABC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800ABAC0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800ABAC4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800ABAC8: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x800ABACC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800ABAD0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800ABAD4: beql        $t6, $zero, L_800ABAEC
    if (ctx->r14 == 0) {
        // 0x800ABAD8: lw          $t9, 0x14($a2)
        ctx->r25 = MEM_W(ctx->r6, 0X14);
            goto L_800ABAEC;
    }
    goto skip_0;
    // 0x800ABAD8: lw          $t9, 0x14($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X14);
    skip_0:
    // 0x800ABADC: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x800ABAE0: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x800ABAE4: sw          $t8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r24;
    // 0x800ABAE8: lw          $t9, 0x14($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X14);
L_800ABAEC:
    // 0x800ABAEC: beq         $t9, $zero, L_800ABAF8
    if (ctx->r25 == 0) {
        // 0x800ABAF0: addu        $t1, $t9, $s1
        ctx->r9 = ADD32(ctx->r25, ctx->r17);
            goto L_800ABAF8;
    }
    // 0x800ABAF0: addu        $t1, $t9, $s1
    ctx->r9 = ADD32(ctx->r25, ctx->r17);
    // 0x800ABAF4: sw          $t1, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r9;
L_800ABAF8:
    // 0x800ABAF8: lw          $t2, 0x18($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X18);
    // 0x800ABAFC: beq         $t2, $zero, L_800ABB08
    if (ctx->r10 == 0) {
        // 0x800ABB00: addu        $t4, $t2, $s1
        ctx->r12 = ADD32(ctx->r10, ctx->r17);
            goto L_800ABB08;
    }
    // 0x800ABB00: addu        $t4, $t2, $s1
    ctx->r12 = ADD32(ctx->r10, ctx->r17);
    // 0x800ABB04: sw          $t4, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r12;
L_800ABB08:
    // 0x800ABB08: lw          $t5, 0x1C($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X1C);
    // 0x800ABB0C: beq         $t5, $zero, L_800ABB18
    if (ctx->r13 == 0) {
        // 0x800ABB10: addu        $t7, $t5, $s1
        ctx->r15 = ADD32(ctx->r13, ctx->r17);
            goto L_800ABB18;
    }
    // 0x800ABB10: addu        $t7, $t5, $s1
    ctx->r15 = ADD32(ctx->r13, ctx->r17);
    // 0x800ABB14: sw          $t7, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r15;
L_800ABB18:
    // 0x800ABB18: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x800ABB1C: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x800ABB20: beq         $v1, $zero, L_800ABB90
    if (ctx->r3 == 0) {
        // 0x800ABB24: andi        $a1, $v1, 0x3
        ctx->r5 = ctx->r3 & 0X3;
            goto L_800ABB90;
    }
    // 0x800ABB24: andi        $a1, $v1, 0x3
    ctx->r5 = ctx->r3 & 0X3;
    // 0x800ABB28: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x800ABB2C: beq         $a1, $zero, L_800ABB54
    if (ctx->r5 == 0) {
        // 0x800ABB30: addu        $a0, $a1, $v1
        ctx->r4 = ADD32(ctx->r5, ctx->r3);
            goto L_800ABB54;
    }
    // 0x800ABB30: addu        $a0, $a1, $v1
    ctx->r4 = ADD32(ctx->r5, ctx->r3);
L_800ABB34:
    // 0x800ABB34: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x800ABB38: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800ABB3C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800ABB40: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x800ABB44: bne         $a0, $v1, L_800ABB34
    if (ctx->r4 != ctx->r3) {
        // 0x800ABB48: sw          $t9, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r25;
            goto L_800ABB34;
    }
    // 0x800ABB48: sw          $t9, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r25;
    // 0x800ABB4C: beql        $v1, $zero, L_800ABB94
    if (ctx->r3 == 0) {
        // 0x800ABB50: lw          $v1, 0x0($a2)
        ctx->r3 = MEM_W(ctx->r6, 0X0);
            goto L_800ABB94;
    }
    goto skip_1;
    // 0x800ABB50: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    skip_1:
L_800ABB54:
    // 0x800ABB54: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x800ABB58: lw          $t4, 0x14($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X14);
    // 0x800ABB5C: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x800ABB60: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x800ABB64: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x800ABB68: addu        $t3, $t2, $s1
    ctx->r11 = ADD32(ctx->r10, ctx->r17);
    // 0x800ABB6C: addu        $t5, $t4, $s1
    ctx->r13 = ADD32(ctx->r12, ctx->r17);
    // 0x800ABB70: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x800ABB74: addu        $t1, $t0, $s1
    ctx->r9 = ADD32(ctx->r8, ctx->r17);
    // 0x800ABB78: sw          $t7, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r15;
    // 0x800ABB7C: sw          $t5, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r13;
    // 0x800ABB80: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x800ABB84: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x800ABB88: bne         $v1, $zero, L_800ABB54
    if (ctx->r3 != 0) {
        // 0x800ABB8C: sw          $t1, -0x1C($v0)
        MEM_W(-0X1C, ctx->r2) = ctx->r9;
            goto L_800ABB54;
    }
    // 0x800ABB8C: sw          $t1, -0x1C($v0)
    MEM_W(-0X1C, ctx->r2) = ctx->r9;
L_800ABB90:
    // 0x800ABB90: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
L_800ABB94:
    // 0x800ABB94: lw          $s0, 0x10($a2)
    ctx->r16 = MEM_W(ctx->r6, 0X10);
    // 0x800ABB98: beq         $v1, $zero, L_800ABBC8
    if (ctx->r3 == 0) {
        // 0x800ABB9C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800ABBC8;
    }
    // 0x800ABB9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800ABBA0:
    // 0x800ABBA0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800ABBA4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x800ABBA8: jal         0x800AB9B4
    // 0x800ABBAC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800AB9B4(rdram, ctx);
        goto after_0;
    // 0x800ABBAC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x800ABBB0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800ABBB4: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x800ABBB8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800ABBBC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800ABBC0: bnel        $v1, $zero, L_800ABBA0
    if (ctx->r3 != 0) {
        // 0x800ABBC4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800ABBA0;
    }
    goto skip_2;
    // 0x800ABBC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
L_800ABBC8:
    // 0x800ABBC8: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x800ABBCC: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x800ABBD0: beq         $v1, $zero, L_800ABC88
    if (ctx->r3 == 0) {
        // 0x800ABBD4: andi        $a1, $v1, 0x3
        ctx->r5 = ctx->r3 & 0X3;
            goto L_800ABC88;
    }
    // 0x800ABBD4: andi        $a1, $v1, 0x3
    ctx->r5 = ctx->r3 & 0X3;
    // 0x800ABBD8: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x800ABBDC: beq         $a1, $zero, L_800ABC10
    if (ctx->r5 == 0) {
        // 0x800ABBE0: addu        $a0, $a1, $v1
        ctx->r4 = ADD32(ctx->r5, ctx->r3);
            goto L_800ABC10;
    }
    // 0x800ABBE0: addu        $a0, $a1, $v1
    ctx->r4 = ADD32(ctx->r5, ctx->r3);
L_800ABBE4:
    // 0x800ABBE4: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x800ABBE8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800ABBEC: beq         $t8, $zero, L_800ABC00
    if (ctx->r24 == 0) {
        // 0x800ABBF0: nop
    
            goto L_800ABC00;
    }
    // 0x800ABBF0: nop

    // 0x800ABBF4: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x800ABBF8: addu        $t0, $t9, $s1
    ctx->r8 = ADD32(ctx->r25, ctx->r17);
    // 0x800ABBFC: sw          $t0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r8;
L_800ABC00:
    // 0x800ABC00: bne         $a0, $v1, L_800ABBE4
    if (ctx->r4 != ctx->r3) {
        // 0x800ABC04: addiu       $v0, $v0, 0x18
        ctx->r2 = ADD32(ctx->r2, 0X18);
            goto L_800ABBE4;
    }
    // 0x800ABC04: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x800ABC08: beql        $v1, $zero, L_800ABC8C
    if (ctx->r3 == 0) {
        // 0x800ABC0C: lw          $v1, 0xC($a2)
        ctx->r3 = MEM_W(ctx->r6, 0XC);
            goto L_800ABC8C;
    }
    goto skip_3;
    // 0x800ABC0C: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
    skip_3:
L_800ABC10:
    // 0x800ABC10: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
    // 0x800ABC14: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x800ABC18: beql        $t1, $zero, L_800ABC30
    if (ctx->r9 == 0) {
        // 0x800ABC1C: lw          $t4, 0x28($v0)
        ctx->r12 = MEM_W(ctx->r2, 0X28);
            goto L_800ABC30;
    }
    goto skip_4;
    // 0x800ABC1C: lw          $t4, 0x28($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X28);
    skip_4:
    // 0x800ABC20: lw          $t2, 0x14($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X14);
    // 0x800ABC24: addu        $t3, $t2, $s1
    ctx->r11 = ADD32(ctx->r10, ctx->r17);
    // 0x800ABC28: sw          $t3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r11;
    // 0x800ABC2C: lw          $t4, 0x28($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X28);
L_800ABC30:
    // 0x800ABC30: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x800ABC34: beql        $t4, $zero, L_800ABC4C
    if (ctx->r12 == 0) {
        // 0x800ABC38: lw          $t7, 0x28($v0)
        ctx->r15 = MEM_W(ctx->r2, 0X28);
            goto L_800ABC4C;
    }
    goto skip_5;
    // 0x800ABC38: lw          $t7, 0x28($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X28);
    skip_5:
    // 0x800ABC3C: lw          $t5, 0x14($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X14);
    // 0x800ABC40: addu        $t6, $t5, $s1
    ctx->r14 = ADD32(ctx->r13, ctx->r17);
    // 0x800ABC44: sw          $t6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r14;
    // 0x800ABC48: lw          $t7, 0x28($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X28);
L_800ABC4C:
    // 0x800ABC4C: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x800ABC50: beql        $t7, $zero, L_800ABC68
    if (ctx->r15 == 0) {
        // 0x800ABC54: lw          $t0, 0x28($v0)
        ctx->r8 = MEM_W(ctx->r2, 0X28);
            goto L_800ABC68;
    }
    goto skip_6;
    // 0x800ABC54: lw          $t0, 0x28($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X28);
    skip_6:
    // 0x800ABC58: lw          $t8, 0x14($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X14);
    // 0x800ABC5C: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x800ABC60: sw          $t9, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r25;
    // 0x800ABC64: lw          $t0, 0x28($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X28);
L_800ABC68:
    // 0x800ABC68: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x800ABC6C: beq         $t0, $zero, L_800ABC80
    if (ctx->r8 == 0) {
        // 0x800ABC70: nop
    
            goto L_800ABC80;
    }
    // 0x800ABC70: nop

    // 0x800ABC74: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x800ABC78: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x800ABC7C: sw          $t2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r10;
L_800ABC80:
    // 0x800ABC80: bne         $v1, $zero, L_800ABC10
    if (ctx->r3 != 0) {
        // 0x800ABC84: addiu       $v0, $v0, 0x18
        ctx->r2 = ADD32(ctx->r2, 0X18);
            goto L_800ABC10;
    }
    // 0x800ABC84: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
L_800ABC88:
    // 0x800ABC88: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_800ABC8C:
    // 0x800ABC8C: lw          $v0, 0x1C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1C);
    // 0x800ABC90: beq         $v1, $zero, L_800ABD50
    if (ctx->r3 == 0) {
        // 0x800ABC94: andi        $a1, $v1, 0x3
        ctx->r5 = ctx->r3 & 0X3;
            goto L_800ABD50;
    }
    // 0x800ABC94: andi        $a1, $v1, 0x3
    ctx->r5 = ctx->r3 & 0X3;
    // 0x800ABC98: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x800ABC9C: beq         $a1, $zero, L_800ABCD4
    if (ctx->r5 == 0) {
        // 0x800ABCA0: addu        $a0, $a1, $v1
        ctx->r4 = ADD32(ctx->r5, ctx->r3);
            goto L_800ABCD4;
    }
    // 0x800ABCA0: addu        $a0, $a1, $v1
    ctx->r4 = ADD32(ctx->r5, ctx->r3);
L_800ABCA4:
    // 0x800ABCA4: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x800ABCA8: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x800ABCAC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800ABCB0: addu        $t4, $t3, $s1
    ctx->r12 = ADD32(ctx->r11, ctx->r17);
    // 0x800ABCB4: addu        $t6, $t5, $s1
    ctx->r14 = ADD32(ctx->r13, ctx->r17);
    // 0x800ABCB8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800ABCBC: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x800ABCC0: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x800ABCC4: bne         $a0, $v1, L_800ABCA4
    if (ctx->r4 != ctx->r3) {
        // 0x800ABCC8: addiu       $v0, $v0, 0xC
        ctx->r2 = ADD32(ctx->r2, 0XC);
            goto L_800ABCA4;
    }
    // 0x800ABCC8: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x800ABCCC: beql        $v1, $zero, L_800ABD54
    if (ctx->r3 == 0) {
        // 0x800ABCD0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800ABD54;
    }
    goto skip_7;
    // 0x800ABCD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
L_800ABCD4:
    // 0x800ABCD4: lw          $t1, 0xC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC);
    // 0x800ABCD8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800ABCDC: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x800ABCE0: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x800ABCE4: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x800ABCE8: addu        $t0, $t9, $s1
    ctx->r8 = ADD32(ctx->r25, ctx->r17);
    // 0x800ABCEC: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x800ABCF0: lw          $t7, 0x1C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X1C);
    // 0x800ABCF4: lw          $t1, 0x28($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X28);
    // 0x800ABCF8: lw          $t3, 0x10($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X10);
    // 0x800ABCFC: lw          $t5, 0x18($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X18);
    // 0x800ABD00: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x800ABD04: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800ABD08: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x800ABD0C: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x800ABD10: addu        $t0, $t9, $s1
    ctx->r8 = ADD32(ctx->r25, ctx->r17);
    // 0x800ABD14: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x800ABD18: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x800ABD1C: addu        $t4, $t3, $s1
    ctx->r12 = ADD32(ctx->r11, ctx->r17);
    // 0x800ABD20: addu        $t6, $t5, $s1
    ctx->r14 = ADD32(ctx->r13, ctx->r17);
    // 0x800ABD24: sw          $t6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r14;
    // 0x800ABD28: sw          $t4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r12;
    // 0x800ABD2C: sw          $t2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r10;
    // 0x800ABD30: sw          $t8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r24;
    // 0x800ABD34: sw          $t0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r8;
    // 0x800ABD38: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x800ABD3C: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x800ABD40: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    // 0x800ABD44: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x800ABD48: bne         $v1, $zero, L_800ABCD4
    if (ctx->r3 != 0) {
        // 0x800ABD4C: sw          $zero, -0x28($v0)
        MEM_W(-0X28, ctx->r2) = 0;
            goto L_800ABCD4;
    }
    // 0x800ABD4C: sw          $zero, -0x28($v0)
    MEM_W(-0X28, ctx->r2) = 0;
L_800ABD50:
    // 0x800ABD50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800ABD54:
    // 0x800ABD54: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800ABD58: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800ABD5C: jr          $ra
    // 0x800ABD60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800ABD60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800ABD64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ABD64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800ABD68: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800ABD6C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800ABD70: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800ABD74: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800ABD78: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800ABD7C: lw          $s3, 0x8($a0)
    ctx->r19 = MEM_W(ctx->r4, 0X8);
    // 0x800ABD80: lw          $s2, 0x18($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X18);
    // 0x800ABD84: beql        $s3, $zero, L_800ABDC4
    if (ctx->r19 == 0) {
        // 0x800ABD88: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800ABDC4;
    }
    goto skip_0;
    // 0x800ABD88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_800ABD8C:
    // 0x800ABD8C: lw          $s1, 0x10($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X10);
    // 0x800ABD90: lw          $s0, 0x14($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X14);
    // 0x800ABD94: beql        $s1, $zero, L_800ABDB8
    if (ctx->r17 == 0) {
        // 0x800ABD98: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_800ABDB8;
    }
    goto skip_1;
    // 0x800ABD98: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    skip_1:
L_800ABD9C:
    // 0x800ABD9C: jal         0x800AA14C
    // 0x800ABDA0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800AA14C(rdram, ctx);
        goto after_0;
    // 0x800ABDA0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_0:
    // 0x800ABDA4: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x800ABDA8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800ABDAC: bne         $s1, $zero, L_800ABD9C
    if (ctx->r17 != 0) {
        // 0x800ABDB0: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_800ABD9C;
    }
    // 0x800ABDB0: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x800ABDB4: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
L_800ABDB8:
    // 0x800ABDB8: bne         $s3, $zero, L_800ABD8C
    if (ctx->r19 != 0) {
        // 0x800ABDBC: addiu       $s2, $s2, 0x18
        ctx->r18 = ADD32(ctx->r18, 0X18);
            goto L_800ABD8C;
    }
    // 0x800ABDBC: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
    // 0x800ABDC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800ABDC4:
    // 0x800ABDC4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800ABDC8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800ABDCC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800ABDD0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800ABDD4: jr          $ra
    // 0x800ABDD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800ABDD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800ABDDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ABDDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800ABDE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800ABDE4: jal         0x800AA14C
    // 0x800ABDE8: nop

    func_800AA14C(rdram, ctx);
        goto after_0;
    // 0x800ABDE8: nop

    after_0:
    // 0x800ABDEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800ABDF0: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x800ABDF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800ABDF8: jr          $ra
    // 0x800ABDFC: nop

    return;
    // 0x800ABDFC: nop

;}
RECOMP_FUNC void func_800ABE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ABE00: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x800ABE04: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x800ABE08: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800ABE0C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800ABE10: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x800ABE14: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x800ABE18: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x800ABE1C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x800ABE20: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x800ABE24: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800ABE28: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800ABE2C: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800ABE30: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x800ABE34: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800ABE38: addiu       $s3, $s3, -0x35F0
    ctx->r19 = ADD32(ctx->r19, -0X35F0);
    // 0x800ABE3C: addiu       $s1, $s1, -0x3524
    ctx->r17 = ADD32(ctx->r17, -0X3524);
    // 0x800ABE40: addiu       $s0, $s0, -0x35B8
    ctx->r16 = ADD32(ctx->r16, -0X35B8);
    // 0x800ABE44: addiu       $s2, $sp, 0x58
    ctx->r18 = ADD32(ctx->r29, 0X58);
    // 0x800ABE48: addiu       $s4, $sp, 0x70
    ctx->r20 = ADD32(ctx->r29, 0X70);
    // 0x800ABE4C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x800ABE50: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x800ABE54: addiu       $s7, $sp, 0x78
    ctx->r23 = ADD32(ctx->r29, 0X78);
    // 0x800ABE58: addiu       $fp, $sp, 0x74
    ctx->r30 = ADD32(ctx->r29, 0X74);
    // 0x800ABE5C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_800ABE60:
    // 0x800ABE60: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x800ABE64: jal         0x800B3C20
    // 0x800ABE68: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x800ABE68: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_0:
    // 0x800ABE6C: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x800ABE70: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x800ABE74: lbu         $v1, 0xC($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0XC);
    // 0x800ABE78: beql        $v1, $zero, L_800ABE9C
    if (ctx->r3 == 0) {
        // 0x800ABE7C: lw          $a0, 0x4($t7)
        ctx->r4 = MEM_W(ctx->r15, 0X4);
            goto L_800ABE9C;
    }
    goto skip_0;
    // 0x800ABE7C: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    skip_0:
    // 0x800ABE80: beq         $v1, $s5, L_800ABEE8
    if (ctx->r3 == ctx->r21) {
        // 0x800ABE84: lw          $t1, 0x70($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X70);
            goto L_800ABEE8;
    }
    // 0x800ABE84: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x800ABE88: beq         $v1, $s6, L_800ABF48
    if (ctx->r3 == ctx->r22) {
        // 0x800ABE8C: lw          $t7, 0x70($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X70);
            goto L_800ABF48;
    }
    // 0x800ABE8C: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x800ABE90: b           L_800ABFA4
    // 0x800ABE94: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
        goto L_800ABFA4;
    // 0x800ABE94: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x800ABE98: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
L_800ABE9C:
    // 0x800ABE9C: jal         0x800BAFA0
    // 0x800ABEA0: lw          $a1, 0x8($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X8);
    osInvalDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x800ABEA0: lw          $a1, 0x8($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X8);
    after_1:
    // 0x800ABEA4: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x800ABEA8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x800ABEAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ABEB0: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x800ABEB4: lw          $a3, 0x0($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X0);
    // 0x800ABEB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800ABEBC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800ABEC0: lw          $t0, 0x8($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X8);
    // 0x800ABEC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800ABEC8: jal         0x800BB050
    // 0x800ABECC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    osPiStartDma_recomp(rdram, ctx);
        goto after_2;
    // 0x800ABECC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_2:
    // 0x800ABED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800ABED4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x800ABED8: jal         0x800B3C20
    // 0x800ABEDC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x800ABEDC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_3:
    // 0x800ABEE0: b           L_800ABFA4
    // 0x800ABEE4: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
        goto L_800ABFA4;
    // 0x800ABEE4: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
L_800ABEE8:
    // 0x800ABEE8: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x800ABEEC: jal         0x800BB160
    // 0x800ABEF0: lw          $a1, 0x8($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X8);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_4;
    // 0x800ABEF0: lw          $a1, 0x8($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X8);
    after_4:
    // 0x800ABEF4: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x800ABEF8: sb          $zero, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = 0;
    // 0x800ABEFC: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x800ABF00: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x800ABF04: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800ABF08: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800ABF0C: sw          $t3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r11;
    // 0x800ABF10: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x800ABF14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800ABF18: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
    // 0x800ABF1C: lw          $t5, 0x8($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X8);
    // 0x800ABF20: jal         0x800BB1E0
    // 0x800ABF24: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    osEPiStartDma_recomp(rdram, ctx);
        goto after_5;
    // 0x800ABF24: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    after_5:
    // 0x800ABF28: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x800ABF2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800ABF30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ABF34: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x800ABF38: jal         0x800B3C20
    // 0x800ABF3C: sw          $v0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r2;
    osRecvMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x800ABF3C: sw          $v0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r2;
    after_6:
    // 0x800ABF40: b           L_800ABFA4
    // 0x800ABF44: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
        goto L_800ABFA4;
    // 0x800ABF44: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
L_800ABF48:
    // 0x800ABF48: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x800ABF4C: jal         0x800BB160
    // 0x800ABF50: lw          $a1, 0x8($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X8);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_7;
    // 0x800ABF50: lw          $a1, 0x8($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X8);
    after_7:
    // 0x800ABF54: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x800ABF58: sb          $zero, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = 0;
    // 0x800ABF5C: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x800ABF60: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x800ABF64: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800ABF68: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800ABF6C: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x800ABF70: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x800ABF74: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x800ABF78: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    // 0x800ABF7C: lw          $t1, 0x8($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X8);
    // 0x800ABF80: jal         0x800BB1E0
    // 0x800ABF84: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    osEPiStartDma_recomp(rdram, ctx);
        goto after_8;
    // 0x800ABF84: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    after_8:
    // 0x800ABF88: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x800ABF8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800ABF90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ABF94: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x800ABF98: jal         0x800B3C20
    // 0x800ABF9C: sw          $v0, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r2;
    osRecvMesg_recomp(rdram, ctx);
        goto after_9;
    // 0x800ABF9C: sw          $v0, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r2;
    after_9:
    // 0x800ABFA0: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
L_800ABFA4:
    // 0x800ABFA4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x800ABFA8: jal         0x800B34D0
    // 0x800ABFAC: lw          $a0, 0x10($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X10);
    osSendMesg_recomp(rdram, ctx);
        goto after_10;
    // 0x800ABFAC: lw          $a0, 0x10($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X10);
    after_10:
    // 0x800ABFB0: b           L_800ABE60
    // 0x800ABFB4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_800ABE60;
    // 0x800ABFB4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800ABFB8: nop

    // 0x800ABFBC: nop

    // 0x800ABFC0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800ABFC4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800ABFC8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABFCC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x800ABFD0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x800ABFD4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x800ABFD8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x800ABFDC: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x800ABFE0: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x800ABFE4: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x800ABFE8: jr          $ra
    // 0x800ABFEC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x800ABFEC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_800ABFF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ABFF0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800ABFF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800ABFF8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x800ABFFC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x800AC000: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x800AC004: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800AC008: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x800AC00C: jal         0x800B3080
    // 0x800AC010: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x800AC010: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x800AC014: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800AC018: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x800AC01C: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x800AC020: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x800AC024: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800AC028: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800AC02C: sb          $zero, 0x28($sp)
    MEM_B(0X28, ctx->r29) = 0;
    // 0x800AC030: addiu       $a0, $a0, -0x35F0
    ctx->r4 = ADD32(ctx->r4, -0X35F0);
    // 0x800AC034: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x800AC038: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800AC03C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800AC040: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x800AC044: jal         0x800B34D0
    // 0x800AC048: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800AC048: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_1:
    // 0x800AC04C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800AC050: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x800AC054: jal         0x800B3C20
    // 0x800AC058: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x800AC058: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x800AC05C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AC060: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x800AC064: jr          $ra
    // 0x800AC068: nop

    return;
    // 0x800AC068: nop

;}
RECOMP_FUNC void func_800AC06C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC06C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800AC070: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800AC074: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800AC078: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AC07C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800AC080: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800AC084: addiu       $a0, $a0, -0x35B8
    ctx->r4 = ADD32(ctx->r4, -0X35B8);
    // 0x800AC088: addiu       $a1, $a1, -0x35A0
    ctx->r5 = ADD32(ctx->r5, -0X35A0);
    // 0x800AC08C: jal         0x800B3080
    // 0x800AC090: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x800AC090: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800AC094: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800AC098: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800AC09C: addiu       $a1, $a1, -0x35D8
    ctx->r5 = ADD32(ctx->r5, -0X35D8);
    // 0x800AC0A0: addiu       $a0, $a0, -0x35F0
    ctx->r4 = ADD32(ctx->r4, -0X35F0);
    // 0x800AC0A4: jal         0x800B3080
    // 0x800AC0A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x800AC0A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x800AC0AC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800AC0B0: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800AC0B4: addiu       $t6, $t6, -0x51F0
    ctx->r14 = ADD32(ctx->r14, -0X51F0);
    // 0x800AC0B8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800AC0BC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x800AC0C0: addiu       $a2, $a2, -0x4200
    ctx->r6 = ADD32(ctx->r6, -0X4200);
    // 0x800AC0C4: addiu       $a0, $a0, -0x57A0
    ctx->r4 = ADD32(ctx->r4, -0X57A0);
    // 0x800AC0C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800AC0CC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800AC0D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800AC0D4: jal         0x800B6010
    // 0x800AC0D8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    osCreateThread_recomp(rdram, ctx);
        goto after_2;
    // 0x800AC0D8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_2:
    // 0x800AC0DC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800AC0E0: jal         0x800B6160
    // 0x800AC0E4: addiu       $a0, $a0, -0x57A0
    ctx->r4 = ADD32(ctx->r4, -0X57A0);
    osStartThread_recomp(rdram, ctx);
        goto after_3;
    // 0x800AC0E4: addiu       $a0, $a0, -0x57A0
    ctx->r4 = ADD32(ctx->r4, -0X57A0);
    after_3:
    // 0x800AC0E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AC0EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800AC0F0: jr          $ra
    // 0x800AC0F4: nop

    return;
    // 0x800AC0F4: nop

;}
RECOMP_FUNC void func_800AC0F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC0F8: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800AC0FC: addiu       $a2, $a2, -0x3598
    ctx->r6 = ADD32(ctx->r6, -0X3598);
    // 0x800AC100: lw          $t6, 0xC($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XC);
    // 0x800AC104: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800AC108: lui         $v0, 0xA800
    ctx->r2 = S32(0XA800 << 16);
    // 0x800AC10C: bne         $v0, $t6, L_800AC124
    if (ctx->r2 != ctx->r14) {
        // 0x800AC110: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800AC124;
    }
    // 0x800AC110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AC114: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800AC118: addiu       $v0, $v0, -0x3524
    ctx->r2 = ADD32(ctx->r2, -0X3524);
    // 0x800AC11C: b           L_800AC198
    // 0x800AC120: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
        goto L_800AC198;
    // 0x800AC120: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
L_800AC124:
    // 0x800AC124: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800AC128: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x800AC12C: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x800AC130: addiu       $t0, $zero, 0xD
    ctx->r8 = ADD32(0, 0XD);
    // 0x800AC134: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800AC138: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AC13C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800AC140: sb          $t7, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r15;
    // 0x800AC144: sw          $v0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r2;
    // 0x800AC148: sb          $t8, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r24;
    // 0x800AC14C: sb          $t9, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r25;
    // 0x800AC150: sb          $t0, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r8;
    // 0x800AC154: sb          $t1, 0x7($a2)
    MEM_B(0X7, ctx->r6) = ctx->r9;
    // 0x800AC158: sb          $t2, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r10;
    // 0x800AC15C: sw          $zero, 0x10($a2)
    MEM_W(0X10, ctx->r6) = 0;
    // 0x800AC160: addiu       $a0, $a0, -0x3584
    ctx->r4 = ADD32(ctx->r4, -0X3584);
    // 0x800AC164: jal         0x800B7450
    // 0x800AC168: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    _bzero(rdram, ctx);
        goto after_0;
    // 0x800AC168: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_0:
    // 0x800AC16C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800AC170: jal         0x800BB2C0
    // 0x800AC174: addiu       $a0, $a2, -0x3598
    ctx->r4 = ADD32(ctx->r6, -0X3598);
    osEPiLinkHandle(rdram, ctx);
        goto after_1;
    // 0x800AC174: addiu       $a0, $a2, -0x3598
    ctx->r4 = ADD32(ctx->r6, -0X3598);
    after_1:
    // 0x800AC178: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800AC17C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800AC180: addiu       $a1, $a2, -0x3598
    ctx->r5 = ADD32(ctx->r6, -0X3598);
    // 0x800AC184: addiu       $v0, $v0, -0x3524
    ctx->r2 = ADD32(ctx->r2, -0X3524);
    // 0x800AC188: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800AC18C: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x800AC190: jal         0x800B3BFC
    // 0x800AC194: addiu       $a0, $a0, 0x1150
    ctx->r4 = ADD32(ctx->r4, 0X1150);
    osSyncPrintf(rdram, ctx);
        goto after_2;
    // 0x800AC194: addiu       $a0, $a0, 0x1150
    ctx->r4 = ADD32(ctx->r4, 0X1150);
    after_2:
L_800AC198:
    // 0x800AC198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AC19C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800AC1A0: jr          $ra
    // 0x800AC1A4: nop

    return;
    // 0x800AC1A4: nop

;}
RECOMP_FUNC void func_800AC1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC1A8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800AC1AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AC1B0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x800AC1B4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x800AC1B8: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x800AC1BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800AC1C0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x800AC1C4: jal         0x800B3080
    // 0x800AC1C8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x800AC1C8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x800AC1CC: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x800AC1D0: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800AC1D4: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x800AC1D8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800AC1DC: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x800AC1E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800AC1E4: sb          $t9, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r25;
    // 0x800AC1E8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x800AC1EC: addiu       $a0, $a0, -0x35F0
    ctx->r4 = ADD32(ctx->r4, -0X35F0);
    // 0x800AC1F0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800AC1F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800AC1F8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800AC1FC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800AC200: jal         0x800B34D0
    // 0x800AC204: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800AC204: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_1:
    // 0x800AC208: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800AC20C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800AC210: jal         0x800B3C20
    // 0x800AC214: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x800AC214: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x800AC218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AC21C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x800AC220: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800AC224: jr          $ra
    // 0x800AC228: nop

    return;
    // 0x800AC228: nop

;}
RECOMP_FUNC void func_800AC22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC22C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800AC230: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AC234: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x800AC238: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x800AC23C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x800AC240: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800AC244: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x800AC248: jal         0x800B3080
    // 0x800AC24C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x800AC24C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x800AC250: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x800AC254: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800AC258: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x800AC25C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800AC260: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x800AC264: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800AC268: sb          $t9, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r25;
    // 0x800AC26C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x800AC270: addiu       $a0, $a0, -0x35F0
    ctx->r4 = ADD32(ctx->r4, -0X35F0);
    // 0x800AC274: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800AC278: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800AC27C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800AC280: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800AC284: jal         0x800B34D0
    // 0x800AC288: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800AC288: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_1:
    // 0x800AC28C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800AC290: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800AC294: jal         0x800B3C20
    // 0x800AC298: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x800AC298: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x800AC29C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AC2A0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x800AC2A4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800AC2A8: jr          $ra
    // 0x800AC2AC: nop

    return;
    // 0x800AC2AC: nop

;}
RECOMP_FUNC void func_800AC2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC2B0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800AC2B4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x800AC2B8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x800AC2BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800AC2C0: beq         $v0, $zero, L_800AC2EC
    if (ctx->r2 == 0) {
        // 0x800AC2C4: nop
    
            goto L_800AC2EC;
    }
    // 0x800AC2C4: nop

    // 0x800AC2C8: beq         $t6, $v0, L_800AC2EC
    if (ctx->r14 == ctx->r2) {
        // 0x800AC2CC: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_800AC2EC;
    }
    // 0x800AC2CC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x800AC2D0: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
L_800AC2D4:
    // 0x800AC2D4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800AC2D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800AC2DC: beq         $v0, $zero, L_800AC2EC
    if (ctx->r2 == 0) {
        // 0x800AC2E0: nop
    
            goto L_800AC2EC;
    }
    // 0x800AC2E0: nop

    // 0x800AC2E4: bnel        $a2, $v0, L_800AC2D4
    if (ctx->r6 != ctx->r2) {
        // 0x800AC2E8: lbu         $v0, 0x1($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X1);
            goto L_800AC2D4;
    }
    goto skip_0;
    // 0x800AC2E8: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    skip_0:
L_800AC2EC:
    // 0x800AC2EC: beql        $v0, $zero, L_800AC300
    if (ctx->r2 == 0) {
        // 0x800AC2F0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800AC300;
    }
    goto skip_1;
    // 0x800AC2F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_1:
    // 0x800AC2F4: jr          $ra
    // 0x800AC2F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800AC2F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800AC2FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800AC300:
    // 0x800AC300: jr          $ra
    // 0x800AC304: nop

    return;
    // 0x800AC304: nop

;}
RECOMP_FUNC void func_800AC308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC308: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800AC30C: addiu       $v0, $v0, -0x3518
    ctx->r2 = ADD32(ctx->r2, -0X3518);
    // 0x800AC310: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x800AC314: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800AC318: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800AC31C: sw          $a0, -0x3520($at)
    MEM_W(-0X3520, ctx->r1) = ctx->r4;
    // 0x800AC320: addiu       $v1, $v1, -0x3514
    ctx->r3 = ADD32(ctx->r3, -0X3514);
    // 0x800AC324: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x800AC328: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800AC32C: jr          $ra
    // 0x800AC330: sw          $a1, -0x351C($at)
    MEM_W(-0X351C, ctx->r1) = ctx->r5;
    return;
    // 0x800AC330: sw          $a1, -0x351C($at)
    MEM_W(-0X351C, ctx->r1) = ctx->r5;
;}
RECOMP_FUNC void func_800AC334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC334: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800AC338: sw          $a0, -0x6F08($at)
    MEM_W(-0X6F08, ctx->r1) = ctx->r4;
    // 0x800AC33C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800AC340: sw          $a1, -0x6F04($at)
    MEM_W(-0X6F04, ctx->r1) = ctx->r5;
    // 0x800AC344: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800AC348: jr          $ra
    // 0x800AC34C: sw          $a2, -0x6F00($at)
    MEM_W(-0X6F00, ctx->r1) = ctx->r6;
    return;
    // 0x800AC34C: sw          $a2, -0x6F00($at)
    MEM_W(-0X6F00, ctx->r1) = ctx->r6;
;}
RECOMP_FUNC void func_800AC350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC350: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800AC354: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x800AC358: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x800AC35C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x800AC360: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800AC364: lui         $t6, 0xE300
    ctx->r14 = S32(0XE300 << 16);
    // 0x800AC368: ori         $t6, $t6, 0xA01
    ctx->r14 = ctx->r14 | 0XA01;
    // 0x800AC36C: addiu       $a3, $a0, 0x8
    ctx->r7 = ADD32(ctx->r4, 0X8);
    // 0x800AC370: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800AC374: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x800AC378: lui         $t7, 0xFC11
    ctx->r15 = S32(0XFC11 << 16);
    // 0x800AC37C: lui         $t8, 0xFF2F
    ctx->r24 = S32(0XFF2F << 16);
    // 0x800AC380: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x800AC384: ori         $t7, $t7, 0x9623
    ctx->r15 = ctx->r15 | 0X9623;
    // 0x800AC388: addiu       $t0, $a3, 0x8
    ctx->r8 = ADD32(ctx->r7, 0X8);
    // 0x800AC38C: lui         $v1, 0xE300
    ctx->r3 = S32(0XE300 << 16);
    // 0x800AC390: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x800AC394: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x800AC398: ori         $v1, $v1, 0xC00
    ctx->r3 = ctx->r3 | 0XC00;
    // 0x800AC39C: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x800AC3A0: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x800AC3A4: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x800AC3A8: lui         $t9, 0xE300
    ctx->r25 = S32(0XE300 << 16);
    // 0x800AC3AC: ori         $t9, $t9, 0xF00
    ctx->r25 = ctx->r25 | 0XF00;
    // 0x800AC3B0: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x800AC3B4: addiu       $a1, $t1, 0x8
    ctx->r5 = ADD32(ctx->r9, 0X8);
    // 0x800AC3B8: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x800AC3BC: lui         $t2, 0xE300
    ctx->r10 = S32(0XE300 << 16);
    // 0x800AC3C0: ori         $t2, $t2, 0x1201
    ctx->r10 = ctx->r10 | 0X1201;
    // 0x800AC3C4: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x800AC3C8: lui         $t3, 0xE300
    ctx->r11 = S32(0XE300 << 16);
    // 0x800AC3CC: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x800AC3D0: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x800AC3D4: ori         $t3, $t3, 0x1402
    ctx->r11 = ctx->r11 | 0X1402;
    // 0x800AC3D8: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x800AC3DC: addiu       $a0, $a2, 0x8
    ctx->r4 = ADD32(ctx->r6, 0X8);
    // 0x800AC3E0: addiu       $t4, $zero, 0xC00
    ctx->r12 = ADD32(0, 0XC00);
    // 0x800AC3E4: lui         $t5, 0xE300
    ctx->r13 = S32(0XE300 << 16);
    // 0x800AC3E8: sw          $t4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r12;
    // 0x800AC3EC: ori         $t5, $t5, 0x1001
    ctx->r13 = ctx->r13 | 0X1001;
    // 0x800AC3F0: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x800AC3F4: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x800AC3F8: addiu       $t0, $a0, 0x8
    ctx->r8 = ADD32(ctx->r4, 0X8);
    // 0x800AC3FC: lui         $t6, 0xE200
    ctx->r14 = S32(0XE200 << 16);
    // 0x800AC400: ori         $t6, $t6, 0x1E01
    ctx->r14 = ctx->r14 | 0X1E01;
    // 0x800AC404: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x800AC408: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x800AC40C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800AC410: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x800AC414: lui         $t8, 0xF900
    ctx->r24 = S32(0XF900 << 16);
    // 0x800AC418: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x800AC41C: addiu       $a1, $t1, 0x8
    ctx->r5 = ADD32(ctx->r9, 0X8);
    // 0x800AC420: addiu       $t9, $zero, -0x100
    ctx->r25 = ADD32(0, -0X100);
    // 0x800AC424: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x800AC428: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800AC42C: addiu       $t3, $t3, 0x7B98
    ctx->r11 = ADD32(ctx->r11, 0X7B98);
    // 0x800AC430: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x800AC434: lui         $t2, 0xFD90
    ctx->r10 = S32(0XFD90 << 16);
    // 0x800AC438: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x800AC43C: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
    // 0x800AC440: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x800AC444: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x800AC448: lui         $t4, 0xF590
    ctx->r12 = S32(0XF590 << 16);
    // 0x800AC44C: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x800AC450: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
    // 0x800AC454: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x800AC458: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x800AC45C: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x800AC460: addiu       $a0, $a3, 0x8
    ctx->r4 = ADD32(ctx->r7, 0X8);
    // 0x800AC464: lui         $t8, 0x77F
    ctx->r24 = S32(0X77F << 16);
    // 0x800AC468: ori         $t8, $t8, 0xF200
    ctx->r24 = ctx->r24 | 0XF200;
    // 0x800AC46C: addiu       $t1, $a0, 0x8
    ctx->r9 = ADD32(ctx->r4, 0X8);
    // 0x800AC470: lui         $t7, 0xF300
    ctx->r15 = S32(0XF300 << 16);
    // 0x800AC474: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800AC478: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x800AC47C: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x800AC480: addiu       $a1, $t1, 0x8
    ctx->r5 = ADD32(ctx->r9, 0X8);
    // 0x800AC484: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x800AC488: lui         $t9, 0xF580
    ctx->r25 = S32(0XF580 << 16);
    // 0x800AC48C: ori         $t9, $t9, 0x800
    ctx->r25 = ctx->r25 | 0X800;
    // 0x800AC490: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x800AC494: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x800AC498: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x800AC49C: lui         $t3, 0xF
    ctx->r11 = S32(0XF << 16);
    // 0x800AC4A0: ori         $t3, $t3, 0xC1FC
    ctx->r11 = ctx->r11 | 0XC1FC;
    // 0x800AC4A4: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x800AC4A8: lui         $t2, 0xF200
    ctx->r10 = S32(0XF200 << 16);
    // 0x800AC4AC: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x800AC4B0: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
    // 0x800AC4B4: addiu       $t0, $a3, 0x8
    ctx->r8 = ADD32(ctx->r7, 0X8);
    // 0x800AC4B8: lui         $t5, 0xC08
    ctx->r13 = S32(0XC08 << 16);
    // 0x800AC4BC: lui         $t4, 0xE200
    ctx->r12 = S32(0XE200 << 16);
    // 0x800AC4C0: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x800AC4C4: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x800AC4C8: ori         $t4, $t4, 0x1C
    ctx->r12 = ctx->r12 | 0X1C;
    // 0x800AC4CC: ori         $t5, $t5, 0x7008
    ctx->r13 = ctx->r13 | 0X7008;
    // 0x800AC4D0: sw          $t5, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r13;
    // 0x800AC4D4: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x800AC4D8: jr          $ra
    // 0x800AC4DC: addiu       $v0, $t0, 0x8
    ctx->r2 = ADD32(ctx->r8, 0X8);
    return;
    // 0x800AC4DC: addiu       $v0, $t0, 0x8
    ctx->r2 = ADD32(ctx->r8, 0X8);
;}
RECOMP_FUNC void func_800AC4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC4E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800AC4E4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800AC4E8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800AC4EC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800AC4F0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800AC4F4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800AC4F8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800AC4FC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800AC500: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800AC504: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800AC508: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800AC50C: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x800AC510: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800AC514: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x800AC518: lw          $t0, -0x6F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X6F04);
    // 0x800AC51C: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x800AC520: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x800AC524: lw          $t4, -0x6F00($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X6F00);
    // 0x800AC528: lw          $t8, -0x6F08($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X6F08);
    // 0x800AC52C: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x800AC530: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x800AC534: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x800AC538: sll         $t9, $t8, 24
    ctx->r25 = S32(ctx->r24 << 24);
    // 0x800AC53C: or          $t3, $t9, $t2
    ctx->r11 = ctx->r25 | ctx->r10;
    // 0x800AC540: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x800AC544: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x800AC548: ori         $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 | 0XFF;
    // 0x800AC54C: addiu       $s0, $a0, 0x8
    ctx->r16 = ADD32(ctx->r4, 0X8);
    // 0x800AC550: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x800AC554: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800AC558: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x800AC55C: lui         $t0, 0xD700
    ctx->r8 = S32(0XD700 << 16);
    // 0x800AC560: ori         $t0, $t0, 0x2
    ctx->r8 = ctx->r8 | 0X2;
    // 0x800AC564: ori         $t1, $t1, 0x8000
    ctx->r9 = ctx->r9 | 0X8000;
    // 0x800AC568: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x800AC56C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x800AC570: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x800AC574: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x800AC578: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800AC57C: beq         $a2, $zero, L_800AC6D4
    if (ctx->r6 == 0) {
        // 0x800AC580: lui         $fp, 0xE400
        ctx->r30 = S32(0XE400 << 16);
            goto L_800AC6D4;
    }
    // 0x800AC580: lui         $fp, 0xE400
    ctx->r30 = S32(0XE400 << 16);
    // 0x800AC584: lui         $s7, 0x800E
    ctx->r23 = S32(0X800E << 16);
    // 0x800AC588: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x800AC58C: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x800AC590: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800AC594: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800AC598: addiu       $s1, $s1, -0x3518
    ctx->r17 = ADD32(ctx->r17, -0X3518);
    // 0x800AC59C: addiu       $s2, $s2, -0x3514
    ctx->r18 = ADD32(ctx->r18, -0X3514);
    // 0x800AC5A0: addiu       $s4, $s4, -0x3520
    ctx->r20 = ADD32(ctx->r20, -0X3520);
    // 0x800AC5A4: addiu       $s5, $s5, -0x7468
    ctx->r21 = ADD32(ctx->r21, -0X7468);
    // 0x800AC5A8: addiu       $s7, $s7, -0x7414
    ctx->r23 = ADD32(ctx->r23, -0X7414);
    // 0x800AC5AC: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x800AC5B0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_800AC5B4:
    // 0x800AC5B4: jal         0x800AC2B0
    // 0x800AC5B8: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    func_800AC2B0(rdram, ctx);
        goto after_0;
    // 0x800AC5B8: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    after_0:
    // 0x800AC5BC: beq         $v0, $s6, L_800AC674
    if (ctx->r2 == ctx->r22) {
        // 0x800AC5C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800AC674;
    }
    // 0x800AC5C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800AC5C4: sll         $t9, $v0, 4
    ctx->r25 = S32(ctx->r2 << 4);
    // 0x800AC5C8: addu        $v1, $s7, $t9
    ctx->r3 = ADD32(ctx->r23, ctx->r25);
    // 0x800AC5CC: lh          $t2, 0xC($v1)
    ctx->r10 = MEM_H(ctx->r3, 0XC);
    // 0x800AC5D0: lh          $t0, 0x0($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X0);
    // 0x800AC5D4: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x800AC5D8: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x800AC5DC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800AC5E0: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x800AC5E4: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x800AC5E8: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x800AC5EC: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x800AC5F0: andi        $t6, $t3, 0xFFF
    ctx->r14 = ctx->r11 & 0XFFF;
    // 0x800AC5F4: andi        $t2, $t9, 0xFFF
    ctx->r10 = ctx->r25 & 0XFFF;
    // 0x800AC5F8: sll         $t4, $t2, 12
    ctx->r12 = S32(ctx->r10 << 12);
    // 0x800AC5FC: or          $t7, $t6, $fp
    ctx->r15 = ctx->r14 | ctx->r30;
    // 0x800AC600: or          $t5, $t7, $t4
    ctx->r13 = ctx->r15 | ctx->r12;
    // 0x800AC604: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x800AC608: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x800AC60C: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x800AC610: lui         $t4, 0xE100
    ctx->r12 = S32(0XE100 << 16);
    // 0x800AC614: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x800AC618: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x800AC61C: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x800AC620: andi        $t2, $t9, 0xFFF
    ctx->r10 = ctx->r25 & 0XFFF;
    // 0x800AC624: sll         $t0, $t8, 12
    ctx->r8 = S32(ctx->r24 << 12);
    // 0x800AC628: or          $t7, $t0, $t2
    ctx->r15 = ctx->r8 | ctx->r10;
    // 0x800AC62C: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x800AC630: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800AC634: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x800AC638: lh          $t5, 0x6($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X6);
    // 0x800AC63C: lh          $t9, 0x4($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X4);
    // 0x800AC640: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800AC644: sll         $t3, $t5, 5
    ctx->r11 = S32(ctx->r13 << 5);
    // 0x800AC648: andi        $t6, $t3, 0xFFFF
    ctx->r14 = ctx->r11 & 0XFFFF;
    // 0x800AC64C: sll         $t0, $t9, 21
    ctx->r8 = S32(ctx->r25 << 21);
    // 0x800AC650: or          $t2, $t6, $t0
    ctx->r10 = ctx->r14 | ctx->r8;
    // 0x800AC654: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x800AC658: sw          $t2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r10;
    // 0x800AC65C: lui         $t4, 0x400
    ctx->r12 = S32(0X400 << 16);
    // 0x800AC660: ori         $t4, $t4, 0x400
    ctx->r12 = ctx->r12 | 0X400;
    // 0x800AC664: lui         $t7, 0xF100
    ctx->r15 = S32(0XF100 << 16);
    // 0x800AC668: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x800AC66C: sw          $t4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r12;
    // 0x800AC670: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_800AC674:
    // 0x800AC674: lbu         $t5, 0x0($s3)
    ctx->r13 = MEM_BU(ctx->r19, 0X0);
    // 0x800AC678: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800AC67C: bnel        $t5, $at, L_800AC6A0
    if (ctx->r13 != ctx->r1) {
        // 0x800AC680: lw          $t9, 0x0($s1)
        ctx->r25 = MEM_W(ctx->r17, 0X0);
            goto L_800AC6A0;
    }
    goto skip_0;
    // 0x800AC680: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    skip_0:
    // 0x800AC684: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x800AC688: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
    // 0x800AC68C: addiu       $t1, $t8, 0x10
    ctx->r9 = ADD32(ctx->r24, 0X10);
    // 0x800AC690: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
    // 0x800AC694: b           L_800AC6C4
    // 0x800AC698: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
        goto L_800AC6C4;
    // 0x800AC698: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
    // 0x800AC69C: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
L_800AC6A0:
    // 0x800AC6A0: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x800AC6A4: slti        $at, $t6, 0x130
    ctx->r1 = SIGNED(ctx->r14) < 0X130 ? 1 : 0;
    // 0x800AC6A8: bne         $at, $zero, L_800AC6C4
    if (ctx->r1 != 0) {
        // 0x800AC6AC: sw          $t6, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r14;
            goto L_800AC6C4;
    }
    // 0x800AC6AC: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x800AC6B0: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x800AC6B4: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    // 0x800AC6B8: addiu       $t4, $t7, 0x10
    ctx->r12 = ADD32(ctx->r15, 0X10);
    // 0x800AC6BC: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
    // 0x800AC6C0: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
L_800AC6C4:
    // 0x800AC6C4: lbu         $a2, 0x1($s3)
    ctx->r6 = MEM_BU(ctx->r19, 0X1);
    // 0x800AC6C8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800AC6CC: bnel        $a2, $zero, L_800AC5B4
    if (ctx->r6 != 0) {
        // 0x800AC6D0: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_800AC5B4;
    }
    goto skip_1;
    // 0x800AC6D0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_1:
L_800AC6D4:
    // 0x800AC6D4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800AC6D8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800AC6DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800AC6E0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800AC6E4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800AC6E8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800AC6EC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800AC6F0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800AC6F4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800AC6F8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800AC6FC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800AC700: jr          $ra
    // 0x800AC704: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800AC704: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800AC708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC708: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800AC70C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800AC710: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800AC714: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800AC718: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x800AC71C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800AC720: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800AC724: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800AC728: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800AC72C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800AC730: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800AC734: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800AC738: bgtz        $a2, L_800AC744
    if (SIGNED(ctx->r6) > 0) {
        // 0x800AC73C: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800AC744;
    }
    // 0x800AC73C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800AC740: addiu       $a2, $zero, 0x130
    ctx->r6 = ADD32(0, 0X130);
L_800AC744:
    // 0x800AC744: bgtz        $a3, L_800AC750
    if (SIGNED(ctx->r7) > 0) {
        // 0x800AC748: or          $v0, $s2, $zero
        ctx->r2 = ctx->r18 | 0;
            goto L_800AC750;
    }
    // 0x800AC748: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800AC74C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
L_800AC750:
    // 0x800AC750: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x800AC754: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800AC758: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x800AC75C: lw          $t0, -0x6F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X6F04);
    // 0x800AC760: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x800AC764: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x800AC768: lw          $t4, -0x6F00($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X6F00);
    // 0x800AC76C: lw          $t8, -0x6F08($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X6F08);
    // 0x800AC770: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x800AC774: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x800AC778: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x800AC77C: sll         $t9, $t8, 24
    ctx->r25 = S32(ctx->r24 << 24);
    // 0x800AC780: or          $t3, $t9, $t2
    ctx->r11 = ctx->r25 | ctx->r10;
    // 0x800AC784: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x800AC788: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x800AC78C: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x800AC790: or          $t0, $t7, $t8
    ctx->r8 = ctx->r15 | ctx->r24;
    // 0x800AC794: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800AC798: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x800AC79C: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x800AC7A0: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x800AC7A4: lui         $t1, 0xD700
    ctx->r9 = S32(0XD700 << 16);
    // 0x800AC7A8: ori         $t1, $t1, 0x2
    ctx->r9 = ctx->r9 | 0X2;
    // 0x800AC7AC: ori         $t9, $t9, 0x8000
    ctx->r25 = ctx->r25 | 0X8000;
    // 0x800AC7B0: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x800AC7B4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x800AC7B8: lbu         $a1, 0x0($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X0);
    // 0x800AC7BC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800AC7C0: lui         $fp, 0xE400
    ctx->r30 = S32(0XE400 << 16);
    // 0x800AC7C4: beq         $a1, $zero, L_800AC91C
    if (ctx->r5 == 0) {
        // 0x800AC7C8: lui         $s7, 0x800E
        ctx->r23 = S32(0X800E << 16);
            goto L_800AC91C;
    }
    // 0x800AC7C8: lui         $s7, 0x800E
    ctx->r23 = S32(0X800E << 16);
    // 0x800AC7CC: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x800AC7D0: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x800AC7D4: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800AC7D8: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800AC7DC: addiu       $s0, $s0, -0x3518
    ctx->r16 = ADD32(ctx->r16, -0X3518);
    // 0x800AC7E0: addiu       $s1, $s1, -0x3514
    ctx->r17 = ADD32(ctx->r17, -0X3514);
    // 0x800AC7E4: addiu       $s4, $s4, -0x3520
    ctx->r20 = ADD32(ctx->r20, -0X3520);
    // 0x800AC7E8: addiu       $s5, $s5, -0x7468
    ctx->r21 = ADD32(ctx->r21, -0X7468);
    // 0x800AC7EC: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800AC7F0: addiu       $s7, $s7, -0x7414
    ctx->r23 = ADD32(ctx->r23, -0X7414);
    // 0x800AC7F4: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
L_800AC7F8:
    // 0x800AC7F8: jal         0x800AC2B0
    // 0x800AC7FC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_800AC2B0(rdram, ctx);
        goto after_0;
    // 0x800AC7FC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_0:
    // 0x800AC800: beq         $v0, $s6, L_800AC8B8
    if (ctx->r2 == ctx->r22) {
        // 0x800AC804: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800AC8B8;
    }
    // 0x800AC804: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800AC808: sll         $t2, $v0, 4
    ctx->r10 = S32(ctx->r2 << 4);
    // 0x800AC80C: addu        $v1, $s7, $t2
    ctx->r3 = ADD32(ctx->r23, ctx->r10);
    // 0x800AC810: lh          $t4, 0xC($v1)
    ctx->r12 = MEM_H(ctx->r3, 0XC);
    // 0x800AC814: lh          $t1, 0x0($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X0);
    // 0x800AC818: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x800AC81C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x800AC820: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800AC824: addu        $t3, $t4, $t5
    ctx->r11 = ADD32(ctx->r12, ctx->r13);
    // 0x800AC828: addu        $t9, $t0, $t1
    ctx->r25 = ADD32(ctx->r8, ctx->r9);
    // 0x800AC82C: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x800AC830: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x800AC834: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x800AC838: andi        $t4, $t2, 0xFFF
    ctx->r12 = ctx->r10 & 0XFFF;
    // 0x800AC83C: sll         $t5, $t4, 12
    ctx->r13 = S32(ctx->r12 << 12);
    // 0x800AC840: or          $t8, $t7, $fp
    ctx->r24 = ctx->r15 | ctx->r30;
    // 0x800AC844: or          $t3, $t8, $t5
    ctx->r11 = ctx->r24 | ctx->r13;
    // 0x800AC848: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x800AC84C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800AC850: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x800AC854: lui         $t5, 0xE100
    ctx->r13 = S32(0XE100 << 16);
    // 0x800AC858: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AC85C: andi        $t0, $t7, 0xFFF
    ctx->r8 = ctx->r15 & 0XFFF;
    // 0x800AC860: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x800AC864: andi        $t4, $t2, 0xFFF
    ctx->r12 = ctx->r10 & 0XFFF;
    // 0x800AC868: sll         $t1, $t0, 12
    ctx->r9 = S32(ctx->r8 << 12);
    // 0x800AC86C: or          $t8, $t1, $t4
    ctx->r24 = ctx->r9 | ctx->r12;
    // 0x800AC870: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x800AC874: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800AC878: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x800AC87C: lh          $t3, 0x6($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X6);
    // 0x800AC880: lh          $t2, 0x4($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X4);
    // 0x800AC884: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800AC888: sll         $t6, $t3, 5
    ctx->r14 = S32(ctx->r11 << 5);
    // 0x800AC88C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x800AC890: sll         $t1, $t2, 21
    ctx->r9 = S32(ctx->r10 << 21);
    // 0x800AC894: or          $t4, $t7, $t1
    ctx->r12 = ctx->r15 | ctx->r9;
    // 0x800AC898: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800AC89C: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x800AC8A0: lui         $t5, 0x400
    ctx->r13 = S32(0X400 << 16);
    // 0x800AC8A4: ori         $t5, $t5, 0x400
    ctx->r13 = ctx->r13 | 0X400;
    // 0x800AC8A8: lui         $t8, 0xF100
    ctx->r24 = S32(0XF100 << 16);
    // 0x800AC8AC: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x800AC8B0: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
    // 0x800AC8B4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_800AC8B8:
    // 0x800AC8B8: lbu         $t3, 0x0($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X0);
    // 0x800AC8BC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800AC8C0: bnel        $t3, $at, L_800AC8E4
    if (ctx->r11 != ctx->r1) {
        // 0x800AC8C4: lw          $t2, 0x0($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X0);
            goto L_800AC8E4;
    }
    goto skip_0;
    // 0x800AC8C4: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x800AC8C8: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x800AC8CC: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x800AC8D0: addiu       $t9, $t0, 0x10
    ctx->r25 = ADD32(ctx->r8, 0X10);
    // 0x800AC8D4: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x800AC8D8: b           L_800AC90C
    // 0x800AC8DC: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
        goto L_800AC90C;
    // 0x800AC8DC: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800AC8E0: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
L_800AC8E4:
    // 0x800AC8E4: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x800AC8E8: addiu       $t7, $t2, 0x8
    ctx->r15 = ADD32(ctx->r10, 0X8);
    // 0x800AC8EC: slt         $at, $t7, $t4
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800AC8F0: bne         $at, $zero, L_800AC90C
    if (ctx->r1 != 0) {
        // 0x800AC8F4: sw          $t7, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r15;
            goto L_800AC90C;
    }
    // 0x800AC8F4: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x800AC8F8: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x800AC8FC: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x800AC900: addiu       $t3, $t5, 0x10
    ctx->r11 = ADD32(ctx->r13, 0X10);
    // 0x800AC904: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
    // 0x800AC908: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
L_800AC90C:
    // 0x800AC90C: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
    // 0x800AC910: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800AC914: bne         $a1, $zero, L_800AC7F8
    if (ctx->r5 != 0) {
        // 0x800AC918: nop
    
            goto L_800AC7F8;
    }
    // 0x800AC918: nop

L_800AC91C:
    // 0x800AC91C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800AC920: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800AC924: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800AC928: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800AC92C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800AC930: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800AC934: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800AC938: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800AC93C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800AC940: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800AC944: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800AC948: jr          $ra
    // 0x800AC94C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800AC94C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800AC950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC950: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800AC954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AC958: addiu       $a2, $sp, 0x3F
    ctx->r6 = ADD32(ctx->r29, 0X3F);
    // 0x800AC95C: sb          $zero, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = 0;
    // 0x800AC960: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_800AC964:
    // 0x800AC964: div         $zero, $a1, $v0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r2)));
    // 0x800AC968: mfhi        $t6
    ctx->r14 = hi;
    // 0x800AC96C: addiu       $t7, $t6, 0x30
    ctx->r15 = ADD32(ctx->r14, 0X30);
    // 0x800AC970: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x800AC974: bne         $v0, $zero, L_800AC980
    if (ctx->r2 != 0) {
        // 0x800AC978: nop
    
            goto L_800AC980;
    }
    // 0x800AC978: nop

    // 0x800AC97C: break       7
    do_break(2148190588);
L_800AC980:
    // 0x800AC980: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AC984: bne         $v0, $at, L_800AC998
    if (ctx->r2 != ctx->r1) {
        // 0x800AC988: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800AC998;
    }
    // 0x800AC988: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800AC98C: bne         $a1, $at, L_800AC998
    if (ctx->r5 != ctx->r1) {
        // 0x800AC990: nop
    
            goto L_800AC998;
    }
    // 0x800AC990: nop

    // 0x800AC994: break       6
    do_break(2148190612);
L_800AC998:
    // 0x800AC998: mflo        $a1
    ctx->r5 = lo;
    // 0x800AC99C: sb          $t7, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r15;
    // 0x800AC9A0: bne         $a1, $zero, L_800AC964
    if (ctx->r5 != 0) {
        // 0x800AC9A4: nop
    
            goto L_800AC964;
    }
    // 0x800AC9A4: nop

    // 0x800AC9A8: jal         0x800AC4E0
    // 0x800AC9AC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800AC4E0(rdram, ctx);
        goto after_0;
    // 0x800AC9AC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x800AC9B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AC9B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800AC9B8: jr          $ra
    // 0x800AC9BC: nop

    return;
    // 0x800AC9BC: nop

;}
RECOMP_FUNC void func_800AC9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC9C0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800AC9C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AC9C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800AC9CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800AC9D0: jal         0x8007E03C
    // 0x800AC9D4: addiu       $a0, $a0, 0x150C
    ctx->r4 = ADD32(ctx->r4, 0X150C);
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x800AC9D4: addiu       $a0, $a0, 0x150C
    ctx->r4 = ADD32(ctx->r4, 0X150C);
    after_0:
    // 0x800AC9D8: bne         $v0, $zero, L_800AC9E8
    if (ctx->r2 != 0) {
        // 0x800AC9DC: addiu       $t3, $v0, 0x80
        ctx->r11 = ADD32(ctx->r2, 0X80);
            goto L_800AC9E8;
    }
    // 0x800AC9DC: addiu       $t3, $v0, 0x80
    ctx->r11 = ADD32(ctx->r2, 0X80);
    // 0x800AC9E0: b           L_800ACCC8
    // 0x800AC9E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800ACCC8;
    // 0x800AC9E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800AC9E8:
    // 0x800AC9E8: addiu       $v1, $t3, 0x100
    ctx->r3 = ADD32(ctx->r11, 0X100);
    // 0x800AC9EC: addiu       $t5, $v1, 0x20
    ctx->r13 = ADD32(ctx->r3, 0X20);
    // 0x800AC9F0: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x800AC9F4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800AC9F8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x800AC9FC: addiu       $a1, $t5, 0x1E8
    ctx->r5 = ADD32(ctx->r13, 0X1E8);
    // 0x800ACA00: addiu       $t6, $zero, 0x818
    ctx->r14 = ADD32(0, 0X818);
    // 0x800ACA04: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800ACA08: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x800ACA0C: sb          $zero, 0x4($t5)
    MEM_B(0X4, ctx->r13) = 0;
    // 0x800ACA10: sb          $zero, 0x5($t5)
    MEM_B(0X5, ctx->r13) = 0;
    // 0x800ACA14: sh          $t7, 0x6($t5)
    MEM_H(0X6, ctx->r13) = ctx->r15;
    // 0x800ACA18: sw          $a1, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r5;
    // 0x800ACA1C: addiu       $a2, $a1, 0x4C
    ctx->r6 = ADD32(ctx->r5, 0X4C);
    // 0x800ACA20: addiu       $a3, $a2, 0x240
    ctx->r7 = ADD32(ctx->r6, 0X240);
    // 0x800ACA24: addiu       $t0, $a3, 0x30
    ctx->r8 = ADD32(ctx->r7, 0X30);
    // 0x800ACA28: addiu       $t2, $t0, 0xE0
    ctx->r10 = ADD32(ctx->r8, 0XE0);
    // 0x800ACA2C: addiu       $v1, $t2, 0x20
    ctx->r3 = ADD32(ctx->r10, 0X20);
    // 0x800ACA30: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x800ACA34: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x800ACA38: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x800ACA3C: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x800ACA40: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    // 0x800ACA44: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x800ACA48: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x800ACA4C: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x800ACA50: jal         0x800B79D0
    // 0x800ACA54: addiu       $a0, $t5, 0xC
    ctx->r4 = ADD32(ctx->r13, 0XC);
    guMtxIdentF(rdram, ctx);
        goto after_1;
    // 0x800ACA54: addiu       $a0, $t5, 0xC
    ctx->r4 = ADD32(ctx->r13, 0XC);
    after_1:
    // 0x800ACA58: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800ACA5C: jal         0x800B79D0
    // 0x800ACA60: addiu       $a0, $t5, 0x4C
    ctx->r4 = ADD32(ctx->r13, 0X4C);
    guMtxIdentF(rdram, ctx);
        goto after_2;
    // 0x800ACA60: addiu       $a0, $t5, 0x4C
    ctx->r4 = ADD32(ctx->r13, 0X4C);
    after_2:
    // 0x800ACA64: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x800ACA68: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800ACA6C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x800ACA70: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x800ACA74: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800ACA78: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800ACA7C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800ACA80: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800ACA84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800ACA88: addiu       $t4, $zero, 0x320
    ctx->r12 = ADD32(0, 0X320);
    // 0x800ACA8C: addiu       $t8, $zero, 0x3E8
    ctx->r24 = ADD32(0, 0X3E8);
    // 0x800ACA90: sb          $zero, 0x1D4($t5)
    MEM_B(0X1D4, ctx->r13) = 0;
    // 0x800ACA94: sb          $zero, 0x1D5($t5)
    MEM_B(0X1D5, ctx->r13) = 0;
    // 0x800ACA98: sb          $zero, 0x1D6($t5)
    MEM_B(0X1D6, ctx->r13) = 0;
    // 0x800ACA9C: sb          $v0, 0x1D7($t5)
    MEM_B(0X1D7, ctx->r13) = ctx->r2;
    // 0x800ACAA0: sw          $t4, 0x1D8($t5)
    MEM_W(0X1D8, ctx->r13) = ctx->r12;
    // 0x800ACAA4: sw          $t8, 0x1DC($t5)
    MEM_W(0X1DC, ctx->r13) = ctx->r24;
    // 0x800ACAA8: sw          $zero, 0x1D0($t5)
    MEM_W(0X1D0, ctx->r13) = 0;
    // 0x800ACAAC: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x800ACAB0: sw          $s0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r16;
    // 0x800ACAB4: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x800ACAB8: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x800ACABC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800ACAC0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800ACAC4: sw          $t6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r14;
    // 0x800ACAC8: sw          $t7, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r15;
    // 0x800ACACC: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
    // 0x800ACAD0: sw          $zero, 0x18($a1)
    MEM_W(0X18, ctx->r5) = 0;
    // 0x800ACAD4: sw          $zero, 0x24($a1)
    MEM_W(0X24, ctx->r5) = 0;
    // 0x800ACAD8: sw          $zero, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = 0;
    // 0x800ACADC: sw          $zero, 0x48($a1)
    MEM_W(0X48, ctx->r5) = 0;
    // 0x800ACAE0: sw          $a2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r6;
    // 0x800ACAE4: sw          $a3, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r7;
    // 0x800ACAE8: sw          $t2, 0x38($a1)
    MEM_W(0X38, ctx->r5) = ctx->r10;
    // 0x800ACAEC: sw          $t9, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r25;
    // 0x800ACAF0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800ACAF4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800ACAF8: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x800ACAFC: sb          $v0, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r2;
    // 0x800ACB00: addiu       $ra, $zero, 0x100
    ctx->r31 = ADD32(0, 0X100);
    // 0x800ACB04: addu        $v0, $a2, $t8
    ctx->r2 = ADD32(ctx->r6, ctx->r24);
    // 0x800ACB08: sh          $ra, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r31;
    // 0x800ACB0C: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x800ACB10: sw          $zero, 0x8($a2)
    MEM_W(0X8, ctx->r6) = 0;
    // 0x800ACB14: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x800ACB18: sw          $t1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r9;
    // 0x800ACB1C: swc1        $f0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f0.u32l;
    // 0x800ACB20: swc1        $f0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f0.u32l;
    // 0x800ACB24: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800ACB28: slti        $at, $a1, 0x9
    ctx->r1 = SIGNED(ctx->r5) < 0X9 ? 1 : 0;
    // 0x800ACB2C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800ACB30: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x800ACB34: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x800ACB38: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x800ACB3C: beq         $at, $zero, L_800ACB64
    if (ctx->r1 == 0) {
        // 0x800ACB40: swc1        $f0, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
            goto L_800ACB64;
    }
    // 0x800ACB40: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x800ACB44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800ACB48: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800ACB4C: nop

L_800ACB50:
    // 0x800ACB50: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800ACB54: slti        $at, $a1, 0x9
    ctx->r1 = SIGNED(ctx->r5) < 0X9 ? 1 : 0;
    // 0x800ACB58: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x800ACB5C: bne         $at, $zero, L_800ACB50
    if (ctx->r1 != 0) {
        // 0x800ACB60: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800ACB50;
    }
    // 0x800ACB60: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_800ACB64:
    // 0x800ACB64: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800ACB68: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800ACB6C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x800ACB70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800ACB74: lui         $at, 0x4580
    ctx->r1 = S32(0X4580 << 16);
    // 0x800ACB78: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800ACB7C: sw          $s0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r16;
    // 0x800ACB80: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x800ACB84: swc1        $f0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f0.u32l;
    // 0x800ACB88: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800ACB8C: swc1        $f2, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f2.u32l;
    // 0x800ACB90: swc1        $f2, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f2.u32l;
    // 0x800ACB94: swc1        $f4, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f4.u32l;
    // 0x800ACB98: swc1        $f6, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f6.u32l;
    // 0x800ACB9C: lwc1        $f8, 0x1170($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1170);
    // 0x800ACBA0: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x800ACBA4: addiu       $t1, $t1, 0x188
    ctx->r9 = ADD32(ctx->r9, 0X188);
    // 0x800ACBA8: swc1        $f8, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f8.u32l;
    // 0x800ACBAC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800ACBB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800ACBB4: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    // 0x800ACBB8: sw          $t9, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->r25;
    // 0x800ACBBC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800ACBC0: addiu       $v1, $zero, 0x258
    ctx->r3 = ADD32(0, 0X258);
    // 0x800ACBC4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800ACBC8: sw          $t6, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r14;
L_800ACBCC:
    // 0x800ACBCC: lw          $t7, 0x28($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X28);
    // 0x800ACBD0: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x800ACBD4: sh          $t4, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r12;
    // 0x800ACBD8: lw          $t9, 0x28($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X28);
    // 0x800ACBDC: addu        $t6, $t9, $v0
    ctx->r14 = ADD32(ctx->r25, ctx->r2);
    // 0x800ACBE0: sh          $v1, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r3;
    // 0x800ACBE4: lw          $t7, 0x28($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X28);
    // 0x800ACBE8: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x800ACBEC: sh          $a0, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r4;
    // 0x800ACBF0: lw          $t9, 0x28($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X28);
    // 0x800ACBF4: addu        $t6, $t9, $v0
    ctx->r14 = ADD32(ctx->r25, ctx->r2);
    // 0x800ACBF8: sh          $zero, 0x6($t6)
    MEM_H(0X6, ctx->r14) = 0;
    // 0x800ACBFC: lw          $t7, 0x28($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X28);
    // 0x800ACC00: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x800ACC04: sh          $t4, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r12;
    // 0x800ACC08: lw          $t9, 0x28($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X28);
    // 0x800ACC0C: addu        $t6, $t9, $v0
    ctx->r14 = ADD32(ctx->r25, ctx->r2);
    // 0x800ACC10: sh          $v1, 0xA($t6)
    MEM_H(0XA, ctx->r14) = ctx->r3;
    // 0x800ACC14: lw          $t7, 0x28($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X28);
    // 0x800ACC18: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x800ACC1C: sh          $zero, 0xC($t8)
    MEM_H(0XC, ctx->r24) = 0;
    // 0x800ACC20: lw          $t9, 0x28($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X28);
    // 0x800ACC24: addu        $t6, $t9, $v0
    ctx->r14 = ADD32(ctx->r25, ctx->r2);
    // 0x800ACC28: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800ACC2C: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x800ACC30: bne         $at, $zero, L_800ACBCC
    if (ctx->r1 != 0) {
        // 0x800ACC34: sh          $zero, 0xE($t6)
        MEM_H(0XE, ctx->r14) = 0;
            goto L_800ACBCC;
    }
    // 0x800ACC34: sh          $zero, 0xE($t6)
    MEM_H(0XE, ctx->r14) = 0;
    // 0x800ACC38: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x800ACC3C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800ACC40: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x800ACC44: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
L_800ACC48:
    // 0x800ACC48: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x800ACC4C: sw          $s0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r16;
    // 0x800ACC50: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x800ACC54: swc1        $f2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f2.u32l;
    // 0x800ACC58: swc1        $f2, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f2.u32l;
    // 0x800ACC5C: swc1        $f2, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f2.u32l;
    // 0x800ACC60: swc1        $f2, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f2.u32l;
    // 0x800ACC64: sw          $t3, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r11;
    // 0x800ACC68: sh          $ra, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r31;
    // 0x800ACC6C: sb          $a3, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r7;
    // 0x800ACC70: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x800ACC74: sw          $t1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r9;
    // 0x800ACC78: sw          $zero, 0x8($a2)
    MEM_W(0X8, ctx->r6) = 0;
    // 0x800ACC7C: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x800ACC80: swc1        $f0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f0.u32l;
    // 0x800ACC84: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800ACC88: addiu       $v0, $a2, 0x4
    ctx->r2 = ADD32(ctx->r6, 0X4);
L_800ACC8C:
    // 0x800ACC8C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800ACC90: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x800ACC94: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x800ACC98: swc1        $f0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f0.u32l;
    // 0x800ACC9C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x800ACCA0: bne         $v1, $a0, L_800ACC8C
    if (ctx->r3 != ctx->r4) {
        // 0x800ACCA4: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_800ACC8C;
    }
    // 0x800ACCA4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800ACCA8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x800ACCAC: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x800ACCB0: addiu       $t0, $t0, 0x1C
    ctx->r8 = ADD32(ctx->r8, 0X1C);
    // 0x800ACCB4: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x800ACCB8: addiu       $t1, $t1, 0x188
    ctx->r9 = ADD32(ctx->r9, 0X188);
    // 0x800ACCBC: bne         $a1, $zero, L_800ACC48
    if (ctx->r5 != 0) {
        // 0x800ACCC0: addiu       $t3, $t3, 0x20
        ctx->r11 = ADD32(ctx->r11, 0X20);
            goto L_800ACC48;
    }
    // 0x800ACCC0: addiu       $t3, $t3, 0x20
    ctx->r11 = ADD32(ctx->r11, 0X20);
    // 0x800ACCC4: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_800ACCC8:
    // 0x800ACCC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACCCC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800ACCD0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x800ACCD4: jr          $ra
    // 0x800ACCD8: nop

    return;
    // 0x800ACCD8: nop

;}
RECOMP_FUNC void func_800ACCDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ACCDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800ACCE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800ACCE4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800ACCE8: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x800ACCEC: beql        $t7, $zero, L_800ACD04
    if (ctx->r15 == 0) {
        // 0x800ACCF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800ACD04;
    }
    goto skip_0;
    // 0x800ACCF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800ACCF4: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x800ACCF8: jal         0x8007E328
    // 0x800ACCFC: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x800ACCFC: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    after_0:
    // 0x800ACD00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800ACD04:
    // 0x800ACD04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800ACD08: jr          $ra
    // 0x800ACD0C: nop

    return;
    // 0x800ACD0C: nop

;}
RECOMP_FUNC void func_800ACD10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ACD10: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800ACD14: slti        $at, $a1, 0x9
    ctx->r1 = SIGNED(ctx->r5) < 0X9 ? 1 : 0;
    // 0x800ACD18: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x800ACD1C: beq         $t7, $zero, L_800ACD44
    if (ctx->r15 == 0) {
        // 0x800ACD20: nop
    
            goto L_800ACD44;
    }
    // 0x800ACD20: nop

    // 0x800ACD24: bnel        $at, $zero, L_800ACD34
    if (ctx->r1 != 0) {
        // 0x800ACD28: lw          $t9, 0x8($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X8);
            goto L_800ACD34;
    }
    goto skip_0;
    // 0x800ACD28: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    skip_0:
    // 0x800ACD2C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800ACD30: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
L_800ACD34:
    // 0x800ACD34: addiu       $t8, $a1, 0x1
    ctx->r24 = ADD32(ctx->r5, 0X1);
    // 0x800ACD38: sw          $t8, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r24;
    // 0x800ACD3C: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x800ACD40: sw          $a1, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r5;
L_800ACD44:
    // 0x800ACD44: jr          $ra
    // 0x800ACD48: nop

    return;
    // 0x800ACD48: nop

;}
RECOMP_FUNC void func_800ACD4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ACD4C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800ACD50: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800ACD54: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x800ACD58: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x800ACD5C: beq         $t7, $zero, L_800ACD8C
    if (ctx->r15 == 0) {
        // 0x800ACD60: nop
    
            goto L_800ACD8C;
    }
    // 0x800ACD60: nop

    // 0x800ACD64: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800ACD68: andi        $t8, $a1, 0x7
    ctx->r24 = ctx->r5 & 0X7;
    // 0x800ACD6C: addiu       $a1, $t8, 0x1
    ctx->r5 = ADD32(ctx->r24, 0X1);
    // 0x800ACD70: lw          $t0, 0x28($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X28);
    // 0x800ACD74: sll         $t1, $a1, 6
    ctx->r9 = S32(ctx->r5 << 6);
    // 0x800ACD78: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x800ACD7C: swc1        $f12, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f12.u32l;
    // 0x800ACD80: swc1        $f14, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f14.u32l;
    // 0x800ACD84: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x800ACD88: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
L_800ACD8C:
    // 0x800ACD8C: jr          $ra
    // 0x800ACD90: nop

    return;
    // 0x800ACD90: nop

;}
RECOMP_FUNC void func_800ACD94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ACD94: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800ACD98: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800ACD9C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x800ACDA0: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x800ACDA4: beq         $t7, $zero, L_800ACDDC
    if (ctx->r15 == 0) {
        // 0x800ACDA8: nop
    
            goto L_800ACDDC;
    }
    // 0x800ACDA8: nop

    // 0x800ACDAC: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800ACDB0: andi        $t8, $a1, 0x7
    ctx->r24 = ctx->r5 & 0X7;
    // 0x800ACDB4: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x800ACDB8: lw          $t0, 0x38($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X38);
    // 0x800ACDBC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800ACDC0: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x800ACDC4: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x800ACDC8: swc1        $f14, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f14.u32l;
    // 0x800ACDCC: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x800ACDD0: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x800ACDD4: lwc1        $f6, 0x14($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800ACDD8: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
L_800ACDDC:
    // 0x800ACDDC: jr          $ra
    // 0x800ACDE0: nop

    return;
    // 0x800ACDE0: nop

;}
RECOMP_FUNC void func_800ACDE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ACDE4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800ACDE8: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x800ACDEC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x800ACDF0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800ACDF4: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x800ACDF8: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800ACDFC: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x800ACE00: beql        $t7, $zero, L_800ACE8C
    if (ctx->r15 == 0) {
        // 0x800ACE04: ldc1        $f20, 0x8($sp)
        CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
            goto L_800ACE8C;
    }
    goto skip_0;
    // 0x800ACE04: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    skip_0:
    // 0x800ACE08: sub.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x800ACE0C: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x800ACE10: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800ACE14: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x800ACE18: lw          $t9, 0x34($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X34);
    // 0x800ACE1C: add.d       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f0.d + ctx->f0.d;
    // 0x800ACE20: lw          $v0, 0x28($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X28);
    // 0x800ACE24: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x800ACE28: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x800ACE2C: nop

    // 0x800ACE30: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x800ACE34: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800ACE38: sub.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x800ACE3C: add.s       $f10, $f12, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x800ACE40: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x800ACE44: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x800ACE48: add.d       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = ctx->f16.d + ctx->f16.d;
    // 0x800ACE4C: add.d       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f18.d + ctx->f18.d;
    // 0x800ACE50: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x800ACE54: trunc.w.d   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x800ACE58: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x800ACE5C: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x800ACE60: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
    // 0x800ACE64: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
    // 0x800ACE68: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800ACE6C: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x800ACE70: cvt.d.s     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f20.d = CVT_D_S(ctx->f10.fl);
    // 0x800ACE74: add.d       $f4, $f20, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = ctx->f20.d + ctx->f20.d;
    // 0x800ACE78: trunc.w.d   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x800ACE7C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800ACE80: nop

    // 0x800ACE84: sh          $t7, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r15;
    // 0x800ACE88: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_800ACE8C:
    // 0x800ACE8C: jr          $ra
    // 0x800ACE90: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x800ACE90: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x800ACE94: nop

    // 0x800ACE98: nop

    // 0x800ACE9C: nop

;}
