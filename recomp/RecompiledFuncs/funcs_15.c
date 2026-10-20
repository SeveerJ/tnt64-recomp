#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80077D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077D88: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80077D8C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80077D90: bne         $t6, $zero, L_80077DA0
    if (ctx->r14 != 0) {
        // 0x80077D94: nop
    
            goto L_80077DA0;
    }
    // 0x80077D94: nop

    // 0x80077D98: b           L_80077E10
    // 0x80077D9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80077E10;
    // 0x80077D9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80077DA0:
    // 0x80077DA0: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x80077DA4: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    // 0x80077DA8: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x80077DAC: nop

    // 0x80077DB0: beq         $t7, $zero, L_80077E08
    if (ctx->r15 == 0) {
        // 0x80077DB4: nop
    
            goto L_80077E08;
    }
    // 0x80077DB4: nop

L_80077DB8:
    // 0x80077DB8: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80077DBC: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80077DC0: addu        $t0, $a1, $t9
    ctx->r8 = ADD32(ctx->r5, ctx->r25);
    // 0x80077DC4: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x80077DC8: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x80077DCC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80077DD0: lbu         $t2, 0x2CD0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X2CD0);
    // 0x80077DD4: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x80077DD8: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80077DDC: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x80077DE0: lh          $t5, 0x4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X4);
    // 0x80077DE4: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x80077DE8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80077DEC: addu        $t6, $t8, $t5
    ctx->r14 = ADD32(ctx->r24, ctx->r13);
    // 0x80077DF0: sw          $t6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r14;
    // 0x80077DF4: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x80077DF8: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80077DFC: nop

    // 0x80077E00: bne         $t2, $zero, L_80077DB8
    if (ctx->r10 != 0) {
        // 0x80077E04: nop
    
            goto L_80077DB8;
    }
    // 0x80077E04: nop

L_80077E08:
    // 0x80077E08: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x80077E0C: nop

L_80077E10:
    // 0x80077E10: jr          $ra
    // 0x80077E14: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80077E14: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80077E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077E18: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80077E1C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80077E20: bne         $t6, $zero, L_80077E30
    if (ctx->r14 != 0) {
        // 0x80077E24: nop
    
            goto L_80077E30;
    }
    // 0x80077E24: nop

    // 0x80077E28: b           L_80077ED8
    // 0x80077E2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80077ED8;
    // 0x80077E2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80077E30:
    // 0x80077E30: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x80077E34: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    // 0x80077E38: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x80077E3C: nop

    // 0x80077E40: beq         $t7, $zero, L_80077ED0
    if (ctx->r15 == 0) {
        // 0x80077E44: nop
    
            goto L_80077ED0;
    }
    // 0x80077E44: nop

L_80077E48:
    // 0x80077E48: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80077E4C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80077E50: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x80077E54: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x80077E58: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80077E5C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80077E60: lbu         $t1, 0x2CD0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X2CD0);
    // 0x80077E64: lh          $t6, 0x2D70($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2D70);
    // 0x80077E68: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80077E6C: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x80077E70: lh          $t4, 0x4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X4);
    // 0x80077E74: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x80077E78: sll         $t5, $t4, 12
    ctx->r13 = S32(ctx->r12 << 12);
    // 0x80077E7C: div         $zero, $t5, $t6
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r14)));
    // 0x80077E80: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x80077E84: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x80077E88: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80077E8C: bne         $t6, $zero, L_80077E98
    if (ctx->r14 != 0) {
        // 0x80077E90: nop
    
            goto L_80077E98;
    }
    // 0x80077E90: nop

    // 0x80077E94: break       7
    do_break(2147974804);
L_80077E98:
    // 0x80077E98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80077E9C: bne         $t6, $at, L_80077EB0
    if (ctx->r14 != ctx->r1) {
        // 0x80077EA0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80077EB0;
    }
    // 0x80077EA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80077EA4: bne         $t5, $at, L_80077EB0
    if (ctx->r13 != ctx->r1) {
        // 0x80077EA8: nop
    
            goto L_80077EB0;
    }
    // 0x80077EA8: nop

    // 0x80077EAC: break       6
    do_break(2147974828);
L_80077EB0:
    // 0x80077EB0: addu        $t3, $a1, $t2
    ctx->r11 = ADD32(ctx->r5, ctx->r10);
    // 0x80077EB4: mflo        $t7
    ctx->r15 = lo;
    // 0x80077EB8: addu        $t0, $t9, $t7
    ctx->r8 = ADD32(ctx->r25, ctx->r15);
    // 0x80077EBC: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
    // 0x80077EC0: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x80077EC4: nop

    // 0x80077EC8: bne         $t4, $zero, L_80077E48
    if (ctx->r12 != 0) {
        // 0x80077ECC: nop
    
            goto L_80077E48;
    }
    // 0x80077ECC: nop

L_80077ED0:
    // 0x80077ED0: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x80077ED4: nop

L_80077ED8:
    // 0x80077ED8: jr          $ra
    // 0x80077EDC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80077EDC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80077EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077EE0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80077EE4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80077EE8: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80077EEC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80077EF0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80077EF4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80077EF8: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80077EFC: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80077F00: nop

    // 0x80077F04: beq         $t7, $zero, L_8007801C
    if (ctx->r15 == 0) {
        // 0x80077F08: nop
    
            goto L_8007801C;
    }
    // 0x80077F08: nop

    // 0x80077F0C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80077F10: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x80077F14: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x80077F18: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x80077F1C: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x80077F20: nop

    // 0x80077F24: beq         $t0, $zero, L_8007801C
    if (ctx->r8 == 0) {
        // 0x80077F28: nop
    
            goto L_8007801C;
    }
    // 0x80077F28: nop

L_80077F2C:
    // 0x80077F2C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80077F30: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80077F34: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80077F38: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80077F3C: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x80077F40: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80077F44: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80077F48: lbu         $t6, 0x2CD0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2CD0);
    // 0x80077F4C: lh          $t7, 0x76($t1)
    ctx->r15 = MEM_H(ctx->r9, 0X76);
    // 0x80077F50: sll         $t0, $t6, 1
    ctx->r8 = S32(ctx->r14 << 1);
    // 0x80077F54: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80077F58: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x80077F5C: lh          $t3, 0x4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X4);
    // 0x80077F60: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x80077F64: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x80077F68: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x80077F6C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80077F70: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x80077F74: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80077F78: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x80077F7C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80077F80: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80077F84: mflo        $t8
    ctx->r24 = lo;
    // 0x80077F88: addu        $a3, $t8, $t9
    ctx->r7 = ADD32(ctx->r24, ctx->r25);
    // 0x80077F8C: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80077F90: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80077F94: addu        $t7, $t8, $t5
    ctx->r15 = ADD32(ctx->r24, ctx->r13);
    // 0x80077F98: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80077F9C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80077FA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80077FA4: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80077FA8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80077FAC: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x80077FB0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80077FB4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80077FB8: jal         0x80059048
    // 0x80077FBC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    func_80059048(rdram, ctx);
        goto after_0;
    // 0x80077FBC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_0:
    // 0x80077FC0: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80077FC4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80077FC8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80077FCC: addu        $t5, $t4, $t8
    ctx->r13 = ADD32(ctx->r12, ctx->r24);
    // 0x80077FD0: lbu         $t7, 0x0($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X0);
    // 0x80077FD4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80077FD8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80077FDC: lbu         $t9, 0x2CD0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X2CD0);
    // 0x80077FE0: addiu       $t5, $t8, 0x1
    ctx->r13 = ADD32(ctx->r24, 0X1);
    // 0x80077FE4: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x80077FE8: addu        $t0, $t1, $t6
    ctx->r8 = ADD32(ctx->r9, ctx->r14);
    // 0x80077FEC: lh          $t2, 0x4($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X4);
    // 0x80077FF0: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80077FF4: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x80077FF8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80077FFC: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80078000: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x80078004: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x80078008: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x8007800C: lbu         $t6, 0x0($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X0);
    // 0x80078010: nop

    // 0x80078014: bne         $t6, $zero, L_80077F2C
    if (ctx->r14 != 0) {
        // 0x80078018: nop
    
            goto L_80077F2C;
    }
    // 0x80078018: nop

L_8007801C:
    // 0x8007801C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80078020: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80078024: jr          $ra
    // 0x80078028: nop

    return;
    // 0x80078028: nop

;}
RECOMP_FUNC void func_8007802C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007802C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80078030: slti        $at, $a1, 0x61
    ctx->r1 = SIGNED(ctx->r5) < 0X61 ? 1 : 0;
    // 0x80078034: bne         $at, $zero, L_80078050
    if (ctx->r1 != 0) {
        // 0x80078038: slti        $at, $a1, 0x7B
        ctx->r1 = SIGNED(ctx->r5) < 0X7B ? 1 : 0;
            goto L_80078050;
    }
    // 0x80078038: slti        $at, $a1, 0x7B
    ctx->r1 = SIGNED(ctx->r5) < 0X7B ? 1 : 0;
    // 0x8007803C: beq         $at, $zero, L_80078050
    if (ctx->r1 == 0) {
        // 0x80078040: nop
    
            goto L_80078050;
    }
    // 0x80078040: nop

    // 0x80078044: addiu       $a1, $a1, -0x20
    ctx->r5 = ADD32(ctx->r5, -0X20);
    // 0x80078048: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8007804C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
L_80078050:
    // 0x80078050: slti        $at, $a1, 0x20
    ctx->r1 = SIGNED(ctx->r5) < 0X20 ? 1 : 0;
    // 0x80078054: bne         $at, $zero, L_80078064
    if (ctx->r1 != 0) {
        // 0x80078058: slti        $at, $a1, 0x60
        ctx->r1 = SIGNED(ctx->r5) < 0X60 ? 1 : 0;
            goto L_80078064;
    }
    // 0x80078058: slti        $at, $a1, 0x60
    ctx->r1 = SIGNED(ctx->r5) < 0X60 ? 1 : 0;
    // 0x8007805C: bne         $at, $zero, L_8007806C
    if (ctx->r1 != 0) {
        // 0x80078060: nop
    
            goto L_8007806C;
    }
    // 0x80078060: nop

L_80078064:
    // 0x80078064: jr          $ra
    // 0x80078068: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80078068: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8007806C:
    // 0x8007806C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80078070: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x80078074: lbu         $t7, 0x2CD0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X2CD0);
    // 0x80078078: nop

    // 0x8007807C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80078080: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x80078084: lh          $v0, 0x4($t9)
    ctx->r2 = MEM_H(ctx->r25, 0X4);
    // 0x80078088: nop

    // 0x8007808C: jr          $ra
    // 0x80078090: nop

    return;
    // 0x80078090: nop

;}
RECOMP_FUNC void func_80078094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078094: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80078098: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8007809C: lbu         $t6, 0x3F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3F);
    // 0x800780A0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800780A4: slti        $at, $t6, 0x61
    ctx->r1 = SIGNED(ctx->r14) < 0X61 ? 1 : 0;
    // 0x800780A8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800780AC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800780B0: bne         $at, $zero, L_800780CC
    if (ctx->r1 != 0) {
        // 0x800780B4: sw          $a3, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r7;
            goto L_800780CC;
    }
    // 0x800780B4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x800780B8: slti        $at, $t6, 0x7B
    ctx->r1 = SIGNED(ctx->r14) < 0X7B ? 1 : 0;
    // 0x800780BC: beq         $at, $zero, L_800780CC
    if (ctx->r1 == 0) {
        // 0x800780C0: nop
    
            goto L_800780CC;
    }
    // 0x800780C0: nop

    // 0x800780C4: addiu       $t7, $t6, -0x20
    ctx->r15 = ADD32(ctx->r14, -0X20);
    // 0x800780C8: sb          $t7, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r15;
L_800780CC:
    // 0x800780CC: lbu         $t8, 0x3F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3F);
    // 0x800780D0: nop

    // 0x800780D4: slti        $at, $t8, 0x20
    ctx->r1 = SIGNED(ctx->r24) < 0X20 ? 1 : 0;
    // 0x800780D8: bne         $at, $zero, L_80078198
    if (ctx->r1 != 0) {
        // 0x800780DC: slti        $at, $t8, 0x60
        ctx->r1 = SIGNED(ctx->r24) < 0X60 ? 1 : 0;
            goto L_80078198;
    }
    // 0x800780DC: slti        $at, $t8, 0x60
    ctx->r1 = SIGNED(ctx->r24) < 0X60 ? 1 : 0;
    // 0x800780E0: beq         $at, $zero, L_80078198
    if (ctx->r1 == 0) {
        // 0x800780E4: nop
    
            goto L_80078198;
    }
    // 0x800780E4: nop

    // 0x800780E8: lbu         $t9, 0x3F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3F);
    // 0x800780EC: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800780F0: addiu       $t0, $t9, -0x20
    ctx->r8 = ADD32(ctx->r25, -0X20);
    // 0x800780F4: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800780F8: sb          $t0, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r8;
    // 0x800780FC: andi        $t2, $t0, 0xFF
    ctx->r10 = ctx->r8 & 0XFF;
    // 0x80078100: addiu       $t3, $t3, 0x2CF0
    ctx->r11 = ADD32(ctx->r11, 0X2CF0);
    // 0x80078104: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80078108: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x8007810C: lh          $t6, 0x76($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X76);
    // 0x80078110: andi        $t7, $t0, 0xFF
    ctx->r15 = ctx->r8 & 0XFF;
    // 0x80078114: multu       $t5, $t6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80078118: addu        $t8, $t7, $t3
    ctx->r24 = ADD32(ctx->r15, ctx->r11);
    // 0x8007811C: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x80078120: andi        $t8, $t0, 0xFF
    ctx->r24 = ctx->r8 & 0XFF;
    // 0x80078124: sll         $t2, $t9, 1
    ctx->r10 = S32(ctx->r25 << 1);
    // 0x80078128: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x8007812C: lh          $t5, 0x4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X4);
    // 0x80078130: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x80078134: addiu       $t7, $t5, -0x1
    ctx->r15 = ADD32(ctx->r13, -0X1);
    // 0x80078138: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8007813C: addu        $t9, $t8, $t3
    ctx->r25 = ADD32(ctx->r24, ctx->r11);
    // 0x80078140: lbu         $t1, 0x0($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X0);
    // 0x80078144: mflo        $a3
    ctx->r7 = lo;
    // 0x80078148: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8007814C: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80078150: multu       $t1, $t6
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80078154: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80078158: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8007815C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80078160: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x80078164: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80078168: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007816C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80078170: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80078174: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80078178: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8007817C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80078180: mflo        $t2
    ctx->r10 = lo;
    // 0x80078184: addu        $t4, $t2, $t6
    ctx->r12 = ADD32(ctx->r10, ctx->r14);
    // 0x80078188: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x8007818C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80078190: jal         0x80059048
    // 0x80078194: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_80059048(rdram, ctx);
        goto after_0;
    // 0x80078194: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_0:
L_80078198:
    // 0x80078198: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8007819C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800781A0: jr          $ra
    // 0x800781A4: nop

    return;
    // 0x800781A4: nop

;}
RECOMP_FUNC void func_800781A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800781A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800781AC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800781B0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800781B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800781B8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800781BC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800781C0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800781C4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800781C8: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800781CC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800781D0: bne         $t7, $zero, L_800781E0
    if (ctx->r15 != 0) {
        // 0x800781D4: nop
    
            goto L_800781E0;
    }
    // 0x800781D4: nop

    // 0x800781D8: b           L_80078230
    // 0x800781DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80078230;
    // 0x800781DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800781E0:
    // 0x800781E0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800781E4: nop

    // 0x800781E8: blez        $t8, L_8007822C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x800781EC: nop
    
            goto L_8007822C;
    }
    // 0x800781EC: nop

L_800781F0:
    // 0x800781F0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800781F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800781F8: lbu         $a1, 0x0($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X0);
    // 0x800781FC: jal         0x8007802C
    // 0x80078200: nop

    func_8007802C(rdram, ctx);
        goto after_0;
    // 0x80078200: nop

    after_0:
    // 0x80078204: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80078208: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8007820C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80078210: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x80078214: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80078218: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8007821C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80078220: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x80078224: bgtz        $t4, L_800781F0
    if (SIGNED(ctx->r12) > 0) {
        // 0x80078228: sw          $t1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r9;
            goto L_800781F0;
    }
    // 0x80078228: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_8007822C:
    // 0x8007822C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80078230:
    // 0x80078230: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80078234: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80078238: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8007823C: jr          $ra
    // 0x80078240: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80078240: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80078244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078244: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80078248: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8007824C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80078250: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80078254: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80078258: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8007825C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80078260: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80078264: blez        $t6, L_800782EC
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80078268: sw          $s0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r16;
            goto L_800782EC;
    }
    // 0x80078268: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
L_8007826C:
    // 0x8007826C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80078270: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80078274: lbu         $s0, 0x0($t7)
    ctx->r16 = MEM_BU(ctx->r15, 0X0);
    // 0x80078278: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x8007827C: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80078280: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x80078284: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x80078288: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8007828C: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x80078290: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x80078294: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80078298: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007829C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800782A0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800782A4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x800782A8: jal         0x80078094
    // 0x800782AC: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    func_80078094(rdram, ctx);
        goto after_0;
    // 0x800782AC: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    after_0:
    // 0x800782B0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800782B4: jal         0x8007802C
    // 0x800782B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8007802C(rdram, ctx);
        goto after_1;
    // 0x800782B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x800782BC: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x800782C0: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x800782C4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800782C8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800782CC: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x800782D0: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x800782D4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800782D8: addu        $t4, $t3, $s1
    ctx->r12 = ADD32(ctx->r11, ctx->r17);
    // 0x800782DC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800782E0: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    // 0x800782E4: bgtz        $t9, L_8007826C
    if (SIGNED(ctx->r25) > 0) {
        // 0x800782E8: sw          $t6, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r14;
            goto L_8007826C;
    }
    // 0x800782E8: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
L_800782EC:
    // 0x800782EC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800782F0: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x800782F4: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x800782F8: jr          $ra
    // 0x800782FC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800782FC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80078300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078300: lhu         $t6, 0xC0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XC0);
    // 0x80078304: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80078308: beq         $t6, $zero, L_80078418
    if (ctx->r14 == 0) {
        // 0x8007830C: nop
    
            goto L_80078418;
    }
    // 0x8007830C: nop

    // 0x80078310: lhu         $t7, 0xC0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XC0);
    // 0x80078314: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x80078318: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x8007831C: mflo        $t8
    ctx->r24 = lo;
    // 0x80078320: beq         $t8, $zero, L_80078418
    if (ctx->r24 == 0) {
        // 0x80078324: nop
    
            goto L_80078418;
    }
    // 0x80078324: nop

    // 0x80078328: lhu         $t9, 0xC0($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XC0);
    // 0x8007832C: nop

    // 0x80078330: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80078334: bgez        $t9, L_8007834C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80078338: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8007834C;
    }
    // 0x80078338: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007833C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80078340: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80078344: nop

    // 0x80078348: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8007834C:
    // 0x8007834C: lui         $at, 0x404E
    ctx->r1 = S32(0X404E << 16);
    // 0x80078350: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80078354: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80078358: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8007835C: nop

    // 0x80078360: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x80078364: lhu         $t0, 0xC2($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0XC2);
    // 0x80078368: nop

    // 0x8007836C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80078370: nop

    // 0x80078374: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80078378: bgez        $t0, L_80078390
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8007837C: cvt.s.d     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
            goto L_80078390;
    }
    // 0x8007837C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80078380: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80078384: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80078388: nop

    // 0x8007838C: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_80078390:
    // 0x80078390: nop

    // 0x80078394: div.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80078398: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x8007839C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800783A0: nop

    // 0x800783A4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800783A8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800783AC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800783B0: nop

    // 0x800783B4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800783B8: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x800783BC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800783C0: sw          $t2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r10;
    // 0x800783C4: nop

L_800783C8:
    // 0x800783C8: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800783CC: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x800783D0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800783D4: lbu         $t5, 0x2DFC($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X2DFC);
    // 0x800783D8: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x800783DC: nop

    // 0x800783E0: slt         $at, $t3, $t5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x800783E4: beq         $at, $zero, L_800783F8
    if (ctx->r1 == 0) {
        // 0x800783E8: nop
    
            goto L_800783F8;
    }
    // 0x800783E8: nop

    // 0x800783EC: lbu         $v0, 0x7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7);
    // 0x800783F0: b           L_8007841C
    // 0x800783F4: nop

        goto L_8007841C;
    // 0x800783F4: nop

L_800783F8:
    // 0x800783F8: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800783FC: nop

    // 0x80078400: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80078404: slti        $at, $t7, 0x1E
    ctx->r1 = SIGNED(ctx->r15) < 0X1E ? 1 : 0;
    // 0x80078408: bne         $at, $zero, L_800783C8
    if (ctx->r1 != 0) {
        // 0x8007840C: sw          $t7, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r15;
            goto L_800783C8;
    }
    // 0x8007840C: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x80078410: b           L_8007841C
    // 0x80078414: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
        goto L_8007841C;
    // 0x80078414: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
L_80078418:
    // 0x80078418: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8007841C:
    // 0x8007841C: jr          $ra
    // 0x80078420: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80078420: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80078424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078424: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x80078428: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007842C: beq         $a0, $zero, L_80078528
    if (ctx->r4 == 0) {
        // 0x80078430: andi        $a1, $a1, 0xFFFF
        ctx->r5 = ctx->r5 & 0XFFFF;
            goto L_80078528;
    }
    // 0x80078430: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x80078434: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x80078438: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x8007843C: mflo        $t6
    ctx->r14 = lo;
    // 0x80078440: beq         $t6, $zero, L_80078528
    if (ctx->r14 == 0) {
        // 0x80078444: nop
    
            goto L_80078528;
    }
    // 0x80078444: nop

    // 0x80078448: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x8007844C: bgez        $a0, L_80078464
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80078450: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80078464;
    }
    // 0x80078450: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80078454: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80078458: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007845C: nop

    // 0x80078460: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80078464:
    // 0x80078464: lui         $at, 0x404E
    ctx->r1 = S32(0X404E << 16);
    // 0x80078468: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8007846C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80078470: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80078474: nop

    // 0x80078478: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x8007847C: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x80078480: nop

    // 0x80078484: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80078488: bgez        $a1, L_800784A0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8007848C: cvt.s.d     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
            goto L_800784A0;
    }
    // 0x8007848C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80078490: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80078494: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80078498: nop

    // 0x8007849C: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_800784A0:
    // 0x800784A0: nop

    // 0x800784A4: div.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x800784A8: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x800784AC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800784B0: nop

    // 0x800784B4: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800784B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800784BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800784C0: nop

    // 0x800784C4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800784C8: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x800784CC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800784D0: sw          $t8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r24;
    // 0x800784D4: nop

L_800784D8:
    // 0x800784D8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800784DC: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x800784E0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800784E4: lbu         $t1, 0x2DFC($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X2DFC);
    // 0x800784E8: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x800784EC: nop

    // 0x800784F0: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800784F4: beq         $at, $zero, L_80078508
    if (ctx->r1 == 0) {
        // 0x800784F8: nop
    
            goto L_80078508;
    }
    // 0x800784F8: nop

    // 0x800784FC: lbu         $v0, 0x7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7);
    // 0x80078500: b           L_8007852C
    // 0x80078504: nop

        goto L_8007852C;
    // 0x80078504: nop

L_80078508:
    // 0x80078508: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8007850C: nop

    // 0x80078510: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80078514: slti        $at, $t3, 0x1E
    ctx->r1 = SIGNED(ctx->r11) < 0X1E ? 1 : 0;
    // 0x80078518: bne         $at, $zero, L_800784D8
    if (ctx->r1 != 0) {
        // 0x8007851C: sw          $t3, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r11;
            goto L_800784D8;
    }
    // 0x8007851C: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
    // 0x80078520: b           L_8007852C
    // 0x80078524: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
        goto L_8007852C;
    // 0x80078524: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
L_80078528:
    // 0x80078528: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8007852C:
    // 0x8007852C: jr          $ra
    // 0x80078530: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80078530: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80078534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078534: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80078538: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007853C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80078540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078544: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80078548: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_8007854C:
    // 0x8007854C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80078550: nop

    // 0x80078554: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x80078558: nop

    // 0x8007855C: beq         $t8, $zero, L_800785AC
    if (ctx->r24 == 0) {
        // 0x80078560: nop
    
            goto L_800785AC;
    }
    // 0x80078560: nop

    // 0x80078564: lbu         $t9, 0xD4($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XD4);
    // 0x80078568: lbu         $t0, 0x27($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X27);
    // 0x8007856C: nop

    // 0x80078570: bne         $t9, $t0, L_800785AC
    if (ctx->r25 != ctx->r8) {
        // 0x80078574: nop
    
            goto L_800785AC;
    }
    // 0x80078574: nop

    // 0x80078578: jal         0x8007AEB0
    // 0x8007857C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8007AEB0(rdram, ctx);
        goto after_0;
    // 0x8007857C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x80078580: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80078584: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80078588: nop

    // 0x8007858C: bne         $t1, $t2, L_800785A0
    if (ctx->r9 != ctx->r10) {
        // 0x80078590: nop
    
            goto L_800785A0;
    }
    // 0x80078590: nop

    // 0x80078594: lw          $t3, 0x10($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X10);
    // 0x80078598: nop

    // 0x8007859C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
L_800785A0:
    // 0x800785A0: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800785A4: nop

    // 0x800785A8: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
L_800785AC:
    // 0x800785AC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800785B0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800785B4: lw          $t6, 0x10($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X10);
    // 0x800785B8: nop

    // 0x800785BC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800785C0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800785C4: nop

    // 0x800785C8: bne         $t8, $t9, L_8007854C
    if (ctx->r24 != ctx->r25) {
        // 0x800785CC: nop
    
            goto L_8007854C;
    }
    // 0x800785CC: nop

    // 0x800785D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800785D4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800785D8: jr          $ra
    // 0x800785DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800785DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800785E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800785E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800785E4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800785E8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800785EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800785F0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_800785F4:
    // 0x800785F4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800785F8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x800785FC: lbu         $t8, 0xB($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XB);
    // 0x80078600: nop

    // 0x80078604: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x80078608: beq         $t9, $at, L_80078658
    if (ctx->r25 == ctx->r1) {
        // 0x8007860C: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_80078658;
    }
    // 0x8007860C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80078610: beq         $t9, $at, L_80078658
    if (ctx->r25 == ctx->r1) {
        // 0x80078614: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_80078658;
    }
    // 0x80078614: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80078618: beq         $t9, $at, L_80078658
    if (ctx->r25 == ctx->r1) {
        // 0x8007861C: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_80078658;
    }
    // 0x8007861C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80078620: beq         $t9, $at, L_80078658
    if (ctx->r25 == ctx->r1) {
        // 0x80078624: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_80078658;
    }
    // 0x80078624: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80078628: beq         $t9, $at, L_80078658
    if (ctx->r25 == ctx->r1) {
        // 0x8007862C: nop
    
            goto L_80078658;
    }
    // 0x8007862C: nop

    // 0x80078630: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80078634: nop

    // 0x80078638: lw          $t1, 0xC($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC);
    // 0x8007863C: nop

    // 0x80078640: lbu         $t2, 0xD0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0XD0);
    // 0x80078644: nop

    // 0x80078648: bne         $t2, $zero, L_80078658
    if (ctx->r10 != 0) {
        // 0x8007864C: nop
    
            goto L_80078658;
    }
    // 0x8007864C: nop

    // 0x80078650: jal         0x8007AEB0
    // 0x80078654: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8007AEB0(rdram, ctx);
        goto after_0;
    // 0x80078654: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_0:
L_80078658:
    // 0x80078658: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8007865C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80078660: lw          $t4, 0x10($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X10);
    // 0x80078664: nop

    // 0x80078668: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8007866C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80078670: nop

    // 0x80078674: bne         $t5, $t6, L_800785F4
    if (ctx->r13 != ctx->r14) {
        // 0x80078678: nop
    
            goto L_800785F4;
    }
    // 0x80078678: nop

    // 0x8007867C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078680: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80078684: jr          $ra
    // 0x80078688: nop

    return;
    // 0x80078688: nop

;}
RECOMP_FUNC void func_8007868C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007868C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80078690: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80078694: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80078698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007869C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x800786A0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_800786A4:
    // 0x800786A4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800786A8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x800786AC: lbu         $t8, 0xB($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XB);
    // 0x800786B0: nop

    // 0x800786B4: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x800786B8: beq         $t9, $at, L_80078700
    if (ctx->r25 == ctx->r1) {
        // 0x800786BC: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_80078700;
    }
    // 0x800786BC: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x800786C0: beq         $t9, $at, L_80078700
    if (ctx->r25 == ctx->r1) {
        // 0x800786C4: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_80078700;
    }
    // 0x800786C4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800786C8: beq         $t9, $at, L_80078700
    if (ctx->r25 == ctx->r1) {
        // 0x800786CC: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_80078700;
    }
    // 0x800786CC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800786D0: beq         $t9, $at, L_80078700
    if (ctx->r25 == ctx->r1) {
        // 0x800786D4: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_80078700;
    }
    // 0x800786D4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x800786D8: beq         $t9, $at, L_80078700
    if (ctx->r25 == ctx->r1) {
        // 0x800786DC: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_80078700;
    }
    // 0x800786DC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800786E0: beq         $t9, $at, L_80078700
    if (ctx->r25 == ctx->r1) {
        // 0x800786E4: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_80078700;
    }
    // 0x800786E4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800786E8: beq         $t9, $at, L_80078700
    if (ctx->r25 == ctx->r1) {
        // 0x800786EC: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80078700;
    }
    // 0x800786EC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800786F0: beq         $t9, $at, L_80078700
    if (ctx->r25 == ctx->r1) {
        // 0x800786F4: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_80078700;
    }
    // 0x800786F4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x800786F8: bne         $t9, $at, L_8007871C
    if (ctx->r25 != ctx->r1) {
        // 0x800786FC: nop
    
            goto L_8007871C;
    }
    // 0x800786FC: nop

L_80078700:
    // 0x80078700: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80078704: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x80078708: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8007870C: bne         $t1, $at, L_80078728
    if (ctx->r9 != ctx->r1) {
        // 0x80078710: sw          $t1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r9;
            goto L_80078728;
    }
    // 0x80078710: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80078714: b           L_8007874C
    // 0x80078718: nop

        goto L_8007874C;
    // 0x80078718: nop

L_8007871C:
    // 0x8007871C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80078720: jal         0x8007AEB0
    // 0x80078724: nop

    func_8007AEB0(rdram, ctx);
        goto after_0;
    // 0x80078724: nop

    after_0:
L_80078728:
    // 0x80078728: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007872C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80078730: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x80078734: nop

    // 0x80078738: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8007873C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80078740: nop

    // 0x80078744: bne         $t4, $t5, L_800786A4
    if (ctx->r12 != ctx->r13) {
        // 0x80078748: nop
    
            goto L_800786A4;
    }
    // 0x80078748: nop

L_8007874C:
    // 0x8007874C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078750: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80078754: jr          $ra
    // 0x80078758: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80078758: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8007875C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    tnt_on_game_result(rdram, ctx);
    // 0x8007875C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80078760: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80078764: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80078768: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007876C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80078770: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80078774: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80078778: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8007877C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80078780: jal         0x80078300
    // 0x80078784: sb          $t7, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r15;
    func_80078300(rdram, ctx);
        goto after_0;
    // 0x80078784: sb          $t7, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r15;
    after_0:
    // 0x80078788: lbu         $t9, 0x4B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X4B);
    // 0x8007878C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80078790: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80078794: sb          $v0, 0x3E($sp)
    MEM_B(0X3E, ctx->r29) = ctx->r2;
    // 0x80078798: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8007879C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x800787A0: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x800787A4: lhu         $t4, 0xC0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0XC0);
    // 0x800787A8: nop

    // 0x800787AC: addu        $t5, $t4, $t2
    ctx->r13 = ADD32(ctx->r12, ctx->r10);
    // 0x800787B0: sh          $t5, 0xC0($t3)
    MEM_H(0XC0, ctx->r11) = ctx->r13;
    // 0x800787B4: lbu         $t7, 0x4B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4B);
    // 0x800787B8: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800787BC: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x800787C0: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800787C4: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x800787C8: lw          $t0, 0x18($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X18);
    // 0x800787CC: lhu         $t4, 0xC2($t1)
    ctx->r12 = MEM_HU(ctx->r9, 0XC2);
    // 0x800787D0: nop

    // 0x800787D4: addu        $t2, $t4, $t0
    ctx->r10 = ADD32(ctx->r12, ctx->r8);
    // 0x800787D8: sh          $t2, 0xC2($t1)
    MEM_H(0XC2, ctx->r9) = ctx->r10;
    // 0x800787DC: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x800787E0: nop

    // 0x800787E4: lhu         $t3, 0xC0($t5)
    ctx->r11 = MEM_HU(ctx->r13, 0XC0);
    // 0x800787E8: nop

    // 0x800787EC: slti        $at, $t3, 0x384
    ctx->r1 = SIGNED(ctx->r11) < 0X384 ? 1 : 0;
    // 0x800787F0: bne         $at, $zero, L_8007882C
    if (ctx->r1 != 0) {
        // 0x800787F4: nop
    
            goto L_8007882C;
    }
    // 0x800787F4: nop

    // 0x800787F8: lhu         $t7, 0xC2($t5)
    ctx->r15 = MEM_HU(ctx->r13, 0XC2);
    // 0x800787FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80078800: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x80078804: mflo        $t6
    ctx->r14 = lo;
    // 0x80078808: sh          $t6, 0xC2($t5)
    MEM_H(0XC2, ctx->r13) = ctx->r14;
    // 0x8007880C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80078810: nop

    // 0x80078814: lhu         $t8, 0xC0($t9)
    ctx->r24 = MEM_HU(ctx->r25, 0XC0);
    // 0x80078818: nop

    // 0x8007881C: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x80078820: mflo        $t4
    ctx->r12 = lo;
    // 0x80078824: sh          $t4, 0xC0($t9)
    MEM_H(0XC0, ctx->r25) = ctx->r12;
    // 0x80078828: nop

L_8007882C:
    // 0x8007882C: lbu         $t2, 0x4B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4B);
    // 0x80078830: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80078834: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80078838: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x8007883C: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x80078840: lw          $t7, 0x28($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X28);
    // 0x80078844: lw          $t5, 0xC8($t6)
    ctx->r13 = MEM_W(ctx->r14, 0XC8);
    // 0x80078848: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007884C: addu        $t8, $t7, $t5
    ctx->r24 = ADD32(ctx->r15, ctx->r13);
    // 0x80078850: sltu        $at, $t8, $at
    ctx->r1 = ctx->r24 < ctx->r1 ? 1 : 0;
    // 0x80078854: beq         $at, $zero, L_80078868
    if (ctx->r1 == 0) {
        // 0x80078858: nop
    
            goto L_80078868;
    }
    // 0x80078858: nop

    // 0x8007885C: addu        $t4, $t5, $t7
    ctx->r12 = ADD32(ctx->r13, ctx->r15);
    // 0x80078860: b           L_80078874
    // 0x80078864: sw          $t4, 0xC8($t6)
    MEM_W(0XC8, ctx->r14) = ctx->r12;
        goto L_80078874;
    // 0x80078864: sw          $t4, 0xC8($t6)
    MEM_W(0XC8, ctx->r14) = ctx->r12;
L_80078868:
    // 0x80078868: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x8007886C: lui         $t9, 0x4000
    ctx->r25 = S32(0X4000 << 16);
    // 0x80078870: sw          $t9, 0xC8($t2)
    MEM_W(0XC8, ctx->r10) = ctx->r25;
L_80078874:
    // 0x80078874: lbu         $t1, 0x4B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4B);
    // 0x80078878: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8007887C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80078880: addu        $t8, $t0, $t3
    ctx->r24 = ADD32(ctx->r8, ctx->r11);
    // 0x80078884: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80078888: lw          $t5, 0x18($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X18);
    // 0x8007888C: lw          $t7, 0x28($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X28);
    // 0x80078890: lw          $t9, 0xCC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XCC);
    // 0x80078894: subu        $t4, $t5, $t7
    ctx->r12 = SUB32(ctx->r13, ctx->r15);
    // 0x80078898: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007889C: addu        $t2, $t4, $t9
    ctx->r10 = ADD32(ctx->r12, ctx->r25);
    // 0x800788A0: sltu        $at, $t2, $at
    ctx->r1 = ctx->r10 < ctx->r1 ? 1 : 0;
    // 0x800788A4: beq         $at, $zero, L_800788B8
    if (ctx->r1 == 0) {
        // 0x800788A8: nop
    
            goto L_800788B8;
    }
    // 0x800788A8: nop

    // 0x800788AC: addu        $t1, $t9, $t4
    ctx->r9 = ADD32(ctx->r25, ctx->r12);
    // 0x800788B0: b           L_800788C4
    // 0x800788B4: sw          $t1, 0xCC($t6)
    MEM_W(0XCC, ctx->r14) = ctx->r9;
        goto L_800788C4;
    // 0x800788B4: sw          $t1, 0xCC($t6)
    MEM_W(0XCC, ctx->r14) = ctx->r9;
L_800788B8:
    // 0x800788B8: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x800788BC: lui         $t0, 0x4000
    ctx->r8 = S32(0X4000 << 16);
    // 0x800788C0: sw          $t0, 0xCC($t3)
    MEM_W(0XCC, ctx->r11) = ctx->r8;
L_800788C4:
    // 0x800788C4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800788C8: lbu         $s0, -0x1114($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X1114);
    // 0x800788CC: nop

    // 0x800788D0: beq         $s0, $zero, L_800788F0
    if (ctx->r16 == 0) {
        // 0x800788D4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800788F0;
    }
    // 0x800788D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800788D8: beq         $s0, $at, L_80078CC8
    if (ctx->r16 == ctx->r1) {
        // 0x800788DC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80078CC8;
    }
    // 0x800788DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800788E0: beq         $s0, $at, L_800790F0
    if (ctx->r16 == ctx->r1) {
        // 0x800788E4: nop
    
            goto L_800790F0;
    }
    // 0x800788E4: nop

    // 0x800788E8: b           L_800794EC
    // 0x800788EC: nop

        goto L_800794EC;
    // 0x800788EC: nop

L_800788F0:
    // 0x800788F0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_800788F4:
    // 0x800788F4: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800788F8: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x800788FC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80078900: lbu         $t0, 0x4B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4B);
    // 0x80078904: addu        $t2, $t8, $t7
    ctx->r10 = ADD32(ctx->r24, ctx->r15);
    // 0x80078908: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8007890C: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x80078910: lw          $t9, 0xC($t2)
    ctx->r25 = MEM_W(ctx->r10, 0XC);
    // 0x80078914: lw          $t4, 0x20($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X20);
    // 0x80078918: addu        $t8, $t6, $t3
    ctx->r24 = ADD32(ctx->r14, ctx->r11);
    // 0x8007891C: lw          $t7, 0x18($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X18);
    // 0x80078920: addu        $t1, $t9, $t4
    ctx->r9 = ADD32(ctx->r25, ctx->r12);
    // 0x80078924: sltu        $at, $t1, $t7
    ctx->r1 = ctx->r9 < ctx->r15 ? 1 : 0;
    // 0x80078928: beq         $at, $zero, L_80078A30
    if (ctx->r1 == 0) {
        // 0x8007892C: nop
    
            goto L_80078A30;
    }
    // 0x8007892C: nop

    // 0x80078930: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80078934: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x80078938: beq         $at, $zero, L_800789AC
    if (ctx->r1 == 0) {
        // 0x8007893C: sw          $t2, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r10;
            goto L_800789AC;
    }
    // 0x8007893C: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_80078940:
    // 0x80078940: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80078944: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80078948: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x8007894C: addu        $t6, $t9, $t0
    ctx->r14 = ADD32(ctx->r25, ctx->r8);
    // 0x80078950: lw          $t3, 0xC($t6)
    ctx->r11 = MEM_W(ctx->r14, 0XC);
    // 0x80078954: nop

    // 0x80078958: sw          $t3, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r11;
    // 0x8007895C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80078960: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80078964: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x80078968: addu        $t2, $t8, $t7
    ctx->r10 = ADD32(ctx->r24, ctx->r15);
    // 0x8007896C: lw          $t5, 0x20($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X20);
    // 0x80078970: nop

    // 0x80078974: sw          $t5, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->r13;
    // 0x80078978: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8007897C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80078980: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80078984: addu        $t3, $t4, $t0
    ctx->r11 = ADD32(ctx->r12, ctx->r8);
    // 0x80078988: lw          $t6, 0x34($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X34);
    // 0x8007898C: nop

    // 0x80078990: sw          $t6, 0x38($t3)
    MEM_W(0X38, ctx->r11) = ctx->r14;
    // 0x80078994: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80078998: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8007899C: addiu       $t8, $t1, -0x1
    ctx->r24 = ADD32(ctx->r9, -0X1);
    // 0x800789A0: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800789A4: beq         $at, $zero, L_80078940
    if (ctx->r1 == 0) {
        // 0x800789A8: sw          $t8, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r24;
            goto L_80078940;
    }
    // 0x800789A8: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_800789AC:
    // 0x800789AC: lbu         $t2, 0x4B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4B);
    // 0x800789B0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800789B4: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800789B8: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x800789BC: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800789C0: addu        $t4, $t5, $t9
    ctx->r12 = ADD32(ctx->r13, ctx->r25);
    // 0x800789C4: lw          $t0, 0x28($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X28);
    // 0x800789C8: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x800789CC: addu        $t8, $t6, $t1
    ctx->r24 = ADD32(ctx->r14, ctx->r9);
    // 0x800789D0: sw          $t0, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r8;
    // 0x800789D4: lbu         $t2, 0x4B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4B);
    // 0x800789D8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800789DC: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800789E0: addu        $t9, $t7, $t5
    ctx->r25 = ADD32(ctx->r15, ctx->r13);
    // 0x800789E4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800789E8: lw          $t4, 0x18($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X18);
    // 0x800789EC: lw          $t3, 0x28($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X28);
    // 0x800789F0: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x800789F4: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x800789F8: subu        $t6, $t4, $t3
    ctx->r14 = SUB32(ctx->r12, ctx->r11);
    // 0x800789FC: addu        $t2, $t1, $t8
    ctx->r10 = ADD32(ctx->r9, ctx->r24);
    // 0x80078A00: sw          $t6, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->r14;
    // 0x80078A04: lbu         $t5, 0x4B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X4B);
    // 0x80078A08: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80078A0C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80078A10: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x80078A14: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80078A18: addu        $t4, $t7, $t9
    ctx->r12 = ADD32(ctx->r15, ctx->r25);
    // 0x80078A1C: lw          $t3, 0x8($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X8);
    // 0x80078A20: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x80078A24: addu        $t6, $t0, $t8
    ctx->r14 = ADD32(ctx->r8, ctx->r24);
    // 0x80078A28: b           L_80078A48
    // 0x80078A2C: sw          $t3, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->r11;
        goto L_80078A48;
    // 0x80078A2C: sw          $t3, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->r11;
L_80078A30:
    // 0x80078A30: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80078A34: nop

    // 0x80078A38: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x80078A3C: slti        $at, $t5, 0x5
    ctx->r1 = SIGNED(ctx->r13) < 0X5 ? 1 : 0;
    // 0x80078A40: bne         $at, $zero, L_800788F4
    if (ctx->r1 != 0) {
        // 0x80078A44: sw          $t5, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r13;
            goto L_800788F4;
    }
    // 0x80078A44: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
L_80078A48:
    // 0x80078A48: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_80078A4C:
    // 0x80078A4C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80078A50: lbu         $t3, 0x4B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4B);
    // 0x80078A54: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80078A58: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x80078A5C: lw          $t7, -0x310($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X310);
    // 0x80078A60: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80078A64: subu        $t4, $t4, $t9
    ctx->r12 = SUB32(ctx->r12, ctx->r25);
    // 0x80078A68: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80078A6C: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x80078A70: addu        $t1, $t7, $t4
    ctx->r9 = ADD32(ctx->r15, ctx->r12);
    // 0x80078A74: addu        $t2, $t8, $t6
    ctx->r10 = ADD32(ctx->r24, ctx->r14);
    // 0x80078A78: lw          $t5, 0x18($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X18);
    // 0x80078A7C: lw          $t0, 0xF18($t1)
    ctx->r8 = MEM_W(ctx->r9, 0XF18);
    // 0x80078A80: nop

    // 0x80078A84: sltu        $at, $t0, $t5
    ctx->r1 = ctx->r8 < ctx->r13 ? 1 : 0;
    // 0x80078A88: beq         $at, $zero, L_80078CA8
    if (ctx->r1 == 0) {
        // 0x80078A8C: nop
    
            goto L_80078CA8;
    }
    // 0x80078A8C: nop

    // 0x80078A90: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80078A94: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x80078A98: beq         $at, $zero, L_80078BA8
    if (ctx->r1 == 0) {
        // 0x80078A9C: sw          $t7, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r15;
            goto L_80078BA8;
    }
    // 0x80078A9C: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_80078AA0:
    // 0x80078AA0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80078AA4: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80078AA8: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80078AAC: lw          $t4, -0x310($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X310);
    // 0x80078AB0: subu        $t3, $t3, $t1
    ctx->r11 = SUB32(ctx->r11, ctx->r9);
    // 0x80078AB4: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80078AB8: addu        $t8, $t4, $t3
    ctx->r24 = ADD32(ctx->r12, ctx->r11);
    // 0x80078ABC: addiu       $t6, $t8, 0xF0C
    ctx->r14 = ADD32(ctx->r24, 0XF0C);
    // 0x80078AC0: addiu       $t2, $t8, 0xF24
    ctx->r10 = ADD32(ctx->r24, 0XF24);
    // 0x80078AC4: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80078AC8: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x80078ACC: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_80078AD0:
    // 0x80078AD0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80078AD4: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80078AD8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80078ADC: addu        $t7, $t0, $t5
    ctx->r15 = ADD32(ctx->r8, ctx->r13);
    // 0x80078AE0: lbu         $t9, 0x0($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X0);
    // 0x80078AE4: addu        $t4, $t1, $t5
    ctx->r12 = ADD32(ctx->r9, ctx->r13);
    // 0x80078AE8: sb          $t9, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r25;
    // 0x80078AEC: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80078AF0: nop

    // 0x80078AF4: addiu       $t6, $t3, 0x1
    ctx->r14 = ADD32(ctx->r11, 0X1);
    // 0x80078AF8: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x80078AFC: bne         $at, $zero, L_80078AD0
    if (ctx->r1 != 0) {
        // 0x80078B00: sw          $t6, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r14;
            goto L_80078AD0;
    }
    // 0x80078B00: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80078B04: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80078B08: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80078B0C: nop

    // 0x80078B10: addu        $t0, $t8, $t2
    ctx->r8 = ADD32(ctx->r24, ctx->r10);
    // 0x80078B14: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    // 0x80078B18: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80078B1C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80078B20: lbu         $t1, 0xA($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0XA);
    // 0x80078B24: nop

    // 0x80078B28: sb          $t1, 0xA($t5)
    MEM_B(0XA, ctx->r13) = ctx->r9;
    // 0x80078B2C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80078B30: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80078B34: lbu         $t4, 0xB($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0XB);
    // 0x80078B38: nop

    // 0x80078B3C: sb          $t4, 0xB($t3)
    MEM_B(0XB, ctx->r11) = ctx->r12;
    // 0x80078B40: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80078B44: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80078B48: lw          $t8, 0xC($t6)
    ctx->r24 = MEM_W(ctx->r14, 0XC);
    // 0x80078B4C: nop

    // 0x80078B50: sw          $t8, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r24;
    // 0x80078B54: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80078B58: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80078B5C: lw          $t7, 0x10($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X10);
    // 0x80078B60: nop

    // 0x80078B64: sw          $t7, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r15;
    // 0x80078B68: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80078B6C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80078B70: lhu         $t9, 0x14($t5)
    ctx->r25 = MEM_HU(ctx->r13, 0X14);
    // 0x80078B74: nop

    // 0x80078B78: sh          $t9, 0x14($t4)
    MEM_H(0X14, ctx->r12) = ctx->r25;
    // 0x80078B7C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80078B80: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80078B84: lhu         $t6, 0x16($t3)
    ctx->r14 = MEM_HU(ctx->r11, 0X16);
    // 0x80078B88: nop

    // 0x80078B8C: sh          $t6, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r14;
    // 0x80078B90: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80078B94: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80078B98: addiu       $t0, $t2, -0x1
    ctx->r8 = ADD32(ctx->r10, -0X1);
    // 0x80078B9C: slt         $at, $t0, $t7
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80078BA0: beq         $at, $zero, L_80078AA0
    if (ctx->r1 == 0) {
        // 0x80078BA4: sw          $t0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r8;
            goto L_80078AA0;
    }
    // 0x80078BA4: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_80078BA8:
    // 0x80078BA8: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80078BAC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80078BB0: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x80078BB4: lw          $t1, -0x310($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X310);
    // 0x80078BB8: subu        $t9, $t9, $t5
    ctx->r25 = SUB32(ctx->r25, ctx->r13);
    // 0x80078BBC: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80078BC0: addu        $t4, $t1, $t9
    ctx->r12 = ADD32(ctx->r9, ctx->r25);
    // 0x80078BC4: addiu       $t3, $t4, 0xF0C
    ctx->r11 = ADD32(ctx->r12, 0XF0C);
    // 0x80078BC8: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80078BCC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_80078BD0:
    // 0x80078BD0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80078BD4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80078BD8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80078BDC: addu        $t2, $t6, $t8
    ctx->r10 = ADD32(ctx->r14, ctx->r24);
    // 0x80078BE0: lbu         $t0, 0x0($t2)
    ctx->r8 = MEM_BU(ctx->r10, 0X0);
    // 0x80078BE4: addu        $t5, $t7, $t8
    ctx->r13 = ADD32(ctx->r15, ctx->r24);
    // 0x80078BE8: sb          $t0, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r8;
    // 0x80078BEC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80078BF0: nop

    // 0x80078BF4: addiu       $t9, $t1, 0x1
    ctx->r25 = ADD32(ctx->r9, 0X1);
    // 0x80078BF8: slti        $at, $t9, 0x8
    ctx->r1 = SIGNED(ctx->r25) < 0X8 ? 1 : 0;
    // 0x80078BFC: bne         $at, $zero, L_80078BD0
    if (ctx->r1 != 0) {
        // 0x80078C00: sw          $t9, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r25;
            goto L_80078BD0;
    }
    // 0x80078C00: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80078C04: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80078C08: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80078C0C: nop

    // 0x80078C10: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x80078C14: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x80078C18: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80078C1C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80078C20: lbu         $t7, 0x9($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X9);
    // 0x80078C24: nop

    // 0x80078C28: sb          $t7, 0xA($t8)
    MEM_B(0XA, ctx->r24) = ctx->r15;
    // 0x80078C2C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80078C30: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80078C34: lbu         $t5, 0xA($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0XA);
    // 0x80078C38: nop

    // 0x80078C3C: sb          $t5, 0xB($t1)
    MEM_B(0XB, ctx->r9) = ctx->r13;
    // 0x80078C40: lbu         $t4, 0x4B($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X4B);
    // 0x80078C44: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80078C48: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80078C4C: addu        $t6, $t9, $t3
    ctx->r14 = ADD32(ctx->r25, ctx->r11);
    // 0x80078C50: lw          $t2, 0x18($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X18);
    // 0x80078C54: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80078C58: nop

    // 0x80078C5C: sw          $t2, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r10;
    // 0x80078C60: lbu         $t0, 0x4B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4B);
    // 0x80078C64: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80078C68: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x80078C6C: addu        $t1, $t8, $t5
    ctx->r9 = ADD32(ctx->r24, ctx->r13);
    // 0x80078C70: lw          $t4, 0x8($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X8);
    // 0x80078C74: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80078C78: nop

    // 0x80078C7C: sw          $t4, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r12;
    // 0x80078C80: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80078C84: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80078C88: lhu         $t6, 0xC0($t3)
    ctx->r14 = MEM_HU(ctx->r11, 0XC0);
    // 0x80078C8C: nop

    // 0x80078C90: sh          $t6, 0x14($t2)
    MEM_H(0X14, ctx->r10) = ctx->r14;
    // 0x80078C94: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80078C98: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80078C9C: lhu         $t0, 0xC2($t7)
    ctx->r8 = MEM_HU(ctx->r15, 0XC2);
    // 0x80078CA0: b           L_800794EC
    // 0x80078CA4: sh          $t0, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r8;
        goto L_800794EC;
    // 0x80078CA4: sh          $t0, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r8;
L_80078CA8:
    // 0x80078CA8: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80078CAC: nop

    // 0x80078CB0: addiu       $t1, $t5, 0x1
    ctx->r9 = ADD32(ctx->r13, 0X1);
    // 0x80078CB4: slti        $at, $t1, 0x5
    ctx->r1 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
    // 0x80078CB8: bne         $at, $zero, L_80078A4C
    if (ctx->r1 != 0) {
        // 0x80078CBC: sw          $t1, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r9;
            goto L_80078A4C;
    }
    // 0x80078CBC: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x80078CC0: b           L_800794EC
    // 0x80078CC4: nop

        goto L_800794EC;
    // 0x80078CC4: nop

L_80078CC8:
    // 0x80078CC8: lbu         $t9, 0x4B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X4B);
    // 0x80078CCC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80078CD0: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80078CD4: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x80078CD8: lw          $t2, 0x8($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X8);
    // 0x80078CDC: nop

    // 0x80078CE0: sltiu       $at, $t2, 0xB3
    ctx->r1 = ctx->r10 < 0XB3 ? 1 : 0;
    // 0x80078CE4: bne         $at, $zero, L_80078CF4
    if (ctx->r1 != 0) {
        // 0x80078CE8: nop
    
            goto L_80078CF4;
    }
    // 0x80078CE8: nop

    // 0x80078CEC: addiu       $t7, $zero, 0xB4
    ctx->r15 = ADD32(0, 0XB4);
    // 0x80078CF0: sw          $t7, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r15;
L_80078CF4:
    // 0x80078CF4: lbu         $t8, 0x4B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4B);
    // 0x80078CF8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80078CFC: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x80078D00: addu        $t1, $t0, $t5
    ctx->r9 = ADD32(ctx->r8, ctx->r13);
    // 0x80078D04: lw          $t9, 0x8($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X8);
    // 0x80078D08: nop

    // 0x80078D0C: sltiu       $at, $t9, 0xB4
    ctx->r1 = ctx->r25 < 0XB4 ? 1 : 0;
    // 0x80078D10: bne         $at, $zero, L_800794EC
    if (ctx->r1 != 0) {
        // 0x80078D14: nop
    
            goto L_800794EC;
    }
    // 0x80078D14: nop

    // 0x80078D18: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_80078D1C:
    // 0x80078D1C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80078D20: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80078D24: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80078D28: lbu         $t1, 0x4B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4B);
    // 0x80078D2C: addu        $t7, $t4, $t2
    ctx->r15 = ADD32(ctx->r12, ctx->r10);
    // 0x80078D30: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80078D34: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80078D38: lw          $t6, 0x84($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X84);
    // 0x80078D3C: lw          $t8, 0x98($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X98);
    // 0x80078D40: addu        $t4, $t5, $t9
    ctx->r12 = ADD32(ctx->r13, ctx->r25);
    // 0x80078D44: lw          $t2, 0x18($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X18);
    // 0x80078D48: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x80078D4C: sltu        $at, $t0, $t2
    ctx->r1 = ctx->r8 < ctx->r10 ? 1 : 0;
    // 0x80078D50: beq         $at, $zero, L_80078E58
    if (ctx->r1 == 0) {
        // 0x80078D54: nop
    
            goto L_80078E58;
    }
    // 0x80078D54: nop

    // 0x80078D58: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80078D5C: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x80078D60: beq         $at, $zero, L_80078DD4
    if (ctx->r1 == 0) {
        // 0x80078D64: sw          $t7, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r15;
            goto L_80078DD4;
    }
    // 0x80078D64: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_80078D68:
    // 0x80078D68: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80078D6C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80078D70: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80078D74: addu        $t5, $t6, $t1
    ctx->r13 = ADD32(ctx->r14, ctx->r9);
    // 0x80078D78: lw          $t9, 0x84($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X84);
    // 0x80078D7C: nop

    // 0x80078D80: sw          $t9, 0x88($t5)
    MEM_W(0X88, ctx->r13) = ctx->r25;
    // 0x80078D84: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80078D88: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80078D8C: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80078D90: addu        $t7, $t4, $t2
    ctx->r15 = ADD32(ctx->r12, ctx->r10);
    // 0x80078D94: lw          $t3, 0x98($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X98);
    // 0x80078D98: nop

    // 0x80078D9C: sw          $t3, 0x9C($t7)
    MEM_W(0X9C, ctx->r15) = ctx->r11;
    // 0x80078DA0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80078DA4: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80078DA8: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80078DAC: addu        $t9, $t8, $t1
    ctx->r25 = ADD32(ctx->r24, ctx->r9);
    // 0x80078DB0: lw          $t5, 0xAC($t9)
    ctx->r13 = MEM_W(ctx->r25, 0XAC);
    // 0x80078DB4: nop

    // 0x80078DB8: sw          $t5, 0xB0($t9)
    MEM_W(0XB0, ctx->r25) = ctx->r13;
    // 0x80078DBC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80078DC0: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80078DC4: addiu       $t4, $t0, -0x1
    ctx->r12 = ADD32(ctx->r8, -0X1);
    // 0x80078DC8: slt         $at, $t4, $t2
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80078DCC: beq         $at, $zero, L_80078D68
    if (ctx->r1 == 0) {
        // 0x80078DD0: sw          $t4, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r12;
            goto L_80078D68;
    }
    // 0x80078DD0: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
L_80078DD4:
    // 0x80078DD4: lbu         $t7, 0x4B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4B);
    // 0x80078DD8: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80078DDC: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80078DE0: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80078DE4: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80078DE8: addu        $t8, $t3, $t6
    ctx->r24 = ADD32(ctx->r11, ctx->r14);
    // 0x80078DEC: lw          $t1, 0x28($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X28);
    // 0x80078DF0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80078DF4: addu        $t4, $t5, $t0
    ctx->r12 = ADD32(ctx->r13, ctx->r8);
    // 0x80078DF8: sw          $t1, 0x84($t4)
    MEM_W(0X84, ctx->r12) = ctx->r9;
    // 0x80078DFC: lbu         $t7, 0x4B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4B);
    // 0x80078E00: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80078E04: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x80078E08: addu        $t6, $t2, $t3
    ctx->r14 = ADD32(ctx->r10, ctx->r11);
    // 0x80078E0C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80078E10: lw          $t8, 0x18($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X18);
    // 0x80078E14: lw          $t9, 0x28($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X28);
    // 0x80078E18: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80078E1C: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80078E20: subu        $t5, $t8, $t9
    ctx->r13 = SUB32(ctx->r24, ctx->r25);
    // 0x80078E24: addu        $t7, $t0, $t4
    ctx->r15 = ADD32(ctx->r8, ctx->r12);
    // 0x80078E28: sw          $t5, 0x98($t7)
    MEM_W(0X98, ctx->r15) = ctx->r13;
    // 0x80078E2C: lbu         $t3, 0x4B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4B);
    // 0x80078E30: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80078E34: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80078E38: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x80078E3C: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80078E40: addu        $t8, $t2, $t6
    ctx->r24 = ADD32(ctx->r10, ctx->r14);
    // 0x80078E44: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x80078E48: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x80078E4C: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x80078E50: b           L_80078E70
    // 0x80078E54: sw          $t9, 0xAC($t5)
    MEM_W(0XAC, ctx->r13) = ctx->r25;
        goto L_80078E70;
    // 0x80078E54: sw          $t9, 0xAC($t5)
    MEM_W(0XAC, ctx->r13) = ctx->r25;
L_80078E58:
    // 0x80078E58: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80078E5C: nop

    // 0x80078E60: addiu       $t3, $t7, 0x1
    ctx->r11 = ADD32(ctx->r15, 0X1);
    // 0x80078E64: slti        $at, $t3, 0x5
    ctx->r1 = SIGNED(ctx->r11) < 0X5 ? 1 : 0;
    // 0x80078E68: bne         $at, $zero, L_80078D1C
    if (ctx->r1 != 0) {
        // 0x80078E6C: sw          $t3, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r11;
            goto L_80078D1C;
    }
    // 0x80078E6C: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
L_80078E70:
    // 0x80078E70: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_80078E74:
    // 0x80078E74: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80078E78: lbu         $t9, 0x4B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X4B);
    // 0x80078E7C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80078E80: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80078E84: lw          $t2, -0x310($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X310);
    // 0x80078E88: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80078E8C: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80078E90: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80078E94: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x80078E98: addu        $t0, $t2, $t8
    ctx->r8 = ADD32(ctx->r10, ctx->r24);
    // 0x80078E9C: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x80078EA0: lw          $t3, 0x18($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X18);
    // 0x80078EA4: lw          $t1, 0x1008($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1008);
    // 0x80078EA8: nop

    // 0x80078EAC: sltu        $at, $t1, $t3
    ctx->r1 = ctx->r9 < ctx->r11 ? 1 : 0;
    // 0x80078EB0: beq         $at, $zero, L_800790D0
    if (ctx->r1 == 0) {
        // 0x80078EB4: nop
    
            goto L_800790D0;
    }
    // 0x80078EB4: nop

    // 0x80078EB8: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80078EBC: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x80078EC0: beq         $at, $zero, L_80078FD0
    if (ctx->r1 == 0) {
        // 0x80078EC4: sw          $t2, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r10;
            goto L_80078FD0;
    }
    // 0x80078EC4: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_80078EC8:
    // 0x80078EC8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80078ECC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80078ED0: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x80078ED4: lw          $t8, -0x310($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X310);
    // 0x80078ED8: subu        $t9, $t9, $t0
    ctx->r25 = SUB32(ctx->r25, ctx->r8);
    // 0x80078EDC: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80078EE0: addu        $t4, $t8, $t9
    ctx->r12 = ADD32(ctx->r24, ctx->r25);
    // 0x80078EE4: addiu       $t5, $t4, 0xFFC
    ctx->r13 = ADD32(ctx->r12, 0XFFC);
    // 0x80078EE8: addiu       $t7, $t4, 0x1014
    ctx->r15 = ADD32(ctx->r12, 0X1014);
    // 0x80078EEC: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x80078EF0: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80078EF4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_80078EF8:
    // 0x80078EF8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80078EFC: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80078F00: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80078F04: addu        $t2, $t1, $t3
    ctx->r10 = ADD32(ctx->r9, ctx->r11);
    // 0x80078F08: lbu         $t6, 0x0($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X0);
    // 0x80078F0C: addu        $t8, $t0, $t3
    ctx->r24 = ADD32(ctx->r8, ctx->r11);
    // 0x80078F10: sb          $t6, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r14;
    // 0x80078F14: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80078F18: nop

    // 0x80078F1C: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x80078F20: slti        $at, $t5, 0x8
    ctx->r1 = SIGNED(ctx->r13) < 0X8 ? 1 : 0;
    // 0x80078F24: bne         $at, $zero, L_80078EF8
    if (ctx->r1 != 0) {
        // 0x80078F28: sw          $t5, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r13;
            goto L_80078EF8;
    }
    // 0x80078F28: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x80078F2C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80078F30: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80078F34: nop

    // 0x80078F38: addu        $t1, $t4, $t7
    ctx->r9 = ADD32(ctx->r12, ctx->r15);
    // 0x80078F3C: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    // 0x80078F40: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80078F44: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80078F48: lbu         $t0, 0xA($t2)
    ctx->r8 = MEM_BU(ctx->r10, 0XA);
    // 0x80078F4C: nop

    // 0x80078F50: sb          $t0, 0xA($t3)
    MEM_B(0XA, ctx->r11) = ctx->r8;
    // 0x80078F54: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80078F58: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80078F5C: lbu         $t8, 0xB($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0XB);
    // 0x80078F60: nop

    // 0x80078F64: sb          $t8, 0xB($t9)
    MEM_B(0XB, ctx->r25) = ctx->r24;
    // 0x80078F68: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80078F6C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80078F70: lw          $t4, 0xC($t5)
    ctx->r12 = MEM_W(ctx->r13, 0XC);
    // 0x80078F74: nop

    // 0x80078F78: sw          $t4, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r12;
    // 0x80078F7C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80078F80: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80078F84: lw          $t2, 0x10($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X10);
    // 0x80078F88: nop

    // 0x80078F8C: sw          $t2, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r10;
    // 0x80078F90: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80078F94: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80078F98: lhu         $t6, 0x14($t3)
    ctx->r14 = MEM_HU(ctx->r11, 0X14);
    // 0x80078F9C: nop

    // 0x80078FA0: sh          $t6, 0x14($t8)
    MEM_H(0X14, ctx->r24) = ctx->r14;
    // 0x80078FA4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80078FA8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80078FAC: lhu         $t5, 0x16($t9)
    ctx->r13 = MEM_HU(ctx->r25, 0X16);
    // 0x80078FB0: nop

    // 0x80078FB4: sh          $t5, 0x16($t4)
    MEM_H(0X16, ctx->r12) = ctx->r13;
    // 0x80078FB8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80078FBC: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80078FC0: addiu       $t1, $t7, -0x1
    ctx->r9 = ADD32(ctx->r15, -0X1);
    // 0x80078FC4: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80078FC8: beq         $at, $zero, L_80078EC8
    if (ctx->r1 == 0) {
        // 0x80078FCC: sw          $t1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r9;
            goto L_80078EC8;
    }
    // 0x80078FCC: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_80078FD0:
    // 0x80078FD0: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80078FD4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80078FD8: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x80078FDC: lw          $t0, -0x310($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X310);
    // 0x80078FE0: subu        $t6, $t6, $t3
    ctx->r14 = SUB32(ctx->r14, ctx->r11);
    // 0x80078FE4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80078FE8: addu        $t8, $t0, $t6
    ctx->r24 = ADD32(ctx->r8, ctx->r14);
    // 0x80078FEC: addiu       $t9, $t8, 0xFFC
    ctx->r25 = ADD32(ctx->r24, 0XFFC);
    // 0x80078FF0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80078FF4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_80078FF8:
    // 0x80078FF8: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80078FFC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80079000: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80079004: addu        $t7, $t5, $t4
    ctx->r15 = ADD32(ctx->r13, ctx->r12);
    // 0x80079008: lbu         $t1, 0x0($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X0);
    // 0x8007900C: addu        $t3, $t2, $t4
    ctx->r11 = ADD32(ctx->r10, ctx->r12);
    // 0x80079010: sb          $t1, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r9;
    // 0x80079014: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80079018: nop

    // 0x8007901C: addiu       $t6, $t0, 0x1
    ctx->r14 = ADD32(ctx->r8, 0X1);
    // 0x80079020: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x80079024: bne         $at, $zero, L_80078FF8
    if (ctx->r1 != 0) {
        // 0x80079028: sw          $t6, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r14;
            goto L_80078FF8;
    }
    // 0x80079028: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8007902C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80079030: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80079034: nop

    // 0x80079038: addu        $t5, $t8, $t9
    ctx->r13 = ADD32(ctx->r24, ctx->r25);
    // 0x8007903C: sb          $zero, 0x0($t5)
    MEM_B(0X0, ctx->r13) = 0;
    // 0x80079040: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80079044: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80079048: lbu         $t2, 0x9($t7)
    ctx->r10 = MEM_BU(ctx->r15, 0X9);
    // 0x8007904C: nop

    // 0x80079050: sb          $t2, 0xA($t4)
    MEM_B(0XA, ctx->r12) = ctx->r10;
    // 0x80079054: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80079058: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8007905C: lbu         $t3, 0xA($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0XA);
    // 0x80079060: nop

    // 0x80079064: sb          $t3, 0xB($t0)
    MEM_B(0XB, ctx->r8) = ctx->r11;
    // 0x80079068: lbu         $t8, 0x4B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4B);
    // 0x8007906C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80079070: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80079074: addu        $t5, $t6, $t9
    ctx->r13 = ADD32(ctx->r14, ctx->r25);
    // 0x80079078: lw          $t7, 0x18($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X18);
    // 0x8007907C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80079080: nop

    // 0x80079084: sw          $t7, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r15;
    // 0x80079088: lbu         $t1, 0x4B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4B);
    // 0x8007908C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80079090: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80079094: addu        $t0, $t4, $t3
    ctx->r8 = ADD32(ctx->r12, ctx->r11);
    // 0x80079098: lw          $t8, 0x8($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X8);
    // 0x8007909C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800790A0: nop

    // 0x800790A4: sw          $t8, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r24;
    // 0x800790A8: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800790AC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800790B0: lhu         $t5, 0xC0($t9)
    ctx->r13 = MEM_HU(ctx->r25, 0XC0);
    // 0x800790B4: nop

    // 0x800790B8: sh          $t5, 0x14($t7)
    MEM_H(0X14, ctx->r15) = ctx->r13;
    // 0x800790BC: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x800790C0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800790C4: lhu         $t1, 0xC2($t2)
    ctx->r9 = MEM_HU(ctx->r10, 0XC2);
    // 0x800790C8: b           L_800794EC
    // 0x800790CC: sh          $t1, 0x16($t4)
    MEM_H(0X16, ctx->r12) = ctx->r9;
        goto L_800794EC;
    // 0x800790CC: sh          $t1, 0x16($t4)
    MEM_H(0X16, ctx->r12) = ctx->r9;
L_800790D0:
    // 0x800790D0: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800790D4: nop

    // 0x800790D8: addiu       $t0, $t3, 0x1
    ctx->r8 = ADD32(ctx->r11, 0X1);
    // 0x800790DC: slti        $at, $t0, 0x5
    ctx->r1 = SIGNED(ctx->r8) < 0X5 ? 1 : 0;
    // 0x800790E0: bne         $at, $zero, L_80078E74
    if (ctx->r1 != 0) {
        // 0x800790E4: sw          $t0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r8;
            goto L_80078E74;
    }
    // 0x800790E4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x800790E8: b           L_800794EC
    // 0x800790EC: nop

        goto L_800794EC;
    // 0x800790EC: nop

L_800790F0:
    // 0x800790F0: lbu         $t6, 0x4B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X4B);
    // 0x800790F4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800790F8: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800790FC: addu        $t5, $t8, $t9
    ctx->r13 = ADD32(ctx->r24, ctx->r25);
    // 0x80079100: lw          $t7, 0x18($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X18);
    // 0x80079104: nop

    // 0x80079108: sltiu       $at, $t7, 0x96
    ctx->r1 = ctx->r15 < 0X96 ? 1 : 0;
    // 0x8007910C: bne         $at, $zero, L_800794EC
    if (ctx->r1 != 0) {
        // 0x80079110: nop
    
            goto L_800794EC;
    }
    // 0x80079110: nop

    // 0x80079114: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_80079118:
    // 0x80079118: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8007911C: lbu         $t8, 0x4B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4B);
    // 0x80079120: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80079124: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80079128: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x8007912C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80079130: addu        $t3, $t2, $t4
    ctx->r11 = ADD32(ctx->r10, ctx->r12);
    // 0x80079134: addu        $t5, $t6, $t9
    ctx->r13 = ADD32(ctx->r14, ctx->r25);
    // 0x80079138: lw          $t7, 0x8($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X8);
    // 0x8007913C: lw          $t0, 0x70($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X70);
    // 0x80079140: nop

    // 0x80079144: sltu        $at, $t7, $t0
    ctx->r1 = ctx->r15 < ctx->r8 ? 1 : 0;
    // 0x80079148: bne         $at, $zero, L_80079158
    if (ctx->r1 != 0) {
        // 0x8007914C: nop
    
            goto L_80079158;
    }
    // 0x8007914C: nop

    // 0x80079150: bne         $t0, $zero, L_8007925C
    if (ctx->r8 != 0) {
        // 0x80079154: nop
    
            goto L_8007925C;
    }
    // 0x80079154: nop

L_80079158:
    // 0x80079158: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8007915C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80079160: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x80079164: beq         $at, $zero, L_800791D8
    if (ctx->r1 == 0) {
        // 0x80079168: sw          $t1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r9;
            goto L_800791D8;
    }
    // 0x80079168: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_8007916C:
    // 0x8007916C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80079170: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80079174: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x80079178: addu        $t6, $t4, $t8
    ctx->r14 = ADD32(ctx->r12, ctx->r24);
    // 0x8007917C: lw          $t9, 0x48($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X48);
    // 0x80079180: nop

    // 0x80079184: sw          $t9, 0x4C($t6)
    MEM_W(0X4C, ctx->r14) = ctx->r25;
    // 0x80079188: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8007918C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80079190: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80079194: addu        $t1, $t5, $t0
    ctx->r9 = ADD32(ctx->r13, ctx->r8);
    // 0x80079198: lw          $t2, 0x5C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X5C);
    // 0x8007919C: nop

    // 0x800791A0: sw          $t2, 0x60($t1)
    MEM_W(0X60, ctx->r9) = ctx->r10;
    // 0x800791A4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800791A8: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x800791AC: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x800791B0: addu        $t9, $t3, $t8
    ctx->r25 = ADD32(ctx->r11, ctx->r24);
    // 0x800791B4: lw          $t6, 0x70($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X70);
    // 0x800791B8: nop

    // 0x800791BC: sw          $t6, 0x74($t9)
    MEM_W(0X74, ctx->r25) = ctx->r14;
    // 0x800791C0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800791C4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800791C8: addiu       $t5, $t7, -0x1
    ctx->r13 = ADD32(ctx->r15, -0X1);
    // 0x800791CC: slt         $at, $t5, $t0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800791D0: beq         $at, $zero, L_8007916C
    if (ctx->r1 == 0) {
        // 0x800791D4: sw          $t5, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r13;
            goto L_8007916C;
    }
    // 0x800791D4: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
L_800791D8:
    // 0x800791D8: lbu         $t1, 0x4B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4B);
    // 0x800791DC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800791E0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800791E4: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x800791E8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800791EC: addu        $t3, $t2, $t4
    ctx->r11 = ADD32(ctx->r10, ctx->r12);
    // 0x800791F0: lw          $t8, 0x28($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X28);
    // 0x800791F4: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x800791F8: addu        $t5, $t6, $t7
    ctx->r13 = ADD32(ctx->r14, ctx->r15);
    // 0x800791FC: sw          $t8, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->r24;
    // 0x80079200: lbu         $t1, 0x4B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4B);
    // 0x80079204: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80079208: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8007920C: addu        $t4, $t0, $t2
    ctx->r12 = ADD32(ctx->r8, ctx->r10);
    // 0x80079210: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80079214: lw          $t3, 0x18($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X18);
    // 0x80079218: lw          $t9, 0x28($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X28);
    // 0x8007921C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80079220: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x80079224: subu        $t6, $t3, $t9
    ctx->r14 = SUB32(ctx->r11, ctx->r25);
    // 0x80079228: addu        $t1, $t7, $t5
    ctx->r9 = ADD32(ctx->r15, ctx->r13);
    // 0x8007922C: sw          $t6, 0x5C($t1)
    MEM_W(0X5C, ctx->r9) = ctx->r14;
    // 0x80079230: lbu         $t2, 0x4B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4B);
    // 0x80079234: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80079238: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8007923C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80079240: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80079244: addu        $t3, $t0, $t4
    ctx->r11 = ADD32(ctx->r8, ctx->r12);
    // 0x80079248: lw          $t9, 0x8($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X8);
    // 0x8007924C: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x80079250: addu        $t6, $t8, $t5
    ctx->r14 = ADD32(ctx->r24, ctx->r13);
    // 0x80079254: b           L_80079274
    // 0x80079258: sw          $t9, 0x70($t6)
    MEM_W(0X70, ctx->r14) = ctx->r25;
        goto L_80079274;
    // 0x80079258: sw          $t9, 0x70($t6)
    MEM_W(0X70, ctx->r14) = ctx->r25;
L_8007925C:
    // 0x8007925C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80079260: nop

    // 0x80079264: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80079268: slti        $at, $t2, 0x5
    ctx->r1 = SIGNED(ctx->r10) < 0X5 ? 1 : 0;
    // 0x8007926C: bne         $at, $zero, L_80079118
    if (ctx->r1 != 0) {
        // 0x80079270: sw          $t2, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r10;
            goto L_80079118;
    }
    // 0x80079270: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
L_80079274:
    // 0x80079274: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_80079278:
    // 0x80079278: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8007927C: lbu         $t9, 0x4B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X4B);
    // 0x80079280: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80079284: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80079288: lw          $t0, -0x310($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X310);
    // 0x8007928C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80079290: subu        $t3, $t3, $t4
    ctx->r11 = SUB32(ctx->r11, ctx->r12);
    // 0x80079294: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80079298: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8007929C: addu        $t7, $t0, $t3
    ctx->r15 = ADD32(ctx->r8, ctx->r11);
    // 0x800792A0: addu        $t1, $t5, $t6
    ctx->r9 = ADD32(ctx->r13, ctx->r14);
    // 0x800792A4: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x800792A8: lw          $t8, 0xF94($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XF94);
    // 0x800792AC: nop

    // 0x800792B0: sltu        $at, $t2, $t8
    ctx->r1 = ctx->r10 < ctx->r24 ? 1 : 0;
    // 0x800792B4: beq         $at, $zero, L_800794D4
    if (ctx->r1 == 0) {
        // 0x800792B8: nop
    
            goto L_800794D4;
    }
    // 0x800792B8: nop

    // 0x800792BC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800792C0: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x800792C4: beq         $at, $zero, L_800793D4
    if (ctx->r1 == 0) {
        // 0x800792C8: sw          $t0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r8;
            goto L_800793D4;
    }
    // 0x800792C8: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_800792CC:
    // 0x800792CC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800792D0: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800792D4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800792D8: lw          $t3, -0x310($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X310);
    // 0x800792DC: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x800792E0: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800792E4: addu        $t5, $t3, $t9
    ctx->r13 = ADD32(ctx->r11, ctx->r25);
    // 0x800792E8: addiu       $t6, $t5, 0xF84
    ctx->r14 = ADD32(ctx->r13, 0XF84);
    // 0x800792EC: addiu       $t1, $t5, 0xF9C
    ctx->r9 = ADD32(ctx->r13, 0XF9C);
    // 0x800792F0: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x800792F4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x800792F8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_800792FC:
    // 0x800792FC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80079300: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80079304: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80079308: addu        $t0, $t8, $t2
    ctx->r8 = ADD32(ctx->r24, ctx->r10);
    // 0x8007930C: lbu         $t4, 0x0($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X0);
    // 0x80079310: addu        $t3, $t7, $t2
    ctx->r11 = ADD32(ctx->r15, ctx->r10);
    // 0x80079314: sb          $t4, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r12;
    // 0x80079318: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8007931C: nop

    // 0x80079320: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80079324: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x80079328: bne         $at, $zero, L_800792FC
    if (ctx->r1 != 0) {
        // 0x8007932C: sw          $t6, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r14;
            goto L_800792FC;
    }
    // 0x8007932C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80079330: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80079334: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80079338: nop

    // 0x8007933C: addu        $t8, $t5, $t1
    ctx->r24 = ADD32(ctx->r13, ctx->r9);
    // 0x80079340: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x80079344: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80079348: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8007934C: lbu         $t7, 0xA($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0XA);
    // 0x80079350: nop

    // 0x80079354: sb          $t7, 0xA($t2)
    MEM_B(0XA, ctx->r10) = ctx->r15;
    // 0x80079358: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8007935C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80079360: lbu         $t3, 0xB($t4)
    ctx->r11 = MEM_BU(ctx->r12, 0XB);
    // 0x80079364: nop

    // 0x80079368: sb          $t3, 0xB($t9)
    MEM_B(0XB, ctx->r25) = ctx->r11;
    // 0x8007936C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80079370: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80079374: lw          $t5, 0xC($t6)
    ctx->r13 = MEM_W(ctx->r14, 0XC);
    // 0x80079378: nop

    // 0x8007937C: sw          $t5, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r13;
    // 0x80079380: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80079384: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80079388: lw          $t0, 0x10($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X10);
    // 0x8007938C: nop

    // 0x80079390: sw          $t0, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r8;
    // 0x80079394: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80079398: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8007939C: lhu         $t4, 0x14($t2)
    ctx->r12 = MEM_HU(ctx->r10, 0X14);
    // 0x800793A0: nop

    // 0x800793A4: sh          $t4, 0x14($t3)
    MEM_H(0X14, ctx->r11) = ctx->r12;
    // 0x800793A8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800793AC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800793B0: lhu         $t6, 0x16($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X16);
    // 0x800793B4: nop

    // 0x800793B8: sh          $t6, 0x16($t5)
    MEM_H(0X16, ctx->r13) = ctx->r14;
    // 0x800793BC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800793C0: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800793C4: addiu       $t8, $t1, -0x1
    ctx->r24 = ADD32(ctx->r9, -0X1);
    // 0x800793C8: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800793CC: beq         $at, $zero, L_800792CC
    if (ctx->r1 == 0) {
        // 0x800793D0: sw          $t8, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r24;
            goto L_800792CC;
    }
    // 0x800793D0: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_800793D4:
    // 0x800793D4: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800793D8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800793DC: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800793E0: lw          $t7, -0x310($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X310);
    // 0x800793E4: subu        $t4, $t4, $t2
    ctx->r12 = SUB32(ctx->r12, ctx->r10);
    // 0x800793E8: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x800793EC: addu        $t3, $t7, $t4
    ctx->r11 = ADD32(ctx->r15, ctx->r12);
    // 0x800793F0: addiu       $t9, $t3, 0xF84
    ctx->r25 = ADD32(ctx->r11, 0XF84);
    // 0x800793F4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800793F8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_800793FC:
    // 0x800793FC: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80079400: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80079404: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80079408: addu        $t1, $t6, $t5
    ctx->r9 = ADD32(ctx->r14, ctx->r13);
    // 0x8007940C: lbu         $t8, 0x0($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X0);
    // 0x80079410: addu        $t2, $t0, $t5
    ctx->r10 = ADD32(ctx->r8, ctx->r13);
    // 0x80079414: sb          $t8, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r24;
    // 0x80079418: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8007941C: nop

    // 0x80079420: addiu       $t4, $t7, 0x1
    ctx->r12 = ADD32(ctx->r15, 0X1);
    // 0x80079424: slti        $at, $t4, 0x8
    ctx->r1 = SIGNED(ctx->r12) < 0X8 ? 1 : 0;
    // 0x80079428: bne         $at, $zero, L_800793FC
    if (ctx->r1 != 0) {
        // 0x8007942C: sw          $t4, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r12;
            goto L_800793FC;
    }
    // 0x8007942C: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x80079430: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80079434: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80079438: nop

    // 0x8007943C: addu        $t6, $t3, $t9
    ctx->r14 = ADD32(ctx->r11, ctx->r25);
    // 0x80079440: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x80079444: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80079448: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8007944C: lbu         $t0, 0x9($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X9);
    // 0x80079450: nop

    // 0x80079454: sb          $t0, 0xA($t5)
    MEM_B(0XA, ctx->r13) = ctx->r8;
    // 0x80079458: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8007945C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80079460: lbu         $t2, 0xA($t8)
    ctx->r10 = MEM_BU(ctx->r24, 0XA);
    // 0x80079464: nop

    // 0x80079468: sb          $t2, 0xB($t7)
    MEM_B(0XB, ctx->r15) = ctx->r10;
    // 0x8007946C: lbu         $t3, 0x4B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4B);
    // 0x80079470: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80079474: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80079478: addu        $t6, $t4, $t9
    ctx->r14 = ADD32(ctx->r12, ctx->r25);
    // 0x8007947C: lw          $t1, 0x18($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X18);
    // 0x80079480: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80079484: nop

    // 0x80079488: sw          $t1, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r9;
    // 0x8007948C: lbu         $t8, 0x4B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4B);
    // 0x80079490: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80079494: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80079498: addu        $t7, $t5, $t2
    ctx->r15 = ADD32(ctx->r13, ctx->r10);
    // 0x8007949C: lw          $t3, 0x8($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X8);
    // 0x800794A0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800794A4: nop

    // 0x800794A8: sw          $t3, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r11;
    // 0x800794AC: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800794B0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800794B4: lhu         $t6, 0xC0($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0XC0);
    // 0x800794B8: nop

    // 0x800794BC: sh          $t6, 0x14($t1)
    MEM_H(0X14, ctx->r9) = ctx->r14;
    // 0x800794C0: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x800794C4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800794C8: lhu         $t8, 0xC2($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0XC2);
    // 0x800794CC: b           L_800794EC
    // 0x800794D0: sh          $t8, 0x16($t5)
    MEM_H(0X16, ctx->r13) = ctx->r24;
        goto L_800794EC;
    // 0x800794D0: sh          $t8, 0x16($t5)
    MEM_H(0X16, ctx->r13) = ctx->r24;
L_800794D4:
    // 0x800794D4: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800794D8: nop

    // 0x800794DC: addiu       $t7, $t2, 0x1
    ctx->r15 = ADD32(ctx->r10, 0X1);
    // 0x800794E0: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x800794E4: bne         $at, $zero, L_80079278
    if (ctx->r1 != 0) {
        // 0x800794E8: sw          $t7, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r15;
            goto L_80079278;
    }
    // 0x800794E8: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
L_800794EC:
    // 0x800794EC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800794F0: lbu         $t4, 0x4B($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X4B);
    // 0x800794F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800794F8: addu        $t9, $t3, $t4
    ctx->r25 = ADD32(ctx->r11, ctx->r12);
    // 0x800794FC: lbu         $t6, 0x1($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X1);
    // 0x80079500: nop

    // 0x80079504: bne         $t6, $at, L_800795C8
    if (ctx->r14 != ctx->r1) {
        // 0x80079508: nop
    
            goto L_800795C8;
    }
    // 0x80079508: nop

    // 0x8007950C: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80079510: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80079514: lbu         $s0, 0xD4($t1)
    ctx->r16 = MEM_BU(ctx->r9, 0XD4);
    // 0x80079518: nop

    // 0x8007951C: andi        $t0, $s0, 0xF
    ctx->r8 = ctx->r16 & 0XF;
    // 0x80079520: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x80079524: beq         $s0, $at, L_80079568
    if (ctx->r16 == ctx->r1) {
        // 0x80079528: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_80079568;
    }
    // 0x80079528: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8007952C: bne         $s0, $at, L_800795B8
    if (ctx->r16 != ctx->r1) {
        // 0x80079530: nop
    
            goto L_800795B8;
    }
    // 0x80079530: nop

    // 0x80079534: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80079538: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8007953C: lw          $a1, -0x310($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X310);
    // 0x80079540: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80079544: lw          $a2, 0x38($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X38);
    // 0x80079548: jal         0x800798F0
    // 0x8007954C: nop

    func_800798F0(rdram, ctx);
        goto after_1;
    // 0x8007954C: nop

    after_1:
    // 0x80079550: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80079554: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x80079558: jal         0x8007C5CC
    // 0x8007955C: nop

    func_8007C5CC(rdram, ctx);
        goto after_2;
    // 0x8007955C: nop

    after_2:
    // 0x80079560: b           L_800795C8
    // 0x80079564: nop

        goto L_800795C8;
    // 0x80079564: nop

L_80079568:
    // 0x80079568: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8007956C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80079570: lw          $t2, 0xC4($t5)
    ctx->r10 = MEM_W(ctx->r13, 0XC4);
    // 0x80079574: lw          $t3, 0x38($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X38);
    // 0x80079578: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x8007957C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80079580: sltu        $at, $t4, $at
    ctx->r1 = ctx->r12 < ctx->r1 ? 1 : 0;
    // 0x80079584: beq         $at, $zero, L_80079594
    if (ctx->r1 == 0) {
        // 0x80079588: nop
    
            goto L_80079594;
    }
    // 0x80079588: nop

    // 0x8007958C: b           L_800795A0
    // 0x80079590: sw          $t4, 0xC4($t5)
    MEM_W(0XC4, ctx->r13) = ctx->r12;
        goto L_800795A0;
    // 0x80079590: sw          $t4, 0xC4($t5)
    MEM_W(0XC4, ctx->r13) = ctx->r12;
L_80079594:
    // 0x80079594: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80079598: lui         $t9, 0x10
    ctx->r25 = S32(0X10 << 16);
    // 0x8007959C: sw          $t9, 0xC4($t6)
    MEM_W(0XC4, ctx->r14) = ctx->r25;
L_800795A0:
    // 0x800795A0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800795A4: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x800795A8: jal         0x8007C5CC
    // 0x800795AC: nop

    func_8007C5CC(rdram, ctx);
        goto after_3;
    // 0x800795AC: nop

    after_3:
    // 0x800795B0: b           L_800795C8
    // 0x800795B4: nop

        goto L_800795C8;
    // 0x800795B4: nop

L_800795B8:
    // 0x800795B8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800795BC: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x800795C0: jal         0x8007C5CC
    // 0x800795C4: nop

    func_8007C5CC(rdram, ctx);
        goto after_4;
    // 0x800795C4: nop

    after_4:
L_800795C8:
    // 0x800795C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800795CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800795D0: jr          $ra
    // 0x800795D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800795D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800795D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800795D8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x800795DC: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x800795E0: beq         $at, $zero, L_8007960C
    if (ctx->r1 == 0) {
        // 0x800795E4: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8007960C;
    }
    // 0x800795E4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
L_800795E8:
    // 0x800795E8: addu        $t6, $a0, $t0
    ctx->r14 = ADD32(ctx->r4, ctx->r8);
    // 0x800795EC: addu        $t8, $a1, $t0
    ctx->r24 = ADD32(ctx->r5, ctx->r8);
    // 0x800795F0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800795F4: andi        $t9, $t0, 0xFF
    ctx->r25 = ctx->r8 & 0XFF;
    // 0x800795F8: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x800795FC: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x80079600: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x80079604: bne         $at, $zero, L_800795E8
    if (ctx->r1 != 0) {
        // 0x80079608: sb          $t7, 0x0($t8)
        MEM_B(0X0, ctx->r24) = ctx->r15;
            goto L_800795E8;
    }
    // 0x80079608: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
L_8007960C:
    // 0x8007960C: lbu         $t1, 0x9($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X9);
    // 0x80079610: lw          $t3, 0xC($a1)
    ctx->r11 = MEM_W(ctx->r5, 0XC);
    // 0x80079614: sb          $t1, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r9;
    // 0x80079618: lbu         $t2, 0xA($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0XA);
    // 0x8007961C: lw          $t5, 0x10($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X10);
    // 0x80079620: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x80079624: addu        $t6, $t5, $a3
    ctx->r14 = ADD32(ctx->r13, ctx->r7);
    // 0x80079628: sw          $t4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r12;
    // 0x8007962C: sw          $t6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r14;
    // 0x80079630: sb          $t2, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r10;
    // 0x80079634: lhu         $t7, 0xC0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XC0);
    // 0x80079638: nop

    // 0x8007963C: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
    // 0x80079640: lhu         $t8, 0xC2($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XC2);
    // 0x80079644: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80079648: jr          $ra
    // 0x8007964C: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    return;
    // 0x8007964C: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
;}
RECOMP_FUNC void func_80079650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079650: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80079654: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80079658:
    // 0x80079658: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8007965C: lbu         $t6, 0x9($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X9);
    // 0x80079660: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80079664: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80079668: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8007966C: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x80079670: lbu         $t0, 0x170E($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X170E);
    // 0x80079674: nop

    // 0x80079678: bne         $t6, $t0, L_800796A4
    if (ctx->r14 != ctx->r8) {
        // 0x8007967C: nop
    
            goto L_800796A4;
    }
    // 0x8007967C: nop

    // 0x80079680: addu        $t2, $a1, $t8
    ctx->r10 = ADD32(ctx->r5, ctx->r24);
    // 0x80079684: lbu         $t3, 0x170F($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X170F);
    // 0x80079688: lbu         $t1, 0xA($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XA);
    // 0x8007968C: nop

    // 0x80079690: bne         $t1, $t3, L_800796A4
    if (ctx->r9 != ctx->r11) {
        // 0x80079694: nop
    
            goto L_800796A4;
    }
    // 0x80079694: nop

    // 0x80079698: lb          $v0, 0x7($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X7);
    // 0x8007969C: b           L_800796C0
    // 0x800796A0: nop

        goto L_800796C0;
    // 0x800796A0: nop

L_800796A4:
    // 0x800796A4: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800796A8: nop

    // 0x800796AC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800796B0: slti        $at, $t5, 0x14
    ctx->r1 = SIGNED(ctx->r13) < 0X14 ? 1 : 0;
    // 0x800796B4: bne         $at, $zero, L_80079658
    if (ctx->r1 != 0) {
        // 0x800796B8: sw          $t5, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r13;
            goto L_80079658;
    }
    // 0x800796B8: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x800796BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800796C0:
    // 0x800796C0: jr          $ra
    // 0x800796C4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800796C4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800796C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800796C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800796CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800796D0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800796D4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800796D8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800796DC: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x800796E0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_800796E4:
    // 0x800796E4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800796E8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800796EC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800796F0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800796F4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800796F8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x800796FC: lbu         $t0, 0x170E($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X170E);
    // 0x80079700: nop

    // 0x80079704: bne         $t0, $zero, L_80079738
    if (ctx->r8 != 0) {
        // 0x80079708: nop
    
            goto L_80079738;
    }
    // 0x80079708: nop

    // 0x8007970C: lbu         $t1, 0x170F($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X170F);
    // 0x80079710: nop

    // 0x80079714: bne         $t1, $zero, L_80079738
    if (ctx->r9 != 0) {
        // 0x80079718: nop
    
            goto L_80079738;
    }
    // 0x80079718: nop

    // 0x8007971C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80079720: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80079724: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x80079728: jal         0x800795D8
    // 0x8007972C: addiu       $a1, $t9, 0x1704
    ctx->r5 = ADD32(ctx->r25, 0X1704);
    func_800795D8(rdram, ctx);
        goto after_0;
    // 0x8007972C: addiu       $a1, $t9, 0x1704
    ctx->r5 = ADD32(ctx->r25, 0X1704);
    after_0:
    // 0x80079730: b           L_80079750
    // 0x80079734: nop

        goto L_80079750;
    // 0x80079734: nop

L_80079738:
    // 0x80079738: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8007973C: nop

    // 0x80079740: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80079744: slti        $at, $t3, 0x14
    ctx->r1 = SIGNED(ctx->r11) < 0X14 ? 1 : 0;
    // 0x80079748: bne         $at, $zero, L_800796E4
    if (ctx->r1 != 0) {
        // 0x8007974C: sw          $t3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r11;
            goto L_800796E4;
    }
    // 0x8007974C: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
L_80079750:
    // 0x80079750: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80079754: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80079758: bne         $t4, $at, L_800798E0
    if (ctx->r12 != ctx->r1) {
        // 0x8007975C: nop
    
            goto L_800798E0;
    }
    // 0x8007975C: nop

    // 0x80079760: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_80079764:
    // 0x80079764: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80079768: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8007976C: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80079770: subu        $t6, $t6, $t7
    ctx->r14 = SUB32(ctx->r14, ctx->r15);
    // 0x80079774: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80079778: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x8007977C: lw          $t0, 0x1710($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X1710);
    // 0x80079780: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80079784: nop

    // 0x80079788: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x8007978C: beq         $at, $zero, L_800798C8
    if (ctx->r1 == 0) {
        // 0x80079790: nop
    
            goto L_800798C8;
    }
    // 0x80079790: nop

    // 0x80079794: addiu       $t9, $zero, 0x12
    ctx->r25 = ADD32(0, 0X12);
    // 0x80079798: slti        $at, $t7, 0x13
    ctx->r1 = SIGNED(ctx->r15) < 0X13 ? 1 : 0;
    // 0x8007979C: beq         $at, $zero, L_80079894
    if (ctx->r1 == 0) {
        // 0x800797A0: sw          $t9, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r25;
            goto L_80079894;
    }
    // 0x800797A0: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
L_800797A4:
    // 0x800797A4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800797A8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800797AC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800797B0: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x800797B4: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x800797B8: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x800797BC: addiu       $t6, $t5, 0x1704
    ctx->r14 = ADD32(ctx->r13, 0X1704);
    // 0x800797C0: addiu       $t8, $t5, 0x171C
    ctx->r24 = ADD32(ctx->r13, 0X171C);
    // 0x800797C4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800797C8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800797CC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_800797D0:
    // 0x800797D0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800797D4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800797D8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800797DC: addu        $t9, $t0, $t1
    ctx->r25 = ADD32(ctx->r8, ctx->r9);
    // 0x800797E0: lbu         $t7, 0x0($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X0);
    // 0x800797E4: addu        $t2, $t3, $t1
    ctx->r10 = ADD32(ctx->r11, ctx->r9);
    // 0x800797E8: sb          $t7, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r15;
    // 0x800797EC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800797F0: nop

    // 0x800797F4: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x800797F8: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x800797FC: bne         $at, $zero, L_800797D0
    if (ctx->r1 != 0) {
        // 0x80079800: sw          $t6, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r14;
            goto L_800797D0;
    }
    // 0x80079800: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80079804: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80079808: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007980C: lbu         $t8, 0xA($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0XA);
    // 0x80079810: nop

    // 0x80079814: sb          $t8, 0xA($t0)
    MEM_B(0XA, ctx->r8) = ctx->r24;
    // 0x80079818: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8007981C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80079820: lbu         $t3, 0xB($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0XB);
    // 0x80079824: nop

    // 0x80079828: sb          $t3, 0xB($t1)
    MEM_B(0XB, ctx->r9) = ctx->r11;
    // 0x8007982C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80079830: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80079834: lw          $t2, 0xC($t7)
    ctx->r10 = MEM_W(ctx->r15, 0XC);
    // 0x80079838: nop

    // 0x8007983C: sw          $t2, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r10;
    // 0x80079840: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80079844: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80079848: lw          $t5, 0x10($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X10);
    // 0x8007984C: nop

    // 0x80079850: sw          $t5, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r13;
    // 0x80079854: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80079858: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8007985C: lhu         $t9, 0x14($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X14);
    // 0x80079860: nop

    // 0x80079864: sh          $t9, 0x14($t3)
    MEM_H(0X14, ctx->r11) = ctx->r25;
    // 0x80079868: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8007986C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80079870: lhu         $t7, 0x16($t1)
    ctx->r15 = MEM_HU(ctx->r9, 0X16);
    // 0x80079874: nop

    // 0x80079878: sh          $t7, 0x16($t2)
    MEM_H(0X16, ctx->r10) = ctx->r15;
    // 0x8007987C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80079880: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80079884: addiu       $t6, $t4, -0x1
    ctx->r14 = ADD32(ctx->r12, -0X1);
    // 0x80079888: slt         $at, $t6, $t5
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8007988C: beq         $at, $zero, L_800797A4
    if (ctx->r1 == 0) {
        // 0x80079890: sw          $t6, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r14;
            goto L_800797A4;
    }
    // 0x80079890: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_80079894:
    // 0x80079894: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80079898: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8007989C: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x800798A0: subu        $t9, $t9, $t0
    ctx->r25 = SUB32(ctx->r25, ctx->r8);
    // 0x800798A4: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800798A8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800798AC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800798B0: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x800798B4: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x800798B8: jal         0x800795D8
    // 0x800798BC: addiu       $a1, $a1, 0x1704
    ctx->r5 = ADD32(ctx->r5, 0X1704);
    func_800795D8(rdram, ctx);
        goto after_1;
    // 0x800798BC: addiu       $a1, $a1, 0x1704
    ctx->r5 = ADD32(ctx->r5, 0X1704);
    after_1:
    // 0x800798C0: b           L_800798E0
    // 0x800798C4: nop

        goto L_800798E0;
    // 0x800798C4: nop

L_800798C8:
    // 0x800798C8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800798CC: nop

    // 0x800798D0: addiu       $t1, $t3, 0x1
    ctx->r9 = ADD32(ctx->r11, 0X1);
    // 0x800798D4: slti        $at, $t1, 0x14
    ctx->r1 = SIGNED(ctx->r9) < 0X14 ? 1 : 0;
    // 0x800798D8: bne         $at, $zero, L_80079764
    if (ctx->r1 != 0) {
        // 0x800798DC: sw          $t1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r9;
            goto L_80079764;
    }
    // 0x800798DC: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_800798E0:
    // 0x800798E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800798E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800798E8: jr          $ra
    // 0x800798EC: nop

    return;
    // 0x800798EC: nop

;}
RECOMP_FUNC void func_800798F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800798F0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800798F4: lb          $t6, -0x7C8($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X7C8);
    // 0x800798F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800798FC: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80079900: sw          $t6, -0x304($at)
    MEM_W(-0X304, ctx->r1) = ctx->r14;
    // 0x80079904: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80079908: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8007990C: sw          $t7, -0x308($at)
    MEM_W(-0X308, ctx->r1) = ctx->r15;
    // 0x80079910: slti        $at, $t6, 0x7
    ctx->r1 = SIGNED(ctx->r14) < 0X7 ? 1 : 0;
    // 0x80079914: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80079918: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x8007991C: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x80079920: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    // 0x80079924: beq         $at, $zero, L_80079F3C
    if (ctx->r1 == 0) {
        // 0x80079928: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80079F3C;
    }
    // 0x80079928: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
L_8007992C:
    // 0x8007992C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80079930: lw          $a0, -0x304($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X304);
    // 0x80079934: jal         0x80046388
    // 0x80079938: nop

    func_80046388(rdram, ctx);
        goto after_0;
    // 0x80079938: nop

    after_0:
    // 0x8007993C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80079940: sw          $v0, -0x30C($at)
    MEM_W(-0X30C, ctx->r1) = ctx->r2;
    // 0x80079944: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80079948: lw          $t9, -0x30C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X30C);
    // 0x8007994C: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    // 0x80079950: nop

    // 0x80079954: sltu        $at, $t8, $t9
    ctx->r1 = ctx->r24 < ctx->r25 ? 1 : 0;
    // 0x80079958: bne         $at, $zero, L_80079E88
    if (ctx->r1 != 0) {
        // 0x8007995C: nop
    
            goto L_80079E88;
    }
    // 0x8007995C: nop

    // 0x80079960: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80079964: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x80079968: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x8007996C: jal         0x8007BCB4
    // 0x80079970: sw          $t0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r8;
    func_8007BCB4(rdram, ctx);
        goto after_1;
    // 0x80079970: sw          $t0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r8;
    after_1:
    // 0x80079974: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80079978: lw          $t1, -0x30C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X30C);
    // 0x8007997C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80079980: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x80079984: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80079988: jal         0x8007BC90
    // 0x8007998C: addu        $a1, $s0, $t1
    ctx->r5 = ADD32(ctx->r16, ctx->r9);
    func_8007BC90(rdram, ctx);
        goto after_2;
    // 0x8007998C: addu        $a1, $s0, $t1
    ctx->r5 = ADD32(ctx->r16, ctx->r9);
    after_2:
    // 0x80079990: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x80079994: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x80079998: jal         0x80079650
    // 0x8007999C: nop

    func_80079650(rdram, ctx);
        goto after_3;
    // 0x8007999C: nop

    after_3:
    // 0x800799A0: sb          $v0, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = ctx->r2;
    // 0x800799A4: lb          $t2, 0x8F($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X8F);
    // 0x800799A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800799AC: bne         $t2, $at, L_800799D4
    if (ctx->r10 != ctx->r1) {
        // 0x800799B0: nop
    
            goto L_800799D4;
    }
    // 0x800799B0: nop

    // 0x800799B4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800799B8: lw          $a2, -0x30C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X30C);
    // 0x800799BC: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x800799C0: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x800799C4: jal         0x800796C8
    // 0x800799C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800796C8(rdram, ctx);
        goto after_4;
    // 0x800799C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x800799CC: b           L_80079A04
    // 0x800799D0: nop

        goto L_80079A04;
    // 0x800799D0: nop

L_800799D4:
    // 0x800799D4: lb          $t4, 0x8F($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X8F);
    // 0x800799D8: lw          $t3, 0xA4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA4);
    // 0x800799DC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800799E0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800799E4: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x800799E8: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800799EC: lw          $a2, -0x30C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X30C);
    // 0x800799F0: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x800799F4: addu        $a1, $t3, $t5
    ctx->r5 = ADD32(ctx->r11, ctx->r13);
    // 0x800799F8: addiu       $a1, $a1, 0x1704
    ctx->r5 = ADD32(ctx->r5, 0X1704);
    // 0x800799FC: jal         0x800795D8
    // 0x80079A00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800795D8(rdram, ctx);
        goto after_5;
    // 0x80079A00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
L_80079A04:
    // 0x80079A04: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
L_80079A08:
    // 0x80079A08: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x80079A0C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80079A10: addu        $t8, $sp, $t6
    ctx->r24 = ADD32(ctx->r29, ctx->r14);
    // 0x80079A14: sb          $t7, 0x78($t8)
    MEM_B(0X78, ctx->r24) = ctx->r15;
    // 0x80079A18: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x80079A1C: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x80079A20: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80079A24: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80079A28: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80079A2C: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80079A30: lw          $t4, 0x1710($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X1710);
    // 0x80079A34: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x80079A38: addu        $t5, $sp, $t3
    ctx->r13 = ADD32(ctx->r29, ctx->r11);
    // 0x80079A3C: sw          $t4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->r12;
    // 0x80079A40: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x80079A44: nop

    // 0x80079A48: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x80079A4C: slti        $at, $t6, 0x14
    ctx->r1 = SIGNED(ctx->r14) < 0X14 ? 1 : 0;
    // 0x80079A50: bne         $at, $zero, L_80079A08
    if (ctx->r1 != 0) {
        // 0x80079A54: sw          $t6, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->r14;
            goto L_80079A08;
    }
    // 0x80079A54: sw          $t6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r14;
    // 0x80079A58: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
L_80079A5C:
    // 0x80079A5C: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x80079A60: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
L_80079A64:
    // 0x80079A64: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x80079A68: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x80079A6C: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80079A70: addu        $t2, $sp, $t1
    ctx->r10 = ADD32(ctx->r29, ctx->r9);
    // 0x80079A74: lw          $t2, 0x28($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X28);
    // 0x80079A78: nop

    // 0x80079A7C: sltu        $at, $t8, $t2
    ctx->r1 = ctx->r24 < ctx->r10 ? 1 : 0;
    // 0x80079A80: beq         $at, $zero, L_80079A98
    if (ctx->r1 == 0) {
        // 0x80079A84: nop
    
            goto L_80079A98;
    }
    // 0x80079A84: nop

    // 0x80079A88: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x80079A8C: sw          $t2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r10;
    // 0x80079A90: addu        $t4, $sp, $t0
    ctx->r12 = ADD32(ctx->r29, ctx->r8);
    // 0x80079A94: sb          $t9, 0x78($t4)
    MEM_B(0X78, ctx->r12) = ctx->r25;
L_80079A98:
    // 0x80079A98: lw          $t3, 0x98($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X98);
    // 0x80079A9C: nop

    // 0x80079AA0: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x80079AA4: slti        $at, $t5, 0x14
    ctx->r1 = SIGNED(ctx->r13) < 0X14 ? 1 : 0;
    // 0x80079AA8: bne         $at, $zero, L_80079A64
    if (ctx->r1 != 0) {
        // 0x80079AAC: sw          $t5, 0x98($sp)
        MEM_W(0X98, ctx->r29) = ctx->r13;
            goto L_80079A64;
    }
    // 0x80079AAC: sw          $t5, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r13;
    // 0x80079AB0: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x80079AB4: nop

    // 0x80079AB8: addu        $t6, $sp, $t7
    ctx->r14 = ADD32(ctx->r29, ctx->r15);
    // 0x80079ABC: lb          $t6, 0x78($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X78);
    // 0x80079AC0: nop

    // 0x80079AC4: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80079AC8: addu        $t8, $sp, $t1
    ctx->r24 = ADD32(ctx->r29, ctx->r9);
    // 0x80079ACC: sw          $zero, 0x28($t8)
    MEM_W(0X28, ctx->r24) = 0;
    // 0x80079AD0: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x80079AD4: nop

    // 0x80079AD8: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x80079ADC: slti        $at, $t9, 0x14
    ctx->r1 = SIGNED(ctx->r25) < 0X14 ? 1 : 0;
    // 0x80079AE0: bne         $at, $zero, L_80079A5C
    if (ctx->r1 != 0) {
        // 0x80079AE4: sw          $t9, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->r25;
            goto L_80079A5C;
    }
    // 0x80079AE4: sw          $t9, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r25;
    // 0x80079AE8: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
L_80079AEC:
    // 0x80079AEC: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
L_80079AF0:
    // 0x80079AF0: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x80079AF4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80079AF8: addu        $t3, $sp, $t4
    ctx->r11 = ADD32(ctx->r29, ctx->r12);
    // 0x80079AFC: lb          $t3, 0x78($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X78);
    // 0x80079B00: lw          $t2, -0x304($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X304);
    // 0x80079B04: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80079B08: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x80079B0C: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x80079B10: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80079B14: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x80079B18: sll         $t9, $t2, 4
    ctx->r25 = S32(ctx->r10 << 4);
    // 0x80079B1C: addu        $t7, $t0, $t5
    ctx->r15 = ADD32(ctx->r8, ctx->r13);
    // 0x80079B20: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80079B24: subu        $t9, $t9, $t2
    ctx->r25 = SUB32(ctx->r25, ctx->r10);
    // 0x80079B28: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80079B2C: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80079B30: addu        $t1, $t7, $t6
    ctx->r9 = ADD32(ctx->r15, ctx->r14);
    // 0x80079B34: lbu         $t8, 0x1704($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X1704);
    // 0x80079B38: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80079B3C: addu        $t3, $t0, $t9
    ctx->r11 = ADD32(ctx->r8, ctx->r25);
    // 0x80079B40: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x80079B44: addu        $t1, $t7, $t6
    ctx->r9 = ADD32(ctx->r15, ctx->r14);
    // 0x80079B48: sb          $t8, 0x1074($t1)
    MEM_B(0X1074, ctx->r9) = ctx->r24;
    // 0x80079B4C: lw          $t2, 0x90($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X90);
    // 0x80079B50: nop

    // 0x80079B54: addiu       $t0, $t2, 0x1
    ctx->r8 = ADD32(ctx->r10, 0X1);
    // 0x80079B58: sltiu       $at, $t0, 0x8
    ctx->r1 = ctx->r8 < 0X8 ? 1 : 0;
    // 0x80079B5C: bne         $at, $zero, L_80079AF0
    if (ctx->r1 != 0) {
        // 0x80079B60: sw          $t0, 0x90($sp)
        MEM_W(0X90, ctx->r29) = ctx->r8;
            goto L_80079AF0;
    }
    // 0x80079B60: sw          $t0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r8;
    // 0x80079B64: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x80079B68: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80079B6C: addu        $t3, $sp, $t4
    ctx->r11 = ADD32(ctx->r29, ctx->r12);
    // 0x80079B70: lb          $t3, 0x78($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X78);
    // 0x80079B74: lw          $t8, -0x304($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X304);
    // 0x80079B78: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80079B7C: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x80079B80: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x80079B84: sll         $t1, $t8, 4
    ctx->r9 = S32(ctx->r24 << 4);
    // 0x80079B88: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80079B8C: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x80079B90: subu        $t1, $t1, $t8
    ctx->r9 = SUB32(ctx->r9, ctx->r24);
    // 0x80079B94: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80079B98: subu        $t0, $t0, $t4
    ctx->r8 = SUB32(ctx->r8, ctx->r12);
    // 0x80079B9C: addu        $t7, $t9, $t5
    ctx->r15 = ADD32(ctx->r25, ctx->r13);
    // 0x80079BA0: lbu         $t6, 0x170E($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X170E);
    // 0x80079BA4: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80079BA8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80079BAC: addu        $t3, $t2, $t0
    ctx->r11 = ADD32(ctx->r10, ctx->r8);
    // 0x80079BB0: sb          $t6, 0x107E($t3)
    MEM_B(0X107E, ctx->r11) = ctx->r14;
    // 0x80079BB4: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x80079BB8: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80079BBC: addu        $t8, $sp, $t7
    ctx->r24 = ADD32(ctx->r29, ctx->r15);
    // 0x80079BC0: lb          $t8, 0x78($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X78);
    // 0x80079BC4: lw          $t2, -0x304($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X304);
    // 0x80079BC8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80079BCC: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x80079BD0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80079BD4: sll         $t0, $t2, 4
    ctx->r8 = S32(ctx->r10 << 4);
    // 0x80079BD8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80079BDC: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x80079BE0: subu        $t0, $t0, $t2
    ctx->r8 = SUB32(ctx->r8, ctx->r10);
    // 0x80079BE4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80079BE8: subu        $t3, $t3, $t7
    ctx->r11 = SUB32(ctx->r11, ctx->r15);
    // 0x80079BEC: addu        $t1, $t5, $t9
    ctx->r9 = ADD32(ctx->r13, ctx->r25);
    // 0x80079BF0: lbu         $t4, 0x170F($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X170F);
    // 0x80079BF4: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80079BF8: addu        $t6, $t5, $t0
    ctx->r14 = ADD32(ctx->r13, ctx->r8);
    // 0x80079BFC: addu        $t8, $t6, $t3
    ctx->r24 = ADD32(ctx->r14, ctx->r11);
    // 0x80079C00: sb          $t4, 0x107F($t8)
    MEM_B(0X107F, ctx->r24) = ctx->r12;
    // 0x80079C04: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x80079C08: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80079C0C: addu        $t2, $sp, $t1
    ctx->r10 = ADD32(ctx->r29, ctx->r9);
    // 0x80079C10: lb          $t2, 0x78($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X78);
    // 0x80079C14: lw          $t6, -0x304($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X304);
    // 0x80079C18: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80079C1C: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x80079C20: subu        $t5, $t5, $t2
    ctx->r13 = SUB32(ctx->r13, ctx->r10);
    // 0x80079C24: sll         $t3, $t6, 4
    ctx->r11 = S32(ctx->r14 << 4);
    // 0x80079C28: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80079C2C: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x80079C30: subu        $t3, $t3, $t6
    ctx->r11 = SUB32(ctx->r11, ctx->r14);
    // 0x80079C34: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80079C38: subu        $t8, $t8, $t1
    ctx->r24 = SUB32(ctx->r24, ctx->r9);
    // 0x80079C3C: addu        $t0, $t9, $t5
    ctx->r8 = ADD32(ctx->r25, ctx->r13);
    // 0x80079C40: lw          $t7, 0x1710($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X1710);
    // 0x80079C44: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80079C48: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x80079C4C: addu        $t2, $t4, $t8
    ctx->r10 = ADD32(ctx->r12, ctx->r24);
    // 0x80079C50: sw          $t7, 0x1080($t2)
    MEM_W(0X1080, ctx->r10) = ctx->r15;
    // 0x80079C54: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x80079C58: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80079C5C: addu        $t6, $sp, $t0
    ctx->r14 = ADD32(ctx->r29, ctx->r8);
    // 0x80079C60: lb          $t6, 0x78($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X78);
    // 0x80079C64: lw          $t4, -0x304($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X304);
    // 0x80079C68: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80079C6C: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x80079C70: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x80079C74: sll         $t8, $t4, 4
    ctx->r24 = S32(ctx->r12 << 4);
    // 0x80079C78: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80079C7C: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80079C80: subu        $t8, $t8, $t4
    ctx->r24 = SUB32(ctx->r24, ctx->r12);
    // 0x80079C84: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80079C88: subu        $t2, $t2, $t0
    ctx->r10 = SUB32(ctx->r10, ctx->r8);
    // 0x80079C8C: addu        $t3, $t5, $t9
    ctx->r11 = ADD32(ctx->r13, ctx->r25);
    // 0x80079C90: lw          $t1, 0x1714($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X1714);
    // 0x80079C94: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x80079C98: addu        $t7, $t5, $t8
    ctx->r15 = ADD32(ctx->r13, ctx->r24);
    // 0x80079C9C: addu        $t6, $t7, $t2
    ctx->r14 = ADD32(ctx->r15, ctx->r10);
    // 0x80079CA0: sw          $t1, 0x1084($t6)
    MEM_W(0X1084, ctx->r14) = ctx->r9;
    // 0x80079CA4: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x80079CA8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80079CAC: addu        $t4, $sp, $t3
    ctx->r12 = ADD32(ctx->r29, ctx->r11);
    // 0x80079CB0: lb          $t4, 0x78($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X78);
    // 0x80079CB4: lw          $t7, -0x304($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X304);
    // 0x80079CB8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80079CBC: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x80079CC0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80079CC4: sll         $t2, $t7, 4
    ctx->r10 = S32(ctx->r15 << 4);
    // 0x80079CC8: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80079CCC: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x80079CD0: subu        $t2, $t2, $t7
    ctx->r10 = SUB32(ctx->r10, ctx->r15);
    // 0x80079CD4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80079CD8: subu        $t6, $t6, $t3
    ctx->r14 = SUB32(ctx->r14, ctx->r11);
    // 0x80079CDC: addu        $t8, $t9, $t5
    ctx->r24 = ADD32(ctx->r25, ctx->r13);
    // 0x80079CE0: lhu         $t0, 0x1718($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X1718);
    // 0x80079CE4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80079CE8: addu        $t1, $t9, $t2
    ctx->r9 = ADD32(ctx->r25, ctx->r10);
    // 0x80079CEC: addu        $t4, $t1, $t6
    ctx->r12 = ADD32(ctx->r9, ctx->r14);
    // 0x80079CF0: sh          $t0, 0x1088($t4)
    MEM_H(0X1088, ctx->r12) = ctx->r8;
    // 0x80079CF4: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x80079CF8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80079CFC: addu        $t7, $sp, $t8
    ctx->r15 = ADD32(ctx->r29, ctx->r24);
    // 0x80079D00: lb          $t7, 0x78($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X78);
    // 0x80079D04: lw          $t1, -0x304($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X304);
    // 0x80079D08: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80079D0C: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x80079D10: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x80079D14: sll         $t6, $t1, 4
    ctx->r14 = S32(ctx->r9 << 4);
    // 0x80079D18: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80079D1C: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x80079D20: subu        $t6, $t6, $t1
    ctx->r14 = SUB32(ctx->r14, ctx->r9);
    // 0x80079D24: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80079D28: subu        $t4, $t4, $t8
    ctx->r12 = SUB32(ctx->r12, ctx->r24);
    // 0x80079D2C: addu        $t2, $t5, $t9
    ctx->r10 = ADD32(ctx->r13, ctx->r25);
    // 0x80079D30: lhu         $t3, 0x171A($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X171A);
    // 0x80079D34: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80079D38: addu        $t0, $t5, $t6
    ctx->r8 = ADD32(ctx->r13, ctx->r14);
    // 0x80079D3C: addu        $t7, $t0, $t4
    ctx->r15 = ADD32(ctx->r8, ctx->r12);
    // 0x80079D40: sh          $t3, 0x108A($t7)
    MEM_H(0X108A, ctx->r15) = ctx->r11;
    // 0x80079D44: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x80079D48: nop

    // 0x80079D4C: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x80079D50: slti        $at, $t2, 0xA
    ctx->r1 = SIGNED(ctx->r10) < 0XA ? 1 : 0;
    // 0x80079D54: bne         $at, $zero, L_80079AEC
    if (ctx->r1 != 0) {
        // 0x80079D58: sw          $t2, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->r10;
            goto L_80079AEC;
    }
    // 0x80079D58: sw          $t2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r10;
    // 0x80079D5C: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
L_80079D60:
    // 0x80079D60: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
L_80079D64:
    // 0x80079D64: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x80079D68: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x80079D6C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80079D70: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80079D74: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x80079D78: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80079D7C: addu        $t8, $t1, $t6
    ctx->r24 = ADD32(ctx->r9, ctx->r14);
    // 0x80079D80: addu        $t4, $t8, $t0
    ctx->r12 = ADD32(ctx->r24, ctx->r8);
    // 0x80079D84: sb          $zero, 0x1704($t4)
    MEM_B(0X1704, ctx->r12) = 0;
    // 0x80079D88: lw          $t3, 0x90($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X90);
    // 0x80079D8C: nop

    // 0x80079D90: addiu       $t7, $t3, 0x1
    ctx->r15 = ADD32(ctx->r11, 0X1);
    // 0x80079D94: sltiu       $at, $t7, 0x8
    ctx->r1 = ctx->r15 < 0X8 ? 1 : 0;
    // 0x80079D98: bne         $at, $zero, L_80079D64
    if (ctx->r1 != 0) {
        // 0x80079D9C: sw          $t7, 0x90($sp)
        MEM_W(0X90, ctx->r29) = ctx->r15;
            goto L_80079D64;
    }
    // 0x80079D9C: sw          $t7, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r15;
    // 0x80079DA0: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x80079DA4: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x80079DA8: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80079DAC: subu        $t5, $t5, $t2
    ctx->r13 = SUB32(ctx->r13, ctx->r10);
    // 0x80079DB0: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80079DB4: addu        $t1, $t9, $t5
    ctx->r9 = ADD32(ctx->r25, ctx->r13);
    // 0x80079DB8: sb          $zero, 0x170E($t1)
    MEM_B(0X170E, ctx->r9) = 0;
    // 0x80079DBC: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x80079DC0: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x80079DC4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80079DC8: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x80079DCC: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80079DD0: addu        $t4, $t6, $t0
    ctx->r12 = ADD32(ctx->r14, ctx->r8);
    // 0x80079DD4: sb          $zero, 0x170F($t4)
    MEM_B(0X170F, ctx->r12) = 0;
    // 0x80079DD8: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x80079DDC: lw          $t3, 0xA4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA4);
    // 0x80079DE0: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x80079DE4: subu        $t2, $t2, $t7
    ctx->r10 = SUB32(ctx->r10, ctx->r15);
    // 0x80079DE8: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x80079DEC: addu        $t9, $t3, $t2
    ctx->r25 = ADD32(ctx->r11, ctx->r10);
    // 0x80079DF0: sw          $zero, 0x1710($t9)
    MEM_W(0X1710, ctx->r25) = 0;
    // 0x80079DF4: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x80079DF8: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x80079DFC: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x80079E00: subu        $t8, $t8, $t1
    ctx->r24 = SUB32(ctx->r24, ctx->r9);
    // 0x80079E04: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80079E08: addu        $t6, $t5, $t8
    ctx->r14 = ADD32(ctx->r13, ctx->r24);
    // 0x80079E0C: sw          $zero, 0x1714($t6)
    MEM_W(0X1714, ctx->r14) = 0;
    // 0x80079E10: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x80079E14: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x80079E18: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80079E1C: subu        $t7, $t7, $t4
    ctx->r15 = SUB32(ctx->r15, ctx->r12);
    // 0x80079E20: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80079E24: addu        $t3, $t0, $t7
    ctx->r11 = ADD32(ctx->r8, ctx->r15);
    // 0x80079E28: sh          $zero, 0x1718($t3)
    MEM_H(0X1718, ctx->r11) = 0;
    // 0x80079E2C: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x80079E30: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x80079E34: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80079E38: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x80079E3C: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80079E40: addu        $t5, $t2, $t1
    ctx->r13 = ADD32(ctx->r10, ctx->r9);
    // 0x80079E44: sh          $zero, 0x171A($t5)
    MEM_H(0X171A, ctx->r13) = 0;
    // 0x80079E48: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x80079E4C: nop

    // 0x80079E50: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x80079E54: slti        $at, $t6, 0x14
    ctx->r1 = SIGNED(ctx->r14) < 0X14 ? 1 : 0;
    // 0x80079E58: bne         $at, $zero, L_80079D60
    if (ctx->r1 != 0) {
        // 0x80079E5C: sw          $t6, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->r14;
            goto L_80079D60;
    }
    // 0x80079E5C: sw          $t6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r14;
    // 0x80079E60: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80079E64: lw          $t4, -0x304($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X304);
    // 0x80079E68: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80079E6C: addiu       $t0, $t4, 0x1
    ctx->r8 = ADD32(ctx->r12, 0X1);
    // 0x80079E70: sw          $t0, -0x304($at)
    MEM_W(-0X304, ctx->r1) = ctx->r8;
    // 0x80079E74: slti        $at, $t0, 0x7
    ctx->r1 = SIGNED(ctx->r8) < 0X7 ? 1 : 0;
    // 0x80079E78: bne         $at, $zero, L_80079F28
    if (ctx->r1 != 0) {
        // 0x80079E7C: nop
    
            goto L_80079F28;
    }
    // 0x80079E7C: nop

    // 0x80079E80: b           L_80079F3C
    // 0x80079E84: nop

        goto L_80079F3C;
    // 0x80079E84: nop

L_80079E88:
    // 0x80079E88: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80079E8C: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x80079E90: jal         0x8007BCB4
    // 0x80079E94: nop

    func_8007BCB4(rdram, ctx);
        goto after_6;
    // 0x80079E94: nop

    after_6:
    // 0x80079E98: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
    // 0x80079E9C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80079EA0: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x80079EA4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80079EA8: jal         0x8007BC90
    // 0x80079EAC: addu        $a1, $s0, $t7
    ctx->r5 = ADD32(ctx->r16, ctx->r15);
    func_8007BC90(rdram, ctx);
        goto after_7;
    // 0x80079EAC: addu        $a1, $s0, $t7
    ctx->r5 = ADD32(ctx->r16, ctx->r15);
    after_7:
    // 0x80079EB0: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x80079EB4: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x80079EB8: jal         0x80079650
    // 0x80079EBC: nop

    func_80079650(rdram, ctx);
        goto after_8;
    // 0x80079EBC: nop

    after_8:
    // 0x80079EC0: sb          $v0, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = ctx->r2;
    // 0x80079EC4: lb          $t3, 0x8F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X8F);
    // 0x80079EC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80079ECC: bne         $t3, $at, L_80079EF0
    if (ctx->r11 != ctx->r1) {
        // 0x80079ED0: nop
    
            goto L_80079EF0;
    }
    // 0x80079ED0: nop

    // 0x80079ED4: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x80079ED8: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x80079EDC: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x80079EE0: jal         0x800796C8
    // 0x80079EE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800796C8(rdram, ctx);
        goto after_9;
    // 0x80079EE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x80079EE8: b           L_80079F1C
    // 0x80079EEC: nop

        goto L_80079F1C;
    // 0x80079EEC: nop

L_80079EF0:
    // 0x80079EF0: lb          $t2, 0x8F($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X8F);
    // 0x80079EF4: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x80079EF8: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80079EFC: subu        $t1, $t1, $t2
    ctx->r9 = SUB32(ctx->r9, ctx->r10);
    // 0x80079F00: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80079F04: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x80079F08: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x80079F0C: addu        $a1, $t9, $t1
    ctx->r5 = ADD32(ctx->r25, ctx->r9);
    // 0x80079F10: addiu       $a1, $a1, 0x1704
    ctx->r5 = ADD32(ctx->r5, 0X1704);
    // 0x80079F14: jal         0x800795D8
    // 0x80079F18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800795D8(rdram, ctx);
        goto after_10;
    // 0x80079F18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
L_80079F1C:
    // 0x80079F1C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80079F20: sw          $zero, -0x308($at)
    MEM_W(-0X308, ctx->r1) = 0;
    // 0x80079F24: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
L_80079F28:
    // 0x80079F28: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80079F2C: lw          $t5, -0x308($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X308);
    // 0x80079F30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80079F34: beq         $t5, $at, L_8007992C
    if (ctx->r13 == ctx->r1) {
        // 0x80079F38: nop
    
            goto L_8007992C;
    }
    // 0x80079F38: nop

L_80079F3C:
    // 0x80079F3C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80079F40: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x80079F44: jal         0x8007BCB4
    // 0x80079F48: nop

    func_8007BCB4(rdram, ctx);
        goto after_11;
    // 0x80079F48: nop

    after_11:
    // 0x80079F4C: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    // 0x80079F50: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80079F54: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x80079F58: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80079F5C: jal         0x8007BC90
    // 0x80079F60: addu        $a1, $s0, $t8
    ctx->r5 = ADD32(ctx->r16, ctx->r24);
    func_8007BC90(rdram, ctx);
        goto after_12;
    // 0x80079F60: addu        $a1, $s0, $t8
    ctx->r5 = ADD32(ctx->r16, ctx->r24);
    after_12:
    // 0x80079F64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80079F68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80079F6C: jr          $ra
    // 0x80079F70: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x80079F70: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_80079F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079F74: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80079F78: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x80079F7C: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x80079F80: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80079F84: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x80079F88: jr          $ra
    // 0x80079F8C: addiu       $v0, $v0, 0x1074
    ctx->r2 = ADD32(ctx->r2, 0X1074);
    return;
    // 0x80079F8C: addiu       $v0, $v0, 0x1074
    ctx->r2 = ADD32(ctx->r2, 0X1074);
;}
RECOMP_FUNC void func_80079F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079F90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80079F94: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80079F98: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80079F9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079FA0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80079FA4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80079FA8: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x80079FAC: nop

    // 0x80079FB0: beq         $t7, $t6, L_8007A020
    if (ctx->r15 == ctx->r14) {
        // 0x80079FB4: nop
    
            goto L_8007A020;
    }
    // 0x80079FB4: nop

L_80079FB8:
    // 0x80079FB8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80079FBC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80079FC0: lbu         $t9, 0x9($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X9);
    // 0x80079FC4: lbu         $t1, 0x9($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X9);
    // 0x80079FC8: nop

    // 0x80079FCC: bne         $t9, $t1, L_80079FFC
    if (ctx->r25 != ctx->r9) {
        // 0x80079FD0: nop
    
            goto L_80079FFC;
    }
    // 0x80079FD0: nop

    // 0x80079FD4: lbu         $t2, 0xA($t8)
    ctx->r10 = MEM_BU(ctx->r24, 0XA);
    // 0x80079FD8: lbu         $t3, 0xA($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XA);
    // 0x80079FDC: nop

    // 0x80079FE0: bne         $t2, $t3, L_80079FFC
    if (ctx->r10 != ctx->r11) {
        // 0x80079FE4: nop
    
            goto L_80079FFC;
    }
    // 0x80079FE4: nop

    // 0x80079FE8: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    // 0x80079FEC: jal         0x8007B420
    // 0x80079FF0: nop

    func_8007B420(rdram, ctx);
        goto after_0;
    // 0x80079FF0: nop

    after_0:
    // 0x80079FF4: b           L_8007A068
    // 0x80079FF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8007A068;
    // 0x80079FF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80079FFC:
    // 0x80079FFC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A000: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007A004: lw          $t5, 0x10($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X10);
    // 0x8007A008: nop

    // 0x8007A00C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8007A010: lw          $t7, 0x10($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X10);
    // 0x8007A014: nop

    // 0x8007A018: bne         $t7, $t6, L_80079FB8
    if (ctx->r15 != ctx->r14) {
        // 0x8007A01C: nop
    
            goto L_80079FB8;
    }
    // 0x8007A01C: nop

L_8007A020:
    // 0x8007A020: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8007A024: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8007A028: lw          $t1, 0x10($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X10);
    // 0x8007A02C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8007A030: sw          $t1, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r9;
    // 0x8007A034: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8007A038: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8007A03C: nop

    // 0x8007A040: sw          $t2, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->r10;
    // 0x8007A044: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8007A048: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8007A04C: nop

    // 0x8007A050: sw          $t0, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r8;
    // 0x8007A054: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8007A058: nop

    // 0x8007A05C: lw          $t7, 0x10($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X10);
    // 0x8007A060: nop

    // 0x8007A064: sw          $t5, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r13;
L_8007A068:
    // 0x8007A068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A06C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007A070: jr          $ra
    // 0x8007A074: nop

    return;
    // 0x8007A074: nop

;}
RECOMP_FUNC void func_8007A078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A078: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007A07C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8007A080: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8007A084: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8007A088: addiu       $t6, $t6, 0x2D98
    ctx->r14 = ADD32(ctx->r14, 0X2D98);
    // 0x8007A08C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007A090: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8007A094: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8007A098: beq         $t6, $t7, L_8007A0B0
    if (ctx->r14 == ctx->r15) {
        // 0x8007A09C: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_8007A0B0;
    }
    // 0x8007A09C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8007A0A0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8007A0A4: addiu       $t8, $t8, 0x2D80
    ctx->r24 = ADD32(ctx->r24, 0X2D80);
    // 0x8007A0A8: bne         $t8, $t7, L_8007A2C8
    if (ctx->r24 != ctx->r15) {
        // 0x8007A0AC: nop
    
            goto L_8007A2C8;
    }
    // 0x8007A0AC: nop

L_8007A0B0:
    // 0x8007A0B0: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x8007A0B4: jal         0x8007E03C
    // 0x8007A0B8: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x8007A0B8: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_0:
    // 0x8007A0BC: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x8007A0C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007A0C4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8007A0C8: sb          $t9, -0x300($at)
    MEM_B(-0X300, ctx->r1) = ctx->r25;
    // 0x8007A0CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007A0D0: jal         0x800A35EC
    // 0x8007A0D4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_800A35EC(rdram, ctx);
        goto after_1;
    // 0x8007A0D4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_1:
    // 0x8007A0D8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8007A0DC: lbu         $t0, -0x1108($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1108);
    // 0x8007A0E0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8007A0E4: slti        $at, $t0, 0x7
    ctx->r1 = SIGNED(ctx->r8) < 0X7 ? 1 : 0;
    // 0x8007A0E8: beq         $at, $zero, L_8007A0F8
    if (ctx->r1 == 0) {
        // 0x8007A0EC: nop
    
            goto L_8007A0F8;
    }
    // 0x8007A0EC: nop

    // 0x8007A0F0: b           L_8007A0FC
    // 0x8007A0F4: addiu       $s0, $zero, 0x7
    ctx->r16 = ADD32(0, 0X7);
        goto L_8007A0FC;
    // 0x8007A0F4: addiu       $s0, $zero, 0x7
    ctx->r16 = ADD32(0, 0X7);
L_8007A0F8:
    // 0x8007A0F8: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
L_8007A0FC:
    // 0x8007A0FC: div         $zero, $s1, $s0
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r16)));
    // 0x8007A100: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8007A104: lhu         $t5, 0x2E1C($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X2E1C);
    // 0x8007A108: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8007A10C: bne         $s0, $zero, L_8007A118
    if (ctx->r16 != 0) {
        // 0x8007A110: nop
    
            goto L_8007A118;
    }
    // 0x8007A110: nop

    // 0x8007A114: break       7
    do_break(2147983636);
L_8007A118:
    // 0x8007A118: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007A11C: bne         $s0, $at, L_8007A130
    if (ctx->r16 != ctx->r1) {
        // 0x8007A120: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8007A130;
    }
    // 0x8007A120: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007A124: bne         $s1, $at, L_8007A130
    if (ctx->r17 != ctx->r1) {
        // 0x8007A128: nop
    
            goto L_8007A130;
    }
    // 0x8007A128: nop

    // 0x8007A12C: break       6
    do_break(2147983660);
L_8007A130:
    // 0x8007A130: mfhi        $t1
    ctx->r9 = hi;
    // 0x8007A134: sh          $t1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r9;
    // 0x8007A138: lhu         $t2, 0x2A($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X2A);
    // 0x8007A13C: nop

    // 0x8007A140: sllv        $t4, $t3, $t2
    ctx->r12 = S32(ctx->r11 << (ctx->r10 & 31));
    // 0x8007A144: and         $t6, $t4, $t5
    ctx->r14 = ctx->r12 & ctx->r13;
    // 0x8007A148: beq         $t6, $zero, L_8007A1F8
    if (ctx->r14 == 0) {
        // 0x8007A14C: nop
    
            goto L_8007A1F8;
    }
    // 0x8007A14C: nop

L_8007A150:
    // 0x8007A150: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007A154: jal         0x800A35EC
    // 0x8007A158: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_800A35EC(rdram, ctx);
        goto after_2;
    // 0x8007A158: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_2:
    // 0x8007A15C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8007A160: lbu         $t8, -0x1108($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1108);
    // 0x8007A164: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8007A168: slti        $at, $t8, 0x7
    ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
    // 0x8007A16C: beq         $at, $zero, L_8007A17C
    if (ctx->r1 == 0) {
        // 0x8007A170: nop
    
            goto L_8007A17C;
    }
    // 0x8007A170: nop

    // 0x8007A174: b           L_8007A180
    // 0x8007A178: addiu       $s0, $zero, 0x7
    ctx->r16 = ADD32(0, 0X7);
        goto L_8007A180;
    // 0x8007A178: addiu       $s0, $zero, 0x7
    ctx->r16 = ADD32(0, 0X7);
L_8007A17C:
    // 0x8007A17C: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
L_8007A180:
    // 0x8007A180: div         $zero, $s1, $s0
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r16)));
    // 0x8007A184: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8007A188: bne         $s0, $zero, L_8007A194
    if (ctx->r16 != 0) {
        // 0x8007A18C: nop
    
            goto L_8007A194;
    }
    // 0x8007A18C: nop

    // 0x8007A190: break       7
    do_break(2147983760);
L_8007A194:
    // 0x8007A194: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007A198: bne         $s0, $at, L_8007A1AC
    if (ctx->r16 != ctx->r1) {
        // 0x8007A19C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8007A1AC;
    }
    // 0x8007A19C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007A1A0: bne         $s1, $at, L_8007A1AC
    if (ctx->r17 != ctx->r1) {
        // 0x8007A1A4: nop
    
            goto L_8007A1AC;
    }
    // 0x8007A1A4: nop

    // 0x8007A1A8: break       6
    do_break(2147983784);
L_8007A1AC:
    // 0x8007A1AC: lbu         $t9, -0x300($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X300);
    // 0x8007A1B0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007A1B4: sltiu       $s0, $t9, 0x1
    ctx->r16 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x8007A1B8: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8007A1BC: sb          $t0, -0x300($at)
    MEM_B(-0X300, ctx->r1) = ctx->r8;
    // 0x8007A1C0: mfhi        $t7
    ctx->r15 = hi;
    // 0x8007A1C4: sh          $t7, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r15;
    // 0x8007A1C8: beq         $s0, $zero, L_8007A1D8
    if (ctx->r16 == 0) {
        // 0x8007A1CC: nop
    
            goto L_8007A1D8;
    }
    // 0x8007A1CC: nop

    // 0x8007A1D0: b           L_8007A1F8
    // 0x8007A1D4: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
        goto L_8007A1F8;
    // 0x8007A1D4: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
L_8007A1D8:
    // 0x8007A1D8: lhu         $t1, 0x2A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X2A);
    // 0x8007A1DC: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8007A1E0: lhu         $t4, 0x2E1C($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X2E1C);
    // 0x8007A1E4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8007A1E8: sllv        $t2, $t3, $t1
    ctx->r10 = S32(ctx->r11 << (ctx->r9 & 31));
    // 0x8007A1EC: and         $t5, $t2, $t4
    ctx->r13 = ctx->r10 & ctx->r12;
    // 0x8007A1F0: bne         $t5, $zero, L_8007A150
    if (ctx->r13 != 0) {
        // 0x8007A1F4: nop
    
            goto L_8007A150;
    }
    // 0x8007A1F4: nop

L_8007A1F8:
    // 0x8007A1F8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8007A1FC: lbu         $t3, -0x1108($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1108);
    // 0x8007A200: lhu         $t8, 0x2A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X2A);
    // 0x8007A204: sll         $t1, $t3, 3
    ctx->r9 = S32(ctx->r11 << 3);
    // 0x8007A208: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x8007A20C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8007A210: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8007A214: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x8007A218: lhu         $t6, 0x2E1C($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X2E1C);
    // 0x8007A21C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8007A220: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x8007A224: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x8007A228: addu        $a2, $a2, $t4
    ctx->r6 = ADD32(ctx->r6, ctx->r12);
    // 0x8007A22C: sllv        $t9, $t7, $t8
    ctx->r25 = S32(ctx->r15 << (ctx->r24 & 31));
    // 0x8007A230: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007A234: lw          $a2, 0x2E20($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2E20);
    // 0x8007A238: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A23C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007A240: or          $t0, $t6, $t9
    ctx->r8 = ctx->r14 | ctx->r25;
    // 0x8007A244: sh          $t0, 0x2E1C($at)
    MEM_H(0X2E1C, ctx->r1) = ctx->r8;
    // 0x8007A248: jal         0x800B62D4
    // 0x8007A24C: addiu       $a1, $a1, -0x21FC
    ctx->r5 = ADD32(ctx->r5, -0X21FC);
    sprintf_recomp(rdram, ctx);
        goto after_3;
    // 0x8007A24C: addiu       $a1, $a1, -0x21FC
    ctx->r5 = ADD32(ctx->r5, -0X21FC);
    after_3:
    // 0x8007A250: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A254: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8007A258: sb          $zero, 0x9($t5)
    MEM_B(0X9, ctx->r13) = 0;
    // 0x8007A25C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A260: nop

    // 0x8007A264: sb          $zero, 0xA($t7)
    MEM_B(0XA, ctx->r15) = 0;
    // 0x8007A268: lbu         $t6, 0x37($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X37);
    // 0x8007A26C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A270: sllv        $t0, $t9, $t6
    ctx->r8 = S32(ctx->r25 << (ctx->r14 & 31));
    // 0x8007A274: sll         $t3, $t0, 4
    ctx->r11 = S32(ctx->r8 << 4);
    // 0x8007A278: ori         $t8, $t3, 0xE
    ctx->r24 = ctx->r11 | 0XE;
    // 0x8007A27C: sb          $t8, 0xB($t1)
    MEM_B(0XB, ctx->r9) = ctx->r24;
    // 0x8007A280: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A284: nop

    // 0x8007A288: sw          $zero, 0x10($t2)
    MEM_W(0X10, ctx->r10) = 0;
    // 0x8007A28C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A290: nop

    // 0x8007A294: sw          $zero, 0x14($t4)
    MEM_W(0X14, ctx->r12) = 0;
    // 0x8007A298: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A29C: nop

    // 0x8007A2A0: sw          $zero, 0xC($t5)
    MEM_W(0XC, ctx->r13) = 0;
    // 0x8007A2A4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A2A8: lbu         $a0, 0x37($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X37);
    // 0x8007A2AC: jal         0x8007AB10
    // 0x8007A2B0: nop

    func_8007AB10(rdram, ctx);
        goto after_4;
    // 0x8007A2B0: nop

    after_4:
    // 0x8007A2B4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A2B8: jal         0x8007E328
    // 0x8007A2BC: nop

    func_8007E328(rdram, ctx);
        goto after_5;
    // 0x8007A2BC: nop

    after_5:
    // 0x8007A2C0: b           L_8007A48C
    // 0x8007A2C4: nop

        goto L_8007A48C;
    // 0x8007A2C4: nop

L_8007A2C8:
    // 0x8007A2C8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8007A2CC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8007A2D0: lbu         $t9, 0xB($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0XB);
    // 0x8007A2D4: nop

    // 0x8007A2D8: sra         $t6, $t9, 4
    ctx->r14 = S32(SIGNED(ctx->r25) >> 4);
    // 0x8007A2DC: andi        $t0, $t6, 0xF
    ctx->r8 = ctx->r14 & 0XF;
    // 0x8007A2E0: sb          $t0, 0x29($sp)
    MEM_B(0X29, ctx->r29) = ctx->r8;
    // 0x8007A2E4: lbu         $s0, 0xB($t7)
    ctx->r16 = MEM_BU(ctx->r15, 0XB);
    // 0x8007A2E8: nop

    // 0x8007A2EC: andi        $t3, $s0, 0xF
    ctx->r11 = ctx->r16 & 0XF;
    // 0x8007A2F0: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x8007A2F4: beq         $s0, $at, L_8007A34C
    if (ctx->r16 == ctx->r1) {
        // 0x8007A2F8: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_8007A34C;
    }
    // 0x8007A2F8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8007A2FC: beq         $s0, $at, L_8007A450
    if (ctx->r16 == ctx->r1) {
        // 0x8007A300: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_8007A450;
    }
    // 0x8007A300: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8007A304: bne         $s0, $at, L_8007A48C
    if (ctx->r16 != ctx->r1) {
        // 0x8007A308: nop
    
            goto L_8007A48C;
    }
    // 0x8007A308: nop

    // 0x8007A30C: lbu         $a0, 0x37($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X37);
    // 0x8007A310: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8007A314: jal         0x8007AB10
    // 0x8007A318: nop

    func_8007AB10(rdram, ctx);
        goto after_6;
    // 0x8007A318: nop

    after_6:
    // 0x8007A31C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8007A320: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007A324: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x8007A328: nop

    // 0x8007A32C: sb          $t8, 0xD0($t2)
    MEM_B(0XD0, ctx->r10) = ctx->r24;
    // 0x8007A330: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8007A334: nop

    // 0x8007A338: lbu         $t5, 0xB($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0XB);
    // 0x8007A33C: nop

    // 0x8007A340: andi        $t9, $t5, 0xF
    ctx->r25 = ctx->r13 & 0XF;
    // 0x8007A344: b           L_8007A48C
    // 0x8007A348: sb          $t9, 0xB($t4)
    MEM_B(0XB, ctx->r12) = ctx->r25;
        goto L_8007A48C;
    // 0x8007A348: sb          $t9, 0xB($t4)
    MEM_B(0XB, ctx->r12) = ctx->r25;
L_8007A34C:
    // 0x8007A34C: lbu         $t6, 0x29($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X29);
    // 0x8007A350: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8007A354: sll         $t0, $t6, 4
    ctx->r8 = S32(ctx->r14 << 4);
    // 0x8007A358: ori         $t7, $t0, 0xD
    ctx->r15 = ctx->r8 | 0XD;
    // 0x8007A35C: sb          $t7, 0xB($t3)
    MEM_B(0XB, ctx->r11) = ctx->r15;
    // 0x8007A360: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8007A364: lbu         $t1, 0x29($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X29);
    // 0x8007A368: lw          $t9, 0xC($t5)
    ctx->r25 = MEM_W(ctx->r13, 0XC);
    // 0x8007A36C: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x8007A370: ori         $t2, $t8, 0xD
    ctx->r10 = ctx->r24 | 0XD;
    // 0x8007A374: sb          $t2, 0xD4($t9)
    MEM_B(0XD4, ctx->r25) = ctx->r10;
    // 0x8007A378: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8007A37C: nop

    // 0x8007A380: lbu         $t6, 0x9($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X9);
    // 0x8007A384: lw          $t0, 0xC($t4)
    ctx->r8 = MEM_W(ctx->r12, 0XC);
    // 0x8007A388: nop

    // 0x8007A38C: sb          $t6, 0x9($t0)
    MEM_B(0X9, ctx->r8) = ctx->r14;
    // 0x8007A390: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8007A394: nop

    // 0x8007A398: lbu         $t3, 0xA($t7)
    ctx->r11 = MEM_BU(ctx->r15, 0XA);
    // 0x8007A39C: lw          $t1, 0xC($t7)
    ctx->r9 = MEM_W(ctx->r15, 0XC);
    // 0x8007A3A0: nop

    // 0x8007A3A4: sb          $t3, 0xA($t1)
    MEM_B(0XA, ctx->r9) = ctx->r11;
    // 0x8007A3A8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8007A3AC: lbu         $a0, 0x37($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X37);
    // 0x8007A3B0: jal         0x8007AB10
    // 0x8007A3B4: nop

    func_8007AB10(rdram, ctx);
        goto after_7;
    // 0x8007A3B4: nop

    after_7:
    // 0x8007A3B8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007A3BC: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x8007A3C0: jal         0x8007A5D4
    // 0x8007A3C4: nop

    func_8007A5D4(rdram, ctx);
        goto after_8;
    // 0x8007A3C4: nop

    after_8:
    // 0x8007A3C8: lbu         $t8, 0x37($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X37);
    // 0x8007A3CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007A3D0: sll         $t5, $t8, 3
    ctx->r13 = S32(ctx->r24 << 3);
    // 0x8007A3D4: subu        $t5, $t5, $t8
    ctx->r13 = SUB32(ctx->r13, ctx->r24);
    // 0x8007A3D8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8007A3DC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8007A3E0: subu        $t5, $t5, $t8
    ctx->r13 = SUB32(ctx->r13, ctx->r24);
    // 0x8007A3E4: lw          $a1, -0x310($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X310);
    // 0x8007A3E8: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x8007A3EC: sll         $a2, $s0, 4
    ctx->r6 = S32(ctx->r16 << 4);
    // 0x8007A3F0: ori         $at, $zero, 0xE13C
    ctx->r1 = 0 | 0XE13C;
    // 0x8007A3F4: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8007A3F8: addiu       $t9, $t9, 0xA00
    ctx->r25 = ADD32(ctx->r25, 0XA00);
    // 0x8007A3FC: addu        $t2, $t5, $at
    ctx->r10 = ADD32(ctx->r13, ctx->r1);
    // 0x8007A400: subu        $a2, $a2, $s0
    ctx->r6 = SUB32(ctx->r6, ctx->r16);
    // 0x8007A404: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x8007A408: addu        $a0, $t2, $t9
    ctx->r4 = ADD32(ctx->r10, ctx->r25);
    // 0x8007A40C: jal         0x8007AF88
    // 0x8007A410: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_8007AF88(rdram, ctx);
        goto after_9;
    // 0x8007A410: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_9:
    // 0x8007A414: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007A418: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x8007A41C: jal         0x8007A5D4
    // 0x8007A420: nop

    func_8007A5D4(rdram, ctx);
        goto after_10;
    // 0x8007A420: nop

    after_10:
    // 0x8007A424: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007A428: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x8007A42C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007A430: jal         0x8007A648
    // 0x8007A434: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8007A648(rdram, ctx);
        goto after_11;
    // 0x8007A434: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x8007A438: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007A43C: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x8007A440: jal         0x8007C5CC
    // 0x8007A444: nop

    func_8007C5CC(rdram, ctx);
        goto after_12;
    // 0x8007A444: nop

    after_12:
    // 0x8007A448: b           L_8007A48C
    // 0x8007A44C: nop

        goto L_8007A48C;
    // 0x8007A44C: nop

L_8007A450:
    // 0x8007A450: lbu         $a0, 0x37($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X37);
    // 0x8007A454: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8007A458: jal         0x8007AB10
    // 0x8007A45C: nop

    func_8007AB10(rdram, ctx);
        goto after_13;
    // 0x8007A45C: nop

    after_13:
    // 0x8007A460: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8007A464: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8007A468: lbu         $t6, 0xB($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0XB);
    // 0x8007A46C: nop

    // 0x8007A470: andi        $t0, $t6, 0xF
    ctx->r8 = ctx->r14 & 0XF;
    // 0x8007A474: sb          $t0, 0xB($t4)
    MEM_B(0XB, ctx->r12) = ctx->r8;
    // 0x8007A478: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8007A47C: nop

    // 0x8007A480: lw          $t1, 0xC($t3)
    ctx->r9 = MEM_W(ctx->r11, 0XC);
    // 0x8007A484: nop

    // 0x8007A488: sb          $t7, 0xD0($t1)
    MEM_B(0XD0, ctx->r9) = ctx->r15;
L_8007A48C:
    // 0x8007A48C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A490: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8007A494: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8007A498: jr          $ra
    // 0x8007A49C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8007A49C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8007A4A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A4A0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8007A4A4: lw          $t6, 0x1F10($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F10);
    // 0x8007A4A8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007A4AC: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x8007A4B0: lbu         $t8, -0x1($t7)
    ctx->r24 = MEM_BU(ctx->r15, -0X1);
    // 0x8007A4B4: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    // 0x8007A4B8: sb          $t8, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r24;
L_8007A4BC:
    // 0x8007A4BC: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x8007A4C0: lbu         $t9, 0x7($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X7);
    // 0x8007A4C4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8007A4C8: sllv        $t2, $t1, $t0
    ctx->r10 = S32(ctx->r9 << (ctx->r8 & 31));
    // 0x8007A4CC: and         $t3, $t9, $t2
    ctx->r11 = ctx->r25 & ctx->r10;
    // 0x8007A4D0: bne         $t3, $zero, L_8007A4E4
    if (ctx->r11 != 0) {
        // 0x8007A4D4: nop
    
            goto L_8007A4E4;
    }
    // 0x8007A4D4: nop

    // 0x8007A4D8: lb          $v0, 0x3($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X3);
    // 0x8007A4DC: b           L_8007A500
    // 0x8007A4E0: nop

        goto L_8007A500;
    // 0x8007A4E0: nop

L_8007A4E4:
    // 0x8007A4E4: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x8007A4E8: nop

    // 0x8007A4EC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8007A4F0: slti        $at, $t5, 0x20
    ctx->r1 = SIGNED(ctx->r13) < 0X20 ? 1 : 0;
    // 0x8007A4F4: bne         $at, $zero, L_8007A4BC
    if (ctx->r1 != 0) {
        // 0x8007A4F8: sw          $t5, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r13;
            goto L_8007A4BC;
    }
    // 0x8007A4F8: sw          $t5, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r13;
    // 0x8007A4FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8007A500:
    // 0x8007A500: jr          $ra
    // 0x8007A504: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007A504: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007A508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A508: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8007A50C: lw          $t6, 0x1F10($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F10);
    // 0x8007A510: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8007A514: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8007A518: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x8007A51C: lbu         $t8, -0x1($t7)
    ctx->r24 = MEM_BU(ctx->r15, -0X1);
    // 0x8007A520: sllv        $t0, $t9, $a1
    ctx->r8 = S32(ctx->r25 << (ctx->r5 & 31));
    // 0x8007A524: nor         $t1, $t0, $zero
    ctx->r9 = ~(ctx->r8 | 0);
    // 0x8007A528: addu        $t3, $a0, $t6
    ctx->r11 = ADD32(ctx->r4, ctx->r14);
    // 0x8007A52C: and         $t2, $t8, $t1
    ctx->r10 = ctx->r24 & ctx->r9;
    // 0x8007A530: jr          $ra
    // 0x8007A534: sb          $t2, -0x1($t3)
    MEM_B(-0X1, ctx->r11) = ctx->r10;
    return;
    // 0x8007A534: sb          $t2, -0x1($t3)
    MEM_B(-0X1, ctx->r11) = ctx->r10;
;}
RECOMP_FUNC void func_8007A538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A538: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8007A53C: lw          $t6, 0x1F10($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F10);
    // 0x8007A540: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8007A544: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x8007A548: lbu         $t8, -0x1($t7)
    ctx->r24 = MEM_BU(ctx->r15, -0X1);
    // 0x8007A54C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8007A550: sllv        $t0, $t9, $a1
    ctx->r8 = S32(ctx->r25 << (ctx->r5 & 31));
    // 0x8007A554: addu        $t2, $a0, $t6
    ctx->r10 = ADD32(ctx->r4, ctx->r14);
    // 0x8007A558: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x8007A55C: jr          $ra
    // 0x8007A560: sb          $t1, -0x1($t2)
    MEM_B(-0X1, ctx->r10) = ctx->r9;
    return;
    // 0x8007A560: sb          $t1, -0x1($t2)
    MEM_B(-0X1, ctx->r10) = ctx->r9;
;}
RECOMP_FUNC void func_8007A564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A564: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8007A568: lw          $t6, 0x1F10($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F10);
    // 0x8007A56C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8007A570: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x8007A574: lbu         $t8, -0x1($t7)
    ctx->r24 = MEM_BU(ctx->r15, -0X1);
    // 0x8007A578: sb          $zero, 0x7($sp)
    MEM_B(0X7, ctx->r29) = 0;
    // 0x8007A57C: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
    // 0x8007A580: sb          $t8, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r24;
L_8007A584:
    // 0x8007A584: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x8007A588: lbu         $t9, 0xF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XF);
    // 0x8007A58C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8007A590: sllv        $t2, $t1, $t0
    ctx->r10 = S32(ctx->r9 << (ctx->r8 & 31));
    // 0x8007A594: and         $t3, $t9, $t2
    ctx->r11 = ctx->r25 & ctx->r10;
    // 0x8007A598: beq         $t3, $zero, L_8007A5B0
    if (ctx->r11 == 0) {
        // 0x8007A59C: nop
    
            goto L_8007A5B0;
    }
    // 0x8007A59C: nop

    // 0x8007A5A0: lbu         $t4, 0x7($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X7);
    // 0x8007A5A4: nop

    // 0x8007A5A8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8007A5AC: sb          $t5, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r13;
L_8007A5B0:
    // 0x8007A5B0: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x8007A5B4: nop

    // 0x8007A5B8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8007A5BC: slti        $at, $t7, 0x20
    ctx->r1 = SIGNED(ctx->r15) < 0X20 ? 1 : 0;
    // 0x8007A5C0: bne         $at, $zero, L_8007A584
    if (ctx->r1 != 0) {
        // 0x8007A5C4: sw          $t7, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r15;
            goto L_8007A584;
    }
    // 0x8007A5C4: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x8007A5C8: lbu         $v0, 0x7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7);
    // 0x8007A5CC: jr          $ra
    // 0x8007A5D0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8007A5D0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8007A5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A5D4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8007A5D8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007A5DC: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    // 0x8007A5E0: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
L_8007A5E4:
    // 0x8007A5E4: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8007A5E8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8007A5EC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007A5F0: sllv        $t9, $t8, $t7
    ctx->r25 = S32(ctx->r24 << (ctx->r15 & 31));
    // 0x8007A5F4: and         $t1, $t9, $t0
    ctx->r9 = ctx->r25 & ctx->r8;
    // 0x8007A5F8: bne         $t1, $zero, L_8007A608
    if (ctx->r9 != 0) {
        // 0x8007A5FC: nop
    
            goto L_8007A608;
    }
    // 0x8007A5FC: nop

    // 0x8007A600: b           L_8007A624
    // 0x8007A604: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_8007A624;
    // 0x8007A604: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8007A608:
    // 0x8007A608: lw          $t2, 0x0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X0);
    // 0x8007A60C: nop

    // 0x8007A610: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8007A614: slti        $at, $t3, 0x20
    ctx->r1 = SIGNED(ctx->r11) < 0X20 ? 1 : 0;
    // 0x8007A618: bne         $at, $zero, L_8007A5E4
    if (ctx->r1 != 0) {
        // 0x8007A61C: sw          $t3, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r11;
            goto L_8007A5E4;
    }
    // 0x8007A61C: sw          $t3, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r11;
    // 0x8007A620: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8007A624:
    // 0x8007A624: jr          $ra
    // 0x8007A628: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007A628: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007A62C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A62C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8007A630: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8007A634: sllv        $t8, $t7, $a1
    ctx->r24 = S32(ctx->r15 << (ctx->r5 & 31));
    // 0x8007A638: nor         $t9, $t8, $zero
    ctx->r25 = ~(ctx->r24 | 0);
    // 0x8007A63C: and         $t0, $t6, $t9
    ctx->r8 = ctx->r14 & ctx->r25;
    // 0x8007A640: jr          $ra
    // 0x8007A644: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    return;
    // 0x8007A644: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void func_8007A648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A648: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8007A64C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8007A650: sllv        $t8, $t7, $a1
    ctx->r24 = S32(ctx->r15 << (ctx->r5 & 31));
    // 0x8007A654: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x8007A658: jr          $ra
    // 0x8007A65C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    return;
    // 0x8007A65C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_8007A660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A660: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8007A664: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8007A668: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
    // 0x8007A66C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x8007A670: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
L_8007A674:
    // 0x8007A674: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x8007A678: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8007A67C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007A680: sllv        $t9, $t8, $t7
    ctx->r25 = S32(ctx->r24 << (ctx->r15 & 31));
    // 0x8007A684: and         $t1, $t9, $t0
    ctx->r9 = ctx->r25 & ctx->r8;
    // 0x8007A688: beq         $t1, $zero, L_8007A6A0
    if (ctx->r9 == 0) {
        // 0x8007A68C: nop
    
            goto L_8007A6A0;
    }
    // 0x8007A68C: nop

    // 0x8007A690: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8007A694: nop

    // 0x8007A698: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8007A69C: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
L_8007A6A0:
    // 0x8007A6A0: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x8007A6A4: nop

    // 0x8007A6A8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8007A6AC: sltiu       $at, $t5, 0x20
    ctx->r1 = ctx->r13 < 0X20 ? 1 : 0;
    // 0x8007A6B0: bne         $at, $zero, L_8007A674
    if (ctx->r1 != 0) {
        // 0x8007A6B4: sw          $t5, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r13;
            goto L_8007A674;
    }
    // 0x8007A6B4: sw          $t5, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r13;
    // 0x8007A6B8: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x8007A6BC: jr          $ra
    // 0x8007A6C0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8007A6C0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8007A6C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A6C4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007A6C8: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8007A6CC: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_8007A6D0:
    // 0x8007A6D0: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8007A6D4: nop

    // 0x8007A6D8: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8007A6DC: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x8007A6E0: addu        $t9, $a1, $t6
    ctx->r25 = ADD32(ctx->r5, ctx->r14);
    // 0x8007A6E4: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
    // 0x8007A6E8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8007A6EC: nop

    // 0x8007A6F0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8007A6F4: slti        $at, $t1, 0x8
    ctx->r1 = SIGNED(ctx->r9) < 0X8 ? 1 : 0;
    // 0x8007A6F8: bne         $at, $zero, L_8007A6D0
    if (ctx->r1 != 0) {
        // 0x8007A6FC: sw          $t1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r9;
            goto L_8007A6D0;
    }
    // 0x8007A6FC: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x8007A700: sb          $zero, 0x8($a1)
    MEM_B(0X8, ctx->r5) = 0;
    // 0x8007A704: lbu         $t2, 0x9($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X9);
    // 0x8007A708: nop

    // 0x8007A70C: sb          $t2, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r10;
    // 0x8007A710: lbu         $t3, 0xA($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XA);
    // 0x8007A714: sw          $a0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r4;
    // 0x8007A718: lw          $t4, 0xC($a1)
    ctx->r12 = MEM_W(ctx->r5, 0XC);
    // 0x8007A71C: sb          $a2, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r6;
    // 0x8007A720: sb          $t3, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r11;
    // 0x8007A724: sb          $a2, 0xD4($t4)
    MEM_B(0XD4, ctx->r12) = ctx->r6;
    // 0x8007A728: sw          $zero, 0x10($a1)
    MEM_W(0X10, ctx->r5) = 0;
    // 0x8007A72C: sw          $zero, 0x14($a1)
    MEM_W(0X14, ctx->r5) = 0;
    // 0x8007A730: jr          $ra
    // 0x8007A734: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007A734: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007A738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A738: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007A73C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A740: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8007A744: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8007A748: jal         0x8007E03C
    // 0x8007A74C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x8007A74C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_0:
    // 0x8007A750: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8007A754: jal         0x8007E03C
    // 0x8007A758: addiu       $a0, $zero, 0xD8
    ctx->r4 = ADD32(0, 0XD8);
    func_8007E03C(rdram, ctx);
        goto after_1;
    // 0x8007A758: addiu       $a0, $zero, 0xD8
    ctx->r4 = ADD32(0, 0XD8);
    after_1:
    // 0x8007A75C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007A760: nop

    // 0x8007A764: sw          $v0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r2;
    // 0x8007A768: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8007A76C: nop

    // 0x8007A770: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x8007A774: jal         0x800B6550
    // 0x8007A778: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    osGetTime_recomp(rdram, ctx);
        goto after_2;
    // 0x8007A778: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    after_2:
    // 0x8007A77C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8007A780: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8007A784: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A788: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007A78C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8007A790: jal         0x800B7658
    // 0x8007A794: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    __ll_mul_recomp(rdram, ctx);
        goto after_3;
    // 0x8007A794: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_3:
    // 0x8007A798: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8007A79C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8007A7A0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8007A7A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007A7A8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8007A7AC: jal         0x800B7558
    // 0x8007A7B0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    __ull_div_recomp(rdram, ctx);
        goto after_4;
    // 0x8007A7B0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_4:
    // 0x8007A7B4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8007A7B8: or          $t9, $v1, $zero
    ctx->r25 = ctx->r3 | 0;
    // 0x8007A7BC: srl         $t0, $t9, 4
    ctx->r8 = S32(U32(ctx->r25) >> 4);
    // 0x8007A7C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007A7C4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8007A7C8: jal         0x800A35EC
    // 0x8007A7CC: sb          $t0, 0x9($t1)
    MEM_B(0X9, ctx->r9) = ctx->r8;
    func_800A35EC(rdram, ctx);
        goto after_5;
    // 0x8007A7CC: sb          $t0, 0x9($t1)
    MEM_B(0X9, ctx->r9) = ctx->r8;
    after_5:
    // 0x8007A7D0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8007A7D4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8007A7D8: sb          $v0, 0xA($t2)
    MEM_B(0XA, ctx->r10) = ctx->r2;
    // 0x8007A7DC: lbu         $t3, 0x3F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X3F);
    // 0x8007A7E0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8007A7E4: sllv        $t5, $t4, $t3
    ctx->r13 = S32(ctx->r12 << (ctx->r11 & 31));
    // 0x8007A7E8: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x8007A7EC: ori         $t7, $t6, 0xB
    ctx->r15 = ctx->r14 | 0XB;
    // 0x8007A7F0: sb          $t7, 0xB($t8)
    MEM_B(0XB, ctx->r24) = ctx->r15;
    // 0x8007A7F4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8007A7F8: addiu       $t9, $zero, 0x41
    ctx->r25 = ADD32(0, 0X41);
    // 0x8007A7FC: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
    // 0x8007A800: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8007A804: nop

    // 0x8007A808: sb          $zero, 0x1($t1)
    MEM_B(0X1, ctx->r9) = 0;
    // 0x8007A80C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8007A810: nop

    // 0x8007A814: sb          $zero, 0x2($t2)
    MEM_B(0X2, ctx->r10) = 0;
    // 0x8007A818: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8007A81C: nop

    // 0x8007A820: sb          $zero, 0x3($t4)
    MEM_B(0X3, ctx->r12) = 0;
    // 0x8007A824: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8007A828: nop

    // 0x8007A82C: sb          $zero, 0x4($t3)
    MEM_B(0X4, ctx->r11) = 0;
    // 0x8007A830: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8007A834: nop

    // 0x8007A838: sb          $zero, 0x5($t5)
    MEM_B(0X5, ctx->r13) = 0;
    // 0x8007A83C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007A840: nop

    // 0x8007A844: sb          $zero, 0x6($t6)
    MEM_B(0X6, ctx->r14) = 0;
    // 0x8007A848: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8007A84C: nop

    // 0x8007A850: sb          $zero, 0x7($t7)
    MEM_B(0X7, ctx->r15) = 0;
    // 0x8007A854: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8007A858: nop

    // 0x8007A85C: sb          $zero, 0x8($t8)
    MEM_B(0X8, ctx->r24) = 0;
    // 0x8007A860: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8007A864: nop

    // 0x8007A868: sw          $zero, 0x10($t9)
    MEM_W(0X10, ctx->r25) = 0;
    // 0x8007A86C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8007A870: nop

    // 0x8007A874: sw          $zero, 0x14($t0)
    MEM_W(0X14, ctx->r8) = 0;
    // 0x8007A878: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8007A87C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A880: lbu         $t2, 0x9($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X9);
    // 0x8007A884: nop

    // 0x8007A888: sb          $t2, 0x9($t4)
    MEM_B(0X9, ctx->r12) = ctx->r10;
    // 0x8007A88C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8007A890: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A894: lbu         $t5, 0xA($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0XA);
    // 0x8007A898: nop

    // 0x8007A89C: sb          $t5, 0xA($t6)
    MEM_B(0XA, ctx->r14) = ctx->r13;
    // 0x8007A8A0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A8A4: nop

    // 0x8007A8A8: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x8007A8AC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A8B0: nop

    // 0x8007A8B4: sb          $zero, 0x1($t8)
    MEM_B(0X1, ctx->r24) = 0;
    // 0x8007A8B8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A8BC: nop

    // 0x8007A8C0: sb          $zero, 0x2($t9)
    MEM_B(0X2, ctx->r25) = 0;
    // 0x8007A8C4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A8C8: nop

    // 0x8007A8CC: sb          $zero, 0x3($t0)
    MEM_B(0X3, ctx->r8) = 0;
    // 0x8007A8D0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A8D4: nop

    // 0x8007A8D8: sb          $zero, 0x4($t1)
    MEM_B(0X4, ctx->r9) = 0;
    // 0x8007A8DC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A8E0: nop

    // 0x8007A8E4: sb          $zero, 0x5($t2)
    MEM_B(0X5, ctx->r10) = 0;
    // 0x8007A8E8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A8EC: nop

    // 0x8007A8F0: sb          $zero, 0x6($t4)
    MEM_B(0X6, ctx->r12) = 0;
    // 0x8007A8F4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A8F8: nop

    // 0x8007A8FC: sb          $zero, 0x7($t3)
    MEM_B(0X7, ctx->r11) = 0;
    // 0x8007A900: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A904: nop

    // 0x8007A908: sb          $zero, 0x8($t5)
    MEM_B(0X8, ctx->r13) = 0;
    // 0x8007A90C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A910: nop

    // 0x8007A914: sb          $zero, 0xB($t6)
    MEM_B(0XB, ctx->r14) = 0;
    // 0x8007A918: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_8007A91C:
    // 0x8007A91C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8007A920: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A924: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8007A928: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8007A92C: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
    // 0x8007A930: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8007A934: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A938: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8007A93C: addu        $t3, $t1, $t4
    ctx->r11 = ADD32(ctx->r9, ctx->r12);
    // 0x8007A940: sw          $zero, 0x20($t3)
    MEM_W(0X20, ctx->r11) = 0;
    // 0x8007A944: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8007A948: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A94C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8007A950: addu        $t7, $t5, $t8
    ctx->r15 = ADD32(ctx->r13, ctx->r24);
    // 0x8007A954: sw          $zero, 0x34($t7)
    MEM_W(0X34, ctx->r15) = 0;
    // 0x8007A958: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007A95C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A960: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x8007A964: addu        $t1, $t9, $t2
    ctx->r9 = ADD32(ctx->r25, ctx->r10);
    // 0x8007A968: sw          $zero, 0x48($t1)
    MEM_W(0X48, ctx->r9) = 0;
    // 0x8007A96C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8007A970: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A974: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x8007A978: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x8007A97C: sw          $zero, 0x5C($t5)
    MEM_W(0X5C, ctx->r13) = 0;
    // 0x8007A980: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8007A984: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A988: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x8007A98C: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x8007A990: sw          $zero, 0x70($t9)
    MEM_W(0X70, ctx->r25) = 0;
    // 0x8007A994: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8007A998: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A99C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8007A9A0: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8007A9A4: sw          $zero, 0x84($t4)
    MEM_W(0X84, ctx->r12) = 0;
    // 0x8007A9A8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8007A9AC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A9B0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8007A9B4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8007A9B8: sw          $zero, 0x98($t8)
    MEM_W(0X98, ctx->r24) = 0;
    // 0x8007A9BC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8007A9C0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A9C4: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8007A9C8: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8007A9CC: sw          $zero, 0xAC($t2)
    MEM_W(0XAC, ctx->r10) = 0;
    // 0x8007A9D0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8007A9D4: nop

    // 0x8007A9D8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8007A9DC: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x8007A9E0: bne         $at, $zero, L_8007A91C
    if (ctx->r1 != 0) {
        // 0x8007A9E4: sw          $t4, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r12;
            goto L_8007A91C;
    }
    // 0x8007A9E4: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x8007A9E8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A9EC: nop

    // 0x8007A9F0: sh          $zero, 0xC0($t5)
    MEM_H(0XC0, ctx->r13) = 0;
    // 0x8007A9F4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8007A9F8: nop

    // 0x8007A9FC: sh          $zero, 0xC2($t6)
    MEM_H(0XC2, ctx->r14) = 0;
    // 0x8007AA00: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8007AA04: nop

    // 0x8007AA08: sw          $zero, 0xC4($t7)
    MEM_W(0XC4, ctx->r15) = 0;
    // 0x8007AA0C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8007AA10: nop

    // 0x8007AA14: sw          $zero, 0xC8($t8)
    MEM_W(0XC8, ctx->r24) = 0;
    // 0x8007AA18: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8007AA1C: nop

    // 0x8007AA20: sw          $zero, 0xCC($t9)
    MEM_W(0XCC, ctx->r25) = 0;
    // 0x8007AA24: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8007AA28: nop

    // 0x8007AA2C: sb          $zero, 0xD0($t0)
    MEM_B(0XD0, ctx->r8) = 0;
    // 0x8007AA30: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8007AA34: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007AA38: jal         0x80079F90
    // 0x8007AA3C: nop

    func_80079F90(rdram, ctx);
        goto after_6;
    // 0x8007AA3C: nop

    after_6:
    // 0x8007AA40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007AA44: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8007AA48: jr          $ra
    // 0x8007AA4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8007AA4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8007AA50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AA50: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8007AA54: jr          $ra
    // 0x8007AA58: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x8007AA58: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8007AA5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AA5C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007AA60: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
L_8007AA64:
    // 0x8007AA64: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8007AA68: lbu         $t6, 0x9($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X9);
    // 0x8007AA6C: lbu         $t8, 0x9($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X9);
    // 0x8007AA70: nop

    // 0x8007AA74: bne         $t6, $t8, L_8007AAAC
    if (ctx->r14 != ctx->r24) {
        // 0x8007AA78: nop
    
            goto L_8007AAAC;
    }
    // 0x8007AA78: nop

    // 0x8007AA7C: lbu         $t9, 0xA($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0XA);
    // 0x8007AA80: lbu         $t0, 0xA($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0XA);
    // 0x8007AA84: nop

    // 0x8007AA88: bne         $t9, $t0, L_8007AAAC
    if (ctx->r25 != ctx->r8) {
        // 0x8007AA8C: nop
    
            goto L_8007AAAC;
    }
    // 0x8007AA8C: nop

    // 0x8007AA90: lbu         $t1, 0x0($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X0);
    // 0x8007AA94: lbu         $t2, 0x0($t7)
    ctx->r10 = MEM_BU(ctx->r15, 0X0);
    // 0x8007AA98: nop

    // 0x8007AA9C: bne         $t1, $t2, L_8007AAAC
    if (ctx->r9 != ctx->r10) {
        // 0x8007AAA0: nop
    
            goto L_8007AAAC;
    }
    // 0x8007AAA0: nop

    // 0x8007AAA4: b           L_8007AAD4
    // 0x8007AAA8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_8007AAD4;
    // 0x8007AAA8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8007AAAC:
    // 0x8007AAAC: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8007AAB0: nop

    // 0x8007AAB4: lw          $t4, 0x10($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X10);
    // 0x8007AAB8: nop

    // 0x8007AABC: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x8007AAC0: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8007AAC4: nop

    // 0x8007AAC8: bne         $t5, $a0, L_8007AA64
    if (ctx->r13 != ctx->r4) {
        // 0x8007AACC: nop
    
            goto L_8007AA64;
    }
    // 0x8007AACC: nop

    // 0x8007AAD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8007AAD4:
    // 0x8007AAD4: jr          $ra
    // 0x8007AAD8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007AAD8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007AADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AADC: lbu         $t6, 0x6($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X6);
    // 0x8007AAE0: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8007AAE4: bne         $t6, $a1, L_8007AB04
    if (ctx->r14 != ctx->r5) {
        // 0x8007AAE8: andi        $a2, $a2, 0xFF
        ctx->r6 = ctx->r6 & 0XFF;
            goto L_8007AB04;
    }
    // 0x8007AAE8: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8007AAEC: lbu         $t7, 0x7($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X7);
    // 0x8007AAF0: nop

    // 0x8007AAF4: bne         $t7, $a2, L_8007AB04
    if (ctx->r15 != ctx->r6) {
        // 0x8007AAF8: nop
    
            goto L_8007AB04;
    }
    // 0x8007AAF8: nop

    // 0x8007AAFC: jr          $ra
    // 0x8007AB00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8007AB00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007AB04:
    // 0x8007AB04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8007AB08: jr          $ra
    // 0x8007AB0C: nop

    return;
    // 0x8007AB0C: nop

;}
RECOMP_FUNC void func_8007AB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AB10: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8007AB14: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8007AB18: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8007AB1C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8007AB20: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8007AB24: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8007AB28: ori         $at, $zero, 0xE13C
    ctx->r1 = 0 | 0XE13C;
    // 0x8007AB2C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8007AB30: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007AB34: addiu       $t8, $t8, 0xA00
    ctx->r24 = ADD32(ctx->r24, 0XA00);
    // 0x8007AB38: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x8007AB3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007AB40: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    // 0x8007AB44: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_8007AB48:
    // 0x8007AB48: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8007AB4C: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x8007AB50: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x8007AB54: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x8007AB58: addu        $t4, $t3, $t0
    ctx->r12 = ADD32(ctx->r11, ctx->r8);
    // 0x8007AB5C: sb          $t2, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r10;
    // 0x8007AB60: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8007AB64: nop

    // 0x8007AB68: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8007AB6C: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x8007AB70: bne         $at, $zero, L_8007AB48
    if (ctx->r1 != 0) {
        // 0x8007AB74: sw          $t6, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r14;
            goto L_8007AB48;
    }
    // 0x8007AB74: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8007AB78: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8007AB7C: nop

    // 0x8007AB80: sb          $zero, 0x8($t7)
    MEM_B(0X8, ctx->r15) = 0;
    // 0x8007AB84: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x8007AB88: lbu         $t8, 0x9($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X9);
    // 0x8007AB8C: nop

    // 0x8007AB90: sb          $t8, 0x9($t9)
    MEM_B(0X9, ctx->r25) = ctx->r24;
    // 0x8007AB94: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x8007AB98: lbu         $t1, 0xA($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0XA);
    // 0x8007AB9C: nop

    // 0x8007ABA0: sb          $t1, 0xA($t3)
    MEM_B(0XA, ctx->r11) = ctx->r9;
    // 0x8007ABA4: lw          $t2, 0x0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X0);
    // 0x8007ABA8: lbu         $t0, 0xB($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0XB);
    // 0x8007ABAC: nop

    // 0x8007ABB0: sb          $t0, 0xD4($t2)
    MEM_B(0XD4, ctx->r10) = ctx->r8;
    // 0x8007ABB4: lw          $t4, 0xC($a1)
    ctx->r12 = MEM_W(ctx->r5, 0XC);
    // 0x8007ABB8: nop

    // 0x8007ABBC: beq         $t4, $zero, L_8007AD84
    if (ctx->r12 == 0) {
        // 0x8007ABC0: nop
    
            goto L_8007AD84;
    }
    // 0x8007ABC0: nop

    // 0x8007ABC4: lw          $t5, 0xC($a1)
    ctx->r13 = MEM_W(ctx->r5, 0XC);
    // 0x8007ABC8: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8007ABCC: lbu         $t6, 0xB($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XB);
    // 0x8007ABD0: nop

    // 0x8007ABD4: sb          $t6, 0xB($t7)
    MEM_B(0XB, ctx->r15) = ctx->r14;
    // 0x8007ABD8: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_8007ABDC:
    // 0x8007ABDC: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8007ABE0: lw          $t8, 0xC($a1)
    ctx->r24 = MEM_W(ctx->r5, 0XC);
    // 0x8007ABE4: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8007ABE8: lw          $t2, 0x0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X0);
    // 0x8007ABEC: addu        $t3, $t8, $t1
    ctx->r11 = ADD32(ctx->r24, ctx->r9);
    // 0x8007ABF0: lw          $t0, 0xC($t3)
    ctx->r8 = MEM_W(ctx->r11, 0XC);
    // 0x8007ABF4: addu        $t4, $t2, $t1
    ctx->r12 = ADD32(ctx->r10, ctx->r9);
    // 0x8007ABF8: sw          $t0, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r8;
    // 0x8007ABFC: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8007AC00: lw          $t5, 0xC($a1)
    ctx->r13 = MEM_W(ctx->r5, 0XC);
    // 0x8007AC04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007AC08: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x8007AC0C: addu        $t9, $t5, $t7
    ctx->r25 = ADD32(ctx->r13, ctx->r15);
    // 0x8007AC10: lw          $t8, 0x20($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X20);
    // 0x8007AC14: addu        $t2, $t3, $t7
    ctx->r10 = ADD32(ctx->r11, ctx->r15);
    // 0x8007AC18: sw          $t8, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->r24;
    // 0x8007AC1C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8007AC20: lw          $t1, 0xC($a1)
    ctx->r9 = MEM_W(ctx->r5, 0XC);
    // 0x8007AC24: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x8007AC28: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x8007AC2C: addu        $t6, $t1, $t4
    ctx->r14 = ADD32(ctx->r9, ctx->r12);
    // 0x8007AC30: lw          $t5, 0x34($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X34);
    // 0x8007AC34: addu        $t3, $t9, $t4
    ctx->r11 = ADD32(ctx->r25, ctx->r12);
    // 0x8007AC38: sw          $t5, 0x34($t3)
    MEM_W(0X34, ctx->r11) = ctx->r13;
    // 0x8007AC3C: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8007AC40: lw          $t7, 0xC($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XC);
    // 0x8007AC44: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x8007AC48: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x8007AC4C: addu        $t0, $t7, $t2
    ctx->r8 = ADD32(ctx->r15, ctx->r10);
    // 0x8007AC50: lw          $t1, 0x48($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X48);
    // 0x8007AC54: addu        $t9, $t6, $t2
    ctx->r25 = ADD32(ctx->r14, ctx->r10);
    // 0x8007AC58: sw          $t1, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->r9;
    // 0x8007AC5C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8007AC60: lw          $t4, 0xC($a1)
    ctx->r12 = MEM_W(ctx->r5, 0XC);
    // 0x8007AC64: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x8007AC68: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x8007AC6C: addu        $t8, $t4, $t3
    ctx->r24 = ADD32(ctx->r12, ctx->r11);
    // 0x8007AC70: lw          $t7, 0x5C($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X5C);
    // 0x8007AC74: addu        $t6, $t0, $t3
    ctx->r14 = ADD32(ctx->r8, ctx->r11);
    // 0x8007AC78: sw          $t7, 0x5C($t6)
    MEM_W(0X5C, ctx->r14) = ctx->r15;
    // 0x8007AC7C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8007AC80: lw          $t2, 0xC($a1)
    ctx->r10 = MEM_W(ctx->r5, 0XC);
    // 0x8007AC84: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x8007AC88: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x8007AC8C: addu        $t5, $t2, $t9
    ctx->r13 = ADD32(ctx->r10, ctx->r25);
    // 0x8007AC90: lw          $t4, 0x70($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X70);
    // 0x8007AC94: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8007AC98: sw          $t4, 0x70($t0)
    MEM_W(0X70, ctx->r8) = ctx->r12;
    // 0x8007AC9C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8007ACA0: lw          $t3, 0xC($a1)
    ctx->r11 = MEM_W(ctx->r5, 0XC);
    // 0x8007ACA4: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8007ACA8: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x8007ACAC: addu        $t1, $t3, $t6
    ctx->r9 = ADD32(ctx->r11, ctx->r14);
    // 0x8007ACB0: lw          $t2, 0x84($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X84);
    // 0x8007ACB4: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x8007ACB8: sw          $t2, 0x84($t8)
    MEM_W(0X84, ctx->r24) = ctx->r10;
    // 0x8007ACBC: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8007ACC0: lw          $t9, 0xC($a1)
    ctx->r25 = MEM_W(ctx->r5, 0XC);
    // 0x8007ACC4: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x8007ACC8: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x8007ACCC: addu        $t7, $t9, $t0
    ctx->r15 = ADD32(ctx->r25, ctx->r8);
    // 0x8007ACD0: lw          $t3, 0x98($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X98);
    // 0x8007ACD4: addu        $t5, $t1, $t0
    ctx->r13 = ADD32(ctx->r9, ctx->r8);
    // 0x8007ACD8: sw          $t3, 0x98($t5)
    MEM_W(0X98, ctx->r13) = ctx->r11;
    // 0x8007ACDC: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8007ACE0: lw          $t6, 0xC($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XC);
    // 0x8007ACE4: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x8007ACE8: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8007ACEC: addu        $t4, $t6, $t8
    ctx->r12 = ADD32(ctx->r14, ctx->r24);
    // 0x8007ACF0: lw          $t9, 0xAC($t4)
    ctx->r25 = MEM_W(ctx->r12, 0XAC);
    // 0x8007ACF4: addu        $t1, $t7, $t8
    ctx->r9 = ADD32(ctx->r15, ctx->r24);
    // 0x8007ACF8: sw          $t9, 0xAC($t1)
    MEM_W(0XAC, ctx->r9) = ctx->r25;
    // 0x8007ACFC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8007AD00: nop

    // 0x8007AD04: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x8007AD08: slti        $at, $t3, 0x5
    ctx->r1 = SIGNED(ctx->r11) < 0X5 ? 1 : 0;
    // 0x8007AD0C: bne         $at, $zero, L_8007ABDC
    if (ctx->r1 != 0) {
        // 0x8007AD10: sw          $t3, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r11;
            goto L_8007ABDC;
    }
    // 0x8007AD10: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
    // 0x8007AD14: lw          $t5, 0xC($a1)
    ctx->r13 = MEM_W(ctx->r5, 0XC);
    // 0x8007AD18: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x8007AD1C: lhu         $t2, 0xC0($t5)
    ctx->r10 = MEM_HU(ctx->r13, 0XC0);
    // 0x8007AD20: nop

    // 0x8007AD24: sh          $t2, 0xC0($t6)
    MEM_H(0XC0, ctx->r14) = ctx->r10;
    // 0x8007AD28: lw          $t4, 0xC($a1)
    ctx->r12 = MEM_W(ctx->r5, 0XC);
    // 0x8007AD2C: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x8007AD30: lhu         $t7, 0xC2($t4)
    ctx->r15 = MEM_HU(ctx->r12, 0XC2);
    // 0x8007AD34: nop

    // 0x8007AD38: sh          $t7, 0xC2($t8)
    MEM_H(0XC2, ctx->r24) = ctx->r15;
    // 0x8007AD3C: lw          $t9, 0xC($a1)
    ctx->r25 = MEM_W(ctx->r5, 0XC);
    // 0x8007AD40: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x8007AD44: lw          $t1, 0xC4($t9)
    ctx->r9 = MEM_W(ctx->r25, 0XC4);
    // 0x8007AD48: nop

    // 0x8007AD4C: sw          $t1, 0xC4($t0)
    MEM_W(0XC4, ctx->r8) = ctx->r9;
    // 0x8007AD50: lw          $t3, 0xC($a1)
    ctx->r11 = MEM_W(ctx->r5, 0XC);
    // 0x8007AD54: lw          $t2, 0x0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X0);
    // 0x8007AD58: lw          $t5, 0xC8($t3)
    ctx->r13 = MEM_W(ctx->r11, 0XC8);
    // 0x8007AD5C: nop

    // 0x8007AD60: sw          $t5, 0xC8($t2)
    MEM_W(0XC8, ctx->r10) = ctx->r13;
    // 0x8007AD64: lw          $t6, 0xC($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XC);
    // 0x8007AD68: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8007AD6C: lw          $t4, 0xCC($t6)
    ctx->r12 = MEM_W(ctx->r14, 0XCC);
    // 0x8007AD70: nop

    // 0x8007AD74: sw          $t4, 0xCC($t7)
    MEM_W(0XCC, ctx->r15) = ctx->r12;
    // 0x8007AD78: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x8007AD7C: b           L_8007AEA8
    // 0x8007AD80: sb          $zero, 0xD0($t8)
    MEM_B(0XD0, ctx->r24) = 0;
        goto L_8007AEA8;
    // 0x8007AD80: sb          $zero, 0xD0($t8)
    MEM_B(0XD0, ctx->r24) = 0;
L_8007AD84:
    // 0x8007AD84: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x8007AD88: nop

    // 0x8007AD8C: sb          $zero, 0xB($t9)
    MEM_B(0XB, ctx->r25) = 0;
    // 0x8007AD90: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_8007AD94:
    // 0x8007AD94: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8007AD98: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x8007AD9C: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x8007ADA0: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x8007ADA4: sw          $zero, 0xC($t5)
    MEM_W(0XC, ctx->r13) = 0;
    // 0x8007ADA8: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8007ADAC: lw          $t2, 0x0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X0);
    // 0x8007ADB0: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x8007ADB4: addu        $t7, $t2, $t4
    ctx->r15 = ADD32(ctx->r10, ctx->r12);
    // 0x8007ADB8: sw          $zero, 0x20($t7)
    MEM_W(0X20, ctx->r15) = 0;
    // 0x8007ADBC: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8007ADC0: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x8007ADC4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8007ADC8: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8007ADCC: sw          $zero, 0x34($t1)
    MEM_W(0X34, ctx->r9) = 0;
    // 0x8007ADD0: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8007ADD4: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x8007ADD8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8007ADDC: addu        $t2, $t3, $t6
    ctx->r10 = ADD32(ctx->r11, ctx->r14);
    // 0x8007ADE0: sw          $zero, 0x48($t2)
    MEM_W(0X48, ctx->r10) = 0;
    // 0x8007ADE4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8007ADE8: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x8007ADEC: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8007ADF0: addu        $t8, $t4, $t9
    ctx->r24 = ADD32(ctx->r12, ctx->r25);
    // 0x8007ADF4: sw          $zero, 0x5C($t8)
    MEM_W(0X5C, ctx->r24) = 0;
    // 0x8007ADF8: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8007ADFC: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x8007AE00: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x8007AE04: addu        $t3, $t0, $t5
    ctx->r11 = ADD32(ctx->r8, ctx->r13);
    // 0x8007AE08: sw          $zero, 0x70($t3)
    MEM_W(0X70, ctx->r11) = 0;
    // 0x8007AE0C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8007AE10: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x8007AE14: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x8007AE18: addu        $t4, $t6, $t7
    ctx->r12 = ADD32(ctx->r14, ctx->r15);
    // 0x8007AE1C: sw          $zero, 0x84($t4)
    MEM_W(0X84, ctx->r12) = 0;
    // 0x8007AE20: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8007AE24: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x8007AE28: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x8007AE2C: addu        $t0, $t9, $t1
    ctx->r8 = ADD32(ctx->r25, ctx->r9);
    // 0x8007AE30: sw          $zero, 0x98($t0)
    MEM_W(0X98, ctx->r8) = 0;
    // 0x8007AE34: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8007AE38: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x8007AE3C: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x8007AE40: addu        $t6, $t5, $t2
    ctx->r14 = ADD32(ctx->r13, ctx->r10);
    // 0x8007AE44: sw          $zero, 0xAC($t6)
    MEM_W(0XAC, ctx->r14) = 0;
    // 0x8007AE48: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8007AE4C: nop

    // 0x8007AE50: addiu       $t4, $t7, 0x1
    ctx->r12 = ADD32(ctx->r15, 0X1);
    // 0x8007AE54: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x8007AE58: bne         $at, $zero, L_8007AD94
    if (ctx->r1 != 0) {
        // 0x8007AE5C: sw          $t4, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r12;
            goto L_8007AD94;
    }
    // 0x8007AE5C: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x8007AE60: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x8007AE64: nop

    // 0x8007AE68: sh          $zero, 0xC0($t8)
    MEM_H(0XC0, ctx->r24) = 0;
    // 0x8007AE6C: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x8007AE70: nop

    // 0x8007AE74: sh          $zero, 0xC2($t9)
    MEM_H(0XC2, ctx->r25) = 0;
    // 0x8007AE78: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x8007AE7C: nop

    // 0x8007AE80: sw          $zero, 0xC4($t1)
    MEM_W(0XC4, ctx->r9) = 0;
    // 0x8007AE84: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x8007AE88: nop

    // 0x8007AE8C: sw          $zero, 0xC8($t0)
    MEM_W(0XC8, ctx->r8) = 0;
    // 0x8007AE90: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x8007AE94: nop

    // 0x8007AE98: sw          $zero, 0xCC($t3)
    MEM_W(0XCC, ctx->r11) = 0;
    // 0x8007AE9C: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x8007AEA0: nop

    // 0x8007AEA4: sb          $zero, 0xD0($t5)
    MEM_B(0XD0, ctx->r13) = 0;
L_8007AEA8:
    // 0x8007AEA8: jr          $ra
    // 0x8007AEAC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007AEAC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007AEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AEB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007AEB4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007AEB8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007AEBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007AEC0: lbu         $t7, 0xB($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XB);
    // 0x8007AEC4: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8007AEC8: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x8007AECC: beq         $t8, $at, L_8007AF70
    if (ctx->r24 == ctx->r1) {
        // 0x8007AED0: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_8007AF70;
    }
    // 0x8007AED0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8007AED4: beq         $t8, $at, L_8007AF70
    if (ctx->r24 == ctx->r1) {
        // 0x8007AED8: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_8007AF70;
    }
    // 0x8007AED8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8007AEDC: beq         $t8, $at, L_8007AF70
    if (ctx->r24 == ctx->r1) {
        // 0x8007AEE0: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8007AF70;
    }
    // 0x8007AEE0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8007AEE4: beq         $t8, $at, L_8007AF70
    if (ctx->r24 == ctx->r1) {
        // 0x8007AEE8: nop
    
            goto L_8007AF70;
    }
    // 0x8007AEE8: nop

    // 0x8007AEEC: lw          $t9, 0x10($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X10);
    // 0x8007AEF0: lw          $t0, 0x14($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X14);
    // 0x8007AEF4: nop

    // 0x8007AEF8: sw          $t9, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r25;
    // 0x8007AEFC: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8007AF00: nop

    // 0x8007AF04: lw          $t2, 0x10($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X10);
    // 0x8007AF08: nop

    // 0x8007AF0C: beq         $t2, $zero, L_8007AF20
    if (ctx->r10 == 0) {
        // 0x8007AF10: nop
    
            goto L_8007AF20;
    }
    // 0x8007AF10: nop

    // 0x8007AF14: lw          $t3, 0x14($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X14);
    // 0x8007AF18: nop

    // 0x8007AF1C: sw          $t3, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r11;
L_8007AF20:
    // 0x8007AF20: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8007AF24: nop

    // 0x8007AF28: lw          $t5, 0x14($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X14);
    // 0x8007AF2C: nop

    // 0x8007AF30: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8007AF34: lw          $t7, 0xC($t4)
    ctx->r15 = MEM_W(ctx->r12, 0XC);
    // 0x8007AF38: nop

    // 0x8007AF3C: beq         $t7, $zero, L_8007AF58
    if (ctx->r15 == 0) {
        // 0x8007AF40: nop
    
            goto L_8007AF58;
    }
    // 0x8007AF40: nop

    // 0x8007AF44: jal         0x8007E328
    // 0x8007AF48: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8007E328(rdram, ctx);
        goto after_0;
    // 0x8007AF48: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x8007AF4C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8007AF50: nop

    // 0x8007AF54: sw          $zero, 0xC($t8)
    MEM_W(0XC, ctx->r24) = 0;
L_8007AF58:
    // 0x8007AF58: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007AF5C: jal         0x8007E328
    // 0x8007AF60: nop

    func_8007E328(rdram, ctx);
        goto after_1;
    // 0x8007AF60: nop

    after_1:
    // 0x8007AF64: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8007AF68: b           L_8007AF78
    // 0x8007AF6C: nop

        goto L_8007AF78;
    // 0x8007AF6C: nop

L_8007AF70:
    // 0x8007AF70: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8007AF74: nop

L_8007AF78:
    // 0x8007AF78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007AF7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007AF80: jr          $ra
    // 0x8007AF84: nop

    return;
    // 0x8007AF84: nop

;}
RECOMP_FUNC void func_8007AF88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AF88: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007AF8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007AF90: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8007AF94: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8007AF98: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8007AF9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007AFA0: jal         0x8007E03C
    // 0x8007AFA4: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x8007AFA4: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_0:
    // 0x8007AFA8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8007AFAC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8007AFB0: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x8007AFB4: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x8007AFB8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8007AFBC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8007AFC0: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8007AFC4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8007AFC8: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8007AFCC: nop

    // 0x8007AFD0: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
    // 0x8007AFD4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8007AFD8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8007AFDC: nop

    // 0x8007AFE0: sw          $t1, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r9;
    // 0x8007AFE4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8007AFE8: jal         0x8007BD48
    // 0x8007AFEC: nop

    func_8007BD48(rdram, ctx);
        goto after_1;
    // 0x8007AFEC: nop

    after_1:
    // 0x8007AFF0: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8007AFF4: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x8007AFF8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8007AFFC: sh          $t3, 0xD2($t4)
    MEM_H(0XD2, ctx->r12) = ctx->r11;
    // 0x8007B000: lw          $t5, -0x310($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X310);
    // 0x8007B004: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007B008: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    // 0x8007B00C: jal         0x800B3BFC
    // 0x8007B010: addiu       $a0, $a0, -0x21F8
    ctx->r4 = ADD32(ctx->r4, -0X21F8);
    osSyncPrintf(rdram, ctx);
        goto after_2;
    // 0x8007B010: addiu       $a0, $a0, -0x21F8
    ctx->r4 = ADD32(ctx->r4, -0X21F8);
    after_2:
    // 0x8007B014: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8007B018:
    // 0x8007B018: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007B01C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B020: nop

    // 0x8007B024: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8007B028: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x8007B02C: nop

    // 0x8007B030: beq         $t9, $zero, L_8007B040
    if (ctx->r25 == 0) {
        // 0x8007B034: nop
    
            goto L_8007B040;
    }
    // 0x8007B034: nop

    // 0x8007B038: b           L_8007B058
    // 0x8007B03C: addiu       $s0, $t9, -0x20
    ctx->r16 = ADD32(ctx->r25, -0X20);
        goto L_8007B058;
    // 0x8007B03C: addiu       $s0, $t9, -0x20
    ctx->r16 = ADD32(ctx->r25, -0X20);
L_8007B040:
    // 0x8007B040: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8007B044: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B048: nop

    // 0x8007B04C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8007B050: lbu         $s0, 0x0($t2)
    ctx->r16 = MEM_BU(ctx->r10, 0X0);
    // 0x8007B054: nop

L_8007B058:
    // 0x8007B058: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B05C: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x8007B060: jal         0x8007B8A8
    // 0x8007B064: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8007B8A8(rdram, ctx);
        goto after_3;
    // 0x8007B064: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_3:
    // 0x8007B068: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B06C: nop

    // 0x8007B070: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8007B074: slti        $at, $t4, 0x8
    ctx->r1 = SIGNED(ctx->r12) < 0X8 ? 1 : 0;
    // 0x8007B078: bne         $at, $zero, L_8007B018
    if (ctx->r1 != 0) {
        // 0x8007B07C: sw          $t4, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r12;
            goto L_8007B018;
    }
    // 0x8007B07C: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x8007B080: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8007B084: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B088: lbu         $a1, 0x9($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X9);
    // 0x8007B08C: jal         0x8007B8A8
    // 0x8007B090: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8007B8A8(rdram, ctx);
        goto after_4;
    // 0x8007B090: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8007B094: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007B098: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B09C: lbu         $a1, 0xA($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0XA);
    // 0x8007B0A0: jal         0x8007B8A8
    // 0x8007B0A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8007B8A8(rdram, ctx);
        goto after_5;
    // 0x8007B0A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8007B0A8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8007B0AC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B0B0: lbu         $a1, 0xB($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0XB);
    // 0x8007B0B4: jal         0x8007B8A8
    // 0x8007B0B8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8007B8A8(rdram, ctx);
        goto after_6;
    // 0x8007B0B8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_6:
    // 0x8007B0BC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8007B0C0:
    // 0x8007B0C0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B0C4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8007B0C8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8007B0CC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8007B0D0: lw          $a1, 0xC($t1)
    ctx->r5 = MEM_W(ctx->r9, 0XC);
    // 0x8007B0D4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B0D8: jal         0x8007B8A8
    // 0x8007B0DC: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_8007B8A8(rdram, ctx);
        goto after_7;
    // 0x8007B0DC: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_7:
    // 0x8007B0E0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B0E4: nop

    // 0x8007B0E8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8007B0EC: slti        $at, $t3, 0x5
    ctx->r1 = SIGNED(ctx->r11) < 0X5 ? 1 : 0;
    // 0x8007B0F0: bne         $at, $zero, L_8007B0C0
    if (ctx->r1 != 0) {
        // 0x8007B0F4: sw          $t3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r11;
            goto L_8007B0C0;
    }
    // 0x8007B0F4: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8007B0F8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8007B0FC:
    // 0x8007B0FC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B100: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8007B104: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8007B108: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x8007B10C: lw          $a1, 0x20($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X20);
    // 0x8007B110: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B114: jal         0x8007B8A8
    // 0x8007B118: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_8007B8A8(rdram, ctx);
        goto after_8;
    // 0x8007B118: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_8:
    // 0x8007B11C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B120: nop

    // 0x8007B124: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x8007B128: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x8007B12C: bne         $at, $zero, L_8007B0FC
    if (ctx->r1 != 0) {
        // 0x8007B130: sw          $t8, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r24;
            goto L_8007B0FC;
    }
    // 0x8007B130: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x8007B134: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8007B138:
    // 0x8007B138: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B13C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8007B140: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8007B144: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8007B148: lw          $a1, 0x34($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X34);
    // 0x8007B14C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B150: jal         0x8007B8A8
    // 0x8007B154: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_8007B8A8(rdram, ctx);
        goto after_9;
    // 0x8007B154: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_9:
    // 0x8007B158: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B15C: nop

    // 0x8007B160: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x8007B164: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x8007B168: bne         $at, $zero, L_8007B138
    if (ctx->r1 != 0) {
        // 0x8007B16C: sw          $t4, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r12;
            goto L_8007B138;
    }
    // 0x8007B16C: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x8007B170: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8007B174:
    // 0x8007B174: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B178: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007B17C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8007B180: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x8007B184: lw          $a1, 0x48($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X48);
    // 0x8007B188: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B18C: jal         0x8007B8A8
    // 0x8007B190: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_8007B8A8(rdram, ctx);
        goto after_10;
    // 0x8007B190: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_10:
    // 0x8007B194: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B198: nop

    // 0x8007B19C: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x8007B1A0: slti        $at, $t0, 0x5
    ctx->r1 = SIGNED(ctx->r8) < 0X5 ? 1 : 0;
    // 0x8007B1A4: bne         $at, $zero, L_8007B174
    if (ctx->r1 != 0) {
        // 0x8007B1A8: sw          $t0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r8;
            goto L_8007B174;
    }
    // 0x8007B1A8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8007B1AC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8007B1B0:
    // 0x8007B1B0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B1B4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8007B1B8: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8007B1BC: addu        $t4, $t2, $t5
    ctx->r12 = ADD32(ctx->r10, ctx->r13);
    // 0x8007B1C0: lw          $a1, 0x5C($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X5C);
    // 0x8007B1C4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B1C8: jal         0x8007B8A8
    // 0x8007B1CC: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_8007B8A8(rdram, ctx);
        goto after_11;
    // 0x8007B1CC: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_11:
    // 0x8007B1D0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B1D4: nop

    // 0x8007B1D8: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x8007B1DC: slti        $at, $t6, 0x5
    ctx->r1 = SIGNED(ctx->r14) < 0X5 ? 1 : 0;
    // 0x8007B1E0: bne         $at, $zero, L_8007B1B0
    if (ctx->r1 != 0) {
        // 0x8007B1E4: sw          $t6, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r14;
            goto L_8007B1B0;
    }
    // 0x8007B1E4: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x8007B1E8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8007B1EC:
    // 0x8007B1EC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B1F0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8007B1F4: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x8007B1F8: addu        $t0, $t9, $t1
    ctx->r8 = ADD32(ctx->r25, ctx->r9);
    // 0x8007B1FC: lw          $a1, 0x70($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X70);
    // 0x8007B200: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B204: jal         0x8007B8A8
    // 0x8007B208: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_8007B8A8(rdram, ctx);
        goto after_12;
    // 0x8007B208: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_12:
    // 0x8007B20C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B210: nop

    // 0x8007B214: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x8007B218: slti        $at, $t2, 0x5
    ctx->r1 = SIGNED(ctx->r10) < 0X5 ? 1 : 0;
    // 0x8007B21C: bne         $at, $zero, L_8007B1EC
    if (ctx->r1 != 0) {
        // 0x8007B220: sw          $t2, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r10;
            goto L_8007B1EC;
    }
    // 0x8007B220: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x8007B224: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8007B228:
    // 0x8007B228: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B22C: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8007B230: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x8007B234: addu        $t6, $t5, $t7
    ctx->r14 = ADD32(ctx->r13, ctx->r15);
    // 0x8007B238: lw          $a1, 0x84($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X84);
    // 0x8007B23C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B240: jal         0x8007B8A8
    // 0x8007B244: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_8007B8A8(rdram, ctx);
        goto after_13;
    // 0x8007B244: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_13:
    // 0x8007B248: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B24C: nop

    // 0x8007B250: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8007B254: slti        $at, $t9, 0x5
    ctx->r1 = SIGNED(ctx->r25) < 0X5 ? 1 : 0;
    // 0x8007B258: bne         $at, $zero, L_8007B228
    if (ctx->r1 != 0) {
        // 0x8007B25C: sw          $t9, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r25;
            goto L_8007B228;
    }
    // 0x8007B25C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8007B260: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8007B264:
    // 0x8007B264: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B268: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8007B26C: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x8007B270: addu        $t2, $t1, $t3
    ctx->r10 = ADD32(ctx->r9, ctx->r11);
    // 0x8007B274: lw          $a1, 0x98($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X98);
    // 0x8007B278: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B27C: jal         0x8007B8A8
    // 0x8007B280: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_8007B8A8(rdram, ctx);
        goto after_14;
    // 0x8007B280: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_14:
    // 0x8007B284: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B288: nop

    // 0x8007B28C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8007B290: slti        $at, $t5, 0x5
    ctx->r1 = SIGNED(ctx->r13) < 0X5 ? 1 : 0;
    // 0x8007B294: bne         $at, $zero, L_8007B264
    if (ctx->r1 != 0) {
        // 0x8007B298: sw          $t5, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r13;
            goto L_8007B264;
    }
    // 0x8007B298: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8007B29C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8007B2A0:
    // 0x8007B2A0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B2A4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8007B2A8: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8007B2AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007B2B0: lw          $a1, 0xAC($t9)
    ctx->r5 = MEM_W(ctx->r25, 0XAC);
    // 0x8007B2B4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B2B8: jal         0x8007B8A8
    // 0x8007B2BC: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_8007B8A8(rdram, ctx);
        goto after_15;
    // 0x8007B2BC: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_15:
    // 0x8007B2C0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B2C4: nop

    // 0x8007B2C8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8007B2CC: slti        $at, $t1, 0x5
    ctx->r1 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
    // 0x8007B2D0: bne         $at, $zero, L_8007B2A0
    if (ctx->r1 != 0) {
        // 0x8007B2D4: sw          $t1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r9;
            goto L_8007B2A0;
    }
    // 0x8007B2D4: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x8007B2D8: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8007B2DC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B2E0: lhu         $a1, 0xC0($t3)
    ctx->r5 = MEM_HU(ctx->r11, 0XC0);
    // 0x8007B2E4: jal         0x8007B8A8
    // 0x8007B2E8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8007B8A8(rdram, ctx);
        goto after_16;
    // 0x8007B2E8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_16:
    // 0x8007B2EC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8007B2F0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B2F4: lhu         $a1, 0xC2($t2)
    ctx->r5 = MEM_HU(ctx->r10, 0XC2);
    // 0x8007B2F8: jal         0x8007B8A8
    // 0x8007B2FC: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_8007B8A8(rdram, ctx);
        goto after_17;
    // 0x8007B2FC: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_17:
    // 0x8007B300: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8007B304: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B308: lw          $a1, 0xC4($t4)
    ctx->r5 = MEM_W(ctx->r12, 0XC4);
    // 0x8007B30C: jal         0x8007B8A8
    // 0x8007B310: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_8007B8A8(rdram, ctx);
        goto after_18;
    // 0x8007B310: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_18:
    // 0x8007B314: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8007B318: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B31C: lw          $a1, 0xC8($t5)
    ctx->r5 = MEM_W(ctx->r13, 0XC8);
    // 0x8007B320: jal         0x8007B8A8
    // 0x8007B324: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_8007B8A8(rdram, ctx);
        goto after_19;
    // 0x8007B324: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_19:
    // 0x8007B328: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007B32C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B330: lw          $a1, 0xCC($t6)
    ctx->r5 = MEM_W(ctx->r14, 0XCC);
    // 0x8007B334: jal         0x8007B8A8
    // 0x8007B338: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_8007B8A8(rdram, ctx);
        goto after_20;
    // 0x8007B338: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_20:
    // 0x8007B33C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8007B340: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B344: lbu         $a1, 0xD0($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0XD0);
    // 0x8007B348: jal         0x8007B8A8
    // 0x8007B34C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8007B8A8(rdram, ctx);
        goto after_21;
    // 0x8007B34C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_21:
    // 0x8007B350: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8007B354: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B358: lhu         $a1, 0xD2($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0XD2);
    // 0x8007B35C: jal         0x8007B8A8
    // 0x8007B360: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_8007B8A8(rdram, ctx);
        goto after_22;
    // 0x8007B360: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_22:
    // 0x8007B364: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B368: jal         0x8007BA38
    // 0x8007B36C: nop

    func_8007BA38(rdram, ctx);
        goto after_23;
    // 0x8007B36C: nop

    after_23:
    // 0x8007B370: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B374: jal         0x8007E328
    // 0x8007B378: nop

    func_8007E328(rdram, ctx);
        goto after_24;
    // 0x8007B378: nop

    after_24:
    // 0x8007B37C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B380: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007B384: jr          $ra
    // 0x8007B388: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8007B388: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8007B38C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B38C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007B390: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007B394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B398: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8007B39C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007B3A0: jal         0x800B3BFC
    // 0x8007B3A4: addiu       $a0, $a0, -0x21EC
    ctx->r4 = ADD32(ctx->r4, -0X21EC);
    osSyncPrintf(rdram, ctx);
        goto after_0;
    // 0x8007B3A4: addiu       $a0, $a0, -0x21EC
    ctx->r4 = ADD32(ctx->r4, -0X21EC);
    after_0:
    // 0x8007B3A8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8007B3AC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007B3B0: lbu         $a1, 0x9($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X9);
    // 0x8007B3B4: lbu         $a2, 0xA($t6)
    ctx->r6 = MEM_BU(ctx->r14, 0XA);
    // 0x8007B3B8: jal         0x800B3BFC
    // 0x8007B3BC: addiu       $a0, $a0, -0x21E0
    ctx->r4 = ADD32(ctx->r4, -0X21E0);
    osSyncPrintf(rdram, ctx);
        goto after_1;
    // 0x8007B3BC: addiu       $a0, $a0, -0x21E0
    ctx->r4 = ADD32(ctx->r4, -0X21E0);
    after_1:
    // 0x8007B3C0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8007B3C4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007B3C8: lbu         $a1, 0xB($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0XB);
    // 0x8007B3CC: jal         0x800B3BFC
    // 0x8007B3D0: addiu       $a0, $a0, -0x21D0
    ctx->r4 = ADD32(ctx->r4, -0X21D0);
    osSyncPrintf(rdram, ctx);
        goto after_2;
    // 0x8007B3D0: addiu       $a0, $a0, -0x21D0
    ctx->r4 = ADD32(ctx->r4, -0X21D0);
    after_2:
    // 0x8007B3D4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8007B3D8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007B3DC: lw          $a1, 0xC($t8)
    ctx->r5 = MEM_W(ctx->r24, 0XC);
    // 0x8007B3E0: jal         0x800B3BFC
    // 0x8007B3E4: addiu       $a0, $a0, -0x21C4
    ctx->r4 = ADD32(ctx->r4, -0X21C4);
    osSyncPrintf(rdram, ctx);
        goto after_3;
    // 0x8007B3E4: addiu       $a0, $a0, -0x21C4
    ctx->r4 = ADD32(ctx->r4, -0X21C4);
    after_3:
    // 0x8007B3E8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8007B3EC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007B3F0: lw          $a1, 0x10($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X10);
    // 0x8007B3F4: jal         0x800B3BFC
    // 0x8007B3F8: addiu       $a0, $a0, -0x21B8
    ctx->r4 = ADD32(ctx->r4, -0X21B8);
    osSyncPrintf(rdram, ctx);
        goto after_4;
    // 0x8007B3F8: addiu       $a0, $a0, -0x21B8
    ctx->r4 = ADD32(ctx->r4, -0X21B8);
    after_4:
    // 0x8007B3FC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8007B400: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8007B404: lw          $a1, 0x14($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X14);
    // 0x8007B408: jal         0x800B3BFC
    // 0x8007B40C: addiu       $a0, $a0, -0x21AC
    ctx->r4 = ADD32(ctx->r4, -0X21AC);
    osSyncPrintf(rdram, ctx);
        goto after_5;
    // 0x8007B40C: addiu       $a0, $a0, -0x21AC
    ctx->r4 = ADD32(ctx->r4, -0X21AC);
    after_5:
    // 0x8007B410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007B414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007B418: jr          $ra
    // 0x8007B41C: nop

    return;
    // 0x8007B41C: nop

;}
RECOMP_FUNC void func_8007B420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B420: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007B424: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x8007B428: jr          $ra
    // 0x8007B42C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007B42C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007B430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B430: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007B434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B438: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007B43C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8007B440: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8007B444: jal         0x8007E03C
    // 0x8007B448: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x8007B448: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_0:
    // 0x8007B44C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8007B450: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8007B454: nop

    // 0x8007B458: sw          $zero, 0x14($t6)
    MEM_W(0X14, ctx->r14) = 0;
    // 0x8007B45C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8007B460: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8007B464: nop

    // 0x8007B468: sw          $t7, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r15;
    // 0x8007B46C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8007B470: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8007B474: nop

    // 0x8007B478: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    // 0x8007B47C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8007B480: nop

    // 0x8007B484: sw          $zero, 0x10($t1)
    MEM_W(0X10, ctx->r9) = 0;
    // 0x8007B488: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8007B48C:
    // 0x8007B48C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B490: jal         0x8007B964
    // 0x8007B494: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8007B964(rdram, ctx);
        goto after_1;
    // 0x8007B494: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x8007B498: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8007B49C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B4A0: andi        $t2, $v0, 0x3F
    ctx->r10 = ctx->r2 & 0X3F;
    // 0x8007B4A4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8007B4A8: sb          $t2, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r10;
    // 0x8007B4AC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B4B0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007B4B4: nop

    // 0x8007B4B8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8007B4BC: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x8007B4C0: nop

    // 0x8007B4C4: addiu       $t0, $t9, 0x20
    ctx->r8 = ADD32(ctx->r25, 0X20);
    // 0x8007B4C8: sb          $t0, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r8;
    // 0x8007B4CC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B4D0: nop

    // 0x8007B4D4: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x8007B4D8: slti        $at, $t3, 0x8
    ctx->r1 = SIGNED(ctx->r11) < 0X8 ? 1 : 0;
    // 0x8007B4DC: bne         $at, $zero, L_8007B48C
    if (ctx->r1 != 0) {
        // 0x8007B4E0: sw          $t3, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r11;
            goto L_8007B48C;
    }
    // 0x8007B4E0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8007B4E4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8007B4E8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8007B4EC: sb          $zero, 0x8($t4)
    MEM_B(0X8, ctx->r12) = 0;
    // 0x8007B4F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B4F4: jal         0x8007B964
    // 0x8007B4F8: nop

    func_8007B964(rdram, ctx);
        goto after_2;
    // 0x8007B4F8: nop

    after_2:
    // 0x8007B4FC: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8007B500: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8007B504: sb          $t2, 0x9($t5)
    MEM_B(0X9, ctx->r13) = ctx->r10;
    // 0x8007B508: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B50C: jal         0x8007B964
    // 0x8007B510: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8007B964(rdram, ctx);
        goto after_3;
    // 0x8007B510: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x8007B514: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8007B518: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x8007B51C: sb          $t6, 0xA($t7)
    MEM_B(0XA, ctx->r15) = ctx->r14;
    // 0x8007B520: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B524: jal         0x8007B964
    // 0x8007B528: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8007B964(rdram, ctx);
        goto after_4;
    // 0x8007B528: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_4:
    // 0x8007B52C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8007B530: andi        $t9, $v0, 0x1F
    ctx->r25 = ctx->r2 & 0X1F;
    // 0x8007B534: sb          $t9, 0xB($t0)
    MEM_B(0XB, ctx->r8) = ctx->r25;
    // 0x8007B538: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8007B53C:
    // 0x8007B53C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B540: jal         0x8007B964
    // 0x8007B544: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8007B964(rdram, ctx);
        goto after_5;
    // 0x8007B544: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_5:
    // 0x8007B548: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B54C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8007B550: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8007B554: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8007B558: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8007B55C: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x8007B560: addu        $t2, $t1, $t4
    ctx->r10 = ADD32(ctx->r9, ctx->r12);
    // 0x8007B564: sw          $t8, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r24;
    // 0x8007B568: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B56C: nop

    // 0x8007B570: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8007B574: slti        $at, $t6, 0x5
    ctx->r1 = SIGNED(ctx->r14) < 0X5 ? 1 : 0;
    // 0x8007B578: bne         $at, $zero, L_8007B53C
    if (ctx->r1 != 0) {
        // 0x8007B57C: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_8007B53C;
    }
    // 0x8007B57C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8007B580: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8007B584:
    // 0x8007B584: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B588: jal         0x8007B964
    // 0x8007B58C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8007B964(rdram, ctx);
        goto after_6;
    // 0x8007B58C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_6:
    // 0x8007B590: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B594: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8007B598: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8007B59C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8007B5A0: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x8007B5A4: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x8007B5A8: addu        $t1, $t9, $t3
    ctx->r9 = ADD32(ctx->r25, ctx->r11);
    // 0x8007B5AC: sw          $t7, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->r15;
    // 0x8007B5B0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B5B4: nop

    // 0x8007B5B8: addiu       $t8, $t4, 0x1
    ctx->r24 = ADD32(ctx->r12, 0X1);
    // 0x8007B5BC: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x8007B5C0: bne         $at, $zero, L_8007B584
    if (ctx->r1 != 0) {
        // 0x8007B5C4: sw          $t8, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r24;
            goto L_8007B584;
    }
    // 0x8007B5C4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8007B5C8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8007B5CC:
    // 0x8007B5CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B5D0: jal         0x8007B964
    // 0x8007B5D4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8007B964(rdram, ctx);
        goto after_7;
    // 0x8007B5D4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_7:
    // 0x8007B5D8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B5DC: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8007B5E0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8007B5E4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8007B5E8: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8007B5EC: and         $t2, $v0, $at
    ctx->r10 = ctx->r2 & ctx->r1;
    // 0x8007B5F0: addu        $t9, $t5, $t0
    ctx->r25 = ADD32(ctx->r13, ctx->r8);
    // 0x8007B5F4: sw          $t2, 0x34($t9)
    MEM_W(0X34, ctx->r25) = ctx->r10;
    // 0x8007B5F8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B5FC: nop

    // 0x8007B600: addiu       $t7, $t3, 0x1
    ctx->r15 = ADD32(ctx->r11, 0X1);
    // 0x8007B604: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x8007B608: bne         $at, $zero, L_8007B5CC
    if (ctx->r1 != 0) {
        // 0x8007B60C: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_8007B5CC;
    }
    // 0x8007B60C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8007B610: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8007B614:
    // 0x8007B614: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B618: jal         0x8007B964
    // 0x8007B61C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8007B964(rdram, ctx);
        goto after_8;
    // 0x8007B61C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_8:
    // 0x8007B620: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B624: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8007B628: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8007B62C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8007B630: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8007B634: and         $t1, $v0, $at
    ctx->r9 = ctx->r2 & ctx->r1;
    // 0x8007B638: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x8007B63C: sw          $t1, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->r9;
    // 0x8007B640: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B644: nop

    // 0x8007B648: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x8007B64C: slti        $at, $t2, 0x5
    ctx->r1 = SIGNED(ctx->r10) < 0X5 ? 1 : 0;
    // 0x8007B650: bne         $at, $zero, L_8007B614
    if (ctx->r1 != 0) {
        // 0x8007B654: sw          $t2, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r10;
            goto L_8007B614;
    }
    // 0x8007B654: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8007B658: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8007B65C:
    // 0x8007B65C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B660: jal         0x8007B964
    // 0x8007B664: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8007B964(rdram, ctx);
        goto after_9;
    // 0x8007B664: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_9:
    // 0x8007B668: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B66C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8007B670: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8007B674: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8007B678: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007B67C: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x8007B680: addu        $t4, $t3, $t8
    ctx->r12 = ADD32(ctx->r11, ctx->r24);
    // 0x8007B684: sw          $t9, 0x5C($t4)
    MEM_W(0X5C, ctx->r12) = ctx->r25;
    // 0x8007B688: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B68C: nop

    // 0x8007B690: addiu       $t1, $t6, 0x1
    ctx->r9 = ADD32(ctx->r14, 0X1);
    // 0x8007B694: slti        $at, $t1, 0x5
    ctx->r1 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
    // 0x8007B698: bne         $at, $zero, L_8007B65C
    if (ctx->r1 != 0) {
        // 0x8007B69C: sw          $t1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r9;
            goto L_8007B65C;
    }
    // 0x8007B69C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8007B6A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8007B6A4:
    // 0x8007B6A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B6A8: jal         0x8007B964
    // 0x8007B6AC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8007B964(rdram, ctx);
        goto after_10;
    // 0x8007B6AC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_10:
    // 0x8007B6B0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B6B4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8007B6B8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8007B6BC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8007B6C0: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x8007B6C4: and         $t5, $v0, $at
    ctx->r13 = ctx->r2 & ctx->r1;
    // 0x8007B6C8: addu        $t3, $t0, $t7
    ctx->r11 = ADD32(ctx->r8, ctx->r15);
    // 0x8007B6CC: sw          $t5, 0x70($t3)
    MEM_W(0X70, ctx->r11) = ctx->r13;
    // 0x8007B6D0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B6D4: nop

    // 0x8007B6D8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8007B6DC: slti        $at, $t9, 0x5
    ctx->r1 = SIGNED(ctx->r25) < 0X5 ? 1 : 0;
    // 0x8007B6E0: bne         $at, $zero, L_8007B6A4
    if (ctx->r1 != 0) {
        // 0x8007B6E4: sw          $t9, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r25;
            goto L_8007B6A4;
    }
    // 0x8007B6E4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007B6E8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8007B6EC:
    // 0x8007B6EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B6F0: jal         0x8007B964
    // 0x8007B6F4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8007B964(rdram, ctx);
        goto after_11;
    // 0x8007B6F4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_11:
    // 0x8007B6F8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B6FC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007B700: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8007B704: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8007B708: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8007B70C: and         $t4, $v0, $at
    ctx->r12 = ctx->r2 & ctx->r1;
    // 0x8007B710: addu        $t0, $t6, $t2
    ctx->r8 = ADD32(ctx->r14, ctx->r10);
    // 0x8007B714: sw          $t4, 0x84($t0)
    MEM_W(0X84, ctx->r8) = ctx->r12;
    // 0x8007B718: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B71C: nop

    // 0x8007B720: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x8007B724: slti        $at, $t5, 0x5
    ctx->r1 = SIGNED(ctx->r13) < 0X5 ? 1 : 0;
    // 0x8007B728: bne         $at, $zero, L_8007B6EC
    if (ctx->r1 != 0) {
        // 0x8007B72C: sw          $t5, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r13;
            goto L_8007B6EC;
    }
    // 0x8007B72C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8007B730: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8007B734:
    // 0x8007B734: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B738: jal         0x8007B964
    // 0x8007B73C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8007B964(rdram, ctx);
        goto after_12;
    // 0x8007B73C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_12:
    // 0x8007B740: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B744: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8007B748: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8007B74C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8007B750: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8007B754: and         $t3, $v0, $at
    ctx->r11 = ctx->r2 & ctx->r1;
    // 0x8007B758: addu        $t6, $t8, $t1
    ctx->r14 = ADD32(ctx->r24, ctx->r9);
    // 0x8007B75C: sw          $t3, 0x98($t6)
    MEM_W(0X98, ctx->r14) = ctx->r11;
    // 0x8007B760: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B764: nop

    // 0x8007B768: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x8007B76C: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x8007B770: bne         $at, $zero, L_8007B734
    if (ctx->r1 != 0) {
        // 0x8007B774: sw          $t4, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r12;
            goto L_8007B734;
    }
    // 0x8007B774: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8007B778: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8007B77C:
    // 0x8007B77C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B780: jal         0x8007B964
    // 0x8007B784: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8007B964(rdram, ctx);
        goto after_13;
    // 0x8007B784: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_13:
    // 0x8007B788: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B78C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8007B790: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8007B794: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8007B798: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x8007B79C: and         $t0, $v0, $at
    ctx->r8 = ctx->r2 & ctx->r1;
    // 0x8007B7A0: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x8007B7A4: sw          $t0, 0xAC($t8)
    MEM_W(0XAC, ctx->r24) = ctx->r8;
    // 0x8007B7A8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B7AC: nop

    // 0x8007B7B0: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x8007B7B4: slti        $at, $t3, 0x5
    ctx->r1 = SIGNED(ctx->r11) < 0X5 ? 1 : 0;
    // 0x8007B7B8: bne         $at, $zero, L_8007B77C
    if (ctx->r1 != 0) {
        // 0x8007B7BC: sw          $t3, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r11;
            goto L_8007B77C;
    }
    // 0x8007B7BC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8007B7C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B7C4: jal         0x8007B964
    // 0x8007B7C8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8007B964(rdram, ctx);
        goto after_14;
    // 0x8007B7C8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_14:
    // 0x8007B7CC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8007B7D0: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x8007B7D4: sh          $t6, 0xC0($t2)
    MEM_H(0XC0, ctx->r10) = ctx->r14;
    // 0x8007B7D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B7DC: jal         0x8007B964
    // 0x8007B7E0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_8007B964(rdram, ctx);
        goto after_15;
    // 0x8007B7E0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_15:
    // 0x8007B7E4: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8007B7E8: andi        $t4, $v0, 0xFFF
    ctx->r12 = ctx->r2 & 0XFFF;
    // 0x8007B7EC: sh          $t4, 0xC2($t5)
    MEM_H(0XC2, ctx->r13) = ctx->r12;
    // 0x8007B7F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B7F4: jal         0x8007B964
    // 0x8007B7F8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_8007B964(rdram, ctx);
        goto after_16;
    // 0x8007B7F8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_16:
    // 0x8007B7FC: lui         $at, 0xF
    ctx->r1 = S32(0XF << 16);
    // 0x8007B800: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8007B804: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8007B808: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x8007B80C: sw          $t7, 0xC4($t9)
    MEM_W(0XC4, ctx->r25) = ctx->r15;
    // 0x8007B810: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B814: jal         0x8007B964
    // 0x8007B818: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_8007B964(rdram, ctx);
        goto after_17;
    // 0x8007B818: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_17:
    // 0x8007B81C: lui         $at, 0x3FFF
    ctx->r1 = S32(0X3FFF << 16);
    // 0x8007B820: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8007B824: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8007B828: and         $t0, $v0, $at
    ctx->r8 = ctx->r2 & ctx->r1;
    // 0x8007B82C: sw          $t0, 0xC8($t8)
    MEM_W(0XC8, ctx->r24) = ctx->r8;
    // 0x8007B830: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B834: jal         0x8007B964
    // 0x8007B838: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_8007B964(rdram, ctx);
        goto after_18;
    // 0x8007B838: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_18:
    // 0x8007B83C: lui         $at, 0x3FFF
    ctx->r1 = S32(0X3FFF << 16);
    // 0x8007B840: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8007B844: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8007B848: and         $t1, $v0, $at
    ctx->r9 = ctx->r2 & ctx->r1;
    // 0x8007B84C: sw          $t1, 0xCC($t3)
    MEM_W(0XCC, ctx->r11) = ctx->r9;
    // 0x8007B850: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B854: jal         0x8007B964
    // 0x8007B858: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8007B964(rdram, ctx);
        goto after_19;
    // 0x8007B858: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x8007B85C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8007B860: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x8007B864: sb          $t6, 0xD0($t2)
    MEM_B(0XD0, ctx->r10) = ctx->r14;
    // 0x8007B868: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B86C: jal         0x8007B964
    // 0x8007B870: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8007B964(rdram, ctx);
        goto after_20;
    // 0x8007B870: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_20:
    // 0x8007B874: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8007B878: andi        $t4, $v0, 0xFFFF
    ctx->r12 = ctx->r2 & 0XFFFF;
    // 0x8007B87C: sh          $t4, 0xD2($t5)
    MEM_H(0XD2, ctx->r13) = ctx->r12;
    // 0x8007B880: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8007B884: nop

    // 0x8007B888: sb          $zero, 0xD0($t7)
    MEM_B(0XD0, ctx->r15) = 0;
    // 0x8007B88C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007B890: jal         0x8007E328
    // 0x8007B894: nop

    func_8007E328(rdram, ctx);
        goto after_21;
    // 0x8007B894: nop

    after_21:
    // 0x8007B898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007B89C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007B8A0: jr          $ra
    // 0x8007B8A4: nop

    return;
    // 0x8007B8A4: nop

;}
RECOMP_FUNC void func_8007B8A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B8A8: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8007B8AC: nop

    // 0x8007B8B0: slt         $at, $a2, $t6
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8007B8B4: bne         $at, $zero, L_8007B938
    if (ctx->r1 != 0) {
        // 0x8007B8B8: nop
    
            goto L_8007B938;
    }
    // 0x8007B8B8: nop

L_8007B8BC:
    // 0x8007B8BC: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x8007B8C0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8007B8C4: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x8007B8C8: subu        $t1, $a2, $t0
    ctx->r9 = SUB32(ctx->r6, ctx->r8);
    // 0x8007B8CC: srav        $t2, $a1, $t1
    ctx->r10 = S32(SIGNED(ctx->r5) >> (ctx->r9 & 31));
    // 0x8007B8D0: sllv        $t9, $t7, $t8
    ctx->r25 = S32(ctx->r15 << (ctx->r24 & 31));
    // 0x8007B8D4: or          $t3, $t9, $t2
    ctx->r11 = ctx->r25 | ctx->r10;
    // 0x8007B8D8: lw          $t5, 0xC($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC);
    // 0x8007B8DC: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8007B8E0: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8007B8E4: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8007B8E8: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8007B8EC: sb          $t4, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r12;
    // 0x8007B8F0: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x8007B8F4: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x8007B8F8: subu        $t9, $a2, $t1
    ctx->r25 = SUB32(ctx->r6, ctx->r9);
    // 0x8007B8FC: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x8007B900: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8007B904: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x8007B908: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x8007B90C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8007B910: lw          $t3, 0x2F40($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2F40);
    // 0x8007B914: lw          $t5, 0x4($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X4);
    // 0x8007B918: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8007B91C: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x8007B920: lw          $t4, 0x4($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X4);
    // 0x8007B924: subu        $a2, $a2, $t5
    ctx->r6 = SUB32(ctx->r6, ctx->r13);
    // 0x8007B928: slt         $at, $a2, $t4
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8007B92C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8007B930: beq         $at, $zero, L_8007B8BC
    if (ctx->r1 == 0) {
        // 0x8007B934: and         $a1, $a1, $t3
        ctx->r5 = ctx->r5 & ctx->r11;
            goto L_8007B8BC;
    }
    // 0x8007B934: and         $a1, $a1, $t3
    ctx->r5 = ctx->r5 & ctx->r11;
L_8007B938:
    // 0x8007B938: blez        $a2, L_8007B95C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8007B93C: nop
    
            goto L_8007B95C;
    }
    // 0x8007B93C: nop

    // 0x8007B940: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8007B944: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x8007B948: sllv        $t8, $t7, $a2
    ctx->r24 = S32(ctx->r15 << (ctx->r6 & 31));
    // 0x8007B94C: or          $t0, $t8, $a1
    ctx->r8 = ctx->r24 | ctx->r5;
    // 0x8007B950: subu        $t9, $t1, $a2
    ctx->r25 = SUB32(ctx->r9, ctx->r6);
    // 0x8007B954: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x8007B958: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
L_8007B95C:
    // 0x8007B95C: jr          $ra
    // 0x8007B960: nop

    return;
    // 0x8007B960: nop

;}
RECOMP_FUNC void func_8007B964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B964: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007B968: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x8007B96C: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x8007B970: nop

    // 0x8007B974: slt         $at, $t6, $a1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8007B978: beq         $at, $zero, L_8007B9D8
    if (ctx->r1 == 0) {
        // 0x8007B97C: nop
    
            goto L_8007B9D8;
    }
    // 0x8007B97C: nop

L_8007B980:
    // 0x8007B980: lw          $t8, 0x10($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X10);
    // 0x8007B984: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x8007B988: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8007B98C: subu        $t9, $a1, $t8
    ctx->r25 = SUB32(ctx->r5, ctx->r24);
    // 0x8007B990: sllv        $t0, $t7, $t9
    ctx->r8 = S32(ctx->r15 << (ctx->r25 & 31));
    // 0x8007B994: or          $t2, $t1, $t0
    ctx->r10 = ctx->r9 | ctx->r8;
    // 0x8007B998: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x8007B99C: lw          $t4, 0x8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X8);
    // 0x8007B9A0: lw          $t5, 0xC($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC);
    // 0x8007B9A4: lw          $t3, 0x10($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X10);
    // 0x8007B9A8: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8007B9AC: lbu         $t8, 0x0($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X0);
    // 0x8007B9B0: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x8007B9B4: sw          $t1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r9;
    // 0x8007B9B8: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x8007B9BC: lw          $t0, 0x10($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X10);
    // 0x8007B9C0: subu        $a1, $a1, $t3
    ctx->r5 = SUB32(ctx->r5, ctx->r11);
    // 0x8007B9C4: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x8007B9C8: slt         $at, $t0, $a1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8007B9CC: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    // 0x8007B9D0: bne         $at, $zero, L_8007B980
    if (ctx->r1 != 0) {
        // 0x8007B9D4: sw          $t8, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->r24;
            goto L_8007B980;
    }
    // 0x8007B9D4: sw          $t8, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r24;
L_8007B9D8:
    // 0x8007B9D8: blez        $a1, L_8007BA2C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8007B9DC: nop
    
            goto L_8007BA2C;
    }
    // 0x8007B9DC: nop

    // 0x8007B9E0: lw          $t3, 0x10($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X10);
    // 0x8007B9E4: lw          $t2, 0x14($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X14);
    // 0x8007B9E8: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8007B9EC: subu        $t4, $t3, $a1
    ctx->r12 = SUB32(ctx->r11, ctx->r5);
    // 0x8007B9F0: srav        $t5, $t2, $t4
    ctx->r13 = S32(SIGNED(ctx->r10) >> (ctx->r12 & 31));
    // 0x8007B9F4: or          $t8, $t6, $t5
    ctx->r24 = ctx->r14 | ctx->r13;
    // 0x8007B9F8: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8007B9FC: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
    // 0x8007BA00: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8007BA04: subu        $t1, $t9, $a1
    ctx->r9 = SUB32(ctx->r25, ctx->r5);
    // 0x8007BA08: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x8007BA0C: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x8007BA10: lw          $t3, 0x2F40($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2F40);
    // 0x8007BA14: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x8007BA18: lw          $t4, 0x10($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X10);
    // 0x8007BA1C: and         $t2, $t7, $t3
    ctx->r10 = ctx->r15 & ctx->r11;
    // 0x8007BA20: subu        $t6, $t4, $a1
    ctx->r14 = SUB32(ctx->r12, ctx->r5);
    // 0x8007BA24: sw          $t2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r10;
    // 0x8007BA28: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
L_8007BA2C:
    // 0x8007BA2C: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x8007BA30: jr          $ra
    // 0x8007BA34: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007BA34: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007BA38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BA38: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8007BA3C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8007BA40: beq         $t6, $at, L_8007BA7C
    if (ctx->r14 == ctx->r1) {
        // 0x8007BA44: nop
    
            goto L_8007BA7C;
    }
    // 0x8007BA44: nop

    // 0x8007BA48: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8007BA4C: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x8007BA50: lw          $t0, 0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC);
    // 0x8007BA54: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
    // 0x8007BA58: sllv        $t9, $t7, $t8
    ctx->r25 = S32(ctx->r15 << (ctx->r24 & 31));
    // 0x8007BA5C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8007BA60: sb          $t9, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r25;
    // 0x8007BA64: lw          $t3, 0x8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X8);
    // 0x8007BA68: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x8007BA6C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8007BA70: sw          $t4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r12;
    // 0x8007BA74: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8007BA78: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
L_8007BA7C:
    // 0x8007BA7C: jr          $ra
    // 0x8007BA80: nop

    return;
    // 0x8007BA80: nop

;}
RECOMP_FUNC void func_8007BA84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BA84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007BA88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007BA8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8007BA90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007BA94: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BA98: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8007BA9C: jal         0x8003B22C
    // 0x8007BAA0: nop

    func_8003B22C(rdram, ctx);
        goto after_0;
    // 0x8007BAA0: nop

    after_0:
    // 0x8007BAA4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BAA8: nop

    // 0x8007BAAC: lbu         $t7, 0x25B8($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X25B8);
    // 0x8007BAB0: nop

    // 0x8007BAB4: beq         $t7, $zero, L_8007BAD4
    if (ctx->r15 == 0) {
        // 0x8007BAB8: nop
    
            goto L_8007BAD4;
    }
    // 0x8007BAB8: nop

L_8007BABC:
    // 0x8007BABC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BAC0: nop

    // 0x8007BAC4: lbu         $t9, 0x25B8($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X25B8);
    // 0x8007BAC8: nop

    // 0x8007BACC: bne         $t9, $zero, L_8007BABC
    if (ctx->r25 != 0) {
        // 0x8007BAD0: nop
    
            goto L_8007BABC;
    }
    // 0x8007BAD0: nop

L_8007BAD4:
    // 0x8007BAD4: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8007BAD8: lw          $t0, 0x1F10($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1F10);
    // 0x8007BADC: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8007BAE0: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
    // 0x8007BAE4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8007BAE8: lbu         $t3, -0x2($t2)
    ctx->r11 = MEM_BU(ctx->r10, -0X2);
    // 0x8007BAEC: nop

    // 0x8007BAF0: beq         $t3, $at, L_8007BB04
    if (ctx->r11 == ctx->r1) {
        // 0x8007BAF4: nop
    
            goto L_8007BB04;
    }
    // 0x8007BAF4: nop

    // 0x8007BAF8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BAFC: jal         0x8007BB54
    // 0x8007BB00: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_8007BB54(rdram, ctx);
        goto after_1;
    // 0x8007BB00: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_1:
L_8007BB04:
    // 0x8007BB04: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BB08: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8007BB0C: jal         0x8003B0A8
    // 0x8007BB10: nop

    func_8003B0A8(rdram, ctx);
        goto after_2;
    // 0x8007BB10: nop

    after_2:
    // 0x8007BB14: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BB18: nop

    // 0x8007BB1C: lbu         $t5, 0x25B9($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X25B9);
    // 0x8007BB20: nop

    // 0x8007BB24: beq         $t5, $zero, L_8007BB44
    if (ctx->r13 == 0) {
        // 0x8007BB28: nop
    
            goto L_8007BB44;
    }
    // 0x8007BB28: nop

L_8007BB2C:
    // 0x8007BB2C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BB30: nop

    // 0x8007BB34: lbu         $t7, 0x25B9($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X25B9);
    // 0x8007BB38: nop

    // 0x8007BB3C: bne         $t7, $zero, L_8007BB2C
    if (ctx->r15 != 0) {
        // 0x8007BB40: nop
    
            goto L_8007BB2C;
    }
    // 0x8007BB40: nop

L_8007BB44:
    // 0x8007BB44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007BB48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007BB4C: jr          $ra
    // 0x8007BB50: nop

    return;
    // 0x8007BB50: nop

;}
RECOMP_FUNC void func_8007BB54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BB54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007BB58: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8007BB5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007BB60: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007BB64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007BB68: lw          $a1, 0x1F10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1F10);
    // 0x8007BB6C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BB70: jal         0x800B7450
    // 0x8007BB74: nop

    _bzero(rdram, ctx);
        goto after_0;
    // 0x8007BB74: nop

    after_0:
    // 0x8007BB78: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x8007BB7C: lw          $t6, 0x1F10($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F10);
    // 0x8007BB80: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8007BB84: blez        $t6, L_8007BBC0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8007BB88: nop
    
            goto L_8007BBC0;
    }
    // 0x8007BB88: nop

L_8007BB8C:
    // 0x8007BB8C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8007BB90: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BB94: lw          $t9, 0x25B0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X25B0);
    // 0x8007BB98: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8007BB9C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8007BBA0: sb          $t7, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r15;
    // 0x8007BBA4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BBA8: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8007BBAC: lw          $t4, 0x1F10($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1F10);
    // 0x8007BBB0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8007BBB4: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8007BBB8: bne         $at, $zero, L_8007BB8C
    if (ctx->r1 != 0) {
        // 0x8007BBBC: sw          $t3, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r11;
            goto L_8007BB8C;
    }
    // 0x8007BBBC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
L_8007BBC0:
    // 0x8007BBC0: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8007BBC4: lw          $t8, 0x1F10($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F10);
    // 0x8007BBC8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007BBCC: addiu       $t5, $zero, 0x69
    ctx->r13 = ADD32(0, 0X69);
    // 0x8007BBD0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8007BBD4: sb          $t5, -0x2($t9)
    MEM_B(-0X2, ctx->r25) = ctx->r13;
    // 0x8007BBD8: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8007BBDC: lw          $t7, 0x1F10($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1F10);
    // 0x8007BBE0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8007BBE4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x8007BBE8: addu        $t1, $t0, $t7
    ctx->r9 = ADD32(ctx->r8, ctx->r15);
    // 0x8007BBEC: sb          $zero, -0x1($t1)
    MEM_B(-0X1, ctx->r9) = 0;
    // 0x8007BBF0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8007BBF4: lw          $t3, 0x1F10($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1F10);
    // 0x8007BBF8: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8007BBFC: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8007BC00: sb          $zero, -0x3($t4)
    MEM_B(-0X3, ctx->r12) = 0;
    // 0x8007BC04: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007BC08: lw          $t8, 0x1F10($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F10);
    // 0x8007BC0C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8007BC10: addu        $t5, $t6, $t8
    ctx->r13 = ADD32(ctx->r14, ctx->r24);
    // 0x8007BC14: sb          $zero, -0x4($t5)
    MEM_B(-0X4, ctx->r13) = 0;
    // 0x8007BC18: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8007BC1C: lw          $t0, 0x1F10($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1F10);
    // 0x8007BC20: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8007BC24: addu        $t7, $t9, $t0
    ctx->r15 = ADD32(ctx->r25, ctx->r8);
    // 0x8007BC28: sb          $zero, -0x5($t7)
    MEM_B(-0X5, ctx->r15) = 0;
    // 0x8007BC2C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8007BC30: lw          $t2, 0x1F10($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1F10);
    // 0x8007BC34: nop

    // 0x8007BC38: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8007BC3C: sb          $zero, -0x6($t3)
    MEM_B(-0X6, ctx->r11) = 0;
    // 0x8007BC40: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007BC44: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8007BC48: jal         0x8003B0A8
    // 0x8007BC4C: nop

    func_8003B0A8(rdram, ctx);
        goto after_1;
    // 0x8007BC4C: nop

    after_1:
    // 0x8007BC50: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8007BC54: nop

    // 0x8007BC58: lbu         $t6, 0x25B9($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X25B9);
    // 0x8007BC5C: nop

    // 0x8007BC60: beq         $t6, $zero, L_8007BC80
    if (ctx->r14 == 0) {
        // 0x8007BC64: nop
    
            goto L_8007BC80;
    }
    // 0x8007BC64: nop

L_8007BC68:
    // 0x8007BC68: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8007BC6C: nop

    // 0x8007BC70: lbu         $t5, 0x25B9($t8)
    ctx->r13 = MEM_BU(ctx->r24, 0X25B9);
    // 0x8007BC74: nop

    // 0x8007BC78: bne         $t5, $zero, L_8007BC68
    if (ctx->r13 != 0) {
        // 0x8007BC7C: nop
    
            goto L_8007BC68;
    }
    // 0x8007BC7C: nop

L_8007BC80:
    // 0x8007BC80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007BC84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007BC88: jr          $ra
    // 0x8007BC8C: nop

    return;
    // 0x8007BC8C: nop

;}
RECOMP_FUNC void func_8007BC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BC90: lui         $at, 0xAAAA
    ctx->r1 = S32(0XAAAA << 16);
    // 0x8007BC94: ori         $at, $at, 0xAAAA
    ctx->r1 = ctx->r1 | 0XAAAA;
    // 0x8007BC98: and         $t6, $a1, $at
    ctx->r14 = ctx->r5 & ctx->r1;
    // 0x8007BC9C: lui         $at, 0x5555
    ctx->r1 = S32(0X5555 << 16);
    // 0x8007BCA0: ori         $at, $at, 0x5555
    ctx->r1 = ctx->r1 | 0X5555;
    // 0x8007BCA4: and         $t7, $a1, $at
    ctx->r15 = ctx->r5 & ctx->r1;
    // 0x8007BCA8: sw          $t6, 0xF04($a0)
    MEM_W(0XF04, ctx->r4) = ctx->r14;
    // 0x8007BCAC: jr          $ra
    // 0x8007BCB0: sw          $t7, 0xF08($a0)
    MEM_W(0XF08, ctx->r4) = ctx->r15;
    return;
    // 0x8007BCB0: sw          $t7, 0xF08($a0)
    MEM_W(0XF08, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8007BCB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BCB4: lw          $t6, 0xF04($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XF04);
    // 0x8007BCB8: lw          $t7, 0xF08($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XF08);
    // 0x8007BCBC: jr          $ra
    // 0x8007BCC0: or          $v0, $t6, $t7
    ctx->r2 = ctx->r14 | ctx->r15;
    return;
    // 0x8007BCC0: or          $v0, $t6, $t7
    ctx->r2 = ctx->r14 | ctx->r15;
;}
RECOMP_FUNC void func_8007BCC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BCC4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007BCC8: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x8007BCCC: beq         $a1, $zero, L_8007BD3C
    if (ctx->r5 == 0) {
        // 0x8007BCD0: sw          $zero, 0x0($sp)
        MEM_W(0X0, ctx->r29) = 0;
            goto L_8007BD3C;
    }
    // 0x8007BCD0: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_8007BCD4:
    // 0x8007BCD4: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8007BCD8: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8007BCDC: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x8007BCE0: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x8007BCE4: addu        $t2, $a0, $t7
    ctx->r10 = ADD32(ctx->r4, ctx->r15);
    // 0x8007BCE8: xori        $t0, $t9, 0x10
    ctx->r8 = ctx->r25 ^ 0X10;
    // 0x8007BCEC: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x8007BCF0: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x8007BCF4: lbu         $t3, 0x2($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X2);
    // 0x8007BCF8: addu        $t5, $a0, $t7
    ctx->r13 = ADD32(ctx->r4, ctx->r15);
    // 0x8007BCFC: subu        $t4, $t1, $t3
    ctx->r12 = SUB32(ctx->r9, ctx->r11);
    // 0x8007BD00: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x8007BD04: lbu         $t8, 0x1($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0X1);
    // 0x8007BD08: addu        $t0, $a0, $t7
    ctx->r8 = ADD32(ctx->r4, ctx->r15);
    // 0x8007BD0C: xori        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 ^ 0X20;
    // 0x8007BD10: addu        $t6, $t4, $t9
    ctx->r14 = ADD32(ctx->r12, ctx->r25);
    // 0x8007BD14: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8007BD18: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x8007BD1C: lbu         $t2, 0x3($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X3);
    // 0x8007BD20: addiu       $t8, $t5, 0x4
    ctx->r24 = ADD32(ctx->r13, 0X4);
    // 0x8007BD24: sll         $t1, $t2, 1
    ctx->r9 = S32(ctx->r10 << 1);
    // 0x8007BD28: sltu        $at, $t8, $a1
    ctx->r1 = ctx->r24 < ctx->r5 ? 1 : 0;
    // 0x8007BD2C: subu        $t3, $t6, $t1
    ctx->r11 = SUB32(ctx->r14, ctx->r9);
    // 0x8007BD30: sw          $t8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r24;
    // 0x8007BD34: bne         $at, $zero, L_8007BCD4
    if (ctx->r1 != 0) {
        // 0x8007BD38: sw          $t3, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r11;
            goto L_8007BCD4;
    }
    // 0x8007BD38: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
L_8007BD3C:
    // 0x8007BD3C: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x8007BD40: jr          $ra
    // 0x8007BD44: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007BD44: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007BD48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BD48: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007BD4C: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
    // 0x8007BD50: beq         $a1, $zero, L_8007BDCC
    if (ctx->r5 == 0) {
        // 0x8007BD54: sw          $zero, 0x0($sp)
        MEM_W(0X0, ctx->r29) = 0;
            goto L_8007BDCC;
    }
    // 0x8007BD54: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_8007BD58:
    // 0x8007BD58: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8007BD5C: lhu         $t6, 0x6($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X6);
    // 0x8007BD60: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x8007BD64: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x8007BD68: addu        $t2, $a0, $t7
    ctx->r10 = ADD32(ctx->r4, ctx->r15);
    // 0x8007BD6C: xori        $t0, $t9, 0x10
    ctx->r8 = ctx->r25 ^ 0X10;
    // 0x8007BD70: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x8007BD74: sh          $t1, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r9;
    // 0x8007BD78: lbu         $t3, 0x2($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X2);
    // 0x8007BD7C: andi        $t4, $t1, 0xFFFF
    ctx->r12 = ctx->r9 & 0XFFFF;
    // 0x8007BD80: subu        $t5, $t4, $t3
    ctx->r13 = SUB32(ctx->r12, ctx->r11);
    // 0x8007BD84: sh          $t5, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r13;
    // 0x8007BD88: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x8007BD8C: lbu         $t9, 0x1($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1);
    // 0x8007BD90: andi        $t0, $t5, 0xFFFF
    ctx->r8 = ctx->r13 & 0XFFFF;
    // 0x8007BD94: xori        $t6, $t9, 0x20
    ctx->r14 = ctx->r25 ^ 0X20;
    // 0x8007BD98: addu        $t2, $t0, $t6
    ctx->r10 = ADD32(ctx->r8, ctx->r14);
    // 0x8007BD9C: sh          $t2, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r10;
    // 0x8007BDA0: addu        $t1, $a0, $t7
    ctx->r9 = ADD32(ctx->r4, ctx->r15);
    // 0x8007BDA4: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x8007BDA8: lbu         $t4, 0x3($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X3);
    // 0x8007BDAC: andi        $t8, $t2, 0xFFFF
    ctx->r24 = ctx->r10 & 0XFFFF;
    // 0x8007BDB0: addiu       $t0, $t5, 0x4
    ctx->r8 = ADD32(ctx->r13, 0X4);
    // 0x8007BDB4: sll         $t3, $t4, 1
    ctx->r11 = S32(ctx->r12 << 1);
    // 0x8007BDB8: sltu        $at, $t0, $a1
    ctx->r1 = ctx->r8 < ctx->r5 ? 1 : 0;
    // 0x8007BDBC: addu        $t9, $t8, $t3
    ctx->r25 = ADD32(ctx->r24, ctx->r11);
    // 0x8007BDC0: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
    // 0x8007BDC4: bne         $at, $zero, L_8007BD58
    if (ctx->r1 != 0) {
        // 0x8007BDC8: sh          $t9, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r25;
            goto L_8007BD58;
    }
    // 0x8007BDC8: sh          $t9, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r25;
L_8007BDCC:
    // 0x8007BDCC: lhu         $v0, 0x6($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X6);
    // 0x8007BDD0: jr          $ra
    // 0x8007BDD4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007BDD4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007BDD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BDD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007BDDC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007BDE0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BDE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007BDE8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007BDEC: addiu       $a1, $a1, -0x21A0
    ctx->r5 = ADD32(ctx->r5, -0X21A0);
    // 0x8007BDF0: jal         0x800B62D4
    // 0x8007BDF4: addiu       $a0, $a0, 0xF0C
    ctx->r4 = ADD32(ctx->r4, 0XF0C);
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x8007BDF4: addiu       $a0, $a0, 0xF0C
    ctx->r4 = ADD32(ctx->r4, 0XF0C);
    after_0:
    // 0x8007BDF8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BDFC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007BE00: addiu       $a1, $a1, -0x2198
    ctx->r5 = ADD32(ctx->r5, -0X2198);
    // 0x8007BE04: jal         0x800B62D4
    // 0x8007BE08: addiu       $a0, $a0, 0xF24
    ctx->r4 = ADD32(ctx->r4, 0XF24);
    sprintf_recomp(rdram, ctx);
        goto after_1;
    // 0x8007BE08: addiu       $a0, $a0, 0xF24
    ctx->r4 = ADD32(ctx->r4, 0XF24);
    after_1:
    // 0x8007BE0C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BE10: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007BE14: addiu       $a1, $a1, -0x2190
    ctx->r5 = ADD32(ctx->r5, -0X2190);
    // 0x8007BE18: jal         0x800B62D4
    // 0x8007BE1C: addiu       $a0, $a0, 0xF3C
    ctx->r4 = ADD32(ctx->r4, 0XF3C);
    sprintf_recomp(rdram, ctx);
        goto after_2;
    // 0x8007BE1C: addiu       $a0, $a0, 0xF3C
    ctx->r4 = ADD32(ctx->r4, 0XF3C);
    after_2:
    // 0x8007BE20: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BE24: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007BE28: addiu       $a1, $a1, -0x2188
    ctx->r5 = ADD32(ctx->r5, -0X2188);
    // 0x8007BE2C: jal         0x800B62D4
    // 0x8007BE30: addiu       $a0, $a0, 0xF54
    ctx->r4 = ADD32(ctx->r4, 0XF54);
    sprintf_recomp(rdram, ctx);
        goto after_3;
    // 0x8007BE30: addiu       $a0, $a0, 0xF54
    ctx->r4 = ADD32(ctx->r4, 0XF54);
    after_3:
    // 0x8007BE34: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BE38: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007BE3C: addiu       $a1, $a1, -0x2180
    ctx->r5 = ADD32(ctx->r5, -0X2180);
    // 0x8007BE40: jal         0x800B62D4
    // 0x8007BE44: addiu       $a0, $a0, 0xF6C
    ctx->r4 = ADD32(ctx->r4, 0XF6C);
    sprintf_recomp(rdram, ctx);
        goto after_4;
    // 0x8007BE44: addiu       $a0, $a0, 0xF6C
    ctx->r4 = ADD32(ctx->r4, 0XF6C);
    after_4:
    // 0x8007BE48: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BE4C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007BE50: addiu       $a1, $a1, -0x2178
    ctx->r5 = ADD32(ctx->r5, -0X2178);
    // 0x8007BE54: jal         0x800B62D4
    // 0x8007BE58: addiu       $a0, $a0, 0xF84
    ctx->r4 = ADD32(ctx->r4, 0XF84);
    sprintf_recomp(rdram, ctx);
        goto after_5;
    // 0x8007BE58: addiu       $a0, $a0, 0xF84
    ctx->r4 = ADD32(ctx->r4, 0XF84);
    after_5:
    // 0x8007BE5C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BE60: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007BE64: addiu       $a1, $a1, -0x2170
    ctx->r5 = ADD32(ctx->r5, -0X2170);
    // 0x8007BE68: jal         0x800B62D4
    // 0x8007BE6C: addiu       $a0, $a0, 0xF9C
    ctx->r4 = ADD32(ctx->r4, 0XF9C);
    sprintf_recomp(rdram, ctx);
        goto after_6;
    // 0x8007BE6C: addiu       $a0, $a0, 0xF9C
    ctx->r4 = ADD32(ctx->r4, 0XF9C);
    after_6:
    // 0x8007BE70: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BE74: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007BE78: addiu       $a1, $a1, -0x2168
    ctx->r5 = ADD32(ctx->r5, -0X2168);
    // 0x8007BE7C: jal         0x800B62D4
    // 0x8007BE80: addiu       $a0, $a0, 0xFB4
    ctx->r4 = ADD32(ctx->r4, 0XFB4);
    sprintf_recomp(rdram, ctx);
        goto after_7;
    // 0x8007BE80: addiu       $a0, $a0, 0xFB4
    ctx->r4 = ADD32(ctx->r4, 0XFB4);
    after_7:
    // 0x8007BE84: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BE88: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007BE8C: addiu       $a1, $a1, -0x215C
    ctx->r5 = ADD32(ctx->r5, -0X215C);
    // 0x8007BE90: jal         0x800B62D4
    // 0x8007BE94: addiu       $a0, $a0, 0xFCC
    ctx->r4 = ADD32(ctx->r4, 0XFCC);
    sprintf_recomp(rdram, ctx);
        goto after_8;
    // 0x8007BE94: addiu       $a0, $a0, 0xFCC
    ctx->r4 = ADD32(ctx->r4, 0XFCC);
    after_8:
    // 0x8007BE98: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BE9C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007BEA0: addiu       $a1, $a1, -0x2150
    ctx->r5 = ADD32(ctx->r5, -0X2150);
    // 0x8007BEA4: jal         0x800B62D4
    // 0x8007BEA8: addiu       $a0, $a0, 0xFE4
    ctx->r4 = ADD32(ctx->r4, 0XFE4);
    sprintf_recomp(rdram, ctx);
        goto after_9;
    // 0x8007BEA8: addiu       $a0, $a0, 0xFE4
    ctx->r4 = ADD32(ctx->r4, 0XFE4);
    after_9:
    // 0x8007BEAC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BEB0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007BEB4: addiu       $a1, $a1, -0x2148
    ctx->r5 = ADD32(ctx->r5, -0X2148);
    // 0x8007BEB8: jal         0x800B62D4
    // 0x8007BEBC: addiu       $a0, $a0, 0xFFC
    ctx->r4 = ADD32(ctx->r4, 0XFFC);
    sprintf_recomp(rdram, ctx);
        goto after_10;
    // 0x8007BEBC: addiu       $a0, $a0, 0xFFC
    ctx->r4 = ADD32(ctx->r4, 0XFFC);
    after_10:
    // 0x8007BEC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BEC4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007BEC8: addiu       $a1, $a1, -0x2140
    ctx->r5 = ADD32(ctx->r5, -0X2140);
    // 0x8007BECC: jal         0x800B62D4
    // 0x8007BED0: addiu       $a0, $a0, 0x1014
    ctx->r4 = ADD32(ctx->r4, 0X1014);
    sprintf_recomp(rdram, ctx);
        goto after_11;
    // 0x8007BED0: addiu       $a0, $a0, 0x1014
    ctx->r4 = ADD32(ctx->r4, 0X1014);
    after_11:
    // 0x8007BED4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BED8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007BEDC: addiu       $a1, $a1, -0x2138
    ctx->r5 = ADD32(ctx->r5, -0X2138);
    // 0x8007BEE0: jal         0x800B62D4
    // 0x8007BEE4: addiu       $a0, $a0, 0x102C
    ctx->r4 = ADD32(ctx->r4, 0X102C);
    sprintf_recomp(rdram, ctx);
        goto after_12;
    // 0x8007BEE4: addiu       $a0, $a0, 0x102C
    ctx->r4 = ADD32(ctx->r4, 0X102C);
    after_12:
    // 0x8007BEE8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BEEC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007BEF0: addiu       $a1, $a1, -0x2130
    ctx->r5 = ADD32(ctx->r5, -0X2130);
    // 0x8007BEF4: jal         0x800B62D4
    // 0x8007BEF8: addiu       $a0, $a0, 0x1044
    ctx->r4 = ADD32(ctx->r4, 0X1044);
    sprintf_recomp(rdram, ctx);
        goto after_13;
    // 0x8007BEF8: addiu       $a0, $a0, 0x1044
    ctx->r4 = ADD32(ctx->r4, 0X1044);
    after_13:
    // 0x8007BEFC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BF00: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007BF04: addiu       $a1, $a1, -0x2128
    ctx->r5 = ADD32(ctx->r5, -0X2128);
    // 0x8007BF08: jal         0x800B62D4
    // 0x8007BF0C: addiu       $a0, $a0, 0x105C
    ctx->r4 = ADD32(ctx->r4, 0X105C);
    sprintf_recomp(rdram, ctx);
        goto after_14;
    // 0x8007BF0C: addiu       $a0, $a0, 0x105C
    ctx->r4 = ADD32(ctx->r4, 0X105C);
    after_14:
    // 0x8007BF10: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8007BF14:
    // 0x8007BF14: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BF18: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007BF1C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007BF20: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8007BF24: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8007BF28: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8007BF2C: sb          $zero, 0xF16($t9)
    MEM_B(0XF16, ctx->r25) = 0;
    // 0x8007BF30: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BF34: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8007BF38: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8007BF3C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8007BF40: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8007BF44: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8007BF48: sb          $zero, 0xF17($t3)
    MEM_B(0XF17, ctx->r11) = 0;
    // 0x8007BF4C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BF50: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8007BF54: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8007BF58: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x8007BF5C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8007BF60: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x8007BF64: sb          $zero, 0xF8E($t6)
    MEM_B(0XF8E, ctx->r14) = 0;
    // 0x8007BF68: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BF6C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8007BF70: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8007BF74: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x8007BF78: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8007BF7C: addu        $t0, $t8, $t1
    ctx->r8 = ADD32(ctx->r24, ctx->r9);
    // 0x8007BF80: sb          $zero, 0xF8F($t0)
    MEM_B(0XF8F, ctx->r8) = 0;
    // 0x8007BF84: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BF88: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8007BF8C: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8007BF90: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x8007BF94: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x8007BF98: addu        $t4, $t2, $t5
    ctx->r12 = ADD32(ctx->r10, ctx->r13);
    // 0x8007BF9C: sb          $zero, 0x1006($t4)
    MEM_B(0X1006, ctx->r12) = 0;
    // 0x8007BFA0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BFA4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8007BFA8: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8007BFAC: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x8007BFB0: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8007BFB4: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x8007BFB8: sb          $zero, 0x1007($t8)
    MEM_B(0X1007, ctx->r24) = 0;
    // 0x8007BFBC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BFC0: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8007BFC4: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x8007BFC8: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x8007BFCC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8007BFD0: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x8007BFD4: subu        $t5, $t5, $t1
    ctx->r13 = SUB32(ctx->r13, ctx->r9);
    // 0x8007BFD8: lw          $t3, 0x2FC4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2FC4);
    // 0x8007BFDC: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x8007BFE0: addu        $t4, $t2, $t5
    ctx->r12 = ADD32(ctx->r10, ctx->r13);
    // 0x8007BFE4: sw          $t3, 0xF18($t4)
    MEM_W(0XF18, ctx->r12) = ctx->r11;
    // 0x8007BFE8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BFEC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8007BFF0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007BFF4: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8007BFF8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8007BFFC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8007C000: subu        $t0, $t0, $t6
    ctx->r8 = SUB32(ctx->r8, ctx->r14);
    // 0x8007C004: lw          $t9, 0x2FD8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2FD8);
    // 0x8007C008: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8007C00C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8007C010: sw          $t9, 0xF90($t1)
    MEM_W(0XF90, ctx->r9) = ctx->r25;
    // 0x8007C014: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C018: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8007C01C: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x8007C020: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x8007C024: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8007C028: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x8007C02C: subu        $t7, $t7, $t2
    ctx->r15 = SUB32(ctx->r15, ctx->r10);
    // 0x8007C030: lw          $t3, 0x2FEC($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2FEC);
    // 0x8007C034: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8007C038: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x8007C03C: sw          $t3, 0x1008($t6)
    MEM_W(0X1008, ctx->r14) = ctx->r11;
    // 0x8007C040: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C044: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8007C048: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8007C04C: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x8007C050: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8007C054: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x8007C058: subu        $t5, $t5, $t8
    ctx->r13 = SUB32(ctx->r13, ctx->r24);
    // 0x8007C05C: lw          $t9, 0x3000($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3000);
    // 0x8007C060: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x8007C064: addu        $t2, $t1, $t5
    ctx->r10 = ADD32(ctx->r9, ctx->r13);
    // 0x8007C068: sw          $t9, 0xF1C($t2)
    MEM_W(0XF1C, ctx->r10) = ctx->r25;
    // 0x8007C06C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C070: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8007C074: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x8007C078: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x8007C07C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007C080: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x8007C084: subu        $t0, $t0, $t4
    ctx->r8 = SUB32(ctx->r8, ctx->r12);
    // 0x8007C088: lw          $t3, 0x3014($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3014);
    // 0x8007C08C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8007C090: addu        $t8, $t6, $t0
    ctx->r24 = ADD32(ctx->r14, ctx->r8);
    // 0x8007C094: sw          $t3, 0xF94($t8)
    MEM_W(0XF94, ctx->r24) = ctx->r11;
    // 0x8007C098: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C09C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8007C0A0: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x8007C0A4: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x8007C0A8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8007C0AC: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x8007C0B0: subu        $t7, $t7, $t1
    ctx->r15 = SUB32(ctx->r15, ctx->r9);
    // 0x8007C0B4: lw          $t9, 0x3028($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3028);
    // 0x8007C0B8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8007C0BC: addu        $t4, $t2, $t7
    ctx->r12 = ADD32(ctx->r10, ctx->r15);
    // 0x8007C0C0: sw          $t9, 0x100C($t4)
    MEM_W(0X100C, ctx->r12) = ctx->r25;
    // 0x8007C0C4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C0C8: nop

    // 0x8007C0CC: addiu       $t0, $t6, 0x1
    ctx->r8 = ADD32(ctx->r14, 0X1);
    // 0x8007C0D0: slti        $at, $t0, 0x5
    ctx->r1 = SIGNED(ctx->r8) < 0X5 ? 1 : 0;
    // 0x8007C0D4: bne         $at, $zero, L_8007BF14
    if (ctx->r1 != 0) {
        // 0x8007C0D8: sw          $t0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r8;
            goto L_8007BF14;
    }
    // 0x8007C0D8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8007C0DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007C0E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007C0E4: jr          $ra
    // 0x8007C0E8: nop

    return;
    // 0x8007C0E8: nop

;}
RECOMP_FUNC void func_8007C0EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C0EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007C0F0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8007C0F4: lbu         $t6, 0x33($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X33);
    // 0x8007C0F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C0FC: bne         $t6, $zero, L_8007C130
    if (ctx->r14 != 0) {
        // 0x8007C100: nop
    
            goto L_8007C130;
    }
    // 0x8007C100: nop

    // 0x8007C104: jal         0x8007E03C
    // 0x8007C108: addiu       $a0, $zero, 0x1900
    ctx->r4 = ADD32(0, 0X1900);
    func_8007E03C(rdram, ctx);
        goto after_0;
    // 0x8007C108: addiu       $a0, $zero, 0x1900
    ctx->r4 = ADD32(0, 0X1900);
    after_0:
    // 0x8007C10C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007C110: sw          $v0, -0x310($at)
    MEM_W(-0X310, ctx->r1) = ctx->r2;
    // 0x8007C114: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8007C118: lw          $t7, -0x310($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X310);
    // 0x8007C11C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8007C120: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    // 0x8007C124: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x8007C128: jal         0x800AC1A8
    // 0x8007C12C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_800AC1A8(rdram, ctx);
        goto after_1;
    // 0x8007C12C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
L_8007C130:
    // 0x8007C130: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8007C134: lw          $t8, -0x310($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X310);
    // 0x8007C138: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007C13C: addiu       $a1, $a1, -0x2120
    ctx->r5 = ADD32(ctx->r5, -0X2120);
    // 0x8007C140: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8007C144: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x8007C148: jal         0x800B80B0
    // 0x8007C14C: addiu       $a0, $t8, 0x18F8
    ctx->r4 = ADD32(ctx->r24, 0X18F8);
    _bcmp(rdram, ctx);
        goto after_2;
    // 0x8007C14C: addiu       $a0, $t8, 0x18F8
    ctx->r4 = ADD32(ctx->r24, 0X18F8);
    after_2:
    // 0x8007C150: bne         $v0, $zero, L_8007C168
    if (ctx->r2 != 0) {
        // 0x8007C154: nop
    
            goto L_8007C168;
    }
    // 0x8007C154: nop

    // 0x8007C158: lbu         $t9, 0x33($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X33);
    // 0x8007C15C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007C160: bne         $t9, $at, L_8007C2DC
    if (ctx->r25 != ctx->r1) {
        // 0x8007C164: nop
    
            goto L_8007C2DC;
    }
    // 0x8007C164: nop

L_8007C168:
    // 0x8007C168: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C16C: jal         0x800B7450
    // 0x8007C170: addiu       $a1, $zero, 0x1900
    ctx->r5 = ADD32(0, 0X1900);
    _bzero(rdram, ctx);
        goto after_3;
    // 0x8007C170: addiu       $a1, $zero, 0x1900
    ctx->r5 = ADD32(0, 0X1900);
    after_3:
    // 0x8007C174: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C178: addiu       $t1, $zero, 0x30
    ctx->r9 = ADD32(0, 0X30);
    // 0x8007C17C: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x8007C180: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C184: addiu       $t3, $zero, 0x2E
    ctx->r11 = ADD32(0, 0X2E);
    // 0x8007C188: sb          $t1, 0x18F8($t2)
    MEM_B(0X18F8, ctx->r10) = ctx->r9;
    // 0x8007C18C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C190: addiu       $t5, $zero, 0x30
    ctx->r13 = ADD32(0, 0X30);
    // 0x8007C194: sb          $t3, 0x18F9($t4)
    MEM_B(0X18F9, ctx->r12) = ctx->r11;
    // 0x8007C198: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C19C: addiu       $t7, $zero, 0x62
    ctx->r15 = ADD32(0, 0X62);
    // 0x8007C1A0: sb          $t5, 0x18FA($t6)
    MEM_B(0X18FA, ctx->r14) = ctx->r13;
    // 0x8007C1A4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C1A8: addiu       $t9, $zero, 0x5B68
    ctx->r25 = ADD32(0, 0X5B68);
    // 0x8007C1AC: sb          $t7, 0x18FB($t8)
    MEM_B(0X18FB, ctx->r24) = ctx->r15;
    // 0x8007C1B0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C1B4: addiu       $t1, $zero, 0x7000
    ctx->r9 = ADD32(0, 0X7000);
    // 0x8007C1B8: sw          $t9, 0x18E4($t0)
    MEM_W(0X18E4, ctx->r8) = ctx->r25;
    // 0x8007C1BC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C1C0: nop

    // 0x8007C1C4: sw          $t1, 0x18E8($t2)
    MEM_W(0X18E8, ctx->r10) = ctx->r9;
    // 0x8007C1C8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C1CC: jal         0x800B6550
    // 0x8007C1D0: sw          $zero, 0x18EC($t3)
    MEM_W(0X18EC, ctx->r11) = 0;
    osGetTime_recomp(rdram, ctx);
        goto after_4;
    // 0x8007C1D0: sw          $zero, 0x18EC($t3)
    MEM_W(0X18EC, ctx->r11) = 0;
    after_4:
    // 0x8007C1D4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8007C1D8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8007C1DC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C1E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007C1E4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8007C1E8: jal         0x800B7658
    // 0x8007C1EC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    __ll_mul_recomp(rdram, ctx);
        goto after_5;
    // 0x8007C1EC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_5:
    // 0x8007C1F0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8007C1F4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8007C1F8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8007C1FC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007C200: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8007C204: jal         0x800B7558
    // 0x8007C208: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    __ull_div_recomp(rdram, ctx);
        goto after_6;
    // 0x8007C208: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_6:
    // 0x8007C20C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C210: or          $t4, $v1, $zero
    ctx->r12 = ctx->r3 | 0;
    // 0x8007C214: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007C218: sw          $t4, 0x18F4($t5)
    MEM_W(0X18F4, ctx->r13) = ctx->r12;
    // 0x8007C21C: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x8007C220: jal         0x8007BDD8
    // 0x8007C224: nop

    func_8007BDD8(rdram, ctx);
        goto after_7;
    // 0x8007C224: nop

    after_7:
    // 0x8007C228: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C22C: jal         0x8007BCC4
    // 0x8007C230: addiu       $a1, $zero, 0x18FC
    ctx->r5 = ADD32(0, 0X18FC);
    func_8007BCC4(rdram, ctx);
        goto after_8;
    // 0x8007C230: addiu       $a1, $zero, 0x18FC
    ctx->r5 = ADD32(0, 0X18FC);
    after_8:
    // 0x8007C234: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C238: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8007C23C: sw          $v0, 0x18FC($t6)
    MEM_W(0X18FC, ctx->r14) = ctx->r2;
    // 0x8007C240: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C244: jal         0x800AC22C
    // 0x8007C248: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    func_800AC22C(rdram, ctx);
        goto after_9;
    // 0x8007C248: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    after_9:
    // 0x8007C24C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C250: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8007C254: ori         $a1, $a1, 0x1900
    ctx->r5 = ctx->r5 | 0X1900;
    // 0x8007C258: jal         0x800AC22C
    // 0x8007C25C: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    func_800AC22C(rdram, ctx);
        goto after_10;
    // 0x8007C25C: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    after_10:
    // 0x8007C260: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C264: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8007C268: ori         $a1, $a1, 0x3200
    ctx->r5 = ctx->r5 | 0X3200;
    // 0x8007C26C: jal         0x800AC22C
    // 0x8007C270: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    func_800AC22C(rdram, ctx);
        goto after_11;
    // 0x8007C270: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    after_11:
    // 0x8007C274: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C278: nop

    // 0x8007C27C: lw          $a0, 0x18E8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18E8);
    // 0x8007C280: jal         0x80087618
    // 0x8007C284: nop

    func_80087618(rdram, ctx);
        goto after_12;
    // 0x8007C284: nop

    after_12:
    // 0x8007C288: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C28C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8007C290: lw          $a0, 0x18E4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X18E4);
    // 0x8007C294: jal         0x800875EC
    // 0x8007C298: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    func_800875EC(rdram, ctx);
        goto after_13;
    // 0x8007C298: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    after_13:
    // 0x8007C29C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C2A0: addiu       $at, $zero, 0x924
    ctx->r1 = ADD32(0, 0X924);
    // 0x8007C2A4: lw          $t0, 0x18E4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X18E4);
    // 0x8007C2A8: nop

    // 0x8007C2AC: divu        $zero, $t0, $at
    lo = S32(U32(ctx->r8) / U32(ctx->r1)); hi = S32(U32(ctx->r8) % U32(ctx->r1));
    // 0x8007C2B0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007C2B4: mflo        $t1
    ctx->r9 = lo;
    // 0x8007C2B8: sb          $t1, 0x4914($at)
    MEM_B(0X4914, ctx->r1) = ctx->r9;
    // 0x8007C2BC: lw          $t2, 0x18E8($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X18E8);
    // 0x8007C2C0: addiu       $at, $zero, 0x924
    ctx->r1 = ADD32(0, 0X924);
    // 0x8007C2C4: divu        $zero, $t2, $at
    lo = S32(U32(ctx->r10) / U32(ctx->r1)); hi = S32(U32(ctx->r10) % U32(ctx->r1));
    // 0x8007C2C8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007C2CC: mflo        $t3
    ctx->r11 = lo;
    // 0x8007C2D0: sb          $t3, 0x4CD8($at)
    MEM_B(0X4CD8, ctx->r1) = ctx->r11;
    // 0x8007C2D4: b           L_8007C5B0
    // 0x8007C2D8: nop

        goto L_8007C5B0;
    // 0x8007C2D8: nop

L_8007C2DC:
    // 0x8007C2DC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C2E0: jal         0x8007BCC4
    // 0x8007C2E4: addiu       $a1, $zero, 0x18FC
    ctx->r5 = ADD32(0, 0X18FC);
    func_8007BCC4(rdram, ctx);
        goto after_14;
    // 0x8007C2E4: addiu       $a1, $zero, 0x18FC
    ctx->r5 = ADD32(0, 0X18FC);
    after_14:
    // 0x8007C2E8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C2EC: nop

    // 0x8007C2F0: lw          $t5, 0x18FC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X18FC);
    // 0x8007C2F4: nop

    // 0x8007C2F8: beq         $v0, $t5, L_8007C538
    if (ctx->r2 == ctx->r13) {
        // 0x8007C2FC: nop
    
            goto L_8007C538;
    }
    // 0x8007C2FC: nop

    // 0x8007C300: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8007C304: ori         $a1, $a1, 0x1900
    ctx->r5 = ctx->r5 | 0X1900;
    // 0x8007C308: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x8007C30C: jal         0x800AC1A8
    // 0x8007C310: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    func_800AC1A8(rdram, ctx);
        goto after_15;
    // 0x8007C310: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    after_15:
    // 0x8007C314: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C318: jal         0x8007BCC4
    // 0x8007C31C: addiu       $a1, $zero, 0x18FC
    ctx->r5 = ADD32(0, 0X18FC);
    func_8007BCC4(rdram, ctx);
        goto after_16;
    // 0x8007C31C: addiu       $a1, $zero, 0x18FC
    ctx->r5 = ADD32(0, 0X18FC);
    after_16:
    // 0x8007C320: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C324: nop

    // 0x8007C328: lw          $t7, 0x18FC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18FC);
    // 0x8007C32C: nop

    // 0x8007C330: beq         $v0, $t7, L_8007C538
    if (ctx->r2 == ctx->r15) {
        // 0x8007C334: nop
    
            goto L_8007C538;
    }
    // 0x8007C334: nop

    // 0x8007C338: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8007C33C: ori         $a1, $a1, 0x3200
    ctx->r5 = ctx->r5 | 0X3200;
    // 0x8007C340: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8007C344: jal         0x800AC1A8
    // 0x8007C348: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    func_800AC1A8(rdram, ctx);
        goto after_17;
    // 0x8007C348: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    after_17:
    // 0x8007C34C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C350: jal         0x8007BCC4
    // 0x8007C354: addiu       $a1, $zero, 0x18FC
    ctx->r5 = ADD32(0, 0X18FC);
    func_8007BCC4(rdram, ctx);
        goto after_18;
    // 0x8007C354: addiu       $a1, $zero, 0x18FC
    ctx->r5 = ADD32(0, 0X18FC);
    after_18:
    // 0x8007C358: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C35C: nop

    // 0x8007C360: lw          $t0, 0x18FC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X18FC);
    // 0x8007C364: nop

    // 0x8007C368: beq         $v0, $t0, L_8007C538
    if (ctx->r2 == ctx->r8) {
        // 0x8007C36C: nop
    
            goto L_8007C538;
    }
    // 0x8007C36C: nop

    // 0x8007C370: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x8007C374: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C378: jal         0x800B7450
    // 0x8007C37C: addiu       $a1, $zero, 0x1900
    ctx->r5 = ADD32(0, 0X1900);
    _bzero(rdram, ctx);
        goto after_19;
    // 0x8007C37C: addiu       $a1, $zero, 0x1900
    ctx->r5 = ADD32(0, 0X1900);
    after_19:
    // 0x8007C380: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C384: addiu       $t1, $zero, 0x30
    ctx->r9 = ADD32(0, 0X30);
    // 0x8007C388: sb          $t1, 0x18F8($t9)
    MEM_B(0X18F8, ctx->r25) = ctx->r9;
    // 0x8007C38C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C390: addiu       $t2, $zero, 0x2E
    ctx->r10 = ADD32(0, 0X2E);
    // 0x8007C394: sb          $t2, 0x18F9($t3)
    MEM_B(0X18F9, ctx->r11) = ctx->r10;
    // 0x8007C398: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C39C: addiu       $t5, $zero, 0x30
    ctx->r13 = ADD32(0, 0X30);
    // 0x8007C3A0: sb          $t5, 0x18FA($t4)
    MEM_B(0X18FA, ctx->r12) = ctx->r13;
    // 0x8007C3A4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C3A8: addiu       $t7, $zero, 0x62
    ctx->r15 = ADD32(0, 0X62);
    // 0x8007C3AC: sb          $t7, 0x18FB($t6)
    MEM_B(0X18FB, ctx->r14) = ctx->r15;
    // 0x8007C3B0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C3B4: addiu       $t0, $zero, 0x5B68
    ctx->r8 = ADD32(0, 0X5B68);
    // 0x8007C3B8: sw          $t0, 0x18E4($t8)
    MEM_W(0X18E4, ctx->r24) = ctx->r8;
    // 0x8007C3BC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C3C0: addiu       $t1, $zero, 0x7000
    ctx->r9 = ADD32(0, 0X7000);
    // 0x8007C3C4: sw          $t1, 0x18E8($t9)
    MEM_W(0X18E8, ctx->r25) = ctx->r9;
    // 0x8007C3C8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C3CC: jal         0x800B6550
    // 0x8007C3D0: sw          $zero, 0x18EC($t2)
    MEM_W(0X18EC, ctx->r10) = 0;
    osGetTime_recomp(rdram, ctx);
        goto after_20;
    // 0x8007C3D0: sw          $zero, 0x18EC($t2)
    MEM_W(0X18EC, ctx->r10) = 0;
    after_20:
    // 0x8007C3D4: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x8007C3D8: lw          $t3, 0x300($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X300);
    // 0x8007C3DC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8007C3E0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C3E4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8007C3E8: or          $t7, $t3, $zero
    ctx->r15 = ctx->r11 | 0;
    // 0x8007C3EC: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007C3F0: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x8007C3F4: addu        $t1, $t5, $t7
    ctx->r9 = ADD32(ctx->r13, ctx->r15);
    // 0x8007C3F8: lw          $t8, 0x30C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X30C);
    // 0x8007C3FC: sltu        $at, $t1, $t7
    ctx->r1 = ctx->r9 < ctx->r15 ? 1 : 0;
    // 0x8007C400: sra         $t6, $t3, 31
    ctx->r14 = S32(SIGNED(ctx->r11) >> 31);
    // 0x8007C404: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C408: addu        $t0, $at, $t4
    ctx->r8 = ADD32(ctx->r1, ctx->r12);
    // 0x8007C40C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8007C410: or          $t3, $t8, $zero
    ctx->r11 = ctx->r24 | 0;
    // 0x8007C414: lw          $t6, 0x18FC($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X18FC);
    // 0x8007C418: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x8007C41C: sltu        $at, $t5, $t3
    ctx->r1 = ctx->r13 < ctx->r11 ? 1 : 0;
    // 0x8007C420: addu        $t4, $at, $t0
    ctx->r12 = ADD32(ctx->r1, ctx->r8);
    // 0x8007C424: or          $t9, $t6, $zero
    ctx->r25 = ctx->r14 | 0;
    // 0x8007C428: addu        $a1, $t5, $t9
    ctx->r5 = ADD32(ctx->r13, ctx->r25);
    // 0x8007C42C: sra         $t2, $t8, 31
    ctx->r10 = S32(SIGNED(ctx->r24) >> 31);
    // 0x8007C430: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8007C434: sltu        $at, $a1, $t9
    ctx->r1 = ctx->r5 < ctx->r25 ? 1 : 0;
    // 0x8007C438: addu        $a0, $at, $t4
    ctx->r4 = ADD32(ctx->r1, ctx->r12);
    // 0x8007C43C: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x8007C440: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x8007C444: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8007C448: jal         0x800B7658
    // 0x8007C44C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    __ll_mul_recomp(rdram, ctx);
        goto after_21;
    // 0x8007C44C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_21:
    // 0x8007C450: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8007C454: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8007C458: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8007C45C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007C460: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8007C464: jal         0x800B7558
    // 0x8007C468: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    __ull_div_recomp(rdram, ctx);
        goto after_22;
    // 0x8007C468: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_22:
    // 0x8007C46C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C470: or          $t7, $v1, $zero
    ctx->r15 = ctx->r3 | 0;
    // 0x8007C474: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007C478: sw          $t7, 0x18F4($t0)
    MEM_W(0X18F4, ctx->r8) = ctx->r15;
    // 0x8007C47C: lw          $a0, -0x310($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X310);
    // 0x8007C480: jal         0x8007BDD8
    // 0x8007C484: nop

    func_8007BDD8(rdram, ctx);
        goto after_23;
    // 0x8007C484: nop

    after_23:
    // 0x8007C488: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C48C: jal         0x8007BCC4
    // 0x8007C490: addiu       $a1, $zero, 0x18FC
    ctx->r5 = ADD32(0, 0X18FC);
    func_8007BCC4(rdram, ctx);
        goto after_24;
    // 0x8007C490: addiu       $a1, $zero, 0x18FC
    ctx->r5 = ADD32(0, 0X18FC);
    after_24:
    // 0x8007C494: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C498: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8007C49C: sw          $v0, 0x18FC($t1)
    MEM_W(0X18FC, ctx->r9) = ctx->r2;
    // 0x8007C4A0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C4A4: jal         0x800AC22C
    // 0x8007C4A8: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    func_800AC22C(rdram, ctx);
        goto after_25;
    // 0x8007C4A8: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    after_25:
    // 0x8007C4AC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C4B0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8007C4B4: ori         $a1, $a1, 0x1900
    ctx->r5 = ctx->r5 | 0X1900;
    // 0x8007C4B8: jal         0x800AC22C
    // 0x8007C4BC: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    func_800AC22C(rdram, ctx);
        goto after_26;
    // 0x8007C4BC: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    after_26:
    // 0x8007C4C0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C4C4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8007C4C8: ori         $a1, $a1, 0x3200
    ctx->r5 = ctx->r5 | 0X3200;
    // 0x8007C4CC: jal         0x800AC22C
    // 0x8007C4D0: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    func_800AC22C(rdram, ctx);
        goto after_27;
    // 0x8007C4D0: addiu       $a2, $zero, 0x1900
    ctx->r6 = ADD32(0, 0X1900);
    after_27:
    // 0x8007C4D4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C4D8: nop

    // 0x8007C4DC: lw          $a0, 0x18E8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18E8);
    // 0x8007C4E0: jal         0x80087618
    // 0x8007C4E4: nop

    func_80087618(rdram, ctx);
        goto after_28;
    // 0x8007C4E4: nop

    after_28:
    // 0x8007C4E8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C4EC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8007C4F0: lw          $a0, 0x18E4($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18E4);
    // 0x8007C4F4: jal         0x800875EC
    // 0x8007C4F8: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    func_800875EC(rdram, ctx);
        goto after_29;
    // 0x8007C4F8: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    after_29:
    // 0x8007C4FC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C500: addiu       $at, $zero, 0x924
    ctx->r1 = ADD32(0, 0X924);
    // 0x8007C504: lw          $t4, 0x18E4($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X18E4);
    // 0x8007C508: nop

    // 0x8007C50C: divu        $zero, $t4, $at
    lo = S32(U32(ctx->r12) / U32(ctx->r1)); hi = S32(U32(ctx->r12) % U32(ctx->r1));
    // 0x8007C510: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007C514: mflo        $t5
    ctx->r13 = lo;
    // 0x8007C518: sb          $t5, 0x4914($at)
    MEM_B(0X4914, ctx->r1) = ctx->r13;
    // 0x8007C51C: lw          $t8, 0x18E8($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X18E8);
    // 0x8007C520: addiu       $at, $zero, 0x924
    ctx->r1 = ADD32(0, 0X924);
    // 0x8007C524: divu        $zero, $t8, $at
    lo = S32(U32(ctx->r24) / U32(ctx->r1)); hi = S32(U32(ctx->r24) % U32(ctx->r1));
    // 0x8007C528: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007C52C: mflo        $t9
    ctx->r25 = lo;
    // 0x8007C530: sb          $t9, 0x4CD8($at)
    MEM_B(0X4CD8, ctx->r1) = ctx->r25;
    // 0x8007C534: nop

L_8007C538:
    // 0x8007C538: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C53C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8007C540: lw          $a0, 0x18E4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18E4);
    // 0x8007C544: jal         0x800875EC
    // 0x8007C548: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    func_800875EC(rdram, ctx);
        goto after_30;
    // 0x8007C548: addiu       $a1, $a1, 0xA70
    ctx->r5 = ADD32(ctx->r5, 0XA70);
    after_30:
    // 0x8007C54C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C550: nop

    // 0x8007C554: lw          $a0, 0x18E8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18E8);
    // 0x8007C558: jal         0x80087618
    // 0x8007C55C: nop

    func_80087618(rdram, ctx);
        goto after_31;
    // 0x8007C55C: nop

    after_31:
    // 0x8007C560: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C564: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007C568: lw          $t2, 0x18F0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X18F0);
    // 0x8007C56C: jal         0x80045E50
    // 0x8007C570: sb          $t2, 0x4DD0($at)
    MEM_B(0X4DD0, ctx->r1) = ctx->r10;
    func_80045E50(rdram, ctx);
        goto after_32;
    // 0x8007C570: sb          $t2, 0x4DD0($at)
    MEM_B(0X4DD0, ctx->r1) = ctx->r10;
    after_32:
    // 0x8007C574: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C578: addiu       $at, $zero, 0x924
    ctx->r1 = ADD32(0, 0X924);
    // 0x8007C57C: lw          $t4, 0x18E4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X18E4);
    // 0x8007C580: nop

    // 0x8007C584: divu        $zero, $t4, $at
    lo = S32(U32(ctx->r12) / U32(ctx->r1)); hi = S32(U32(ctx->r12) % U32(ctx->r1));
    // 0x8007C588: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007C58C: mflo        $t5
    ctx->r13 = lo;
    // 0x8007C590: sb          $t5, 0x4914($at)
    MEM_B(0X4914, ctx->r1) = ctx->r13;
    // 0x8007C594: lw          $t6, 0x18E8($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X18E8);
    // 0x8007C598: addiu       $at, $zero, 0x924
    ctx->r1 = ADD32(0, 0X924);
    // 0x8007C59C: divu        $zero, $t6, $at
    lo = S32(U32(ctx->r14) / U32(ctx->r1)); hi = S32(U32(ctx->r14) % U32(ctx->r1));
    // 0x8007C5A0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007C5A4: mflo        $t8
    ctx->r24 = lo;
    // 0x8007C5A8: sb          $t8, 0x4CD8($at)
    MEM_B(0X4CD8, ctx->r1) = ctx->r24;
    // 0x8007C5AC: nop

L_8007C5B0:
    // 0x8007C5B0: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8007C5B4: lb          $t9, -0x7C8($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X7C8);
    // 0x8007C5B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007C5BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007C5C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8007C5C4: jr          $ra
    // 0x8007C5C8: sb          $t9, -0x1108($at)
    MEM_B(-0X1108, ctx->r1) = ctx->r25;
    return;
    // 0x8007C5C8: sb          $t9, -0x1108($at)
    MEM_B(-0X1108, ctx->r1) = ctx->r25;
;}
