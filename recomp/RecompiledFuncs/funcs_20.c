#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8009F2DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F2DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009F2E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009F2E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009F2E8: jal         0x8007E03C
    // 0x8009F2EC: addiu       $a0, $zero, 0x2000
    ctx->r4 = ADD32(0, 0X2000);
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x8009F2EC: addiu       $a0, $zero, 0x2000
    ctx->r4 = ADD32(0, 0X2000);
    after_0:
    // 0x8009F2F0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8009F2F4: addiu       $a0, $zero, 0x1D00
    ctx->r4 = ADD32(0, 0X1D00);
    // 0x8009F2F8: jal         0x8007E03C
    // 0x8009F2FC: sw          $v0, 0x12C($t6)
    MEM_W(0X12C, ctx->r14) = ctx->r2;
    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x8009F2FC: sw          $v0, 0x12C($t6)
    MEM_W(0X12C, ctx->r14) = ctx->r2;
    after_1:
    // 0x8009F300: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8009F304: nop

    // 0x8009F308: sw          $v0, 0x130($t7)
    MEM_W(0X130, ctx->r15) = ctx->r2;
    // 0x8009F30C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009F310: jal         0x8009DFF8
    // 0x8009F314: nop

    func_8009DFF8(rdram, ctx);
        goto after_2;
    // 0x8009F314: nop

    after_2:
    // 0x8009F318: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8009F31C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8009F320: jal         0x8009DBEC
    // 0x8009F324: addiu       $a0, $a0, 0x3ED0
    ctx->r4 = ADD32(ctx->r4, 0X3ED0);
    func_8009DBEC(rdram, ctx);
        goto after_3;
    // 0x8009F324: addiu       $a0, $a0, 0x3ED0
    ctx->r4 = ADD32(ctx->r4, 0X3ED0);
    after_3:
    // 0x8009F328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009F32C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009F330: jr          $ra
    // 0x8009F334: nop

    return;
    // 0x8009F334: nop

;}
RECOMP_FUNC void func_8009F338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F338: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009F33C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009F340: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8009F344: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009F348: lw          $t7, 0x12C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X12C);
    // 0x8009F34C: nop

    // 0x8009F350: beq         $t7, $zero, L_8009F36C
    if (ctx->r15 == 0) {
        // 0x8009F354: nop
    
            goto L_8009F36C;
    }
    // 0x8009F354: nop

    // 0x8009F358: jal         0x8007E328
    // 0x8009F35C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x8009F35C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x8009F360: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8009F364: nop

    // 0x8009F368: sw          $zero, 0x12C($t8)
    MEM_W(0X12C, ctx->r24) = 0;
L_8009F36C:
    // 0x8009F36C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8009F370: nop

    // 0x8009F374: lw          $t0, 0x130($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X130);
    // 0x8009F378: nop

    // 0x8009F37C: beq         $t0, $zero, L_8009F398
    if (ctx->r8 == 0) {
        // 0x8009F380: nop
    
            goto L_8009F398;
    }
    // 0x8009F380: nop

    // 0x8009F384: jal         0x8007E328
    // 0x8009F388: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x8009F388: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x8009F38C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8009F390: nop

    // 0x8009F394: sw          $zero, 0x130($t1)
    MEM_W(0X130, ctx->r9) = 0;
L_8009F398:
    // 0x8009F398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009F39C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009F3A0: jr          $ra
    // 0x8009F3A4: nop

    return;
    // 0x8009F3A4: nop

;}
RECOMP_FUNC void func_8009F3A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F3A8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8009F3AC: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x8009F3B0: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x8009F3B4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8009F3B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009F3BC: lw          $t6, 0x130($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X130);
    // 0x8009F3C0: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x8009F3C4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8009F3C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009F3CC: sll         $t0, $a1, 3
    ctx->r8 = S32(ctx->r5 << 3);
    // 0x8009F3D0: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x8009F3D4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8009F3D8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8009F3DC: swc1        $f4, 0x1BC($t8)
    MEM_W(0X1BC, ctx->r24) = ctx->f4.u32l;
    // 0x8009F3E0: lw          $t9, 0x130($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X130);
    // 0x8009F3E4: addu        $t0, $t0, $a1
    ctx->r8 = ADD32(ctx->r8, ctx->r5);
    // 0x8009F3E8: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8009F3EC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8009F3F0: sll         $t3, $a1, 3
    ctx->r11 = S32(ctx->r5 << 3);
    // 0x8009F3F4: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x8009F3F8: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8009F3FC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8009F400: swc1        $f6, 0x1B8($t1)
    MEM_W(0X1B8, ctx->r9) = ctx->f6.u32l;
    // 0x8009F404: lw          $t2, 0x130($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X130);
    // 0x8009F408: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x8009F40C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8009F410: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x8009F414: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8009F418: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8009F41C: sw          $a2, 0x1C0($t4)
    MEM_W(0X1C0, ctx->r12) = ctx->r6;
    // 0x8009F420: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009F424: lw          $t5, 0x130($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X130);
    // 0x8009F428: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x8009F42C: lwc1        $f8, 0xC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8009F430: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8009F434: sll         $t9, $a1, 3
    ctx->r25 = S32(ctx->r5 << 3);
    // 0x8009F438: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x8009F43C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8009F440: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8009F444: swc1        $f8, 0x1AC($t7)
    MEM_W(0X1AC, ctx->r15) = ctx->f8.u32l;
    // 0x8009F448: lw          $t8, 0x130($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X130);
    // 0x8009F44C: addu        $t9, $t9, $a1
    ctx->r25 = ADD32(ctx->r25, ctx->r5);
    // 0x8009F450: lwc1        $f10, 0x10($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8009F454: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8009F458: sll         $t2, $a1, 3
    ctx->r10 = S32(ctx->r5 << 3);
    // 0x8009F45C: subu        $t2, $t2, $a1
    ctx->r10 = SUB32(ctx->r10, ctx->r5);
    // 0x8009F460: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8009F464: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8009F468: swc1        $f10, 0x1B0($t0)
    MEM_W(0X1B0, ctx->r8) = ctx->f10.u32l;
    // 0x8009F46C: lw          $t1, 0x130($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X130);
    // 0x8009F470: addu        $t2, $t2, $a1
    ctx->r10 = ADD32(ctx->r10, ctx->r5);
    // 0x8009F474: lwc1        $f16, 0x14($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8009F478: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8009F47C: sll         $t5, $a1, 3
    ctx->r13 = S32(ctx->r5 << 3);
    // 0x8009F480: subu        $t5, $t5, $a1
    ctx->r13 = SUB32(ctx->r13, ctx->r5);
    // 0x8009F484: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8009F488: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8009F48C: swc1        $f16, 0x1B4($t3)
    MEM_W(0X1B4, ctx->r11) = ctx->f16.u32l;
    // 0x8009F490: lw          $t4, 0x130($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X130);
    // 0x8009F494: addu        $t5, $t5, $a1
    ctx->r13 = ADD32(ctx->r13, ctx->r5);
    // 0x8009F498: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009F49C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8009F4A0: sll         $t8, $a1, 3
    ctx->r24 = S32(ctx->r5 << 3);
    // 0x8009F4A4: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x8009F4A8: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8009F4AC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8009F4B0: swc1        $f18, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f18.u32l;
    // 0x8009F4B4: lw          $t7, 0x130($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X130);
    // 0x8009F4B8: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x8009F4BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009F4C0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8009F4C4: sll         $t1, $a1, 3
    ctx->r9 = S32(ctx->r5 << 3);
    // 0x8009F4C8: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x8009F4CC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009F4D0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8009F4D4: swc1        $f4, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f4.u32l;
    // 0x8009F4D8: lw          $t0, 0x130($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X130);
    // 0x8009F4DC: addu        $t1, $t1, $a1
    ctx->r9 = ADD32(ctx->r9, ctx->r5);
    // 0x8009F4E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009F4E4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8009F4E8: sll         $t4, $a1, 3
    ctx->r12 = S32(ctx->r5 << 3);
    // 0x8009F4EC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8009F4F0: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x8009F4F4: swc1        $f6, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f6.u32l;
    // 0x8009F4F8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8009F4FC: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8009F500: lw          $t3, 0x130($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X130);
    // 0x8009F504: addu        $t4, $t4, $a1
    ctx->r12 = ADD32(ctx->r12, ctx->r5);
    // 0x8009F508: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8009F50C: sll         $t8, $a1, 3
    ctx->r24 = S32(ctx->r5 << 3);
    // 0x8009F510: sw          $zero, 0x114($a0)
    MEM_W(0X114, ctx->r4) = 0;
    // 0x8009F514: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x8009F518: swc1        $f8, 0x128($a0)
    MEM_W(0X128, ctx->r4) = ctx->f8.u32l;
    // 0x8009F51C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8009F520: sw          $zero, 0x1C4($t5)
    MEM_W(0X1C4, ctx->r13) = 0;
    // 0x8009F524: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8009F528: lw          $t7, 0x130($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X130);
    // 0x8009F52C: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x8009F530: lbu         $t6, 0x27($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X27);
    // 0x8009F534: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8009F538: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009F53C: jr          $ra
    // 0x8009F540: sb          $t6, 0x1C8($t9)
    MEM_B(0X1C8, ctx->r25) = ctx->r14;
    return;
    // 0x8009F540: sb          $t6, 0x1C8($t9)
    MEM_B(0X1C8, ctx->r25) = ctx->r14;
;}
RECOMP_FUNC void func_8009F544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F544: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009F548: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F54C: lwc1        $f8, 0x3FA4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3FA4);
    // 0x8009F550: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F554: lwc1        $f16, 0x3FA0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3FA0);
    // 0x8009F558: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009F55C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009F560: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009F564: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8009F568: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8009F56C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009F570: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8009F574: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8009F578: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x8009F57C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8009F580: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009F584: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8009F588: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x8009F58C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8009F590: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8009F594: jal         0x8009F3A8
    // 0x8009F598: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_0;
    // 0x8009F598: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x8009F59C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F5A0: lwc1        $f6, 0x3FA4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3FA4);
    // 0x8009F5A4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F5A8: lwc1        $f10, 0x3FA0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3FA0);
    // 0x8009F5AC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009F5B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009F5B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009F5B8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009F5BC: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8009F5C0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8009F5C4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x8009F5C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8009F5CC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009F5D0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x8009F5D4: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8009F5D8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8009F5DC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8009F5E0: jal         0x8009F3A8
    // 0x8009F5E4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_1;
    // 0x8009F5E4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x8009F5E8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F5EC: lwc1        $f4, 0x3FA4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3FA4);
    // 0x8009F5F0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F5F4: lwc1        $f8, 0x3FA0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3FA0);
    // 0x8009F5F8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009F5FC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009F600: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009F604: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009F608: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8009F60C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8009F610: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8009F614: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8009F618: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009F61C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8009F620: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8009F624: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8009F628: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x8009F62C: jal         0x8009F3A8
    // 0x8009F630: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_2;
    // 0x8009F630: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x8009F634: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F638: lwc1        $f18, 0x3FA4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3FA4);
    // 0x8009F63C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F640: lwc1        $f6, 0x3FA0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3FA0);
    // 0x8009F644: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009F648: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009F64C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009F650: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009F654: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x8009F658: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8009F65C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8009F660: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8009F664: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009F668: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x8009F66C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8009F670: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009F674: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x8009F678: jal         0x8009F3A8
    // 0x8009F67C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_3;
    // 0x8009F67C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x8009F680: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F684: lwc1        $f16, 0x3FA4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3FA4);
    // 0x8009F688: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F68C: lwc1        $f4, 0x3FA0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3FA0);
    // 0x8009F690: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009F694: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009F698: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009F69C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009F6A0: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8009F6A4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8009F6A8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8009F6AC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8009F6B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009F6B4: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x8009F6B8: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8009F6BC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8009F6C0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x8009F6C4: jal         0x8009F3A8
    // 0x8009F6C8: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_4;
    // 0x8009F6C8: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x8009F6CC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F6D0: lwc1        $f10, 0x3FA4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3FA4);
    // 0x8009F6D4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F6D8: lwc1        $f18, 0x3FA0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3FA0);
    // 0x8009F6DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009F6E0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009F6E4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009F6E8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009F6EC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8009F6F0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8009F6F4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8009F6F8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8009F6FC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009F700: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x8009F704: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x8009F708: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8009F70C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x8009F710: jal         0x8009F3A8
    // 0x8009F714: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_5;
    // 0x8009F714: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x8009F718: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F71C: lwc1        $f8, 0x3FA4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3FA4);
    // 0x8009F720: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F724: lwc1        $f16, 0x3FA0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3FA0);
    // 0x8009F728: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009F72C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009F730: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009F734: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009F738: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8009F73C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x8009F740: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8009F744: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8009F748: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009F74C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8009F750: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x8009F754: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8009F758: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8009F75C: jal         0x8009F3A8
    // 0x8009F760: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_6;
    // 0x8009F760: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x8009F764: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F768: lwc1        $f6, 0x3FA4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3FA4);
    // 0x8009F76C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F770: lwc1        $f10, 0x3FA0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3FA0);
    // 0x8009F774: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009F778: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8009F77C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009F780: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009F784: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009F788: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8009F78C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8009F790: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009F794: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x8009F798: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8009F79C: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x8009F7A0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8009F7A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8009F7A8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009F7AC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x8009F7B0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8009F7B4: jal         0x8009F3A8
    // 0x8009F7B8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_7;
    // 0x8009F7B8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x8009F7BC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F7C0: lwc1        $f8, 0x3FA4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3FA4);
    // 0x8009F7C4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F7C8: lwc1        $f16, 0x3FA0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3FA0);
    // 0x8009F7CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009F7D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009F7D4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009F7D8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009F7DC: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8009F7E0: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x8009F7E4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8009F7E8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8009F7EC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009F7F0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8009F7F4: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x8009F7F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8009F7FC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8009F800: jal         0x8009F3A8
    // 0x8009F804: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_8;
    // 0x8009F804: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x8009F808: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F80C: lwc1        $f6, 0x3FA4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3FA4);
    // 0x8009F810: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F814: lwc1        $f10, 0x3FA0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3FA0);
    // 0x8009F818: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009F81C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009F820: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009F824: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009F828: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x8009F82C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8009F830: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8009F834: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x8009F838: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009F83C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x8009F840: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8009F844: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8009F848: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8009F84C: jal         0x8009F3A8
    // 0x8009F850: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_9;
    // 0x8009F850: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x8009F854: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F858: lwc1        $f4, 0x3FA4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3FA4);
    // 0x8009F85C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F860: lwc1        $f8, 0x3FA0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3FA0);
    // 0x8009F864: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009F868: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009F86C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009F870: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009F874: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8009F878: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8009F87C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009F880: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8009F884: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009F888: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8009F88C: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8009F890: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8009F894: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x8009F898: jal         0x8009F3A8
    // 0x8009F89C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_10;
    // 0x8009F89C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x8009F8A0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F8A4: lwc1        $f18, 0x3FA4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3FA4);
    // 0x8009F8A8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F8AC: lwc1        $f6, 0x3FA0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3FA0);
    // 0x8009F8B0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009F8B4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009F8B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009F8BC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009F8C0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8009F8C4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8009F8C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009F8CC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x8009F8D0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009F8D4: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x8009F8D8: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8009F8DC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009F8E0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x8009F8E4: jal         0x8009F3A8
    // 0x8009F8E8: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_11;
    // 0x8009F8E8: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x8009F8EC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F8F0: lwc1        $f16, 0x3FA4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3FA4);
    // 0x8009F8F4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F8F8: lwc1        $f4, 0x3FA0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3FA0);
    // 0x8009F8FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009F900: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009F904: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009F908: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009F90C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8009F910: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8009F914: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009F918: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x8009F91C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009F920: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x8009F924: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8009F928: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8009F92C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x8009F930: jal         0x8009F3A8
    // 0x8009F934: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_12;
    // 0x8009F934: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_12:
    // 0x8009F938: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F93C: lwc1        $f10, 0x3FA4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3FA4);
    // 0x8009F940: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F944: lwc1        $f18, 0x3FA0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3FA0);
    // 0x8009F948: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009F94C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009F950: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009F954: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009F958: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x8009F95C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8009F960: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8009F964: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x8009F968: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009F96C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x8009F970: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x8009F974: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8009F978: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x8009F97C: jal         0x8009F3A8
    // 0x8009F980: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_13;
    // 0x8009F980: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_13:
    // 0x8009F984: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F988: lwc1        $f8, 0x3FA4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3FA4);
    // 0x8009F98C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F990: lwc1        $f16, 0x3FA0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3FA0);
    // 0x8009F994: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009F998: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009F99C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009F9A0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009F9A4: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8009F9A8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8009F9AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8009F9B0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x8009F9B4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009F9B8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8009F9BC: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x8009F9C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8009F9C4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8009F9C8: jal         0x8009F3A8
    // 0x8009F9CC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_14;
    // 0x8009F9CC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x8009F9D0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F9D4: lwc1        $f6, 0x3FA4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3FA4);
    // 0x8009F9D8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009F9DC: lwc1        $f10, 0x3FA0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3FA0);
    // 0x8009F9E0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009F9E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009F9E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009F9EC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009F9F0: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8009F9F4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8009F9F8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8009F9FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8009FA00: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009FA04: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x8009FA08: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8009FA0C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8009FA10: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8009FA14: jal         0x8009F3A8
    // 0x8009FA18: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_15;
    // 0x8009FA18: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_15:
    // 0x8009FA1C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8009FA20: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8009FA24: jr          $ra
    // 0x8009FA28: nop

    return;
    // 0x8009FA28: nop

;}
RECOMP_FUNC void func_8009FA2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FA2C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009FA30: lui         $at, 0xC461
    ctx->r1 = S32(0XC461 << 16);
    // 0x8009FA34: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8009FA38: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009FA3C: lwc1        $f16, 0x3FA8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3FA8);
    // 0x8009FA40: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009FA44: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009FA48: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009FA4C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8009FA50: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8009FA54: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009FA58: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8009FA5C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8009FA60: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8009FA64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8009FA68: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009FA6C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x8009FA70: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x8009FA74: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8009FA78: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8009FA7C: jal         0x8009F3A8
    // 0x8009FA80: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_0;
    // 0x8009FA80: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8009FA84: lui         $at, 0xC461
    ctx->r1 = S32(0XC461 << 16);
    // 0x8009FA88: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009FA8C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009FA90: lwc1        $f10, 0x3FA8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3FA8);
    // 0x8009FA94: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009FA98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009FA9C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009FAA0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009FAA4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8009FAA8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8009FAAC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8009FAB0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8009FAB4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009FAB8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x8009FABC: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8009FAC0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8009FAC4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8009FAC8: jal         0x8009F3A8
    // 0x8009FACC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_1;
    // 0x8009FACC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8009FAD0: lui         $at, 0xC461
    ctx->r1 = S32(0XC461 << 16);
    // 0x8009FAD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009FAD8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009FADC: lwc1        $f8, 0x3FA8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3FA8);
    // 0x8009FAE0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009FAE4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009FAE8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009FAEC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009FAF0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8009FAF4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8009FAF8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8009FAFC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8009FB00: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009FB04: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8009FB08: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8009FB0C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8009FB10: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x8009FB14: jal         0x8009F3A8
    // 0x8009FB18: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_2;
    // 0x8009FB18: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x8009FB1C: lui         $at, 0xC461
    ctx->r1 = S32(0XC461 << 16);
    // 0x8009FB20: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009FB24: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009FB28: lwc1        $f6, 0x3FA8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3FA8);
    // 0x8009FB2C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009FB30: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009FB34: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009FB38: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009FB3C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8009FB40: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8009FB44: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8009FB48: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8009FB4C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009FB50: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8009FB54: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8009FB58: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009FB5C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x8009FB60: jal         0x8009F3A8
    // 0x8009FB64: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_3;
    // 0x8009FB64: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x8009FB68: lui         $at, 0xC461
    ctx->r1 = S32(0XC461 << 16);
    // 0x8009FB6C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009FB70: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009FB74: lwc1        $f4, 0x3FA8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3FA8);
    // 0x8009FB78: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009FB7C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009FB80: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009FB84: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009FB88: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8009FB8C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8009FB90: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8009FB94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8009FB98: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009FB9C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x8009FBA0: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8009FBA4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8009FBA8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x8009FBAC: jal         0x8009F3A8
    // 0x8009FBB0: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_4;
    // 0x8009FBB0: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x8009FBB4: lui         $at, 0xC461
    ctx->r1 = S32(0XC461 << 16);
    // 0x8009FBB8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009FBBC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009FBC0: lwc1        $f18, 0x3FA8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3FA8);
    // 0x8009FBC4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009FBC8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009FBCC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009FBD0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009FBD4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8009FBD8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8009FBDC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x8009FBE0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x8009FBE4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009FBE8: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x8009FBEC: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x8009FBF0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8009FBF4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x8009FBF8: jal         0x8009F3A8
    // 0x8009FBFC: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_5;
    // 0x8009FBFC: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x8009FC00: lui         $at, 0xC461
    ctx->r1 = S32(0XC461 << 16);
    // 0x8009FC04: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8009FC08: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009FC0C: lwc1        $f16, 0x3FA8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3FA8);
    // 0x8009FC10: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009FC14: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009FC18: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009FC1C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009FC20: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8009FC24: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x8009FC28: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x8009FC2C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8009FC30: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009FC34: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x8009FC38: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x8009FC3C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8009FC40: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8009FC44: jal         0x8009F3A8
    // 0x8009FC48: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_6;
    // 0x8009FC48: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x8009FC4C: lui         $at, 0xC461
    ctx->r1 = S32(0XC461 << 16);
    // 0x8009FC50: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009FC54: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009FC58: lwc1        $f10, 0x3FA8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3FA8);
    // 0x8009FC5C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009FC60: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009FC64: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009FC68: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009FC6C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8009FC70: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8009FC74: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8009FC78: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8009FC7C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009FC80: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x8009FC84: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8009FC88: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8009FC8C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8009FC90: jal         0x8009F3A8
    // 0x8009FC94: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_7;
    // 0x8009FC94: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x8009FC98: lui         $at, 0xC461
    ctx->r1 = S32(0XC461 << 16);
    // 0x8009FC9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009FCA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009FCA4: lwc1        $f8, 0x3FA8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3FA8);
    // 0x8009FCA8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009FCAC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009FCB0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009FCB4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009FCB8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8009FCBC: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x8009FCC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009FCC4: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x8009FCC8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009FCCC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8009FCD0: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8009FCD4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8009FCD8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x8009FCDC: jal         0x8009F3A8
    // 0x8009FCE0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_8;
    // 0x8009FCE0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x8009FCE4: lui         $at, 0xC461
    ctx->r1 = S32(0XC461 << 16);
    // 0x8009FCE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009FCEC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009FCF0: lwc1        $f6, 0x3FA8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3FA8);
    // 0x8009FCF4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009FCF8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009FCFC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009FD00: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009FD04: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8009FD08: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8009FD0C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8009FD10: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x8009FD14: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009FD18: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8009FD1C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8009FD20: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009FD24: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x8009FD28: jal         0x8009F3A8
    // 0x8009FD2C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_9;
    // 0x8009FD2C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_9:
    // 0x8009FD30: lui         $at, 0xC461
    ctx->r1 = S32(0XC461 << 16);
    // 0x8009FD34: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009FD38: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009FD3C: lwc1        $f4, 0x3FA8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3FA8);
    // 0x8009FD40: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009FD44: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009FD48: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009FD4C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009FD50: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8009FD54: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8009FD58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8009FD5C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8009FD60: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009FD64: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x8009FD68: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8009FD6C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8009FD70: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x8009FD74: jal         0x8009F3A8
    // 0x8009FD78: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_10;
    // 0x8009FD78: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_10:
    // 0x8009FD7C: lui         $at, 0xC461
    ctx->r1 = S32(0XC461 << 16);
    // 0x8009FD80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009FD84: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009FD88: lwc1        $f18, 0x3FA8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3FA8);
    // 0x8009FD8C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009FD90: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009FD94: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009FD98: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009FD9C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8009FDA0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8009FDA4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8009FDA8: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x8009FDAC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009FDB0: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x8009FDB4: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x8009FDB8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8009FDBC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x8009FDC0: jal         0x8009F3A8
    // 0x8009FDC4: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_11;
    // 0x8009FDC4: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x8009FDC8: lui         $at, 0xC461
    ctx->r1 = S32(0XC461 << 16);
    // 0x8009FDCC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8009FDD0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009FDD4: lwc1        $f16, 0x3FA8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3FA8);
    // 0x8009FDD8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009FDDC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009FDE0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009FDE4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009FDE8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8009FDEC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8009FDF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009FDF4: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x8009FDF8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009FDFC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x8009FE00: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x8009FE04: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8009FE08: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8009FE0C: jal         0x8009F3A8
    // 0x8009FE10: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_12;
    // 0x8009FE10: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x8009FE14: lui         $at, 0xC461
    ctx->r1 = S32(0XC461 << 16);
    // 0x8009FE18: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009FE1C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009FE20: lwc1        $f10, 0x3FA8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3FA8);
    // 0x8009FE24: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009FE28: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009FE2C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009FE30: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009FE34: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8009FE38: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8009FE3C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8009FE40: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x8009FE44: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009FE48: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x8009FE4C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8009FE50: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8009FE54: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8009FE58: jal         0x8009F3A8
    // 0x8009FE5C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_13;
    // 0x8009FE5C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_13:
    // 0x8009FE60: lui         $at, 0xC461
    ctx->r1 = S32(0XC461 << 16);
    // 0x8009FE64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009FE68: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009FE6C: lwc1        $f8, 0x3FA8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3FA8);
    // 0x8009FE70: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009FE74: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009FE78: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009FE7C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009FE80: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8009FE84: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8009FE88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009FE8C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x8009FE90: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009FE94: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8009FE98: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8009FE9C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8009FEA0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x8009FEA4: jal         0x8009F3A8
    // 0x8009FEA8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_14;
    // 0x8009FEA8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x8009FEAC: lui         $at, 0xC461
    ctx->r1 = S32(0XC461 << 16);
    // 0x8009FEB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009FEB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009FEB8: lwc1        $f6, 0x3FA8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3FA8);
    // 0x8009FEBC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009FEC0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009FEC4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009FEC8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009FECC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8009FED0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8009FED4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8009FED8: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    // 0x8009FEDC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009FEE0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8009FEE4: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8009FEE8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009FEEC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x8009FEF0: jal         0x8009F3A8
    // 0x8009FEF4: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_8009F3A8(rdram, ctx);
        goto after_15;
    // 0x8009FEF4: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_15:
    // 0x8009FEF8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8009FEFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8009FF00: jr          $ra
    // 0x8009FF04: nop

    return;
    // 0x8009FF04: nop

;}
RECOMP_FUNC void func_8009FF08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FF08: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8009FF0C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8009FF10: lbu         $t8, 0x47($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X47);
    // 0x8009FF14: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8009FF18: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8009FF1C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8009FF20: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8009FF24: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8009FF28: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8009FF2C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8009FF30: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8009FF34: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8009FF38: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8009FF3C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8009FF40: lw          $t7, 0x130($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X130);
    // 0x8009FF44: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8009FF48: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8009FF4C: addu        $s0, $t7, $t9
    ctx->r16 = ADD32(ctx->r15, ctx->r25);
    // 0x8009FF50: lwc1        $f4, 0x1BC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1BC);
    // 0x8009FF54: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009FF58: nop

    // 0x8009FF5C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8009FF60: nop

    // 0x8009FF64: bc1t        L_800A0208
    if (c1cs) {
        // 0x8009FF68: nop
    
            goto L_800A0208;
    }
    // 0x8009FF68: nop

    // 0x8009FF6C: lw          $t0, 0x1C0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1C0);
    // 0x8009FF70: nop

    // 0x8009FF74: beq         $t0, $zero, L_8009FF90
    if (ctx->r8 == 0) {
        // 0x8009FF78: nop
    
            goto L_8009FF90;
    }
    // 0x8009FF78: nop

    // 0x8009FF7C: lw          $t1, 0x1C0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C0);
    // 0x8009FF80: nop

    // 0x8009FF84: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8009FF88: b           L_800A0208
    // 0x8009FF8C: sw          $t2, 0x1C0($s0)
    MEM_W(0X1C0, ctx->r16) = ctx->r10;
        goto L_800A0208;
    // 0x8009FF8C: sw          $t2, 0x1C0($s0)
    MEM_W(0X1C0, ctx->r16) = ctx->r10;
L_8009FF90:
    // 0x8009FF90: lbu         $t3, 0x1C8($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1C8);
    // 0x8009FF94: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8009FF98: bne         $t3, $at, L_800A0034
    if (ctx->r11 != ctx->r1) {
        // 0x8009FF9C: nop
    
            goto L_800A0034;
    }
    // 0x8009FF9C: nop

    // 0x8009FFA0: lwc1        $f8, 0x1B8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1B8);
    // 0x8009FFA4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009FFA8: nop

    // 0x8009FFAC: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8009FFB0: nop

    // 0x8009FFB4: bc1f        L_8009FFC8
    if (!c1cs) {
        // 0x8009FFB8: nop
    
            goto L_8009FFC8;
    }
    // 0x8009FFB8: nop

    // 0x8009FFBC: lwc1        $f22, 0x1B8($s0)
    ctx->f22.u32l = MEM_W(ctx->r16, 0X1B8);
    // 0x8009FFC0: b           L_8009FFD4
    // 0x8009FFC4: nop

        goto L_8009FFD4;
    // 0x8009FFC4: nop

L_8009FFC8:
    // 0x8009FFC8: lwc1        $f22, 0x1B8($s0)
    ctx->f22.u32l = MEM_W(ctx->r16, 0X1B8);
    // 0x8009FFCC: nop

    // 0x8009FFD0: neg.s       $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = -ctx->f22.fl;
L_8009FFD4:
    // 0x8009FFD4: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8009FFD8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009FFDC: lwc1        $f16, 0x128($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X128);
    // 0x8009FFE0: nop

    // 0x8009FFE4: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x8009FFE8: nop

    // 0x8009FFEC: bc1f        L_8009FFFC
    if (!c1cs) {
        // 0x8009FFF0: nop
    
            goto L_8009FFFC;
    }
    // 0x8009FFF0: nop

    // 0x8009FFF4: b           L_800A0010
    // 0x8009FFF8: mov.s       $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = ctx->f16.fl;
        goto L_800A0010;
    // 0x8009FFF8: mov.s       $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = ctx->f16.fl;
L_8009FFFC:
    // 0x8009FFFC: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x800A0000: nop

    // 0x800A0004: lwc1        $f20, 0x128($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X128);
    // 0x800A0008: nop

    // 0x800A000C: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
L_800A0010:
    // 0x800A0010: c.le.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl <= ctx->f22.fl;
    // 0x800A0014: nop

    // 0x800A0018: bc1f        L_800A00C0
    if (!c1cs) {
        // 0x800A001C: nop
    
            goto L_800A00C0;
    }
    // 0x800A001C: nop

    // 0x800A0020: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A0024: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A0028: sw          $t6, 0x1C4($s0)
    MEM_W(0X1C4, ctx->r16) = ctx->r14;
    // 0x800A002C: b           L_800A00C0
    // 0x800A0030: swc1        $f4, 0x1BC($s0)
    MEM_W(0X1BC, ctx->r16) = ctx->f4.u32l;
        goto L_800A00C0;
    // 0x800A0030: swc1        $f4, 0x1BC($s0)
    MEM_W(0X1BC, ctx->r16) = ctx->f4.u32l;
L_800A0034:
    // 0x800A0034: lwc1        $f6, 0x1B8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1B8);
    // 0x800A0038: lwc1        $f8, 0x1BC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1BC);
    // 0x800A003C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x800A0040: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800A0044: lwc1        $f18, 0x128($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X128);
    // 0x800A0048: nop

    // 0x800A004C: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x800A0050: nop

    // 0x800A0054: bc1f        L_800A006C
    if (!c1cs) {
        // 0x800A0058: nop
    
            goto L_800A006C;
    }
    // 0x800A0058: nop

    // 0x800A005C: lwc1        $f16, 0x1B8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1B8);
    // 0x800A0060: nop

    // 0x800A0064: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x800A0068: swc1        $f4, 0x1BC($s0)
    MEM_W(0X1BC, ctx->r16) = ctx->f4.u32l;
L_800A006C:
    // 0x800A006C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800A0070: lwc1        $f6, 0x1B8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1B8);
    // 0x800A0074: lwc1        $f8, 0x128($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X128);
    // 0x800A0078: nop

    // 0x800A007C: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x800A0080: nop

    // 0x800A0084: bc1f        L_800A00C0
    if (!c1cs) {
        // 0x800A0088: nop
    
            goto L_800A00C0;
    }
    // 0x800A0088: nop

    // 0x800A008C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A0090: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800A0094: sw          $t9, 0x1C4($s0)
    MEM_W(0X1C4, ctx->r16) = ctx->r25;
    // 0x800A0098: swc1        $f10, 0x1BC($s0)
    MEM_W(0X1BC, ctx->r16) = ctx->f10.u32l;
    // 0x800A009C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x800A00A0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A00A4: lwc1        $f18, 0x128($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X128);
    // 0x800A00A8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800A00AC: addiu       $a1, $a1, 0x3988
    ctx->r5 = ADD32(ctx->r5, 0X3988);
    // 0x800A00B0: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x800A00B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A00B8: jal         0x8008A5C8
    // 0x800A00BC: swc1        $f18, 0x1B8($s0)
    MEM_W(0X1B8, ctx->r16) = ctx->f18.u32l;
    func_8008A5C8(rdram, ctx);
        goto after_0;
    // 0x800A00BC: swc1        $f18, 0x1B8($s0)
    MEM_W(0X1B8, ctx->r16) = ctx->f18.u32l;
    after_0:
L_800A00C0:
    // 0x800A00C0: lwc1        $f8, 0x1AC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1AC);
    // 0x800A00C4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A00C8: lwc1        $f16, 0x1B8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1B8);
    // 0x800A00CC: lwc1        $f4, 0x1BC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1BC);
    // 0x800A00D0: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x800A00D4: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x800A00D8: bc1f        L_800A0118
    if (!c1cs) {
        // 0x800A00DC: swc1        $f6, 0x1B8($s0)
        MEM_W(0X1B8, ctx->r16) = ctx->f6.u32l;
            goto L_800A0118;
    }
    // 0x800A00DC: swc1        $f6, 0x1B8($s0)
    MEM_W(0X1B8, ctx->r16) = ctx->f6.u32l;
    // 0x800A00E0: lwc1        $f18, 0x1B0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1B0);
    // 0x800A00E4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A00E8: nop

    // 0x800A00EC: c.eq.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
    // 0x800A00F0: nop

    // 0x800A00F4: bc1f        L_800A0118
    if (!c1cs) {
        // 0x800A00F8: nop
    
            goto L_800A0118;
    }
    // 0x800A00F8: nop

    // 0x800A00FC: lwc1        $f4, 0x1B4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1B4);
    // 0x800A0100: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A0104: nop

    // 0x800A0108: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800A010C: nop

    // 0x800A0110: bc1t        L_800A0208
    if (c1cs) {
        // 0x800A0114: nop
    
            goto L_800A0208;
    }
    // 0x800A0114: nop

L_800A0118:
    // 0x800A0118: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x800A011C: lwc1        $f10, 0x1AC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1AC);
    // 0x800A0120: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x800A0124: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800A0128: lwc1        $f4, 0x1B0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1B0);
    // 0x800A012C: lwc1        $f10, 0x1B4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1B4);
    // 0x800A0130: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x800A0134: swc1        $f18, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f18.u32l;
    // 0x800A0138: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x800A013C: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x800A0140: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800A0144: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x800A0148: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800A014C: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x800A0150: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800A0154: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A0158: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A015C: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x800A0160: cvt.w.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800A0164: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x800A0168: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800A016C: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x800A0170: mfhi        $t3
    ctx->r11 = hi;
    // 0x800A0174: bne         $t3, $zero, L_800A0188
    if (ctx->r11 != 0) {
        // 0x800A0178: nop
    
            goto L_800A0188;
    }
    // 0x800A0178: nop

    // 0x800A017C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A0180: nop

    // 0x800A0184: swc1        $f6, 0x1AC($s0)
    MEM_W(0X1AC, ctx->r16) = ctx->f6.u32l;
L_800A0188:
    // 0x800A0188: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800A018C: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x800A0190: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800A0194: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A0198: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A019C: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x800A01A0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800A01A4: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x800A01A8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800A01AC: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x800A01B0: mfhi        $t6
    ctx->r14 = hi;
    // 0x800A01B4: bne         $t6, $zero, L_800A01C8
    if (ctx->r14 != 0) {
        // 0x800A01B8: nop
    
            goto L_800A01C8;
    }
    // 0x800A01B8: nop

    // 0x800A01BC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800A01C0: nop

    // 0x800A01C4: swc1        $f18, 0x1B0($s0)
    MEM_W(0X1B0, ctx->r16) = ctx->f18.u32l;
L_800A01C8:
    // 0x800A01C8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800A01CC: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x800A01D0: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800A01D4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A01D8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A01DC: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x800A01E0: cvt.w.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800A01E4: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x800A01E8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800A01EC: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x800A01F0: mfhi        $t9
    ctx->r25 = hi;
    // 0x800A01F4: bne         $t9, $zero, L_800A0208
    if (ctx->r25 != 0) {
        // 0x800A01F8: nop
    
            goto L_800A0208;
    }
    // 0x800A01F8: nop

    // 0x800A01FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A0200: nop

    // 0x800A0204: swc1        $f6, 0x1B4($s0)
    MEM_W(0X1B4, ctx->r16) = ctx->f6.u32l;
L_800A0208:
    // 0x800A0208: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800A020C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800A0210: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800A0214: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800A0218: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800A021C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800A0220: jr          $ra
    // 0x800A0224: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800A0224: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800A0228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0228: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x800A022C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800A0230: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A0234: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A0238: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A023C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A0240: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A0244: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800A0248: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x800A024C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800A0250: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x800A0254: lw          $a3, 0x3FAC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3FAC);
    // 0x800A0258: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800A025C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x800A0260: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800A0264: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800A0268: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x800A026C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800A0270: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x800A0274: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x800A0278: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x800A027C: jal         0x800BA298
    // 0x800A0280: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    guLookAt(rdram, ctx);
        goto after_0;
    // 0x800A0280: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800A0284: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x800A0288: lw          $t6, 0x20C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X20C0);
    // 0x800A028C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A0290: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x800A0294: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800A0298: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x800A029C: sw          $t7, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r15;
    // 0x800A02A0: lui         $t8, 0xDB0E
    ctx->r24 = S32(0XDB0E << 16);
    // 0x800A02A4: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800A02A8: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x800A02AC: lhu         $t0, -0x6F40($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X6F40);
    // 0x800A02B0: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800A02B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A02B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A02BC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A02C0: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x800A02C4: lwc1        $f6, 0x410($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X410);
    // 0x800A02C8: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x800A02CC: lhu         $t2, 0x20B0($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X20B0);
    // 0x800A02D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A02D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A02D8: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x800A02DC: addiu       $t4, $t4, -0x6FC0
    ctx->r12 = ADD32(ctx->r12, -0X6FC0);
    // 0x800A02E0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A02E4: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x800A02E8: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    // 0x800A02EC: addiu       $a1, $a1, -0x6F40
    ctx->r5 = ADD32(ctx->r5, -0X6F40);
    // 0x800A02F0: lui         $a2, 0x426C
    ctx->r6 = S32(0X426C << 16);
    // 0x800A02F4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800A02F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800A02FC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x800A0300: jal         0x800BA540
    // 0x800A0304: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_1;
    // 0x800A0304: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x800A0308: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x800A030C: lhu         $t5, 0x20B0($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X20B0);
    // 0x800A0310: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800A0314: addiu       $t7, $t7, -0x6FC0
    ctx->r15 = ADD32(ctx->r15, -0X6FC0);
    // 0x800A0318: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x800A031C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800A0320: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x800A0324: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x800A0328: jal         0x800BA600
    // 0x800A032C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    guMtxCatL(rdram, ctx);
        goto after_2;
    // 0x800A032C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_2:
    // 0x800A0330: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x800A0334: lw          $t9, 0x20C0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X20C0);
    // 0x800A0338: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A033C: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x800A0340: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x800A0344: lui         $t1, 0xDC08
    ctx->r9 = S32(0XDC08 << 16);
    // 0x800A0348: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x800A034C: sw          $t0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r8;
    // 0x800A0350: ori         $t1, $t1, 0x8
    ctx->r9 = ctx->r9 | 0X8;
    // 0x800A0354: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x800A0358: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x800A035C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800A0360: addiu       $t3, $t3, 0x3F10
    ctx->r11 = ADD32(ctx->r11, 0X3F10);
    // 0x800A0364: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x800A0368: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x800A036C: lw          $t5, 0x20C0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X20C0);
    // 0x800A0370: lui         $t7, 0xDA38
    ctx->r15 = S32(0XDA38 << 16);
    // 0x800A0374: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x800A0378: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800A037C: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x800A0380: sw          $t6, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r14;
    // 0x800A0384: ori         $t7, $t7, 0x7
    ctx->r15 = ctx->r15 | 0X7;
    // 0x800A0388: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x800A038C: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x800A0390: lhu         $t9, 0x20B0($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X20B0);
    // 0x800A0394: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800A0398: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800A039C: addiu       $t1, $t1, -0x6FC0
    ctx->r9 = ADD32(ctx->r9, -0X6FC0);
    // 0x800A03A0: sll         $t0, $t9, 6
    ctx->r8 = S32(ctx->r25 << 6);
    // 0x800A03A4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800A03A8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800A03AC: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x800A03B0: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x800A03B4: beq         $at, $zero, L_800A03E4
    if (ctx->r1 == 0) {
        // 0x800A03B8: sw          $zero, 0x38($sp)
        MEM_W(0X38, ctx->r29) = 0;
            goto L_800A03E4;
    }
    // 0x800A03B8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_800A03BC:
    // 0x800A03BC: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x800A03C0: jal         0x8009EED4
    // 0x800A03C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8009EED4(rdram, ctx);
        goto after_3;
    // 0x800A03C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x800A03C8: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x800A03CC: jal         0x8009FF08
    // 0x800A03D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8009FF08(rdram, ctx);
        goto after_4;
    // 0x800A03D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x800A03D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800A03D8: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x800A03DC: bne         $at, $zero, L_800A03BC
    if (ctx->r1 != 0) {
        // 0x800A03E0: nop
    
            goto L_800A03BC;
    }
    // 0x800A03E0: nop

L_800A03E4:
    // 0x800A03E4: lw          $t4, 0x90($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X90);
    // 0x800A03E8: nop

    // 0x800A03EC: lw          $t5, 0x114($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X114);
    // 0x800A03F0: nop

    // 0x800A03F4: bne         $t5, $zero, L_800A0464
    if (ctx->r13 != 0) {
        // 0x800A03F8: nop
    
            goto L_800A0464;
    }
    // 0x800A03F8: nop

    // 0x800A03FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800A0400: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x800A0404: beq         $at, $zero, L_800A0448
    if (ctx->r1 == 0) {
        // 0x800A0408: sw          $zero, 0x38($sp)
        MEM_W(0X38, ctx->r29) = 0;
            goto L_800A0448;
    }
    // 0x800A0408: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_800A040C:
    // 0x800A040C: sll         $t8, $s0, 3
    ctx->r24 = S32(ctx->r16 << 3);
    // 0x800A0410: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x800A0414: subu        $t8, $t8, $s0
    ctx->r24 = SUB32(ctx->r24, ctx->r16);
    // 0x800A0418: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A041C: lw          $t7, 0x130($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X130);
    // 0x800A0420: addu        $t8, $t8, $s0
    ctx->r24 = ADD32(ctx->r24, ctx->r16);
    // 0x800A0424: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800A0428: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A042C: lw          $t0, 0x1C4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X1C4);
    // 0x800A0430: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800A0434: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800A0438: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x800A043C: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x800A0440: bne         $at, $zero, L_800A040C
    if (ctx->r1 != 0) {
        // 0x800A0444: sw          $t2, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r10;
            goto L_800A040C;
    }
    // 0x800A0444: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
L_800A0448:
    // 0x800A0448: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800A044C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x800A0450: bne         $t3, $at, L_800A0464
    if (ctx->r11 != ctx->r1) {
        // 0x800A0454: nop
    
            goto L_800A0464;
    }
    // 0x800A0454: nop

    // 0x800A0458: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
    // 0x800A045C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800A0460: sw          $t4, 0x114($t5)
    MEM_W(0X114, ctx->r13) = ctx->r12;
L_800A0464:
    // 0x800A0464: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800A0468: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800A046C: jr          $ra
    // 0x800A0470: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x800A0470: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x800A0474: nop

    // 0x800A0478: nop

    // 0x800A047C: nop

;}
RECOMP_FUNC void func_800A0480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0480: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800A0484: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A0488: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800A048C: jr          $ra
    // 0x800A0490: sb          $t6, 0x3CF0($at)
    MEM_B(0X3CF0, ctx->r1) = ctx->r14;
    return;
    // 0x800A0490: sb          $t6, 0x3CF0($at)
    MEM_B(0X3CF0, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800A0494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0494: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x800A0498: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A049C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800A04A0: jr          $ra
    // 0x800A04A4: sb          $t6, 0x3CF0($at)
    MEM_B(0X3CF0, ctx->r1) = ctx->r14;
    return;
    // 0x800A04A4: sb          $t6, 0x3CF0($at)
    MEM_B(0X3CF0, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800A04A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A04A8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800A04AC: addiu       $t6, $t6, 0x3D00
    ctx->r14 = ADD32(ctx->r14, 0X3D00);
    // 0x800A04B0: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800A04B4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800A04B8: addiu       $t8, $t8, 0x3D10
    ctx->r24 = ADD32(ctx->r24, 0X3D10);
    // 0x800A04BC: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x800A04C0: addiu       $t9, $zero, 0xFA
    ctx->r25 = ADD32(0, 0XFA);
    // 0x800A04C4: addiu       $t0, $zero, 0xFD
    ctx->r8 = ADD32(0, 0XFD);
    // 0x800A04C8: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x800A04CC: sb          $t9, 0x60($a0)
    MEM_B(0X60, ctx->r4) = ctx->r25;
    // 0x800A04D0: sb          $t0, 0x5D($a0)
    MEM_B(0X5D, ctx->r4) = ctx->r8;
    // 0x800A04D4: addiu       $t2, $t2, 0x42B4
    ctx->r10 = ADD32(ctx->r10, 0X42B4);
    // 0x800A04D8: addiu       $t1, $zero, 0x201
    ctx->r9 = ADD32(0, 0X201);
    // 0x800A04DC: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x800A04E0: sh          $t1, 0x1E4($t2)
    MEM_H(0X1E4, ctx->r10) = ctx->r9;
    // 0x800A04E4: addiu       $t4, $t4, 0x3D00
    ctx->r12 = ADD32(ctx->r12, 0X3D00);
    // 0x800A04E8: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x800A04EC: jr          $ra
    // 0x800A04F0: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    return;
    // 0x800A04F0: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
;}
RECOMP_FUNC void func_800A04F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A04F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A04F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800A04FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A0500: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800A0504: jal         0x8003B5D0
    // 0x800A0508: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003B5D0(rdram, ctx);
        goto after_0;
    // 0x800A0508: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_0:
    // 0x800A050C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800A0510: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x800A0514: jal         0x8003B654
    // 0x800A0518: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003B654(rdram, ctx);
        goto after_1;
    // 0x800A0518: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800A051C: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x800A0520: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x800A0524: nop

    // 0x800A0528: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800A052C: beq         $t7, $zero, L_800A0688
    if (ctx->r15 == 0) {
        // 0x800A0530: nop
    
            goto L_800A0688;
    }
    // 0x800A0530: nop

    // 0x800A0534: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800A0538: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x800A053C: jal         0x8003B684
    // 0x800A0540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003B684(rdram, ctx);
        goto after_2;
    // 0x800A0540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800A0544: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x800A0548: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x800A054C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800A0550: sra         $t9, $t8, 4
    ctx->r25 = S32(SIGNED(ctx->r24) >> 4);
    // 0x800A0554: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x800A0558: beq         $t0, $at, L_800A0578
    if (ctx->r8 == ctx->r1) {
        // 0x800A055C: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_800A0578;
    }
    // 0x800A055C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x800A0560: beq         $t0, $at, L_800A0578
    if (ctx->r8 == ctx->r1) {
        // 0x800A0564: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800A0578;
    }
    // 0x800A0564: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A0568: beq         $t0, $at, L_800A0578
    if (ctx->r8 == ctx->r1) {
        // 0x800A056C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_800A0578;
    }
    // 0x800A056C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A0570: bne         $t0, $at, L_800A0634
    if (ctx->r8 != ctx->r1) {
        // 0x800A0574: nop
    
            goto L_800A0634;
    }
    // 0x800A0574: nop

L_800A0578:
    // 0x800A0578: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800A057C: jal         0x8003B5D0
    // 0x800A0580: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003B5D0(rdram, ctx);
        goto after_3;
    // 0x800A0580: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_3:
    // 0x800A0584: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800A0588: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x800A058C: jal         0x8003B3E4
    // 0x800A0590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003B3E4(rdram, ctx);
        goto after_4;
    // 0x800A0590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800A0594: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x800A0598: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
    // 0x800A059C: nop

    // 0x800A05A0: bne         $t1, $zero, L_800A05B8
    if (ctx->r9 != 0) {
        // 0x800A05A4: nop
    
            goto L_800A05B8;
    }
    // 0x800A05A4: nop

    // 0x800A05A8: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800A05AC: addiu       $t2, $zero, 0xF0
    ctx->r10 = ADD32(0, 0XF0);
    // 0x800A05B0: b           L_800A05EC
    // 0x800A05B4: sb          $t2, 0x5D($t3)
    MEM_B(0X5D, ctx->r11) = ctx->r10;
        goto L_800A05EC;
    // 0x800A05B4: sb          $t2, 0x5D($t3)
    MEM_B(0X5D, ctx->r11) = ctx->r10;
L_800A05B8:
    // 0x800A05B8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800A05BC: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x800A05C0: jal         0x8003BC3C
    // 0x800A05C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003BC3C(rdram, ctx);
        goto after_5;
    // 0x800A05C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800A05C8: bne         $v0, $zero, L_800A05E0
    if (ctx->r2 != 0) {
        // 0x800A05CC: nop
    
            goto L_800A05E0;
    }
    // 0x800A05CC: nop

    // 0x800A05D0: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800A05D4: addiu       $t4, $zero, 0xF0
    ctx->r12 = ADD32(0, 0XF0);
    // 0x800A05D8: b           L_800A05EC
    // 0x800A05DC: sb          $t4, 0x5D($t5)
    MEM_B(0X5D, ctx->r13) = ctx->r12;
        goto L_800A05EC;
    // 0x800A05DC: sb          $t4, 0x5D($t5)
    MEM_B(0X5D, ctx->r13) = ctx->r12;
L_800A05E0:
    // 0x800A05E0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800A05E4: addiu       $t6, $zero, 0xED
    ctx->r14 = ADD32(0, 0XED);
    // 0x800A05E8: sb          $t6, 0x5D($t7)
    MEM_B(0X5D, ctx->r15) = ctx->r14;
L_800A05EC:
    // 0x800A05EC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800A05F0: addiu       $t8, $t8, 0x3D00
    ctx->r24 = ADD32(ctx->r24, 0X3D00);
    // 0x800A05F4: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x800A05F8: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800A05FC: addiu       $t0, $t0, 0x3D10
    ctx->r8 = ADD32(ctx->r8, 0X3D10);
    // 0x800A0600: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x800A0604: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800A0608: addiu       $t1, $zero, 0xFE
    ctx->r9 = ADD32(0, 0XFE);
    // 0x800A060C: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x800A0610: addiu       $t4, $t4, 0x42B4
    ctx->r12 = ADD32(ctx->r12, 0X42B4);
    // 0x800A0614: addiu       $t3, $zero, 0x201
    ctx->r11 = ADD32(0, 0X201);
    // 0x800A0618: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800A061C: sb          $t1, 0x60($t2)
    MEM_B(0X60, ctx->r10) = ctx->r9;
    // 0x800A0620: sh          $t3, 0x1E4($t4)
    MEM_H(0X1E4, ctx->r12) = ctx->r11;
    // 0x800A0624: addiu       $t6, $t6, 0x3D00
    ctx->r14 = ADD32(ctx->r14, 0X3D00);
    // 0x800A0628: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x800A062C: b           L_800A06C0
    // 0x800A0630: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
        goto L_800A06C0;
    // 0x800A0630: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
L_800A0634:
    // 0x800A0634: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800A0638: addiu       $t7, $t7, 0x3D00
    ctx->r15 = ADD32(ctx->r15, 0X3D00);
    // 0x800A063C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x800A0640: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800A0644: addiu       $t9, $t9, 0x3D10
    ctx->r25 = ADD32(ctx->r25, 0X3D10);
    // 0x800A0648: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800A064C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800A0650: addiu       $t0, $zero, 0xFE
    ctx->r8 = ADD32(0, 0XFE);
    // 0x800A0654: sb          $t0, 0x60($t1)
    MEM_B(0X60, ctx->r9) = ctx->r8;
    // 0x800A0658: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800A065C: addiu       $t2, $zero, 0xFE
    ctx->r10 = ADD32(0, 0XFE);
    // 0x800A0660: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x800A0664: addiu       $t5, $t5, 0x42B4
    ctx->r13 = ADD32(ctx->r13, 0X42B4);
    // 0x800A0668: addiu       $t4, $zero, 0x201
    ctx->r12 = ADD32(0, 0X201);
    // 0x800A066C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800A0670: sb          $t2, 0x5D($t3)
    MEM_B(0X5D, ctx->r11) = ctx->r10;
    // 0x800A0674: sh          $t4, 0x1E4($t5)
    MEM_H(0X1E4, ctx->r13) = ctx->r12;
    // 0x800A0678: addiu       $t7, $t7, 0x3D00
    ctx->r15 = ADD32(ctx->r15, 0X3D00);
    // 0x800A067C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x800A0680: b           L_800A06C0
    // 0x800A0684: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
        goto L_800A06C0;
    // 0x800A0684: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
L_800A0688:
    // 0x800A0688: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800A068C: addiu       $t8, $zero, 0xF0
    ctx->r24 = ADD32(0, 0XF0);
    // 0x800A0690: sb          $t8, 0x5D($t9)
    MEM_B(0X5D, ctx->r25) = ctx->r24;
    // 0x800A0694: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800A0698: addiu       $t0, $zero, 0xFE
    ctx->r8 = ADD32(0, 0XFE);
    // 0x800A069C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800A06A0: addiu       $t3, $t3, 0x42B4
    ctx->r11 = ADD32(ctx->r11, 0X42B4);
    // 0x800A06A4: addiu       $t2, $zero, 0x201
    ctx->r10 = ADD32(0, 0X201);
    // 0x800A06A8: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x800A06AC: sb          $t0, 0x60($t1)
    MEM_B(0X60, ctx->r9) = ctx->r8;
    // 0x800A06B0: sh          $t2, 0x1E4($t3)
    MEM_H(0X1E4, ctx->r11) = ctx->r10;
    // 0x800A06B4: addiu       $t5, $t5, 0x3D00
    ctx->r13 = ADD32(ctx->r13, 0X3D00);
    // 0x800A06B8: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x800A06BC: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
L_800A06C0:
    // 0x800A06C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A06C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A06C8: jr          $ra
    // 0x800A06CC: nop

    return;
    // 0x800A06CC: nop

;}
RECOMP_FUNC void func_800A06D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A06D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A06D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800A06D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A06DC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800A06E0: jal         0x8003B5D0
    // 0x800A06E4: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003B5D0(rdram, ctx);
        goto after_0;
    // 0x800A06E4: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_0:
    // 0x800A06E8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800A06EC: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x800A06F0: jal         0x8003B654
    // 0x800A06F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003B654(rdram, ctx);
        goto after_1;
    // 0x800A06F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800A06F8: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x800A06FC: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x800A0700: nop

    // 0x800A0704: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800A0708: beq         $t7, $zero, L_800A0858
    if (ctx->r15 == 0) {
        // 0x800A070C: nop
    
            goto L_800A0858;
    }
    // 0x800A070C: nop

    // 0x800A0710: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800A0714: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x800A0718: jal         0x8003B684
    // 0x800A071C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003B684(rdram, ctx);
        goto after_2;
    // 0x800A071C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800A0720: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x800A0724: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x800A0728: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800A072C: sra         $t9, $t8, 4
    ctx->r25 = S32(SIGNED(ctx->r24) >> 4);
    // 0x800A0730: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x800A0734: beq         $t0, $at, L_800A0754
    if (ctx->r8 == ctx->r1) {
        // 0x800A0738: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_800A0754;
    }
    // 0x800A0738: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x800A073C: beq         $t0, $at, L_800A0754
    if (ctx->r8 == ctx->r1) {
        // 0x800A0740: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800A0754;
    }
    // 0x800A0740: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A0744: beq         $t0, $at, L_800A0754
    if (ctx->r8 == ctx->r1) {
        // 0x800A0748: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_800A0754;
    }
    // 0x800A0748: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800A074C: bne         $t0, $at, L_800A0804
    if (ctx->r8 != ctx->r1) {
        // 0x800A0750: nop
    
            goto L_800A0804;
    }
    // 0x800A0750: nop

L_800A0754:
    // 0x800A0754: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x800A0758: addiu       $t1, $t1, 0x3D00
    ctx->r9 = ADD32(ctx->r9, 0X3D00);
    // 0x800A075C: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x800A0760: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800A0764: addiu       $t3, $t3, 0x3D10
    ctx->r11 = ADD32(ctx->r11, 0X3D10);
    // 0x800A0768: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x800A076C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800A0770: addiu       $t4, $zero, 0xFB
    ctx->r12 = ADD32(0, 0XFB);
    // 0x800A0774: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800A0778: addiu       $t7, $t7, 0x42B4
    ctx->r15 = ADD32(ctx->r15, 0X42B4);
    // 0x800A077C: addiu       $t6, $zero, 0x201
    ctx->r14 = ADD32(0, 0X201);
    // 0x800A0780: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800A0784: sb          $t4, 0x60($t5)
    MEM_B(0X60, ctx->r13) = ctx->r12;
    // 0x800A0788: sh          $t6, 0x1E4($t7)
    MEM_H(0X1E4, ctx->r15) = ctx->r14;
    // 0x800A078C: addiu       $t9, $t9, 0x3D00
    ctx->r25 = ADD32(ctx->r25, 0X3D00);
    // 0x800A0790: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x800A0794: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800A0798: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800A079C: jal         0x8003B5D0
    // 0x800A07A0: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    func_8003B5D0(rdram, ctx);
        goto after_3;
    // 0x800A07A0: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    after_3:
    // 0x800A07A4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800A07A8: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x800A07AC: jal         0x8003B3E4
    // 0x800A07B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003B3E4(rdram, ctx);
        goto after_4;
    // 0x800A07B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800A07B4: bne         $v0, $zero, L_800A07CC
    if (ctx->r2 != 0) {
        // 0x800A07B8: nop
    
            goto L_800A07CC;
    }
    // 0x800A07B8: nop

    // 0x800A07BC: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800A07C0: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
    // 0x800A07C4: b           L_800A0890
    // 0x800A07C8: sb          $t0, 0x5D($t1)
    MEM_B(0X5D, ctx->r9) = ctx->r8;
        goto L_800A0890;
    // 0x800A07C8: sb          $t0, 0x5D($t1)
    MEM_B(0X5D, ctx->r9) = ctx->r8;
L_800A07CC:
    // 0x800A07CC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800A07D0: addiu       $a0, $a0, -0x21C0
    ctx->r4 = ADD32(ctx->r4, -0X21C0);
    // 0x800A07D4: jal         0x8003BC3C
    // 0x800A07D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003BC3C(rdram, ctx);
        goto after_5;
    // 0x800A07D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800A07DC: bne         $v0, $zero, L_800A07F4
    if (ctx->r2 != 0) {
        // 0x800A07E0: nop
    
            goto L_800A07F4;
    }
    // 0x800A07E0: nop

    // 0x800A07E4: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800A07E8: addiu       $t2, $zero, 0xF0
    ctx->r10 = ADD32(0, 0XF0);
    // 0x800A07EC: b           L_800A0890
    // 0x800A07F0: sb          $t2, 0x5D($t3)
    MEM_B(0X5D, ctx->r11) = ctx->r10;
        goto L_800A0890;
    // 0x800A07F0: sb          $t2, 0x5D($t3)
    MEM_B(0X5D, ctx->r11) = ctx->r10;
L_800A07F4:
    // 0x800A07F4: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800A07F8: addiu       $t4, $zero, 0xED
    ctx->r12 = ADD32(0, 0XED);
    // 0x800A07FC: b           L_800A0890
    // 0x800A0800: sb          $t4, 0x5D($t5)
    MEM_B(0X5D, ctx->r13) = ctx->r12;
        goto L_800A0890;
    // 0x800A0800: sb          $t4, 0x5D($t5)
    MEM_B(0X5D, ctx->r13) = ctx->r12;
L_800A0804:
    // 0x800A0804: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800A0808: addiu       $t6, $t6, 0x3D00
    ctx->r14 = ADD32(ctx->r14, 0X3D00);
    // 0x800A080C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800A0810: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800A0814: addiu       $t8, $t8, 0x3D10
    ctx->r24 = ADD32(ctx->r24, 0X3D10);
    // 0x800A0818: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x800A081C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800A0820: addiu       $t9, $zero, 0xFB
    ctx->r25 = ADD32(0, 0XFB);
    // 0x800A0824: sb          $t9, 0x60($t0)
    MEM_B(0X60, ctx->r8) = ctx->r25;
    // 0x800A0828: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800A082C: addiu       $t1, $zero, 0xFE
    ctx->r9 = ADD32(0, 0XFE);
    // 0x800A0830: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x800A0834: addiu       $t4, $t4, 0x42B4
    ctx->r12 = ADD32(ctx->r12, 0X42B4);
    // 0x800A0838: addiu       $t3, $zero, 0x201
    ctx->r11 = ADD32(0, 0X201);
    // 0x800A083C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800A0840: sb          $t1, 0x5D($t2)
    MEM_B(0X5D, ctx->r10) = ctx->r9;
    // 0x800A0844: sh          $t3, 0x1E4($t4)
    MEM_H(0X1E4, ctx->r12) = ctx->r11;
    // 0x800A0848: addiu       $t6, $t6, 0x3D00
    ctx->r14 = ADD32(ctx->r14, 0X3D00);
    // 0x800A084C: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x800A0850: b           L_800A0890
    // 0x800A0854: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
        goto L_800A0890;
    // 0x800A0854: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
L_800A0858:
    // 0x800A0858: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800A085C: addiu       $t7, $zero, 0xFB
    ctx->r15 = ADD32(0, 0XFB);
    // 0x800A0860: sb          $t7, 0x60($t8)
    MEM_B(0X60, ctx->r24) = ctx->r15;
    // 0x800A0864: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800A0868: addiu       $t9, $zero, 0xF0
    ctx->r25 = ADD32(0, 0XF0);
    // 0x800A086C: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x800A0870: addiu       $t2, $t2, 0x42B4
    ctx->r10 = ADD32(ctx->r10, 0X42B4);
    // 0x800A0874: addiu       $t1, $zero, 0x201
    ctx->r9 = ADD32(0, 0X201);
    // 0x800A0878: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x800A087C: sb          $t9, 0x5D($t0)
    MEM_B(0X5D, ctx->r8) = ctx->r25;
    // 0x800A0880: sh          $t1, 0x1E4($t2)
    MEM_H(0X1E4, ctx->r10) = ctx->r9;
    // 0x800A0884: addiu       $t4, $t4, 0x3D00
    ctx->r12 = ADD32(ctx->r12, 0X3D00);
    // 0x800A0888: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x800A088C: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
L_800A0890:
    // 0x800A0890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A0894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A0898: jr          $ra
    // 0x800A089C: nop

    return;
    // 0x800A089C: nop

;}
RECOMP_FUNC void func_800A08A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A08A0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800A08A4: addiu       $t6, $t6, 0x3D00
    ctx->r14 = ADD32(ctx->r14, 0X3D00);
    // 0x800A08A8: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800A08AC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800A08B0: addiu       $t8, $t8, 0x3D10
    ctx->r24 = ADD32(ctx->r24, 0X3D10);
    // 0x800A08B4: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x800A08B8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A08BC: addiu       $t0, $zero, 0xFE
    ctx->r8 = ADD32(0, 0XFE);
    // 0x800A08C0: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x800A08C4: sb          $t9, 0x60($a0)
    MEM_B(0X60, ctx->r4) = ctx->r25;
    // 0x800A08C8: sb          $t0, 0x5D($a0)
    MEM_B(0X5D, ctx->r4) = ctx->r8;
    // 0x800A08CC: addiu       $t2, $t2, 0x42B4
    ctx->r10 = ADD32(ctx->r10, 0X42B4);
    // 0x800A08D0: addiu       $t1, $zero, 0x201
    ctx->r9 = ADD32(0, 0X201);
    // 0x800A08D4: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x800A08D8: sh          $t1, 0x1E4($t2)
    MEM_H(0X1E4, ctx->r10) = ctx->r9;
    // 0x800A08DC: addiu       $t4, $t4, 0x3D00
    ctx->r12 = ADD32(ctx->r12, 0X3D00);
    // 0x800A08E0: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x800A08E4: jr          $ra
    // 0x800A08E8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    return;
    // 0x800A08E8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
;}
RECOMP_FUNC void func_800A08EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A08EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A08F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A08F4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800A08F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A08FC: lbu         $a0, 0x3B0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X3B0);
    // 0x800A0900: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800A0904: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x800A0908: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x800A090C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800A0910: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x800A0914: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800A0918: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x800A091C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A0920: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x800A0924: jal         0x800875EC
    // 0x800A0928: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    func_800875EC(rdram, ctx);
        goto after_0;
    // 0x800A0928: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    after_0:
    // 0x800A092C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800A0930: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800A0934: lbu         $t9, 0x3B0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X3B0);
    // 0x800A0938: lw          $t1, -0x310($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X310);
    // 0x800A093C: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x800A0940: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800A0944: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x800A0948: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800A094C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x800A0950: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800A0954: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800A0958: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A095C: sw          $t0, 0x18E4($t1)
    MEM_W(0X18E4, ctx->r9) = ctx->r8;
    // 0x800A0960: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x800A0964: jal         0x8007C5CC
    // 0x800A0968: nop

    func_8007C5CC(rdram, ctx);
        goto after_1;
    // 0x800A0968: nop

    after_1:
    // 0x800A096C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A0970: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A0974: jr          $ra
    // 0x800A0978: nop

    return;
    // 0x800A0978: nop

;}
RECOMP_FUNC void func_800A097C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A097C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A0980: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A0984: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800A0988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A098C: lbu         $a0, 0x3B0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X3B0);
    // 0x800A0990: nop

    // 0x800A0994: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x800A0998: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x800A099C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800A09A0: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x800A09A4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800A09A8: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x800A09AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A09B0: jal         0x80087618
    // 0x800A09B4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80087618(rdram, ctx);
        goto after_0;
    // 0x800A09B4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x800A09B8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800A09BC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800A09C0: lbu         $t9, 0x3B0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X3B0);
    // 0x800A09C4: lw          $t1, -0x310($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X310);
    // 0x800A09C8: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x800A09CC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800A09D0: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x800A09D4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800A09D8: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x800A09DC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800A09E0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800A09E4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A09E8: sw          $t0, 0x18E8($t1)
    MEM_W(0X18E8, ctx->r9) = ctx->r8;
    // 0x800A09EC: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x800A09F0: jal         0x8007C5CC
    // 0x800A09F4: nop

    func_8007C5CC(rdram, ctx);
        goto after_1;
    // 0x800A09F4: nop

    after_1:
    // 0x800A09F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A09FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A0A00: jr          $ra
    // 0x800A0A04: nop

    return;
    // 0x800A0A04: nop

;}
RECOMP_FUNC void func_800A0A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0A08: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800A0A0C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800A0A10: lw          $t7, -0x310($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X310);
    // 0x800A0A14: lbu         $t6, 0x4DD0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X4DD0);
    // 0x800A0A18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A0A1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A0A20: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A0A24: sw          $t6, 0x18F0($t7)
    MEM_W(0X18F0, ctx->r15) = ctx->r14;
    // 0x800A0A28: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x800A0A2C: jal         0x8007C5CC
    // 0x800A0A30: nop

    func_8007C5CC(rdram, ctx);
        goto after_0;
    // 0x800A0A30: nop

    after_0:
    // 0x800A0A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A0A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A0A3C: jr          $ra
    // 0x800A0A40: nop

    return;
    // 0x800A0A40: nop

;}
RECOMP_FUNC void func_800A0A44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0A44: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x800A0A48: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x800A0A4C: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x800A0A50: addiu       $t6, $zero, 0x98
    ctx->r14 = ADD32(0, 0X98);
    // 0x800A0A54: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x800A0A58: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800A0A5C: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x800A0A60: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800A0A64: sh          $t6, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r14;
    // 0x800A0A68: sh          $t7, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r15;
    // 0x800A0A6C: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x800A0A70: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800A0A74: lbu         $t0, 0xB($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0XB);
    // 0x800A0A78: nop

    // 0x800A0A7C: andi        $t1, $t0, 0xF
    ctx->r9 = ctx->r8 & 0XF;
    // 0x800A0A80: bne         $t1, $at, L_800A0D3C
    if (ctx->r9 != ctx->r1) {
        // 0x800A0A84: nop
    
            goto L_800A0D3C;
    }
    // 0x800A0A84: nop

    // 0x800A0A88: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_800A0A8C:
    // 0x800A0A8C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800A0A90: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800A0A94: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800A0A98: lw          $t2, -0x310($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X310);
    // 0x800A0A9C: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x800A0AA0: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x800A0AA4: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x800A0AA8: addiu       $t6, $t5, 0xF0C
    ctx->r14 = ADD32(ctx->r13, 0XF0C);
    // 0x800A0AAC: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x800A0AB0: lw          $t7, 0xF18($t5)
    ctx->r15 = MEM_W(ctx->r13, 0XF18);
    // 0x800A0AB4: nop

    // 0x800A0AB8: beq         $t7, $zero, L_800A0D1C
    if (ctx->r15 == 0) {
        // 0x800A0ABC: nop
    
            goto L_800A0D1C;
    }
    // 0x800A0ABC: nop

    // 0x800A0AC0: lw          $t8, 0xF1C($t5)
    ctx->r24 = MEM_W(ctx->r13, 0XF1C);
    // 0x800A0AC4: nop

    // 0x800A0AC8: beq         $t8, $zero, L_800A0D1C
    if (ctx->r24 == 0) {
        // 0x800A0ACC: nop
    
            goto L_800A0D1C;
    }
    // 0x800A0ACC: nop

    // 0x800A0AD0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A0AD4: addiu       $a1, $a1, 0x4F0
    ctx->r5 = ADD32(ctx->r5, 0X4F0);
    // 0x800A0AD8: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x800A0ADC: jal         0x800B62D4
    // 0x800A0AE0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x800A0AE0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_0:
    // 0x800A0AE4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A0AE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A0AEC: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A0AF0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A0AF4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A0AF8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A0AFC: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A0B00: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A0B04: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800A0B08: addiu       $t9, $sp, 0x48
    ctx->r25 = ADD32(ctx->r29, 0X48);
    // 0x800A0B0C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800A0B10: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A0B14: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A0B18: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800A0B1C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800A0B20: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A0B24: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x800A0B28: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A0B2C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800A0B30: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800A0B34: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x800A0B38: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800A0B3C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800A0B40: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A0B44: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A0B48: jal         0x80077960
    // 0x800A0B4C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    func_80077960(rdram, ctx);
        goto after_1;
    // 0x800A0B4C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    after_1:
    // 0x800A0B50: lhu         $t7, 0x40($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X40);
    // 0x800A0B54: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800A0B58: addiu       $t5, $t7, 0x50
    ctx->r13 = ADD32(ctx->r15, 0X50);
    // 0x800A0B5C: sh          $t5, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r13;
    // 0x800A0B60: lhu         $a1, 0x16($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X16);
    // 0x800A0B64: lhu         $a0, 0x14($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X14);
    // 0x800A0B68: jal         0x80078424
    // 0x800A0B6C: nop

    func_80078424(rdram, ctx);
        goto after_2;
    // 0x800A0B6C: nop

    after_2:
    // 0x800A0B70: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x800A0B74: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A0B78: addiu       $a1, $a1, 0x4F4
    ctx->r5 = ADD32(ctx->r5, 0X4F4);
    // 0x800A0B7C: addiu       $a2, $s0, 0x1
    ctx->r6 = ADD32(ctx->r16, 0X1);
    // 0x800A0B80: jal         0x800B62D4
    // 0x800A0B84: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_3;
    // 0x800A0B84: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x800A0B88: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A0B8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A0B90: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A0B94: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A0B98: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800A0B9C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A0BA0: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A0BA4: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A0BA8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800A0BAC: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x800A0BB0: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800A0BB4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A0BB8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A0BBC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A0BC0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800A0BC4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800A0BC8: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x800A0BCC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A0BD0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800A0BD4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x800A0BD8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800A0BDC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800A0BE0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A0BE4: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A0BE8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A0BEC: jal         0x80077960
    // 0x800A0BF0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    func_80077960(rdram, ctx);
        goto after_4;
    // 0x800A0BF0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    after_4:
    // 0x800A0BF4: lhu         $t4, 0x40($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X40);
    // 0x800A0BF8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800A0BFC: addiu       $t7, $t4, 0x46
    ctx->r15 = ADD32(ctx->r12, 0X46);
    // 0x800A0C00: sh          $t7, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r15;
    // 0x800A0C04: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A0C08: lw          $a2, 0xC($t5)
    ctx->r6 = MEM_W(ctx->r13, 0XC);
    // 0x800A0C0C: addiu       $a1, $a1, 0x4F8
    ctx->r5 = ADD32(ctx->r5, 0X4F8);
    // 0x800A0C10: jal         0x800B62D4
    // 0x800A0C14: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_5;
    // 0x800A0C14: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x800A0C18: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A0C1C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A0C20: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A0C24: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A0C28: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800A0C2C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A0C30: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A0C34: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A0C38: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800A0C3C: addiu       $t8, $sp, 0x48
    ctx->r24 = ADD32(ctx->r29, 0X48);
    // 0x800A0C40: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800A0C44: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A0C48: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A0C4C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800A0C50: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800A0C54: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A0C58: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x800A0C5C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800A0C60: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800A0C64: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x800A0C68: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800A0C6C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800A0C70: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800A0C74: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A0C78: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A0C7C: jal         0x80077960
    // 0x800A0C80: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    func_80077960(rdram, ctx);
        goto after_6;
    // 0x800A0C80: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_6:
    // 0x800A0C84: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A0C88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A0C8C: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A0C90: lhu         $t2, 0x40($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X40);
    // 0x800A0C94: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A0C98: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800A0C9C: addiu       $t4, $t2, 0x50
    ctx->r12 = ADD32(ctx->r10, 0X50);
    // 0x800A0CA0: sh          $t4, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r12;
    // 0x800A0CA4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800A0CA8: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    // 0x800A0CAC: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800A0CB0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A0CB4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A0CB8: sll         $t5, $a0, 4
    ctx->r13 = S32(ctx->r4 << 4);
    // 0x800A0CBC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800A0CC0: subu        $t5, $t5, $a0
    ctx->r13 = SUB32(ctx->r13, ctx->r4);
    // 0x800A0CC4: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x800A0CC8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800A0CCC: andi        $a2, $t4, 0xFFFF
    ctx->r6 = ctx->r12 & 0XFFFF;
    // 0x800A0CD0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A0CD4: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A0CD8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800A0CDC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800A0CE0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A0CE4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800A0CE8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800A0CEC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800A0CF0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800A0CF4: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A0CF8: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
    // 0x800A0CFC: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x800A0D00: jal         0x80071480
    // 0x800A0D04: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    func_80071480(rdram, ctx);
        goto after_7;
    // 0x800A0D04: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_7:
    // 0x800A0D08: lhu         $t3, 0x42($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X42);
    // 0x800A0D0C: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x800A0D10: addiu       $t2, $t3, 0x12
    ctx->r10 = ADD32(ctx->r11, 0X12);
    // 0x800A0D14: sh          $t2, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r10;
    // 0x800A0D18: sh          $t7, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r15;
L_800A0D1C:
    // 0x800A0D1C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800A0D20: nop

    // 0x800A0D24: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x800A0D28: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x800A0D2C: bne         $at, $zero, L_800A0A8C
    if (ctx->r1 != 0) {
        // 0x800A0D30: sw          $t4, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r12;
            goto L_800A0A8C;
    }
    // 0x800A0D30: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x800A0D34: b           L_800A1050
    // 0x800A0D38: nop

        goto L_800A1050;
    // 0x800A0D38: nop

L_800A0D3C:
    // 0x800A0D3C: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x800A0D40: nop

    // 0x800A0D44: lw          $t6, 0x8($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X8);
    // 0x800A0D48: nop

    // 0x800A0D4C: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x800A0D50: nop

    // 0x800A0D54: beq         $t9, $zero, L_800A1050
    if (ctx->r25 == 0) {
        // 0x800A0D58: nop
    
            goto L_800A1050;
    }
    // 0x800A0D58: nop

    // 0x800A0D5C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_800A0D60:
    // 0x800A0D60: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x800A0D64: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800A0D68: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x800A0D6C: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x800A0D70: lw          $t3, 0xC($t1)
    ctx->r11 = MEM_W(ctx->r9, 0XC);
    // 0x800A0D74: nop

    // 0x800A0D78: addu        $t5, $t3, $t7
    ctx->r13 = ADD32(ctx->r11, ctx->r15);
    // 0x800A0D7C: lw          $t4, 0x20($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X20);
    // 0x800A0D80: lw          $t8, 0xC($t5)
    ctx->r24 = MEM_W(ctx->r13, 0XC);
    // 0x800A0D84: nop

    // 0x800A0D88: addu        $t6, $t4, $t8
    ctx->r14 = ADD32(ctx->r12, ctx->r24);
    // 0x800A0D8C: beq         $t6, $zero, L_800A1038
    if (ctx->r14 == 0) {
        // 0x800A0D90: nop
    
            goto L_800A1038;
    }
    // 0x800A0D90: nop

    // 0x800A0D94: lw          $t9, 0x34($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X34);
    // 0x800A0D98: nop

    // 0x800A0D9C: beq         $t9, $zero, L_800A1038
    if (ctx->r25 == 0) {
        // 0x800A0DA0: nop
    
            goto L_800A1038;
    }
    // 0x800A0DA0: nop

    // 0x800A0DA4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A0DA8: addiu       $a1, $a1, 0x4FC
    ctx->r5 = ADD32(ctx->r5, 0X4FC);
    // 0x800A0DAC: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x800A0DB0: jal         0x800B62D4
    // 0x800A0DB4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    sprintf_recomp(rdram, ctx);
        goto after_8;
    // 0x800A0DB4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_8:
    // 0x800A0DB8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A0DBC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A0DC0: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A0DC4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A0DC8: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800A0DCC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A0DD0: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A0DD4: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A0DD8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800A0DDC: addiu       $t0, $sp, 0x48
    ctx->r8 = ADD32(ctx->r29, 0X48);
    // 0x800A0DE0: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800A0DE4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A0DE8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A0DEC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A0DF0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800A0DF4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x800A0DF8: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800A0DFC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800A0E00: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800A0E04: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800A0E08: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x800A0E0C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800A0E10: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800A0E14: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A0E18: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A0E1C: jal         0x80077960
    // 0x800A0E20: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    func_80077960(rdram, ctx);
        goto after_9;
    // 0x800A0E20: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_9:
    // 0x800A0E24: lhu         $t6, 0x40($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X40);
    // 0x800A0E28: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x800A0E2C: addiu       $t5, $t6, 0x50
    ctx->r13 = ADD32(ctx->r14, 0X50);
    // 0x800A0E30: sh          $t5, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r13;
    // 0x800A0E34: lw          $t3, 0x8($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X8);
    // 0x800A0E38: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800A0E3C: lw          $t0, 0xC($t3)
    ctx->r8 = MEM_W(ctx->r11, 0XC);
    // 0x800A0E40: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800A0E44: addu        $t7, $t0, $t2
    ctx->r15 = ADD32(ctx->r8, ctx->r10);
    // 0x800A0E48: lw          $t4, 0x20($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X20);
    // 0x800A0E4C: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x800A0E50: lw          $a0, 0x34($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X34);
    // 0x800A0E54: jal         0x80078424
    // 0x800A0E58: addu        $a1, $t4, $t8
    ctx->r5 = ADD32(ctx->r12, ctx->r24);
    func_80078424(rdram, ctx);
        goto after_10;
    // 0x800A0E58: addu        $a1, $t4, $t8
    ctx->r5 = ADD32(ctx->r12, ctx->r24);
    after_10:
    // 0x800A0E5C: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x800A0E60: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A0E64: addiu       $a1, $a1, 0x500
    ctx->r5 = ADD32(ctx->r5, 0X500);
    // 0x800A0E68: addiu       $a2, $s0, 0x1
    ctx->r6 = ADD32(ctx->r16, 0X1);
    // 0x800A0E6C: jal         0x800B62D4
    // 0x800A0E70: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_11;
    // 0x800A0E70: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_11:
    // 0x800A0E74: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A0E78: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A0E7C: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A0E80: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A0E84: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800A0E88: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A0E8C: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A0E90: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A0E94: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800A0E98: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x800A0E9C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800A0EA0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A0EA4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A0EA8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800A0EAC: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800A0EB0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A0EB4: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x800A0EB8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A0EBC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800A0EC0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800A0EC4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800A0EC8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x800A0ECC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A0ED0: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A0ED4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A0ED8: jal         0x80077960
    // 0x800A0EDC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_80077960(rdram, ctx);
        goto after_12;
    // 0x800A0EDC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_12:
    // 0x800A0EE0: lhu         $t2, 0x40($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X40);
    // 0x800A0EE4: lw          $t4, 0x98($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X98);
    // 0x800A0EE8: addiu       $t7, $t2, 0x46
    ctx->r15 = ADD32(ctx->r10, 0X46);
    // 0x800A0EEC: sh          $t7, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r15;
    // 0x800A0EF0: lw          $t8, 0x8($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X8);
    // 0x800A0EF4: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800A0EF8: lw          $t6, 0xC($t8)
    ctx->r14 = MEM_W(ctx->r24, 0XC);
    // 0x800A0EFC: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x800A0F00: addu        $t3, $t6, $t9
    ctx->r11 = ADD32(ctx->r14, ctx->r25);
    // 0x800A0F04: lw          $t1, 0x20($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X20);
    // 0x800A0F08: lw          $t0, 0xC($t3)
    ctx->r8 = MEM_W(ctx->r11, 0XC);
    // 0x800A0F0C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A0F10: addiu       $a1, $a1, 0x504
    ctx->r5 = ADD32(ctx->r5, 0X504);
    // 0x800A0F14: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x800A0F18: jal         0x800B62D4
    // 0x800A0F1C: addu        $a2, $t1, $t0
    ctx->r6 = ADD32(ctx->r9, ctx->r8);
    sprintf_recomp(rdram, ctx);
        goto after_13;
    // 0x800A0F1C: addu        $a2, $t1, $t0
    ctx->r6 = ADD32(ctx->r9, ctx->r8);
    after_13:
    // 0x800A0F20: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A0F24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A0F28: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A0F2C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A0F30: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A0F34: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A0F38: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A0F3C: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A0F40: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800A0F44: addiu       $t2, $sp, 0x48
    ctx->r10 = ADD32(ctx->r29, 0X48);
    // 0x800A0F48: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800A0F4C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A0F50: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A0F54: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800A0F58: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800A0F5C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800A0F60: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x800A0F64: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800A0F68: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800A0F6C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800A0F70: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800A0F74: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800A0F78: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800A0F7C: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A0F80: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A0F84: jal         0x80077960
    // 0x800A0F88: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    func_80077960(rdram, ctx);
        goto after_14;
    // 0x800A0F88: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_14:
    // 0x800A0F8C: lhu         $t9, 0x40($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X40);
    // 0x800A0F90: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A0F94: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A0F98: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A0F9C: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
    // 0x800A0FA0: addiu       $t3, $t9, 0x50
    ctx->r11 = ADD32(ctx->r25, 0X50);
    // 0x800A0FA4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800A0FA8: sh          $t3, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r11;
    // 0x800A0FAC: lw          $t0, 0x8($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X8);
    // 0x800A0FB0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800A0FB4: lw          $t2, 0xC($t0)
    ctx->r10 = MEM_W(ctx->r8, 0XC);
    // 0x800A0FB8: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800A0FBC: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x800A0FC0: addu        $t8, $t2, $t4
    ctx->r24 = ADD32(ctx->r10, ctx->r12);
    // 0x800A0FC4: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800A0FC8: lw          $a0, 0x34($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X34);
    // 0x800A0FCC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A0FD0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A0FD4: sll         $t5, $a0, 4
    ctx->r13 = S32(ctx->r4 << 4);
    // 0x800A0FD8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800A0FDC: subu        $t5, $t5, $a0
    ctx->r13 = SUB32(ctx->r13, ctx->r4);
    // 0x800A0FE0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800A0FE4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800A0FE8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A0FEC: andi        $a2, $t3, 0xFFFF
    ctx->r6 = ctx->r11 & 0XFFFF;
    // 0x800A0FF0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A0FF4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A0FF8: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A0FFC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800A1000: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800A1004: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A1008: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A100C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800A1010: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
    // 0x800A1014: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x800A1018: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x800A101C: jal         0x80071480
    // 0x800A1020: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_80071480(rdram, ctx);
        goto after_15;
    // 0x800A1020: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_15:
    // 0x800A1024: lhu         $t2, 0x42($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X42);
    // 0x800A1028: addiu       $t8, $zero, 0x38
    ctx->r24 = ADD32(0, 0X38);
    // 0x800A102C: addiu       $t4, $t2, 0x12
    ctx->r12 = ADD32(ctx->r10, 0X12);
    // 0x800A1030: sh          $t4, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r12;
    // 0x800A1034: sh          $t8, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r24;
L_800A1038:
    // 0x800A1038: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800A103C: nop

    // 0x800A1040: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x800A1044: slti        $at, $t3, 0x5
    ctx->r1 = SIGNED(ctx->r11) < 0X5 ? 1 : 0;
    // 0x800A1048: bne         $at, $zero, L_800A0D60
    if (ctx->r1 != 0) {
        // 0x800A104C: sw          $t3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r11;
            goto L_800A0D60;
    }
    // 0x800A104C: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
L_800A1050:
    // 0x800A1050: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800A1054: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800A1058: jr          $ra
    // 0x800A105C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x800A105C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_800A1060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1060: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x800A1064: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x800A1068: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x800A106C: addiu       $t6, $zero, 0x98
    ctx->r14 = ADD32(0, 0X98);
    // 0x800A1070: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x800A1074: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800A1078: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x800A107C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800A1080: sh          $t6, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r14;
    // 0x800A1084: sh          $t7, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r15;
    // 0x800A1088: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x800A108C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800A1090: lbu         $t0, 0xB($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0XB);
    // 0x800A1094: nop

    // 0x800A1098: andi        $t1, $t0, 0xF
    ctx->r9 = ctx->r8 & 0XF;
    // 0x800A109C: bne         $t1, $at, L_800A1358
    if (ctx->r9 != ctx->r1) {
        // 0x800A10A0: nop
    
            goto L_800A1358;
    }
    // 0x800A10A0: nop

    // 0x800A10A4: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_800A10A8:
    // 0x800A10A8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800A10AC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800A10B0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800A10B4: lw          $t2, -0x310($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X310);
    // 0x800A10B8: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x800A10BC: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x800A10C0: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x800A10C4: addiu       $t6, $t5, 0xFFC
    ctx->r14 = ADD32(ctx->r13, 0XFFC);
    // 0x800A10C8: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x800A10CC: lw          $t7, 0x1008($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X1008);
    // 0x800A10D0: nop

    // 0x800A10D4: beq         $t7, $zero, L_800A1338
    if (ctx->r15 == 0) {
        // 0x800A10D8: nop
    
            goto L_800A1338;
    }
    // 0x800A10D8: nop

    // 0x800A10DC: lw          $t8, 0x100C($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X100C);
    // 0x800A10E0: nop

    // 0x800A10E4: beq         $t8, $zero, L_800A1338
    if (ctx->r24 == 0) {
        // 0x800A10E8: nop
    
            goto L_800A1338;
    }
    // 0x800A10E8: nop

    // 0x800A10EC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A10F0: addiu       $a1, $a1, 0x508
    ctx->r5 = ADD32(ctx->r5, 0X508);
    // 0x800A10F4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x800A10F8: jal         0x800B62D4
    // 0x800A10FC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x800A10FC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_0:
    // 0x800A1100: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A1104: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A1108: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A110C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A1110: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A1114: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A1118: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A111C: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A1120: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800A1124: addiu       $t9, $sp, 0x48
    ctx->r25 = ADD32(ctx->r29, 0X48);
    // 0x800A1128: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800A112C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A1130: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A1134: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800A1138: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800A113C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A1140: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x800A1144: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A1148: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800A114C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800A1150: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x800A1154: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800A1158: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800A115C: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A1160: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A1164: jal         0x80077960
    // 0x800A1168: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    func_80077960(rdram, ctx);
        goto after_1;
    // 0x800A1168: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    after_1:
    // 0x800A116C: lhu         $t7, 0x40($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X40);
    // 0x800A1170: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800A1174: addiu       $t5, $t7, 0x50
    ctx->r13 = ADD32(ctx->r15, 0X50);
    // 0x800A1178: sh          $t5, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r13;
    // 0x800A117C: lhu         $a1, 0x16($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X16);
    // 0x800A1180: lhu         $a0, 0x14($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X14);
    // 0x800A1184: jal         0x80078424
    // 0x800A1188: nop

    func_80078424(rdram, ctx);
        goto after_2;
    // 0x800A1188: nop

    after_2:
    // 0x800A118C: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x800A1190: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A1194: addiu       $a1, $a1, 0x50C
    ctx->r5 = ADD32(ctx->r5, 0X50C);
    // 0x800A1198: addiu       $a2, $s0, 0x1
    ctx->r6 = ADD32(ctx->r16, 0X1);
    // 0x800A119C: jal         0x800B62D4
    // 0x800A11A0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_3;
    // 0x800A11A0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x800A11A4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A11A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A11AC: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A11B0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A11B4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800A11B8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A11BC: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A11C0: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A11C4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800A11C8: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x800A11CC: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800A11D0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A11D4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A11D8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A11DC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800A11E0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800A11E4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x800A11E8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A11EC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800A11F0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x800A11F4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800A11F8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800A11FC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A1200: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A1204: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A1208: jal         0x80077960
    // 0x800A120C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    func_80077960(rdram, ctx);
        goto after_4;
    // 0x800A120C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    after_4:
    // 0x800A1210: lhu         $t4, 0x40($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X40);
    // 0x800A1214: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800A1218: addiu       $t7, $t4, 0x46
    ctx->r15 = ADD32(ctx->r12, 0X46);
    // 0x800A121C: sh          $t7, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r15;
    // 0x800A1220: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A1224: lw          $a2, 0xC($t5)
    ctx->r6 = MEM_W(ctx->r13, 0XC);
    // 0x800A1228: addiu       $a1, $a1, 0x510
    ctx->r5 = ADD32(ctx->r5, 0X510);
    // 0x800A122C: jal         0x800B62D4
    // 0x800A1230: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_5;
    // 0x800A1230: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x800A1234: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A1238: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A123C: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A1240: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A1244: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800A1248: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A124C: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A1250: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A1254: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800A1258: addiu       $t8, $sp, 0x48
    ctx->r24 = ADD32(ctx->r29, 0X48);
    // 0x800A125C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800A1260: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A1264: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A1268: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800A126C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800A1270: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A1274: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x800A1278: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800A127C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800A1280: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x800A1284: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800A1288: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800A128C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800A1290: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A1294: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A1298: jal         0x80077960
    // 0x800A129C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    func_80077960(rdram, ctx);
        goto after_6;
    // 0x800A129C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_6:
    // 0x800A12A0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A12A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A12A8: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A12AC: lhu         $t2, 0x40($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X40);
    // 0x800A12B0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A12B4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800A12B8: addiu       $t4, $t2, 0x50
    ctx->r12 = ADD32(ctx->r10, 0X50);
    // 0x800A12BC: sh          $t4, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r12;
    // 0x800A12C0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800A12C4: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    // 0x800A12C8: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800A12CC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A12D0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A12D4: sll         $t5, $a0, 4
    ctx->r13 = S32(ctx->r4 << 4);
    // 0x800A12D8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800A12DC: subu        $t5, $t5, $a0
    ctx->r13 = SUB32(ctx->r13, ctx->r4);
    // 0x800A12E0: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x800A12E4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800A12E8: andi        $a2, $t4, 0xFFFF
    ctx->r6 = ctx->r12 & 0XFFFF;
    // 0x800A12EC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A12F0: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A12F4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800A12F8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800A12FC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A1300: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800A1304: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800A1308: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800A130C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800A1310: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A1314: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
    // 0x800A1318: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x800A131C: jal         0x80071480
    // 0x800A1320: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    func_80071480(rdram, ctx);
        goto after_7;
    // 0x800A1320: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_7:
    // 0x800A1324: lhu         $t3, 0x42($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X42);
    // 0x800A1328: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x800A132C: addiu       $t2, $t3, 0x12
    ctx->r10 = ADD32(ctx->r11, 0X12);
    // 0x800A1330: sh          $t2, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r10;
    // 0x800A1334: sh          $t7, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r15;
L_800A1338:
    // 0x800A1338: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800A133C: nop

    // 0x800A1340: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x800A1344: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x800A1348: bne         $at, $zero, L_800A10A8
    if (ctx->r1 != 0) {
        // 0x800A134C: sw          $t4, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r12;
            goto L_800A10A8;
    }
    // 0x800A134C: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x800A1350: b           L_800A166C
    // 0x800A1354: nop

        goto L_800A166C;
    // 0x800A1354: nop

L_800A1358:
    // 0x800A1358: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x800A135C: nop

    // 0x800A1360: lw          $t6, 0x8($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X8);
    // 0x800A1364: nop

    // 0x800A1368: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x800A136C: nop

    // 0x800A1370: beq         $t9, $zero, L_800A166C
    if (ctx->r25 == 0) {
        // 0x800A1374: nop
    
            goto L_800A166C;
    }
    // 0x800A1374: nop

    // 0x800A1378: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_800A137C:
    // 0x800A137C: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x800A1380: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800A1384: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x800A1388: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x800A138C: lw          $t3, 0xC($t1)
    ctx->r11 = MEM_W(ctx->r9, 0XC);
    // 0x800A1390: nop

    // 0x800A1394: addu        $t5, $t3, $t7
    ctx->r13 = ADD32(ctx->r11, ctx->r15);
    // 0x800A1398: lw          $t4, 0x98($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X98);
    // 0x800A139C: lw          $t8, 0x84($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X84);
    // 0x800A13A0: nop

    // 0x800A13A4: addu        $t6, $t4, $t8
    ctx->r14 = ADD32(ctx->r12, ctx->r24);
    // 0x800A13A8: beq         $t6, $zero, L_800A1654
    if (ctx->r14 == 0) {
        // 0x800A13AC: nop
    
            goto L_800A1654;
    }
    // 0x800A13AC: nop

    // 0x800A13B0: lw          $t9, 0xAC($t5)
    ctx->r25 = MEM_W(ctx->r13, 0XAC);
    // 0x800A13B4: nop

    // 0x800A13B8: beq         $t9, $zero, L_800A1654
    if (ctx->r25 == 0) {
        // 0x800A13BC: nop
    
            goto L_800A1654;
    }
    // 0x800A13BC: nop

    // 0x800A13C0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A13C4: addiu       $a1, $a1, 0x514
    ctx->r5 = ADD32(ctx->r5, 0X514);
    // 0x800A13C8: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x800A13CC: jal         0x800B62D4
    // 0x800A13D0: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    sprintf_recomp(rdram, ctx);
        goto after_8;
    // 0x800A13D0: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_8:
    // 0x800A13D4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A13D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A13DC: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A13E0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A13E4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800A13E8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A13EC: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A13F0: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A13F4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800A13F8: addiu       $t0, $sp, 0x48
    ctx->r8 = ADD32(ctx->r29, 0X48);
    // 0x800A13FC: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800A1400: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A1404: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A1408: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A140C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800A1410: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x800A1414: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800A1418: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800A141C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800A1420: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800A1424: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x800A1428: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800A142C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800A1430: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A1434: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A1438: jal         0x80077960
    // 0x800A143C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    func_80077960(rdram, ctx);
        goto after_9;
    // 0x800A143C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_9:
    // 0x800A1440: lhu         $t6, 0x40($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X40);
    // 0x800A1444: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x800A1448: addiu       $t5, $t6, 0x50
    ctx->r13 = ADD32(ctx->r14, 0X50);
    // 0x800A144C: sh          $t5, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r13;
    // 0x800A1450: lw          $t3, 0x8($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X8);
    // 0x800A1454: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800A1458: lw          $t0, 0xC($t3)
    ctx->r8 = MEM_W(ctx->r11, 0XC);
    // 0x800A145C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800A1460: addu        $t7, $t0, $t2
    ctx->r15 = ADD32(ctx->r8, ctx->r10);
    // 0x800A1464: lw          $t4, 0x98($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X98);
    // 0x800A1468: lw          $t8, 0x84($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X84);
    // 0x800A146C: lw          $a0, 0xAC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XAC);
    // 0x800A1470: jal         0x80078424
    // 0x800A1474: addu        $a1, $t4, $t8
    ctx->r5 = ADD32(ctx->r12, ctx->r24);
    func_80078424(rdram, ctx);
        goto after_10;
    // 0x800A1474: addu        $a1, $t4, $t8
    ctx->r5 = ADD32(ctx->r12, ctx->r24);
    after_10:
    // 0x800A1478: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x800A147C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A1480: addiu       $a1, $a1, 0x518
    ctx->r5 = ADD32(ctx->r5, 0X518);
    // 0x800A1484: addiu       $a2, $s0, 0x1
    ctx->r6 = ADD32(ctx->r16, 0X1);
    // 0x800A1488: jal         0x800B62D4
    // 0x800A148C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_11;
    // 0x800A148C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_11:
    // 0x800A1490: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A1494: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A1498: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A149C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A14A0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800A14A4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A14A8: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A14AC: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A14B0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800A14B4: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x800A14B8: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800A14BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A14C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A14C4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800A14C8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800A14CC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A14D0: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x800A14D4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A14D8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800A14DC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800A14E0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800A14E4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x800A14E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A14EC: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A14F0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A14F4: jal         0x80077960
    // 0x800A14F8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_80077960(rdram, ctx);
        goto after_12;
    // 0x800A14F8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_12:
    // 0x800A14FC: lhu         $t2, 0x40($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X40);
    // 0x800A1500: lw          $t4, 0x98($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X98);
    // 0x800A1504: addiu       $t7, $t2, 0x46
    ctx->r15 = ADD32(ctx->r10, 0X46);
    // 0x800A1508: sh          $t7, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r15;
    // 0x800A150C: lw          $t8, 0x8($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X8);
    // 0x800A1510: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800A1514: lw          $t6, 0xC($t8)
    ctx->r14 = MEM_W(ctx->r24, 0XC);
    // 0x800A1518: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x800A151C: addu        $t3, $t6, $t9
    ctx->r11 = ADD32(ctx->r14, ctx->r25);
    // 0x800A1520: lw          $t1, 0x98($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X98);
    // 0x800A1524: lw          $t0, 0x84($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X84);
    // 0x800A1528: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A152C: addiu       $a1, $a1, 0x51C
    ctx->r5 = ADD32(ctx->r5, 0X51C);
    // 0x800A1530: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x800A1534: jal         0x800B62D4
    // 0x800A1538: addu        $a2, $t1, $t0
    ctx->r6 = ADD32(ctx->r9, ctx->r8);
    sprintf_recomp(rdram, ctx);
        goto after_13;
    // 0x800A1538: addu        $a2, $t1, $t0
    ctx->r6 = ADD32(ctx->r9, ctx->r8);
    after_13:
    // 0x800A153C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A1540: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A1544: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A1548: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A154C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A1550: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A1554: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A1558: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A155C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800A1560: addiu       $t2, $sp, 0x48
    ctx->r10 = ADD32(ctx->r29, 0X48);
    // 0x800A1564: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800A1568: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A156C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A1570: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800A1574: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800A1578: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800A157C: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x800A1580: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800A1584: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800A1588: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800A158C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800A1590: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800A1594: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800A1598: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A159C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A15A0: jal         0x80077960
    // 0x800A15A4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    func_80077960(rdram, ctx);
        goto after_14;
    // 0x800A15A4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_14:
    // 0x800A15A8: lhu         $t9, 0x40($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X40);
    // 0x800A15AC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A15B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A15B4: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A15B8: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
    // 0x800A15BC: addiu       $t3, $t9, 0x50
    ctx->r11 = ADD32(ctx->r25, 0X50);
    // 0x800A15C0: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800A15C4: sh          $t3, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r11;
    // 0x800A15C8: lw          $t0, 0x8($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X8);
    // 0x800A15CC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800A15D0: lw          $t2, 0xC($t0)
    ctx->r10 = MEM_W(ctx->r8, 0XC);
    // 0x800A15D4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800A15D8: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x800A15DC: addu        $t8, $t2, $t4
    ctx->r24 = ADD32(ctx->r10, ctx->r12);
    // 0x800A15E0: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800A15E4: lw          $a0, 0xAC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XAC);
    // 0x800A15E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A15EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A15F0: sll         $t5, $a0, 4
    ctx->r13 = S32(ctx->r4 << 4);
    // 0x800A15F4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800A15F8: subu        $t5, $t5, $a0
    ctx->r13 = SUB32(ctx->r13, ctx->r4);
    // 0x800A15FC: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800A1600: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800A1604: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A1608: andi        $a2, $t3, 0xFFFF
    ctx->r6 = ctx->r11 & 0XFFFF;
    // 0x800A160C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A1610: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A1614: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A1618: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800A161C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800A1620: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A1624: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A1628: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800A162C: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
    // 0x800A1630: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x800A1634: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x800A1638: jal         0x80071480
    // 0x800A163C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_80071480(rdram, ctx);
        goto after_15;
    // 0x800A163C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_15:
    // 0x800A1640: lhu         $t2, 0x42($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X42);
    // 0x800A1644: addiu       $t8, $zero, 0x38
    ctx->r24 = ADD32(0, 0X38);
    // 0x800A1648: addiu       $t4, $t2, 0x12
    ctx->r12 = ADD32(ctx->r10, 0X12);
    // 0x800A164C: sh          $t4, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r12;
    // 0x800A1650: sh          $t8, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r24;
L_800A1654:
    // 0x800A1654: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800A1658: nop

    // 0x800A165C: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x800A1660: slti        $at, $t3, 0x5
    ctx->r1 = SIGNED(ctx->r11) < 0X5 ? 1 : 0;
    // 0x800A1664: bne         $at, $zero, L_800A137C
    if (ctx->r1 != 0) {
        // 0x800A1668: sw          $t3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r11;
            goto L_800A137C;
    }
    // 0x800A1668: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
L_800A166C:
    // 0x800A166C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800A1670: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800A1674: jr          $ra
    // 0x800A1678: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x800A1678: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_800A167C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A167C: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x800A1680: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x800A1684: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x800A1688: addiu       $t6, $zero, 0x98
    ctx->r14 = ADD32(0, 0X98);
    // 0x800A168C: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x800A1690: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800A1694: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x800A1698: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800A169C: sh          $t6, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r14;
    // 0x800A16A0: sh          $t7, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r15;
    // 0x800A16A4: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x800A16A8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800A16AC: lbu         $t0, 0xB($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0XB);
    // 0x800A16B0: nop

    // 0x800A16B4: andi        $t1, $t0, 0xF
    ctx->r9 = ctx->r8 & 0XF;
    // 0x800A16B8: bne         $t1, $at, L_800A1974
    if (ctx->r9 != ctx->r1) {
        // 0x800A16BC: nop
    
            goto L_800A1974;
    }
    // 0x800A16BC: nop

    // 0x800A16C0: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_800A16C4:
    // 0x800A16C4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800A16C8: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800A16CC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800A16D0: lw          $t2, -0x310($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X310);
    // 0x800A16D4: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x800A16D8: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x800A16DC: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x800A16E0: addiu       $t6, $t5, 0xF84
    ctx->r14 = ADD32(ctx->r13, 0XF84);
    // 0x800A16E4: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x800A16E8: lw          $t7, 0xF90($t5)
    ctx->r15 = MEM_W(ctx->r13, 0XF90);
    // 0x800A16EC: nop

    // 0x800A16F0: beq         $t7, $zero, L_800A1954
    if (ctx->r15 == 0) {
        // 0x800A16F4: nop
    
            goto L_800A1954;
    }
    // 0x800A16F4: nop

    // 0x800A16F8: lw          $t8, 0xF94($t5)
    ctx->r24 = MEM_W(ctx->r13, 0XF94);
    // 0x800A16FC: nop

    // 0x800A1700: beq         $t8, $zero, L_800A1954
    if (ctx->r24 == 0) {
        // 0x800A1704: nop
    
            goto L_800A1954;
    }
    // 0x800A1704: nop

    // 0x800A1708: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A170C: addiu       $a1, $a1, 0x520
    ctx->r5 = ADD32(ctx->r5, 0X520);
    // 0x800A1710: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x800A1714: jal         0x800B62D4
    // 0x800A1718: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x800A1718: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_0:
    // 0x800A171C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A1720: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A1724: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A1728: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A172C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A1730: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A1734: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A1738: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A173C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800A1740: addiu       $t9, $sp, 0x48
    ctx->r25 = ADD32(ctx->r29, 0X48);
    // 0x800A1744: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800A1748: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A174C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A1750: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800A1754: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800A1758: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A175C: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x800A1760: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A1764: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800A1768: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800A176C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x800A1770: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800A1774: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800A1778: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A177C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A1780: jal         0x80077960
    // 0x800A1784: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    func_80077960(rdram, ctx);
        goto after_1;
    // 0x800A1784: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    after_1:
    // 0x800A1788: lhu         $t7, 0x40($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X40);
    // 0x800A178C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800A1790: addiu       $t5, $t7, 0x5A
    ctx->r13 = ADD32(ctx->r15, 0X5A);
    // 0x800A1794: sh          $t5, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r13;
    // 0x800A1798: lhu         $a1, 0x16($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X16);
    // 0x800A179C: lhu         $a0, 0x14($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X14);
    // 0x800A17A0: jal         0x80078424
    // 0x800A17A4: nop

    func_80078424(rdram, ctx);
        goto after_2;
    // 0x800A17A4: nop

    after_2:
    // 0x800A17A8: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x800A17AC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A17B0: addiu       $a1, $a1, 0x524
    ctx->r5 = ADD32(ctx->r5, 0X524);
    // 0x800A17B4: addiu       $a2, $s0, 0x1
    ctx->r6 = ADD32(ctx->r16, 0X1);
    // 0x800A17B8: jal         0x800B62D4
    // 0x800A17BC: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_3;
    // 0x800A17BC: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x800A17C0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A17C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A17C8: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A17CC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A17D0: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800A17D4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A17D8: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A17DC: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A17E0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800A17E4: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x800A17E8: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800A17EC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A17F0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A17F4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A17F8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800A17FC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800A1800: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x800A1804: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A1808: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800A180C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x800A1810: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800A1814: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800A1818: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A181C: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A1820: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A1824: jal         0x80077960
    // 0x800A1828: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    func_80077960(rdram, ctx);
        goto after_4;
    // 0x800A1828: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    after_4:
    // 0x800A182C: lhu         $t4, 0x40($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X40);
    // 0x800A1830: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800A1834: addiu       $t7, $t4, 0x46
    ctx->r15 = ADD32(ctx->r12, 0X46);
    // 0x800A1838: sh          $t7, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r15;
    // 0x800A183C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A1840: lw          $a2, 0xC($t5)
    ctx->r6 = MEM_W(ctx->r13, 0XC);
    // 0x800A1844: addiu       $a1, $a1, 0x528
    ctx->r5 = ADD32(ctx->r5, 0X528);
    // 0x800A1848: jal         0x800B62D4
    // 0x800A184C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_5;
    // 0x800A184C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x800A1850: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A1854: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A1858: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A185C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A1860: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800A1864: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A1868: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A186C: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A1870: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800A1874: addiu       $t8, $sp, 0x48
    ctx->r24 = ADD32(ctx->r29, 0X48);
    // 0x800A1878: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800A187C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A1880: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A1884: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800A1888: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800A188C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A1890: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x800A1894: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800A1898: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800A189C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x800A18A0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800A18A4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800A18A8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800A18AC: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A18B0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A18B4: jal         0x80077960
    // 0x800A18B8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    func_80077960(rdram, ctx);
        goto after_6;
    // 0x800A18B8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_6:
    // 0x800A18BC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A18C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A18C4: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A18C8: lhu         $t2, 0x40($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X40);
    // 0x800A18CC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A18D0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800A18D4: addiu       $t4, $t2, 0x50
    ctx->r12 = ADD32(ctx->r10, 0X50);
    // 0x800A18D8: sh          $t4, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r12;
    // 0x800A18DC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800A18E0: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    // 0x800A18E4: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800A18E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A18EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A18F0: sll         $t5, $a0, 4
    ctx->r13 = S32(ctx->r4 << 4);
    // 0x800A18F4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800A18F8: subu        $t5, $t5, $a0
    ctx->r13 = SUB32(ctx->r13, ctx->r4);
    // 0x800A18FC: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x800A1900: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800A1904: andi        $a2, $t4, 0xFFFF
    ctx->r6 = ctx->r12 & 0XFFFF;
    // 0x800A1908: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A190C: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A1910: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800A1914: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800A1918: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A191C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800A1920: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800A1924: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800A1928: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800A192C: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A1930: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
    // 0x800A1934: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x800A1938: jal         0x80071480
    // 0x800A193C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    func_80071480(rdram, ctx);
        goto after_7;
    // 0x800A193C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_7:
    // 0x800A1940: lhu         $t3, 0x42($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X42);
    // 0x800A1944: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x800A1948: addiu       $t2, $t3, 0x12
    ctx->r10 = ADD32(ctx->r11, 0X12);
    // 0x800A194C: sh          $t2, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r10;
    // 0x800A1950: sh          $t7, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r15;
L_800A1954:
    // 0x800A1954: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800A1958: nop

    // 0x800A195C: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x800A1960: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x800A1964: bne         $at, $zero, L_800A16C4
    if (ctx->r1 != 0) {
        // 0x800A1968: sw          $t4, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r12;
            goto L_800A16C4;
    }
    // 0x800A1968: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x800A196C: b           L_800A1C88
    // 0x800A1970: nop

        goto L_800A1C88;
    // 0x800A1970: nop

L_800A1974:
    // 0x800A1974: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x800A1978: nop

    // 0x800A197C: lw          $t6, 0x8($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X8);
    // 0x800A1980: nop

    // 0x800A1984: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x800A1988: nop

    // 0x800A198C: beq         $t9, $zero, L_800A1C88
    if (ctx->r25 == 0) {
        // 0x800A1990: nop
    
            goto L_800A1C88;
    }
    // 0x800A1990: nop

    // 0x800A1994: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_800A1998:
    // 0x800A1998: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x800A199C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800A19A0: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x800A19A4: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x800A19A8: lw          $t3, 0xC($t1)
    ctx->r11 = MEM_W(ctx->r9, 0XC);
    // 0x800A19AC: nop

    // 0x800A19B0: addu        $t5, $t3, $t7
    ctx->r13 = ADD32(ctx->r11, ctx->r15);
    // 0x800A19B4: lw          $t4, 0x5C($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X5C);
    // 0x800A19B8: lw          $t8, 0x48($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X48);
    // 0x800A19BC: nop

    // 0x800A19C0: addu        $t6, $t4, $t8
    ctx->r14 = ADD32(ctx->r12, ctx->r24);
    // 0x800A19C4: beq         $t6, $zero, L_800A1C70
    if (ctx->r14 == 0) {
        // 0x800A19C8: nop
    
            goto L_800A1C70;
    }
    // 0x800A19C8: nop

    // 0x800A19CC: lw          $t9, 0x70($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X70);
    // 0x800A19D0: nop

    // 0x800A19D4: beq         $t9, $zero, L_800A1C70
    if (ctx->r25 == 0) {
        // 0x800A19D8: nop
    
            goto L_800A1C70;
    }
    // 0x800A19D8: nop

    // 0x800A19DC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A19E0: addiu       $a1, $a1, 0x52C
    ctx->r5 = ADD32(ctx->r5, 0X52C);
    // 0x800A19E4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x800A19E8: jal         0x800B62D4
    // 0x800A19EC: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    sprintf_recomp(rdram, ctx);
        goto after_8;
    // 0x800A19EC: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_8:
    // 0x800A19F0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A19F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A19F8: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A19FC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A1A00: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800A1A04: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A1A08: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A1A0C: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A1A10: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800A1A14: addiu       $t0, $sp, 0x48
    ctx->r8 = ADD32(ctx->r29, 0X48);
    // 0x800A1A18: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800A1A1C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A1A20: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A1A24: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A1A28: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800A1A2C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x800A1A30: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800A1A34: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800A1A38: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800A1A3C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800A1A40: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x800A1A44: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800A1A48: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800A1A4C: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A1A50: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A1A54: jal         0x80077960
    // 0x800A1A58: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    func_80077960(rdram, ctx);
        goto after_9;
    // 0x800A1A58: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_9:
    // 0x800A1A5C: lhu         $t6, 0x40($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X40);
    // 0x800A1A60: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x800A1A64: addiu       $t5, $t6, 0x5A
    ctx->r13 = ADD32(ctx->r14, 0X5A);
    // 0x800A1A68: sh          $t5, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r13;
    // 0x800A1A6C: lw          $t3, 0x8($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X8);
    // 0x800A1A70: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800A1A74: lw          $t0, 0xC($t3)
    ctx->r8 = MEM_W(ctx->r11, 0XC);
    // 0x800A1A78: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800A1A7C: addu        $t7, $t0, $t2
    ctx->r15 = ADD32(ctx->r8, ctx->r10);
    // 0x800A1A80: lw          $t4, 0x5C($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X5C);
    // 0x800A1A84: lw          $t8, 0x48($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X48);
    // 0x800A1A88: lw          $a0, 0x70($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X70);
    // 0x800A1A8C: jal         0x80078424
    // 0x800A1A90: addu        $a1, $t4, $t8
    ctx->r5 = ADD32(ctx->r12, ctx->r24);
    func_80078424(rdram, ctx);
        goto after_10;
    // 0x800A1A90: addu        $a1, $t4, $t8
    ctx->r5 = ADD32(ctx->r12, ctx->r24);
    after_10:
    // 0x800A1A94: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x800A1A98: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A1A9C: addiu       $a1, $a1, 0x530
    ctx->r5 = ADD32(ctx->r5, 0X530);
    // 0x800A1AA0: addiu       $a2, $s0, 0x1
    ctx->r6 = ADD32(ctx->r16, 0X1);
    // 0x800A1AA4: jal         0x800B62D4
    // 0x800A1AA8: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_11;
    // 0x800A1AA8: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_11:
    // 0x800A1AAC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A1AB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A1AB4: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A1AB8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A1ABC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800A1AC0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A1AC4: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A1AC8: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A1ACC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800A1AD0: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x800A1AD4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800A1AD8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A1ADC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A1AE0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800A1AE4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800A1AE8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A1AEC: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x800A1AF0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A1AF4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800A1AF8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800A1AFC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800A1B00: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x800A1B04: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A1B08: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A1B0C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A1B10: jal         0x80077960
    // 0x800A1B14: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_80077960(rdram, ctx);
        goto after_12;
    // 0x800A1B14: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_12:
    // 0x800A1B18: lhu         $t2, 0x40($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X40);
    // 0x800A1B1C: lw          $t4, 0x98($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X98);
    // 0x800A1B20: addiu       $t7, $t2, 0x46
    ctx->r15 = ADD32(ctx->r10, 0X46);
    // 0x800A1B24: sh          $t7, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r15;
    // 0x800A1B28: lw          $t8, 0x8($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X8);
    // 0x800A1B2C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800A1B30: lw          $t6, 0xC($t8)
    ctx->r14 = MEM_W(ctx->r24, 0XC);
    // 0x800A1B34: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x800A1B38: addu        $t3, $t6, $t9
    ctx->r11 = ADD32(ctx->r14, ctx->r25);
    // 0x800A1B3C: lw          $t1, 0x5C($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X5C);
    // 0x800A1B40: lw          $t0, 0x48($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X48);
    // 0x800A1B44: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A1B48: addiu       $a1, $a1, 0x534
    ctx->r5 = ADD32(ctx->r5, 0X534);
    // 0x800A1B4C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x800A1B50: jal         0x800B62D4
    // 0x800A1B54: addu        $a2, $t1, $t0
    ctx->r6 = ADD32(ctx->r9, ctx->r8);
    sprintf_recomp(rdram, ctx);
        goto after_13;
    // 0x800A1B54: addu        $a2, $t1, $t0
    ctx->r6 = ADD32(ctx->r9, ctx->r8);
    after_13:
    // 0x800A1B58: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A1B5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A1B60: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A1B64: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A1B68: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A1B6C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A1B70: lhu         $a2, 0x40($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X40);
    // 0x800A1B74: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A1B78: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800A1B7C: addiu       $t2, $sp, 0x48
    ctx->r10 = ADD32(ctx->r29, 0X48);
    // 0x800A1B80: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800A1B84: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A1B88: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A1B8C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800A1B90: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800A1B94: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800A1B98: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x800A1B9C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800A1BA0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800A1BA4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800A1BA8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800A1BAC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800A1BB0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800A1BB4: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A1BB8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A1BBC: jal         0x80077960
    // 0x800A1BC0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    func_80077960(rdram, ctx);
        goto after_14;
    // 0x800A1BC0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_14:
    // 0x800A1BC4: lhu         $t9, 0x40($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X40);
    // 0x800A1BC8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A1BCC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A1BD0: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A1BD4: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
    // 0x800A1BD8: addiu       $t3, $t9, 0x50
    ctx->r11 = ADD32(ctx->r25, 0X50);
    // 0x800A1BDC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800A1BE0: sh          $t3, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r11;
    // 0x800A1BE4: lw          $t0, 0x8($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X8);
    // 0x800A1BE8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800A1BEC: lw          $t2, 0xC($t0)
    ctx->r10 = MEM_W(ctx->r8, 0XC);
    // 0x800A1BF0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800A1BF4: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x800A1BF8: addu        $t8, $t2, $t4
    ctx->r24 = ADD32(ctx->r10, ctx->r12);
    // 0x800A1BFC: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800A1C00: lw          $a0, 0x70($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X70);
    // 0x800A1C04: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A1C08: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A1C0C: sll         $t5, $a0, 4
    ctx->r13 = S32(ctx->r4 << 4);
    // 0x800A1C10: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800A1C14: subu        $t5, $t5, $a0
    ctx->r13 = SUB32(ctx->r13, ctx->r4);
    // 0x800A1C18: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800A1C1C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800A1C20: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A1C24: andi        $a2, $t3, 0xFFFF
    ctx->r6 = ctx->r11 & 0XFFFF;
    // 0x800A1C28: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A1C2C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A1C30: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x800A1C34: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800A1C38: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800A1C3C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A1C40: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A1C44: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800A1C48: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
    // 0x800A1C4C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x800A1C50: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x800A1C54: jal         0x80071480
    // 0x800A1C58: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_80071480(rdram, ctx);
        goto after_15;
    // 0x800A1C58: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_15:
    // 0x800A1C5C: lhu         $t2, 0x42($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X42);
    // 0x800A1C60: addiu       $t8, $zero, 0x38
    ctx->r24 = ADD32(0, 0X38);
    // 0x800A1C64: addiu       $t4, $t2, 0x12
    ctx->r12 = ADD32(ctx->r10, 0X12);
    // 0x800A1C68: sh          $t4, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r12;
    // 0x800A1C6C: sh          $t8, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r24;
L_800A1C70:
    // 0x800A1C70: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800A1C74: nop

    // 0x800A1C78: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x800A1C7C: slti        $at, $t3, 0x5
    ctx->r1 = SIGNED(ctx->r11) < 0X5 ? 1 : 0;
    // 0x800A1C80: bne         $at, $zero, L_800A1998
    if (ctx->r1 != 0) {
        // 0x800A1C84: sw          $t3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r11;
            goto L_800A1998;
    }
    // 0x800A1C84: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
L_800A1C88:
    // 0x800A1C88: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800A1C8C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800A1C90: jr          $ra
    // 0x800A1C94: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x800A1C94: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_800A1C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1C98: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x800A1C9C: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x800A1CA0: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x800A1CA4: addiu       $t6, $zero, 0x96
    ctx->r14 = ADD32(0, 0X96);
    // 0x800A1CA8: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x800A1CAC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800A1CB0: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x800A1CB4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x800A1CB8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x800A1CBC: sh          $t6, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r14;
    // 0x800A1CC0: sh          $t7, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r15;
    // 0x800A1CC4: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x800A1CC8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800A1CCC: lbu         $t0, 0xB($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0XB);
    // 0x800A1CD0: nop

    // 0x800A1CD4: andi        $t1, $t0, 0xF
    ctx->r9 = ctx->r8 & 0XF;
    // 0x800A1CD8: bne         $t1, $at, L_800A1D88
    if (ctx->r9 != ctx->r1) {
        // 0x800A1CDC: nop
    
            goto L_800A1D88;
    }
    // 0x800A1CDC: nop

    // 0x800A1CE0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800A1CE4: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x800A1CE8: jal         0x8007BCB4
    // 0x800A1CEC: nop

    func_8007BCB4(rdram, ctx);
        goto after_0;
    // 0x800A1CEC: nop

    after_0:
    // 0x800A1CF0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A1CF4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A1CF8: addiu       $a1, $a1, 0x538
    ctx->r5 = ADD32(ctx->r5, 0X538);
    // 0x800A1CFC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x800A1D00: jal         0x800B62D4
    // 0x800A1D04: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_1;
    // 0x800A1D04: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_1:
    // 0x800A1D08: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A1D0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A1D10: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A1D14: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A1D18: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A1D1C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A1D20: lhu         $a2, 0x44($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X44);
    // 0x800A1D24: lhu         $a3, 0x46($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X46);
    // 0x800A1D28: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800A1D2C: addiu       $t2, $sp, 0x48
    ctx->r10 = ADD32(ctx->r29, 0X48);
    // 0x800A1D30: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800A1D34: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A1D38: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A1D3C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A1D40: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800A1D44: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800A1D48: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x800A1D4C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800A1D50: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800A1D54: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x800A1D58: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800A1D5C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x800A1D60: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800A1D64: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A1D68: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A1D6C: jal         0x80077960
    // 0x800A1D70: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_80077960(rdram, ctx);
        goto after_2;
    // 0x800A1D70: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_2:
    // 0x800A1D74: lhu         $t8, 0x46($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X46);
    // 0x800A1D78: nop

    // 0x800A1D7C: addiu       $t9, $t8, 0xF
    ctx->r25 = ADD32(ctx->r24, 0XF);
    // 0x800A1D80: b           L_800A2134
    // 0x800A1D84: sh          $t9, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r25;
        goto L_800A2134;
    // 0x800A1D84: sh          $t9, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r25;
L_800A1D88:
    // 0x800A1D88: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x800A1D8C: nop

    // 0x800A1D90: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x800A1D94: nop

    // 0x800A1D98: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x800A1D9C: nop

    // 0x800A1DA0: beq         $t2, $zero, L_800A2134
    if (ctx->r10 == 0) {
        // 0x800A1DA4: lui         $at, 0x437F
        ctx->r1 = S32(0X437F << 16);
            goto L_800A2134;
    }
    // 0x800A1DA4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A1DA8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A1DAC: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A1DB0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A1DB4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800A1DB8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A1DBC: lhu         $a2, 0x44($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X44);
    // 0x800A1DC0: lhu         $a3, 0x46($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X46);
    // 0x800A1DC4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800A1DC8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A1DCC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800A1DD0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A1DD4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A1DD8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800A1DDC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800A1DE0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800A1DE4: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800A1DE8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800A1DEC: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x800A1DF0: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800A1DF4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x800A1DF8: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A1DFC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A1E00: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800A1E04: jal         0x80077960
    // 0x800A1E08: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_80077960(rdram, ctx);
        goto after_3;
    // 0x800A1E08: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_3:
    // 0x800A1E0C: lhu         $t8, 0x44($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X44);
    // 0x800A1E10: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x800A1E14: addiu       $t9, $t8, 0x50
    ctx->r25 = ADD32(ctx->r24, 0X50);
    // 0x800A1E18: sh          $t9, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r25;
    // 0x800A1E1C: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x800A1E20: nop

    // 0x800A1E24: lw          $a0, 0xC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XC);
    // 0x800A1E28: jal         0x80078300
    // 0x800A1E2C: nop

    func_80078300(rdram, ctx);
        goto after_4;
    // 0x800A1E2C: nop

    after_4:
    // 0x800A1E30: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x800A1E34: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A1E38: addiu       $a1, $a1, 0x550
    ctx->r5 = ADD32(ctx->r5, 0X550);
    // 0x800A1E3C: addiu       $a2, $s1, 0x1
    ctx->r6 = ADD32(ctx->r17, 0X1);
    // 0x800A1E40: jal         0x800B62D4
    // 0x800A1E44: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_5;
    // 0x800A1E44: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x800A1E48: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A1E4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A1E50: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A1E54: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A1E58: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800A1E5C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A1E60: lhu         $a2, 0x44($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X44);
    // 0x800A1E64: lhu         $a3, 0x46($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X46);
    // 0x800A1E68: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800A1E6C: addiu       $t2, $sp, 0x48
    ctx->r10 = ADD32(ctx->r29, 0X48);
    // 0x800A1E70: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800A1E74: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A1E78: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A1E7C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A1E80: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800A1E84: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800A1E88: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x800A1E8C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800A1E90: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800A1E94: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x800A1E98: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800A1E9C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x800A1EA0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800A1EA4: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A1EA8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A1EAC: jal         0x80077960
    // 0x800A1EB0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_80077960(rdram, ctx);
        goto after_6;
    // 0x800A1EB0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_6:
    // 0x800A1EB4: lhu         $t8, 0x46($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X46);
    // 0x800A1EB8: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
    // 0x800A1EBC: addiu       $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
    // 0x800A1EC0: addiu       $t9, $t8, 0x13
    ctx->r25 = ADD32(ctx->r24, 0X13);
    // 0x800A1EC4: sh          $t9, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r25;
    // 0x800A1EC8: sh          $t0, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r8;
    // 0x800A1ECC: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x800A1ED0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A1ED4: lw          $t3, 0xC($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XC);
    // 0x800A1ED8: addiu       $a1, $a1, 0x554
    ctx->r5 = ADD32(ctx->r5, 0X554);
    // 0x800A1EDC: lw          $a2, 0xC4($t3)
    ctx->r6 = MEM_W(ctx->r11, 0XC4);
    // 0x800A1EE0: jal         0x800B62D4
    // 0x800A1EE4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_7;
    // 0x800A1EE4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_7:
    // 0x800A1EE8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A1EEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A1EF0: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A1EF4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A1EF8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A1EFC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A1F00: lhu         $a2, 0x44($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X44);
    // 0x800A1F04: lhu         $a3, 0x46($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X46);
    // 0x800A1F08: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800A1F0C: addiu       $t4, $sp, 0x48
    ctx->r12 = ADD32(ctx->r29, 0X48);
    // 0x800A1F10: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800A1F14: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A1F18: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A1F1C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800A1F20: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800A1F24: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800A1F28: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x800A1F2C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800A1F30: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800A1F34: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800A1F38: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800A1F3C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x800A1F40: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800A1F44: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A1F48: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A1F4C: jal         0x80077960
    // 0x800A1F50: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    func_80077960(rdram, ctx);
        goto after_8;
    // 0x800A1F50: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_8:
    // 0x800A1F54: lhu         $t0, 0x46($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X46);
    // 0x800A1F58: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x800A1F5C: addiu       $t1, $t0, 0xF
    ctx->r9 = ADD32(ctx->r8, 0XF);
    // 0x800A1F60: sh          $t1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r9;
    // 0x800A1F64: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x800A1F68: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A1F6C: lw          $t4, 0xC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC);
    // 0x800A1F70: addiu       $a1, $a1, 0x568
    ctx->r5 = ADD32(ctx->r5, 0X568);
    // 0x800A1F74: lw          $a2, 0xC8($t4)
    ctx->r6 = MEM_W(ctx->r12, 0XC8);
    // 0x800A1F78: jal         0x800B62D4
    // 0x800A1F7C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_9;
    // 0x800A1F7C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_9:
    // 0x800A1F80: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A1F84: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A1F88: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A1F8C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A1F90: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800A1F94: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A1F98: lhu         $a2, 0x44($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X44);
    // 0x800A1F9C: lhu         $a3, 0x46($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X46);
    // 0x800A1FA0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800A1FA4: addiu       $t5, $sp, 0x48
    ctx->r13 = ADD32(ctx->r29, 0X48);
    // 0x800A1FA8: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800A1FAC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A1FB0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A1FB4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800A1FB8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800A1FBC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800A1FC0: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x800A1FC4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800A1FC8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800A1FCC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800A1FD0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x800A1FD4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800A1FD8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800A1FDC: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A1FE0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A1FE4: jal         0x80077960
    // 0x800A1FE8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_80077960(rdram, ctx);
        goto after_10;
    // 0x800A1FE8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_10:
    // 0x800A1FEC: lhu         $t1, 0x46($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X46);
    // 0x800A1FF0: lw          $t3, 0x98($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X98);
    // 0x800A1FF4: addiu       $t2, $t1, 0xF
    ctx->r10 = ADD32(ctx->r9, 0XF);
    // 0x800A1FF8: sh          $t2, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r10;
    // 0x800A1FFC: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x800A2000: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A2004: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x800A2008: addiu       $a1, $a1, 0x584
    ctx->r5 = ADD32(ctx->r5, 0X584);
    // 0x800A200C: lw          $a2, 0xCC($t5)
    ctx->r6 = MEM_W(ctx->r13, 0XCC);
    // 0x800A2010: jal         0x800B62D4
    // 0x800A2014: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    sprintf_recomp(rdram, ctx);
        goto after_11;
    // 0x800A2014: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_11:
    // 0x800A2018: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A201C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A2020: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A2024: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A2028: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800A202C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A2030: lhu         $a2, 0x44($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X44);
    // 0x800A2034: lhu         $a3, 0x46($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X46);
    // 0x800A2038: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800A203C: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x800A2040: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800A2044: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A2048: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A204C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800A2050: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800A2054: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800A2058: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x800A205C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A2060: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800A2064: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800A2068: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800A206C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800A2070: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A2074: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A2078: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A207C: jal         0x80077960
    // 0x800A2080: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_80077960(rdram, ctx);
        goto after_12;
    // 0x800A2080: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_12:
    // 0x800A2084: lhu         $t2, 0x46($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X46);
    // 0x800A2088: lw          $t4, 0x98($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X98);
    // 0x800A208C: addiu       $t3, $t2, 0xF
    ctx->r11 = ADD32(ctx->r10, 0XF);
    // 0x800A2090: sh          $t3, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r11;
    // 0x800A2094: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x800A2098: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A209C: lw          $t6, 0xC($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC);
    // 0x800A20A0: addiu       $a1, $a1, 0x59C
    ctx->r5 = ADD32(ctx->r5, 0X59C);
    // 0x800A20A4: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x800A20A8: lw          $t8, 0xCC($t6)
    ctx->r24 = MEM_W(ctx->r14, 0XCC);
    // 0x800A20AC: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x800A20B0: jal         0x800B62D4
    // 0x800A20B4: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    sprintf_recomp(rdram, ctx);
        goto after_13;
    // 0x800A20B4: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    after_13:
    // 0x800A20B8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800A20BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A20C0: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800A20C4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A20C8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800A20CC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A20D0: lhu         $a2, 0x44($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X44);
    // 0x800A20D4: lhu         $a3, 0x46($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X46);
    // 0x800A20D8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800A20DC: addiu       $t9, $sp, 0x48
    ctx->r25 = ADD32(ctx->r29, 0X48);
    // 0x800A20E0: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800A20E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A20E8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A20EC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800A20F0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800A20F4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A20F8: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x800A20FC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x800A2100: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800A2104: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x800A2108: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x800A210C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800A2110: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800A2114: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A2118: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A211C: jal         0x80077960
    // 0x800A2120: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    func_80077960(rdram, ctx);
        goto after_14;
    // 0x800A2120: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    after_14:
    // 0x800A2124: lhu         $t5, 0x46($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X46);
    // 0x800A2128: nop

    // 0x800A212C: addiu       $t6, $t5, 0xF
    ctx->r14 = ADD32(ctx->r13, 0XF);
    // 0x800A2130: sh          $t6, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r14;
L_800A2134:
    // 0x800A2134: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800A2138: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x800A213C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x800A2140: jr          $ra
    // 0x800A2144: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x800A2144: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_800A2148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2148: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x800A214C: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x800A2150: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x800A2154: addiu       $t6, $zero, 0x98
    ctx->r14 = ADD32(0, 0X98);
    // 0x800A2158: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x800A215C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800A2160: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x800A2164: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800A2168: sh          $t6, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r14;
    // 0x800A216C: sh          $t7, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r15;
    // 0x800A2170: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x800A2174: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800A2178: lbu         $t0, 0xB($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0XB);
    // 0x800A217C: nop

    // 0x800A2180: andi        $t1, $t0, 0xF
    ctx->r9 = ctx->r8 & 0XF;
    // 0x800A2184: bne         $t1, $at, L_800A2490
    if (ctx->r9 != ctx->r1) {
        // 0x800A2188: nop
    
            goto L_800A2490;
    }
    // 0x800A2188: nop

    // 0x800A218C: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x800A2190: addiu       $t2, $t2, 0x5AC
    ctx->r10 = ADD32(ctx->r10, 0X5AC);
    // 0x800A2194: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A2198: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A219C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A21A0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800A21A4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800A21A8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800A21AC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800A21B0: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x800A21B4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800A21B8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x800A21BC: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A21C0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A21C4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800A21C8: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x800A21CC: jal         0x80077960
    // 0x800A21D0: addiu       $a3, $zero, 0x98
    ctx->r7 = ADD32(0, 0X98);
    func_80077960(rdram, ctx);
        goto after_0;
    // 0x800A21D0: addiu       $a3, $zero, 0x98
    ctx->r7 = ADD32(0, 0X98);
    after_0:
    // 0x800A21D4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800A21D8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A21DC: addiu       $a1, $a1, 0x5B4
    ctx->r5 = ADD32(ctx->r5, 0X5B4);
    // 0x800A21E0: jal         0x80077D88
    // 0x800A21E4: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    func_80077D88(rdram, ctx);
        goto after_1;
    // 0x800A21E4: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    after_1:
    // 0x800A21E8: lhu         $t7, 0x3C($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X3C);
    // 0x800A21EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A21F0: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x800A21F4: addiu       $t9, $t9, 0x5BC
    ctx->r25 = ADD32(ctx->r25, 0X5BC);
    // 0x800A21F8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A21FC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A2200: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x800A2204: addiu       $t0, $zero, 0x5A
    ctx->r8 = ADD32(0, 0X5A);
    // 0x800A2208: addiu       $t1, $zero, 0x50
    ctx->r9 = ADD32(0, 0X50);
    // 0x800A220C: addiu       $t2, $zero, 0xB9
    ctx->r10 = ADD32(0, 0XB9);
    // 0x800A2210: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A2214: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x800A2218: sh          $t8, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r24;
    // 0x800A221C: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    // 0x800A2220: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x800A2224: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x800A2228: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x800A222C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800A2230: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A2234: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A2238: jal         0x80077960
    // 0x800A223C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80077960(rdram, ctx);
        goto after_2;
    // 0x800A223C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_2:
    // 0x800A2240: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800A2244: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A2248: addiu       $a1, $a1, 0x5C0
    ctx->r5 = ADD32(ctx->r5, 0X5C0);
    // 0x800A224C: jal         0x80077D88
    // 0x800A2250: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    func_80077D88(rdram, ctx);
        goto after_3;
    // 0x800A2250: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    after_3:
    // 0x800A2254: lhu         $t4, 0x3C($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X3C);
    // 0x800A2258: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A225C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x800A2260: addiu       $t6, $t6, 0x5C4
    ctx->r14 = ADD32(ctx->r14, 0X5C4);
    // 0x800A2264: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A2268: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A226C: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x800A2270: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800A2274: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800A2278: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A227C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800A2280: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x800A2284: sh          $t5, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r13;
    // 0x800A2288: andi        $a2, $t5, 0xFFFF
    ctx->r6 = ctx->r13 & 0XFFFF;
    // 0x800A228C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x800A2290: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800A2294: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800A2298: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800A229C: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A22A0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A22A4: jal         0x80077960
    // 0x800A22A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80077960(rdram, ctx);
        goto after_4;
    // 0x800A22A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_4:
    // 0x800A22AC: lhu         $t1, 0x3E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X3E);
    // 0x800A22B0: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x800A22B4: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x800A22B8: addiu       $t4, $t4, 0x5E0
    ctx->r12 = ADD32(ctx->r12, 0X5E0);
    // 0x800A22BC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A22C0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A22C4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800A22C8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800A22CC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800A22D0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800A22D4: addiu       $t2, $t1, 0xF
    ctx->r10 = ADD32(ctx->r9, 0XF);
    // 0x800A22D8: sh          $t2, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r10;
    // 0x800A22DC: sh          $t3, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r11;
    // 0x800A22E0: andi        $a3, $t2, 0xFFFF
    ctx->r7 = ctx->r10 & 0XFFFF;
    // 0x800A22E4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x800A22E8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800A22EC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800A22F0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x800A22F4: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A22F8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A22FC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800A2300: jal         0x80077960
    // 0x800A2304: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_80077960(rdram, ctx);
        goto after_5;
    // 0x800A2304: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_5:
    // 0x800A2308: lhu         $t9, 0x3E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X3E);
    // 0x800A230C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x800A2310: addiu       $t1, $t1, 0x600
    ctx->r9 = ADD32(ctx->r9, 0X600);
    // 0x800A2314: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A2318: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A231C: lhu         $a2, 0x3C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X3C);
    // 0x800A2320: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A2324: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x800A2328: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800A232C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800A2330: addiu       $t0, $t9, 0xF
    ctx->r8 = ADD32(ctx->r25, 0XF);
    // 0x800A2334: sh          $t0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r8;
    // 0x800A2338: andi        $a3, $t0, 0xFFFF
    ctx->r7 = ctx->r8 & 0XFFFF;
    // 0x800A233C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x800A2340: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x800A2344: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x800A2348: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x800A234C: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A2350: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A2354: jal         0x80077960
    // 0x800A2358: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80077960(rdram, ctx);
        goto after_6;
    // 0x800A2358: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_6:
    // 0x800A235C: lhu         $t6, 0x3E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3E);
    // 0x800A2360: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x800A2364: addiu       $t8, $t8, 0x614
    ctx->r24 = ADD32(ctx->r24, 0X614);
    // 0x800A2368: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A236C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A2370: lhu         $a2, 0x3C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X3C);
    // 0x800A2374: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A2378: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800A237C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A2380: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A2384: addiu       $t7, $t6, 0xF
    ctx->r15 = ADD32(ctx->r14, 0XF);
    // 0x800A2388: sh          $t7, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r15;
    // 0x800A238C: andi        $a3, $t7, 0xFFFF
    ctx->r7 = ctx->r15 & 0XFFFF;
    // 0x800A2390: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x800A2394: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x800A2398: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800A239C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800A23A0: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A23A4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A23A8: jal         0x80077960
    // 0x800A23AC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80077960(rdram, ctx);
        goto after_7;
    // 0x800A23AC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_7:
    // 0x800A23B0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800A23B4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A23B8: addiu       $a1, $a1, 0x620
    ctx->r5 = ADD32(ctx->r5, 0X620);
    // 0x800A23BC: jal         0x80077D88
    // 0x800A23C0: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    func_80077D88(rdram, ctx);
        goto after_8;
    // 0x800A23C0: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    after_8:
    // 0x800A23C4: lhu         $t2, 0x3C($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X3C);
    // 0x800A23C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A23CC: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x800A23D0: addiu       $t5, $t5, 0x62C
    ctx->r13 = ADD32(ctx->r13, 0X62C);
    // 0x800A23D4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A23D8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A23DC: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x800A23E0: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x800A23E4: addiu       $t7, $zero, 0x50
    ctx->r15 = ADD32(0, 0X50);
    // 0x800A23E8: addiu       $t8, $zero, 0xB9
    ctx->r24 = ADD32(0, 0XB9);
    // 0x800A23EC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A23F0: addu        $t4, $t2, $s0
    ctx->r12 = ADD32(ctx->r10, ctx->r16);
    // 0x800A23F4: sh          $t4, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r12;
    // 0x800A23F8: andi        $a2, $t4, 0xFFFF
    ctx->r6 = ctx->r12 & 0XFFFF;
    // 0x800A23FC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x800A2400: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800A2404: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x800A2408: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800A240C: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A2410: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A2414: jal         0x80077960
    // 0x800A2418: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80077960(rdram, ctx);
        goto after_9;
    // 0x800A2418: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_9:
    // 0x800A241C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800A2420: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A2424: addiu       $a1, $a1, 0x630
    ctx->r5 = ADD32(ctx->r5, 0X630);
    // 0x800A2428: jal         0x80077D88
    // 0x800A242C: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    func_80077D88(rdram, ctx);
        goto after_10;
    // 0x800A242C: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    after_10:
    // 0x800A2430: lhu         $t0, 0x3C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3C);
    // 0x800A2434: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A2438: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x800A243C: addiu       $t3, $t3, 0x634
    ctx->r11 = ADD32(ctx->r11, 0X634);
    // 0x800A2440: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A2444: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A2448: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x800A244C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x800A2450: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800A2454: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800A2458: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800A245C: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x800A2460: sh          $t1, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r9;
    // 0x800A2464: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x800A2468: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800A246C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x800A2470: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800A2474: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x800A2478: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A247C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A2480: jal         0x80077960
    // 0x800A2484: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_80077960(rdram, ctx);
        goto after_11;
    // 0x800A2484: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_11:
    // 0x800A2488: b           L_800A27AC
    // 0x800A248C: nop

        goto L_800A27AC;
    // 0x800A248C: nop

L_800A2490:
    // 0x800A2490: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x800A2494: nop

    // 0x800A2498: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x800A249C: nop

    // 0x800A24A0: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x800A24A4: nop

    // 0x800A24A8: beq         $t9, $zero, L_800A27AC
    if (ctx->r25 == 0) {
        // 0x800A24AC: nop
    
            goto L_800A27AC;
    }
    // 0x800A24AC: nop

    // 0x800A24B0: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x800A24B4: addiu       $t0, $t0, 0x648
    ctx->r8 = ADD32(ctx->r8, 0X648);
    // 0x800A24B8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A24BC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A24C0: lhu         $a2, 0x3C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X3C);
    // 0x800A24C4: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x800A24C8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A24CC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A24D0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x800A24D4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800A24D8: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x800A24DC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x800A24E0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x800A24E4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800A24E8: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A24EC: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A24F0: jal         0x80077960
    // 0x800A24F4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80077960(rdram, ctx);
        goto after_12;
    // 0x800A24F4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_12:
    // 0x800A24F8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800A24FC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A2500: addiu       $a1, $a1, 0x650
    ctx->r5 = ADD32(ctx->r5, 0X650);
    // 0x800A2504: jal         0x80077D88
    // 0x800A2508: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    func_80077D88(rdram, ctx);
        goto after_13;
    // 0x800A2508: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    after_13:
    // 0x800A250C: lhu         $t5, 0x3C($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X3C);
    // 0x800A2510: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A2514: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x800A2518: addiu       $t7, $t7, 0x658
    ctx->r15 = ADD32(ctx->r15, 0X658);
    // 0x800A251C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A2520: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A2524: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x800A2528: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x800A252C: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x800A2530: addiu       $t0, $zero, 0xB9
    ctx->r8 = ADD32(0, 0XB9);
    // 0x800A2534: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A2538: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x800A253C: sh          $t6, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r14;
    // 0x800A2540: andi        $a2, $t6, 0xFFFF
    ctx->r6 = ctx->r14 & 0XFFFF;
    // 0x800A2544: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800A2548: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x800A254C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800A2550: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800A2554: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A2558: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A255C: jal         0x80077960
    // 0x800A2560: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80077960(rdram, ctx);
        goto after_14;
    // 0x800A2560: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_14:
    // 0x800A2564: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800A2568: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A256C: addiu       $a1, $a1, 0x65C
    ctx->r5 = ADD32(ctx->r5, 0X65C);
    // 0x800A2570: jal         0x80077D88
    // 0x800A2574: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    func_80077D88(rdram, ctx);
        goto after_15;
    // 0x800A2574: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    after_15:
    // 0x800A2578: lhu         $t3, 0x3C($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X3C);
    // 0x800A257C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A2580: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x800A2584: addiu       $t4, $t4, 0x660
    ctx->r12 = ADD32(ctx->r12, 0X660);
    // 0x800A2588: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A258C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A2590: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x800A2594: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800A2598: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800A259C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800A25A0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800A25A4: addu        $t2, $t3, $s0
    ctx->r10 = ADD32(ctx->r11, ctx->r16);
    // 0x800A25A8: sh          $t2, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r10;
    // 0x800A25AC: andi        $a2, $t2, 0xFFFF
    ctx->r6 = ctx->r10 & 0XFFFF;
    // 0x800A25B0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x800A25B4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800A25B8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800A25BC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x800A25C0: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A25C4: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A25C8: jal         0x80077960
    // 0x800A25CC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_80077960(rdram, ctx);
        goto after_16;
    // 0x800A25CC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_16:
    // 0x800A25D0: lhu         $t9, 0x3E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X3E);
    // 0x800A25D4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x800A25D8: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x800A25DC: addiu       $t3, $t3, 0x67C
    ctx->r11 = ADD32(ctx->r11, 0X67C);
    // 0x800A25E0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A25E4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A25E8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x800A25EC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800A25F0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800A25F4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800A25F8: addiu       $t0, $t9, 0xF
    ctx->r8 = ADD32(ctx->r25, 0XF);
    // 0x800A25FC: sh          $t0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r8;
    // 0x800A2600: sh          $t1, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r9;
    // 0x800A2604: andi        $a3, $t0, 0xFFFF
    ctx->r7 = ctx->r8 & 0XFFFF;
    // 0x800A2608: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800A260C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x800A2610: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800A2614: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x800A2618: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A261C: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A2620: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800A2624: jal         0x80077960
    // 0x800A2628: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_80077960(rdram, ctx);
        goto after_17;
    // 0x800A2628: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_17:
    // 0x800A262C: lhu         $t7, 0x3E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X3E);
    // 0x800A2630: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x800A2634: addiu       $t9, $t9, 0x69C
    ctx->r25 = ADD32(ctx->r25, 0X69C);
    // 0x800A2638: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A263C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A2640: lhu         $a2, 0x3C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X3C);
    // 0x800A2644: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A2648: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800A264C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A2650: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x800A2654: addiu       $t8, $t7, 0xF
    ctx->r24 = ADD32(ctx->r15, 0XF);
    // 0x800A2658: sh          $t8, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r24;
    // 0x800A265C: andi        $a3, $t8, 0xFFFF
    ctx->r7 = ctx->r24 & 0XFFFF;
    // 0x800A2660: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x800A2664: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800A2668: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800A266C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800A2670: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A2674: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A2678: jal         0x80077960
    // 0x800A267C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80077960(rdram, ctx);
        goto after_18;
    // 0x800A267C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_18:
    // 0x800A2680: lhu         $t4, 0x3E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X3E);
    // 0x800A2684: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x800A2688: addiu       $t6, $t6, 0x6B0
    ctx->r14 = ADD32(ctx->r14, 0X6B0);
    // 0x800A268C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A2690: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A2694: lhu         $a2, 0x3C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X3C);
    // 0x800A2698: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800A269C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x800A26A0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x800A26A4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x800A26A8: addiu       $t5, $t4, 0xF
    ctx->r13 = ADD32(ctx->r12, 0XF);
    // 0x800A26AC: sh          $t5, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r13;
    // 0x800A26B0: andi        $a3, $t5, 0xFFFF
    ctx->r7 = ctx->r13 & 0XFFFF;
    // 0x800A26B4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800A26B8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800A26BC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800A26C0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800A26C4: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A26C8: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A26CC: jal         0x80077960
    // 0x800A26D0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80077960(rdram, ctx);
        goto after_19;
    // 0x800A26D0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_19:
    // 0x800A26D4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800A26D8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A26DC: addiu       $a1, $a1, 0x6BC
    ctx->r5 = ADD32(ctx->r5, 0X6BC);
    // 0x800A26E0: jal         0x80077D88
    // 0x800A26E4: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    func_80077D88(rdram, ctx);
        goto after_20;
    // 0x800A26E4: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    after_20:
    // 0x800A26E8: lhu         $t0, 0x3C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3C);
    // 0x800A26EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A26F0: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x800A26F4: addiu       $t2, $t2, 0x6C8
    ctx->r10 = ADD32(ctx->r10, 0X6C8);
    // 0x800A26F8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A26FC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A2700: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x800A2704: addiu       $t4, $zero, 0x5A
    ctx->r12 = ADD32(0, 0X5A);
    // 0x800A2708: addiu       $t5, $zero, 0x50
    ctx->r13 = ADD32(0, 0X50);
    // 0x800A270C: addiu       $t6, $zero, 0xB9
    ctx->r14 = ADD32(0, 0XB9);
    // 0x800A2710: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800A2714: addu        $t3, $t0, $s0
    ctx->r11 = ADD32(ctx->r8, ctx->r16);
    // 0x800A2718: sh          $t3, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r11;
    // 0x800A271C: andi        $a2, $t3, 0xFFFF
    ctx->r6 = ctx->r11 & 0XFFFF;
    // 0x800A2720: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x800A2724: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800A2728: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x800A272C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x800A2730: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A2734: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A2738: jal         0x80077960
    // 0x800A273C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80077960(rdram, ctx);
        goto after_21;
    // 0x800A273C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_21:
    // 0x800A2740: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800A2744: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800A2748: addiu       $a1, $a1, 0x6CC
    ctx->r5 = ADD32(ctx->r5, 0X6CC);
    // 0x800A274C: jal         0x80077D88
    // 0x800A2750: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    func_80077D88(rdram, ctx);
        goto after_22;
    // 0x800A2750: addiu       $a0, $a0, -0x7060
    ctx->r4 = ADD32(ctx->r4, -0X7060);
    after_22:
    // 0x800A2754: lhu         $t8, 0x3C($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3C);
    // 0x800A2758: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A275C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x800A2760: addiu       $t1, $t1, 0x6D0
    ctx->r9 = ADD32(ctx->r9, 0X6D0);
    // 0x800A2764: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A2768: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A276C: lhu         $a3, 0x3E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3E);
    // 0x800A2770: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800A2774: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A2778: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x800A277C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x800A2780: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x800A2784: sh          $t9, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r25;
    // 0x800A2788: andi        $a2, $t9, 0xFFFF
    ctx->r6 = ctx->r25 & 0XFFFF;
    // 0x800A278C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x800A2790: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x800A2794: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x800A2798: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800A279C: addiu       $a1, $a1, -0x7060
    ctx->r5 = ADD32(ctx->r5, -0X7060);
    // 0x800A27A0: addiu       $a0, $a0, 0x20C0
    ctx->r4 = ADD32(ctx->r4, 0X20C0);
    // 0x800A27A4: jal         0x80077960
    // 0x800A27A8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_80077960(rdram, ctx);
        goto after_23;
    // 0x800A27A8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_23:
L_800A27AC:
    // 0x800A27AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800A27B0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800A27B4: jr          $ra
    // 0x800A27B8: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x800A27B8: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_800A27BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A27BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A27C0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800A27C4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800A27C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A27CC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800A27D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A27D4: lbu         $s0, 0xC($t6)
    ctx->r16 = MEM_BU(ctx->r14, 0XC);
    // 0x800A27D8: nop

    // 0x800A27DC: beq         $s0, $zero, L_800A2804
    if (ctx->r16 == 0) {
        // 0x800A27E0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800A2804;
    }
    // 0x800A27E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A27E4: beq         $s0, $at, L_800A281C
    if (ctx->r16 == ctx->r1) {
        // 0x800A27E8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800A281C;
    }
    // 0x800A27E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A27EC: beq         $s0, $at, L_800A2834
    if (ctx->r16 == ctx->r1) {
        // 0x800A27F0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800A2834;
    }
    // 0x800A27F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A27F4: beq         $s0, $at, L_800A284C
    if (ctx->r16 == ctx->r1) {
        // 0x800A27F8: nop
    
            goto L_800A284C;
    }
    // 0x800A27F8: nop

    // 0x800A27FC: b           L_800A285C
    // 0x800A2800: nop

        goto L_800A285C;
    // 0x800A2800: nop

L_800A2804:
    // 0x800A2804: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800A2808: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800A280C: jal         0x800A1C98
    // 0x800A2810: addiu       $a0, $a0, 0x5014
    ctx->r4 = ADD32(ctx->r4, 0X5014);
    func_800A1C98(rdram, ctx);
        goto after_0;
    // 0x800A2810: addiu       $a0, $a0, 0x5014
    ctx->r4 = ADD32(ctx->r4, 0X5014);
    after_0:
    // 0x800A2814: b           L_800A285C
    // 0x800A2818: nop

        goto L_800A285C;
    // 0x800A2818: nop

L_800A281C:
    // 0x800A281C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800A2820: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800A2824: jal         0x800A0A44
    // 0x800A2828: addiu       $a0, $a0, 0x5014
    ctx->r4 = ADD32(ctx->r4, 0X5014);
    func_800A0A44(rdram, ctx);
        goto after_1;
    // 0x800A2828: addiu       $a0, $a0, 0x5014
    ctx->r4 = ADD32(ctx->r4, 0X5014);
    after_1:
    // 0x800A282C: b           L_800A285C
    // 0x800A2830: nop

        goto L_800A285C;
    // 0x800A2830: nop

L_800A2834:
    // 0x800A2834: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800A2838: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800A283C: jal         0x800A1060
    // 0x800A2840: addiu       $a0, $a0, 0x5014
    ctx->r4 = ADD32(ctx->r4, 0X5014);
    func_800A1060(rdram, ctx);
        goto after_2;
    // 0x800A2840: addiu       $a0, $a0, 0x5014
    ctx->r4 = ADD32(ctx->r4, 0X5014);
    after_2:
    // 0x800A2844: b           L_800A285C
    // 0x800A2848: nop

        goto L_800A285C;
    // 0x800A2848: nop

L_800A284C:
    // 0x800A284C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800A2850: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800A2854: jal         0x800A167C
    // 0x800A2858: addiu       $a0, $a0, 0x5014
    ctx->r4 = ADD32(ctx->r4, 0X5014);
    func_800A167C(rdram, ctx);
        goto after_3;
    // 0x800A2858: addiu       $a0, $a0, 0x5014
    ctx->r4 = ADD32(ctx->r4, 0X5014);
    after_3:
L_800A285C:
    // 0x800A285C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A2860: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A2864: jr          $ra
    // 0x800A2868: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A2868: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A286C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A286C: lbu         $t6, 0xC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XC);
    // 0x800A2870: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A2874: jr          $ra
    // 0x800A2878: sb          $t6, -0x1114($at)
    MEM_B(-0X1114, ctx->r1) = ctx->r14;
    return;
    // 0x800A2878: sb          $t6, -0x1114($at)
    MEM_B(-0X1114, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800A287C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A287C: jr          $ra
    // 0x800A2880: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x800A2880: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_800A2884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2884: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A2888: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800A288C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800A2890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A2894: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x800A2898: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800A289C: addiu       $t8, $t8, 0x2D98
    ctx->r24 = ADD32(ctx->r24, 0X2D98);
    // 0x800A28A0: beq         $t7, $t8, L_800A2A84
    if (ctx->r15 == ctx->r24) {
        // 0x800A28A4: nop
    
            goto L_800A2A84;
    }
    // 0x800A28A4: nop

    // 0x800A28A8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800A28AC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x800A28B0: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x800A28B4: nop

    // 0x800A28B8: lbu         $t1, 0xB($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XB);
    // 0x800A28BC: nop

    // 0x800A28C0: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x800A28C4: bne         $t2, $at, L_800A2A84
    if (ctx->r10 != ctx->r1) {
        // 0x800A28C8: nop
    
            goto L_800A2A84;
    }
    // 0x800A28C8: nop

    // 0x800A28CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_800A28D0:
    // 0x800A28D0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800A28D4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800A28D8: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x800A28DC: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800A28E0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800A28E4: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800A28E8: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x800A28EC: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x800A28F0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A28F4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800A28F8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800A28FC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x800A2900: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A2904: sb          $t3, -0x14BB($at)
    MEM_B(-0X14BB, ctx->r1) = ctx->r11;
    // 0x800A2908: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800A290C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800A2910: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800A2914: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A2918: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800A291C: sb          $zero, -0x14BA($at)
    MEM_B(-0X14BA, ctx->r1) = 0;
    // 0x800A2920: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800A2924: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x800A2928: bne         $at, $zero, L_800A28D0
    if (ctx->r1 != 0) {
        // 0x800A292C: sw          $t9, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r25;
            goto L_800A28D0;
    }
    // 0x800A292C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800A2930: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800A2934: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2938: sh          $zero, 0x2E1C($at)
    MEM_H(0X2E1C, ctx->r1) = 0;
    // 0x800A293C: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x800A2940: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x800A2944: addiu       $t2, $t2, 0x2D80
    ctx->r10 = ADD32(ctx->r10, 0X2D80);
    // 0x800A2948: bne         $t1, $t2, L_800A2958
    if (ctx->r9 != ctx->r10) {
        // 0x800A294C: nop
    
            goto L_800A2958;
    }
    // 0x800A294C: nop

    // 0x800A2950: addiu       $t4, $zero, 0xE
    ctx->r12 = ADD32(0, 0XE);
    // 0x800A2954: sb          $t4, 0xB($t1)
    MEM_B(0XB, ctx->r9) = ctx->r12;
L_800A2958:
    // 0x800A2958: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800A295C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A2960: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    // 0x800A2964: jal         0x8007A078
    // 0x800A2968: nop

    func_8007A078(rdram, ctx);
        goto after_0;
    // 0x800A2968: nop

    after_0:
    // 0x800A296C: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x800A2970: lbu         $t5, 0x57A0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X57A0);
    // 0x800A2974: nop

    // 0x800A2978: beq         $t5, $zero, L_800A29DC
    if (ctx->r13 == 0) {
        // 0x800A297C: nop
    
            goto L_800A29DC;
    }
    // 0x800A297C: nop

    // 0x800A2980: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800A2984: addiu       $a0, $a0, 0x2D80
    ctx->r4 = ADD32(ctx->r4, 0X2D80);
    // 0x800A2988: jal         0x8007A078
    // 0x800A298C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8007A078(rdram, ctx);
        goto after_1;
    // 0x800A298C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800A2990: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x800A2994: lbu         $a2, 0x57A0($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X57A0);
    // 0x800A2998: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800A299C: lbu         $a1, 0x5688($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X5688);
    // 0x800A29A0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800A29A4: jal         0x80042800
    // 0x800A29A8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    func_80042800(rdram, ctx);
        goto after_2;
    // 0x800A29A8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    after_2:
    // 0x800A29AC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800A29B0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A29B4: sh          $t6, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r14;
    // 0x800A29B8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A29BC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800A29C0: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800A29C4: sb          $t7, -0x1513($at)
    MEM_B(-0X1513, ctx->r1) = ctx->r15;
    // 0x800A29C8: addiu       $t9, $t9, 0xA00
    ctx->r25 = ADD32(ctx->r25, 0XA00);
    // 0x800A29CC: addiu       $at, $t9, 0x7FFF
    ctx->r1 = ADD32(ctx->r25, 0X7FFF);
    // 0x800A29D0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800A29D4: b           L_800A29F0
    // 0x800A29D8: sb          $t8, 0x62E5($at)
    MEM_B(0X62E5, ctx->r1) = ctx->r24;
        goto L_800A29F0;
    // 0x800A29D8: sb          $t8, 0x62E5($at)
    MEM_B(0X62E5, ctx->r1) = ctx->r24;
L_800A29DC:
    // 0x800A29DC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800A29E0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A29E4: sh          $t0, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r8;
    // 0x800A29E8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A29EC: sb          $zero, -0x1513($at)
    MEM_B(-0X1513, ctx->r1) = 0;
L_800A29F0:
    // 0x800A29F0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800A29F4: jal         0x800785E0
    // 0x800A29F8: addiu       $a0, $a0, 0x2D80
    ctx->r4 = ADD32(ctx->r4, 0X2D80);
    func_800785E0(rdram, ctx);
        goto after_3;
    // 0x800A29F8: addiu       $a0, $a0, 0x2D80
    ctx->r4 = ADD32(ctx->r4, 0X2D80);
    after_3:
    // 0x800A29FC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A2A00: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A2A04: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2A08: lw          $a0, 0x20C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20C0);
    // 0x800A2A0C: sb          $t2, 0x3CF0($at)
    MEM_B(0X3CF0, ctx->r1) = ctx->r10;
    // 0x800A2A10: jal         0x80048934
    // 0x800A2A14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80048934(rdram, ctx);
        goto after_4;
    // 0x800A2A14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800A2A18: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A2A1C: sw          $v0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r2;
    // 0x800A2A20: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800A2A24: lw          $a0, 0x20C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X20C0);
    // 0x800A2A28: jal         0x80048934
    // 0x800A2A2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80048934(rdram, ctx);
        goto after_5;
    // 0x800A2A2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x800A2A30: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800A2A34: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A2A38: sw          $v0, 0x20C0($at)
    MEM_W(0X20C0, ctx->r1) = ctx->r2;
    // 0x800A2A3C: addiu       $t4, $zero, 0xFE
    ctx->r12 = ADD32(0, 0XFE);
    // 0x800A2A40: sb          $t4, 0x5D($t1)
    MEM_B(0X5D, ctx->r9) = ctx->r12;
    // 0x800A2A44: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800A2A48: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800A2A4C: addiu       $t3, $t3, 0x2D80
    ctx->r11 = ADD32(ctx->r11, 0X2D80);
    // 0x800A2A50: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2A54: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x800A2A58: sw          $t3, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r11;
    // 0x800A2A5C: sb          $t6, 0x2DA3($at)
    MEM_B(0X2DA3, ctx->r1) = ctx->r14;
    // 0x800A2A60: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2A64: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x800A2A68: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800A2A6C: lbu         $t8, 0x5688($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5688);
    // 0x800A2A70: sb          $t7, 0x2D8B($at)
    MEM_B(0X2D8B, ctx->r1) = ctx->r15;
    // 0x800A2A74: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800A2A78: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A2A7C: sb          $t8, -0x1114($at)
    MEM_B(-0X1114, ctx->r1) = ctx->r24;
    // 0x800A2A80: sb          $zero, 0x61($t9)
    MEM_B(0X61, ctx->r25) = 0;
L_800A2A84:
    // 0x800A2A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A2A88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A2A8C: jr          $ra
    // 0x800A2A90: nop

    return;
    // 0x800A2A90: nop

;}
RECOMP_FUNC void func_800A2A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2A94: lbu         $t6, 0xC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XC);
    // 0x800A2A98: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A2A9C: jr          $ra
    // 0x800A2AA0: sb          $t6, -0x1513($at)
    MEM_B(-0X1513, ctx->r1) = ctx->r14;
    return;
    // 0x800A2AA0: sb          $t6, -0x1513($at)
    MEM_B(-0X1513, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800A2AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2AA4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800A2AA8: lbu         $t6, 0x3D34($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3D34);
    // 0x800A2AAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A2AB0: beq         $t6, $zero, L_800A2E1C
    if (ctx->r14 == 0) {
        // 0x800A2AB4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800A2E1C;
    }
    // 0x800A2AB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A2AB8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2ABC: sh          $zero, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = 0;
    // 0x800A2AC0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800A2AC4: lw          $t7, 0x5ACC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5ACC);
    // 0x800A2AC8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2ACC: sh          $zero, 0x2E1C($at)
    MEM_H(0X2E1C, ctx->r1) = 0;
    // 0x800A2AD0: lbu         $t8, 0xB($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XB);
    // 0x800A2AD4: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x800A2AD8: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x800A2ADC: beq         $t9, $at, L_800A2AEC
    if (ctx->r25 == ctx->r1) {
        // 0x800A2AE0: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_800A2AEC;
    }
    // 0x800A2AE0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x800A2AE4: bne         $t9, $at, L_800A2B38
    if (ctx->r25 != ctx->r1) {
        // 0x800A2AE8: nop
    
            goto L_800A2B38;
    }
    // 0x800A2AE8: nop

L_800A2AEC:
    // 0x800A2AEC: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800A2AF0: lw          $t0, 0x5ACC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5ACC);
    // 0x800A2AF4: nop

    // 0x800A2AF8: lbu         $t1, 0xB($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XB);
    // 0x800A2AFC: nop

    // 0x800A2B00: sra         $t2, $t1, 4
    ctx->r10 = S32(SIGNED(ctx->r9) >> 4);
    // 0x800A2B04: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x800A2B08: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x800A2B0C: beq         $t4, $zero, L_800A2B80
    if (ctx->r12 == 0) {
        // 0x800A2B10: nop
    
            goto L_800A2B80;
    }
    // 0x800A2B10: nop

    // 0x800A2B14: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800A2B18: jal         0x8007A078
    // 0x800A2B1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8007A078(rdram, ctx);
        goto after_0;
    // 0x800A2B1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800A2B20: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x800A2B24: lh          $t5, -0x12C($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X12C);
    // 0x800A2B28: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2B2C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800A2B30: b           L_800A2B80
    // 0x800A2B34: sh          $t6, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r14;
        goto L_800A2B80;
    // 0x800A2B34: sh          $t6, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r14;
L_800A2B38:
    // 0x800A2B38: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800A2B3C: lw          $t7, 0x5ACC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5ACC);
    // 0x800A2B40: nop

    // 0x800A2B44: lbu         $t8, 0xB($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XB);
    // 0x800A2B48: nop

    // 0x800A2B4C: sra         $t9, $t8, 4
    ctx->r25 = S32(SIGNED(ctx->r24) >> 4);
    // 0x800A2B50: andi        $t1, $t9, 0xF
    ctx->r9 = ctx->r25 & 0XF;
    // 0x800A2B54: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x800A2B58: beq         $t2, $zero, L_800A2B80
    if (ctx->r10 == 0) {
        // 0x800A2B5C: nop
    
            goto L_800A2B80;
    }
    // 0x800A2B5C: nop

    // 0x800A2B60: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x800A2B64: jal         0x8007A078
    // 0x800A2B68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8007A078(rdram, ctx);
        goto after_1;
    // 0x800A2B68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800A2B6C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800A2B70: lh          $t3, -0x12C($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X12C);
    // 0x800A2B74: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2B78: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800A2B7C: sh          $t4, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r12;
L_800A2B80:
    // 0x800A2B80: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800A2B84: lw          $t0, 0x5B30($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5B30);
    // 0x800A2B88: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x800A2B8C: lbu         $t5, 0xB($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0XB);
    // 0x800A2B90: nop

    // 0x800A2B94: andi        $t6, $t5, 0xF
    ctx->r14 = ctx->r13 & 0XF;
    // 0x800A2B98: beq         $t6, $at, L_800A2BA8
    if (ctx->r14 == ctx->r1) {
        // 0x800A2B9C: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_800A2BA8;
    }
    // 0x800A2B9C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x800A2BA0: bne         $t6, $at, L_800A2BF4
    if (ctx->r14 != ctx->r1) {
        // 0x800A2BA4: nop
    
            goto L_800A2BF4;
    }
    // 0x800A2BA4: nop

L_800A2BA8:
    // 0x800A2BA8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800A2BAC: lw          $t8, 0x5B30($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5B30);
    // 0x800A2BB0: nop

    // 0x800A2BB4: lbu         $t9, 0xB($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XB);
    // 0x800A2BB8: nop

    // 0x800A2BBC: sra         $t1, $t9, 4
    ctx->r9 = S32(SIGNED(ctx->r25) >> 4);
    // 0x800A2BC0: andi        $t2, $t1, 0xF
    ctx->r10 = ctx->r9 & 0XF;
    // 0x800A2BC4: andi        $t7, $t2, 0x2
    ctx->r15 = ctx->r10 & 0X2;
    // 0x800A2BC8: beq         $t7, $zero, L_800A2C3C
    if (ctx->r15 == 0) {
        // 0x800A2BCC: nop
    
            goto L_800A2C3C;
    }
    // 0x800A2BCC: nop

    // 0x800A2BD0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800A2BD4: jal         0x8007A078
    // 0x800A2BD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8007A078(rdram, ctx);
        goto after_2;
    // 0x800A2BD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800A2BDC: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800A2BE0: lh          $t3, -0x12C($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X12C);
    // 0x800A2BE4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2BE8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800A2BEC: b           L_800A2C3C
    // 0x800A2BF0: sh          $t4, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r12;
        goto L_800A2C3C;
    // 0x800A2BF0: sh          $t4, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r12;
L_800A2BF4:
    // 0x800A2BF4: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800A2BF8: lw          $t0, 0x5B30($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5B30);
    // 0x800A2BFC: nop

    // 0x800A2C00: lbu         $t5, 0xB($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0XB);
    // 0x800A2C04: nop

    // 0x800A2C08: sra         $t6, $t5, 4
    ctx->r14 = S32(SIGNED(ctx->r13) >> 4);
    // 0x800A2C0C: andi        $t9, $t6, 0xF
    ctx->r25 = ctx->r14 & 0XF;
    // 0x800A2C10: andi        $t1, $t9, 0x2
    ctx->r9 = ctx->r25 & 0X2;
    // 0x800A2C14: beq         $t1, $zero, L_800A2C3C
    if (ctx->r9 == 0) {
        // 0x800A2C18: nop
    
            goto L_800A2C3C;
    }
    // 0x800A2C18: nop

    // 0x800A2C1C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800A2C20: jal         0x8007A078
    // 0x800A2C24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8007A078(rdram, ctx);
        goto after_3;
    // 0x800A2C24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x800A2C28: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x800A2C2C: lh          $t2, -0x12C($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X12C);
    // 0x800A2C30: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2C34: addiu       $t7, $t2, 0x1
    ctx->r15 = ADD32(ctx->r10, 0X1);
    // 0x800A2C38: sh          $t7, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r15;
L_800A2C3C:
    // 0x800A2C3C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800A2C40: lw          $t8, 0x5B94($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5B94);
    // 0x800A2C44: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x800A2C48: lbu         $t3, 0xB($t8)
    ctx->r11 = MEM_BU(ctx->r24, 0XB);
    // 0x800A2C4C: nop

    // 0x800A2C50: andi        $t4, $t3, 0xF
    ctx->r12 = ctx->r11 & 0XF;
    // 0x800A2C54: beq         $t4, $at, L_800A2C64
    if (ctx->r12 == ctx->r1) {
        // 0x800A2C58: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_800A2C64;
    }
    // 0x800A2C58: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x800A2C5C: bne         $t4, $at, L_800A2CB0
    if (ctx->r12 != ctx->r1) {
        // 0x800A2C60: nop
    
            goto L_800A2CB0;
    }
    // 0x800A2C60: nop

L_800A2C64:
    // 0x800A2C64: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x800A2C68: lw          $t5, 0x5B94($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5B94);
    // 0x800A2C6C: nop

    // 0x800A2C70: lbu         $t6, 0xB($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XB);
    // 0x800A2C74: nop

    // 0x800A2C78: sra         $t9, $t6, 4
    ctx->r25 = S32(SIGNED(ctx->r14) >> 4);
    // 0x800A2C7C: andi        $t1, $t9, 0xF
    ctx->r9 = ctx->r25 & 0XF;
    // 0x800A2C80: andi        $t0, $t1, 0x4
    ctx->r8 = ctx->r9 & 0X4;
    // 0x800A2C84: beq         $t0, $zero, L_800A2CF8
    if (ctx->r8 == 0) {
        // 0x800A2C88: nop
    
            goto L_800A2CF8;
    }
    // 0x800A2C88: nop

    // 0x800A2C8C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x800A2C90: jal         0x8007A078
    // 0x800A2C94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8007A078(rdram, ctx);
        goto after_4;
    // 0x800A2C94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x800A2C98: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x800A2C9C: lh          $t2, -0x12C($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X12C);
    // 0x800A2CA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2CA4: addiu       $t7, $t2, 0x1
    ctx->r15 = ADD32(ctx->r10, 0X1);
    // 0x800A2CA8: b           L_800A2CF8
    // 0x800A2CAC: sh          $t7, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r15;
        goto L_800A2CF8;
    // 0x800A2CAC: sh          $t7, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r15;
L_800A2CB0:
    // 0x800A2CB0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800A2CB4: lw          $t8, 0x5B94($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5B94);
    // 0x800A2CB8: nop

    // 0x800A2CBC: lbu         $t3, 0xB($t8)
    ctx->r11 = MEM_BU(ctx->r24, 0XB);
    // 0x800A2CC0: nop

    // 0x800A2CC4: sra         $t4, $t3, 4
    ctx->r12 = S32(SIGNED(ctx->r11) >> 4);
    // 0x800A2CC8: andi        $t6, $t4, 0xF
    ctx->r14 = ctx->r12 & 0XF;
    // 0x800A2CCC: andi        $t9, $t6, 0x4
    ctx->r25 = ctx->r14 & 0X4;
    // 0x800A2CD0: beq         $t9, $zero, L_800A2CF8
    if (ctx->r25 == 0) {
        // 0x800A2CD4: nop
    
            goto L_800A2CF8;
    }
    // 0x800A2CD4: nop

    // 0x800A2CD8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800A2CDC: jal         0x8007A078
    // 0x800A2CE0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8007A078(rdram, ctx);
        goto after_5;
    // 0x800A2CE0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x800A2CE4: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x800A2CE8: lh          $t1, -0x12C($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X12C);
    // 0x800A2CEC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2CF0: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x800A2CF4: sh          $t0, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r8;
L_800A2CF8:
    // 0x800A2CF8: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x800A2CFC: lw          $t5, 0x5BF8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5BF8);
    // 0x800A2D00: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x800A2D04: lbu         $t2, 0xB($t5)
    ctx->r10 = MEM_BU(ctx->r13, 0XB);
    // 0x800A2D08: nop

    // 0x800A2D0C: andi        $t7, $t2, 0xF
    ctx->r15 = ctx->r10 & 0XF;
    // 0x800A2D10: beq         $t7, $at, L_800A2D20
    if (ctx->r15 == ctx->r1) {
        // 0x800A2D14: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_800A2D20;
    }
    // 0x800A2D14: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x800A2D18: bne         $t7, $at, L_800A2D6C
    if (ctx->r15 != ctx->r1) {
        // 0x800A2D1C: nop
    
            goto L_800A2D6C;
    }
    // 0x800A2D1C: nop

L_800A2D20:
    // 0x800A2D20: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800A2D24: lw          $t3, 0x5BF8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5BF8);
    // 0x800A2D28: nop

    // 0x800A2D2C: lbu         $t4, 0xB($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XB);
    // 0x800A2D30: nop

    // 0x800A2D34: sra         $t6, $t4, 4
    ctx->r14 = S32(SIGNED(ctx->r12) >> 4);
    // 0x800A2D38: andi        $t9, $t6, 0xF
    ctx->r25 = ctx->r14 & 0XF;
    // 0x800A2D3C: andi        $t8, $t9, 0x8
    ctx->r24 = ctx->r25 & 0X8;
    // 0x800A2D40: beq         $t8, $zero, L_800A2DB4
    if (ctx->r24 == 0) {
        // 0x800A2D44: nop
    
            goto L_800A2DB4;
    }
    // 0x800A2D44: nop

    // 0x800A2D48: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x800A2D4C: jal         0x8007A078
    // 0x800A2D50: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8007A078(rdram, ctx);
        goto after_6;
    // 0x800A2D50: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x800A2D54: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x800A2D58: lh          $t1, -0x12C($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X12C);
    // 0x800A2D5C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2D60: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x800A2D64: b           L_800A2DB4
    // 0x800A2D68: sh          $t0, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r8;
        goto L_800A2DB4;
    // 0x800A2D68: sh          $t0, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r8;
L_800A2D6C:
    // 0x800A2D6C: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x800A2D70: lw          $t5, 0x5BF8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5BF8);
    // 0x800A2D74: nop

    // 0x800A2D78: lbu         $t2, 0xB($t5)
    ctx->r10 = MEM_BU(ctx->r13, 0XB);
    // 0x800A2D7C: nop

    // 0x800A2D80: sra         $t7, $t2, 4
    ctx->r15 = S32(SIGNED(ctx->r10) >> 4);
    // 0x800A2D84: andi        $t4, $t7, 0xF
    ctx->r12 = ctx->r15 & 0XF;
    // 0x800A2D88: andi        $t6, $t4, 0x8
    ctx->r14 = ctx->r12 & 0X8;
    // 0x800A2D8C: beq         $t6, $zero, L_800A2DB4
    if (ctx->r14 == 0) {
        // 0x800A2D90: nop
    
            goto L_800A2DB4;
    }
    // 0x800A2D90: nop

    // 0x800A2D94: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x800A2D98: jal         0x8007A078
    // 0x800A2D9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8007A078(rdram, ctx);
        goto after_7;
    // 0x800A2D9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x800A2DA0: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800A2DA4: lh          $t9, -0x12C($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X12C);
    // 0x800A2DA8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2DAC: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x800A2DB0: sh          $t8, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r24;
L_800A2DB4:
    // 0x800A2DB4: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800A2DB8: lh          $t3, -0x12C($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X12C);
    // 0x800A2DBC: nop

    // 0x800A2DC0: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x800A2DC4: beq         $at, $zero, L_800A2DE0
    if (ctx->r1 == 0) {
        // 0x800A2DC8: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_800A2DE0;
    }
    // 0x800A2DC8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2DCC: sb          $zero, 0x3D34($at)
    MEM_B(0X3D34, ctx->r1) = 0;
    // 0x800A2DD0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2DD4: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x800A2DD8: b           L_800A2E1C
    // 0x800A2DDC: sh          $t1, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r9;
        goto L_800A2E1C;
    // 0x800A2DDC: sh          $t1, -0x12C($at)
    MEM_H(-0X12C, ctx->r1) = ctx->r9;
L_800A2DE0:
    // 0x800A2DE0: addiu       $t0, $zero, 0xFE
    ctx->r8 = ADD32(0, 0XFE);
    // 0x800A2DE4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2DE8: jal         0x800A2E2C
    // 0x800A2DEC: sb          $t0, 0x5B21($at)
    MEM_B(0X5B21, ctx->r1) = ctx->r8;
    func_800A2E2C(rdram, ctx);
        goto after_8;
    // 0x800A2DEC: sb          $t0, 0x5B21($at)
    MEM_B(0X5B21, ctx->r1) = ctx->r8;
    after_8:
    // 0x800A2DF0: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x800A2DF4: lbu         $t2, 0x5AC0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X5AC0);
    // 0x800A2DF8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A2DFC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800A2E00: lbu         $t7, 0x5CE4($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X5CE4);
    // 0x800A2E04: sb          $t2, -0x1114($at)
    MEM_B(-0X1114, ctx->r1) = ctx->r10;
    // 0x800A2E08: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800A2E0C: sb          $t7, -0x1513($at)
    MEM_B(-0X1513, ctx->r1) = ctx->r15;
    // 0x800A2E10: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2E14: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800A2E18: sb          $t4, 0x3CF0($at)
    MEM_B(0X3CF0, ctx->r1) = ctx->r12;
L_800A2E1C:
    // 0x800A2E1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A2E20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A2E24: jr          $ra
    // 0x800A2E28: nop

    return;
    // 0x800A2E28: nop

;}
RECOMP_FUNC void func_800A2E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2E2C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2E30: addiu       $t6, $zero, 0xFE
    ctx->r14 = ADD32(0, 0XFE);
    // 0x800A2E34: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800A2E38: sb          $t6, 0x5B21($at)
    MEM_B(0X5B21, ctx->r1) = ctx->r14;
    // 0x800A2E3C: sb          $t7, 0x5B20($at)
    MEM_B(0X5B20, ctx->r1) = ctx->r15;
    // 0x800A2E40: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2E44: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800A2E48: sb          $t8, 0x5B84($at)
    MEM_B(0X5B84, ctx->r1) = ctx->r24;
    // 0x800A2E4C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2E50: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800A2E54: sb          $t9, 0x5BE8($at)
    MEM_B(0X5BE8, ctx->r1) = ctx->r25;
    // 0x800A2E58: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2E5C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800A2E60: sb          $t0, 0x5C4C($at)
    MEM_B(0X5C4C, ctx->r1) = ctx->r8;
    // 0x800A2E64: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2E68: sb          $zero, 0x5B25($at)
    MEM_B(0X5B25, ctx->r1) = 0;
    // 0x800A2E6C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2E70: sb          $zero, 0x5B89($at)
    MEM_B(0X5B89, ctx->r1) = 0;
    // 0x800A2E74: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2E78: sb          $zero, 0x5BED($at)
    MEM_B(0X5BED, ctx->r1) = 0;
    // 0x800A2E7C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2E80: sb          $zero, 0x5C51($at)
    MEM_B(0X5C51, ctx->r1) = 0;
    // 0x800A2E84: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2E88: sb          $zero, 0x5B26($at)
    MEM_B(0X5B26, ctx->r1) = 0;
    // 0x800A2E8C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2E90: sb          $zero, 0x5B8A($at)
    MEM_B(0X5B8A, ctx->r1) = 0;
    // 0x800A2E94: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2E98: sb          $zero, 0x5BEE($at)
    MEM_B(0X5BEE, ctx->r1) = 0;
    // 0x800A2E9C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2EA0: sb          $zero, 0x5C52($at)
    MEM_B(0X5C52, ctx->r1) = 0;
    // 0x800A2EA4: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x800A2EA8: addiu       $t1, $t1, 0x2D80
    ctx->r9 = ADD32(ctx->r9, 0X2D80);
    // 0x800A2EAC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2EB0: sw          $t1, 0x5ACC($at)
    MEM_W(0X5ACC, ctx->r1) = ctx->r9;
    // 0x800A2EB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2EB8: sw          $t1, 0x5B30($at)
    MEM_W(0X5B30, ctx->r1) = ctx->r9;
    // 0x800A2EBC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2EC0: sw          $t1, 0x5B94($at)
    MEM_W(0X5B94, ctx->r1) = ctx->r9;
    // 0x800A2EC4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2EC8: sw          $t1, 0x5BF8($at)
    MEM_W(0X5BF8, ctx->r1) = ctx->r9;
    // 0x800A2ECC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2ED0: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x800A2ED4: sb          $t2, 0x2DA3($at)
    MEM_B(0X2DA3, ctx->r1) = ctx->r10;
    // 0x800A2ED8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2EDC: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x800A2EE0: sb          $t3, 0x2D8B($at)
    MEM_B(0X2D8B, ctx->r1) = ctx->r11;
    // 0x800A2EE4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2EE8: jr          $ra
    // 0x800A2EEC: sb          $zero, 0x3DD8($at)
    MEM_B(0X3DD8, ctx->r1) = 0;
    return;
    // 0x800A2EEC: sb          $zero, 0x3DD8($at)
    MEM_B(0X3DD8, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800A2EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2EF0: cvt.w.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = CVT_W_S(ctx->f12.fl);
    // 0x800A2EF4: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x800A2EF8: jr          $ra
    // 0x800A2EFC: nop

    return;
    // 0x800A2EFC: nop

;}
RECOMP_FUNC void func_800A2F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2F00: beq         $a2, $zero, L_800A2F20
    if (ctx->r6 == 0) {
        // 0x800A2F04: add         $t0, $a2, $a0
        ctx->r8 = ADD32(ctx->r6, ctx->r4);
            goto L_800A2F20;
    }
    // 0x800A2F04: add         $t0, $a2, $a0
    ctx->r8 = ADD32(ctx->r6, ctx->r4);
L_800A2F08:
    // 0x800A2F08: lb          $t1, 0x0($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X0);
    // 0x800A2F0C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800A2F10: sll         $t1, $t1, 8
    ctx->r9 = S32(ctx->r9 << 8);
    // 0x800A2F14: sh          $t1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r9;
    // 0x800A2F18: bne         $a0, $t0, L_800A2F08
    if (ctx->r4 != ctx->r8) {
        // 0x800A2F1C: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_800A2F08;
    }
    // 0x800A2F1C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
L_800A2F20:
    // 0x800A2F20: add         $v0, $zero, $a1
    ctx->r2 = ADD32(0, ctx->r5);
    // 0x800A2F24: jr          $ra
    // 0x800A2F28: nop

    return;
    // 0x800A2F28: nop

    // 0x800A2F2C: nop

;}
RECOMP_FUNC void func_800A2F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2F30: addiu       $t0, $a1, 0x80
    ctx->r8 = ADD32(ctx->r5, 0X80);
L_800A2F34:
    // 0x800A2F34: lh          $t1, 0x0($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X0);
    // 0x800A2F38: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x800A2F3C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x800A2F40: bne         $a1, $t0, L_800A2F34
    if (ctx->r5 != ctx->r8) {
        // 0x800A2F44: sh          $t1, -0x2($a0)
        MEM_H(-0X2, ctx->r4) = ctx->r9;
            goto L_800A2F34;
    }
    // 0x800A2F44: sh          $t1, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r9;
    // 0x800A2F48: jr          $ra
    // 0x800A2F4C: nop

    return;
    // 0x800A2F4C: nop

;}
RECOMP_FUNC void func_800A2F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2F50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800A2F54: addiu       $t0, $a1, 0x80
    ctx->r8 = ADD32(ctx->r5, 0X80);
L_800A2F58:
    // 0x800A2F58: lb          $t2, 0x0($a0)
    ctx->r10 = MEM_B(ctx->r4, 0X0);
L_800A2F5C:
    // 0x800A2F5C: lb          $t1, 0x0($a1)
    ctx->r9 = MEM_B(ctx->r5, 0X0);
    // 0x800A2F60: addi        $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800A2F64: beq         $t1, $t2, L_800A2FA0
    if (ctx->r9 == ctx->r10) {
        // 0x800A2F68: addi        $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_800A2FA0;
    }
    // 0x800A2F68: addi        $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800A2F6C: slt         $t3, $t1, $t2
    ctx->r11 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800A2F70: bne         $t3, $zero, L_800A2F8C
    if (ctx->r11 != 0) {
        // 0x800A2F74: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800A2F8C;
    }
    // 0x800A2F74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800A2F78: addi        $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x800A2F7C: bnel        $a1, $t0, L_800A2F58
    if (ctx->r5 != ctx->r8) {
        // 0x800A2F80: sb          $t1, -0x1($a1)
        MEM_B(-0X1, ctx->r5) = ctx->r9;
            goto L_800A2F58;
    }
    goto skip_0;
    // 0x800A2F80: sb          $t1, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r9;
    skip_0:
    // 0x800A2F84: jr          $ra
    // 0x800A2F88: sb          $t1, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r9;
    return;
    // 0x800A2F88: sb          $t1, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r9;
L_800A2F8C:
    // 0x800A2F8C: addi        $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800A2F90: bnel        $a1, $t0, L_800A2F58
    if (ctx->r5 != ctx->r8) {
        // 0x800A2F94: sb          $t1, -0x1($a1)
        MEM_B(-0X1, ctx->r5) = ctx->r9;
            goto L_800A2F58;
    }
    goto skip_1;
    // 0x800A2F94: sb          $t1, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r9;
    skip_1:
    // 0x800A2F98: jr          $ra
    // 0x800A2F9C: sb          $t1, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r9;
    return;
    // 0x800A2F9C: sb          $t1, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r9;
L_800A2FA0:
    // 0x800A2FA0: bnel        $a1, $t0, L_800A2F5C
    if (ctx->r5 != ctx->r8) {
        // 0x800A2FA4: lb          $t2, 0x0($a0)
        ctx->r10 = MEM_B(ctx->r4, 0X0);
            goto L_800A2F5C;
    }
    goto skip_2;
    // 0x800A2FA4: lb          $t2, 0x0($a0)
    ctx->r10 = MEM_B(ctx->r4, 0X0);
    skip_2:
    // 0x800A2FA8: jr          $ra
    // 0x800A2FAC: nop

    return;
    // 0x800A2FAC: nop

;}
RECOMP_FUNC void func_800A2FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2FB0: addi        $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A2FB4: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x800A2FB8: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
    // 0x800A2FBC: sw          $s2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r18;
    // 0x800A2FC0: sw          $s3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r19;
    // 0x800A2FC4: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x800A2FC8: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x800A2FCC: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x800A2FD0: sw          $s7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r23;
    // 0x800A2FD4: lw          $s0, 0x38($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X38);
    // 0x800A2FD8: lw          $s1, 0x3C($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X3C);
    // 0x800A2FDC: lw          $s2, 0x40($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X40);
    // 0x800A2FE0: lw          $s3, 0x44($a0)
    ctx->r19 = MEM_W(ctx->r4, 0X44);
    // 0x800A2FE4: lw          $s4, 0x48($a0)
    ctx->r20 = MEM_W(ctx->r4, 0X48);
    // 0x800A2FE8: lw          $s5, 0x4C($a0)
    ctx->r21 = MEM_W(ctx->r4, 0X4C);
    // 0x800A2FEC: lw          $s6, 0x50($a0)
    ctx->r22 = MEM_W(ctx->r4, 0X50);
    // 0x800A2FF0: lw          $s7, 0x54($a0)
    ctx->r23 = MEM_W(ctx->r4, 0X54);
    // 0x800A2FF4: lw          $a3, 0x18($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X18);
    // 0x800A2FF8: sub         $s4, $s4, $s0
    ctx->r20 = SUB32(ctx->r20, ctx->r16);
    // 0x800A2FFC: sub         $s5, $s5, $s1
    ctx->r21 = SUB32(ctx->r21, ctx->r17);
    // 0x800A3000: sub         $s6, $s6, $s2
    ctx->r22 = SUB32(ctx->r22, ctx->r18);
    // 0x800A3004: sub         $s7, $s7, $s3
    ctx->r23 = SUB32(ctx->r23, ctx->r19);
    // 0x800A3008: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x800A300C: lw          $a2, 0x14($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X14);
    // 0x800A3010: sra         $s4, $s4, 3
    ctx->r20 = S32(SIGNED(ctx->r20) >> 3);
    // 0x800A3014: sra         $s5, $s5, 3
    ctx->r21 = S32(SIGNED(ctx->r21) >> 3);
    // 0x800A3018: sra         $s6, $s6, 3
    ctx->r22 = S32(SIGNED(ctx->r22) >> 3);
    // 0x800A301C: sra         $s7, $s7, 3
    ctx->r23 = S32(SIGNED(ctx->r23) >> 3);
    // 0x800A3020: addiu       $t0, $a3, 0x40
    ctx->r8 = ADD32(ctx->r7, 0X40);
L_800A3024:
    // 0x800A3024: sub         $t4, $s2, $s0
    ctx->r12 = SUB32(ctx->r18, ctx->r16);
    // 0x800A3028: sub         $t5, $s3, $s1
    ctx->r13 = SUB32(ctx->r19, ctx->r17);
    // 0x800A302C: addiu       $t1, $a3, 0x8
    ctx->r9 = ADD32(ctx->r7, 0X8);
    // 0x800A3030: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
    // 0x800A3034: or          $t3, $s1, $zero
    ctx->r11 = ctx->r17 | 0;
    // 0x800A3038: sra         $t4, $t4, 3
    ctx->r12 = S32(SIGNED(ctx->r12) >> 3);
    // 0x800A303C: sra         $t5, $t5, 3
    ctx->r13 = S32(SIGNED(ctx->r13) >> 3);
L_800A3040:
    // 0x800A3040: lb          $t8, 0x1($a2)
    ctx->r24 = MEM_B(ctx->r6, 0X1);
    // 0x800A3044: lb          $t9, 0x0($a2)
    ctx->r25 = MEM_B(ctx->r6, 0X0);
    // 0x800A3048: sra         $t6, $t2, 16
    ctx->r14 = S32(SIGNED(ctx->r10) >> 16);
    // 0x800A304C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A3050: add         $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x800A3054: sra         $t7, $t3, 16
    ctx->r15 = S32(SIGNED(ctx->r11) >> 16);
    // 0x800A3058: sra         $t8, $t6, 8
    ctx->r24 = S32(SIGNED(ctx->r14) >> 8);
    // 0x800A305C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800A3060: bne         $t8, $zero, L_800A3094
    if (ctx->r24 != 0) {
        // 0x800A3064: add         $t7, $t7, $t9
        ctx->r15 = ADD32(ctx->r15, ctx->r25);
            goto L_800A3094;
    }
    // 0x800A3064: add         $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x800A3068: sra         $t9, $t7, 8
    ctx->r25 = S32(SIGNED(ctx->r15) >> 8);
    // 0x800A306C: bne         $t9, $zero, L_800A3094
    if (ctx->r25 != 0) {
        // 0x800A3070: nop
    
            goto L_800A3094;
    }
    // 0x800A3070: nop

    // 0x800A3074: sra         $t6, $t6, 1
    ctx->r14 = S32(SIGNED(ctx->r14) >> 1);
    // 0x800A3078: sra         $t7, $t7, 1
    ctx->r15 = S32(SIGNED(ctx->r15) >> 1);
    // 0x800A307C: sll         $t6, $t6, 7
    ctx->r14 = S32(ctx->r14 << 7);
    // 0x800A3080: or          $t6, $t6, $t7
    ctx->r14 = ctx->r14 | ctx->r15;
    // 0x800A3084: add         $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x800A3088: lb          $t9, 0x0($t6)
    ctx->r25 = MEM_B(ctx->r14, 0X0);
    // 0x800A308C: b           L_800A3098
    // 0x800A3090: sb          $t9, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r25;
        goto L_800A3098;
    // 0x800A3090: sb          $t9, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r25;
L_800A3094:
    // 0x800A3094: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
L_800A3098:
    // 0x800A3098: add         $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800A309C: add         $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x800A30A0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800A30A4: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x800A30A8: bnel        $t1, $a3, L_800A3040
    if (ctx->r9 != ctx->r7) {
        // 0x800A30AC: nop
    
            goto L_800A3040;
    }
    goto skip_0;
    // 0x800A30AC: nop

    skip_0:
    // 0x800A30B0: add         $s0, $s0, $s4
    ctx->r16 = ADD32(ctx->r16, ctx->r20);
    // 0x800A30B4: add         $s1, $s1, $s5
    ctx->r17 = ADD32(ctx->r17, ctx->r21);
    // 0x800A30B8: add         $s2, $s2, $s6
    ctx->r18 = ADD32(ctx->r18, ctx->r22);
    // 0x800A30BC: add         $s3, $s3, $s7
    ctx->r19 = ADD32(ctx->r19, ctx->r23);
    // 0x800A30C0: bnel        $t0, $a3, L_800A3024
    if (ctx->r8 != ctx->r7) {
        // 0x800A30C4: nop
    
            goto L_800A3024;
    }
    goto skip_1;
    // 0x800A30C4: nop

    skip_1:
    // 0x800A30C8: lw          $s7, 0x1C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1C);
    // 0x800A30CC: lw          $s6, 0x18($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X18);
    // 0x800A30D0: lw          $s5, 0x14($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X14);
    // 0x800A30D4: lw          $s4, 0x10($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X10);
    // 0x800A30D8: lw          $s3, 0xC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC);
    // 0x800A30DC: lw          $s2, 0x8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X8);
    // 0x800A30E0: lw          $s1, 0x4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4);
    // 0x800A30E4: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
    // 0x800A30E8: jr          $ra
    // 0x800A30EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800A30EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800A30F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A30F0: addi        $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A30F4: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x800A30F8: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
    // 0x800A30FC: sw          $s2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r18;
    // 0x800A3100: sw          $s3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r19;
    // 0x800A3104: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x800A3108: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x800A310C: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x800A3110: sw          $s7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r23;
    // 0x800A3114: lw          $s0, 0x38($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X38);
    // 0x800A3118: lw          $s4, 0x48($a0)
    ctx->r20 = MEM_W(ctx->r4, 0X48);
    // 0x800A311C: lw          $t0, 0x34($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X34);
    // 0x800A3120: lw          $s1, 0x3C($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X3C);
    // 0x800A3124: sub         $s4, $s4, $s0
    ctx->r20 = SUB32(ctx->r20, ctx->r16);
    // 0x800A3128: mult        $s4, $t0
    result = S64(S32(ctx->r20)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A312C: lw          $s5, 0x4C($a0)
    ctx->r21 = MEM_W(ctx->r4, 0X4C);
    // 0x800A3130: lw          $s2, 0x40($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X40);
    // 0x800A3134: lw          $s6, 0x50($a0)
    ctx->r22 = MEM_W(ctx->r4, 0X50);
    // 0x800A3138: sub         $s5, $s5, $s1
    ctx->r21 = SUB32(ctx->r21, ctx->r17);
    // 0x800A313C: lw          $s3, 0x44($a0)
    ctx->r19 = MEM_W(ctx->r4, 0X44);
    // 0x800A3140: sub         $s6, $s6, $s2
    ctx->r22 = SUB32(ctx->r22, ctx->r18);
    // 0x800A3144: lw          $s7, 0x54($a0)
    ctx->r23 = MEM_W(ctx->r4, 0X54);
    // 0x800A3148: lw          $a1, 0x1C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X1C);
    // 0x800A314C: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x800A3150: mfhi        $s4
    ctx->r20 = hi;
    // 0x800A3154: sub         $s7, $s7, $s3
    ctx->r23 = SUB32(ctx->r23, ctx->r19);
    // 0x800A3158: lw          $a3, 0x14($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X14);
    // 0x800A315C: mult        $s5, $t0
    result = S64(S32(ctx->r21)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A3160: mfhi        $s5
    ctx->r21 = hi;
    // 0x800A3164: nop

    // 0x800A3168: nop

    // 0x800A316C: mult        $s6, $t0
    result = S64(S32(ctx->r22)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A3170: mfhi        $s6
    ctx->r22 = hi;
    // 0x800A3174: nop

    // 0x800A3178: nop

    // 0x800A317C: mult        $s7, $t0
    result = S64(S32(ctx->r23)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A3180: lw          $t0, 0x2C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X2C);
    // 0x800A3184: add         $t0, $t0, $a1
    ctx->r8 = ADD32(ctx->r8, ctx->r5);
    // 0x800A3188: mfhi        $s7
    ctx->r23 = hi;
    // 0x800A318C: nop

    // 0x800A3190: nop

L_800A3194:
    // 0x800A3194: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x800A3198: sub         $t4, $s2, $s0
    ctx->r12 = SUB32(ctx->r18, ctx->r16);
    // 0x800A319C: sub         $t5, $s3, $s1
    ctx->r13 = SUB32(ctx->r19, ctx->r17);
    // 0x800A31A0: mult        $t4, $v0
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A31A4: lw          $t1, 0x20($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X20);
    // 0x800A31A8: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
    // 0x800A31AC: or          $t3, $s1, $zero
    ctx->r11 = ctx->r17 | 0;
    // 0x800A31B0: add         $t1, $t1, $a1
    ctx->r9 = ADD32(ctx->r9, ctx->r5);
    // 0x800A31B4: mfhi        $t4
    ctx->r12 = hi;
    // 0x800A31B8: nop

    // 0x800A31BC: nop

    // 0x800A31C0: mult        $t5, $v0
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A31C4: mfhi        $t5
    ctx->r13 = hi;
    // 0x800A31C8: nop

    // 0x800A31CC: nop

L_800A31D0:
    // 0x800A31D0: lb          $t8, 0x1($a3)
    ctx->r24 = MEM_B(ctx->r7, 0X1);
    // 0x800A31D4: sra         $t6, $t2, 16
    ctx->r14 = S32(SIGNED(ctx->r10) >> 16);
    // 0x800A31D8: lb          $t9, 0x0($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X0);
    // 0x800A31DC: add         $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x800A31E0: sra         $t7, $t3, 16
    ctx->r15 = S32(SIGNED(ctx->r11) >> 16);
    // 0x800A31E4: sra         $at, $t6, 8
    ctx->r1 = S32(SIGNED(ctx->r14) >> 8);
    // 0x800A31E8: bne         $at, $zero, L_800A321C
    if (ctx->r1 != 0) {
        // 0x800A31EC: add         $t7, $t7, $t9
        ctx->r15 = ADD32(ctx->r15, ctx->r25);
            goto L_800A321C;
    }
    // 0x800A31EC: add         $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x800A31F0: sra         $at, $t7, 8
    ctx->r1 = S32(SIGNED(ctx->r15) >> 8);
    // 0x800A31F4: bne         $at, $zero, L_800A321C
    if (ctx->r1 != 0) {
        // 0x800A31F8: nop
    
            goto L_800A321C;
    }
    // 0x800A31F8: nop

    // 0x800A31FC: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x800A3200: srl         $t6, $t6, 1
    ctx->r14 = S32(U32(ctx->r14) >> 1);
    // 0x800A3204: srl         $t7, $t7, 1
    ctx->r15 = S32(U32(ctx->r15) >> 1);
    // 0x800A3208: sll         $t6, $t6, 7
    ctx->r14 = S32(ctx->r14 << 7);
    // 0x800A320C: or          $t6, $t6, $t7
    ctx->r14 = ctx->r14 | ctx->r15;
    // 0x800A3210: add         $t6, $t6, $at
    ctx->r14 = ADD32(ctx->r14, ctx->r1);
    // 0x800A3214: b           L_800A3224
    // 0x800A3218: lbu         $t9, 0x0($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X0);
        goto L_800A3224;
    // 0x800A3218: lbu         $t9, 0x0($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X0);
L_800A321C:
    // 0x800A321C: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x800A3220: lbu         $t9, 0x0($at)
    ctx->r25 = MEM_BU(ctx->r1, 0X0);
L_800A3224:
    // 0x800A3224: lbu         $t8, 0x0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X0);
    // 0x800A3228: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x800A322C: sll         $t9, $t9, 8
    ctx->r25 = S32(ctx->r25 << 8);
    // 0x800A3230: or          $t9, $t9, $t8
    ctx->r25 = ctx->r25 | ctx->r24;
    // 0x800A3234: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x800A3238: add         $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x800A323C: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x800A3240: add         $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800A3244: add         $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x800A3248: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800A324C: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x800A3250: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x800A3254: sh          $t8, -0x2($a2)
    MEM_H(-0X2, ctx->r6) = ctx->r24;
    // 0x800A3258: bnel        $t1, $a1, L_800A31D0
    if (ctx->r9 != ctx->r5) {
        // 0x800A325C: nop
    
            goto L_800A31D0;
    }
    goto skip_0;
    // 0x800A325C: nop

    skip_0:
    // 0x800A3260: add         $s0, $s0, $s4
    ctx->r16 = ADD32(ctx->r16, ctx->r20);
    // 0x800A3264: add         $s1, $s1, $s5
    ctx->r17 = ADD32(ctx->r17, ctx->r21);
    // 0x800A3268: add         $s2, $s2, $s6
    ctx->r18 = ADD32(ctx->r18, ctx->r22);
    // 0x800A326C: add         $s3, $s3, $s7
    ctx->r19 = ADD32(ctx->r19, ctx->r23);
    // 0x800A3270: bnel        $t0, $a1, L_800A3194
    if (ctx->r8 != ctx->r5) {
        // 0x800A3274: nop
    
            goto L_800A3194;
    }
    goto skip_1;
    // 0x800A3274: nop

    skip_1:
    // 0x800A3278: lw          $s7, 0x1C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1C);
    // 0x800A327C: lw          $s6, 0x18($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X18);
    // 0x800A3280: lw          $s5, 0x14($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X14);
    // 0x800A3284: lw          $s4, 0x10($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X10);
    // 0x800A3288: lw          $s3, 0xC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC);
    // 0x800A328C: lw          $s2, 0x8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X8);
    // 0x800A3290: lw          $s1, 0x4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4);
    // 0x800A3294: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
    // 0x800A3298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A329C: jr          $ra
    // 0x800A32A0: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    return;
    // 0x800A32A0: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    // 0x800A32A4: nop

    // 0x800A32A8: nop

    // 0x800A32AC: nop

;}
RECOMP_FUNC void game_SetWatchLo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void game_ClearWatchLo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_800A3300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3300: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x800A3304: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x800A3308: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    // 0x800A330C: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x800A3310: subu        $t7, $v1, $t6
    ctx->r15 = SUB32(ctx->r3, ctx->r14);
    // 0x800A3314: addiu       $t8, $t7, 0x12C
    ctx->r24 = ADD32(ctx->r15, 0X12C);
    // 0x800A3318: div         $zero, $t8, $a2
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r6)));
    // 0x800A331C: mfhi        $v0
    ctx->r2 = hi;
    // 0x800A3320: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x800A3324: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800A3328: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x800A332C: bne         $a2, $zero, L_800A3338
    if (ctx->r6 != 0) {
        // 0x800A3330: nop
    
            goto L_800A3338;
    }
    // 0x800A3330: nop

    // 0x800A3334: break       7
    do_break(2148152116);
L_800A3338:
    // 0x800A3338: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A333C: bne         $a2, $at, L_800A3350
    if (ctx->r6 != ctx->r1) {
        // 0x800A3340: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800A3350;
    }
    // 0x800A3340: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800A3344: bne         $t8, $at, L_800A3350
    if (ctx->r24 != ctx->r1) {
        // 0x800A3348: nop
    
            goto L_800A3350;
    }
    // 0x800A3348: nop

    // 0x800A334C: break       6
    do_break(2148152140);
L_800A3350:
    // 0x800A3350: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800A3354: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A3358: ldc1        $f4, 0x908($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X908);
    // 0x800A335C: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x800A3360: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x800A3364: nop

    // 0x800A3368: bc1f        L_800A337C
    if (!c1cs) {
        // 0x800A336C: nop
    
            goto L_800A337C;
    }
    // 0x800A336C: nop

    // 0x800A3370: slti        $at, $v0, 0x12B
    ctx->r1 = SIGNED(ctx->r2) < 0X12B ? 1 : 0;
    // 0x800A3374: beq         $at, $zero, L_800A33DC
    if (ctx->r1 == 0) {
        // 0x800A3378: nop
    
            goto L_800A33DC;
    }
    // 0x800A3378: nop

L_800A337C:
    // 0x800A337C: div         $zero, $t4, $a2
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r6)));
    // 0x800A3380: lw          $t2, 0x8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8);
    // 0x800A3384: mfhi        $t5
    ctx->r13 = hi;
    // 0x800A3388: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x800A338C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800A3390: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
    // 0x800A3394: sh          $t5, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r13;
    // 0x800A3398: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x800A339C: sll         $t1, $v1, 3
    ctx->r9 = S32(ctx->r3 << 3);
    // 0x800A33A0: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x800A33A4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800A33A8: lb          $t7, 0x2($a1)
    ctx->r15 = MEM_B(ctx->r5, 0X2);
    // 0x800A33AC: bne         $a2, $zero, L_800A33B8
    if (ctx->r6 != 0) {
        // 0x800A33B0: nop
    
            goto L_800A33B8;
    }
    // 0x800A33B0: nop

    // 0x800A33B4: break       7
    do_break(2148152244);
L_800A33B8:
    // 0x800A33B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A33BC: bne         $a2, $at, L_800A33D0
    if (ctx->r6 != ctx->r1) {
        // 0x800A33C0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800A33D0;
    }
    // 0x800A33C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800A33C4: bne         $t4, $at, L_800A33D0
    if (ctx->r12 != ctx->r1) {
        // 0x800A33C8: nop
    
            goto L_800A33D0;
    }
    // 0x800A33C8: nop

    // 0x800A33CC: break       6
    do_break(2148152268);
L_800A33D0:
    // 0x800A33D0: sh          $t7, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r15;
    // 0x800A33D4: lb          $t8, 0x3($a1)
    ctx->r24 = MEM_B(ctx->r5, 0X3);
    // 0x800A33D8: sh          $t8, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r24;
L_800A33DC:
    // 0x800A33DC: jr          $ra
    // 0x800A33E0: nop

    return;
    // 0x800A33E0: nop

;}
RECOMP_FUNC void func_800A33E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A33E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A33E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A33EC: jal         0x800A3534
    // 0x800A33F0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_800A3534(rdram, ctx);
        goto after_0;
    // 0x800A33F0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x800A33F4: blez        $v0, L_800A3450
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800A33F8: lw          $a2, 0x30($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X30);
            goto L_800A3450;
    }
    // 0x800A33F8: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x800A33FC: lh          $v1, 0x2($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X2);
    // 0x800A3400: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
    // 0x800A3404: lw          $t7, 0xC($a2)
    ctx->r15 = MEM_W(ctx->r6, 0XC);
    // 0x800A3408: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x800A340C: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x800A3410: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x800A3414: mfhi        $t0
    ctx->r8 = hi;
    // 0x800A3418: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x800A341C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800A3420: sw          $t8, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r24;
    // 0x800A3424: sh          $t0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r8;
    // 0x800A3428: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800A342C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x800A3430: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800A3434: sh          $t1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r9;
    // 0x800A3438: lh          $t2, 0x4($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X4);
    // 0x800A343C: sb          $t2, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r10;
    // 0x800A3440: lh          $t3, 0x6($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X6);
    // 0x800A3444: sb          $t3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r11;
    // 0x800A3448: jal         0x800B1770
    // 0x800A344C: lw          $a0, 0x14($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X14);
    func_800B1770(rdram, ctx);
        goto after_1;
    // 0x800A344C: lw          $a0, 0x14($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X14);
    after_1:
L_800A3450:
    // 0x800A3450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A3454: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800A3458: jr          $ra
    // 0x800A345C: nop

    return;
    // 0x800A345C: nop

;}
RECOMP_FUNC void func_800A3460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3460: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A3464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A3468: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800A346C: sh          $zero, 0x2($a0)
    MEM_H(0X2, ctx->r4) = 0;
    // 0x800A3470: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x800A3474: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x800A3478: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x800A347C: lh          $a1, 0x4($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X4);
    // 0x800A3480: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x800A3484: jal         0x800B7450
    // 0x800A3488: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    _bzero(rdram, ctx);
        goto after_0;
    // 0x800A3488: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x800A348C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800A3490: jal         0x800B1A7C
    // 0x800A3494: lw          $a0, 0x14($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X14);
    func_800B1A7C(rdram, ctx);
        goto after_1;
    // 0x800A3494: lw          $a0, 0x14($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X14);
    after_1:
    // 0x800A3498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A349C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A34A0: jr          $ra
    // 0x800A34A4: nop

    return;
    // 0x800A34A4: nop

;}
RECOMP_FUNC void func_800A34A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A34A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A34AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A34B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A34B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800A34B8: jal         0x800B7450
    // 0x800A34BC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    _bzero(rdram, ctx);
        goto after_0;
    // 0x800A34BC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_0:
    // 0x800A34C0: jal         0x8007E03C
    // 0x800A34C4: addiu       $a0, $zero, 0x960
    ctx->r4 = ADD32(0, 0X960);
    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x800A34C4: addiu       $a0, $zero, 0x960
    ctx->r4 = ADD32(0, 0X960);
    after_1:
    // 0x800A34C8: beq         $v0, $zero, L_800A3518
    if (ctx->r2 == 0) {
        // 0x800A34CC: sw          $v0, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->r2;
            goto L_800A3518;
    }
    // 0x800A34CC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x800A34D0: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x800A34D4: sh          $t6, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r14;
    // 0x800A34D8: lh          $a1, 0x4($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X4);
    // 0x800A34DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800A34E0: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x800A34E4: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x800A34E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A34EC: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x800A34F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A34F4: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x800A34F8: jal         0x800B7450
    // 0x800A34FC: sll         $a1, $t7, 2
    ctx->r5 = S32(ctx->r15 << 2);
    _bzero(rdram, ctx);
        goto after_2;
    // 0x800A34FC: sll         $a1, $t7, 2
    ctx->r5 = S32(ctx->r15 << 2);
    after_2:
    // 0x800A3500: jal         0x8007E03C
    // 0x800A3504: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    func_8007E03C(rdram, ctx);
        goto after_3;
    // 0x800A3504: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    after_3:
    // 0x800A3508: beq         $v0, $zero, L_800A3518
    if (ctx->r2 == 0) {
        // 0x800A350C: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_800A3518;
    }
    // 0x800A350C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x800A3510: jal         0x800B1A7C
    // 0x800A3514: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B1A7C(rdram, ctx);
        goto after_4;
    // 0x800A3514: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
L_800A3518:
    // 0x800A3518: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A351C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A3520: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A3524: jr          $ra
    // 0x800A3528: nop

    return;
    // 0x800A3528: nop

;}
RECOMP_FUNC void func_800A352C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A352C: jr          $ra
    // 0x800A3530: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    return;
    // 0x800A3530: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
;}
RECOMP_FUNC void func_800A3534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3534: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x800A3538: lw          $t7, 0xC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC);
    // 0x800A353C: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    // 0x800A3540: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x800A3544: jr          $ra
    // 0x800A3548: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    return;
    // 0x800A3548: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800A354C: nop

;}
RECOMP_FUNC void func_800A3550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A3554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A3558: jal         0x800B6550
    // 0x800A355C: nop

    osGetTime_recomp(rdram, ctx);
        goto after_0;
    // 0x800A355C: nop

    after_0:
    // 0x800A3560: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x800A3564: ori         $at, $at, 0x86A1
    ctx->r1 = ctx->r1 | 0X86A1;
    // 0x800A3568: divu        $zero, $v1, $at
    lo = S32(U32(ctx->r3) / U32(ctx->r1)); hi = S32(U32(ctx->r3) % U32(ctx->r1));
    // 0x800A356C: mflo        $t8
    ctx->r24 = lo;
    // 0x800A3570: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800A3574: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800A3578: addiu       $a0, $a0, -0x6CC0
    ctx->r4 = ADD32(ctx->r4, -0X6CC0);
    // 0x800A357C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x800A3580: bgez        $t8, L_800A3598
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800A3584: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800A3598;
    }
    // 0x800A3584: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A3588: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800A358C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A3590: nop

    // 0x800A3594: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_800A3598:
    // 0x800A3598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A359C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800A35A0: swc1        $f6, -0x6CA8($at)
    MEM_W(-0X6CA8, ctx->r1) = ctx->f6.u32l;
    // 0x800A35A4: jr          $ra
    // 0x800A35A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800A35A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800A35AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A35AC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800A35B0: addiu       $v1, $v1, -0x6CC0
    ctx->r3 = ADD32(ctx->r3, -0X6CC0);
    // 0x800A35B4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x800A35B8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x800A35BC: ori         $at, $at, 0x86A1
    ctx->r1 = ctx->r1 | 0X86A1;
    // 0x800A35C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A35C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A35C8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800A35CC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800A35D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A35D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A35D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A35DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A35E0: addu        $v0, $t7, $at
    ctx->r2 = ADD32(ctx->r15, ctx->r1);
    // 0x800A35E4: jr          $ra
    // 0x800A35E8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    return;
    // 0x800A35E8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_800A35EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A35EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A35F0: bne         $a0, $a1, L_800A3600
    if (ctx->r4 != ctx->r5) {
        // 0x800A35F4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800A3600;
    }
    // 0x800A35F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A35F8: b           L_800A3648
    // 0x800A35FC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_800A3648;
    // 0x800A35FC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_800A3600:
    // 0x800A3600: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800A3604: beq         $at, $zero, L_800A3614
    if (ctx->r1 == 0) {
        // 0x800A3608: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_800A3614;
    }
    // 0x800A3608: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800A360C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800A3610: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_800A3614:
    // 0x800A3614: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800A3618: jal         0x800A35AC
    // 0x800A361C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800A35AC(rdram, ctx);
        goto after_0;
    // 0x800A361C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800A3620: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A3624: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800A3628: subu        $t6, $a1, $a0
    ctx->r14 = SUB32(ctx->r5, ctx->r4);
    // 0x800A362C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800A3630: divu        $zero, $v0, $t7
    lo = S32(U32(ctx->r2) / U32(ctx->r15)); hi = S32(U32(ctx->r2) % U32(ctx->r15));
    // 0x800A3634: mfhi        $t8
    ctx->r24 = hi;
    // 0x800A3638: addu        $v0, $t8, $a0
    ctx->r2 = ADD32(ctx->r24, ctx->r4);
    // 0x800A363C: bne         $t7, $zero, L_800A3648
    if (ctx->r15 != 0) {
        // 0x800A3640: nop
    
            goto L_800A3648;
    }
    // 0x800A3640: nop

    // 0x800A3644: break       7
    do_break(2148152900);
L_800A3648:
    // 0x800A3648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A364C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A3650: jr          $ra
    // 0x800A3654: nop

    return;
    // 0x800A3654: nop

;}
RECOMP_FUNC void func_800A3658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3658: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800A365C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A3660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A3664: bgez        $a2, L_800A3674
    if (SIGNED(ctx->r6) >= 0) {
        // 0x800A3668: sra         $a1, $a2, 1
        ctx->r5 = S32(SIGNED(ctx->r6) >> 1);
            goto L_800A3674;
    }
    // 0x800A3668: sra         $a1, $a2, 1
    ctx->r5 = S32(SIGNED(ctx->r6) >> 1);
    // 0x800A366C: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x800A3670: sra         $a1, $at, 1
    ctx->r5 = S32(SIGNED(ctx->r1) >> 1);
L_800A3674:
    // 0x800A3674: jal         0x800A35EC
    // 0x800A3678: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
    func_800A35EC(rdram, ctx);
        goto after_0;
    // 0x800A3678: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
    after_0:
    // 0x800A367C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A3680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A3684: jr          $ra
    // 0x800A3688: nop

    return;
    // 0x800A3688: nop

;}
RECOMP_FUNC void func_800A368C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A368C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A3690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A3694: jal         0x800A35AC
    // 0x800A3698: nop

    func_800A35AC(rdram, ctx);
        goto after_0;
    // 0x800A3698: nop

    after_0:
    // 0x800A369C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x800A36A0: ori         $at, $at, 0x86A1
    ctx->r1 = ctx->r1 | 0X86A1;
    // 0x800A36A4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x800A36A8: mfhi        $t6
    ctx->r14 = hi;
    // 0x800A36AC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800A36B0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800A36B4: addiu       $v1, $v1, -0x6CA8
    ctx->r3 = ADD32(ctx->r3, -0X6CA8);
    // 0x800A36B8: bgez        $t6, L_800A36D0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800A36BC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800A36D0;
    }
    // 0x800A36BC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A36C0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800A36C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A36C8: nop

    // 0x800A36CC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_800A36D0:
    // 0x800A36D0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800A36D4: lwc1        $f10, 0x910($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X910);
    // 0x800A36D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A36DC: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800A36E0: swc1        $f16, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f16.u32l;
    // 0x800A36E4: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800A36E8: jr          $ra
    // 0x800A36EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800A36EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800A36F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A36F0: c.eq.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl == ctx->f14.fl;
    // 0x800A36F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A36F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A36FC: bc1fl       L_800A3710
    if (!c1cs) {
        // 0x800A3700: c.lt.s      $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
            goto L_800A3710;
    }
    goto skip_0;
    // 0x800A3700: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    skip_0:
    // 0x800A3704: b           L_800A3748
    // 0x800A3708: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_800A3748;
    // 0x800A3708: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x800A370C: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
L_800A3710:
    // 0x800A3710: nop

    // 0x800A3714: bc1fl       L_800A372C
    if (!c1cs) {
        // 0x800A3718: swc1        $f12, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
            goto L_800A372C;
    }
    goto skip_1;
    // 0x800A3718: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    skip_1:
    // 0x800A371C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x800A3720: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x800A3724: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x800A3728: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
L_800A372C:
    // 0x800A372C: jal         0x800A368C
    // 0x800A3730: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    func_800A368C(rdram, ctx);
        goto after_0;
    // 0x800A3730: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x800A3734: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800A3738: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800A373C: sub.s       $f4, $f14, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x800A3740: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800A3744: add.s       $f0, $f6, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f12.fl;
L_800A3748:
    // 0x800A3748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A374C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A3750: jr          $ra
    // 0x800A3754: nop

    return;
    // 0x800A3754: nop

;}
RECOMP_FUNC void func_800A3758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3758: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A375C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A3760: jal         0x800B6550
    // 0x800A3764: nop

    osGetTime_recomp(rdram, ctx);
        goto after_0;
    // 0x800A3764: nop

    after_0:
    // 0x800A3768: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x800A376C: ori         $at, $at, 0x86A1
    ctx->r1 = ctx->r1 | 0X86A1;
    // 0x800A3770: divu        $zero, $v1, $at
    lo = S32(U32(ctx->r3) / U32(ctx->r1)); hi = S32(U32(ctx->r3) % U32(ctx->r1));
    // 0x800A3774: mflo        $t8
    ctx->r24 = lo;
    // 0x800A3778: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800A377C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800A3780: addiu       $a1, $a1, -0x6CC0
    ctx->r5 = ADD32(ctx->r5, -0X6CC0);
    // 0x800A3784: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800A3788: addiu       $a2, $a2, -0x6CA8
    ctx->r6 = ADD32(ctx->r6, -0X6CA8);
    // 0x800A378C: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x800A3790: bgez        $t8, L_800A37A8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800A3794: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800A37A8;
    }
    // 0x800A3794: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A3798: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800A379C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A37A0: nop

    // 0x800A37A4: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_800A37A8:
    // 0x800A37A8: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x800A37AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800A37B0:
    // 0x800A37B0: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x800A37B4: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x800A37B8: addu        $t0, $a1, $v0
    ctx->r8 = ADD32(ctx->r5, ctx->r2);
    // 0x800A37BC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800A37C0: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x800A37C4: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x800A37C8: andi        $t2, $a0, 0xFF
    ctx->r10 = ctx->r4 & 0XFF;
    // 0x800A37CC: slti        $at, $t2, 0x5
    ctx->r1 = SIGNED(ctx->r10) < 0X5 ? 1 : 0;
    // 0x800A37D0: addu        $t1, $a2, $v0
    ctx->r9 = ADD32(ctx->r6, ctx->r2);
    // 0x800A37D4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x800A37D8: bne         $at, $zero, L_800A37B0
    if (ctx->r1 != 0) {
        // 0x800A37DC: swc1        $f10, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->f10.u32l;
            goto L_800A37B0;
    }
    // 0x800A37DC: swc1        $f10, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f10.u32l;
    // 0x800A37E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A37E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A37E8: jr          $ra
    // 0x800A37EC: nop

    return;
    // 0x800A37EC: nop

;}
RECOMP_FUNC void func_800A37F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A37F0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800A37F4: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800A37F8: addiu       $t8, $t8, -0x6CC0
    ctx->r24 = ADD32(ctx->r24, -0X6CC0);
    // 0x800A37FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A3800: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x800A3804: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800A3808: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x800A380C: ori         $at, $at, 0x86A1
    ctx->r1 = ctx->r1 | 0X86A1;
    // 0x800A3810: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800A3814: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800A3818: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x800A381C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x800A3820: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800A3824: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800A3828: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800A382C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800A3830: addu        $v0, $t0, $at
    ctx->r2 = ADD32(ctx->r8, ctx->r1);
    // 0x800A3834: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800A3838: jr          $ra
    // 0x800A383C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    return;
    // 0x800A383C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
;}
