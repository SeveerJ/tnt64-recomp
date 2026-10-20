#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80066D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066D0C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80066D10: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80066D14: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80066D18: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80066D1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80066D20: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80066D24: beq         $at, $zero, L_80066D74
    if (ctx->r1 == 0) {
        // 0x80066D28: sw          $s1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r17;
            goto L_80066D74;
    }
    // 0x80066D28: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
L_80066D2C:
    // 0x80066D2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80066D30: jal         0x80066C10
    // 0x80066D34: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80066C10(rdram, ctx);
        goto after_0;
    // 0x80066D34: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x80066D38: lb          $a0, 0x28($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X28);
    // 0x80066D3C: lb          $a1, 0x29($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X29);
    // 0x80066D40: jal         0x8006E5E0
    // 0x80066D44: nop

    func_8006E5E0(rdram, ctx);
        goto after_1;
    // 0x80066D44: nop

    after_1:
    // 0x80066D48: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80066D4C: lbu         $t6, 0x1($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X1);
    // 0x80066D50: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80066D54: beq         $t6, $at, L_80066D64
    if (ctx->r14 == ctx->r1) {
        // 0x80066D58: nop
    
            goto L_80066D64;
    }
    // 0x80066D58: nop

    // 0x80066D5C: b           L_80066D78
    // 0x80066D60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80066D78;
    // 0x80066D60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80066D64:
    // 0x80066D64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80066D68: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80066D6C: bne         $at, $zero, L_80066D2C
    if (ctx->r1 != 0) {
        // 0x80066D70: nop
    
            goto L_80066D2C;
    }
    // 0x80066D70: nop

L_80066D74:
    // 0x80066D74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80066D78:
    // 0x80066D78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80066D7C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80066D80: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80066D84: jr          $ra
    // 0x80066D88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80066D88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80066D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066D8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80066D90: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80066D94: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80066D98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80066D9C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80066DA0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80066DA4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80066DA8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80066DAC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80066DB0: lbu         $t7, 0x13($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X13);
    // 0x80066DB4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80066DB8: lb          $t9, 0x11($t6)
    ctx->r25 = MEM_B(ctx->r14, 0X11);
    // 0x80066DBC: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80066DC0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80066DC4: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
    // 0x80066DC8: lw          $s0, 0x110($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X110);
    // 0x80066DCC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80066DD0: sb          $t1, 0x11($t6)
    MEM_B(0X11, ctx->r14) = ctx->r9;
    // 0x80066DD4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80066DD8: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80066DDC: lb          $t3, 0x12($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X12);
    // 0x80066DE0: nop

    // 0x80066DE4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80066DE8: sb          $t5, 0x12($t2)
    MEM_B(0X12, ctx->r10) = ctx->r13;
    // 0x80066DEC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80066DF0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80066DF4: lbu         $t8, 0xA($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XA);
    // 0x80066DF8: nop

    // 0x80066DFC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80066E00: andi        $t1, $t0, 0x3
    ctx->r9 = ctx->r8 & 0X3;
    // 0x80066E04: sb          $t1, 0xA($t7)
    MEM_B(0XA, ctx->r15) = ctx->r9;
    // 0x80066E08: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80066E0C: nop

    // 0x80066E10: lbu         $t3, 0xA($t6)
    ctx->r11 = MEM_BU(ctx->r14, 0XA);
    // 0x80066E14: nop

    // 0x80066E18: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80066E1C: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x80066E20: lbu         $at, 0xE($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0XE);
    // 0x80066E24: nop

    // 0x80066E28: sb          $at, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r1;
    // 0x80066E2C: lbu         $t8, 0xF($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0XF);
    // 0x80066E30: nop

    // 0x80066E34: sb          $t8, 0x10($t6)
    MEM_B(0X10, ctx->r14) = ctx->r24;
    // 0x80066E38: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80066E3C: jal         0x80066D0C
    // 0x80066E40: nop

    func_80066D0C(rdram, ctx);
        goto after_0;
    // 0x80066E40: nop

    after_0:
    // 0x80066E44: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80066E48: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80066E4C: lb          $t0, 0x11($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X11);
    // 0x80066E50: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x80066E54: subu        $t7, $t0, $t1
    ctx->r15 = SUB32(ctx->r8, ctx->r9);
    // 0x80066E58: sb          $t7, 0x11($t9)
    MEM_B(0X11, ctx->r25) = ctx->r15;
    // 0x80066E5C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80066E60: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80066E64: lb          $t4, 0x12($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X12);
    // 0x80066E68: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80066E6C: subu        $t6, $t4, $t2
    ctx->r14 = SUB32(ctx->r12, ctx->r10);
    // 0x80066E70: sb          $t6, 0x12($t3)
    MEM_B(0X12, ctx->r11) = ctx->r14;
    // 0x80066E74: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80066E78: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80066E7C: lbu         $t8, 0xA($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0XA);
    // 0x80066E80: nop

    // 0x80066E84: subu        $t1, $t8, $t0
    ctx->r9 = SUB32(ctx->r24, ctx->r8);
    // 0x80066E88: andi        $t7, $t1, 0x3
    ctx->r15 = ctx->r9 & 0X3;
    // 0x80066E8C: sb          $t7, 0xA($t5)
    MEM_B(0XA, ctx->r13) = ctx->r15;
    // 0x80066E90: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80066E94: nop

    // 0x80066E98: lbu         $t4, 0xA($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0XA);
    // 0x80066E9C: nop

    // 0x80066EA0: sll         $t2, $t4, 1
    ctx->r10 = S32(ctx->r12 << 1);
    // 0x80066EA4: addu        $t6, $s0, $t2
    ctx->r14 = ADD32(ctx->r16, ctx->r10);
    // 0x80066EA8: lbu         $at, 0xE($t6)
    ctx->r1 = MEM_BU(ctx->r14, 0XE);
    // 0x80066EAC: nop

    // 0x80066EB0: sb          $at, 0xF($t9)
    MEM_B(0XF, ctx->r25) = ctx->r1;
    // 0x80066EB4: lbu         $t8, 0xF($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0XF);
    // 0x80066EB8: nop

    // 0x80066EBC: sb          $t8, 0x10($t9)
    MEM_B(0X10, ctx->r25) = ctx->r24;
    // 0x80066EC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80066EC4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80066EC8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80066ECC: jr          $ra
    // 0x80066ED0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80066ED0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80066ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066ED4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80066ED8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80066EDC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80066EE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80066EE4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80066EE8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80066EEC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80066EF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80066EF4: lbu         $t7, 0x13($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X13);
    // 0x80066EF8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80066EFC: lb          $t9, 0x11($t6)
    ctx->r25 = MEM_B(ctx->r14, 0X11);
    // 0x80066F00: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80066F04: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80066F08: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
    // 0x80066F0C: lw          $s0, 0x110($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X110);
    // 0x80066F10: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80066F14: sb          $t1, 0x11($t6)
    MEM_B(0X11, ctx->r14) = ctx->r9;
    // 0x80066F18: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80066F1C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80066F20: lb          $t3, 0x12($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X12);
    // 0x80066F24: nop

    // 0x80066F28: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80066F2C: sb          $t5, 0x12($t2)
    MEM_B(0X12, ctx->r10) = ctx->r13;
    // 0x80066F30: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80066F34: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80066F38: lbu         $t8, 0xA($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XA);
    // 0x80066F3C: nop

    // 0x80066F40: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80066F44: andi        $t1, $t0, 0x3
    ctx->r9 = ctx->r8 & 0X3;
    // 0x80066F48: sb          $t1, 0xA($t7)
    MEM_B(0XA, ctx->r15) = ctx->r9;
    // 0x80066F4C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80066F50: nop

    // 0x80066F54: lbu         $t3, 0xA($t6)
    ctx->r11 = MEM_BU(ctx->r14, 0XA);
    // 0x80066F58: nop

    // 0x80066F5C: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80066F60: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x80066F64: lbu         $at, 0xE($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0XE);
    // 0x80066F68: nop

    // 0x80066F6C: sb          $at, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r1;
    // 0x80066F70: lbu         $t8, 0xF($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0XF);
    // 0x80066F74: nop

    // 0x80066F78: sb          $t8, 0x10($t6)
    MEM_B(0X10, ctx->r14) = ctx->r24;
    // 0x80066F7C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80066F80: jal         0x80066D0C
    // 0x80066F84: nop

    func_80066D0C(rdram, ctx);
        goto after_0;
    // 0x80066F84: nop

    after_0:
    // 0x80066F88: bne         $v0, $zero, L_8006700C
    if (ctx->r2 != 0) {
        // 0x80066F8C: nop
    
            goto L_8006700C;
    }
    // 0x80066F8C: nop

    // 0x80066F90: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80066F94: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80066F98: lb          $t0, 0x11($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X11);
    // 0x80066F9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80066FA0: subu        $t7, $t0, $t1
    ctx->r15 = SUB32(ctx->r8, ctx->r9);
    // 0x80066FA4: sb          $t7, 0x11($t9)
    MEM_B(0X11, ctx->r25) = ctx->r15;
    // 0x80066FA8: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80066FAC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80066FB0: lb          $t4, 0x12($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X12);
    // 0x80066FB4: nop

    // 0x80066FB8: subu        $t6, $t4, $t2
    ctx->r14 = SUB32(ctx->r12, ctx->r10);
    // 0x80066FBC: sb          $t6, 0x12($t3)
    MEM_B(0X12, ctx->r11) = ctx->r14;
    // 0x80066FC0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80066FC4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80066FC8: lbu         $t8, 0xA($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0XA);
    // 0x80066FCC: nop

    // 0x80066FD0: subu        $t1, $t8, $t0
    ctx->r9 = SUB32(ctx->r24, ctx->r8);
    // 0x80066FD4: andi        $t7, $t1, 0x3
    ctx->r15 = ctx->r9 & 0X3;
    // 0x80066FD8: sb          $t7, 0xA($t5)
    MEM_B(0XA, ctx->r13) = ctx->r15;
    // 0x80066FDC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80066FE0: nop

    // 0x80066FE4: lbu         $t4, 0xA($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0XA);
    // 0x80066FE8: nop

    // 0x80066FEC: sll         $t2, $t4, 1
    ctx->r10 = S32(ctx->r12 << 1);
    // 0x80066FF0: addu        $t6, $s0, $t2
    ctx->r14 = ADD32(ctx->r16, ctx->r10);
    // 0x80066FF4: lbu         $at, 0xE($t6)
    ctx->r1 = MEM_BU(ctx->r14, 0XE);
    // 0x80066FF8: nop

    // 0x80066FFC: sb          $at, 0xF($t9)
    MEM_B(0XF, ctx->r25) = ctx->r1;
    // 0x80067000: lbu         $t8, 0xF($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0XF);
    // 0x80067004: b           L_80067010
    // 0x80067008: sb          $t8, 0x10($t9)
    MEM_B(0X10, ctx->r25) = ctx->r24;
        goto L_80067010;
    // 0x80067008: sb          $t8, 0x10($t9)
    MEM_B(0X10, ctx->r25) = ctx->r24;
L_8006700C:
    // 0x8006700C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80067010:
    // 0x80067010: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80067014: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80067018: jr          $ra
    // 0x8006701C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006701C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80067020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067020: lb          $t6, 0x11($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X11);
    // 0x80067024: lh          $t8, 0x2E($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X2E);
    // 0x80067028: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x8006702C: bne         $t7, $t8, L_80067048
    if (ctx->r15 != ctx->r24) {
        // 0x80067030: nop
    
            goto L_80067048;
    }
    // 0x80067030: nop

    // 0x80067034: lb          $t9, 0x12($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X12);
    // 0x80067038: lh          $t1, 0x30($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X30);
    // 0x8006703C: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x80067040: beq         $t0, $t1, L_80067050
    if (ctx->r8 == ctx->r9) {
        // 0x80067044: nop
    
            goto L_80067050;
    }
    // 0x80067044: nop

L_80067048:
    // 0x80067048: jr          $ra
    // 0x8006704C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8006704C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80067050:
    // 0x80067050: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80067054: jr          $ra
    // 0x80067058: nop

    return;
    // 0x80067058: nop

;}
RECOMP_FUNC void func_8006705C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006705C: lh          $t6, 0x30($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X30);
    // 0x80067060: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x80067064: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x80067068: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8006706C: sh          $t8, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r24;
    // 0x80067070: jr          $ra
    // 0x80067074: sb          $t9, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r25;
    return;
    // 0x80067074: sb          $t9, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_80067078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006707C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80067080: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80067084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80067088: lb          $t8, 0x11($t6)
    ctx->r24 = MEM_B(ctx->r14, 0X11);
    // 0x8006708C: lh          $t7, 0x2E($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2E);
    // 0x80067090: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x80067094: bne         $t7, $t9, L_800670B8
    if (ctx->r15 != ctx->r25) {
        // 0x80067098: nop
    
            goto L_800670B8;
    }
    // 0x80067098: nop

    // 0x8006709C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800670A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800670A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800670A8: jal         0x80066ED4
    // 0x800670AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80066ED4(rdram, ctx);
        goto after_0;
    // 0x800670AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800670B0: b           L_8006714C
    // 0x800670B4: nop

        goto L_8006714C;
    // 0x800670B4: nop

L_800670B8:
    // 0x800670B8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800670BC: nop

    // 0x800670C0: lb          $t2, 0x11($t0)
    ctx->r10 = MEM_B(ctx->r8, 0X11);
    // 0x800670C4: lh          $t1, 0x2E($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X2E);
    // 0x800670C8: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x800670CC: slt         $at, $t1, $t3
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800670D0: beq         $at, $zero, L_80067110
    if (ctx->r1 == 0) {
        // 0x800670D4: nop
    
            goto L_80067110;
    }
    // 0x800670D4: nop

    // 0x800670D8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800670DC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800670E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800670E4: jal         0x80066D8C
    // 0x800670E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80066D8C(rdram, ctx);
        goto after_1;
    // 0x800670E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x800670EC: beq         $v0, $zero, L_80067148
    if (ctx->r2 == 0) {
        // 0x800670F0: nop
    
            goto L_80067148;
    }
    // 0x800670F0: nop

    // 0x800670F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800670F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800670FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80067100: jal         0x80066ED4
    // 0x80067104: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80066ED4(rdram, ctx);
        goto after_2;
    // 0x80067104: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x80067108: b           L_8006714C
    // 0x8006710C: nop

        goto L_8006714C;
    // 0x8006710C: nop

L_80067110:
    // 0x80067110: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80067114: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80067118: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8006711C: jal         0x80066D8C
    // 0x80067120: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80066D8C(rdram, ctx);
        goto after_3;
    // 0x80067120: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x80067124: beq         $v0, $zero, L_80067148
    if (ctx->r2 == 0) {
        // 0x80067128: nop
    
            goto L_80067148;
    }
    // 0x80067128: nop

    // 0x8006712C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80067130: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80067134: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80067138: jal         0x80066ED4
    // 0x8006713C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80066ED4(rdram, ctx);
        goto after_4;
    // 0x8006713C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x80067140: b           L_8006714C
    // 0x80067144: nop

        goto L_8006714C;
    // 0x80067144: nop

L_80067148:
    // 0x80067148: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006714C:
    // 0x8006714C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80067150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80067154: jr          $ra
    // 0x80067158: nop

    return;
    // 0x80067158: nop

;}
RECOMP_FUNC void func_8006715C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006715C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80067160: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80067164: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80067168: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006716C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80067170: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80067174: jal         0x80066D8C
    // 0x80067178: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80066D8C(rdram, ctx);
        goto after_0;
    // 0x80067178: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8006717C: beq         $v0, $zero, L_80067244
    if (ctx->r2 == 0) {
        // 0x80067180: nop
    
            goto L_80067244;
    }
    // 0x80067180: nop

    // 0x80067184: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80067188: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8006718C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80067190: jal         0x80066D8C
    // 0x80067194: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80066D8C(rdram, ctx);
        goto after_1;
    // 0x80067194: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x80067198: beq         $v0, $zero, L_800671E4
    if (ctx->r2 == 0) {
        // 0x8006719C: nop
    
            goto L_800671E4;
    }
    // 0x8006719C: nop

    // 0x800671A0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800671A4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x800671A8: lb          $t7, 0x11($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X11);
    // 0x800671AC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800671B0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800671B4: sb          $t8, 0x11($t6)
    MEM_B(0X11, ctx->r14) = ctx->r24;
    // 0x800671B8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800671BC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800671C0: lbu         $t0, 0x2($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X2);
    // 0x800671C4: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x800671C8: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x800671CC: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x800671D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800671D4: jal         0x8008A5C8
    // 0x800671D8: sb          $t1, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r9;
    func_8008A5C8(rdram, ctx);
        goto after_2;
    // 0x800671D8: sb          $t1, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r9;
    after_2:
    // 0x800671DC: b           L_80067244
    // 0x800671E0: nop

        goto L_80067244;
    // 0x800671E0: nop

L_800671E4:
    // 0x800671E4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x800671E8: nop

    // 0x800671EC: lbu         $t3, 0x3($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X3);
    // 0x800671F0: nop

    // 0x800671F4: beq         $t3, $zero, L_80067244
    if (ctx->r11 == 0) {
        // 0x800671F8: nop
    
            goto L_80067244;
    }
    // 0x800671F8: nop

    // 0x800671FC: lb          $t4, 0x12($t2)
    ctx->r12 = MEM_B(ctx->r10, 0X12);
    // 0x80067200: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80067204: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x80067208: sh          $t5, 0x30($t2)
    MEM_H(0X30, ctx->r10) = ctx->r13;
    // 0x8006720C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80067210: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80067214: lb          $t8, 0x11($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X11);
    // 0x80067218: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8006721C: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x80067220: sb          $t6, 0x11($t7)
    MEM_B(0X11, ctx->r15) = ctx->r14;
    // 0x80067224: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80067228: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x8006722C: lbu         $t1, 0x2($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X2);
    // 0x80067230: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x80067234: and         $t9, $t1, $at
    ctx->r25 = ctx->r9 & ctx->r1;
    // 0x80067238: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8006723C: jal         0x8008A5C8
    // 0x80067240: sb          $t9, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r25;
    func_8008A5C8(rdram, ctx);
        goto after_3;
    // 0x80067240: sb          $t9, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r25;
    after_3:
L_80067244:
    // 0x80067244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80067248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006724C: jr          $ra
    // 0x80067250: nop

    return;
    // 0x80067250: nop

;}
RECOMP_FUNC void func_80067254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067254: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80067258: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006725C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80067260: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80067264: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80067268: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006726C: jal         0x80066D8C
    // 0x80067270: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80066D8C(rdram, ctx);
        goto after_0;
    // 0x80067270: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80067274: beq         $v0, $zero, L_8006733C
    if (ctx->r2 == 0) {
        // 0x80067278: nop
    
            goto L_8006733C;
    }
    // 0x80067278: nop

    // 0x8006727C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80067280: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80067284: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80067288: jal         0x80066D8C
    // 0x8006728C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80066D8C(rdram, ctx);
        goto after_1;
    // 0x8006728C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x80067290: beq         $v0, $zero, L_800672DC
    if (ctx->r2 == 0) {
        // 0x80067294: nop
    
            goto L_800672DC;
    }
    // 0x80067294: nop

    // 0x80067298: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006729C: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x800672A0: lb          $t7, 0x11($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X11);
    // 0x800672A4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800672A8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800672AC: sb          $t8, 0x11($t6)
    MEM_B(0X11, ctx->r14) = ctx->r24;
    // 0x800672B0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800672B4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800672B8: lbu         $t0, 0x2($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X2);
    // 0x800672BC: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x800672C0: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x800672C4: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x800672C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800672CC: jal         0x8008A5C8
    // 0x800672D0: sb          $t1, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r9;
    func_8008A5C8(rdram, ctx);
        goto after_2;
    // 0x800672D0: sb          $t1, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r9;
    after_2:
    // 0x800672D4: b           L_8006733C
    // 0x800672D8: nop

        goto L_8006733C;
    // 0x800672D8: nop

L_800672DC:
    // 0x800672DC: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x800672E0: nop

    // 0x800672E4: lbu         $t3, 0x3($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X3);
    // 0x800672E8: nop

    // 0x800672EC: beq         $t3, $zero, L_8006733C
    if (ctx->r11 == 0) {
        // 0x800672F0: nop
    
            goto L_8006733C;
    }
    // 0x800672F0: nop

    // 0x800672F4: lb          $t4, 0x12($t2)
    ctx->r12 = MEM_B(ctx->r10, 0X12);
    // 0x800672F8: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x800672FC: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x80067300: sh          $t5, 0x30($t2)
    MEM_H(0X30, ctx->r10) = ctx->r13;
    // 0x80067304: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80067308: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006730C: lb          $t8, 0x11($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X11);
    // 0x80067310: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80067314: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x80067318: sb          $t6, 0x11($t7)
    MEM_B(0X11, ctx->r15) = ctx->r14;
    // 0x8006731C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80067320: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x80067324: lbu         $t1, 0x2($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X2);
    // 0x80067328: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8006732C: and         $t9, $t1, $at
    ctx->r25 = ctx->r9 & ctx->r1;
    // 0x80067330: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80067334: jal         0x8008A5C8
    // 0x80067338: sb          $t9, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r25;
    func_8008A5C8(rdram, ctx);
        goto after_3;
    // 0x80067338: sb          $t9, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r25;
    after_3:
L_8006733C:
    // 0x8006733C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80067340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80067344: jr          $ra
    // 0x80067348: nop

    return;
    // 0x80067348: nop

;}
RECOMP_FUNC void func_8006734C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006734C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80067350: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80067354: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80067358: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006735C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80067360: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80067364: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80067368: lbu         $t7, 0xE($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XE);
    // 0x8006736C: nop

    // 0x80067370: bne         $t7, $zero, L_80067594
    if (ctx->r15 != 0) {
        // 0x80067374: nop
    
            goto L_80067594;
    }
    // 0x80067374: nop

    // 0x80067378: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8006737C: lb          $a3, 0x2F($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X2F);
    // 0x80067380: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80067384: jal         0x80066ED4
    // 0x80067388: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80066ED4(rdram, ctx);
        goto after_0;
    // 0x80067388: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8006738C: lb          $t8, 0x2F($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X2F);
    // 0x80067390: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80067394: bne         $t8, $at, L_80067450
    if (ctx->r24 != ctx->r1) {
        // 0x80067398: andi        $s0, $v0, 0xFF
        ctx->r16 = ctx->r2 & 0XFF;
            goto L_80067450;
    }
    // 0x80067398: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x8006739C: bne         $s0, $zero, L_800673C8
    if (ctx->r16 != 0) {
        // 0x800673A0: nop
    
            goto L_800673C8;
    }
    // 0x800673A0: nop

    // 0x800673A4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800673A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800673AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800673B0: jal         0x80066ED4
    // 0x800673B4: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    func_80066ED4(rdram, ctx);
        goto after_1;
    // 0x800673B4: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    after_1:
    // 0x800673B8: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x800673BC: or          $s0, $s0, $s1
    ctx->r16 = ctx->r16 | ctx->r17;
    // 0x800673C0: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x800673C4: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
L_800673C8:
    // 0x800673C8: bne         $s0, $zero, L_800673F4
    if (ctx->r16 != 0) {
        // 0x800673CC: nop
    
            goto L_800673F4;
    }
    // 0x800673CC: nop

    // 0x800673D0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800673D4: lb          $a3, 0x2F($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X2F);
    // 0x800673D8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800673DC: jal         0x80066ED4
    // 0x800673E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80066ED4(rdram, ctx);
        goto after_2;
    // 0x800673E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800673E4: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x800673E8: or          $s0, $s0, $s1
    ctx->r16 = ctx->r16 | ctx->r17;
    // 0x800673EC: andi        $t0, $s0, 0xFF
    ctx->r8 = ctx->r16 & 0XFF;
    // 0x800673F0: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
L_800673F4:
    // 0x800673F4: bne         $s0, $zero, L_80067420
    if (ctx->r16 != 0) {
        // 0x800673F8: nop
    
            goto L_80067420;
    }
    // 0x800673F8: nop

    // 0x800673FC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80067400: lb          $a3, 0x2F($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X2F);
    // 0x80067404: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80067408: jal         0x80066ED4
    // 0x8006740C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80066ED4(rdram, ctx);
        goto after_3;
    // 0x8006740C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80067410: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x80067414: or          $s0, $s0, $s1
    ctx->r16 = ctx->r16 | ctx->r17;
    // 0x80067418: andi        $t1, $s0, 0xFF
    ctx->r9 = ctx->r16 & 0XFF;
    // 0x8006741C: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
L_80067420:
    // 0x80067420: bne         $s0, $zero, L_80067500
    if (ctx->r16 != 0) {
        // 0x80067424: nop
    
            goto L_80067500;
    }
    // 0x80067424: nop

    // 0x80067428: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8006742C: lb          $a3, 0x2F($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X2F);
    // 0x80067430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80067434: jal         0x80066ED4
    // 0x80067438: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80066ED4(rdram, ctx);
        goto after_4;
    // 0x80067438: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_4:
    // 0x8006743C: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x80067440: or          $s0, $s0, $s1
    ctx->r16 = ctx->r16 | ctx->r17;
    // 0x80067444: andi        $t2, $s0, 0xFF
    ctx->r10 = ctx->r16 & 0XFF;
    // 0x80067448: b           L_80067500
    // 0x8006744C: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
        goto L_80067500;
    // 0x8006744C: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
L_80067450:
    // 0x80067450: bne         $s0, $zero, L_8006747C
    if (ctx->r16 != 0) {
        // 0x80067454: nop
    
            goto L_8006747C;
    }
    // 0x80067454: nop

    // 0x80067458: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8006745C: lb          $a3, 0x2F($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X2F);
    // 0x80067460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80067464: jal         0x80066ED4
    // 0x80067468: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80066ED4(rdram, ctx);
        goto after_5;
    // 0x80067468: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8006746C: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x80067470: or          $s0, $s0, $s1
    ctx->r16 = ctx->r16 | ctx->r17;
    // 0x80067474: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x80067478: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
L_8006747C:
    // 0x8006747C: bne         $s0, $zero, L_800674A8
    if (ctx->r16 != 0) {
        // 0x80067480: nop
    
            goto L_800674A8;
    }
    // 0x80067480: nop

    // 0x80067484: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80067488: lb          $a3, 0x2F($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X2F);
    // 0x8006748C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80067490: jal         0x80066ED4
    // 0x80067494: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80066ED4(rdram, ctx);
        goto after_6;
    // 0x80067494: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80067498: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x8006749C: or          $s0, $s0, $s1
    ctx->r16 = ctx->r16 | ctx->r17;
    // 0x800674A0: andi        $t4, $s0, 0xFF
    ctx->r12 = ctx->r16 & 0XFF;
    // 0x800674A4: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
L_800674A8:
    // 0x800674A8: bne         $s0, $zero, L_800674D4
    if (ctx->r16 != 0) {
        // 0x800674AC: nop
    
            goto L_800674D4;
    }
    // 0x800674AC: nop

    // 0x800674B0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800674B4: lb          $a3, 0x2F($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X2F);
    // 0x800674B8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800674BC: jal         0x80066ED4
    // 0x800674C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80066ED4(rdram, ctx);
        goto after_7;
    // 0x800674C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x800674C4: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x800674C8: or          $s0, $s0, $s1
    ctx->r16 = ctx->r16 | ctx->r17;
    // 0x800674CC: andi        $t5, $s0, 0xFF
    ctx->r13 = ctx->r16 & 0XFF;
    // 0x800674D0: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
L_800674D4:
    // 0x800674D4: bne         $s0, $zero, L_80067500
    if (ctx->r16 != 0) {
        // 0x800674D8: nop
    
            goto L_80067500;
    }
    // 0x800674D8: nop

    // 0x800674DC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800674E0: lb          $a3, 0x2F($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X2F);
    // 0x800674E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800674E8: jal         0x80066ED4
    // 0x800674EC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80066ED4(rdram, ctx);
        goto after_8;
    // 0x800674EC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_8:
    // 0x800674F0: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x800674F4: or          $s0, $s0, $s1
    ctx->r16 = ctx->r16 | ctx->r17;
    // 0x800674F8: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x800674FC: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
L_80067500:
    // 0x80067500: beq         $s0, $zero, L_80067594
    if (ctx->r16 == 0) {
        // 0x80067504: nop
    
            goto L_80067594;
    }
    // 0x80067504: nop

    // 0x80067508: lb          $t7, 0x2F($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X2F);
    // 0x8006750C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80067510: bne         $t7, $at, L_80067534
    if (ctx->r15 != ctx->r1) {
        // 0x80067514: nop
    
            goto L_80067534;
    }
    // 0x80067514: nop

    // 0x80067518: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8006751C: addiu       $t8, $zero, -0x1000
    ctx->r24 = ADD32(0, -0X1000);
    // 0x80067520: sh          $t8, 0xC($t9)
    MEM_H(0XC, ctx->r25) = ctx->r24;
    // 0x80067524: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80067528: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8006752C: b           L_8006754C
    // 0x80067530: sb          $t0, 0xE($t1)
    MEM_B(0XE, ctx->r9) = ctx->r8;
        goto L_8006754C;
    // 0x80067530: sb          $t0, 0xE($t1)
    MEM_B(0XE, ctx->r9) = ctx->r8;
L_80067534:
    // 0x80067534: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80067538: addiu       $t2, $zero, 0x1000
    ctx->r10 = ADD32(0, 0X1000);
    // 0x8006753C: sh          $t2, 0xC($t3)
    MEM_H(0XC, ctx->r11) = ctx->r10;
    // 0x80067540: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80067544: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80067548: sb          $t4, 0xE($t5)
    MEM_B(0XE, ctx->r13) = ctx->r12;
L_8006754C:
    // 0x8006754C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80067550: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80067554: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x80067558: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8006755C: jal         0x8008A5C8
    // 0x80067560: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8008A5C8(rdram, ctx);
        goto after_9;
    // 0x80067560: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80067564: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80067568: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x8006756C: lbu         $t7, 0x2($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2);
    // 0x80067570: nop

    // 0x80067574: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80067578: sb          $t8, 0x2($t6)
    MEM_B(0X2, ctx->r14) = ctx->r24;
    // 0x8006757C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80067580: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x80067584: lbu         $t0, 0x2($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X2);
    // 0x80067588: nop

    // 0x8006758C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80067590: sb          $t1, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r9;
L_80067594:
    // 0x80067594: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80067598: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006759C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800675A0: jr          $ra
    // 0x800675A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800675A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800675A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800675A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800675AC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800675B0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800675B4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800675B8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800675BC: lw          $s0, -0x490($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X490);
    // 0x800675C0: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x800675C4: beq         $at, $zero, L_800675F0
    if (ctx->r1 == 0) {
        // 0x800675C8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_800675F0;
    }
    // 0x800675C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_800675CC:
    // 0x800675CC: sll         $t6, $s1, 1
    ctx->r14 = S32(ctx->r17 << 1);
    // 0x800675D0: addu        $a1, $s0, $t6
    ctx->r5 = ADD32(ctx->r16, ctx->r14);
    // 0x800675D4: addiu       $a1, $a1, 0x15
    ctx->r5 = ADD32(ctx->r5, 0X15);
    // 0x800675D8: jal         0x80066C10
    // 0x800675DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80066C10(rdram, ctx);
        goto after_0;
    // 0x800675DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x800675E0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800675E4: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x800675E8: bne         $at, $zero, L_800675CC
    if (ctx->r1 != 0) {
        // 0x800675EC: nop
    
            goto L_800675CC;
    }
    // 0x800675EC: nop

L_800675F0:
    // 0x800675F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800675F4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800675F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800675FC: jr          $ra
    // 0x80067600: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80067600: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80067604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067604: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80067608: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006760C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80067610: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80067614: lw          $s0, -0x490($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X490);
    // 0x80067618: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006761C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80067620: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80067624: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x80067628: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x8006762C: jal         0x8008A5C8
    // 0x80067630: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8008A5C8(rdram, ctx);
        goto after_0;
    // 0x80067630: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x80067634: jal         0x800675A8
    // 0x80067638: nop

    func_800675A8(rdram, ctx);
        goto after_1;
    // 0x80067638: nop

    after_1:
    // 0x8006763C: jal         0x80066CC8
    // 0x80067640: nop

    func_80066CC8(rdram, ctx);
        goto after_2;
    // 0x80067640: nop

    after_2:
    // 0x80067644: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80067648: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8006764C: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80067650: beq         $at, $zero, L_80067694
    if (ctx->r1 == 0) {
        // 0x80067654: sb          $t6, 0x1($s0)
        MEM_B(0X1, ctx->r16) = ctx->r14;
            goto L_80067694;
    }
    // 0x80067654: sb          $t6, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r14;
L_80067658:
    // 0x80067658: sll         $t7, $s1, 1
    ctx->r15 = S32(ctx->r17 << 1);
    // 0x8006765C: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x80067660: lb          $t9, 0x16($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X16);
    // 0x80067664: nop

    // 0x80067668: bgez        $t9, L_80067684
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8006766C: nop
    
            goto L_80067684;
    }
    // 0x8006766C: nop

    // 0x80067670: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80067674: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80067678: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
    // 0x8006767C: b           L_80067698
    // 0x80067680: sb          $t1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r9;
        goto L_80067698;
    // 0x80067680: sb          $t1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r9;
L_80067684:
    // 0x80067684: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80067688: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x8006768C: bne         $at, $zero, L_80067658
    if (ctx->r1 != 0) {
        // 0x80067690: nop
    
            goto L_80067658;
    }
    // 0x80067690: nop

L_80067694:
    // 0x80067694: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80067698:
    // 0x80067698: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006769C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800676A0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800676A4: jr          $ra
    // 0x800676A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800676A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800676AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800676AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800676B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800676B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800676B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800676BC: jal         0x80067078
    // 0x800676C0: nop

    func_80067078(rdram, ctx);
        goto after_0;
    // 0x800676C0: nop

    after_0:
    // 0x800676C4: beq         $v0, $zero, L_800676E0
    if (ctx->r2 == 0) {
        // 0x800676C8: nop
    
            goto L_800676E0;
    }
    // 0x800676C8: nop

L_800676CC:
    // 0x800676CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800676D0: jal         0x80067078
    // 0x800676D4: nop

    func_80067078(rdram, ctx);
        goto after_1;
    // 0x800676D4: nop

    after_1:
    // 0x800676D8: bne         $v0, $zero, L_800676CC
    if (ctx->r2 != 0) {
        // 0x800676DC: nop
    
            goto L_800676CC;
    }
    // 0x800676DC: nop

L_800676E0:
    // 0x800676E0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800676E4: nop

    // 0x800676E8: lb          $t7, 0x12($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X12);
    // 0x800676EC: nop

    // 0x800676F0: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x800676F4: sh          $t8, 0x30($t6)
    MEM_H(0X30, ctx->r14) = ctx->r24;
    // 0x800676F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800676FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80067700: jr          $ra
    // 0x80067704: nop

    return;
    // 0x80067704: nop

;}
RECOMP_FUNC void func_80067708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006770C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80067710: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80067714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80067718: lbu         $t7, 0x2($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2);
    // 0x8006771C: nop

    // 0x80067720: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80067724: beq         $t8, $zero, L_80067734
    if (ctx->r24 == 0) {
        // 0x80067728: nop
    
            goto L_80067734;
    }
    // 0x80067728: nop

    // 0x8006772C: jal         0x8006715C
    // 0x80067730: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8006715C(rdram, ctx);
        goto after_0;
    // 0x80067730: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
L_80067734:
    // 0x80067734: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80067738: nop

    // 0x8006773C: lbu         $t0, 0x2($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X2);
    // 0x80067740: nop

    // 0x80067744: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x80067748: beq         $t1, $zero, L_80067758
    if (ctx->r9 == 0) {
        // 0x8006774C: nop
    
            goto L_80067758;
    }
    // 0x8006774C: nop

    // 0x80067750: jal         0x80067254
    // 0x80067754: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_80067254(rdram, ctx);
        goto after_1;
    // 0x80067754: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_1:
L_80067758:
    // 0x80067758: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8006775C: nop

    // 0x80067760: lbu         $t3, 0x2($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X2);
    // 0x80067764: nop

    // 0x80067768: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x8006776C: beq         $t4, $zero, L_80067780
    if (ctx->r12 == 0) {
        // 0x80067770: nop
    
            goto L_80067780;
    }
    // 0x80067770: nop

    // 0x80067774: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80067778: jal         0x8006734C
    // 0x8006777C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8006734C(rdram, ctx);
        goto after_2;
    // 0x8006777C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_80067780:
    // 0x80067780: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80067784: nop

    // 0x80067788: lbu         $t7, 0x2($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X2);
    // 0x8006778C: nop

    // 0x80067790: andi        $t8, $t7, 0x10
    ctx->r24 = ctx->r15 & 0X10;
    // 0x80067794: beq         $t8, $zero, L_800677A8
    if (ctx->r24 == 0) {
        // 0x80067798: nop
    
            goto L_800677A8;
    }
    // 0x80067798: nop

    // 0x8006779C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x800677A0: jal         0x8006734C
    // 0x800677A4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_8006734C(rdram, ctx);
        goto after_3;
    // 0x800677A4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_3:
L_800677A8:
    // 0x800677A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800677AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800677B0: jr          $ra
    // 0x800677B4: nop

    return;
    // 0x800677B4: nop

;}
RECOMP_FUNC void func_800677B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800677B8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800677BC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800677C0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800677C4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800677C8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800677CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800677D0: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x800677D4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800677D8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800677DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800677E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800677E4: addiu       $s0, $t6, 0x20
    ctx->r16 = ADD32(ctx->r14, 0X20);
    // 0x800677E8: jal         0x800655C4
    // 0x800677EC: addiu       $a0, $t6, 0x518
    ctx->r4 = ADD32(ctx->r14, 0X518);
    func_800655C4(rdram, ctx);
        goto after_0;
    // 0x800677EC: addiu       $a0, $t6, 0x518
    ctx->r4 = ADD32(ctx->r14, 0X518);
    after_0:
    // 0x800677F0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800677F4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x800677F8: jal         0x80064F54
    // 0x800677FC: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_80064F54(rdram, ctx);
        goto after_1;
    // 0x800677FC: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_1:
    // 0x80067800: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80067804: nop

    // 0x80067808: beq         $t7, $zero, L_80067B74
    if (ctx->r15 == 0) {
        // 0x8006780C: nop
    
            goto L_80067B74;
    }
    // 0x8006780C: nop

L_80067810:
    // 0x80067810: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80067814: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80067818: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x8006781C: nop

    // 0x80067820: bne         $t9, $at, L_80067B74
    if (ctx->r25 != ctx->r1) {
        // 0x80067824: nop
    
            goto L_80067B74;
    }
    // 0x80067824: nop

    // 0x80067828: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8006782C: nop

    // 0x80067830: sb          $zero, 0x1($t0)
    MEM_B(0X1, ctx->r8) = 0;
    // 0x80067834: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80067838: lh          $t6, 0x10($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X10);
    // 0x8006783C: lb          $t2, 0x12($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X12);
    // 0x80067840: lh          $t4, 0x6($t1)
    ctx->r12 = MEM_H(ctx->r9, 0X6);
    // 0x80067844: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x80067848: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x8006784C: slt         $t7, $t6, $t5
    ctx->r15 = SIGNED(ctx->r14) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80067850: xori        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 ^ 0X1;
    // 0x80067854: sb          $t7, 0x3($t1)
    MEM_B(0X3, ctx->r9) = ctx->r15;
    // 0x80067858: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8006785C: jal         0x80067708
    // 0x80067860: nop

    func_80067708(rdram, ctx);
        goto after_2;
    // 0x80067860: nop

    after_2:
    // 0x80067864: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80067868: lh          $t5, 0xA($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XA);
    // 0x8006786C: lb          $s1, 0xF($t8)
    ctx->r17 = MEM_B(ctx->r24, 0XF);
    // 0x80067870: lb          $s2, 0x10($t8)
    ctx->r18 = MEM_B(ctx->r24, 0X10);
    // 0x80067874: sll         $t9, $s1, 8
    ctx->r25 = S32(ctx->r17 << 8);
    // 0x80067878: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x8006787C: addiu       $s1, $s1, 0x80
    ctx->r17 = ADD32(ctx->r17, 0X80);
    // 0x80067880: sll         $t3, $s2, 8
    ctx->r11 = S32(ctx->r18 << 8);
    // 0x80067884: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x80067888: or          $s2, $t3, $zero
    ctx->r18 = ctx->r11 | 0;
    // 0x8006788C: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x80067890: addiu       $s2, $s2, 0x80
    ctx->r18 = ADD32(ctx->r18, 0X80);
    // 0x80067894: sra         $t2, $s1, 16
    ctx->r10 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80067898: sll         $t4, $s2, 16
    ctx->r12 = S32(ctx->r18 << 16);
    // 0x8006789C: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x800678A0: or          $s2, $t4, $zero
    ctx->r18 = ctx->r12 | 0;
    // 0x800678A4: sra         $t6, $s2, 16
    ctx->r14 = S32(SIGNED(ctx->r18) >> 16);
    // 0x800678A8: slt         $at, $t5, $s1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800678AC: beq         $at, $zero, L_800678E0
    if (ctx->r1 == 0) {
        // 0x800678B0: or          $s2, $t6, $zero
        ctx->r18 = ctx->r14 | 0;
            goto L_800678E0;
    }
    // 0x800678B0: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x800678B4: lh          $t7, 0xA($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XA);
    // 0x800678B8: addiu       $t1, $s1, -0x40
    ctx->r9 = ADD32(ctx->r17, -0X40);
    // 0x800678BC: slt         $at, $t7, $t1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800678C0: beq         $at, $zero, L_800678DC
    if (ctx->r1 == 0) {
        // 0x800678C4: nop
    
            goto L_800678DC;
    }
    // 0x800678C4: nop

    // 0x800678C8: lh          $t9, 0xA($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XA);
    // 0x800678CC: nop

    // 0x800678D0: addiu       $t0, $t9, 0x40
    ctx->r8 = ADD32(ctx->r25, 0X40);
    // 0x800678D4: b           L_800678E0
    // 0x800678D8: sh          $t0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r8;
        goto L_800678E0;
    // 0x800678D8: sh          $t0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r8;
L_800678DC:
    // 0x800678DC: sh          $s1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r17;
L_800678E0:
    // 0x800678E0: lh          $t2, 0xC($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XC);
    // 0x800678E4: nop

    // 0x800678E8: slt         $at, $t2, $s2
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x800678EC: beq         $at, $zero, L_80067920
    if (ctx->r1 == 0) {
        // 0x800678F0: nop
    
            goto L_80067920;
    }
    // 0x800678F0: nop

    // 0x800678F4: lh          $t8, 0xC($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XC);
    // 0x800678F8: addiu       $t3, $s2, -0x40
    ctx->r11 = ADD32(ctx->r18, -0X40);
    // 0x800678FC: slt         $at, $t8, $t3
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80067900: beq         $at, $zero, L_8006791C
    if (ctx->r1 == 0) {
        // 0x80067904: nop
    
            goto L_8006791C;
    }
    // 0x80067904: nop

    // 0x80067908: lh          $t4, 0xC($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XC);
    // 0x8006790C: nop

    // 0x80067910: addiu       $t6, $t4, 0x40
    ctx->r14 = ADD32(ctx->r12, 0X40);
    // 0x80067914: b           L_80067920
    // 0x80067918: sh          $t6, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r14;
        goto L_80067920;
    // 0x80067918: sh          $t6, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r14;
L_8006791C:
    // 0x8006791C: sh          $s2, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r18;
L_80067920:
    // 0x80067920: lh          $t5, 0xA($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XA);
    // 0x80067924: nop

    // 0x80067928: slt         $at, $s1, $t5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8006792C: beq         $at, $zero, L_80067960
    if (ctx->r1 == 0) {
        // 0x80067930: nop
    
            goto L_80067960;
    }
    // 0x80067930: nop

    // 0x80067934: lh          $t7, 0xA($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XA);
    // 0x80067938: addiu       $t1, $s1, 0x40
    ctx->r9 = ADD32(ctx->r17, 0X40);
    // 0x8006793C: slt         $at, $t1, $t7
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80067940: beq         $at, $zero, L_8006795C
    if (ctx->r1 == 0) {
        // 0x80067944: nop
    
            goto L_8006795C;
    }
    // 0x80067944: nop

    // 0x80067948: lh          $t9, 0xA($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XA);
    // 0x8006794C: nop

    // 0x80067950: addiu       $t0, $t9, -0x40
    ctx->r8 = ADD32(ctx->r25, -0X40);
    // 0x80067954: b           L_80067960
    // 0x80067958: sh          $t0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r8;
        goto L_80067960;
    // 0x80067958: sh          $t0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r8;
L_8006795C:
    // 0x8006795C: sh          $s1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r17;
L_80067960:
    // 0x80067960: lh          $t2, 0xC($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XC);
    // 0x80067964: nop

    // 0x80067968: slt         $at, $s2, $t2
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8006796C: beq         $at, $zero, L_800679A0
    if (ctx->r1 == 0) {
        // 0x80067970: nop
    
            goto L_800679A0;
    }
    // 0x80067970: nop

    // 0x80067974: lh          $t8, 0xC($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XC);
    // 0x80067978: addiu       $t3, $s2, 0x40
    ctx->r11 = ADD32(ctx->r18, 0X40);
    // 0x8006797C: slt         $at, $t3, $t8
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80067980: beq         $at, $zero, L_8006799C
    if (ctx->r1 == 0) {
        // 0x80067984: nop
    
            goto L_8006799C;
    }
    // 0x80067984: nop

    // 0x80067988: lh          $t4, 0xC($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XC);
    // 0x8006798C: nop

    // 0x80067990: addiu       $t6, $t4, -0x40
    ctx->r14 = ADD32(ctx->r12, -0X40);
    // 0x80067994: b           L_800679A0
    // 0x80067998: sh          $t6, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r14;
        goto L_800679A0;
    // 0x80067998: sh          $t6, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r14;
L_8006799C:
    // 0x8006799C: sh          $s2, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r18;
L_800679A0:
    // 0x800679A0: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x800679A4: lh          $t3, 0xE($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XE);
    // 0x800679A8: lb          $s3, 0x11($t5)
    ctx->r19 = MEM_B(ctx->r13, 0X11);
    // 0x800679AC: lb          $s4, 0x12($t5)
    ctx->r20 = MEM_B(ctx->r13, 0X12);
    // 0x800679B0: sll         $t7, $s3, 8
    ctx->r15 = S32(ctx->r19 << 8);
    // 0x800679B4: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x800679B8: sll         $t1, $s3, 16
    ctx->r9 = S32(ctx->r19 << 16);
    // 0x800679BC: sll         $t0, $s4, 8
    ctx->r8 = S32(ctx->r20 << 8);
    // 0x800679C0: or          $s3, $t1, $zero
    ctx->r19 = ctx->r9 | 0;
    // 0x800679C4: or          $s4, $t0, $zero
    ctx->r20 = ctx->r8 | 0;
    // 0x800679C8: sra         $t9, $s3, 16
    ctx->r25 = S32(SIGNED(ctx->r19) >> 16);
    // 0x800679CC: sll         $t2, $s4, 16
    ctx->r10 = S32(ctx->r20 << 16);
    // 0x800679D0: or          $s3, $t9, $zero
    ctx->r19 = ctx->r25 | 0;
    // 0x800679D4: or          $s4, $t2, $zero
    ctx->r20 = ctx->r10 | 0;
    // 0x800679D8: sra         $t8, $s4, 16
    ctx->r24 = S32(SIGNED(ctx->r20) >> 16);
    // 0x800679DC: slt         $at, $s3, $t3
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800679E0: beq         $at, $zero, L_80067A14
    if (ctx->r1 == 0) {
        // 0x800679E4: or          $s4, $t8, $zero
        ctx->r20 = ctx->r24 | 0;
            goto L_80067A14;
    }
    // 0x800679E4: or          $s4, $t8, $zero
    ctx->r20 = ctx->r24 | 0;
    // 0x800679E8: lh          $t4, 0xE($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XE);
    // 0x800679EC: addiu       $t6, $s3, 0x40
    ctx->r14 = ADD32(ctx->r19, 0X40);
    // 0x800679F0: slt         $at, $t6, $t4
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800679F4: beq         $at, $zero, L_80067A10
    if (ctx->r1 == 0) {
        // 0x800679F8: nop
    
            goto L_80067A10;
    }
    // 0x800679F8: nop

    // 0x800679FC: lh          $t7, 0xE($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XE);
    // 0x80067A00: nop

    // 0x80067A04: addiu       $t1, $t7, -0x40
    ctx->r9 = ADD32(ctx->r15, -0X40);
    // 0x80067A08: b           L_80067A14
    // 0x80067A0C: sh          $t1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r9;
        goto L_80067A14;
    // 0x80067A0C: sh          $t1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r9;
L_80067A10:
    // 0x80067A10: sh          $s3, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r19;
L_80067A14:
    // 0x80067A14: lh          $t9, 0xE($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XE);
    // 0x80067A18: nop

    // 0x80067A1C: slt         $at, $t9, $s3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80067A20: beq         $at, $zero, L_80067A54
    if (ctx->r1 == 0) {
        // 0x80067A24: nop
    
            goto L_80067A54;
    }
    // 0x80067A24: nop

    // 0x80067A28: lh          $t5, 0xE($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XE);
    // 0x80067A2C: addiu       $t0, $s3, -0x40
    ctx->r8 = ADD32(ctx->r19, -0X40);
    // 0x80067A30: slt         $at, $t5, $t0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80067A34: beq         $at, $zero, L_80067A50
    if (ctx->r1 == 0) {
        // 0x80067A38: nop
    
            goto L_80067A50;
    }
    // 0x80067A38: nop

    // 0x80067A3C: lh          $t2, 0xE($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XE);
    // 0x80067A40: nop

    // 0x80067A44: addiu       $t8, $t2, 0x40
    ctx->r24 = ADD32(ctx->r10, 0X40);
    // 0x80067A48: b           L_80067A54
    // 0x80067A4C: sh          $t8, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r24;
        goto L_80067A54;
    // 0x80067A4C: sh          $t8, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r24;
L_80067A50:
    // 0x80067A50: sh          $s3, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r19;
L_80067A54:
    // 0x80067A54: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80067A58: nop

    // 0x80067A5C: lbu         $t4, 0xE($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XE);
    // 0x80067A60: nop

    // 0x80067A64: blez        $t4, L_80067A98
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80067A68: nop
    
            goto L_80067A98;
    }
    // 0x80067A68: nop

    // 0x80067A6C: lhu         $t6, 0x8($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X8);
    // 0x80067A70: lh          $t7, 0xC($t3)
    ctx->r15 = MEM_H(ctx->r11, 0XC);
    // 0x80067A74: nop

    // 0x80067A78: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x80067A7C: sh          $t1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r9;
    // 0x80067A80: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80067A84: nop

    // 0x80067A88: lbu         $t5, 0xE($t9)
    ctx->r13 = MEM_BU(ctx->r25, 0XE);
    // 0x80067A8C: nop

    // 0x80067A90: addiu       $t0, $t5, -0x1
    ctx->r8 = ADD32(ctx->r13, -0X1);
    // 0x80067A94: sb          $t0, 0xE($t9)
    MEM_B(0XE, ctx->r25) = ctx->r8;
L_80067A98:
    // 0x80067A98: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80067A9C: nop

    // 0x80067AA0: lbu         $t8, 0x3($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X3);
    // 0x80067AA4: nop

    // 0x80067AA8: bne         $t8, $zero, L_80067AC0
    if (ctx->r24 != 0) {
        // 0x80067AAC: nop
    
            goto L_80067AC0;
    }
    // 0x80067AAC: nop

    // 0x80067AB0: jal         0x8006705C
    // 0x80067AB4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_8006705C(rdram, ctx);
        goto after_3;
    // 0x80067AB4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_3:
    // 0x80067AB8: b           L_80067B00
    // 0x80067ABC: nop

        goto L_80067B00;
    // 0x80067ABC: nop

L_80067AC0:
    // 0x80067AC0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80067AC4: jal         0x80067078
    // 0x80067AC8: nop

    func_80067078(rdram, ctx);
        goto after_4;
    // 0x80067AC8: nop

    after_4:
    // 0x80067ACC: beq         $v0, $zero, L_80067AE8
    if (ctx->r2 == 0) {
        // 0x80067AD0: nop
    
            goto L_80067AE8;
    }
    // 0x80067AD0: nop

    // 0x80067AD4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80067AD8: jal         0x8006705C
    // 0x80067ADC: nop

    func_8006705C(rdram, ctx);
        goto after_5;
    // 0x80067ADC: nop

    after_5:
    // 0x80067AE0: b           L_80067B00
    // 0x80067AE4: nop

        goto L_80067B00;
    // 0x80067AE4: nop

L_80067AE8:
    // 0x80067AE8: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80067AEC: nop

    // 0x80067AF0: lb          $t3, 0x12($t4)
    ctx->r11 = MEM_B(ctx->r12, 0X12);
    // 0x80067AF4: nop

    // 0x80067AF8: sll         $t6, $t3, 8
    ctx->r14 = S32(ctx->r11 << 8);
    // 0x80067AFC: sh          $t6, 0x30($t4)
    MEM_H(0X30, ctx->r12) = ctx->r14;
L_80067B00:
    // 0x80067B00: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80067B04: jal         0x80067020
    // 0x80067B08: nop

    func_80067020(rdram, ctx);
        goto after_6;
    // 0x80067B08: nop

    after_6:
    // 0x80067B0C: beq         $v0, $zero, L_80067B54
    if (ctx->r2 == 0) {
        // 0x80067B10: nop
    
            goto L_80067B54;
    }
    // 0x80067B10: nop

    // 0x80067B14: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80067B18: nop

    // 0x80067B1C: lbu         $t1, 0x4($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X4);
    // 0x80067B20: nop

    // 0x80067B24: bne         $t1, $zero, L_80067B3C
    if (ctx->r9 != 0) {
        // 0x80067B28: nop
    
            goto L_80067B3C;
    }
    // 0x80067B28: nop

    // 0x80067B2C: jal         0x80067604
    // 0x80067B30: nop

    func_80067604(rdram, ctx);
        goto after_7;
    // 0x80067B30: nop

    after_7:
    // 0x80067B34: b           L_80067B54
    // 0x80067B38: nop

        goto L_80067B54;
    // 0x80067B38: nop

L_80067B3C:
    // 0x80067B3C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80067B40: nop

    // 0x80067B44: lbu         $t0, 0x4($t5)
    ctx->r8 = MEM_BU(ctx->r13, 0X4);
    // 0x80067B48: nop

    // 0x80067B4C: addiu       $t9, $t0, -0x1
    ctx->r25 = ADD32(ctx->r8, -0X1);
    // 0x80067B50: sb          $t9, 0x4($t5)
    MEM_B(0X4, ctx->r13) = ctx->r25;
L_80067B54:
    // 0x80067B54: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80067B58: nop

    // 0x80067B5C: addiu       $t2, $t8, -0x1
    ctx->r10 = ADD32(ctx->r24, -0X1);
    // 0x80067B60: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x80067B64: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80067B68: nop

    // 0x80067B6C: bne         $t3, $zero, L_80067810
    if (ctx->r11 != 0) {
        // 0x80067B70: nop
    
            goto L_80067810;
    }
    // 0x80067B70: nop

L_80067B74:
    // 0x80067B74: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80067B78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80067B7C: lbu         $t4, 0x0($t6)
    ctx->r12 = MEM_BU(ctx->r14, 0X0);
    // 0x80067B80: nop

    // 0x80067B84: bne         $t4, $at, L_80067B98
    if (ctx->r12 != ctx->r1) {
        // 0x80067B88: nop
    
            goto L_80067B98;
    }
    // 0x80067B88: nop

    // 0x80067B8C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80067B90: jal         0x80066920
    // 0x80067B94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80066920(rdram, ctx);
        goto after_8;
    // 0x80067B94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
L_80067B98:
    // 0x80067B98: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80067B9C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80067BA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80067BA4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80067BA8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80067BAC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80067BB0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80067BB4: lbu         $v0, 0x1($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X1);
    // 0x80067BB8: jr          $ra
    // 0x80067BBC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80067BBC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80067BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067BC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80067BC4: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x80067BC8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80067BCC: beq         $at, $zero, L_80067C10
    if (ctx->r1 == 0) {
        // 0x80067BD0: addiu       $a1, $zero, 0x14
        ctx->r5 = ADD32(0, 0X14);
            goto L_80067C10;
    }
    // 0x80067BD0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
L_80067BD4:
    // 0x80067BD4: sll         $t6, $a2, 1
    ctx->r14 = S32(ctx->r6 << 1);
    // 0x80067BD8: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x80067BDC: lb          $t8, 0x16($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X16);
    // 0x80067BE0: nop

    // 0x80067BE4: slt         $at, $t8, $a1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80067BE8: beq         $at, $zero, L_80067C00
    if (ctx->r1 == 0) {
        // 0x80067BEC: nop
    
            goto L_80067C00;
    }
    // 0x80067BEC: nop

    // 0x80067BF0: sll         $t9, $a2, 1
    ctx->r25 = S32(ctx->r6 << 1);
    // 0x80067BF4: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x80067BF8: lb          $a1, 0x16($t0)
    ctx->r5 = MEM_B(ctx->r8, 0X16);
    // 0x80067BFC: nop

L_80067C00:
    // 0x80067C00: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80067C04: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x80067C08: bne         $at, $zero, L_80067BD4
    if (ctx->r1 != 0) {
        // 0x80067C0C: nop
    
            goto L_80067BD4;
    }
    // 0x80067C0C: nop

L_80067C10:
    // 0x80067C10: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80067C14: jr          $ra
    // 0x80067C18: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80067C18: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80067C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067C1C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80067C20: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80067C24: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80067C28: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80067C2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80067C30: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80067C34: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80067C38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80067C3C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80067C40: lb          $a2, 0x16($t6)
    ctx->r6 = MEM_B(ctx->r14, 0X16);
    // 0x80067C44: lb          $a1, 0x15($t6)
    ctx->r5 = MEM_B(ctx->r14, 0X15);
    // 0x80067C48: jal         0x8006073C
    // 0x80067C4C: nop

    func_8006073C(rdram, ctx);
        goto after_0;
    // 0x80067C4C: nop

    after_0:
    // 0x80067C50: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80067C54: sltiu       $at, $s0, 0x4
    ctx->r1 = ctx->r16 < 0X4 ? 1 : 0;
    // 0x80067C58: beq         $at, $zero, L_80067D04
    if (ctx->r1 == 0) {
        // 0x80067C5C: nop
    
            goto L_80067D04;
    }
    // 0x80067C5C: nop

L_80067C60:
    // 0x80067C60: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80067C64: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80067C68: sll         $t8, $s0, 1
    ctx->r24 = S32(ctx->r16 << 1);
    // 0x80067C6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80067C70: lb          $s1, 0x15($t9)
    ctx->r17 = MEM_B(ctx->r25, 0X15);
    // 0x80067C74: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x80067C78: sll         $t0, $s0, 1
    ctx->r8 = S32(ctx->r16 << 1);
    // 0x80067C7C: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x80067C80: lb          $s2, 0x16($t1)
    ctx->r18 = MEM_B(ctx->r9, 0X16);
    // 0x80067C84: slt         $at, $s1, $t3
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80067C88: beq         $at, $zero, L_80067C94
    if (ctx->r1 == 0) {
        // 0x80067C8C: nop
    
            goto L_80067C94;
    }
    // 0x80067C8C: nop

    // 0x80067C90: sh          $s1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r17;
L_80067C94:
    // 0x80067C94: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80067C98: nop

    // 0x80067C9C: lh          $t5, 0x4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X4);
    // 0x80067CA0: nop

    // 0x80067CA4: slt         $at, $t5, $s1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80067CA8: beq         $at, $zero, L_80067CB4
    if (ctx->r1 == 0) {
        // 0x80067CAC: nop
    
            goto L_80067CB4;
    }
    // 0x80067CAC: nop

    // 0x80067CB0: sh          $s1, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r17;
L_80067CB4:
    // 0x80067CB4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80067CB8: nop

    // 0x80067CBC: lh          $t8, 0x2($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X2);
    // 0x80067CC0: nop

    // 0x80067CC4: slt         $at, $s2, $t8
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80067CC8: beq         $at, $zero, L_80067CD4
    if (ctx->r1 == 0) {
        // 0x80067CCC: nop
    
            goto L_80067CD4;
    }
    // 0x80067CCC: nop

    // 0x80067CD0: sh          $s2, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r18;
L_80067CD4:
    // 0x80067CD4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80067CD8: nop

    // 0x80067CDC: lh          $t7, 0x6($t9)
    ctx->r15 = MEM_H(ctx->r25, 0X6);
    // 0x80067CE0: nop

    // 0x80067CE4: slt         $at, $t7, $s2
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80067CE8: beq         $at, $zero, L_80067CF4
    if (ctx->r1 == 0) {
        // 0x80067CEC: nop
    
            goto L_80067CF4;
    }
    // 0x80067CEC: nop

    // 0x80067CF0: sh          $s2, 0x6($t9)
    MEM_H(0X6, ctx->r25) = ctx->r18;
L_80067CF4:
    // 0x80067CF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80067CF8: sltiu       $at, $s0, 0x4
    ctx->r1 = ctx->r16 < 0X4 ? 1 : 0;
    // 0x80067CFC: bne         $at, $zero, L_80067C60
    if (ctx->r1 != 0) {
        // 0x80067D00: nop
    
            goto L_80067C60;
    }
    // 0x80067D00: nop

L_80067D04:
    // 0x80067D04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80067D08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80067D0C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80067D10: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80067D14: jr          $ra
    // 0x80067D18: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80067D18: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80067D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067D1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80067D20: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80067D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80067D28: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80067D2C: jal         0x80067C1C
    // 0x80067D30: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80067C1C(rdram, ctx);
        goto after_0;
    // 0x80067D30: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80067D34: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x80067D38: lh          $t7, 0x1A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1A);
    // 0x80067D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80067D40: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    // 0x80067D44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80067D48: jr          $ra
    // 0x80067D4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80067D4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80067D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067D50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80067D54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80067D58: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80067D5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80067D60: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80067D64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80067D68: bne         $t7, $at, L_80067DC8
    if (ctx->r15 != ctx->r1) {
        // 0x80067D6C: nop
    
            goto L_80067DC8;
    }
    // 0x80067D6C: nop

    // 0x80067D70: jal         0x80070D00
    // 0x80067D74: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    func_80070D00(rdram, ctx);
        goto after_0;
    // 0x80067D74: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_0:
    // 0x80067D78: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80067D7C: nop

    // 0x80067D80: lbu         $t9, 0x14($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X14);
    // 0x80067D84: nop

    // 0x80067D88: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80067D8C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80067D90: sll         $t0, $t0, 5
    ctx->r8 = S32(ctx->r8 << 5);
    // 0x80067D94: sra         $t1, $t0, 8
    ctx->r9 = S32(SIGNED(ctx->r8) >> 8);
    // 0x80067D98: sb          $t1, 0x548($t8)
    MEM_B(0X548, ctx->r24) = ctx->r9;
    // 0x80067D9C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80067DA0: jal         0x80066730
    // 0x80067DA4: addiu       $a0, $a0, 0x540
    ctx->r4 = ADD32(ctx->r4, 0X540);
    func_80066730(rdram, ctx);
        goto after_1;
    // 0x80067DA4: addiu       $a0, $a0, 0x540
    ctx->r4 = ADD32(ctx->r4, 0X540);
    after_1:
    // 0x80067DA8: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80067DAC: nop

    // 0x80067DB0: lbu         $t3, 0x14($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X14);
    // 0x80067DB4: nop

    // 0x80067DB8: sb          $t3, 0x20($t2)
    MEM_B(0X20, ctx->r10) = ctx->r11;
    // 0x80067DBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80067DC0: jal         0x80064FB0
    // 0x80067DC4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_80064FB0(rdram, ctx);
        goto after_2;
    // 0x80067DC4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_2:
L_80067DC8:
    // 0x80067DC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80067DCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80067DD0: jr          $ra
    // 0x80067DD4: nop

    return;
    // 0x80067DD4: nop

;}
RECOMP_FUNC void func_80067DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067DD8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80067DDC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80067DE0: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x80067DE4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80067DE8: lw          $s0, -0x490($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X490);
    // 0x80067DEC: lbu         $t6, 0x6B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X6B);
    // 0x80067DF0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80067DF4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80067DF8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80067DFC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80067E00: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80067E04: sb          $t6, 0x13($s0)
    MEM_B(0X13, ctx->r16) = ctx->r14;
    // 0x80067E08: lbu         $a1, 0x6B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X6B);
    // 0x80067E0C: jal         0x80066AA8
    // 0x80067E10: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    func_80066AA8(rdram, ctx);
        goto after_0;
    // 0x80067E10: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    after_0:
    // 0x80067E14: lh          $t7, 0x60($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X60);
    // 0x80067E18: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80067E1C: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x80067E20: sb          $t8, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r24;
    // 0x80067E24: lh          $t9, 0x62($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X62);
    // 0x80067E28: nop

    // 0x80067E2C: sra         $t0, $t9, 8
    ctx->r8 = S32(SIGNED(ctx->r25) >> 8);
    // 0x80067E30: sb          $t0, 0x12($s0)
    MEM_B(0X12, ctx->r16) = ctx->r8;
    // 0x80067E34: lbu         $a1, 0x6B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X6B);
    // 0x80067E38: jal         0x80066B3C
    // 0x80067E3C: nop

    func_80066B3C(rdram, ctx);
        goto after_1;
    // 0x80067E3C: nop

    after_1:
    // 0x80067E40: lh          $t1, 0x60($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X60);
    // 0x80067E44: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80067E48: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x80067E4C: sb          $t2, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r10;
    // 0x80067E50: lh          $t3, 0x62($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X62);
    // 0x80067E54: sb          $t5, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r13;
    // 0x80067E58: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x80067E5C: sb          $t4, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r12;
    // 0x80067E60: lbu         $a0, 0x6B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X6B);
    // 0x80067E64: jal         0x80066BE8
    // 0x80067E68: nop

    func_80066BE8(rdram, ctx);
        goto after_2;
    // 0x80067E68: nop

    after_2:
    // 0x80067E6C: lh          $t7, 0x8($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X8);
    // 0x80067E70: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x80067E74: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80067E78: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80067E7C: sh          $zero, 0xC($s0)
    MEM_H(0XC, ctx->r16) = 0;
    // 0x80067E80: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80067E84: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
    // 0x80067E88: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x80067E8C: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x80067E90: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
    // 0x80067E94: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x80067E98: sh          $t7, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r15;
    // 0x80067E9C: lbu         $a1, 0x6B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X6B);
    // 0x80067EA0: jal         0x80066AA8
    // 0x80067EA4: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    func_80066AA8(rdram, ctx);
        goto after_3;
    // 0x80067EA4: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x80067EA8: lbu         $a1, 0x6B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X6B);
    // 0x80067EAC: jal         0x80066B3C
    // 0x80067EB0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_80066B3C(rdram, ctx);
        goto after_4;
    // 0x80067EB0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x80067EB4: lbu         $a0, 0x6B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X6B);
    // 0x80067EB8: jal         0x80066BB4
    // 0x80067EBC: nop

    func_80066BB4(rdram, ctx);
        goto after_5;
    // 0x80067EBC: nop

    after_5:
    // 0x80067EC0: lwl         $t1, 0x3C($sp)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r29, 0X3C);
    // 0x80067EC4: lwl         $t2, 0x40($sp)
    ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r29, 0X40);
    // 0x80067EC8: lbu         $t9, 0x6B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X6B);
    // 0x80067ECC: lwr         $t1, 0x3F($sp)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r29, 0X3F);
    // 0x80067ED0: lwr         $t2, 0x43($sp)
    ctx->r10 = do_lwr(rdram, ctx->r10, ctx->r29, 0X43);
    // 0x80067ED4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80067ED8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80067EDC: swl         $t1, 0x8($sp)
    do_swl(rdram, 0X8, ctx->r29, ctx->r9);
    // 0x80067EE0: swl         $t2, 0xC($sp)
    do_swl(rdram, 0XC, ctx->r29, ctx->r10);
    // 0x80067EE4: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80067EE8: swr         $t1, 0xB($sp)
    do_swr(rdram, 0XB, ctx->r29, ctx->r9);
    // 0x80067EEC: swr         $t2, 0xF($sp)
    do_swr(rdram, 0XF, ctx->r29, ctx->r10);
    // 0x80067EF0: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80067EF4: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80067EF8: lw          $a1, 0x110($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X110);
    // 0x80067EFC: andi        $s4, $v0, 0xFFFF
    ctx->r20 = ctx->r2 & 0XFFFF;
    // 0x80067F00: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80067F04: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80067F08: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x80067F0C: jal         0x800653E4
    // 0x80067F10: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    func_800653E4(rdram, ctx);
        goto after_6;
    // 0x80067F10: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    after_6:
    // 0x80067F14: addiu       $a0, $s0, 0x518
    ctx->r4 = ADD32(ctx->r16, 0X518);
    // 0x80067F18: jal         0x8006553C
    // 0x80067F1C: addiu       $a1, $s0, 0x20
    ctx->r5 = ADD32(ctx->r16, 0X20);
    func_8006553C(rdram, ctx);
        goto after_7;
    // 0x80067F1C: addiu       $a1, $s0, 0x20
    ctx->r5 = ADD32(ctx->r16, 0X20);
    after_7:
    // 0x80067F20: lw          $t5, 0x24($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X24);
    // 0x80067F24: addiu       $t4, $sp, 0x54
    ctx->r12 = ADD32(ctx->r29, 0X54);
    // 0x80067F28: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x80067F2C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80067F30: lwl         $at, 0x0($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X0);
    // 0x80067F34: lwr         $at, 0x3($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0X3);
    // 0x80067F38: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80067F3C: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x80067F40: lwl         $t9, 0x4($t6)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r14, 0X4);
    // 0x80067F44: lwr         $t9, 0x7($t6)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r14, 0X7);
    // 0x80067F48: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80067F4C: sw          $t9, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r25;
    // 0x80067F50: lwl         $at, 0x8($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X8);
    // 0x80067F54: lwr         $at, 0xB($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0XB);
    // 0x80067F58: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    // 0x80067F5C: jal         0x80054DA0
    // 0x80067F60: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    func_80054DA0(rdram, ctx);
        goto after_8;
    // 0x80067F60: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    after_8:
    // 0x80067F64: addiu       $a0, $s0, 0x518
    ctx->r4 = ADD32(ctx->r16, 0X518);
    // 0x80067F68: jal         0x800656CC
    // 0x80067F6C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_800656CC(rdram, ctx);
        goto after_9;
    // 0x80067F6C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_9:
    // 0x80067F70: lbu         $t0, 0x13($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X13);
    // 0x80067F74: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80067F78: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80067F7C: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x80067F80: lw          $a1, 0x110($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X110);
    // 0x80067F84: lbu         $a2, 0x538($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X538);
    // 0x80067F88: jal         0x800668EC
    // 0x80067F8C: addiu       $a0, $s0, 0x540
    ctx->r4 = ADD32(ctx->r16, 0X540);
    func_800668EC(rdram, ctx);
        goto after_10;
    // 0x80067F8C: addiu       $a0, $s0, 0x540
    ctx->r4 = ADD32(ctx->r16, 0X540);
    after_10:
    // 0x80067F90: lh          $t2, 0x2E($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2E);
    // 0x80067F94: addiu       $a0, $s0, 0x540
    ctx->r4 = ADD32(ctx->r16, 0X540);
    // 0x80067F98: sh          $t2, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r10;
    // 0x80067F9C: lb          $t3, 0x12($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X12);
    // 0x80067FA0: nop

    // 0x80067FA4: sll         $t5, $t3, 8
    ctx->r13 = S32(ctx->r11 << 8);
    // 0x80067FA8: sh          $t5, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r13;
    // 0x80067FAC: lh          $t8, 0x2A($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2A);
    // 0x80067FB0: lwl         $t9, 0x50($sp)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r29, 0X50);
    // 0x80067FB4: sh          $t8, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r24;
    // 0x80067FB8: lb          $t7, 0x10($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X10);
    // 0x80067FBC: lwr         $t9, 0x53($sp)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r29, 0X53);
    // 0x80067FC0: sll         $t4, $t7, 8
    ctx->r12 = S32(ctx->r15 << 8);
    // 0x80067FC4: addiu       $t6, $t4, 0x80
    ctx->r14 = ADD32(ctx->r12, 0X80);
    // 0x80067FC8: sh          $t6, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r14;
    // 0x80067FCC: lwl         $t0, 0x4C($sp)
    ctx->r8 = do_lwl(rdram, ctx->r8, ctx->r29, 0X4C);
    // 0x80067FD0: lwr         $t0, 0x4F($sp)
    ctx->r8 = do_lwr(rdram, ctx->r8, ctx->r29, 0X4F);
    // 0x80067FD4: swl         $t9, 0x4($sp)
    do_swl(rdram, 0X4, ctx->r29, ctx->r25);
    // 0x80067FD8: swl         $t0, 0x8($sp)
    do_swl(rdram, 0X8, ctx->r29, ctx->r8);
    // 0x80067FDC: swr         $t9, 0x7($sp)
    do_swr(rdram, 0X7, ctx->r29, ctx->r25);
    // 0x80067FE0: swr         $t0, 0xB($sp)
    do_swr(rdram, 0XB, ctx->r29, ctx->r8);
    // 0x80067FE4: lbu         $a3, 0xA($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XA);
    // 0x80067FE8: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80067FEC: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80067FF0: sll         $t1, $a3, 14
    ctx->r9 = S32(ctx->r7 << 14);
    // 0x80067FF4: jal         0x800667DC
    // 0x80067FF8: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    func_800667DC(rdram, ctx);
        goto after_11;
    // 0x80067FF8: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    after_11:
    // 0x80067FFC: lh          $s1, 0x556($s0)
    ctx->r17 = MEM_H(ctx->r16, 0X556);
    // 0x80068000: lh          $s2, 0x558($s0)
    ctx->r18 = MEM_H(ctx->r16, 0X558);
    // 0x80068004: lhu         $s3, 0x550($s0)
    ctx->r19 = MEM_HU(ctx->r16, 0X550);
    // 0x80068008: sra         $t2, $s1, 8
    ctx->r10 = S32(SIGNED(ctx->r17) >> 8);
    // 0x8006800C: sra         $t5, $s2, 8
    ctx->r13 = S32(SIGNED(ctx->r18) >> 8);
    // 0x80068010: sra         $t7, $s3, 14
    ctx->r15 = S32(SIGNED(ctx->r19) >> 14);
    // 0x80068014: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x80068018: or          $s2, $t5, $zero
    ctx->r18 = ctx->r13 | 0;
    // 0x8006801C: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x80068020: andi        $t3, $s1, 0xFF
    ctx->r11 = ctx->r17 & 0XFF;
    // 0x80068024: andi        $t8, $s2, 0xFF
    ctx->r24 = ctx->r18 & 0XFF;
    // 0x80068028: andi        $t4, $s3, 0xFF
    ctx->r12 = ctx->r19 & 0XFF;
    // 0x8006802C: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80068030: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    // 0x80068034: or          $s3, $t4, $zero
    ctx->r19 = ctx->r12 | 0;
    // 0x80068038: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x8006803C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80068040: jal         0x8003DDA8
    // 0x80068044: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8003DDA8(rdram, ctx);
        goto after_12;
    // 0x80068044: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x80068048: bne         $v0, $zero, L_80068068
    if (ctx->r2 != 0) {
        // 0x8006804C: nop
    
            goto L_80068068;
    }
    // 0x8006804C: nop

    // 0x80068050: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80068054: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80068058: jal         0x8003DBC0
    // 0x8006805C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8003DBC0(rdram, ctx);
        goto after_13;
    // 0x8006805C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_13:
    // 0x80068060: beq         $v0, $zero, L_80068070
    if (ctx->r2 == 0) {
        // 0x80068064: nop
    
            goto L_80068070;
    }
    // 0x80068064: nop

L_80068068:
    // 0x80068068: jal         0x80065620
    // 0x8006806C: addiu       $a0, $s0, 0xA40
    ctx->r4 = ADD32(ctx->r16, 0XA40);
    func_80065620(rdram, ctx);
        goto after_14;
    // 0x8006806C: addiu       $a0, $s0, 0xA40
    ctx->r4 = ADD32(ctx->r16, 0XA40);
    after_14:
L_80068070:
    // 0x80068070: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80068074: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80068078: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8006807C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80068080: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80068084: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80068088: jr          $ra
    // 0x8006808C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8006808C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80068090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068090: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80068094: jr          $ra
    // 0x80068098: sb          $t6, 0x538($a0)
    MEM_B(0X538, ctx->r4) = ctx->r14;
    return;
    // 0x80068098: sb          $t6, 0x538($a0)
    MEM_B(0X538, ctx->r4) = ctx->r14;
    // 0x8006809C: nop

;}
RECOMP_FUNC void func_800680A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800680A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800680A4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800680A8: lbu         $t6, 0x37($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X37);
    // 0x800680AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800680B0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x800680B4: lw          $t8, 0x530($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X530);
    // 0x800680B8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800680BC: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x800680C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800680C4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800680C8: lbu         $t9, 0x37($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X37);
    // 0x800680CC: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800680D0: lw          $s0, 0x110($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X110);
    // 0x800680D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800680D8: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x800680DC: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
    // 0x800680E0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800680E4: lbu         $t1, 0x1E($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1E);
    // 0x800680E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800680EC: sb          $t1, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r9;
    // 0x800680F0: lwl         $t3, 0x28($sp)
    ctx->r11 = do_lwl(rdram, ctx->r11, ctx->r29, 0X28);
    // 0x800680F4: lwr         $t3, 0x2B($sp)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r29, 0X2B);
    // 0x800680F8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800680FC: swl         $t3, 0x8($sp)
    do_swl(rdram, 0X8, ctx->r29, ctx->r11);
    // 0x80068100: swr         $t3, 0xB($sp)
    do_swr(rdram, 0XB, ctx->r29, ctx->r11);
    // 0x80068104: lwl         $at, 0xA($s0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r16, 0XA);
    // 0x80068108: lwr         $at, 0xD($s0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r16, 0XD);
    // 0x8006810C: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80068110: swl         $at, 0xC($sp)
    do_swl(rdram, 0XC, ctx->r29, ctx->r1);
    // 0x80068114: swr         $at, 0xF($sp)
    do_swr(rdram, 0XF, ctx->r29, ctx->r1);
    // 0x80068118: lbu         $t6, 0x1E($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1E);
    // 0x8006811C: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80068120: sll         $t7, $t6, 14
    ctx->r15 = S32(ctx->r14 << 14);
    // 0x80068124: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80068128: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8006812C: jal         0x800653E4
    // 0x80068130: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_800653E4(rdram, ctx);
        goto after_0;
    // 0x80068130: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x80068134: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80068138: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8006813C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80068140: jal         0x8006531C
    // 0x80068144: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_8006531C(rdram, ctx);
        goto after_1;
    // 0x80068144: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_1:
    // 0x80068148: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006814C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80068150: jr          $ra
    // 0x80068154: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80068154: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80068158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068158: lwl         $at, 0x0($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X0);
    // 0x8006815C: lwr         $at, 0x3($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0X3);
    // 0x80068160: nop

    // 0x80068164: swl         $at, 0x2($a0)
    do_swl(rdram, 0X2, ctx->r4, ctx->r1);
    // 0x80068168: swr         $at, 0x5($a0)
    do_swr(rdram, 0X5, ctx->r4, ctx->r1);
    // 0x8006816C: lh          $t0, 0x0($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X0);
    // 0x80068170: lh          $t9, 0x4($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X4);
    // 0x80068174: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80068178: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x8006817C: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x80068180: mflo        $t2
    ctx->r10 = lo;
    // 0x80068184: sh          $t2, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r10;
    // 0x80068188: lh          $t4, 0x2($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X2);
    // 0x8006818C: lh          $t3, 0x6($a1)
    ctx->r11 = MEM_H(ctx->r5, 0X6);
    // 0x80068190: nop

    // 0x80068194: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x80068198: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x8006819C: mflo        $t7
    ctx->r15 = lo;
    // 0x800681A0: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
    // 0x800681A4: lbu         $t6, 0x8($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X8);
    // 0x800681A8: nop

    // 0x800681AC: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x800681B0: sh          $t8, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r24;
    // 0x800681B4: lbu         $t1, 0x8($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X8);
    // 0x800681B8: lbu         $t9, 0x9($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X9);
    // 0x800681BC: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x800681C0: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x800681C4: subu        $t3, $t0, $t2
    ctx->r11 = SUB32(ctx->r8, ctx->r10);
    // 0x800681C8: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x800681CC: mflo        $t4
    ctx->r12 = lo;
    // 0x800681D0: sh          $t4, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r12;
    // 0x800681D4: lhu         $t5, 0xA($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0XA);
    // 0x800681D8: nop

    // 0x800681DC: sh          $t5, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r13;
    // 0x800681E0: lhu         $t6, 0xA($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0XA);
    // 0x800681E4: lhu         $t7, 0xC($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0XC);
    // 0x800681E8: nop

    // 0x800681EC: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x800681F0: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x800681F4: mflo        $t9
    ctx->r25 = lo;
    // 0x800681F8: sh          $t9, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r25;
    // 0x800681FC: jr          $ra
    // 0x80068200: nop

    return;
    // 0x80068200: nop

;}
RECOMP_FUNC void func_80068204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068204: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x80068208: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x8006820C: lh          $t9, 0x4($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X4);
    // 0x80068210: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80068214: lh          $t0, 0x8($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X8);
    // 0x80068218: lh          $t2, 0xE($a0)
    ctx->r10 = MEM_H(ctx->r4, 0XE);
    // 0x8006821C: lh          $t3, 0x10($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X10);
    // 0x80068220: lh          $t6, 0xC($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XC);
    // 0x80068224: lhu         $t5, 0xA($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0XA);
    // 0x80068228: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8006822C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80068230: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80068234: sh          $t8, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r24;
    // 0x80068238: sh          $t1, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r9;
    // 0x8006823C: sh          $t4, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r12;
    // 0x80068240: jr          $ra
    // 0x80068244: sh          $t7, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r15;
    return;
    // 0x80068244: sh          $t7, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_80068248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068248: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006824C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80068250: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80068254: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80068258: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8006825C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80068260: lwl         $at, 0x2($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X2);
    // 0x80068264: lwr         $at, 0x5($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0X5);
    // 0x80068268: addiu       $s0, $t6, 0x18
    ctx->r16 = ADD32(ctx->r14, 0X18);
    // 0x8006826C: swl         $at, 0xE($s0)
    do_swl(rdram, 0XE, ctx->r16, ctx->r1);
    // 0x80068270: swr         $at, 0x11($s0)
    do_swr(rdram, 0X11, ctx->r16, ctx->r1);
    // 0x80068274: lh          $t9, 0xE($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XE);
    // 0x80068278: lh          $t1, 0x10($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X10);
    // 0x8006827C: addiu       $t0, $t9, 0x80
    ctx->r8 = ADD32(ctx->r25, 0X80);
    // 0x80068280: addiu       $t2, $t1, 0x80
    ctx->r10 = ADD32(ctx->r9, 0X80);
    // 0x80068284: sh          $t0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r8;
    // 0x80068288: sh          $t2, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r10;
    // 0x8006828C: lbu         $t3, 0x2F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X2F);
    // 0x80068290: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80068294: bne         $t3, $at, L_800682B8
    if (ctx->r11 != ctx->r1) {
        // 0x80068298: nop
    
            goto L_800682B8;
    }
    // 0x80068298: nop

    // 0x8006829C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800682A0: nop

    // 0x800682A4: lh          $t5, 0xE($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE);
    // 0x800682A8: nop

    // 0x800682AC: sra         $t7, $t5, 4
    ctx->r15 = S32(SIGNED(ctx->r13) >> 4);
    // 0x800682B0: b           L_800682D8
    // 0x800682B4: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_800682D8;
    // 0x800682B4: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_800682B8:
    // 0x800682B8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800682BC: lbu         $t9, 0x2F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2F);
    // 0x800682C0: lh          $t8, 0xE($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XE);
    // 0x800682C4: nop

    // 0x800682C8: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800682CC: mflo        $t0
    ctx->r8 = lo;
    // 0x800682D0: srl         $t1, $t0, 12
    ctx->r9 = S32(U32(ctx->r8) >> 12);
    // 0x800682D4: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_800682D8:
    // 0x800682D8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800682DC: nop

    // 0x800682E0: lhu         $a0, 0xA($t2)
    ctx->r4 = MEM_HU(ctx->r10, 0XA);
    // 0x800682E4: jal         0x80070D00
    // 0x800682E8: nop

    func_80070D00(rdram, ctx);
        goto after_0;
    // 0x800682E8: nop

    after_0:
    // 0x800682EC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800682F0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800682F4: addiu       $a1, $a1, -0x2AF4
    ctx->r5 = ADD32(ctx->r5, -0X2AF4);
    // 0x800682F8: jal         0x8006CF08
    // 0x800682FC: addiu       $a0, $a0, -0x2B10
    ctx->r4 = ADD32(ctx->r4, -0X2B10);
    alSynFreeFX(rdram, ctx);
        goto after_1;
    // 0x800682FC: addiu       $a0, $a0, -0x2B10
    ctx->r4 = ADD32(ctx->r4, -0X2B10);
    after_1:
    // 0x80068300: jal         0x80064FB0
    // 0x80068304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80064FB0(rdram, ctx);
        goto after_2;
    // 0x80068304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80068308: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006830C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80068310: addiu       $a1, $a1, -0x2AC8
    ctx->r5 = ADD32(ctx->r5, -0X2AC8);
    // 0x80068314: jal         0x8006CF08
    // 0x80068318: addiu       $a0, $a0, -0x2AE4
    ctx->r4 = ADD32(ctx->r4, -0X2AE4);
    alSynFreeFX(rdram, ctx);
        goto after_3;
    // 0x80068318: addiu       $a0, $a0, -0x2AE4
    ctx->r4 = ADD32(ctx->r4, -0X2AE4);
    after_3:
    // 0x8006831C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80068320: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80068324: jr          $ra
    // 0x80068328: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80068328: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006832C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006832C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80068330: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80068334: lbu         $t6, 0x37($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X37);
    // 0x80068338: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8006833C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80068340: lw          $t8, 0x534($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X534);
    // 0x80068344: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80068348: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x8006834C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80068350: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80068354: lbu         $t9, 0x37($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X37);
    // 0x80068358: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x8006835C: lw          $s0, 0x110($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X110);
    // 0x80068360: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80068364: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x80068368: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
    // 0x8006836C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80068370: lbu         $t1, 0x1E($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1E);
    // 0x80068374: addiu       $t3, $sp, 0x28
    ctx->r11 = ADD32(ctx->r29, 0X28);
    // 0x80068378: sb          $t1, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r9;
    // 0x8006837C: lwl         $at, 0x0($t3)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r11, 0X0);
    // 0x80068380: lwr         $at, 0x3($t3)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r11, 0X3);
    // 0x80068384: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80068388: swl         $at, 0x8($sp)
    do_swl(rdram, 0X8, ctx->r29, ctx->r1);
    // 0x8006838C: swr         $at, 0xB($sp)
    do_swr(rdram, 0XB, ctx->r29, ctx->r1);
    // 0x80068390: lwl         $at, 0x0($t3)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r11, 0X0);
    // 0x80068394: lwr         $at, 0x3($t3)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r11, 0X3);
    // 0x80068398: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x8006839C: swl         $at, 0xC($sp)
    do_swl(rdram, 0XC, ctx->r29, ctx->r1);
    // 0x800683A0: swr         $at, 0xF($sp)
    do_swr(rdram, 0XF, ctx->r29, ctx->r1);
    // 0x800683A4: lbu         $t8, 0x1E($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1E);
    // 0x800683A8: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x800683AC: sll         $t9, $t8, 14
    ctx->r25 = S32(ctx->r24 << 14);
    // 0x800683B0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800683B4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800683B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800683BC: jal         0x800653E4
    // 0x800683C0: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_800653E4(rdram, ctx);
        goto after_0;
    // 0x800683C0: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_0:
    // 0x800683C4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800683C8: lbu         $a1, 0x37($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X37);
    // 0x800683CC: jal         0x800680A0
    // 0x800683D0: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    func_800680A0(rdram, ctx);
        goto after_1;
    // 0x800683D0: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    after_1:
    // 0x800683D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800683D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800683DC: jr          $ra
    // 0x800683E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800683E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800683E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800683E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800683E8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800683EC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800683F0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800683F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800683F8: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x800683FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80068400: jal         0x80068248
    // 0x80068404: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    func_80068248(rdram, ctx);
        goto after_0;
    // 0x80068404: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    after_0:
    // 0x80068408: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006840C: nop

    // 0x80068410: lwl         $at, 0x2($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X2);
    // 0x80068414: lwr         $at, 0x5($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0X5);
    // 0x80068418: addiu       $s0, $t6, 0x20
    ctx->r16 = ADD32(ctx->r14, 0X20);
    // 0x8006841C: swl         $at, 0xE($s0)
    do_swl(rdram, 0XE, ctx->r16, ctx->r1);
    // 0x80068420: swr         $at, 0x11($s0)
    do_swr(rdram, 0X11, ctx->r16, ctx->r1);
    // 0x80068424: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80068428: nop

    // 0x8006842C: lwl         $at, 0xA($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0XA);
    // 0x80068430: lwr         $at, 0xD($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0XD);
    // 0x80068434: nop

    // 0x80068438: swl         $at, 0xA($s0)
    do_swl(rdram, 0XA, ctx->r16, ctx->r1);
    // 0x8006843C: swr         $at, 0xD($s0)
    do_swr(rdram, 0XD, ctx->r16, ctx->r1);
    // 0x80068440: lbu         $t2, 0x2F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X2F);
    // 0x80068444: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80068448: bne         $t2, $at, L_8006846C
    if (ctx->r10 != ctx->r1) {
        // 0x8006844C: nop
    
            goto L_8006846C;
    }
    // 0x8006844C: nop

    // 0x80068450: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80068454: nop

    // 0x80068458: lh          $t4, 0x16($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X16);
    // 0x8006845C: nop

    // 0x80068460: sra         $t5, $t4, 4
    ctx->r13 = S32(SIGNED(ctx->r12) >> 4);
    // 0x80068464: b           L_8006848C
    // 0x80068468: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_8006848C;
    // 0x80068468: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_8006846C:
    // 0x8006846C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80068470: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x80068474: lh          $t6, 0x16($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X16);
    // 0x80068478: nop

    // 0x8006847C: multu       $t6, $t8
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80068480: mflo        $t0
    ctx->r8 = lo;
    // 0x80068484: srl         $t9, $t0, 12
    ctx->r25 = S32(U32(ctx->r8) >> 12);
    // 0x80068488: sb          $t9, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r25;
L_8006848C:
    // 0x8006848C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80068490: nop

    // 0x80068494: lhu         $a0, 0x12($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X12);
    // 0x80068498: jal         0x80070D00
    // 0x8006849C: nop

    func_80070D00(rdram, ctx);
        goto after_1;
    // 0x8006849C: nop

    after_1:
    // 0x800684A0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800684A4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800684A8: addiu       $a1, $a1, -0x2AAC
    ctx->r5 = ADD32(ctx->r5, -0X2AAC);
    // 0x800684AC: jal         0x8006CF08
    // 0x800684B0: addiu       $a0, $a0, -0x2AB4
    ctx->r4 = ADD32(ctx->r4, -0X2AB4);
    alSynFreeFX(rdram, ctx);
        goto after_2;
    // 0x800684B0: addiu       $a0, $a0, -0x2AB4
    ctx->r4 = ADD32(ctx->r4, -0X2AB4);
    after_2:
    // 0x800684B4: jal         0x80064FB0
    // 0x800684B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80064FB0(rdram, ctx);
        goto after_3;
    // 0x800684B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800684BC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800684C0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800684C4: addiu       $a1, $a1, -0x2A94
    ctx->r5 = ADD32(ctx->r5, -0X2A94);
    // 0x800684C8: jal         0x8006CF08
    // 0x800684CC: addiu       $a0, $a0, -0x2A9C
    ctx->r4 = ADD32(ctx->r4, -0X2A9C);
    alSynFreeFX(rdram, ctx);
        goto after_4;
    // 0x800684CC: addiu       $a0, $a0, -0x2A9C
    ctx->r4 = ADD32(ctx->r4, -0X2A9C);
    after_4:
    // 0x800684D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800684D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800684D8: jr          $ra
    // 0x800684DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800684DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800684E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800684E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800684E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800684E8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800684EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800684F0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800684F4: lh          $t8, 0x6($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X6);
    // 0x800684F8: nop

    // 0x800684FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80068500: sh          $t9, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r25;
    // 0x80068504: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80068508: nop

    // 0x8006850C: lh          $t1, 0x4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X4);
    // 0x80068510: lh          $t2, 0x8($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X8);
    // 0x80068514: nop

    // 0x80068518: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8006851C: sh          $t3, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r11;
    // 0x80068520: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80068524: nop

    // 0x80068528: lh          $t5, 0xA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA);
    // 0x8006852C: lh          $t7, 0xE($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XE);
    // 0x80068530: nop

    // 0x80068534: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80068538: sh          $t8, 0xA($t4)
    MEM_H(0XA, ctx->r12) = ctx->r24;
    // 0x8006853C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80068540: nop

    // 0x80068544: lh          $t6, 0xC($t9)
    ctx->r14 = MEM_H(ctx->r25, 0XC);
    // 0x80068548: lh          $t1, 0x10($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X10);
    // 0x8006854C: nop

    // 0x80068550: addu        $t2, $t6, $t1
    ctx->r10 = ADD32(ctx->r14, ctx->r9);
    // 0x80068554: sh          $t2, 0xC($t9)
    MEM_H(0XC, ctx->r25) = ctx->r10;
    // 0x80068558: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8006855C: nop

    // 0x80068560: lh          $t0, 0x16($t3)
    ctx->r8 = MEM_H(ctx->r11, 0X16);
    // 0x80068564: lh          $t5, 0x18($t3)
    ctx->r13 = MEM_H(ctx->r11, 0X18);
    // 0x80068568: nop

    // 0x8006856C: addu        $t7, $t0, $t5
    ctx->r15 = ADD32(ctx->r8, ctx->r13);
    // 0x80068570: sh          $t7, 0x16($t3)
    MEM_H(0X16, ctx->r11) = ctx->r15;
    // 0x80068574: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80068578: nop

    // 0x8006857C: lhu         $t4, 0x12($t8)
    ctx->r12 = MEM_HU(ctx->r24, 0X12);
    // 0x80068580: lh          $t6, 0x14($t8)
    ctx->r14 = MEM_H(ctx->r24, 0X14);
    // 0x80068584: nop

    // 0x80068588: addu        $t1, $t4, $t6
    ctx->r9 = ADD32(ctx->r12, ctx->r14);
    // 0x8006858C: sh          $t1, 0x12($t8)
    MEM_H(0X12, ctx->r24) = ctx->r9;
    // 0x80068590: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80068594: jal         0x80068204
    // 0x80068598: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    func_80068204(rdram, ctx);
        goto after_0;
    // 0x80068598: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    after_0:
    // 0x8006859C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800685A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800685A4: jr          $ra
    // 0x800685A8: nop

    return;
    // 0x800685A8: nop

;}
RECOMP_FUNC void func_800685AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800685AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800685B0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800685B4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800685B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800685BC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800685C0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800685C4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x800685C8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800685CC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800685D0: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x800685D4: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x800685D8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800685DC: lbu         $s1, 0x3F($sp)
    ctx->r17 = MEM_BU(ctx->r29, 0X3F);
    // 0x800685E0: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
    // 0x800685E4: lw          $s0, 0x110($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X110);
    // 0x800685E8: beq         $s1, $zero, L_80068610
    if (ctx->r17 == 0) {
        // 0x800685EC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80068610;
    }
    // 0x800685EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800685F0: beq         $s1, $at, L_800686F4
    if (ctx->r17 == ctx->r1) {
        // 0x800685F4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800686F4;
    }
    // 0x800685F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800685F8: beq         $s1, $at, L_800686F4
    if (ctx->r17 == ctx->r1) {
        // 0x800685FC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800686F4;
    }
    // 0x800685FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80068600: beq         $s1, $at, L_800686F4
    if (ctx->r17 == ctx->r1) {
        // 0x80068604: nop
    
            goto L_800686F4;
    }
    // 0x80068604: nop

    // 0x80068608: b           L_80068788
    // 0x8006860C: nop

        goto L_80068788;
    // 0x8006860C: nop

L_80068610:
    // 0x80068610: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80068614: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80068618: lbu         $a1, 0x0($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X0);
    // 0x8006861C: jal         0x80066AA8
    // 0x80068620: nop

    func_80066AA8(rdram, ctx);
        goto after_0;
    // 0x80068620: nop

    after_0:
    // 0x80068624: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80068628: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x8006862C: lbu         $a1, 0x0($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X0);
    // 0x80068630: jal         0x80066B3C
    // 0x80068634: nop

    func_80066B3C(rdram, ctx);
        goto after_1;
    // 0x80068634: nop

    after_1:
    // 0x80068638: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8006863C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80068640: lwl         $at, 0x0($t2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r10, 0X0);
    // 0x80068644: lwr         $at, 0x3($t2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r10, 0X3);
    // 0x80068648: nop

    // 0x8006864C: swl         $at, 0x2($t1)
    do_swl(rdram, 0X2, ctx->r9, ctx->r1);
    // 0x80068650: swr         $at, 0x5($t1)
    do_swr(rdram, 0X5, ctx->r9, ctx->r1);
    // 0x80068654: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80068658: lh          $t5, 0x28($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X28);
    // 0x8006865C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80068660: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80068664: subu        $t8, $t5, $t7
    ctx->r24 = SUB32(ctx->r13, ctx->r15);
    // 0x80068668: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8006866C: mflo        $t9
    ctx->r25 = lo;
    // 0x80068670: sh          $t9, 0x6($t6)
    MEM_H(0X6, ctx->r14) = ctx->r25;
    // 0x80068674: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80068678: lh          $t0, 0x2A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2A);
    // 0x8006867C: lh          $t1, 0x4($t3)
    ctx->r9 = MEM_H(ctx->r11, 0X4);
    // 0x80068680: nop

    // 0x80068684: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x80068688: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x8006868C: mflo        $t4
    ctx->r12 = lo;
    // 0x80068690: sh          $t4, 0x8($t3)
    MEM_H(0X8, ctx->r11) = ctx->r12;
    // 0x80068694: lwl         $at, 0xA($s0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r16, 0XA);
    // 0x80068698: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8006869C: lwr         $at, 0xD($s0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r16, 0XD);
    // 0x800686A0: nop

    // 0x800686A4: swl         $at, 0xA($t5)
    do_swl(rdram, 0XA, ctx->r13, ctx->r1);
    // 0x800686A8: swr         $at, 0xD($t5)
    do_swr(rdram, 0XD, ctx->r13, ctx->r1);
    // 0x800686AC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800686B0: lh          $t9, 0x24($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X24);
    // 0x800686B4: lh          $t0, 0xA($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XA);
    // 0x800686B8: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x800686BC: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x800686C0: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x800686C4: mflo        $t2
    ctx->r10 = lo;
    // 0x800686C8: sh          $t2, 0xE($t6)
    MEM_H(0XE, ctx->r14) = ctx->r10;
    // 0x800686CC: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800686D0: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x800686D4: lh          $t7, 0xC($t3)
    ctx->r15 = MEM_H(ctx->r11, 0XC);
    // 0x800686D8: nop

    // 0x800686DC: subu        $t5, $t4, $t7
    ctx->r13 = SUB32(ctx->r12, ctx->r15);
    // 0x800686E0: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x800686E4: mflo        $t8
    ctx->r24 = lo;
    // 0x800686E8: sh          $t8, 0x10($t3)
    MEM_H(0X10, ctx->r11) = ctx->r24;
    // 0x800686EC: b           L_800687A0
    // 0x800686F0: nop

        goto L_800687A0;
    // 0x800686F0: nop

L_800686F4:
    // 0x800686F4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800686F8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800686FC: lwl         $at, 0x0($t0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r8, 0X0);
    // 0x80068700: lwr         $at, 0x3($t0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r8, 0X3);
    // 0x80068704: nop

    // 0x80068708: swl         $at, 0x2($t9)
    do_swl(rdram, 0X2, ctx->r25, ctx->r1);
    // 0x8006870C: swr         $at, 0x5($t9)
    do_swr(rdram, 0X5, ctx->r25, ctx->r1);
    // 0x80068710: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80068714: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80068718: lh          $t4, 0x4($t6)
    ctx->r12 = MEM_H(ctx->r14, 0X4);
    // 0x8006871C: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x80068720: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80068724: subu        $t5, $t4, $t7
    ctx->r13 = SUB32(ctx->r12, ctx->r15);
    // 0x80068728: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x8006872C: mflo        $t8
    ctx->r24 = lo;
    // 0x80068730: sh          $t8, 0x6($t3)
    MEM_H(0X6, ctx->r11) = ctx->r24;
    // 0x80068734: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80068738: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8006873C: lh          $t9, 0x6($t1)
    ctx->r25 = MEM_H(ctx->r9, 0X6);
    // 0x80068740: lh          $t0, 0x2($t1)
    ctx->r8 = MEM_H(ctx->r9, 0X2);
    // 0x80068744: nop

    // 0x80068748: subu        $t2, $t9, $t0
    ctx->r10 = SUB32(ctx->r25, ctx->r8);
    // 0x8006874C: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x80068750: mflo        $t6
    ctx->r14 = lo;
    // 0x80068754: sh          $t6, 0x8($t4)
    MEM_H(0X8, ctx->r12) = ctx->r14;
    // 0x80068758: lwl         $at, 0xA($s0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r16, 0XA);
    // 0x8006875C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80068760: lwr         $at, 0xD($s0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r16, 0XD);
    // 0x80068764: nop

    // 0x80068768: swl         $at, 0xA($t7)
    do_swl(rdram, 0XA, ctx->r15, ctx->r1);
    // 0x8006876C: swr         $at, 0xD($t7)
    do_swr(rdram, 0XD, ctx->r15, ctx->r1);
    // 0x80068770: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80068774: nop

    // 0x80068778: sh          $zero, 0xE($t3)
    MEM_H(0XE, ctx->r11) = 0;
    // 0x8006877C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80068780: b           L_800687A0
    // 0x80068784: sh          $zero, 0x10($t1)
    MEM_H(0X10, ctx->r9) = 0;
        goto L_800687A0;
    // 0x80068784: sh          $zero, 0x10($t1)
    MEM_H(0X10, ctx->r9) = 0;
L_80068788:
    // 0x80068788: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006878C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80068790: addiu       $a1, $a1, -0x2A78
    ctx->r5 = ADD32(ctx->r5, -0X2A78);
    // 0x80068794: addiu       $a0, $a0, -0x2A80
    ctx->r4 = ADD32(ctx->r4, -0X2A80);
    // 0x80068798: jal         0x8004A5A0
    // 0x8006879C: addiu       $a2, $zero, 0xE7
    ctx->r6 = ADD32(0, 0XE7);
    func_8004A5A0(rdram, ctx);
        goto after_2;
    // 0x8006879C: addiu       $a2, $zero, 0xE7
    ctx->r6 = ADD32(0, 0XE7);
    after_2:
L_800687A0:
    // 0x800687A0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800687A4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800687A8: lbu         $t0, 0x8($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X8);
    // 0x800687AC: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x800687B0: sll         $t2, $t0, 4
    ctx->r10 = S32(ctx->r8 << 4);
    // 0x800687B4: sh          $t2, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r10;
    // 0x800687B8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800687BC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800687C0: lbu         $t5, 0x9($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X9);
    // 0x800687C4: lbu         $t8, 0x8($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X8);
    // 0x800687C8: sll         $t7, $t5, 4
    ctx->r15 = S32(ctx->r13 << 4);
    // 0x800687CC: sll         $t3, $t8, 4
    ctx->r11 = S32(ctx->r24 << 4);
    // 0x800687D0: subu        $t1, $t7, $t3
    ctx->r9 = SUB32(ctx->r15, ctx->r11);
    // 0x800687D4: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x800687D8: mflo        $t9
    ctx->r25 = lo;
    // 0x800687DC: sh          $t9, 0x18($t0)
    MEM_H(0X18, ctx->r8) = ctx->r25;
    // 0x800687E0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800687E4: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800687E8: lhu         $t6, 0xA($t2)
    ctx->r14 = MEM_HU(ctx->r10, 0XA);
    // 0x800687EC: nop

    // 0x800687F0: sh          $t6, 0x12($t5)
    MEM_H(0X12, ctx->r13) = ctx->r14;
    // 0x800687F4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800687F8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800687FC: lhu         $t8, 0xC($t4)
    ctx->r24 = MEM_HU(ctx->r12, 0XC);
    // 0x80068800: lhu         $t7, 0xA($t4)
    ctx->r15 = MEM_HU(ctx->r12, 0XA);
    // 0x80068804: nop

    // 0x80068808: subu        $t3, $t8, $t7
    ctx->r11 = SUB32(ctx->r24, ctx->r15);
    // 0x8006880C: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x80068810: mflo        $t1
    ctx->r9 = lo;
    // 0x80068814: sh          $t1, 0x14($t9)
    MEM_H(0X14, ctx->r25) = ctx->r9;
    // 0x80068818: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8006881C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80068820: jal         0x80068158
    // 0x80068824: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    func_80068158(rdram, ctx);
        goto after_3;
    // 0x80068824: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    after_3:
    // 0x80068828: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006882C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80068830: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80068834: jr          $ra
    // 0x80068838: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80068838: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8006883C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006883C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80068840: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80068844: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80068848: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8006884C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80068850: lw          $s0, -0x480($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X480);
    // 0x80068854: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80068858: beq         $at, $zero, L_80068898
    if (ctx->r1 == 0) {
        // 0x8006885C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80068898;
    }
    // 0x8006885C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_80068860:
    // 0x80068860: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x80068864: addu        $t6, $t6, $s1
    ctx->r14 = ADD32(ctx->r14, ctx->r17);
    // 0x80068868: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8006886C: addu        $t6, $t6, $s1
    ctx->r14 = ADD32(ctx->r14, ctx->r17);
    // 0x80068870: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80068874: addu        $t6, $t6, $s1
    ctx->r14 = ADD32(ctx->r14, ctx->r17);
    // 0x80068878: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8006887C: addu        $a0, $s0, $t6
    ctx->r4 = ADD32(ctx->r16, ctx->r14);
    // 0x80068880: jal         0x800684E0
    // 0x80068884: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_800684E0(rdram, ctx);
        goto after_0;
    // 0x80068884: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_0:
    // 0x80068888: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006888C: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80068890: bne         $at, $zero, L_80068860
    if (ctx->r1 != 0) {
        // 0x80068894: nop
    
            goto L_80068860;
    }
    // 0x80068894: nop

L_80068898:
    // 0x80068898: lbu         $t7, 0x2919($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X2919);
    // 0x8006889C: nop

    // 0x800688A0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800688A4: sb          $t8, 0x2919($s0)
    MEM_B(0X2919, ctx->r16) = ctx->r24;
    // 0x800688A8: lbu         $t9, 0x2919($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2919);
    // 0x800688AC: nop

    // 0x800688B0: bne         $t9, $zero, L_800688C8
    if (ctx->r25 != 0) {
        // 0x800688B4: nop
    
            goto L_800688C8;
    }
    // 0x800688B4: nop

    // 0x800688B8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800688BC: sb          $t0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r8;
    // 0x800688C0: b           L_800688CC
    // 0x800688C4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_800688CC;
    // 0x800688C4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_800688C8:
    // 0x800688C8: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
L_800688CC:
    // 0x800688CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800688D0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800688D4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800688D8: jr          $ra
    // 0x800688DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800688DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800688E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800688E0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800688E4: lw          $a0, -0x480($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X480);
    // 0x800688E8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800688EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800688F0: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x800688F4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x800688F8: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x800688FC: jr          $ra
    // 0x80068900: sb          $t7, 0x2919($a0)
    MEM_B(0X2919, ctx->r4) = ctx->r15;
    return;
    // 0x80068900: sb          $t7, 0x2919($a0)
    MEM_B(0X2919, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_80068904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068904: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80068908: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006890C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80068910: lw          $s0, -0x480($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X480);
    // 0x80068914: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80068918: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x8006891C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80068920: bne         $t6, $at, L_80068930
    if (ctx->r14 != ctx->r1) {
        // 0x80068924: nop
    
            goto L_80068930;
    }
    // 0x80068924: nop

    // 0x80068928: jal         0x8006883C
    // 0x8006892C: nop

    func_8006883C(rdram, ctx);
        goto after_0;
    // 0x8006892C: nop

    after_0:
L_80068930:
    // 0x80068930: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80068934: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80068938: jr          $ra
    // 0x8006893C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006893C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80068940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068940: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80068944: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80068948: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006894C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80068950: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80068954: lw          $s0, -0x480($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X480);
    // 0x80068958: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x8006895C: beq         $at, $zero, L_800689A0
    if (ctx->r1 == 0) {
        // 0x80068960: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_800689A0;
    }
    // 0x80068960: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_80068964:
    // 0x80068964: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x80068968: addu        $t6, $t6, $s1
    ctx->r14 = ADD32(ctx->r14, ctx->r17);
    // 0x8006896C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80068970: addu        $t6, $t6, $s1
    ctx->r14 = ADD32(ctx->r14, ctx->r17);
    // 0x80068974: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80068978: addu        $t6, $t6, $s1
    ctx->r14 = ADD32(ctx->r14, ctx->r17);
    // 0x8006897C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80068980: addu        $a0, $s0, $t6
    ctx->r4 = ADD32(ctx->r16, ctx->r14);
    // 0x80068984: lbu         $a1, 0x291A($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X291A);
    // 0x80068988: jal         0x800683E4
    // 0x8006898C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_800683E4(rdram, ctx);
        goto after_0;
    // 0x8006898C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_0:
    // 0x80068990: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80068994: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80068998: bne         $at, $zero, L_80068964
    if (ctx->r1 != 0) {
        // 0x8006899C: nop
    
            goto L_80068964;
    }
    // 0x8006899C: nop

L_800689A0:
    // 0x800689A0: jal         0x80070D00
    // 0x800689A4: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    func_80070D00(rdram, ctx);
        goto after_1;
    // 0x800689A4: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_1:
    // 0x800689A8: jal         0x80070D30
    // 0x800689AC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    func_80070D30(rdram, ctx);
        goto after_2;
    // 0x800689AC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    after_2:
    // 0x800689B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800689B4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800689B8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800689BC: jr          $ra
    // 0x800689C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800689C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800689C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800689C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800689C8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800689CC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800689D0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800689D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800689D8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800689DC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800689E0: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x800689E4: lbu         $s1, 0x2918($t6)
    ctx->r17 = MEM_BU(ctx->r14, 0X2918);
    // 0x800689E8: beq         $at, $zero, L_80068A70
    if (ctx->r1 == 0) {
        // 0x800689EC: nop
    
            goto L_80068A70;
    }
    // 0x800689EC: nop

L_800689F0:
    // 0x800689F0: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x800689F4: addu        $t8, $t8, $s1
    ctx->r24 = ADD32(ctx->r24, ctx->r17);
    // 0x800689F8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800689FC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80068A00: addu        $t8, $t8, $s1
    ctx->r24 = ADD32(ctx->r24, ctx->r17);
    // 0x80068A04: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80068A08: sll         $t9, $s0, 3
    ctx->r25 = S32(ctx->r16 << 3);
    // 0x80068A0C: sll         $t0, $s0, 3
    ctx->r8 = S32(ctx->r16 << 3);
    // 0x80068A10: subu        $t0, $t0, $s0
    ctx->r8 = SUB32(ctx->r8, ctx->r16);
    // 0x80068A14: subu        $t9, $t9, $s0
    ctx->r25 = SUB32(ctx->r25, ctx->r16);
    // 0x80068A18: addu        $t8, $t8, $s1
    ctx->r24 = ADD32(ctx->r24, ctx->r17);
    // 0x80068A1C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80068A20: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x80068A24: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x80068A28: addu        $a2, $t7, $t0
    ctx->r6 = ADD32(ctx->r15, ctx->r8);
    // 0x80068A2C: addu        $a1, $t7, $t9
    ctx->r5 = ADD32(ctx->r15, ctx->r25);
    // 0x80068A30: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80068A34: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x80068A38: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80068A3C: addiu       $a2, $a2, 0x3A
    ctx->r6 = ADD32(ctx->r6, 0X3A);
    // 0x80068A40: jal         0x800685AC
    // 0x80068A44: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_800685AC(rdram, ctx);
        goto after_0;
    // 0x80068A44: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_0:
    // 0x80068A48: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80068A4C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80068A50: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80068A54: bgez        $s1, L_80068A68
    if (SIGNED(ctx->r17) >= 0) {
        // 0x80068A58: andi        $t1, $s1, 0x3
        ctx->r9 = ctx->r17 & 0X3;
            goto L_80068A68;
    }
    // 0x80068A58: andi        $t1, $s1, 0x3
    ctx->r9 = ctx->r17 & 0X3;
    // 0x80068A5C: beq         $t1, $zero, L_80068A68
    if (ctx->r9 == 0) {
        // 0x80068A60: nop
    
            goto L_80068A68;
    }
    // 0x80068A60: nop

    // 0x80068A64: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
L_80068A68:
    // 0x80068A68: bne         $at, $zero, L_800689F0
    if (ctx->r1 != 0) {
        // 0x80068A6C: or          $s1, $t1, $zero
        ctx->r17 = ctx->r9 | 0;
            goto L_800689F0;
    }
    // 0x80068A6C: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
L_80068A70:
    // 0x80068A70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80068A74: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80068A78: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80068A7C: jr          $ra
    // 0x80068A80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80068A80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80068A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068A84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80068A88: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80068A8C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80068A90: lw          $s0, -0x480($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X480);
    // 0x80068A94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80068A98: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80068A9C: lw          $a0, 0x291C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X291C);
    // 0x80068AA0: jal         0x80071394
    // 0x80068AA4: nop

    func_80071394(rdram, ctx);
        goto after_0;
    // 0x80068AA4: nop

    after_0:
    // 0x80068AA8: lbu         $t6, 0x2918($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2918);
    // 0x80068AAC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80068AB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80068AB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80068AB8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80068ABC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80068AC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80068AC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80068AC8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80068ACC: addu        $a0, $s0, $t7
    ctx->r4 = ADD32(ctx->r16, ctx->r15);
    // 0x80068AD0: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x80068AD4: jal         0x8006832C
    // 0x80068AD8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8006832C(rdram, ctx);
        goto after_1;
    // 0x80068AD8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x80068ADC: lbu         $t8, 0x2918($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2918);
    // 0x80068AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80068AE4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80068AE8: bgez        $t9, L_80068AFC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80068AEC: andi        $t0, $t9, 0x3
        ctx->r8 = ctx->r25 & 0X3;
            goto L_80068AFC;
    }
    // 0x80068AEC: andi        $t0, $t9, 0x3
    ctx->r8 = ctx->r25 & 0X3;
    // 0x80068AF0: beq         $t0, $zero, L_80068AFC
    if (ctx->r8 == 0) {
        // 0x80068AF4: nop
    
            goto L_80068AFC;
    }
    // 0x80068AF4: nop

    // 0x80068AF8: addiu       $t0, $t0, -0x4
    ctx->r8 = ADD32(ctx->r8, -0X4);
L_80068AFC:
    // 0x80068AFC: jal         0x800689C4
    // 0x80068B00: sb          $t0, 0x2918($s0)
    MEM_B(0X2918, ctx->r16) = ctx->r8;
    func_800689C4(rdram, ctx);
        goto after_2;
    // 0x80068B00: sb          $t0, 0x2918($s0)
    MEM_B(0X2918, ctx->r16) = ctx->r8;
    after_2:
    // 0x80068B04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80068B08: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80068B0C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80068B10: jr          $ra
    // 0x80068B14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80068B14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80068B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068B18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80068B1C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80068B20: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80068B24: lw          $s0, -0x480($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X480);
    // 0x80068B28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80068B2C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80068B30: lbu         $t6, 0x2918($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2918);
    // 0x80068B34: nop

    // 0x80068B38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80068B3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80068B40: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80068B44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80068B48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80068B4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80068B50: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80068B54: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x80068B58: lbu         $s1, 0x78($t8)
    ctx->r17 = MEM_BU(ctx->r24, 0X78);
    // 0x80068B5C: jal         0x80068A84
    // 0x80068B60: nop

    func_80068A84(rdram, ctx);
        goto after_0;
    // 0x80068B60: nop

    after_0:
    // 0x80068B64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80068B68: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80068B6C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80068B70: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80068B74: jr          $ra
    // 0x80068B78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80068B78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80068B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068B7C: lbu         $t6, 0x11($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X11);
    // 0x80068B80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80068B84: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80068B88: lw          $a1, -0x480($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X480);
    // 0x80068B8C: addiu       $t7, $sp, 0xC
    ctx->r15 = ADD32(ctx->r29, 0XC);
    // 0x80068B90: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x80068B94: lbu         $t8, 0x10($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X10);
    // 0x80068B98: addiu       $t9, $sp, 0xC
    ctx->r25 = ADD32(ctx->r29, 0XC);
    // 0x80068B9C: addiu       $t0, $sp, 0xC
    ctx->r8 = ADD32(ctx->r29, 0XC);
    // 0x80068BA0: sb          $t8, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r24;
    // 0x80068BA4: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x80068BA8: lbu         $t1, 0x2($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X2);
    // 0x80068BAC: addiu       $t6, $sp, 0x4
    ctx->r14 = ADD32(ctx->r29, 0X4);
    // 0x80068BB0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80068BB4: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x80068BB8: sb          $t4, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r12;
    // 0x80068BBC: lhu         $t5, 0x14($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X14);
    // 0x80068BC0: addiu       $t8, $sp, 0x4
    ctx->r24 = ADD32(ctx->r29, 0X4);
    // 0x80068BC4: sh          $t5, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r13;
    // 0x80068BC8: lhu         $t7, 0x12($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X12);
    // 0x80068BCC: addiu       $t9, $sp, 0x4
    ctx->r25 = ADD32(ctx->r29, 0X4);
    // 0x80068BD0: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
    // 0x80068BD4: lhu         $t2, 0x0($t9)
    ctx->r10 = MEM_HU(ctx->r25, 0X0);
    // 0x80068BD8: lhu         $t1, 0x4($t9)
    ctx->r9 = MEM_HU(ctx->r25, 0X4);
    // 0x80068BDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80068BE0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80068BE4: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x80068BE8: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x80068BEC: sh          $t4, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r12;
    // 0x80068BF0: beq         $at, $zero, L_80068C30
    if (ctx->r1 == 0) {
        // 0x80068BF4: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_80068C30;
    }
    // 0x80068BF4: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
L_80068BF8:
    // 0x80068BF8: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x80068BFC: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x80068C00: sll         $t0, $a2, 3
    ctx->r8 = S32(ctx->r6 << 3);
    // 0x80068C04: subu        $t0, $t0, $a2
    ctx->r8 = SUB32(ctx->r8, ctx->r6);
    // 0x80068C08: lwl         $at, 0x0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X0);
    // 0x80068C0C: lwr         $at, 0x3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X3);
    // 0x80068C10: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x80068C14: addu        $t5, $a1, $t0
    ctx->r13 = ADD32(ctx->r5, ctx->r8);
    // 0x80068C18: swl         $at, 0x0($t5)
    do_swl(rdram, 0X0, ctx->r13, ctx->r1);
    // 0x80068C1C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80068C20: swr         $at, 0x3($t5)
    do_swr(rdram, 0X3, ctx->r13, ctx->r1);
    // 0x80068C24: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x80068C28: bne         $at, $zero, L_80068BF8
    if (ctx->r1 != 0) {
        // 0x80068C2C: nop
    
            goto L_80068BF8;
    }
    // 0x80068C2C: nop

L_80068C30:
    // 0x80068C30: lwl         $at, 0x0($a0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r4, 0X0);
    // 0x80068C34: lwr         $at, 0x3($a0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r4, 0X3);
    // 0x80068C38: addiu       $t8, $sp, 0xC
    ctx->r24 = ADD32(ctx->r29, 0XC);
    // 0x80068C3C: swl         $at, 0x12($a1)
    do_swl(rdram, 0X12, ctx->r5, ctx->r1);
    // 0x80068C40: swr         $at, 0x15($a1)
    do_swr(rdram, 0X15, ctx->r5, ctx->r1);
    // 0x80068C44: lwl         $at, 0x4($a0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r4, 0X4);
    // 0x80068C48: lwr         $at, 0x7($a0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r4, 0X7);
    // 0x80068C4C: addiu       $t7, $sp, 0xC
    ctx->r15 = ADD32(ctx->r29, 0XC);
    // 0x80068C50: swl         $at, 0x20($a1)
    do_swl(rdram, 0X20, ctx->r5, ctx->r1);
    // 0x80068C54: swr         $at, 0x23($a1)
    do_swr(rdram, 0X23, ctx->r5, ctx->r1);
    // 0x80068C58: lwl         $at, 0x8($a0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r4, 0X8);
    // 0x80068C5C: lwr         $at, 0xB($a0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r4, 0XB);
    // 0x80068C60: sb          $zero, 0x32($a1)
    MEM_B(0X32, ctx->r5) = 0;
    // 0x80068C64: swl         $at, 0x2E($a1)
    do_swl(rdram, 0X2E, ctx->r5, ctx->r1);
    // 0x80068C68: swr         $at, 0x31($a1)
    do_swr(rdram, 0X31, ctx->r5, ctx->r1);
    // 0x80068C6C: lbu         $t5, 0x2($t8)
    ctx->r13 = MEM_BU(ctx->r24, 0X2);
    // 0x80068C70: addiu       $t2, $sp, 0xC
    ctx->r10 = ADD32(ctx->r29, 0XC);
    // 0x80068C74: sb          $t5, 0x33($a1)
    MEM_B(0X33, ctx->r5) = ctx->r13;
    // 0x80068C78: lbu         $t1, 0x2($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X2);
    // 0x80068C7C: addiu       $t4, $sp, 0xC
    ctx->r12 = ADD32(ctx->r29, 0XC);
    // 0x80068C80: sb          $t1, 0x24($a1)
    MEM_B(0X24, ctx->r5) = ctx->r9;
    // 0x80068C84: lbu         $t3, 0x1($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X1);
    // 0x80068C88: addiu       $t0, $sp, 0xC
    ctx->r8 = ADD32(ctx->r29, 0XC);
    // 0x80068C8C: sb          $t3, 0x25($a1)
    MEM_B(0X25, ctx->r5) = ctx->r11;
    // 0x80068C90: lbu         $t9, 0x1($t4)
    ctx->r25 = MEM_BU(ctx->r12, 0X1);
    // 0x80068C94: addiu       $t8, $sp, 0xC
    ctx->r24 = ADD32(ctx->r29, 0XC);
    // 0x80068C98: sb          $t9, 0x16($a1)
    MEM_B(0X16, ctx->r5) = ctx->r25;
    // 0x80068C9C: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
    // 0x80068CA0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80068CA4: sb          $t6, 0x17($a1)
    MEM_B(0X17, ctx->r5) = ctx->r14;
    // 0x80068CA8: lbu         $t5, 0x0($t8)
    ctx->r13 = MEM_BU(ctx->r24, 0X0);
    // 0x80068CAC: sb          $t7, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r15;
    // 0x80068CB0: addiu       $t1, $sp, 0x4
    ctx->r9 = ADD32(ctx->r29, 0X4);
    // 0x80068CB4: sb          $t5, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r13;
    // 0x80068CB8: lhu         $t2, 0x4($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X4);
    // 0x80068CBC: addiu       $t3, $sp, 0x4
    ctx->r11 = ADD32(ctx->r29, 0X4);
    // 0x80068CC0: sh          $t2, 0x34($a1)
    MEM_H(0X34, ctx->r5) = ctx->r10;
    // 0x80068CC4: lhu         $t4, 0x4($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X4);
    // 0x80068CC8: addiu       $t9, $sp, 0x4
    ctx->r25 = ADD32(ctx->r29, 0X4);
    // 0x80068CCC: sh          $t4, 0x36($a1)
    MEM_H(0X36, ctx->r5) = ctx->r12;
    // 0x80068CD0: lhu         $t0, 0x4($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X4);
    // 0x80068CD4: addiu       $t6, $sp, 0x4
    ctx->r14 = ADD32(ctx->r29, 0X4);
    // 0x80068CD8: sh          $t0, 0x26($a1)
    MEM_H(0X26, ctx->r5) = ctx->r8;
    // 0x80068CDC: lhu         $t8, 0x2($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X2);
    // 0x80068CE0: addiu       $t5, $sp, 0x4
    ctx->r13 = ADD32(ctx->r29, 0X4);
    // 0x80068CE4: sh          $t8, 0x28($a1)
    MEM_H(0X28, ctx->r5) = ctx->r24;
    // 0x80068CE8: lhu         $t7, 0x2($t5)
    ctx->r15 = MEM_HU(ctx->r13, 0X2);
    // 0x80068CEC: addiu       $t1, $sp, 0x4
    ctx->r9 = ADD32(ctx->r29, 0X4);
    // 0x80068CF0: sh          $t7, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r15;
    // 0x80068CF4: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x80068CF8: addiu       $t3, $sp, 0x4
    ctx->r11 = ADD32(ctx->r29, 0X4);
    // 0x80068CFC: sh          $t2, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r10;
    // 0x80068D00: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
    // 0x80068D04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80068D08: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x80068D0C: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x80068D10: sh          $t9, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r25;
    // 0x80068D14: beq         $at, $zero, L_80068D54
    if (ctx->r1 == 0) {
        // 0x80068D18: sh          $t4, 0xA($a1)
        MEM_H(0XA, ctx->r5) = ctx->r12;
            goto L_80068D54;
    }
    // 0x80068D18: sh          $t4, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r12;
L_80068D1C:
    // 0x80068D1C: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x80068D20: addu        $t5, $a0, $t8
    ctx->r13 = ADD32(ctx->r4, ctx->r24);
    // 0x80068D24: sll         $t0, $a2, 3
    ctx->r8 = S32(ctx->r6 << 3);
    // 0x80068D28: subu        $t0, $t0, $a2
    ctx->r8 = SUB32(ctx->r8, ctx->r6);
    // 0x80068D2C: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x80068D30: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x80068D34: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x80068D38: addu        $t6, $a1, $t0
    ctx->r14 = ADD32(ctx->r5, ctx->r8);
    // 0x80068D3C: swl         $at, 0x38($t6)
    do_swl(rdram, 0X38, ctx->r14, ctx->r1);
    // 0x80068D40: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80068D44: swr         $at, 0x3B($t6)
    do_swr(rdram, 0X3B, ctx->r14, ctx->r1);
    // 0x80068D48: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x80068D4C: bne         $at, $zero, L_80068D1C
    if (ctx->r1 != 0) {
        // 0x80068D50: nop
    
            goto L_80068D1C;
    }
    // 0x80068D50: nop

L_80068D54:
    // 0x80068D54: lwl         $at, 0x8($a0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r4, 0X8);
    // 0x80068D58: lwr         $at, 0xB($a0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r4, 0XB);
    // 0x80068D5C: addiu       $t5, $sp, 0xC
    ctx->r13 = ADD32(ctx->r29, 0XC);
    // 0x80068D60: swl         $at, 0x66($a1)
    do_swl(rdram, 0X66, ctx->r5, ctx->r1);
    // 0x80068D64: swr         $at, 0x69($a1)
    do_swr(rdram, 0X69, ctx->r5, ctx->r1);
    // 0x80068D68: lwl         $at, 0x4($a0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r4, 0X4);
    // 0x80068D6C: lwr         $at, 0x7($a0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r4, 0X7);
    // 0x80068D70: addiu       $t4, $sp, 0xC
    ctx->r12 = ADD32(ctx->r29, 0XC);
    // 0x80068D74: swl         $at, 0x58($a1)
    do_swl(rdram, 0X58, ctx->r5, ctx->r1);
    // 0x80068D78: swr         $at, 0x5B($a1)
    do_swr(rdram, 0X5B, ctx->r5, ctx->r1);
    // 0x80068D7C: lwl         $at, 0x0($a0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r4, 0X0);
    // 0x80068D80: lwr         $at, 0x3($a0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r4, 0X3);
    // 0x80068D84: addiu       $t7, $sp, 0xC
    ctx->r15 = ADD32(ctx->r29, 0XC);
    // 0x80068D88: swl         $at, 0x4A($a1)
    do_swl(rdram, 0X4A, ctx->r5, ctx->r1);
    // 0x80068D8C: swr         $at, 0x4D($a1)
    do_swr(rdram, 0X4D, ctx->r5, ctx->r1);
    // 0x80068D90: lwl         $at, 0x0($a0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r4, 0X0);
    // 0x80068D94: lwr         $at, 0x3($a0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r4, 0X3);
    // 0x80068D98: sb          $zero, 0x6A($a1)
    MEM_B(0X6A, ctx->r5) = 0;
    // 0x80068D9C: swl         $at, 0x3C($a1)
    do_swl(rdram, 0X3C, ctx->r5, ctx->r1);
    // 0x80068DA0: swr         $at, 0x3F($a1)
    do_swr(rdram, 0X3F, ctx->r5, ctx->r1);
    // 0x80068DA4: lbu         $t1, 0x2($t5)
    ctx->r9 = MEM_BU(ctx->r13, 0X2);
    // 0x80068DA8: nop

    // 0x80068DAC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80068DB0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80068DB4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80068DB8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80068DBC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80068DC0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80068DC4: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x80068DC8: sra         $t3, $t2, 8
    ctx->r11 = S32(SIGNED(ctx->r10) >> 8);
    // 0x80068DCC: sb          $t3, 0x6B($a1)
    MEM_B(0X6B, ctx->r5) = ctx->r11;
    // 0x80068DD0: lbu         $t9, 0x2($t4)
    ctx->r25 = MEM_BU(ctx->r12, 0X2);
    // 0x80068DD4: addiu       $t2, $sp, 0xC
    ctx->r10 = ADD32(ctx->r29, 0XC);
    // 0x80068DD8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80068DDC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80068DE0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80068DE4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80068DE8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80068DEC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80068DF0: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x80068DF4: sra         $t8, $t0, 8
    ctx->r24 = S32(SIGNED(ctx->r8) >> 8);
    // 0x80068DF8: sb          $t8, 0x5C($a1)
    MEM_B(0X5C, ctx->r5) = ctx->r24;
    // 0x80068DFC: lbu         $t6, 0x1($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X1);
    // 0x80068E00: addiu       $t0, $sp, 0xC
    ctx->r8 = ADD32(ctx->r29, 0XC);
    // 0x80068E04: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80068E08: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80068E0C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80068E10: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80068E14: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80068E18: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80068E1C: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x80068E20: sra         $t1, $t5, 8
    ctx->r9 = S32(SIGNED(ctx->r13) >> 8);
    // 0x80068E24: sb          $t1, 0x5D($a1)
    MEM_B(0X5D, ctx->r5) = ctx->r9;
    // 0x80068E28: lbu         $t3, 0x1($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X1);
    // 0x80068E2C: addiu       $t5, $sp, 0xC
    ctx->r13 = ADD32(ctx->r29, 0XC);
    // 0x80068E30: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80068E34: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80068E38: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80068E3C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80068E40: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80068E44: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80068E48: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x80068E4C: sra         $t9, $t4, 8
    ctx->r25 = S32(SIGNED(ctx->r12) >> 8);
    // 0x80068E50: sb          $t9, 0x4E($a1)
    MEM_B(0X4E, ctx->r5) = ctx->r25;
    // 0x80068E54: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x80068E58: addiu       $t4, $sp, 0x4
    ctx->r12 = ADD32(ctx->r29, 0X4);
    // 0x80068E5C: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80068E60: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80068E64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80068E68: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80068E6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80068E70: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80068E74: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80068E78: sra         $t6, $t7, 8
    ctx->r14 = S32(SIGNED(ctx->r15) >> 8);
    // 0x80068E7C: sb          $t6, 0x4F($a1)
    MEM_B(0X4F, ctx->r5) = ctx->r14;
    // 0x80068E80: lbu         $t1, 0x0($t5)
    ctx->r9 = MEM_BU(ctx->r13, 0X0);
    // 0x80068E84: sb          $zero, 0x41($a1)
    MEM_B(0X41, ctx->r5) = 0;
    // 0x80068E88: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80068E8C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80068E90: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80068E94: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80068E98: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80068E9C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80068EA0: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x80068EA4: sra         $t3, $t2, 8
    ctx->r11 = S32(SIGNED(ctx->r10) >> 8);
    // 0x80068EA8: sb          $t3, 0x40($a1)
    MEM_B(0X40, ctx->r5) = ctx->r11;
    // 0x80068EAC: lhu         $t9, 0x4($t4)
    ctx->r25 = MEM_HU(ctx->r12, 0X4);
    // 0x80068EB0: addiu       $t0, $sp, 0x4
    ctx->r8 = ADD32(ctx->r29, 0X4);
    // 0x80068EB4: sh          $t9, 0x6C($a1)
    MEM_H(0X6C, ctx->r5) = ctx->r25;
    // 0x80068EB8: lhu         $t8, 0x4($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X4);
    // 0x80068EBC: addiu       $t7, $sp, 0x4
    ctx->r15 = ADD32(ctx->r29, 0X4);
    // 0x80068EC0: sh          $t8, 0x6E($a1)
    MEM_H(0X6E, ctx->r5) = ctx->r24;
    // 0x80068EC4: lhu         $t6, 0x4($t7)
    ctx->r14 = MEM_HU(ctx->r15, 0X4);
    // 0x80068EC8: addiu       $t5, $sp, 0x4
    ctx->r13 = ADD32(ctx->r29, 0X4);
    // 0x80068ECC: sh          $t6, 0x5E($a1)
    MEM_H(0X5E, ctx->r5) = ctx->r14;
    // 0x80068ED0: lhu         $t1, 0x2($t5)
    ctx->r9 = MEM_HU(ctx->r13, 0X2);
    // 0x80068ED4: addiu       $t2, $sp, 0x4
    ctx->r10 = ADD32(ctx->r29, 0X4);
    // 0x80068ED8: sh          $t1, 0x60($a1)
    MEM_H(0X60, ctx->r5) = ctx->r9;
    // 0x80068EDC: lhu         $t3, 0x2($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X2);
    // 0x80068EE0: addiu       $t4, $sp, 0x4
    ctx->r12 = ADD32(ctx->r29, 0X4);
    // 0x80068EE4: sh          $t3, 0x50($a1)
    MEM_H(0X50, ctx->r5) = ctx->r11;
    // 0x80068EE8: lhu         $t9, 0x0($t4)
    ctx->r25 = MEM_HU(ctx->r12, 0X0);
    // 0x80068EEC: addiu       $t0, $sp, 0x4
    ctx->r8 = ADD32(ctx->r29, 0X4);
    // 0x80068EF0: sh          $t9, 0x52($a1)
    MEM_H(0X52, ctx->r5) = ctx->r25;
    // 0x80068EF4: lhu         $t8, 0x0($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X0);
    // 0x80068EF8: addiu       $t7, $sp, 0x4
    ctx->r15 = ADD32(ctx->r29, 0X4);
    // 0x80068EFC: sh          $t8, 0x42($a1)
    MEM_H(0X42, ctx->r5) = ctx->r24;
    // 0x80068F00: lhu         $t6, 0x0($t7)
    ctx->r14 = MEM_HU(ctx->r15, 0X0);
    // 0x80068F04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80068F08: jr          $ra
    // 0x80068F0C: sh          $t6, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r14;
    return;
    // 0x80068F0C: sh          $t6, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_80068F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068F10: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80068F14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80068F18: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80068F1C: lw          $s0, -0x480($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X480);
    // 0x80068F20: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80068F24: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80068F28: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80068F2C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80068F30: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80068F34: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80068F38: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80068F3C: sb          $zero, 0x2918($s0)
    MEM_B(0X2918, ctx->r16) = 0;
    // 0x80068F40: beq         $at, $zero, L_80068FB4
    if (ctx->r1 == 0) {
        // 0x80068F44: sw          $t6, 0x291C($s0)
        MEM_W(0X291C, ctx->r16) = ctx->r14;
            goto L_80068FB4;
    }
    // 0x80068F44: sw          $t6, 0x291C($s0)
    MEM_W(0X291C, ctx->r16) = ctx->r14;
L_80068F48:
    // 0x80068F48: lw          $a0, 0x291C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X291C);
    // 0x80068F4C: jal         0x80071394
    // 0x80068F50: nop

    func_80071394(rdram, ctx);
        goto after_0;
    // 0x80068F50: nop

    after_0:
    // 0x80068F54: lbu         $t7, 0x2918($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X2918);
    // 0x80068F58: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80068F5C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80068F60: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80068F64: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80068F68: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80068F6C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80068F70: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80068F74: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80068F78: addu        $a0, $s0, $t8
    ctx->r4 = ADD32(ctx->r16, ctx->r24);
    // 0x80068F7C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x80068F80: jal         0x8006832C
    // 0x80068F84: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8006832C(rdram, ctx);
        goto after_1;
    // 0x80068F84: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x80068F88: lbu         $t9, 0x2918($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2918);
    // 0x80068F8C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80068F90: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80068F94: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80068F98: bgez        $t0, L_80068FAC
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80068F9C: andi        $t1, $t0, 0x3
        ctx->r9 = ctx->r8 & 0X3;
            goto L_80068FAC;
    }
    // 0x80068F9C: andi        $t1, $t0, 0x3
    ctx->r9 = ctx->r8 & 0X3;
    // 0x80068FA0: beq         $t1, $zero, L_80068FAC
    if (ctx->r9 == 0) {
        // 0x80068FA4: nop
    
            goto L_80068FAC;
    }
    // 0x80068FA4: nop

    // 0x80068FA8: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
L_80068FAC:
    // 0x80068FAC: bne         $at, $zero, L_80068F48
    if (ctx->r1 != 0) {
        // 0x80068FB0: sb          $t1, 0x2918($s0)
        MEM_B(0X2918, ctx->r16) = ctx->r9;
            goto L_80068F48;
    }
    // 0x80068FB0: sb          $t1, 0x2918($s0)
    MEM_B(0X2918, ctx->r16) = ctx->r9;
L_80068FB4:
    // 0x80068FB4: jal         0x800689C4
    // 0x80068FB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800689C4(rdram, ctx);
        goto after_2;
    // 0x80068FB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80068FBC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80068FC0: sb          $t2, 0x291A($s0)
    MEM_B(0X291A, ctx->r16) = ctx->r10;
    // 0x80068FC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80068FC8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80068FCC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80068FD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80068FD4: jr          $ra
    // 0x80068FD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80068FD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80068FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068FDC: jr          $ra
    // 0x80068FE0: nop

    return;
    // 0x80068FE0: nop

    // 0x80068FE4: nop

    // 0x80068FE8: nop

    // 0x80068FEC: nop

;}
RECOMP_FUNC void func_80068FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068FF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80068FF4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80068FF8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80068FFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80069000: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80069004: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80069008: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x8006900C: nop

    // 0x80069010: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x80069014: beq         $at, $zero, L_800690B0
    if (ctx->r1 == 0) {
        // 0x80069018: nop
    
            goto L_800690B0;
    }
    // 0x80069018: nop

    // 0x8006901C: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x80069020: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80069024: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x80069028: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    // 0x8006902C: jal         0x8006D674
    // 0x80069030: nop

    func_8006D674(rdram, ctx);
        goto after_0;
    // 0x80069030: nop

    after_0:
    // 0x80069034: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80069038: nop

    // 0x8006903C: lbu         $t2, 0x5($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X5);
    // 0x80069040: nop

    // 0x80069044: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80069048: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8006904C: lw          $a0, 0x1C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X1C);
    // 0x80069050: jal         0x8006D674
    // 0x80069054: nop

    func_8006D674(rdram, ctx);
        goto after_1;
    // 0x80069054: nop

    after_1:
    // 0x80069058: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8006905C: jal         0x800A35EC
    // 0x80069060: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_800A35EC(rdram, ctx);
        goto after_2;
    // 0x80069060: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_2:
    // 0x80069064: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80069068: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8006906C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80069070: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x80069074: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x80069078: jal         0x8008A5C8
    // 0x8006907C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8008A5C8(rdram, ctx);
        goto after_3;
    // 0x8006907C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x80069080: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80069084: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80069088: lbu         $t7, 0x5($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X5);
    // 0x8006908C: nop

    // 0x80069090: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80069094: sb          $t8, 0x5($t5)
    MEM_B(0X5, ctx->r13) = ctx->r24;
    // 0x80069098: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8006909C: nop

    // 0x800690A0: sb          $t6, 0x3($t9)
    MEM_B(0X3, ctx->r25) = ctx->r14;
    // 0x800690A4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800690A8: b           L_800690D4
    // 0x800690AC: sb          $zero, 0x2($t0)
    MEM_B(0X2, ctx->r8) = 0;
        goto L_800690D4;
    // 0x800690AC: sb          $zero, 0x2($t0)
    MEM_B(0X2, ctx->r8) = 0;
L_800690B0:
    // 0x800690B0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800690B4: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800690B8: sb          $t2, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r10;
    // 0x800690BC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800690C0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800690C4: sb          $t3, 0x3($t4)
    MEM_B(0X3, ctx->r12) = ctx->r11;
    // 0x800690C8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800690CC: nop

    // 0x800690D0: sb          $zero, 0x2($t7)
    MEM_B(0X2, ctx->r15) = 0;
L_800690D4:
    // 0x800690D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800690D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800690DC: jr          $ra
    // 0x800690E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800690E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800690E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800690E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800690E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800690EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800690F0: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x800690F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800690F8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800690FC: beq         $at, $zero, L_8006912C
    if (ctx->r1 == 0) {
        // 0x80069100: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_8006912C;
    }
    // 0x80069100: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
L_80069104:
    // 0x80069104: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80069108: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x8006910C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80069110: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    // 0x80069114: jal         0x8006E288
    // 0x80069118: nop

    func_8006E288(rdram, ctx);
        goto after_0;
    // 0x80069118: nop

    after_0:
    // 0x8006911C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80069120: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x80069124: bne         $at, $zero, L_80069104
    if (ctx->r1 != 0) {
        // 0x80069128: nop
    
            goto L_80069104;
    }
    // 0x80069128: nop

L_8006912C:
    // 0x8006912C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80069130: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80069134: sb          $t9, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r25;
    // 0x80069138: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8006913C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80069140: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    // 0x80069144: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80069148: nop

    // 0x8006914C: sb          $t2, 0x3($t3)
    MEM_B(0X3, ctx->r11) = ctx->r10;
    // 0x80069150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80069154: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80069158: jr          $ra
    // 0x8006915C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006915C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80069160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069160: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80069164: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80069168: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006916C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80069170: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80069174: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80069178: lbu         $t7, 0x4($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4);
    // 0x8006917C: nop

    // 0x80069180: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x80069184: beq         $at, $zero, L_80069198
    if (ctx->r1 == 0) {
        // 0x80069188: nop
    
            goto L_80069198;
    }
    // 0x80069188: nop

    // 0x8006918C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80069190: b           L_800692EC
    // 0x80069194: sb          $t8, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r24;
        goto L_800692EC;
    // 0x80069194: sb          $t8, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r24;
L_80069198:
    // 0x80069198: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8006919C: nop

    // 0x800691A0: sb          $zero, 0x4($t9)
    MEM_B(0X4, ctx->r25) = 0;
    // 0x800691A4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800691A8: nop

    // 0x800691AC: lbu         $t1, 0x5($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X5);
    // 0x800691B0: nop

    // 0x800691B4: slti        $at, $t1, 0x5
    ctx->r1 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
    // 0x800691B8: beq         $at, $zero, L_800692C8
    if (ctx->r1 == 0) {
        // 0x800691BC: nop
    
            goto L_800692C8;
    }
    // 0x800691BC: nop

    // 0x800691C0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x800691C4: jal         0x800A35EC
    // 0x800691C8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_800A35EC(rdram, ctx);
        goto after_0;
    // 0x800691C8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x800691CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800691D0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800691D4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800691D8: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x800691DC: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x800691E0: jal         0x8008A5C8
    // 0x800691E4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8008A5C8(rdram, ctx);
        goto after_1;
    // 0x800691E4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
    // 0x800691E8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800691EC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800691F0: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x800691F4: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x800691F8: jal         0x8008A5C8
    // 0x800691FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8008A5C8(rdram, ctx);
        goto after_2;
    // 0x800691FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80069200: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80069204: nop

    // 0x80069208: lbu         $t3, 0x5($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X5);
    // 0x8006920C: nop

    // 0x80069210: negu        $t4, $t3
    ctx->r12 = SUB32(0, ctx->r11);
    // 0x80069214: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80069218: addu        $t7, $t2, $t5
    ctx->r15 = ADD32(ctx->r10, ctx->r13);
    // 0x8006921C: lw          $a0, 0x18($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18);
    // 0x80069220: jal         0x8006D674
    // 0x80069224: nop

    func_8006D674(rdram, ctx);
        goto after_3;
    // 0x80069224: nop

    after_3:
    // 0x80069228: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8006922C: nop

    // 0x80069230: lbu         $t6, 0x5($t8)
    ctx->r14 = MEM_BU(ctx->r24, 0X5);
    // 0x80069234: nop

    // 0x80069238: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8006923C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80069240: lw          $a0, 0x1C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X1C);
    // 0x80069244: jal         0x8006D674
    // 0x80069248: nop

    func_8006D674(rdram, ctx);
        goto after_4;
    // 0x80069248: nop

    after_4:
    // 0x8006924C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80069250: nop

    // 0x80069254: lbu         $t3, 0x5($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X5);
    // 0x80069258: nop

    // 0x8006925C: negu        $t4, $t3
    ctx->r12 = SUB32(0, ctx->r11);
    // 0x80069260: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80069264: addu        $t5, $t1, $t2
    ctx->r13 = ADD32(ctx->r9, ctx->r10);
    // 0x80069268: lw          $a0, 0x18($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X18);
    // 0x8006926C: jal         0x8006E288
    // 0x80069270: nop

    func_8006E288(rdram, ctx);
        goto after_5;
    // 0x80069270: nop

    after_5:
    // 0x80069274: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80069278: nop

    // 0x8006927C: lbu         $t6, 0x5($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X5);
    // 0x80069280: nop

    // 0x80069284: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80069288: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8006928C: lw          $a0, 0x1C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C);
    // 0x80069290: jal         0x8006E288
    // 0x80069294: nop

    func_8006E288(rdram, ctx);
        goto after_6;
    // 0x80069294: nop

    after_6:
    // 0x80069298: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8006929C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800692A0: lbu         $t3, 0x5($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X5);
    // 0x800692A4: nop

    // 0x800692A8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800692AC: sb          $t4, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r12;
    // 0x800692B0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800692B4: nop

    // 0x800692B8: sb          $t1, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r9;
    // 0x800692BC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800692C0: b           L_800692EC
    // 0x800692C4: sb          $zero, 0x2($t5)
    MEM_B(0X2, ctx->r13) = 0;
        goto L_800692EC;
    // 0x800692C4: sb          $zero, 0x2($t5)
    MEM_B(0X2, ctx->r13) = 0;
L_800692C8:
    // 0x800692C8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800692CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800692D0: sb          $t6, 0x2($t7)
    MEM_B(0X2, ctx->r15) = ctx->r14;
    // 0x800692D4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800692D8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800692DC: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x800692E0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800692E4: nop

    // 0x800692E8: sb          $t9, 0x3($t3)
    MEM_B(0X3, ctx->r11) = ctx->r25;
L_800692EC:
    // 0x800692EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800692F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800692F4: jr          $ra
    // 0x800692F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800692F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800692FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800692FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80069300: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80069304: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80069308: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006930C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80069310: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80069314: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80069318: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x8006931C: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
    // 0x80069320: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80069324: nop

    // 0x80069328: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    // 0x8006932C: jal         0x8006D5BC
    // 0x80069330: nop

    func_8006D5BC(rdram, ctx);
        goto after_0;
    // 0x80069330: nop

    after_0:
    // 0x80069334: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80069338: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x8006933C: beq         $at, $zero, L_80069388
    if (ctx->r1 == 0) {
        // 0x80069340: nop
    
            goto L_80069388;
    }
    // 0x80069340: nop

L_80069344:
    // 0x80069344: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80069348: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x8006934C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80069350: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    // 0x80069354: jal         0x8006D5BC
    // 0x80069358: nop

    func_8006D5BC(rdram, ctx);
        goto after_1;
    // 0x80069358: nop

    after_1:
    // 0x8006935C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80069360: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x80069364: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80069368: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    // 0x8006936C: lw          $a1, 0x8($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X8);
    // 0x80069370: jal         0x8006D450
    // 0x80069374: nop

    func_8006D450(rdram, ctx);
        goto after_2;
    // 0x80069374: nop

    after_2:
    // 0x80069378: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006937C: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x80069380: bne         $at, $zero, L_80069344
    if (ctx->r1 != 0) {
        // 0x80069384: nop
    
            goto L_80069344;
    }
    // 0x80069384: nop

L_80069388:
    // 0x80069388: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8006938C: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x80069390: beq         $at, $zero, L_800693F4
    if (ctx->r1 == 0) {
        // 0x80069394: nop
    
            goto L_800693F4;
    }
    // 0x80069394: nop

L_80069398:
    // 0x80069398: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8006939C: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x800693A0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800693A4: lw          $s0, 0x8($t7)
    ctx->r16 = MEM_W(ctx->r15, 0X8);
    // 0x800693A8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x800693AC: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x800693B0: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x800693B4: lh          $t9, 0x48($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X48);
    // 0x800693B8: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x800693BC: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x800693C0: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x800693C4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800693C8: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x800693CC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x800693D0: mflo        $t3
    ctx->r11 = lo;
    // 0x800693D4: sh          $t3, 0x4A($t4)
    MEM_H(0X4A, ctx->r12) = ctx->r11;
    // 0x800693D8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x800693DC: jal         0x80070860
    // 0x800693E0: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_80070860(rdram, ctx);
        goto after_3;
    // 0x800693E0: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_3:
    // 0x800693E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800693E8: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x800693EC: bne         $at, $zero, L_80069398
    if (ctx->r1 != 0) {
        // 0x800693F0: nop
    
            goto L_80069398;
    }
    // 0x800693F0: nop

L_800693F4:
    // 0x800693F4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800693F8: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x800693FC: sb          $t2, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r10;
    // 0x80069400: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80069404: nop

    // 0x80069408: sb          $zero, 0x3($t6)
    MEM_B(0X3, ctx->r14) = 0;
    // 0x8006940C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80069410: nop

    // 0x80069414: sb          $zero, 0x2($t7)
    MEM_B(0X2, ctx->r15) = 0;
    // 0x80069418: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006941C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80069420: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80069424: jr          $ra
    // 0x80069428: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80069428: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006942C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006942C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80069430: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80069434: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80069438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006943C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80069440: lbu         $t7, 0x4($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4);
    // 0x80069444: nop

    // 0x80069448: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8006944C: sb          $t8, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r24;
    // 0x80069450: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80069454: nop

    // 0x80069458: lbu         $t0, 0x4($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X4);
    // 0x8006945C: nop

    // 0x80069460: bne         $t0, $zero, L_80069488
    if (ctx->r8 != 0) {
        // 0x80069464: nop
    
            goto L_80069488;
    }
    // 0x80069464: nop

    // 0x80069468: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x8006946C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80069470: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80069474: sb          $t1, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r9;
    // 0x80069478: addiu       $a1, $a1, 0x3A90
    ctx->r5 = ADD32(ctx->r5, 0X3A90);
    // 0x8006947C: addiu       $a0, $a0, 0x35B0
    ctx->r4 = ADD32(ctx->r4, 0X35B0);
    // 0x80069480: jal         0x8008A5C8
    // 0x80069484: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_8008A5C8(rdram, ctx);
        goto after_0;
    // 0x80069484: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
L_80069488:
    // 0x80069488: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8006948C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80069490: sb          $t2, 0x3($t3)
    MEM_B(0X3, ctx->r11) = ctx->r10;
    // 0x80069494: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80069498: nop

    // 0x8006949C: sb          $zero, 0x2($t4)
    MEM_B(0X2, ctx->r12) = 0;
    // 0x800694A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800694A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800694A8: jr          $ra
    // 0x800694AC: nop

    return;
    // 0x800694AC: nop

;}
RECOMP_FUNC void func_800694B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800694B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800694B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800694B8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800694BC: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x800694C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800694C4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800694C8: beq         $at, $zero, L_800694F8
    if (ctx->r1 == 0) {
        // 0x800694CC: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_800694F8;
    }
    // 0x800694CC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
L_800694D0:
    // 0x800694D0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800694D4: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x800694D8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800694DC: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    // 0x800694E0: jal         0x8006E288
    // 0x800694E4: nop

    func_8006E288(rdram, ctx);
        goto after_0;
    // 0x800694E4: nop

    after_0:
    // 0x800694E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800694EC: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x800694F0: bne         $at, $zero, L_800694D0
    if (ctx->r1 != 0) {
        // 0x800694F4: nop
    
            goto L_800694D0;
    }
    // 0x800694F4: nop

L_800694F8:
    // 0x800694F8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800694FC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80069500: sb          $t9, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r25;
    // 0x80069504: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80069508: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8006950C: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    // 0x80069510: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80069514: nop

    // 0x80069518: sb          $t2, 0x3($t3)
    MEM_B(0X3, ctx->r11) = ctx->r10;
    // 0x8006951C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80069520: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80069524: jr          $ra
    // 0x80069528: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80069528: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006952C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006952C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80069530: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80069534: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80069538: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
L_8006953C:
    // 0x8006953C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80069540: nop

    // 0x80069544: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80069548: nop

    // 0x8006954C: sltiu       $at, $t7, 0x8
    ctx->r1 = ctx->r15 < 0X8 ? 1 : 0;
    // 0x80069550: beq         $at, $zero, L_80069628
    if (ctx->r1 == 0) {
        // 0x80069554: nop
    
            goto L_80069628;
    }
    // 0x80069554: nop

    // 0x80069558: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006955C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80069560: addu        $at, $at, $t7
    gpr jr_addend_8006956C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80069564: lw          $t7, -0x29FC($at)
    ctx->r15 = ADD32(ctx->r1, -0X29FC);
    // 0x80069568: nop

    // 0x8006956C: jr          $t7
    // 0x80069570: nop

    switch (jr_addend_8006956C >> 2) {
        case 0: goto L_80069574; break;
        case 1: goto L_80069574; break;
        case 2: goto L_80069598; break;
        case 3: goto L_800695B0; break;
        case 4: goto L_800695C8; break;
        case 5: goto L_800695E0; break;
        case 6: goto L_800695F8; break;
        case 7: goto L_80069610; break;
        default: switch_error(__func__, 0x8006956C, 0x800DD604);
    }
    // 0x80069570: nop

L_80069574:
    // 0x80069574: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80069578: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8006957C: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x80069580: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80069584: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80069588: sb          $t9, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r25;
    // 0x8006958C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80069590: b           L_8006963C
    // 0x80069594: sb          $t1, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r9;
        goto L_8006963C;
    // 0x80069594: sb          $t1, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r9;
L_80069598:
    // 0x80069598: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006959C: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x800695A0: jal         0x80068FF0
    // 0x800695A4: nop

    func_80068FF0(rdram, ctx);
        goto after_0;
    // 0x800695A4: nop

    after_0:
    // 0x800695A8: b           L_8006963C
    // 0x800695AC: nop

        goto L_8006963C;
    // 0x800695AC: nop

L_800695B0:
    // 0x800695B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800695B4: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x800695B8: jal         0x800690E4
    // 0x800695BC: nop

    func_800690E4(rdram, ctx);
        goto after_1;
    // 0x800695BC: nop

    after_1:
    // 0x800695C0: b           L_8006963C
    // 0x800695C4: nop

        goto L_8006963C;
    // 0x800695C4: nop

L_800695C8:
    // 0x800695C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800695CC: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x800695D0: jal         0x80069160
    // 0x800695D4: nop

    func_80069160(rdram, ctx);
        goto after_2;
    // 0x800695D4: nop

    after_2:
    // 0x800695D8: b           L_8006963C
    // 0x800695DC: nop

        goto L_8006963C;
    // 0x800695DC: nop

L_800695E0:
    // 0x800695E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800695E4: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x800695E8: jal         0x800692FC
    // 0x800695EC: nop

    func_800692FC(rdram, ctx);
        goto after_3;
    // 0x800695EC: nop

    after_3:
    // 0x800695F0: b           L_8006963C
    // 0x800695F4: nop

        goto L_8006963C;
    // 0x800695F4: nop

L_800695F8:
    // 0x800695F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800695FC: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x80069600: jal         0x8006942C
    // 0x80069604: nop

    func_8006942C(rdram, ctx);
        goto after_4;
    // 0x80069604: nop

    after_4:
    // 0x80069608: b           L_8006963C
    // 0x8006960C: nop

        goto L_8006963C;
    // 0x8006960C: nop

L_80069610:
    // 0x80069610: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80069614: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x80069618: jal         0x800694B0
    // 0x8006961C: nop

    func_800694B0(rdram, ctx);
        goto after_5;
    // 0x8006961C: nop

    after_5:
    // 0x80069620: b           L_8006963C
    // 0x80069624: nop

        goto L_8006963C;
    // 0x80069624: nop

L_80069628:
    // 0x80069628: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006962C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80069630: addiu       $a1, $a1, -0x2A50
    ctx->r5 = ADD32(ctx->r5, -0X2A50);
    // 0x80069634: jal         0x80083560
    // 0x80069638: addiu       $a0, $a0, -0x2A60
    ctx->r4 = ADD32(ctx->r4, -0X2A60);
    Fault_Assert(rdram, ctx);
        goto after_6;
    // 0x80069638: addiu       $a0, $a0, -0x2A60
    ctx->r4 = ADD32(ctx->r4, -0X2A60);
    after_6:
L_8006963C:
    // 0x8006963C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80069640: nop

    // 0x80069644: lbu         $t4, 0x3($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X3);
    // 0x80069648: nop

    // 0x8006964C: beq         $t4, $zero, L_8006953C
    if (ctx->r12 == 0) {
        // 0x80069650: nop
    
            goto L_8006953C;
    }
    // 0x80069650: nop

    // 0x80069654: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80069658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006965C: lbu         $v0, 0x2($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X2);
    // 0x80069660: jr          $ra
    // 0x80069664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80069664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80069668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069668: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8006966C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80069670: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    // 0x80069674: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80069678: sb          $t6, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r14;
    // 0x8006967C: jr          $ra
    // 0x80069680: sb          $t7, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r15;
    return;
    // 0x80069680: sb          $t7, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_80069684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069684: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80069688: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006968C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80069690: sb          $t6, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r14;
    // 0x80069694: jr          $ra
    // 0x80069698: sb          $t7, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r15;
    return;
    // 0x80069698: sb          $t7, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8006969C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006969C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800696A0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800696A4: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x800696A8: sb          $zero, 0x2($a0)
    MEM_B(0X2, ctx->r4) = 0;
    // 0x800696AC: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x800696B0: jr          $ra
    // 0x800696B4: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
    return;
    // 0x800696B4: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
;}
RECOMP_FUNC void func_800696B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800696B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800696BC: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800696C0: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x800696C4: sb          $zero, 0x2($a0)
    MEM_B(0X2, ctx->r4) = 0;
    // 0x800696C8: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x800696CC: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
    // 0x800696D0: jr          $ra
    // 0x800696D4: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    return;
    // 0x800696D4: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
;}
RECOMP_FUNC void func_800696D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800696D8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800696DC: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x800696E0: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x800696E4: sb          $zero, 0x2($a0)
    MEM_B(0X2, ctx->r4) = 0;
    // 0x800696E8: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x800696EC: jr          $ra
    // 0x800696F0: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    return;
    // 0x800696F0: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
;}
